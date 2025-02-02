//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include "nlsConfig.h"
#include <Windows.h>
//=============================================================================
#pragma comment(lib, CAT_3_STRINGS("boost_system-", BOOST_TARGET, ".lib"))
#pragma comment(lib, CAT_3_STRINGS("boost_filesystem-", BOOST_TARGET, ".lib"))
#pragma comment(lib, CAT_3_STRINGS("boost_program_options-", BOOST_TARGET, ".lib"))
#pragma comment(lib, CAT_3_STRINGS("boost_thread-", BOOST_TARGET, ".lib"))
//=============================================================================
int WINAPI
DllMain(HINSTANCE hInstance, DWORD reason, PVOID pvReserved)
{
    switch (reason) {
    case DLL_PROCESS_ATTACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    }
    return 1;
}
//=============================================================================
