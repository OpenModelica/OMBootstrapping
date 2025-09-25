#ifndef SBMultiInterval__H
#define SBMultiInterval__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SBMultiInterval_MULTI__INTERVAL__desc;


DLLDirection
modelica_string omc_SBMultiInterval_toString(threadData_t *threadData, modelica_metatype _mi);
#define boxptr_SBMultiInterval_toString omc_SBMultiInterval_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_toString,2,0) {(void*) boxptr_SBMultiInterval_toString,0}};
#define boxvar_SBMultiInterval_toString MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_toString)


DLLDirection
modelica_integer omc_SBMultiInterval_size(threadData_t *threadData, modelica_metatype _mi);
DLLDirection
modelica_metatype boxptr_SBMultiInterval_size(threadData_t *threadData, modelica_metatype _mi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_size,2,0) {(void*) boxptr_SBMultiInterval_size,0}};
#define boxvar_SBMultiInterval_size MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_size)


DLLDirection
modelica_integer omc_SBMultiInterval_hash(threadData_t *threadData, modelica_metatype _mi);
DLLDirection
modelica_metatype boxptr_SBMultiInterval_hash(threadData_t *threadData, modelica_metatype _mi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_hash,2,0) {(void*) boxptr_SBMultiInterval_hash,0}};
#define boxvar_SBMultiInterval_hash MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_hash)


DLLDirection
modelica_boolean omc_SBMultiInterval_isEqual(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2);
DLLDirection
modelica_metatype boxptr_SBMultiInterval_isEqual(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_isEqual,2,0) {(void*) boxptr_SBMultiInterval_isEqual,0}};
#define boxvar_SBMultiInterval_isEqual MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_isEqual)


DLLDirection
modelica_metatype omc_SBMultiInterval_replace(threadData_t *threadData, modelica_metatype _i, modelica_integer _dim, modelica_metatype _mi);
DLLDirection
modelica_metatype boxptr_SBMultiInterval_replace(threadData_t *threadData, modelica_metatype _i, modelica_metatype _dim, modelica_metatype _mi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_replace,2,0) {(void*) boxptr_SBMultiInterval_replace,0}};
#define boxvar_SBMultiInterval_replace MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_replace)


DLLDirection
modelica_metatype omc_SBMultiInterval_minElem(threadData_t *threadData, modelica_metatype _mi);
#define boxptr_SBMultiInterval_minElem omc_SBMultiInterval_minElem
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_minElem,2,0) {(void*) boxptr_SBMultiInterval_minElem,0}};
#define boxvar_SBMultiInterval_minElem MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_minElem)


DLLDirection
modelica_integer omc_SBMultiInterval_ndim(threadData_t *threadData, modelica_metatype _mi);
DLLDirection
modelica_metatype boxptr_SBMultiInterval_ndim(threadData_t *threadData, modelica_metatype _mi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_ndim,2,0) {(void*) boxptr_SBMultiInterval_ndim,0}};
#define boxvar_SBMultiInterval_ndim MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_ndim)


DLLDirection
modelica_metatype omc_SBMultiInterval_intervals(threadData_t *threadData, modelica_metatype _mi);
#define boxptr_SBMultiInterval_intervals omc_SBMultiInterval_intervals
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_intervals,2,0) {(void*) boxptr_SBMultiInterval_intervals,0}};
#define boxvar_SBMultiInterval_intervals MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_intervals)


DLLDirection
modelica_integer omc_SBMultiInterval_cardinality(threadData_t *threadData, modelica_metatype _mi);
DLLDirection
modelica_metatype boxptr_SBMultiInterval_cardinality(threadData_t *threadData, modelica_metatype _mi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_cardinality,2,0) {(void*) boxptr_SBMultiInterval_cardinality,0}};
#define boxvar_SBMultiInterval_cardinality MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_cardinality)


DLLDirection
modelica_metatype omc_SBMultiInterval_crossProd(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2);
#define boxptr_SBMultiInterval_crossProd omc_SBMultiInterval_crossProd
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_crossProd,2,0) {(void*) boxptr_SBMultiInterval_crossProd,0}};
#define boxvar_SBMultiInterval_crossProd MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_crossProd)


DLLDirection
modelica_metatype omc_SBMultiInterval_complement(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2);
#define boxptr_SBMultiInterval_complement omc_SBMultiInterval_complement
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_complement,2,0) {(void*) boxptr_SBMultiInterval_complement,0}};
#define boxvar_SBMultiInterval_complement MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_complement)


DLLDirection
modelica_metatype omc_SBMultiInterval_intersection(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2);
#define boxptr_SBMultiInterval_intersection omc_SBMultiInterval_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_intersection,2,0) {(void*) boxptr_SBMultiInterval_intersection,0}};
#define boxvar_SBMultiInterval_intersection MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_intersection)


DLLDirection
modelica_boolean omc_SBMultiInterval_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _mi);
DLLDirection
modelica_metatype boxptr_SBMultiInterval_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _mi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_contains,2,0) {(void*) boxptr_SBMultiInterval_contains,0}};
#define boxvar_SBMultiInterval_contains MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_contains)


DLLDirection
modelica_boolean omc_SBMultiInterval_isEmpty(threadData_t *threadData, modelica_metatype _mi);
DLLDirection
modelica_metatype boxptr_SBMultiInterval_isEmpty(threadData_t *threadData, modelica_metatype _mi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_isEmpty,2,0) {(void*) boxptr_SBMultiInterval_isEmpty,0}};
#define boxvar_SBMultiInterval_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_isEmpty)


DLLDirection
modelica_metatype omc_SBMultiInterval_fromArray(threadData_t *threadData, modelica_metatype _ints);
#define boxptr_SBMultiInterval_fromArray omc_SBMultiInterval_fromArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_fromArray,2,0) {(void*) boxptr_SBMultiInterval_fromArray,0}};
#define boxvar_SBMultiInterval_fromArray MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_fromArray)


DLLDirection
modelica_metatype omc_SBMultiInterval_fromList(threadData_t *threadData, modelica_metatype _ints);
#define boxptr_SBMultiInterval_fromList omc_SBMultiInterval_fromList
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_fromList,2,0) {(void*) boxptr_SBMultiInterval_fromList,0}};
#define boxvar_SBMultiInterval_fromList MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_fromList)


DLLDirection
modelica_metatype omc_SBMultiInterval_copy(threadData_t *threadData, modelica_metatype _mi);
#define boxptr_SBMultiInterval_copy omc_SBMultiInterval_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_copy,2,0) {(void*) boxptr_SBMultiInterval_copy,0}};
#define boxvar_SBMultiInterval_copy MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_copy)


DLLDirection
modelica_metatype omc_SBMultiInterval_newEmpty(threadData_t *threadData);
#define boxptr_SBMultiInterval_newEmpty omc_SBMultiInterval_newEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_newEmpty,2,0) {(void*) boxptr_SBMultiInterval_newEmpty,0}};
#define boxvar_SBMultiInterval_newEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_newEmpty)

#ifdef __cplusplus
}
#endif
#endif
