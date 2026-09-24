#ifndef Vector__H
#define Vector__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Vector_VECTOR__desc;


DLLModelDirection
modelica_string omc_Vector_toString(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _stringFn, modelica_string _strBegin, modelica_string _delim, modelica_string _strEnd);
#define boxptr_Vector_toString omc_Vector_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_toString,2,0) {(void*) boxptr_Vector_toString,0}};
#define boxvar_Vector_toString MMC_REFSTRUCTLIT(boxvar_lit_Vector_toString)


DLLModelDirection
void omc_Vector_swap(threadData_t *threadData, modelica_metatype _v1, modelica_metatype _v2);
#define boxptr_Vector_swap omc_Vector_swap
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_swap,2,0) {(void*) boxptr_Vector_swap,0}};
#define boxvar_Vector_swap MMC_REFSTRUCTLIT(boxvar_lit_Vector_swap)


DLLModelDirection
modelica_metatype omc_Vector_deepCopy(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
#define boxptr_Vector_deepCopy omc_Vector_deepCopy
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_deepCopy,2,0) {(void*) boxptr_Vector_deepCopy,0}};
#define boxvar_Vector_deepCopy MMC_REFSTRUCTLIT(boxvar_lit_Vector_deepCopy)


DLLModelDirection
modelica_metatype omc_Vector_copy(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Vector_copy omc_Vector_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_copy,2,0) {(void*) boxptr_Vector_copy,0}};
#define boxvar_Vector_copy MMC_REFSTRUCTLIT(boxvar_lit_Vector_copy)


DLLModelDirection
modelica_boolean omc_Vector_none(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
DLLModelDirection
modelica_metatype boxptr_Vector_none(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_none,2,0) {(void*) boxptr_Vector_none,0}};
#define boxvar_Vector_none MMC_REFSTRUCTLIT(boxvar_lit_Vector_none)


DLLModelDirection
modelica_boolean omc_Vector_any(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
DLLModelDirection
modelica_metatype boxptr_Vector_any(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_any,2,0) {(void*) boxptr_Vector_any,0}};
#define boxvar_Vector_any MMC_REFSTRUCTLIT(boxvar_lit_Vector_any)


DLLModelDirection
modelica_boolean omc_Vector_all(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
DLLModelDirection
modelica_metatype boxptr_Vector_all(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_all,2,0) {(void*) boxptr_Vector_all,0}};
#define boxvar_Vector_all MMC_REFSTRUCTLIT(boxvar_lit_Vector_all)


DLLModelDirection
modelica_metatype omc_Vector_findFold(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_metatype __omcQ_24in_5Farg, modelica_integer *out_index, modelica_metatype *out_arg);
DLLModelDirection
modelica_metatype boxptr_Vector_findFold(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_index, modelica_metatype *out_arg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_findFold,2,0) {(void*) boxptr_Vector_findFold,0}};
#define boxvar_Vector_findFold MMC_REFSTRUCTLIT(boxvar_lit_Vector_findFold)


DLLModelDirection
modelica_metatype omc_Vector_findLast(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_integer *out_index);
DLLModelDirection
modelica_metatype boxptr_Vector_findLast(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_findLast,2,0) {(void*) boxptr_Vector_findLast,0}};
#define boxvar_Vector_findLast MMC_REFSTRUCTLIT(boxvar_lit_Vector_findLast)


DLLModelDirection
modelica_metatype omc_Vector_find(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_integer *out_index);
DLLModelDirection
modelica_metatype boxptr_Vector_find(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_find,2,0) {(void*) boxptr_Vector_find,0}};
#define boxvar_Vector_find MMC_REFSTRUCTLIT(boxvar_lit_Vector_find)


DLLModelDirection
modelica_metatype omc_Vector_fold(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_Vector_fold omc_Vector_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_fold,2,0) {(void*) boxptr_Vector_fold,0}};
#define boxvar_Vector_fold MMC_REFSTRUCTLIT(boxvar_lit_Vector_fold)


DLLModelDirection
void omc_Vector_apply(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
#define boxptr_Vector_apply omc_Vector_apply
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_apply,2,0) {(void*) boxptr_Vector_apply,0}};
#define boxvar_Vector_apply MMC_REFSTRUCTLIT(boxvar_lit_Vector_apply)


