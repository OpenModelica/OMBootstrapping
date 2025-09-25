#ifndef SBAtomicSet__H
#define SBAtomicSet__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SBAtomicSet_ATOMIC__SET__desc;


DLLDirection
modelica_string omc_SBAtomicSet_toString(threadData_t *threadData, modelica_metatype _set);
#define boxptr_SBAtomicSet_toString omc_SBAtomicSet_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_toString,2,0) {(void*) boxptr_SBAtomicSet_toString,0}};
#define boxvar_SBAtomicSet_toString MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_toString)


DLLDirection
modelica_integer omc_SBAtomicSet_hash(threadData_t *threadData, modelica_metatype _set1);
DLLDirection
modelica_metatype boxptr_SBAtomicSet_hash(threadData_t *threadData, modelica_metatype _set1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_hash,2,0) {(void*) boxptr_SBAtomicSet_hash,0}};
#define boxvar_SBAtomicSet_hash MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_hash)


DLLDirection
modelica_boolean omc_SBAtomicSet_isEqual(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
DLLDirection
modelica_metatype boxptr_SBAtomicSet_isEqual(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_isEqual,2,0) {(void*) boxptr_SBAtomicSet_isEqual,0}};
#define boxvar_SBAtomicSet_isEqual MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_isEqual)


DLLDirection
modelica_metatype omc_SBAtomicSet_replace(threadData_t *threadData, modelica_metatype _i, modelica_integer _dim, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBAtomicSet_replace(threadData_t *threadData, modelica_metatype _i, modelica_metatype _dim, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_replace,2,0) {(void*) boxptr_SBAtomicSet_replace,0}};
#define boxvar_SBAtomicSet_replace MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_replace)


DLLDirection
modelica_metatype omc_SBAtomicSet_minElem(threadData_t *threadData, modelica_metatype _set);
#define boxptr_SBAtomicSet_minElem omc_SBAtomicSet_minElem
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_minElem,2,0) {(void*) boxptr_SBAtomicSet_minElem,0}};
#define boxvar_SBAtomicSet_minElem MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_minElem)


DLLDirection
modelica_metatype omc_SBAtomicSet_aset(threadData_t *threadData, modelica_metatype _set);
#define boxptr_SBAtomicSet_aset omc_SBAtomicSet_aset
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_aset,2,0) {(void*) boxptr_SBAtomicSet_aset,0}};
#define boxvar_SBAtomicSet_aset MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_aset)


DLLDirection
modelica_integer omc_SBAtomicSet_cardinality(threadData_t *threadData, modelica_metatype _set, modelica_integer __omcQ_24in_5Fcard);
DLLDirection
modelica_metatype boxptr_SBAtomicSet_cardinality(threadData_t *threadData, modelica_metatype _set, modelica_metatype __omcQ_24in_5Fcard);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_cardinality,2,0) {(void*) boxptr_SBAtomicSet_cardinality,0}};
#define boxvar_SBAtomicSet_cardinality MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_cardinality)


DLLDirection
modelica_metatype omc_SBAtomicSet_crossProd(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
#define boxptr_SBAtomicSet_crossProd omc_SBAtomicSet_crossProd
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_crossProd,2,0) {(void*) boxptr_SBAtomicSet_crossProd,0}};
#define boxvar_SBAtomicSet_crossProd MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_crossProd)


DLLDirection
modelica_metatype omc_SBAtomicSet_complement(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
#define boxptr_SBAtomicSet_complement omc_SBAtomicSet_complement
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_complement,2,0) {(void*) boxptr_SBAtomicSet_complement,0}};
#define boxvar_SBAtomicSet_complement MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_complement)


DLLDirection
modelica_metatype omc_SBAtomicSet_intersection(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
#define boxptr_SBAtomicSet_intersection omc_SBAtomicSet_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_intersection,2,0) {(void*) boxptr_SBAtomicSet_intersection,0}};
#define boxvar_SBAtomicSet_intersection MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_intersection)


DLLDirection
modelica_boolean omc_SBAtomicSet_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBAtomicSet_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_contains,2,0) {(void*) boxptr_SBAtomicSet_contains,0}};
#define boxvar_SBAtomicSet_contains MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_contains)


DLLDirection
modelica_boolean omc_SBAtomicSet_isEmpty(threadData_t *threadData, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBAtomicSet_isEmpty(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_isEmpty,2,0) {(void*) boxptr_SBAtomicSet_isEmpty,0}};
#define boxvar_SBAtomicSet_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_isEmpty)


DLLDirection
modelica_integer omc_SBAtomicSet_ndim(threadData_t *threadData, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBAtomicSet_ndim(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_ndim,2,0) {(void*) boxptr_SBAtomicSet_ndim,0}};
#define boxvar_SBAtomicSet_ndim MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_ndim)


DLLDirection
modelica_metatype omc_SBAtomicSet_copy(threadData_t *threadData, modelica_metatype _set);
#define boxptr_SBAtomicSet_copy omc_SBAtomicSet_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_copy,2,0) {(void*) boxptr_SBAtomicSet_copy,0}};
#define boxvar_SBAtomicSet_copy MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_copy)


DLLDirection
modelica_metatype omc_SBAtomicSet_newEmpty(threadData_t *threadData);
#define boxptr_SBAtomicSet_newEmpty omc_SBAtomicSet_newEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_newEmpty,2,0) {(void*) boxptr_SBAtomicSet_newEmpty,0}};
#define boxvar_SBAtomicSet_newEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_newEmpty)


DLLDirection
modelica_metatype omc_SBAtomicSet_new(threadData_t *threadData, modelica_metatype _mi);
#define boxptr_SBAtomicSet_new omc_SBAtomicSet_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBAtomicSet_new,2,0) {(void*) boxptr_SBAtomicSet_new,0}};
#define boxvar_SBAtomicSet_new MMC_REFSTRUCTLIT(boxvar_lit_SBAtomicSet_new)

#ifdef __cplusplus
}
#endif
#endif
