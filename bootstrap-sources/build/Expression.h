#ifndef Expression__H
#define Expression__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_ComponentRef_CREF__IDENT__desc;

extern struct record_description Absyn_Direction_BIDIR__desc;

extern struct record_description Absyn_Exp_ARRAY__desc;

extern struct record_description Absyn_Exp_BINARY__desc;

extern struct record_description Absyn_Exp_BOOL__desc;

extern struct record_description Absyn_Exp_CALL__desc;

extern struct record_description Absyn_Exp_CODE__desc;

extern struct record_description Absyn_Exp_CREF__desc;

extern struct record_description Absyn_Exp_IFEXP__desc;

extern struct record_description Absyn_Exp_INTEGER__desc;

extern struct record_description Absyn_Exp_LBINARY__desc;

extern struct record_description Absyn_Exp_LUNARY__desc;

extern struct record_description Absyn_Exp_MATRIX__desc;

extern struct record_description Absyn_Exp_PARTEVALFUNCTION__desc;

extern struct record_description Absyn_Exp_RANGE__desc;

extern struct record_description Absyn_Exp_REAL__desc;

extern struct record_description Absyn_Exp_RELATION__desc;

extern struct record_description Absyn_Exp_STRING__desc;

extern struct record_description Absyn_Exp_TUPLE__desc;

extern struct record_description Absyn_Exp_UNARY__desc;

extern struct record_description Absyn_ForIterator_ITERATOR__desc;

extern struct record_description Absyn_FunctionArgs_FOR__ITER__FARG__desc;

extern struct record_description Absyn_FunctionArgs_FUNCTIONARGS__desc;

extern struct record_description Absyn_InnerOuter_NOT__INNER__OUTER__desc;

extern struct record_description Absyn_Operator_ADD__desc;

extern struct record_description Absyn_Operator_AND__desc;

extern struct record_description Absyn_Operator_DIV__desc;

extern struct record_description Absyn_Operator_EQUAL__desc;

extern struct record_description Absyn_Operator_GREATER__desc;

extern struct record_description Absyn_Operator_GREATEREQ__desc;

extern struct record_description Absyn_Operator_LESS__desc;

extern struct record_description Absyn_Operator_LESSEQ__desc;

extern struct record_description Absyn_Operator_MUL__desc;

extern struct record_description Absyn_Operator_NEQUAL__desc;

extern struct record_description Absyn_Operator_NOT__desc;

extern struct record_description Absyn_Operator_OR__desc;

extern struct record_description Absyn_Operator_POW__desc;

extern struct record_description Absyn_Operator_SUB__desc;

extern struct record_description Absyn_Operator_UMINUS__desc;

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description Absyn_Subscript_NOSUB__desc;

extern struct record_description Absyn_Subscript_SUBSCRIPT__desc;

extern struct record_description DAE_Attributes_ATTR__desc;

extern struct record_description DAE_Binding_UNBOUND__desc;

extern struct record_description DAE_CallAttributes_CALL__ATTR__desc;

extern struct record_description DAE_ClockKind_EVENT__CLOCK__desc;

extern struct record_description DAE_ClockKind_RATIONAL__CLOCK__desc;

extern struct record_description DAE_ClockKind_REAL__CLOCK__desc;

extern struct record_description DAE_ClockKind_SOLVER__CLOCK__desc;

extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_ComponentRef_CREF__QUAL__desc;

extern struct record_description DAE_ComponentRef_OPTIMICA__ATTR__INST__CREF__desc;

extern struct record_description DAE_ComponentRef_WILD__desc;

extern struct record_description DAE_ConnectorType_NON__CONNECTOR__desc;

extern struct record_description DAE_Dimension_DIM__EXP__desc;

extern struct record_description DAE_Dimension_DIM__INTEGER__desc;

extern struct record_description DAE_Dimension_DIM__UNKNOWN__desc;

extern struct record_description DAE_Exp_ARRAY__desc;

extern struct record_description DAE_Exp_ASUB__desc;

extern struct record_description DAE_Exp_BCONST__desc;

extern struct record_description DAE_Exp_BINARY__desc;

extern struct record_description DAE_Exp_BOX__desc;

extern struct record_description DAE_Exp_CALL__desc;

extern struct record_description DAE_Exp_CAST__desc;

extern struct record_description DAE_Exp_CLKCONST__desc;

extern struct record_description DAE_Exp_CONS__desc;

extern struct record_description DAE_Exp_CREF__desc;

extern struct record_description DAE_Exp_ENUM__LITERAL__desc;

extern struct record_description DAE_Exp_ICONST__desc;

extern struct record_description DAE_Exp_IFEXP__desc;

extern struct record_description DAE_Exp_LBINARY__desc;

extern struct record_description DAE_Exp_LIST__desc;

extern struct record_description DAE_Exp_LUNARY__desc;

extern struct record_description DAE_Exp_MATCHEXPRESSION__desc;

extern struct record_description DAE_Exp_MATRIX__desc;

extern struct record_description DAE_Exp_METARECORDCALL__desc;

extern struct record_description DAE_Exp_META__OPTION__desc;

extern struct record_description DAE_Exp_META__TUPLE__desc;

extern struct record_description DAE_Exp_PARTEVALFUNCTION__desc;

extern struct record_description DAE_Exp_RANGE__desc;

extern struct record_description DAE_Exp_RCONST__desc;

extern struct record_description DAE_Exp_RECORD__desc;

extern struct record_description DAE_Exp_REDUCTION__desc;

extern struct record_description DAE_Exp_RELATION__desc;

extern struct record_description DAE_Exp_SCONST__desc;

extern struct record_description DAE_Exp_SIZE__desc;

extern struct record_description DAE_Exp_TSUB__desc;

extern struct record_description DAE_Exp_TUPLE__desc;

extern struct record_description DAE_Exp_UNARY__desc;

extern struct record_description DAE_Exp_UNBOX__desc;

extern struct record_description DAE_InlineType_NO__INLINE__desc;

extern struct record_description DAE_Operator_ADD__desc;

extern struct record_description DAE_Operator_ADD__ARR__desc;

extern struct record_description DAE_Operator_ADD__ARRAY__SCALAR__desc;

extern struct record_description DAE_Operator_AND__desc;

extern struct record_description DAE_Operator_DIV__desc;

extern struct record_description DAE_Operator_DIV__ARR__desc;

extern struct record_description DAE_Operator_DIV__ARRAY__SCALAR__desc;

extern struct record_description DAE_Operator_DIV__SCALAR__ARRAY__desc;

extern struct record_description DAE_Operator_EQUAL__desc;

extern struct record_description DAE_Operator_GREATER__desc;

extern struct record_description DAE_Operator_GREATEREQ__desc;

extern struct record_description DAE_Operator_LESS__desc;

extern struct record_description DAE_Operator_LESSEQ__desc;

extern struct record_description DAE_Operator_MUL__desc;

extern struct record_description DAE_Operator_MUL__ARR__desc;

extern struct record_description DAE_Operator_MUL__ARRAY__SCALAR__desc;

extern struct record_description DAE_Operator_MUL__MATRIX__PRODUCT__desc;

extern struct record_description DAE_Operator_MUL__SCALAR__PRODUCT__desc;

extern struct record_description DAE_Operator_NEQUAL__desc;

extern struct record_description DAE_Operator_NOT__desc;

extern struct record_description DAE_Operator_OR__desc;

extern struct record_description DAE_Operator_POW__desc;

extern struct record_description DAE_Operator_POW__ARR__desc;

extern struct record_description DAE_Operator_POW__ARR2__desc;

extern struct record_description DAE_Operator_POW__ARRAY__SCALAR__desc;

extern struct record_description DAE_Operator_POW__SCALAR__ARRAY__desc;

extern struct record_description DAE_Operator_SUB__desc;

extern struct record_description DAE_Operator_SUB__ARR__desc;

extern struct record_description DAE_Operator_SUB__SCALAR__ARRAY__desc;

extern struct record_description DAE_Operator_UMINUS__desc;

extern struct record_description DAE_Operator_UMINUS__ARR__desc;

extern struct record_description DAE_Prefix_NOPRE__desc;

extern struct record_description DAE_ReductionIterator_REDUCTIONITER__desc;

extern struct record_description DAE_Subscript_INDEX__desc;

extern struct record_description DAE_Subscript_SLICE__desc;

extern struct record_description DAE_Subscript_WHOLEDIM__desc;

extern struct record_description DAE_Subscript_WHOLE__NONEXP__desc;

extern struct record_description DAE_TailCall_NO__TAIL__desc;

extern struct record_description DAE_Type_T__ARRAY__desc;

extern struct record_description DAE_Type_T__BOOL__desc;

extern struct record_description DAE_Type_T__CLOCK__desc;

extern struct record_description DAE_Type_T__ENUMERATION__desc;

extern struct record_description DAE_Type_T__INTEGER__desc;

extern struct record_description DAE_Type_T__METABOXED__desc;

extern struct record_description DAE_Type_T__METALIST__desc;

extern struct record_description DAE_Type_T__METAOPTION__desc;

extern struct record_description DAE_Type_T__METARECORD__desc;

extern struct record_description DAE_Type_T__METATUPLE__desc;

extern struct record_description DAE_Type_T__METATYPE__desc;

extern struct record_description DAE_Type_T__REAL__desc;

extern struct record_description DAE_Type_T__STRING__desc;

extern struct record_description DAE_Type_T__SUBTYPE__BASIC__desc;

extern struct record_description DAE_Type_T__TUPLE__desc;

extern struct record_description DAE_Type_T__UNKNOWN__desc;

extern struct record_description DAE_Var_TYPES__VAR__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_BOOL__FLAG__desc;

extern struct record_description Flags_FlagVisibility_INTERNAL__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description Gettext_TranslatableContent_notrans__desc;

extern struct record_description SCode_Parallelism_NON__PARALLEL__desc;

extern struct record_description SCode_Variability_VAR__desc;

extern struct record_description SCode_Visibility_PUBLIC__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_Expression_arrayFirstScalar(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_Expression_arrayFirstScalar omc_Expression_arrayFirstScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayFirstScalar,2,0) {(void*) boxptr_Expression_arrayFirstScalar,0}};
#define boxvar_Expression_arrayFirstScalar MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayFirstScalar)


#define boxptr_Expression_consToListIgnoreSharedLiteralWork omc_Expression_consToListIgnoreSharedLiteralWork


DLLDirection
modelica_metatype omc_Expression_consToListIgnoreSharedLiteral(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe);
#define boxptr_Expression_consToListIgnoreSharedLiteral omc_Expression_consToListIgnoreSharedLiteral
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_consToListIgnoreSharedLiteral,2,0) {(void*) boxptr_Expression_consToListIgnoreSharedLiteral,0}};
#define boxvar_Expression_consToListIgnoreSharedLiteral MMC_REFSTRUCTLIT(boxvar_lit_Expression_consToListIgnoreSharedLiteral)


DLLDirection
modelica_boolean omc_Expression_isSimpleLiteralValue(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _allow_arrays);
DLLDirection
modelica_metatype boxptr_Expression_isSimpleLiteralValue(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _allow_arrays);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isSimpleLiteralValue,2,0) {(void*) boxptr_Expression_isSimpleLiteralValue,0}};
#define boxvar_Expression_isSimpleLiteralValue MMC_REFSTRUCTLIT(boxvar_lit_Expression_isSimpleLiteralValue)


DLLDirection
modelica_metatype omc_Expression_tupleHead(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _prop, modelica_metatype *out_outProp);
#define boxptr_Expression_tupleHead omc_Expression_tupleHead
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_tupleHead,2,0) {(void*) boxptr_Expression_tupleHead,0}};
#define boxvar_Expression_tupleHead MMC_REFSTRUCTLIT(boxvar_lit_Expression_tupleHead)


DLLDirection
modelica_metatype omc_Expression_findCallIsInlineAfterIndexReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_boolean __omcQ_24in_5Fres, modelica_boolean *out_cont, modelica_boolean *out_res);
DLLDirection
modelica_metatype boxptr_Expression_findCallIsInlineAfterIndexReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype __omcQ_24in_5Fres, modelica_metatype *out_cont, modelica_metatype *out_res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_findCallIsInlineAfterIndexReduction,2,0) {(void*) boxptr_Expression_findCallIsInlineAfterIndexReduction,0}};
#define boxvar_Expression_findCallIsInlineAfterIndexReduction MMC_REFSTRUCTLIT(boxvar_lit_Expression_findCallIsInlineAfterIndexReduction)


DLLDirection
modelica_metatype omc_Expression_isInvariantExpNoTraverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_boolean __omcQ_24in_5Fb, modelica_boolean *out_b);
DLLDirection
modelica_metatype boxptr_Expression_isInvariantExpNoTraverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype __omcQ_24in_5Fb, modelica_metatype *out_b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isInvariantExpNoTraverse,2,0) {(void*) boxptr_Expression_isInvariantExpNoTraverse,0}};
#define boxvar_Expression_isInvariantExpNoTraverse MMC_REFSTRUCTLIT(boxvar_lit_Expression_isInvariantExpNoTraverse)


DLLDirection
modelica_integer omc_Expression_compareSubscripts(threadData_t *threadData, modelica_metatype _sub1, modelica_metatype _sub2);
DLLDirection
modelica_metatype boxptr_Expression_compareSubscripts(threadData_t *threadData, modelica_metatype _sub1, modelica_metatype _sub2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_compareSubscripts,2,0) {(void*) boxptr_Expression_compareSubscripts,0}};
#define boxvar_Expression_compareSubscripts MMC_REFSTRUCTLIT(boxvar_lit_Expression_compareSubscripts)


DLLDirection
modelica_integer omc_Expression_compare(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
DLLDirection
modelica_metatype boxptr_Expression_compare(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_compare,2,0) {(void*) boxptr_Expression_compare,0}};
#define boxvar_Expression_compare MMC_REFSTRUCTLIT(boxvar_lit_Expression_compare)


DLLDirection
modelica_integer omc_Expression_rangeSize(threadData_t *threadData, modelica_metatype _inRange);
DLLDirection
modelica_metatype boxptr_Expression_rangeSize(threadData_t *threadData, modelica_metatype _inRange);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_rangeSize,2,0) {(void*) boxptr_Expression_rangeSize,0}};
#define boxvar_Expression_rangeSize MMC_REFSTRUCTLIT(boxvar_lit_Expression_rangeSize)


DLLDirection
modelica_boolean omc_Expression_containsCallTo(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _path);
DLLDirection
modelica_metatype boxptr_Expression_containsCallTo(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _path);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_containsCallTo,2,0) {(void*) boxptr_Expression_containsCallTo,0}};
#define boxvar_Expression_containsCallTo MMC_REFSTRUCTLIT(boxvar_lit_Expression_containsCallTo)


DLLDirection
modelica_boolean omc_Expression_containsAnyCall(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_containsAnyCall(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_containsAnyCall,2,0) {(void*) boxptr_Expression_containsAnyCall,0}};
#define boxvar_Expression_containsAnyCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_containsAnyCall)


DLLDirection
modelica_boolean omc_Expression_isScalar(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isScalar(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isScalar,2,0) {(void*) boxptr_Expression_isScalar,0}};
#define boxvar_Expression_isScalar MMC_REFSTRUCTLIT(boxvar_lit_Expression_isScalar)


DLLDirection
modelica_metatype omc_Expression_expandRange(threadData_t *threadData, modelica_metatype _inRange);
#define boxptr_Expression_expandRange omc_Expression_expandRange
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expandRange,2,0) {(void*) boxptr_Expression_expandRange,0}};
#define boxvar_Expression_expandRange MMC_REFSTRUCTLIT(boxvar_lit_Expression_expandRange)


DLLDirection
modelica_metatype omc_Expression_typeCastElements(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inType);
#define boxptr_Expression_typeCastElements omc_Expression_typeCastElements
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_typeCastElements,2,0) {(void*) boxptr_Expression_typeCastElements,0}};
#define boxvar_Expression_typeCastElements MMC_REFSTRUCTLIT(boxvar_lit_Expression_typeCastElements)


DLLDirection
modelica_metatype omc_Expression_typeCast(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inType);
#define boxptr_Expression_typeCast omc_Expression_typeCast
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_typeCast,2,0) {(void*) boxptr_Expression_typeCast,0}};
#define boxvar_Expression_typeCast MMC_REFSTRUCTLIT(boxvar_lit_Expression_typeCast)


DLLDirection
modelica_boolean omc_Expression_isAsubExp(threadData_t *threadData, modelica_metatype _expIn);
DLLDirection
modelica_metatype boxptr_Expression_isAsubExp(threadData_t *threadData, modelica_metatype _expIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isAsubExp,2,0) {(void*) boxptr_Expression_isAsubExp,0}};
#define boxvar_Expression_isAsubExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_isAsubExp)


DLLDirection
modelica_metatype omc_Expression_createResidualExp3(threadData_t *threadData, modelica_metatype _iExp1, modelica_metatype _iExp2, modelica_metatype *out_oExp2, modelica_boolean *out_con);
DLLDirection
modelica_metatype boxptr_Expression_createResidualExp3(threadData_t *threadData, modelica_metatype _iExp1, modelica_metatype _iExp2, modelica_metatype *out_oExp2, modelica_metatype *out_con);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_createResidualExp3,2,0) {(void*) boxptr_Expression_createResidualExp3,0}};
#define boxvar_Expression_createResidualExp3 MMC_REFSTRUCTLIT(boxvar_lit_Expression_createResidualExp3)


#define boxptr_Expression_createResidualExp2 omc_Expression_createResidualExp2


#define boxptr_Expression_moveDivToMul omc_Expression_moveDivToMul


DLLDirection
modelica_metatype omc_Expression_makeFraction(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype *out_d);
#define boxptr_Expression_makeFraction omc_Expression_makeFraction
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeFraction,2,0) {(void*) boxptr_Expression_makeFraction,0}};
#define boxvar_Expression_makeFraction MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeFraction)


DLLDirection
modelica_metatype omc_Expression_createResidualExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
#define boxptr_Expression_createResidualExp omc_Expression_createResidualExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_createResidualExp,2,0) {(void*) boxptr_Expression_createResidualExp,0}};
#define boxvar_Expression_createResidualExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_createResidualExp)


DLLDirection
modelica_metatype omc_Expression_dimensionSizeSubscripts(threadData_t *threadData, modelica_integer _inDimSize);
DLLDirection
modelica_metatype boxptr_Expression_dimensionSizeSubscripts(threadData_t *threadData, modelica_metatype _inDimSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeSubscripts,2,0) {(void*) boxptr_Expression_dimensionSizeSubscripts,0}};
#define boxvar_Expression_dimensionSizeSubscripts MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeSubscripts)


DLLDirection
modelica_metatype omc_Expression_dimensionSizesSubcriptsOpt(threadData_t *threadData, modelica_metatype _inDimSizes);
#define boxptr_Expression_dimensionSizesSubcriptsOpt omc_Expression_dimensionSizesSubcriptsOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSizesSubcriptsOpt,2,0) {(void*) boxptr_Expression_dimensionSizesSubcriptsOpt,0}};
#define boxvar_Expression_dimensionSizesSubcriptsOpt MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSizesSubcriptsOpt)


DLLDirection
modelica_metatype omc_Expression_dimensionSizesSubscripts(threadData_t *threadData, modelica_metatype _inDimSizes);
#define boxptr_Expression_dimensionSizesSubscripts omc_Expression_dimensionSizesSubscripts
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSizesSubscripts,2,0) {(void*) boxptr_Expression_dimensionSizesSubscripts,0}};
#define boxvar_Expression_dimensionSizesSubscripts MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSizesSubscripts)


DLLDirection
modelica_metatype omc_Expression_expandSliceExp(threadData_t *threadData, modelica_metatype _inSliceExp);
#define boxptr_Expression_expandSliceExp omc_Expression_expandSliceExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expandSliceExp,2,0) {(void*) boxptr_Expression_expandSliceExp,0}};
#define boxvar_Expression_expandSliceExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_expandSliceExp)


DLLDirection
modelica_metatype omc_Expression_expandDimension(threadData_t *threadData, modelica_metatype _inDimension);
#define boxptr_Expression_expandDimension omc_Expression_expandDimension
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expandDimension,2,0) {(void*) boxptr_Expression_expandDimension,0}};
#define boxvar_Expression_expandDimension MMC_REFSTRUCTLIT(boxvar_lit_Expression_expandDimension)


DLLDirection
modelica_metatype omc_Expression_expandSubscript(threadData_t *threadData, modelica_metatype _inSubscript, modelica_metatype _inDimension);
#define boxptr_Expression_expandSubscript omc_Expression_expandSubscript
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expandSubscript,2,0) {(void*) boxptr_Expression_expandSubscript,0}};
#define boxvar_Expression_expandSubscript MMC_REFSTRUCTLIT(boxvar_lit_Expression_expandSubscript)


DLLDirection
modelica_metatype omc_Expression_rangesToSubscripts(threadData_t *threadData, modelica_metatype _inRangelist);
#define boxptr_Expression_rangesToSubscripts omc_Expression_rangesToSubscripts
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_rangesToSubscripts,2,0) {(void*) boxptr_Expression_rangesToSubscripts,0}};
#define boxvar_Expression_rangesToSubscripts MMC_REFSTRUCTLIT(boxvar_lit_Expression_rangesToSubscripts)