DLLModelDirection
modelica_metatype omc_Vector_mapToList(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn);
#define boxptr_Vector_mapToList omc_Vector_mapToList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_mapToList,2,0) {(void*) boxptr_Vector_mapToList,0}};
#define boxvar_Vector_mapToList MMC_REFSTRUCTLIT(boxvar_lit_Vector_mapToList)


DLLModelDirection
modelica_metatype omc_Vector_map(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_boolean _shrink);
DLLModelDirection
modelica_metatype boxptr_Vector_map(threadData_t *threadData, modelica_metatype _v, modelica_fnptr _fn, modelica_metatype _shrink);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_map,2,0) {(void*) boxptr_Vector_map,0}};
#define boxvar_Vector_map MMC_REFSTRUCTLIT(boxvar_lit_Vector_map)


DLLModelDirection
void omc_Vector_fill(threadData_t *threadData, modelica_metatype _v, modelica_metatype _value, modelica_integer _from, modelica_integer _to);
DLLModelDirection
void boxptr_Vector_fill(threadData_t *threadData, modelica_metatype _v, modelica_metatype _value, modelica_metatype _from, modelica_metatype _to);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_fill,2,0) {(void*) boxptr_Vector_fill,0}};
#define boxvar_Vector_fill MMC_REFSTRUCTLIT(boxvar_lit_Vector_fill)


DLLModelDirection
void omc_Vector_trim(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Vector_trim omc_Vector_trim
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_trim,2,0) {(void*) boxptr_Vector_trim,0}};
#define boxvar_Vector_trim MMC_REFSTRUCTLIT(boxvar_lit_Vector_trim)


DLLModelDirection
void omc_Vector_reserve(threadData_t *threadData, modelica_metatype _v, modelica_integer _newCapacity);
DLLModelDirection
void boxptr_Vector_reserve(threadData_t *threadData, modelica_metatype _v, modelica_metatype _newCapacity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_reserve,2,0) {(void*) boxptr_Vector_reserve,0}};
#define boxvar_Vector_reserve MMC_REFSTRUCTLIT(boxvar_lit_Vector_reserve)


DLLModelDirection
modelica_boolean omc_Vector_isEmpty(threadData_t *threadData, modelica_metatype _v);
DLLModelDirection
modelica_metatype boxptr_Vector_isEmpty(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_isEmpty,2,0) {(void*) boxptr_Vector_isEmpty,0}};
#define boxvar_Vector_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_Vector_isEmpty)


DLLModelDirection
modelica_integer omc_Vector_capacity(threadData_t *threadData, modelica_metatype _v);
DLLModelDirection
modelica_metatype boxptr_Vector_capacity(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_capacity,2,0) {(void*) boxptr_Vector_capacity,0}};
#define boxvar_Vector_capacity MMC_REFSTRUCTLIT(boxvar_lit_Vector_capacity)


DLLModelDirection
modelica_integer omc_Vector_size(threadData_t *threadData, modelica_metatype _v);
DLLModelDirection
modelica_metatype boxptr_Vector_size(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_size,2,0) {(void*) boxptr_Vector_size,0}};
#define boxvar_Vector_size MMC_REFSTRUCTLIT(boxvar_lit_Vector_size)


DLLModelDirection
modelica_metatype omc_Vector_last(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Vector_last omc_Vector_last
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_last,2,0) {(void*) boxptr_Vector_last,0}};
#define boxvar_Vector_last MMC_REFSTRUCTLIT(boxvar_lit_Vector_last)


DLLModelDirection
modelica_metatype omc_Vector_getNoBounds(threadData_t *threadData, modelica_metatype _v, modelica_integer _index);
DLLModelDirection
modelica_metatype boxptr_Vector_getNoBounds(threadData_t *threadData, modelica_metatype _v, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_getNoBounds,2,0) {(void*) boxptr_Vector_getNoBounds,0}};
#define boxvar_Vector_getNoBounds MMC_REFSTRUCTLIT(boxvar_lit_Vector_getNoBounds)


DLLModelDirection
modelica_metatype omc_Vector_get(threadData_t *threadData, modelica_metatype _v, modelica_integer _index);
DLLModelDirection
modelica_metatype boxptr_Vector_get(threadData_t *threadData, modelica_metatype _v, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_get,2,0) {(void*) boxptr_Vector_get,0}};
#define boxvar_Vector_get MMC_REFSTRUCTLIT(boxvar_lit_Vector_get)


