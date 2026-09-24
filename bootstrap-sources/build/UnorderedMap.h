#ifndef UnorderedMap__H
#define UnorderedMap__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description IOStream_IOStreamType_LIST__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;

extern struct record_description UnorderedMap_UNORDERED__MAP__desc;

extern struct record_description UnorderedSet_UNORDERED__SET__desc;


DLLModelDirection
modelica_string omc_UnorderedMap_toJSON(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _keyStringFn, modelica_fnptr _valueStringFn);
#define boxptr_UnorderedMap_toJSON omc_UnorderedMap_toJSON
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_toJSON,2,0) {(void*) boxptr_UnorderedMap_toJSON,0}};
#define boxvar_UnorderedMap_toJSON MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_toJSON)


DLLModelDirection
modelica_string omc_UnorderedMap_toString(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _keyStringFn, modelica_fnptr _valueStringFn, modelica_string _delimiter, modelica_string _concatinator);
#define boxptr_UnorderedMap_toString omc_UnorderedMap_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_toString,2,0) {(void*) boxptr_UnorderedMap_toString,0}};
#define boxvar_UnorderedMap_toString MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_toString)


DLLModelDirection
void omc_UnorderedMap_rehash(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_rehash omc_UnorderedMap_rehash
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_rehash,2,0) {(void*) boxptr_UnorderedMap_rehash,0}};
#define boxvar_UnorderedMap_rehash MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_rehash)


DLLModelDirection
modelica_real omc_UnorderedMap_loadFactor(threadData_t *threadData, modelica_metatype _map);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_loadFactor(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_loadFactor,2,0) {(void*) boxptr_UnorderedMap_loadFactor,0}};
#define boxvar_UnorderedMap_loadFactor MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_loadFactor)


DLLModelDirection
modelica_integer omc_UnorderedMap_bucketCount(threadData_t *threadData, modelica_metatype _map);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_bucketCount(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_bucketCount,2,0) {(void*) boxptr_UnorderedMap_bucketCount,0}};
#define boxvar_UnorderedMap_bucketCount MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_bucketCount)


DLLModelDirection
modelica_boolean omc_UnorderedMap_isEmpty(threadData_t *threadData, modelica_metatype _map);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_isEmpty(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_isEmpty,2,0) {(void*) boxptr_UnorderedMap_isEmpty,0}};
#define boxvar_UnorderedMap_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_isEmpty)


DLLModelDirection
modelica_integer omc_UnorderedMap_size(threadData_t *threadData, modelica_metatype _map);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_size(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_size,2,0) {(void*) boxptr_UnorderedMap_size,0}};
#define boxvar_UnorderedMap_size MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_size)


DLLModelDirection
modelica_boolean omc_UnorderedMap_none(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_none(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_none,2,0) {(void*) boxptr_UnorderedMap_none,0}};
#define boxvar_UnorderedMap_none MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_none)


DLLModelDirection
modelica_boolean omc_UnorderedMap_any(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_any(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_any,2,0) {(void*) boxptr_UnorderedMap_any,0}};
#define boxvar_UnorderedMap_any MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_any)


DLLModelDirection
modelica_boolean omc_UnorderedMap_all(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_all(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_all,2,0) {(void*) boxptr_UnorderedMap_all,0}};
#define boxvar_UnorderedMap_all MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_all)


DLLModelDirection
modelica_metatype omc_UnorderedMap_subMap(threadData_t *threadData, modelica_metatype _map, modelica_metatype _lst);
#define boxptr_UnorderedMap_subMap omc_UnorderedMap_subMap
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_subMap,2,0) {(void*) boxptr_UnorderedMap_subMap,0}};
#define boxvar_UnorderedMap_subMap MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_subMap)


DLLModelDirection
modelica_metatype omc_UnorderedMap_merge(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2, modelica_metatype _info);
#define boxptr_UnorderedMap_merge omc_UnorderedMap_merge
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_merge,2,0) {(void*) boxptr_UnorderedMap_merge,0}};
#define boxvar_UnorderedMap_merge MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_merge)


DLLModelDirection
void omc_UnorderedMap_apply(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
#define boxptr_UnorderedMap_apply omc_UnorderedMap_apply
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_apply,2,0) {(void*) boxptr_UnorderedMap_apply,0}};
#define boxvar_UnorderedMap_apply MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_apply)


