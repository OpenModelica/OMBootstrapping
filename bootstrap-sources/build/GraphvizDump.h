#ifndef GraphvizDump__H
#define GraphvizDump__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Tpl_BlockType_BT__INDENT__desc;

extern struct record_description Tpl_IterOptions_ITER__OPTIONS__desc;

extern struct record_description Tpl_StringToken_ST__LINE__desc;

extern struct record_description Tpl_StringToken_ST__NEW__LINE__desc;

extern struct record_description Tpl_StringToken_ST__STRING__desc;

extern struct record_description Tpl_StringToken_ST__STRING__LIST__desc;

extern struct record_description Tpl_Text_MEM__TEXT__desc;


DLLDirection
modelica_metatype omc_GraphvizDump_dumpStrongComponent(threadData_t *threadData, modelica_metatype _txt, modelica_integer _a_clusterID, modelica_metatype _a_matching);
DLLDirection
modelica_metatype boxptr_GraphvizDump_dumpStrongComponent(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_clusterID, modelica_metatype _a_matching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpStrongComponent,2,0) {(void*) boxptr_GraphvizDump_dumpStrongComponent,0}};
#define boxvar_GraphvizDump_dumpStrongComponent MMC_REFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpStrongComponent)


DLLDirection
modelica_metatype omc_GraphvizDump_dumpSorting(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_backendDAE, modelica_string _in_a_suffix);
#define boxptr_GraphvizDump_dumpSorting omc_GraphvizDump_dumpSorting
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpSorting,2,0) {(void*) boxptr_GraphvizDump_dumpSorting,0}};
#define boxvar_GraphvizDump_dumpSorting MMC_REFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpSorting)


#define boxptr_GraphvizDump_lm__41 omc_GraphvizDump_lm__41


DLLDirection
modelica_metatype omc_GraphvizDump_connections(threadData_t *threadData, modelica_metatype _txt, modelica_integer _a_clusterID, modelica_metatype _a_matching, modelica_metatype _a_m);
DLLDirection
modelica_metatype boxptr_GraphvizDump_connections(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_clusterID, modelica_metatype _a_matching, modelica_metatype _a_m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphvizDump_connections,2,0) {(void*) boxptr_GraphvizDump_connections,0}};
#define boxvar_GraphvizDump_connections MMC_REFSTRUCTLIT(boxvar_lit_GraphvizDump_connections)


DLLDirection
modelica_metatype omc_GraphvizDump_dumpMatching(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_backendDAE, modelica_string _in_a_suffix);
#define boxptr_GraphvizDump_dumpMatching omc_GraphvizDump_dumpMatching
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpMatching,2,0) {(void*) boxptr_GraphvizDump_dumpMatching,0}};
#define boxvar_GraphvizDump_dumpMatching MMC_REFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpMatching)


#define boxptr_GraphvizDump_lm__24 omc_GraphvizDump_lm__24


DLLDirection
modelica_metatype omc_GraphvizDump_dumpDependence2(threadData_t *threadData, modelica_metatype _txt, modelica_integer _a_clusterID, modelica_metatype _a_m);
DLLDirection
modelica_metatype boxptr_GraphvizDump_dumpDependence2(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_clusterID, modelica_metatype _a_m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpDependence2,2,0) {(void*) boxptr_GraphvizDump_dumpDependence2,0}};
#define boxvar_GraphvizDump_dumpDependence2 MMC_REFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpDependence2)


DLLDirection
modelica_metatype omc_GraphvizDump_dumpDependence(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_backendDAE, modelica_string _in_a_suffix);
#define boxptr_GraphvizDump_dumpDependence omc_GraphvizDump_dumpDependence
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpDependence,2,0) {(void*) boxptr_GraphvizDump_dumpDependence,0}};
#define boxvar_GraphvizDump_dumpDependence MMC_REFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpDependence)


#define boxptr_GraphvizDump_lm__14 omc_GraphvizDump_lm__14


DLLDirection
modelica_metatype omc_GraphvizDump_dumpAdjacencyMatrix(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_backendDAE, modelica_string _in_a_suffix);
#define boxptr_GraphvizDump_dumpAdjacencyMatrix omc_GraphvizDump_dumpAdjacencyMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpAdjacencyMatrix,2,0) {(void*) boxptr_GraphvizDump_dumpAdjacencyMatrix,0}};
#define boxvar_GraphvizDump_dumpAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpAdjacencyMatrix)


DLLDirection
modelica_metatype omc_GraphvizDump_dumpBackendDAE(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_backendDAE, modelica_string _in_a_suffix);
#define boxptr_GraphvizDump_dumpBackendDAE omc_GraphvizDump_dumpBackendDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpBackendDAE,2,0) {(void*) boxptr_GraphvizDump_dumpBackendDAE,0}};
#define boxvar_GraphvizDump_dumpBackendDAE MMC_REFSTRUCTLIT(boxvar_lit_GraphvizDump_dumpBackendDAE)

#ifdef __cplusplus
}
#endif
#endif
