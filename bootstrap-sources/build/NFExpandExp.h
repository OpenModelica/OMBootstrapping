#ifndef NFExpandExp__H
#define NFExpandExp__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFCall_TYPED__CALL__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFExpression_BINARY__desc;

extern struct record_description NFExpression_BOOLEAN__desc;

extern struct record_description NFExpression_CALL__desc;

extern struct record_description NFExpression_CREF__desc;

extern struct record_description NFExpression_EMPTY__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_LBINARY__desc;

extern struct record_description NFExpression_LUNARY__desc;

extern struct record_description NFExpression_MUTABLE__desc;

extern struct record_description NFExpression_REAL__desc;

extern struct record_description NFExpression_SIZE__desc;

extern struct record_description NFOperator_OPERATOR__desc;

extern struct record_description NFSubscript_INDEX__desc;

extern struct record_description NFType_ARRAY__desc;

extern struct record_description NFType_REAL__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandCallArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
#define boxptr_NFExpandExp_expandCallArgs omc_NFExpandExp_expandCallArgs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCallArgs,2,0) {(void*) boxptr_NFExpandExp_expandCallArgs,0}};
#define boxvar_NFExpandExp_expandCallArgs MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCallArgs)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandGeneric2(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _accum);
#define boxptr_NFExpandExp_expandGeneric2 omc_NFExpandExp_expandGeneric2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandGeneric2,2,0) {(void*) boxptr_NFExpandExp_expandGeneric2,0}};
#define boxvar_NFExpandExp_expandGeneric2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandGeneric2)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandGeneric(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandGeneric(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandGeneric,2,0) {(void*) boxptr_NFExpandExp_expandGeneric,0}};
#define boxvar_NFExpandExp_expandGeneric MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandGeneric)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandCast(threadData_t *threadData, modelica_metatype _castExp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandCast(threadData_t *threadData, modelica_metatype _castExp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCast,2,0) {(void*) boxptr_NFExpandExp_expandCast,0}};
#define boxvar_NFExpandExp_expandCast MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCast)


DLLModelDirection
modelica_metatype omc_NFExpandExp_makeLogicalUnaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op);
#define boxptr_NFExpandExp_makeLogicalUnaryOp omc_NFExpandExp_makeLogicalUnaryOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeLogicalUnaryOp,2,0) {(void*) boxptr_NFExpandExp_makeLogicalUnaryOp,0}};
#define boxvar_NFExpandExp_makeLogicalUnaryOp MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeLogicalUnaryOp)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandLogicalUnary(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandLogicalUnary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandLogicalUnary,2,0) {(void*) boxptr_NFExpandExp_expandLogicalUnary,0}};
#define boxvar_NFExpandExp_expandLogicalUnary MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandLogicalUnary)


DLLModelDirection
modelica_metatype omc_NFExpandExp_makeLBinaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2);
#define boxptr_NFExpandExp_makeLBinaryOp omc_NFExpandExp_makeLBinaryOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeLBinaryOp,2,0) {(void*) boxptr_NFExpandExp_makeLBinaryOp,0}};
#define boxvar_NFExpandExp_makeLBinaryOp MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeLBinaryOp)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandLogicalBinary(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandLogicalBinary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandLogicalBinary,2,0) {(void*) boxptr_NFExpandExp_expandLogicalBinary,0}};
#define boxvar_NFExpandExp_expandLogicalBinary MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandLogicalBinary)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandUnary(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandUnary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandUnary,2,0) {(void*) boxptr_NFExpandExp_expandUnary,0}};
#define boxvar_NFExpandExp_expandUnary MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandUnary)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryPowMatrix2(threadData_t *threadData, modelica_metatype _matrix, modelica_integer _n);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryPowMatrix2(threadData_t *threadData, modelica_metatype _matrix, modelica_metatype _n);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryPowMatrix2,2,0) {(void*) boxptr_NFExpandExp_expandBinaryPowMatrix2,0}};
#define boxvar_NFExpandExp_expandBinaryPowMatrix2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryPowMatrix2)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryPowMatrix(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryPowMatrix(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryPowMatrix,2,0) {(void*) boxptr_NFExpandExp_expandBinaryPowMatrix,0}};
#define boxvar_NFExpandExp_expandBinaryPowMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryPowMatrix)


