#ifndef FMIExt__H
#define FMIExt__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
void omc_FMIExt_releaseFMIImport(threadData_t *threadData, modelica_metatype _inFMIModelVariablesInstance, modelica_metatype _inFMIInstance, modelica_metatype _inFMIContext, modelica_string _inFMIVersion);
#define boxptr_FMIExt_releaseFMIImport omc_FMIExt_releaseFMIImport
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMIExt_releaseFMIImport,2,0) {(void*) boxptr_FMIExt_releaseFMIImport,0}};
#define boxvar_FMIExt_releaseFMIImport MMC_REFSTRUCTLIT(boxvar_lit_FMIExt_releaseFMIImport)

extern void FMIImpl__releaseFMIImport(modelica_metatype /*_inFMIModelVariablesInstance*/, modelica_metatype /*_inFMIInstance*/, modelica_metatype /*_inFMIContext*/, const char* /*_inFMIVersion*/);

DLLDirection
modelica_boolean omc_FMIExt_initializeFMIImport(threadData_t *threadData, modelica_string _inFileName, modelica_string _inWorkingDirectory, modelica_integer _inFMILogLevel, modelica_boolean _inInputConnectors, modelica_boolean _inOutputConnectors, modelica_boolean _inIsModelDescriptionImport, modelica_metatype *out_outFMIContext, modelica_metatype *out_outFMIInstance, modelica_metatype *out_outFMIInfo, modelica_metatype *out_outTypeDefinitionsList, modelica_metatype *out_outExperimentAnnotation, modelica_metatype *out_outModelVariablesInstance, modelica_metatype *out_outModelVariablesList);
DLLDirection
modelica_metatype boxptr_FMIExt_initializeFMIImport(threadData_t *threadData, modelica_metatype _inFileName, modelica_metatype _inWorkingDirectory, modelica_metatype _inFMILogLevel, modelica_metatype _inInputConnectors, modelica_metatype _inOutputConnectors, modelica_metatype _inIsModelDescriptionImport, modelica_metatype *out_outFMIContext, modelica_metatype *out_outFMIInstance, modelica_metatype *out_outFMIInfo, modelica_metatype *out_outTypeDefinitionsList, modelica_metatype *out_outExperimentAnnotation, modelica_metatype *out_outModelVariablesInstance, modelica_metatype *out_outModelVariablesList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMIExt_initializeFMIImport,2,0) {(void*) boxptr_FMIExt_initializeFMIImport,0}};
#define boxvar_FMIExt_initializeFMIImport MMC_REFSTRUCTLIT(boxvar_lit_FMIExt_initializeFMIImport)

extern int FMIImpl__initializeFMIImport(const char* /*_inFileName*/, const char* /*_inWorkingDirectory*/, int /*_inFMILogLevel*/, int /*_inInputConnectors*/, int /*_inOutputConnectors*/, int /*_inIsModelDescriptionImport*/, modelica_metatype* /*_outFMIContext*/, modelica_metatype* /*_outFMIInstance*/, modelica_metatype* /*_outFMIInfo*/, modelica_metatype* /*_outTypeDefinitionsList*/, modelica_metatype* /*_outExperimentAnnotation*/, modelica_metatype* /*_outModelVariablesInstance*/, modelica_metatype* /*_outModelVariablesList*/);

#ifdef __cplusplus
}
#endif
#endif
