#include "omc_simulation_settings.h"
#include "AvlTree.h"
#define _OMC_LIT0_data "AvlTree.addNodeUnique name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,28,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,8,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,17,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "AvlTree.addUnique name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,24,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "[]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,0,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "i: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,3,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ", l: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,5,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ", r: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,5,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "TreePrintError<NO_PRINTING_FUNCTIONS_ATTACHED> name["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,52,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,2,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,4) {&AvlTree_Item_NO__ITEM__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,4) {&AvlTree_Node_NO__NODE__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,5,3) {&AvlTree_Node_NODE__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT19,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "AvlTree.replace name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,22,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "AvlTree.addNode name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,22,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "AvlTree.add name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,18,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#include "util/modelica.h"

#include "AvlTree_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_addNodeUnique__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_integer _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal, modelica_metatype *out_outItem);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_addNodeUnique__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal, modelica_metatype *out_outItem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_addNodeUnique__dispatch,2,0) {(void*) boxptr_AvlTree_addNodeUnique__dispatch,0}};
#define boxvar_AvlTree_addNodeUnique__dispatch MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_addNodeUnique__dispatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_addNodeUnique(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKey, modelica_metatype _inVal, modelica_metatype *out_outItem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_addNodeUnique,2,0) {(void*) boxptr_AvlTree_addNodeUnique,0}};
#define boxvar_AvlTree_addNodeUnique MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_addNodeUnique)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_getKeyOfValNode(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getKeyOfValNode,2,0) {(void*) boxptr_AvlTree_getKeyOfValNode,0}};
#define boxvar_AvlTree_getKeyOfValNode MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getKeyOfValNode)
PROTECTED_FUNCTION_STATIC modelica_string omc_AvlTree_printNodeStr(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_printNodeStr,2,0) {(void*) boxptr_AvlTree_printNodeStr,0}};
#define boxvar_AvlTree_printNodeStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_printNodeStr)
PROTECTED_FUNCTION_STATIC modelica_string omc_AvlTree_prettyPrintNodeStr(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_string _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_prettyPrintNodeStr,2,0) {(void*) boxptr_AvlTree_prettyPrintNodeStr,0}};
#define boxvar_AvlTree_prettyPrintNodeStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_prettyPrintNodeStr)
PROTECTED_FUNCTION_STATIC modelica_string omc_AvlTree_prettyPrintTreeStr__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_prettyPrintTreeStr__dispatch,2,0) {(void*) boxptr_AvlTree_prettyPrintTreeStr__dispatch,0}};
#define boxvar_AvlTree_prettyPrintTreeStr__dispatch MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_prettyPrintTreeStr__dispatch)
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlTree_getHeight(threadData_t *threadData, modelica_metatype _bt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_getHeight(threadData_t *threadData, modelica_metatype _bt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getHeight,2,0) {(void*) boxptr_AvlTree_getHeight,0}};
#define boxvar_AvlTree_getHeight MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getHeight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_computeHeight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_computeHeight,2,0) {(void*) boxptr_AvlTree_computeHeight,0}};
#define boxvar_AvlTree_computeHeight MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_computeHeight)
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlTree_differenceInHeight(threadData_t *threadData, modelica_metatype _node);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_differenceInHeight(threadData_t *threadData, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_differenceInHeight,2,0) {(void*) boxptr_AvlTree_differenceInHeight,0}};
#define boxvar_AvlTree_differenceInHeight MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_differenceInHeight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_rotateRight(threadData_t *threadData, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_rotateRight,2,0) {(void*) boxptr_AvlTree_rotateRight,0}};
#define boxvar_AvlTree_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_rotateRight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_rotateLeft(threadData_t *threadData, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_rotateLeft,2,0) {(void*) boxptr_AvlTree_rotateLeft,0}};
#define boxvar_AvlTree_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_exchangeRight(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inParent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_exchangeRight,2,0) {(void*) boxptr_AvlTree_exchangeRight,0}};
#define boxvar_AvlTree_exchangeRight MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_exchangeRight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_exchangeLeft(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inParent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_exchangeLeft,2,0) {(void*) boxptr_AvlTree_exchangeLeft,0}};
#define boxvar_AvlTree_exchangeLeft MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_exchangeLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_rightNode(threadData_t *threadData, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_rightNode,2,0) {(void*) boxptr_AvlTree_rightNode,0}};
#define boxvar_AvlTree_rightNode MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_rightNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_leftNode(threadData_t *threadData, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_leftNode,2,0) {(void*) boxptr_AvlTree_leftNode,0}};
#define boxvar_AvlTree_leftNode MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_leftNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_setLeft(threadData_t *threadData, modelica_metatype _node, modelica_metatype _left);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_setLeft,2,0) {(void*) boxptr_AvlTree_setLeft,0}};
#define boxvar_AvlTree_setLeft MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_setLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_setRight(threadData_t *threadData, modelica_metatype _node, modelica_metatype _right);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_setRight,2,0) {(void*) boxptr_AvlTree_setRight,0}};
#define boxvar_AvlTree_setRight MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_setRight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_doBalance4(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_doBalance4,2,0) {(void*) boxptr_AvlTree_doBalance4,0}};
#define boxvar_AvlTree_doBalance4 MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_doBalance4)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_doBalance3(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_doBalance3,2,0) {(void*) boxptr_AvlTree_doBalance3,0}};
#define boxvar_AvlTree_doBalance3 MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_doBalance3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_doBalance2(threadData_t *threadData, modelica_boolean _inDiffIsNegative, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_doBalance2(threadData_t *threadData, modelica_metatype _inDiffIsNegative, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_doBalance2,2,0) {(void*) boxptr_AvlTree_doBalance2,0}};
#define boxvar_AvlTree_doBalance2 MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_doBalance2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_doBalance(threadData_t *threadData, modelica_integer _difference, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_doBalance(threadData_t *threadData, modelica_metatype _difference, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_doBalance,2,0) {(void*) boxptr_AvlTree_doBalance,0}};
#define boxvar_AvlTree_doBalance MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_doBalance)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_balance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_balance,2,0) {(void*) boxptr_AvlTree_balance,0}};
#define boxvar_AvlTree_balance MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_balance)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_emptyNodeIfNoNode(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_emptyNodeIfNoNode,2,0) {(void*) boxptr_AvlTree_emptyNodeIfNoNode,0}};
#define boxvar_AvlTree_emptyNodeIfNoNode MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_emptyNodeIfNoNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_replaceNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_integer _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_replaceNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_replaceNode__dispatch,2,0) {(void*) boxptr_AvlTree_replaceNode__dispatch,0}};
#define boxvar_AvlTree_replaceNode__dispatch MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_replaceNode__dispatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_getNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_integer _inKeyComp, modelica_metatype _inKey);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_getNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKeyComp, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getNode__dispatch,2,0) {(void*) boxptr_AvlTree_getNode__dispatch,0}};
#define boxvar_AvlTree_getNode__dispatch MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getNode__dispatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_getNode(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getNode,2,0) {(void*) boxptr_AvlTree_getNode,0}};
#define boxvar_AvlTree_getNode MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_addNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_integer _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_addNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_addNode__dispatch,2,0) {(void*) boxptr_AvlTree_addNode__dispatch,0}};
#define boxvar_AvlTree_addNode__dispatch MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_addNode__dispatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_addNode(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKey, modelica_metatype _inVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_addNode,2,0) {(void*) boxptr_AvlTree_addNode,0}};
#define boxvar_AvlTree_addNode MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_addNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_newLeafNode(threadData_t *threadData, modelica_metatype _inItem, modelica_integer _height);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_newLeafNode(threadData_t *threadData, modelica_metatype _inItem, modelica_metatype _height);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_newLeafNode,2,0) {(void*) boxptr_AvlTree_newLeafNode,0}};
#define boxvar_AvlTree_newLeafNode MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_newLeafNode)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_addNodeUnique__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_integer _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal, modelica_metatype *out_outItem)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype _outItem = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  // _outItem has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _inNode;
    tmp4_2 = _inKeyComp;
    tmp4_3 = _inKey;
    tmp4_4 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _val = NULL;
      modelica_metatype _l = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _n = NULL;
      modelica_integer _h;
      modelica_metatype _i = NULL;
      modelica_metatype _it = NULL;
      int tmp4;
      // _key has no default value.
      // _val has no default value.
      // _l has no default value.
      // _r has no default value.
      // _n has no default value.
      // _h has no default value.
      // _i has no default value.
      // _it has no default value.
      {
        switch (MMC_SWITCH_CAST(tmp4_2)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (0 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _i = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inNode;
          tmpMeta[0+1] = _i;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp8 = omc_unbox_integer(tmpMeta7);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _i = tmpMeta6;
          _h = tmp8  /* pattern as ty=Integer */;
          _l = tmpMeta9;
          _r = tmpMeta10;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          _n = omc_AvlTree_emptyNodeIfNoNode(threadData, _r);

          _n = omc_AvlTree_addNodeUnique(threadData, _inTree, _n, _key, _val ,&_it);
          tmpMeta11 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _i, omc_mk_integer(_h), _l, _n);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _it;
          goto tmp3_done;
        }
        case -1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (-1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp14 = omc_unbox_integer(tmpMeta13);
          tmpMeta15 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta16 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _i = tmpMeta12;
          _h = tmp14  /* pattern as ty=Integer */;
          _l = tmpMeta15;
          _r = tmpMeta16;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          _n = omc_AvlTree_emptyNodeIfNoNode(threadData, _l);

          _n = omc_AvlTree_addNodeUnique(threadData, _inTree, _n, _key, _val ,&_it);
          tmpMeta17 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _i, omc_mk_integer(_h), _n, _r);
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = _it;
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
  _outNode = tmpMeta[0+0];
  _outItem = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outItem) { *out_outItem = _outItem; }
  omc_ret_ = _outNode;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_addNodeUnique__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal, modelica_metatype *out_outItem)
{
  modelica_integer tmp1;
  modelica_metatype _outNode = NULL;
  tmp1 = omc_unbox_integer(_inKeyComp);
  _outNode = omc_AvlTree_addNodeUnique__dispatch(threadData, _inTree, _inNode, tmp1, _inKey, _inVal, out_outItem);
  /* skip box _outNode; AvlTree.Node<polymorphic<Key>,polymorphic<Val>> */
  /* skip box _outItem; AvlTree.Item<polymorphic<Key>,polymorphic<Val>> */
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_addNodeUnique(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKey, modelica_metatype _inVal, modelica_metatype *out_outItem)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype _outItem = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  // _outItem has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _inTree;
    tmp4_2 = _inNode;
    tmp4_3 = _inKey;
    tmp4_4 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _rkey = NULL;
      modelica_metatype _val = NULL;
      modelica_metatype _item = NULL;
      modelica_fnptr _keyCompareFunc;
      modelica_metatype _n = NULL;
      modelica_integer _order;
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _rkey has no default value.
      // _val has no default value.
      // _item has no default value.
      // _n has no default value.
      // _order has no default value.
      // _str has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _inKey, _inVal);
          _item = tmpMeta6;

          _n = omc_AvlTree_newLeafNode(threadData, _item, ((modelica_integer) 1));
          tmpMeta[0+0] = _n;
          tmpMeta[0+1] = _item;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,0) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_2, 4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,0) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_2, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,0) == 0) goto tmp3_end;
          
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta10 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _key, _val);
          _item = tmpMeta10;

          _n = omc_AvlTree_newLeafNode(threadData, _item, ((modelica_integer) 1));
          tmpMeta[0+0] = _n;
          tmpMeta[0+1] = _item;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_2, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,2) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 2);
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _rkey = tmpMeta12;
          _keyCompareFunc = tmpMeta13;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          _order = omc_unbox_integer((OMC_BOX_FIELD(_keyCompareFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyCompareFunc, 1))) (threadData, (OMC_BOX_FIELD(_keyCompareFunc, 2)), _key, _rkey) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyCompareFunc, 1))) (threadData, _key, _rkey));

          _n = omc_AvlTree_addNodeUnique__dispatch(threadData, _inTree, _inNode, _order, _key, _val ,&_item);

          _n = omc_AvlTree_balance(threadData, _n);
          tmpMeta[0+0] = _n;
          tmpMeta[0+1] = _item;
          goto tmp3_done;
        }
        case 3: {
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmp14 = stringAppend(_OMC_LIT0,omc_AvlTree_name(threadData, _inTree));
          tmp15 = stringAppend(tmp14,_OMC_LIT1);
          omc_string_store(&(_str), tmp15);

          tmpMeta16 = mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT5, tmpMeta16);
          goto goto_2;
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
  _outNode = tmpMeta[0+0];
  _outItem = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outItem) { *out_outItem = _outItem; }
  omc_ret_ = _outNode;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_AvlTree_addUnique(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inVal, modelica_metatype *out_outItem)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype _outItem = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTree has no default value.
  // _outItem has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inTree;
    tmp4_2 = _inKey;
    tmp4_3 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _val = NULL;
      modelica_metatype _node = NULL;
      modelica_fnptr _cf;
      modelica_metatype _kf = NULL;
      modelica_metatype _vf = NULL;
      modelica_metatype _uf = NULL;
      modelica_string _str = NULL;
      modelica_string _n = NULL;
      modelica_metatype _item = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _val has no default value.
      // _node has no default value.
      // _kf has no default value.
      // _vf has no default value.
      // _uf has no default value.
      // _str has no default value.
      // _n has no default value.
      // _item has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 5);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 6);
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 7);
          
          _node = tmpMeta6;
          _cf = tmpMeta7;
          _kf = tmpMeta8;
          _vf = tmpMeta9;
          _uf = tmpMeta10;
          _n = tmpMeta11;
          _key = tmp4_2;
          _val = tmp4_3;
          /* Pattern matching succeeded */
          _node = omc_AvlTree_addNodeUnique(threadData, _inTree, _node, _key, _val ,&_item);
          tmpMeta12 = omc_mk_box7(3, &AvlTree_Tree_TREE__desc, _node, ((modelica_fnptr) _cf), _kf, _vf, _uf, _n);
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = _item;
          goto tmp3_done;
        }
        case 1: {
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmp13 = stringAppend(_OMC_LIT6,omc_AvlTree_name(threadData, _inTree));
          tmp14 = stringAppend(tmp13,_OMC_LIT1);
          omc_string_store(&(_str), tmp14);

          tmpMeta15 = mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT5, tmpMeta15);
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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outTree = tmpMeta[0+0];
  _outItem = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outItem) { *out_outItem = _outItem; }
  omc_ret_ = _outTree;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_getKeyOfValNode(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inVal)
{
  modelica_metatype _outKey = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKey has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      modelica_metatype _left = NULL;
      modelica_metatype _right = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _k = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _left has no default value.
      // _right has no default value.
      // _v has no default value.
      // _k has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 2);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 3);
          
          _k = tmpMeta7;
          _v = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = valueEq(_v, _inVal);
          if (1 /* true */ != tmp9) goto goto_2;
          tmpMeta1 = _k;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,2) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 3);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 4);
          
          _v = tmpMeta11;
          _left = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = valueEq(_v, _inVal);
          if (0 /* false */ != tmp13) goto goto_2;
          tmpMeta1 = omc_AvlTree_getKeyOfValNode(threadData, _inTree, _left, _inVal);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,2) == 0) goto tmp3_end;
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 3);
          tmpMeta16 = OMC_BOX_FIELD(tmp4_1, 5);
          _v = tmpMeta15;
          _right = tmpMeta16;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = valueEq(_v, _inVal);
          if (0 /* false */ != tmp17) goto goto_2;
          tmpMeta1 = omc_AvlTree_getKeyOfValNode(threadData, _inTree, _right, _inVal);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outKey = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outKey;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_AvlTree_getKeyOfVal(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inVal)
{
  modelica_metatype _outKey = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKey has no default value.
  // _node has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _node = tmpMeta2;

  _outKey = omc_AvlTree_getKeyOfValNode(threadData, _inTree, _node, _inVal);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outKey;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_AvlTree_printItemStr(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inItem)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inItem;
    {
      modelica_string _keyStr = NULL;
      modelica_string _valStr = NULL;
      modelica_fnptr _key2Str;
      modelica_fnptr _val2Str;
      modelica_metatype _key = NULL;
      modelica_metatype _val = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _keyStr has no default value.
      // _valStr has no default value.
      // _key has no default value.
      // _val has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_string tmp8;
          modelica_string tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          _key = tmpMeta6;
          _val = tmpMeta7;
          /* Pattern matching succeeded */
          _key2Str = (modelica_fnptr) omc_AvlTree_getKeyToStrFunc(threadData, _inTree);

          _val2Str = (modelica_fnptr) omc_AvlTree_getValToStrFunc(threadData, _inTree);

          omc_string_store(&(_keyStr), (OMC_BOX_FIELD(_key2Str, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_key2Str, 1))) (threadData, (OMC_BOX_FIELD(_key2Str, 2)), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_key2Str, 1))) (threadData, _key));

          omc_string_store(&(_valStr), (OMC_BOX_FIELD(_val2Str, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_val2Str, 1))) (threadData, (OMC_BOX_FIELD(_val2Str, 2)), _val) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_val2Str, 1))) (threadData, _val));
          tmp8 = stringAppend(_OMC_LIT8,_keyStr);
          tmp9 = stringAppend(tmp8,_OMC_LIT9);
          tmp10 = stringAppend(tmp9,_valStr);
          tmp11 = stringAppend(tmp10,_OMC_LIT10);
          tmp1 = tmp11;
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
  omc_string_store(&(_outString), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_AvlTree_printNodeStr(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      modelica_metatype _left = NULL;
      modelica_metatype _right = NULL;
      modelica_metatype _item = NULL;
      modelica_string _left_str = NULL;
      modelica_string _right_str = NULL;
      modelica_string _item_str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _left has no default value.
      // _right has no default value.
      // _item has no default value.
      // _left_str has no default value.
      // _right_str has no default value.
      // _item_str has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 5);
          _item = tmpMeta7;
          _left = tmpMeta8;
          _right = tmpMeta9;
          /* Pattern matching succeeded */
          omc_string_store(&(_left_str), omc_AvlTree_printNodeStr(threadData, _inTree, _left));

          omc_string_store(&(_right_str), omc_AvlTree_printNodeStr(threadData, _inTree, _right));

          omc_string_store(&(_item_str), omc_AvlTree_printItemStr(threadData, _inTree, _item));
          tmpMeta10 = mmc_mk_cons(_OMC_LIT12, mmc_mk_cons(_item_str, mmc_mk_cons(_OMC_LIT13, mmc_mk_cons(_left_str, mmc_mk_cons(_OMC_LIT14, mmc_mk_cons(_right_str, MMC_REFSTRUCTLIT(mmc_nil)))))));
          tmp1 = stringAppendList(tmpMeta10);
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
  omc_string_store(&(_outString), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_AvlTree_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_string _outString = NULL;
  modelica_metatype _node = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _node has no default value.
  if((!omc_AvlTree_hasPrintingFunctions(threadData, _inTree)))
  {
    tmp1 = stringAppend(_OMC_LIT15,omc_AvlTree_name(threadData, _inTree));
    tmp2 = stringAppend(tmp1,_OMC_LIT10);
    omc_string_store(&(_outString), tmp2);

    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta3 = _inTree;
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 2);
  _node = tmpMeta4;

  omc_string_store(&(_outString), omc_AvlTree_printNodeStr(threadData, _inTree, _node));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_AvlTree_prettyPrintNodeStr(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      modelica_metatype _item = NULL;
      modelica_metatype _l = NULL;
      modelica_metatype _r = NULL;
      modelica_string _indent = NULL;
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _item has no default value.
      // _l has no default value.
      // _r has no default value.
      // _indent has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_string tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 5);
          _l = tmpMeta7;
          _r = tmpMeta8;
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_inIndent,_OMC_LIT16);
          omc_string_store(&(_indent), tmp9);

          omc_string_store(&(_s1), omc_AvlTree_prettyPrintNodeStr(threadData, _inTree, _l, _indent));

          omc_string_store(&(_s2), omc_AvlTree_prettyPrintNodeStr(threadData, _inTree, _r, _indent));
          tmp10 = stringAppend(_OMC_LIT17,_s1);
          tmp11 = stringAppend(tmp10,_s2);
          tmp1 = tmp11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_string tmp15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,2) == 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 5);
          _item = tmpMeta12;
          _l = tmpMeta13;
          _r = tmpMeta14;
          /* Pattern matching succeeded */
          tmp15 = stringAppend(_inIndent,_OMC_LIT16);
          omc_string_store(&(_indent), tmp15);

          omc_string_store(&(_s1), omc_AvlTree_prettyPrintNodeStr(threadData, _inTree, _l, _indent));

          omc_string_store(&(_s2), omc_AvlTree_prettyPrintNodeStr(threadData, _inTree, _r, _indent));
          tmp16 = stringAppend(_OMC_LIT17,_inIndent);
          tmp17 = stringAppend(tmp16,omc_AvlTree_printItemStr(threadData, _inTree, _item));
          tmp18 = stringAppend(tmp17,_s1);
          tmp19 = stringAppend(tmp18,_s2);
          tmp1 = tmp19;
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
  omc_string_store(&(_outString), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_AvlTree_prettyPrintTreeStr__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_metatype _node = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _node has no default value.
  if((!omc_AvlTree_hasPrintingFunctions(threadData, _inTree)))
  {
    tmp1 = stringAppend(_OMC_LIT15,omc_AvlTree_name(threadData, _inTree));
    tmp2 = stringAppend(tmp1,_OMC_LIT10);
    omc_string_store(&(_outString), tmp2);

    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta3 = _inTree;
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 2);
  _node = tmpMeta4;

  omc_string_store(&(_outString), omc_AvlTree_prettyPrintNodeStr(threadData, _inTree, _node, _inIndent));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_AvlTree_prettyPrintTreeStr(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_string _outString = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  omc_string_store(&(_outString), omc_AvlTree_prettyPrintTreeStr__dispatch(threadData, _inTree, _OMC_LIT11));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlTree_getHeight(threadData_t *threadData, modelica_metatype _bt)
{
  modelica_integer _height;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _height has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp7 = omc_unbox_integer(tmpMeta6);
          
          _height = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _height;
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
  _height = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _height;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_getHeight(threadData_t *threadData, modelica_metatype _bt)
{
  modelica_integer _height;
  modelica_metatype out_height;
  _height = omc_AvlTree_getHeight(threadData, _bt);
  out_height = omc_mk_icon(_height);
  return out_height;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_computeHeight(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype _l = NULL;
  modelica_metatype _r = NULL;
  modelica_metatype _i = NULL;
  modelica_integer _hl;
  modelica_integer _hr;
  modelica_integer _height;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  // _l has no default value.
  // _r has no default value.
  // _i has no default value.
  // _hl has no default value.
  // _hr has no default value.
  // _height has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inNode;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,2) == 0) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 5);
  _i = tmpMeta2;
  _l = tmpMeta3;
  _r = tmpMeta4;

  _hl = omc_AvlTree_getHeight(threadData, _l);

  _hr = omc_AvlTree_getHeight(threadData, _r);

  _height = ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_hl),(modelica_integer)(_hr));

  tmpMeta5 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _i, omc_mk_integer(_height), _l, _r);
  _outNode = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlTree_differenceInHeight(threadData_t *threadData, modelica_metatype _node)
{
  modelica_integer _diff;
  modelica_metatype _l = NULL;
  modelica_metatype _r = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _diff has no default value.
  // _l has no default value.
  // _r has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _node;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 5);
  _l = tmpMeta2;
  _r = tmpMeta3;

  _diff = omc_AvlTree_getHeight(threadData, _l) - omc_AvlTree_getHeight(threadData, _r);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _diff;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_differenceInHeight(threadData_t *threadData, modelica_metatype _node)
{
  modelica_integer _diff;
  modelica_metatype out_diff;
  _diff = omc_AvlTree_differenceInHeight(threadData, _node);
  out_diff = omc_mk_icon(_diff);
  return out_diff;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_rotateRight(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  _outNode = omc_AvlTree_exchangeRight(threadData, omc_AvlTree_leftNode(threadData, _node), _node);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_rotateLeft(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  _outNode = omc_AvlTree_exchangeLeft(threadData, omc_AvlTree_rightNode(threadData, _node), _node);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_exchangeRight(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inParent)
{
  modelica_metatype _outParent = NULL;
  modelica_metatype _parent = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outParent has no default value.
  // _parent has no default value.
  // _node has no default value.
  _parent = omc_AvlTree_setLeft(threadData, _inParent, omc_AvlTree_rightNode(threadData, _inNode));

  _parent = omc_AvlTree_balance(threadData, _parent);

  _node = omc_AvlTree_setRight(threadData, _inNode, _parent);

  _outParent = omc_AvlTree_balance(threadData, _node);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outParent;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_exchangeLeft(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inParent)
{
  modelica_metatype _outParent = NULL;
  modelica_metatype _parent = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outParent has no default value.
  // _parent has no default value.
  // _node has no default value.
  _parent = omc_AvlTree_setRight(threadData, _inParent, omc_AvlTree_leftNode(threadData, _inNode));

  _parent = omc_AvlTree_balance(threadData, _parent);

  _node = omc_AvlTree_setLeft(threadData, _inNode, _parent);

  _outParent = omc_AvlTree_balance(threadData, _node);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outParent;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_rightNode(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _subNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subNode has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _node;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 5);
  _subNode = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _subNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_leftNode(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _subNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subNode has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _node;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 4);
  _subNode = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _subNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_setLeft(threadData_t *threadData, modelica_metatype _node, modelica_metatype _left)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype _item = NULL;
  modelica_metatype _r = NULL;
  modelica_integer _height;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  // _item has no default value.
  // _r has no default value.
  // _height has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _node;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 5);
  _item = tmpMeta2;
  _height = tmp4  /* pattern as ty=Integer */;
  _r = tmpMeta5;

  tmpMeta6 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _item, omc_mk_integer(_height), _left, _r);
  _outNode = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_setRight(threadData_t *threadData, modelica_metatype _node, modelica_metatype _right)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype _item = NULL;
  modelica_metatype _l = NULL;
  modelica_integer _height;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  // _item has no default value.
  // _l has no default value.
  // _height has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _node;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  _item = tmpMeta2;
  _height = tmp4  /* pattern as ty=Integer */;
  _l = tmpMeta5;

  tmpMeta6 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _item, omc_mk_integer(_height), _l, _right);
  _outNode = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_doBalance4(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      modelica_metatype _rl = NULL;
      modelica_metatype _n = NULL;
      modelica_metatype _lN = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rl has no default value.
      // _n has no default value.
      // _lN has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          
          _n = tmp4_1;
          /* Pattern matching succeeded */
          _lN = omc_AvlTree_leftNode(threadData, _n);

          /* Pattern-matching assignment */
          tmp6 = (omc_AvlTree_differenceInHeight(threadData, _lN) < ((modelica_integer) 0));
          if (1 /* true */ != tmp6) goto goto_2;

          _rl = omc_AvlTree_rotateLeft(threadData, _lN);
          tmpMeta1 = omc_AvlTree_setLeft(threadData, _n, _rl);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_doBalance3(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      modelica_metatype _n = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _rN = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      // _rr has no default value.
      // _rN has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          
          _n = tmp4_1;
          /* Pattern matching succeeded */
          _rN = omc_AvlTree_rightNode(threadData, _n);

          /* Pattern-matching assignment */
          tmp6 = (omc_AvlTree_differenceInHeight(threadData, _rN) > ((modelica_integer) 0));
          if (1 /* true */ != tmp6) goto goto_2;

          _rr = omc_AvlTree_rotateRight(threadData, _rN);
          tmpMeta1 = omc_AvlTree_setRight(threadData, _n, _rr);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_doBalance2(threadData_t *threadData, modelica_boolean _inDiffIsNegative, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_boolean tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inDiffIsNegative;
    tmp4_2 = _inNode;
    {
      modelica_metatype _n = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          
          _n = tmp4_2;
          /* Pattern matching succeeded */
          _n = omc_AvlTree_doBalance3(threadData, _n);
          tmpMeta1 = omc_AvlTree_rotateLeft(threadData, _n);
          goto tmp3_done;
        }
        case 1: {
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          
          _n = tmp4_2;
          /* Pattern matching succeeded */
          _n = omc_AvlTree_doBalance4(threadData, _n);
          tmpMeta1 = omc_AvlTree_rotateRight(threadData, _n);
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_doBalance2(threadData_t *threadData, modelica_metatype _inDiffIsNegative, modelica_metatype _inNode)
{
  modelica_integer tmp1;
  modelica_metatype _outNode = NULL;
  tmp1 = omc_unbox_integer(_inDiffIsNegative);
  _outNode = omc_AvlTree_doBalance2(threadData, tmp1, _inNode);
  /* skip box _outNode; AvlTree.Node<polymorphic<Key>,polymorphic<Val>> */
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_doBalance(threadData_t *threadData, modelica_integer _difference, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _difference;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case -1: {
          if (-1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AvlTree_computeHeight(threadData, _inNode);
          goto tmp3_done;
        }
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AvlTree_computeHeight(threadData, _inNode);
          goto tmp3_done;
        }
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AvlTree_computeHeight(threadData, _inNode);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AvlTree_doBalance2(threadData, (_difference < ((modelica_integer) 0)), _inNode);
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_doBalance(threadData_t *threadData, modelica_metatype _difference, modelica_metatype _inNode)
{
  modelica_integer tmp1;
  modelica_metatype _outNode = NULL;
  tmp1 = omc_unbox_integer(_difference);
  _outNode = omc_AvlTree_doBalance(threadData, tmp1, _inNode);
  /* skip box _outNode; AvlTree.Node<polymorphic<Key>,polymorphic<Val>> */
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_balance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_integer _d;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  // _d has no default value.
  _d = omc_AvlTree_differenceInHeight(threadData, _inNode);

  _outNode = omc_AvlTree_doBalance(threadData, _d, _inNode);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_emptyNodeIfNoNode(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_replaceNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_integer _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _inNode;
    tmp4_2 = _inKeyComp;
    tmp4_3 = _inKey;
    tmp4_4 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _val = NULL;
      modelica_metatype _l = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _n = NULL;
      modelica_integer _h;
      modelica_metatype _i = NULL;
      int tmp4;
      // _key has no default value.
      // _val has no default value.
      // _l has no default value.
      // _r has no default value.
      // _n has no default value.
      // _h has no default value.
      // _i has no default value.
      {
        switch (MMC_SWITCH_CAST(tmp4_2)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (0 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _h = tmp7  /* pattern as ty=Integer */;
          _l = tmpMeta8;
          _r = tmpMeta9;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta10 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _key, _val);
          tmpMeta11 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, tmpMeta10, omc_mk_integer(_h), _l, _r);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp14 = omc_unbox_integer(tmpMeta13);
          tmpMeta15 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta16 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _i = tmpMeta12;
          _h = tmp14  /* pattern as ty=Integer */;
          _l = tmpMeta15;
          _r = tmpMeta16;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          _n = omc_AvlTree_emptyNodeIfNoNode(threadData, _r);

          _n = omc_AvlTree_replaceNode(threadData, _inTree, _n, _key, _val);
          tmpMeta17 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _i, omc_mk_integer(_h), _l, _n);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case -1: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (-1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta18 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta19 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp20 = omc_unbox_integer(tmpMeta19);
          tmpMeta21 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta22 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _i = tmpMeta18;
          _h = tmp20  /* pattern as ty=Integer */;
          _l = tmpMeta21;
          _r = tmpMeta22;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          _n = omc_AvlTree_emptyNodeIfNoNode(threadData, _l);

          _n = omc_AvlTree_replaceNode(threadData, _inTree, _n, _key, _val);
          tmpMeta23 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _i, omc_mk_integer(_h), _n, _r);
          tmpMeta1 = tmpMeta23;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_replaceNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal)
{
  modelica_integer tmp1;
  modelica_metatype _outNode = NULL;
  tmp1 = omc_unbox_integer(_inKeyComp);
  _outNode = omc_AvlTree_replaceNode__dispatch(threadData, _inTree, _inNode, tmp1, _inKey, _inVal);
  /* skip box _outNode; AvlTree.Node<polymorphic<Key>,polymorphic<Val>> */
  return _outNode;
}

DLLModelDirection
modelica_metatype omc_AvlTree_replaceNode(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKey, modelica_metatype _inVal)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _inTree;
    tmp4_2 = _inNode;
    tmp4_3 = _inKey;
    tmp4_4 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _rkey = NULL;
      modelica_metatype _val = NULL;
      modelica_fnptr _keyCompareFunc;
      modelica_integer _order;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _rkey has no default value.
      // _val has no default value.
      // _order has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 2);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _rkey = tmpMeta7;
          _keyCompareFunc = tmpMeta8;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          _order = omc_unbox_integer((OMC_BOX_FIELD(_keyCompareFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyCompareFunc, 1))) (threadData, (OMC_BOX_FIELD(_keyCompareFunc, 2)), _key, _rkey) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyCompareFunc, 1))) (threadData, _key, _rkey));
          tmpMeta1 = omc_AvlTree_replaceNode__dispatch(threadData, _inTree, _inNode, _order, _key, _val);
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_AvlTree_replace(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inVal)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inTree;
    tmp4_2 = _inKey;
    tmp4_3 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _val = NULL;
      modelica_fnptr _keyCompareFunc;
      modelica_metatype _kf = NULL;
      modelica_metatype _vf = NULL;
      modelica_metatype _uf = NULL;
      modelica_metatype _node = NULL;
      modelica_string _n = NULL;
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _val has no default value.
      // _kf has no default value.
      // _vf has no default value.
      // _uf has no default value.
      // _node has no default value.
      // _n has no default value.
      // _str has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 5);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 6);
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 7);
          
          _node = tmpMeta6;
          _keyCompareFunc = tmpMeta7;
          _kf = tmpMeta8;
          _vf = tmpMeta9;
          _uf = tmpMeta10;
          _n = tmpMeta11;
          _key = tmp4_2;
          _val = tmp4_3;
          /* Pattern matching succeeded */
          _node = omc_AvlTree_replaceNode(threadData, _inTree, _node, _key, _val);
          tmpMeta12 = omc_mk_box7(3, &AvlTree_Tree_TREE__desc, _node, ((modelica_fnptr) _keyCompareFunc), _kf, _vf, _uf, _n);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmp13 = stringAppend(_OMC_LIT21,omc_AvlTree_name(threadData, _inTree));
          tmp14 = stringAppend(tmp13,_OMC_LIT1);
          omc_string_store(&(_str), tmp14);

          tmpMeta15 = mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT5, tmpMeta15);
          goto goto_2;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTree;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_getNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_integer _inKeyComp, modelica_metatype _inKey)
{
  modelica_metatype _outVal = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVal has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inNode;
    tmp4_2 = _inKeyComp;
    tmp4_3 = _inKey;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _val = NULL;
      modelica_metatype _l = NULL;
      modelica_metatype _r = NULL;
      int tmp4;
      // _key has no default value.
      // _val has no default value.
      // _l has no default value.
      // _r has no default value.
      {
        switch (MMC_SWITCH_CAST(tmp4_2)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (0 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 3);
          
          _val = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _val;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _r = tmpMeta7;
          _key = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AvlTree_getNode(threadData, _inTree, _r, _key);
          goto tmp3_done;
        }
        case -1: {
          modelica_metatype tmpMeta8;
          if (-1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          
          _l = tmpMeta8;
          _key = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AvlTree_getNode(threadData, _inTree, _l, _key);
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
  _outVal = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outVal;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_getNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKeyComp, modelica_metatype _inKey)
{
  modelica_integer tmp1;
  modelica_metatype _outVal = NULL;
  tmp1 = omc_unbox_integer(_inKeyComp);
  _outVal = omc_AvlTree_getNode__dispatch(threadData, _inTree, _inNode, tmp1, _inKey);
  /* skip box _outVal; polymorphic<Val> */
  return _outVal;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_getNode(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKey)
{
  modelica_metatype _outVal = NULL;
  modelica_metatype _rkey = NULL;
  modelica_fnptr _keyCompareFunc;
  modelica_integer _order;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVal has no default value.
  // _rkey has no default value.
  // _order has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inNode;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,2) == 0) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 2);
  _rkey = tmpMeta3;

  _keyCompareFunc = (modelica_fnptr) omc_AvlTree_getKeyCompareFunc(threadData, _inTree);

  _order = omc_unbox_integer((OMC_BOX_FIELD(_keyCompareFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyCompareFunc, 1))) (threadData, (OMC_BOX_FIELD(_keyCompareFunc, 2)), _inKey, _rkey) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyCompareFunc, 1))) (threadData, _inKey, _rkey));

  _outVal = omc_AvlTree_getNode__dispatch(threadData, _inTree, _inNode, _order, _inKey);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outVal;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_AvlTree_get(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_metatype _outVal = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVal has no default value.
  // _node has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _node = tmpMeta2;

  _outVal = omc_AvlTree_getNode(threadData, _inTree, _node, _inKey);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outVal;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_addNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_integer _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_integer tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;
    tmp4_1 = _inNode;
    tmp4_2 = _inKeyComp;
    tmp4_3 = _inKey;
    tmp4_4 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _val = NULL;
      modelica_metatype _l = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _n = NULL;
      modelica_integer _h;
      modelica_metatype _i = NULL;
      modelica_fnptr _updateCheckFunc;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _val has no default value.
      // _l has no default value.
      // _r has no default value.
      // _n has no default value.
      // _h has no default value.
      // _i has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (0 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _h = tmp7  /* pattern as ty=Integer */;
          _l = tmpMeta8;
          _r = tmpMeta9;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_AvlTree_hasUpdateCheckFunction(threadData, _inTree);
          if (0 /* false */ != tmp10) goto goto_2;
          tmpMeta11 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _key, _val);
          tmpMeta12 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, tmpMeta11, omc_mk_integer(_h), _l, _r);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (0 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp15 = omc_unbox_integer(tmpMeta14);
          tmpMeta16 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta17 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _i = tmpMeta13;
          _h = tmp15  /* pattern as ty=Integer */;
          _l = tmpMeta16;
          _r = tmpMeta17;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = omc_AvlTree_hasUpdateCheckFunction(threadData, _inTree);
          if (1 /* true */ != tmp18) goto goto_2;

          _updateCheckFunc = (modelica_fnptr) omc_AvlTree_getUpdateCheckFunc(threadData, _inTree);

          /* Pattern-matching assignment */
          tmpMeta19 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _key, _val);
          tmpMeta20 = (OMC_BOX_FIELD(_updateCheckFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_updateCheckFunc, 1))) (threadData, (OMC_BOX_FIELD(_updateCheckFunc, 2)), _i, tmpMeta19) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_updateCheckFunc, 1))) (threadData, _i, tmpMeta19);
          tmp21 = omc_unbox_integer(tmpMeta20);
          if (1 /* true */ != tmp21) goto goto_2;
          tmpMeta22 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _key, _val);
          tmpMeta23 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, tmpMeta22, omc_mk_integer(_h), _l, _r);
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta24;
          modelica_boolean tmp25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          if (0 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta24 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _i = tmpMeta24;
          _key = tmp4_3;
          _val = tmp4_4;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp25 = omc_AvlTree_hasUpdateCheckFunction(threadData, _inTree);
          if (1 /* true */ != tmp25) goto goto_2;

          _updateCheckFunc = (modelica_fnptr) omc_AvlTree_getUpdateCheckFunc(threadData, _inTree);

          /* Pattern-matching assignment */
          tmpMeta26 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _key, _val);
          tmpMeta27 = (OMC_BOX_FIELD(_updateCheckFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_updateCheckFunc, 1))) (threadData, (OMC_BOX_FIELD(_updateCheckFunc, 2)), _i, tmpMeta26) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_updateCheckFunc, 1))) (threadData, _i, tmpMeta26);
          tmp28 = omc_unbox_integer(tmpMeta27);
          if (0 /* false */ != tmp28) goto goto_2;
          tmpMeta1 = _inNode;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_integer tmp31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta29 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta30 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp31 = omc_unbox_integer(tmpMeta30);
          tmpMeta32 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta33 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _i = tmpMeta29;
          _h = tmp31  /* pattern as ty=Integer */;
          _l = tmpMeta32;
          _r = tmpMeta33;
          _key = tmp4_3;
          _val = tmp4_4;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _n = omc_AvlTree_emptyNodeIfNoNode(threadData, _r);

          _n = omc_AvlTree_addNode(threadData, _inTree, _n, _key, _val);
          tmpMeta34 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _i, omc_mk_integer(_h), _l, _n);
          tmpMeta1 = tmpMeta34;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (-1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta35 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta36 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp37 = omc_unbox_integer(tmpMeta36);
          tmpMeta38 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta39 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _i = tmpMeta35;
          _h = tmp37  /* pattern as ty=Integer */;
          _l = tmpMeta38;
          _r = tmpMeta39;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          _n = omc_AvlTree_emptyNodeIfNoNode(threadData, _l);

          _n = omc_AvlTree_addNode(threadData, _inTree, _n, _key, _val);
          tmpMeta40 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _i, omc_mk_integer(_h), _n, _r);
          tmpMeta1 = tmpMeta40;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_addNode__dispatch(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKeyComp, modelica_metatype _inKey, modelica_metatype _inVal)
{
  modelica_integer tmp1;
  modelica_metatype _outNode = NULL;
  tmp1 = omc_unbox_integer(_inKeyComp);
  _outNode = omc_AvlTree_addNode__dispatch(threadData, _inTree, _inNode, tmp1, _inKey, _inVal);
  /* skip box _outNode; AvlTree.Node<polymorphic<Key>,polymorphic<Val>> */
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_addNode(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKey, modelica_metatype _inVal)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _inTree;
    tmp4_2 = _inNode;
    tmp4_3 = _inKey;
    tmp4_4 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _rkey = NULL;
      modelica_metatype _val = NULL;
      modelica_fnptr _keyCompareFunc;
      modelica_integer _order;
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _rkey has no default value.
      // _val has no default value.
      // _order has no default value.
      // _str has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _inKey, _inVal);
          tmpMeta1 = omc_AvlTree_newLeafNode(threadData, tmpMeta6, ((modelica_integer) 1));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,0) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_2, 4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,0) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_2, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,0) == 0) goto tmp3_end;
          
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta10 = omc_mk_box3(3, &AvlTree_Item_ITEM__desc, _key, _val);
          tmpMeta1 = omc_AvlTree_newLeafNode(threadData, tmpMeta10, ((modelica_integer) 1));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_2, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,2) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 2);
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _rkey = tmpMeta12;
          _keyCompareFunc = tmpMeta13;
          _key = tmp4_3;
          _val = tmp4_4;
          /* Pattern matching succeeded */
          _order = omc_unbox_integer((OMC_BOX_FIELD(_keyCompareFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyCompareFunc, 1))) (threadData, (OMC_BOX_FIELD(_keyCompareFunc, 2)), _key, _rkey) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyCompareFunc, 1))) (threadData, _key, _rkey));
          tmpMeta1 = omc_AvlTree_balance(threadData, omc_AvlTree_addNode__dispatch(threadData, _inTree, _inNode, _order, _key, _val));
          goto tmp3_done;
        }
        case 3: {
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmp14 = stringAppend(_OMC_LIT22,omc_AvlTree_name(threadData, _inTree));
          tmp15 = stringAppend(tmp14,_OMC_LIT1);
          omc_string_store(&(_str), tmp15);

          tmpMeta16 = mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT5, tmpMeta16);
          goto goto_2;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_AvlTree_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inVal)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTree has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inTree;
    tmp4_2 = _inKey;
    tmp4_3 = _inVal;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _val = NULL;
      modelica_metatype _node = NULL;
      modelica_fnptr _cf;
      modelica_metatype _kf = NULL;
      modelica_metatype _vf = NULL;
      modelica_metatype _uf = NULL;
      modelica_string _str = NULL;
      modelica_string _n = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _val has no default value.
      // _node has no default value.
      // _kf has no default value.
      // _vf has no default value.
      // _uf has no default value.
      // _str has no default value.
      // _n has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 5);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 6);
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 7);
          
          _node = tmpMeta6;
          _cf = tmpMeta7;
          _kf = tmpMeta8;
          _vf = tmpMeta9;
          _uf = tmpMeta10;
          _n = tmpMeta11;
          _key = tmp4_2;
          _val = tmp4_3;
          /* Pattern matching succeeded */
          _node = omc_AvlTree_addNode(threadData, _inTree, _node, _key, _val);
          tmpMeta12 = omc_mk_box7(3, &AvlTree_Tree_TREE__desc, _node, ((modelica_fnptr) _cf), _kf, _vf, _uf, _n);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmp13 = stringAppend(_OMC_LIT23,omc_AvlTree_name(threadData, _inTree));
          tmp14 = stringAppend(tmp13,_OMC_LIT1);
          omc_string_store(&(_str), tmp14);

          tmpMeta15 = mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT5, tmpMeta15);
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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTree;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTree_newLeafNode(threadData_t *threadData, modelica_metatype _inItem, modelica_integer _height)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  tmpMeta1 = omc_mk_box5(3, &AvlTree_Node_NODE__desc, _inItem, omc_mk_integer(((modelica_integer) 1)), _OMC_LIT19, _OMC_LIT19);
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTree_newLeafNode(threadData_t *threadData, modelica_metatype _inItem, modelica_metatype _height)
{
  modelica_integer tmp1;
  modelica_metatype _outNode = NULL;
  tmp1 = omc_unbox_integer(_height);
  _outNode = omc_AvlTree_newLeafNode(threadData, _inItem, tmp1);
  /* skip box _outNode; AvlTree.Node<polymorphic<Key>,polymorphic<Val>> */
  return _outNode;
}

