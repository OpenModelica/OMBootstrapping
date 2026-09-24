#ifndef Array__H
#define Array__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLModelDirection
modelica_metatype omc_Array_filter(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _fun);
#define boxptr_Array_filter omc_Array_filter
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_filter,2,0) {(void*) boxptr_Array_filter,0}};
#define boxvar_Array_filter MMC_REFSTRUCTLIT(boxvar_lit_Array_filter)


DLLModelDirection
modelica_metatype omc_Array_generate(threadData_t *threadData, modelica_integer _n, modelica_fnptr _generator);
DLLModelDirection
modelica_metatype boxptr_Array_generate(threadData_t *threadData, modelica_metatype _n, modelica_fnptr _generator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_generate,2,0) {(void*) boxptr_Array_generate,0}};
#define boxvar_Array_generate MMC_REFSTRUCTLIT(boxvar_lit_Array_generate)


DLLModelDirection
modelica_metatype omc_Array_threadMap(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _func);
#define boxptr_Array_threadMap omc_Array_threadMap
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_threadMap,2,0) {(void*) boxptr_Array_threadMap,0}};
#define boxvar_Array_threadMap MMC_REFSTRUCTLIT(boxvar_lit_Array_threadMap)


DLLModelDirection
modelica_metatype omc_Array_transpose(threadData_t *threadData, modelica_metatype _arr);
#define boxptr_Array_transpose omc_Array_transpose
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_transpose,2,0) {(void*) boxptr_Array_transpose,0}};
#define boxvar_Array_transpose MMC_REFSTRUCTLIT(boxvar_lit_Array_transpose)


DLLModelDirection
modelica_metatype omc_Array_mapFold(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _func, modelica_metatype _arg, modelica_metatype *out_outArg);
#define boxptr_Array_mapFold omc_Array_mapFold
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_mapFold,2,0) {(void*) boxptr_Array_mapFold,0}};
#define boxvar_Array_mapFold MMC_REFSTRUCTLIT(boxvar_lit_Array_mapFold)


DLLModelDirection
modelica_integer omc_Array_compare(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _compFn);
DLLModelDirection
modelica_metatype boxptr_Array_compare(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _compFn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_compare,2,0) {(void*) boxptr_Array_compare,0}};
#define boxvar_Array_compare MMC_REFSTRUCTLIT(boxvar_lit_Array_compare)


DLLModelDirection
modelica_metatype omc_Array_maxElement(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _lessFn);
#define boxptr_Array_maxElement omc_Array_maxElement
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_maxElement,2,0) {(void*) boxptr_Array_maxElement,0}};
#define boxvar_Array_maxElement MMC_REFSTRUCTLIT(boxvar_lit_Array_maxElement)


DLLModelDirection
modelica_metatype omc_Array_minElement(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _lessFn);
#define boxptr_Array_minElement omc_Array_minElement
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_minElement,2,0) {(void*) boxptr_Array_minElement,0}};
#define boxvar_Array_minElement MMC_REFSTRUCTLIT(boxvar_lit_Array_minElement)


DLLModelDirection
modelica_boolean omc_Array_any(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _inFunc);
DLLModelDirection
modelica_metatype boxptr_Array_any(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _inFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_any,2,0) {(void*) boxptr_Array_any,0}};
#define boxvar_Array_any MMC_REFSTRUCTLIT(boxvar_lit_Array_any)


DLLModelDirection
modelica_boolean omc_Array_all(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _inFunc);
DLLModelDirection
modelica_metatype boxptr_Array_all(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _inFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_all,2,0) {(void*) boxptr_Array_all,0}};
#define boxvar_Array_all MMC_REFSTRUCTLIT(boxvar_lit_Array_all)


DLLModelDirection
modelica_metatype omc_Array_remove(threadData_t *threadData, modelica_metatype _arr, modelica_integer _index);
DLLModelDirection
modelica_metatype boxptr_Array_remove(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_remove,2,0) {(void*) boxptr_Array_remove,0}};
#define boxvar_Array_remove MMC_REFSTRUCTLIT(boxvar_lit_Array_remove)


DLLModelDirection
modelica_metatype omc_Array_insertList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farr, modelica_metatype _lst, modelica_integer _startPos);
DLLModelDirection
modelica_metatype boxptr_Array_insertList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farr, modelica_metatype _lst, modelica_metatype _startPos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_insertList,2,0) {(void*) boxptr_Array_insertList,0}};
#define boxvar_Array_insertList MMC_REFSTRUCTLIT(boxvar_lit_Array_insertList)