DLLModelDirection
modelica_metatype omc_UnorderedMap_map(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
#define boxptr_UnorderedMap_map omc_UnorderedMap_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_map,2,0) {(void*) boxptr_UnorderedMap_map,0}};
#define boxvar_UnorderedMap_map MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_map)


DLLModelDirection
modelica_metatype omc_UnorderedMap_fold(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_UnorderedMap_fold omc_UnorderedMap_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_fold,2,0) {(void*) boxptr_UnorderedMap_fold,0}};
#define boxvar_UnorderedMap_fold MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_fold)


DLLModelDirection
modelica_metatype omc_UnorderedMap_keySet(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_keySet omc_UnorderedMap_keySet
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_keySet,2,0) {(void*) boxptr_UnorderedMap_keySet,0}};
#define boxvar_UnorderedMap_keySet MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_keySet)


DLLModelDirection
modelica_metatype omc_UnorderedMap_valueVector(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_valueVector omc_UnorderedMap_valueVector
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_valueVector,2,0) {(void*) boxptr_UnorderedMap_valueVector,0}};
#define boxvar_UnorderedMap_valueVector MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_valueVector)


DLLModelDirection
modelica_metatype omc_UnorderedMap_keyVector(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_keyVector omc_UnorderedMap_keyVector
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_keyVector,2,0) {(void*) boxptr_UnorderedMap_keyVector,0}};
#define boxvar_UnorderedMap_keyVector MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_keyVector)


DLLModelDirection
modelica_metatype omc_UnorderedMap_toVector(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_toVector omc_UnorderedMap_toVector
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_toVector,2,0) {(void*) boxptr_UnorderedMap_toVector,0}};
#define boxvar_UnorderedMap_toVector MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_toVector)


DLLModelDirection
modelica_metatype omc_UnorderedMap_valueArray(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_valueArray omc_UnorderedMap_valueArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_valueArray,2,0) {(void*) boxptr_UnorderedMap_valueArray,0}};
#define boxvar_UnorderedMap_valueArray MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_valueArray)


DLLModelDirection
modelica_metatype omc_UnorderedMap_keyArray(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_keyArray omc_UnorderedMap_keyArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_keyArray,2,0) {(void*) boxptr_UnorderedMap_keyArray,0}};
#define boxvar_UnorderedMap_keyArray MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_keyArray)


DLLModelDirection
modelica_metatype omc_UnorderedMap_toArray(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_toArray omc_UnorderedMap_toArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_toArray,2,0) {(void*) boxptr_UnorderedMap_toArray,0}};
#define boxvar_UnorderedMap_toArray MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_toArray)


DLLModelDirection
modelica_metatype omc_UnorderedMap_valueList(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_valueList omc_UnorderedMap_valueList
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_valueList,2,0) {(void*) boxptr_UnorderedMap_valueList,0}};
#define boxvar_UnorderedMap_valueList MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_valueList)


DLLModelDirection
modelica_metatype omc_UnorderedMap_keyList(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_keyList omc_UnorderedMap_keyList
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_keyList,2,0) {(void*) boxptr_UnorderedMap_keyList,0}};
#define boxvar_UnorderedMap_keyList MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_keyList)


DLLModelDirection
modelica_metatype omc_UnorderedMap_toList(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_toList omc_UnorderedMap_toList
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_toList,2,0) {(void*) boxptr_UnorderedMap_toList,0}};
#define boxvar_UnorderedMap_toList MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_toList)


DLLModelDirection
modelica_metatype omc_UnorderedMap_valueAt(threadData_t *threadData, modelica_metatype _map, modelica_integer _index);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_valueAt(threadData_t *threadData, modelica_metatype _map, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_valueAt,2,0) {(void*) boxptr_UnorderedMap_valueAt,0}};
#define boxvar_UnorderedMap_valueAt MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_valueAt)


DLLModelDirection
modelica_metatype omc_UnorderedMap_keyAt(threadData_t *threadData, modelica_metatype _map, modelica_integer _index);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_keyAt(threadData_t *threadData, modelica_metatype _map, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_keyAt,2,0) {(void*) boxptr_UnorderedMap_keyAt,0}};
#define boxvar_UnorderedMap_keyAt MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_keyAt)


