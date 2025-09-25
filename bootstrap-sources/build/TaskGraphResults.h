#ifndef TaskGraphResults__H
#define TaskGraphResults__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_TaskGraphResults_checkCodeGraph(threadData_t *threadData, modelica_string _graphfile, modelica_string _codefile);
#define boxptr_TaskGraphResults_checkCodeGraph omc_TaskGraphResults_checkCodeGraph
static const MMC_DEFSTRUCTLIT(boxvar_lit_TaskGraphResults_checkCodeGraph,2,0) {(void*) boxptr_TaskGraphResults_checkCodeGraph,0}};
#define boxvar_TaskGraphResults_checkCodeGraph MMC_REFSTRUCTLIT(boxvar_lit_TaskGraphResults_checkCodeGraph)

extern modelica_metatype TaskGraphResults_checkCodeGraph(const char* /*_graphfile*/, const char* /*_codefile*/);

DLLDirection
modelica_metatype omc_TaskGraphResults_checkTaskGraph(threadData_t *threadData, modelica_string _filename, modelica_string _reffilename);
#define boxptr_TaskGraphResults_checkTaskGraph omc_TaskGraphResults_checkTaskGraph
static const MMC_DEFSTRUCTLIT(boxvar_lit_TaskGraphResults_checkTaskGraph,2,0) {(void*) boxptr_TaskGraphResults_checkTaskGraph,0}};
#define boxvar_TaskGraphResults_checkTaskGraph MMC_REFSTRUCTLIT(boxvar_lit_TaskGraphResults_checkTaskGraph)

extern modelica_metatype TaskGraphResults_checkTaskGraph(const char* /*_filename*/, const char* /*_reffilename*/);

#ifdef __cplusplus
}
#endif
#endif