DLLModelDirection
modelica_fnptr omc_AvlTree_getValToStrFunc(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_fnptr _outVal2StrFunc;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_fnptr omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 5);
  if (optionNone(tmpMeta2)) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
  _outVal2StrFunc = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outVal2StrFunc;
  return omc_ret_;
}

DLLModelDirection
modelica_fnptr omc_AvlTree_getKeyToStrFunc(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_fnptr _outKey2StrFunc;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_fnptr omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 4);
  if (optionNone(tmpMeta2)) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
  _outKey2StrFunc = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outKey2StrFunc;
  return omc_ret_;
}

DLLModelDirection
modelica_fnptr omc_AvlTree_getKeyCompareFunc(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_fnptr _outKeyCompareFunc;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_fnptr omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 3);
  _outKeyCompareFunc = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outKeyCompareFunc;
  return omc_ret_;
}

DLLModelDirection
modelica_fnptr omc_AvlTree_getUpdateCheckFunc(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_fnptr _outUpdateCheckFunc;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_fnptr omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 6);
  if (optionNone(tmpMeta2)) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
  _outUpdateCheckFunc = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outUpdateCheckFunc;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_AvlTree_hasUpdateCheckFunction(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _hasUpdateCheck;
  modelica_metatype _uf = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasUpdateCheck has no default value.
  // _uf has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 6);
  _uf = tmpMeta2;

  _hasUpdateCheck = (!valueEq(mmc_mk_none(), _uf));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hasUpdateCheck;
  return omc_ret_;
}
modelica_metatype boxptr_AvlTree_hasUpdateCheckFunction(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _hasUpdateCheck;
  modelica_metatype out_hasUpdateCheck;
  _hasUpdateCheck = omc_AvlTree_hasUpdateCheckFunction(threadData, _tree);
  out_hasUpdateCheck = omc_mk_icon(_hasUpdateCheck);
  return out_hasUpdateCheck;
}