DLLDirection
modelica_metatype omc_Expression_extendArrExp(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _inExpanded, modelica_boolean *out_outExpanded);
DLLDirection
modelica_metatype boxptr_Expression_extendArrExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExpanded, modelica_metatype *out_outExpanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_extendArrExp,2,0) {(void*) boxptr_Expression_extendArrExp,0}};
#define boxvar_Expression_extendArrExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_extendArrExp)


DLLDirection
modelica_metatype omc_Expression_expandExpression(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _expandRecord);
DLLDirection
modelica_metatype boxptr_Expression_expandExpression(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _expandRecord);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expandExpression,2,0) {(void*) boxptr_Expression_expandExpression,0}};
#define boxvar_Expression_expandExpression MMC_REFSTRUCTLIT(boxvar_lit_Expression_expandExpression)


DLLDirection
modelica_metatype omc_Expression_expandCrefs(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _expandRecord, modelica_integer __omcQ_24in_5Fdummy, modelica_integer *out_dummy);
DLLDirection
modelica_metatype boxptr_Expression_expandCrefs(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _expandRecord, modelica_metatype __omcQ_24in_5Fdummy, modelica_metatype *out_dummy);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expandCrefs,2,0) {(void*) boxptr_Expression_expandCrefs,0}};
#define boxvar_Expression_expandCrefs MMC_REFSTRUCTLIT(boxvar_lit_Expression_expandCrefs)


DLLDirection
modelica_metatype omc_Expression_makeVectorCall(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _tp);
#define boxptr_Expression_makeVectorCall omc_Expression_makeVectorCall
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeVectorCall,2,0) {(void*) boxptr_Expression_makeVectorCall,0}};
#define boxvar_Expression_makeVectorCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeVectorCall)


DLLDirection
modelica_metatype omc_Expression_emptyToWild(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_Expression_emptyToWild omc_Expression_emptyToWild
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_emptyToWild,2,0) {(void*) boxptr_Expression_emptyToWild,0}};
#define boxvar_Expression_emptyToWild MMC_REFSTRUCTLIT(boxvar_lit_Expression_emptyToWild)


DLLDirection
modelica_metatype omc_Expression_renameExpCrefIdent(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
#define boxptr_Expression_renameExpCrefIdent omc_Expression_renameExpCrefIdent
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_renameExpCrefIdent,2,0) {(void*) boxptr_Expression_renameExpCrefIdent,0}};
#define boxvar_Expression_renameExpCrefIdent MMC_REFSTRUCTLIT(boxvar_lit_Expression_renameExpCrefIdent)


DLLDirection
modelica_boolean omc_Expression_isCrefListWithEqualIdents(threadData_t *threadData, modelica_metatype _iExpressions);
DLLDirection
modelica_metatype boxptr_Expression_isCrefListWithEqualIdents(threadData_t *threadData, modelica_metatype _iExpressions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isCrefListWithEqualIdents,2,0) {(void*) boxptr_Expression_isCrefListWithEqualIdents,0}};
#define boxvar_Expression_isCrefListWithEqualIdents MMC_REFSTRUCTLIT(boxvar_lit_Expression_isCrefListWithEqualIdents)


DLLDirection
modelica_metatype omc_Expression_expDimensionsList(threadData_t *threadData, modelica_metatype _inDims);
#define boxptr_Expression_expDimensionsList omc_Expression_expDimensionsList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expDimensionsList,2,0) {(void*) boxptr_Expression_expDimensionsList,0}};
#define boxvar_Expression_expDimensionsList MMC_REFSTRUCTLIT(boxvar_lit_Expression_expDimensionsList)


DLLDirection
modelica_boolean omc_Expression_hasZeroDimension(threadData_t *threadData, modelica_metatype _inDims);
DLLDirection
modelica_metatype boxptr_Expression_hasZeroDimension(threadData_t *threadData, modelica_metatype _inDims);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_hasZeroDimension,2,0) {(void*) boxptr_Expression_hasZeroDimension,0}};
#define boxvar_Expression_hasZeroDimension MMC_REFSTRUCTLIT(boxvar_lit_Expression_hasZeroDimension)


DLLDirection
modelica_metatype omc_Expression_dimensionsList(threadData_t *threadData, modelica_metatype _inDims);
#define boxptr_Expression_dimensionsList omc_Expression_dimensionsList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsList,2,0) {(void*) boxptr_Expression_dimensionsList,0}};
#define boxvar_Expression_dimensionsList MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsList)


DLLDirection
modelica_boolean omc_Expression_checkDimensionSizes(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_Expression_checkDimensionSizes(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_checkDimensionSizes,2,0) {(void*) boxptr_Expression_checkDimensionSizes,0}};
#define boxvar_Expression_checkDimensionSizes MMC_REFSTRUCTLIT(boxvar_lit_Expression_checkDimensionSizes)


DLLDirection
modelica_boolean omc_Expression_checkExpDimensionSizes(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_Expression_checkExpDimensionSizes(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_checkExpDimensionSizes,2,0) {(void*) boxptr_Expression_checkExpDimensionSizes,0}};
#define boxvar_Expression_checkExpDimensionSizes MMC_REFSTRUCTLIT(boxvar_lit_Expression_checkExpDimensionSizes)


DLLDirection
modelica_metatype omc_Expression_makeBinaryExp(threadData_t *threadData, modelica_metatype _inLhs, modelica_metatype _inOp, modelica_metatype _inRhs);
#define boxptr_Expression_makeBinaryExp omc_Expression_makeBinaryExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeBinaryExp,2,0) {(void*) boxptr_Expression_makeBinaryExp,0}};
#define boxvar_Expression_makeBinaryExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeBinaryExp)


DLLDirection
modelica_metatype omc_Expression_replaceDerOpInExpTraverser(threadData_t *threadData, modelica_metatype _e, modelica_metatype _optCr, modelica_metatype *out_outCr);
#define boxptr_Expression_replaceDerOpInExpTraverser omc_Expression_replaceDerOpInExpTraverser
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_replaceDerOpInExpTraverser,2,0) {(void*) boxptr_Expression_replaceDerOpInExpTraverser,0}};
#define boxvar_Expression_replaceDerOpInExpTraverser MMC_REFSTRUCTLIT(boxvar_lit_Expression_replaceDerOpInExpTraverser)


DLLDirection
modelica_metatype omc_Expression_replaceDerOpInExpCond(threadData_t *threadData, modelica_metatype _e, modelica_metatype _cr, modelica_metatype *out_outCr);
#define boxptr_Expression_replaceDerOpInExpCond omc_Expression_replaceDerOpInExpCond
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_replaceDerOpInExpCond,2,0) {(void*) boxptr_Expression_replaceDerOpInExpCond,0}};
#define boxvar_Expression_replaceDerOpInExpCond MMC_REFSTRUCTLIT(boxvar_lit_Expression_replaceDerOpInExpCond)


DLLDirection
modelica_metatype omc_Expression_replaceDerOpInExp(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_replaceDerOpInExp omc_Expression_replaceDerOpInExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_replaceDerOpInExp,2,0) {(void*) boxptr_Expression_replaceDerOpInExp,0}};
#define boxvar_Expression_replaceDerOpInExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_replaceDerOpInExp)


#define boxptr_Expression_fromAbsynOperator omc_Expression_fromAbsynOperator


#define boxptr_Expression_fromAbsynExpOpt omc_Expression_fromAbsynExpOpt


DLLDirection
modelica_metatype omc_Expression_fargsToExps(threadData_t *threadData, modelica_metatype _inFargs);
#define boxptr_Expression_fargsToExps omc_Expression_fargsToExps
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_fargsToExps,2,0) {(void*) boxptr_Expression_fargsToExps,0}};
#define boxvar_Expression_fargsToExps MMC_REFSTRUCTLIT(boxvar_lit_Expression_fargsToExps)


DLLDirection
modelica_metatype omc_Expression_fromAbsynExp(threadData_t *threadData, modelica_metatype _inAExp);
#define boxptr_Expression_fromAbsynExp omc_Expression_fromAbsynExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_fromAbsynExp,2,0) {(void*) boxptr_Expression_fromAbsynExp,0}};
#define boxvar_Expression_fromAbsynExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_fromAbsynExp)


DLLDirection
modelica_metatype omc_Expression_arrayContent(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_arrayContent omc_Expression_arrayContent
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayContent,2,0) {(void*) boxptr_Expression_arrayContent,0}};
#define boxvar_Expression_arrayContent MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayContent)


DLLDirection
modelica_metatype omc_Expression_arrayElements(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_arrayElements omc_Expression_arrayElements
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayElements,2,0) {(void*) boxptr_Expression_arrayElements,0}};
#define boxvar_Expression_arrayElements MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayElements)


DLLDirection
modelica_metatype omc_Expression_getCrefFromCrefOrAsub(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_Expression_getCrefFromCrefOrAsub omc_Expression_getCrefFromCrefOrAsub
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getCrefFromCrefOrAsub,2,0) {(void*) boxptr_Expression_getCrefFromCrefOrAsub,0}};
#define boxvar_Expression_getCrefFromCrefOrAsub MMC_REFSTRUCTLIT(boxvar_lit_Expression_getCrefFromCrefOrAsub)


DLLDirection
modelica_metatype omc_Expression_transposeArray(threadData_t *threadData, modelica_metatype _inArray, modelica_boolean *out_outWasTransposed);
DLLDirection
modelica_metatype boxptr_Expression_transposeArray(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype *out_outWasTransposed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_transposeArray,2,0) {(void*) boxptr_Expression_transposeArray,0}};
#define boxvar_Expression_transposeArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_transposeArray)


DLLDirection
modelica_metatype omc_Expression_matrixToArray(threadData_t *threadData, modelica_metatype _inMatrix);
#define boxptr_Expression_matrixToArray omc_Expression_matrixToArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_matrixToArray,2,0) {(void*) boxptr_Expression_matrixToArray,0}};
#define boxvar_Expression_matrixToArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_matrixToArray)


DLLDirection
modelica_integer omc_Expression_hashExp(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_hashExp(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_hashExp,2,0) {(void*) boxptr_Expression_hashExp,0}};
#define boxvar_Expression_hashExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_hashExp)


#define boxptr_Expression_promoteExp3 omc_Expression_promoteExp3


#define boxptr_Expression_makePromotedTypes omc_Expression_makePromotedTypes


DLLDirection
modelica_metatype omc_Expression_promoteExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inType, modelica_integer _inDims, modelica_metatype *out_outType);
DLLDirection
modelica_metatype boxptr_Expression_promoteExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inType, modelica_metatype _inDims, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_promoteExp,2,0) {(void*) boxptr_Expression_promoteExp,0}};
#define boxvar_Expression_promoteExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_promoteExp)


DLLDirection
modelica_boolean omc_Expression_equationExpEqual(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
DLLDirection
modelica_metatype boxptr_Expression_equationExpEqual(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_equationExpEqual,2,0) {(void*) boxptr_Expression_equationExpEqual,0}};
#define boxvar_Expression_equationExpEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_equationExpEqual)


DLLDirection
modelica_metatype omc_Expression_splitArray(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_didSplit);
DLLDirection
modelica_metatype boxptr_Expression_splitArray(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_didSplit);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_splitArray,2,0) {(void*) boxptr_Expression_splitArray,0}};
#define boxvar_Expression_splitArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_splitArray)


#define boxptr_Expression_splitRecord2 omc_Expression_splitRecord2


DLLDirection
modelica_metatype omc_Expression_splitRecord(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _ty);
#define boxptr_Expression_splitRecord omc_Expression_splitRecord
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_splitRecord,2,0) {(void*) boxptr_Expression_splitRecord,0}};
#define boxvar_Expression_splitRecord MMC_REFSTRUCTLIT(boxvar_lit_Expression_splitRecord)


DLLDirection
modelica_metatype omc_Expression_dimensionsToExps(threadData_t *threadData, modelica_metatype _dims);
#define boxptr_Expression_dimensionsToExps omc_Expression_dimensionsToExps
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsToExps,2,0) {(void*) boxptr_Expression_dimensionsToExps,0}};
#define boxvar_Expression_dimensionsToExps MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsToExps)


DLLDirection
modelica_boolean omc_Expression_isNotWild(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_Expression_isNotWild(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isNotWild,2,0) {(void*) boxptr_Expression_isNotWild,0}};
#define boxvar_Expression_isNotWild MMC_REFSTRUCTLIT(boxvar_lit_Expression_isNotWild)


DLLDirection
modelica_boolean omc_Expression_isWild(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_Expression_isWild(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isWild,2,0) {(void*) boxptr_Expression_isWild,0}};
#define boxvar_Expression_isWild MMC_REFSTRUCTLIT(boxvar_lit_Expression_isWild)


DLLDirection
modelica_integer omc_Expression_priority(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _inLhs);
DLLDirection
modelica_metatype boxptr_Expression_priority(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inLhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_priority,2,0) {(void*) boxptr_Expression_priority,0}};
#define boxvar_Expression_priority MMC_REFSTRUCTLIT(boxvar_lit_Expression_priority)


DLLDirection
modelica_boolean omc_Expression_shouldParenthesize(threadData_t *threadData, modelica_metatype _inOperand, modelica_metatype _inOperator, modelica_boolean _inLhs);
DLLDirection
modelica_metatype boxptr_Expression_shouldParenthesize(threadData_t *threadData, modelica_metatype _inOperand, modelica_metatype _inOperator, modelica_metatype _inLhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_shouldParenthesize,2,0) {(void*) boxptr_Expression_shouldParenthesize,0}};
#define boxvar_Expression_shouldParenthesize MMC_REFSTRUCTLIT(boxvar_lit_Expression_shouldParenthesize)


DLLDirection
modelica_metatype omc_Expression_makeEnumLiterals(threadData_t *threadData, modelica_metatype _inTypeName, modelica_metatype _inLiterals);
#define boxptr_Expression_makeEnumLiterals omc_Expression_makeEnumLiterals
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeEnumLiterals,2,0) {(void*) boxptr_Expression_makeEnumLiterals,0}};
#define boxvar_Expression_makeEnumLiterals MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeEnumLiterals)


DLLDirection
modelica_integer omc_Expression_dimComplexity(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_Expression_dimComplexity(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimComplexity,2,0) {(void*) boxptr_Expression_dimComplexity,0}};
#define boxvar_Expression_dimComplexity MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimComplexity)


DLLDirection
modelica_integer omc_Expression_complexity(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_Expression_complexity(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_complexity,2,0) {(void*) boxptr_Expression_complexity,0}};
#define boxvar_Expression_complexity MMC_REFSTRUCTLIT(boxvar_lit_Expression_complexity)


DLLDirection
modelica_metatype omc_Expression_complexityTraverse(threadData_t *threadData, modelica_metatype _exp, modelica_integer _complexity, modelica_integer *out_outComplexity);
DLLDirection
modelica_metatype boxptr_Expression_complexityTraverse(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _complexity, modelica_metatype *out_outComplexity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_complexityTraverse,2,0) {(void*) boxptr_Expression_complexityTraverse,0}};
#define boxvar_Expression_complexityTraverse MMC_REFSTRUCTLIT(boxvar_lit_Expression_complexityTraverse)


DLLDirection
modelica_boolean omc_Expression_isTailCall(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_Expression_isTailCall(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isTailCall,2,0) {(void*) boxptr_Expression_isTailCall,0}};
#define boxvar_Expression_isTailCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_isTailCall)


DLLDirection
modelica_string omc_Expression_simpleCrefName(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_Expression_simpleCrefName omc_Expression_simpleCrefName
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_simpleCrefName,2,0) {(void*) boxptr_Expression_simpleCrefName,0}};
#define boxvar_Expression_simpleCrefName MMC_REFSTRUCTLIT(boxvar_lit_Expression_simpleCrefName)


#define boxptr_Expression_traverseReductionIterators omc_Expression_traverseReductionIterators


#define boxptr_Expression_traverseReductionIterator omc_Expression_traverseReductionIterator


#define boxptr_Expression_traverseReductionIteratorsTopDown omc_Expression_traverseReductionIteratorsTopDown


#define boxptr_Expression_traverseReductionIteratorTopDown omc_Expression_traverseReductionIteratorTopDown


#define boxptr_Expression_traverseReductionIteratorBidir omc_Expression_traverseReductionIteratorBidir


DLLDirection
modelica_string omc_Expression_reductionIterName(threadData_t *threadData, modelica_metatype _iter);
#define boxptr_Expression_reductionIterName omc_Expression_reductionIterName
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_reductionIterName,2,0) {(void*) boxptr_Expression_reductionIterName,0}};
#define boxvar_Expression_reductionIterName MMC_REFSTRUCTLIT(boxvar_lit_Expression_reductionIterName)


DLLDirection
modelica_metatype omc_Expression_makeImpureBuiltinCall(threadData_t *threadData, modelica_string _name, modelica_metatype _args, modelica_metatype _result_type);
#define boxptr_Expression_makeImpureBuiltinCall omc_Expression_makeImpureBuiltinCall
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeImpureBuiltinCall,2,0) {(void*) boxptr_Expression_makeImpureBuiltinCall,0}};
#define boxvar_Expression_makeImpureBuiltinCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeImpureBuiltinCall)


DLLDirection
modelica_metatype omc_Expression_makePureBuiltinCall(threadData_t *threadData, modelica_string _name, modelica_metatype _args, modelica_metatype _result_type);
#define boxptr_Expression_makePureBuiltinCall omc_Expression_makePureBuiltinCall
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makePureBuiltinCall,2,0) {(void*) boxptr_Expression_makePureBuiltinCall,0}};
#define boxvar_Expression_makePureBuiltinCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_makePureBuiltinCall)


DLLDirection
modelica_metatype omc_Expression_makeBuiltinCall(threadData_t *threadData, modelica_string _name, modelica_metatype _args, modelica_metatype _result_type, modelica_boolean _isImpure);
DLLDirection
modelica_metatype boxptr_Expression_makeBuiltinCall(threadData_t *threadData, modelica_metatype _name, modelica_metatype _args, modelica_metatype _result_type, modelica_metatype _isImpure);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeBuiltinCall,2,0) {(void*) boxptr_Expression_makeBuiltinCall,0}};
#define boxvar_Expression_makeBuiltinCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeBuiltinCall)


DLLDirection
modelica_metatype omc_Expression_makeCons(threadData_t *threadData, modelica_metatype _car, modelica_metatype _cdr);
#define boxptr_Expression_makeCons omc_Expression_makeCons
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeCons,2,0) {(void*) boxptr_Expression_makeCons,0}};
#define boxvar_Expression_makeCons MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeCons)


DLLDirection
modelica_boolean omc_Expression_isBuiltinFunctionReference(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_Expression_isBuiltinFunctionReference(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isBuiltinFunctionReference,2,0) {(void*) boxptr_Expression_isBuiltinFunctionReference,0}};
#define boxvar_Expression_isBuiltinFunctionReference MMC_REFSTRUCTLIT(boxvar_lit_Expression_isBuiltinFunctionReference)


DLLDirection
modelica_metatype omc_Expression_hasNoSideEffects(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _ib, modelica_boolean *out_ob);
DLLDirection
modelica_metatype boxptr_Expression_hasNoSideEffects(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _ib, modelica_metatype *out_ob);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_hasNoSideEffects,2,0) {(void*) boxptr_Expression_hasNoSideEffects,0}};
#define boxvar_Expression_hasNoSideEffects MMC_REFSTRUCTLIT(boxvar_lit_Expression_hasNoSideEffects)


DLLDirection
modelica_boolean omc_Expression_subscriptContain(threadData_t *threadData, modelica_metatype _issl1, modelica_metatype _issl2);
DLLDirection
modelica_metatype boxptr_Expression_subscriptContain(threadData_t *threadData, modelica_metatype _issl1, modelica_metatype _issl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptContain,2,0) {(void*) boxptr_Expression_subscriptContain,0}};
#define boxvar_Expression_subscriptContain MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptContain)


DLLDirection
modelica_boolean omc_Expression_isValidSubscript(threadData_t *threadData, modelica_metatype _inSub);
DLLDirection
modelica_metatype boxptr_Expression_isValidSubscript(threadData_t *threadData, modelica_metatype _inSub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isValidSubscript,2,0) {(void*) boxptr_Expression_isValidSubscript,0}};
#define boxvar_Expression_isValidSubscript MMC_REFSTRUCTLIT(boxvar_lit_Expression_isValidSubscript)


DLLDirection
modelica_boolean omc_Expression_subscriptConstants(threadData_t *threadData, modelica_metatype _inSubs);
DLLDirection
modelica_metatype boxptr_Expression_subscriptConstants(threadData_t *threadData, modelica_metatype _inSubs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptConstants,2,0) {(void*) boxptr_Expression_subscriptConstants,0}};
#define boxvar_Expression_subscriptConstants MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptConstants)