DLLModelDirection
modelica_boolean omc_Array_isLess(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _lessFn);
DLLModelDirection
modelica_metatype boxptr_Array_isLess(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _lessFn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_isLess,2,0) {(void*) boxptr_Array_isLess,0}};
#define boxvar_Array_isLess MMC_REFSTRUCTLIT(boxvar_lit_Array_isLess)


DLLModelDirection
modelica_boolean omc_Array_allEqual(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _pred);
DLLModelDirection
modelica_metatype boxptr_Array_allEqual(threadData_t *threadData, modelica_metatype _arr, modelica_fnptr _pred);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_allEqual,2,0) {(void*) boxptr_Array_allEqual,0}};
#define boxvar_Array_allEqual MMC_REFSTRUCTLIT(boxvar_lit_Array_allEqual)


DLLModelDirection
modelica_boolean omc_Array_isEqualOnTrue(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _pred);
DLLModelDirection
modelica_metatype boxptr_Array_isEqualOnTrue(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _pred);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_isEqualOnTrue,2,0) {(void*) boxptr_Array_isEqualOnTrue,0}};
#define boxvar_Array_isEqualOnTrue MMC_REFSTRUCTLIT(boxvar_lit_Array_isEqualOnTrue)


DLLModelDirection
modelica_boolean omc_Array_isEqual(threadData_t *threadData, modelica_metatype _inArr1, modelica_metatype _inArr2);
DLLModelDirection
modelica_metatype boxptr_Array_isEqual(threadData_t *threadData, modelica_metatype _inArr1, modelica_metatype _inArr2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_isEqual,2,0) {(void*) boxptr_Array_isEqual,0}};
#define boxvar_Array_isEqual MMC_REFSTRUCTLIT(boxvar_lit_Array_isEqual)


DLLModelDirection
modelica_integer omc_Array_hashIntArray(threadData_t *threadData, modelica_metatype _arr);
DLLModelDirection
modelica_metatype boxptr_Array_hashIntArray(threadData_t *threadData, modelica_metatype _arr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_hashIntArray,2,0) {(void*) boxptr_Array_hashIntArray,0}};
#define boxvar_Array_hashIntArray MMC_REFSTRUCTLIT(boxvar_lit_Array_hashIntArray)


DLLModelDirection
modelica_string omc_Array_toString(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inPrintFunc, modelica_string _inNameStr, modelica_string _inBeginStr, modelica_string _inDelimitStr, modelica_string _inEndStr, modelica_boolean _inPrintEmpty, modelica_integer _maxLength);
DLLModelDirection
modelica_metatype boxptr_Array_toString(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inPrintFunc, modelica_metatype _inNameStr, modelica_metatype _inBeginStr, modelica_metatype _inDelimitStr, modelica_metatype _inEndStr, modelica_metatype _inPrintEmpty, modelica_metatype _maxLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_toString,2,0) {(void*) boxptr_Array_toString,0}};
#define boxvar_Array_toString MMC_REFSTRUCTLIT(boxvar_lit_Array_toString)


DLLModelDirection
modelica_metatype omc_Array_reverse(threadData_t *threadData, modelica_metatype _inArray);
#define boxptr_Array_reverse omc_Array_reverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_reverse,2,0) {(void*) boxptr_Array_reverse,0}};
#define boxvar_Array_reverse MMC_REFSTRUCTLIT(boxvar_lit_Array_reverse)


DLLModelDirection
modelica_metatype omc_Array_getMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inArray, modelica_fnptr _inCompFunc, modelica_integer *out_outIndex);
DLLModelDirection
modelica_metatype boxptr_Array_getMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inArray, modelica_fnptr _inCompFunc, modelica_metatype *out_outIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_getMemberOnTrue,2,0) {(void*) boxptr_Array_getMemberOnTrue,0}};
#define boxvar_Array_getMemberOnTrue MMC_REFSTRUCTLIT(boxvar_lit_Array_getMemberOnTrue)


DLLModelDirection
modelica_integer omc_Array_position(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inElement, modelica_integer _inFilledSize);
DLLModelDirection
modelica_metatype boxptr_Array_position(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inElement, modelica_metatype _inFilledSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_position,2,0) {(void*) boxptr_Array_position,0}};
#define boxvar_Array_position MMC_REFSTRUCTLIT(boxvar_lit_Array_position)


