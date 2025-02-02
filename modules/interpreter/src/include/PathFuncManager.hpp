//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#pragma once
//=============================================================================
#include <boost/container/vector.hpp>
#include "FunctionDef.hpp"
#include "PathFunc.hpp"
#include "FileFunction.hpp"
#include "MacroFunctionDef.hpp"
#include "MexFunctionDef.hpp"
#include "nlsInterpreter_exports.h"
//=============================================================================
namespace Nelson {
class NLSINTERPRETER_IMPEXP PathFuncManager
{
private:
    boost::container::vector<PathFunc*> _pathFuncVector;
    PathFuncManager();
    ~PathFuncManager();
    static PathFuncManager* m_pInstance;
    PathFunc* _userPath;
    PathFunc* _currentPath;

    MexFunctionDef*
    processMexFile(const std::wstring& filename, const std::wstring& functionName);

    MacroFunctionDef*
    processMacroFile(const std::wstring& script_filename, bool withWatcher);

    FunctionDef*
    processFile(FileFunction* ff, const std::string& functionName);

    FunctionDef*
    findAndProcessFile(const std::string& name);

    void
    userpathCompute();
    std::wstring
    getPreferencesPath();
    std::wstring
    loadUserPathFromFile();
    bool
    saveUserPathToFile();
    bool
    isFile(const std::wstring& filename);
    bool
    isDir(const std::wstring& pathname);

public:
    static PathFuncManager*
    getInstance();
    void
    destroy();
    void
    clear();

    bool
    find(const std::string& name, FunctionDefPtr& ptr);
    bool
    find(const std::wstring& functionName, std::wstring& filename);
    bool
    find(const std::wstring& functionName, wstringVector& filesname);
    bool
    find(const std::wstring& functionName, FileFunction** ff);

    bool
    addPath(const std::wstring& path, bool begin, bool frozen);
    bool
    removePath(const std::wstring& path);
    wstringVector
    getPathNameVector();
    std::wstring
    getPathNameAsString();
    wstringVector
    getMacrosList(const std::wstring& prefix = L"");

    bool
    setCurrentUserPath(const std::wstring& path);

    std::wstring
    getUserPath();
    bool
    setUserPath(const std::wstring& path, bool saveToFile = false);
    void
    clearUserPath(bool saveToFile = false);
    void
    resetUserPath();
    void
    rehash();
    void
    rehash(const std::wstring& path);

    void
    clearCache();
    void
    clearCache(const stringVector& exceptedFunctions);

    bool
    isAvailablePath(const std::wstring& path);
};
//=============================================================================
} // namespace Nelson
//=============================================================================