DLLDirection
modelica_boolean omc_Expression_subscriptEqual(threadData_t *threadData, modelica_metatype _inSubscriptLst1, modelica_metatype _inSubscriptLst2);
DLLDirection
modelica_metatype boxptr_Expression_subscriptEqual(threadData_t *threadData, modelica_metatype _inSubscriptLst1, modelica_metatype _inSubscriptLst2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptEqual,2,0) {(void*) boxptr_Expression_subscriptEqual,0}};
#define boxvar_Expression_subscriptEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptEqual)


DLLDirection
modelica_boolean omc_Expression_hasUnknownDims(threadData_t *threadData, modelica_metatype _dims);
DLLDirection
modelica_metatype boxptr_Expression_hasUnknownDims(threadData_t *threadData, modelica_metatype _dims);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_hasUnknownDims,2,0) {(void*) boxptr_Expression_hasUnknownDims,0}};
#define boxvar_Expression_hasUnknownDims MMC_REFSTRUCTLIT(boxvar_lit_Expression_hasUnknownDims)


DLLDirection
modelica_boolean omc_Expression_dimensionUnknown(threadData_t *threadData, modelica_metatype _inDimension);
DLLDirection
modelica_metatype boxptr_Expression_dimensionUnknown(threadData_t *threadData, modelica_metatype _inDimension);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionUnknown,2,0) {(void*) boxptr_Expression_dimensionUnknown,0}};
#define boxvar_Expression_dimensionUnknown MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionUnknown)


DLLDirection
modelica_boolean omc_Expression_dimensionUnknownOrExp(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_Expression_dimensionUnknownOrExp(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionUnknownOrExp,2,0) {(void*) boxptr_Expression_dimensionUnknownOrExp,0}};
#define boxvar_Expression_dimensionUnknownOrExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionUnknownOrExp)


DLLDirection
modelica_boolean omc_Expression_dimensionsKnownAndNonZero(threadData_t *threadData, modelica_metatype _dims);
DLLDirection
modelica_metatype boxptr_Expression_dimensionsKnownAndNonZero(threadData_t *threadData, modelica_metatype _dims);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsKnownAndNonZero,2,0) {(void*) boxptr_Expression_dimensionsKnownAndNonZero,0}};
#define boxvar_Expression_dimensionsKnownAndNonZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsKnownAndNonZero)


DLLDirection
modelica_boolean omc_Expression_dimensionKnownAndNonZero(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_Expression_dimensionKnownAndNonZero(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionKnownAndNonZero,2,0) {(void*) boxptr_Expression_dimensionKnownAndNonZero,0}};
#define boxvar_Expression_dimensionKnownAndNonZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionKnownAndNonZero)


DLLDirection
modelica_boolean omc_Expression_dimensionKnown(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_Expression_dimensionKnown(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionKnown,2,0) {(void*) boxptr_Expression_dimensionKnown,0}};
#define boxvar_Expression_dimensionKnown MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionKnown)


DLLDirection
modelica_boolean omc_Expression_dimensionsKnownAndEqual(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
DLLDirection
modelica_metatype boxptr_Expression_dimensionsKnownAndEqual(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsKnownAndEqual,2,0) {(void*) boxptr_Expression_dimensionsKnownAndEqual,0}};
#define boxvar_Expression_dimensionsKnownAndEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsKnownAndEqual)


DLLDirection
modelica_boolean omc_Expression_dimensionsEqualAllowZero(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
DLLDirection
modelica_metatype boxptr_Expression_dimensionsEqualAllowZero(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsEqualAllowZero,2,0) {(void*) boxptr_Expression_dimensionsEqualAllowZero,0}};
#define boxvar_Expression_dimensionsEqualAllowZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsEqualAllowZero)


DLLDirection
modelica_boolean omc_Expression_dimsEqualAllowZero(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2);
DLLDirection
modelica_metatype boxptr_Expression_dimsEqualAllowZero(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimsEqualAllowZero,2,0) {(void*) boxptr_Expression_dimsEqualAllowZero,0}};
#define boxvar_Expression_dimsEqualAllowZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimsEqualAllowZero)


DLLDirection
modelica_boolean omc_Expression_dimsEqual(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2);
DLLDirection
modelica_metatype boxptr_Expression_dimsEqual(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimsEqual,2,0) {(void*) boxptr_Expression_dimsEqual,0}};
#define boxvar_Expression_dimsEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimsEqual)


DLLDirection
modelica_boolean omc_Expression_dimensionsEqual(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
DLLDirection
modelica_metatype boxptr_Expression_dimensionsEqual(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsEqual,2,0) {(void*) boxptr_Expression_dimensionsEqual,0}};
#define boxvar_Expression_dimensionsEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsEqual)


DLLDirection
modelica_boolean omc_Expression_isRealType(threadData_t *threadData, modelica_metatype _inType);
DLLDirection
modelica_metatype boxptr_Expression_isRealType(threadData_t *threadData, modelica_metatype _inType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isRealType,2,0) {(void*) boxptr_Expression_isRealType,0}};
#define boxvar_Expression_isRealType MMC_REFSTRUCTLIT(boxvar_lit_Expression_isRealType)


DLLDirection
modelica_boolean omc_Expression_isNotComplex(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_isNotComplex(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isNotComplex,2,0) {(void*) boxptr_Expression_isNotComplex,0}};
#define boxvar_Expression_isNotComplex MMC_REFSTRUCTLIT(boxvar_lit_Expression_isNotComplex)


DLLDirection
modelica_boolean omc_Expression_isRecordType(threadData_t *threadData, modelica_metatype _inType);
DLLDirection
modelica_metatype boxptr_Expression_isRecordType(threadData_t *threadData, modelica_metatype _inType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isRecordType,2,0) {(void*) boxptr_Expression_isRecordType,0}};
#define boxvar_Expression_isRecordType MMC_REFSTRUCTLIT(boxvar_lit_Expression_isRecordType)


DLLDirection
modelica_boolean omc_Expression_isArrayType(threadData_t *threadData, modelica_metatype _inType);
DLLDirection
modelica_metatype boxptr_Expression_isArrayType(threadData_t *threadData, modelica_metatype _inType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isArrayType,2,0) {(void*) boxptr_Expression_isArrayType,0}};
#define boxvar_Expression_isArrayType MMC_REFSTRUCTLIT(boxvar_lit_Expression_isArrayType)


DLLDirection
modelica_boolean omc_Expression_arrayContainWholeDimension(threadData_t *threadData, modelica_metatype _inDim);
DLLDirection
modelica_metatype boxptr_Expression_arrayContainWholeDimension(threadData_t *threadData, modelica_metatype _inDim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayContainWholeDimension,2,0) {(void*) boxptr_Expression_arrayContainWholeDimension,0}};
#define boxvar_Expression_arrayContainWholeDimension MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayContainWholeDimension)


DLLDirection
modelica_boolean omc_Expression_arrayContainZeroDimension(threadData_t *threadData, modelica_metatype _inDimensions);
DLLDirection
modelica_metatype boxptr_Expression_arrayContainZeroDimension(threadData_t *threadData, modelica_metatype _inDimensions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayContainZeroDimension,2,0) {(void*) boxptr_Expression_arrayContainZeroDimension,0}};
#define boxvar_Expression_arrayContainZeroDimension MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayContainZeroDimension)


DLLDirection
modelica_integer omc_Expression_operatorCompare(threadData_t *threadData, modelica_metatype _inOperator1, modelica_metatype _inOperator2);
DLLDirection
modelica_metatype boxptr_Expression_operatorCompare(threadData_t *threadData, modelica_metatype _inOperator1, modelica_metatype _inOperator2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_operatorCompare,2,0) {(void*) boxptr_Expression_operatorCompare,0}};
#define boxvar_Expression_operatorCompare MMC_REFSTRUCTLIT(boxvar_lit_Expression_operatorCompare)


DLLDirection
modelica_boolean omc_Expression_operatorEqual(threadData_t *threadData, modelica_metatype _inOperator1, modelica_metatype _inOperator2);
DLLDirection
modelica_metatype boxptr_Expression_operatorEqual(threadData_t *threadData, modelica_metatype _inOperator1, modelica_metatype _inOperator2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_operatorEqual,2,0) {(void*) boxptr_Expression_operatorEqual,0}};
#define boxvar_Expression_operatorEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_operatorEqual)


DLLDirection
modelica_boolean omc_Expression_isExpIfExp(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_isExpIfExp(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isExpIfExp,2,0) {(void*) boxptr_Expression_isExpIfExp,0}};
#define boxvar_Expression_isExpIfExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_isExpIfExp)


DLLDirection
modelica_boolean omc_Expression_isExpCrefOrIfExp(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_isExpCrefOrIfExp(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isExpCrefOrIfExp,2,0) {(void*) boxptr_Expression_isExpCrefOrIfExp,0}};
#define boxvar_Expression_isExpCrefOrIfExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_isExpCrefOrIfExp)


DLLDirection
modelica_boolean omc_Expression_isExpCref(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_isExpCref(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isExpCref,2,0) {(void*) boxptr_Expression_isExpCref,0}};
#define boxvar_Expression_isExpCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_isExpCref)


DLLDirection
modelica_boolean omc_Expression_containsExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
DLLDirection
modelica_metatype boxptr_Expression_containsExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_containsExp,2,0) {(void*) boxptr_Expression_containsExp,0}};
#define boxvar_Expression_containsExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_containsExp)


DLLDirection
modelica_boolean omc_Expression_expContains(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
DLLDirection
modelica_metatype boxptr_Expression_expContains(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expContains,2,0) {(void*) boxptr_Expression_expContains,0}};
#define boxvar_Expression_expContains MMC_REFSTRUCTLIT(boxvar_lit_Expression_expContains)


DLLDirection
modelica_boolean omc_Expression_expContainsList(threadData_t *threadData, modelica_metatype _expl, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_Expression_expContainsList(threadData_t *threadData, modelica_metatype _expl, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expContainsList,2,0) {(void*) boxptr_Expression_expContainsList,0}};
#define boxvar_Expression_expContainsList MMC_REFSTRUCTLIT(boxvar_lit_Expression_expContainsList)


DLLDirection
modelica_boolean omc_Expression_expStructuralEqualList(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
DLLDirection
modelica_metatype boxptr_Expression_expStructuralEqualList(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expStructuralEqualList,2,0) {(void*) boxptr_Expression_expStructuralEqualList,0}};
#define boxvar_Expression_expStructuralEqualList MMC_REFSTRUCTLIT(boxvar_lit_Expression_expStructuralEqualList)


DLLDirection
modelica_boolean omc_Expression_expStructuralEqual(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
DLLDirection
modelica_metatype boxptr_Expression_expStructuralEqual(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expStructuralEqual,2,0) {(void*) boxptr_Expression_expStructuralEqual,0}};
#define boxvar_Expression_expStructuralEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_expStructuralEqual)


DLLDirection
modelica_boolean omc_Expression_expEqual(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
DLLDirection
modelica_metatype boxptr_Expression_expEqual(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expEqual,2,0) {(void*) boxptr_Expression_expEqual,0}};
#define boxvar_Expression_expEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_expEqual)


DLLDirection
modelica_boolean omc_Expression_isIntegerOrReal(threadData_t *threadData, modelica_metatype _tp);
DLLDirection
modelica_metatype boxptr_Expression_isIntegerOrReal(threadData_t *threadData, modelica_metatype _tp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isIntegerOrReal,2,0) {(void*) boxptr_Expression_isIntegerOrReal,0}};
#define boxvar_Expression_isIntegerOrReal MMC_REFSTRUCTLIT(boxvar_lit_Expression_isIntegerOrReal)


DLLDirection
modelica_boolean omc_Expression_isOdd(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_isOdd(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isOdd,2,0) {(void*) boxptr_Expression_isOdd,0}};
#define boxvar_Expression_isOdd MMC_REFSTRUCTLIT(boxvar_lit_Expression_isOdd)


DLLDirection
modelica_boolean omc_Expression_isEven(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_isEven(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isEven,2,0) {(void*) boxptr_Expression_isEven,0}};
#define boxvar_Expression_isEven MMC_REFSTRUCTLIT(boxvar_lit_Expression_isEven)


DLLDirection
modelica_boolean omc_Expression_isScalarConst(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isScalarConst(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isScalarConst,2,0) {(void*) boxptr_Expression_isScalarConst,0}};
#define boxvar_Expression_isScalarConst MMC_REFSTRUCTLIT(boxvar_lit_Expression_isScalarConst)


DLLDirection
modelica_boolean omc_Expression_isRecord(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isRecord(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isRecord,2,0) {(void*) boxptr_Expression_isRecord,0}};
#define boxvar_Expression_isRecord MMC_REFSTRUCTLIT(boxvar_lit_Expression_isRecord)


DLLDirection
modelica_boolean omc_Expression_isTuple(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isTuple(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isTuple,2,0) {(void*) boxptr_Expression_isTuple,0}};
#define boxvar_Expression_isTuple MMC_REFSTRUCTLIT(boxvar_lit_Expression_isTuple)


DLLDirection
modelica_boolean omc_Expression_isCrefScalar(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isCrefScalar(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isCrefScalar,2,0) {(void*) boxptr_Expression_isCrefScalar,0}};
#define boxvar_Expression_isCrefScalar MMC_REFSTRUCTLIT(boxvar_lit_Expression_isCrefScalar)


DLLDirection
modelica_boolean omc_Expression_isCrefArray(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isCrefArray(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isCrefArray,2,0) {(void*) boxptr_Expression_isCrefArray,0}};
#define boxvar_Expression_isCrefArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_isCrefArray)


DLLDirection
modelica_boolean omc_Expression_isNotCref(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isNotCref(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isNotCref,2,0) {(void*) boxptr_Expression_isNotCref,0}};
#define boxvar_Expression_isNotCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_isNotCref)


DLLDirection
modelica_boolean omc_Expression_isRecordCall(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _funcsIn);
DLLDirection
modelica_metatype boxptr_Expression_isRecordCall(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _funcsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isRecordCall,2,0) {(void*) boxptr_Expression_isRecordCall,0}};
#define boxvar_Expression_isRecordCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_isRecordCall)


DLLDirection
modelica_boolean omc_Expression_isImpureCall(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isImpureCall(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isImpureCall,2,0) {(void*) boxptr_Expression_isImpureCall,0}};
#define boxvar_Expression_isImpureCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_isImpureCall)


DLLDirection
modelica_boolean omc_Expression_isPureCall(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isPureCall(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isPureCall,2,0) {(void*) boxptr_Expression_isPureCall,0}};
#define boxvar_Expression_isPureCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_isPureCall)


DLLDirection
modelica_boolean omc_Expression_isTSUB(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isTSUB(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isTSUB,2,0) {(void*) boxptr_Expression_isTSUB,0}};
#define boxvar_Expression_isTSUB MMC_REFSTRUCTLIT(boxvar_lit_Expression_isTSUB)


DLLDirection
modelica_boolean omc_Expression_isCall(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isCall(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isCall,2,0) {(void*) boxptr_Expression_isCall,0}};
#define boxvar_Expression_isCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_isCall)


DLLDirection
modelica_boolean omc_Expression_isUnaryCref(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isUnaryCref(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isUnaryCref,2,0) {(void*) boxptr_Expression_isUnaryCref,0}};
#define boxvar_Expression_isUnaryCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_isUnaryCref)


DLLDirection
modelica_boolean omc_Expression_isCref(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isCref(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isCref,2,0) {(void*) boxptr_Expression_isCref,0}};
#define boxvar_Expression_isCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_isCref)


DLLDirection
modelica_boolean omc_Expression_isNegativeUnary(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isNegativeUnary(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isNegativeUnary,2,0) {(void*) boxptr_Expression_isNegativeUnary,0}};
#define boxvar_Expression_isNegativeUnary MMC_REFSTRUCTLIT(boxvar_lit_Expression_isNegativeUnary)


DLLDirection
modelica_boolean omc_Expression_isBinary(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isBinary(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isBinary,2,0) {(void*) boxptr_Expression_isBinary,0}};
#define boxvar_Expression_isBinary MMC_REFSTRUCTLIT(boxvar_lit_Expression_isBinary)


DLLDirection
modelica_boolean omc_Expression_isUnary(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isUnary(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isUnary,2,0) {(void*) boxptr_Expression_isUnary,0}};
#define boxvar_Expression_isUnary MMC_REFSTRUCTLIT(boxvar_lit_Expression_isUnary)


DLLDirection
modelica_boolean omc_Expression_isVector(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isVector(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isVector,2,0) {(void*) boxptr_Expression_isVector,0}};
#define boxvar_Expression_isVector MMC_REFSTRUCTLIT(boxvar_lit_Expression_isVector)


DLLDirection
modelica_boolean omc_Expression_isMatrix(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isMatrix(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isMatrix,2,0) {(void*) boxptr_Expression_isMatrix,0}};
#define boxvar_Expression_isMatrix MMC_REFSTRUCTLIT(boxvar_lit_Expression_isMatrix)


DLLDirection
modelica_boolean omc_Expression_isMetaArray(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isMetaArray(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isMetaArray,2,0) {(void*) boxptr_Expression_isMetaArray,0}};
#define boxvar_Expression_isMetaArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_isMetaArray)


DLLDirection
modelica_boolean omc_Expression_isArray(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isArray(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isArray,2,0) {(void*) boxptr_Expression_isArray,0}};
#define boxvar_Expression_isArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_isArray)


DLLDirection
modelica_boolean omc_Expression_expIntOrder(threadData_t *threadData, modelica_integer _expectedValue, modelica_metatype _integers);
DLLDirection
modelica_metatype boxptr_Expression_expIntOrder(threadData_t *threadData, modelica_metatype _expectedValue, modelica_metatype _integers);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expIntOrder,2,0) {(void*) boxptr_Expression_expIntOrder,0}};
#define boxvar_Expression_expIntOrder MMC_REFSTRUCTLIT(boxvar_lit_Expression_expIntOrder)


DLLDirection
modelica_boolean omc_Expression_containFunctioncall(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_containFunctioncall(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_containFunctioncall,2,0) {(void*) boxptr_Expression_containFunctioncall,0}};
#define boxvar_Expression_containFunctioncall MMC_REFSTRUCTLIT(boxvar_lit_Expression_containFunctioncall)


DLLDirection
modelica_boolean omc_Expression_containVectorFunctioncall(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_containVectorFunctioncall(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_containVectorFunctioncall,2,0) {(void*) boxptr_Expression_containVectorFunctioncall,0}};
#define boxvar_Expression_containVectorFunctioncall MMC_REFSTRUCTLIT(boxvar_lit_Expression_containVectorFunctioncall)


DLLDirection
modelica_boolean omc_Expression_isLesseqOrLess(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isLesseqOrLess(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isLesseqOrLess,2,0) {(void*) boxptr_Expression_isLesseqOrLess,0}};
#define boxvar_Expression_isLesseqOrLess MMC_REFSTRUCTLIT(boxvar_lit_Expression_isLesseqOrLess)


DLLDirection
modelica_boolean omc_Expression_isGreatereqOrLesseq(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isGreatereqOrLesseq(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isGreatereqOrLesseq,2,0) {(void*) boxptr_Expression_isGreatereqOrLesseq,0}};
#define boxvar_Expression_isGreatereqOrLesseq MMC_REFSTRUCTLIT(boxvar_lit_Expression_isGreatereqOrLesseq)


DLLDirection
modelica_boolean omc_Expression_isConstMinusOne(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isConstMinusOne(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isConstMinusOne,2,0) {(void*) boxptr_Expression_isConstMinusOne,0}};
#define boxvar_Expression_isConstMinusOne MMC_REFSTRUCTLIT(boxvar_lit_Expression_isConstMinusOne)


DLLDirection
modelica_boolean omc_Expression_isConstOne(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isConstOne(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isConstOne,2,0) {(void*) boxptr_Expression_isConstOne,0}};
#define boxvar_Expression_isConstOne MMC_REFSTRUCTLIT(boxvar_lit_Expression_isConstOne)


DLLDirection
modelica_boolean omc_Expression_isConstTrue(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isConstTrue(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isConstTrue,2,0) {(void*) boxptr_Expression_isConstTrue,0}};
#define boxvar_Expression_isConstTrue MMC_REFSTRUCTLIT(boxvar_lit_Expression_isConstTrue)


DLLDirection
modelica_boolean omc_Expression_isConstFalse(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isConstFalse(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isConstFalse,2,0) {(void*) boxptr_Expression_isConstFalse,0}};
#define boxvar_Expression_isConstFalse MMC_REFSTRUCTLIT(boxvar_lit_Expression_isConstFalse)


DLLDirection
modelica_boolean omc_Expression_isConstZeroLength(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isConstZeroLength(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isConstZeroLength,2,0) {(void*) boxptr_Expression_isConstZeroLength,0}};
#define boxvar_Expression_isConstZeroLength MMC_REFSTRUCTLIT(boxvar_lit_Expression_isConstZeroLength)


DLLDirection
modelica_boolean omc_Expression_isExpReal(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_isExpReal(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isExpReal,2,0) {(void*) boxptr_Expression_isExpReal,0}};
#define boxvar_Expression_isExpReal MMC_REFSTRUCTLIT(boxvar_lit_Expression_isExpReal)


