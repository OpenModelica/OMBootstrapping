#ifndef SBSet__H
#define SBSet__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SBSet_SET__desc;


DLLDirection
modelica_string omc_SBSet_toString(threadData_t *threadData, modelica_metatype _set);
#define boxptr_SBSet_toString omc_SBSet_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_toString,2,0) {(void*) boxptr_SBSet_toString,0}};
#define boxvar_SBSet_toString MMC_REFSTRUCTLIT(boxvar_lit_SBSet_toString)


DLLDirection
modelica_integer omc_SBSet_hash(threadData_t *threadData, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBSet_hash(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_hash,2,0) {(void*) boxptr_SBSet_hash,0}};
#define boxvar_SBSet_hash MMC_REFSTRUCTLIT(boxvar_lit_SBSet_hash)


DLLDirection
modelica_boolean omc_SBSet_isEqual(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
DLLDirection
modelica_metatype boxptr_SBSet_isEqual(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_isEqual,2,0) {(void*) boxptr_SBSet_isEqual,0}};
#define boxvar_SBSet_isEqual MMC_REFSTRUCTLIT(boxvar_lit_SBSet_isEqual)


DLLDirection
modelica_metatype omc_SBSet_minElem(threadData_t *threadData, modelica_metatype _set);
#define boxptr_SBSet_minElem omc_SBSet_minElem
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_minElem,2,0) {(void*) boxptr_SBSet_minElem,0}};
#define boxvar_SBSet_minElem MMC_REFSTRUCTLIT(boxvar_lit_SBSet_minElem)


DLLDirection
modelica_boolean omc_SBSet_maxCardinality_maxCardinality__traverse(threadData_t *threadData, modelica_metatype _set, modelica_integer __omcQ_24in_5FmaxCard, modelica_integer *out_maxCard);
DLLDirection
modelica_metatype boxptr_SBSet_maxCardinality_maxCardinality__traverse(threadData_t *threadData, modelica_metatype _set, modelica_metatype __omcQ_24in_5FmaxCard, modelica_metatype *out_maxCard);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_maxCardinality_maxCardinality__traverse,2,0) {(void*) boxptr_SBSet_maxCardinality_maxCardinality__traverse,0}};
#define boxvar_SBSet_maxCardinality_maxCardinality__traverse MMC_REFSTRUCTLIT(boxvar_lit_SBSet_maxCardinality_maxCardinality__traverse)


DLLDirection
modelica_metatype omc_SBSet_maxCardinality(threadData_t *threadData, modelica_metatype _sets, modelica_integer *out_index);
DLLDirection
modelica_metatype boxptr_SBSet_maxCardinality(threadData_t *threadData, modelica_metatype _sets, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_maxCardinality,2,0) {(void*) boxptr_SBSet_maxCardinality,0}};
#define boxvar_SBSet_maxCardinality MMC_REFSTRUCTLIT(boxvar_lit_SBSet_maxCardinality)


DLLDirection
modelica_integer omc_SBSet_card(threadData_t *threadData, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBSet_card(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_card,2,0) {(void*) boxptr_SBSet_card,0}};
#define boxvar_SBSet_card MMC_REFSTRUCTLIT(boxvar_lit_SBSet_card)


DLLDirection
modelica_metatype omc_SBSet_union(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
#define boxptr_SBSet_union omc_SBSet_union
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_union,2,0) {(void*) boxptr_SBSet_union,0}};
#define boxvar_SBSet_union MMC_REFSTRUCTLIT(boxvar_lit_SBSet_union)


DLLDirection
modelica_metatype omc_SBSet_complement(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
#define boxptr_SBSet_complement omc_SBSet_complement
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_complement,2,0) {(void*) boxptr_SBSet_complement,0}};
#define boxvar_SBSet_complement MMC_REFSTRUCTLIT(boxvar_lit_SBSet_complement)


