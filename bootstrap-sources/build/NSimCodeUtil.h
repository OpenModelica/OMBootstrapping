#ifndef NSimCodeUtil__H
#define NSimCodeUtil__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_NSimCodeUtil_convertSimCodeMap(threadData_t *threadData, modelica_metatype _simcode_map);
#define boxptr_NSimCodeUtil_convertSimCodeMap omc_NSimCodeUtil_convertSimCodeMap
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimCodeUtil_convertSimCodeMap,2,0) {(void*) boxptr_NSimCodeUtil_convertSimCodeMap,0}};
#define boxvar_NSimCodeUtil_convertSimCodeMap MMC_REFSTRUCTLIT(boxvar_lit_NSimCodeUtil_convertSimCodeMap)


DLLDirection
modelica_metatype omc_NSimCodeUtil_addListSimCodeMap(threadData_t *threadData, modelica_metatype _simVars, modelica_metatype __omcQ_24in_5Fsimcode_5Fmap);
#define boxptr_NSimCodeUtil_addListSimCodeMap omc_NSimCodeUtil_addListSimCodeMap
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimCodeUtil_addListSimCodeMap,2,0) {(void*) boxptr_NSimCodeUtil_addListSimCodeMap,0}};
#define boxvar_NSimCodeUtil_addListSimCodeMap MMC_REFSTRUCTLIT(boxvar_lit_NSimCodeUtil_addListSimCodeMap)


DLLDirection
modelica_metatype omc_NSimCodeUtil_createSimCodeMap(threadData_t *threadData, modelica_metatype _simVars, modelica_metatype _extObjInfo);
#define boxptr_NSimCodeUtil_createSimCodeMap omc_NSimCodeUtil_createSimCodeMap
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimCodeUtil_createSimCodeMap,2,0) {(void*) boxptr_NSimCodeUtil_createSimCodeMap,0}};
#define boxvar_NSimCodeUtil_createSimCodeMap MMC_REFSTRUCTLIT(boxvar_lit_NSimCodeUtil_createSimCodeMap)

#ifdef __cplusplus
}
#endif
#endif
