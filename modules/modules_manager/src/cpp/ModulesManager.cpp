//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include <unordered_map>
#include <map>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <semver.h>
#include <fstream>
#include "ModulesManager.hpp"
#include "Nelson_VERSION.h"
#include "characters_encoding.hpp"
#include "Warning.hpp"
//=============================================================================
namespace Nelson {
//=============================================================================
ModulesManager ModulesManager::m_pInstance = ModulesManager();
//=============================================================================
ModulesManager&
ModulesManager::Instance()
{
    return m_pInstance;
}
//=============================================================================
ModulesManager::ModulesManager()
{
#define MODULETAB 128
    modulesMap.reserve(MODULETAB);
} //=============================================================================
size_t
ModulesManager::getNumberOfModules()
{
    return modulesMap.size();
}
//=============================================================================
wstringVector
ModulesManager::getModulesPathList(bool bReverse)
{
    wstringVector retlist;
    if (bReverse) {
        if (!modulesMap.empty()) {
            for (int64 i = (int64)modulesMap.size() - 1; i >= 0; i--) {
                mapElement elem = modulesMap[i];
                retlist.push_back(std::get<1>(elem));
            }
        }
    } else {
        for (auto elem : modulesMap) {
            retlist.push_back(std::get<1>(elem));
        }
    }
    return retlist;
}
//=============================================================================
wstringVector
ModulesManager::getModulesList(bool bReverse)
{
    wstringVector retlist;
    if (bReverse) {
        if (!modulesMap.empty()) {
            for (int64 i = (int64)modulesMap.size() - 1; i >= 0; i--) {
                mapElement elem = modulesMap[i];
                retlist.push_back(std::get<0>(elem));
            }
        }
    } else {
        for (auto elem : modulesMap) {
            retlist.push_back(std::get<0>(elem));
        }
    }
    return retlist;
}
//=============================================================================
std::vector<bool>
ModulesManager::getModulesProtectedList(bool bReverse)
{
    std::vector<bool> retlist;
    if (bReverse) {
        if (!modulesMap.empty()) {
            for (int64 i = (int64)modulesMap.size() - 1; i >= 0; i--) {
                mapElement elem = modulesMap[i];
                retlist.push_back(std::get<2>(elem));
            }
        }
    } else {
        for (auto elem : modulesMap) {
            retlist.push_back(std::get<2>(elem));
        }
    }
    return retlist;
}
//=============================================================================
static std::ifstream&
safegetline(std::ifstream& os, std::string& line)
{
    std::string myline;
    if (getline(os, myline)) {
        if (!myline.empty() && myline[myline.size() - 1] == '\r') {
            line = myline.substr(0, myline.size() - 1);
        } else {
            line = myline;
        }
    }
    return os;
}
//=============================================================================
versionElement
ModulesManager::readVersionFromJson(const std::wstring& path)
{
    std::vector<double> version;
    std::wstring moduleJsonFilename;
    if (boost::algorithm::ends_with(path, L"\\") || boost::algorithm::ends_with(path, L"/")) {
        moduleJsonFilename = path + L"module.json";
    } else {
        moduleJsonFilename = path + L"/module.json";
    }
    std::string jsonString;
#ifdef _MSC_VER
    std::ifstream jsonFile(moduleJsonFilename);
#else
    std::ifstream jsonFile(wstring_to_utf8(moduleJsonFilename));
#endif
    if (jsonFile.is_open()) {
        std::string tmpline;
        while (safegetline(jsonFile, tmpline)) {
            jsonString += tmpline + '\n';
        }
        jsonFile.close();
        boost::property_tree::ptree root;
        std::istringstream is(jsonString);
        try {
            boost::property_tree::read_json(is, root);
            std::string versionString = root.get<std::string>("version");
            semver_t semVersion = {};
            if (semver_parse(versionString.c_str(), &semVersion) != 0) {
                version.clear();
            } else {
                semver_free(&semVersion);
                version.push_back(semVersion.major);
                version.push_back(semVersion.minor);
                version.push_back(semVersion.patch);
            }

        } catch (const boost::property_tree::json_parser::json_parser_error&) {
            version.clear();
        }
    }
    if (version.size() == 3) {
        return std::make_tuple(version[0], version[1], version[2]);
    }
    Warning(L"module_manager:modulejson", _W("Please check: ") + moduleJsonFilename);

    return std::make_tuple(std::nan("NaN"), std::nan("NaN"), std::nan("NaN"));
}
//=============================================================================
std::vector<versionElement>
ModulesManager::getModulesVersionList(bool bReverse)
{
    std::vector<versionElement> retlist;
    if (bReverse) {
        if (!modulesMap.empty()) {
            for (int64 i = (int64)modulesMap.size() - 1; i >= 0; i--) {
                mapElement elem = modulesMap[i];
                retlist.push_back(std::get<3>(elem));
            }
        }
    } else {
        for (auto elem : modulesMap) {
            retlist.push_back(std::get<3>(elem));
        }
    }
    return retlist;
}
//=============================================================================
void
ModulesManager::insertModule(
    const std::wstring& modulename, const std::wstring& path, bool protectedModule)
{
    versionElement version;
    if (protectedModule) {
        version = std::make_tuple((double)NELSON_VERSION_MAJOR, (double)NELSON_VERSION_MINOR,
            (double)NELSON_VERSION_MAINTENANCE);
    } else {
        version = readVersionFromJson(path);
    }
    modulesMap.emplace_back(modulename, path, protectedModule, version);
}
//=============================================================================
void
ModulesManager::deleteAllModules()
{
    modulesMap.clear();
}
//=============================================================================
bool
ModulesManager::deleteModule(const std::wstring& modulename)
{
    for (auto it = modulesMap.begin(); it != modulesMap.end(); ++it) {
        if (std::get<0>(*it) == modulename) {
            modulesMap.erase(it);
            return true;
        }
    }
    return false;
}
//=============================================================================
bool
ModulesManager::findModule(const std::wstring& modulename, std::wstring& path)
{
    for (auto& it : modulesMap) {
        if (std::get<0>(it) == modulename) {
            path = std::get<1>(it);
            return true;
        }
    }
    return false;
}
//=============================================================================
std::wstring
ModulesManager::findModuleNameByPath(const std::wstring& filename)
{
    if (!modulesMap.empty()) {
        for (int64 i = (int64)modulesMap.size() - 1; i >= 0; i--) {
            mapElement elem = modulesMap[i];
            if (boost::algorithm::starts_with(filename, std::get<1>(elem))) {
                return std::get<0>(elem);
            }
        }
    }
    return std::wstring();
}
//=============================================================================
bool
ModulesManager::isProtectedModule(const std::wstring& modulename)
{
    if (!modulesMap.empty()) {
        for (int64 i = (int64)modulesMap.size() - 1; i >= 0; i--) {
            mapElement elem = modulesMap[i];
            if (std::get<0>(elem) == modulename) {
                return std::get<2>(elem);
            }
        }
    }
    return false;
}
//=============================================================================
bool
RegisterModule(
    const std::wstring& moduleshortname, const std::wstring& modulerootpath, bool protectedModule)
{
    ModulesManager::Instance().insertModule(moduleshortname, modulerootpath, protectedModule);
    return true;
}
//=============================================================================
bool
UnregisterModule(const std::wstring& moduleshortname)
{
    return ModulesManager::Instance().deleteModule(moduleshortname);
}
//=============================================================================
bool
IsExistingModuleName(const std::wstring& moduleshortname)
{
    std::wstring modulerootpath;
    return ModulesManager::Instance().findModule(moduleshortname, modulerootpath);
}
//=============================================================================
bool
IsExistingModulePath(const std::wstring& modulerootpath)
{
    return ModulesManager::Instance().findModuleNameByPath(modulerootpath) != L"";
}
//=============================================================================
bool
IsProtectedModuleName(const std::wstring& moduleshortname)
{
    return ModulesManager::Instance().isProtectedModule(moduleshortname);
}
//=============================================================================
boost::container::vector<module>
GetModules(bool bReverse)
{
    wstringVector listPaths = GetModulesPath(bReverse);
    wstringVector listNames = GetModulesName(bReverse);
    std::vector<bool> listProtected = GetModulesProtected(bReverse);
    boost::container::vector<module> modules;
    modules.reserve(listNames.size());
    for (size_t k = 0; k < listNames.size(); k++) {
        module m;
        m.modulename = listNames[k];
        m.modulepath = listPaths[k];
        m.isprotected = listProtected[k];
        modules.push_back(m);
    }
    return modules;
}
//=============================================================================
wstringVector
GetModulesName(bool bReverse)
{
    return ModulesManager::Instance().getModulesList(bReverse);
}
//=============================================================================
wstringVector
GetModulesPath(bool bReverse)
{
    return ModulesManager::Instance().getModulesPathList(bReverse);
}
//=============================================================================
std::vector<bool>
GetModulesProtected(bool bReverse)
{
    return ModulesManager::Instance().getModulesProtectedList(bReverse);
}
//=============================================================================
std::vector<versionElement>
GetModulesVersion(bool bReverse)
{
    return ModulesManager::Instance().getModulesVersionList(bReverse);
}
//=============================================================================
std::wstring
GetModulePath(const std::wstring& moduleshortname)
{
    std::wstring res;
    ModulesManager::Instance().findModule(moduleshortname, res);
    return res;
}
//=============================================================================
} // namespace Nelson
//=============================================================================
