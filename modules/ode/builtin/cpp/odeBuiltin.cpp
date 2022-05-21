//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include "odeBuiltin.hpp"
#include "Error.hpp"
#include "OdeManager.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
ArrayOfVector
Nelson::OdeGateway::odeBuiltin(Evaluator* eval, int nLhs, const ArrayOfVector& argIn)
{
    /*  Evaluator* eval required if gateway defined with CPP_BUILTIN_WITH_EVALUATOR */
    ArrayOfVector retval;
    nargincheck(argIn, 1, 2);
    nargoutcheck(nLhs, 0, 1);
    retval << ArrayOf::characterArrayConstructor(OdeManager());
    return retval;
}
//=============================================================================