DLLModelDirection
modelica_metatype omc_Array_getRange(threadData_t *threadData, modelica_integer _inStart, modelica_integer _inEnd, modelica_metatype _inArray);
DLLModelDirection
modelica_metatype boxptr_Array_getRange(threadData_t *threadData, modelica_metatype _inStart, modelica_metatype _inEnd, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_getRange,2,0) {(void*) boxptr_Array_getRange,0}};
#define boxvar_Array_getRange MMC_REFSTRUCTLIT(boxvar_lit_Array_getRange)


DLLModelDirection
modelica_metatype omc_Array_setRange(threadData_t *threadData, modelica_integer _inStart, modelica_integer _inEnd, modelica_metatype _inArray, modelica_metatype _inValue);
DLLModelDirection
modelica_metatype boxptr_Array_setRange(threadData_t *threadData, modelica_metatype _inStart, modelica_metatype _inEnd, modelica_metatype _inArray, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_setRange,2,0) {(void*) boxptr_Array_setRange,0}};
#define boxvar_Array_setRange MMC_REFSTRUCTLIT(boxvar_lit_Array_setRange)


DLLModelDirection
modelica_metatype omc_Array_createIntRange(threadData_t *threadData, modelica_integer _inLen);
DLLModelDirection
modelica_metatype boxptr_Array_createIntRange(threadData_t *threadData, modelica_metatype _inLen);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_createIntRange,2,0) {(void*) boxptr_Array_createIntRange,0}};
#define boxvar_Array_createIntRange MMC_REFSTRUCTLIT(boxvar_lit_Array_createIntRange)


DLLModelDirection
void omc_Array_copyRange(threadData_t *threadData, modelica_metatype _srcArray, modelica_metatype _dstArray, modelica_integer _srcFirst, modelica_integer _srcLast, modelica_integer _dstPos);
DLLModelDirection
void boxptr_Array_copyRange(threadData_t *threadData, modelica_metatype _srcArray, modelica_metatype _dstArray, modelica_metatype _srcFirst, modelica_metatype _srcLast, modelica_metatype _dstPos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_copyRange,2,0) {(void*) boxptr_Array_copyRange,0}};
#define boxvar_Array_copyRange MMC_REFSTRUCTLIT(boxvar_lit_Array_copyRange)


DLLModelDirection
modelica_metatype omc_Array_copyN(threadData_t *threadData, modelica_metatype _inArraySrc, modelica_metatype _inArrayDest, modelica_integer _inN, modelica_integer _srcOffset, modelica_integer _dstOffset);
DLLModelDirection
modelica_metatype boxptr_Array_copyN(threadData_t *threadData, modelica_metatype _inArraySrc, modelica_metatype _inArrayDest, modelica_metatype _inN, modelica_metatype _srcOffset, modelica_metatype _dstOffset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_copyN,2,0) {(void*) boxptr_Array_copyN,0}};
#define boxvar_Array_copyN MMC_REFSTRUCTLIT(boxvar_lit_Array_copyN)


DLLModelDirection
modelica_metatype omc_Array_copy(threadData_t *threadData, modelica_metatype _inArraySrc, modelica_metatype _inArrayDest);
#define boxptr_Array_copy omc_Array_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_copy,2,0) {(void*) boxptr_Array_copy,0}};
#define boxvar_Array_copy MMC_REFSTRUCTLIT(boxvar_lit_Array_copy)


DLLModelDirection
modelica_metatype omc_Array_join(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2);
#define boxptr_Array_join omc_Array_join
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_join,2,0) {(void*) boxptr_Array_join,0}};
#define boxvar_Array_join MMC_REFSTRUCTLIT(boxvar_lit_Array_join)


DLLModelDirection
modelica_metatype omc_Array_appendList(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _lst);
#define boxptr_Array_appendList omc_Array_appendList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_appendList,2,0) {(void*) boxptr_Array_appendList,0}};
#define boxvar_Array_appendList MMC_REFSTRUCTLIT(boxvar_lit_Array_appendList)


DLLModelDirection
modelica_metatype omc_Array_appendToElement(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inElements, modelica_metatype _inArray);
DLLModelDirection
modelica_metatype boxptr_Array_appendToElement(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inElements, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_appendToElement,2,0) {(void*) boxptr_Array_appendToElement,0}};
#define boxvar_Array_appendToElement MMC_REFSTRUCTLIT(boxvar_lit_Array_appendToElement)