DLLDirection
modelica_boolean omc_Expression_isReal(threadData_t *threadData, modelica_metatype _it);
DLLDirection
modelica_metatype boxptr_Expression_isReal(threadData_t *threadData, modelica_metatype _it);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isReal,2,0) {(void*) boxptr_Expression_isReal,0}};
#define boxvar_Expression_isReal MMC_REFSTRUCTLIT(boxvar_lit_Expression_isReal)


DLLDirection
modelica_boolean omc_Expression_isInt(threadData_t *threadData, modelica_metatype _it);
DLLDirection
modelica_metatype boxptr_Expression_isInt(threadData_t *threadData, modelica_metatype _it);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isInt,2,0) {(void*) boxptr_Expression_isInt,0}};
#define boxvar_Expression_isInt MMC_REFSTRUCTLIT(boxvar_lit_Expression_isInt)


DLLDirection
modelica_boolean omc_Expression_isWholeDim(threadData_t *threadData, modelica_metatype _s);
DLLDirection
modelica_metatype boxptr_Expression_isWholeDim(threadData_t *threadData, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isWholeDim,2,0) {(void*) boxptr_Expression_isWholeDim,0}};
#define boxvar_Expression_isWholeDim MMC_REFSTRUCTLIT(boxvar_lit_Expression_isWholeDim)


DLLDirection
modelica_boolean omc_Expression_typeBuiltin(threadData_t *threadData, modelica_metatype _inType);
DLLDirection
modelica_metatype boxptr_Expression_typeBuiltin(threadData_t *threadData, modelica_metatype _inType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_typeBuiltin,2,0) {(void*) boxptr_Expression_typeBuiltin,0}};
#define boxvar_Expression_typeBuiltin MMC_REFSTRUCTLIT(boxvar_lit_Expression_typeBuiltin)


DLLDirection
modelica_boolean omc_Expression_equalTypes(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
DLLDirection
modelica_metatype boxptr_Expression_equalTypes(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_equalTypes,2,0) {(void*) boxptr_Expression_equalTypes,0}};
#define boxvar_Expression_equalTypes MMC_REFSTRUCTLIT(boxvar_lit_Expression_equalTypes)


DLLDirection
modelica_boolean omc_Expression_isFunCall(threadData_t *threadData, modelica_metatype _iExp, modelica_string _name);
DLLDirection
modelica_metatype boxptr_Expression_isFunCall(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isFunCall,2,0) {(void*) boxptr_Expression_isFunCall,0}};
#define boxvar_Expression_isFunCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_isFunCall)


DLLDirection
modelica_boolean omc_Expression_isPow(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isPow(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isPow,2,0) {(void*) boxptr_Expression_isPow,0}};
#define boxvar_Expression_isPow MMC_REFSTRUCTLIT(boxvar_lit_Expression_isPow)


DLLDirection
modelica_boolean omc_Expression_isMulorDivBinary(threadData_t *threadData, modelica_metatype _iExp);
DLLDirection
modelica_metatype boxptr_Expression_isMulorDivBinary(threadData_t *threadData, modelica_metatype _iExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isMulorDivBinary,2,0) {(void*) boxptr_Expression_isMulorDivBinary,0}};
#define boxvar_Expression_isMulorDivBinary MMC_REFSTRUCTLIT(boxvar_lit_Expression_isMulorDivBinary)


DLLDirection
modelica_boolean omc_Expression_isDivBinary(threadData_t *threadData, modelica_metatype _iExp);
DLLDirection
modelica_metatype boxptr_Expression_isDivBinary(threadData_t *threadData, modelica_metatype _iExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isDivBinary,2,0) {(void*) boxptr_Expression_isDivBinary,0}};
#define boxvar_Expression_isDivBinary MMC_REFSTRUCTLIT(boxvar_lit_Expression_isDivBinary)


DLLDirection
modelica_boolean omc_Expression_isDiv(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isDiv(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isDiv,2,0) {(void*) boxptr_Expression_isDiv,0}};
#define boxvar_Expression_isDiv MMC_REFSTRUCTLIT(boxvar_lit_Expression_isDiv)


DLLDirection
modelica_boolean omc_Expression_isMul(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isMul(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isMul,2,0) {(void*) boxptr_Expression_isMul,0}};
#define boxvar_Expression_isMul MMC_REFSTRUCTLIT(boxvar_lit_Expression_isMul)


DLLDirection
modelica_boolean omc_Expression_isMulOrDiv(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isMulOrDiv(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isMulOrDiv,2,0) {(void*) boxptr_Expression_isMulOrDiv,0}};
#define boxvar_Expression_isMulOrDiv MMC_REFSTRUCTLIT(boxvar_lit_Expression_isMulOrDiv)


DLLDirection
modelica_boolean omc_Expression_isAddOrSubBinary(threadData_t *threadData, modelica_metatype _iExp);
DLLDirection
modelica_metatype boxptr_Expression_isAddOrSubBinary(threadData_t *threadData, modelica_metatype _iExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isAddOrSubBinary,2,0) {(void*) boxptr_Expression_isAddOrSubBinary,0}};
#define boxvar_Expression_isAddOrSubBinary MMC_REFSTRUCTLIT(boxvar_lit_Expression_isAddOrSubBinary)


DLLDirection
modelica_boolean omc_Expression_isSub(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isSub(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isSub,2,0) {(void*) boxptr_Expression_isSub,0}};
#define boxvar_Expression_isSub MMC_REFSTRUCTLIT(boxvar_lit_Expression_isSub)


DLLDirection
modelica_boolean omc_Expression_isAdd(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isAdd(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isAdd,2,0) {(void*) boxptr_Expression_isAdd,0}};
#define boxvar_Expression_isAdd MMC_REFSTRUCTLIT(boxvar_lit_Expression_isAdd)


DLLDirection
modelica_boolean omc_Expression_isAddOrSub(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_isAddOrSub(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isAddOrSub,2,0) {(void*) boxptr_Expression_isAddOrSub,0}};
#define boxvar_Expression_isAddOrSub MMC_REFSTRUCTLIT(boxvar_lit_Expression_isAddOrSub)


DLLDirection
modelica_boolean omc_Expression_isEventTriggeringFunctionExp(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isEventTriggeringFunctionExp(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isEventTriggeringFunctionExp,2,0) {(void*) boxptr_Expression_isEventTriggeringFunctionExp,0}};
#define boxvar_Expression_isEventTriggeringFunctionExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_isEventTriggeringFunctionExp)


DLLDirection
modelica_boolean omc_Expression_isRelation(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isRelation(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isRelation,2,0) {(void*) boxptr_Expression_isRelation,0}};
#define boxvar_Expression_isRelation MMC_REFSTRUCTLIT(boxvar_lit_Expression_isRelation)


DLLDirection
modelica_boolean omc_Expression_isNotConst(threadData_t *threadData, modelica_metatype _e);
DLLDirection
modelica_metatype boxptr_Expression_isNotConst(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isNotConst,2,0) {(void*) boxptr_Expression_isNotConst,0}};
#define boxvar_Expression_isNotConst MMC_REFSTRUCTLIT(boxvar_lit_Expression_isNotConst)


DLLDirection
modelica_boolean omc_Expression_isConstWorkList(threadData_t *threadData, modelica_metatype _inExps);
DLLDirection
modelica_metatype boxptr_Expression_isConstWorkList(threadData_t *threadData, modelica_metatype _inExps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isConstWorkList,2,0) {(void*) boxptr_Expression_isConstWorkList,0}};
#define boxvar_Expression_isConstWorkList MMC_REFSTRUCTLIT(boxvar_lit_Expression_isConstWorkList)


DLLDirection
modelica_boolean omc_Expression_isConstValue(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isConstValue(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isConstValue,2,0) {(void*) boxptr_Expression_isConstValue,0}};
#define boxvar_Expression_isConstValue MMC_REFSTRUCTLIT(boxvar_lit_Expression_isConstValue)


DLLDirection
modelica_boolean omc_Expression_isConst(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isConst(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isConst,2,0) {(void*) boxptr_Expression_isConst,0}};
#define boxvar_Expression_isConst MMC_REFSTRUCTLIT(boxvar_lit_Expression_isConst)


DLLDirection
modelica_real omc_Expression_getEvaluatedConstReal(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_getEvaluatedConstReal(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getEvaluatedConstReal,2,0) {(void*) boxptr_Expression_getEvaluatedConstReal,0}};
#define boxvar_Expression_getEvaluatedConstReal MMC_REFSTRUCTLIT(boxvar_lit_Expression_getEvaluatedConstReal)


DLLDirection
modelica_integer omc_Expression_getEvaluatedConstInteger(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_getEvaluatedConstInteger(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getEvaluatedConstInteger,2,0) {(void*) boxptr_Expression_getEvaluatedConstInteger,0}};
#define boxvar_Expression_getEvaluatedConstInteger MMC_REFSTRUCTLIT(boxvar_lit_Expression_getEvaluatedConstInteger)


DLLDirection
modelica_boolean omc_Expression_isEvaluatedConst(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isEvaluatedConst(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isEvaluatedConst,2,0) {(void*) boxptr_Expression_isEvaluatedConst,0}};
#define boxvar_Expression_isEvaluatedConst MMC_REFSTRUCTLIT(boxvar_lit_Expression_isEvaluatedConst)


DLLDirection
modelica_boolean omc_Expression_containsRecordType(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_containsRecordType(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_containsRecordType,2,0) {(void*) boxptr_Expression_containsRecordType,0}};
#define boxvar_Expression_containsRecordType MMC_REFSTRUCTLIT(boxvar_lit_Expression_containsRecordType)


DLLDirection
modelica_boolean omc_Expression_isImpure(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isImpure(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isImpure,2,0) {(void*) boxptr_Expression_isImpure,0}};
#define boxvar_Expression_isImpure MMC_REFSTRUCTLIT(boxvar_lit_Expression_isImpure)


DLLDirection
modelica_boolean omc_Expression_isAtomic(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isAtomic(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isAtomic,2,0) {(void*) boxptr_Expression_isAtomic,0}};
#define boxvar_Expression_isAtomic MMC_REFSTRUCTLIT(boxvar_lit_Expression_isAtomic)


DLLDirection
modelica_boolean omc_Expression_isHalf(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isHalf(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isHalf,2,0) {(void*) boxptr_Expression_isHalf,0}};
#define boxvar_Expression_isHalf MMC_REFSTRUCTLIT(boxvar_lit_Expression_isHalf)


DLLDirection
modelica_boolean omc_Expression_isGreaterOrEqual(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
DLLDirection
modelica_metatype boxptr_Expression_isGreaterOrEqual(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isGreaterOrEqual,2,0) {(void*) boxptr_Expression_isGreaterOrEqual,0}};
#define boxvar_Expression_isGreaterOrEqual MMC_REFSTRUCTLIT(boxvar_lit_Expression_isGreaterOrEqual)


DLLDirection
modelica_boolean omc_Expression_isNegative(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isNegative(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isNegative,2,0) {(void*) boxptr_Expression_isNegative,0}};
#define boxvar_Expression_isNegative MMC_REFSTRUCTLIT(boxvar_lit_Expression_isNegative)


DLLDirection
modelica_boolean omc_Expression_isPositive(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isPositive(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isPositive,2,0) {(void*) boxptr_Expression_isPositive,0}};
#define boxvar_Expression_isPositive MMC_REFSTRUCTLIT(boxvar_lit_Expression_isPositive)


DLLDirection
modelica_boolean omc_Expression_isNegativeOrZero(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isNegativeOrZero(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isNegativeOrZero,2,0) {(void*) boxptr_Expression_isNegativeOrZero,0}};
#define boxvar_Expression_isNegativeOrZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_isNegativeOrZero)


DLLDirection
modelica_boolean omc_Expression_isPositiveOrZero(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isPositiveOrZero(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isPositiveOrZero,2,0) {(void*) boxptr_Expression_isPositiveOrZero,0}};
#define boxvar_Expression_isPositiveOrZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_isPositiveOrZero)


DLLDirection
modelica_boolean omc_Expression_isZeroOrAlmostZero(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _nominal);
DLLDirection
modelica_metatype boxptr_Expression_isZeroOrAlmostZero(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _nominal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isZeroOrAlmostZero,2,0) {(void*) boxptr_Expression_isZeroOrAlmostZero,0}};
#define boxvar_Expression_isZeroOrAlmostZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_isZeroOrAlmostZero)


DLLDirection
modelica_boolean omc_Expression_isZero(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isZero(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isZero,2,0) {(void*) boxptr_Expression_isZero,0}};
#define boxvar_Expression_isZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_isZero)


DLLDirection
modelica_boolean omc_Expression_isOne(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isOne(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isOne,2,0) {(void*) boxptr_Expression_isOne,0}};
#define boxvar_Expression_isOne MMC_REFSTRUCTLIT(boxvar_lit_Expression_isOne)


DLLDirection
modelica_boolean omc_Expression_isReduction(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isReduction(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isReduction,2,0) {(void*) boxptr_Expression_isReduction,0}};
#define boxvar_Expression_isReduction MMC_REFSTRUCTLIT(boxvar_lit_Expression_isReduction)


DLLDirection
modelica_boolean omc_Expression_isRange(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_isRange(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isRange,2,0) {(void*) boxptr_Expression_isRange,0}};
#define boxvar_Expression_isRange MMC_REFSTRUCTLIT(boxvar_lit_Expression_isRange)


DLLDirection
modelica_boolean omc_Expression_operatorDivOrMul(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_Expression_operatorDivOrMul(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_operatorDivOrMul,2,0) {(void*) boxptr_Expression_operatorDivOrMul,0}};
#define boxvar_Expression_operatorDivOrMul MMC_REFSTRUCTLIT(boxvar_lit_Expression_operatorDivOrMul)


DLLDirection
modelica_metatype omc_Expression_traverseExpTopDownSubs(threadData_t *threadData, modelica_metatype _inSubscript, modelica_fnptr _rel, modelica_metatype _iarg, modelica_metatype *out_arg);
#define boxptr_Expression_traverseExpTopDownSubs omc_Expression_traverseExpTopDownSubs
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpTopDownSubs,2,0) {(void*) boxptr_Expression_traverseExpTopDownSubs,0}};
#define boxvar_Expression_traverseExpTopDownSubs MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpTopDownSubs)


#define boxptr_Expression_traverseExpBidirSubs omc_Expression_traverseExpBidirSubs


DLLDirection
modelica_metatype omc_Expression_traverseExpTopDownCrefHelper(threadData_t *threadData, modelica_metatype _inCref, modelica_fnptr _rel, modelica_metatype _iarg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpTopDownCrefHelper omc_Expression_traverseExpTopDownCrefHelper
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpTopDownCrefHelper,2,0) {(void*) boxptr_Expression_traverseExpTopDownCrefHelper,0}};
#define boxvar_Expression_traverseExpTopDownCrefHelper MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpTopDownCrefHelper)


#define boxptr_Expression_traverseExpSubs omc_Expression_traverseExpSubs


DLLDirection
modelica_metatype omc_Expression_traverseExpCref(threadData_t *threadData, modelica_metatype _inCref, modelica_fnptr _rel, modelica_metatype _iarg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpCref omc_Expression_traverseExpCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpCref,2,0) {(void*) boxptr_Expression_traverseExpCref,0}};
#define boxvar_Expression_traverseExpCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpCref)


DLLDirection
modelica_metatype omc_Expression_traverseExpBidirCref(threadData_t *threadData, modelica_metatype _inCref, modelica_fnptr _inEnterFunc, modelica_fnptr _inExitFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpBidirCref omc_Expression_traverseExpBidirCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpBidirCref,2,0) {(void*) boxptr_Expression_traverseExpBidirCref,0}};
#define boxvar_Expression_traverseExpBidirCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpBidirCref)


#define boxptr_Expression_traverseExpBidirSubExps omc_Expression_traverseExpBidirSubExps


DLLDirection
modelica_metatype omc_Expression_traverseExpOptBidir(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _inEnterFunc, modelica_fnptr _inExitFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpOptBidir omc_Expression_traverseExpOptBidir
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpOptBidir,2,0) {(void*) boxptr_Expression_traverseExpOptBidir,0}};
#define boxvar_Expression_traverseExpOptBidir MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpOptBidir)


DLLDirection
modelica_metatype omc_Expression_traverseExpBidir(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _inEnterFunc, modelica_fnptr _inExitFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpBidir omc_Expression_traverseExpBidir
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpBidir,2,0) {(void*) boxptr_Expression_traverseExpBidir,0}};
#define boxvar_Expression_traverseExpBidir MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpBidir)


DLLDirection
modelica_metatype omc_Expression_traverseExpListBidir(threadData_t *threadData, modelica_metatype _inExpl, modelica_fnptr _inEnterFunc, modelica_fnptr _inExitFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpListBidir omc_Expression_traverseExpListBidir
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpListBidir,2,0) {(void*) boxptr_Expression_traverseExpListBidir,0}};
#define boxvar_Expression_traverseExpListBidir MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpListBidir)


#define boxptr_Expression_traversingDivExpFinder omc_Expression_traversingDivExpFinder


DLLDirection
modelica_metatype omc_Expression_extractDivExpFromExp(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_extractDivExpFromExp omc_Expression_extractDivExpFromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_extractDivExpFromExp,2,0) {(void*) boxptr_Expression_extractDivExpFromExp,0}};
#define boxvar_Expression_extractDivExpFromExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_extractDivExpFromExp)


#define boxptr_Expression_traversingCrefFinder omc_Expression_traversingCrefFinder


DLLDirection
modelica_metatype omc_Expression_traverseCrefsFromExp(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _inFunc, modelica_metatype _inArg);
#define boxptr_Expression_traverseCrefsFromExp omc_Expression_traverseCrefsFromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseCrefsFromExp,2,0) {(void*) boxptr_Expression_traverseCrefsFromExp,0}};
#define boxvar_Expression_traverseCrefsFromExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseCrefsFromExp)


#define boxptr_Expression_expHasCrefInSmoothZeroWork omc_Expression_expHasCrefInSmoothZeroWork


DLLDirection
modelica_boolean omc_Expression_expHasCrefInSmoothZero(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _cr);
DLLDirection
modelica_metatype boxptr_Expression_expHasCrefInSmoothZero(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _cr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCrefInSmoothZero,2,0) {(void*) boxptr_Expression_expHasCrefInSmoothZero,0}};
#define boxvar_Expression_expHasCrefInSmoothZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCrefInSmoothZero)


DLLDirection
modelica_metatype omc_Expression_expHasCrefInIfWork(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
DLLDirection
modelica_metatype boxptr_Expression_expHasCrefInIfWork(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCrefInIfWork,2,0) {(void*) boxptr_Expression_expHasCrefInIfWork,0}};
#define boxvar_Expression_expHasCrefInIfWork MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCrefInIfWork)


DLLDirection
modelica_boolean omc_Expression_expHasCrefInIf(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
DLLDirection
modelica_metatype boxptr_Expression_expHasCrefInIf(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCrefInIf,2,0) {(void*) boxptr_Expression_expHasCrefInIf,0}};
#define boxvar_Expression_expHasCrefInIf MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCrefInIf)


DLLDirection
modelica_boolean omc_Expression_expHasCrefNoPreOrStart(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
DLLDirection
modelica_metatype boxptr_Expression_expHasCrefNoPreOrStart(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCrefNoPreOrStart,2,0) {(void*) boxptr_Expression_expHasCrefNoPreOrStart,0}};
#define boxvar_Expression_expHasCrefNoPreOrStart MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCrefNoPreOrStart)


DLLDirection
modelica_boolean omc_Expression_expHasCrefsNoPreOrStart(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
DLLDirection
modelica_metatype boxptr_Expression_expHasCrefsNoPreOrStart(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCrefsNoPreOrStart,2,0) {(void*) boxptr_Expression_expHasCrefsNoPreOrStart,0}};
#define boxvar_Expression_expHasCrefsNoPreOrStart MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCrefsNoPreOrStart)


DLLDirection
modelica_metatype omc_Expression_traversingexpHasCrefNoPreorDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
DLLDirection
modelica_metatype boxptr_Expression_traversingexpHasCrefNoPreorDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasCrefNoPreorDer,2,0) {(void*) boxptr_Expression_traversingexpHasCrefNoPreorDer,0}};
#define boxvar_Expression_traversingexpHasCrefNoPreorDer MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasCrefNoPreorDer)


DLLDirection
modelica_boolean omc_Expression_expHasCrefNoPreorDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
DLLDirection
modelica_metatype boxptr_Expression_expHasCrefNoPreorDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCrefNoPreorDer,2,0) {(void*) boxptr_Expression_expHasCrefNoPreorDer,0}};
#define boxvar_Expression_expHasCrefNoPreorDer MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCrefNoPreorDer)


DLLDirection
modelica_boolean omc_Expression_expHasPrevious(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_expHasPrevious(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasPrevious,2,0) {(void*) boxptr_Expression_expHasPrevious,0}};
#define boxvar_Expression_expHasPrevious MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasPrevious)


