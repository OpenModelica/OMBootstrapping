#ifndef SBPWLinearMap__H
#define SBPWLinearMap__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SBPWAtomicLinearMap_PW__ATOMIC__LINEAR__MAP__desc;

extern struct record_description SBPWLinearMap_PW__LINEAR__MAP__desc;


#define boxptr_SBPWLinearMap_toString_helper omc_SBPWLinearMap_toString_helper


DLLDirection
modelica_string omc_SBPWLinearMap_toString(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWLinearMap_toString omc_SBPWLinearMap_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_toString,2,0) {(void*) boxptr_SBPWLinearMap_toString,0}};
#define boxvar_SBPWLinearMap_toString MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_toString)


DLLDirection
modelica_boolean omc_SBPWLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
DLLDirection
modelica_metatype boxptr_SBPWLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_isEqual,2,0) {(void*) boxptr_SBPWLinearMap_isEqual,0}};
#define boxvar_SBPWLinearMap_isEqual MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_isEqual)


DLLDirection
modelica_metatype omc_SBPWLinearMap_atomize(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWLinearMap_atomize omc_SBPWLinearMap_atomize
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_atomize,2,0) {(void*) boxptr_SBPWLinearMap_atomize,0}};
#define boxvar_SBPWLinearMap_atomize MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_atomize)


DLLDirection
modelica_metatype omc_SBPWLinearMap_combine(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
#define boxptr_SBPWLinearMap_combine omc_SBPWLinearMap_combine
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_combine,2,0) {(void*) boxptr_SBPWLinearMap_combine,0}};
#define boxvar_SBPWLinearMap_combine MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_combine)


DLLDirection
modelica_metatype omc_SBPWLinearMap_wholeDom(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWLinearMap_wholeDom omc_SBPWLinearMap_wholeDom
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_wholeDom,2,0) {(void*) boxptr_SBPWLinearMap_wholeDom,0}};
#define boxvar_SBPWLinearMap_wholeDom MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_wholeDom)


DLLDirection
modelica_metatype omc_SBPWLinearMap_minInvCompact(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWLinearMap_minInvCompact omc_SBPWLinearMap_minInvCompact
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_minInvCompact,2,0) {(void*) boxptr_SBPWLinearMap_minInvCompact,0}};
#define boxvar_SBPWLinearMap_minInvCompact MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_minInvCompact)


DLLDirection
modelica_metatype omc_SBPWLinearMap_compPW(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
#define boxptr_SBPWLinearMap_compPW omc_SBPWLinearMap_compPW
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_compPW,2,0) {(void*) boxptr_SBPWLinearMap_compPW,0}};
#define boxvar_SBPWLinearMap_compPW MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_compPW)


#define boxptr_SBPWLinearMap_preImage_add__set omc_SBPWLinearMap_preImage_add__set


DLLDirection
modelica_metatype omc_SBPWLinearMap_preImage(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set);
#define boxptr_SBPWLinearMap_preImage omc_SBPWLinearMap_preImage
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_preImage,2,0) {(void*) boxptr_SBPWLinearMap_preImage,0}};
#define boxvar_SBPWLinearMap_preImage MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_preImage)


#define boxptr_SBPWLinearMap_image_add__set omc_SBPWLinearMap_image_add__set


DLLDirection
modelica_metatype omc_SBPWLinearMap_image(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set);
#define boxptr_SBPWLinearMap_image omc_SBPWLinearMap_image
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_image,2,0) {(void*) boxptr_SBPWLinearMap_image,0}};
#define boxvar_SBPWLinearMap_image MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_image)


DLLDirection
modelica_boolean omc_SBPWLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map);
DLLDirection
modelica_metatype boxptr_SBPWLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_isEmpty,2,0) {(void*) boxptr_SBPWLinearMap_isEmpty,0}};
#define boxvar_SBPWLinearMap_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_isEmpty)


DLLDirection
modelica_integer omc_SBPWLinearMap_ndim(threadData_t *threadData, modelica_metatype _map);
DLLDirection
modelica_metatype boxptr_SBPWLinearMap_ndim(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_ndim,2,0) {(void*) boxptr_SBPWLinearMap_ndim,0}};
#define boxvar_SBPWLinearMap_ndim MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_ndim)


DLLDirection
modelica_metatype omc_SBPWLinearMap_lmap(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWLinearMap_lmap omc_SBPWLinearMap_lmap
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_lmap,2,0) {(void*) boxptr_SBPWLinearMap_lmap,0}};
#define boxvar_SBPWLinearMap_lmap MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_lmap)


DLLDirection
modelica_metatype omc_SBPWLinearMap_dom(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBPWLinearMap_dom omc_SBPWLinearMap_dom
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_dom,2,0) {(void*) boxptr_SBPWLinearMap_dom,0}};
#define boxvar_SBPWLinearMap_dom MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_dom)


DLLDirection
modelica_metatype omc_SBPWLinearMap_copy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmap);
#define boxptr_SBPWLinearMap_copy omc_SBPWLinearMap_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_copy,2,0) {(void*) boxptr_SBPWLinearMap_copy,0}};
#define boxvar_SBPWLinearMap_copy MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_copy)


DLLDirection
modelica_metatype omc_SBPWLinearMap_newIdentity(threadData_t *threadData, modelica_metatype _set);
#define boxptr_SBPWLinearMap_newIdentity omc_SBPWLinearMap_newIdentity
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_newIdentity,2,0) {(void*) boxptr_SBPWLinearMap_newIdentity,0}};
#define boxvar_SBPWLinearMap_newIdentity MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_newIdentity)


DLLDirection
modelica_metatype omc_SBPWLinearMap_newEmpty(threadData_t *threadData);
#define boxptr_SBPWLinearMap_newEmpty omc_SBPWLinearMap_newEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_newEmpty,2,0) {(void*) boxptr_SBPWLinearMap_newEmpty,0}};
#define boxvar_SBPWLinearMap_newEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_newEmpty)


DLLDirection
modelica_metatype omc_SBPWLinearMap_newScalar(threadData_t *threadData, modelica_metatype _dom, modelica_metatype _lmap);
#define boxptr_SBPWLinearMap_newScalar omc_SBPWLinearMap_newScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_newScalar,2,0) {(void*) boxptr_SBPWLinearMap_newScalar,0}};
#define boxvar_SBPWLinearMap_newScalar MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_newScalar)


DLLDirection
modelica_metatype omc_SBPWLinearMap_new(threadData_t *threadData, modelica_metatype _dom, modelica_metatype _lmap);
#define boxptr_SBPWLinearMap_new omc_SBPWLinearMap_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_new,2,0) {(void*) boxptr_SBPWLinearMap_new,0}};
#define boxvar_SBPWLinearMap_new MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_new)

#ifdef __cplusplus
}
#endif
#endif
