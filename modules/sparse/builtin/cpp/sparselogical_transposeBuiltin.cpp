//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include "sparselogical_transposeBuiltin.hpp"
#include "Error.hpp"
#include "TransposeSparseLogical.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
ArrayOfVector
Nelson::SparseGateway::sparselogical_transposeBuiltin(
    Evaluator* eval, int nLhs, const ArrayOfVector& argIn)
{
    ArrayOfVector retval;
    nargincheck(argIn, 1, 1);
    nargoutcheck(nLhs, 0, 1);
    ArrayOf A = argIn[0];
    if (!A.isSparseLogicalType()) {
        Error(ERROR_WRONG_ARGUMENT_1_TYPE_SPARSE_LOGICAL_EXPECTED);
    }
    retval << TransposeSparseLogical(A);
    return retval;
}
//=============================================================================