DLLModelDirection
modelica_metatype omc_NFExpandExp_makeBinaryMatrixProduct2(threadData_t *threadData, modelica_metatype _row, modelica_metatype _matrix);
#define boxptr_NFExpandExp_makeBinaryMatrixProduct2 omc_NFExpandExp_makeBinaryMatrixProduct2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeBinaryMatrixProduct2,2,0) {(void*) boxptr_NFExpandExp_makeBinaryMatrixProduct2,0}};
#define boxvar_NFExpandExp_makeBinaryMatrixProduct2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeBinaryMatrixProduct2)


DLLModelDirection
modelica_metatype omc_NFExpandExp_makeBinaryMatrixProduct(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFExpandExp_makeBinaryMatrixProduct omc_NFExpandExp_makeBinaryMatrixProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeBinaryMatrixProduct,2,0) {(void*) boxptr_NFExpandExp_makeBinaryMatrixProduct,0}};
#define boxvar_NFExpandExp_makeBinaryMatrixProduct MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeBinaryMatrixProduct)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryMatrixProduct(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryMatrixProduct(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryMatrixProduct,2,0) {(void*) boxptr_NFExpandExp_expandBinaryMatrixProduct,0}};
#define boxvar_NFExpandExp_expandBinaryMatrixProduct MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryMatrixProduct)


DLLModelDirection
modelica_metatype omc_NFExpandExp_makeScalarProduct(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFExpandExp_makeScalarProduct omc_NFExpandExp_makeScalarProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeScalarProduct,2,0) {(void*) boxptr_NFExpandExp_makeScalarProduct,0}};
#define boxvar_NFExpandExp_makeScalarProduct MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeScalarProduct)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryDotProduct(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryDotProduct(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryDotProduct,2,0) {(void*) boxptr_NFExpandExp_expandBinaryDotProduct,0}};
#define boxvar_NFExpandExp_expandBinaryDotProduct MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryDotProduct)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryMatrixVector(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryMatrixVector(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryMatrixVector,2,0) {(void*) boxptr_NFExpandExp_expandBinaryMatrixVector,0}};
#define boxvar_NFExpandExp_expandBinaryMatrixVector MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryMatrixVector)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryVectorMatrix(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryVectorMatrix(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryVectorMatrix,2,0) {(void*) boxptr_NFExpandExp_expandBinaryVectorMatrix,0}};
#define boxvar_NFExpandExp_expandBinaryVectorMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryVectorMatrix)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryArrayScalar(threadData_t *threadData, modelica_metatype _exp, modelica_integer _scalarOp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryArrayScalar(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _scalarOp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryArrayScalar,2,0) {(void*) boxptr_NFExpandExp_expandBinaryArrayScalar,0}};
#define boxvar_NFExpandExp_expandBinaryArrayScalar MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryArrayScalar)


DLLModelDirection
modelica_metatype omc_NFExpandExp_makeScalarArrayBinary__traverser(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2);
#define boxptr_NFExpandExp_makeScalarArrayBinary__traverser omc_NFExpandExp_makeScalarArrayBinary__traverser
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeScalarArrayBinary__traverser,2,0) {(void*) boxptr_NFExpandExp_makeScalarArrayBinary__traverser,0}};
#define boxvar_NFExpandExp_makeScalarArrayBinary__traverser MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeScalarArrayBinary__traverser)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryScalarArray(threadData_t *threadData, modelica_metatype _exp, modelica_integer _scalarOp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryScalarArray(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _scalarOp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryScalarArray,2,0) {(void*) boxptr_NFExpandExp_expandBinaryScalarArray,0}};
#define boxvar_NFExpandExp_expandBinaryScalarArray MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryScalarArray)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryElementWise2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2, modelica_fnptr _func);
#define boxptr_NFExpandExp_expandBinaryElementWise2 omc_NFExpandExp_expandBinaryElementWise2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryElementWise2,2,0) {(void*) boxptr_NFExpandExp_expandBinaryElementWise2,0}};
#define boxvar_NFExpandExp_expandBinaryElementWise2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryElementWise2)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinaryElementWise(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryElementWise(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryElementWise,2,0) {(void*) boxptr_NFExpandExp_expandBinaryElementWise,0}};
#define boxvar_NFExpandExp_expandBinaryElementWise MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryElementWise)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBinary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _op, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBinary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _op, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinary,2,0) {(void*) boxptr_NFExpandExp_expandBinary,0}};
#define boxvar_NFExpandExp_expandBinary MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinary)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandSize(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandSize(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandSize,2,0) {(void*) boxptr_NFExpandExp_expandSize,0}};
#define boxvar_NFExpandExp_expandSize MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandSize)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandArrayConstructor2(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _ranges, modelica_metatype _iterators);
#define boxptr_NFExpandExp_expandArrayConstructor2 omc_NFExpandExp_expandArrayConstructor2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArrayConstructor2,2,0) {(void*) boxptr_NFExpandExp_expandArrayConstructor2,0}};
#define boxvar_NFExpandExp_expandArrayConstructor2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArrayConstructor2)