DLLModelDirection
modelica_metatype omc_UnorderedMap_firstKey(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_firstKey omc_UnorderedMap_firstKey
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_firstKey,2,0) {(void*) boxptr_UnorderedMap_firstKey,0}};
#define boxvar_UnorderedMap_firstKey MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_firstKey)


DLLModelDirection
modelica_metatype omc_UnorderedMap_first(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_first omc_UnorderedMap_first
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_first,2,0) {(void*) boxptr_UnorderedMap_first,0}};
#define boxvar_UnorderedMap_first MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_first)


DLLModelDirection
modelica_boolean omc_UnorderedMap_contains(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_contains(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_contains,2,0) {(void*) boxptr_UnorderedMap_contains,0}};
#define boxvar_UnorderedMap_contains MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_contains)


DLLModelDirection
void omc_UnorderedMap_updateKey(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map);
#define boxptr_UnorderedMap_updateKey omc_UnorderedMap_updateKey
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_updateKey,2,0) {(void*) boxptr_UnorderedMap_updateKey,0}};
#define boxvar_UnorderedMap_updateKey MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_updateKey)


DLLModelDirection
modelica_metatype omc_UnorderedMap_getKey(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map);
#define boxptr_UnorderedMap_getKey omc_UnorderedMap_getKey
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_getKey,2,0) {(void*) boxptr_UnorderedMap_getKey,0}};
#define boxvar_UnorderedMap_getKey MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_getKey)


DLLModelDirection
modelica_metatype omc_UnorderedMap_getList(threadData_t *threadData, modelica_metatype _keys, modelica_metatype _map);
#define boxptr_UnorderedMap_getList omc_UnorderedMap_getList
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_getList,2,0) {(void*) boxptr_UnorderedMap_getList,0}};
#define boxvar_UnorderedMap_getList MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_getList)


DLLModelDirection
modelica_metatype omc_UnorderedMap_getOrDefault(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map, modelica_metatype _default);
#define boxptr_UnorderedMap_getOrDefault omc_UnorderedMap_getOrDefault
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_getOrDefault,2,0) {(void*) boxptr_UnorderedMap_getOrDefault,0}};
#define boxvar_UnorderedMap_getOrDefault MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_getOrDefault)


DLLModelDirection
modelica_metatype omc_UnorderedMap_getOrFail(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map);
#define boxptr_UnorderedMap_getOrFail omc_UnorderedMap_getOrFail
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_getOrFail,2,0) {(void*) boxptr_UnorderedMap_getOrFail,0}};
#define boxvar_UnorderedMap_getOrFail MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_getOrFail)


DLLModelDirection
modelica_metatype omc_UnorderedMap_getSafe(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map, modelica_metatype _info);
#define boxptr_UnorderedMap_getSafe omc_UnorderedMap_getSafe
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_getSafe,2,0) {(void*) boxptr_UnorderedMap_getSafe,0}};
#define boxvar_UnorderedMap_getSafe MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_getSafe)


DLLModelDirection
modelica_metatype omc_UnorderedMap_get(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map);
#define boxptr_UnorderedMap_get omc_UnorderedMap_get
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_get,2,0) {(void*) boxptr_UnorderedMap_get,0}};
#define boxvar_UnorderedMap_get MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_get)


DLLModelDirection
void omc_UnorderedMap_clear(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_clear omc_UnorderedMap_clear
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_clear,2,0) {(void*) boxptr_UnorderedMap_clear,0}};
#define boxvar_UnorderedMap_clear MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_clear)


DLLModelDirection
modelica_boolean omc_UnorderedMap_remove(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_remove(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_remove,2,0) {(void*) boxptr_UnorderedMap_remove,0}};
#define boxvar_UnorderedMap_remove MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_remove)


DLLModelDirection
modelica_boolean omc_UnorderedMap_tryAddUpdate(threadData_t *threadData, modelica_metatype _key, modelica_fnptr _fn, modelica_metatype _map);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_tryAddUpdate(threadData_t *threadData, modelica_metatype _key, modelica_fnptr _fn, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_tryAddUpdate,2,0) {(void*) boxptr_UnorderedMap_tryAddUpdate,0}};
#define boxvar_UnorderedMap_tryAddUpdate MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_tryAddUpdate)


