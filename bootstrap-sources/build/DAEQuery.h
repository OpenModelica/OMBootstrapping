#ifndef DAEQuery__H
#define DAEQuery__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



#define boxptr_DAEQuery_printExpStr omc_DAEQuery_printExpStr


#define boxptr_DAEQuery_adjacencyRowMatrixExp omc_DAEQuery_adjacencyRowMatrixExp


#define boxptr_DAEQuery_adjacencyRowIter omc_DAEQuery_adjacencyRowIter


#define boxptr_DAEQuery_adjacencyRowExp omc_DAEQuery_adjacencyRowExp


#define boxptr_DAEQuery_adjacencyRow omc_DAEQuery_adjacencyRow


#define boxptr_DAEQuery_adjacencyMatrix2 omc_DAEQuery_adjacencyMatrix2


DLLDirection
modelica_metatype omc_DAEQuery_adjacencyMatrix(threadData_t *threadData, modelica_metatype _inBackendDAE);
#define boxptr_DAEQuery_adjacencyMatrix omc_DAEQuery_adjacencyMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEQuery_adjacencyMatrix,2,0) {(void*) boxptr_DAEQuery_adjacencyMatrix,0}};
#define boxvar_DAEQuery_adjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_DAEQuery_adjacencyMatrix)


DLLDirection
modelica_string omc_DAEQuery_dumpVars(threadData_t *threadData, modelica_metatype _vars);
#define boxptr_DAEQuery_dumpVars omc_DAEQuery_dumpVars
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEQuery_dumpVars,2,0) {(void*) boxptr_DAEQuery_dumpVars,0}};
#define boxvar_DAEQuery_dumpVars MMC_REFSTRUCTLIT(boxvar_lit_DAEQuery_dumpVars)


DLLDirection
modelica_string omc_DAEQuery_getVariables(threadData_t *threadData, modelica_metatype _inBackendDAE);
#define boxptr_DAEQuery_getVariables omc_DAEQuery_getVariables
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEQuery_getVariables,2,0) {(void*) boxptr_DAEQuery_getVariables,0}};
#define boxvar_DAEQuery_getVariables MMC_REFSTRUCTLIT(boxvar_lit_DAEQuery_getVariables)


#define boxptr_DAEQuery_getAdjacencyRow omc_DAEQuery_getAdjacencyRow


#define boxptr_DAEQuery_getAdjacencyMatrix omc_DAEQuery_getAdjacencyMatrix


DLLDirection
modelica_string omc_DAEQuery_equationStr(threadData_t *threadData, modelica_metatype _inEquation);
#define boxptr_DAEQuery_equationStr omc_DAEQuery_equationStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEQuery_equationStr,2,0) {(void*) boxptr_DAEQuery_equationStr,0}};
#define boxvar_DAEQuery_equationStr MMC_REFSTRUCTLIT(boxvar_lit_DAEQuery_equationStr)


DLLDirection
modelica_string omc_DAEQuery_getEquations(threadData_t *threadData, modelica_metatype _inBackendDAE);
#define boxptr_DAEQuery_getEquations omc_DAEQuery_getEquations
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEQuery_getEquations,2,0) {(void*) boxptr_DAEQuery_getEquations,0}};
#define boxvar_DAEQuery_getEquations MMC_REFSTRUCTLIT(boxvar_lit_DAEQuery_getEquations)


DLLDirection
modelica_string omc_DAEQuery_writeAdjacencyMatrix(threadData_t *threadData, modelica_metatype _dlow, modelica_string _fileNamePrefix, modelica_string _flatModelicaStr);
#define boxptr_DAEQuery_writeAdjacencyMatrix omc_DAEQuery_writeAdjacencyMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEQuery_writeAdjacencyMatrix,2,0) {(void*) boxptr_DAEQuery_writeAdjacencyMatrix,0}};
#define boxvar_DAEQuery_writeAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_DAEQuery_writeAdjacencyMatrix)

#ifdef __cplusplus
}
#endif
#endif
