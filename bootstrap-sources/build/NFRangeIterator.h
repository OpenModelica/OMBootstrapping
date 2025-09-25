#ifndef NFRangeIterator__H
#define NFRangeIterator__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFExpression_BOOLEAN__desc;

extern struct record_description NFExpression_ENUM__LITERAL__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_REAL__desc;

extern struct record_description NFRangeIterator_ARRAY__RANGE__desc;

extern struct record_description NFRangeIterator_INT__RANGE__desc;

extern struct record_description NFRangeIterator_INT__STEP__RANGE__desc;

extern struct record_description NFRangeIterator_INVALID__RANGE__desc;

extern struct record_description NFRangeIterator_REAL__RANGE__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFRangeIterator_fold(threadData_t *threadData, modelica_metatype _iterator, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFRangeIterator_fold omc_NFRangeIterator_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_fold,2,0) {(void*) boxptr_NFRangeIterator_fold,0}};
#define boxvar_NFRangeIterator_fold MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_fold)


DLLDirection
modelica_metatype omc_NFRangeIterator_map(threadData_t *threadData, modelica_metatype _iterator, modelica_fnptr _func);
#define boxptr_NFRangeIterator_map omc_NFRangeIterator_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_map,2,0) {(void*) boxptr_NFRangeIterator_map,0}};
#define boxvar_NFRangeIterator_map MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_map)


DLLDirection
modelica_metatype omc_NFRangeIterator_toListReverse(threadData_t *threadData, modelica_metatype _iterator);
#define boxptr_NFRangeIterator_toListReverse omc_NFRangeIterator_toListReverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_toListReverse,2,0) {(void*) boxptr_NFRangeIterator_toListReverse,0}};
#define boxvar_NFRangeIterator_toListReverse MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_toListReverse)


DLLDirection
modelica_metatype omc_NFRangeIterator_toList(threadData_t *threadData, modelica_metatype _iterator);
#define boxptr_NFRangeIterator_toList omc_NFRangeIterator_toList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_toList,2,0) {(void*) boxptr_NFRangeIterator_toList,0}};
#define boxvar_NFRangeIterator_toList MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_toList)


DLLDirection
modelica_boolean omc_NFRangeIterator_hasNext(threadData_t *threadData, modelica_metatype _iterator);
DLLDirection
modelica_metatype boxptr_NFRangeIterator_hasNext(threadData_t *threadData, modelica_metatype _iterator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_hasNext,2,0) {(void*) boxptr_NFRangeIterator_hasNext,0}};
#define boxvar_NFRangeIterator_hasNext MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_hasNext)


DLLDirection
modelica_metatype omc_NFRangeIterator_next(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fiterator, modelica_metatype *out_nextExp);
#define boxptr_NFRangeIterator_next omc_NFRangeIterator_next
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_next,2,0) {(void*) boxptr_NFRangeIterator_next,0}};
#define boxvar_NFRangeIterator_next MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_next)


DLLDirection
modelica_metatype omc_NFRangeIterator_fromDim(threadData_t *threadData, modelica_metatype _dim, modelica_boolean _resizable);
DLLDirection
modelica_metatype boxptr_NFRangeIterator_fromDim(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _resizable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_fromDim,2,0) {(void*) boxptr_NFRangeIterator_fromDim,0}};
#define boxvar_NFRangeIterator_fromDim MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_fromDim)


DLLDirection
modelica_metatype omc_NFRangeIterator_fromExp(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFRangeIterator_fromExp omc_NFRangeIterator_fromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_fromExp,2,0) {(void*) boxptr_NFRangeIterator_fromExp,0}};
#define boxvar_NFRangeIterator_fromExp MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_fromExp)


DLLDirection
modelica_boolean omc_NFRangeIterator_isValid(threadData_t *threadData, modelica_metatype _iterator);
DLLDirection
modelica_metatype boxptr_NFRangeIterator_isValid(threadData_t *threadData, modelica_metatype _iterator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRangeIterator_isValid,2,0) {(void*) boxptr_NFRangeIterator_isValid,0}};
#define boxvar_NFRangeIterator_isValid MMC_REFSTRUCTLIT(boxvar_lit_NFRangeIterator_isValid)

#ifdef __cplusplus
}
#endif
#endif