DLLDirection
modelica_boolean omc_Expression_expHasPre(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_expHasPre(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasPre,2,0) {(void*) boxptr_Expression_expHasPre,0}};
#define boxvar_Expression_expHasPre MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasPre)


DLLDirection
modelica_metatype omc_Expression_traversingexpHasDer(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _inTpl, modelica_boolean *out_cont, modelica_boolean *out_outTpl);
DLLDirection
modelica_metatype boxptr_Expression_traversingexpHasDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasDer,2,0) {(void*) boxptr_Expression_traversingexpHasDer,0}};
#define boxvar_Expression_traversingexpHasDer MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasDer)


DLLDirection
modelica_boolean omc_Expression_expHasDer(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_expHasDer(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasDer,2,0) {(void*) boxptr_Expression_expHasDer,0}};
#define boxvar_Expression_expHasDer MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasDer)


DLLDirection
modelica_metatype omc_Expression_traversingexpHasDerCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
DLLDirection
modelica_metatype boxptr_Expression_traversingexpHasDerCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasDerCref,2,0) {(void*) boxptr_Expression_traversingexpHasDerCref,0}};
#define boxvar_Expression_traversingexpHasDerCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasDerCref)


DLLDirection
modelica_boolean omc_Expression_expHasDerCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
DLLDirection
modelica_metatype boxptr_Expression_expHasDerCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasDerCref,2,0) {(void*) boxptr_Expression_expHasDerCref,0}};
#define boxvar_Expression_expHasDerCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasDerCref)


DLLDirection
modelica_metatype omc_Expression_traversingexpHasName(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
DLLDirection
modelica_metatype boxptr_Expression_traversingexpHasName(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasName,2,0) {(void*) boxptr_Expression_traversingexpHasName,0}};
#define boxvar_Expression_traversingexpHasName MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasName)


DLLDirection
modelica_boolean omc_Expression_anyExpHasCrefName(threadData_t *threadData, modelica_metatype _inExps, modelica_string _name);
DLLDirection
modelica_metatype boxptr_Expression_anyExpHasCrefName(threadData_t *threadData, modelica_metatype _inExps, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_anyExpHasCrefName,2,0) {(void*) boxptr_Expression_anyExpHasCrefName,0}};
#define boxvar_Expression_anyExpHasCrefName MMC_REFSTRUCTLIT(boxvar_lit_Expression_anyExpHasCrefName)


DLLDirection
modelica_boolean omc_Expression_expHasCrefName(threadData_t *threadData, modelica_metatype _inExp, modelica_string _name);
DLLDirection
modelica_metatype boxptr_Expression_expHasCrefName(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCrefName,2,0) {(void*) boxptr_Expression_expHasCrefName,0}};
#define boxvar_Expression_expHasCrefName MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCrefName)


DLLDirection
modelica_metatype omc_Expression_traversingexpHasCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
DLLDirection
modelica_metatype boxptr_Expression_traversingexpHasCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasCref,2,0) {(void*) boxptr_Expression_traversingexpHasCref,0}};
#define boxvar_Expression_traversingexpHasCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasCref)


DLLDirection
modelica_boolean omc_Expression_expHasCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
DLLDirection
modelica_metatype boxptr_Expression_expHasCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCref,2,0) {(void*) boxptr_Expression_expHasCref,0}};
#define boxvar_Expression_expHasCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCref)


DLLDirection
modelica_metatype omc_Expression_traversingComponentRefFinderNoPreDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefs, modelica_boolean *out_cont, modelica_metatype *out_crefs);
DLLDirection
modelica_metatype boxptr_Expression_traversingComponentRefFinderNoPreDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefs, modelica_metatype *out_cont, modelica_metatype *out_crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingComponentRefFinderNoPreDer,2,0) {(void*) boxptr_Expression_traversingComponentRefFinderNoPreDer,0}};
#define boxvar_Expression_traversingComponentRefFinderNoPreDer MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingComponentRefFinderNoPreDer)


DLLDirection
modelica_metatype omc_Expression_traversingComponentRefPresent(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _found, modelica_boolean *out_cont, modelica_boolean *out_outFound);
DLLDirection
modelica_metatype boxptr_Expression_traversingComponentRefPresent(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _found, modelica_metatype *out_cont, modelica_metatype *out_outFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingComponentRefPresent,2,0) {(void*) boxptr_Expression_traversingComponentRefPresent,0}};
#define boxvar_Expression_traversingComponentRefPresent MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingComponentRefPresent)


DLLDirection
modelica_boolean omc_Expression_expHasCrefs(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_expHasCrefs(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasCrefs,2,0) {(void*) boxptr_Expression_expHasCrefs,0}};
#define boxvar_Expression_expHasCrefs MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasCrefs)


DLLDirection
modelica_metatype omc_Expression_traversingexpHasInitial(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_boolean __omcQ_24in_5Ffound, modelica_boolean *out_cont, modelica_boolean *out_found);
DLLDirection
modelica_metatype boxptr_Expression_traversingexpHasInitial(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5Ffound, modelica_metatype *out_cont, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasInitial,2,0) {(void*) boxptr_Expression_traversingexpHasInitial,0}};
#define boxvar_Expression_traversingexpHasInitial MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingexpHasInitial)


DLLDirection
modelica_boolean omc_Expression_expHasInitial(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_Expression_expHasInitial(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expHasInitial,2,0) {(void*) boxptr_Expression_expHasInitial,0}};
#define boxvar_Expression_expHasInitial MMC_REFSTRUCTLIT(boxvar_lit_Expression_expHasInitial)


#define boxptr_Expression_getLhsCrefsFromStatement omc_Expression_getLhsCrefsFromStatement


DLLDirection
modelica_metatype omc_Expression_getLhsCrefsFromStatements(threadData_t *threadData, modelica_metatype _inStmts);
#define boxptr_Expression_getLhsCrefsFromStatements omc_Expression_getLhsCrefsFromStatements
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getLhsCrefsFromStatements,2,0) {(void*) boxptr_Expression_getLhsCrefsFromStatements,0}};
#define boxvar_Expression_getLhsCrefsFromStatements MMC_REFSTRUCTLIT(boxvar_lit_Expression_getLhsCrefsFromStatements)


DLLDirection
modelica_metatype omc_Expression_extractCrefsStatment(threadData_t *threadData, modelica_metatype _inStmt, modelica_metatype *out_orcrefs);
#define boxptr_Expression_extractCrefsStatment omc_Expression_extractCrefsStatment
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_extractCrefsStatment,2,0) {(void*) boxptr_Expression_extractCrefsStatment,0}};
#define boxvar_Expression_extractCrefsStatment MMC_REFSTRUCTLIT(boxvar_lit_Expression_extractCrefsStatment)


DLLDirection
modelica_metatype omc_Expression_extractUniqueCrefsFromStatmentS(threadData_t *threadData, modelica_metatype _inStmts);
#define boxptr_Expression_extractUniqueCrefsFromStatmentS omc_Expression_extractUniqueCrefsFromStatmentS
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_extractUniqueCrefsFromStatmentS,2,0) {(void*) boxptr_Expression_extractUniqueCrefsFromStatmentS,0}};
#define boxvar_Expression_extractUniqueCrefsFromStatmentS MMC_REFSTRUCTLIT(boxvar_lit_Expression_extractUniqueCrefsFromStatmentS)


DLLDirection
modelica_metatype omc_Expression_traversingComponentRefFinderDerPreStart(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefs, modelica_boolean *out_cont, modelica_metatype *out_crefs);
DLLDirection
modelica_metatype boxptr_Expression_traversingComponentRefFinderDerPreStart(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefs, modelica_metatype *out_cont, modelica_metatype *out_crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingComponentRefFinderDerPreStart,2,0) {(void*) boxptr_Expression_traversingComponentRefFinderDerPreStart,0}};
#define boxvar_Expression_traversingComponentRefFinderDerPreStart MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingComponentRefFinderDerPreStart)


DLLDirection
modelica_metatype omc_Expression_extractCrefsFromExpDerPreStart(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _expand);
DLLDirection
modelica_metatype boxptr_Expression_extractCrefsFromExpDerPreStart(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _expand);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_extractCrefsFromExpDerPreStart,2,0) {(void*) boxptr_Expression_extractCrefsFromExpDerPreStart,0}};
#define boxvar_Expression_extractCrefsFromExpDerPreStart MMC_REFSTRUCTLIT(boxvar_lit_Expression_extractCrefsFromExpDerPreStart)


DLLDirection
modelica_metatype omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _expand);
DLLDirection
modelica_metatype boxptr_Expression_extractUniqueCrefsFromExpDerPreStart(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _expand);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_extractUniqueCrefsFromExpDerPreStart,2,0) {(void*) boxptr_Expression_extractUniqueCrefsFromExpDerPreStart,0}};
#define boxvar_Expression_extractUniqueCrefsFromExpDerPreStart MMC_REFSTRUCTLIT(boxvar_lit_Expression_extractUniqueCrefsFromExpDerPreStart)


DLLDirection
modelica_metatype omc_Expression_traversingComponentRefFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefs, modelica_metatype *out_crefs);
#define boxptr_Expression_traversingComponentRefFinder omc_Expression_traversingComponentRefFinder
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingComponentRefFinder,2,0) {(void*) boxptr_Expression_traversingComponentRefFinder,0}};
#define boxvar_Expression_traversingComponentRefFinder MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingComponentRefFinder)


DLLDirection
modelica_metatype omc_Expression_extractCrefsFromExp(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_extractCrefsFromExp omc_Expression_extractCrefsFromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_extractCrefsFromExp,2,0) {(void*) boxptr_Expression_extractCrefsFromExp,0}};
#define boxvar_Expression_extractCrefsFromExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_extractCrefsFromExp)


DLLDirection
modelica_metatype omc_Expression_extractUniqueCrefsFromExp(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _expand);
DLLDirection
modelica_metatype boxptr_Expression_extractUniqueCrefsFromExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _expand);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_extractUniqueCrefsFromExp,2,0) {(void*) boxptr_Expression_extractUniqueCrefsFromExp,0}};
#define boxvar_Expression_extractUniqueCrefsFromExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_extractUniqueCrefsFromExp)


DLLDirection
modelica_metatype omc_Expression_traverseExpTypeDims(threadData_t *threadData, modelica_metatype _inType, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpTypeDims omc_Expression_traverseExpTypeDims
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpTypeDims,2,0) {(void*) boxptr_Expression_traverseExpTypeDims,0}};
#define boxvar_Expression_traverseExpTypeDims MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpTypeDims)


DLLDirection
modelica_metatype omc_Expression_traverseExpCrefDims(threadData_t *threadData, modelica_metatype _inCref, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpCrefDims omc_Expression_traverseExpCrefDims
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpCrefDims,2,0) {(void*) boxptr_Expression_traverseExpCrefDims,0}};
#define boxvar_Expression_traverseExpCrefDims MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpCrefDims)


DLLDirection
modelica_metatype omc_Expression_traverseExpOptTopDown(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype *out_outA);
#define boxptr_Expression_traverseExpOptTopDown omc_Expression_traverseExpOptTopDown
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpOptTopDown,2,0) {(void*) boxptr_Expression_traverseExpOptTopDown,0}};
#define boxvar_Expression_traverseExpOptTopDown MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpOptTopDown)


DLLDirection
modelica_metatype omc_Expression_traverseExpOpt(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
#define boxptr_Expression_traverseExpOpt omc_Expression_traverseExpOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpOpt,2,0) {(void*) boxptr_Expression_traverseExpOpt,0}};
#define boxvar_Expression_traverseExpOpt MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpOpt)


DLLDirection
modelica_metatype omc_Expression_traverseExpListTopDown(threadData_t *threadData, modelica_metatype _inExpl, modelica_fnptr _rel, modelica_metatype _inExt_arg, modelica_metatype *out_outA);
#define boxptr_Expression_traverseExpListTopDown omc_Expression_traverseExpListTopDown
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpListTopDown,2,0) {(void*) boxptr_Expression_traverseExpListTopDown,0}};
#define boxvar_Expression_traverseExpListTopDown MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpListTopDown)


#define boxptr_Expression_traverseExpMatrixTopDown omc_Expression_traverseExpMatrixTopDown


#define boxptr_Expression_traverseExpTopDownClockHelper omc_Expression_traverseExpTopDownClockHelper


#define boxptr_Expression_traverseExpClk omc_Expression_traverseExpClk


DLLDirection
modelica_metatype omc_Expression_traverseExpTopDown(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _func, modelica_metatype _ext_arg, modelica_metatype *out_outArg);
#define boxptr_Expression_traverseExpTopDown omc_Expression_traverseExpTopDown
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpTopDown,2,0) {(void*) boxptr_Expression_traverseExpTopDown,0}};
#define boxvar_Expression_traverseExpTopDown MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpTopDown)


DLLDirection
modelica_metatype omc_Expression_traverseExpList(threadData_t *threadData, modelica_metatype _inExpl, modelica_fnptr _rel, modelica_metatype _iext_arg, modelica_metatype *out_ext_arg);
#define boxptr_Expression_traverseExpList omc_Expression_traverseExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpList,2,0) {(void*) boxptr_Expression_traverseExpList,0}};
#define boxvar_Expression_traverseExpList MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpList)


#define boxptr_Expression_traverseExpMatrix omc_Expression_traverseExpMatrix


DLLDirection
modelica_metatype omc_Expression_traverseSubexpressionsTopDownHelper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _itpl, modelica_metatype *out_otpl);
#define boxptr_Expression_traverseSubexpressionsTopDownHelper omc_Expression_traverseSubexpressionsTopDownHelper
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseSubexpressionsTopDownHelper,2,0) {(void*) boxptr_Expression_traverseSubexpressionsTopDownHelper,0}};
#define boxvar_Expression_traverseSubexpressionsTopDownHelper MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseSubexpressionsTopDownHelper)


DLLDirection
modelica_metatype omc_Expression_traverseSubexpressionsDummyHelper(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _inFunc, modelica_fnptr *out_outFunc);
#define boxptr_Expression_traverseSubexpressionsDummyHelper omc_Expression_traverseSubexpressionsDummyHelper
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseSubexpressionsDummyHelper,2,0) {(void*) boxptr_Expression_traverseSubexpressionsDummyHelper,0}};
#define boxvar_Expression_traverseSubexpressionsDummyHelper MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseSubexpressionsDummyHelper)


DLLDirection
modelica_metatype omc_Expression_traverseSubexpressions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype __omcQ_24in_5Farg, modelica_fnptr _func, modelica_metatype *out_arg);
#define boxptr_Expression_traverseSubexpressions omc_Expression_traverseSubexpressions
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseSubexpressions,2,0) {(void*) boxptr_Expression_traverseSubexpressions,0}};
#define boxvar_Expression_traverseSubexpressions MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseSubexpressions)


DLLDirection
modelica_metatype omc_Expression_traverseSubexpressionsHelper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _itpl, modelica_metatype *out_otpl);
#define boxptr_Expression_traverseSubexpressionsHelper omc_Expression_traverseSubexpressionsHelper
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseSubexpressionsHelper,2,0) {(void*) boxptr_Expression_traverseSubexpressionsHelper,0}};
#define boxvar_Expression_traverseSubexpressionsHelper MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseSubexpressionsHelper)


DLLDirection
modelica_metatype omc_Expression_traverseExpDummyHelper(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _func, modelica_fnptr *out_outFunc);
#define boxptr_Expression_traverseExpDummyHelper omc_Expression_traverseExpDummyHelper
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpDummyHelper,2,0) {(void*) boxptr_Expression_traverseExpDummyHelper,0}};
#define boxvar_Expression_traverseExpDummyHelper MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpDummyHelper)


DLLDirection
modelica_metatype omc_Expression_traverseExpDummy(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _func);
#define boxptr_Expression_traverseExpDummy omc_Expression_traverseExpDummy
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpDummy,2,0) {(void*) boxptr_Expression_traverseExpDummy,0}};
#define boxvar_Expression_traverseExpDummy MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpDummy)


DLLDirection
modelica_metatype omc_Expression_traverseExpBottomUp(threadData_t *threadData, modelica_metatype _inExp, modelica_fnptr _inFunc, modelica_metatype _inExtArg, modelica_metatype *out_outExtArg);
#define boxptr_Expression_traverseExpBottomUp omc_Expression_traverseExpBottomUp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traverseExpBottomUp,2,0) {(void*) boxptr_Expression_traverseExpBottomUp,0}};
#define boxvar_Expression_traverseExpBottomUp MMC_REFSTRUCTLIT(boxvar_lit_Expression_traverseExpBottomUp)


DLLDirection
modelica_boolean omc_Expression_containsInitialCall(threadData_t *threadData, modelica_metatype _condition);
DLLDirection
modelica_metatype boxptr_Expression_containsInitialCall(threadData_t *threadData, modelica_metatype _condition);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_containsInitialCall,2,0) {(void*) boxptr_Expression_containsInitialCall,0}};
#define boxvar_Expression_containsInitialCall MMC_REFSTRUCTLIT(boxvar_lit_Expression_containsInitialCall)


DLLDirection
modelica_metatype omc_Expression_replaceCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_otpl);
#define boxptr_Expression_replaceCref omc_Expression_replaceCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_replaceCref,2,0) {(void*) boxptr_Expression_replaceCref,0}};
#define boxvar_Expression_replaceCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_replaceCref)


DLLDirection
modelica_metatype omc_Expression_replaceCrefBottomUp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inSourceExp, modelica_metatype _inTargetExp);
#define boxptr_Expression_replaceCrefBottomUp omc_Expression_replaceCrefBottomUp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_replaceCrefBottomUp,2,0) {(void*) boxptr_Expression_replaceCrefBottomUp,0}};
#define boxvar_Expression_replaceCrefBottomUp MMC_REFSTRUCTLIT(boxvar_lit_Expression_replaceCrefBottomUp)


DLLDirection
modelica_metatype omc_Expression_expressionCollector(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _acc, modelica_metatype *out_outExps);
#define boxptr_Expression_expressionCollector omc_Expression_expressionCollector
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expressionCollector,2,0) {(void*) boxptr_Expression_expressionCollector,0}};
#define boxvar_Expression_expressionCollector MMC_REFSTRUCTLIT(boxvar_lit_Expression_expressionCollector)


DLLDirection
modelica_metatype omc_Expression_replaceExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inSourceExp, modelica_metatype _inTargetExp);
#define boxptr_Expression_replaceExp omc_Expression_replaceExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_replaceExp,2,0) {(void*) boxptr_Expression_replaceExp,0}};
#define boxvar_Expression_replaceExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_replaceExp)


DLLDirection
modelica_metatype omc_Expression_replaceExpTpl(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_metatype *out_outTpl);
#define boxptr_Expression_replaceExpTpl omc_Expression_replaceExpTpl
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_replaceExpTpl,2,0) {(void*) boxptr_Expression_replaceExpTpl,0}};
#define boxvar_Expression_replaceExpTpl MMC_REFSTRUCTLIT(boxvar_lit_Expression_replaceExpTpl)


DLLDirection
modelica_metatype omc_Expression_concatArrayType(threadData_t *threadData, modelica_metatype _arrayType1, modelica_metatype _arrayType2);
#define boxptr_Expression_concatArrayType omc_Expression_concatArrayType
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_concatArrayType,2,0) {(void*) boxptr_Expression_concatArrayType,0}};
#define boxvar_Expression_concatArrayType MMC_REFSTRUCTLIT(boxvar_lit_Expression_concatArrayType)


DLLDirection
modelica_metatype omc_Expression_dimensionsAdd(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
#define boxptr_Expression_dimensionsAdd omc_Expression_dimensionsAdd
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsAdd,2,0) {(void*) boxptr_Expression_dimensionsAdd,0}};
#define boxvar_Expression_dimensionsAdd MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsAdd)


DLLDirection
modelica_metatype omc_Expression_dimensionsMult(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
#define boxptr_Expression_dimensionsMult omc_Expression_dimensionsMult
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsMult,2,0) {(void*) boxptr_Expression_dimensionsMult,0}};
#define boxvar_Expression_dimensionsMult MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsMult)


DLLDirection
modelica_metatype omc_Expression_makeVar(threadData_t *threadData, modelica_string _name, modelica_metatype _tp);
#define boxptr_Expression_makeVar omc_Expression_makeVar
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeVar,2,0) {(void*) boxptr_Expression_makeVar,0}};
#define boxvar_Expression_makeVar MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeVar)


DLLDirection
modelica_metatype omc_Expression_makeIndexSubscript(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_Expression_makeIndexSubscript omc_Expression_makeIndexSubscript
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeIndexSubscript,2,0) {(void*) boxptr_Expression_makeIndexSubscript,0}};
#define boxvar_Expression_makeIndexSubscript MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeIndexSubscript)


#define boxptr_Expression_arrayFill2 omc_Expression_arrayFill2


DLLDirection
modelica_metatype omc_Expression_arrayFill(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _inExp);
#define boxptr_Expression_arrayFill omc_Expression_arrayFill
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayFill,2,0) {(void*) boxptr_Expression_arrayFill,0}};
#define boxvar_Expression_arrayFill MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayFill)


