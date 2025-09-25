#ifndef GraphML__H
#define GraphML__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description GraphML_Attribute_ATTRIBUTE__desc;

extern struct record_description GraphML_Edge_EDGE__desc;

extern struct record_description GraphML_Graph_GRAPH__desc;

extern struct record_description GraphML_GraphInfo_GRAPHINFO__desc;

extern struct record_description GraphML_GraphInfo_GRAPHINFOARR__desc;

extern struct record_description GraphML_Node_GROUPNODE__desc;

extern struct record_description GraphML_Node_NODE__desc;


#define boxptr_GraphML_printNode omc_GraphML_printNode


DLLDirection
void omc_GraphML_printGraphInfo(threadData_t *threadData, modelica_metatype _iGraphInfo);
#define boxptr_GraphML_printGraphInfo omc_GraphML_printGraphInfo
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_printGraphInfo,2,0) {(void*) boxptr_GraphML_printGraphInfo,0}};
#define boxvar_GraphML_printGraphInfo MMC_REFSTRUCTLIT(boxvar_lit_GraphML_printGraphInfo)


#define boxptr_GraphML_convertToGraphInfoArr omc_GraphML_convertToGraphInfoArr


DLLDirection
void omc_GraphML_dumpGraph(threadData_t *threadData, modelica_metatype _iGraphInfo, modelica_string _iFileName);
#define boxptr_GraphML_dumpGraph omc_GraphML_dumpGraph
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_dumpGraph,2,0) {(void*) boxptr_GraphML_dumpGraph,0}};
#define boxvar_GraphML_dumpGraph MMC_REFSTRUCTLIT(boxvar_lit_GraphML_dumpGraph)


#define boxptr_GraphML_getAttributeByNameAndTargetTail omc_GraphML_getAttributeByNameAndTargetTail


DLLDirection
modelica_metatype omc_GraphML_getAttributeByNameAndTarget(threadData_t *threadData, modelica_string _iAttributeName, modelica_metatype _iAttributeTarget, modelica_metatype _iGraphInfo);
#define boxptr_GraphML_getAttributeByNameAndTarget omc_GraphML_getAttributeByNameAndTarget
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_getAttributeByNameAndTarget,2,0) {(void*) boxptr_GraphML_getAttributeByNameAndTarget,0}};
#define boxvar_GraphML_getAttributeByNameAndTarget MMC_REFSTRUCTLIT(boxvar_lit_GraphML_getAttributeByNameAndTarget)


DLLDirection
modelica_metatype omc_GraphML_getMainGraph(threadData_t *threadData, modelica_metatype _iGraphInfo);
#define boxptr_GraphML_getMainGraph omc_GraphML_getMainGraph
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_getMainGraph,2,0) {(void*) boxptr_GraphML_getMainGraph,0}};
#define boxvar_GraphML_getMainGraph MMC_REFSTRUCTLIT(boxvar_lit_GraphML_getMainGraph)


DLLDirection
modelica_metatype omc_GraphML_addGraphAttributeValue(threadData_t *threadData, modelica_metatype _iValue, modelica_integer _iGraphIdx, modelica_metatype _iGraphInfo);
DLLDirection
modelica_metatype boxptr_GraphML_addGraphAttributeValue(threadData_t *threadData, modelica_metatype _iValue, modelica_metatype _iGraphIdx, modelica_metatype _iGraphInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_addGraphAttributeValue,2,0) {(void*) boxptr_GraphML_addGraphAttributeValue,0}};
#define boxvar_GraphML_addGraphAttributeValue MMC_REFSTRUCTLIT(boxvar_lit_GraphML_addGraphAttributeValue)


DLLDirection
modelica_metatype omc_GraphML_addAttribute(threadData_t *threadData, modelica_string _defaultValue, modelica_string _name, modelica_metatype _attType, modelica_metatype _attTarget, modelica_metatype _iGraphInfo, modelica_metatype *out_oAttribute);
#define boxptr_GraphML_addAttribute omc_GraphML_addAttribute
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_addAttribute,2,0) {(void*) boxptr_GraphML_addAttribute,0}};
#define boxvar_GraphML_addAttribute MMC_REFSTRUCTLIT(boxvar_lit_GraphML_addAttribute)