DLLModelDirection
void omc_UnorderedMap_addMerge(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_fnptr _fn, modelica_metatype _map);
#define boxptr_UnorderedMap_addMerge omc_UnorderedMap_addMerge
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_addMerge,2,0) {(void*) boxptr_UnorderedMap_addMerge,0}};
#define boxvar_UnorderedMap_addMerge MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_addMerge)


DLLModelDirection
modelica_metatype omc_UnorderedMap_addUpdate(threadData_t *threadData, modelica_metatype _key, modelica_fnptr _fn, modelica_metatype _map);
#define boxptr_UnorderedMap_addUpdate omc_UnorderedMap_addUpdate
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_addUpdate,2,0) {(void*) boxptr_UnorderedMap_addUpdate,0}};
#define boxvar_UnorderedMap_addUpdate MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_addUpdate)


DLLModelDirection
modelica_boolean omc_UnorderedMap_tryUpdate(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_tryUpdate(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_tryUpdate,2,0) {(void*) boxptr_UnorderedMap_tryUpdate,0}};
#define boxvar_UnorderedMap_tryUpdate MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_tryUpdate)


DLLModelDirection
modelica_metatype omc_UnorderedMap_tryAdd(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map);
#define boxptr_UnorderedMap_tryAdd omc_UnorderedMap_tryAdd
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_tryAdd,2,0) {(void*) boxptr_UnorderedMap_tryAdd,0}};
#define boxvar_UnorderedMap_tryAdd MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_tryAdd)


DLLModelDirection
void omc_UnorderedMap_addUnique(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map);
#define boxptr_UnorderedMap_addUnique omc_UnorderedMap_addUnique
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_addUnique,2,0) {(void*) boxptr_UnorderedMap_addUnique,0}};
#define boxvar_UnorderedMap_addUnique MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_addUnique)


DLLModelDirection
void omc_UnorderedMap_addNew(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map);
#define boxptr_UnorderedMap_addNew omc_UnorderedMap_addNew
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_addNew,2,0) {(void*) boxptr_UnorderedMap_addNew,0}};
#define boxvar_UnorderedMap_addNew MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_addNew)


DLLModelDirection
void omc_UnorderedMap_add(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map);
#define boxptr_UnorderedMap_add omc_UnorderedMap_add
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_add,2,0) {(void*) boxptr_UnorderedMap_add,0}};
#define boxvar_UnorderedMap_add MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_add)


DLLModelDirection
modelica_metatype omc_UnorderedMap_deepCopy(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn);
#define boxptr_UnorderedMap_deepCopy omc_UnorderedMap_deepCopy
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_deepCopy,2,0) {(void*) boxptr_UnorderedMap_deepCopy,0}};
#define boxvar_UnorderedMap_deepCopy MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_deepCopy)


DLLModelDirection
modelica_metatype omc_UnorderedMap_copy(threadData_t *threadData, modelica_metatype _map);
#define boxptr_UnorderedMap_copy omc_UnorderedMap_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_copy,2,0) {(void*) boxptr_UnorderedMap_copy,0}};
#define boxvar_UnorderedMap_copy MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_copy)


DLLModelDirection
modelica_metatype omc_UnorderedMap_fromLists(threadData_t *threadData, modelica_metatype _keys, modelica_metatype _values, modelica_fnptr _hash, modelica_fnptr _keyEq);
#define boxptr_UnorderedMap_fromLists omc_UnorderedMap_fromLists
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_fromLists,2,0) {(void*) boxptr_UnorderedMap_fromLists,0}};
#define boxvar_UnorderedMap_fromLists MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_fromLists)


DLLModelDirection
modelica_metatype omc_UnorderedMap_new(threadData_t *threadData, modelica_fnptr _hash, modelica_fnptr _keyEq, modelica_integer _bucketCount);
DLLModelDirection
modelica_metatype boxptr_UnorderedMap_new(threadData_t *threadData, modelica_fnptr _hash, modelica_fnptr _keyEq, modelica_metatype _bucketCount);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_new,2,0) {(void*) boxptr_UnorderedMap_new,0}};
#define boxvar_UnorderedMap_new MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_new)

#ifdef __cplusplus
}
#endif
#endif