#define boxptr_Expression_listToArray3 omc_Expression_listToArray3


#define boxptr_Expression_listToArray2 omc_Expression_listToArray2


DLLDirection
modelica_metatype omc_Expression_listToArray(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _dims);
#define boxptr_Expression_listToArray omc_Expression_listToArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_listToArray,2,0) {(void*) boxptr_Expression_listToArray,0}};
#define boxvar_Expression_listToArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_listToArray)


DLLDirection
modelica_metatype omc_Expression_makeOneExpression(threadData_t *threadData, modelica_metatype _inDims, modelica_metatype *out_outType);
#define boxptr_Expression_makeOneExpression omc_Expression_makeOneExpression
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeOneExpression,2,0) {(void*) boxptr_Expression_makeOneExpression,0}};
#define boxvar_Expression_makeOneExpression MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeOneExpression)


DLLDirection
modelica_metatype omc_Expression_makeZeroExpression(threadData_t *threadData, modelica_metatype _inDims, modelica_metatype *out_outType);
#define boxptr_Expression_makeZeroExpression omc_Expression_makeZeroExpression
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeZeroExpression,2,0) {(void*) boxptr_Expression_makeZeroExpression,0}};
#define boxvar_Expression_makeZeroExpression MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeZeroExpression)


DLLDirection
modelica_metatype omc_Expression_createZeroExpression(threadData_t *threadData, modelica_metatype _inType);
#define boxptr_Expression_createZeroExpression omc_Expression_createZeroExpression
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_createZeroExpression,2,0) {(void*) boxptr_Expression_createZeroExpression,0}};
#define boxvar_Expression_createZeroExpression MMC_REFSTRUCTLIT(boxvar_lit_Expression_createZeroExpression)


DLLDirection
modelica_metatype omc_Expression_makeRealArrayOfZeros(threadData_t *threadData, modelica_integer _inDimension);
DLLDirection
modelica_metatype boxptr_Expression_makeRealArrayOfZeros(threadData_t *threadData, modelica_metatype _inDimension);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeRealArrayOfZeros,2,0) {(void*) boxptr_Expression_makeRealArrayOfZeros,0}};
#define boxvar_Expression_makeRealArrayOfZeros MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeRealArrayOfZeros)


DLLDirection
modelica_metatype omc_Expression_makeListOfZeros(threadData_t *threadData, modelica_integer _inDimension);
DLLDirection
modelica_metatype boxptr_Expression_makeListOfZeros(threadData_t *threadData, modelica_metatype _inDimension);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeListOfZeros,2,0) {(void*) boxptr_Expression_makeListOfZeros,0}};
#define boxvar_Expression_makeListOfZeros MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeListOfZeros)


DLLDirection
modelica_metatype omc_Expression_makeConstZeroE(threadData_t *threadData, modelica_metatype _iExp);
#define boxptr_Expression_makeConstZeroE omc_Expression_makeConstZeroE
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeConstZeroE,2,0) {(void*) boxptr_Expression_makeConstZeroE,0}};
#define boxvar_Expression_makeConstZeroE MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeConstZeroE)


DLLDirection
modelica_metatype omc_Expression_makeConstNumber(threadData_t *threadData, modelica_metatype _ty, modelica_integer _n);
DLLDirection
modelica_metatype boxptr_Expression_makeConstNumber(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _n);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeConstNumber,2,0) {(void*) boxptr_Expression_makeConstNumber,0}};
#define boxvar_Expression_makeConstNumber MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeConstNumber)


DLLDirection
modelica_metatype omc_Expression_makeConstZero(threadData_t *threadData, modelica_metatype _inType);
#define boxptr_Expression_makeConstZero omc_Expression_makeConstZero
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeConstZero,2,0) {(void*) boxptr_Expression_makeConstZero,0}};
#define boxvar_Expression_makeConstZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeConstZero)


DLLDirection
modelica_metatype omc_Expression_makeConstOne(threadData_t *threadData, modelica_metatype _inType);
#define boxptr_Expression_makeConstOne omc_Expression_makeConstOne
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeConstOne,2,0) {(void*) boxptr_Expression_makeConstOne,0}};
#define boxvar_Expression_makeConstOne MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeConstOne)


DLLDirection
modelica_metatype omc_Expression_makeBoolExp(threadData_t *threadData, modelica_boolean _b);
DLLDirection
modelica_metatype boxptr_Expression_makeBoolExp(threadData_t *threadData, modelica_metatype _b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeBoolExp,2,0) {(void*) boxptr_Expression_makeBoolExp,0}};
#define boxvar_Expression_makeBoolExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeBoolExp)


DLLDirection
modelica_metatype omc_Expression_makeRealExp(threadData_t *threadData, modelica_real _r);
DLLDirection
modelica_metatype boxptr_Expression_makeRealExp(threadData_t *threadData, modelica_metatype _r);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeRealExp,2,0) {(void*) boxptr_Expression_makeRealExp,0}};
#define boxvar_Expression_makeRealExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeRealExp)


DLLDirection
modelica_metatype omc_Expression_makeIntegerExp(threadData_t *threadData, modelica_integer _i);
DLLDirection
modelica_metatype boxptr_Expression_makeIntegerExp(threadData_t *threadData, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeIntegerExp,2,0) {(void*) boxptr_Expression_makeIntegerExp,0}};
#define boxvar_Expression_makeIntegerExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeIntegerExp)


DLLDirection
modelica_metatype omc_Expression_makeAsubAddIndex(threadData_t *threadData, modelica_metatype _e, modelica_integer _indx);
DLLDirection
modelica_metatype boxptr_Expression_makeAsubAddIndex(threadData_t *threadData, modelica_metatype _e, modelica_metatype _indx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeAsubAddIndex,2,0) {(void*) boxptr_Expression_makeAsubAddIndex,0}};
#define boxvar_Expression_makeAsubAddIndex MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeAsubAddIndex)


DLLDirection
modelica_metatype omc_Expression_makeDivVector(threadData_t *threadData, modelica_metatype _v, modelica_metatype _e1);
#define boxptr_Expression_makeDivVector omc_Expression_makeDivVector
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeDivVector,2,0) {(void*) boxptr_Expression_makeDivVector,0}};
#define boxvar_Expression_makeDivVector MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeDivVector)


DLLDirection
modelica_metatype omc_Expression_makeDiv(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_makeDiv omc_Expression_makeDiv
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeDiv,2,0) {(void*) boxptr_Expression_makeDiv,0}};
#define boxvar_Expression_makeDiv MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeDiv)


DLLDirection
modelica_metatype omc_Expression_expDiv(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expDiv omc_Expression_expDiv
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expDiv,2,0) {(void*) boxptr_Expression_expDiv,0}};
#define boxvar_Expression_expDiv MMC_REFSTRUCTLIT(boxvar_lit_Expression_expDiv)


#define boxptr_Expression_checkIfOther omc_Expression_checkIfOther


DLLDirection
modelica_metatype omc_Expression_makeProductLst(threadData_t *threadData, modelica_metatype _inExpLst);
#define boxptr_Expression_makeProductLst omc_Expression_makeProductLst
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeProductLst,2,0) {(void*) boxptr_Expression_makeProductLst,0}};
#define boxvar_Expression_makeProductLst MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeProductLst)


DLLDirection
modelica_metatype omc_Expression_makeProduct(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_makeProduct omc_Expression_makeProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeProduct,2,0) {(void*) boxptr_Expression_makeProduct,0}};
#define boxvar_Expression_makeProduct MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeProduct)


DLLDirection
modelica_metatype omc_Expression_subVec(threadData_t *threadData, modelica_metatype _v, modelica_metatype _w);
#define boxptr_Expression_subVec omc_Expression_subVec
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subVec,2,0) {(void*) boxptr_Expression_subVec,0}};
#define boxvar_Expression_subVec MMC_REFSTRUCTLIT(boxvar_lit_Expression_subVec)


DLLDirection
modelica_metatype omc_Expression_addVec(threadData_t *threadData, modelica_metatype _v, modelica_metatype _w);
#define boxptr_Expression_addVec omc_Expression_addVec
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_addVec,2,0) {(void*) boxptr_Expression_addVec,0}};
#define boxvar_Expression_addVec MMC_REFSTRUCTLIT(boxvar_lit_Expression_addVec)


DLLDirection
modelica_metatype omc_Expression_lenVec(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Expression_lenVec omc_Expression_lenVec
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_lenVec,2,0) {(void*) boxptr_Expression_lenVec,0}};
#define boxvar_Expression_lenVec MMC_REFSTRUCTLIT(boxvar_lit_Expression_lenVec)


DLLDirection
modelica_metatype omc_Expression_makeScalarProduct(threadData_t *threadData, modelica_metatype _v, modelica_metatype _w);
#define boxptr_Expression_makeScalarProduct omc_Expression_makeScalarProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeScalarProduct,2,0) {(void*) boxptr_Expression_makeScalarProduct,0}};
#define boxvar_Expression_makeScalarProduct MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeScalarProduct)


DLLDirection
modelica_metatype omc_Expression_makeProductVector(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _v);
#define boxptr_Expression_makeProductVector omc_Expression_makeProductVector
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeProductVector,2,0) {(void*) boxptr_Expression_makeProductVector,0}};
#define boxvar_Expression_makeProductVector MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeProductVector)


DLLDirection
modelica_metatype omc_Expression_expOptMinScalar(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expOptMinScalar omc_Expression_expOptMinScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expOptMinScalar,2,0) {(void*) boxptr_Expression_expOptMinScalar,0}};
#define boxvar_Expression_expOptMinScalar MMC_REFSTRUCTLIT(boxvar_lit_Expression_expOptMinScalar)


DLLDirection
modelica_metatype omc_Expression_expMinScalar(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expMinScalar omc_Expression_expMinScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expMinScalar,2,0) {(void*) boxptr_Expression_expMinScalar,0}};
#define boxvar_Expression_expMinScalar MMC_REFSTRUCTLIT(boxvar_lit_Expression_expMinScalar)


DLLDirection
modelica_metatype omc_Expression_expOptMaxScalar(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expOptMaxScalar omc_Expression_expOptMaxScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expOptMaxScalar,2,0) {(void*) boxptr_Expression_expOptMaxScalar,0}};
#define boxvar_Expression_expOptMaxScalar MMC_REFSTRUCTLIT(boxvar_lit_Expression_expOptMaxScalar)


DLLDirection
modelica_metatype omc_Expression_expMaxScalar(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expMaxScalar omc_Expression_expMaxScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expMaxScalar,2,0) {(void*) boxptr_Expression_expMaxScalar,0}};
#define boxvar_Expression_expMaxScalar MMC_REFSTRUCTLIT(boxvar_lit_Expression_expMaxScalar)


DLLDirection
modelica_metatype omc_Expression_expPowLst(threadData_t *threadData, modelica_metatype _expLst, modelica_metatype _n);
#define boxptr_Expression_expPowLst omc_Expression_expPowLst
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expPowLst,2,0) {(void*) boxptr_Expression_expPowLst,0}};
#define boxvar_Expression_expPowLst MMC_REFSTRUCTLIT(boxvar_lit_Expression_expPowLst)


DLLDirection
modelica_metatype omc_Expression_expPow(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expPow omc_Expression_expPow
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expPow,2,0) {(void*) boxptr_Expression_expPow,0}};
#define boxvar_Expression_expPow MMC_REFSTRUCTLIT(boxvar_lit_Expression_expPow)


DLLDirection
modelica_metatype omc_Expression_expMul(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expMul omc_Expression_expMul
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expMul,2,0) {(void*) boxptr_Expression_expMul,0}};
#define boxvar_Expression_expMul MMC_REFSTRUCTLIT(boxvar_lit_Expression_expMul)


DLLDirection
modelica_metatype omc_Expression_makeSum(threadData_t *threadData, modelica_metatype _inExpLst);
#define boxptr_Expression_makeSum omc_Expression_makeSum
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeSum,2,0) {(void*) boxptr_Expression_makeSum,0}};
#define boxvar_Expression_makeSum MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeSum)


DLLDirection
modelica_metatype omc_Expression_makeSum1(threadData_t *threadData, modelica_metatype _inExpLst, modelica_boolean _simplify);
DLLDirection
modelica_metatype boxptr_Expression_makeSum1(threadData_t *threadData, modelica_metatype _inExpLst, modelica_metatype _simplify);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeSum1,2,0) {(void*) boxptr_Expression_makeSum1,0}};
#define boxvar_Expression_makeSum1 MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeSum1)


DLLDirection
modelica_metatype omc_Expression_makeLBinary(threadData_t *threadData, modelica_metatype _inExpLst, modelica_metatype _op);
#define boxptr_Expression_makeLBinary omc_Expression_makeLBinary
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeLBinary,2,0) {(void*) boxptr_Expression_makeLBinary,0}};
#define boxvar_Expression_makeLBinary MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeLBinary)


DLLDirection
modelica_metatype omc_Expression_expSub(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expSub omc_Expression_expSub
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expSub,2,0) {(void*) boxptr_Expression_expSub,0}};
#define boxvar_Expression_expSub MMC_REFSTRUCTLIT(boxvar_lit_Expression_expSub)


DLLDirection
modelica_metatype omc_Expression_expAdd(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
#define boxptr_Expression_expAdd omc_Expression_expAdd
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expAdd,2,0) {(void*) boxptr_Expression_expAdd,0}};
#define boxvar_Expression_expAdd MMC_REFSTRUCTLIT(boxvar_lit_Expression_expAdd)


DLLDirection
modelica_metatype omc_Expression_makeRealAdd(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
#define boxptr_Expression_makeRealAdd omc_Expression_makeRealAdd
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeRealAdd,2,0) {(void*) boxptr_Expression_makeRealAdd,0}};
#define boxvar_Expression_makeRealAdd MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeRealAdd)


DLLDirection
modelica_metatype omc_Expression_makeRealArray(threadData_t *threadData, modelica_metatype _expl);
#define boxptr_Expression_makeRealArray omc_Expression_makeRealArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeRealArray,2,0) {(void*) boxptr_Expression_makeRealArray,0}};
#define boxvar_Expression_makeRealArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeRealArray)


DLLDirection
modelica_metatype omc_Expression_makeScalarArray(threadData_t *threadData, modelica_metatype _inExpLst, modelica_metatype _et);
#define boxptr_Expression_makeScalarArray omc_Expression_makeScalarArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeScalarArray,2,0) {(void*) boxptr_Expression_makeScalarArray,0}};
#define boxvar_Expression_makeScalarArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeScalarArray)


DLLDirection
modelica_metatype omc_Expression_makeArrayFromList(threadData_t *threadData, modelica_metatype _inElements);
#define boxptr_Expression_makeArrayFromList omc_Expression_makeArrayFromList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeArrayFromList,2,0) {(void*) boxptr_Expression_makeArrayFromList,0}};
#define boxvar_Expression_makeArrayFromList MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeArrayFromList)


DLLDirection
modelica_metatype omc_Expression_makeArray(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _inType, modelica_boolean _inScalar);
DLLDirection
modelica_metatype boxptr_Expression_makeArray(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _inType, modelica_metatype _inScalar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeArray,2,0) {(void*) boxptr_Expression_makeArray,0}};
#define boxvar_Expression_makeArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeArray)


DLLDirection
modelica_metatype omc_Expression_generateCrefsExpLstFromExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefPrefix);
#define boxptr_Expression_generateCrefsExpLstFromExp omc_Expression_generateCrefsExpLstFromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_generateCrefsExpLstFromExp,2,0) {(void*) boxptr_Expression_generateCrefsExpLstFromExp,0}};
#define boxvar_Expression_generateCrefsExpLstFromExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_generateCrefsExpLstFromExp)


DLLDirection
modelica_metatype omc_Expression_generateCrefsExpFromExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefPrefix);
#define boxptr_Expression_generateCrefsExpFromExp omc_Expression_generateCrefsExpFromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_generateCrefsExpFromExp,2,0) {(void*) boxptr_Expression_generateCrefsExpFromExp,0}};
#define boxvar_Expression_generateCrefsExpFromExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_generateCrefsExpFromExp)


DLLDirection
modelica_metatype omc_Expression_generateCrefsFromExpVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCrefPrefix);
#define boxptr_Expression_generateCrefsFromExpVar omc_Expression_generateCrefsFromExpVar
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_generateCrefsFromExpVar,2,0) {(void*) boxptr_Expression_generateCrefsFromExpVar,0}};
#define boxvar_Expression_generateCrefsFromExpVar MMC_REFSTRUCTLIT(boxvar_lit_Expression_generateCrefsFromExpVar)


DLLDirection
modelica_metatype omc_Expression_generateCrefsExpFromExpVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCrefPrefix);
#define boxptr_Expression_generateCrefsExpFromExpVar omc_Expression_generateCrefsExpFromExpVar
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_generateCrefsExpFromExpVar,2,0) {(void*) boxptr_Expression_generateCrefsExpFromExpVar,0}};
#define boxvar_Expression_generateCrefsExpFromExpVar MMC_REFSTRUCTLIT(boxvar_lit_Expression_generateCrefsExpFromExpVar)


DLLDirection
modelica_metatype omc_Expression_makeTuple(threadData_t *threadData, modelica_metatype _inExps);
#define boxptr_Expression_makeTuple omc_Expression_makeTuple
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeTuple,2,0) {(void*) boxptr_Expression_makeTuple,0}};
#define boxvar_Expression_makeTuple MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeTuple)


DLLDirection
modelica_metatype omc_Expression_makeASUBSingleSub(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _sub);
#define boxptr_Expression_makeASUBSingleSub omc_Expression_makeASUBSingleSub
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeASUBSingleSub,2,0) {(void*) boxptr_Expression_makeASUBSingleSub,0}};
#define boxvar_Expression_makeASUBSingleSub MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeASUBSingleSub)


DLLDirection
modelica_metatype omc_Expression_makeASUB(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inSubs);
#define boxptr_Expression_makeASUB omc_Expression_makeASUB
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeASUB,2,0) {(void*) boxptr_Expression_makeASUB,0}};
#define boxvar_Expression_makeASUB MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeASUB)


DLLDirection
modelica_metatype omc_Expression_crefExp(threadData_t *threadData, modelica_metatype _cr);
#define boxptr_Expression_crefExp omc_Expression_crefExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_crefExp,2,0) {(void*) boxptr_Expression_crefExp,0}};
#define boxvar_Expression_crefExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_crefExp)


DLLDirection
modelica_metatype omc_Expression_crefToExp(threadData_t *threadData, modelica_metatype _cr);
#define boxptr_Expression_crefToExp omc_Expression_crefToExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_crefToExp,2,0) {(void*) boxptr_Expression_crefToExp,0}};
#define boxvar_Expression_crefToExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_crefToExp)


DLLDirection
modelica_metatype omc_Expression_makeCrefExp(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inExpType);
#define boxptr_Expression_makeCrefExp omc_Expression_makeCrefExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeCrefExp,2,0) {(void*) boxptr_Expression_makeCrefExp,0}};
#define boxvar_Expression_makeCrefExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeCrefExp)


DLLDirection
modelica_metatype omc_Expression_makeNestedIf(threadData_t *threadData, modelica_metatype _inConds, modelica_metatype _inTbExps, modelica_metatype _fExp);
#define boxptr_Expression_makeNestedIf omc_Expression_makeNestedIf
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeNestedIf,2,0) {(void*) boxptr_Expression_makeNestedIf,0}};
#define boxvar_Expression_makeNestedIf MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeNestedIf)


DLLDirection
modelica_metatype omc_Expression_makeSign(threadData_t *threadData, modelica_metatype _e1);
#define boxptr_Expression_makeSign omc_Expression_makeSign
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeSign,2,0) {(void*) boxptr_Expression_makeSign,0}};
#define boxvar_Expression_makeSign MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeSign)


DLLDirection
modelica_metatype omc_Expression_makeAbs(threadData_t *threadData, modelica_metatype _e1);
#define boxptr_Expression_makeAbs omc_Expression_makeAbs
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeAbs,2,0) {(void*) boxptr_Expression_makeAbs,0}};
#define boxvar_Expression_makeAbs MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeAbs)


DLLDirection
modelica_metatype omc_Expression_makeNoEvent(threadData_t *threadData, modelica_metatype _e1);
#define boxptr_Expression_makeNoEvent omc_Expression_makeNoEvent
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_makeNoEvent,2,0) {(void*) boxptr_Expression_makeNoEvent,0}};
#define boxvar_Expression_makeNoEvent MMC_REFSTRUCTLIT(boxvar_lit_Expression_makeNoEvent)


DLLDirection
modelica_metatype omc_Expression_flattenArrayExpToList(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_flattenArrayExpToList omc_Expression_flattenArrayExpToList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_flattenArrayExpToList,2,0) {(void*) boxptr_Expression_flattenArrayExpToList,0}};
#define boxvar_Expression_flattenArrayExpToList MMC_REFSTRUCTLIT(boxvar_lit_Expression_flattenArrayExpToList)


