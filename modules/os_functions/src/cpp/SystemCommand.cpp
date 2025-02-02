//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#include <winsock2.h>
#include <Windows.h>
#undef min
#else
#include <fcntl.h>
#endif
#include <BS_thread_pool.hpp>
#include <ctime>
#include <thread>
#include <chrono>
#include <algorithm>
#include <cstdio>
#include <boost/asio.hpp>
#include <boost/process.hpp>
#include <boost/process/shell.hpp>
#include <boost/filesystem.hpp>
#include "nlsConfig.h"
#include "SystemCommand.hpp"
#include "characters_encoding.hpp"
#include "dynamic_library.hpp"
#include "NelsonConfiguration.hpp"
//=============================================================================
namespace Nelson {
//=============================================================================
static library_handle nlsGuiHandleDynamicLibrary = nullptr;
static bool bFirstDynamicLibraryCall = true;
//=============================================================================
static void
ProcessEventsDynamicFunction();
//=============================================================================
static void
deleteFile(boost::filesystem::path p);
//=============================================================================
static std::wstring
CleanCommand(const std::wstring& command);
//=============================================================================
static std::wstring
DetectDetachProcess(const std::wstring& command, bool& haveDetach);
//=============================================================================
static void
initGuiDynamicLibrary();
//=============================================================================
static std::wstring
readFile(const boost::filesystem::path& filePath);
//=============================================================================
class systemTask
{
public:
    //=============================================================================
    void
    terminate()
    {
        _terminate = true;
        _running = false;
    }
    //=============================================================================
    bool
    isRunning()
    {
        return _running;
    }
    //=============================================================================
    std::tuple<int, std::wstring, uint64>
    getResult()
    {
        if (wasAborted) {
            return std::make_tuple(_exitCode, L"ABORTED", _duration);
        }
        return std::make_tuple(_exitCode, _message, _duration);
    };
    //=============================================================================
    uint64
    getDuration()
    {
        if (_running) {
            std::chrono::steady_clock::time_point _currentTimePoint
                = std::chrono::steady_clock::now();
            return std::chrono::duration_cast<std::chrono::milliseconds>(
                _currentTimePoint - _beginTimePoint)
                .count();
        }
        return std::chrono::duration_cast<std::chrono::milliseconds>(
            _endTimePoint - _beginTimePoint)
            .count();
    }
    //=============================================================================
    void
    evaluateCommand(const std::wstring& command, uint64 timeout)
    {
        _beginTimePoint = std::chrono::steady_clock::now();

        _terminate = false;
        _running = true;
        boost::filesystem::path pwd = boost::filesystem::temp_directory_path();
        boost::filesystem::path tempOutputFile = pwd;
        boost::filesystem::path tempErrorFile = pwd;
        tempOutputFile /= boost::filesystem::unique_path();
        tempErrorFile /= boost::filesystem::unique_path();
        bool mustDetach = false;
        std::wstring _command = DetectDetachProcess(command, mustDetach);
        std::wstring argsShell;
#ifdef _MSC_VER
        argsShell = L" /a /c ";
#else
        argsShell = L" -c ";
#endif
        std::wstring cmd = L"\"" + boost::process::shell().wstring() + L"\" " + argsShell + L"\""
            + _command + L"\"";
        if (mustDetach) {
            boost::process::child childProcess(cmd);
            childProcess.detach();
            _exitCode = 0;
        } else {
            boost::process::child childProcess(cmd,
                boost::process::std_out > tempOutputFile.generic_string().c_str(),
                boost::process::std_err > tempErrorFile.generic_string().c_str(),
                boost::process::std_in < boost::process::null);
            while (childProcess.running()) {
                std::chrono::steady_clock::time_point _currentTimePoint
                    = std::chrono::steady_clock::now();
                if ((timeout != 0)
                    && (std::chrono::duration_cast<std::chrono::seconds>(
                            _currentTimePoint - _beginTimePoint)
                            .count()
                        >= (long long)timeout)) {
                    _terminate = true;
                }
                if (_terminate) {
                    wasAborted = true;
                    _endTimePoint = std::chrono::steady_clock::now();
                    this->_duration = this->getDuration();
                    this->_exitCode = int(SIGINT + 128);
                    deleteFile(tempOutputFile);
                    deleteFile(tempErrorFile);
                    childProcess.terminate();
                    _running = false;
                    return;
                } else {
                    std::this_thread::sleep_for(std::chrono::milliseconds(10));
                }
            }
            this->_exitCode = (int)childProcess.exit_code();

            std::wstring outputResult;
            if (this->_exitCode) {
                outputResult = readFile(tempErrorFile);
                if (outputResult.empty()) {
                    outputResult = readFile(tempOutputFile);
                }
            } else {
                outputResult = readFile(tempOutputFile);
            }
            _message = outputResult.c_str();
        }
        deleteFile(tempOutputFile);
        deleteFile(tempErrorFile);

        _running = false;
        _endTimePoint = std::chrono::steady_clock::now();
        _duration = this->getDuration();
    }
    //=============================================================================
private:
    //=============================================================================
    std::atomic<bool> _running = false;
    std::atomic<bool> _terminate = false;
    int _exitCode = 0;
    std::wstring _message = std::wstring();
    uint64 _duration = uint64(0);
    bool wasAborted = false;
    std::chrono::steady_clock::time_point _beginTimePoint;
    std::chrono::steady_clock::time_point _endTimePoint;
    //=============================================================================
};
//=============================================================================
std::tuple<int, std::wstring, uint64>
SystemCommand(const std::wstring& command, uint64 timeout, bool withEventsLoop, size_t evaluatorID)
{
    std::vector<std::tuple<int, std::wstring, uint64>> results;
    wstringVector commands;
    commands.push_back(command);
    std::vector<uint64> timeouts;
    timeouts.push_back(timeout);

    results = ParallelSystemCommand(commands, timeouts, withEventsLoop, evaluatorID);
    if (results.size() != 1) {
        Error(_W("system does not return result."));
    }
    return results[0];
}
//=============================================================================
std::vector<std::tuple<int, std::wstring, uint64>>
ParallelSystemCommand(const wstringVector& commands, const std::vector<uint64>& timeouts,
    bool withEventsLoop, size_t evaluatorID)
{
    std::vector<std::tuple<int, std::wstring, uint64>> results;
    size_t nbCommands = commands.size();
    results.resize(nbCommands);
    size_t nbThreadsMax = (size_t)NelsonConfiguration::getInstance()->getMaxNumCompThreads();
    size_t nbThreads = std::min(nbCommands, nbThreadsMax);

    std::vector<systemTask*> taskList;
    BS::thread_pool pool((BS::concurrency_t)nbThreads);
    for (size_t k = 0; k < nbCommands; k++) {
        try {
            systemTask* task = new systemTask();
            taskList.push_back(task);
            pool.push_task(&systemTask::evaluateCommand, task, commands[k], timeouts[k]);
        } catch (std::bad_alloc&) {
            Error(ERROR_MEMORY_ALLOCATION);
        }
    }
    do {
        if (NelsonConfiguration::getInstance()->getInterruptPending(evaluatorID)) {
            for (size_t k = 0; k < nbCommands; k++) {
                taskList[k]->terminate();
            }
            break;
        }
        if (withEventsLoop) {
            ProcessEventsDynamicFunction();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(uint64(1)));
    } while (pool.get_tasks_total());

    for (size_t k = 0; k < nbCommands; k++) {
        if (taskList[k]) {
            results[k] = taskList[k]->getResult();
            taskList[k]->terminate();
        }
    }
    for (systemTask* task : taskList) {
        if (task) {
            delete task;
            task = nullptr;
        }
    }
    taskList.clear();
    pool.reset((BS::concurrency_t)nbThreads);
    return results;
}
//=============================================================================
std::wstring
DetectDetachProcess(const std::wstring& command, bool& haveDetach)
{
    std::wstring _command = CleanCommand(command);
    if (_command.empty()) {
        haveDetach = true;
    } else {
        if (*_command.rbegin() == L'&') {
            _command.pop_back();
            _command = CleanCommand(_command);
            haveDetach = true;
        } else {
            haveDetach = false;
        }
    }
    if (haveDetach) {
#ifdef _MSC_VER
        _command = L"start " + _command;
#else
        _command = _command + L" &";
#endif
    }
    return _command;
}
//=============================================================================
std::wstring
CleanCommand(const std::wstring& command)
{
    std::wstring res = boost::algorithm::trim_left_copy(command);
    return boost::algorithm::trim_right_copy(command);
}
//=============================================================================
static void
initGuiDynamicLibrary()
{
    if (bFirstDynamicLibraryCall) {
        std::string fullpathGuiSharedLibrary
            = "libnlsGui" + Nelson::get_dynamic_library_extension();
#ifdef _MSC_VER
        char* buf;
        try {
            buf = new char[MAX_PATH];
        } catch (const std::bad_alloc&) {
            buf = nullptr;
        }
        if (buf != nullptr) {
            DWORD dwRet = ::GetEnvironmentVariableA("NELSON_BINARY_PATH", buf, MAX_PATH);
            if (dwRet != 0U) {
                fullpathGuiSharedLibrary
                    = std::string(buf) + std::string("/") + fullpathGuiSharedLibrary;
            }
            delete[] buf;
        }
#else
        char const* tmp = getenv("NELSON_BINARY_PATH");
        if (tmp != nullptr) {
            fullpathGuiSharedLibrary
                = std::string(tmp) + std::string("/") + fullpathGuiSharedLibrary;
        }
#endif
        nlsGuiHandleDynamicLibrary = Nelson::load_dynamic_library(fullpathGuiSharedLibrary);
        if (nlsGuiHandleDynamicLibrary != nullptr) {
            bFirstDynamicLibraryCall = false;
        }
    }
}
//=============================================================================
static void
ProcessEventsDynamicFunction(bool bWait)
{
    using PROC_ProcessEvents = void (*)(bool);
    static PROC_ProcessEvents ProcessEventsPtr = nullptr;
    initGuiDynamicLibrary();
    if (ProcessEventsPtr == nullptr) {
        ProcessEventsPtr = reinterpret_cast<PROC_ProcessEvents>(
            Nelson::get_function(nlsGuiHandleDynamicLibrary, "NelSonProcessEvents"));
    }
    if (ProcessEventsPtr != nullptr) {
        ProcessEventsPtr(bWait);
    }
}
//=============================================================================
void
ProcessEventsDynamicFunction()
{
    ProcessEventsDynamicFunction(false);
}
//=============================================================================
void
deleteFile(boost::filesystem::path p)
{
    if (boost::filesystem::exists(p)) {

#ifdef _MSC_VER
        int res = _wremove(p.generic_wstring().c_str());
#else
        int res = remove(p.generic_string().c_str());
#endif
    }
}
//=============================================================================
std::wstring
readFile(const boost::filesystem::path& filePath)
{
    std::string result;
    FILE* pFile;
#ifdef _MSC_VER
    pFile = _wfopen(filePath.wstring().c_str(), L"r");
#else
    pFile = fopen(filePath.string().c_str(), "r");
#endif
    if (pFile != nullptr) {
#define bufferSize 4096
#define bufferSizeMax 4096 * 2
        char buffer[bufferSize];
        result.reserve(bufferSizeMax);
        while (fgets(buffer, sizeof(buffer), pFile)) {
#ifdef _MSC_VER
            std::string str = std::string(buffer);
            boost::replace_all(str, "\r\n", "\n");
            OemToCharBuffA(str.c_str(), const_cast<char*>(str.c_str()), (DWORD)str.size());
            result.append(str);
#else
            result.append(buffer);
#endif
        }
        if (result.size() > 0) {
            if (*result.rbegin() != '\n') {
                result.append("\n");
            }
        }
        fclose(pFile);
    }
    return utf8_to_wstring(result);
}
//=============================================================================
} // namespace Nelson
//=============================================================================