DLLModelDirection
modelica_metatype omc_Array_consToElement(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inElement, modelica_metatype _inArray);
DLLModelDirection
modelica_metatype boxptr_Array_consToElement(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inElement, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_consToElement,2,0) {(void*) boxptr_Array_consToElement,0}};
#define boxvar_Array_consToElement MMC_REFSTRUCTLIT(boxvar_lit_Array_consToElement)


DLLModelDirection
modelica_metatype omc_Array_expandOnDemand(threadData_t *threadData, modelica_integer _inNewSize, modelica_metatype _inArray, modelica_real _inExpansionFactor, modelica_metatype _inFillValue);
DLLModelDirection
modelica_metatype boxptr_Array_expandOnDemand(threadData_t *threadData, modelica_metatype _inNewSize, modelica_metatype _inArray, modelica_metatype _inExpansionFactor, modelica_metatype _inFillValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_expandOnDemand,2,0) {(void*) boxptr_Array_expandOnDemand,0}};
#define boxvar_Array_expandOnDemand MMC_REFSTRUCTLIT(boxvar_lit_Array_expandOnDemand)


DLLModelDirection
modelica_metatype omc_Array_expand(threadData_t *threadData, modelica_integer _inN, modelica_metatype _inArray, modelica_metatype _inFill);
DLLModelDirection
modelica_metatype boxptr_Array_expand(threadData_t *threadData, modelica_metatype _inN, modelica_metatype _inArray, modelica_metatype _inFill);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_expand,2,0) {(void*) boxptr_Array_expand,0}};
#define boxvar_Array_expand MMC_REFSTRUCTLIT(boxvar_lit_Array_expand)


DLLModelDirection
modelica_metatype omc_Array_expandToSize(threadData_t *threadData, modelica_integer _inNewSize, modelica_metatype _inArray, modelica_metatype _inFill);
DLLModelDirection
modelica_metatype boxptr_Array_expandToSize(threadData_t *threadData, modelica_metatype _inNewSize, modelica_metatype _inArray, modelica_metatype _inFill);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_expandToSize,2,0) {(void*) boxptr_Array_expandToSize,0}};
#define boxvar_Array_expandToSize MMC_REFSTRUCTLIT(boxvar_lit_Array_expandToSize)


DLLModelDirection
modelica_metatype omc_Array_replaceAtWithFill(threadData_t *threadData, modelica_integer _inPos, modelica_metatype _inTypeReplace, modelica_metatype _inTypeFill, modelica_metatype _inArray);
DLLModelDirection
modelica_metatype boxptr_Array_replaceAtWithFill(threadData_t *threadData, modelica_metatype _inPos, modelica_metatype _inTypeReplace, modelica_metatype _inTypeFill, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_replaceAtWithFill,2,0) {(void*) boxptr_Array_replaceAtWithFill,0}};
#define boxvar_Array_replaceAtWithFill MMC_REFSTRUCTLIT(boxvar_lit_Array_replaceAtWithFill)


DLLModelDirection
modelica_metatype omc_Array_getIndexFirst(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inArray);
DLLModelDirection
modelica_metatype boxptr_Array_getIndexFirst(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_getIndexFirst,2,0) {(void*) boxptr_Array_getIndexFirst,0}};
#define boxvar_Array_getIndexFirst MMC_REFSTRUCTLIT(boxvar_lit_Array_getIndexFirst)


DLLModelDirection
void omc_Array_updateIndexFirst(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inValue, modelica_metatype _inArray);
DLLModelDirection
void boxptr_Array_updateIndexFirst(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inValue, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_updateIndexFirst,2,0) {(void*) boxptr_Array_updateIndexFirst,0}};
#define boxvar_Array_updateIndexFirst MMC_REFSTRUCTLIT(boxvar_lit_Array_updateIndexFirst)


DLLModelDirection
modelica_metatype omc_Array_reduce(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inReduceFunc);
#define boxptr_Array_reduce omc_Array_reduce
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_reduce,2,0) {(void*) boxptr_Array_reduce,0}};
#define boxvar_Array_reduce MMC_REFSTRUCTLIT(boxvar_lit_Array_reduce)


DLLModelDirection
modelica_metatype omc_Array_foldIndex(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue);
#define boxptr_Array_foldIndex omc_Array_foldIndex
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_foldIndex,2,0) {(void*) boxptr_Array_foldIndex,0}};
#define boxvar_Array_foldIndex MMC_REFSTRUCTLIT(boxvar_lit_Array_foldIndex)