DLLDirection
modelica_metatype omc_Expression_getTermsContainingX(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype *out_outExp2);
#define boxptr_Expression_getTermsContainingX omc_Expression_getTermsContainingX
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getTermsContainingX,2,0) {(void*) boxptr_Expression_getTermsContainingX,0}};
#define boxvar_Expression_getTermsContainingX MMC_REFSTRUCTLIT(boxvar_lit_Expression_getTermsContainingX)


DLLDirection
modelica_metatype omc_Expression_expandFactors(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expandFactors omc_Expression_expandFactors
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expandFactors,2,0) {(void*) boxptr_Expression_expandFactors,0}};
#define boxvar_Expression_expandFactors MMC_REFSTRUCTLIT(boxvar_lit_Expression_expandFactors)


DLLDirection
modelica_metatype omc_Expression_inverseFactors(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_inverseFactors omc_Expression_inverseFactors
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_inverseFactors,2,0) {(void*) boxptr_Expression_inverseFactors,0}};
#define boxvar_Expression_inverseFactors MMC_REFSTRUCTLIT(boxvar_lit_Expression_inverseFactors)


DLLDirection
modelica_metatype omc_Expression_factors(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_factors omc_Expression_factors
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_factors,2,0) {(void*) boxptr_Expression_factors,0}};
#define boxvar_Expression_factors MMC_REFSTRUCTLIT(boxvar_lit_Expression_factors)


DLLDirection
modelica_metatype omc_Expression_quotient(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_denom);
#define boxptr_Expression_quotient omc_Expression_quotient
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_quotient,2,0) {(void*) boxptr_Expression_quotient,0}};
#define boxvar_Expression_quotient MMC_REFSTRUCTLIT(boxvar_lit_Expression_quotient)


DLLDirection
modelica_metatype omc_Expression_terms(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_terms omc_Expression_terms
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_terms,2,0) {(void*) boxptr_Expression_terms,0}};
#define boxvar_Expression_terms MMC_REFSTRUCTLIT(boxvar_lit_Expression_terms)


DLLDirection
modelica_metatype omc_Expression_termsExpandUnary(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_termsExpandUnary omc_Expression_termsExpandUnary
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_termsExpandUnary,2,0) {(void*) boxptr_Expression_termsExpandUnary,0}};
#define boxvar_Expression_termsExpandUnary MMC_REFSTRUCTLIT(boxvar_lit_Expression_termsExpandUnary)


DLLDirection
modelica_metatype omc_Expression_allTermsForCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr, modelica_fnptr _inFunc, modelica_metatype *out_outExpLstWithoutX);
#define boxptr_Expression_allTermsForCref omc_Expression_allTermsForCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_allTermsForCref,2,0) {(void*) boxptr_Expression_allTermsForCref,0}};
#define boxvar_Expression_allTermsForCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_allTermsForCref)


DLLDirection
modelica_metatype omc_Expression_allTerms(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_allTerms omc_Expression_allTerms
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_allTerms,2,0) {(void*) boxptr_Expression_allTerms,0}};
#define boxvar_Expression_allTerms MMC_REFSTRUCTLIT(boxvar_lit_Expression_allTerms)


#define boxptr_Expression_getAllCrefsExpanded2 omc_Expression_getAllCrefsExpanded2


DLLDirection
modelica_metatype omc_Expression_getAllCrefsExpanded(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_getAllCrefsExpanded omc_Expression_getAllCrefsExpanded
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getAllCrefsExpanded,2,0) {(void*) boxptr_Expression_getAllCrefsExpanded,0}};
#define boxvar_Expression_getAllCrefsExpanded MMC_REFSTRUCTLIT(boxvar_lit_Expression_getAllCrefsExpanded)


#define boxptr_Expression_getAllCrefs2 omc_Expression_getAllCrefs2


DLLDirection
modelica_metatype omc_Expression_getAllCrefs(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_getAllCrefs omc_Expression_getAllCrefs
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getAllCrefs,2,0) {(void*) boxptr_Expression_getAllCrefs,0}};
#define boxvar_Expression_getAllCrefs MMC_REFSTRUCTLIT(boxvar_lit_Expression_getAllCrefs)


DLLDirection
modelica_metatype omc_Expression_getRelations(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_getRelations omc_Expression_getRelations
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getRelations,2,0) {(void*) boxptr_Expression_getRelations,0}};
#define boxvar_Expression_getRelations MMC_REFSTRUCTLIT(boxvar_lit_Expression_getRelations)


DLLDirection
modelica_metatype omc_Expression_typeofOp(threadData_t *threadData, modelica_metatype _inOperator);
#define boxptr_Expression_typeofOp omc_Expression_typeofOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_typeofOp,2,0) {(void*) boxptr_Expression_typeofOp,0}};
#define boxvar_Expression_typeofOp MMC_REFSTRUCTLIT(boxvar_lit_Expression_typeofOp)


#define boxptr_Expression_typeofRelation omc_Expression_typeofRelation


DLLDirection
modelica_metatype omc_Expression_typeof(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_typeof omc_Expression_typeof
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_typeof,2,0) {(void*) boxptr_Expression_typeof,0}};
#define boxvar_Expression_typeof MMC_REFSTRUCTLIT(boxvar_lit_Expression_typeof)


DLLDirection
modelica_metatype omc_Expression_dimensionsSizes(threadData_t *threadData, modelica_metatype _inDims);
#define boxptr_Expression_dimensionsSizes omc_Expression_dimensionsSizes
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionsSizes,2,0) {(void*) boxptr_Expression_dimensionsSizes,0}};
#define boxvar_Expression_dimensionsSizes MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionsSizes)


DLLDirection
modelica_integer omc_Expression_dimensionSizeAll(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_Expression_dimensionSizeAll(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeAll,2,0) {(void*) boxptr_Expression_dimensionSizeAll,0}};
#define boxvar_Expression_dimensionSizeAll MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeAll)


DLLDirection
modelica_metatype omc_Expression_addDimensions(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
#define boxptr_Expression_addDimensions omc_Expression_addDimensions
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_addDimensions,2,0) {(void*) boxptr_Expression_addDimensions,0}};
#define boxvar_Expression_addDimensions MMC_REFSTRUCTLIT(boxvar_lit_Expression_addDimensions)


DLLDirection
modelica_integer omc_Expression_dimensionSize(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_Expression_dimensionSize(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSize,2,0) {(void*) boxptr_Expression_dimensionSize,0}};
#define boxvar_Expression_dimensionSize MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSize)


DLLDirection
modelica_integer omc_Expression_sizeOf(threadData_t *threadData, modelica_metatype _inType);
DLLDirection
modelica_metatype boxptr_Expression_sizeOf(threadData_t *threadData, modelica_metatype _inType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_sizeOf,2,0) {(void*) boxptr_Expression_sizeOf,0}};
#define boxvar_Expression_sizeOf MMC_REFSTRUCTLIT(boxvar_lit_Expression_sizeOf)


DLLDirection
modelica_metatype omc_Expression_arrayEltType(threadData_t *threadData, modelica_metatype _inType);
#define boxptr_Expression_arrayEltType omc_Expression_arrayEltType
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayEltType,2,0) {(void*) boxptr_Expression_arrayEltType,0}};
#define boxvar_Expression_arrayEltType MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayEltType)


DLLDirection
modelica_metatype omc_Expression_subscriptDimension(threadData_t *threadData, modelica_metatype _inSubscript);
#define boxptr_Expression_subscriptDimension omc_Expression_subscriptDimension
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptDimension,2,0) {(void*) boxptr_Expression_subscriptDimension,0}};
#define boxvar_Expression_subscriptDimension MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptDimension)


DLLDirection
modelica_metatype omc_Expression_subscriptDimensions(threadData_t *threadData, modelica_metatype _inSubscripts);
#define boxptr_Expression_subscriptDimensions omc_Expression_subscriptDimensions
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptDimensions,2,0) {(void*) boxptr_Expression_subscriptDimensions,0}};
#define boxvar_Expression_subscriptDimensions MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptDimensions)


DLLDirection
modelica_metatype omc_Expression_arrayTypeDimensions(threadData_t *threadData, modelica_metatype _tp);
#define boxptr_Expression_arrayTypeDimensions omc_Expression_arrayTypeDimensions
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayTypeDimensions,2,0) {(void*) boxptr_Expression_arrayTypeDimensions,0}};
#define boxvar_Expression_arrayTypeDimensions MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayTypeDimensions)


DLLDirection
modelica_metatype omc_Expression_arrayDimension(threadData_t *threadData, modelica_metatype _tp);
#define boxptr_Expression_arrayDimension omc_Expression_arrayDimension
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayDimension,2,0) {(void*) boxptr_Expression_arrayDimension,0}};
#define boxvar_Expression_arrayDimension MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayDimension)


DLLDirection
modelica_metatype omc_Expression_expDimensions(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expDimensions omc_Expression_expDimensions
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expDimensions,2,0) {(void*) boxptr_Expression_expDimensions,0}};
#define boxvar_Expression_expDimensions MMC_REFSTRUCTLIT(boxvar_lit_Expression_expDimensions)


DLLDirection
modelica_metatype omc_Expression_expLastSubs(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expLastSubs omc_Expression_expLastSubs
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expLastSubs,2,0) {(void*) boxptr_Expression_expLastSubs,0}};
#define boxvar_Expression_expLastSubs MMC_REFSTRUCTLIT(boxvar_lit_Expression_expLastSubs)


DLLDirection
modelica_metatype omc_Expression_nthArrayExp(threadData_t *threadData, modelica_metatype _inExp, modelica_integer _inInteger);
DLLDirection
modelica_metatype boxptr_Expression_nthArrayExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_nthArrayExp,2,0) {(void*) boxptr_Expression_nthArrayExp,0}};
#define boxvar_Expression_nthArrayExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_nthArrayExp)


DLLDirection
modelica_boolean omc_Expression_subscriptIsFirst(threadData_t *threadData, modelica_metatype _inSubscript);
DLLDirection
modelica_metatype boxptr_Expression_subscriptIsFirst(threadData_t *threadData, modelica_metatype _inSubscript);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptIsFirst,2,0) {(void*) boxptr_Expression_subscriptIsFirst,0}};
#define boxvar_Expression_subscriptIsFirst MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptIsFirst)


DLLDirection
modelica_metatype omc_Expression_subscriptNonExpandedExp(threadData_t *threadData, modelica_metatype _inSubscript);
#define boxptr_Expression_subscriptNonExpandedExp omc_Expression_subscriptNonExpandedExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptNonExpandedExp,2,0) {(void*) boxptr_Expression_subscriptNonExpandedExp,0}};
#define boxvar_Expression_subscriptNonExpandedExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptNonExpandedExp)


DLLDirection
modelica_metatype omc_Expression_getSubscriptExp(threadData_t *threadData, modelica_metatype _inSubscript);
#define boxptr_Expression_getSubscriptExp omc_Expression_getSubscriptExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getSubscriptExp,2,0) {(void*) boxptr_Expression_getSubscriptExp,0}};
#define boxvar_Expression_getSubscriptExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_getSubscriptExp)


DLLDirection
modelica_metatype omc_Expression_subscriptIndexExp(threadData_t *threadData, modelica_metatype _inSubscript);
#define boxptr_Expression_subscriptIndexExp omc_Expression_subscriptIndexExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptIndexExp,2,0) {(void*) boxptr_Expression_subscriptIndexExp,0}};
#define boxvar_Expression_subscriptIndexExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptIndexExp)


DLLDirection
modelica_metatype omc_Expression_boxExp(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_boxExp omc_Expression_boxExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_boxExp,2,0) {(void*) boxptr_Expression_boxExp,0}};
#define boxvar_Expression_boxExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_boxExp)


DLLDirection
modelica_metatype omc_Expression_unboxExp(threadData_t *threadData, modelica_metatype _ie);
#define boxptr_Expression_unboxExp omc_Expression_unboxExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unboxExp,2,0) {(void*) boxptr_Expression_unboxExp,0}};
#define boxvar_Expression_unboxExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_unboxExp)


DLLDirection
modelica_metatype omc_Expression_unboxExpType(threadData_t *threadData, modelica_metatype _inType);
#define boxptr_Expression_unboxExpType omc_Expression_unboxExpType
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unboxExpType,2,0) {(void*) boxptr_Expression_unboxExpType,0}};
#define boxvar_Expression_unboxExpType MMC_REFSTRUCTLIT(boxvar_lit_Expression_unboxExpType)


DLLDirection
modelica_metatype omc_Expression_get2dArrayOrMatrixContent(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_get2dArrayOrMatrixContent omc_Expression_get2dArrayOrMatrixContent
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_get2dArrayOrMatrixContent,2,0) {(void*) boxptr_Expression_get2dArrayOrMatrixContent,0}};
#define boxvar_Expression_get2dArrayOrMatrixContent MMC_REFSTRUCTLIT(boxvar_lit_Expression_get2dArrayOrMatrixContent)


DLLDirection
modelica_metatype omc_Expression_getArrayOrRangeContents(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_getArrayOrRangeContents omc_Expression_getArrayOrRangeContents
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getArrayOrRangeContents,2,0) {(void*) boxptr_Expression_getArrayOrRangeContents,0}};
#define boxvar_Expression_getArrayOrRangeContents MMC_REFSTRUCTLIT(boxvar_lit_Expression_getArrayOrRangeContents)


#define boxptr_Expression_getComplexContentsInCall omc_Expression_getComplexContentsInCall


DLLDirection
modelica_metatype omc_Expression_getComplexContents(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_getComplexContents omc_Expression_getComplexContents
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getComplexContents,2,0) {(void*) boxptr_Expression_getComplexContents,0}};
#define boxvar_Expression_getComplexContents MMC_REFSTRUCTLIT(boxvar_lit_Expression_getComplexContents)


#define boxptr_Expression_makeASUBsForDimension omc_Expression_makeASUBsForDimension


DLLDirection
modelica_metatype omc_Expression_getArrayOrMatrixContents(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_getArrayOrMatrixContents omc_Expression_getArrayOrMatrixContents
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getArrayOrMatrixContents,2,0) {(void*) boxptr_Expression_getArrayOrMatrixContents,0}};
#define boxvar_Expression_getArrayOrMatrixContents MMC_REFSTRUCTLIT(boxvar_lit_Expression_getArrayOrMatrixContents)


DLLDirection
modelica_metatype omc_Expression_getArrayContents(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_getArrayContents omc_Expression_getArrayContents
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getArrayContents,2,0) {(void*) boxptr_Expression_getArrayContents,0}};
#define boxvar_Expression_getArrayContents MMC_REFSTRUCTLIT(boxvar_lit_Expression_getArrayContents)


DLLDirection
modelica_metatype omc_Expression_expCrefInclIfExpFactors(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expCrefInclIfExpFactors omc_Expression_expCrefInclIfExpFactors
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expCrefInclIfExpFactors,2,0) {(void*) boxptr_Expression_expCrefInclIfExpFactors,0}};
#define boxvar_Expression_expCrefInclIfExpFactors MMC_REFSTRUCTLIT(boxvar_lit_Expression_expCrefInclIfExpFactors)


DLLDirection
modelica_metatype omc_Expression_expCrefTuple(threadData_t *threadData, modelica_metatype _inTuple);
#define boxptr_Expression_expCrefTuple omc_Expression_expCrefTuple
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expCrefTuple,2,0) {(void*) boxptr_Expression_expCrefTuple,0}};
#define boxvar_Expression_expCrefTuple MMC_REFSTRUCTLIT(boxvar_lit_Expression_expCrefTuple)


DLLDirection
modelica_metatype omc_Expression_expCrefNegCref(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expCrefNegCref omc_Expression_expCrefNegCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expCrefNegCref,2,0) {(void*) boxptr_Expression_expCrefNegCref,0}};
#define boxvar_Expression_expCrefNegCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_expCrefNegCref)


DLLDirection
modelica_metatype omc_Expression_expCref(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expCref omc_Expression_expCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expCref,2,0) {(void*) boxptr_Expression_expCref,0}};
#define boxvar_Expression_expCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_expCref)


DLLDirection
modelica_metatype omc_Expression_expOrDerCref(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_isDer);
DLLDirection
modelica_metatype boxptr_Expression_expOrDerCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_isDer);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expOrDerCref,2,0) {(void*) boxptr_Expression_expOrDerCref,0}};
#define boxvar_Expression_expOrDerCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_expOrDerCref)


DLLDirection
modelica_metatype omc_Expression_varType(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Expression_varType omc_Expression_varType
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_varType,2,0) {(void*) boxptr_Expression_varType,0}};
#define boxvar_Expression_varType MMC_REFSTRUCTLIT(boxvar_lit_Expression_varType)


DLLDirection
modelica_string omc_Expression_varName(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Expression_varName omc_Expression_varName
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_varName,2,0) {(void*) boxptr_Expression_varName,0}};
#define boxvar_Expression_varName MMC_REFSTRUCTLIT(boxvar_lit_Expression_varName)


DLLDirection
modelica_string omc_Expression_sconstEnumNameString(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_Expression_sconstEnumNameString omc_Expression_sconstEnumNameString
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_sconstEnumNameString,2,0) {(void*) boxptr_Expression_sconstEnumNameString,0}};
#define boxvar_Expression_sconstEnumNameString MMC_REFSTRUCTLIT(boxvar_lit_Expression_sconstEnumNameString)


DLLDirection
modelica_integer omc_Expression_expArrayIndex(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_expArrayIndex(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expArrayIndex,2,0) {(void*) boxptr_Expression_expArrayIndex,0}};
#define boxvar_Expression_expArrayIndex MMC_REFSTRUCTLIT(boxvar_lit_Expression_expArrayIndex)


DLLDirection
modelica_metatype omc_Expression_getClockInterval(threadData_t *threadData, modelica_metatype _inClk);
#define boxptr_Expression_getClockInterval omc_Expression_getClockInterval
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_getClockInterval,2,0) {(void*) boxptr_Expression_getClockInterval,0}};
#define boxvar_Expression_getClockInterval MMC_REFSTRUCTLIT(boxvar_lit_Expression_getClockInterval)


DLLDirection
modelica_integer omc_Expression_expInt(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_Expression_expInt(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expInt,2,0) {(void*) boxptr_Expression_expInt,0}};
#define boxvar_Expression_expInt MMC_REFSTRUCTLIT(boxvar_lit_Expression_expInt)


DLLDirection
modelica_metatype omc_Expression_realExpIntLit(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_Expression_realExpIntLit omc_Expression_realExpIntLit
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_realExpIntLit,2,0) {(void*) boxptr_Expression_realExpIntLit,0}};
#define boxvar_Expression_realExpIntLit MMC_REFSTRUCTLIT(boxvar_lit_Expression_realExpIntLit)


DLLDirection
modelica_boolean omc_Expression_toBool(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_toBool(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_toBool,2,0) {(void*) boxptr_Expression_toBool,0}};
#define boxvar_Expression_toBool MMC_REFSTRUCTLIT(boxvar_lit_Expression_toBool)


DLLDirection
modelica_real omc_Expression_toReal(threadData_t *threadData, modelica_metatype _inExp);
DLLDirection
modelica_metatype boxptr_Expression_toReal(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_toReal,2,0) {(void*) boxptr_Expression_toReal,0}};
#define boxvar_Expression_toReal MMC_REFSTRUCTLIT(boxvar_lit_Expression_toReal)


DLLDirection
modelica_metatype omc_Expression_arrayDimensionSetFirst(threadData_t *threadData, modelica_metatype _inArrayType, modelica_metatype _dimension);
#define boxptr_Expression_arrayDimensionSetFirst omc_Expression_arrayDimensionSetFirst
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayDimensionSetFirst,2,0) {(void*) boxptr_Expression_arrayDimensionSetFirst,0}};
#define boxvar_Expression_arrayDimensionSetFirst MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayDimensionSetFirst)


DLLDirection
modelica_metatype omc_Expression_arrayAppend(threadData_t *threadData, modelica_metatype _head, modelica_metatype _rest);
#define boxptr_Expression_arrayAppend omc_Expression_arrayAppend
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_arrayAppend,2,0) {(void*) boxptr_Expression_arrayAppend,0}};
#define boxvar_Expression_arrayAppend MMC_REFSTRUCTLIT(boxvar_lit_Expression_arrayAppend)


DLLDirection
modelica_metatype omc_Expression_unliftArrayX(threadData_t *threadData, modelica_metatype _inType, modelica_integer _x);
DLLDirection
modelica_metatype boxptr_Expression_unliftArrayX(threadData_t *threadData, modelica_metatype _inType, modelica_metatype _x);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unliftArrayX,2,0) {(void*) boxptr_Expression_unliftArrayX,0}};
#define boxvar_Expression_unliftArrayX MMC_REFSTRUCTLIT(boxvar_lit_Expression_unliftArrayX)


DLLDirection
modelica_metatype omc_Expression_unliftArrayTypeWithSubs(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _ity);
#define boxptr_Expression_unliftArrayTypeWithSubs omc_Expression_unliftArrayTypeWithSubs
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unliftArrayTypeWithSubs,2,0) {(void*) boxptr_Expression_unliftArrayTypeWithSubs,0}};
#define boxvar_Expression_unliftArrayTypeWithSubs MMC_REFSTRUCTLIT(boxvar_lit_Expression_unliftArrayTypeWithSubs)