DLLDirection
modelica_metatype omc_GraphML_addEdge(threadData_t *threadData, modelica_string _id, modelica_string _target, modelica_string _source, modelica_string _color, modelica_metatype _lineType, modelica_real _lineWidth, modelica_boolean _smooth, modelica_metatype _labels, modelica_metatype _arrows, modelica_metatype _attValues, modelica_metatype _iGraphInfo, modelica_metatype *out_oEdge);
DLLDirection
modelica_metatype boxptr_GraphML_addEdge(threadData_t *threadData, modelica_metatype _id, modelica_metatype _target, modelica_metatype _source, modelica_metatype _color, modelica_metatype _lineType, modelica_metatype _lineWidth, modelica_metatype _smooth, modelica_metatype _labels, modelica_metatype _arrows, modelica_metatype _attValues, modelica_metatype _iGraphInfo, modelica_metatype *out_oEdge);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_addEdge,2,0) {(void*) boxptr_GraphML_addEdge,0}};
#define boxvar_GraphML_addEdge MMC_REFSTRUCTLIT(boxvar_lit_GraphML_addEdge)


DLLDirection
modelica_metatype omc_GraphML_addGroupNode(threadData_t *threadData, modelica_string _id, modelica_integer _iGraphIdx, modelica_boolean _isFolded, modelica_string _iHeader, modelica_metatype _iGraphInfo, modelica_metatype *out_oNode, modelica_metatype *out_oGraph);
DLLDirection
modelica_metatype boxptr_GraphML_addGroupNode(threadData_t *threadData, modelica_metatype _id, modelica_metatype _iGraphIdx, modelica_metatype _isFolded, modelica_metatype _iHeader, modelica_metatype _iGraphInfo, modelica_metatype *out_oNode, modelica_metatype *out_oGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_addGroupNode,2,0) {(void*) boxptr_GraphML_addGroupNode,0}};
#define boxvar_GraphML_addGroupNode MMC_REFSTRUCTLIT(boxvar_lit_GraphML_addGroupNode)


DLLDirection
modelica_metatype omc_GraphML_addNode(threadData_t *threadData, modelica_string _id, modelica_string _backgroundColor, modelica_real _borderWidth, modelica_metatype _nodeLabels, modelica_metatype _shapeType, modelica_metatype _optDesc, modelica_metatype _attValues, modelica_integer _iGraphIdx, modelica_metatype _iGraphInfo, modelica_metatype *out_oNode);
DLLDirection
modelica_metatype boxptr_GraphML_addNode(threadData_t *threadData, modelica_metatype _id, modelica_metatype _backgroundColor, modelica_metatype _borderWidth, modelica_metatype _nodeLabels, modelica_metatype _shapeType, modelica_metatype _optDesc, modelica_metatype _attValues, modelica_metatype _iGraphIdx, modelica_metatype _iGraphInfo, modelica_metatype *out_oNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_addNode,2,0) {(void*) boxptr_GraphML_addNode,0}};
#define boxvar_GraphML_addNode MMC_REFSTRUCTLIT(boxvar_lit_GraphML_addNode)


DLLDirection
modelica_metatype omc_GraphML_addGraph(threadData_t *threadData, modelica_string _id, modelica_boolean _directed, modelica_metatype _iGraphInfo, modelica_metatype *out_oGraph);
DLLDirection
modelica_metatype boxptr_GraphML_addGraph(threadData_t *threadData, modelica_metatype _id, modelica_metatype _directed, modelica_metatype _iGraphInfo, modelica_metatype *out_oGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_addGraph,2,0) {(void*) boxptr_GraphML_addGraph,0}};
#define boxvar_GraphML_addGraph MMC_REFSTRUCTLIT(boxvar_lit_GraphML_addGraph)


DLLDirection
modelica_metatype omc_GraphML_createGraphInfo(threadData_t *threadData);
#define boxptr_GraphML_createGraphInfo omc_GraphML_createGraphInfo
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_createGraphInfo,2,0) {(void*) boxptr_GraphML_createGraphInfo,0}};
#define boxvar_GraphML_createGraphInfo MMC_REFSTRUCTLIT(boxvar_lit_GraphML_createGraphInfo)

#ifdef __cplusplus
}
#endif
#endif
