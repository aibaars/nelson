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
#include "FunctionHandleDisplay.hpp"
#include "BuiltInFunctionDefManager.hpp"
#include "Error.hpp"
#include "MacroFunctionDef.hpp"
#include "PathFuncManager.hpp"
//=============================================================================
namespace Nelson {
//=============================================================================
void
FunctionHandleDisplay(Evaluator* eval, ArrayOf Var)
{
    if (!Var.isFunctionHandle()) {
        Error(_W("FunctionHandleDisplay method: function_handle expected."));
    }
    Interface* io = eval->getInterface();
    if (io != nullptr) {
        function_handle fh = Var.getContentAsFunctionHandle();
        if (fh.anonymous.empty()) {
            io->outputMessage("@" + fh.name);
            io->outputMessage("\n");
        } else {
            io->outputMessage("@" + fh.anonymous);
            io->outputMessage("\n");
        }
    }
}
//=============================================================================
} // namespace Nelson
//=============================================================================
