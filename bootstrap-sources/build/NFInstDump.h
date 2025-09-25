#ifndef NFInstDump__H
#define NFInstDump__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_string omc_NFInstDump_dumpUntypedComponentDims(threadData_t *threadData, modelica_metatype _inComponent);
#define boxptr_NFInstDump_dumpUntypedComponentDims omc_NFInstDump_dumpUntypedComponentDims
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstDump_dumpUntypedComponentDims,2,0) {(void*) boxptr_NFInstDump_dumpUntypedComponentDims,0}};
#define boxvar_NFInstDump_dumpUntypedComponentDims MMC_REFSTRUCTLIT(boxvar_lit_NFInstDump_dumpUntypedComponentDims)


DLLDirection
modelica_string omc_NFInstDump_dimensionStr(threadData_t *threadData, modelica_metatype _inDimension);
#define boxptr_NFInstDump_dimensionStr omc_NFInstDump_dimensionStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstDump_dimensionStr,2,0) {(void*) boxptr_NFInstDump_dimensionStr,0}};
#define boxvar_NFInstDump_dimensionStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstDump_dimensionStr)


DLLDirection
modelica_string omc_NFInstDump_equationStr(threadData_t *threadData, modelica_metatype _inEquation);
#define boxptr_NFInstDump_equationStr omc_NFInstDump_equationStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstDump_equationStr,2,0) {(void*) boxptr_NFInstDump_equationStr,0}};
#define boxvar_NFInstDump_equationStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstDump_equationStr)


DLLDirection
modelica_string omc_NFInstDump_prefixStr(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_NFInstDump_prefixStr omc_NFInstDump_prefixStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstDump_prefixStr,2,0) {(void*) boxptr_NFInstDump_prefixStr,0}};
#define boxvar_NFInstDump_prefixStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstDump_prefixStr)


DLLDirection
modelica_string omc_NFInstDump_bindingStr(threadData_t *threadData, modelica_metatype _inBinding);
#define boxptr_NFInstDump_bindingStr omc_NFInstDump_bindingStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstDump_bindingStr,2,0) {(void*) boxptr_NFInstDump_bindingStr,0}};
#define boxvar_NFInstDump_bindingStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstDump_bindingStr)


DLLDirection
modelica_string omc_NFInstDump_componentStr(threadData_t *threadData, modelica_metatype _inComponent);
#define boxptr_NFInstDump_componentStr omc_NFInstDump_componentStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstDump_componentStr,2,0) {(void*) boxptr_NFInstDump_componentStr,0}};
#define boxvar_NFInstDump_componentStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstDump_componentStr)


DLLDirection
modelica_string omc_NFInstDump_elementStr(threadData_t *threadData, modelica_metatype _inElement);
#define boxptr_NFInstDump_elementStr omc_NFInstDump_elementStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstDump_elementStr,2,0) {(void*) boxptr_NFInstDump_elementStr,0}};
#define boxvar_NFInstDump_elementStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstDump_elementStr)


DLLDirection
modelica_string omc_NFInstDump_modelStr(threadData_t *threadData, modelica_string _inName, modelica_metatype _inClass);
#define boxptr_NFInstDump_modelStr omc_NFInstDump_modelStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstDump_modelStr,2,0) {(void*) boxptr_NFInstDump_modelStr,0}};
#define boxvar_NFInstDump_modelStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstDump_modelStr)

#ifdef __cplusplus
}
#endif
#endif
