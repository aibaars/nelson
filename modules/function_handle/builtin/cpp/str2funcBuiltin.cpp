//=============================================================================
// Copyright (c) 2016-2018 Allan CORNET (Nelson)
//=============================================================================
// LICENCE_BLOCK_BEGIN
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// LICENCE_BLOCK_END
//=============================================================================
#include "str2funcBuiltin.hpp"
#include "Error.hpp"
#include "StringToFunctionHandle.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
ArrayOfVector
Nelson::FunctionHandleGateway::str2funcBuiltin(
    Evaluator* eval, int nLhs, const ArrayOfVector& argIn)
{
    ArrayOfVector retval;
    if (nLhs > 1) {
        Error(eval, ERROR_WRONG_NUMBERS_OUTPUT_ARGS);
    }
    if (argIn.size() != 1) {
        Error(eval, ERROR_WRONG_NUMBERS_INPUT_ARGS);
    }
    std::wstring wfunctionname;
    if (argIn[0].isSingleString()) {
        wfunctionname = argIn[0].getContentAsWideString();
    } else {
        Error(eval, ERROR_WRONG_ARGUMENT_1_TYPE_STRING_EXPECTED);
    }
    function_handle fptr = StringToFunctionHandle(eval, wfunctionname);
    if (fptr == 0) {
        Error(eval, _W("A valid function name expected."));
    }
    retval.push_back(ArrayOf::functionHandleConstructor(wfunctionname, fptr));
    return retval;
}
//=============================================================================
