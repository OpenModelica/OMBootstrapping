#include "omc_simulation_settings.h"
#include "GraphML.h"
#define _OMC_LIT0_data " | "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,3,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "node: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,6,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " desc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,7,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\n	atts: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,8,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "nodeCount: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,11,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "graphCount: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,12,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "g"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "gi1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,3,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "gi2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,3,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,10,3) {&GraphML_GraphInfo_GRAPHINFO__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT8,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#include "util/modelica.h"

#include "GraphML_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_GraphML_printNode(threadData_t *threadData, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_printNode,2,0) {(void*) boxptr_GraphML_printNode,0}};
#define boxvar_GraphML_printNode MMC_REFSTRUCTLIT(boxvar_lit_GraphML_printNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_GraphML_convertToGraphInfoArr(threadData_t *threadData, modelica_metatype _iGraphInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_convertToGraphInfoArr,2,0) {(void*) boxptr_GraphML_convertToGraphInfoArr,0}};
#define boxvar_GraphML_convertToGraphInfoArr MMC_REFSTRUCTLIT(boxvar_lit_GraphML_convertToGraphInfoArr)
PROTECTED_FUNCTION_STATIC modelica_integer omc_GraphML_compareAttributeTarget0(threadData_t *threadData, modelica_metatype _iTarget);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_GraphML_compareAttributeTarget0(threadData_t *threadData, modelica_metatype _iTarget);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_compareAttributeTarget0,2,0) {(void*) boxptr_GraphML_compareAttributeTarget0,0}};
#define boxvar_GraphML_compareAttributeTarget0 MMC_REFSTRUCTLIT(boxvar_lit_GraphML_compareAttributeTarget0)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_GraphML_compareAttributeTargets(threadData_t *threadData, modelica_metatype _iTarget1, modelica_metatype _iTarget2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_GraphML_compareAttributeTargets(threadData_t *threadData, modelica_metatype _iTarget1, modelica_metatype _iTarget2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_compareAttributeTargets,2,0) {(void*) boxptr_GraphML_compareAttributeTargets,0}};
#define boxvar_GraphML_compareAttributeTargets MMC_REFSTRUCTLIT(boxvar_lit_GraphML_compareAttributeTargets)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_GraphML_getAttributeByNameAndTargetTail(threadData_t *threadData, modelica_metatype _iList, modelica_string _iAttributeName, modelica_metatype _iAttributeTarget);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GraphML_getAttributeByNameAndTargetTail,2,0) {(void*) boxptr_GraphML_getAttributeByNameAndTargetTail,0}};
#define boxvar_GraphML_getAttributeByNameAndTargetTail MMC_REFSTRUCTLIT(boxvar_lit_GraphML_getAttributeByNameAndTargetTail)