DLLModelDirection
modelica_metatype omc_NFExpandExp_fillArrayConstructor(threadData_t *threadData, modelica_metatype _value, modelica_metatype _ty, modelica_integer _levels);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_fillArrayConstructor(threadData_t *threadData, modelica_metatype _value, modelica_metatype _ty, modelica_metatype _levels);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_fillArrayConstructor,2,0) {(void*) boxptr_NFExpandExp_fillArrayConstructor,0}};
#define boxvar_NFExpandExp_fillArrayConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_fillArrayConstructor)


DLLModelDirection
modelica_boolean omc_NFExpandExp_usesIterator(threadData_t *threadData, modelica_metatype _iterator, modelica_metatype _exp);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_usesIterator(threadData_t *threadData, modelica_metatype _iterator, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_usesIterator,2,0) {(void*) boxptr_NFExpandExp_usesIterator,0}};
#define boxvar_NFExpandExp_usesIterator MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_usesIterator)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandArrayConstructor(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _iterators, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandArrayConstructor(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _iterators, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArrayConstructor,2,0) {(void*) boxptr_NFExpandExp_expandArrayConstructor,0}};
#define boxvar_NFExpandExp_expandArrayConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArrayConstructor)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBuiltinGeneric2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _fn, modelica_metatype _ty, modelica_integer _var, modelica_integer _pur, modelica_metatype _attr);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinGeneric2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _fn, modelica_metatype _ty, modelica_metatype _var, modelica_metatype _pur, modelica_metatype _attr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinGeneric2,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinGeneric2,0}};
#define boxvar_NFExpandExp_expandBuiltinGeneric2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinGeneric2)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBuiltinGeneric(threadData_t *threadData, modelica_metatype _call, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinGeneric(threadData_t *threadData, modelica_metatype _call, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinGeneric,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinGeneric,0}};
#define boxvar_NFExpandExp_expandBuiltinGeneric MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinGeneric)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBuiltinTranspose(threadData_t *threadData, modelica_metatype _arg, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinTranspose(threadData_t *threadData, modelica_metatype _arg, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinTranspose,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinTranspose,0}};
#define boxvar_NFExpandExp_expandBuiltinTranspose MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinTranspose)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBuiltinFill(threadData_t *threadData, modelica_metatype _args, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinFill(threadData_t *threadData, modelica_metatype _args, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinFill,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinFill,0}};
#define boxvar_NFExpandExp_expandBuiltinFill MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinFill)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBuiltinDiagonal(threadData_t *threadData, modelica_metatype _arg, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinDiagonal(threadData_t *threadData, modelica_metatype _arg, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinDiagonal,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinDiagonal,0}};
#define boxvar_NFExpandExp_expandBuiltinDiagonal MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinDiagonal)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBuiltinPromote(threadData_t *threadData, modelica_metatype _args, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinPromote(threadData_t *threadData, modelica_metatype _args, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinPromote,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinPromote,0}};
#define boxvar_NFExpandExp_expandBuiltinPromote MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinPromote)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBuiltinCat(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinCat(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinCat,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinCat,0}};
#define boxvar_NFExpandExp_expandBuiltinCat MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinCat)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandBuiltinCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _call, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _call, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinCall,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinCall,0}};
#define boxvar_NFExpandExp_expandBuiltinCall MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinCall)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype _exp, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype _exp, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCall,2,0) {(void*) boxptr_NFExpandExp_expandCall,0}};
#define boxvar_NFExpandExp_expandCall MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCall)


