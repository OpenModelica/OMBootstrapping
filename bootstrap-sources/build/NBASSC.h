#ifndef NBASSC__H
#define NBASSC__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_Exp_BINARY__desc;

extern struct record_description DAE_Exp_CREF__desc;

extern struct record_description DAE_Exp_RCONST__desc;

extern struct record_description DAE_Operator_DIV__desc;

extern struct record_description DAE_Operator_MUL__desc;

extern struct record_description DAE_Operator_SUB__desc;

extern struct record_description DAE_Type_T__REAL__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description NBASSC_Tuple__Id_TUPLE__ID__desc;

extern struct record_description NBEquation_Iterator_EMPTY__desc;

extern struct record_description NFExpression_MULTARY__desc;

extern struct record_description NFType_REAL__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_boolean omc_NBASSC_Tuple__Id_isEqual(threadData_t *threadData, modelica_metatype _id1, modelica_metatype _id2);
DLLDirection
modelica_metatype boxptr_NBASSC_Tuple__Id_isEqual(threadData_t *threadData, modelica_metatype _id1, modelica_metatype _id2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_Tuple__Id_isEqual,2,0) {(void*) boxptr_NBASSC_Tuple__Id_isEqual,0}};
#define boxvar_NBASSC_Tuple__Id_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_Tuple__Id_isEqual)


DLLDirection
modelica_integer omc_NBASSC_Tuple__Id_hash(threadData_t *threadData, modelica_metatype _id);
DLLDirection
modelica_metatype boxptr_NBASSC_Tuple__Id_hash(threadData_t *threadData, modelica_metatype _id);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_Tuple__Id_hash,2,0) {(void*) boxptr_NBASSC_Tuple__Id_hash,0}};
#define boxvar_NBASSC_Tuple__Id_hash MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_Tuple__Id_hash)


DLLDirection
modelica_string omc_NBASSC_Tuple__Id_toString(threadData_t *threadData, modelica_metatype _id);
#define boxptr_NBASSC_Tuple__Id_toString omc_NBASSC_Tuple__Id_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_Tuple__Id_toString,2,0) {(void*) boxptr_NBASSC_Tuple__Id_toString,0}};
#define boxvar_NBASSC_Tuple__Id_toString MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_Tuple__Id_toString)


DLLDirection
void omc_NBASSC_getOperations(threadData_t *threadData, modelica_metatype _op_modes, modelica_metatype _op_val1, modelica_metatype _op_val2, modelica_metatype _op_val3, modelica_metatype _op_val4);
#define boxptr_NBASSC_getOperations omc_NBASSC_getOperations
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_getOperations,2,0) {(void*) boxptr_NBASSC_getOperations,0}};
#define boxvar_NBASSC_getOperations MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_getOperations)

extern void ASSC_getOperations(modelica_metatype /*_op_modes*/, modelica_metatype /*_op_val1*/, modelica_metatype /*_op_val2*/, modelica_metatype /*_op_val3*/, modelica_metatype /*_op_val4*/);

DLLDirection
modelica_integer omc_NBASSC_getNumberOfOperations(threadData_t *threadData, modelica_metatype _nop);
DLLDirection
modelica_metatype boxptr_NBASSC_getNumberOfOperations(threadData_t *threadData, modelica_metatype _nop);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_getNumberOfOperations,2,0) {(void*) boxptr_NBASSC_getNumberOfOperations,0}};
#define boxvar_NBASSC_getNumberOfOperations MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_getNumberOfOperations)

extern int ASSC_getNumberOfOperations(modelica_metatype /*_nop*/);

DLLDirection
void omc_NBASSC_bareiss(threadData_t *threadData);
#define boxptr_NBASSC_bareiss omc_NBASSC_bareiss
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_bareiss,2,0) {(void*) boxptr_NBASSC_bareiss,0}};
#define boxvar_NBASSC_bareiss MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_bareiss)

extern void ASSC_bareiss();

DLLDirection
void omc_NBASSC_printMatrix(threadData_t *threadData);
#define boxptr_NBASSC_printMatrix omc_NBASSC_printMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_printMatrix,2,0) {(void*) boxptr_NBASSC_printMatrix,0}};
#define boxvar_NBASSC_printMatrix MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_printMatrix)

extern void ASSC_printMatrix();