PROTECTED_FUNCTION_STATIC void omc_GraphML_printNode(threadData_t *threadData, modelica_metatype _node)
{
  modelica_string _id = NULL;
  modelica_string _atts = NULL;
  modelica_metatype _optDesc = NULL;
  modelica_metatype _attValues = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _id has no default value.
  // _atts has no default value.
  // _optDesc has no default value.
  // _attValues has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _node;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,7) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 8);
  _id = tmpMeta2;
  _optDesc = tmpMeta3;
  _attValues = tmpMeta4;

  omc_string_store(&(_atts), stringDelimitList(omc_List_map(threadData, _attValues, boxvar_Util_tuple22), _OMC_LIT0));

  tmp5 = stringAppend(_OMC_LIT1,_id);
  tmp6 = stringAppend(tmp5,_OMC_LIT2);
  tmp7 = stringAppend(tmp6,omc_Util_getOption(threadData, _optDesc));
  tmp8 = stringAppend(tmp7,_OMC_LIT3);
  tmp9 = stringAppend(tmp8,_atts);
  tmp10 = stringAppend(tmp9,_OMC_LIT4);
  fputs(omc_string_data(tmp10),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_GraphML_printGraphInfo(threadData_t *threadData, modelica_metatype _iGraphInfo)
{
  modelica_metatype _graphs = NULL;
  modelica_integer _graphCount;
  modelica_metatype _nodes = NULL;
  modelica_integer _nodeCount;
  modelica_metatype _attributes = NULL;
  modelica_string _graphNodeKey = NULL;
  modelica_string _graphEdgeKey = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _graphs has no default value.
  // _graphCount has no default value.
  // _nodes has no default value.
  // _nodeCount has no default value.
  // _attributes has no default value.
  // _graphNodeKey has no default value.
  // _graphEdgeKey has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmpMeta10 = OMC_BOX_FIELD(tmpMeta1, 10);
  _graphs = tmpMeta2;
  _graphCount = tmp4  /* pattern as ty=Integer */;
  _nodes = tmpMeta5;
  _nodeCount = tmp7  /* pattern as ty=Integer */;
  _attributes = tmpMeta8;
  _graphNodeKey = tmpMeta9;
  _graphEdgeKey = tmpMeta10;

  omc_List_map__0(threadData, _nodes, boxvar_GraphML_printNode);

  tmp11 = stringAppend(_OMC_LIT5,intString(_nodeCount));
  tmp12 = stringAppend(tmp11,_OMC_LIT4);
  fputs(omc_string_data(tmp12),stdout);

  tmp13 = stringAppend(_OMC_LIT6,intString(_graphCount));
  tmp14 = stringAppend(tmp13,_OMC_LIT4);
  fputs(omc_string_data(tmp14),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_GraphML_convertToGraphInfoArr(threadData_t *threadData, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _graphs = NULL;
  modelica_metatype _graphsArr = NULL;
  modelica_integer _graphCount;
  modelica_metatype _nodes = NULL;
  modelica_metatype _nodesArr = NULL;
  modelica_integer _nodeCount;
  modelica_metatype _edges = NULL;
  modelica_integer _edgeCount;
  modelica_metatype _attributes = NULL;
  modelica_metatype _attributesArr = NULL;
  modelica_string _graphNodeKey = NULL;
  modelica_string _graphEdgeKey = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _graphs has no default value.
  // _graphsArr has no default value.
  // _graphCount has no default value.
  // _nodes has no default value.
  // _nodesArr has no default value.
  // _nodeCount has no default value.
  // _edges has no default value.
  // _edgeCount has no default value.
  // _attributes has no default value.
  // _attributesArr has no default value.
  // _graphNodeKey has no default value.
  // _graphEdgeKey has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 6);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmp10 = omc_unbox_integer(tmpMeta9);
  tmpMeta11 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmpMeta12 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmpMeta13 = OMC_BOX_FIELD(tmpMeta1, 10);
  _graphs = tmpMeta2;
  _graphCount = tmp4  /* pattern as ty=Integer */;
  _nodes = tmpMeta5;
  _nodeCount = tmp7  /* pattern as ty=Integer */;
  _edges = tmpMeta8;
  _edgeCount = tmp10  /* pattern as ty=Integer */;
  _attributes = tmpMeta11;
  _graphNodeKey = tmpMeta12;
  _graphEdgeKey = tmpMeta13;

  _graphsArr = listArray(_graphs);

  _nodesArr = listArray(_nodes);

  _attributesArr = omc_List_listArrayReverse(threadData, _attributes);

  tmpMeta14 = omc_mk_box7(4, &GraphML_GraphInfo_GRAPHINFOARR__desc, _graphsArr, _nodesArr, _edges, _attributesArr, _graphNodeKey, _graphEdgeKey);
  _oGraphInfo = tmpMeta14;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oGraphInfo;
  return omc_ret_;
}

DLLModelDirection
void omc_GraphML_dumpGraph(threadData_t *threadData, modelica_metatype _iGraphInfo, modelica_string _iFileName)
{
  modelica_metatype _iGraphInfoArr = NULL;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iGraphInfoArr has no default value.
  _iGraphInfoArr = omc_GraphML_convertToGraphInfoArr(threadData, _iGraphInfo);

  omc_Tpl_tplNoret2(threadData, boxvar_GraphMLDumpTpl_dumpGraphInfo, _iGraphInfoArr, _iFileName);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_GraphML_compareAttributeTarget0(threadData_t *threadData, modelica_metatype _iTarget)
{
  modelica_integer _oCodec;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCodec has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTarget;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _oCodec = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oCodec;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_GraphML_compareAttributeTarget0(threadData_t *threadData, modelica_metatype _iTarget)
{
  modelica_integer _oCodec;
  modelica_metatype out_oCodec;
  _oCodec = omc_GraphML_compareAttributeTarget0(threadData, _iTarget);
  out_oCodec = omc_mk_icon(_oCodec);
  return out_oCodec;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_GraphML_compareAttributeTargets(threadData_t *threadData, modelica_metatype _iTarget1, modelica_metatype _iTarget2)
{
  modelica_boolean _oEqual;
  modelica_integer _tarInt1;
  modelica_integer _tarInt2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oEqual has no default value.
  // _tarInt1 has no default value.
  // _tarInt2 has no default value.
  _tarInt1 = omc_GraphML_compareAttributeTarget0(threadData, _iTarget1);

  _tarInt2 = omc_GraphML_compareAttributeTarget0(threadData, _iTarget2);

  _oEqual = (_tarInt1 == _tarInt2);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oEqual;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_GraphML_compareAttributeTargets(threadData_t *threadData, modelica_metatype _iTarget1, modelica_metatype _iTarget2)
{
  modelica_boolean _oEqual;
  modelica_metatype out_oEqual;
  _oEqual = omc_GraphML_compareAttributeTargets(threadData, _iTarget1, _iTarget2);
  out_oEqual = omc_mk_icon(_oEqual);
  return out_oEqual;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_GraphML_getAttributeByNameAndTargetTail(threadData_t *threadData, modelica_metatype _iList, modelica_string _iAttributeName, modelica_metatype _iAttributeTarget)
{
  modelica_metatype _oAttribute = NULL;
  modelica_metatype _rest = NULL;
  modelica_integer _attIdx;
  modelica_string _name = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _attTarget = NULL;
  modelica_metatype _tmpAttribute = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAttribute has no default value.
  // _rest has no default value.
  // _attIdx has no default value.
  // _name has no default value.
  // _head has no default value.
  // _attTarget has no default value.
  // _tmpAttribute has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iList;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 2);
          tmp9 = omc_unbox_integer(tmpMeta8);
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta6, 4);
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta6, 6);
          _head = tmpMeta6;
          _attIdx = tmp9  /* pattern as ty=Integer */;
          _name = tmpMeta10;
          _attTarget = tmpMeta11;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((stringEqual(_name, _iAttributeName)) && omc_GraphML_compareAttributeTargets(threadData, _iAttributeTarget, _attTarget))) goto tmp3_end;
          tmpMeta12 = omc_mk_box2(0, _head, omc_mk_integer(_attIdx));
          tmpMeta1 = mmc_mk_some(tmpMeta12);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          _head = tmpMeta13;
          _rest = tmpMeta14;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _iList = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _oAttribute = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oAttribute;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_GraphML_getAttributeByNameAndTarget(threadData_t *threadData, modelica_string _iAttributeName, modelica_metatype _iAttributeTarget, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oAttribute = NULL;
  modelica_metatype _attributes = NULL;
  modelica_metatype _tmpRes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAttribute has no default value.
  // _attributes has no default value.
  // _tmpRes has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iGraphInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,9) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 8);
          
          _attributes = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_GraphML_getAttributeByNameAndTargetTail(threadData, _attributes, _iAttributeName, _iAttributeTarget);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,9) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 8);
          
          _attributes = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_GraphML_getAttributeByNameAndTargetTail(threadData, _attributes, _iAttributeName, _iAttributeTarget);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _oAttribute = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oAttribute;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_GraphML_getMainGraph(threadData_t *threadData, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraph = NULL;
  modelica_metatype _graphs = NULL;
  modelica_metatype _firstGraph = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraph has no default value.
  // _graphs has no default value.
  // _firstGraph has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iGraphInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,9) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp7 = omc_unbox_integer(tmpMeta6);
          if (0 != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,9) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _graphs = tmpMeta8;
          /* Pattern matching succeeded */
          _firstGraph = listHead(_graphs);
          tmpMeta9 = omc_mk_box2(0, omc_mk_integer(((modelica_integer) 1)), _firstGraph);
          tmpMeta1 = mmc_mk_some(tmpMeta9);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _oGraph = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_GraphML_addGraphAttributeValue(threadData_t *threadData, modelica_metatype _iValue, modelica_integer _iGraphIdx, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _graphs = NULL;
  modelica_integer _graphCount;
  modelica_metatype _nodes = NULL;
  modelica_integer _nodeCount;
  modelica_metatype _edges = NULL;
  modelica_integer _edgeCount;
  modelica_metatype _attributes = NULL;
  modelica_string _graphNodeKey = NULL;
  modelica_string _graphEdgeKey = NULL;
  modelica_metatype _iGraph = NULL;
  modelica_string _gid = NULL;
  modelica_boolean _directed;
  modelica_metatype _nodeIdc = NULL;
  modelica_metatype _attValues = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _graphs has no default value.
  // _graphCount has no default value.
  // _nodes has no default value.
  // _nodeCount has no default value.
  // _edges has no default value.
  // _edgeCount has no default value.
  // _attributes has no default value.
  // _graphNodeKey has no default value.
  // _graphEdgeKey has no default value.
  // _iGraph has no default value.
  // _gid has no default value.
  // _directed has no default value.
  // _nodeIdc has no default value.
  // _attValues has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 6);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmp10 = omc_unbox_integer(tmpMeta9);
  tmpMeta11 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmpMeta12 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmpMeta13 = OMC_BOX_FIELD(tmpMeta1, 10);
  _graphs = tmpMeta2;
  _graphCount = tmp4  /* pattern as ty=Integer */;
  _nodes = tmpMeta5;
  _nodeCount = tmp7  /* pattern as ty=Integer */;
  _edges = tmpMeta8;
  _edgeCount = tmp10  /* pattern as ty=Integer */;
  _attributes = tmpMeta11;
  _graphNodeKey = tmpMeta12;
  _graphEdgeKey = tmpMeta13;

  _iGraph = listGet(_graphs, ((modelica_integer) 1) + (_graphCount - _iGraphIdx));

  /* Pattern-matching assignment */
  tmpMeta14 = _iGraph;
  tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 2);
  tmpMeta16 = OMC_BOX_FIELD(tmpMeta14, 3);
  tmp17 = omc_unbox_integer(tmpMeta16);
  tmpMeta18 = OMC_BOX_FIELD(tmpMeta14, 4);
  tmpMeta19 = OMC_BOX_FIELD(tmpMeta14, 5);
  _gid = tmpMeta15;
  _directed = tmp17  /* pattern as ty=Boolean */;
  _nodeIdc = tmpMeta18;
  _attValues = tmpMeta19;

  tmpMeta20 = mmc_mk_cons(_iValue, _attValues);
  _attValues = tmpMeta20;

  tmpMeta21 = omc_mk_box5(3, &GraphML_Graph_GRAPH__desc, _gid, omc_mk_boolean(_directed), _nodeIdc, _attValues);
  _iGraph = tmpMeta21;

  _graphs = omc_List_set(threadData, _graphs, ((modelica_integer) 1) + (_graphCount - _iGraphIdx), _iGraph);

  tmpMeta22 = omc_mk_box10(3, &GraphML_GraphInfo_GRAPHINFO__desc, _graphs, omc_mk_integer(_graphCount), _nodes, omc_mk_integer(_nodeCount), _edges, omc_mk_integer(_edgeCount), _attributes, _graphNodeKey, _graphEdgeKey);
  _oGraphInfo = tmpMeta22;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oGraphInfo;
  return omc_ret_;
}
modelica_metatype boxptr_GraphML_addGraphAttributeValue(threadData_t *threadData, modelica_metatype _iValue, modelica_metatype _iGraphIdx, modelica_metatype _iGraphInfo)
{
  modelica_integer tmp1;
  modelica_metatype _oGraphInfo = NULL;
  tmp1 = omc_unbox_integer(_iGraphIdx);
  _oGraphInfo = omc_GraphML_addGraphAttributeValue(threadData, _iValue, tmp1, _iGraphInfo);
  /* skip box _oGraphInfo; GraphML.GraphInfo */
  return _oGraphInfo;
}

DLLModelDirection
modelica_metatype omc_GraphML_addAttribute(threadData_t *threadData, modelica_string _defaultValue, modelica_string _name, modelica_metatype _attType, modelica_metatype _attTarget, modelica_metatype _iGraphInfo, modelica_metatype *out_oAttribute)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _oAttribute = NULL;
  modelica_metatype _tmpAttribute = NULL;
  modelica_integer _attIdx;
  modelica_metatype _graphs = NULL;
  modelica_integer _graphCount;
  modelica_metatype _nodes = NULL;
  modelica_integer _nodeCount;
  modelica_metatype _edges = NULL;
  modelica_integer _edgeCount;
  modelica_metatype _attributes = NULL;
  modelica_string _graphNodeKey = NULL;
  modelica_string _graphEdgeKey = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _oAttribute has no default value.
  // _tmpAttribute has no default value.
  // _attIdx has no default value.
  // _graphs has no default value.
  // _graphCount has no default value.
  // _nodes has no default value.
  // _nodeCount has no default value.
  // _edges has no default value.
  // _edgeCount has no default value.
  // _attributes has no default value.
  // _graphNodeKey has no default value.
  // _graphEdgeKey has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 6);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmp10 = omc_unbox_integer(tmpMeta9);
  tmpMeta11 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmpMeta12 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmpMeta13 = OMC_BOX_FIELD(tmpMeta1, 10);
  _graphs = tmpMeta2;
  _graphCount = tmp4  /* pattern as ty=Integer */;
  _nodes = tmpMeta5;
  _nodeCount = tmp7  /* pattern as ty=Integer */;
  _edges = tmpMeta8;
  _edgeCount = tmp10  /* pattern as ty=Integer */;
  _attributes = tmpMeta11;
  _graphNodeKey = tmpMeta12;
  _graphEdgeKey = tmpMeta13;

  _attIdx = ((modelica_integer) 1) + listLength(_attributes);

  tmpMeta14 = omc_mk_box6(3, &GraphML_Attribute_ATTRIBUTE__desc, omc_mk_integer(_attIdx), _defaultValue, _name, _attType, _attTarget);
  _tmpAttribute = tmpMeta14;

  tmpMeta15 = mmc_mk_cons(_tmpAttribute, _attributes);
  _attributes = tmpMeta15;

  tmpMeta16 = omc_mk_box10(3, &GraphML_GraphInfo_GRAPHINFO__desc, _graphs, omc_mk_integer(_graphCount), _nodes, omc_mk_integer(_nodeCount), _edges, omc_mk_integer(_edgeCount), _attributes, _graphNodeKey, _graphEdgeKey);
  _oGraphInfo = tmpMeta16;

  tmpMeta17 = omc_mk_box2(0, _tmpAttribute, omc_mk_integer(_attIdx));
  _oAttribute = tmpMeta17;
  _return: OMC_LABEL_UNUSED
  if (out_oAttribute) { *out_oAttribute = _oAttribute; }
  omc_ret_ = _oGraphInfo;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_GraphML_addEdge(threadData_t *threadData, modelica_string _id, modelica_string _target, modelica_string _source, modelica_string _color, modelica_metatype _lineType, modelica_real _lineWidth, modelica_boolean _smooth, modelica_metatype _labels, modelica_metatype _arrows, modelica_metatype _attValues, modelica_metatype _iGraphInfo, modelica_metatype *out_oEdge)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _oEdge = NULL;
  modelica_metatype _tmpEdge = NULL;
  modelica_metatype _graphs = NULL;
  modelica_integer _graphCount;
  modelica_metatype _nodes = NULL;
  modelica_integer _nodeCount;
  modelica_metatype _edges = NULL;
  modelica_integer _edgeCount;
  modelica_metatype _attributes = NULL;
  modelica_string _graphNodeKey = NULL;
  modelica_string _graphEdgeKey = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _oEdge has no default value.
  // _tmpEdge has no default value.
  // _graphs has no default value.
  // _graphCount has no default value.
  // _nodes has no default value.
  // _nodeCount has no default value.
  // _edges has no default value.
  // _edgeCount has no default value.
  // _attributes has no default value.
  // _graphNodeKey has no default value.
  // _graphEdgeKey has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 6);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmp10 = omc_unbox_integer(tmpMeta9);
  tmpMeta11 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmpMeta12 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmpMeta13 = OMC_BOX_FIELD(tmpMeta1, 10);
  _graphs = tmpMeta2;
  _graphCount = tmp4  /* pattern as ty=Integer */;
  _nodes = tmpMeta5;
  _nodeCount = tmp7  /* pattern as ty=Integer */;
  _edges = tmpMeta8;
  _edgeCount = tmp10  /* pattern as ty=Integer */;
  _attributes = tmpMeta11;
  _graphNodeKey = tmpMeta12;
  _graphEdgeKey = tmpMeta13;

  _edgeCount = ((modelica_integer) 1) + _edgeCount;

  tmpMeta14 = omc_mk_box11(3, &GraphML_Edge_EDGE__desc, _id, _target, _source, _color, _lineType, omc_mk_real(_lineWidth), omc_mk_boolean(_smooth), _labels, _arrows, _attValues);
  _tmpEdge = tmpMeta14;

  tmpMeta15 = mmc_mk_cons(_tmpEdge, _edges);
  _edges = tmpMeta15;

  tmpMeta16 = omc_mk_box10(3, &GraphML_GraphInfo_GRAPHINFO__desc, _graphs, omc_mk_integer(_graphCount), _nodes, omc_mk_integer(_nodeCount), _edges, omc_mk_integer(_edgeCount), _attributes, _graphNodeKey, _graphEdgeKey);
  _oGraphInfo = tmpMeta16;

  tmpMeta17 = omc_mk_box2(0, _tmpEdge, omc_mk_integer(_edgeCount));
  _oEdge = tmpMeta17;
  _return: OMC_LABEL_UNUSED
  if (out_oEdge) { *out_oEdge = _oEdge; }
  omc_ret_ = _oGraphInfo;
  return omc_ret_;
}
modelica_metatype boxptr_GraphML_addEdge(threadData_t *threadData, modelica_metatype _id, modelica_metatype _target, modelica_metatype _source, modelica_metatype _color, modelica_metatype _lineType, modelica_metatype _lineWidth, modelica_metatype _smooth, modelica_metatype _labels, modelica_metatype _arrows, modelica_metatype _attValues, modelica_metatype _iGraphInfo, modelica_metatype *out_oEdge)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_metatype _oGraphInfo = NULL;
  tmp1 = omc_unbox_real(_lineWidth);
  tmp2 = omc_unbox_integer(_smooth);
  _oGraphInfo = omc_GraphML_addEdge(threadData, _id, _target, _source, _color, _lineType, tmp1, tmp2, _labels, _arrows, _attValues, _iGraphInfo, out_oEdge);
  /* skip box _oGraphInfo; GraphML.GraphInfo */
  /* skip box _oEdge; tuple<GraphML.Edge, #Integer> */
  return _oGraphInfo;
}

DLLModelDirection
modelica_metatype omc_GraphML_addGroupNode(threadData_t *threadData, modelica_string _id, modelica_integer _iGraphIdx, modelica_boolean _isFolded, modelica_string _iHeader, modelica_metatype _iGraphInfo, modelica_metatype *out_oNode, modelica_metatype *out_oGraph)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _oNode = NULL;
  modelica_metatype _oGraph = NULL;
  modelica_metatype _tmpGraphInfo = NULL;
  modelica_metatype _tmpNode = NULL;
  modelica_metatype _graphs = NULL;
  modelica_integer _graphCount;
  modelica_metatype _nodes = NULL;
  modelica_integer _nodeCount;
  modelica_metatype _edges = NULL;
  modelica_integer _edgeCount;
  modelica_metatype _attributes = NULL;
  modelica_string _graphNodeKey = NULL;
  modelica_string _graphEdgeKey = NULL;
  modelica_metatype _iGraph = NULL;
  modelica_metatype _newGraph = NULL;
  modelica_string _gid = NULL;
  modelica_boolean _directed;
  modelica_integer _newGraphIdx;
  modelica_metatype _nodeIdc = NULL;
  modelica_metatype _attValues = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_integer tmp23;
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_integer tmp29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_integer tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_integer tmp35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _oNode has no default value.
  // _oGraph has no default value.
  // _tmpGraphInfo has no default value.
  // _tmpNode has no default value.
  // _graphs has no default value.
  // _graphCount has no default value.
  // _nodes has no default value.
  // _nodeCount has no default value.
  // _edges has no default value.
  // _edgeCount has no default value.
  // _attributes has no default value.
  // _graphNodeKey has no default value.
  // _graphEdgeKey has no default value.
  // _iGraph has no default value.
  // _newGraph has no default value.
  // _gid has no default value.
  // _directed has no default value.
  // _newGraphIdx has no default value.
  // _nodeIdc has no default value.
  // _attValues has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 6);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmp10 = omc_unbox_integer(tmpMeta9);
  tmpMeta11 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmpMeta12 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmpMeta13 = OMC_BOX_FIELD(tmpMeta1, 10);
  _graphs = tmpMeta2;
  _graphCount = tmp4  /* pattern as ty=Integer */;
  _nodes = tmpMeta5;
  _nodeCount = tmp7  /* pattern as ty=Integer */;
  _edges = tmpMeta8;
  _edgeCount = tmp10  /* pattern as ty=Integer */;
  _attributes = tmpMeta11;
  _graphNodeKey = tmpMeta12;
  _graphEdgeKey = tmpMeta13;

  _iGraph = listGet(_graphs, ((modelica_integer) 1) + (_graphCount - _iGraphIdx));

  /* Pattern-matching assignment */
  tmpMeta14 = _iGraph;
  tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 2);
  tmpMeta16 = OMC_BOX_FIELD(tmpMeta14, 3);
  tmp17 = omc_unbox_integer(tmpMeta16);
  tmpMeta18 = OMC_BOX_FIELD(tmpMeta14, 4);
  tmpMeta19 = OMC_BOX_FIELD(tmpMeta14, 5);
  _gid = tmpMeta15;
  _directed = tmp17  /* pattern as ty=Boolean */;
  _nodeIdc = tmpMeta18;
  _attValues = tmpMeta19;

  /* Pattern-matching tuple assignment */
  tmp24 = stringAppend(_OMC_LIT7,_id);
  tmpMeta25 = omc_GraphML_addGraph(threadData, tmp24, _directed, _iGraphInfo, &tmpMeta20);
  _tmpGraphInfo = tmpMeta25;
  tmpMeta21 = OMC_BOX_FIELD(tmpMeta20, 1);
  tmpMeta22 = OMC_BOX_FIELD(tmpMeta20, 2);
  tmp23 = omc_unbox_integer(tmpMeta22);
  _newGraph = tmpMeta21;
  _newGraphIdx = tmp23  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta26 = _tmpGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta27 = OMC_BOX_FIELD(tmpMeta26, 2);
  tmpMeta28 = OMC_BOX_FIELD(tmpMeta26, 3);
  tmp29 = omc_unbox_integer(tmpMeta28);
  tmpMeta30 = OMC_BOX_FIELD(tmpMeta26, 4);
  tmpMeta31 = OMC_BOX_FIELD(tmpMeta26, 5);
  tmp32 = omc_unbox_integer(tmpMeta31);
  tmpMeta33 = OMC_BOX_FIELD(tmpMeta26, 6);
  tmpMeta34 = OMC_BOX_FIELD(tmpMeta26, 7);
  tmp35 = omc_unbox_integer(tmpMeta34);
  tmpMeta36 = OMC_BOX_FIELD(tmpMeta26, 8);
  tmpMeta37 = OMC_BOX_FIELD(tmpMeta26, 9);
  tmpMeta38 = OMC_BOX_FIELD(tmpMeta26, 10);
  _graphs = tmpMeta27;
  _graphCount = tmp29  /* pattern as ty=Integer */;
  _nodes = tmpMeta30;
  _nodeCount = tmp32  /* pattern as ty=Integer */;
  _edges = tmpMeta33;
  _edgeCount = tmp35  /* pattern as ty=Integer */;
  _attributes = tmpMeta36;
  _graphNodeKey = tmpMeta37;
  _graphEdgeKey = tmpMeta38;

  _nodeCount = ((modelica_integer) 1) + _nodeCount;

  tmpMeta39 = omc_mk_box5(4, &GraphML_Node_GROUPNODE__desc, _id, omc_mk_integer(_newGraphIdx), omc_mk_boolean(_isFolded), _iHeader);
  _tmpNode = tmpMeta39;

  tmpMeta40 = mmc_mk_cons(_tmpNode, _nodes);
  _nodes = tmpMeta40;

  tmpMeta41 = mmc_mk_cons(omc_mk_integer(_nodeCount), _nodeIdc);
  _nodeIdc = tmpMeta41;

  tmpMeta42 = omc_mk_box5(3, &GraphML_Graph_GRAPH__desc, _gid, omc_mk_boolean(_directed), _nodeIdc, _attValues);
  _iGraph = tmpMeta42;

  _graphs = omc_List_set(threadData, _graphs, ((modelica_integer) 1) + (_graphCount - _iGraphIdx), _iGraph);

  tmpMeta43 = omc_mk_box10(3, &GraphML_GraphInfo_GRAPHINFO__desc, _graphs, omc_mk_integer(_graphCount), _nodes, omc_mk_integer(_nodeCount), _edges, omc_mk_integer(_edgeCount), _attributes, _graphNodeKey, _graphEdgeKey);
  _oGraphInfo = tmpMeta43;

  tmpMeta44 = omc_mk_box2(0, _tmpNode, omc_mk_integer(_nodeCount));
  _oNode = tmpMeta44;

  tmpMeta45 = omc_mk_box2(0, _newGraph, omc_mk_integer(_newGraphIdx));
  _oGraph = tmpMeta45;
  _return: OMC_LABEL_UNUSED
  if (out_oNode) { *out_oNode = _oNode; }
  if (out_oGraph) { *out_oGraph = _oGraph; }
  omc_ret_ = _oGraphInfo;
  return omc_ret_;
}
modelica_metatype boxptr_GraphML_addGroupNode(threadData_t *threadData, modelica_metatype _id, modelica_metatype _iGraphIdx, modelica_metatype _isFolded, modelica_metatype _iHeader, modelica_metatype _iGraphInfo, modelica_metatype *out_oNode, modelica_metatype *out_oGraph)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oGraphInfo = NULL;
  tmp1 = omc_unbox_integer(_iGraphIdx);
  tmp2 = omc_unbox_integer(_isFolded);
  _oGraphInfo = omc_GraphML_addGroupNode(threadData, _id, tmp1, tmp2, _iHeader, _iGraphInfo, out_oNode, out_oGraph);
  /* skip box _oGraphInfo; GraphML.GraphInfo */
  /* skip box _oNode; tuple<GraphML.Node, #Integer> */
  /* skip box _oGraph; tuple<GraphML.Graph, #Integer> */
  return _oGraphInfo;
}

DLLModelDirection
modelica_metatype omc_GraphML_addNode(threadData_t *threadData, modelica_string _id, modelica_string _backgroundColor, modelica_real _borderWidth, modelica_metatype _nodeLabels, modelica_metatype _shapeType, modelica_metatype _optDesc, modelica_metatype _attValues, modelica_integer _iGraphIdx, modelica_metatype _iGraphInfo, modelica_metatype *out_oNode)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _oNode = NULL;
  modelica_metatype _tmpNode = NULL;
  modelica_metatype _graphs = NULL;
  modelica_integer _graphCount;
  modelica_metatype _nodes = NULL;
  modelica_integer _nodeCount;
  modelica_metatype _edges = NULL;
  modelica_integer _edgeCount;
  modelica_metatype _attributes = NULL;
  modelica_string _graphNodeKey = NULL;
  modelica_string _graphEdgeKey = NULL;
  modelica_metatype _iGraph = NULL;
  modelica_string _gid = NULL;
  modelica_boolean _directed;
  modelica_metatype _nodeIdc = NULL;
  modelica_metatype _gAttValues = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _oNode has no default value.
  // _tmpNode has no default value.
  // _graphs has no default value.
  // _graphCount has no default value.
  // _nodes has no default value.
  // _nodeCount has no default value.
  // _edges has no default value.
  // _edgeCount has no default value.
  // _attributes has no default value.
  // _graphNodeKey has no default value.
  // _graphEdgeKey has no default value.
  // _iGraph has no default value.
  // _gid has no default value.
  // _directed has no default value.
  // _nodeIdc has no default value.
  // _gAttValues has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 6);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmp10 = omc_unbox_integer(tmpMeta9);
  tmpMeta11 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmpMeta12 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmpMeta13 = OMC_BOX_FIELD(tmpMeta1, 10);
  _graphs = tmpMeta2;
  _graphCount = tmp4  /* pattern as ty=Integer */;
  _nodes = tmpMeta5;
  _nodeCount = tmp7  /* pattern as ty=Integer */;
  _edges = tmpMeta8;
  _edgeCount = tmp10  /* pattern as ty=Integer */;
  _attributes = tmpMeta11;
  _graphNodeKey = tmpMeta12;
  _graphEdgeKey = tmpMeta13;

  _iGraph = listGet(_graphs, ((modelica_integer) 1) + (_graphCount - _iGraphIdx));

  /* Pattern-matching assignment */
  tmpMeta14 = _iGraph;
  tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 2);
  tmpMeta16 = OMC_BOX_FIELD(tmpMeta14, 3);
  tmp17 = omc_unbox_integer(tmpMeta16);
  tmpMeta18 = OMC_BOX_FIELD(tmpMeta14, 4);
  tmpMeta19 = OMC_BOX_FIELD(tmpMeta14, 5);
  _gid = tmpMeta15;
  _directed = tmp17  /* pattern as ty=Boolean */;
  _nodeIdc = tmpMeta18;
  _gAttValues = tmpMeta19;

  _nodeCount = ((modelica_integer) 1) + _nodeCount;

  tmpMeta20 = omc_mk_box8(3, &GraphML_Node_NODE__desc, _id, _backgroundColor, omc_mk_real(_borderWidth), _nodeLabels, _shapeType, _optDesc, _attValues);
  _tmpNode = tmpMeta20;

  tmpMeta21 = mmc_mk_cons(_tmpNode, _nodes);
  _nodes = tmpMeta21;

  tmpMeta22 = mmc_mk_cons(omc_mk_integer(_nodeCount), _nodeIdc);
  _nodeIdc = tmpMeta22;

  tmpMeta23 = omc_mk_box5(3, &GraphML_Graph_GRAPH__desc, _gid, omc_mk_boolean(_directed), _nodeIdc, _gAttValues);
  _iGraph = tmpMeta23;

  _graphs = omc_List_set(threadData, _graphs, ((modelica_integer) 1) + (_graphCount - _iGraphIdx), _iGraph);

  tmpMeta24 = omc_mk_box10(3, &GraphML_GraphInfo_GRAPHINFO__desc, _graphs, omc_mk_integer(_graphCount), _nodes, omc_mk_integer(_nodeCount), _edges, omc_mk_integer(_edgeCount), _attributes, _graphNodeKey, _graphEdgeKey);
  _oGraphInfo = tmpMeta24;

  tmpMeta25 = omc_mk_box2(0, _tmpNode, omc_mk_integer(_nodeCount));
  _oNode = tmpMeta25;
  _return: OMC_LABEL_UNUSED
  if (out_oNode) { *out_oNode = _oNode; }
  omc_ret_ = _oGraphInfo;
  return omc_ret_;
}
modelica_metatype boxptr_GraphML_addNode(threadData_t *threadData, modelica_metatype _id, modelica_metatype _backgroundColor, modelica_metatype _borderWidth, modelica_metatype _nodeLabels, modelica_metatype _shapeType, modelica_metatype _optDesc, modelica_metatype _attValues, modelica_metatype _iGraphIdx, modelica_metatype _iGraphInfo, modelica_metatype *out_oNode)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_metatype _oGraphInfo = NULL;
  tmp1 = omc_unbox_real(_borderWidth);
  tmp2 = omc_unbox_integer(_iGraphIdx);
  _oGraphInfo = omc_GraphML_addNode(threadData, _id, _backgroundColor, tmp1, _nodeLabels, _shapeType, _optDesc, _attValues, tmp2, _iGraphInfo, out_oNode);
  /* skip box _oGraphInfo; GraphML.GraphInfo */
  /* skip box _oNode; tuple<GraphML.Node, #Integer> */
  return _oGraphInfo;
}

