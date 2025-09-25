#ifndef NBEvaluation__H
#define NBEvaluation__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BackendDAE_EvaluationStages_EVALUATION__STAGES__desc;


DLLDirection
modelica_metatype omc_NBEvaluation_removeDummyComponents(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart);
#define boxptr_NBEvaluation_removeDummyComponents omc_NBEvaluation_removeDummyComponents
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBEvaluation_removeDummyComponents,2,0) {(void*) boxptr_NBEvaluation_removeDummyComponents,0}};
#define boxvar_NBEvaluation_removeDummyComponents MMC_REFSTRUCTLIT(boxvar_lit_NBEvaluation_removeDummyComponents)


DLLDirection
modelica_metatype omc_NBEvaluation_removeDummies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae);
#define boxptr_NBEvaluation_removeDummies omc_NBEvaluation_removeDummies
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBEvaluation_removeDummies,2,0) {(void*) boxptr_NBEvaluation_removeDummies,0}};
#define boxvar_NBEvaluation_removeDummies MMC_REFSTRUCTLIT(boxvar_lit_NBEvaluation_removeDummies)


DLLDirection
modelica_metatype omc_NBEvaluation_Stages_convert(threadData_t *threadData, modelica_metatype _stages);
#define boxptr_NBEvaluation_Stages_convert omc_NBEvaluation_Stages_convert
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBEvaluation_Stages_convert,2,0) {(void*) boxptr_NBEvaluation_Stages_convert,0}};
#define boxvar_NBEvaluation_Stages_convert MMC_REFSTRUCTLIT(boxvar_lit_NBEvaluation_Stages_convert)

#ifdef __cplusplus
}
#endif
#endif
