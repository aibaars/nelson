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
// Generated by Nelson Interface Generator 1.0.0
//=============================================================================
#include "Error.hpp"
#include "slicot_sb03mdBuiltin.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
#ifdef __cplusplus
extern "C"
{
#endif
extern int sb03md_ ( const char *DICO, const char *JOB, const char *FACT, const char *TRANA, int *N,const double *A, int *LDA, double *U, int *LDU, double *C, int *LDC, double *SCALE, double *SEP, double *FERR, double *WR, double *WI, int *IWORK, double *DWORK, int *LDWORK, int *INFO);
#ifdef __cplusplus
}
#endif
//=============================================================================
// [U_OUT, C_OUT, SCALE, SEP, FERR, WR, WI, INFO] = slicot_sb03md(DICO, JOB, FACT, TRANA, A, U_IN, C_IN)
//=============================================================================
ArrayOfVector Nelson::SlicotGateway::slicot_sb03mdBuiltin(Evaluator* eval, int nLhs, const ArrayOfVector& argIn)
{
    ArrayOfVector retval;
    if (nLhs > 8)
    {
        Error(eval, ERROR_WRONG_NUMBERS_OUTPUT_ARGS);
    }
    if (argIn.size() != 7)
    {
        Error(eval, ERROR_WRONG_NUMBERS_INPUT_ARGS);
    }

    // INPUT VARIABLES

    ArrayOf DICO = argIn[0];
    Dimensions dimsDICO = DICO.getDimensions();
    std::string DICO_string = DICO.getContentAsCString();
    const char* DICO_ptr = DICO_string.c_str();
    ArrayOf JOB = argIn[1];
    Dimensions dimsJOB = JOB.getDimensions();
    std::string JOB_string = JOB.getContentAsCString();
    const char* JOB_ptr = JOB_string.c_str();
    ArrayOf FACT = argIn[2];
    Dimensions dimsFACT = FACT.getDimensions();
    std::string FACT_string = FACT.getContentAsCString();
    const char* FACT_ptr = FACT_string.c_str();
    ArrayOf TRANA = argIn[3];
    Dimensions dimsTRANA = TRANA.getDimensions();
    std::string TRANA_string = TRANA.getContentAsCString();
    const char* TRANA_ptr = TRANA_string.c_str();
    ArrayOf A = argIn[4];
    Dimensions dimsA = A.getDimensions();
    A.promoteType(NLS_DOUBLE);
    double *A_ptr = (double*)A.getDataPointer();

    // IN/OUT VARIABLES

    ArrayOf U = argIn[5];
    Dimensions dimsU = U.getDimensions();
    U.promoteType(NLS_DOUBLE);
    ArrayOf U_output = U;
    U_output.ensureSingleOwner();
    double *U_output_ptr = (double*)U_output.getDataPointer();
    ArrayOf C = argIn[6];
    Dimensions dimsC = C.getDimensions();
    C.promoteType(NLS_DOUBLE);
    ArrayOf C_output = C;
    C_output.ensureSingleOwner();
    double *C_output_ptr = (double*)C_output.getDataPointer();

    // LOCAL VARIABLES

    ArrayOf N = ArrayOf::int32VectorConstructor(1);
    int* N_ptr = (int*)N.getDataPointer();
    N_ptr[0] = (int)A.getDimensions().getRows();
    ArrayOf LDA = ArrayOf::int32VectorConstructor(1);
    int* LDA_ptr = (int*)LDA.getDataPointer();
    LDA_ptr[0] = std::max(1, (int)A.getDimensions().getRows());
    ArrayOf LDU = ArrayOf::int32VectorConstructor(1);
    int* LDU_ptr = (int*)LDU.getDataPointer();
    LDU_ptr[0] = std::max(1, (int)A.getDimensions().getRows());
    ArrayOf LDC = ArrayOf::int32VectorConstructor(1);
    int* LDC_ptr = (int*)LDC.getDataPointer();
    LDC_ptr[0] = std::max(1, (int)A.getDimensions().getRows());
    ArrayOf IWORK = ArrayOf::int32Matrix2dConstructor((int)A.getDimensions().getRows() , (int)A.getDimensions().getRows());
    int* IWORK_ptr = (int*)IWORK.getDataPointer();
    ArrayOf DWORK = ArrayOf::doubleMatrix2dConstructor(1 , std::max(2 * (int)A.getDimensions().getRows() * (int)A.getDimensions().getRows() + 2 * (int)A.getDimensions().getRows(), 3 * (int)A.getDimensions().getRows()));
    double * DWORK_ptr = (double*)DWORK.getDataPointer();
    ArrayOf LDWORK = ArrayOf::int32VectorConstructor(1);
    int* LDWORK_ptr = (int*)LDWORK.getDataPointer();
    LDWORK_ptr[0] = std::max(2 * (int)A.getDimensions().getRows() * (int)A.getDimensions().getRows() + 2 * (int)A.getDimensions().getRows(), 3 * (int)A.getDimensions().getRows());

    // OUTPUT VARIABLES

    ArrayOf SCALE_output = ArrayOf::doubleVectorConstructor(1);
    double *SCALE_output_ptr = (double*)SCALE_output.getDataPointer();
    ArrayOf SEP_output = ArrayOf::doubleVectorConstructor(1);
    double *SEP_output_ptr = (double*)SEP_output.getDataPointer();
    ArrayOf FERR_output = ArrayOf::doubleVectorConstructor(1);
    double *FERR_output_ptr = (double*)FERR_output.getDataPointer();
    ArrayOf WR_output = ArrayOf::doubleMatrix2dConstructor((indexType)1, (indexType)(int)A.getDimensions().getRows());
    double *WR_output_ptr = (double*)WR_output.getDataPointer();
    ArrayOf WI_output = ArrayOf::doubleMatrix2dConstructor((indexType)1, (indexType)(int)A.getDimensions().getRows());
    double *WI_output_ptr = (double*)WI_output.getDataPointer();
    ArrayOf INFO_output = ArrayOf::int32VectorConstructor(1);
    int *INFO_output_ptr = (int*)INFO_output.getDataPointer();

    // CHECK INPUT VARIABLES DIMENSIONS

    if (!dimsDICO.isScalar())
    {
        Error(eval, _W("Input argument #1: scalar expected."));
    }
    if (!dimsJOB.isScalar())
    {
        Error(eval, _W("Input argument #2: scalar expected."));
    }
    if (!dimsFACT.isScalar())
    {
        Error(eval, _W("Input argument #3: scalar expected."));
    }
    if (!dimsTRANA.isScalar())
    {
        Error(eval, _W("Input argument #4: scalar expected."));
    }

    // CALL EXTERN FUNCTION

    try
    {
        sb03md_ ( DICO_ptr, JOB_ptr, FACT_ptr, TRANA_ptr, N_ptr, A_ptr, LDA_ptr, U_output_ptr, LDU_ptr, C_output_ptr, LDC_ptr, SCALE_output_ptr, SEP_output_ptr, FERR_output_ptr, WR_output_ptr, WI_output_ptr, IWORK_ptr, DWORK_ptr, LDWORK_ptr, INFO_output_ptr);
    }
    catch (std::runtime_error &e)
    {
        e.what();
        Error(eval, "sb03md function fails.");
    }

    // ASSIGN OUTPUT VARIABLES

    if (nLhs > 0)
    {
        retval.push_back(U_output);
    }
    if (nLhs > 1)
    {
        retval.push_back(C_output);
    }
    if (nLhs > 2)
    {
        retval.push_back(SCALE_output);
    }
    if (nLhs > 3)
    {
        retval.push_back(SEP_output);
    }
    if (nLhs > 4)
    {
        retval.push_back(FERR_output);
    }
    if (nLhs > 5)
    {
        retval.push_back(WR_output);
    }
    if (nLhs > 6)
    {
        retval.push_back(WI_output);
    }
    if (nLhs > 7)
    {
        retval.push_back(INFO_output);
    }

    return retval;
}
//=============================================================================
