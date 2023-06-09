#ifdef OMC_BASE_FILE
#define OMC_FILE OMC_BASE_FILE
#else
#define OMC_FILE "AvlTreeStringString.c"
#endif
#include "omc_simulation_settings.h"
#include "AvlTreeStringString.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&AvlTreeStringString_Tree_EMPTY__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,7,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,5,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,7,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,4,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,4,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,12,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#include "util/modelica.h"
#include "AvlTreeStringString_includes.h"
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTreeStringString_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeStringString_balance,2,0) {(void*) boxptr_AvlTreeStringString_balance,0}};
#define boxvar_AvlTreeStringString_balance MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeStringString_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlTreeStringString_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTreeStringString_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeStringString_calculateBalance,2,0) {(void*) boxptr_AvlTreeStringString_calculateBalance,0}};
#define boxvar_AvlTreeStringString_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeStringString_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlTreeStringString_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTreeStringString_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeStringString_height,2,0) {(void*) boxptr_AvlTreeStringString_height,0}};
#define boxvar_AvlTreeStringString_height MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeStringString_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_AvlTreeStringString_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTreeStringString_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeStringString_printTreeStr2,2,0) {(void*) boxptr_AvlTreeStringString_printTreeStr2,0}};
#define boxvar_AvlTreeStringString_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeStringString_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_AvlTreeStringString_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTreeStringString_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeStringString_referenceEqOrEmpty,2,0) {(void*) boxptr_AvlTreeStringString_referenceEqOrEmpty,0}};
#define boxvar_AvlTreeStringString_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeStringString_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTreeStringString_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeStringString_rotateLeft,2,0) {(void*) boxptr_AvlTreeStringString_rotateLeft,0}};
#define boxvar_AvlTreeStringString_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeStringString_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTreeStringString_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeStringString_rotateRight,2,0) {(void*) boxptr_AvlTreeStringString_rotateRight,0}};
#define boxvar_AvlTreeStringString_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeStringString_rotateRight)
DLLExport
modelica_metatype omc_AvlTreeStringString_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey, modelica_string _inValue, modelica_fnptr _conflictFunc)
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
modelica_string _value = NULL;
modelica_integer _key_comp;
modelica_metatype _outTree = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
modelica_metatype tmpMeta5;
tmpMeta5 = mmc_mk_box3(4, &AvlTreeStringString_Tree_LEAF__desc, _inKey, _inValue);
tmpMeta1 = tmpMeta5;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_key = tmpMeta6;
_key_comp = omc_AvlTreeStringString_keyCompare(threadData, _inKey, _key);
if((_key_comp == ((modelica_integer) -1)))
{
tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_AvlTreeStringString_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
_tree = tmpMeta7;
}
else
{
if((_key_comp == ((modelica_integer) 1)))
{
tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_AvlTreeStringString_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
_tree = tmpMeta8;
}
else
{
_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key);
if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
{
tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
_tree = tmpMeta9;
}
}
}
tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_AvlTreeStringString_balance(threadData, _tree));
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_key = tmpMeta10;
_key_comp = omc_AvlTreeStringString_keyCompare(threadData, _inKey, _key);
if((_key_comp == ((modelica_integer) -1)))
{
tmpMeta11 = mmc_mk_box3(4, &AvlTreeStringString_Tree_LEAF__desc, _inKey, _inValue);
tmpMeta12 = mmc_mk_box6(3, &AvlTreeStringString_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta11, _OMC_LIT0);
_outTree = tmpMeta12;
}
else
{
if((_key_comp == ((modelica_integer) 1)))
{
tmpMeta13 = mmc_mk_box3(4, &AvlTreeStringString_Tree_LEAF__desc, _inKey, _inValue);
tmpMeta14 = mmc_mk_box6(3, &AvlTreeStringString_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT0, tmpMeta13);
_outTree = tmpMeta14;
}
else
{
_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key);
if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
{
tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(4));
memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = _value;
_tree = tmpMeta15;
}
_outTree = _tree;
}
}
tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_AvlTreeStringString_balance(threadData, _outTree));
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
modelica_string omc_AvlTreeStringString_addConflictDefault(threadData_t *threadData, modelica_string _newValue, modelica_string _oldValue, modelica_string _key)
{
modelica_string _value = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return _value;
}
DLLExport
modelica_string omc_AvlTreeStringString_addConflictFail(threadData_t *threadData, modelica_string _newValue, modelica_string _oldValue, modelica_string _key)
{
modelica_string _value = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return _value;
}
DLLExport
modelica_string omc_AvlTreeStringString_addConflictKeep(threadData_t *threadData, modelica_string _newValue, modelica_string _oldValue, modelica_string _key)
{
modelica_string _value = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_value = _oldValue;
_return: OMC_LABEL_UNUSED
return _value;
}
DLLExport
modelica_string omc_AvlTreeStringString_addConflictReplace(threadData_t *threadData, modelica_string _newValue, modelica_string _oldValue, modelica_string _key)
{
modelica_string _value = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_value = _newValue;
_return: OMC_LABEL_UNUSED
return _value;
}
DLLExport
modelica_metatype omc_AvlTreeStringString_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
modelica_metatype _tree = NULL;
modelica_string _key = NULL;
modelica_string _value = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_tree = __omcQ_24in_5Ftree;
{
modelica_metatype _t;
for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_t = MMC_CAR(tmpMeta1);
tmpMeta2 = _t;
tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
_key = tmpMeta3;
_value = tmpMeta4;
_tree = omc_AvlTreeStringString_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
}
}
_return: OMC_LABEL_UNUSED
return _tree;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTreeStringString_balance(threadData_t *threadData, modelica_metatype _inTree)
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta1 = _inTree;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
_lh = omc_AvlTreeStringString_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));
_rh = omc_AvlTreeStringString_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))));
_diff = _lh - _rh;
if((_diff < ((modelica_integer) -1)))
{
_balanced_tree = ((omc_AvlTreeStringString_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))) > ((modelica_integer) 0))?omc_AvlTreeStringString_rotateLeft(threadData, omc_AvlTreeStringString_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), omc_AvlTreeStringString_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))):omc_AvlTreeStringString_rotateLeft(threadData, _outTree));
}
else
{
if((_diff > ((modelica_integer) 1)))
{
_balanced_tree = ((omc_AvlTreeStringString_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) < ((modelica_integer) 0))?omc_AvlTreeStringString_rotateRight(threadData, omc_AvlTreeStringString_setTreeLeftRight(threadData, _outTree, omc_AvlTreeStringString_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))):omc_AvlTreeStringString_rotateRight(threadData, _outTree));
}
else
{
if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))) != ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh))))
{
tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh)));
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
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlTreeStringString_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
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
tmp1 = omc_AvlTreeStringString_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5)))) - omc_AvlTreeStringString_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 6))));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTreeStringString_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_integer _outBalance;
modelica_metatype out_outBalance;
_outBalance = omc_AvlTreeStringString_calculateBalance(threadData, _inNode);
out_outBalance = mmc_mk_icon(_outBalance);
return out_outBalance;
}
DLLExport
modelica_metatype omc_AvlTreeStringString_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype tmp4_1;
tmp4_1 = _inTree;
{
modelica_string _key = NULL;
modelica_string _value = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_key = tmpMeta5;
_value = tmpMeta6;
_outResult = omc_AvlTreeStringString_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), ((modelica_fnptr) _inFunc), _outResult);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
_inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
_inStartValue = _outResult;
goto _tailrecursive;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_key = tmpMeta7;
_value = tmpMeta8;
tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmpMeta1 = _outResult;
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
_outResult = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_AvlTreeStringString_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
{
modelica_metatype _value = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_value = __omcQ_24in_5Fvalue;
{
modelica_metatype tmp4_1;
tmp4_1 = _tree;
{
modelica_boolean _c;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
modelica_metatype tmpMeta5;
modelica_integer tmp6;
modelica_metatype tmpMeta7;
tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5);
_value = tmpMeta7;
tmp6 = mmc_unbox_integer(tmpMeta5);
_c = tmp6;
if(_c)
{
_value = omc_AvlTreeStringString_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _value);
_value = omc_AvlTreeStringString_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _value);
}
tmpMeta1 = _value;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta8;
tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL);
_value = tmpMeta8;
tmpMeta1 = _value;
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmpMeta1 = _value;
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
_value = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _value;
}
DLLExport
modelica_metatype omc_AvlTreeStringString_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
{
modelica_metatype _foldArg1 = NULL;
modelica_metatype _foldArg2 = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_foldArg1 = __omcQ_24in_5FfoldArg1;
_foldArg2 = __omcQ_24in_5FfoldArg2;
{
modelica_metatype tmp3_1;
tmp3_1 = _tree;
{
int tmp3;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
case 3: {
_foldArg1 = omc_AvlTreeStringString_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
_foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);
_foldArg1 = omc_AvlTreeStringString_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
goto tmp2_done;
}
case 4: {
_foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);
goto tmp2_done;
}
default:
tmp2_default: OMC_LABEL_UNUSED; {
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
if (out_foldArg2) { *out_foldArg2 = _foldArg2; }
return _foldArg1;
}
DLLExport
void omc_AvlTreeStringString_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp3_1;
tmp3_1 = _tree;
{
int tmp3;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
case 3: {
omc_AvlTreeStringString_forEach(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _func));
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
_tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
goto _tailrecursive;
;
goto tmp2_done;
}
case 4: {
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
goto tmp2_done;
}
case 5: {
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
modelica_metatype omc_AvlTreeStringString_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
modelica_metatype _tree = NULL;
modelica_string _key = NULL;
modelica_string _value = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_tree = _OMC_LIT0;
{
modelica_metatype _t;
for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_t = MMC_CAR(tmpMeta1);
tmpMeta2 = _t;
tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
_key = tmpMeta3;
_value = tmpMeta4;
_tree = omc_AvlTreeStringString_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
}
}
_return: OMC_LABEL_UNUSED
return _tree;
}
DLLExport
modelica_string omc_AvlTreeStringString_get(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
modelica_string _value = NULL;
modelica_string _k = NULL;
modelica_string tmp1 = 0;
modelica_string tmp6 = 0;
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
_k = tmp1;
{
modelica_integer tmp9_1;modelica_metatype tmp9_2;
tmp9_1 = omc_AvlTreeStringString_keyCompare(threadData, _key, _k);
tmp9_2 = _tree;
{
volatile mmc_switch_type tmp9;
int tmp10;
tmp9 = 0;
for (; tmp9 < 4; tmp9++) {
switch (MMC_SWITCH_CAST(tmp9)) {
case 0: {
if (0 != tmp9_1) goto tmp8_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,1,2) == 0) goto tmp8_end;
tmp6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
goto tmp8_done;
}
case 1: {
if (0 != tmp9_1) goto tmp8_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
tmp6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
goto tmp8_done;
}
case 2: {
if (1 != tmp9_1) goto tmp8_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
_tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
goto _tailrecursive;
goto tmp8_done;
}
case 3: {
if (-1 != tmp9_1) goto tmp8_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
_tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
goto _tailrecursive;
goto tmp8_done;
}
}
goto tmp8_end;
tmp8_end: ;
}
goto goto_7;
goto_7:;
MMC_THROW_INTERNAL();
goto tmp8_done;
tmp8_done:;
}
}
_value = tmp6;
_return: OMC_LABEL_UNUSED
return _value;
}
DLLExport
modelica_metatype omc_AvlTreeStringString_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
modelica_metatype _value = NULL;
modelica_string _k = NULL;
modelica_string tmp1 = 0;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _tree;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
goto tmp3_done;
}
case 4: {
tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmp1 = _key;
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
_k = tmp1;
{
modelica_integer tmp8_1;modelica_metatype tmp8_2;
tmp8_1 = omc_AvlTreeStringString_keyCompare(threadData, _key, _k);
tmp8_2 = _tree;
{
volatile mmc_switch_type tmp8;
int tmp9;
tmp8 = 0;
for (; tmp8 < 5; tmp8++) {
switch (MMC_SWITCH_CAST(tmp8)) {
case 0: {
if (0 != tmp8_1) goto tmp7_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,1,2) == 0) goto tmp7_end;
tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
goto tmp7_done;
}
case 1: {
if (0 != tmp8_1) goto tmp7_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
goto tmp7_done;
}
case 2: {
if (1 != tmp8_1) goto tmp7_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
_tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
goto _tailrecursive;
goto tmp7_done;
}
case 3: {
if (-1 != tmp8_1) goto tmp7_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
_tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
goto _tailrecursive;
goto tmp7_done;
}
case 4: {
tmpMeta5 = mmc_mk_none();
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
_value = tmpMeta5;
_return: OMC_LABEL_UNUSED
return _value;
}
DLLExport
modelica_boolean omc_AvlTreeStringString_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey)
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
_key_comp = omc_AvlTreeStringString_keyCompare(threadData, _inKey, _key);
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
if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 6));
_tree = tmpMeta10;
_inTree = _tree;
goto _tailrecursive;
goto tmp7_done;
}
case 2: {
modelica_metatype tmpMeta11;
if (-1 != tmp8_1) goto tmp7_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
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
modelica_metatype boxptr_AvlTreeStringString_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
modelica_boolean _comp;
modelica_metatype out_comp;
_comp = omc_AvlTreeStringString_hasKey(threadData, _inTree, _inKey);
out_comp = mmc_mk_icon(_comp);
return out_comp;
}
PROTECTED_FUNCTION_STATIC modelica_integer omc_AvlTreeStringString_height(threadData_t *threadData, modelica_metatype _inNode)
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
tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 4))));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTreeStringString_height(threadData_t *threadData, modelica_metatype _inNode)
{
modelica_integer _outHeight;
modelica_metatype out_outHeight;
_outHeight = omc_AvlTreeStringString_height(threadData, _inNode);
out_outHeight = mmc_mk_icon(_outHeight);
return out_outHeight;
}
DLLExport
void omc_AvlTreeStringString_intersection(threadData_t *threadData)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_boolean omc_AvlTreeStringString_isEmpty(threadData_t *threadData, modelica_metatype _tree)
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
modelica_metatype boxptr_AvlTreeStringString_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
modelica_boolean _isEmpty;
modelica_metatype out_isEmpty;
_isEmpty = omc_AvlTreeStringString_isEmpty(threadData, _tree);
out_isEmpty = mmc_mk_icon(_isEmpty);
return out_isEmpty;
}
DLLExport
modelica_metatype omc_AvlTreeStringString_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
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
_tree = omc_AvlTreeStringString_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));
_tree = omc_AvlTreeStringString_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5))), ((modelica_fnptr) _conflictFunc));
__omcQ_24in_5Ftree = _tree;
_treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 6)));
goto _tailrecursive;
goto tmp3_done;
}
case 4: {
tmpMeta1 = omc_AvlTreeStringString_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));
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
modelica_integer omc_AvlTreeStringString_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2)
{
modelica_integer _outResult;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = stringCompare(_inKey1, _inKey2);
_return: OMC_LABEL_UNUSED
return _outResult;
}
modelica_metatype boxptr_AvlTreeStringString_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
modelica_integer _outResult;
modelica_metatype out_outResult;
_outResult = omc_AvlTreeStringString_keyCompare(threadData, _inKey1, _inKey2);
out_outResult = mmc_mk_icon(_outResult);
return out_outResult;
}
DLLExport
modelica_string omc_AvlTreeStringString_keyStr(threadData_t *threadData, modelica_string _inKey)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = _inKey;
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_metatype omc_AvlTreeStringString_listKeys(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
_lst = omc_AvlTreeStringString_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), _lst);
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
modelica_metatype omc_AvlTreeStringString_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
_lst = omc_AvlTreeStringString_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);
tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
_lst = tmpMeta6;
_inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
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
modelica_metatype omc_AvlTreeStringString_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_lst = __omcQ_24in_5Flst;
{
modelica_metatype tmp4_1;
tmp4_1 = _tree;
{
modelica_string _value = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_value = tmpMeta5;
_lst = omc_AvlTreeStringString_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);
tmpMeta6 = mmc_mk_cons(_value, _lst);
_lst = tmpMeta6;
_tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
__omcQ_24in_5Flst = _lst;
goto _tailrecursive;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_value = tmpMeta7;
tmpMeta8 = mmc_mk_cons(_value, _lst);
tmpMeta1 = tmpMeta8;
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
modelica_metatype omc_AvlTreeStringString_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
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
modelica_string _key = NULL;
modelica_string _value = NULL;
modelica_string _new_value = NULL;
modelica_metatype _new_branch = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_key = tmpMeta5;
_value = tmpMeta6;
_new_branch = omc_AvlTreeStringString_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc));
if((!referenceEq(_new_branch, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))))
{
tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = _new_branch;
_outTree = tmpMeta7;
}
_new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);
if((!referenceEq(_value, _new_value)))
{
tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _new_value;
_outTree = tmpMeta8;
}
_new_branch = omc_AvlTreeStringString_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc));
if((!referenceEq(_new_branch, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))))
{
tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[6] = _new_branch;
_outTree = tmpMeta9;
}
tmpMeta1 = _outTree;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_key = tmpMeta10;
_value = tmpMeta11;
_new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);
if((!referenceEq(_value, _new_value)))
{
tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = _new_value;
_outTree = tmpMeta12;
}
tmpMeta1 = _outTree;
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmpMeta1 = _inTree;
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
DLLExport
modelica_metatype omc_AvlTreeStringString_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
modelica_metatype _outTree = NULL;
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outTree = _inTree;
_outResult = _inStartValue;
{
modelica_metatype tmp4_1;
tmp4_1 = _outTree;
{
modelica_string _key = NULL;
modelica_string _value = NULL;
modelica_string _new_value = NULL;
modelica_metatype _new_branch = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_key = tmpMeta5;
_value = tmpMeta6;
_new_branch = omc_AvlTreeStringString_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);
if((!referenceEq(_new_branch, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))))
{
tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = _new_branch;
_outTree = tmpMeta7;
}
_new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);
if((!referenceEq(_value, _new_value)))
{
tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _new_value;
_outTree = tmpMeta8;
}
_new_branch = omc_AvlTreeStringString_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);
if((!referenceEq(_new_branch, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))))
{
tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[6] = _new_branch;
_outTree = tmpMeta9;
}
tmpMeta1 = _outTree;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_key = tmpMeta10;
_value = tmpMeta11;
_new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);
if((!referenceEq(_value, _new_value)))
{
tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = _new_value;
_outTree = tmpMeta12;
}
tmpMeta1 = _outTree;
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmpMeta1 = _inTree;
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
if (out_outResult) { *out_outResult = _outResult; }
return _outTree;
}
DLLExport
modelica_metatype omc_AvlTreeStringString_new(threadData_t *threadData)
{
modelica_metatype _outTree = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outTree = _OMC_LIT0;
_return: OMC_LABEL_UNUSED
return _outTree;
}
DLLExport
modelica_string omc_AvlTreeStringString_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
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
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = stringAppend(_OMC_LIT1,omc_AvlTreeStringString_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
tmpMeta8 = stringAppend(tmpMeta7,omc_AvlTreeStringString_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT3);
tmp1 = tmpMeta9;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta10 = stringAppend(_OMC_LIT1,omc_AvlTreeStringString_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT2);
tmpMeta12 = stringAppend(tmpMeta11,omc_AvlTreeStringString_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT3);
tmp1 = tmpMeta13;
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
modelica_string omc_AvlTreeStringString_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
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
tmp1 = _OMC_LIT4;
goto tmp3_done;
}
case 4: {
tmp1 = omc_AvlTreeStringString_printNodeStr(threadData, _inTree);
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_left = tmpMeta5;
_right = tmpMeta6;
tmpMeta7 = stringAppend(omc_AvlTreeStringString_printTreeStr2(threadData, _left, 1, _OMC_LIT5),omc_AvlTreeStringString_printNodeStr(threadData, _inTree));
tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT6);
tmpMeta9 = stringAppend(tmpMeta8,omc_AvlTreeStringString_printTreeStr2(threadData, _right, 0, _OMC_LIT5));
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
PROTECTED_FUNCTION_STATIC modelica_string omc_AvlTreeStringString_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = stringAppend(_inIndent,(_isLeft?_OMC_LIT7:_OMC_LIT8));
tmpMeta7 = stringAppend(omc_AvlTreeStringString_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 1, tmpMeta6),_inIndent);
tmpMeta8 = stringAppend(tmpMeta7,(_isLeft?_OMC_LIT9:_OMC_LIT10));
tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT11);
tmpMeta10 = stringAppend(tmpMeta9,omc_AvlTreeStringString_printNodeStr(threadData, _inTree));
tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT6);
tmpMeta12 = stringAppend(_inIndent,(_isLeft?_OMC_LIT8:_OMC_LIT7));
tmpMeta13 = stringAppend(tmpMeta11,omc_AvlTreeStringString_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), 0, tmpMeta12));
tmp1 = tmpMeta13;
goto tmp3_done;
}
case 1: {
tmp1 = _OMC_LIT5;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTreeStringString_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
modelica_integer tmp1;
modelica_string _outString = NULL;
tmp1 = mmc_unbox_integer(_isLeft);
_outString = omc_AvlTreeStringString_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_AvlTreeStringString_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AvlTreeStringString_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_AvlTreeStringString_referenceEqOrEmpty(threadData, _t1, _t2);
out_b = mmc_mk_icon(_b);
return out_b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTreeStringString_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
_child = tmpMeta6;
_node = omc_AvlTreeStringString_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
tmpMeta1 = omc_AvlTreeStringString_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))));
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
_child = tmpMeta7;
_node = omc_AvlTreeStringString_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), _OMC_LIT0);
tmpMeta1 = omc_AvlTreeStringString_setTreeLeftRight(threadData, _child, _node, _OMC_LIT0);
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
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AvlTreeStringString_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
_child = tmpMeta6;
_node = omc_AvlTreeStringString_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
tmpMeta1 = omc_AvlTreeStringString_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), _node);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
_child = tmpMeta7;
_node = omc_AvlTreeStringString_setTreeLeftRight(threadData, _outNode, _OMC_LIT0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
tmpMeta1 = omc_AvlTreeStringString_setTreeLeftRight(threadData, _child, _OMC_LIT0, _node);
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
modelica_metatype omc_AvlTreeStringString_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
tmpMeta6 = mmc_mk_box3(4, &AvlTreeStringString_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))));
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
tmpMeta1 = _orig;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta7;
modelica_boolean tmp8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmp8 = (modelica_boolean)(omc_AvlTreeStringString_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _left) && omc_AvlTreeStringString_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 6))), _right));
if(tmp8)
{
tmpMeta9 = _orig;
}
else
{
tmpMeta7 = mmc_mk_box6(3, &AvlTreeStringString_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_AvlTreeStringString_height(threadData, _left)),(modelica_integer)(omc_AvlTreeStringString_height(threadData, _right)))), _left, _right);
tmpMeta9 = tmpMeta7;
}
tmpMeta1 = tmpMeta9;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta10;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta10 = mmc_mk_box6(3, &AvlTreeStringString_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_AvlTreeStringString_height(threadData, _left)),(modelica_integer)(omc_AvlTreeStringString_height(threadData, _right)))), _left, _right);
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
DLLExport
modelica_metatype omc_AvlTreeStringString_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
modelica_string _key = NULL;
modelica_string _value = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_key = tmpMeta5;
_value = tmpMeta6;
_lst = omc_AvlTreeStringString_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), _lst);
tmpMeta8 = mmc_mk_box2(0, _key, _value);
tmpMeta7 = mmc_mk_cons(tmpMeta8, _lst);
_lst = tmpMeta7;
_inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5)));
__omcQ_24in_5Flst = _lst;
goto _tailrecursive;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_key = tmpMeta9;
_value = tmpMeta10;
tmpMeta12 = mmc_mk_box2(0, _key, _value);
tmpMeta11 = mmc_mk_cons(tmpMeta12, _lst);
tmpMeta1 = tmpMeta11;
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
modelica_metatype omc_AvlTreeStringString_update(threadData_t *threadData, modelica_metatype _tree, modelica_string _key, modelica_string _value)
{
modelica_metatype _outTree = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outTree = omc_AvlTreeStringString_add(threadData, _tree, _key, _value, boxvar_AvlTreeStringString_addConflictReplace);
_return: OMC_LABEL_UNUSED
return _outTree;
}
DLLExport
modelica_string omc_AvlTreeStringString_valueStr(threadData_t *threadData, modelica_string _inValue)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = _inValue;
_return: OMC_LABEL_UNUSED
return _outString;
}
