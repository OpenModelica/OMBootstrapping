#ifndef ExpandableArray__H
#define ExpandableArray__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ExpandableArray_EXPANDABLE__ARRAY__desc;


DLLDirection
modelica_metatype omc_ExpandableArray_getData(threadData_t *threadData, modelica_metatype _exarray);
#define boxptr_ExpandableArray_getData omc_ExpandableArray_getData
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_getData,2,0) {(void*) boxptr_ExpandableArray_getData,0}};
#define boxvar_ExpandableArray_getData MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_getData)


DLLDirection
modelica_integer omc_ExpandableArray_getCapacity(threadData_t *threadData, modelica_metatype _exarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_getCapacity(threadData_t *threadData, modelica_metatype _exarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_getCapacity,2,0) {(void*) boxptr_ExpandableArray_getCapacity,0}};
#define boxvar_ExpandableArray_getCapacity MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_getCapacity)


DLLDirection
modelica_integer omc_ExpandableArray_getLastUsedIndex(threadData_t *threadData, modelica_metatype _exarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_getLastUsedIndex(threadData_t *threadData, modelica_metatype _exarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_getLastUsedIndex,2,0) {(void*) boxptr_ExpandableArray_getLastUsedIndex,0}};
#define boxvar_ExpandableArray_getLastUsedIndex MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_getLastUsedIndex)


DLLDirection
modelica_integer omc_ExpandableArray_getNumberOfElements(threadData_t *threadData, modelica_metatype _exarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_getNumberOfElements(threadData_t *threadData, modelica_metatype _exarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_getNumberOfElements,2,0) {(void*) boxptr_ExpandableArray_getNumberOfElements,0}};
#define boxvar_ExpandableArray_getNumberOfElements MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_getNumberOfElements)


DLLDirection
modelica_string omc_ExpandableArray_toString(threadData_t *threadData, modelica_metatype _exarray, modelica_string _header, modelica_fnptr _func, modelica_boolean _debug);
DLLDirection
modelica_metatype boxptr_ExpandableArray_toString(threadData_t *threadData, modelica_metatype _exarray, modelica_metatype _header, modelica_fnptr _func, modelica_metatype _debug);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_toString,2,0) {(void*) boxptr_ExpandableArray_toString,0}};
#define boxvar_ExpandableArray_toString MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_toString)


DLLDirection
modelica_metatype omc_ExpandableArray_shrink(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexarray);
#define boxptr_ExpandableArray_shrink omc_ExpandableArray_shrink
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_shrink,2,0) {(void*) boxptr_ExpandableArray_shrink,0}};
#define boxvar_ExpandableArray_shrink MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_shrink)


DLLDirection
modelica_metatype omc_ExpandableArray_compress(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexarray);
#define boxptr_ExpandableArray_compress omc_ExpandableArray_compress
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_compress,2,0) {(void*) boxptr_ExpandableArray_compress,0}};
#define boxvar_ExpandableArray_compress MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_compress)


DLLDirection
modelica_metatype omc_ExpandableArray_toList(threadData_t *threadData, modelica_metatype _exarray);
#define boxptr_ExpandableArray_toList omc_ExpandableArray_toList
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_toList,2,0) {(void*) boxptr_ExpandableArray_toList,0}};
#define boxvar_ExpandableArray_toList MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_toList)


DLLDirection
modelica_metatype omc_ExpandableArray_update(threadData_t *threadData, modelica_integer _index, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_update(threadData_t *threadData, modelica_metatype _index, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_update,2,0) {(void*) boxptr_ExpandableArray_update,0}};
#define boxvar_ExpandableArray_update MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_update)


DLLDirection
modelica_metatype omc_ExpandableArray_delete(threadData_t *threadData, modelica_integer _index, modelica_metatype __omcQ_24in_5Fexarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_delete(threadData_t *threadData, modelica_metatype _index, modelica_metatype __omcQ_24in_5Fexarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_delete,2,0) {(void*) boxptr_ExpandableArray_delete,0}};
#define boxvar_ExpandableArray_delete MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_delete)


DLLDirection
modelica_metatype omc_ExpandableArray_add(threadData_t *threadData, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray, modelica_integer *out_index);
DLLDirection
modelica_metatype boxptr_ExpandableArray_add(threadData_t *threadData, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_add,2,0) {(void*) boxptr_ExpandableArray_add,0}};
#define boxvar_ExpandableArray_add MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_add)


DLLDirection
modelica_metatype omc_ExpandableArray_set(threadData_t *threadData, modelica_integer _index, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_set(threadData_t *threadData, modelica_metatype _index, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_set,2,0) {(void*) boxptr_ExpandableArray_set,0}};
#define boxvar_ExpandableArray_set MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_set)


DLLDirection
modelica_metatype omc_ExpandableArray_expandToSize(threadData_t *threadData, modelica_integer _minCapacity, modelica_metatype __omcQ_24in_5Fexarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_expandToSize(threadData_t *threadData, modelica_metatype _minCapacity, modelica_metatype __omcQ_24in_5Fexarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_expandToSize,2,0) {(void*) boxptr_ExpandableArray_expandToSize,0}};
#define boxvar_ExpandableArray_expandToSize MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_expandToSize)


DLLDirection
modelica_metatype omc_ExpandableArray_get(threadData_t *threadData, modelica_integer _index, modelica_metatype _exarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_get(threadData_t *threadData, modelica_metatype _index, modelica_metatype _exarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_get,2,0) {(void*) boxptr_ExpandableArray_get,0}};
#define boxvar_ExpandableArray_get MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_get)


DLLDirection
modelica_boolean omc_ExpandableArray_occupied(threadData_t *threadData, modelica_integer _index, modelica_metatype _exarray);
DLLDirection
modelica_metatype boxptr_ExpandableArray_occupied(threadData_t *threadData, modelica_metatype _index, modelica_metatype _exarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_occupied,2,0) {(void*) boxptr_ExpandableArray_occupied,0}};
#define boxvar_ExpandableArray_occupied MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_occupied)


DLLDirection
modelica_metatype omc_ExpandableArray_copy(threadData_t *threadData, modelica_metatype _inExarray, modelica_metatype _dummy);
#define boxptr_ExpandableArray_copy omc_ExpandableArray_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_copy,2,0) {(void*) boxptr_ExpandableArray_copy,0}};
#define boxvar_ExpandableArray_copy MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_copy)


DLLDirection
modelica_metatype omc_ExpandableArray_clear(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexarray);
#define boxptr_ExpandableArray_clear omc_ExpandableArray_clear
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_clear,2,0) {(void*) boxptr_ExpandableArray_clear,0}};
#define boxvar_ExpandableArray_clear MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_clear)


DLLDirection
modelica_metatype omc_ExpandableArray_new(threadData_t *threadData, modelica_integer _capacity, modelica_metatype _dummy);
DLLDirection
modelica_metatype boxptr_ExpandableArray_new(threadData_t *threadData, modelica_metatype _capacity, modelica_metatype _dummy);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpandableArray_new,2,0) {(void*) boxptr_ExpandableArray_new,0}};
#define boxvar_ExpandableArray_new MMC_REFSTRUCTLIT(boxvar_lit_ExpandableArray_new)

#ifdef __cplusplus
}
#endif
#endif
