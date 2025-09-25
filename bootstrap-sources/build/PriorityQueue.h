#ifndef PriorityQueue__H
#define PriorityQueue__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description PriorityQueue_Tree_NODE__desc;


#define boxptr_PriorityQueue_getMin omc_PriorityQueue_getMin


#define boxptr_PriorityQueue_ins omc_PriorityQueue_ins


#define boxptr_PriorityQueue_link omc_PriorityQueue_link


#define boxptr_PriorityQueue_root omc_PriorityQueue_root


DLLDirection
modelica_metatype omc_PriorityQueue_elements2(threadData_t *threadData, modelica_metatype _its, modelica_metatype _acc);
#define boxptr_PriorityQueue_elements2 omc_PriorityQueue_elements2
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_elements2,2,0) {(void*) boxptr_PriorityQueue_elements2,0}};
#define boxvar_PriorityQueue_elements2 MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_elements2)


DLLDirection
modelica_metatype omc_PriorityQueue_elements(threadData_t *threadData, modelica_metatype _ts);
#define boxptr_PriorityQueue_elements omc_PriorityQueue_elements
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_elements,2,0) {(void*) boxptr_PriorityQueue_elements,0}};
#define boxvar_PriorityQueue_elements MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_elements)


DLLDirection
modelica_metatype omc_PriorityQueue_deleteAndReturnMin(threadData_t *threadData, modelica_metatype _ts, modelica_metatype *out_elt);
#define boxptr_PriorityQueue_deleteAndReturnMin omc_PriorityQueue_deleteAndReturnMin
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_deleteAndReturnMin,2,0) {(void*) boxptr_PriorityQueue_deleteAndReturnMin,0}};
#define boxvar_PriorityQueue_deleteAndReturnMin MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_deleteAndReturnMin)


DLLDirection
modelica_metatype omc_PriorityQueue_deleteMin(threadData_t *threadData, modelica_metatype _ts);
#define boxptr_PriorityQueue_deleteMin omc_PriorityQueue_deleteMin
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_deleteMin,2,0) {(void*) boxptr_PriorityQueue_deleteMin,0}};
#define boxvar_PriorityQueue_deleteMin MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_deleteMin)


DLLDirection
modelica_metatype omc_PriorityQueue_findMin(threadData_t *threadData, modelica_metatype _inTs);
#define boxptr_PriorityQueue_findMin omc_PriorityQueue_findMin
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_findMin,2,0) {(void*) boxptr_PriorityQueue_findMin,0}};
#define boxvar_PriorityQueue_findMin MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_findMin)


DLLDirection
modelica_metatype omc_PriorityQueue_meld2(threadData_t *threadData, modelica_boolean _b1, modelica_boolean _b2, modelica_metatype _t1, modelica_metatype _inTs1, modelica_metatype _t2, modelica_metatype _inTs2);
DLLDirection
modelica_metatype boxptr_PriorityQueue_meld2(threadData_t *threadData, modelica_metatype _b1, modelica_metatype _b2, modelica_metatype _t1, modelica_metatype _inTs1, modelica_metatype _t2, modelica_metatype _inTs2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_meld2,2,0) {(void*) boxptr_PriorityQueue_meld2,0}};
#define boxvar_PriorityQueue_meld2 MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_meld2)


DLLDirection
modelica_metatype omc_PriorityQueue_meld(threadData_t *threadData, modelica_metatype _its1, modelica_metatype _its2);
#define boxptr_PriorityQueue_meld omc_PriorityQueue_meld
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_meld,2,0) {(void*) boxptr_PriorityQueue_meld,0}};
#define boxvar_PriorityQueue_meld MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_meld)


DLLDirection
modelica_metatype omc_PriorityQueue_insert(threadData_t *threadData, modelica_metatype _elt, modelica_metatype _ts);
#define boxptr_PriorityQueue_insert omc_PriorityQueue_insert
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_insert,2,0) {(void*) boxptr_PriorityQueue_insert,0}};
#define boxvar_PriorityQueue_insert MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_insert)


DLLDirection
modelica_boolean omc_PriorityQueue_isEmpty(threadData_t *threadData, modelica_metatype _ts);
DLLDirection
modelica_metatype boxptr_PriorityQueue_isEmpty(threadData_t *threadData, modelica_metatype _ts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_isEmpty,2,0) {(void*) boxptr_PriorityQueue_isEmpty,0}};
#define boxvar_PriorityQueue_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_isEmpty)


DLLDirection
modelica_boolean omc_PriorityQueue_compareElement(threadData_t *threadData, modelica_metatype _el1, modelica_metatype _el2);
DLLDirection
modelica_metatype boxptr_PriorityQueue_compareElement(threadData_t *threadData, modelica_metatype _el1, modelica_metatype _el2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_compareElement,2,0) {(void*) boxptr_PriorityQueue_compareElement,0}};
#define boxvar_PriorityQueue_compareElement MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_compareElement)

#ifdef __cplusplus
}
#endif
#endif