DLLModelDirection
void omc_Vector_updateNoBounds(threadData_t *threadData, modelica_metatype _v, modelica_integer _index, modelica_metatype _value);
DLLModelDirection
void boxptr_Vector_updateNoBounds(threadData_t *threadData, modelica_metatype _v, modelica_metatype _index, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_updateNoBounds,2,0) {(void*) boxptr_Vector_updateNoBounds,0}};
#define boxvar_Vector_updateNoBounds MMC_REFSTRUCTLIT(boxvar_lit_Vector_updateNoBounds)


DLLModelDirection
void omc_Vector_update(threadData_t *threadData, modelica_metatype _v, modelica_integer _index, modelica_metatype _value);
DLLModelDirection
void boxptr_Vector_update(threadData_t *threadData, modelica_metatype _v, modelica_metatype _index, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_update,2,0) {(void*) boxptr_Vector_update,0}};
#define boxvar_Vector_update MMC_REFSTRUCTLIT(boxvar_lit_Vector_update)


DLLModelDirection
void omc_Vector_remove(threadData_t *threadData, modelica_metatype _v, modelica_integer _index);
DLLModelDirection
void boxptr_Vector_remove(threadData_t *threadData, modelica_metatype _v, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_remove,2,0) {(void*) boxptr_Vector_remove,0}};
#define boxvar_Vector_remove MMC_REFSTRUCTLIT(boxvar_lit_Vector_remove)


DLLModelDirection
void omc_Vector_resize(threadData_t *threadData, modelica_metatype _v, modelica_integer _newSize, modelica_metatype _fillValue);
DLLModelDirection
void boxptr_Vector_resize(threadData_t *threadData, modelica_metatype _v, modelica_metatype _newSize, modelica_metatype _fillValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_resize,2,0) {(void*) boxptr_Vector_resize,0}};
#define boxvar_Vector_resize MMC_REFSTRUCTLIT(boxvar_lit_Vector_resize)


DLLModelDirection
void omc_Vector_grow(threadData_t *threadData, modelica_metatype _v, modelica_integer _newSize, modelica_metatype _fillValue);
DLLModelDirection
void boxptr_Vector_grow(threadData_t *threadData, modelica_metatype _v, modelica_metatype _newSize, modelica_metatype _fillValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_grow,2,0) {(void*) boxptr_Vector_grow,0}};
#define boxvar_Vector_grow MMC_REFSTRUCTLIT(boxvar_lit_Vector_grow)


DLLModelDirection
void omc_Vector_shrink(threadData_t *threadData, modelica_metatype _v, modelica_integer _newSize);
DLLModelDirection
void boxptr_Vector_shrink(threadData_t *threadData, modelica_metatype _v, modelica_metatype _newSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_shrink,2,0) {(void*) boxptr_Vector_shrink,0}};
#define boxvar_Vector_shrink MMC_REFSTRUCTLIT(boxvar_lit_Vector_shrink)


DLLModelDirection
void omc_Vector_clear(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Vector_clear omc_Vector_clear
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_clear,2,0) {(void*) boxptr_Vector_clear,0}};
#define boxvar_Vector_clear MMC_REFSTRUCTLIT(boxvar_lit_Vector_clear)


DLLModelDirection
void omc_Vector_pop(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Vector_pop omc_Vector_pop
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_pop,2,0) {(void*) boxptr_Vector_pop,0}};
#define boxvar_Vector_pop MMC_REFSTRUCTLIT(boxvar_lit_Vector_pop)


DLLModelDirection
void omc_Vector_appendArray(threadData_t *threadData, modelica_metatype _v, modelica_metatype _arr);
#define boxptr_Vector_appendArray omc_Vector_appendArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_appendArray,2,0) {(void*) boxptr_Vector_appendArray,0}};
#define boxvar_Vector_appendArray MMC_REFSTRUCTLIT(boxvar_lit_Vector_appendArray)


DLLModelDirection
void omc_Vector_appendList(threadData_t *threadData, modelica_metatype _v, modelica_metatype _l);
#define boxptr_Vector_appendList omc_Vector_appendList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_appendList,2,0) {(void*) boxptr_Vector_appendList,0}};
#define boxvar_Vector_appendList MMC_REFSTRUCTLIT(boxvar_lit_Vector_appendList)