DLLDirection
void omc_NBASSC_freeMatrix(threadData_t *threadData);
#define boxptr_NBASSC_freeMatrix omc_NBASSC_freeMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_freeMatrix,2,0) {(void*) boxptr_NBASSC_freeMatrix,0}};
#define boxvar_NBASSC_freeMatrix MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_freeMatrix)

extern void ASSC_freeMatrix();

DLLDirection
void omc_NBASSC_getMatrix(threadData_t *threadData, modelica_metatype _adj, modelica_metatype _val);
#define boxptr_NBASSC_getMatrix omc_NBASSC_getMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_getMatrix,2,0) {(void*) boxptr_NBASSC_getMatrix,0}};
#define boxvar_NBASSC_getMatrix MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_getMatrix)

extern void ASSC_getMatrix(modelica_metatype /*_adj*/, modelica_metatype /*_val*/);

DLLDirection
void omc_NBASSC_setMatrix(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_integer _nz, modelica_metatype _adj, modelica_metatype _val);
DLLDirection
void boxptr_NBASSC_setMatrix(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _nz, modelica_metatype _adj, modelica_metatype _val);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_setMatrix,2,0) {(void*) boxptr_NBASSC_setMatrix,0}};
#define boxvar_NBASSC_setMatrix MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_setMatrix)

extern void ASSC_setMatrix(int /*_nv*/, int /*_ne*/, int /*_nz*/, modelica_metatype /*_adj*/, modelica_metatype /*_val*/);

DLLDirection
modelica_metatype omc_NBASSC_createEquations(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _index, modelica_metatype _indices, modelica_metatype _values, modelica_integer _num_eqns, modelica_metatype _lhs_array);
DLLDirection
modelica_metatype boxptr_NBASSC_createEquations(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _index, modelica_metatype _indices, modelica_metatype _values, modelica_metatype _num_eqns, modelica_metatype _lhs_array);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_createEquations,2,0) {(void*) boxptr_NBASSC_createEquations,0}};
#define boxvar_NBASSC_createEquations MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_createEquations)


DLLDirection
modelica_metatype omc_NBASSC_buildExpression(threadData_t *threadData, modelica_integer _factor_pivot, modelica_integer _factor_update, modelica_metatype _pivot_exp, modelica_metatype _update_exp);
DLLDirection
modelica_metatype boxptr_NBASSC_buildExpression(threadData_t *threadData, modelica_metatype _factor_pivot, modelica_metatype _factor_update, modelica_metatype _pivot_exp, modelica_metatype _update_exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_buildExpression,2,0) {(void*) boxptr_NBASSC_buildExpression,0}};
#define boxvar_NBASSC_buildExpression MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_buildExpression)


DLLDirection
modelica_boolean omc_NBASSC_findLastOperation(threadData_t *threadData, modelica_integer _current_row, modelica_integer _last_op, modelica_metatype _op_modes, modelica_metatype _op_val1, modelica_metatype _op_val2, modelica_metatype _op_val3, modelica_metatype _op_val4, modelica_integer *out_pre_op, modelica_integer *out_pre_mode, modelica_integer *out_row1, modelica_integer *out_row2, modelica_integer *out_factor1, modelica_integer *out_factor2, modelica_integer *out_gcd);
DLLDirection
modelica_metatype boxptr_NBASSC_findLastOperation(threadData_t *threadData, modelica_metatype _current_row, modelica_metatype _last_op, modelica_metatype _op_modes, modelica_metatype _op_val1, modelica_metatype _op_val2, modelica_metatype _op_val3, modelica_metatype _op_val4, modelica_metatype *out_pre_op, modelica_metatype *out_pre_mode, modelica_metatype *out_row1, modelica_metatype *out_row2, modelica_metatype *out_factor1, modelica_metatype *out_factor2, modelica_metatype *out_gcd);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_findLastOperation,2,0) {(void*) boxptr_NBASSC_findLastOperation,0}};
#define boxvar_NBASSC_findLastOperation MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_findLastOperation)


DLLDirection
modelica_metatype omc_NBASSC_traceEquation(threadData_t *threadData, modelica_integer _current_row, modelica_integer _last_op, modelica_metatype _op_modes, modelica_metatype _op_val1, modelica_metatype _op_val2, modelica_metatype _op_val3, modelica_metatype _op_val4);
DLLDirection
modelica_metatype boxptr_NBASSC_traceEquation(threadData_t *threadData, modelica_metatype _current_row, modelica_metatype _last_op, modelica_metatype _op_modes, modelica_metatype _op_val1, modelica_metatype _op_val2, modelica_metatype _op_val3, modelica_metatype _op_val4);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_traceEquation,2,0) {(void*) boxptr_NBASSC_traceEquation,0}};
#define boxvar_NBASSC_traceEquation MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_traceEquation)


