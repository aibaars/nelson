//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include "NelsonGateway.hpp"
#include "odeBuiltin.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
const std::wstring gatewayName = L"ode";
//=============================================================================
static const nlsGateway gateway[] = {
    { "ode", (ptrBuiltin)Nelson::OdeGateway::odeBuiltin, 1, 2,
        CPP_BUILTIN_WITH_EVALUATOR },
    // CPP_BUILTIN_WITH_EVALUATOR if interpreter required or access to
    //  variables context, call macros, or display text
    // otherwise CPP_BUILTIN (default)
};
//=============================================================================
NLSGATEWAYFUNC(gateway)
//=============================================================================
NLSGATEWAYINFO(gateway)
//=============================================================================
NLSGATEWAYREMOVE(gateway)
//=============================================================================
NLSGATEWAYNAME()
//=============================================================================
