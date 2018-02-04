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
#include "audioplayer_playblockingBuiltin.hpp"
#include "Error.hpp"
#include "HandleGenericObject.hpp"
#include "HandleManager.hpp"
#include "AudioplayerObject.hpp"
#include "ProcessEventsDynamicFunction.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
ArrayOfVector Nelson::AudioGateway::audioplayer_playblockingBuiltin(Evaluator* eval, int nLhs, const ArrayOfVector& argIn)
{
    ArrayOfVector retval;
    if (nLhs != 0)
    {
        Error(eval, ERROR_WRONG_NUMBERS_OUTPUT_ARGS);
    }
    if (argIn.size() < 1 || argIn.size() > 2)
    {
        Error(eval, ERROR_WRONG_NUMBERS_INPUT_ARGS);
    }
    ArrayOf param1 = argIn[0];
    double start = -1;
    double end = -1;
    bool startOnly = false;
    if (argIn.size() == 2)
    {
        ArrayOf param2 = argIn[1];
        Dimensions dimsParam2 = param2.getDimensions();
        if (param2.isScalar())
        {
            start = param2.getContentAsDoubleScalar();
            startOnly = true;
            if (start < 1)
            {
                Error(eval, _W("start >= 1 expected."));
            }
            start = start - 1;
        }
        else if (param2.isVector() && param2.isNumeric() && (dimsParam2.getElementCount() == 2))
        {
            param2.promoteType(NLS_DOUBLE);
            double *ptr = (double *)param2.getDataPointer();
            start = ptr[0];
            end = ptr[1];
            if (start < 1 || end < 1)
            {
                Error(eval, _W("Index >= 1 expected."));
            }
            start = start - 1;
            end = end - 1;
        }
        else
        {
            Error(eval, _W("scalar or [start, end] vector expected."));
        }
    }
    if (param1.isHandle())
    {
        if (param1.isScalar())
        {
            nelson_handle *qp = (nelson_handle*)param1.getDataPointer();
            nelson_handle hl = qp[0];
            HandleGenericObject *hlObj = HandleManager::getInstance()->getPointer(hl);
            if (hlObj->getCategory() != AUDIOPLAYER_CATEGORY_STR)
            {
                Error(eval, _W("audioplayer handle expected."));
            }
            AudioplayerObject *objPlayer = (AudioplayerObject *)hlObj;
            if (argIn.size() == 1)
            {
                objPlayer->play();
            }
            else
            {
                if (startOnly)
                {
                    if (start > objPlayer->getTotalSamples())
                    {
                        Error(eval, _W("Invalid range."));
                    }
                    objPlayer->play(start);
                }
                else
                {
                    if (start > objPlayer->getTotalSamples() ||
                            start > end ||
                            end > objPlayer->getTotalSamples())
                    {
                        Error(eval, _W("Invalid range."));
                    }
                    objPlayer->play(start, end);
                }
            }
            do
            {
                if (eval->haveEventsLoop())
                {
                    ProcessEventsDynamicFunctionWithoutWait();
                }
            }
            while (!eval->GetInterruptPending() && objPlayer->getRunning());
            objPlayer->stop();
        }
        else
        {
            Error(eval, _W("audioplayer scalar handle expected."));
        }
    }
    else
    {
        Error(eval, _W("audioplayer handle expected."));
    }
    return retval;
}
//=============================================================================