DLLModelDirection
modelica_metatype omc_GraphML_addGraph(threadData_t *threadData, modelica_string _id, modelica_boolean _directed, modelica_metatype _iGraphInfo, modelica_metatype *out_oGraph)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _oGraph = NULL;
  modelica_metatype _tmpGraph = NULL;
  modelica_metatype _graphs = NULL;
  modelica_integer _graphCount;
  modelica_metatype _nodes = NULL;
  modelica_integer _nodeCount;
  modelica_metatype _edges = NULL;
  modelica_integer _edgeCount;
  modelica_metatype _attributes = NULL;
  modelica_string _graphNodeKey = NULL;
  modelica_string _graphEdgeKey = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _oGraph has no default value.
  // _tmpGraph has no default value.
  // _graphs has no default value.
  // _graphCount has no default value.
  // _nodes has no default value.
  // _nodeCount has no default value.
  // _edges has no default value.
  // _edgeCount has no default value.
  // _attributes has no default value.
  // _graphNodeKey has no default value.
  // _graphEdgeKey has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iGraphInfo;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,9) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 6);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmp10 = omc_unbox_integer(tmpMeta9);
  tmpMeta11 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmpMeta12 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmpMeta13 = OMC_BOX_FIELD(tmpMeta1, 10);
  _graphs = tmpMeta2;
  _graphCount = tmp4  /* pattern as ty=Integer */;
  _nodes = tmpMeta5;
  _nodeCount = tmp7  /* pattern as ty=Integer */;
  _edges = tmpMeta8;
  _edgeCount = tmp10  /* pattern as ty=Integer */;
  _attributes = tmpMeta11;
  _graphNodeKey = tmpMeta12;
  _graphEdgeKey = tmpMeta13;

  _graphCount = ((modelica_integer) 1) + _graphCount;

  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta16 = omc_mk_box5(3, &GraphML_Graph_GRAPH__desc, _id, omc_mk_boolean(_directed), tmpMeta14, tmpMeta15);
  _tmpGraph = tmpMeta16;

  tmpMeta17 = mmc_mk_cons(_tmpGraph, _graphs);
  _graphs = tmpMeta17;

  tmpMeta18 = omc_mk_box10(3, &GraphML_GraphInfo_GRAPHINFO__desc, _graphs, omc_mk_integer(_graphCount), _nodes, omc_mk_integer(_nodeCount), _edges, omc_mk_integer(_edgeCount), _attributes, _graphNodeKey, _graphEdgeKey);
  _oGraphInfo = tmpMeta18;

  tmpMeta19 = omc_mk_box2(0, _tmpGraph, omc_mk_integer(_graphCount));
  _oGraph = tmpMeta19;
  _return: OMC_LABEL_UNUSED
  if (out_oGraph) { *out_oGraph = _oGraph; }
  omc_ret_ = _oGraphInfo;
  return omc_ret_;
}
modelica_metatype boxptr_GraphML_addGraph(threadData_t *threadData, modelica_metatype _id, modelica_metatype _directed, modelica_metatype _iGraphInfo, modelica_metatype *out_oGraph)
{
  modelica_integer tmp1;
  modelica_metatype _oGraphInfo = NULL;
  tmp1 = omc_unbox_integer(_directed);
  _oGraphInfo = omc_GraphML_addGraph(threadData, _id, tmp1, _iGraphInfo, out_oGraph);
  /* skip box _oGraphInfo; GraphML.GraphInfo */
  /* skip box _oGraph; tuple<GraphML.Graph, #Integer> */
  return _oGraphInfo;
}

DLLModelDirection
modelica_metatype omc_GraphML_createGraphInfo(threadData_t *threadData)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  _oGraphInfo = _OMC_LIT10;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oGraphInfo;
  return omc_ret_;
}

