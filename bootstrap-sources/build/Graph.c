#ifdef OMC_BASE_FILE
#define OMC_FILE OMC_BASE_FILE
#else
#define OMC_FILE "Graph.c"
#endif
#include "omc_simulation_settings.h"
#include "Graph.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Graph.addForbiddenColors failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,32,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Graph.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,8,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8_6,0.0);
#define _OMC_LIT8_6 MMC_REFREALLIT(_OMC_LIT_STRUCT8_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(990)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(990)),MMC_IMMEDIATE(MMC_TAGFIXNUM(101)),_OMC_LIT8_6}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Graph.partialDistance2colorInt failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,38,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,1) {_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11_6,0.0);
#define _OMC_LIT11_6 MMC_REFREALLIT(_OMC_LIT_STRUCT11_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(971)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(971)),MMC_IMMEDIATE(MMC_TAGFIXNUM(107)),_OMC_LIT11_6}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "Graph.allReachableNodesInt failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,34,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,1) {_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT14_6,0.0);
#define _OMC_LIT14_6 MMC_REFREALLIT(_OMC_LIT_STRUCT14_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(935)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(935)),MMC_IMMEDIATE(MMC_TAGFIXNUM(107)),_OMC_LIT14_6}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,1,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data " : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,3,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Node : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,7,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data " Edges: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,8,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,2,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,2,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Graph.arrayUpdateListAppend failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,35,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,1) {_OMC_LIT22,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT24_6,0.0);
#define _OMC_LIT24_6 MMC_REFREALLIT(_OMC_LIT_STRUCT24_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(757)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(757)),MMC_IMMEDIATE(MMC_TAGFIXNUM(108)),_OMC_LIT24_6}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT25_6,0.0);
#define _OMC_LIT25_6 MMC_REFREALLIT(_OMC_LIT_STRUCT25_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(726)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(726)),MMC_IMMEDIATE(MMC_TAGFIXNUM(105)),_OMC_LIT25_6}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "Graph.partialDistance2color failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,35,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,2,1) {_OMC_LIT26,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT28_6,0.0);
#define _OMC_LIT28_6 MMC_REFREALLIT(_OMC_LIT_STRUCT28_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(675)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(675)),MMC_IMMEDIATE(MMC_TAGFIXNUM(108)),_OMC_LIT28_6}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Graph.allReachableNodes failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,31,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,1) {_OMC_LIT29,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT31_6,0.0);
#define _OMC_LIT31_6 MMC_REFREALLIT(_OMC_LIT_STRUCT31_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(617)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(617)),MMC_IMMEDIATE(MMC_TAGFIXNUM(104)),_OMC_LIT31_6}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Graph.transpose failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,23,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,1) {_OMC_LIT32,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT34_6,0.0);
#define _OMC_LIT34_6 MMC_REFREALLIT(_OMC_LIT_STRUCT34_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(510)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(510)),MMC_IMMEDIATE(MMC_TAGFIXNUM(96)),_OMC_LIT34_6}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#include "util/modelica.h"
#include "Graph_includes.h"
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_merge3(threadData_t *threadData, modelica_boolean _b, modelica_metatype _n1, modelica_metatype _e1, modelica_metatype _n2, modelica_metatype _e2, modelica_metatype _rest, modelica_fnptr _eqFunc, modelica_metatype *out_outRest);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_merge3(threadData_t *threadData, modelica_metatype _b, modelica_metatype _n1, modelica_metatype _e1, modelica_metatype _n2, modelica_metatype _e2, modelica_metatype _rest, modelica_fnptr _eqFunc, modelica_metatype *out_outRest);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_merge3,2,0) {(void*) boxptr_Graph_merge3,0}};
#define boxvar_Graph_merge3 MMC_REFSTRUCTLIT(boxvar_lit_Graph_merge3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_merge2(threadData_t *threadData, modelica_metatype _inGraph, modelica_fnptr _eqFunc, modelica_metatype _inAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_merge2,2,0) {(void*) boxptr_Graph_merge2,0}};
#define boxvar_Graph_merge2 MMC_REFSTRUCTLIT(boxvar_lit_Graph_merge2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_filterGraph2(threadData_t *threadData, modelica_metatype _inNode, modelica_fnptr _inCondFunc, modelica_metatype _inAccumGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_filterGraph2,2,0) {(void*) boxptr_Graph_filterGraph2,0}};
#define boxvar_Graph_filterGraph2 MMC_REFSTRUCTLIT(boxvar_lit_Graph_filterGraph2)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Graph_arrayFindMinColorIndexInt(threadData_t *threadData, modelica_metatype _inForbiddenColor, modelica_integer _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_arrayFindMinColorIndexInt(threadData_t *threadData, modelica_metatype _inForbiddenColor, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_arrayFindMinColorIndexInt,2,0) {(void*) boxptr_Graph_arrayFindMinColorIndexInt,0}};
#define boxvar_Graph_arrayFindMinColorIndexInt MMC_REFSTRUCTLIT(boxvar_lit_Graph_arrayFindMinColorIndexInt)
PROTECTED_FUNCTION_STATIC void omc_Graph_updateForbiddenColorArrayInt(threadData_t *threadData, modelica_metatype _inIndexes, modelica_metatype _inColored, modelica_metatype _inForbiddenColor, modelica_integer _inNode);
PROTECTED_FUNCTION_STATIC void boxptr_Graph_updateForbiddenColorArrayInt(threadData_t *threadData, modelica_metatype _inIndexes, modelica_metatype _inColored, modelica_metatype _inForbiddenColor, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_updateForbiddenColorArrayInt,2,0) {(void*) boxptr_Graph_updateForbiddenColorArrayInt,0}};
#define boxvar_Graph_updateForbiddenColorArrayInt MMC_REFSTRUCTLIT(boxvar_lit_Graph_updateForbiddenColorArrayInt)
PROTECTED_FUNCTION_STATIC void omc_Graph_addForbiddenColorsInt(threadData_t *threadData, modelica_integer _inNode, modelica_metatype _nodes, modelica_metatype _inColored, modelica_metatype _forbiddenColor, modelica_metatype _inGraph);
PROTECTED_FUNCTION_STATIC void boxptr_Graph_addForbiddenColorsInt(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _nodes, modelica_metatype _inColored, modelica_metatype _forbiddenColor, modelica_metatype _inGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_addForbiddenColorsInt,2,0) {(void*) boxptr_Graph_addForbiddenColorsInt,0}};
#define boxvar_Graph_addForbiddenColorsInt MMC_REFSTRUCTLIT(boxvar_lit_Graph_addForbiddenColorsInt)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Graph_arrayFindMinColorIndex(threadData_t *threadData, modelica_metatype _inForbiddenColor, modelica_metatype _inNode, modelica_integer _inIndex, modelica_integer _inmaxIndex, modelica_fnptr _inEqualFunc, modelica_fnptr _inPrintFunc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_arrayFindMinColorIndex(threadData_t *threadData, modelica_metatype _inForbiddenColor, modelica_metatype _inNode, modelica_metatype _inIndex, modelica_metatype _inmaxIndex, modelica_fnptr _inEqualFunc, modelica_fnptr _inPrintFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_arrayFindMinColorIndex,2,0) {(void*) boxptr_Graph_arrayFindMinColorIndex,0}};
#define boxvar_Graph_arrayFindMinColorIndex MMC_REFSTRUCTLIT(boxvar_lit_Graph_arrayFindMinColorIndex)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Graph_arrayElemetGtZero(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inArray);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_arrayElemetGtZero(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_arrayElemetGtZero,2,0) {(void*) boxptr_Graph_arrayElemetGtZero,0}};
#define boxvar_Graph_arrayElemetGtZero MMC_REFSTRUCTLIT(boxvar_lit_Graph_arrayElemetGtZero)
PROTECTED_FUNCTION_STATIC void omc_Graph_arrayUpdateListAppend(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inArray, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC void boxptr_Graph_arrayUpdateListAppend(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inArray, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_arrayUpdateListAppend,2,0) {(void*) boxptr_Graph_arrayUpdateListAppend,0}};
#define boxvar_Graph_arrayUpdateListAppend MMC_REFSTRUCTLIT(boxvar_lit_Graph_arrayUpdateListAppend)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_getArrayElem(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inArray);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_getArrayElem(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_getArrayElem,2,0) {(void*) boxptr_Graph_getArrayElem,0}};
#define boxvar_Graph_getArrayElem MMC_REFSTRUCTLIT(boxvar_lit_Graph_getArrayElem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_addForbiddenColors(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inNodes, modelica_metatype _inColored, modelica_metatype _inForbiddenColor, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc, modelica_fnptr _inPrintFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_addForbiddenColors,2,0) {(void*) boxptr_Graph_addForbiddenColors,0}};
#define boxvar_Graph_addForbiddenColors MMC_REFSTRUCTLIT(boxvar_lit_Graph_addForbiddenColors)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_allReachableNodesWork(threadData_t *threadData, modelica_metatype _intmpstorage, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_allReachableNodesWork,2,0) {(void*) boxptr_Graph_allReachableNodesWork,0}};
#define boxvar_Graph_allReachableNodesWork MMC_REFSTRUCTLIT(boxvar_lit_Graph_allReachableNodesWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_insertNodetoGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inVertex, modelica_fnptr _inEqualFunc, modelica_metatype _inGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_insertNodetoGraph,2,0) {(void*) boxptr_Graph_insertNodetoGraph,0}};
#define boxvar_Graph_insertNodetoGraph MMC_REFSTRUCTLIT(boxvar_lit_Graph_insertNodetoGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_removeNodesFromGraph(threadData_t *threadData, modelica_metatype _inNodes, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_removeNodesFromGraph,2,0) {(void*) boxptr_Graph_removeNodesFromGraph,0}};
#define boxvar_Graph_removeNodesFromGraph MMC_REFSTRUCTLIT(boxvar_lit_Graph_removeNodesFromGraph)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Graph_findIndexofNodeInGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc, modelica_integer _inIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_findIndexofNodeInGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc, modelica_metatype _inIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_findIndexofNodeInGraph,2,0) {(void*) boxptr_Graph_findIndexofNodeInGraph,0}};
#define boxvar_Graph_findIndexofNodeInGraph MMC_REFSTRUCTLIT(boxvar_lit_Graph_findIndexofNodeInGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_findNodeInGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_findNodeInGraph,2,0) {(void*) boxptr_Graph_findNodeInGraph,0}};
#define boxvar_Graph_findNodeInGraph MMC_REFSTRUCTLIT(boxvar_lit_Graph_findNodeInGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_findCycleForNode2(threadData_t *threadData, modelica_metatype _inNodes, modelica_metatype _inGraph, modelica_metatype _inVisitedNodes, modelica_fnptr _inEqualFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_findCycleForNode2,2,0) {(void*) boxptr_Graph_findCycleForNode2,0}};
#define boxvar_Graph_findCycleForNode2 MMC_REFSTRUCTLIT(boxvar_lit_Graph_findCycleForNode2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_findCycleForNode(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inGraph, modelica_metatype _inVisitedNodes, modelica_fnptr _inEqualFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_findCycleForNode,2,0) {(void*) boxptr_Graph_findCycleForNode,0}};
#define boxvar_Graph_findCycleForNode MMC_REFSTRUCTLIT(boxvar_lit_Graph_findCycleForNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_removeEdge(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inRemovedNode, modelica_fnptr _inEqualFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_removeEdge,2,0) {(void*) boxptr_Graph_removeEdge,0}};
#define boxvar_Graph_removeEdge MMC_REFSTRUCTLIT(boxvar_lit_Graph_removeEdge)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Graph_hasOutgoingEdges(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_hasOutgoingEdges(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_hasOutgoingEdges,2,0) {(void*) boxptr_Graph_hasOutgoingEdges,0}};
#define boxvar_Graph_hasOutgoingEdges MMC_REFSTRUCTLIT(boxvar_lit_Graph_hasOutgoingEdges)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_topologicalSort2(threadData_t *threadData, modelica_metatype _inStartNodes, modelica_metatype _inRestNodes, modelica_metatype _inAccumNodes, modelica_fnptr _inEqualFunc, modelica_metatype *out_outRemainingGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_topologicalSort2,2,0) {(void*) boxptr_Graph_topologicalSort2,0}};
#define boxvar_Graph_topologicalSort2 MMC_REFSTRUCTLIT(boxvar_lit_Graph_topologicalSort2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_emptyGraphHelper(threadData_t *threadData, modelica_metatype _nt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Graph_emptyGraphHelper,2,0) {(void*) boxptr_Graph_emptyGraphHelper,0}};
#define boxvar_Graph_emptyGraphHelper MMC_REFSTRUCTLIT(boxvar_lit_Graph_emptyGraphHelper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_merge3(threadData_t *threadData, modelica_boolean _b, modelica_metatype _n1, modelica_metatype _e1, modelica_metatype _n2, modelica_metatype _e2, modelica_metatype _rest, modelica_fnptr _eqFunc, modelica_metatype *out_outRest)
{
modelica_metatype _elt = NULL;
modelica_metatype _outRest = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_boolean tmp4_1;
tmp4_1 = _b;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (1 != tmp4_1) goto tmp3_end;
tmpMeta6 = mmc_mk_box2(0, _n1, omc_List_unionOnTrue(threadData, _e1, _e2, ((modelica_fnptr) _eqFunc)));
tmpMeta[0+0] = tmpMeta6;
tmpMeta[0+1] = _rest;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (0 != tmp4_1) goto tmp3_end;
tmpMeta7 = mmc_mk_box2(0, _n1, _e1);
tmpMeta9 = mmc_mk_box2(0, _n2, _e2);
tmpMeta8 = mmc_mk_cons(tmpMeta9, _rest);
tmpMeta[0+0] = tmpMeta7;
tmpMeta[0+1] = tmpMeta8;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
goto_2:;
MMC_THROW_INTERNAL();
goto tmp3_done;
tmp3_done:;
}
}
_elt = tmpMeta[0+0];
_outRest = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outRest) { *out_outRest = _outRest; }
return _elt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_merge3(threadData_t *threadData, modelica_metatype _b, modelica_metatype _n1, modelica_metatype _e1, modelica_metatype _n2, modelica_metatype _e2, modelica_metatype _rest, modelica_fnptr _eqFunc, modelica_metatype *out_outRest)
{
modelica_integer tmp1;
modelica_metatype _elt = NULL;
tmp1 = mmc_unbox_integer(_b);
_elt = omc_Graph_merge3(threadData, tmp1, _n1, _e1, _n2, _e2, _rest, _eqFunc, out_outRest);
return _elt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_merge2(threadData_t *threadData, modelica_metatype _inGraph, modelica_fnptr _eqFunc, modelica_metatype _inAcc)
{
modelica_metatype _graph = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inGraph;
{
modelica_metatype _rest = NULL;
modelica_metatype _node = NULL;
modelica_metatype _n1 = NULL;
modelica_metatype _n2 = NULL;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_boolean _b;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta1 = listReverse(_inAcc);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (!listEmpty(tmpMeta7)) goto tmp3_end;
_node = tmpMeta6;
tmpMeta8 = mmc_mk_cons(_node, _inAcc);
tmpMeta1 = listReverse(tmpMeta8);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta9 = MMC_CAR(tmp4_1);
tmpMeta10 = MMC_CDR(tmp4_1);
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
if (listEmpty(tmpMeta10)) goto tmp3_end;
tmpMeta13 = MMC_CAR(tmpMeta10);
tmpMeta14 = MMC_CDR(tmpMeta10);
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
_n1 = tmpMeta11;
_e1 = tmpMeta12;
_n2 = tmpMeta15;
_e2 = tmpMeta16;
_rest = tmpMeta14;
_b = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 2))), _n1, _n2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 1)))) (threadData, _n1, _n2));
_node = omc_Graph_merge3(threadData, _b, _n1, _e1, _n2, _e2, _rest, ((modelica_fnptr) _eqFunc) ,&_rest);
tmpMeta17 = mmc_mk_cons(_node, _inAcc);
_inGraph = _rest;
_inAcc = tmpMeta17;
goto _tailrecursive;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
goto_2:;
MMC_THROW_INTERNAL();
goto tmp3_done;
tmp3_done:;
}
}
_graph = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _graph;
}
DLLExport
modelica_metatype omc_Graph_merge(threadData_t *threadData, modelica_metatype _graph1, modelica_metatype _graph2, modelica_fnptr _eqFunc, modelica_fnptr _compareFunc)
{
modelica_metatype _graph = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_graph = omc_Graph_merge2(threadData, omc_List_sort(threadData, listAppend(_graph1, _graph2), ((modelica_fnptr) _compareFunc)), ((modelica_fnptr) _eqFunc), tmpMeta1);
_return: OMC_LABEL_UNUSED
return _graph;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_filterGraph2(threadData_t *threadData, modelica_metatype _inNode, modelica_fnptr _inCondFunc, modelica_metatype _inAccumGraph)
{
modelica_metatype _outNode = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inNode;
{
modelica_metatype _node = NULL;
modelica_metatype _edges = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_integer tmp8;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
_node = tmpMeta6;
tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCondFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCondFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCondFunc), 2))), _node) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCondFunc), 1)))) (threadData, _node);
tmp8 = mmc_unbox_integer(tmpMeta7);
if (0 != tmp8) goto goto_2;
tmpMeta1 = _inAccumGraph;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_node = tmpMeta9;
_edges = tmpMeta10;
_edges = omc_List_filterOnTrue(threadData, _edges, ((modelica_fnptr) _inCondFunc));
tmpMeta12 = mmc_mk_box2(0, _node, _edges);
tmpMeta11 = mmc_mk_cons(tmpMeta12, _inAccumGraph);
tmpMeta1 = tmpMeta11;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outNode = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outNode;
}
DLLExport
modelica_metatype omc_Graph_filterGraph(threadData_t *threadData, modelica_metatype _inGraph, modelica_fnptr _inCondFunc)
{
modelica_metatype _outGraph = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outGraph = omc_List_accumulateMapAccum1(threadData, _inGraph, boxvar_Graph_filterGraph2, ((modelica_fnptr) _inCondFunc));
_return: OMC_LABEL_UNUSED
return _outGraph;
}
PROTECTED_FUNCTION_STATIC modelica_integer omc_Graph_arrayFindMinColorIndexInt(threadData_t *threadData, modelica_metatype _inForbiddenColor, modelica_integer _inNode)
{
modelica_integer _outColor;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outColor = ((modelica_integer) 1);
while(1)
{
if(!1) break;
if((mmc_unbox_integer(arrayGet(_inForbiddenColor, _outColor)) != _inNode))
{
goto _return;
}
else
{
_outColor = ((modelica_integer) 1) + _outColor;
}
}
_return: OMC_LABEL_UNUSED
return _outColor;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_arrayFindMinColorIndexInt(threadData_t *threadData, modelica_metatype _inForbiddenColor, modelica_metatype _inNode)
{
modelica_integer tmp1;
modelica_integer _outColor;
modelica_metatype out_outColor;
tmp1 = mmc_unbox_integer(_inNode);
_outColor = omc_Graph_arrayFindMinColorIndexInt(threadData, _inForbiddenColor, tmp1);
out_outColor = mmc_mk_icon(_outColor);
return out_outColor;
}
PROTECTED_FUNCTION_STATIC void omc_Graph_updateForbiddenColorArrayInt(threadData_t *threadData, modelica_metatype _inIndexes, modelica_metatype _inColored, modelica_metatype _inForbiddenColor, modelica_integer _inNode)
{
modelica_integer _colorIndex;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _index;
for (tmpMeta1 = _inIndexes; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_index = MMC_CAR(tmpMeta1);
_colorIndex = mmc_unbox_integer(arrayGet(_inColored, mmc_unbox_integer(_index)));
if((_colorIndex > ((modelica_integer) 0)))
{
arrayUpdate(_inForbiddenColor, _colorIndex, mmc_mk_integer(_inNode));
}
}
}
_return: OMC_LABEL_UNUSED
return;
}
PROTECTED_FUNCTION_STATIC void boxptr_Graph_updateForbiddenColorArrayInt(threadData_t *threadData, modelica_metatype _inIndexes, modelica_metatype _inColored, modelica_metatype _inForbiddenColor, modelica_metatype _inNode)
{
modelica_integer tmp1;
tmp1 = mmc_unbox_integer(_inNode);
omc_Graph_updateForbiddenColorArrayInt(threadData, _inIndexes, _inColored, _inForbiddenColor, tmp1);
return;
}
PROTECTED_FUNCTION_STATIC void omc_Graph_addForbiddenColorsInt(threadData_t *threadData, modelica_integer _inNode, modelica_metatype _nodes, modelica_metatype _inColored, modelica_metatype _forbiddenColor, modelica_metatype _inGraph)
{
modelica_metatype _indexes = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
{
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp2_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
{
modelica_metatype _node;
for (tmpMeta5 = _nodes; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
{
_node = MMC_CAR(tmpMeta5);
tmpMeta6 = arrayGet(_inGraph, mmc_unbox_integer(_node));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
_indexes = tmpMeta7;
omc_Graph_updateForbiddenColorArrayInt(threadData, _indexes, _inColored, _forbiddenColor, _inNode);
}
}
goto tmp2_done;
}
case 1: {
omc_Error_addSourceMessage(threadData, _OMC_LIT4, _OMC_LIT6, _OMC_LIT8);
goto goto_1;
goto tmp2_done;
}
}
goto tmp2_end;
tmp2_end: ;
}
goto goto_1;
tmp2_done:
(void)tmp3;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp2_done2;
goto_1:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp3 < 2) {
goto tmp2_top;
}
MMC_THROW_INTERNAL();
tmp2_done2:;
}
}
;
_return: OMC_LABEL_UNUSED
return;
}
PROTECTED_FUNCTION_STATIC void boxptr_Graph_addForbiddenColorsInt(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _nodes, modelica_metatype _inColored, modelica_metatype _forbiddenColor, modelica_metatype _inGraph)
{
modelica_integer tmp1;
tmp1 = mmc_unbox_integer(_inNode);
omc_Graph_addForbiddenColorsInt(threadData, tmp1, _nodes, _inColored, _forbiddenColor, _inGraph);
return;
}
DLLExport
void omc_Graph_partialDistance2colorInt(threadData_t *threadData, modelica_metatype _inGraphT, modelica_metatype _inforbiddenColor, modelica_metatype _inColors, modelica_metatype _inGraph, modelica_metatype _inColored)
{
modelica_integer _node;
modelica_integer _color;
modelica_metatype _nodes = NULL;
modelica_metatype _forbiddenColor = NULL;
modelica_metatype _restGraph = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
{
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp2_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_integer tmp8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
{
modelica_metatype _tpl;
for (tmpMeta5 = _inGraphT; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
{
_tpl = MMC_CAR(tmpMeta5);
tmpMeta6 = _tpl;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
tmp8 = mmc_unbox_integer(tmpMeta7);
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
_node = tmp8;
_nodes = tmpMeta9;
omc_Graph_addForbiddenColorsInt(threadData, _node, _nodes, _inColored, _inforbiddenColor, _inGraph);
_color = omc_Graph_arrayFindMinColorIndexInt(threadData, _inforbiddenColor, _node);
arrayUpdate(_inColored, _node, mmc_mk_integer(_color));
}
}
goto tmp2_done;
}
case 1: {
omc_Error_addSourceMessage(threadData, _OMC_LIT4, _OMC_LIT10, _OMC_LIT11);
goto tmp2_done;
}
}
goto tmp2_end;
tmp2_end: ;
}
goto goto_1;
tmp2_done:
(void)tmp3;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp2_done2;
goto_1:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp3 < 2) {
goto tmp2_top;
}
MMC_THROW_INTERNAL();
tmp2_done2:;
}
}
;
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_Graph_allReachableNodesInt(threadData_t *threadData, modelica_metatype _intmpstorage, modelica_metatype _inGraph, modelica_integer _inMaxGraphNode, modelica_integer _inMaxNodexIndex)
{
modelica_metatype _reachableNodes = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _intmpstorage;
{
modelica_integer _node;
modelica_metatype _edges = NULL;
modelica_metatype _M = NULL;
modelica_metatype _L = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (!listEmpty(tmpMeta6)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_L = tmpMeta7;
tmp4 += 2;
tmpMeta1 = _L;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_integer tmp11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_boolean tmp14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (listEmpty(tmpMeta8)) goto tmp3_end;
tmpMeta9 = MMC_CAR(tmpMeta8);
tmpMeta10 = MMC_CDR(tmpMeta8);
tmp11 = mmc_unbox_integer(tmpMeta9);
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_node = tmp11;
_M = tmpMeta10;
_L = tmpMeta12;
tmpMeta13 = mmc_mk_cons(mmc_mk_integer(_node), MMC_REFSTRUCTLIT(mmc_nil));
_L = omc_List_union(threadData, _L, tmpMeta13);
tmp14 = (_node >= _inMaxGraphNode);
if (0 != tmp14) goto goto_2;
tmpMeta15 = arrayGet(_inGraph, _node);
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
_edges = tmpMeta16;
_edges = omc_List_filter1OnTrue(threadData, _edges, boxvar_List_notMember, _L);
_M = omc_List_union(threadData, _M, _edges);
tmpMeta17 = mmc_mk_box2(0, _M, _L);
tmpMeta1 = omc_Graph_allReachableNodesInt(threadData, tmpMeta17, _inGraph, _inMaxGraphNode, _inMaxNodexIndex);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_integer tmp21;
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
modelica_boolean tmp24;
modelica_metatype tmpMeta25;
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (listEmpty(tmpMeta18)) goto tmp3_end;
tmpMeta19 = MMC_CAR(tmpMeta18);
tmpMeta20 = MMC_CDR(tmpMeta18);
tmp21 = mmc_unbox_integer(tmpMeta19);
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_node = tmp21;
_M = tmpMeta20;
_L = tmpMeta22;
tmpMeta23 = mmc_mk_cons(mmc_mk_integer(_node), MMC_REFSTRUCTLIT(mmc_nil));
_L = omc_List_union(threadData, _L, tmpMeta23);
tmp24 = (_node >= _inMaxGraphNode);
if (1 != tmp24) goto goto_2;
tmpMeta25 = mmc_mk_box2(0, _M, _L);
tmpMeta1 = omc_Graph_allReachableNodesInt(threadData, tmpMeta25, _inGraph, _inMaxGraphNode, _inMaxNodexIndex);
goto tmp3_done;
}
case 3: {
omc_Error_addSourceMessage(threadData, _OMC_LIT4, _OMC_LIT13, _OMC_LIT14);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 4) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_reachableNodes = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _reachableNodes;
}
modelica_metatype boxptr_Graph_allReachableNodesInt(threadData_t *threadData, modelica_metatype _intmpstorage, modelica_metatype _inGraph, modelica_metatype _inMaxGraphNode, modelica_metatype _inMaxNodexIndex)
{
modelica_integer tmp1;
modelica_integer tmp2;
modelica_metatype _reachableNodes = NULL;
tmp1 = mmc_unbox_integer(_inMaxGraphNode);
tmp2 = mmc_unbox_integer(_inMaxNodexIndex);
_reachableNodes = omc_Graph_allReachableNodesInt(threadData, _intmpstorage, _inGraph, tmp1, tmp2);
return _reachableNodes;
}
DLLExport
void omc_Graph_printNodesInt(threadData_t *threadData, modelica_metatype _inListNodes, modelica_string _inName)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp3_1;
tmp3_1 = _inListNodes;
{
modelica_metatype _strNodes = NULL;
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
modelica_metatype tmpMeta5;
if (!listEmpty(tmp3_1)) goto tmp2_end;
tmpMeta5 = stringAppend(_inName,_OMC_LIT15);
fputs(MMC_STRINGDATA(tmpMeta5),stdout);
goto tmp2_done;
}
case 1: {
modelica_metatype tmpMeta6;
tmpMeta6 = stringAppend(_inName,_OMC_LIT16);
fputs(MMC_STRINGDATA(tmpMeta6),stdout);
_strNodes = omc_List_map(threadData, _inListNodes, boxvar_intString);
_strNodes = omc_List_map1(threadData, _strNodes, boxvar_stringAppend, _OMC_LIT17);
omc_List_map__0(threadData, _strNodes, boxvar_print);
fputs(MMC_STRINGDATA(_OMC_LIT15),stdout);
goto tmp2_done;
}
}
goto tmp2_end;
tmp2_end: ;
}
goto goto_1;
goto_1:;
MMC_THROW_INTERNAL();
goto tmp2_done;
tmp2_done:;
}
}
;
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_Graph_printGraphInt(threadData_t *threadData, modelica_metatype _inGraph)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp3_1;
tmp3_1 = _inGraph;
{
modelica_integer _node;
modelica_metatype _edges = NULL;
modelica_metatype _strEdges = NULL;
modelica_metatype _restGraph = NULL;
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
if (!listEmpty(tmp3_1)) goto tmp2_end;
goto tmp2_done;
}
case 1: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_integer tmp8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (listEmpty(tmp3_1)) goto tmp2_end;
tmpMeta5 = MMC_CAR(tmp3_1);
tmpMeta6 = MMC_CDR(tmp3_1);
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
tmp8 = mmc_unbox_integer(tmpMeta7);
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
_node = tmp8;
_edges = tmpMeta9;
_restGraph = tmpMeta6;
tmpMeta10 = stringAppend(_OMC_LIT18,intString(_node));
tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT19);
fputs(MMC_STRINGDATA(tmpMeta11),stdout);
_strEdges = omc_List_map(threadData, _edges, boxvar_intString);
_strEdges = omc_List_map1(threadData, _strEdges, boxvar_stringAppend, _OMC_LIT17);
omc_List_map__0(threadData, _strEdges, boxvar_print);
fputs(MMC_STRINGDATA(_OMC_LIT15),stdout);
_inGraph = _restGraph;
goto _tailrecursive;
;
goto tmp2_done;
}
}
goto tmp2_end;
tmp2_end: ;
}
goto goto_1;
goto_1:;
MMC_THROW_INTERNAL();
goto tmp2_done;
tmp2_done:;
}
}
;
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_string omc_Graph_printNode(threadData_t *threadData, modelica_metatype _inNode, modelica_fnptr _inPrintFunc)
{
modelica_string _outString = NULL;
modelica_metatype _node = NULL;
modelica_metatype _edges = NULL;
modelica_string _node_str = NULL;
modelica_string _edges_str = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inNode;
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
_node = tmpMeta2;
_edges = tmpMeta3;
_node_str = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPrintFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPrintFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPrintFunc), 2))), _node) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPrintFunc), 1)))) (threadData, _node);
_edges_str = stringDelimitList(omc_List_map(threadData, _edges, ((modelica_fnptr) _inPrintFunc)), _OMC_LIT20);
tmpMeta4 = stringAppend(_node_str,_OMC_LIT21);
tmpMeta5 = stringAppend(tmpMeta4,_edges_str);
_outString = tmpMeta5;
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_Graph_printGraph(threadData_t *threadData, modelica_metatype _inGraph, modelica_fnptr _inPrintFunc)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = stringDelimitList(omc_List_map1(threadData, _inGraph, boxvar_Graph_printNode, ((modelica_fnptr) _inPrintFunc)), _OMC_LIT15);
_return: OMC_LABEL_UNUSED
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_integer omc_Graph_arrayFindMinColorIndex(threadData_t *threadData, modelica_metatype _inForbiddenColor, modelica_metatype _inNode, modelica_integer _inIndex, modelica_integer _inmaxIndex, modelica_fnptr _inEqualFunc, modelica_fnptr _inPrintFunc)
{
modelica_integer _outColor;
modelica_integer tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
{
modelica_metatype _nodes = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
tmpMeta6 = arrayGet(_inForbiddenColor, _inIndex);
if (!optionNone(tmpMeta6)) goto goto_2;
tmp1 = _inIndex;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_boolean tmp9;
tmpMeta7 = arrayGet(_inForbiddenColor, _inIndex);
if (optionNone(tmpMeta7)) goto goto_2;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
_nodes = tmpMeta8;
tmp9 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
omc_List_getMemberOnTrue(threadData, _inNode, _nodes, ((modelica_fnptr) _inEqualFunc));
tmp9 = 1;
goto goto_10;
goto_10:;
MMC_CATCH_INTERNAL(mmc_jumper)
if (tmp9) {goto goto_2;}
tmp1 = _inIndex;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
tmpMeta11 = arrayGet(_inForbiddenColor, _inIndex);
if (optionNone(tmpMeta11)) goto goto_2;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
_nodes = tmpMeta12;
omc_List_getMemberOnTrue(threadData, _inNode, _nodes, ((modelica_fnptr) _inEqualFunc));
tmp1 = omc_Graph_arrayFindMinColorIndex(threadData, _inForbiddenColor, _inNode, ((modelica_integer) 1) + _inIndex, _inmaxIndex, ((modelica_fnptr) _inEqualFunc), ((modelica_fnptr) _inPrintFunc));
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outColor = tmp1;
_return: OMC_LABEL_UNUSED
return _outColor;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_arrayFindMinColorIndex(threadData_t *threadData, modelica_metatype _inForbiddenColor, modelica_metatype _inNode, modelica_metatype _inIndex, modelica_metatype _inmaxIndex, modelica_fnptr _inEqualFunc, modelica_fnptr _inPrintFunc)
{
modelica_integer tmp1;
modelica_integer tmp2;
modelica_integer _outColor;
modelica_metatype out_outColor;
tmp1 = mmc_unbox_integer(_inIndex);
tmp2 = mmc_unbox_integer(_inmaxIndex);
_outColor = omc_Graph_arrayFindMinColorIndex(threadData, _inForbiddenColor, _inNode, tmp1, tmp2, _inEqualFunc, _inPrintFunc);
out_outColor = mmc_mk_icon(_outColor);
return out_outColor;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Graph_arrayElemetGtZero(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inArray)
{
modelica_boolean _outBoolean;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outBoolean = (mmc_unbox_integer(arrayGet(_inArray, _inIndex)) > ((modelica_integer) 0));
_return: OMC_LABEL_UNUSED
return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_arrayElemetGtZero(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inArray)
{
modelica_integer tmp1;
modelica_boolean _outBoolean;
modelica_metatype out_outBoolean;
tmp1 = mmc_unbox_integer(_inIndex);
_outBoolean = omc_Graph_arrayElemetGtZero(threadData, tmp1, _inArray);
out_outBoolean = mmc_mk_icon(_outBoolean);
return out_outBoolean;
}
PROTECTED_FUNCTION_STATIC void omc_Graph_arrayUpdateListAppend(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inArray, modelica_metatype _inNode)
{
modelica_metatype _arrayElem = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
{
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp2_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
arrayUpdate(_inArray, _inIndex, _inNode);
goto tmp2_done;
}
case 1: {
omc_Error_addSourceMessage(threadData, _OMC_LIT4, _OMC_LIT23, _OMC_LIT24);
goto goto_1;
goto tmp2_done;
}
}
goto tmp2_end;
tmp2_end: ;
}
goto goto_1;
tmp2_done:
(void)tmp3;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp2_done2;
goto_1:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp3 < 2) {
goto tmp2_top;
}
MMC_THROW_INTERNAL();
tmp2_done2:;
}
}
;
_return: OMC_LABEL_UNUSED
return;
}
PROTECTED_FUNCTION_STATIC void boxptr_Graph_arrayUpdateListAppend(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inArray, modelica_metatype _inNode)
{
modelica_integer tmp1;
tmp1 = mmc_unbox_integer(_inIndex);
omc_Graph_arrayUpdateListAppend(threadData, tmp1, _inArray, _inNode);
return;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_getArrayElem(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inArray)
{
modelica_metatype _outElem = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outElem = arrayGet(_inArray, _inIndex);
_return: OMC_LABEL_UNUSED
return _outElem;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_getArrayElem(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inArray)
{
modelica_integer tmp1;
modelica_metatype _outElem = NULL;
tmp1 = mmc_unbox_integer(_inIndex);
_outElem = omc_Graph_getArrayElem(threadData, tmp1, _inArray);
return _outElem;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_addForbiddenColors(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inNodes, modelica_metatype _inColored, modelica_metatype _inForbiddenColor, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc, modelica_fnptr _inPrintFunc)
{
modelica_metatype _outForbiddenColor = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _inNodes;
tmp4_2 = _inForbiddenColor;
{
modelica_metatype _node = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _nodes = NULL;
modelica_metatype _indexes = NULL;
modelica_metatype _indexesColor = NULL;
modelica_metatype _forbiddenColor = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp4 += 1;
tmpMeta1 = _inForbiddenColor;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_node = tmpMeta6;
_rest = tmpMeta7;
_forbiddenColor = tmp4_2;
tmpMeta8 = omc_Graph_findNodeInGraph(threadData, _node, _inGraph, ((modelica_fnptr) _inEqualFunc));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
_nodes = tmpMeta9;
_indexes = omc_List_map3(threadData, _nodes, boxvar_Graph_findIndexofNodeInGraph, _inGraph, ((modelica_fnptr) _inEqualFunc), mmc_mk_integer(((modelica_integer) 1)));
_indexes = omc_List_select1(threadData, _indexes, boxvar_Graph_arrayElemetGtZero, _inColored);
_indexesColor = omc_List_map1(threadData, _indexes, boxvar_Graph_getArrayElem, _inColored);
tmpMeta10 = mmc_mk_cons(_inNode, MMC_REFSTRUCTLIT(mmc_nil));
omc_List_map2__0(threadData, _indexesColor, boxvar_Graph_arrayUpdateListAppend, _forbiddenColor, mmc_mk_some(tmpMeta10));
tmpMeta1 = omc_Graph_addForbiddenColors(threadData, _inNode, _rest, _inColored, _forbiddenColor, _inGraph, ((modelica_fnptr) _inEqualFunc), ((modelica_fnptr) _inPrintFunc));
goto tmp3_done;
}
case 2: {
omc_Error_addSourceMessage(threadData, _OMC_LIT4, _OMC_LIT6, _OMC_LIT25);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outForbiddenColor = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outForbiddenColor;
}
DLLExport
modelica_metatype omc_Graph_partialDistance2color(threadData_t *threadData, modelica_metatype _toColorNodes, modelica_metatype _inforbiddenColor, modelica_metatype _inColors, modelica_metatype _inGraph, modelica_metatype _inGraphT, modelica_metatype _inColored, modelica_fnptr _inEqualFunc, modelica_fnptr _inPrintFunc)
{
modelica_metatype _outColored = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _toColorNodes;
{
modelica_metatype _node = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _nodes = NULL;
modelica_metatype _forbiddenColor = NULL;
modelica_metatype _colored = NULL;
modelica_integer _color;
modelica_integer _index;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp4 += 1;
tmpMeta1 = _inColored;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_node = tmpMeta6;
_rest = tmpMeta7;
_index = arrayLength(_inColored) - listLength(_rest);
tmpMeta8 = omc_Graph_findNodeInGraph(threadData, _node, _inGraphT, ((modelica_fnptr) _inEqualFunc));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
_nodes = tmpMeta9;
_forbiddenColor = omc_Graph_addForbiddenColors(threadData, _node, _nodes, _inColored, _inforbiddenColor, _inGraph, ((modelica_fnptr) _inEqualFunc), ((modelica_fnptr) _inPrintFunc));
_color = omc_Graph_arrayFindMinColorIndex(threadData, _forbiddenColor, _node, ((modelica_integer) 1), ((modelica_integer) 1) + arrayLength(_inColored), ((modelica_fnptr) _inEqualFunc), ((modelica_fnptr) _inPrintFunc));
_colored = arrayUpdate(_inColored, _index, mmc_mk_integer(_color));
tmpMeta1 = omc_Graph_partialDistance2color(threadData, _rest, _forbiddenColor, _inColors, _inGraph, _inGraphT, _colored, ((modelica_fnptr) _inEqualFunc), ((modelica_fnptr) _inPrintFunc));
goto tmp3_done;
}
case 2: {
omc_Error_addSourceMessage(threadData, _OMC_LIT4, _OMC_LIT27, _OMC_LIT28);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outColored = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outColored;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_allReachableNodesWork(threadData_t *threadData, modelica_metatype _intmpstorage, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc)
{
modelica_metatype _reachableNodes = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _intmpstorage;
{
modelica_metatype _node = NULL;
modelica_metatype _edges = NULL;
modelica_metatype _M = NULL;
modelica_metatype _L = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (!listEmpty(tmpMeta6)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_L = tmpMeta7;
tmp4 += 2;
_L = listReverse(_L);
tmpMeta1 = mmc_mk_some(_L);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (listEmpty(tmpMeta8)) goto tmp3_end;
tmpMeta9 = MMC_CAR(tmpMeta8);
tmpMeta10 = MMC_CDR(tmpMeta8);
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_node = tmpMeta9;
_M = tmpMeta10;
_L = tmpMeta11;
omc_List_getMemberOnTrue(threadData, _node, _L, ((modelica_fnptr) _inEqualFunc));
tmpMeta12 = mmc_mk_box2(0, _M, _L);
tmpMeta1 = omc_Graph_allReachableNodesWork(threadData, tmpMeta12, _inGraph, ((modelica_fnptr) _inEqualFunc));
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (listEmpty(tmpMeta13)) goto tmp3_end;
tmpMeta14 = MMC_CAR(tmpMeta13);
tmpMeta15 = MMC_CDR(tmpMeta13);
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_node = tmpMeta14;
_M = tmpMeta15;
_L = tmpMeta16;
tmpMeta17 = mmc_mk_cons(_node, _L);
_L = tmpMeta17;
tmpMeta18 = omc_Graph_findNodeInGraph(threadData, _node, _inGraph, ((modelica_fnptr) _inEqualFunc));
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
_edges = tmpMeta19;
_M = listAppend(_edges, _M);
tmpMeta20 = mmc_mk_box2(0, _M, _L);
tmpMeta1 = omc_Graph_allReachableNodesWork(threadData, tmpMeta20, _inGraph, ((modelica_fnptr) _inEqualFunc));
goto tmp3_done;
}
case 3: {
omc_Error_addSourceMessage(threadData, _OMC_LIT4, _OMC_LIT30, _OMC_LIT31);
tmpMeta1 = mmc_mk_none();
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 4) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_reachableNodes = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _reachableNodes;
}
DLLExport
modelica_metatype omc_Graph_allReachableNodes(threadData_t *threadData, modelica_metatype _intmpstorage, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc)
{
modelica_metatype _reachableNodes = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = omc_Graph_allReachableNodesWork(threadData, _intmpstorage, _inGraph, ((modelica_fnptr) _inEqualFunc));
if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
_reachableNodes = tmpMeta2;
_return: OMC_LABEL_UNUSED
return _reachableNodes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_insertNodetoGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inVertex, modelica_fnptr _inEqualFunc, modelica_metatype _inGraph)
{
modelica_metatype _outGraph = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inGraph;
{
modelica_metatype _node = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _restGraph = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp4 += 2;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_integer tmp12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_1);
tmpMeta8 = MMC_CDR(tmp4_1);
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
_node = tmpMeta9;
_rest = tmpMeta10;
_restGraph = tmpMeta8;
tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))), _node, _inNode) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, _node, _inNode);
tmp12 = mmc_unbox_integer(tmpMeta11);
if (1 != tmp12) goto goto_2;
tmpMeta14 = mmc_mk_cons(_inVertex, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta13 = mmc_mk_cons(_rest, mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil)));
_rest = omc_List_unionList(threadData, tmpMeta13);
_restGraph = omc_Graph_insertNodetoGraph(threadData, _inNode, _inVertex, ((modelica_fnptr) _inEqualFunc), _restGraph);
tmpMeta16 = mmc_mk_box2(0, _node, _rest);
tmpMeta15 = mmc_mk_cons(tmpMeta16, _restGraph);
tmpMeta1 = tmpMeta15;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_integer tmp22;
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta17 = MMC_CAR(tmp4_1);
tmpMeta18 = MMC_CDR(tmp4_1);
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
_node = tmpMeta19;
_rest = tmpMeta20;
_restGraph = tmpMeta18;
tmpMeta21 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))), _node, _inNode) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, _node, _inNode);
tmp22 = mmc_unbox_integer(tmpMeta21);
if (0 != tmp22) goto goto_2;
_restGraph = omc_Graph_insertNodetoGraph(threadData, _inNode, _inVertex, ((modelica_fnptr) _inEqualFunc), _restGraph);
tmpMeta24 = mmc_mk_box2(0, _node, _rest);
tmpMeta23 = mmc_mk_cons(tmpMeta24, _restGraph);
tmpMeta1 = tmpMeta23;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outGraph = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outGraph;
}
DLLExport
modelica_metatype omc_Graph_transposeGraph(threadData_t *threadData, modelica_metatype _intmpGraph, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc)
{
modelica_metatype _outGraph = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inGraph;
{
modelica_metatype _node = NULL;
modelica_metatype _nodeList = NULL;
modelica_metatype _restGraph = NULL;
modelica_metatype _tmpGraph = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp4 += 1;
tmpMeta1 = _intmpGraph;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
_node = tmpMeta8;
_nodeList = tmpMeta9;
_restGraph = tmpMeta7;
_tmpGraph = omc_List_fold2(threadData, _nodeList, boxvar_Graph_insertNodetoGraph, _node, ((modelica_fnptr) _inEqualFunc), _intmpGraph);
tmpMeta1 = omc_Graph_transposeGraph(threadData, _tmpGraph, _restGraph, ((modelica_fnptr) _inEqualFunc));
goto tmp3_done;
}
case 2: {
omc_Error_addSourceMessage(threadData, _OMC_LIT4, _OMC_LIT33, _OMC_LIT34);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outGraph = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outGraph;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_removeNodesFromGraph(threadData_t *threadData, modelica_metatype _inNodes, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc)
{
modelica_metatype _outGraph = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _inNodes;
tmp4_2 = _inGraph;
{
modelica_metatype _graph_node = NULL;
modelica_metatype _rest_graph = NULL;
modelica_metatype _rest_nodes = NULL;
modelica_metatype _node = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta1 = _inGraph;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmp4 += 2;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_2);
tmpMeta8 = MMC_CDR(tmp4_2);
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
_node = tmpMeta9;
_rest_graph = tmpMeta8;
tmpMeta12 = omc_List_deleteMemberOnTrue(threadData, _node, _inNodes, ((modelica_fnptr) _inEqualFunc), &tmpMeta10);
_rest_nodes = tmpMeta12;
if (optionNone(tmpMeta10)) goto goto_2;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
tmpMeta1 = omc_Graph_removeNodesFromGraph(threadData, _rest_nodes, _rest_graph, ((modelica_fnptr) _inEqualFunc));
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta13 = MMC_CAR(tmp4_2);
tmpMeta14 = MMC_CDR(tmp4_2);
_graph_node = tmpMeta13;
_rest_graph = tmpMeta14;
_rest_graph = omc_Graph_removeNodesFromGraph(threadData, _inNodes, _rest_graph, ((modelica_fnptr) _inEqualFunc));
tmpMeta15 = mmc_mk_cons(_graph_node, _rest_graph);
tmpMeta1 = tmpMeta15;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 4) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outGraph = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outGraph;
}
PROTECTED_FUNCTION_STATIC modelica_integer omc_Graph_findIndexofNodeInGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc, modelica_integer _inIndex)
{
modelica_integer _outIndex;
modelica_integer tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inGraph;
{
modelica_metatype _node = NULL;
modelica_metatype _rest_graph = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_integer tmp10;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
_node = tmpMeta8;
tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))), _inNode, _node) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, _inNode, _node);
tmp10 = mmc_unbox_integer(tmpMeta9);
if (1 != tmp10) goto goto_2;
tmp1 = _inIndex;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta11 = MMC_CAR(tmp4_1);
tmpMeta12 = MMC_CDR(tmp4_1);
_rest_graph = tmpMeta12;
tmp1 = omc_Graph_findIndexofNodeInGraph(threadData, _inNode, _rest_graph, ((modelica_fnptr) _inEqualFunc), ((modelica_integer) 1) + _inIndex);
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outIndex = tmp1;
_return: OMC_LABEL_UNUSED
return _outIndex;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_findIndexofNodeInGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc, modelica_metatype _inIndex)
{
modelica_integer tmp1;
modelica_integer _outIndex;
modelica_metatype out_outIndex;
tmp1 = mmc_unbox_integer(_inIndex);
_outIndex = omc_Graph_findIndexofNodeInGraph(threadData, _inNode, _inGraph, _inEqualFunc, tmp1);
out_outIndex = mmc_mk_icon(_outIndex);
return out_outIndex;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_findNodeInGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc)
{
modelica_metatype _outNode = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inGraph;
{
modelica_metatype _node = NULL;
modelica_metatype _graph_node = NULL;
modelica_metatype _rest_graph = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_integer tmp10;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
_graph_node = tmpMeta6;
_node = tmpMeta8;
tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))), _inNode, _node) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, _inNode, _node);
tmp10 = mmc_unbox_integer(tmpMeta9);
if (1 != tmp10) goto goto_2;
tmpMeta1 = _graph_node;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta11 = MMC_CAR(tmp4_1);
tmpMeta12 = MMC_CDR(tmp4_1);
_rest_graph = tmpMeta12;
tmpMeta1 = omc_Graph_findNodeInGraph(threadData, _inNode, _rest_graph, ((modelica_fnptr) _inEqualFunc));
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outNode = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outNode;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_findCycleForNode2(threadData_t *threadData, modelica_metatype _inNodes, modelica_metatype _inGraph, modelica_metatype _inVisitedNodes, modelica_fnptr _inEqualFunc)
{
modelica_metatype _outCycle = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inNodes;
{
modelica_metatype _node = NULL;
modelica_metatype _rest_nodes = NULL;
modelica_metatype _cycle = NULL;
modelica_metatype _graph_node = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_node = tmpMeta6;
_graph_node = omc_Graph_findNodeInGraph(threadData, _node, _inGraph, ((modelica_fnptr) _inEqualFunc));
tmpMeta8 = omc_Graph_findCycleForNode(threadData, _graph_node, _inGraph, _inVisitedNodes, ((modelica_fnptr) _inEqualFunc));
if (optionNone(tmpMeta8)) goto goto_2;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
_cycle = tmpMeta9;
tmpMeta1 = _cycle;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta10 = MMC_CAR(tmp4_1);
tmpMeta11 = MMC_CDR(tmp4_1);
_rest_nodes = tmpMeta11;
tmpMeta1 = omc_Graph_findCycleForNode2(threadData, _rest_nodes, _inGraph, _inVisitedNodes, ((modelica_fnptr) _inEqualFunc));
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outCycle = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outCycle;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_findCycleForNode(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inGraph, modelica_metatype _inVisitedNodes, modelica_fnptr _inEqualFunc)
{
modelica_metatype _outCycle = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _inNode;
tmp4_2 = _inVisitedNodes;
{
modelica_metatype _node = NULL;
modelica_metatype _start_node = NULL;
modelica_metatype _edges = NULL;
modelica_metatype _visited_nodes = NULL;
modelica_metatype _cycle = NULL;
modelica_boolean _is_start_node;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_boolean tmp9;
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_2);
tmpMeta7 = MMC_CDR(tmp4_2);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
_node = tmpMeta8;
tmp9 = omc_List_isMemberOnTrue(threadData, _node, _inVisitedNodes, ((modelica_fnptr) _inEqualFunc));
if (1 != tmp9) goto goto_2;
_start_node = omc_List_last(threadData, _inVisitedNodes);
_is_start_node = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 2))), _node, _start_node) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqualFunc), 1)))) (threadData, _node, _start_node));
tmpMeta1 = (_is_start_node?mmc_mk_some(_inVisitedNodes):mmc_mk_none());
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_node = tmpMeta10;
_edges = tmpMeta11;
tmpMeta12 = mmc_mk_cons(_node, _inVisitedNodes);
_visited_nodes = tmpMeta12;
_cycle = omc_Graph_findCycleForNode2(threadData, _edges, _inGraph, _visited_nodes, ((modelica_fnptr) _inEqualFunc));
tmpMeta1 = mmc_mk_some(_cycle);
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outCycle = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outCycle;
}
DLLExport
modelica_metatype omc_Graph_findCycles2(threadData_t *threadData, modelica_metatype _inNodes, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc)
{
modelica_metatype _outCycles = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inNodes;
{
modelica_metatype _node = NULL;
modelica_metatype _rest_nodes = NULL;
modelica_metatype _cycle = NULL;
modelica_metatype _rest_cycles = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp4 += 2;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_1);
tmpMeta8 = MMC_CDR(tmp4_1);
_node = tmpMeta7;
_rest_nodes = tmpMeta8;
tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta10 = omc_Graph_findCycleForNode(threadData, _node, _inGraph, tmpMeta9, ((modelica_fnptr) _inEqualFunc));
if (optionNone(tmpMeta10)) goto goto_2;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
_cycle = tmpMeta11;
_rest_nodes = omc_Graph_removeNodesFromGraph(threadData, _cycle, _rest_nodes, ((modelica_fnptr) _inEqualFunc));
_rest_cycles = omc_Graph_findCycles2(threadData, _rest_nodes, _inGraph, ((modelica_fnptr) _inEqualFunc));
tmpMeta12 = mmc_mk_cons(_cycle, _rest_cycles);
tmpMeta1 = tmpMeta12;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta13 = MMC_CAR(tmp4_1);
tmpMeta14 = MMC_CDR(tmp4_1);
_rest_nodes = tmpMeta14;
tmpMeta1 = omc_Graph_findCycles2(threadData, _rest_nodes, _inGraph, ((modelica_fnptr) _inEqualFunc));
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outCycles = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outCycles;
}
DLLExport
modelica_metatype omc_Graph_findCycles(threadData_t *threadData, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc)
{
modelica_metatype _outCycles = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outCycles = omc_Graph_findCycles2(threadData, _inGraph, _inGraph, ((modelica_fnptr) _inEqualFunc));
_return: OMC_LABEL_UNUSED
return _outCycles;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_removeEdge(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inRemovedNode, modelica_fnptr _inEqualFunc)
{
modelica_metatype _outNode = NULL;
modelica_metatype _node = NULL;
modelica_metatype _edges = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inNode;
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
_node = tmpMeta2;
_edges = tmpMeta3;
_edges = omc_List_deleteMemberOnTrue(threadData, _inRemovedNode, _edges, ((modelica_fnptr) _inEqualFunc), NULL);
tmpMeta4 = mmc_mk_box2(0, _node, _edges);
_outNode = tmpMeta4;
_return: OMC_LABEL_UNUSED
return _outNode;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Graph_hasOutgoingEdges(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_boolean _outHasOutEdges;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inNode;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (!listEmpty(tmpMeta6)) goto tmp3_end;
tmp1 = 0;
goto tmp3_done;
}
case 1: {
tmp1 = 1;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
goto_2:;
MMC_THROW_INTERNAL();
goto tmp3_done;
tmp3_done:;
}
}
_outHasOutEdges = tmp1;
_return: OMC_LABEL_UNUSED
return _outHasOutEdges;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Graph_hasOutgoingEdges(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_boolean _outHasOutEdges;
modelica_metatype out_outHasOutEdges;
_outHasOutEdges = omc_Graph_hasOutgoingEdges(threadData, _inNode);
out_outHasOutEdges = mmc_mk_icon(_outHasOutEdges);
return out_outHasOutEdges;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_topologicalSort2(threadData_t *threadData, modelica_metatype _inStartNodes, modelica_metatype _inRestNodes, modelica_metatype _inAccumNodes, modelica_fnptr _inEqualFunc, modelica_metatype *out_outRemainingGraph)
{
modelica_metatype _outNodes = NULL;
modelica_metatype _outRemainingGraph = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inStartNodes;
tmp4_2 = _inRestNodes;
{
modelica_metatype _node1 = NULL;
modelica_metatype _rest_start = NULL;
modelica_metatype _rest_start_ = NULL;
modelica_metatype _rest_rest = NULL;
modelica_metatype _new_start = NULL;
modelica_metatype _result = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta[0+0] = listReverse(_inAccumNodes);
tmpMeta[0+1] = _inRestNodes;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (!listEmpty(tmp4_2)) goto tmp3_end;
_rest_start = tmp4_1;
_result = _inAccumNodes;
{
modelica_metatype _n;
for (tmpMeta6 = _rest_start; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
{
_n = MMC_CAR(tmpMeta6);
tmpMeta7 = _n;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
if (!listEmpty(tmpMeta9)) goto goto_2;
_node1 = tmpMeta8;
tmpMeta10 = mmc_mk_cons(_node1, _result);
_result = tmpMeta10;
}
}
_result = listReverse(_result);
tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta[0+0] = _result;
tmpMeta[0+1] = tmpMeta12;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta13 = MMC_CAR(tmp4_1);
tmpMeta14 = MMC_CDR(tmp4_1);
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
if (!listEmpty(tmpMeta16)) goto tmp3_end;
_node1 = tmpMeta15;
_rest_start = tmpMeta14;
_rest_rest = tmp4_2;
_rest_rest = omc_List_map2(threadData, _rest_rest, boxvar_Graph_removeEdge, _node1, ((modelica_fnptr) _inEqualFunc));
_rest_rest = omc_List_splitOnTrue(threadData, _rest_rest, boxvar_Graph_hasOutgoingEdges ,&_new_start);
_rest_start_ = listAppend(_rest_start, _new_start);
tmpMeta17 = mmc_mk_cons(_node1, _inAccumNodes);
_inStartNodes = _rest_start_;
_inRestNodes = _rest_rest;
_inAccumNodes = tmpMeta17;
goto _tailrecursive;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
goto_2:;
MMC_THROW_INTERNAL();
goto tmp3_done;
tmp3_done:;
}
}
_outNodes = tmpMeta[0+0];
_outRemainingGraph = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outRemainingGraph) { *out_outRemainingGraph = _outRemainingGraph; }
return _outNodes;
}
DLLExport
modelica_metatype omc_Graph_topologicalSort(threadData_t *threadData, modelica_metatype _inGraph, modelica_fnptr _inEqualFunc, modelica_metatype *out_outRemainingGraph)
{
modelica_metatype _outNodes = NULL;
modelica_metatype _outRemainingGraph = NULL;
modelica_metatype _start_nodes = NULL;
modelica_metatype _rest_nodes = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_rest_nodes = omc_List_splitOnTrue(threadData, _inGraph, boxvar_Graph_hasOutgoingEdges ,&_start_nodes);
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outNodes = omc_Graph_topologicalSort2(threadData, _start_nodes, _rest_nodes, tmpMeta1, ((modelica_fnptr) _inEqualFunc) ,&_outRemainingGraph);
_return: OMC_LABEL_UNUSED
if (out_outRemainingGraph) { *out_outRemainingGraph = _outRemainingGraph; }
return _outNodes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Graph_emptyGraphHelper(threadData_t *threadData, modelica_metatype _nt)
{
modelica_metatype _out = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta2 = mmc_mk_box2(0, _nt, tmpMeta1);
_out = tmpMeta2;
_return: OMC_LABEL_UNUSED
return _out;
}
DLLExport
modelica_metatype omc_Graph_emptyGraph(threadData_t *threadData, modelica_metatype _inNodes)
{
modelica_metatype _outGraph = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outGraph = omc_List_map(threadData, _inNodes, boxvar_Graph_emptyGraphHelper);
_return: OMC_LABEL_UNUSED
return _outGraph;
}
DLLExport
modelica_metatype omc_Graph_buildGraph(threadData_t *threadData, modelica_metatype _inNodes, modelica_fnptr _inEdgeFunc, modelica_metatype _inEdgeArg)
{
modelica_metatype _outGraph = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outGraph = omc_List_zip(threadData, _inNodes, omc_List_map1(threadData, _inNodes, ((modelica_fnptr) _inEdgeFunc), _inEdgeArg));
_return: OMC_LABEL_UNUSED
return _outGraph;
}