DLLModelDirection
void omc_Vector_append(threadData_t *threadData, modelica_metatype _v1, modelica_metatype _v2);
#define boxptr_Vector_append omc_Vector_append
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_append,2,0) {(void*) boxptr_Vector_append,0}};
#define boxvar_Vector_append MMC_REFSTRUCTLIT(boxvar_lit_Vector_append)


DLLModelDirection
void omc_Vector_insert(threadData_t *threadData, modelica_metatype _v, modelica_metatype _value, modelica_integer _index);
DLLModelDirection
void boxptr_Vector_insert(threadData_t *threadData, modelica_metatype _v, modelica_metatype _value, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_insert,2,0) {(void*) boxptr_Vector_insert,0}};
#define boxvar_Vector_insert MMC_REFSTRUCTLIT(boxvar_lit_Vector_insert)


DLLModelDirection
void omc_Vector_push(threadData_t *threadData, modelica_metatype _v, modelica_metatype _value);
#define boxptr_Vector_push omc_Vector_push
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_push,2,0) {(void*) boxptr_Vector_push,0}};
#define boxvar_Vector_push MMC_REFSTRUCTLIT(boxvar_lit_Vector_push)


DLLModelDirection
modelica_metatype omc_Vector_toList(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Vector_toList omc_Vector_toList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_toList,2,0) {(void*) boxptr_Vector_toList,0}};
#define boxvar_Vector_toList MMC_REFSTRUCTLIT(boxvar_lit_Vector_toList)


DLLModelDirection
modelica_metatype omc_Vector_fromList(threadData_t *threadData, modelica_metatype _l);
#define boxptr_Vector_fromList omc_Vector_fromList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_fromList,2,0) {(void*) boxptr_Vector_fromList,0}};
#define boxvar_Vector_fromList MMC_REFSTRUCTLIT(boxvar_lit_Vector_fromList)


DLLModelDirection
modelica_metatype omc_Vector_toArray(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Vector_toArray omc_Vector_toArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_toArray,2,0) {(void*) boxptr_Vector_toArray,0}};
#define boxvar_Vector_toArray MMC_REFSTRUCTLIT(boxvar_lit_Vector_toArray)


DLLModelDirection
modelica_metatype omc_Vector_rawArray(threadData_t *threadData, modelica_metatype _v);
#define boxptr_Vector_rawArray omc_Vector_rawArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_rawArray,2,0) {(void*) boxptr_Vector_rawArray,0}};
#define boxvar_Vector_rawArray MMC_REFSTRUCTLIT(boxvar_lit_Vector_rawArray)


DLLModelDirection
modelica_metatype omc_Vector_fromArrayNoCopy(threadData_t *threadData, modelica_metatype _arr, modelica_integer _size);
DLLModelDirection
modelica_metatype boxptr_Vector_fromArrayNoCopy(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_fromArrayNoCopy,2,0) {(void*) boxptr_Vector_fromArrayNoCopy,0}};
#define boxvar_Vector_fromArrayNoCopy MMC_REFSTRUCTLIT(boxvar_lit_Vector_fromArrayNoCopy)


DLLModelDirection
modelica_metatype omc_Vector_fromArray(threadData_t *threadData, modelica_metatype _arr);
#define boxptr_Vector_fromArray omc_Vector_fromArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_fromArray,2,0) {(void*) boxptr_Vector_fromArray,0}};
#define boxvar_Vector_fromArray MMC_REFSTRUCTLIT(boxvar_lit_Vector_fromArray)


DLLModelDirection
modelica_metatype omc_Vector_newFill(threadData_t *threadData, modelica_integer _size, modelica_metatype _value);
DLLModelDirection
modelica_metatype boxptr_Vector_newFill(threadData_t *threadData, modelica_metatype _size, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_newFill,2,0) {(void*) boxptr_Vector_newFill,0}};
#define boxvar_Vector_newFill MMC_REFSTRUCTLIT(boxvar_lit_Vector_newFill)


DLLModelDirection
modelica_metatype omc_Vector_new(threadData_t *threadData, modelica_integer _size);
DLLModelDirection
modelica_metatype boxptr_Vector_new(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vector_new,2,0) {(void*) boxptr_Vector_new,0}};
#define boxvar_Vector_new MMC_REFSTRUCTLIT(boxvar_lit_Vector_new)

#ifdef __cplusplus
}
#endif
#endif