DLLModelDirection
modelica_metatype omc_Array_fold(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue);
#define boxptr_Array_fold omc_Array_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_fold,2,0) {(void*) boxptr_Array_fold,0}};
#define boxvar_Array_fold MMC_REFSTRUCTLIT(boxvar_lit_Array_fold)


DLLModelDirection
modelica_metatype omc_Array_mapList(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc);
#define boxptr_Array_mapList omc_Array_mapList
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_mapList,2,0) {(void*) boxptr_Array_mapList,0}};
#define boxvar_Array_mapList MMC_REFSTRUCTLIT(boxvar_lit_Array_mapList)


DLLModelDirection
modelica_metatype omc_Array_map1Ind(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inFunc, modelica_metatype _inArg);
#define boxptr_Array_map1Ind omc_Array_map1Ind
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_map1Ind,2,0) {(void*) boxptr_Array_map1Ind,0}};
#define boxvar_Array_map1Ind MMC_REFSTRUCTLIT(boxvar_lit_Array_map1Ind)


DLLModelDirection
modelica_metatype omc_Array_map1(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inFunc, modelica_metatype _inArg);
#define boxptr_Array_map1 omc_Array_map1
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_map1,2,0) {(void*) boxptr_Array_map1,0}};
#define boxvar_Array_map1 MMC_REFSTRUCTLIT(boxvar_lit_Array_map1)


DLLModelDirection
modelica_metatype omc_Array_map(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inFunc);
#define boxptr_Array_map omc_Array_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_map,2,0) {(void*) boxptr_Array_map,0}};
#define boxvar_Array_map MMC_REFSTRUCTLIT(boxvar_lit_Array_map)


DLLModelDirection
modelica_metatype omc_Array_select(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inIndices);
#define boxptr_Array_select omc_Array_select
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_select,2,0) {(void*) boxptr_Array_select,0}};
#define boxvar_Array_select MMC_REFSTRUCTLIT(boxvar_lit_Array_select)


DLLModelDirection
modelica_metatype omc_Array_findFirstOnTrueWithIdx(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inPredicate, modelica_integer *out_idxOut);
DLLModelDirection
modelica_metatype boxptr_Array_findFirstOnTrueWithIdx(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inPredicate, modelica_metatype *out_idxOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_findFirstOnTrueWithIdx,2,0) {(void*) boxptr_Array_findFirstOnTrueWithIdx,0}};
#define boxvar_Array_findFirstOnTrueWithIdx MMC_REFSTRUCTLIT(boxvar_lit_Array_findFirstOnTrueWithIdx)


DLLModelDirection
modelica_metatype omc_Array_findFirstOnTrue(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inPredicate);
#define boxptr_Array_findFirstOnTrue omc_Array_findFirstOnTrue
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_findFirstOnTrue,2,0) {(void*) boxptr_Array_findFirstOnTrue,0}};
#define boxvar_Array_findFirstOnTrue MMC_REFSTRUCTLIT(boxvar_lit_Array_findFirstOnTrue)


DLLModelDirection
modelica_metatype omc_Array_heapSort(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinArray);
#define boxptr_Array_heapSort omc_Array_heapSort
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_heapSort,2,0) {(void*) boxptr_Array_heapSort,0}};
#define boxvar_Array_heapSort MMC_REFSTRUCTLIT(boxvar_lit_Array_heapSort)


DLLModelDirection
modelica_metatype omc_Array_mapNoCopy__1(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
#define boxptr_Array_mapNoCopy__1 omc_Array_mapNoCopy__1
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_mapNoCopy__1,2,0) {(void*) boxptr_Array_mapNoCopy__1,0}};
#define boxvar_Array_mapNoCopy__1 MMC_REFSTRUCTLIT(boxvar_lit_Array_mapNoCopy__1)


DLLModelDirection
modelica_metatype omc_Array_mapNoCopy(threadData_t *threadData, modelica_metatype _inArray, modelica_fnptr _inFunc);
#define boxptr_Array_mapNoCopy omc_Array_mapNoCopy
static const MMC_DEFSTRUCTLIT(boxvar_lit_Array_mapNoCopy,2,0) {(void*) boxptr_Array_mapNoCopy,0}};
#define boxvar_Array_mapNoCopy MMC_REFSTRUCTLIT(boxvar_lit_Array_mapNoCopy)

#ifdef __cplusplus
}
#endif
#endif