DLLDirection
void omc_NBASSC_tracebackZeroRows(threadData_t *threadData, modelica_metatype _eqns, modelica_integer _num_eqns, modelica_integer _count_zero_row, modelica_integer _num_op, modelica_metatype _op_modes, modelica_metatype _op_val1, modelica_metatype _op_val2, modelica_metatype _op_val3, modelica_metatype _op_val4);
DLLDirection
void boxptr_NBASSC_tracebackZeroRows(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _num_eqns, modelica_metatype _count_zero_row, modelica_metatype _num_op, modelica_metatype _op_modes, modelica_metatype _op_val1, modelica_metatype _op_val2, modelica_metatype _op_val3, modelica_metatype _op_val4);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_tracebackZeroRows,2,0) {(void*) boxptr_NBASSC_tracebackZeroRows,0}};
#define boxvar_NBASSC_tracebackZeroRows MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_tracebackZeroRows)


DLLDirection
modelica_boolean omc_NBASSC_checkSingularity(threadData_t *threadData, modelica_metatype _indices, modelica_integer _num_eqns, modelica_integer *out_count_zero_row);
DLLDirection
modelica_metatype boxptr_NBASSC_checkSingularity(threadData_t *threadData, modelica_metatype _indices, modelica_metatype _num_eqns, modelica_metatype *out_count_zero_row);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_checkSingularity,2,0) {(void*) boxptr_NBASSC_checkSingularity,0}};
#define boxvar_NBASSC_checkSingularity MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_checkSingularity)


DLLDirection
modelica_integer omc_NBASSC_applyRecordedOperations(threadData_t *threadData, modelica_metatype _lhs_map, modelica_metatype *out_op_modes, modelica_metatype *out_op_val1, modelica_metatype *out_op_val2, modelica_metatype *out_op_val3, modelica_metatype *out_op_val4, modelica_metatype *out_lhs_array);
DLLDirection
modelica_metatype boxptr_NBASSC_applyRecordedOperations(threadData_t *threadData, modelica_metatype _lhs_map, modelica_metatype *out_op_modes, modelica_metatype *out_op_val1, modelica_metatype *out_op_val2, modelica_metatype *out_op_val3, modelica_metatype *out_op_val4, modelica_metatype *out_lhs_array);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_applyRecordedOperations,2,0) {(void*) boxptr_NBASSC_applyRecordedOperations,0}};
#define boxvar_NBASSC_applyRecordedOperations MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_applyRecordedOperations)


DLLDirection
modelica_metatype omc_NBASSC_performBareissElimination(threadData_t *threadData, modelica_metatype __omcQ_24in_5Findices, modelica_metatype __omcQ_24in_5Fvalues, modelica_metatype *out_values);
#define boxptr_NBASSC_performBareissElimination omc_NBASSC_performBareissElimination
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_performBareissElimination,2,0) {(void*) boxptr_NBASSC_performBareissElimination,0}};
#define boxvar_NBASSC_performBareissElimination MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_performBareissElimination)


DLLDirection
modelica_metatype omc_NBASSC_buildSparseRepresentation(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _vars, modelica_metatype *out_values, modelica_integer *out_num_crefs, modelica_integer *out_num_eqns, modelica_integer *out_num_nonzero_val, modelica_metatype *out_lhs_map);
DLLDirection
modelica_metatype boxptr_NBASSC_buildSparseRepresentation(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _vars, modelica_metatype *out_values, modelica_metatype *out_num_crefs, modelica_metatype *out_num_eqns, modelica_metatype *out_num_nonzero_val, modelica_metatype *out_lhs_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_buildSparseRepresentation,2,0) {(void*) boxptr_NBASSC_buildSparseRepresentation,0}};
#define boxvar_NBASSC_buildSparseRepresentation MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_buildSparseRepresentation)


DLLDirection
modelica_metatype omc_NBASSC_main(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _vars, modelica_metatype _index);
#define boxptr_NBASSC_main omc_NBASSC_main
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_main,2,0) {(void*) boxptr_NBASSC_main,0}};
#define boxvar_NBASSC_main MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_main)

#ifdef __cplusplus
}
#endif
#endif
