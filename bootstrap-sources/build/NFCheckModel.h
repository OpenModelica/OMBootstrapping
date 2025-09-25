#ifndef NFCheckModel__H
#define NFCheckModel__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



#define boxptr_NFCheckModel_statementOutputCrefFinder2 omc_NFCheckModel_statementOutputCrefFinder2


#define boxptr_NFCheckModel_statementOutputCrefFinder omc_NFCheckModel_statementOutputCrefFinder


#define boxptr_NFCheckModel_statementOutputs omc_NFCheckModel_statementOutputs


DLLDirection
modelica_integer omc_NFCheckModel_countAlgorithmSize(threadData_t *threadData, modelica_metatype _alg);
DLLDirection
modelica_metatype boxptr_NFCheckModel_countAlgorithmSize(threadData_t *threadData, modelica_metatype _alg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCheckModel_countAlgorithmSize,2,0) {(void*) boxptr_NFCheckModel_countAlgorithmSize,0}};
#define boxvar_NFCheckModel_countAlgorithmSize MMC_REFSTRUCTLIT(boxvar_lit_NFCheckModel_countAlgorithmSize)


DLLDirection
modelica_integer omc_NFCheckModel_countVariableSize(threadData_t *threadData, modelica_metatype _var, modelica_integer __omcQ_24in_5Fvariables, modelica_integer __omcQ_24in_5Fequations, modelica_integer *out_equations);
DLLDirection
modelica_metatype boxptr_NFCheckModel_countVariableSize(threadData_t *threadData, modelica_metatype _var, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype *out_equations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCheckModel_countVariableSize,2,0) {(void*) boxptr_NFCheckModel_countVariableSize,0}};
#define boxvar_NFCheckModel_countVariableSize MMC_REFSTRUCTLIT(boxvar_lit_NFCheckModel_countVariableSize)


DLLDirection
modelica_integer omc_NFCheckModel_checkModel(threadData_t *threadData, modelica_metatype _flatModel, modelica_integer *out_equations);
DLLDirection
modelica_metatype boxptr_NFCheckModel_checkModel(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype *out_equations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCheckModel_checkModel,2,0) {(void*) boxptr_NFCheckModel_checkModel,0}};
#define boxvar_NFCheckModel_checkModel MMC_REFSTRUCTLIT(boxvar_lit_NFCheckModel_checkModel)

#ifdef __cplusplus
}
#endif
#endif
