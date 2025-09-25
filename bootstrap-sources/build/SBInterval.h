#ifndef SBInterval__H
#define SBInterval__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SBInterval_INTERVAL__desc;


DLLDirection
modelica_string omc_SBInterval_toString(threadData_t *threadData, modelica_metatype _interval);
#define boxptr_SBInterval_toString omc_SBInterval_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_toString,2,0) {(void*) boxptr_SBInterval_toString,0}};
#define boxvar_SBInterval_toString MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_toString)


DLLDirection
modelica_integer omc_SBInterval_hash(threadData_t *threadData, modelica_metatype _int);
DLLDirection
modelica_metatype boxptr_SBInterval_hash(threadData_t *threadData, modelica_metatype _int);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_hash,2,0) {(void*) boxptr_SBInterval_hash,0}};
#define boxvar_SBInterval_hash MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_hash)


DLLDirection
modelica_boolean omc_SBInterval_isEqual(threadData_t *threadData, modelica_metatype _int1, modelica_metatype _int2);
DLLDirection
modelica_metatype boxptr_SBInterval_isEqual(threadData_t *threadData, modelica_metatype _int1, modelica_metatype _int2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_isEqual,2,0) {(void*) boxptr_SBInterval_isEqual,0}};
#define boxvar_SBInterval_isEqual MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_isEqual)


DLLDirection
modelica_integer omc_SBInterval_size(threadData_t *threadData, modelica_metatype _int);
DLLDirection
modelica_metatype boxptr_SBInterval_size(threadData_t *threadData, modelica_metatype _int);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_size,2,0) {(void*) boxptr_SBInterval_size,0}};
#define boxvar_SBInterval_size MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_size)


DLLDirection
modelica_boolean omc_SBInterval_isEmpty(threadData_t *threadData, modelica_metatype _int);
DLLDirection
modelica_metatype boxptr_SBInterval_isEmpty(threadData_t *threadData, modelica_metatype _int);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_isEmpty,2,0) {(void*) boxptr_SBInterval_isEmpty,0}};
#define boxvar_SBInterval_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_isEmpty)


DLLDirection
modelica_boolean omc_SBInterval_contains(threadData_t *threadData, modelica_integer _c, modelica_metatype _int);
DLLDirection
modelica_metatype boxptr_SBInterval_contains(threadData_t *threadData, modelica_metatype _c, modelica_metatype _int);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_contains,2,0) {(void*) boxptr_SBInterval_contains,0}};
#define boxvar_SBInterval_contains MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_contains)


DLLDirection
modelica_integer omc_SBInterval_cardinality(threadData_t *threadData, modelica_metatype _int);
DLLDirection
modelica_metatype boxptr_SBInterval_cardinality(threadData_t *threadData, modelica_metatype _int);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_cardinality,2,0) {(void*) boxptr_SBInterval_cardinality,0}};
#define boxvar_SBInterval_cardinality MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_cardinality)


DLLDirection
modelica_metatype omc_SBInterval_affine(threadData_t *threadData, modelica_metatype _int, modelica_real _gain, modelica_integer _offset);
DLLDirection
modelica_metatype boxptr_SBInterval_affine(threadData_t *threadData, modelica_metatype _int, modelica_metatype _gain, modelica_metatype _offset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_affine,2,0) {(void*) boxptr_SBInterval_affine,0}};
#define boxvar_SBInterval_affine MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_affine)


DLLDirection
modelica_metatype omc_SBInterval_complement(threadData_t *threadData, modelica_metatype _int1, modelica_metatype _int2);
#define boxptr_SBInterval_complement omc_SBInterval_complement
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_complement,2,0) {(void*) boxptr_SBInterval_complement,0}};
#define boxvar_SBInterval_complement MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_complement)


DLLDirection
modelica_metatype omc_SBInterval_intersection(threadData_t *threadData, modelica_metatype _int1, modelica_metatype _int2);
#define boxptr_SBInterval_intersection omc_SBInterval_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_intersection,2,0) {(void*) boxptr_SBInterval_intersection,0}};
#define boxvar_SBInterval_intersection MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_intersection)


DLLDirection
modelica_metatype omc_SBInterval_crop(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fint);
#define boxptr_SBInterval_crop omc_SBInterval_crop
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_crop,2,0) {(void*) boxptr_SBInterval_crop,0}};
#define boxvar_SBInterval_crop MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_crop)


DLLDirection
modelica_integer omc_SBInterval_upperBound(threadData_t *threadData, modelica_metatype _int);
DLLDirection
modelica_metatype boxptr_SBInterval_upperBound(threadData_t *threadData, modelica_metatype _int);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_upperBound,2,0) {(void*) boxptr_SBInterval_upperBound,0}};
#define boxvar_SBInterval_upperBound MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_upperBound)


DLLDirection
modelica_integer omc_SBInterval_stepValue(threadData_t *threadData, modelica_metatype _int);
DLLDirection
modelica_metatype boxptr_SBInterval_stepValue(threadData_t *threadData, modelica_metatype _int);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_stepValue,2,0) {(void*) boxptr_SBInterval_stepValue,0}};
#define boxvar_SBInterval_stepValue MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_stepValue)


DLLDirection
modelica_integer omc_SBInterval_lowerBound(threadData_t *threadData, modelica_metatype _int);
DLLDirection
modelica_metatype boxptr_SBInterval_lowerBound(threadData_t *threadData, modelica_metatype _int);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_lowerBound,2,0) {(void*) boxptr_SBInterval_lowerBound,0}};
#define boxvar_SBInterval_lowerBound MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_lowerBound)


DLLDirection
modelica_metatype omc_SBInterval_newFull(threadData_t *threadData);
#define boxptr_SBInterval_newFull omc_SBInterval_newFull
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_newFull,2,0) {(void*) boxptr_SBInterval_newFull,0}};
#define boxvar_SBInterval_newFull MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_newFull)


DLLDirection
modelica_metatype omc_SBInterval_newUnit(threadData_t *threadData);
#define boxptr_SBInterval_newUnit omc_SBInterval_newUnit
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_newUnit,2,0) {(void*) boxptr_SBInterval_newUnit,0}};
#define boxvar_SBInterval_newUnit MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_newUnit)


DLLDirection
modelica_metatype omc_SBInterval_newEmpty(threadData_t *threadData);
#define boxptr_SBInterval_newEmpty omc_SBInterval_newEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_newEmpty,2,0) {(void*) boxptr_SBInterval_newEmpty,0}};
#define boxvar_SBInterval_newEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_newEmpty)


DLLDirection
modelica_metatype omc_SBInterval_new(threadData_t *threadData, modelica_integer _lo, modelica_integer _step, modelica_integer _hi);
DLLDirection
modelica_metatype boxptr_SBInterval_new(threadData_t *threadData, modelica_metatype _lo, modelica_metatype _step, modelica_metatype _hi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_new,2,0) {(void*) boxptr_SBInterval_new,0}};
#define boxvar_SBInterval_new MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_new)

#ifdef __cplusplus
}
#endif
#endif
