//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include <cfloat>
#include "flintmaxBuiltin.hpp"
#include "Error.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
ArrayOfVector
Nelson::DoubleGateway::flintmaxBuiltin(int nLhs, const ArrayOfVector& argIn)
{
    ArrayOfVector retval;
    nargincheck(argIn, 0, 1);
    nargoutcheck(nLhs, 0, 1);
    if (argIn.size() == 1) {
        ArrayOf param1 = argIn[0];
        std::wstring paramStr = param1.getContentAsWideString();
        if ((paramStr == L"double" || paramStr == L"single")) {
            if (paramStr == L"double") {
                double intmax = (1ULL << DBL_MANT_DIG);
                retval << ArrayOf::doubleConstructor(intmax);
            } else {
                single intmax = (1ULL << FLT_MANT_DIG);
                retval << ArrayOf::singleConstructor(intmax);
            }
        } else {
            Error(_W("#1 'double' or 'single' expected."));
        }
    } else {
        double intmax = (1ULL << DBL_MANT_DIG);
        retval << ArrayOf::doubleConstructor(intmax);
    }
    return retval;
}
//=============================================================================
