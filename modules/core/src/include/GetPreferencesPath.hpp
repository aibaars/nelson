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
#ifdef _MSC_VER
#pragma warning(disable : 4190)
#endif
//=============================================================================
#include "ArrayOf.hpp"
#include "nlsCore_exports.h"
#include <string>
//=============================================================================
namespace Nelson {
NLSCORE_IMPEXP bool
ComputePreferencesPath();
NLSCORE_IMPEXP std::wstring
GetPreferencesPath();
} // namespace Nelson
//=============================================================================
extern "C"
{
    NLSCORE_IMPEXP std::wstring
    GetNelsonPreferencesPath();
}
//=============================================================================
