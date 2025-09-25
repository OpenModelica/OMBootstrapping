#ifndef AvlSetInt__H
#define AvlSetInt__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description AvlSetInt_Tree_EMPTY__desc;

extern struct record_description AvlSetInt_Tree_LEAF__desc;

extern struct record_description AvlSetInt_Tree_NODE__desc;


DLLDirection
modelica_metatype omc_AvlSetInt_add(threadData_t *threadData, modelica_metatype _inTree, modelica_integer _inKey);
DLLDirection
modelica_metatype boxptr_AvlSetInt_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_add,2,0) {(void*) boxptr_AvlSetInt_add,0}};
#define boxvar_AvlSetInt_add MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_add)


DLLDirection
modelica_metatype omc_AvlSetInt_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues);
#define boxptr_AvlSetInt_addList omc_AvlSetInt_addList
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_addList,2,0) {(void*) boxptr_AvlSetInt_addList,0}};
#define boxvar_AvlSetInt_addList MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_addList)


#define boxptr_AvlSetInt_balance omc_AvlSetInt_balance


DLLDirection
modelica_boolean omc_AvlSetInt_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_integer _inKey);
DLLDirection
modelica_metatype boxptr_AvlSetInt_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_hasKey,2,0) {(void*) boxptr_AvlSetInt_hasKey,0}};
#define boxvar_AvlSetInt_hasKey MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_hasKey)


DLLDirection
modelica_metatype omc_AvlSetInt_intersection(threadData_t *threadData, modelica_metatype _tree1, modelica_metatype _tree2, modelica_metatype *out_rest1, modelica_metatype *out_rest2);
#define boxptr_AvlSetInt_intersection omc_AvlSetInt_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_intersection,2,0) {(void*) boxptr_AvlSetInt_intersection,0}};
#define boxvar_AvlSetInt_intersection MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_intersection)


DLLDirection
modelica_boolean omc_AvlSetInt_isEmpty(threadData_t *threadData, modelica_metatype _tree);
DLLDirection
modelica_metatype boxptr_AvlSetInt_isEmpty(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_isEmpty,2,0) {(void*) boxptr_AvlSetInt_isEmpty,0}};
#define boxvar_AvlSetInt_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_isEmpty)


DLLDirection
modelica_metatype omc_AvlSetInt_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin);
#define boxptr_AvlSetInt_join omc_AvlSetInt_join
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_join,2,0) {(void*) boxptr_AvlSetInt_join,0}};
#define boxvar_AvlSetInt_join MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_join)


DLLDirection
modelica_integer omc_AvlSetInt_keyCompare(threadData_t *threadData, modelica_integer _inKey1, modelica_integer _inKey2);
DLLDirection
modelica_metatype boxptr_AvlSetInt_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_keyCompare,2,0) {(void*) boxptr_AvlSetInt_keyCompare,0}};
#define boxvar_AvlSetInt_keyCompare MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_keyCompare)


DLLDirection
modelica_string omc_AvlSetInt_keyStr(threadData_t *threadData, modelica_integer _inKey);
DLLDirection
modelica_metatype boxptr_AvlSetInt_keyStr(threadData_t *threadData, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_keyStr,2,0) {(void*) boxptr_AvlSetInt_keyStr,0}};
#define boxvar_AvlSetInt_keyStr MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_keyStr)


DLLDirection
modelica_metatype omc_AvlSetInt_listKeys(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_AvlSetInt_listKeys omc_AvlSetInt_listKeys
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_listKeys,2,0) {(void*) boxptr_AvlSetInt_listKeys,0}};
#define boxvar_AvlSetInt_listKeys MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_listKeys)


DLLDirection
modelica_metatype omc_AvlSetInt_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_AvlSetInt_listKeysReverse omc_AvlSetInt_listKeysReverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_listKeysReverse,2,0) {(void*) boxptr_AvlSetInt_listKeysReverse,0}};
#define boxvar_AvlSetInt_listKeysReverse MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_listKeysReverse)


DLLDirection
modelica_metatype omc_AvlSetInt_new(threadData_t *threadData);
#define boxptr_AvlSetInt_new omc_AvlSetInt_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_new,2,0) {(void*) boxptr_AvlSetInt_new,0}};
#define boxvar_AvlSetInt_new MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_new)


DLLDirection
modelica_string omc_AvlSetInt_printNodeStr(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_AvlSetInt_printNodeStr omc_AvlSetInt_printNodeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_printNodeStr,2,0) {(void*) boxptr_AvlSetInt_printNodeStr,0}};
#define boxvar_AvlSetInt_printNodeStr MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_printNodeStr)


DLLDirection
modelica_string omc_AvlSetInt_printTreeStr(threadData_t *threadData, modelica_metatype _inTree);
#define boxptr_AvlSetInt_printTreeStr omc_AvlSetInt_printTreeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_printTreeStr,2,0) {(void*) boxptr_AvlSetInt_printTreeStr,0}};
#define boxvar_AvlSetInt_printTreeStr MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_printTreeStr)


#define boxptr_AvlSetInt_rotateLeft omc_AvlSetInt_rotateLeft


#define boxptr_AvlSetInt_rotateRight omc_AvlSetInt_rotateRight


DLLDirection
modelica_metatype omc_AvlSetInt_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right);
#define boxptr_AvlSetInt_setTreeLeftRight omc_AvlSetInt_setTreeLeftRight
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_setTreeLeftRight,2,0) {(void*) boxptr_AvlSetInt_setTreeLeftRight,0}};
#define boxvar_AvlSetInt_setTreeLeftRight MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_setTreeLeftRight)


DLLDirection
modelica_integer omc_AvlSetInt_smallestKey(threadData_t *threadData, modelica_metatype _tree);
DLLDirection
modelica_metatype boxptr_AvlSetInt_smallestKey(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetInt_smallestKey,2,0) {(void*) boxptr_AvlSetInt_smallestKey,0}};
#define boxvar_AvlSetInt_smallestKey MMC_REFSTRUCTLIT(boxvar_lit_AvlSetInt_smallestKey)

#ifdef __cplusplus
}
#endif
#endif
