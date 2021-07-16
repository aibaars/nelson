//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// Alternatively, you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this program. If not, see <http://www.gnu.org/licenses/>.
// LICENCE_BLOCK_END
//=============================================================================
#include "fevalBuiltin.hpp"
#include "Error.hpp"
#include "characters_encoding.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
ArrayOfVector
Nelson::FunctionsGateway::fevalBuiltin(Evaluator* eval, int nLhs, const ArrayOfVector& argIn)
{
    nargincheck(argIn, 1);
    Context* context = eval->getContext();
    FunctionDef* funcDef = nullptr;
    std::string fname;
    ArrayOf param1 = argIn[0];
    if (param1.isFunctionHandle()) {
        function_handle fh = param1.getContentAsFunctionHandle();
        if (fh.anonymous.empty() && fh.name.empty()) {
            Error(ERROR_WRONG_ARGUMENT_1_TYPE_FUNCTION_HANDLE_EXPECTED);
        }
        fname = fh.name;
    } else {
        fname = param1.getContentAsCString();
    }
    if (!context->lookupFunction(fname, funcDef)) {
        Error(_W("function \'") + utf8_to_wstring(fname) + _W("\' is not a function."));
    }
    ArrayOfVector newarg(argIn);
    newarg.pop_front();
    eval->disableOverload();
    ArrayOfVector retval = funcDef->evaluateFunction(eval, newarg, nLhs);
    eval->enableOverload();
    return retval;
}
//=============================================================================