DLLDirection
modelica_metatype omc_SBSet_intersection(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
#define boxptr_SBSet_intersection omc_SBSet_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_intersection,2,0) {(void*) boxptr_SBSet_intersection,0}};
#define boxvar_SBSet_intersection MMC_REFSTRUCTLIT(boxvar_lit_SBSet_intersection)


DLLDirection
modelica_metatype omc_SBSet_addAtomicSets(threadData_t *threadData, modelica_metatype _asets, modelica_metatype __omcQ_24in_5Fset);
#define boxptr_SBSet_addAtomicSets omc_SBSet_addAtomicSets
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_addAtomicSets,2,0) {(void*) boxptr_SBSet_addAtomicSets,0}};
#define boxvar_SBSet_addAtomicSets MMC_REFSTRUCTLIT(boxvar_lit_SBSet_addAtomicSets)


DLLDirection
modelica_metatype omc_SBSet_addAtomicSet(threadData_t *threadData, modelica_metatype _aset, modelica_metatype __omcQ_24in_5Fset);
#define boxptr_SBSet_addAtomicSet omc_SBSet_addAtomicSet
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_addAtomicSet,2,0) {(void*) boxptr_SBSet_addAtomicSet,0}};
#define boxvar_SBSet_addAtomicSet MMC_REFSTRUCTLIT(boxvar_lit_SBSet_addAtomicSet)


DLLDirection
modelica_boolean omc_SBSet_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBSet_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_contains,2,0) {(void*) boxptr_SBSet_contains,0}};
#define boxvar_SBSet_contains MMC_REFSTRUCTLIT(boxvar_lit_SBSet_contains)


DLLDirection
modelica_metatype omc_SBSet_asets(threadData_t *threadData, modelica_metatype _set);
#define boxptr_SBSet_asets omc_SBSet_asets
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_asets,2,0) {(void*) boxptr_SBSet_asets,0}};
#define boxvar_SBSet_asets MMC_REFSTRUCTLIT(boxvar_lit_SBSet_asets)


DLLDirection
modelica_boolean omc_SBSet_isDim(threadData_t *threadData, modelica_metatype _set, modelica_integer _dim);
DLLDirection
modelica_metatype boxptr_SBSet_isDim(threadData_t *threadData, modelica_metatype _set, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_isDim,2,0) {(void*) boxptr_SBSet_isDim,0}};
#define boxvar_SBSet_isDim MMC_REFSTRUCTLIT(boxvar_lit_SBSet_isDim)


DLLDirection
modelica_boolean omc_SBSet_isEmpty(threadData_t *threadData, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBSet_isEmpty(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_isEmpty,2,0) {(void*) boxptr_SBSet_isEmpty,0}};
#define boxvar_SBSet_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBSet_isEmpty)


DLLDirection
modelica_integer omc_SBSet_ndim(threadData_t *threadData, modelica_metatype _set);
DLLDirection
modelica_metatype boxptr_SBSet_ndim(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_ndim,2,0) {(void*) boxptr_SBSet_ndim,0}};
#define boxvar_SBSet_ndim MMC_REFSTRUCTLIT(boxvar_lit_SBSet_ndim)


DLLDirection
modelica_metatype omc_SBSet_copy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fset);
#define boxptr_SBSet_copy omc_SBSet_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_copy,2,0) {(void*) boxptr_SBSet_copy,0}};
#define boxvar_SBSet_copy MMC_REFSTRUCTLIT(boxvar_lit_SBSet_copy)


DLLDirection
modelica_metatype omc_SBSet_newEmpty(threadData_t *threadData);
#define boxptr_SBSet_newEmpty omc_SBSet_newEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_newEmpty,2,0) {(void*) boxptr_SBSet_newEmpty,0}};
#define boxvar_SBSet_newEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBSet_newEmpty)


DLLDirection
modelica_metatype omc_SBSet_new(threadData_t *threadData, modelica_metatype _ss);
#define boxptr_SBSet_new omc_SBSet_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_new,2,0) {(void*) boxptr_SBSet_new,0}};
#define boxvar_SBSet_new MMC_REFSTRUCTLIT(boxvar_lit_SBSet_new)

#ifdef __cplusplus
}
#endif
#endif