DLLModelDirection
modelica_metatype omc_NFExpandExp_makeIndexOffset(threadData_t *threadData, modelica_integer _offset, modelica_metatype _ty);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_makeIndexOffset(threadData_t *threadData, modelica_metatype _offset, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeIndexOffset,2,0) {(void*) boxptr_NFExpandExp_makeIndexOffset,0}};
#define boxvar_NFExpandExp_makeIndexOffset MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeIndexOffset)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandNonLiteralRange(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandNonLiteralRange(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandNonLiteralRange,2,0) {(void*) boxptr_NFExpandExp_expandNonLiteralRange,0}};
#define boxvar_NFExpandExp_expandNonLiteralRange MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandNonLiteralRange)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandRange(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandRange(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandRange,2,0) {(void*) boxptr_NFExpandExp_expandRange,0}};
#define boxvar_NFExpandExp_expandRange MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandRange)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandTypename(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFExpandExp_expandTypename omc_NFExpandExp_expandTypename
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandTypename,2,0) {(void*) boxptr_NFExpandExp_expandTypename,0}};
#define boxvar_NFExpandExp_expandTypename MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandTypename)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandCref4(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _comb, modelica_metatype _accum, modelica_metatype _restSubs, modelica_metatype _cref, modelica_metatype _crefType);
#define boxptr_NFExpandExp_expandCref4 omc_NFExpandExp_expandCref4
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref4,2,0) {(void*) boxptr_NFExpandExp_expandCref4,0}};
#define boxvar_NFExpandExp_expandCref4 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref4)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandCref3(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _cref, modelica_metatype _crefType, modelica_metatype _accum);
#define boxptr_NFExpandExp_expandCref3 omc_NFExpandExp_expandCref3
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref3,2,0) {(void*) boxptr_NFExpandExp_expandCref3,0}};
#define boxvar_NFExpandExp_expandCref3 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref3)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandCref2(threadData_t *threadData, modelica_metatype _cref, modelica_boolean _backend, modelica_boolean _resize, modelica_metatype __omcQ_24in_5Fsubs);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandCref2(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _backend, modelica_metatype _resize, modelica_metatype __omcQ_24in_5Fsubs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref2,2,0) {(void*) boxptr_NFExpandExp_expandCref2,0}};
#define boxvar_NFExpandExp_expandCref2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref2)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandCref(threadData_t *threadData, modelica_metatype _crefExp, modelica_boolean _backend, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandCref(threadData_t *threadData, modelica_metatype _crefExp, modelica_metatype _backend, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref,2,0) {(void*) boxptr_NFExpandExp_expandCref,0}};
#define boxvar_NFExpandExp_expandCref MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandList(threadData_t *threadData, modelica_metatype _expl, modelica_boolean _abortOnFailure, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandList(threadData_t *threadData, modelica_metatype _expl, modelica_metatype _abortOnFailure, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandList,2,0) {(void*) boxptr_NFExpandExp_expandList,0}};
#define boxvar_NFExpandExp_expandList MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandList)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expandArray(threadData_t *threadData, modelica_metatype _arr, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expandArray(threadData_t *threadData, modelica_metatype _arr, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArray,2,0) {(void*) boxptr_NFExpandExp_expandArray,0}};
#define boxvar_NFExpandExp_expandArray MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArray)


DLLModelDirection
modelica_metatype omc_NFExpandExp_expand(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_boolean _backend, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLModelDirection
modelica_metatype boxptr_NFExpandExp_expand(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _backend, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expand,2,0) {(void*) boxptr_NFExpandExp_expand,0}};
#define boxvar_NFExpandExp_expand MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expand)

#ifdef __cplusplus
}
#endif
#endif
