#ifdef OMC_BASE_FILE
#define OMC_FILE OMC_BASE_FILE
#else
#define OMC_FILE "AvlSetString.c"
#endif
#include "omc_simulation_settings.h"
#include "AvlSetString.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&AvlSetString_Tree_EMPTY__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,7,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,0,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,5,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,7,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,4,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,4,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,12,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#include "util/modelica.h"
#include "AvlSetString_includes.h"
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlSetString_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetString_balance,2,0) {(void*) boxptr_AvlSetString_balance,0}};
#define boxvar_AvlSetString_balance MMC_REFSTRUCTLIT(boxvar_lit_AvlSetString_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlSetString_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlSetString_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetString_calculateBalance,2,0) {(void*) boxptr_AvlSetString_calculateBalance,0}};
#define boxvar_AvlSetString_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_AvlSetString_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlSetString_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlSetString_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetString_height,2,0) {(void*) boxptr_AvlSetString_height,0}};
#define boxvar_AvlSetString_height MMC_REFSTRUCTLIT(boxvar_lit_AvlSetString_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_AvlSetString_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlSetString_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetString_printTreeStr2,2,0) {(void*) boxptr_AvlSetString_printTreeStr2,0}};
#define boxvar_AvlSetString_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_AvlSetString_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_AvlSetString_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlSetString_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetString_referenceEqOrEmpty,2,0) {(void*) boxptr_AvlSetString_referenceEqOrEmpty,0}};
#define boxvar_AvlSetString_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_AvlSetString_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlSetString_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetString_rotateLeft,2,0) {(void*) boxptr_AvlSetString_rotateLeft,0}};
#define boxvar_AvlSetString_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_AvlSetString_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlSetString_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlSetString_rotateRight,2,0) {(void*) boxptr_AvlSetString_rotateRight,0}};
#define boxvar_AvlSetString_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_AvlSetString_rotateRight)
DLLExport
modelica_metatype omc_AvlSetString_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey)
{
modelica_metatype _tree = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_tree = _inTree;
{
modelica_metatype tmp4_1;
tmp4_1 = _tree;
{
modelica_string _key = NULL;
modelica_integer _key_comp;
modelica_metatype _outTree = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
modelica_metatype tmpMeta5;
tmpMeta5 = mmc_mk_box2(4, &AvlSetString_Tree_LEAF__desc, _inKey);
tmpMeta1 = tmpMeta5;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_key = tmpMeta6;
_key_comp = omc_AvlSetString_keyCompare(threadData, _inKey, _key);
if((_key_comp == ((modelica_integer) -1)))
{
tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = omc_AvlSetString_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 4))), _inKey);
_tree = tmpMeta7;
}
else
{
if((_key_comp == ((modelica_integer) 1)))
{
tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[5] = omc_AvlSetString_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey);
_tree = tmpMeta8;
}
}
tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_AvlSetString_balance(threadData, _tree));
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_key = tmpMeta9;
_key_comp = omc_AvlSetString_keyCompare(threadData, _inKey, _key);
if((_key_comp == ((modelica_integer) -1)))
{
tmpMeta10 = mmc_mk_box2(4, &AvlSetString_Tree_LEAF__desc, _inKey);
tmpMeta11 = mmc_mk_box5(3, &AvlSetString_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT0);
_outTree = tmpMeta11;
}
else
{
if((_key_comp == ((modelica_integer) 1)))
{
tmpMeta12 = mmc_mk_box2(4, &AvlSetString_Tree_LEAF__desc, _inKey);
tmpMeta13 = mmc_mk_box5(3, &AvlSetString_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT0, tmpMeta12);
_outTree = tmpMeta13;
}
else
{
_outTree = _tree;
}
}
tmpMeta1 = _outTree;
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
_tree = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _tree;
}
DLLExport
modelica_metatype omc_AvlSetString_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues)
{
modelica_metatype _tree = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_tree = __omcQ_24in_5Ftree;
{
modelica_metatype _key;
for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_key = MMC_CAR(tmpMeta1);
_tree = omc_AvlSetString_add(threadData, _tree, _key);
}
}
_return: OMC_LABEL_UNUSED
return _tree;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlSetString_balance(threadData_t *threadData, modelica_metatype _inTree)
{
modelica_metatype _outTree = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outTree = _inTree;
{
modelica_metatype tmp4_1;
tmp4_1 = _outTree;
{
modelica_integer _lh;
modelica_integer _rh;
modelica_integer _diff;
modelica_metatype _balanced_tree = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
tmpMeta1 = _inTree;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
_lh = omc_AvlSetString_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))));
_rh = omc_AvlSetString_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));
_diff = _lh - _rh;
if((_diff < ((modelica_integer) -1)))
{
_balanced_tree = ((omc_AvlSetString_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) > ((modelica_integer) 0))?omc_AvlSetString_rotateLeft(threadData, omc_AvlSetString_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), omc_AvlSetString_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))))):omc_AvlSetString_rotateLeft(threadData, _outTree));
}
else
{
if((_diff > ((modelica_integer) 1)))
{
_balanced_tree = ((omc_AvlSetString_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))) < ((modelica_integer) 0))?omc_AvlSetString_rotateRight(threadData, omc_AvlSetString_setTreeLeftRight(threadData, _outTree, omc_AvlSetString_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))):omc_AvlSetString_rotateRight(threadData, _outTree));
}
else
{
if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 3)))) != ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh))))
{
tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outTree), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh)));
_outTree = tmpMeta6;
_balanced_tree = _outTree;
}
else
{
_balanced_tree = _outTree;
}
}
}
tmpMeta1 = _balanced_tree;
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
_outTree = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outTree;
}
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlSetString_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_integer _outBalance;
modelica_integer tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inNode;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmp1 = omc_AvlSetString_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 4)))) - omc_AvlSetString_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5))));
goto tmp3_done;
}
case 4: {
tmp1 = ((modelica_integer) 0);
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmp1 = ((modelica_integer) 0);
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
_outBalance = tmp1;
_return: OMC_LABEL_UNUSED
return _outBalance;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlSetString_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_integer _outBalance;
modelica_metatype out_outBalance;
_outBalance = omc_AvlSetString_calculateBalance(threadData, _inNode);
out_outBalance = mmc_mk_icon(_outBalance);
return out_outBalance;
}
DLLExport
modelica_boolean omc_AvlSetString_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey)
{
modelica_boolean _comp;
modelica_string _key = NULL;
modelica_integer _key_comp;
modelica_metatype _tree = NULL;
modelica_string tmp1 = 0;
modelica_boolean tmp5 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_comp = 0;
{
modelica_metatype tmp4_1;
tmp4_1 = _inTree;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
goto tmp3_done;
}
case 4: {
tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
goto tmp3_done;
}
case 5: {
goto _return;
goto goto_2;
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
_key = tmp1;
_key_comp = omc_AvlSetString_keyCompare(threadData, _inKey, _key);
{
modelica_integer tmp8_1;modelica_metatype tmp8_2;
tmp8_1 = _key_comp;
tmp8_2 = _inTree;
{
volatile mmc_switch_type tmp8;
int tmp9;
tmp8 = 0;
for (; tmp8 < 4; tmp8++) {
switch (MMC_SWITCH_CAST(tmp8)) {
case 0: {
if (0 != tmp8_1) goto tmp7_end;
tmp5 = 1;
goto tmp7_done;
}
case 1: {
modelica_metatype tmpMeta10;
if (1 != tmp8_1) goto tmp7_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,4) == 0) goto tmp7_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
_tree = tmpMeta10;
_inTree = _tree;
goto _tailrecursive;
goto tmp7_done;
}
case 2: {
modelica_metatype tmpMeta11;
if (-1 != tmp8_1) goto tmp7_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,4) == 0) goto tmp7_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 4));
_tree = tmpMeta11;
_inTree = _tree;
goto _tailrecursive;
goto tmp7_done;
}
case 3: {
tmp5 = 0;
goto tmp7_done;
}
}
goto tmp7_end;
tmp7_end: ;
}
goto goto_6;
goto_6:;
MMC_THROW_INTERNAL();
goto tmp7_done;
tmp7_done:;
}
}
_comp = tmp5;
_return: OMC_LABEL_UNUSED
return _comp;
}
modelica_metatype boxptr_AvlSetString_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
modelica_boolean _comp;
modelica_metatype out_comp;
_comp = omc_AvlSetString_hasKey(threadData, _inTree, _inKey);
out_comp = mmc_mk_icon(_comp);
return out_comp;
}
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlSetString_height(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_integer _outHeight;
modelica_integer tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inNode;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3))));
goto tmp3_done;
}
case 4: {
tmp1 = ((modelica_integer) 1);
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmp1 = ((modelica_integer) 0);
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
_outHeight = tmp1;
_return: OMC_LABEL_UNUSED
return _outHeight;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlSetString_height(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_integer _outHeight;
modelica_metatype out_outHeight;
_outHeight = omc_AvlSetString_height(threadData, _inNode);
out_outHeight = mmc_mk_icon(_outHeight);
return out_outHeight;
}
DLLExport
modelica_metatype omc_AvlSetString_intersection(threadData_t *threadData, modelica_metatype _tree1, modelica_metatype _tree2, modelica_metatype *out_rest1, modelica_metatype *out_rest2)
{
modelica_metatype _intersect = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _keylist1 = NULL;
modelica_metatype _keylist2 = NULL;
modelica_string _k1 = NULL;
modelica_string _k2 = NULL;
modelica_integer _key_comp;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_intersect = _OMC_LIT0;
_rest1 = _OMC_LIT0;
_rest2 = _OMC_LIT0;
if(omc_AvlSetString_isEmpty(threadData, _tree1))
{
_rest2 = _tree2;
goto _return;
}
if(omc_AvlSetString_isEmpty(threadData, _tree2))
{
_rest1 = _tree1;
goto _return;
}
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta2 = omc_AvlSetString_listKeys(threadData, _tree1, tmpMeta1);
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_k1 = tmpMeta3;
_keylist1 = tmpMeta4;
tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta6 = omc_AvlSetString_listKeys(threadData, _tree2, tmpMeta5);
if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
tmpMeta7 = MMC_CAR(tmpMeta6);
tmpMeta8 = MMC_CDR(tmpMeta6);
_k2 = tmpMeta7;
_keylist2 = tmpMeta8;
while(1)
{
if(!1) break;
_key_comp = omc_AvlSetString_keyCompare(threadData, _k1, _k2);
if((_key_comp > ((modelica_integer) 0)))
{
if(isPresent(_rest2))
{
_rest2 = omc_AvlSetString_add(threadData, _rest2, _k2);
}
if(listEmpty(_keylist2))
{
break;
}
tmpMeta9 = _keylist2;
if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
tmpMeta10 = MMC_CAR(tmpMeta9);
tmpMeta11 = MMC_CDR(tmpMeta9);
_k2 = tmpMeta10;
_keylist2 = tmpMeta11;
}
else
{
if((_key_comp < ((modelica_integer) 0)))
{
if(isPresent(_rest1))
{
_rest1 = omc_AvlSetString_add(threadData, _rest1, _k1);
}
if(listEmpty(_keylist1))
{
break;
}
tmpMeta12 = _keylist1;
if (listEmpty(tmpMeta12)) MMC_THROW_INTERNAL();
tmpMeta13 = MMC_CAR(tmpMeta12);
tmpMeta14 = MMC_CDR(tmpMeta12);
_k1 = tmpMeta13;
_keylist1 = tmpMeta14;
}
else
{
_intersect = omc_AvlSetString_add(threadData, _intersect, _k1);
if((listEmpty(_keylist1) || listEmpty(_keylist2)))
{
break;
}
tmpMeta15 = _keylist1;
if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
tmpMeta16 = MMC_CAR(tmpMeta15);
tmpMeta17 = MMC_CDR(tmpMeta15);
_k1 = tmpMeta16;
_keylist1 = tmpMeta17;
tmpMeta18 = _keylist2;
if (listEmpty(tmpMeta18)) MMC_THROW_INTERNAL();
tmpMeta19 = MMC_CAR(tmpMeta18);
tmpMeta20 = MMC_CDR(tmpMeta18);
_k2 = tmpMeta19;
_keylist2 = tmpMeta20;
}
}
}
if((isPresent(_rest1) && (!listEmpty(_keylist1))))
{
{
modelica_metatype _key;
for (tmpMeta21 = _keylist1; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
{
_key = MMC_CAR(tmpMeta21);
_rest1 = omc_AvlSetString_add(threadData, _rest1, _key);
}
}
}
if((isPresent(_rest2) && (!listEmpty(_keylist2))))
{
{
modelica_metatype _key;
for (tmpMeta23 = _keylist2; !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
{
_key = MMC_CAR(tmpMeta23);
_rest2 = omc_AvlSetString_add(threadData, _rest2, _key);
}
}
}
_return: OMC_LABEL_UNUSED
if (out_rest1) { *out_rest1 = _rest1; }
if (out_rest2) { *out_rest2 = _rest2; }
return _intersect;
}
DLLExport
modelica_boolean omc_AvlSetString_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
modelica_boolean _isEmpty;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _tree;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
tmp1 = 0;
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
_isEmpty = tmp1;
_return: OMC_LABEL_UNUSED
return _isEmpty;
}
modelica_metatype boxptr_AvlSetString_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
modelica_boolean _isEmpty;
modelica_metatype out_isEmpty;
_isEmpty = omc_AvlSetString_isEmpty(threadData, _tree);
out_isEmpty = mmc_mk_icon(_isEmpty);
return out_isEmpty;
}
DLLExport
modelica_metatype omc_AvlSetString_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin)
{
modelica_metatype _tree = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_tree = __omcQ_24in_5Ftree;
{
modelica_metatype tmp4_1;
tmp4_1 = _treeToJoin;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
tmpMeta1 = _tree;
goto tmp3_done;
}
case 3: {
_tree = omc_AvlSetString_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))));
_tree = omc_AvlSetString_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 4))));
__omcQ_24in_5Ftree = _tree;
_treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5)));
goto _tailrecursive;
goto tmp3_done;
}
case 4: {
tmpMeta1 = omc_AvlSetString_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))));
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
_tree = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _tree;
}
DLLExport
modelica_integer omc_AvlSetString_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2)
{
modelica_integer _outResult;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = stringCompare(_inKey1, _inKey2);
_return: OMC_LABEL_UNUSED
return _outResult;
}
modelica_metatype boxptr_AvlSetString_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
modelica_integer _outResult;
modelica_metatype out_outResult;
_outResult = omc_AvlSetString_keyCompare(threadData, _inKey1, _inKey2);
out_outResult = mmc_mk_icon(_outResult);
return out_outResult;
}
DLLExport
modelica_string omc_AvlSetString_keyStr(threadData_t *threadData, modelica_string _inKey)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = _inKey;
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_metatype omc_AvlSetString_listKeys(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_lst = __omcQ_24in_5Flst;
{
modelica_metatype tmp4_1;
tmp4_1 = _inTree;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 4: {
modelica_metatype tmpMeta5;
tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
tmpMeta1 = tmpMeta5;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta6;
_lst = omc_AvlSetString_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);
tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
_lst = tmpMeta6;
_inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 4)));
__omcQ_24in_5Flst = _lst;
goto _tailrecursive;
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmpMeta1 = _lst;
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
_lst = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _lst;
}
DLLExport
modelica_metatype omc_AvlSetString_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_lst = __omcQ_24in_5Flst;
{
modelica_metatype tmp4_1;
tmp4_1 = _inTree;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 4: {
modelica_metatype tmpMeta5;
tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
tmpMeta1 = tmpMeta5;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta6;
_lst = omc_AvlSetString_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 4))), _lst);
tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
_lst = tmpMeta6;
_inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5)));
__omcQ_24in_5Flst = _lst;
goto _tailrecursive;
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmpMeta1 = _lst;
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
_lst = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _lst;
}
DLLExport
modelica_metatype omc_AvlSetString_new(threadData_t *threadData)
{
modelica_metatype _outTree = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outTree = _OMC_LIT0;
_return: OMC_LABEL_UNUSED
return _outTree;
}
DLLExport
modelica_string omc_AvlSetString_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmp1 = omc_AvlSetString_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2))));
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
tmp1 = omc_AvlSetString_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2))));
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
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_AvlSetString_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
{
modelica_string _outString = NULL;
modelica_metatype _left = NULL;
modelica_metatype _right = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inTree;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
tmp1 = _OMC_LIT1;
goto tmp3_done;
}
case 4: {
tmp1 = omc_AvlSetString_printNodeStr(threadData, _inTree);
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
_left = tmpMeta5;
_right = tmpMeta6;
tmpMeta7 = stringAppend(omc_AvlSetString_printTreeStr2(threadData, _left, 1, _OMC_LIT2),omc_AvlSetString_printNodeStr(threadData, _inTree));
tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT3);
tmpMeta9 = stringAppend(tmpMeta8,omc_AvlSetString_printTreeStr2(threadData, _right, 0, _OMC_LIT2));
tmp1 = tmpMeta9;
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
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_string omc_AvlSetString_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
{
modelica_string _outString = NULL;
modelica_metatype _val_node = NULL;
modelica_metatype _left = NULL;
modelica_metatype _right = NULL;
modelica_string _left_str = NULL;
modelica_string _right_str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inTree;
{
volatile mmc_switch_type tmp4;
int tmp5;
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
modelica_metatype tmpMeta13;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmpMeta6 = stringAppend(_inIndent,(_isLeft?_OMC_LIT4:_OMC_LIT5));
tmpMeta7 = stringAppend(omc_AvlSetString_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 4))), 1, tmpMeta6),_inIndent);
tmpMeta8 = stringAppend(tmpMeta7,(_isLeft?_OMC_LIT6:_OMC_LIT7));
tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT8);
tmpMeta10 = stringAppend(tmpMeta9,omc_AvlSetString_printNodeStr(threadData, _inTree));
tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT3);
tmpMeta12 = stringAppend(_inIndent,(_isLeft?_OMC_LIT5:_OMC_LIT4));
tmpMeta13 = stringAppend(tmpMeta11,omc_AvlSetString_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 0, tmpMeta12));
tmp1 = tmpMeta13;
goto tmp3_done;
}
case 1: {
tmp1 = _OMC_LIT2;
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
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlSetString_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
modelica_integer tmp1;
modelica_string _outString = NULL;
tmp1 = mmc_unbox_integer(_isLeft);
_outString = omc_AvlSetString_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_AvlSetString_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
modelica_boolean _b;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _t1;
tmp4_2 = _t2;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
tmp1 = referenceEq(_t1, _t2);
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
_b = tmp1;
_return: OMC_LABEL_UNUSED
return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlSetString_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_AvlSetString_referenceEqOrEmpty(threadData, _t1, _t2);
out_b = mmc_mk_icon(_b);
return out_b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlSetString_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_metatype _outNode = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outNode = _inNode;
{
modelica_metatype tmp4_1;
tmp4_1 = _outNode;
{
modelica_metatype _node = NULL;
modelica_metatype _child = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
_child = tmpMeta6;
_node = omc_AvlSetString_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 4))));
tmpMeta1 = omc_AvlSetString_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
_child = tmpMeta7;
_node = omc_AvlSetString_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 4))), _OMC_LIT0);
tmpMeta1 = omc_AvlSetString_setTreeLeftRight(threadData, _child, _node, _OMC_LIT0);
goto tmp3_done;
}
case 2: {
tmpMeta1 = _inNode;
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
_outNode = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outNode;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlSetString_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_metatype _outNode = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outNode = _inNode;
{
modelica_metatype tmp4_1;
tmp4_1 = _outNode;
{
modelica_metatype _node = NULL;
modelica_metatype _child = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
_child = tmpMeta6;
_node = omc_AvlSetString_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))));
tmpMeta1 = omc_AvlSetString_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 4))), _node);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
_child = tmpMeta7;
_node = omc_AvlSetString_setTreeLeftRight(threadData, _outNode, _OMC_LIT0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))));
tmpMeta1 = omc_AvlSetString_setTreeLeftRight(threadData, _child, _OMC_LIT0, _node);
goto tmp3_done;
}
case 2: {
tmpMeta1 = _inNode;
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
_outNode = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outNode;
}
DLLExport
modelica_metatype omc_AvlSetString_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
{
modelica_metatype _res = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
tmp4_1 = _orig;
tmp4_2 = _left;
tmp4_3 = _right;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
tmpMeta6 = mmc_mk_box2(4, &AvlSetString_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))));
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
tmpMeta1 = _orig;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta7;
modelica_boolean tmp8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
tmp8 = (modelica_boolean)(omc_AvlSetString_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 4))), _left) && omc_AvlSetString_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _right));
if(tmp8)
{
tmpMeta9 = _orig;
}
else
{
tmpMeta7 = mmc_mk_box5(3, &AvlSetString_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_AvlSetString_height(threadData, _left)),(modelica_integer)(omc_AvlSetString_height(threadData, _right)))), _left, _right);
tmpMeta9 = tmpMeta7;
}
tmpMeta1 = tmpMeta9;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta10;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
tmpMeta10 = mmc_mk_box5(3, &AvlSetString_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_AvlSetString_height(threadData, _left)),(modelica_integer)(omc_AvlSetString_height(threadData, _right)))), _left, _right);
tmpMeta1 = tmpMeta10;
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
_res = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _res;
}