DLLModelDirection
modelica_boolean omc_AvlTree_hasPrintingFunctions(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _hasPrinting;
  modelica_metatype _kf = NULL;
  modelica_metatype _vf = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasPrinting has no default value.
  // _kf has no default value.
  // _vf has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 5);
  _kf = tmpMeta2;
  _vf = tmpMeta3;

  _hasPrinting = (!(valueEq(mmc_mk_none(), _kf) || valueEq(mmc_mk_none(), _vf)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hasPrinting;
  return omc_ret_;
}
modelica_metatype boxptr_AvlTree_hasPrintingFunctions(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _hasPrinting;
  modelica_metatype out_hasPrinting;
  _hasPrinting = omc_AvlTree_hasPrintingFunctions(threadData, _tree);
  out_hasPrinting = omc_mk_icon(_hasPrinting);
  return out_hasPrinting;
}

DLLModelDirection
modelica_metatype omc_AvlTree_create(threadData_t *threadData, modelica_string _name, modelica_fnptr _inKeyCompareFunc, modelica_metatype _inKeyStrFuncOpt, modelica_metatype _inValStrFuncOpt, modelica_metatype _inUpdateCheckFuncOpt)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tree has no default value.
  tmpMeta1 = omc_mk_box7(3, &AvlTree_Tree_TREE__desc, _OMC_LIT20, ((modelica_fnptr) _inKeyCompareFunc), _inKeyStrFuncOpt, _inValStrFuncOpt, _inUpdateCheckFuncOpt, _name);
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_AvlTree_name(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_string _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 7);
  _name = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _name;
  return omc_ret_;
}