DLLDirection
modelica_metatype omc_Expression_subscriptsReplaceSlice(threadData_t *threadData, modelica_metatype _inSubscripts, modelica_metatype _inSubscript);
#define boxptr_Expression_subscriptsReplaceSlice omc_Expression_subscriptsReplaceSlice
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptsReplaceSlice,2,0) {(void*) boxptr_Expression_subscriptsReplaceSlice,0}};
#define boxvar_Expression_subscriptsReplaceSlice MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptsReplaceSlice)


DLLDirection
modelica_metatype omc_Expression_subscriptsAppend(threadData_t *threadData, modelica_metatype _inSubscriptLst, modelica_metatype _inSubscript);
#define boxptr_Expression_subscriptsAppend omc_Expression_subscriptsAppend
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptsAppend,2,0) {(void*) boxptr_Expression_subscriptsAppend,0}};
#define boxvar_Expression_subscriptsAppend MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptsAppend)


DLLDirection
modelica_boolean omc_Expression_isArrayScalarOp(threadData_t *threadData, modelica_metatype _inOperator);
DLLDirection
modelica_metatype boxptr_Expression_isArrayScalarOp(threadData_t *threadData, modelica_metatype _inOperator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isArrayScalarOp,2,0) {(void*) boxptr_Expression_isArrayScalarOp,0}};
#define boxvar_Expression_isArrayScalarOp MMC_REFSTRUCTLIT(boxvar_lit_Expression_isArrayScalarOp)


DLLDirection
modelica_boolean omc_Expression_isScalarArrayOp(threadData_t *threadData, modelica_metatype _inOperator);
DLLDirection
modelica_metatype boxptr_Expression_isScalarArrayOp(threadData_t *threadData, modelica_metatype _inOperator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_isScalarArrayOp,2,0) {(void*) boxptr_Expression_isScalarArrayOp,0}};
#define boxvar_Expression_isScalarArrayOp MMC_REFSTRUCTLIT(boxvar_lit_Expression_isScalarArrayOp)


#define boxptr_Expression_makeScalarOpFromArrayOp omc_Expression_makeScalarOpFromArrayOp


#define boxptr_Expression_unliftOperator2 omc_Expression_unliftOperator2


DLLDirection
modelica_metatype omc_Expression_unliftOperatorX(threadData_t *threadData, modelica_metatype _inOperator, modelica_integer _inX);
DLLDirection
modelica_metatype boxptr_Expression_unliftOperatorX(threadData_t *threadData, modelica_metatype _inOperator, modelica_metatype _inX);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unliftOperatorX,2,0) {(void*) boxptr_Expression_unliftOperatorX,0}};
#define boxvar_Expression_unliftOperatorX MMC_REFSTRUCTLIT(boxvar_lit_Expression_unliftOperatorX)


DLLDirection
modelica_metatype omc_Expression_unliftOperator(threadData_t *threadData, modelica_metatype _inOperator);
#define boxptr_Expression_unliftOperator omc_Expression_unliftOperator
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unliftOperator,2,0) {(void*) boxptr_Expression_unliftOperator,0}};
#define boxvar_Expression_unliftOperator MMC_REFSTRUCTLIT(boxvar_lit_Expression_unliftOperator)


DLLDirection
modelica_metatype omc_Expression_setOpType(threadData_t *threadData, modelica_metatype _inOp, modelica_metatype _inType);
#define boxptr_Expression_setOpType omc_Expression_setOpType
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_setOpType,2,0) {(void*) boxptr_Expression_setOpType,0}};
#define boxvar_Expression_setOpType MMC_REFSTRUCTLIT(boxvar_lit_Expression_setOpType)


DLLDirection
modelica_metatype omc_Expression_liftArrayLeftList(threadData_t *threadData, modelica_metatype _inType, modelica_metatype _inDimensions);
#define boxptr_Expression_liftArrayLeftList omc_Expression_liftArrayLeftList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_liftArrayLeftList,2,0) {(void*) boxptr_Expression_liftArrayLeftList,0}};
#define boxvar_Expression_liftArrayLeftList MMC_REFSTRUCTLIT(boxvar_lit_Expression_liftArrayLeftList)


DLLDirection
modelica_metatype omc_Expression_liftArrayLeft(threadData_t *threadData, modelica_metatype _inType, modelica_metatype _inDimension);
#define boxptr_Expression_liftArrayLeft omc_Expression_liftArrayLeft
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_liftArrayLeft,2,0) {(void*) boxptr_Expression_liftArrayLeft,0}};
#define boxvar_Expression_liftArrayLeft MMC_REFSTRUCTLIT(boxvar_lit_Expression_liftArrayLeft)


DLLDirection
modelica_metatype omc_Expression_liftArrayRight(threadData_t *threadData, modelica_metatype _inType, modelica_metatype _inDimension);
#define boxptr_Expression_liftArrayRight omc_Expression_liftArrayRight
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_liftArrayRight,2,0) {(void*) boxptr_Expression_liftArrayRight,0}};
#define boxvar_Expression_liftArrayRight MMC_REFSTRUCTLIT(boxvar_lit_Expression_liftArrayRight)


DLLDirection
modelica_metatype omc_Expression_liftExpList(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDimensions);
#define boxptr_Expression_liftExpList omc_Expression_liftExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_liftExpList,2,0) {(void*) boxptr_Expression_liftExpList,0}};
#define boxvar_Expression_liftExpList MMC_REFSTRUCTLIT(boxvar_lit_Expression_liftExpList)


DLLDirection
modelica_metatype omc_Expression_liftExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDimension);
#define boxptr_Expression_liftExp omc_Expression_liftExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_liftExp,2,0) {(void*) boxptr_Expression_liftExp,0}};
#define boxvar_Expression_liftExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_liftExp)


DLLDirection
modelica_metatype omc_Expression_unliftExp(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_unliftExp omc_Expression_unliftExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unliftExp,2,0) {(void*) boxptr_Expression_unliftExp,0}};
#define boxvar_Expression_unliftExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_unliftExp)


DLLDirection
modelica_metatype omc_Expression_unliftArrayIgnoreFirst(threadData_t *threadData, modelica_metatype _a, modelica_metatype _inType);
#define boxptr_Expression_unliftArrayIgnoreFirst omc_Expression_unliftArrayIgnoreFirst
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unliftArrayIgnoreFirst,2,0) {(void*) boxptr_Expression_unliftArrayIgnoreFirst,0}};
#define boxvar_Expression_unliftArrayIgnoreFirst MMC_REFSTRUCTLIT(boxvar_lit_Expression_unliftArrayIgnoreFirst)


DLLDirection
modelica_metatype omc_Expression_unliftArray(threadData_t *threadData, modelica_metatype _inType);
#define boxptr_Expression_unliftArray omc_Expression_unliftArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unliftArray,2,0) {(void*) boxptr_Expression_unliftArray,0}};
#define boxvar_Expression_unliftArray MMC_REFSTRUCTLIT(boxvar_lit_Expression_unliftArray)


DLLDirection
modelica_metatype omc_Expression_applyExpSubscripts2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inSubs);
#define boxptr_Expression_applyExpSubscripts2 omc_Expression_applyExpSubscripts2
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_applyExpSubscripts2,2,0) {(void*) boxptr_Expression_applyExpSubscripts2,0}};
#define boxvar_Expression_applyExpSubscripts2 MMC_REFSTRUCTLIT(boxvar_lit_Expression_applyExpSubscripts2)


DLLDirection
modelica_metatype omc_Expression_applyExpSubscriptsFoldCheckSimplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _inSubs, modelica_boolean __omcQ_24in_5FcheckSimplify, modelica_boolean *out_checkSimplify);
DLLDirection
modelica_metatype boxptr_Expression_applyExpSubscriptsFoldCheckSimplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _inSubs, modelica_metatype __omcQ_24in_5FcheckSimplify, modelica_metatype *out_checkSimplify);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_applyExpSubscriptsFoldCheckSimplify,2,0) {(void*) boxptr_Expression_applyExpSubscriptsFoldCheckSimplify,0}};
#define boxvar_Expression_applyExpSubscriptsFoldCheckSimplify MMC_REFSTRUCTLIT(boxvar_lit_Expression_applyExpSubscriptsFoldCheckSimplify)


DLLDirection
modelica_metatype omc_Expression_applyExpSubscripts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _inSubs);
#define boxptr_Expression_applyExpSubscripts omc_Expression_applyExpSubscripts
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_applyExpSubscripts,2,0) {(void*) boxptr_Expression_applyExpSubscripts,0}};
#define boxvar_Expression_applyExpSubscripts MMC_REFSTRUCTLIT(boxvar_lit_Expression_applyExpSubscripts)


DLLDirection
modelica_metatype omc_Expression_prependSubscriptExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _subscr);
#define boxptr_Expression_prependSubscriptExp omc_Expression_prependSubscriptExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_prependSubscriptExp,2,0) {(void*) boxptr_Expression_prependSubscriptExp,0}};
#define boxvar_Expression_prependSubscriptExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_prependSubscriptExp)


DLLDirection
modelica_metatype omc_Expression_expStripLastIdent(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expStripLastIdent omc_Expression_expStripLastIdent
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expStripLastIdent,2,0) {(void*) boxptr_Expression_expStripLastIdent,0}};
#define boxvar_Expression_expStripLastIdent MMC_REFSTRUCTLIT(boxvar_lit_Expression_expStripLastIdent)


DLLDirection
modelica_metatype omc_Expression_expStripLastSubs(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expStripLastSubs omc_Expression_expStripLastSubs
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expStripLastSubs,2,0) {(void*) boxptr_Expression_expStripLastSubs,0}};
#define boxvar_Expression_expStripLastSubs MMC_REFSTRUCTLIT(boxvar_lit_Expression_expStripLastSubs)


#define boxptr_Expression_addNoEventToEventTriggeringFunctionsExp omc_Expression_addNoEventToEventTriggeringFunctionsExp


DLLDirection
modelica_metatype omc_Expression_addNoEventToEventTriggeringFunctions(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_addNoEventToEventTriggeringFunctions omc_Expression_addNoEventToEventTriggeringFunctions
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_addNoEventToEventTriggeringFunctions,2,0) {(void*) boxptr_Expression_addNoEventToEventTriggeringFunctions,0}};
#define boxvar_Expression_addNoEventToEventTriggeringFunctions MMC_REFSTRUCTLIT(boxvar_lit_Expression_addNoEventToEventTriggeringFunctions)


#define boxptr_Expression_addNoEventToRelationandCondExp omc_Expression_addNoEventToRelationandCondExp


DLLDirection
modelica_metatype omc_Expression_addNoEventToRelationsAndConds(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_addNoEventToRelationsAndConds omc_Expression_addNoEventToRelationsAndConds
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_addNoEventToRelationsAndConds,2,0) {(void*) boxptr_Expression_addNoEventToRelationsAndConds,0}};
#define boxvar_Expression_addNoEventToRelationsAndConds MMC_REFSTRUCTLIT(boxvar_lit_Expression_addNoEventToRelationsAndConds)


#define boxptr_Expression_addNoEventToRelationExp omc_Expression_addNoEventToRelationExp


DLLDirection
modelica_metatype omc_Expression_addNoEventToRelations(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_addNoEventToRelations omc_Expression_addNoEventToRelations
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_addNoEventToRelations,2,0) {(void*) boxptr_Expression_addNoEventToRelations,0}};
#define boxvar_Expression_addNoEventToRelations MMC_REFSTRUCTLIT(boxvar_lit_Expression_addNoEventToRelations)


#define boxptr_Expression_stripNoEventExp omc_Expression_stripNoEventExp


DLLDirection
modelica_metatype omc_Expression_stripNoEvent(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_stripNoEvent omc_Expression_stripNoEvent
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_stripNoEvent,2,0) {(void*) boxptr_Expression_stripNoEvent,0}};
#define boxvar_Expression_stripNoEvent MMC_REFSTRUCTLIT(boxvar_lit_Expression_stripNoEvent)


DLLDirection
modelica_metatype omc_Expression_expAbs(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expAbs omc_Expression_expAbs
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expAbs,2,0) {(void*) boxptr_Expression_expAbs,0}};
#define boxvar_Expression_expAbs MMC_REFSTRUCTLIT(boxvar_lit_Expression_expAbs)


DLLDirection
modelica_metatype omc_Expression_expDer(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_expDer omc_Expression_expDer
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expDer,2,0) {(void*) boxptr_Expression_expDer,0}};
#define boxvar_Expression_expDer MMC_REFSTRUCTLIT(boxvar_lit_Expression_expDer)


DLLDirection
modelica_metatype omc_Expression_expand(threadData_t *threadData, modelica_metatype _e);
#define boxptr_Expression_expand omc_Expression_expand
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_expand,2,0) {(void*) boxptr_Expression_expand,0}};
#define boxvar_Expression_expand MMC_REFSTRUCTLIT(boxvar_lit_Expression_expand)


DLLDirection
modelica_metatype omc_Expression_negateReal(threadData_t *threadData, modelica_metatype _inReal);
#define boxptr_Expression_negateReal omc_Expression_negateReal
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_negateReal,2,0) {(void*) boxptr_Expression_negateReal,0}};
#define boxvar_Expression_negateReal MMC_REFSTRUCTLIT(boxvar_lit_Expression_negateReal)


DLLDirection
modelica_metatype omc_Expression_negate(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_negate omc_Expression_negate
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_negate,2,0) {(void*) boxptr_Expression_negate,0}};
#define boxvar_Expression_negate MMC_REFSTRUCTLIT(boxvar_lit_Expression_negate)


DLLDirection
modelica_metatype omc_Expression_dimensionSubscript(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_Expression_dimensionSubscript omc_Expression_dimensionSubscript
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSubscript,2,0) {(void*) boxptr_Expression_dimensionSubscript,0}};
#define boxvar_Expression_dimensionSubscript MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSubscript)


DLLDirection
modelica_metatype omc_Expression_intDimension(threadData_t *threadData, modelica_integer _value);
DLLDirection
modelica_metatype boxptr_Expression_intDimension(threadData_t *threadData, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_intDimension,2,0) {(void*) boxptr_Expression_intDimension,0}};
#define boxvar_Expression_intDimension MMC_REFSTRUCTLIT(boxvar_lit_Expression_intDimension)


DLLDirection
modelica_metatype omc_Expression_dimensionSizeExpHandleUnkown(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_Expression_dimensionSizeExpHandleUnkown omc_Expression_dimensionSizeExpHandleUnkown
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeExpHandleUnkown,2,0) {(void*) boxptr_Expression_dimensionSizeExpHandleUnkown,0}};
#define boxvar_Expression_dimensionSizeExpHandleUnkown MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeExpHandleUnkown)


DLLDirection
modelica_metatype omc_Expression_dimensionSizeExp(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_Expression_dimensionSizeExp omc_Expression_dimensionSizeExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeExp,2,0) {(void*) boxptr_Expression_dimensionSizeExp,0}};
#define boxvar_Expression_dimensionSizeExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeExp)


DLLDirection
modelica_metatype omc_Expression_dimensionSizeConstantExp(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_Expression_dimensionSizeConstantExp omc_Expression_dimensionSizeConstantExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeConstantExp,2,0) {(void*) boxptr_Expression_dimensionSizeConstantExp,0}};
#define boxvar_Expression_dimensionSizeConstantExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionSizeConstantExp)


DLLDirection
modelica_metatype omc_Expression_liftArrayR(threadData_t *threadData, modelica_metatype _tp, modelica_metatype _n);
#define boxptr_Expression_liftArrayR omc_Expression_liftArrayR
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_liftArrayR,2,0) {(void*) boxptr_Expression_liftArrayR,0}};
#define boxvar_Expression_liftArrayR MMC_REFSTRUCTLIT(boxvar_lit_Expression_liftArrayR)


DLLDirection
modelica_metatype omc_Expression_realToIntIfPossible(threadData_t *threadData, modelica_real _inVal);
DLLDirection
modelica_metatype boxptr_Expression_realToIntIfPossible(threadData_t *threadData, modelica_metatype _inVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_realToIntIfPossible,2,0) {(void*) boxptr_Expression_realToIntIfPossible,0}};
#define boxvar_Expression_realToIntIfPossible MMC_REFSTRUCTLIT(boxvar_lit_Expression_realToIntIfPossible)


DLLDirection
modelica_metatype omc_Expression_CodeVarToCref(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_CodeVarToCref omc_Expression_CodeVarToCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_CodeVarToCref,2,0) {(void*) boxptr_Expression_CodeVarToCref,0}};
#define boxvar_Expression_CodeVarToCref MMC_REFSTRUCTLIT(boxvar_lit_Expression_CodeVarToCref)


DLLDirection
modelica_metatype omc_Expression_traversingstringifyCrefFinder(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_traversingstringifyCrefFinder omc_Expression_traversingstringifyCrefFinder
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_traversingstringifyCrefFinder,2,0) {(void*) boxptr_Expression_traversingstringifyCrefFinder,0}};
#define boxvar_Expression_traversingstringifyCrefFinder MMC_REFSTRUCTLIT(boxvar_lit_Expression_traversingstringifyCrefFinder)


DLLDirection
modelica_metatype omc_Expression_stringifyCrefs(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_stringifyCrefs omc_Expression_stringifyCrefs
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_stringifyCrefs,2,0) {(void*) boxptr_Expression_stringifyCrefs,0}};
#define boxvar_Expression_stringifyCrefs MMC_REFSTRUCTLIT(boxvar_lit_Expression_stringifyCrefs)


#define boxptr_Expression_unelabOperator omc_Expression_unelabOperator


#define boxptr_Expression_unelabReductionIterator omc_Expression_unelabReductionIterator


#define boxptr_Expression_unelabDimensionToFillExp omc_Expression_unelabDimensionToFillExp


#define boxptr_Expression_unleabZeroExpFromType omc_Expression_unleabZeroExpFromType


DLLDirection
modelica_metatype omc_Expression_unelabDimension(threadData_t *threadData, modelica_metatype _inDim);
#define boxptr_Expression_unelabDimension omc_Expression_unelabDimension
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unelabDimension,2,0) {(void*) boxptr_Expression_unelabDimension,0}};
#define boxvar_Expression_unelabDimension MMC_REFSTRUCTLIT(boxvar_lit_Expression_unelabDimension)


DLLDirection
modelica_metatype omc_Expression_unelabExp(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_Expression_unelabExp omc_Expression_unelabExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_unelabExp,2,0) {(void*) boxptr_Expression_unelabExp,0}};
#define boxvar_Expression_unelabExp MMC_REFSTRUCTLIT(boxvar_lit_Expression_unelabExp)


DLLDirection
modelica_boolean omc_Expression_dimensionIsZero(threadData_t *threadData, modelica_metatype _inDimension);
DLLDirection
modelica_metatype boxptr_Expression_dimensionIsZero(threadData_t *threadData, modelica_metatype _inDimension);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_dimensionIsZero,2,0) {(void*) boxptr_Expression_dimensionIsZero,0}};
#define boxvar_Expression_dimensionIsZero MMC_REFSTRUCTLIT(boxvar_lit_Expression_dimensionIsZero)


DLLDirection
modelica_metatype omc_Expression_subscriptsInt(threadData_t *threadData, modelica_metatype _inSubscripts);
#define boxptr_Expression_subscriptsInt omc_Expression_subscriptsInt
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptsInt,2,0) {(void*) boxptr_Expression_subscriptsInt,0}};
#define boxvar_Expression_subscriptsInt MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptsInt)


DLLDirection
modelica_integer omc_Expression_subscriptInt(threadData_t *threadData, modelica_metatype _inSubscript);
DLLDirection
modelica_metatype boxptr_Expression_subscriptInt(threadData_t *threadData, modelica_metatype _inSubscript);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_subscriptInt,2,0) {(void*) boxptr_Expression_subscriptInt,0}};
#define boxvar_Expression_subscriptInt MMC_REFSTRUCTLIT(boxvar_lit_Expression_subscriptInt)


DLLDirection
modelica_metatype omc_Expression_intSubscripts(threadData_t *threadData, modelica_metatype _inIntegers);
#define boxptr_Expression_intSubscripts omc_Expression_intSubscripts
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_intSubscripts,2,0) {(void*) boxptr_Expression_intSubscripts,0}};
#define boxvar_Expression_intSubscripts MMC_REFSTRUCTLIT(boxvar_lit_Expression_intSubscripts)


DLLDirection
modelica_metatype omc_Expression_intSubscript(threadData_t *threadData, modelica_integer _inInteger);
DLLDirection
modelica_metatype boxptr_Expression_intSubscript(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Expression_intSubscript,2,0) {(void*) boxptr_Expression_intSubscript,0}};
#define boxvar_Expression_intSubscript MMC_REFSTRUCTLIT(boxvar_lit_Expression_intSubscript)

#ifdef __cplusplus
}
#endif
#endif
