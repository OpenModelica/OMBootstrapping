#ifndef SBPWAtomicLinearMap__H
#define SBPWAtomicLinearMap__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SBPWAtomicLinearMap_PW__ATOMIC__LINEAR__MAP__desc;


DLLDirection
modelica_string omc_SBPWAtomicLinearMap_toString(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWAtomicLinearMap_toString omc_SBPWAtomicLinearMap_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_toString,2,0) {(void*) boxptr_SBPWAtomicLinearMap_toString,0}};
#define boxvar_SBPWAtomicLinearMap_toString MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_toString)


DLLDirection
modelica_boolean omc_SBPWAtomicLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
DLLDirection
modelica_metatype boxptr_SBPWAtomicLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_isEqual,2,0) {(void*) boxptr_SBPWAtomicLinearMap_isEqual,0}};
#define boxvar_SBPWAtomicLinearMap_isEqual MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_isEqual)


DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_preImage(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set);
#define boxptr_SBPWAtomicLinearMap_preImage omc_SBPWAtomicLinearMap_preImage
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_preImage,2,0) {(void*) boxptr_SBPWAtomicLinearMap_preImage,0}};
#define boxvar_SBPWAtomicLinearMap_preImage MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_preImage)


DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_image(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set);
#define boxptr_SBPWAtomicLinearMap_image omc_SBPWAtomicLinearMap_image
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_image,2,0) {(void*) boxptr_SBPWAtomicLinearMap_image,0}};
#define boxvar_SBPWAtomicLinearMap_image MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_image)


DLLDirection
modelica_boolean omc_SBPWAtomicLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map);
DLLDirection
modelica_metatype boxptr_SBPWAtomicLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_isEmpty,2,0) {(void*) boxptr_SBPWAtomicLinearMap_isEmpty,0}};
#define boxvar_SBPWAtomicLinearMap_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_isEmpty)


DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_lmap(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWAtomicLinearMap_lmap omc_SBPWAtomicLinearMap_lmap
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_lmap,2,0) {(void*) boxptr_SBPWAtomicLinearMap_lmap,0}};
#define boxvar_SBPWAtomicLinearMap_lmap MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_lmap)


DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_dom(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWAtomicLinearMap_dom omc_SBPWAtomicLinearMap_dom
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_dom,2,0) {(void*) boxptr_SBPWAtomicLinearMap_dom,0}};
#define boxvar_SBPWAtomicLinearMap_dom MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_dom)


DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_newEmpty(threadData_t *threadData);
#define boxptr_SBPWAtomicLinearMap_newEmpty omc_SBPWAtomicLinearMap_newEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_newEmpty,2,0) {(void*) boxptr_SBPWAtomicLinearMap_newEmpty,0}};
#define boxvar_SBPWAtomicLinearMap_newEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_newEmpty)


DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_new(threadData_t *threadData, modelica_metatype _dom, modelica_metatype _lmap);
#define boxptr_SBPWAtomicLinearMap_new omc_SBPWAtomicLinearMap_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_new,2,0) {(void*) boxptr_SBPWAtomicLinearMap_new,0}};
#define boxvar_SBPWAtomicLinearMap_new MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_new)

#ifdef __cplusplus
}
#endif
#endif
