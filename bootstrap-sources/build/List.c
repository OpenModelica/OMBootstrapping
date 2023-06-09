#ifdef OMC_BASE_FILE
#define OMC_FILE OMC_BASE_FILE
#else
#define OMC_FILE "List.c"
#endif
#include "omc_simulation_settings.h"
#include "List.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ", ..."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,5,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#include "util/modelica.h"
#include "List_includes.h"
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations4(threadData_t *threadData, modelica_metatype _x, modelica_metatype _ilst, modelica_metatype _iacc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_allCombinations4,2,0) {(void*) boxptr_List_allCombinations4,0}};
#define boxvar_List_allCombinations4 MMC_REFSTRUCTLIT(boxvar_lit_List_allCombinations4)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations3(threadData_t *threadData, modelica_metatype _ilst1, modelica_metatype _ilst2, modelica_metatype _iacc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_allCombinations3,2,0) {(void*) boxptr_List_allCombinations3,0}};
#define boxvar_List_allCombinations3 MMC_REFSTRUCTLIT(boxvar_lit_List_allCombinations3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations2(threadData_t *threadData, modelica_metatype _ilst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_allCombinations2,2,0) {(void*) boxptr_List_allCombinations2,0}};
#define boxvar_List_allCombinations2 MMC_REFSTRUCTLIT(boxvar_lit_List_allCombinations2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap1__tail2(threadData_t *threadData, modelica_metatype _inHead, modelica_metatype _inRest, modelica_fnptr _inMapFunc, modelica_metatype _inArg, modelica_metatype _inCombination, modelica_metatype _inAccumElems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_combinationMap1__tail2,2,0) {(void*) boxptr_List_combinationMap1__tail2,0}};
#define boxvar_List_combinationMap1__tail2 MMC_REFSTRUCTLIT(boxvar_lit_List_combinationMap1__tail2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap1__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inArg, modelica_metatype _inCombination, modelica_metatype _inAccumElems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_combinationMap1__tail,2,0) {(void*) boxptr_List_combinationMap1__tail,0}};
#define boxvar_List_combinationMap1__tail MMC_REFSTRUCTLIT(boxvar_lit_List_combinationMap1__tail)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inCombination, modelica_metatype _inAccumElems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_combinationMap__tail,2,0) {(void*) boxptr_List_combinationMap__tail,0}};
#define boxvar_List_combinationMap__tail MMC_REFSTRUCTLIT(boxvar_lit_List_combinationMap__tail)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combination__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _inCombination, modelica_metatype _inAccumElems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_combination__tail,2,0) {(void*) boxptr_List_combination__tail,0}};
#define boxvar_List_combination__tail MMC_REFSTRUCTLIT(boxvar_lit_List_combination__tail)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_addPos(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inArray, modelica_integer _inIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_List_addPos(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inArray, modelica_metatype _inIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_addPos,2,0) {(void*) boxptr_List_addPos,0}};
#define boxvar_List_addPos MMC_REFSTRUCTLIT(boxvar_lit_List_addPos)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_intersectionIntVec(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inList1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_intersectionIntVec,2,0) {(void*) boxptr_List_intersectionIntVec,0}};
#define boxvar_List_intersectionIntVec MMC_REFSTRUCTLIT(boxvar_lit_List_intersectionIntVec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_uniqueIntNArr1(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inLength, modelica_integer _inMark, modelica_metatype _inMarkArray, modelica_metatype _inAccum);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_List_uniqueIntNArr1(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inLength, modelica_metatype _inMark, modelica_metatype _inMarkArray, modelica_metatype _inAccum);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_uniqueIntNArr1,2,0) {(void*) boxptr_List_uniqueIntNArr1,0}};
#define boxvar_List_uniqueIntNArr1 MMC_REFSTRUCTLIT(boxvar_lit_List_uniqueIntNArr1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_merge(threadData_t *threadData, modelica_metatype _inLeft, modelica_metatype _inRight, modelica_fnptr _inCompFunc, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_merge,2,0) {(void*) boxptr_List_merge,0}};
#define boxvar_List_merge MMC_REFSTRUCTLIT(boxvar_lit_List_merge)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_insertListSorted1(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inList2, modelica_fnptr _inCompFunc, modelica_metatype _inResultList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_List_insertListSorted1,2,0) {(void*) boxptr_List_insertListSorted1,0}};
#define boxvar_List_insertListSorted1 MMC_REFSTRUCTLIT(boxvar_lit_List_insertListSorted1)
DLLExport
modelica_metatype omc_List_trim(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fl, modelica_fnptr _fn)
{
modelica_metatype _l = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_l = __omcQ_24in_5Fl;
while(1)
{
if(!((!listEmpty(_l)) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), listHead(_l)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, listHead(_l))))) break;
_l = listRest(_l);
}
_return: OMC_LABEL_UNUSED
return _l;
}
DLLExport
modelica_metatype omc_List_maxElement(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _lessFn)
{
modelica_metatype _res = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = listHead(_inList);
{
modelica_metatype _e;
for (tmpMeta1 = listRest(_inList); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 2))), _res, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 1)))) (threadData, _res, _e)))
{
_res = _e;
}
}
}
_return: OMC_LABEL_UNUSED
return _res;
}
DLLExport
modelica_metatype omc_List_minElement(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _lessFn)
{
modelica_metatype _res = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = listHead(_inList);
{
modelica_metatype _e;
for (tmpMeta1 = listRest(_inList); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 2))), _e, _res) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lessFn), 1)))) (threadData, _e, _res)))
{
_res = _e;
}
}
}
_return: OMC_LABEL_UNUSED
return _res;
}
DLLExport
modelica_boolean omc_List_contains(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _elem, modelica_fnptr _eqFunc)
{
modelica_boolean _res;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = 0;
{
modelica_metatype _i;
for (tmpMeta1 = _lst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_i = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 2))), _i, _elem) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFunc), 1)))) (threadData, _i, _elem)))
{
_res = 1;
goto _return;
}
}
}
_return: OMC_LABEL_UNUSED
return _res;
}
modelica_metatype boxptr_List_contains(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _elem, modelica_fnptr _eqFunc)
{
modelica_boolean _res;
modelica_metatype out_res;
_res = omc_List_contains(threadData, _lst, _elem, _eqFunc);
out_res = mmc_mk_icon(_res);
return out_res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations4(threadData_t *threadData, modelica_metatype _x, modelica_metatype _ilst, modelica_metatype _iacc)
{
modelica_metatype _out = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _ilst;
tmp4_2 = _iacc;
{
modelica_metatype _l = NULL;
modelica_metatype _lst = NULL;
modelica_metatype _acc = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (!listEmpty(tmp4_1)) goto tmp3_end;
_acc = tmp4_2;
tmpMeta7 = mmc_mk_cons(_x, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta6 = mmc_mk_cons(tmpMeta7, _acc);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_1);
tmpMeta9 = MMC_CDR(tmp4_1);
if (!listEmpty(tmpMeta9)) goto tmp3_end;
_l = tmpMeta8;
_acc = tmp4_2;
tmpMeta11 = mmc_mk_cons(_x, _l);
tmpMeta10 = mmc_mk_cons(tmpMeta11, _acc);
tmpMeta1 = tmpMeta10;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta12 = MMC_CAR(tmp4_1);
tmpMeta13 = MMC_CDR(tmp4_1);
_l = tmpMeta12;
_lst = tmpMeta13;
_acc = tmp4_2;
tmpMeta16 = mmc_mk_cons(_x, _l);
tmpMeta15 = mmc_mk_cons(tmpMeta16, _acc);
tmpMeta14 = _x;
_ilst = _lst;
_iacc = tmpMeta15;
_x = tmpMeta14;
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
_out = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations3(threadData_t *threadData, modelica_metatype _ilst1, modelica_metatype _ilst2, modelica_metatype _iacc)
{
modelica_metatype _out = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
tmp4_1 = _ilst1;
tmp4_2 = _ilst2;
tmp4_3 = _iacc;
{
modelica_metatype _x = NULL;
modelica_metatype _lst1 = NULL;
modelica_metatype _lst2 = NULL;
modelica_metatype _acc = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
_acc = tmp4_3;
tmpMeta1 = listReverse(_acc);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_x = tmpMeta6;
_lst1 = tmpMeta7;
_lst2 = tmp4_2;
_acc = tmp4_3;
_acc = omc_List_allCombinations4(threadData, _x, _lst2, _acc);
_ilst1 = _lst1;
_ilst2 = _lst2;
_iacc = _acc;
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
_out = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_allCombinations2(threadData_t *threadData, modelica_metatype _ilst)
{
modelica_metatype _out = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _ilst;
{
modelica_metatype _x = NULL;
modelica_metatype _lst = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_1);
tmpMeta8 = MMC_CDR(tmp4_1);
_x = tmpMeta7;
_lst = tmpMeta8;
_lst = omc_List_allCombinations2(threadData, _lst);
tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = omc_List_allCombinations3(threadData, _x, _lst, tmpMeta9);
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
_out = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _out;
}
DLLExport
modelica_metatype omc_List_allCombinations(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _maxTotalSize, modelica_metatype _info)
{
modelica_metatype _out = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _maxTotalSize;
{
modelica_integer _sz;
modelica_integer _maxSz;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_integer tmp7;
modelica_boolean tmp8;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
tmp7 = mmc_unbox_integer(tmpMeta6);
_maxSz = tmp7;
_sz = (listLength(_lst)) * (mmc_unbox_integer(omc_List_applyAndFold(threadData, _lst, boxvar_intMul, boxvar_listLength, mmc_mk_integer(((modelica_integer) 1)))));
tmp8 = (_sz <= _maxSz);
if (1 != tmp8) goto goto_2;
tmpMeta1 = omc_List_allCombinations2(threadData, _lst);
goto tmp3_done;
}
case 1: {
if (!optionNone(tmp4_1)) goto tmp3_end;
tmpMeta1 = omc_List_allCombinations2(threadData, _lst);
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
_out = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _out;
}
DLLExport
modelica_metatype omc_List_mapIndices(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _indices, modelica_fnptr _func)
{
modelica_metatype _outList = NULL;
modelica_integer _i;
modelica_integer _idx;
modelica_metatype _rest_idx = NULL;
modelica_metatype _e = NULL;
modelica_metatype _rest_lst = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_integer tmp4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_integer tmp13;
modelica_metatype tmpMeta14;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_i = ((modelica_integer) 1);
if(listEmpty(_indices))
{
_outList = _inList;
goto _return;
}
tmpMeta1 = _indices;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
tmp4 = mmc_unbox_integer(tmpMeta2);
_idx = tmp4;
_rest_idx = tmpMeta3;
_rest_lst = _inList;
tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta5;
while(1)
{
if(!(!listEmpty(_rest_lst))) break;
tmpMeta6 = _rest_lst;
if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
tmpMeta7 = MMC_CAR(tmpMeta6);
tmpMeta8 = MMC_CDR(tmpMeta6);
_e = tmpMeta7;
_rest_lst = tmpMeta8;
if((_i == _idx))
{
tmpMeta9 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e), _outList);
_outList = tmpMeta9;
if(listEmpty(_rest_idx))
{
_outList = omc_List_append__reverse(threadData, _rest_lst, _outList);
break;
}
else
{
tmpMeta10 = _rest_idx;
if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
tmpMeta11 = MMC_CAR(tmpMeta10);
tmpMeta12 = MMC_CDR(tmpMeta10);
tmp13 = mmc_unbox_integer(tmpMeta11);
_idx = tmp13;
_rest_idx = tmpMeta12;
}
}
else
{
tmpMeta14 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta14;
}
_i = ((modelica_integer) 1) + _i;
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_boolean omc_List_isSorted(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _b;
modelica_boolean _found;
modelica_metatype _prev = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_b = 1;
if(listEmpty(_inList))
{
goto _return;
}
tmpMeta1 = _inList;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_prev = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta4 = listRest(_inList); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _prev, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _prev, _e))))
{
_b = 0;
goto _return;
}
}
}
_return: OMC_LABEL_UNUSED
return _b;
}
modelica_metatype boxptr_List_isSorted(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_List_isSorted(threadData, _inList, _inFunc);
out_b = mmc_mk_icon(_b);
return out_b;
}
DLLExport
modelica_metatype omc_List_mapFirst(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_metatype _outElement = NULL;
modelica_boolean _found;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_integer tmp3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, &tmpMeta2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, &tmpMeta2);
_outElement = tmpMeta4;
tmp3 = mmc_unbox_integer(tmpMeta2);
_found = tmp3;
if(_found)
{
goto _return;
}
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return _outElement;
}
DLLExport
modelica_metatype omc_List_separate1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1, modelica_metatype *out_outListFalse)
{
modelica_metatype _outListTrue = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outListFalse = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outListTrue = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outListFalse = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1)))
{
tmpMeta4 = mmc_mk_cons(_e, _outListTrue);
_outListTrue = tmpMeta4;
}
else
{
tmpMeta5 = mmc_mk_cons(_e, _outListFalse);
_outListFalse = tmpMeta5;
}
}
}
_return: OMC_LABEL_UNUSED
if (out_outListFalse) { *out_outListFalse = _outListFalse; }
return _outListTrue;
}
DLLExport
modelica_metatype omc_List_separateOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype *out_outListFalse)
{
modelica_metatype _outListTrue = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outListFalse = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outListTrue = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outListFalse = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e)))
{
tmpMeta4 = mmc_mk_cons(_e, _outListTrue);
_outListTrue = tmpMeta4;
}
else
{
tmpMeta5 = mmc_mk_cons(_e, _outListFalse);
_outListFalse = tmpMeta5;
}
}
}
_return: OMC_LABEL_UNUSED
if (out_outListFalse) { *out_outListFalse = _outListFalse; }
return _outListTrue;
}
DLLExport
modelica_boolean omc_List_any(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _outResult;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
{
_outResult = 1;
goto _return;
}
}
}
_outResult = 0;
_return: OMC_LABEL_UNUSED
return _outResult;
}
modelica_metatype boxptr_List_any(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _outResult;
modelica_metatype out_outResult;
_outResult = omc_List_any(threadData, _inList, _inFunc);
out_outResult = mmc_mk_icon(_outResult);
return out_outResult;
}
DLLExport
modelica_boolean omc_List_none(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _outResult;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
{
_outResult = 0;
goto _return;
}
}
}
_outResult = 1;
_return: OMC_LABEL_UNUSED
return _outResult;
}
modelica_metatype boxptr_List_none(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _outResult;
modelica_metatype out_outResult;
_outResult = omc_List_none(threadData, _inList, _inFunc);
out_outResult = mmc_mk_icon(_outResult);
return out_outResult;
}
DLLExport
modelica_boolean omc_List_all(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _outResult;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e))))
{
_outResult = 0;
goto _return;
}
}
}
_outResult = 1;
_return: OMC_LABEL_UNUSED
return _outResult;
}
modelica_metatype boxptr_List_all(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _outResult;
modelica_metatype out_outResult;
_outResult = omc_List_all(threadData, _inList, _inFunc);
out_outResult = mmc_mk_icon(_outResult);
return out_outResult;
}
DLLExport
modelica_metatype omc_List_mkOption(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outOption = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outOption = (listEmpty(_inList)?mmc_mk_none():mmc_mk_some(_inList));
_return: OMC_LABEL_UNUSED
return _outOption;
}
DLLExport
modelica_metatype omc_List_toListWithPositions(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_integer _pos;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_pos = ((modelica_integer) 1);
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
tmpMeta4 = mmc_mk_box2(0, _e, mmc_mk_integer(_pos));
tmpMeta3 = mmc_mk_cons(tmpMeta4, _outList);
_outList = tmpMeta3;
_pos = ((modelica_integer) 1) + _pos;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_boolean omc_List_listIsLonger(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_boolean _isLonger;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_isLonger = (listLength(_inList1) > listLength(_inList2));
_return: OMC_LABEL_UNUSED
return _isLonger;
}
modelica_metatype boxptr_List_listIsLonger(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_boolean _isLonger;
modelica_metatype out_isLonger;
_isLonger = omc_List_listIsLonger(threadData, _inList1, _inList2);
out_isLonger = mmc_mk_icon(_isLonger);
return out_isLonger;
}
DLLExport
modelica_metatype omc_List_removeEqualPrefix(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype _outList2 = NULL;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList1 = _inList1;
_outList2 = _inList2;
while(1)
{
if(!(!(listEmpty(_outList1) || listEmpty(_outList2)))) break;
_e1 = listHead(_outList1);
_e2 = listHead(_outList2);
if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e1, _e2))))
{
break;
}
_outList1 = listRest(_outList1);
_outList2 = listRest(_outList2);
}
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
modelica_boolean omc_List_allReferenceEq(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_boolean _outEqual;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _el1 = NULL;
modelica_metatype _el2 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _rest2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_boolean tmp10;
modelica_boolean tmp11;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_el1 = tmpMeta6;
_rest1 = tmpMeta7;
_el2 = tmpMeta8;
_rest2 = tmpMeta9;
tmp10 = (modelica_boolean)referenceEq(_el1, _el2);
if(tmp10)
{
_inList1 = _rest1;
_inList2 = _rest2;
goto _tailrecursive;
}
else
{
tmp11 = 0;
}
tmp1 = tmp11;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
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
_outEqual = tmp1;
_return: OMC_LABEL_UNUSED
return _outEqual;
}
modelica_metatype boxptr_List_allReferenceEq(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_boolean _outEqual;
modelica_metatype out_outEqual;
_outEqual = omc_List_allReferenceEq(threadData, _inList1, _inList2);
out_outEqual = mmc_mk_icon(_outEqual);
return out_outEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap1__tail2(threadData_t *threadData, modelica_metatype _inHead, modelica_metatype _inRest, modelica_fnptr _inMapFunc, modelica_metatype _inArg, modelica_metatype _inCombination, modelica_metatype _inAccumElems)
{
modelica_metatype _outElements = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
tmp4_1 = _inHead;
tmp4_2 = _inCombination;
tmp4_3 = _inAccumElems;
{
modelica_metatype _head = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _comb = NULL;
modelica_metatype _accum = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_head = tmpMeta6;
_rest = tmpMeta7;
_comb = tmp4_2;
_accum = tmp4_3;
tmpMeta8 = mmc_mk_cons(_head, _comb);
_accum = omc_List_combinationMap1__tail(threadData, _inRest, ((modelica_fnptr) _inMapFunc), _inArg, tmpMeta8, _accum);
_inHead = _rest;
_inCombination = _comb;
_inAccumElems = _accum;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
tmpMeta1 = _inAccumElems;
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
_outElements = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outElements;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap1__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inArg, modelica_metatype _inCombination, modelica_metatype _inAccumElems)
{
modelica_metatype _outElements = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inElements;
{
modelica_metatype _head = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _acc = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_head = tmpMeta6;
_rest = tmpMeta7;
_acc = _inAccumElems;
{
modelica_metatype _e;
for (tmpMeta8 = _head; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
{
_e = MMC_CAR(tmpMeta8);
tmpMeta9 = mmc_mk_cons(_e, _inCombination);
_acc = omc_List_combinationMap1__tail(threadData, _rest, ((modelica_fnptr) _inMapFunc), _inArg, tmpMeta9, _acc);
}
}
tmpMeta1 = _acc;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta11;
tmpMeta11 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), listReverse(_inCombination), _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, listReverse(_inCombination), _inArg), _inAccumElems);
tmpMeta1 = tmpMeta11;
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
_outElements = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outElements;
}
DLLExport
modelica_metatype omc_List_combinationMap1(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inArg)
{
modelica_metatype _outElements = NULL;
modelica_metatype _elems = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_elems = omc_List_combinationMap1__tail(threadData, _inElements, ((modelica_fnptr) _inMapFunc), _inArg, tmpMeta1, tmpMeta2);
_outElements = listReverse(_elems);
_return: OMC_LABEL_UNUSED
return _outElements;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combinationMap__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc, modelica_metatype _inCombination, modelica_metatype _inAccumElems)
{
modelica_metatype _outElements = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inElements;
{
modelica_metatype _head = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _acc = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_head = tmpMeta6;
_rest = tmpMeta7;
_acc = _inAccumElems;
{
modelica_metatype _e;
for (tmpMeta8 = _head; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
{
_e = MMC_CAR(tmpMeta8);
tmpMeta9 = mmc_mk_cons(_e, _inCombination);
_acc = omc_List_combinationMap__tail(threadData, _rest, ((modelica_fnptr) _inMapFunc), tmpMeta9, _acc);
}
}
tmpMeta1 = _acc;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta11;
tmpMeta11 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), listReverse(_inCombination)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, listReverse(_inCombination)), _inAccumElems);
tmpMeta1 = tmpMeta11;
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
_outElements = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outElements;
}
DLLExport
modelica_metatype omc_List_combinationMap(threadData_t *threadData, modelica_metatype _inElements, modelica_fnptr _inMapFunc)
{
modelica_metatype _outElements = NULL;
modelica_metatype _elems = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_elems = omc_List_combinationMap__tail(threadData, _inElements, ((modelica_fnptr) _inMapFunc), tmpMeta1, tmpMeta2);
_outElements = listReverse(_elems);
_return: OMC_LABEL_UNUSED
return _outElements;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_combination__tail(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _inCombination, modelica_metatype _inAccumElems)
{
modelica_metatype _outElements = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inElements;
{
modelica_metatype _head = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _acc = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_head = tmpMeta6;
_rest = tmpMeta7;
_acc = _inAccumElems;
{
modelica_metatype _e;
for (tmpMeta8 = _head; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
{
_e = MMC_CAR(tmpMeta8);
tmpMeta9 = mmc_mk_cons(_e, _inCombination);
_acc = omc_List_combination__tail(threadData, _rest, tmpMeta9, _acc);
}
}
tmpMeta1 = _acc;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta11;
tmpMeta11 = mmc_mk_cons(listReverse(_inCombination), _inAccumElems);
tmpMeta1 = tmpMeta11;
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
_outElements = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outElements;
}
DLLExport
modelica_metatype omc_List_combination(threadData_t *threadData, modelica_metatype _inElements)
{
modelica_metatype _outElements = NULL;
modelica_metatype _elems = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if(listEmpty(_inElements))
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outElements = tmpMeta1;
}
else
{
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
_elems = omc_List_combination__tail(threadData, _inElements, tmpMeta2, tmpMeta3);
_outElements = listReverse(_elems);
}
_return: OMC_LABEL_UNUSED
return _outElements;
}
DLLExport
modelica_metatype omc_List_splitEqualPrefix(threadData_t *threadData, modelica_metatype _inFullList, modelica_metatype _inPrefixList, modelica_fnptr _inEqFunc, modelica_metatype _inAccum, modelica_metatype *out_outRest)
{
modelica_metatype _outPrefix = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outRest = NULL;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest_e1 = NULL;
modelica_metatype _rest_e2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outPrefix = tmpMeta1;
_rest_e1 = _inFullList;
_rest_e2 = _inPrefixList;
while(1)
{
if(!1) break;
if((listEmpty(_rest_e1) || listEmpty(_rest_e2)))
{
break;
}
tmpMeta2 = _rest_e1;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e1 = tmpMeta3;
_rest_e1 = tmpMeta4;
tmpMeta5 = _rest_e2;
if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
tmpMeta6 = MMC_CAR(tmpMeta5);
tmpMeta7 = MMC_CDR(tmpMeta5);
_e2 = tmpMeta6;
_rest_e2 = tmpMeta7;
if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqFunc), 1)))) (threadData, _e1, _e2))))
{
break;
}
tmpMeta8 = mmc_mk_cons(_e1, _outPrefix);
_outPrefix = tmpMeta8;
}
_outPrefix = listReverseInPlace(_outPrefix);
_outRest = _rest_e1;
_return: OMC_LABEL_UNUSED
if (out_outRest) { *out_outRest = _outRest; }
return _outPrefix;
}
DLLExport
modelica_metatype omc_List_findSome1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg)
{
modelica_metatype _outVal = NULL;
modelica_metatype _retOpt = NULL;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_retOpt = mmc_mk_none();
_rest = _inList;
while(1)
{
if(!isNone(_retOpt)) break;
tmpMeta1 = _rest;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_e = tmpMeta2;
_rest = tmpMeta3;
_retOpt = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg);
}
{
modelica_metatype tmp7_1;
tmp7_1 = _retOpt;
{
volatile mmc_switch_type tmp7;
int tmp8;
tmp7 = 0;
for (; tmp7 < 1; tmp7++) {
switch (MMC_SWITCH_CAST(tmp7)) {
case 0: {
modelica_metatype tmpMeta9;
if (optionNone(tmp7_1)) goto tmp6_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 1));
_outVal = tmpMeta9;
tmpMeta4 = _outVal;
goto tmp6_done;
}
}
goto tmp6_end;
tmp6_end: ;
}
goto goto_5;
goto_5:;
MMC_THROW_INTERNAL();
goto tmp6_done;
tmp6_done:;
}
}
_outVal = tmpMeta4;
_return: OMC_LABEL_UNUSED
return _outVal;
}
DLLExport
modelica_metatype omc_List_findSome(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_metatype _outVal = NULL;
modelica_metatype _retOpt = NULL;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_retOpt = mmc_mk_none();
_rest = _inList;
while(1)
{
if(!isNone(_retOpt)) break;
tmpMeta1 = _rest;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_e = tmpMeta2;
_rest = tmpMeta3;
_retOpt = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
}
{
modelica_metatype tmp7_1;
tmp7_1 = _retOpt;
{
volatile mmc_switch_type tmp7;
int tmp8;
tmp7 = 0;
for (; tmp7 < 1; tmp7++) {
switch (MMC_SWITCH_CAST(tmp7)) {
case 0: {
modelica_metatype tmpMeta9;
if (optionNone(tmp7_1)) goto tmp6_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 1));
_outVal = tmpMeta9;
tmpMeta4 = _outVal;
goto tmp6_done;
}
}
goto tmp6_end;
tmp6_end: ;
}
goto goto_5;
goto_5:;
MMC_THROW_INTERNAL();
goto tmp6_done;
tmp6_done:;
}
}
_outVal = tmpMeta4;
_return: OMC_LABEL_UNUSED
return _outVal;
}
DLLExport
modelica_metatype omc_List_findMap3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_boolean *out_outFound)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_boolean _outFound;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_integer tmp6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outFound = 0;
_rest = _inList;
while(1)
{
if(!((!listEmpty(_rest)) && (!_outFound))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, &tmpMeta5);
_e = tmpMeta7;
tmp6 = mmc_unbox_integer(tmpMeta5);
_outFound = tmp6;
tmpMeta8 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta8;
}
_outList = omc_List_append__reverse(threadData, _outList, _rest);
_return: OMC_LABEL_UNUSED
if (out_outFound) { *out_outFound = _outFound; }
return _outList;
}
modelica_metatype boxptr_List_findMap3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype *out_outFound)
{
modelica_boolean _outFound;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
_outList = omc_List_findMap3(threadData, _inList, _inFunc, _inArg1, _inArg2, _inArg3, &_outFound);
if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
return _outList;
}
DLLExport
modelica_metatype omc_List_findMap2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_boolean *out_outFound)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_boolean _outFound;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_integer tmp6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outFound = 0;
_rest = _inList;
while(1)
{
if(!((!listEmpty(_rest)) && (!_outFound))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, &tmpMeta5);
_e = tmpMeta7;
tmp6 = mmc_unbox_integer(tmpMeta5);
_outFound = tmp6;
tmpMeta8 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta8;
}
_outList = omc_List_append__reverse(threadData, _outList, _rest);
_return: OMC_LABEL_UNUSED
if (out_outFound) { *out_outFound = _outFound; }
return _outList;
}
modelica_metatype boxptr_List_findMap2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outFound)
{
modelica_boolean _outFound;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
_outList = omc_List_findMap2(threadData, _inList, _inFunc, _inArg1, _inArg2, &_outFound);
if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
return _outList;
}
DLLExport
modelica_metatype omc_List_findMap1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_boolean *out_outFound)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_boolean _outFound;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_integer tmp6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outFound = 0;
_rest = _inList;
while(1)
{
if(!((!listEmpty(_rest)) && (!_outFound))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, &tmpMeta5);
_e = tmpMeta7;
tmp6 = mmc_unbox_integer(tmpMeta5);
_outFound = tmp6;
tmpMeta8 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta8;
}
_outList = omc_List_append__reverse(threadData, _outList, _rest);
_return: OMC_LABEL_UNUSED
if (out_outFound) { *out_outFound = _outFound; }
return _outList;
}
modelica_metatype boxptr_List_findMap1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype *out_outFound)
{
modelica_boolean _outFound;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
_outList = omc_List_findMap1(threadData, _inList, _inFunc, _inArg1, &_outFound);
if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
return _outList;
}
DLLExport
modelica_metatype omc_List_findMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_boolean *out_outFound)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_boolean _outFound;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_integer tmp6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outFound = 0;
_rest = _inList;
while(1)
{
if(!((!listEmpty(_rest)) && (!_outFound))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, &tmpMeta5);
_e = tmpMeta7;
tmp6 = mmc_unbox_integer(tmpMeta5);
_outFound = tmp6;
tmpMeta8 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta8;
}
_outList = omc_List_append__reverse(threadData, _outList, _rest);
_return: OMC_LABEL_UNUSED
if (out_outFound) { *out_outFound = _outFound; }
return _outList;
}
modelica_metatype boxptr_List_findMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outFound)
{
modelica_boolean _outFound;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
_outList = omc_List_findMap(threadData, _inList, _inFunc, &_outFound);
if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
return _outList;
}
DLLExport
modelica_metatype omc_List_accumulateMapFoldAccum(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inFoldArg, modelica_metatype *out_outFoldArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outFoldArg = _inFoldArg;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _outFoldArg, _outList ,&_outFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _outFoldArg, _outList ,&_outFoldArg);
}
}
_outList = listReverse(_outList);
_return: OMC_LABEL_UNUSED
if (out_outFoldArg) { *out_outFoldArg = _outFoldArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_accumulateMapFold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inFoldArg, modelica_metatype *out_outFoldArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outFoldArg = _inFoldArg;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _outFoldArg, _outList ,&_outFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _outFoldArg, _outList ,&_outFoldArg);
}
}
_outList = listReverse(_outList);
_return: OMC_LABEL_UNUSED
if (out_outFoldArg) { *out_outFoldArg = _outFoldArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_accumulateMapAccum1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg, _outList) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg, _outList);
}
}
_outList = listReverse(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_accumulateMapAccum(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _outList) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _outList);
}
}
_outList = listReverse(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_accumulateMapReverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _outList) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _outList);
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_accumulateMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _outList) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _outList);
}
}
_outList = listReverse(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map1FoldSplit(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_fnptr _inFoldFunc, modelica_metatype _inConstArg, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outResult = NULL;
modelica_metatype _eo = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inConstArg ,&_res) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inConstArg ,&_res);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _res, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _res, _outResult);
tmpMeta3 = mmc_mk_cons(_eo, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outResult) { *out_outResult = _outResult; }
return _outList;
}
DLLExport
modelica_metatype omc_List_mapFoldSplit(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outResult = NULL;
modelica_metatype _eo = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e ,&_res) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e ,&_res);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _res, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _res, _outResult);
tmpMeta3 = mmc_mk_cons(_eo, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outResult) { *out_outResult = _outResult; }
return _outList;
}
DLLExport
modelica_metatype omc_List_generateReverse(threadData_t *threadData, modelica_metatype _inArg, modelica_fnptr _inFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_boolean _cont;
modelica_metatype _arg = NULL;
modelica_metatype _e = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_integer tmp4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_arg = _inArg;
while(1)
{
if(!1) break;
tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _arg, &tmpMeta2, &tmpMeta3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _arg, &tmpMeta2, &tmpMeta3);
_arg = tmpMeta5;
tmp4 = mmc_unbox_integer(tmpMeta3);
_e = tmpMeta2;
_cont = tmp4;
if((!_cont))
{
break;
}
tmpMeta6 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta6;
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_generate(threadData_t *threadData, modelica_metatype _inArg, modelica_fnptr _inFunc)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = listReverseInPlace(omc_List_generateReverse(threadData, _inArg, ((modelica_fnptr) _inFunc)));
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_integer omc_List_lengthListElements(threadData_t *threadData, modelica_metatype _inListList)
{
modelica_integer _outLength;
modelica_integer tmp1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_integer __omcQ_24tmpVar1;
modelica_integer __omcQ_24tmpVar0;
modelica_integer tmp2;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = _inListList;
__omcQ_24tmpVar1 = ((modelica_integer) 0);
while(1) {
tmp2 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp2--;
}
if (tmp2 == 0) {
__omcQ_24tmpVar0 = listLength(_lst);
__omcQ_24tmpVar1 = __omcQ_24tmpVar1 + __omcQ_24tmpVar0;
} else if (tmp2 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmp1 = __omcQ_24tmpVar1;
}
_outLength = tmp1;
_return: OMC_LABEL_UNUSED
return _outLength;
}
modelica_metatype boxptr_List_lengthListElements(threadData_t *threadData, modelica_metatype _inListList)
{
modelica_integer _outLength;
modelica_metatype out_outLength;
_outLength = omc_List_lengthListElements(threadData, _inListList);
out_outLength = mmc_mk_icon(_outLength);
return out_outLength;
}
DLLExport
modelica_boolean omc_List_hasSeveralElements(threadData_t *threadData, modelica_metatype _inList)
{
modelica_boolean _b;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inList;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (!listEmpty(tmpMeta7)) goto tmp3_end;
tmp1 = 0;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp1 = 0;
goto tmp3_done;
}
case 2: {
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
_b = tmp1;
_return: OMC_LABEL_UNUSED
return _b;
}
modelica_metatype boxptr_List_hasSeveralElements(threadData_t *threadData, modelica_metatype _inList)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_List_hasSeveralElements(threadData, _inList);
out_b = mmc_mk_icon(_b);
return out_b;
}
DLLExport
modelica_boolean omc_List_hasOneElement(threadData_t *threadData, modelica_metatype _inList)
{
modelica_boolean _b;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inList;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (!listEmpty(tmpMeta7)) goto tmp3_end;
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
_b = tmp1;
_return: OMC_LABEL_UNUSED
return _b;
}
modelica_metatype boxptr_List_hasOneElement(threadData_t *threadData, modelica_metatype _inList)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_List_hasOneElement(threadData, _inList);
out_b = mmc_mk_icon(_b);
return out_b;
}
DLLExport
modelica_string omc_List_toString(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPrintFunc, modelica_string _inListNameStr, modelica_string _inBeginStr, modelica_string _inDelimitStr, modelica_string _inEndStr, modelica_boolean _inPrintEmpty, modelica_integer _maxLength)
{
modelica_string _outString = NULL;
modelica_metatype _lst = NULL;
modelica_string _endStr = NULL;
modelica_metatype tmpMeta1;
modelica_string tmp2 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_lst = _inList;
_endStr = _inEndStr;
if(((_maxLength > ((modelica_integer) 0)) && (listLength(_lst) > _maxLength)))
{
_lst = omc_List_firstN(threadData, _lst, _maxLength);
tmpMeta1 = stringAppend(_OMC_LIT4,_endStr);
_endStr = tmpMeta1;
}
{
modelica_metatype tmp5_1;modelica_boolean tmp5_2;
tmp5_1 = _lst;
tmp5_2 = _inPrintEmpty;
{
modelica_string _str = NULL;
volatile mmc_switch_type tmp5;
int tmp6;
tmp5 = 0;
for (; tmp5 < 3; tmp5++) {
switch (MMC_SWITCH_CAST(tmp5)) {
case 0: {
modelica_metatype tmpMeta7;
if (1 != tmp5_2) goto tmp4_end;
if (!listEmpty(tmp5_1)) goto tmp4_end;
tmpMeta7 = mmc_mk_cons(_inListNameStr, mmc_mk_cons(_inBeginStr, mmc_mk_cons(_endStr, MMC_REFSTRUCTLIT(mmc_nil))));
tmp2 = stringAppendList(tmpMeta7);
goto tmp4_done;
}
case 1: {
if (0 != tmp5_2) goto tmp4_end;
if (!listEmpty(tmp5_1)) goto tmp4_end;
tmp2 = _inListNameStr;
goto tmp4_done;
}
case 2: {
modelica_metatype tmpMeta8;
_str = stringDelimitList(omc_List_map(threadData, _lst, ((modelica_fnptr) _inPrintFunc)), _inDelimitStr);
tmpMeta8 = mmc_mk_cons(_inListNameStr, mmc_mk_cons(_inBeginStr, mmc_mk_cons(_str, mmc_mk_cons(_endStr, MMC_REFSTRUCTLIT(mmc_nil)))));
tmp2 = stringAppendList(tmpMeta8);
goto tmp4_done;
}
}
goto tmp4_end;
tmp4_end: ;
}
goto goto_3;
goto_3:;
MMC_THROW_INTERNAL();
goto tmp4_done;
tmp4_done:;
}
}
_outString = tmp2;
_return: OMC_LABEL_UNUSED
return _outString;
}
modelica_metatype boxptr_List_toString(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPrintFunc, modelica_metatype _inListNameStr, modelica_metatype _inBeginStr, modelica_metatype _inDelimitStr, modelica_metatype _inEndStr, modelica_metatype _inPrintEmpty, modelica_metatype _maxLength)
{
modelica_integer tmp1;
modelica_integer tmp2;
modelica_string _outString = NULL;
tmp1 = mmc_unbox_integer(_inPrintEmpty);
tmp2 = mmc_unbox_integer(_maxLength);
_outString = omc_List_toString(threadData, _inList, _inPrintFunc, _inListNameStr, _inBeginStr, _inDelimitStr, _inEndStr, tmp1, tmp2);
return _outString;
}
DLLExport
modelica_metatype omc_List_replaceAtWithFill(threadData_t *threadData, modelica_metatype _inElement, modelica_integer _inPosition, modelica_metatype _inList, modelica_metatype _inFillValue)
{
modelica_metatype _outList = NULL;
modelica_integer _len;
modelica_metatype _fill_lst = NULL;
modelica_boolean tmp1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_integer tmp4;
modelica_integer tmp5;
modelica_integer tmp6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp1 = (_inPosition >= ((modelica_integer) 0));
if (1 != tmp1) MMC_THROW_INTERNAL();
_len = listLength(_inList);
if((_inPosition <= _len))
{
_outList = omc_List_replaceAt(threadData, _inElement, _inPosition, _inList);
}
else
{
tmpMeta2 = mmc_mk_cons(_inElement, MMC_REFSTRUCTLIT(mmc_nil));
_fill_lst = tmpMeta2;
tmp4 = ((modelica_integer) 2); tmp5 = 1; tmp6 = _inPosition - _len;
if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
{
tmpMeta3 = mmc_mk_cons(_inFillValue, _fill_lst);
_fill_lst = tmpMeta3;
}
}
_outList = listAppend(_inList, _fill_lst);
}
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_replaceAtWithFill(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inPosition, modelica_metatype _inList, modelica_metatype _inFillValue)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inPosition);
_outList = omc_List_replaceAtWithFill(threadData, _inElement, tmp1, _inList, _inFillValue);
return _outList;
}
DLLExport
modelica_metatype omc_List_replaceAtWithList(threadData_t *threadData, modelica_metatype _inReplacementList, modelica_integer _inPosition, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_integer tmp9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_rest = _inList;
tmp2 = (_inPosition >= ((modelica_integer) 0));
if (1 != tmp2) MMC_THROW_INTERNAL();
tmp7 = ((modelica_integer) 0); tmp8 = 1; tmp9 = ((modelica_integer) -1) + _inPosition;
if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 0); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
{
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_rest = tmpMeta5;
tmpMeta6 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta6;
}
}
tmpMeta10 = _rest;
if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
tmpMeta11 = MMC_CAR(tmpMeta10);
tmpMeta12 = MMC_CDR(tmpMeta10);
_rest = tmpMeta12;
_rest = listAppend(_inReplacementList, _rest);
_outList = omc_List_append__reverse(threadData, _outList, _rest);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_replaceAtWithList(threadData_t *threadData, modelica_metatype _inReplacementList, modelica_metatype _inPosition, modelica_metatype _inList)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inPosition);
_outList = omc_List_replaceAtWithList(threadData, _inReplacementList, tmp1, _inList);
return _outList;
}
DLLExport
modelica_metatype omc_List_replaceAtIndexFirst(threadData_t *threadData, modelica_integer _inPosition, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = omc_List_replaceAt(threadData, _inElement, _inPosition, _inList);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_replaceAtIndexFirst(threadData_t *threadData, modelica_metatype _inPosition, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inPosition);
_outList = omc_List_replaceAtIndexFirst(threadData, tmp1, _inElement, _inList);
return _outList;
}
DLLExport
modelica_metatype omc_List_replaceOnTrue(threadData_t *threadData, modelica_metatype _inReplacement, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_boolean *out_outReplaced)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_boolean _outReplaced;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outReplaced = 0;
_rest = _inList;
while(1)
{
if(!(!listEmpty(_rest))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
{
_outReplaced = 1;
tmpMeta5 = mmc_mk_cons(_inReplacement, _rest);
_outList = omc_List_append__reverse(threadData, _outList, tmpMeta5);
goto _return;
}
tmpMeta6 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta6;
}
_outList = _inList;
_return: OMC_LABEL_UNUSED
if (out_outReplaced) { *out_outReplaced = _outReplaced; }
return _outList;
}
modelica_metatype boxptr_List_replaceOnTrue(threadData_t *threadData, modelica_metatype _inReplacement, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outReplaced)
{
modelica_boolean _outReplaced;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
_outList = omc_List_replaceOnTrue(threadData, _inReplacement, _inList, _inFunc, &_outReplaced);
if (out_outReplaced) { *out_outReplaced = mmc_mk_icon(_outReplaced); }
return _outList;
}
DLLExport
modelica_metatype omc_List_replaceAt(threadData_t *threadData, modelica_metatype _inElement, modelica_integer _inPosition, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _delst = NULL;
modelica_boolean tmp1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_integer tmp6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_rest = _inList;
tmp1 = (_inPosition >= ((modelica_integer) 1));
if (1 != tmp1) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_delst = omc_DoubleEnded_fromList(threadData, tmpMeta2);
tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) -1) + _inPosition;
if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
{
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_rest = tmpMeta5;
omc_DoubleEnded_push__back(threadData, _delst, _e);
}
}
tmpMeta9 = _rest;
if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
tmpMeta10 = MMC_CAR(tmpMeta9);
tmpMeta11 = MMC_CDR(tmpMeta9);
_rest = tmpMeta11;
tmpMeta12 = mmc_mk_cons(_inElement, _rest);
_outList = omc_DoubleEnded_toListAndClear(threadData, _delst, tmpMeta12);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_replaceAt(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inPosition, modelica_metatype _inList)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inPosition);
_outList = omc_List_replaceAt(threadData, _inElement, tmp1, _inList);
return _outList;
}
DLLExport
modelica_metatype omc_List_removeMatchesFirst(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = _inList;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if((mmc_unbox_integer(_e) != _inN))
{
break;
}
tmpMeta2 = _outList;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_outList = tmpMeta4;
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_removeMatchesFirst(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inN);
_outList = omc_List_removeMatchesFirst(threadData, _inList, tmp1);
return _outList;
}
DLLExport
modelica_metatype omc_List_keepPositionsSorted(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPositions)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_integer _i;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_i = ((modelica_integer) 0);
_rest = _inList;
{
modelica_metatype _pos;
for (tmpMeta2 = _inPositions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_pos = MMC_CAR(tmpMeta2);
while(1)
{
if(!(_i != mmc_unbox_integer(_pos))) break;
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_rest = tmpMeta5;
_i = ((modelica_integer) 1) + _i;
}
tmpMeta6 = _rest;
if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
tmpMeta7 = MMC_CAR(tmpMeta6);
tmpMeta8 = MMC_CDR(tmpMeta6);
_e = tmpMeta7;
_rest = tmpMeta8;
tmpMeta9 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta9;
_i = ((modelica_integer) 1) + _i;
}
}
_outList = listReverse(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_keepPositions(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPositions)
{
modelica_metatype _outList = NULL;
modelica_metatype _sorted_pos = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_sorted_pos = omc_List_sortedUnique(threadData, omc_List_sort(threadData, _inPositions, boxvar_intGt), boxvar_intEq);
_outList = omc_List_keepPositionsSorted(threadData, _inList, _sorted_pos);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_deletePositionsSorted(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPositions)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_integer _i;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_i = ((modelica_integer) 0);
_rest = _inList;
{
modelica_metatype _pos;
for (tmpMeta2 = _inPositions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_pos = MMC_CAR(tmpMeta2);
while(1)
{
if(!(_i != mmc_unbox_integer(_pos))) break;
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_rest = tmpMeta5;
tmpMeta6 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta6;
_i = ((modelica_integer) 1) + _i;
}
tmpMeta7 = _rest;
if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
tmpMeta8 = MMC_CAR(tmpMeta7);
tmpMeta9 = MMC_CDR(tmpMeta7);
_rest = tmpMeta9;
_i = ((modelica_integer) 1) + _i;
}
}
_outList = omc_List_append__reverse(threadData, _outList, _rest);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_deletePositions(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPositions)
{
modelica_metatype _outList = NULL;
modelica_metatype _sorted_pos = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_sorted_pos = omc_List_sortedUnique(threadData, omc_List_sort(threadData, _inPositions, boxvar_intGt), boxvar_intEq);
_outList = omc_List_deletePositionsSorted(threadData, _inList, _sorted_pos);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_deleteMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompareFunc, modelica_metatype *out_outDeletedElement)
{
modelica_metatype _outList = NULL;
modelica_metatype _outDeletedElement = NULL;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _acc = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = _inList;
_outDeletedElement = mmc_mk_none();
_rest = _inList;
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_acc = tmpMeta1;
while(1)
{
if(!(!listEmpty(_rest))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompareFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompareFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompareFunc), 2))), _inValue, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompareFunc), 1)))) (threadData, _inValue, _e)))
{
_outList = omc_List_append__reverse(threadData, _acc, _rest);
_outDeletedElement = mmc_mk_some(_e);
goto _return;
}
tmpMeta5 = mmc_mk_cons(_e, _acc);
_acc = tmpMeta5;
}
_return: OMC_LABEL_UNUSED
if (out_outDeletedElement) { *out_outDeletedElement = _outDeletedElement; }
return _outList;
}
DLLExport
modelica_metatype omc_List_deleteMemberF(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inElement)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = omc_List_deleteMember(threadData, _inList, _inElement);
if(referenceEq(_outList, _inList))
{
MMC_THROW_INTERNAL();
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_deleteMember(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inElement)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_rest = _inList;
while(1)
{
if(!(!listEmpty(_rest))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
if(valueEq(_e, _inElement))
{
_outList = omc_List_append__reverse(threadData, _outList, _rest);
goto _return;
}
tmpMeta5 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta5;
}
_outList = _inList;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_findBoolList(threadData_t *threadData, modelica_metatype _inBooleans, modelica_metatype _inList, modelica_metatype _inFalseValue)
{
modelica_metatype _outElement = NULL;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_rest = _inList;
{
modelica_metatype _b;
for (tmpMeta1 = _inBooleans; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_b = MMC_CAR(tmpMeta1);
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
if(mmc_unbox_boolean(_b))
{
_outElement = _e;
goto _return;
}
}
}
_outElement = _inFalseValue;
_return: OMC_LABEL_UNUSED
return _outElement;
}
DLLExport
modelica_metatype omc_List_findAndRemove1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _arg1, modelica_metatype *out_rest)
{
modelica_metatype _outElement = NULL;
modelica_metatype _rest = NULL;
modelica_integer _i;
modelica_metatype _delst = NULL;
modelica_metatype _t = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_integer tmp6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_i = ((modelica_integer) 0);
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _arg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _arg1)))
{
_outElement = _e;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_delst = omc_DoubleEnded_fromList(threadData, tmpMeta2);
_rest = _inList;
tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = _i;
if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
{
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_t = tmpMeta4;
_rest = tmpMeta5;
omc_DoubleEnded_push__back(threadData, _delst, _t);
}
}
tmpMeta9 = _rest;
if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
tmpMeta10 = MMC_CAR(tmpMeta9);
tmpMeta11 = MMC_CDR(tmpMeta9);
_rest = tmpMeta11;
_rest = omc_DoubleEnded_toListAndClear(threadData, _delst, _rest);
goto _return;
}
_i = ((modelica_integer) 1) + _i;
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
if (out_rest) { *out_rest = _rest; }
return _outElement;
}
DLLExport
modelica_metatype omc_List_findAndRemove(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_rest)
{
modelica_metatype _outElement = NULL;
modelica_metatype _rest = NULL;
modelica_integer _i;
modelica_metatype _delst = NULL;
modelica_metatype _t = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_integer tmp6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_i = ((modelica_integer) 0);
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
{
_outElement = _e;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_delst = omc_DoubleEnded_fromList(threadData, tmpMeta2);
_rest = _inList;
tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = _i;
if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
{
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_t = tmpMeta4;
_rest = tmpMeta5;
omc_DoubleEnded_push__back(threadData, _delst, _t);
}
}
tmpMeta9 = _rest;
if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
tmpMeta10 = MMC_CAR(tmpMeta9);
tmpMeta11 = MMC_CDR(tmpMeta9);
_rest = tmpMeta11;
_rest = omc_DoubleEnded_toListAndClear(threadData, _delst, _rest);
goto _return;
}
_i = ((modelica_integer) 1) + _i;
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
if (out_rest) { *out_rest = _rest; }
return _outElement;
}
DLLExport
modelica_metatype omc_List_find1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _arg1)
{
modelica_metatype _outElement = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _arg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _arg1)))
{
_outElement = _e;
goto _return;
}
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return _outElement;
}
DLLExport
modelica_metatype omc_List_findOption(threadData_t *threadData, modelica_metatype _lst, modelica_fnptr _fn)
{
modelica_metatype _result = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _lst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, _e)))
{
_result = mmc_mk_some(_e);
goto _return;
}
}
}
_result = mmc_mk_none();
_return: OMC_LABEL_UNUSED
return _result;
}
DLLExport
modelica_metatype omc_List_find(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_metatype _outElement = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
{
_outElement = _e;
goto _return;
}
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return _outElement;
}
DLLExport
modelica_metatype omc_List_select2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar3;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar2;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar3 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar3;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1, _inArg2))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar2 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar3;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_select1r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar5;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar4;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar5 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar5;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _inArg1, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _inArg1, _e))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar4 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar5;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_select1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar7;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar6;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar7 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar7;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar6 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar7;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_select(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar9;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar8;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar9 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar9;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar8 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar9;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filterCons(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _fn, modelica_metatype __omcQ_24in_5FaccumList)
{
modelica_metatype _accumList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_accumList = __omcQ_24in_5FaccumList;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, _e)))
{
tmpMeta2 = mmc_mk_cons(_e, _accumList);
_accumList = tmpMeta2;
}
}
}
_return: OMC_LABEL_UNUSED
return _accumList;
}
DLLExport
modelica_metatype omc_List_removeOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_fnptr _inCompFunc, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar11;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar10;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar11 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar11;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if ((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _inValue, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _inValue, _e)))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar10 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar10,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar11;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filter2OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar13;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar12;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar13 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar13;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1, _inArg2))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar12 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar12,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar13;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filter1rOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar15;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar14;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar15 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar15;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _inArg1, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _inArg1, _e))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar14 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar14,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar15;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filter1OnTrueAndUpdate(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_fnptr _inUpdateFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar17;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar16;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar17 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar17;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inUpdateFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inUpdateFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inUpdateFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inUpdateFunc), 1)))) (threadData, _e, _inArg1);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar16,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar17;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filter1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar19;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar18;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar19 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar19;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar18 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar18,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar19;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filter1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
{
{
volatile mmc_switch_type tmp5;
int tmp6;
tmp5 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp4_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp5 < 2; tmp5++) {
switch (MMC_SWITCH_CAST(tmp5)) {
case 0: {
modelica_metatype tmpMeta7;
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg1) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg1);
tmpMeta7 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta7;
goto tmp4_done;
}
case 1: {
goto tmp4_done;
}
}
goto tmp4_end;
tmp4_end: ;
}
goto goto_3;
tmp4_done:
(void)tmp5;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp4_done2;
goto_3:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp5 < 2) {
goto tmp4_top;
}
MMC_THROW_INTERNAL();
tmp4_done2:;
}
}
;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filterOnTrueReverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar21;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar20;
modelica_integer tmp3;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar21 = tmpMeta2;
while(1) {
tmp3 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e))) {
tmp3--;
break;
}
}
if (tmp3 == 0) {
__omcQ_24tmpVar20 = _e;
__omcQ_24tmpVar21 = mmc_mk_cons(__omcQ_24tmpVar20,__omcQ_24tmpVar21);
} else if (tmp3 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar21;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filterOnTrueSync(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inSyncList, modelica_metatype *out_outList_b)
{
modelica_metatype _outList_a = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList_b = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_boolean tmp3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList_a = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList_b = tmpMeta2;
_rest2 = _inSyncList;
tmp3 = (listLength(_inList) == listLength(_inSyncList));
if (1 != tmp3) MMC_THROW_INTERNAL();
{
modelica_metatype _e1;
for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e1 = MMC_CAR(tmpMeta4);
tmpMeta5 = _rest2;
if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
tmpMeta6 = MMC_CAR(tmpMeta5);
tmpMeta7 = MMC_CDR(tmpMeta5);
_e2 = tmpMeta6;
_rest2 = tmpMeta7;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e1)))
{
tmpMeta8 = mmc_mk_cons(_e1, _outList_a);
_outList_a = tmpMeta8;
tmpMeta9 = mmc_mk_cons(_e2, _outList_b);
_outList_b = tmpMeta9;
}
}
}
_outList_a = listReverseInPlace(_outList_a);
_outList_b = listReverseInPlace(_outList_b);
_return: OMC_LABEL_UNUSED
if (out_outList_b) { *out_outList_b = _outList_b; }
return _outList_a;
}
DLLExport
modelica_metatype omc_List_filter1OnTrueSync(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg1, modelica_metatype _inSyncList, modelica_metatype *out_outList_b)
{
modelica_metatype _outList_a = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList_b = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList_a = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList_b = tmpMeta2;
_rest2 = _inSyncList;
{
modelica_metatype _e1;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e1 = MMC_CAR(tmpMeta3);
tmpMeta4 = _rest2;
if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
tmpMeta5 = MMC_CAR(tmpMeta4);
tmpMeta6 = MMC_CDR(tmpMeta4);
_e2 = tmpMeta5;
_rest2 = tmpMeta6;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e1, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e1, _inArg1)))
{
tmpMeta7 = mmc_mk_cons(_e1, _outList_a);
_outList_a = tmpMeta7;
tmpMeta8 = mmc_mk_cons(_e2, _outList_b);
_outList_b = tmpMeta8;
}
}
}
_outList_a = listReverseInPlace(_outList_a);
_outList_b = listReverseInPlace(_outList_b);
_return: OMC_LABEL_UNUSED
if (out_outList_b) { *out_outList_b = _outList_b; }
return _outList_a;
}
DLLExport
modelica_metatype omc_List_filterOnFalse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar23;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar22;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar23 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar23;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if ((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e)))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar22 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar22,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar23;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filterOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar25;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar24;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar25 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar25;
while(1) {
tmp4 = 1;
while (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e))) {
tmp4--;
break;
}
}
if (tmp4 == 0) {
__omcQ_24tmpVar24 = _e;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar24,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar25;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filterMap1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterMapFunc, modelica_metatype _inExtraArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _oe = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
{
{
volatile mmc_switch_type tmp5;
int tmp6;
tmp5 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp4_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp5 < 2; tmp5++) {
switch (MMC_SWITCH_CAST(tmp5)) {
case 0: {
modelica_metatype tmpMeta7;
_oe = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 2))), _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 1)))) (threadData, _e, _inExtraArg);
tmpMeta7 = mmc_mk_cons(_oe, _outList);
_outList = tmpMeta7;
goto tmp4_done;
}
case 1: {
goto tmp4_done;
}
}
goto tmp4_end;
tmp4_end: ;
}
goto goto_3;
tmp4_done:
(void)tmp5;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp4_done2;
goto_3:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp5 < 2) {
goto tmp4_top;
}
MMC_THROW_INTERNAL();
tmp4_done2:;
}
}
;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filterMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterMapFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _oe = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
{
{
volatile mmc_switch_type tmp5;
int tmp6;
tmp5 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp4_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp5 < 2; tmp5++) {
switch (MMC_SWITCH_CAST(tmp5)) {
case 0: {
modelica_metatype tmpMeta7;
_oe = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterMapFunc), 1)))) (threadData, _e);
tmpMeta7 = mmc_mk_cons(_oe, _outList);
_outList = tmpMeta7;
goto tmp4_done;
}
case 1: {
goto tmp4_done;
}
}
goto tmp4_end;
tmp4_end: ;
}
goto goto_3;
tmp4_done:
(void)tmp5;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp4_done2;
goto_3:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp5 < 2) {
goto tmp4_top;
}
MMC_THROW_INTERNAL();
tmp4_done2:;
}
}
;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_filter(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
{
{
volatile mmc_switch_type tmp5;
int tmp6;
tmp5 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp4_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp5 < 2; tmp5++) {
switch (MMC_SWITCH_CAST(tmp5)) {
case 0: {
modelica_metatype tmpMeta7;
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e);
tmpMeta7 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta7;
goto tmp4_done;
}
case 1: {
goto tmp4_done;
}
}
goto tmp4_end;
tmp4_end: ;
}
goto goto_3;
tmp4_done:
(void)tmp5;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp4_done2;
goto_3:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp5 < 2) {
goto tmp4_top;
}
MMC_THROW_INTERNAL();
tmp4_done2:;
}
}
;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_extract1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype _inArg, modelica_metatype *out_outRemainingList)
{
modelica_metatype _outExtractedList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outRemainingList = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outExtractedList = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outRemainingList = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e, _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e, _inArg)))
{
tmpMeta4 = mmc_mk_cons(_e, _outExtractedList);
_outExtractedList = tmpMeta4;
}
else
{
tmpMeta5 = mmc_mk_cons(_e, _outRemainingList);
_outRemainingList = tmpMeta5;
}
}
}
_outExtractedList = listReverseInPlace(_outExtractedList);
_outRemainingList = listReverseInPlace(_outRemainingList);
_return: OMC_LABEL_UNUSED
if (out_outRemainingList) { *out_outRemainingList = _outRemainingList; }
return _outExtractedList;
}
DLLExport
modelica_metatype omc_List_extractOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFilterFunc, modelica_metatype *out_outRemainingList)
{
modelica_metatype _outExtractedList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outRemainingList = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outExtractedList = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outRemainingList = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFilterFunc), 1)))) (threadData, _e)))
{
tmpMeta4 = mmc_mk_cons(_e, _outExtractedList);
_outExtractedList = tmpMeta4;
}
else
{
tmpMeta5 = mmc_mk_cons(_e, _outRemainingList);
_outRemainingList = tmpMeta5;
}
}
}
_outExtractedList = listReverseInPlace(_outExtractedList);
_outRemainingList = listReverseInPlace(_outRemainingList);
_return: OMC_LABEL_UNUSED
if (out_outRemainingList) { *out_outRemainingList = _outRemainingList; }
return _outExtractedList;
}
DLLExport
modelica_boolean omc_List_exist2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2)
{
modelica_boolean _outExists;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))), _e, _inExtraArg1, _inExtraArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2)))
{
_outExists = 1;
goto _return;
}
}
}
_outExists = 0;
_return: OMC_LABEL_UNUSED
return _outExists;
}
modelica_metatype boxptr_List_exist2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2)
{
modelica_boolean _outExists;
modelica_metatype out_outExists;
_outExists = omc_List_exist2(threadData, _inList, _inFindFunc, _inExtraArg1, _inExtraArg2);
out_outExists = mmc_mk_icon(_outExists);
return out_outExists;
}
DLLExport
modelica_boolean omc_List_exist1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc, modelica_metatype _inExtraArg)
{
modelica_boolean _outExists;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))), _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, _e, _inExtraArg)))
{
_outExists = 1;
goto _return;
}
}
}
_outExists = 0;
_return: OMC_LABEL_UNUSED
return _outExists;
}
modelica_metatype boxptr_List_exist1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc, modelica_metatype _inExtraArg)
{
modelica_boolean _outExists;
modelica_metatype out_outExists;
_outExists = omc_List_exist1(threadData, _inList, _inFindFunc, _inExtraArg);
out_outExists = mmc_mk_icon(_outExists);
return out_outExists;
}
DLLExport
modelica_boolean omc_List_exist(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc)
{
modelica_boolean _outExists;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFindFunc), 1)))) (threadData, _e)))
{
_outExists = 1;
goto _return;
}
}
}
_outExists = 0;
_return: OMC_LABEL_UNUSED
return _outExists;
}
modelica_metatype boxptr_List_exist(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFindFunc)
{
modelica_boolean _outExists;
modelica_metatype out_outExists;
_outExists = omc_List_exist(threadData, _inList, _inFindFunc);
out_outExists = mmc_mk_icon(_outExists);
return out_outExists;
}
DLLExport
modelica_boolean omc_List_isMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_boolean _outIsMember;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _inValue, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _inValue, _e)))
{
_outIsMember = 1;
goto _return;
}
}
}
_outIsMember = 0;
_return: OMC_LABEL_UNUSED
return _outIsMember;
}
modelica_metatype boxptr_List_isMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_boolean _outIsMember;
modelica_metatype out_outIsMember;
_outIsMember = omc_List_isMemberOnTrue(threadData, _inValue, _inList, _inCompFunc);
out_outIsMember = mmc_mk_icon(_outIsMember);
return out_outIsMember;
}
DLLExport
modelica_boolean omc_List_notMember(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_boolean _outIsNotMember;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outIsNotMember = (!listMember(_inElement, _inList));
_return: OMC_LABEL_UNUSED
return _outIsNotMember;
}
modelica_metatype boxptr_List_notMember(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_boolean _outIsNotMember;
modelica_metatype out_outIsNotMember;
_outIsNotMember = omc_List_notMember(threadData, _inElement, _inList);
out_outIsNotMember = mmc_mk_icon(_outIsNotMember);
return out_outIsNotMember;
}
DLLExport
modelica_metatype omc_List_getMemberOnTrue(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_metatype _outElement = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _inValue, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _inValue, _e)))
{
_outElement = _e;
goto _return;
}
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return _outElement;
}
DLLExport
modelica_metatype omc_List_getMember(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_metatype _outElement = NULL;
modelica_metatype _e = NULL;
modelica_metatype _res = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(valueEq(_inElement, _e))
{
_outElement = _e;
goto _return;
}
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return _outElement;
}
DLLExport
modelica_integer omc_List_positionList(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList, modelica_integer *out_outPosition)
{
modelica_integer _outListIndex;
modelica_integer _outPosition;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outListIndex = ((modelica_integer) 1);
{
modelica_metatype _lst;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_lst = MMC_CAR(tmpMeta1);
_outPosition = ((modelica_integer) 1);
{
modelica_metatype _e;
for (tmpMeta2 = _lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
if(valueEq(_e, _inElement))
{
goto _return;
}
_outPosition = ((modelica_integer) 1) + _outPosition;
}
}
_outListIndex = ((modelica_integer) 1) + _outListIndex;
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
if (out_outPosition) { *out_outPosition = _outPosition; }
return _outListIndex;
}
modelica_metatype boxptr_List_positionList(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList, modelica_metatype *out_outPosition)
{
modelica_integer _outPosition;
modelica_integer _outListIndex;
modelica_metatype out_outListIndex;
_outListIndex = omc_List_positionList(threadData, _inElement, _inList, &_outPosition);
out_outListIndex = mmc_mk_icon(_outListIndex);
if (out_outPosition) { *out_outPosition = mmc_mk_icon(_outPosition); }
return out_outListIndex;
}
DLLExport
modelica_integer omc_List_position1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPredFunc, modelica_metatype _inArg)
{
modelica_integer _outPosition;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outPosition = ((modelica_integer) 1);
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 2))), _e, _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 1)))) (threadData, _e, _inArg)))
{
goto _return;
}
_outPosition = ((modelica_integer) 1) + _outPosition;
}
}
_outPosition = ((modelica_integer) -1);
_return: OMC_LABEL_UNUSED
return _outPosition;
}
modelica_metatype boxptr_List_position1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPredFunc, modelica_metatype _inArg)
{
modelica_integer _outPosition;
modelica_metatype out_outPosition;
_outPosition = omc_List_position1OnTrue(threadData, _inList, _inPredFunc, _inArg);
out_outPosition = mmc_mk_icon(_outPosition);
return out_outPosition;
}
DLLExport
modelica_integer omc_List_positionOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPredFunc)
{
modelica_integer _outPosition;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outPosition = ((modelica_integer) 1);
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredFunc), 1)))) (threadData, _e)))
{
goto _return;
}
_outPosition = ((modelica_integer) 1) + _outPosition;
}
}
_outPosition = ((modelica_integer) -1);
_return: OMC_LABEL_UNUSED
return _outPosition;
}
modelica_metatype boxptr_List_positionOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inPredFunc)
{
modelica_integer _outPosition;
modelica_metatype out_outPosition;
_outPosition = omc_List_positionOnTrue(threadData, _inList, _inPredFunc);
out_outPosition = mmc_mk_icon(_outPosition);
return out_outPosition;
}
DLLExport
modelica_integer omc_List_position(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_integer _outPosition;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outPosition = ((modelica_integer) 1);
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(valueEq(_e, _inElement))
{
goto _return;
}
_outPosition = ((modelica_integer) 1) + _outPosition;
}
}
MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return _outPosition;
}
modelica_metatype boxptr_List_position(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_integer _outPosition;
modelica_metatype out_outPosition;
_outPosition = omc_List_position(threadData, _inElement, _inList);
out_outPosition = mmc_mk_icon(_outPosition);
return out_outPosition;
}
DLLExport
modelica_metatype omc_List_threadMapFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest_e2 = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_boolean tmp8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outArg = _inArg;
_rest_e2 = _inList2;
{
modelica_metatype _e1;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e1 = MMC_CAR(tmpMeta2);
tmpMeta3 = _rest_e2;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e2 = tmpMeta4;
_rest_e2 = tmpMeta5;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _outArg ,&_outArg);
tmpMeta6 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta6;
}
}
tmp8 = listEmpty(_rest_e2);
if (1 != tmp8) MMC_THROW_INTERNAL();
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_threadFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inFoldArg)
{
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _res = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inFoldArg);
_inList1 = _rest1;
_inList2 = _rest2;
_inFoldArg = _res;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = _inFoldArg;
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
_outFoldArg = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outFoldArg;
}
DLLExport
modelica_metatype omc_List_threadFold4(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inFoldArg)
{
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _res = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3, _inArg4, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3, _inArg4, _inFoldArg);
_inList1 = _rest1;
_inList2 = _rest2;
_inFoldArg = _res;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = _inFoldArg;
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
_outFoldArg = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outFoldArg;
}
DLLExport
modelica_metatype omc_List_threadFold3(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inFoldArg)
{
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _res = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3, _inFoldArg);
_inList1 = _rest1;
_inList2 = _rest2;
_inFoldArg = _res;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = _inFoldArg;
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
_outFoldArg = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outFoldArg;
}
DLLExport
modelica_metatype omc_List_threadFold2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inFoldArg)
{
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _res = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inFoldArg);
_inList1 = _rest1;
_inList2 = _rest2;
_inFoldArg = _res;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = _inFoldArg;
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
_outFoldArg = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outFoldArg;
}
DLLExport
modelica_metatype omc_List_threadFold1(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inFoldFunc, modelica_metatype _inArg1, modelica_metatype _inFoldArg)
{
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _res = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e1, _e2, _inArg1, _inFoldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inFoldArg);
_inList1 = _rest1;
_inList2 = _rest2;
_inFoldArg = _res;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = _inFoldArg;
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
_outFoldArg = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outFoldArg;
}
DLLExport
modelica_metatype omc_List_thread3Map3(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar27;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar26;
modelica_integer tmp4;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
modelica_metatype _e3_loopVar = 0;
modelica_metatype _e3;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
_e3_loopVar = _inList3;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar27 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar27;
while(1) {
tmp4 = 3;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp4--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp4--;
}if (!listEmpty(_e3_loopVar)) {
_e3 = MMC_CAR(_e3_loopVar);
_e3_loopVar = MMC_CDR(_e3_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _e3, _inArg1, _inArg2, _inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _e3, _inArg1, _inArg2, _inArg3);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar26,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 3) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar27;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_thread3MapFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest_e2 = NULL;
modelica_metatype _e3 = NULL;
modelica_metatype _rest_e3 = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_boolean tmp11;
modelica_boolean tmp12;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outArg = _inArg;
_rest_e2 = _inList2;
_rest_e3 = _inList3;
{
modelica_metatype _e1;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e1 = MMC_CAR(tmpMeta2);
tmpMeta3 = _rest_e2;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e2 = tmpMeta4;
_rest_e2 = tmpMeta5;
tmpMeta6 = _rest_e3;
if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
tmpMeta7 = MMC_CAR(tmpMeta6);
tmpMeta8 = MMC_CDR(tmpMeta6);
_e3 = tmpMeta7;
_rest_e3 = tmpMeta8;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _e3, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _e3, _outArg ,&_outArg);
tmpMeta9 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta9;
}
}
tmp11 = listEmpty(_rest_e2);
if (1 != tmp11) MMC_THROW_INTERNAL();
tmp12 = listEmpty(_rest_e3);
if (1 != tmp12) MMC_THROW_INTERNAL();
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_thread3Map__2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3, modelica_fnptr _inFunc, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e2 = NULL;
modelica_metatype _rest_e2 = NULL;
modelica_metatype _e3 = NULL;
modelica_metatype _rest_e3 = NULL;
modelica_metatype _res1 = NULL;
modelica_metatype _res2 = NULL;
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
modelica_boolean tmp13;
modelica_boolean tmp14;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
_rest_e2 = _inList2;
_rest_e3 = _inList3;
{
modelica_metatype _e1;
for (tmpMeta3 = _inList1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e1 = MMC_CAR(tmpMeta3);
tmpMeta4 = _rest_e2;
if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
tmpMeta5 = MMC_CAR(tmpMeta4);
tmpMeta6 = MMC_CDR(tmpMeta4);
_e2 = tmpMeta5;
_rest_e2 = tmpMeta6;
tmpMeta7 = _rest_e3;
if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
tmpMeta8 = MMC_CAR(tmpMeta7);
tmpMeta9 = MMC_CDR(tmpMeta7);
_e3 = tmpMeta8;
_rest_e3 = tmpMeta9;
_res1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _e3 ,&_res2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _e3 ,&_res2);
tmpMeta10 = mmc_mk_cons(_res1, _outList1);
_outList1 = tmpMeta10;
tmpMeta11 = mmc_mk_cons(_res2, _outList2);
_outList2 = tmpMeta11;
}
}
tmp13 = listEmpty(_rest_e2);
if (1 != tmp13) MMC_THROW_INTERNAL();
tmp14 = listEmpty(_rest_e3);
if (1 != tmp14) MMC_THROW_INTERNAL();
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_threadMap3ReverseFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inFoldArg, modelica_metatype _inAccum, modelica_metatype *out_outFoldArg)
{
modelica_metatype _outList = NULL;
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _res = NULL;
modelica_metatype _foldArg = NULL;
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3, _inFoldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3, _inFoldArg ,&_foldArg);
tmpMeta10 = mmc_mk_cons(_res, _inAccum);
_inList1 = _rest1;
_inList2 = _rest2;
_inFoldArg = _foldArg;
_inAccum = tmpMeta10;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta[0+0] = _inAccum;
tmpMeta[0+1] = _inFoldArg;
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
_outList = tmpMeta[0+0];
_outFoldArg = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outFoldArg) { *out_outFoldArg = _outFoldArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_thread3Map(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3, modelica_fnptr _inFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar29;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar28;
modelica_integer tmp4;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
modelica_metatype _e3_loopVar = 0;
modelica_metatype _e3;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
_e3_loopVar = _inList3;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar29 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar29;
while(1) {
tmp4 = 3;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp4--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp4--;
}if (!listEmpty(_e3_loopVar)) {
_e3 = MMC_CAR(_e3_loopVar);
_e3_loopVar = MMC_CDR(_e3_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e1, _e2, _e3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e1, _e2, _e3);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar28,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 3) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar29;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_threadMap3Reverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar31;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar30;
modelica_integer tmp3;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar31 = tmpMeta2;
while(1) {
tmp3 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp3--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3);
__omcQ_24tmpVar31 = mmc_mk_cons(__omcQ_24tmpVar30,__omcQ_24tmpVar31);
} else if (tmp3 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar31;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_threadMap3(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar33;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar32;
modelica_integer tmp4;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar33 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar33;
while(1) {
tmp4 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp4--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inArg3);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar32,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar33;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_threadMap2ReverseFold(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inFoldArg, modelica_metatype _inAccum, modelica_metatype *out_outFoldArg)
{
modelica_metatype _outList = NULL;
modelica_metatype _outFoldArg = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _res = NULL;
modelica_metatype _foldArg = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta[0+0] = _inAccum;
tmpMeta[0+1] = _inFoldArg;
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
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2, _inFoldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2, _inFoldArg ,&_foldArg);
tmpMeta10 = mmc_mk_cons(_res, _inAccum);
_inList1 = _rest1;
_inList2 = _rest2;
_inFoldArg = _foldArg;
_inAccum = tmpMeta10;
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
_outList = tmpMeta[0+0];
_outFoldArg = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outFoldArg) { *out_outFoldArg = _outFoldArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_threadMap2Reverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar35;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar34;
modelica_integer tmp3;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar35 = tmpMeta2;
while(1) {
tmp3 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp3--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2);
__omcQ_24tmpVar35 = mmc_mk_cons(__omcQ_24tmpVar34,__omcQ_24tmpVar35);
} else if (tmp3 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar35;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_threadMap2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar37;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar36;
modelica_integer tmp4;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar37 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar37;
while(1) {
tmp4 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp4--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar36 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1, _inArg2);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar36,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar37;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
void omc_List_threadMap1__0(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp3_1;modelica_metatype tmp3_2;
tmp3_1 = _inList1;
tmp3_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
if (!listEmpty(tmp3_1)) goto tmp2_end;
if (!listEmpty(tmp3_2)) goto tmp2_end;
goto tmp2_done;
}
case 1: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (listEmpty(tmp3_1)) goto tmp2_end;
tmpMeta5 = MMC_CAR(tmp3_1);
tmpMeta6 = MMC_CDR(tmp3_1);
if (listEmpty(tmp3_2)) goto tmp2_end;
tmpMeta7 = MMC_CAR(tmp3_2);
tmpMeta8 = MMC_CDR(tmp3_2);
_e1 = tmpMeta5;
_rest1 = tmpMeta6;
_e2 = tmpMeta7;
_rest2 = tmpMeta8;
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1);
_inList1 = _rest1;
_inList2 = _rest2;
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
modelica_metatype omc_List_threadMap1Reverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar39;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar38;
modelica_integer tmp3;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar39 = tmpMeta2;
while(1) {
tmp3 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp3--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar38 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1);
__omcQ_24tmpVar39 = mmc_mk_cons(__omcQ_24tmpVar38,__omcQ_24tmpVar39);
} else if (tmp3 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar39;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_threadMap1(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar41;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar40;
modelica_integer tmp4;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar41 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar41;
while(1) {
tmp4 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp4--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar40 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2, _inArg1);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar40,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar41;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
void omc_List_threadMapAllValue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp3_1;modelica_metatype tmp3_2;
tmp3_1 = _inList1;
tmp3_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
modelica_metatype _res = NULL;
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (listEmpty(tmp3_1)) goto tmp2_end;
tmpMeta5 = MMC_CAR(tmp3_1);
tmpMeta6 = MMC_CDR(tmp3_1);
if (listEmpty(tmp3_2)) goto tmp2_end;
tmpMeta7 = MMC_CAR(tmp3_2);
tmpMeta8 = MMC_CDR(tmp3_2);
_e1 = tmpMeta5;
_rest1 = tmpMeta6;
_e2 = tmpMeta7;
_rest2 = tmpMeta8;
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2);
equality(_res, _inValue);
_inList1 = _rest1;
_inList2 = _rest2;
goto _tailrecursive;
;
goto tmp2_done;
}
case 1: {
if (!listEmpty(tmp3_1)) goto tmp2_end;
if (!listEmpty(tmp3_2)) goto tmp2_end;
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
modelica_metatype omc_List_threadMapList__2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _l2 = NULL;
modelica_metatype _rest_l2 = NULL;
modelica_metatype _ret1 = NULL;
modelica_metatype _ret2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
_rest_l2 = _inList2;
{
modelica_metatype _l1;
for (tmpMeta3 = _inList1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_l1 = MMC_CAR(tmpMeta3);
tmpMeta4 = _rest_l2;
if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
tmpMeta5 = MMC_CAR(tmpMeta4);
tmpMeta6 = MMC_CDR(tmpMeta4);
_l2 = tmpMeta5;
_rest_l2 = tmpMeta6;
_ret1 = omc_List_threadMap__2(threadData, _l1, _l2, ((modelica_fnptr) _inMapFunc) ,&_ret2);
tmpMeta7 = mmc_mk_cons(_ret1, _outList1);
_outList1 = tmpMeta7;
tmpMeta8 = mmc_mk_cons(_ret2, _outList2);
_outList2 = tmpMeta8;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_threadMapList(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar43;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar42;
modelica_integer tmp4;
modelica_metatype _lst1_loopVar = 0;
modelica_metatype _lst1;
modelica_metatype _lst2_loopVar = 0;
modelica_metatype _lst2;
_lst1_loopVar = _inList1;
_lst2_loopVar = _inList2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar43 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar43;
while(1) {
tmp4 = 2;
if (!listEmpty(_lst1_loopVar)) {
_lst1 = MMC_CAR(_lst1_loopVar);
_lst1_loopVar = MMC_CDR(_lst1_loopVar);
tmp4--;
}if (!listEmpty(_lst2_loopVar)) {
_lst2 = MMC_CAR(_lst2_loopVar);
_lst2_loopVar = MMC_CDR(_lst2_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar42 = omc_List_threadMap(threadData, _lst1, _lst2, ((modelica_fnptr) _inMapFunc));
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar42,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar43;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_threadMap__2(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e2 = NULL;
modelica_metatype _rest_e2 = NULL;
modelica_metatype _ret1 = NULL;
modelica_metatype _ret2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
_rest_e2 = _inList2;
{
modelica_metatype _e1;
for (tmpMeta3 = _inList1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e1 = MMC_CAR(tmpMeta3);
tmpMeta4 = _rest_e2;
if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
tmpMeta5 = MMC_CAR(tmpMeta4);
tmpMeta6 = MMC_CDR(tmpMeta4);
_e2 = tmpMeta5;
_rest_e2 = tmpMeta6;
_ret1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2 ,&_ret2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2 ,&_ret2);
tmpMeta7 = mmc_mk_cons(_ret1, _outList1);
_outList1 = tmpMeta7;
tmpMeta8 = mmc_mk_cons(_ret2, _outList2);
_outList2 = tmpMeta8;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_threadMapReverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar45;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar44;
modelica_integer tmp3;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar45 = tmpMeta2;
while(1) {
tmp3 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp3--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2);
__omcQ_24tmpVar45 = mmc_mk_cons(__omcQ_24tmpVar44,__omcQ_24tmpVar45);
} else if (tmp3 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar45;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_threadMap(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar47;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar46;
modelica_integer tmp4;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar47 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar47;
while(1) {
tmp4 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp4--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar46 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar46,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar47;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_unzipSecond(threadData_t *threadData, modelica_metatype _inTuples)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _tpl;
for (tmpMeta2 = _inTuples; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_tpl = MMC_CAR(tmpMeta2);
tmpMeta3 = _tpl;
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
_e = tmpMeta4;
tmpMeta5 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta5;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_unzipFirst(threadData_t *threadData, modelica_metatype _inTuples)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _tpl;
for (tmpMeta2 = _inTuples; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_tpl = MMC_CAR(tmpMeta2);
tmpMeta3 = _tpl;
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
_e = tmpMeta4;
tmpMeta5 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta5;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_unzipReverse(threadData_t *threadData, modelica_metatype _inTuples, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
{
modelica_metatype _tpl;
for (tmpMeta3 = _inTuples; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_tpl = MMC_CAR(tmpMeta3);
tmpMeta4 = _tpl;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
_e1 = tmpMeta5;
_e2 = tmpMeta6;
tmpMeta7 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta7;
tmpMeta8 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta8;
}
}
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_unzip3(threadData_t *threadData, modelica_metatype _tuples, modelica_metatype *out_l2, modelica_metatype *out_l3)
{
modelica_metatype _l1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _l2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _l3 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _e3 = NULL;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_l1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_l2 = tmpMeta2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
_l3 = tmpMeta3;
{
modelica_metatype _t;
for (tmpMeta4 = listReverse(_tuples); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_t = MMC_CAR(tmpMeta4);
tmpMeta5 = _t;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
_e1 = tmpMeta6;
_e2 = tmpMeta7;
_e3 = tmpMeta8;
tmpMeta9 = mmc_mk_cons(_e1, _l1);
_l1 = tmpMeta9;
tmpMeta10 = mmc_mk_cons(_e2, _l2);
_l2 = tmpMeta10;
tmpMeta11 = mmc_mk_cons(_e3, _l3);
_l3 = tmpMeta11;
}
}
_return: OMC_LABEL_UNUSED
if (out_l2) { *out_l2 = _l2; }
if (out_l3) { *out_l3 = _l3; }
return _l1;
}
DLLExport
modelica_metatype omc_List_unzip(threadData_t *threadData, modelica_metatype _inTuples, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
{
modelica_metatype _tpl;
for (tmpMeta3 = _inTuples; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_tpl = MMC_CAR(tmpMeta3);
tmpMeta4 = _tpl;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
_e1 = tmpMeta5;
_e2 = tmpMeta6;
tmpMeta7 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta7;
tmpMeta8 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta8;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_zip3(threadData_t *threadData, modelica_metatype _l1, modelica_metatype _l2, modelica_metatype _l3)
{
modelica_metatype _res = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar49;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar48;
modelica_integer tmp5;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
modelica_metatype _e3_loopVar = 0;
modelica_metatype _e3;
_e1_loopVar = _l1;
_e2_loopVar = _l2;
_e3_loopVar = _l3;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar49 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar49;
while(1) {
tmp5 = 3;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp5--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp5--;
}if (!listEmpty(_e3_loopVar)) {
_e3 = MMC_CAR(_e3_loopVar);
_e3_loopVar = MMC_CDR(_e3_loopVar);
tmp5--;
}
if (tmp5 == 0) {
tmpMeta4 = mmc_mk_box3(0, _e1, _e2, _e3);
__omcQ_24tmpVar48 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar48,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp5 == 3) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar49;
}
_res = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _res;
}
DLLExport
modelica_metatype omc_List_zip(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outTuples = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar51;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar50;
modelica_integer tmp5;
modelica_metatype _e1_loopVar = 0;
modelica_metatype _e1;
modelica_metatype _e2_loopVar = 0;
modelica_metatype _e2;
_e1_loopVar = _inList1;
_e2_loopVar = _inList2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar51 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar51;
while(1) {
tmp5 = 2;
if (!listEmpty(_e1_loopVar)) {
_e1 = MMC_CAR(_e1_loopVar);
_e1_loopVar = MMC_CDR(_e1_loopVar);
tmp5--;
}if (!listEmpty(_e2_loopVar)) {
_e2 = MMC_CAR(_e2_loopVar);
_e2_loopVar = MMC_CDR(_e2_loopVar);
tmp5--;
}
if (tmp5 == 0) {
tmpMeta4 = mmc_mk_box2(0, _e1, _e2);
__omcQ_24tmpVar50 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar50,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp5 == 2) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar51;
}
_outTuples = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outTuples;
}
DLLExport
modelica_metatype omc_List_thread3(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inList3)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e2 = NULL;
modelica_metatype _e3 = NULL;
modelica_metatype _rest_e2 = NULL;
modelica_metatype _rest_e3 = NULL;
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
modelica_boolean tmp13;
modelica_boolean tmp14;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_rest_e2 = _inList2;
_rest_e3 = _inList3;
{
modelica_metatype _e1;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e1 = MMC_CAR(tmpMeta2);
tmpMeta3 = _rest_e2;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e2 = tmpMeta4;
_rest_e2 = tmpMeta5;
tmpMeta6 = _rest_e3;
if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
tmpMeta7 = MMC_CAR(tmpMeta6);
tmpMeta8 = MMC_CDR(tmpMeta6);
_e3 = tmpMeta7;
_rest_e3 = tmpMeta8;
tmpMeta11 = mmc_mk_cons(_e3, _outList);
tmpMeta10 = mmc_mk_cons(_e2, tmpMeta11);
tmpMeta9 = mmc_mk_cons(_e1, tmpMeta10);
_outList = tmpMeta9;
}
}
tmp13 = listEmpty(_rest_e2);
if (1 != tmp13) MMC_THROW_INTERNAL();
tmp14 = listEmpty(_rest_e3);
if (1 != tmp14) MMC_THROW_INTERNAL();
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_thread(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inAccum)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e2 = NULL;
modelica_metatype _rest_e2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_boolean tmp9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_rest_e2 = _inList2;
{
modelica_metatype _e1;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e1 = MMC_CAR(tmpMeta2);
tmpMeta3 = _rest_e2;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e2 = tmpMeta4;
_rest_e2 = tmpMeta5;
tmpMeta7 = mmc_mk_cons(_e2, _outList);
tmpMeta6 = mmc_mk_cons(_e1, tmpMeta7);
_outList = tmpMeta6;
}
}
tmp9 = listEmpty(_rest_e2);
if (1 != tmp9) MMC_THROW_INTERNAL();
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_flattenReverse(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_boolean tmp5;
modelica_metatype tmpMeta6;
modelica_boolean tmp7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp7 = (modelica_boolean)listEmpty(_inList);
if(tmp7)
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta8 = tmpMeta1;
}
else
{
tmp5 = (modelica_boolean)(listLength(_inList) == ((modelica_integer) 1));
if(tmp5)
{
tmpMeta6 = omc_List_first(threadData, _inList);
}
else
{
{
modelica_metatype __omcQ_24tmpVar53;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar52;
modelica_integer tmp4;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar53 = tmpMeta3;
while(1) {
tmp4 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar52 = _lst;
__omcQ_24tmpVar53 = listAppend(__omcQ_24tmpVar52, __omcQ_24tmpVar53);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta2 = __omcQ_24tmpVar53;
}
tmpMeta6 = tmpMeta2;
}
tmpMeta8 = tmpMeta6;
}
_outList = tmpMeta8;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_flatten(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_boolean tmp5;
modelica_metatype tmpMeta6;
modelica_boolean tmp7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp7 = (modelica_boolean)listEmpty(_inList);
if(tmp7)
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta8 = tmpMeta1;
}
else
{
tmp5 = (modelica_boolean)(listLength(_inList) == ((modelica_integer) 1));
if(tmp5)
{
tmpMeta6 = omc_List_first(threadData, _inList);
}
else
{
{
modelica_metatype __omcQ_24tmpVar55;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar54;
modelica_integer tmp4;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = listReverse(_inList);
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar55 = tmpMeta3;
while(1) {
tmp4 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar54 = _lst;
__omcQ_24tmpVar55 = listAppend(__omcQ_24tmpVar54, __omcQ_24tmpVar55);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta2 = __omcQ_24tmpVar55;
}
tmpMeta6 = tmpMeta2;
}
tmpMeta8 = tmpMeta6;
}
_outList = tmpMeta8;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_reduce1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inReduceFunc, modelica_metatype _inExtraArg1)
{
modelica_metatype _outResult = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inList;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_outResult = tmpMeta2;
_rest = tmpMeta3;
{
modelica_metatype _e;
for (tmpMeta4 = _rest; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 2))), _outResult, _e, _inExtraArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 1)))) (threadData, _outResult, _e, _inExtraArg1);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_reduce(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inReduceFunc)
{
modelica_metatype _outResult = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inList;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_outResult = tmpMeta2;
_rest = tmpMeta3;
{
modelica_metatype _e;
for (tmpMeta4 = _rest; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 2))), _outResult, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inReduceFunc), 1)))) (threadData, _outResult, _e);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_map3FoldList(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inConstArg1, modelica_metatype _inConstArg2, modelica_metatype _inConstArg3, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outListList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outListList = tmpMeta1;
_outArg = _inArg;
{
modelica_metatype _lst;
for (tmpMeta2 = _inListList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_lst = MMC_CAR(tmpMeta2);
_res = omc_List_map3Fold(threadData, _lst, ((modelica_fnptr) _inFunc), _inConstArg1, _inConstArg2, _inConstArg3, _inArg ,&_outArg);
tmpMeta3 = mmc_mk_cons(_res, _outListList);
_outListList = tmpMeta3;
}
}
_outListList = listReverseInPlace(_outListList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outListList;
}
DLLExport
modelica_metatype omc_List_mapFoldList(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outListList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outListList = tmpMeta1;
_outArg = _inArg;
{
modelica_metatype _lst;
for (tmpMeta2 = _inListList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_lst = MMC_CAR(tmpMeta2);
_res = omc_List_mapFold(threadData, _lst, ((modelica_fnptr) _inFunc), _outArg ,&_outArg);
tmpMeta3 = mmc_mk_cons(_res, _outListList);
_outListList = tmpMeta3;
}
}
_outListList = listReverseInPlace(_outListList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outListList;
}
DLLExport
modelica_metatype omc_List_map4Fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inConstArg2, modelica_metatype _inConstArg3, modelica_metatype _inConstArg4, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outArg = _inArg;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _inConstArg2, _inConstArg3, _inConstArg4, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _inConstArg2, _inConstArg3, _inConstArg4, _outArg ,&_outArg);
tmpMeta3 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_map3Fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inConstArg2, modelica_metatype _inConstArg3, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outArg = _inArg;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _inConstArg2, _inConstArg3, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _inConstArg2, _inConstArg3, _outArg ,&_outArg);
tmpMeta3 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_map2FoldCheckReferenceEq(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inConstArg2, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outList = NULL;
modelica_metatype _outArg = NULL;
modelica_metatype _res = NULL;
modelica_boolean _allEq;
modelica_metatype _delst = NULL;
modelica_integer _n;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_boolean tmp6;
modelica_metatype tmpMeta7;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outArg = _inArg;
_allEq = 1;
_n = ((modelica_integer) 0);
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _inConstArg2, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _inConstArg2, _outArg ,&_outArg);
if((_allEq?(!referenceEq(_e, _res)):0))
{
_allEq = 0;
_delst = omc_DoubleEnded_empty(threadData, _res);
{
modelica_metatype _elt;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_elt = MMC_CAR(tmpMeta2);
if((_n < ((modelica_integer) 1)))
{
break;
}
omc_DoubleEnded_push__back(threadData, _delst, _elt);
_n = ((modelica_integer) -1) + _n;
}
}
}
if(_allEq)
{
_n = ((modelica_integer) 1) + _n;
}
else
{
omc_DoubleEnded_push__back(threadData, _delst, _res);
}
}
}
tmp6 = (modelica_boolean)_allEq;
if(tmp6)
{
tmpMeta7 = _inList;
}
else
{
tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta7 = omc_DoubleEnded_toListAndClear(threadData, _delst, tmpMeta5);
}
_outList = tmpMeta7;
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_map2Fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inConstArg2, modelica_metatype _inArg, modelica_metatype _inAccum, modelica_metatype *out_outArg)
{
modelica_metatype _outList = NULL;
modelica_metatype _outArg = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = _inAccum;
_outArg = _inArg;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _inConstArg2, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _inConstArg2, _outArg ,&_outArg);
tmpMeta2 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta2;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_map1Fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inConstArg, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outArg = _inArg;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inConstArg, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inConstArg, _outArg ,&_outArg);
tmpMeta3 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_mapFold5(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype __omcQ_24in_5FinArg1, modelica_metatype __omcQ_24in_5FinArg2, modelica_metatype __omcQ_24in_5FinArg3, modelica_metatype __omcQ_24in_5FinArg4, modelica_metatype __omcQ_24in_5FinArg5, modelica_metatype *out_inArg1, modelica_metatype *out_inArg2, modelica_metatype *out_inArg3, modelica_metatype *out_inArg4, modelica_metatype *out_inArg5)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _inArg1 = NULL;
modelica_metatype _inArg2 = NULL;
modelica_metatype _inArg3 = NULL;
modelica_metatype _inArg4 = NULL;
modelica_metatype _inArg5 = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_inArg1 = __omcQ_24in_5FinArg1;
_inArg2 = __omcQ_24in_5FinArg2;
_inArg3 = __omcQ_24in_5FinArg3;
_inArg4 = __omcQ_24in_5FinArg4;
_inArg5 = __omcQ_24in_5FinArg5;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5 ,&_inArg1 ,&_inArg2 ,&_inArg3 ,&_inArg4 ,&_inArg5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5 ,&_inArg1 ,&_inArg2 ,&_inArg3 ,&_inArg4 ,&_inArg5);
tmpMeta3 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_inArg1) { *out_inArg1 = _inArg1; }
if (out_inArg2) { *out_inArg2 = _inArg2; }
if (out_inArg3) { *out_inArg3 = _inArg3; }
if (out_inArg4) { *out_inArg4 = _inArg4; }
if (out_inArg5) { *out_inArg5 = _inArg5; }
return _outList;
}
DLLExport
modelica_metatype omc_List_mapFold4(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype __omcQ_24in_5FinArg1, modelica_metatype __omcQ_24in_5FinArg2, modelica_metatype __omcQ_24in_5FinArg3, modelica_metatype __omcQ_24in_5FinArg4, modelica_metatype *out_inArg1, modelica_metatype *out_inArg2, modelica_metatype *out_inArg3, modelica_metatype *out_inArg4)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _inArg1 = NULL;
modelica_metatype _inArg2 = NULL;
modelica_metatype _inArg3 = NULL;
modelica_metatype _inArg4 = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_inArg1 = __omcQ_24in_5FinArg1;
_inArg2 = __omcQ_24in_5FinArg2;
_inArg3 = __omcQ_24in_5FinArg3;
_inArg4 = __omcQ_24in_5FinArg4;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4 ,&_inArg1 ,&_inArg2 ,&_inArg3 ,&_inArg4) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4 ,&_inArg1 ,&_inArg2 ,&_inArg3 ,&_inArg4);
tmpMeta3 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_inArg1) { *out_inArg1 = _inArg1; }
if (out_inArg2) { *out_inArg2 = _inArg2; }
if (out_inArg3) { *out_inArg3 = _inArg3; }
if (out_inArg4) { *out_inArg4 = _inArg4; }
return _outList;
}
DLLExport
modelica_metatype omc_List_mapFold3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype __omcQ_24in_5FinArg1, modelica_metatype __omcQ_24in_5FinArg2, modelica_metatype __omcQ_24in_5FinArg3, modelica_metatype *out_inArg1, modelica_metatype *out_inArg2, modelica_metatype *out_inArg3)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _inArg1 = NULL;
modelica_metatype _inArg2 = NULL;
modelica_metatype _inArg3 = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_inArg1 = __omcQ_24in_5FinArg1;
_inArg2 = __omcQ_24in_5FinArg2;
_inArg3 = __omcQ_24in_5FinArg3;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3 ,&_inArg1 ,&_inArg2 ,&_inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3 ,&_inArg1 ,&_inArg2 ,&_inArg3);
tmpMeta3 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_inArg1) { *out_inArg1 = _inArg1; }
if (out_inArg2) { *out_inArg2 = _inArg2; }
if (out_inArg3) { *out_inArg3 = _inArg3; }
return _outList;
}
DLLExport
modelica_metatype omc_List_mapFold2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outArg1, modelica_metatype *out_outArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg1 = NULL;
modelica_metatype _outArg2 = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outArg1 = _inArg1;
_outArg2 = _inArg2;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _outArg1, _outArg2 ,&_outArg1 ,&_outArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _outArg1, _outArg2 ,&_outArg1 ,&_outArg2);
tmpMeta3 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outArg1) { *out_outArg1 = _outArg1; }
if (out_outArg2) { *out_outArg2 = _outArg2; }
return _outList;
}
DLLExport
modelica_metatype omc_List_mapFold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outArg = NULL;
modelica_metatype _res = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_outArg = _inArg;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _outArg ,&_outArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _outArg ,&_outArg);
tmpMeta3 = mmc_mk_cons(_res, _outList);
_outList = tmpMeta3;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
if (out_outArg) { *out_outArg = _outArg; }
return _outList;
}
DLLExport
modelica_metatype omc_List_fold6(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inExtraArg4, modelica_metatype _inExtraArg5, modelica_metatype _inExtraArg6, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _inExtraArg5, _inExtraArg6, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _inExtraArg5, _inExtraArg6, _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold5(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inExtraArg4, modelica_metatype _inExtraArg5, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _inExtraArg5, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _inExtraArg5, _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold31(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype _inStartValue3, modelica_metatype *out_outResult2, modelica_metatype *out_outResult3)
{
modelica_metatype _outResult1 = NULL;
modelica_metatype _outResult2 = NULL;
modelica_metatype _outResult3 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult1 = _inStartValue1;
_outResult2 = _inStartValue2;
_outResult3 = _inStartValue3;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3);
}
}
_return: OMC_LABEL_UNUSED
if (out_outResult2) { *out_outResult2 = _outResult2; }
if (out_outResult3) { *out_outResult3 = _outResult3; }
return _outResult1;
}
DLLExport
modelica_metatype omc_List_fold21(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype *out_outResult2)
{
modelica_metatype _outResult1 = NULL;
modelica_metatype _outResult2 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult1 = _inStartValue1;
_outResult2 = _inStartValue2;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _outResult1, _outResult2 ,&_outResult2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _outResult1, _outResult2 ,&_outResult2);
}
}
_return: OMC_LABEL_UNUSED
if (out_outResult2) { *out_outResult2 = _outResult2; }
return _outResult1;
}
DLLExport
modelica_metatype omc_List_fold30(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype _inStartValue3, modelica_metatype *out_outResult2, modelica_metatype *out_outResult3)
{
modelica_metatype _outResult1 = NULL;
modelica_metatype _outResult2 = NULL;
modelica_metatype _outResult3 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult1 = _inStartValue1;
_outResult2 = _inStartValue2;
_outResult3 = _inStartValue3;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3);
}
}
_return: OMC_LABEL_UNUSED
if (out_outResult2) { *out_outResult2 = _outResult2; }
if (out_outResult3) { *out_outResult3 = _outResult3; }
return _outResult1;
}
DLLExport
modelica_metatype omc_List_fold20(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype *out_outResult2)
{
modelica_metatype _outResult1 = NULL;
modelica_metatype _outResult2 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult1 = _inStartValue1;
_outResult2 = _inStartValue2;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _outResult1, _outResult2 ,&_outResult2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _outResult1, _outResult2 ,&_outResult2);
}
}
_return: OMC_LABEL_UNUSED
if (out_outResult2) { *out_outResult2 = _outResult2; }
return _outResult1;
}
DLLExport
modelica_metatype omc_List_fold43(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inExtraArg4, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype _inStartValue3, modelica_metatype *out_outResult2, modelica_metatype *out_outResult3)
{
modelica_metatype _outResult1 = NULL;
modelica_metatype _outResult2 = NULL;
modelica_metatype _outResult3 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult1 = _inStartValue1;
_outResult2 = _inStartValue2;
_outResult3 = _inStartValue3;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _outResult1, _outResult2, _outResult3 ,&_outResult2 ,&_outResult3);
}
}
_return: OMC_LABEL_UNUSED
if (out_outResult2) { *out_outResult2 = _outResult2; }
if (out_outResult3) { *out_outResult3 = _outResult3; }
return _outResult1;
}
DLLExport
modelica_metatype omc_List_fold4(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inExtraArg4, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _inExtraArg4, _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold3r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inExtraArg3, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _inExtraArg3, _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold2r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult, _e, _inExtraArg1, _inExtraArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult, _e, _inExtraArg1, _inExtraArg2);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_foldList2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _lst;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_lst = MMC_CAR(tmpMeta1);
{
modelica_metatype _e;
for (tmpMeta2 = _lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _outResult);
}
}
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_foldList1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _lst;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_lst = MMC_CAR(tmpMeta1);
{
modelica_metatype _e;
for (tmpMeta2 = _lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _outResult);
}
}
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_foldList(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _lst;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_lst = MMC_CAR(tmpMeta1);
{
modelica_metatype _e;
for (tmpMeta2 = _lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _outResult);
}
}
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold22(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inStartValue1, modelica_metatype _inStartValue2, modelica_metatype *out_outResult2)
{
modelica_metatype _outResult1 = NULL;
modelica_metatype _outResult2 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult1 = _inStartValue1;
_outResult2 = _inStartValue2;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _outResult1, _outResult2 ,&_outResult2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _outResult1, _outResult2 ,&_outResult2);
}
}
_return: OMC_LABEL_UNUSED
if (out_outResult2) { *out_outResult2 = _outResult2; }
return _outResult1;
}
DLLExport
modelica_metatype omc_List_fold2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg1, modelica_metatype _inExtraArg2, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg1, _inExtraArg2, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg1, _inExtraArg2, _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold1r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult, _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult, _e, _inExtraArg);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inExtraArg, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _inExtraArg, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _inExtraArg, _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_foldr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult, _e);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_fold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inStartValue;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _e, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _e, _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_map2List(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outListList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar59;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar58;
modelica_integer tmp8;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = _inListList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar59 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar59;
while(1) {
tmp8 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp8--;
}
if (tmp8 == 0) {
{
modelica_metatype __omcQ_24tmpVar57;
modelica_metatype* tmp5;
modelica_metatype tmpMeta6;
modelica_metatype __omcQ_24tmpVar56;
modelica_integer tmp7;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _lst;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar57 = tmpMeta6;
tmp5 = &__omcQ_24tmpVar57;
while(1) {
tmp7 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp7--;
}
if (tmp7 == 0) {
__omcQ_24tmpVar56 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
*tmp5 = mmc_mk_cons(__omcQ_24tmpVar56,0);
tmp5 = &MMC_CDR(*tmp5);
} else if (tmp7 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp5 = mmc_mk_nil();
tmpMeta4 = __omcQ_24tmpVar57;
}
__omcQ_24tmpVar58 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar58,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp8 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar59;
}
_outListList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outListList;
}
DLLExport
modelica_metatype omc_List_map1List(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_metatype _outListList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar63;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar62;
modelica_integer tmp8;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = _inListList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar63 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar63;
while(1) {
tmp8 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp8--;
}
if (tmp8 == 0) {
{
modelica_metatype __omcQ_24tmpVar61;
modelica_metatype* tmp5;
modelica_metatype tmpMeta6;
modelica_metatype __omcQ_24tmpVar60;
modelica_integer tmp7;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _lst;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar61 = tmpMeta6;
tmp5 = &__omcQ_24tmpVar61;
while(1) {
tmp7 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp7--;
}
if (tmp7 == 0) {
__omcQ_24tmpVar60 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1);
*tmp5 = mmc_mk_cons(__omcQ_24tmpVar60,0);
tmp5 = &MMC_CDR(*tmp5);
} else if (tmp7 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp5 = mmc_mk_nil();
tmpMeta4 = __omcQ_24tmpVar61;
}
__omcQ_24tmpVar62 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar62,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp8 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar63;
}
_outListList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outListList;
}
DLLExport
modelica_metatype omc_List_mapListReverse(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc)
{
modelica_metatype _outListList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar67;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar66;
modelica_integer tmp7;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = _inListList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar67 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar67;
while(1) {
tmp7 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp7--;
}
if (tmp7 == 0) {
{
modelica_metatype __omcQ_24tmpVar65;
modelica_metatype tmpMeta5;
modelica_metatype __omcQ_24tmpVar64;
modelica_integer tmp6;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _lst;
tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar65 = tmpMeta5;
while(1) {
tmp6 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp6--;
}
if (tmp6 == 0) {
__omcQ_24tmpVar64 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
__omcQ_24tmpVar65 = mmc_mk_cons(__omcQ_24tmpVar64,__omcQ_24tmpVar65);
} else if (tmp6 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta4 = __omcQ_24tmpVar65;
}
__omcQ_24tmpVar66 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar66,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp7 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar67;
}
_outListList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outListList;
}
DLLExport
modelica_metatype omc_List_mapList1__1(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_metatype _outListList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar71;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar70;
modelica_integer tmp8;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = _inListList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar71 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar71;
while(1) {
tmp8 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp8--;
}
if (tmp8 == 0) {
{
modelica_metatype __omcQ_24tmpVar69;
modelica_metatype* tmp5;
modelica_metatype tmpMeta6;
modelica_metatype __omcQ_24tmpVar68;
modelica_integer tmp7;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _lst;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar69 = tmpMeta6;
tmp5 = &__omcQ_24tmpVar69;
while(1) {
tmp7 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp7--;
}
if (tmp7 == 0) {
__omcQ_24tmpVar68 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1);
*tmp5 = mmc_mk_cons(__omcQ_24tmpVar68,0);
tmp5 = &MMC_CDR(*tmp5);
} else if (tmp7 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp5 = mmc_mk_nil();
tmpMeta4 = __omcQ_24tmpVar69;
}
__omcQ_24tmpVar70 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar70,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp8 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar71;
}
_outListList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outListList;
}
DLLExport
void omc_List_mapList2__0(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
omc_List_map3__0(threadData, _inListList, boxvar_List_map2__0, ((modelica_fnptr) _inFunc), _inArg1, _inArg2);
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_List_mapList1__0(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
omc_List_map2__0(threadData, _inListList, boxvar_List_map1__0, ((modelica_fnptr) _inFunc), _inArg1);
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_List_mapList0(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
omc_List_map1__0(threadData, _inListList, boxvar_List_map__0, ((modelica_fnptr) _inFunc));
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_List_mapList(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc)
{
modelica_metatype _outListList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar75;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar74;
modelica_integer tmp8;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = _inListList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar75 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar75;
while(1) {
tmp8 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp8--;
}
if (tmp8 == 0) {
{
modelica_metatype __omcQ_24tmpVar73;
modelica_metatype* tmp5;
modelica_metatype tmpMeta6;
modelica_metatype __omcQ_24tmpVar72;
modelica_integer tmp7;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _lst;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar73 = tmpMeta6;
tmp5 = &__omcQ_24tmpVar73;
while(1) {
tmp7 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp7--;
}
if (tmp7 == 0) {
__omcQ_24tmpVar72 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
*tmp5 = mmc_mk_cons(__omcQ_24tmpVar72,0);
tmp5 = &MMC_CDR(*tmp5);
} else if (tmp7 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp5 = mmc_mk_nil();
tmpMeta4 = __omcQ_24tmpVar73;
}
__omcQ_24tmpVar74 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar74,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp8 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar75;
}
_outListList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outListList;
}
DLLExport
modelica_boolean omc_List_map1ListBoolOr(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_boolean _res;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = 0;
{
modelica_metatype _el;
for (tmpMeta1 = _inListList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_el = MMC_CAR(tmpMeta1);
{
modelica_metatype _e;
for (tmpMeta2 = _el; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1)))
{
_res = 1;
goto _return;
}
}
}
}
}
_return: OMC_LABEL_UNUSED
return _res;
}
modelica_metatype boxptr_List_map1ListBoolOr(threadData_t *threadData, modelica_metatype _inListList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_boolean _res;
modelica_metatype out_res;
_res = omc_List_map1ListBoolOr(threadData, _inListList, _inFunc, _inArg1);
out_res = mmc_mk_icon(_res);
return out_res;
}
DLLExport
modelica_boolean omc_List_map1BoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_boolean _res;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = 0;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1))))
{
goto _return;
}
}
}
_res = 1;
_return: OMC_LABEL_UNUSED
return _res;
}
modelica_metatype boxptr_List_map1BoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_boolean _res;
modelica_metatype out_res;
_res = omc_List_map1BoolAnd(threadData, _inList, _inFunc, _inArg1);
out_res = mmc_mk_icon(_res);
return out_res;
}
DLLExport
modelica_boolean omc_List_map1BoolOr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_boolean _res;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = 0;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1)))
{
_res = 1;
goto _return;
}
}
}
_return: OMC_LABEL_UNUSED
return _res;
}
modelica_metatype boxptr_List_map1BoolOr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_boolean _res;
modelica_metatype out_res;
_res = omc_List_map1BoolOr(threadData, _inList, _inFunc, _inArg1);
out_res = mmc_mk_icon(_res);
return out_res;
}
DLLExport
modelica_boolean omc_List_mapMapBoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_fnptr _inBFunc)
{
modelica_boolean _res;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = 0;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))))
{
goto _return;
}
}
}
_res = 1;
_return: OMC_LABEL_UNUSED
return _res;
}
modelica_metatype boxptr_List_mapMapBoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_fnptr _inBFunc)
{
modelica_boolean _res;
modelica_metatype out_res;
_res = omc_List_mapMapBoolAnd(threadData, _inList, _inFunc, _inBFunc);
out_res = mmc_mk_icon(_res);
return out_res;
}
DLLExport
modelica_boolean omc_List_mapBoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _res;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = 0;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e))))
{
goto _return;
}
}
}
_res = 1;
_return: OMC_LABEL_UNUSED
return _res;
}
modelica_metatype boxptr_List_mapBoolAnd(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _res;
modelica_metatype out_res;
_res = omc_List_mapBoolAnd(threadData, _inList, _inFunc);
out_res = mmc_mk_icon(_res);
return out_res;
}
DLLExport
modelica_boolean omc_List_mapBoolOr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _res;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = 0;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
{
_res = 1;
goto _return;
}
}
}
_return: OMC_LABEL_UNUSED
return _res;
}
modelica_metatype boxptr_List_mapBoolOr(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_boolean _res;
modelica_metatype out_res;
_res = omc_List_mapBoolOr(threadData, _inList, _inFunc);
out_res = mmc_mk_icon(_res);
return out_res;
}
DLLExport
modelica_metatype omc_List_applyAndFold1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_fnptr _inApplyFunc, modelica_metatype _inExtraArg, modelica_metatype _inFoldArg)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inFoldArg;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))), _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, _e, _inExtraArg), _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))), _e, _inExtraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, _e, _inExtraArg), _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_applyAndFold(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFoldFunc, modelica_fnptr _inApplyFunc, modelica_metatype _inFoldArg)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outResult = _inFoldArg;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, _e), _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inApplyFunc), 1)))) (threadData, _e), _outResult);
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
void omc_List_foldAllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
modelica_metatype _arg = NULL;
modelica_metatype _eo = NULL;
modelica_metatype tmpMeta1;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_arg = _inArg1;
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _arg ,&_arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _arg ,&_arg);
tmp2 = valueEq(_eo, _inValue);
if (1 != tmp2) MMC_THROW_INTERNAL();
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_boolean omc_List_map1ListAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
modelica_boolean _outAllValue;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outAllValue = 1;
{
modelica_metatype _lst;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_lst = MMC_CAR(tmpMeta1);
if((!omc_List_map1AllValueBool(threadData, _lst, ((modelica_fnptr) _inMapFunc), _inValue, _inArg1)))
{
_outAllValue = 0;
goto _return;
}
}
}
_return: OMC_LABEL_UNUSED
return _outAllValue;
}
modelica_metatype boxptr_List_map1ListAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
modelica_boolean _outAllValue;
modelica_metatype out_outAllValue;
_outAllValue = omc_List_map1ListAllValueBool(threadData, _inList, _inMapFunc, _inValue, _inArg1);
out_outAllValue = mmc_mk_icon(_outAllValue);
return out_outAllValue;
}
DLLExport
modelica_boolean omc_List_mapListAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
modelica_boolean _outAllValue;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outAllValue = 1;
{
modelica_metatype _lst;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_lst = MMC_CAR(tmpMeta1);
if((!omc_List_mapAllValueBool(threadData, _lst, ((modelica_fnptr) _inMapFunc), _inValue)))
{
_outAllValue = 0;
goto _return;
}
}
}
_return: OMC_LABEL_UNUSED
return _outAllValue;
}
modelica_metatype boxptr_List_mapListAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
modelica_boolean _outAllValue;
modelica_metatype out_outAllValue;
_outAllValue = omc_List_mapListAllValueBool(threadData, _inList, _inMapFunc, _inValue);
out_outAllValue = mmc_mk_icon(_outAllValue);
return out_outAllValue;
}
DLLExport
void omc_List_map2AllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _eo = NULL;
modelica_metatype tmpMeta1;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
tmp2 = valueEq(_eo, _inValue);
if (1 != tmp2) MMC_THROW_INTERNAL();
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_List_map1rAllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
modelica_metatype _eo = NULL;
modelica_metatype tmpMeta1;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _inArg1, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _inArg1, _e);
tmp2 = valueEq(_eo, _inValue);
if (1 != tmp2) MMC_THROW_INTERNAL();
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_List_map1AllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
modelica_metatype _eo = NULL;
modelica_metatype tmpMeta1;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1);
tmp2 = valueEq(_eo, _inValue);
if (1 != tmp2) MMC_THROW_INTERNAL();
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_boolean omc_List_map1AllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
modelica_boolean _outAllValue;
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
omc_List_map1AllValue(threadData, _inList, ((modelica_fnptr) _inMapFunc), _inValue, _inArg1);
_outAllValue = 1;
goto tmp2_done;
}
case 1: {
_outAllValue = 0;
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
return _outAllValue;
}
modelica_metatype boxptr_List_map1AllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue, modelica_metatype _inArg1)
{
modelica_boolean _outAllValue;
modelica_metatype out_outAllValue;
_outAllValue = omc_List_map1AllValueBool(threadData, _inList, _inMapFunc, _inValue, _inArg1);
out_outAllValue = mmc_mk_icon(_outAllValue);
return out_outAllValue;
}
DLLExport
modelica_boolean omc_List_mapAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
modelica_boolean _outAllValue;
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
omc_List_mapAllValue(threadData, _inList, ((modelica_fnptr) _inMapFunc), _inValue);
_outAllValue = 1;
goto tmp2_done;
}
case 1: {
_outAllValue = 0;
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
return _outAllValue;
}
modelica_metatype boxptr_List_mapAllValueBool(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
modelica_boolean _outAllValue;
modelica_metatype out_outAllValue;
_outAllValue = omc_List_mapAllValueBool(threadData, _inList, _inMapFunc, _inValue);
out_outAllValue = mmc_mk_icon(_outAllValue);
return out_outAllValue;
}
DLLExport
void omc_List_mapAllValue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inValue)
{
modelica_metatype _eo = NULL;
modelica_metatype tmpMeta1;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e);
tmp2 = valueEq(_eo, _inValue);
if (1 != tmp2) MMC_THROW_INTERNAL();
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_List_mapMap__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc1, modelica_fnptr _inMapFunc2)
{
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, _e)) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, _e));
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_List_mapMap(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc1, modelica_fnptr _inMapFunc2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar77;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar76;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar77 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar77;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar76 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, _e)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc2), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc1), 1)))) (threadData, _e));
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar76,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar77;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map2Flat(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1, _inArg2), _outList);
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map1Flat(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1), _outList);
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_mapFlatReverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outList = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e), _outList);
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_mapFlat(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = listReverse(omc_List_mapFlatReverse(threadData, _inList, ((modelica_fnptr) _inMapFunc)));
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map9(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5, modelica_metatype _inArg6, modelica_metatype _inArg7, modelica_metatype _inArg8, modelica_metatype _inArg9)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar79;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar78;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar79 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar79;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar78 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7, _inArg8, _inArg9) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7, _inArg8, _inArg9);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar78,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar79;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map8(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5, modelica_metatype _inArg6, modelica_metatype _inArg7, modelica_metatype _inArg8)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar81;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar80;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar81 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar81;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar80 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7, _inArg8) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7, _inArg8);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar80,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar81;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map7(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5, modelica_metatype _inArg6, modelica_metatype _inArg7)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar83;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar82;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar83 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar83;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar82 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6, _inArg7);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar82,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar83;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map6(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5, modelica_metatype _inArg6)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar85;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar84;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar85 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar85;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar84 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5, _inArg6);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar84,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar85;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map5(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype _inArg5)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar87;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar86;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar87 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar87;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar86 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4, _inArg5);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar86,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar87;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map4__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4 ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4 ,&_e2);
tmpMeta4 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta4;
tmpMeta5 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta5;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
void omc_List_map4__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4)
{
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4);
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_List_map4(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype _inArg4)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar89;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar88;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar89 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar89;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar88 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3, _inArg4) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3, _inArg4);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar88,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar89;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map3__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3 ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3 ,&_e2);
tmpMeta4 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta4;
tmpMeta5 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta5;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
void omc_List_map3__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3);
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_List_map3r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar91;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar90;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar91 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar91;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar90 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg1, _inArg2, _inArg3, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg1, _inArg2, _inArg3, _e);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar90,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar91;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inArg3)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar93;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar92;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar93 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar93;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar92 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2, _inArg3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2, _inArg3);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar92,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar93;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map2__3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outList2, modelica_metatype *out_outList3)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _outList3 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _e3 = NULL;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
_outList3 = tmpMeta3;
{
modelica_metatype _e;
for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2 ,&_e2 ,&_e3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2 ,&_e2 ,&_e3);
tmpMeta5 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta5;
tmpMeta6 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta6;
tmpMeta7 = mmc_mk_cons(_e3, _outList3);
_outList3 = tmpMeta7;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_outList3 = listReverseInPlace(_outList3);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
if (out_outList3) { *out_outList3 = _outList3; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_map2__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2 ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2 ,&_e2);
tmpMeta4 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta4;
tmpMeta5 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta5;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
void omc_List_map2__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_List_map2r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar95;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar94;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar95 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar95;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar94 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg1, _inArg2, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg1, _inArg2, _e);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar94,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar95;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map2rm(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar97;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar96;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar97 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar97;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar96 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg1, _e, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg1, _e, _inArg2);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar96,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar97;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map2Reverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar99;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar98;
modelica_integer tmp3;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar99 = tmpMeta2;
while(1) {
tmp3 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar98 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
__omcQ_24tmpVar99 = mmc_mk_cons(__omcQ_24tmpVar98,__omcQ_24tmpVar99);
} else if (tmp3 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar99;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar101;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar100;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar101 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar101;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar100 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar100,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar101;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map1__3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype *out_outList2, modelica_metatype *out_outList3)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _outList3 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _e3 = NULL;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
_outList3 = tmpMeta3;
{
modelica_metatype _e;
for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1 ,&_e2 ,&_e3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1 ,&_e2 ,&_e3);
tmpMeta5 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta5;
tmpMeta6 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta6;
tmpMeta7 = mmc_mk_cons(_e3, _outList3);
_outList3 = tmpMeta7;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_outList3 = listReverseInPlace(_outList3);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
if (out_outList3) { *out_outList3 = _outList3; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_map1__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1 ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1 ,&_e2);
tmpMeta4 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta4;
tmpMeta5 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta5;
}
}
_outList1 = listReverseInPlace(_outList1);
_outList2 = listReverseInPlace(_outList2);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
void omc_List_map1__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1);
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_List_map1r(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar103;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar102;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar103 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar103;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar102 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg1, _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg1, _e);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar102,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar103;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map1Reverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar105;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar104;
modelica_integer tmp3;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar105 = tmpMeta2;
while(1) {
tmp3 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar104 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1);
__omcQ_24tmpVar105 = mmc_mk_cons(__omcQ_24tmpVar104,__omcQ_24tmpVar105);
} else if (tmp3 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar105;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar107;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar106;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar107 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar107;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar106 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e, _inArg1);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar106,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar107;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
void omc_List_map__0(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_List_map2Option(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _ei = NULL;
modelica_metatype _eo = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _oe;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_oe = MMC_CAR(tmpMeta2);
if(isSome(_oe))
{
tmpMeta3 = _oe;
if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
_ei = tmpMeta4;
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _ei, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _ei, _inArg1, _inArg2);
tmpMeta5 = mmc_mk_cons(_eo, _outList);
_outList = tmpMeta5;
}
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map1Option(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _ei = NULL;
modelica_metatype _eo = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _oe;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_oe = MMC_CAR(tmpMeta2);
if((!isNone(_oe)))
{
tmpMeta3 = _oe;
if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
_ei = tmpMeta4;
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _ei, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _ei, _inArg1);
tmpMeta5 = mmc_mk_cons(_eo, _outList);
_outList = tmpMeta5;
}
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_mapOption(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _ei = NULL;
modelica_metatype _eo = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _oe;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_oe = MMC_CAR(tmpMeta2);
if((!isNone(_oe)))
{
tmpMeta3 = _oe;
if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
_ei = tmpMeta4;
_eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _ei) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _ei);
tmpMeta5 = mmc_mk_cons(_eo, _outList);
_outList = tmpMeta5;
}
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map__3(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outList2, modelica_metatype *out_outList3)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _outList3 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _e3 = NULL;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
_outList3 = tmpMeta3;
{
modelica_metatype _e;
for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e ,&_e2 ,&_e3) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e ,&_e2 ,&_e3);
tmpMeta5 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta5;
if(isPresent(_outList2))
{
tmpMeta6 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta6;
}
if(isPresent(_outList3))
{
tmpMeta7 = mmc_mk_cons(_e3, _outList3);
_outList3 = tmpMeta7;
}
}
}
_outList1 = listReverseInPlace(_outList1);
if(isPresent(_outList2))
{
_outList2 = listReverseInPlace(_outList2);
}
if(isPresent(_outList3))
{
_outList3 = listReverseInPlace(_outList3);
}
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
if (out_outList3) { *out_outList3 = _outList3; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_map__2(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList2 = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e ,&_e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e ,&_e2);
tmpMeta4 = mmc_mk_cons(_e1, _outList1);
_outList1 = tmpMeta4;
if(isPresent(_outList2))
{
tmpMeta5 = mmc_mk_cons(_e2, _outList2);
_outList2 = tmpMeta5;
}
}
}
_outList1 = listReverseInPlace(_outList1);
if(isPresent(_outList2))
{
_outList2 = listReverseInPlace(_outList2);
}
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_mapReverse(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar109;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar108;
modelica_integer tmp3;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar109 = tmpMeta2;
while(1) {
tmp3 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar108 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
__omcQ_24tmpVar109 = mmc_mk_cons(__omcQ_24tmpVar108,__omcQ_24tmpVar109);
} else if (tmp3 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar109;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_mapCheckReferenceEq(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_metatype _outList = NULL;
modelica_boolean _allEq;
modelica_metatype _delst = NULL;
modelica_integer _n;
modelica_metatype _e1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_boolean tmp6;
modelica_metatype tmpMeta7;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_allEq = 1;
_n = ((modelica_integer) 0);
{
modelica_metatype _e;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
if((_allEq?(!referenceEq(_e, _e1)):0))
{
_allEq = 0;
_delst = omc_DoubleEnded_empty(threadData, _e1);
{
modelica_metatype _elt;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_elt = MMC_CAR(tmpMeta2);
if((_n < ((modelica_integer) 1)))
{
break;
}
omc_DoubleEnded_push__back(threadData, _delst, _elt);
_n = ((modelica_integer) -1) + _n;
}
}
}
if(_allEq)
{
_n = ((modelica_integer) 1) + _n;
}
else
{
omc_DoubleEnded_push__back(threadData, _delst, _e1);
}
}
}
tmp6 = (modelica_boolean)_allEq;
if(tmp6)
{
tmpMeta7 = _inList;
}
else
{
tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta7 = omc_DoubleEnded_toListAndClear(threadData, _delst, tmpMeta5);
}
_outList = tmpMeta7;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_map(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar111;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar110;
modelica_integer tmp4;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar111 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar111;
while(1) {
tmp4 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar110 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar110,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar111;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_unionOnTrueList(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_metatype _outUnion = NULL;
modelica_metatype tmpMeta1;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp2 = (modelica_boolean)listEmpty(_inList);
if(tmp2)
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta3 = tmpMeta1;
}
else
{
tmpMeta3 = omc_List_reduce1(threadData, _inList, boxvar_List_unionOnTrue, ((modelica_fnptr) _inCompFunc));
}
_outUnion = tmpMeta3;
_return: OMC_LABEL_UNUSED
return _outUnion;
}
DLLExport
modelica_metatype omc_List_unionList(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outUnion = NULL;
modelica_metatype tmpMeta1;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp2 = (modelica_boolean)listEmpty(_inList);
if(tmp2)
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta3 = tmpMeta1;
}
else
{
tmpMeta3 = omc_List_reduce(threadData, _inList, boxvar_List_union);
}
_outUnion = tmpMeta3;
_return: OMC_LABEL_UNUSED
return _outUnion;
}
static modelica_metatype closure0_List_unionEltOnTrue(threadData_t *thData, modelica_metatype closure, modelica_metatype inElement, modelica_metatype inList)
{
modelica_fnptr inCompFunc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
return boxptr_List_unionEltOnTrue(thData, inElement, inList, inCompFunc);
}
DLLExport
modelica_metatype omc_List_unionAppendListOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inUnion, modelica_fnptr _inCompFunc)
{
modelica_metatype _outUnion = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = mmc_mk_box1(0, ((modelica_fnptr) _inCompFunc));
_outUnion = omc_List_fold(threadData, _inList, (modelica_fnptr) mmc_mk_box2(0,closure0_List_unionEltOnTrue,tmpMeta1), _inUnion);
_return: OMC_LABEL_UNUSED
return _outUnion;
}
DLLExport
modelica_metatype omc_List_unionOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_metatype _outUnion = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outUnion = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outUnion = omc_List_unionEltOnTrue(threadData, _e, _outUnion, ((modelica_fnptr) _inCompFunc));
}
}
{
modelica_metatype _e;
for (tmpMeta4 = _inList2; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
_outUnion = omc_List_unionEltOnTrue(threadData, _e, _outUnion, ((modelica_fnptr) _inCompFunc));
}
}
_outUnion = listReverseInPlace(_outUnion);
_return: OMC_LABEL_UNUSED
return _outUnion;
}
DLLExport
modelica_metatype omc_List_unionAppendonUnion(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outUnion = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outUnion = listReverse(_inList1);
{
modelica_metatype _e;
for (tmpMeta1 = _inList2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outUnion = omc_List_unionElt(threadData, _e, _outUnion);
}
}
_outUnion = listReverseInPlace(_outUnion);
_return: OMC_LABEL_UNUSED
return _outUnion;
}
DLLExport
modelica_metatype omc_List_union(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outUnion = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outUnion = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outUnion = omc_List_unionElt(threadData, _e, _outUnion);
}
}
{
modelica_metatype _e;
for (tmpMeta4 = _inList2; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
_outUnion = omc_List_unionElt(threadData, _e, _outUnion);
}
}
_outUnion = listReverseInPlace(_outUnion);
_return: OMC_LABEL_UNUSED
return _outUnion;
}
DLLExport
modelica_metatype omc_List_unionEltOnTrue(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = omc_List_consOnTrue(threadData, (!omc_List_isMemberOnTrue(threadData, _inElement, _inList, ((modelica_fnptr) _inCompFunc))), _inElement, _inList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_unionElt(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = omc_List_consOnTrue(threadData, (!listMember(_inElement, _inList)), _inElement, _inList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_unionIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_integer _inN)
{
modelica_metatype _outUnion = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _a = NULL;
modelica_metatype tmpMeta2;
modelica_integer tmp3;
modelica_integer tmp4;
modelica_integer tmp5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outUnion = tmpMeta1;
if((_inN > ((modelica_integer) 0)))
{
_a = arrayCreate(_inN, mmc_mk_integer(((modelica_integer) 0)));
_a = omc_List_addPos(threadData, _inList1, _a, ((modelica_integer) 1));
_a = omc_List_addPos(threadData, _inList2, _a, ((modelica_integer) 1));
tmp3 = _inN; tmp4 = ((modelica_integer) -1); tmp5 = ((modelica_integer) 1);
if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
{
modelica_integer _i;
for(_i = _inN; in_range_integer(_i, tmp3, tmp5); _i += tmp4)
{
if((mmc_unbox_integer(arrayGet(_a, _i)) > ((modelica_integer) 0)))
{
tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_i), _outUnion);
_outUnion = tmpMeta2;
}
}
}
omc_GCExt_free(threadData, _a);
}
_return: OMC_LABEL_UNUSED
return _outUnion;
}
modelica_metatype boxptr_List_unionIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inN)
{
modelica_integer tmp1;
modelica_metatype _outUnion = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inN);
_outUnion = omc_List_unionIntN(threadData, _inList1, _inList2, tmp1);
return _outUnion;
}
DLLExport
modelica_metatype omc_List_setDifference(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outDifference = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outDifference = _inList1;
if(listEmpty(_inList1))
{
goto _return;
}
{
modelica_metatype _e;
for (tmpMeta1 = _inList2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outDifference = omc_List_deleteMember(threadData, _outDifference, _e);
}
}
_return: OMC_LABEL_UNUSED
return _outDifference;
}
DLLExport
modelica_metatype omc_List_setDifferenceOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_metatype _outDifference = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outDifference = _inList1;
if(listEmpty(_inList1))
{
goto _return;
}
{
modelica_metatype _e;
for (tmpMeta1 = _inList2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
_outDifference = omc_List_deleteMemberOnTrue(threadData, _e, _outDifference, ((modelica_fnptr) _inCompFunc), NULL);
}
}
_return: OMC_LABEL_UNUSED
return _outDifference;
}
DLLExport
modelica_metatype omc_List_setDifferenceIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_integer _inN)
{
modelica_metatype _outDifference = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _a = NULL;
modelica_metatype tmpMeta2;
modelica_integer tmp3;
modelica_integer tmp4;
modelica_integer tmp5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outDifference = tmpMeta1;
if((_inN > ((modelica_integer) 0)))
{
_a = arrayCreate(_inN, mmc_mk_integer(((modelica_integer) 0)));
_a = omc_List_addPos(threadData, _inList1, _a, ((modelica_integer) 1));
_a = omc_List_addPos(threadData, _inList2, _a, ((modelica_integer) 1));
tmp3 = _inN; tmp4 = ((modelica_integer) -1); tmp5 = ((modelica_integer) 1);
if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
{
modelica_integer _i;
for(_i = _inN; in_range_integer(_i, tmp3, tmp5); _i += tmp4)
{
if((mmc_unbox_integer(arrayGet(_a, _i)) == ((modelica_integer) 1)))
{
tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_i), _outDifference);
_outDifference = tmpMeta2;
}
}
}
omc_GCExt_free(threadData, _a);
}
_return: OMC_LABEL_UNUSED
return _outDifference;
}
modelica_metatype boxptr_List_setDifferenceIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inN)
{
modelica_integer tmp1;
modelica_metatype _outDifference = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inN);
_outDifference = omc_List_setDifferenceIntN(threadData, _inList1, _inList2, tmp1);
return _outDifference;
}
DLLExport
modelica_metatype omc_List_intersection1OnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc, modelica_metatype *out_outList1Rest, modelica_metatype *out_outList2Rest)
{
modelica_metatype _outIntersection = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList1Rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _outList2Rest = NULL;
modelica_metatype _oe = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_boolean tmp8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_boolean tmp11;
modelica_metatype tmpMeta12;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outIntersection = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1Rest = tmpMeta2;
_outList2Rest = _inList2;
if(listEmpty(_inList1))
{
goto _return;
}
if(listEmpty(_inList2))
{
_outList1Rest = _inList1;
goto _return;
}
{
modelica_metatype _e;
for (tmpMeta3 = _inList1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
if(omc_List_isMemberOnTrue(threadData, _e, _inList2, ((modelica_fnptr) _inCompFunc)))
{
tmpMeta4 = mmc_mk_cons(_e, _outIntersection);
_outIntersection = tmpMeta4;
}
else
{
if(isPresent(_outList1Rest))
{
tmpMeta5 = mmc_mk_cons(_e, _outList1Rest);
_outList1Rest = tmpMeta5;
}
}
}
}
_outIntersection = listReverseInPlace(_outIntersection);
tmp8 = (modelica_boolean)isPresent(_outList1Rest);
if(tmp8)
{
tmpMeta9 = listReverseInPlace(_outList1Rest);
}
else
{
tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta9 = tmpMeta7;
}
_outList1Rest = tmpMeta9;
tmp11 = (modelica_boolean)isPresent(_outList2Rest);
if(tmp11)
{
tmpMeta12 = omc_List_setDifferenceOnTrue(threadData, _inList2, _outIntersection, ((modelica_fnptr) _inCompFunc));
}
else
{
tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta12 = tmpMeta10;
}
_outList2Rest = tmpMeta12;
_return: OMC_LABEL_UNUSED
if (out_outList1Rest) { *out_outList1Rest = _outList1Rest; }
if (out_outList2Rest) { *out_outList2Rest = _outList2Rest; }
return _outIntersection;
}
DLLExport
modelica_metatype omc_List_intersectionOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_metatype _outIntersection = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outIntersection = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
if(omc_List_isMemberOnTrue(threadData, _e, _inList2, ((modelica_fnptr) _inCompFunc)))
{
tmpMeta3 = mmc_mk_cons(_e, _outIntersection);
_outIntersection = tmpMeta3;
}
}
}
_outIntersection = listReverseInPlace(_outIntersection);
_return: OMC_LABEL_UNUSED
return _outIntersection;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_addPos(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inArray, modelica_integer _inIndex)
{
modelica_metatype _outArray = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype _i;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_i = MMC_CAR(tmpMeta1);
arrayUpdate(_inArray, mmc_unbox_integer(_i), mmc_mk_integer(mmc_unbox_integer(arrayGet(_inArray, mmc_unbox_integer(_i))) + _inIndex));
}
}
_outArray = _inArray;
_return: OMC_LABEL_UNUSED
return _outArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_List_addPos(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inArray, modelica_metatype _inIndex)
{
modelica_integer tmp1;
modelica_metatype _outArray = NULL;
tmp1 = mmc_unbox_integer(_inIndex);
_outArray = omc_List_addPos(threadData, _inList, _inArray, tmp1);
return _outArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_intersectionIntVec(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inList1)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outResult = tmpMeta1;
{
modelica_metatype _i;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_i = MMC_CAR(tmpMeta2);
if((mmc_unbox_integer(arrayGet(_inArray, mmc_unbox_integer(_i))) == ((modelica_integer) 2)))
{
tmpMeta3 = mmc_mk_cons(_i, _outResult);
_outResult = tmpMeta3;
}
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_intersectionIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_integer _inN)
{
modelica_metatype _outResult = NULL;
modelica_metatype _a = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if((_inN > ((modelica_integer) 0)))
{
_a = arrayCreate(_inN, mmc_mk_integer(((modelica_integer) 0)));
_a = omc_List_addPos(threadData, _inList1, _a, ((modelica_integer) 1));
_a = omc_List_addPos(threadData, _inList2, _a, ((modelica_integer) 1));
_outResult = omc_List_intersectionIntVec(threadData, _a, _inList1);
omc_GCExt_free(threadData, _a);
}
else
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outResult = tmpMeta1;
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
modelica_metatype boxptr_List_intersectionIntN(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inN)
{
modelica_integer tmp1;
modelica_metatype _outResult = NULL;
tmp1 = mmc_unbox_integer(_inN);
_outResult = omc_List_intersectionIntN(threadData, _inList1, _inList2, tmp1);
return _outResult;
}
DLLExport
modelica_metatype omc_List_intersectionIntSorted(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_integer _i1;
modelica_integer _i2;
modelica_integer _o1;
modelica_integer _o2;
modelica_metatype _l1 = NULL;
modelica_metatype _l2 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_integer tmp5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_integer tmp9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_integer tmp13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_integer tmp17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_integer tmp22;
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_integer tmp26;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outResult = tmpMeta1;
_l1 = _inList1;
_l2 = _inList2;
if((listEmpty(_inList1) || listEmpty(_inList2)))
{
goto _return;
}
tmpMeta2 = _l1;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
tmp5 = mmc_unbox_integer(tmpMeta3);
_i1 = tmp5;
_l1 = tmpMeta4;
tmpMeta6 = _l2;
if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
tmpMeta7 = MMC_CAR(tmpMeta6);
tmpMeta8 = MMC_CDR(tmpMeta6);
tmp9 = mmc_unbox_integer(tmpMeta7);
_i2 = tmp9;
_l2 = tmpMeta8;
_o1 = _i1;
_o2 = _i2;
while(1)
{
if(!1) break;
if((_i1 > _i2))
{
if(listEmpty(_l2))
{
break;
}
tmpMeta10 = _l2;
if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
tmpMeta11 = MMC_CAR(tmpMeta10);
tmpMeta12 = MMC_CDR(tmpMeta10);
tmp13 = mmc_unbox_integer(tmpMeta11);
_i2 = tmp13;
_l2 = tmpMeta12;
if((_o2 > _i2))
{
MMC_THROW_INTERNAL();
}
_o2 = _i2;
}
else
{
if((_i1 < _i2))
{
if(listEmpty(_l1))
{
break;
}
tmpMeta14 = _l1;
if (listEmpty(tmpMeta14)) MMC_THROW_INTERNAL();
tmpMeta15 = MMC_CAR(tmpMeta14);
tmpMeta16 = MMC_CDR(tmpMeta14);
tmp17 = mmc_unbox_integer(tmpMeta15);
_i1 = tmp17;
_l1 = tmpMeta16;
if((_o1 > _i1))
{
MMC_THROW_INTERNAL();
}
_o1 = _i1;
}
else
{
tmpMeta18 = mmc_mk_cons(mmc_mk_integer(_i1), _outResult);
_outResult = tmpMeta18;
if((listEmpty(_l1) || listEmpty(_l2)))
{
break;
}
tmpMeta19 = _l1;
if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
tmpMeta20 = MMC_CAR(tmpMeta19);
tmpMeta21 = MMC_CDR(tmpMeta19);
tmp22 = mmc_unbox_integer(tmpMeta20);
_i1 = tmp22;
_l1 = tmpMeta21;
tmpMeta23 = _l2;
if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
tmpMeta24 = MMC_CAR(tmpMeta23);
tmpMeta25 = MMC_CDR(tmpMeta23);
tmp26 = mmc_unbox_integer(tmpMeta24);
_i2 = tmp26;
_l2 = tmpMeta25;
if((_o1 > _i1))
{
MMC_THROW_INTERNAL();
}
_o1 = _i1;
if((_o2 > _i2))
{
MMC_THROW_INTERNAL();
}
_o2 = _i2;
}
}
}
_outResult = listReverseInPlace(_outResult);
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_boolean omc_List_setEqualOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_boolean _outIsEqual;
modelica_metatype _lst = NULL;
modelica_integer _lst_size;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_lst = omc_List_intersectionOnTrue(threadData, _inList1, _inList2, ((modelica_fnptr) _inCompFunc));
_lst_size = listLength(_lst);
_outIsEqual = ((_lst_size == listLength(_inList1)) && (_lst_size == listLength(_inList2)));
_return: OMC_LABEL_UNUSED
return _outIsEqual;
}
modelica_metatype boxptr_List_setEqualOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_boolean _outIsEqual;
modelica_metatype out_outIsEqual;
_outIsEqual = omc_List_setEqualOnTrue(threadData, _inList1, _inList2, _inCompFunc);
out_outIsEqual = mmc_mk_icon(_outIsEqual);
return out_outIsEqual;
}
DLLExport
modelica_metatype omc_List_listArrayReverse(threadData_t *threadData, modelica_metatype _inLst)
{
modelica_metatype _outArr = NULL;
modelica_integer _len;
modelica_metatype _defaultValue = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if(listEmpty(_inLst))
{
_outArr = listArray(_inLst);
goto _return;
}
_len = listLength(_inLst);
tmpMeta1 = _inLst;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_defaultValue = tmpMeta2;
_outArr = arrayCreateNoInit(_len, _defaultValue);
{
modelica_metatype _e;
for (tmpMeta4 = _inLst; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
arrayUpdateNoBoundsChecking(_outArr, _len, _e);
_len = ((modelica_integer) -1) + _len;
}
}
_return: OMC_LABEL_UNUSED
return _outArr;
}
DLLExport
modelica_metatype omc_List_transposeList(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _arr = NULL;
modelica_metatype _arr_row = NULL;
modelica_metatype _new_row = NULL;
modelica_integer _c_len;
modelica_integer _r_len;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_integer tmp8;
modelica_integer tmp9;
modelica_integer tmp10;
modelica_metatype tmpMeta11;
modelica_integer tmp12;
modelica_integer tmp13;
modelica_integer tmp14;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
if(listEmpty(_inList))
{
goto _return;
}
{
modelica_metatype __omcQ_24tmpVar113;
modelica_metatype* tmp3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar112;
modelica_integer tmp5;
modelica_metatype _lst_loopVar = 0;
modelica_metatype _lst;
_lst_loopVar = _inList;
tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar113 = tmpMeta4;
tmp3 = &__omcQ_24tmpVar113;
while(1) {
tmp5 = 1;
if (!listEmpty(_lst_loopVar)) {
_lst = MMC_CAR(_lst_loopVar);
_lst_loopVar = MMC_CDR(_lst_loopVar);
tmp5--;
}
if (tmp5 == 0) {
__omcQ_24tmpVar112 = listArray(_lst);
*tmp3 = mmc_mk_cons(__omcQ_24tmpVar112,0);
tmp3 = &MMC_CDR(*tmp3);
} else if (tmp5 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp3 = mmc_mk_nil();
tmpMeta2 = __omcQ_24tmpVar113;
}
_arr = listArray(tmpMeta2);
_c_len = arrayLength(_arr);
_r_len = arrayLength(arrayGet(_arr, ((modelica_integer) 1)));
tmp12 = _r_len; tmp13 = ((modelica_integer) -1); tmp14 = ((modelica_integer) 1);
if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
{
modelica_integer _i;
for(_i = _r_len; in_range_integer(_i, tmp12, tmp14); _i += tmp13)
{
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
_new_row = tmpMeta6;
tmp8 = _c_len; tmp9 = ((modelica_integer) -1); tmp10 = ((modelica_integer) 1);
if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
{
modelica_integer _j;
for(_j = _c_len; in_range_integer(_j, tmp8, tmp10); _j += tmp9)
{
tmpMeta7 = mmc_mk_cons(arrayGetNoBoundsChecking(arrayGet(_arr, _j), _i), _new_row);
_new_row = tmpMeta7;
}
}
tmpMeta11 = mmc_mk_cons(_new_row, _outList);
_outList = tmpMeta11;
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_product(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outProduct = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outProduct = tmpMeta1;
{
modelica_metatype _e1;
for (tmpMeta2 = _inList1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e1 = MMC_CAR(tmpMeta2);
{
modelica_metatype _e2;
for (tmpMeta3 = _inList2; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e2 = MMC_CAR(tmpMeta3);
tmpMeta4 = mmc_mk_cons(listAppend(_e1, _e2), _outProduct);
_outProduct = tmpMeta4;
}
}
}
}
_return: OMC_LABEL_UNUSED
return _outProduct;
}
DLLExport
modelica_metatype omc_List_productMap(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inMapFunc)
{
modelica_metatype _outResult = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outResult = tmpMeta1;
{
modelica_metatype _e1;
for (tmpMeta2 = listReverse(_inList1); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e1 = MMC_CAR(tmpMeta2);
{
modelica_metatype _e2;
for (tmpMeta3 = listReverse(_inList2); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e2 = MMC_CAR(tmpMeta3);
tmpMeta4 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, _e1, _e2), _outResult);
_outResult = tmpMeta4;
}
}
}
}
_return: OMC_LABEL_UNUSED
return _outResult;
}
DLLExport
modelica_metatype omc_List_sublist(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inOffset, modelica_integer _inLength)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _res = NULL;
modelica_boolean tmp2;
modelica_boolean tmp3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_integer tmp9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_integer tmp14;
modelica_integer tmp15;
modelica_integer tmp16;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_rest = _inList;
tmp2 = (_inOffset > ((modelica_integer) 0));
if (1 != tmp2) MMC_THROW_INTERNAL();
tmp3 = (_inLength >= ((modelica_integer) 0));
if (1 != tmp3) MMC_THROW_INTERNAL();
tmp7 = ((modelica_integer) 2); tmp8 = 1; tmp9 = _inOffset;
if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
{
tmpMeta4 = _rest;
if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
tmpMeta5 = MMC_CAR(tmpMeta4);
tmpMeta6 = MMC_CDR(tmpMeta4);
_rest = tmpMeta6;
}
}
tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = _inLength;
if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
{
tmpMeta10 = _rest;
if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
tmpMeta11 = MMC_CAR(tmpMeta10);
tmpMeta12 = MMC_CDR(tmpMeta10);
_e = tmpMeta11;
_rest = tmpMeta12;
tmpMeta13 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta13;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_sublist(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inOffset, modelica_metatype _inLength)
{
modelica_integer tmp1;
modelica_integer tmp2;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta3;
tmp1 = mmc_unbox_integer(_inOffset);
tmp2 = mmc_unbox_integer(_inLength);
_outList = omc_List_sublist(threadData, _inList, tmp1, tmp2);
return _outList;
}
DLLExport
modelica_metatype omc_List_balancedPartition(threadData_t *threadData, modelica_metatype _lst, modelica_integer _maxLength)
{
modelica_metatype _outPartitions = NULL;
modelica_integer _length;
modelica_integer _n;
modelica_boolean tmp1;
modelica_metatype tmpMeta2;
modelica_integer tmp3;
modelica_integer tmp4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp1 = (_maxLength > ((modelica_integer) 0));
if (1 != tmp1) MMC_THROW_INTERNAL();
if(listEmpty(_lst))
{
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outPartitions = tmpMeta2;
goto _return;
}
_length = listLength(_lst);
tmp3 = _maxLength;
if (tmp3 == 0) {MMC_THROW_INTERNAL();}
_n = ((modelica_integer) 1) + modelica_div_integer(((modelica_integer) -1) + _length,tmp3).quot;
tmp4 = _n;
if (tmp4 == 0) {MMC_THROW_INTERNAL();}
_outPartitions = omc_List_partition(threadData, _lst, ((modelica_integer) 1) + modelica_div_integer(((modelica_integer) -1) + _length,tmp4).quot);
_return: OMC_LABEL_UNUSED
return _outPartitions;
}
modelica_metatype boxptr_List_balancedPartition(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _maxLength)
{
modelica_integer tmp1;
modelica_metatype _outPartitions = NULL;
tmp1 = mmc_unbox_integer(_maxLength);
_outPartitions = omc_List_balancedPartition(threadData, _lst, tmp1);
return _outPartitions;
}
DLLExport
modelica_metatype omc_List_partition(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inPartitionLength)
{
modelica_metatype _outPartitions = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _lst = NULL;
modelica_metatype _part = NULL;
modelica_integer _length;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_integer tmp5;
modelica_integer tmp6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_metatype tmpMeta9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outPartitions = tmpMeta1;
_lst = _inList;
tmp2 = (_inPartitionLength > ((modelica_integer) 0));
if (1 != tmp2) MMC_THROW_INTERNAL();
_length = listLength(_inList);
if((_length == ((modelica_integer) 0)))
{
goto _return;
}
else
{
if((_inPartitionLength >= _length))
{
tmpMeta3 = mmc_mk_cons(_inList, MMC_REFSTRUCTLIT(mmc_nil));
_outPartitions = tmpMeta3;
goto _return;
}
}
tmp8 = _inPartitionLength;
if (tmp8 == 0) {MMC_THROW_INTERNAL();}
tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = modelica_div_integer(_length,tmp8).quot;
if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
{
_part = omc_List_split(threadData, _lst, _inPartitionLength ,&_lst);
tmpMeta4 = mmc_mk_cons(_part, _outPartitions);
_outPartitions = tmpMeta4;
}
}
if((!listEmpty(_lst)))
{
tmpMeta9 = mmc_mk_cons(_lst, _outPartitions);
_outPartitions = tmpMeta9;
}
_outPartitions = listReverseInPlace(_outPartitions);
_return: OMC_LABEL_UNUSED
return _outPartitions;
}
modelica_metatype boxptr_List_partition(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPartitionLength)
{
modelica_integer tmp1;
modelica_metatype _outPartitions = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inPartitionLength);
_outPartitions = omc_List_partition(threadData, _inList, tmp1);
return _outPartitions;
}
DLLExport
modelica_metatype omc_List_splitOnBoolList(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inBools, modelica_metatype *out_outFalseList)
{
modelica_metatype _outTrueList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outFalseList = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e = NULL;
modelica_metatype _rest_e = NULL;
modelica_boolean _b;
modelica_metatype _rest_b = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_integer tmp9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outTrueList = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outFalseList = tmpMeta2;
_rest_e = _inList;
_rest_b = _inBools;
while(1)
{
if(!(!listEmpty(_rest_e))) break;
tmpMeta3 = _rest_e;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_rest_e = tmpMeta5;
tmpMeta6 = _rest_b;
if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
tmpMeta7 = MMC_CAR(tmpMeta6);
tmpMeta8 = MMC_CDR(tmpMeta6);
tmp9 = mmc_unbox_integer(tmpMeta7);
_b = tmp9;
_rest_b = tmpMeta8;
if(_b)
{
tmpMeta10 = mmc_mk_cons(_e, _outTrueList);
_outTrueList = tmpMeta10;
}
else
{
if(isPresent(_outFalseList))
{
tmpMeta11 = mmc_mk_cons(_e, _outFalseList);
_outFalseList = tmpMeta11;
}
}
}
_outTrueList = listReverseInPlace(_outTrueList);
_outFalseList = listReverseInPlace(_outFalseList);
_return: OMC_LABEL_UNUSED
if (out_outFalseList) { *out_outFalseList = _outFalseList; }
return _outTrueList;
}
DLLExport
modelica_metatype omc_List_splitEqualParts(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inParts)
{
modelica_metatype _outParts = NULL;
modelica_integer _length;
modelica_metatype tmpMeta1;
modelica_integer tmp2;
modelica_integer tmp3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if((_inParts == ((modelica_integer) 0)))
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outParts = tmpMeta1;
}
else
{
_length = listLength(_inList);
tmp2 = modelica_integer_mod(_length, _inParts);
if (0 != tmp2) MMC_THROW_INTERNAL();
tmp3 = _inParts;
if (tmp3 == 0) {MMC_THROW_INTERNAL();}
_outParts = omc_List_partition(threadData, _inList, modelica_div_integer(_length,tmp3).quot);
}
_return: OMC_LABEL_UNUSED
return _outParts;
}
modelica_metatype boxptr_List_splitEqualParts(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inParts)
{
modelica_integer tmp1;
modelica_metatype _outParts = NULL;
tmp1 = mmc_unbox_integer(_inParts);
_outParts = omc_List_splitEqualParts(threadData, _inList, tmp1);
return _outParts;
}
DLLExport
modelica_metatype omc_List_splitLast(threadData_t *threadData, modelica_metatype _inList, modelica_metatype *out_outRest)
{
modelica_metatype _outLast = NULL;
modelica_metatype _outRest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = listReverse(_inList);
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_outLast = tmpMeta2;
_outRest = tmpMeta3;
_outRest = listReverseInPlace(_outRest);
_return: OMC_LABEL_UNUSED
if (out_outRest) { *out_outRest = _outRest; }
return _outLast;
}
DLLExport
modelica_metatype omc_List_splitFirstOption(threadData_t *threadData, modelica_metatype _inList, modelica_metatype *out_outRest)
{
modelica_metatype _outFirst = NULL;
modelica_metatype _outRest = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inList;
{
modelica_metatype _el = NULL;
modelica_metatype _rest = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_el = tmpMeta6;
_rest = tmpMeta7;
tmpMeta[0+0] = mmc_mk_some(_el);
tmpMeta[0+1] = _rest;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta[0+0] = mmc_mk_none();
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
_outFirst = tmpMeta[0+0];
_outRest = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outRest) { *out_outRest = _outRest; }
return _outFirst;
}
DLLExport
modelica_metatype omc_List_splitFirst(threadData_t *threadData, modelica_metatype _inList, modelica_metatype *out_outRest)
{
modelica_metatype _outFirst = NULL;
modelica_metatype _outRest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inList;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_outFirst = tmpMeta2;
_outRest = tmpMeta3;
_return: OMC_LABEL_UNUSED
if (out_outRest) { *out_outRest = _outRest; }
return _outFirst;
}
DLLExport
modelica_metatype omc_List_splitOnFirstMatch(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outList2 = NULL;
modelica_metatype _e = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList1 = tmpMeta1;
_outList2 = _inList;
while(1)
{
if(!(!listEmpty(_outList2))) break;
tmpMeta2 = _outList2;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_outList2 = tmpMeta4;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
{
tmpMeta5 = mmc_mk_cons(_e, _outList2);
_outList2 = tmpMeta5;
break;
}
tmpMeta6 = mmc_mk_cons(_e, _outList1);
_outList1 = tmpMeta6;
}
_outList1 = listReverseInPlace(_outList1);
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
DLLExport
modelica_metatype omc_List_split2OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype *out_outFalseList)
{
modelica_metatype _outTrueList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outFalseList = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outTrueList = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outFalseList = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1, _inArg2)))
{
tmpMeta4 = mmc_mk_cons(_e, _outTrueList);
_outTrueList = tmpMeta4;
}
else
{
tmpMeta5 = mmc_mk_cons(_e, _outFalseList);
_outFalseList = tmpMeta5;
}
}
}
_outTrueList = listReverseInPlace(_outTrueList);
_outFalseList = listReverseInPlace(_outFalseList);
_return: OMC_LABEL_UNUSED
if (out_outFalseList) { *out_outFalseList = _outFalseList; }
return _outTrueList;
}
DLLExport
modelica_metatype omc_List_split1OnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype *out_outFalseList)
{
modelica_metatype _outTrueList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outFalseList = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outTrueList = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outFalseList = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e, _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e, _inArg1)))
{
tmpMeta4 = mmc_mk_cons(_e, _outTrueList);
_outTrueList = tmpMeta4;
}
else
{
tmpMeta5 = mmc_mk_cons(_e, _outFalseList);
_outFalseList = tmpMeta5;
}
}
}
_outTrueList = listReverseInPlace(_outTrueList);
_outFalseList = listReverseInPlace(_outFalseList);
_return: OMC_LABEL_UNUSED
if (out_outFalseList) { *out_outFalseList = _outFalseList; }
return _outTrueList;
}
DLLExport
modelica_metatype omc_List_splitOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inFunc, modelica_metatype *out_outFalseList)
{
modelica_metatype _outTrueList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outFalseList = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outTrueList = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outFalseList = tmpMeta2;
{
modelica_metatype _e;
for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_e = MMC_CAR(tmpMeta3);
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _e)))
{
tmpMeta4 = mmc_mk_cons(_e, _outTrueList);
_outTrueList = tmpMeta4;
}
else
{
tmpMeta5 = mmc_mk_cons(_e, _outFalseList);
_outFalseList = tmpMeta5;
}
}
}
_outTrueList = listReverseInPlace(_outTrueList);
_outFalseList = listReverseInPlace(_outFalseList);
_return: OMC_LABEL_UNUSED
if (out_outFalseList) { *out_outFalseList = _outFalseList; }
return _outTrueList;
}
DLLExport
modelica_metatype omc_List_splitr(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inPosition, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype _outList2 = NULL;
modelica_integer _pos;
modelica_metatype _l1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _l2 = NULL;
modelica_metatype _e = NULL;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_integer tmp9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_l1 = tmpMeta1;
_l2 = _inList;
tmp2 = (_inPosition >= ((modelica_integer) 0));
if (1 != tmp2) MMC_THROW_INTERNAL();
_pos = _inPosition;
tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _pos;
if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
{
tmpMeta3 = _l2;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_l2 = tmpMeta5;
tmpMeta6 = mmc_mk_cons(_e, _l1);
_l1 = tmpMeta6;
}
}
_outList1 = _l1;
_outList2 = _l2;
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
modelica_metatype boxptr_List_splitr(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPosition, modelica_metatype *out_outList2)
{
modelica_integer tmp1;
modelica_metatype _outList1 = NULL;
tmp1 = mmc_unbox_integer(_inPosition);
_outList1 = omc_List_splitr(threadData, _inList, tmp1, out_outList2);
return _outList1;
}
DLLExport
modelica_metatype omc_List_split(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inPosition, modelica_metatype *out_outList2)
{
modelica_metatype _outList1 = NULL;
modelica_metatype _outList2 = NULL;
modelica_integer _pos;
modelica_metatype _l1 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _l2 = NULL;
modelica_metatype _e = NULL;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_integer tmp9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_l1 = tmpMeta1;
_l2 = _inList;
tmp2 = (_inPosition >= ((modelica_integer) 0));
if (1 != tmp2) MMC_THROW_INTERNAL();
_pos = _inPosition;
tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _pos;
if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
{
tmpMeta3 = _l2;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_l2 = tmpMeta5;
tmpMeta6 = mmc_mk_cons(_e, _l1);
_l1 = tmpMeta6;
}
}
_outList1 = listReverseInPlace(_l1);
_outList2 = _l2;
_return: OMC_LABEL_UNUSED
if (out_outList2) { *out_outList2 = _outList2; }
return _outList1;
}
modelica_metatype boxptr_List_split(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inPosition, modelica_metatype *out_outList2)
{
modelica_integer tmp1;
modelica_metatype _outList1 = NULL;
tmp1 = mmc_unbox_integer(_inPosition);
_outList1 = omc_List_split(threadData, _inList, tmp1, out_outList2);
return _outList1;
}
DLLExport
modelica_metatype omc_List_reverseList(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar115;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar114;
modelica_integer tmp3;
modelica_metatype _e_loopVar = 0;
modelica_metatype _e;
_e_loopVar = _inList;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar115 = tmpMeta2;
while(1) {
tmp3 = 1;
if (!listEmpty(_e_loopVar)) {
_e = MMC_CAR(_e_loopVar);
_e_loopVar = MMC_CDR(_e_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar114 = listReverse(_e);
__omcQ_24tmpVar115 = mmc_mk_cons(__omcQ_24tmpVar114,__omcQ_24tmpVar115);
} else if (tmp3 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar115;
}
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_uniqueOnTrue(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
if((!omc_List_isMemberOnTrue(threadData, _e, _outList, ((modelica_fnptr) _inCompFunc))))
{
tmpMeta3 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta3;
}
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_uniqueIntNArr1(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inLength, modelica_integer _inMark, modelica_metatype _inMarkArray, modelica_metatype _inAccum)
{
modelica_metatype _outAccum = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outAccum = _inAccum;
{
modelica_metatype _i;
for (tmpMeta1 = _inList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_i = MMC_CAR(tmpMeta1);
if((mmc_unbox_integer(_i) >= _inLength))
{
MMC_THROW_INTERNAL();
}
if((mmc_unbox_integer(arrayGet(_inMarkArray, mmc_unbox_integer(_i))) != _inMark))
{
tmpMeta2 = mmc_mk_cons(_i, _outAccum);
_outAccum = tmpMeta2;
arrayUpdate(_inMarkArray, mmc_unbox_integer(_i), mmc_mk_integer(_inMark));
}
}
}
_return: OMC_LABEL_UNUSED
return _outAccum;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_List_uniqueIntNArr1(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inLength, modelica_metatype _inMark, modelica_metatype _inMarkArray, modelica_metatype _inAccum)
{
modelica_integer tmp1;
modelica_integer tmp2;
modelica_metatype _outAccum = NULL;
tmp1 = mmc_unbox_integer(_inLength);
tmp2 = mmc_unbox_integer(_inMark);
_outAccum = omc_List_uniqueIntNArr1(threadData, _inList, tmp1, tmp2, _inMarkArray, _inAccum);
return _outAccum;
}
DLLExport
modelica_metatype omc_List_uniqueIntNArr(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inMarkArray, modelica_metatype _inAccum)
{
modelica_metatype _outAccum = NULL;
modelica_integer _len;
modelica_integer _mark;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if(listEmpty(_inList))
{
_outAccum = _inAccum;
}
else
{
_len = arrayLength(_inMarkArray);
_mark = mmc_unbox_integer(arrayGet(_inMarkArray,_len) /* DAE.ASUB */);
arrayUpdate(_inMarkArray, _len, mmc_mk_integer(((modelica_integer) 1) + _mark));
_outAccum = omc_List_uniqueIntNArr1(threadData, _inList, _len, ((modelica_integer) 1) + _mark, _inMarkArray, _inAccum);
}
_return: OMC_LABEL_UNUSED
return _outAccum;
}
DLLExport
modelica_metatype omc_List_uniqueIntN(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _arr = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_arr = arrayCreate(_inN, mmc_mk_boolean(1));
{
modelica_metatype _i;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_i = MMC_CAR(tmpMeta2);
if(mmc_unbox_boolean(arrayGet(_arr, mmc_unbox_integer(_i))))
{
tmpMeta3 = mmc_mk_cons(_i, _outList);
_outList = tmpMeta3;
}
arrayUpdate(_arr, mmc_unbox_integer(_i), mmc_mk_boolean(0));
}
}
omc_GCExt_free(threadData, _arr);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_uniqueIntN(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inN);
_outList = omc_List_uniqueIntN(threadData, _inList, tmp1);
return _outList;
}
DLLExport
modelica_metatype omc_List_unique(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
if((!listMember(_e, _outList)))
{
tmpMeta3 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta3;
}
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_countingSort(threadData_t *threadData, modelica_metatype _inList, modelica_integer _N)
{
modelica_metatype _outSorted = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _a1 = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_integer tmp5;
modelica_integer tmp6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_integer tmp9;
modelica_integer tmp10;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outSorted = tmpMeta1;
if((listLength(_inList) < ((modelica_integer) 2)))
{
_outSorted = _inList;
goto _return;
}
_a1 = arrayCreate(_N, mmc_mk_integer(((modelica_integer) 0)));
{
modelica_metatype _v;
for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_v = MMC_CAR(tmpMeta2);
arrayUpdate(_a1,mmc_unbox_integer(_v),mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(arrayGet(_a1,mmc_unbox_integer(_v)) /* DAE.ASUB */)));
}
}
tmp8 = _N; tmp9 = ((modelica_integer) -1); tmp10 = ((modelica_integer) 1);
if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
{
modelica_integer _v;
for(_v = _N; in_range_integer(_v, tmp8, tmp10); _v += tmp9)
{
tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = mmc_unbox_integer(arrayGet(_a1,_v) /* DAE.ASUB */);
if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
{
modelica_integer _c;
for(_c = ((modelica_integer) 1); in_range_integer(_c, tmp5, tmp7); _c += tmp6)
{
tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_v), _outSorted);
_outSorted = tmpMeta4;
}
}
}
}
omc_GCExt_free(threadData, _a1);
_return: OMC_LABEL_UNUSED
return _outSorted;
}
modelica_metatype boxptr_List_countingSort(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _N)
{
modelica_integer tmp1;
modelica_metatype _outSorted = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_N);
_outSorted = omc_List_countingSort(threadData, _inList, tmp1);
return _outSorted;
}
DLLExport
modelica_metatype omc_List_mergeSorted(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _l1 = NULL;
modelica_metatype _l2 = NULL;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
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
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_l1 = _inList1;
_l2 = _inList2;
while(1)
{
if(!((!listEmpty(_l1)) && (!listEmpty(_l2)))) break;
tmpMeta2 = _l1;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e1 = tmpMeta3;
tmpMeta5 = _l2;
if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
tmpMeta6 = MMC_CAR(tmpMeta5);
tmpMeta7 = MMC_CDR(tmpMeta5);
_e2 = tmpMeta6;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e1, _e2)))
{
tmpMeta8 = mmc_mk_cons(_e1, _outList);
_outList = tmpMeta8;
tmpMeta9 = _l1;
if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
tmpMeta10 = MMC_CAR(tmpMeta9);
tmpMeta11 = MMC_CDR(tmpMeta9);
_l1 = tmpMeta11;
}
else
{
tmpMeta12 = mmc_mk_cons(_e2, _outList);
_outList = tmpMeta12;
tmpMeta13 = _l2;
if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
tmpMeta14 = MMC_CAR(tmpMeta13);
tmpMeta15 = MMC_CDR(tmpMeta13);
_l2 = tmpMeta15;
}
}
_l1 = (listEmpty(_l1)?_l2:_l1);
_outList = omc_List_append__reverse(threadData, _outList, _l1);
_return: OMC_LABEL_UNUSED
return _outList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_merge(threadData_t *threadData, modelica_metatype _inLeft, modelica_metatype _inRight, modelica_fnptr _inCompFunc, modelica_metatype _acc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inLeft;
tmp4_2 = _inRight;
{
modelica_metatype _l = NULL;
modelica_metatype _r = NULL;
modelica_metatype _el = NULL;
modelica_metatype _l_rest = NULL;
modelica_metatype _r_rest = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_l = tmpMeta6;
_l_rest = tmpMeta7;
_r = tmpMeta8;
_r_rest = tmpMeta9;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _r, _l) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _r, _l)))
{
_r_rest = _inRight;
_el = _l;
}
else
{
_l_rest = _inLeft;
_el = _r;
}
tmpMeta10 = mmc_mk_cons(_el, _acc);
_inLeft = _l_rest;
_inRight = _r_rest;
_acc = tmpMeta10;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = listReverseInPlace(_acc);
goto tmp3_done;
}
case 2: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta1 = omc_List_append__reverse(threadData, _acc, _inRight);
goto tmp3_done;
}
case 3: {
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = omc_List_append__reverse(threadData, _acc, _inLeft);
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
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_sortedUniqueOnlyDuplicates(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_metatype _outDuplicateElements = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outDuplicateElements = tmpMeta1;
_rest = _inList;
while(1)
{
if(!(!listEmpty(_rest))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
if(((!listEmpty(_rest)) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e, listHead(_rest)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e, listHead(_rest)))))
{
tmpMeta5 = mmc_mk_cons(_e, _outDuplicateElements);
_outDuplicateElements = tmpMeta5;
}
}
_outDuplicateElements = listReverseInPlace(_outDuplicateElements);
_return: OMC_LABEL_UNUSED
return _outDuplicateElements;
}
DLLExport
modelica_metatype omc_List_sortedUniqueAndDuplicates(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_metatype *out_outDuplicateElements)
{
modelica_metatype _outUniqueElements = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _outDuplicateElements = NULL;
modelica_metatype tmpMeta2;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outUniqueElements = tmpMeta1;
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_outDuplicateElements = tmpMeta2;
_rest = _inList;
while(1)
{
if(!(!listEmpty(_rest))) break;
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_rest = tmpMeta5;
if(((!listEmpty(_rest)) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e, listHead(_rest)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e, listHead(_rest)))))
{
tmpMeta6 = mmc_mk_cons(_e, _outDuplicateElements);
_outDuplicateElements = tmpMeta6;
}
else
{
tmpMeta7 = mmc_mk_cons(_e, _outUniqueElements);
_outUniqueElements = tmpMeta7;
}
}
_outUniqueElements = listReverseInPlace(_outUniqueElements);
_outDuplicateElements = listReverseInPlace(_outDuplicateElements);
_return: OMC_LABEL_UNUSED
if (out_outDuplicateElements) { *out_outDuplicateElements = _outDuplicateElements; }
return _outUniqueElements;
}
DLLExport
modelica_metatype omc_List_sortedUnique(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_metatype _outUniqueElements = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outUniqueElements = tmpMeta1;
_rest = _inList;
while(1)
{
if(!(!listEmpty(_rest))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
if((listEmpty(_rest) || (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e, listHead(_rest)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e, listHead(_rest))))))
{
tmpMeta5 = mmc_mk_cons(_e, _outUniqueElements);
_outUniqueElements = tmpMeta5;
}
}
_outUniqueElements = listReverseInPlace(_outUniqueElements);
_return: OMC_LABEL_UNUSED
return _outUniqueElements;
}
DLLExport
modelica_boolean omc_List_sortedListAllUnique(threadData_t *threadData, modelica_metatype _lst, modelica_fnptr _compareFn)
{
modelica_boolean _allUnique;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_allUnique = 0;
_rest = _lst;
while(1)
{
if(!(!listEmpty(_rest))) break;
{
modelica_metatype tmp4_1;
tmp4_1 = _rest;
{
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (!listEmpty(tmpMeta7)) goto tmp3_end;
tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta8;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta9 = MMC_CAR(tmp4_1);
tmpMeta10 = MMC_CDR(tmp4_1);
if (listEmpty(tmpMeta10)) goto tmp3_end;
tmpMeta11 = MMC_CAR(tmpMeta10);
tmpMeta12 = MMC_CDR(tmpMeta10);
_e1 = tmpMeta9;
_rest = tmpMeta10;
_e2 = tmpMeta11;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 1)))) (threadData, _e1, _e2)))
{
goto _return;
}
tmpMeta1 = _rest;
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
_rest = tmpMeta1;
}
_allUnique = 1;
_return: OMC_LABEL_UNUSED
return _allUnique;
}
modelica_metatype boxptr_List_sortedListAllUnique(threadData_t *threadData, modelica_metatype _lst, modelica_fnptr _compareFn)
{
modelica_boolean _allUnique;
modelica_metatype out_allUnique;
_allUnique = omc_List_sortedListAllUnique(threadData, _lst, _compareFn);
out_allUnique = mmc_mk_icon(_allUnique);
return out_allUnique;
}
DLLExport
modelica_metatype omc_List_sortedDuplicates(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_metatype _outDuplicates = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outDuplicates = tmpMeta1;
_rest = _inList;
while(1)
{
if(!(!listEmpty(_rest))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e = tmpMeta3;
_rest = tmpMeta4;
if(((!listEmpty(_rest)) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e, listHead(_rest)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e, listHead(_rest)))))
{
tmpMeta5 = mmc_mk_cons(_e, _outDuplicates);
_outDuplicates = tmpMeta5;
}
}
_outDuplicates = listReverseInPlace(_outDuplicates);
_return: OMC_LABEL_UNUSED
return _outDuplicates;
}
DLLExport
modelica_metatype omc_List_sort(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _rest = NULL;
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _left = NULL;
modelica_metatype _right = NULL;
modelica_integer _middle;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_boolean tmp9;
modelica_metatype tmpMeta10;
modelica_integer tmp11;
modelica_metatype tmpMeta12;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_rest = _inList;
if((!listEmpty(_rest)))
{
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e1 = tmpMeta3;
_rest = tmpMeta4;
if(listEmpty(_rest))
{
_outList = _inList;
}
else
{
tmpMeta5 = _rest;
if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
tmpMeta6 = MMC_CAR(tmpMeta5);
tmpMeta7 = MMC_CDR(tmpMeta5);
_e2 = tmpMeta6;
_rest = tmpMeta7;
if(listEmpty(_rest))
{
tmp9 = (modelica_boolean)mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e2, _e1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e2, _e1));
if(tmp9)
{
tmpMeta10 = _inList;
}
else
{
tmpMeta8 = mmc_mk_cons(_e2, mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil)));
tmpMeta10 = tmpMeta8;
}
_outList = tmpMeta10;
}
else
{
tmp11 = ((modelica_integer) 2);
if (tmp11 == 0) {MMC_THROW_INTERNAL();}
_middle = modelica_div_integer(listLength(_inList),tmp11).quot;
_left = omc_List_split(threadData, _inList, _middle ,&_right);
_left = omc_List_sort(threadData, _left, ((modelica_fnptr) _inCompFunc));
_right = omc_List_sort(threadData, _right, ((modelica_fnptr) _inCompFunc));
tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = omc_List_merge(threadData, _left, _right, ((modelica_fnptr) _inCompFunc), tmpMeta12);
}
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_heapSortIntList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Flst)
{
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_lst = __omcQ_24in_5Flst;
{
modelica_metatype tmp4_1;
tmp4_1 = _lst;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta1 = _lst;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (!listEmpty(tmpMeta7)) goto tmp3_end;
tmpMeta1 = _lst;
goto tmp3_done;
}
case 2: {
tmpMeta1 = arrayList(omc_Array_heapSort(threadData, listArray(_lst)));
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
modelica_metatype omc_List_stripN(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
modelica_metatype _outList = NULL;
modelica_boolean tmp1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_integer tmp5;
modelica_integer tmp6;
modelica_integer tmp7;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = _inList;
tmp1 = (_inN >= ((modelica_integer) 0));
if (1 != tmp1) MMC_THROW_INTERNAL();
tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = _inN;
if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
{
tmpMeta2 = _outList;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_outList = tmpMeta4;
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_stripN(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inN);
_outList = omc_List_stripN(threadData, _inList, tmp1);
return _outList;
}
DLLExport
modelica_metatype omc_List_stripLast(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if(listEmpty(_inList))
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
}
else
{
tmpMeta2 = listReverse(_inList);
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_outList = tmpMeta4;
_outList = listReverseInPlace(_outList);
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_stripFirst(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if(listEmpty(_inList))
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
}
else
{
tmpMeta2 = _inList;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_outList = tmpMeta4;
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_firstN__reverse(threadData_t *threadData, modelica_metatype _inList, modelica_integer _N)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_integer tmp9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
tmp2 = (_N >= ((modelica_integer) 0));
if (1 != tmp2) MMC_THROW_INTERNAL();
_rest = _inList;
tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _N;
if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
{
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_rest = tmpMeta5;
tmpMeta6 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta6;
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_firstN__reverse(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _N)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_N);
_outList = omc_List_firstN__reverse(threadData, _inList, tmp1);
return _outList;
}
DLLExport
modelica_metatype omc_List_firstN(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _e = NULL;
modelica_metatype _rest = NULL;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_integer tmp9;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
tmp2 = (_inN >= ((modelica_integer) 0));
if (1 != tmp2) MMC_THROW_INTERNAL();
_rest = _inList;
tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _inN;
if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
{
tmpMeta3 = _rest;
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_e = tmpMeta4;
_rest = tmpMeta5;
tmpMeta6 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta6;
}
}
_outList = listReverseInPlace(_outList);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_firstN(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inN);
_outList = omc_List_firstN(threadData, _inList, tmp1);
return _outList;
}
DLLExport
modelica_metatype omc_List_getIndexFirst(threadData_t *threadData, modelica_integer _index, modelica_metatype _inList)
{
modelica_metatype _element = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_element = listGet(_inList, _index);
_return: OMC_LABEL_UNUSED
return _element;
}
modelica_metatype boxptr_List_getIndexFirst(threadData_t *threadData, modelica_metatype _index, modelica_metatype _inList)
{
modelica_integer tmp1;
modelica_metatype _element = NULL;
tmp1 = mmc_unbox_integer(_index);
_element = omc_List_getIndexFirst(threadData, tmp1, _inList);
return _element;
}
DLLExport
modelica_metatype omc_List_restOrEmpty(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = (listEmpty(_inList)?_inList:listRest(_inList));
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_restCond(threadData_t *threadData, modelica_boolean _cond, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = (_cond?listRest(_inList):_inList);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_restCond(threadData_t *threadData, modelica_metatype _cond, modelica_metatype _inList)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_cond);
_outList = omc_List_restCond(threadData, tmp1, _inList);
return _outList;
}
DLLExport
modelica_metatype omc_List_rest(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inList;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_outList = tmpMeta3;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_lastN(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN)
{
modelica_metatype _outList = NULL;
modelica_integer _len;
modelica_boolean tmp1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp1 = (_inN >= ((modelica_integer) 0));
if (1 != tmp1) MMC_THROW_INTERNAL();
_len = listLength(_inList);
_outList = omc_List_stripN(threadData, _inList, _len - _inN);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_lastN(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inN);
_outList = omc_List_lastN(threadData, _inList, tmp1);
return _outList;
}
DLLExport
modelica_metatype omc_List_secondLast(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outSecondLast = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = listReverse(_inList);
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_CAR(tmpMeta3);
tmpMeta5 = MMC_CDR(tmpMeta3);
_outSecondLast = tmpMeta4;
_return: OMC_LABEL_UNUSED
return _outSecondLast;
}
DLLExport
modelica_metatype omc_List_lastListOrEmpty(threadData_t *threadData, modelica_metatype _inListList)
{
modelica_metatype _outLastList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outLastList = tmpMeta1;
{
modelica_metatype _e;
for (tmpMeta2 = _inListList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_e = MMC_CAR(tmpMeta2);
_outLastList = _e;
}
}
_return: OMC_LABEL_UNUSED
return _outLastList;
}
DLLExport
modelica_metatype omc_List_lastElement(threadData_t *threadData, modelica_metatype _inList, modelica_integer *out_listLength)
{
modelica_metatype _lst = NULL;
modelica_integer _listLength;
modelica_metatype _rest = NULL;
modelica_boolean tmp1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_listLength = ((modelica_integer) 0);
_rest = _inList;
tmp1 = listEmpty(_rest);
if (0 != tmp1) MMC_THROW_INTERNAL();
while(1)
{
if(!(!listEmpty(_rest))) break;
tmpMeta2 = _rest;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_lst = tmpMeta2;
_rest = tmpMeta4;
_listLength = ((modelica_integer) 1) + _listLength;
}
_return: OMC_LABEL_UNUSED
if (out_listLength) { *out_listLength = _listLength; }
return _lst;
}
modelica_metatype boxptr_List_lastElement(threadData_t *threadData, modelica_metatype _inList, modelica_metatype *out_listLength)
{
modelica_integer _listLength;
modelica_metatype _lst = NULL;
_lst = omc_List_lastElement(threadData, _inList, &_listLength);
if (out_listLength) { *out_listLength = mmc_mk_icon(_listLength); }
return _lst;
}
DLLExport
modelica_metatype omc_List_last(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outLast = NULL;
modelica_metatype _rest = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inList;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_outLast = tmpMeta2;
_rest = tmpMeta3;
{
modelica_metatype _e;
for (tmpMeta4 = _rest; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
{
_e = MMC_CAR(tmpMeta4);
_outLast = _e;
}
}
_return: OMC_LABEL_UNUSED
return _outLast;
}
DLLExport
modelica_metatype omc_List_second(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outSecond = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outSecond = listGet(_inList, ((modelica_integer) 2));
_return: OMC_LABEL_UNUSED
return _outSecond;
}
DLLExport
modelica_metatype omc_List_firstOrEmpty(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inList;
{
modelica_metatype _e = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_e = tmpMeta6;
tmpMeta8 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta1 = tmpMeta8;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta9;
tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta9;
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
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_first(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _out = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inList;
{
modelica_metatype _e = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 1; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_e = tmpMeta6;
tmpMeta1 = _e;
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
_out = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _out;
}
DLLExport
modelica_metatype omc_List_set(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN, modelica_metatype _inElement)
{
modelica_metatype _outList = NULL;
modelica_metatype _lst1 = NULL;
modelica_metatype _lst2 = NULL;
modelica_boolean tmp1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp1 = (_inN > ((modelica_integer) 0));
if (1 != tmp1) MMC_THROW_INTERNAL();
_lst1 = omc_List_splitr(threadData, _inList, ((modelica_integer) -1) + _inN ,&_lst2);
_lst2 = omc_List_stripFirst(threadData, _lst2);
tmpMeta2 = mmc_mk_cons(_inElement, _lst2);
_outList = omc_List_append__reverse(threadData, _lst1, tmpMeta2);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_set(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN, modelica_metatype _inElement)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inN);
_outList = omc_List_set(threadData, _inList, tmp1, _inElement);
return _outList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_List_insertListSorted1(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inList2, modelica_fnptr _inCompFunc, modelica_metatype _inResultList)
{
modelica_metatype _outResultList = NULL;
modelica_metatype _listRest = NULL;
modelica_metatype _listRest2 = NULL;
modelica_metatype _tmpResultList = NULL;
modelica_metatype _listHead = NULL;
modelica_metatype _listHead2 = NULL;
modelica_metatype _elem = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList;
tmp4_2 = _inList2;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = _inResultList;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta1 = omc_List_append__reverse(threadData, _inList2, _inResultList);
goto tmp3_done;
}
case 2: {
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = omc_List_append__reverse(threadData, _inList, _inResultList);
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_listHead = tmpMeta6;
_listRest = tmpMeta7;
_listHead2 = tmpMeta8;
_listRest2 = tmpMeta9;
if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _listHead, _listHead2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _listHead, _listHead2)))
{
tmpMeta10 = mmc_mk_cons(_listHead, _inResultList);
_tmpResultList = tmpMeta10;
_tmpResultList = omc_List_insertListSorted1(threadData, _listRest, _inList2, ((modelica_fnptr) _inCompFunc), _tmpResultList);
}
else
{
tmpMeta11 = mmc_mk_cons(_listHead2, _inResultList);
_tmpResultList = tmpMeta11;
_tmpResultList = omc_List_insertListSorted1(threadData, _inList, _listRest2, ((modelica_fnptr) _inCompFunc), _tmpResultList);
}
tmpMeta1 = _tmpResultList;
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
_outResultList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outResultList;
}
DLLExport
modelica_metatype omc_List_insertListSorted(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = listReverseInPlace(omc_List_insertListSorted1(threadData, _inList, _inList2, ((modelica_fnptr) _inCompFunc), tmpMeta1));
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_insert(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inN, modelica_metatype _inElement)
{
modelica_metatype _outList = NULL;
modelica_metatype _lst1 = NULL;
modelica_metatype _lst2 = NULL;
modelica_boolean tmp1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp1 = (_inN > ((modelica_integer) 0));
if (1 != tmp1) MMC_THROW_INTERNAL();
_lst1 = omc_List_splitr(threadData, _inList, ((modelica_integer) -1) + _inN ,&_lst2);
tmpMeta2 = mmc_mk_cons(_inElement, _lst2);
_outList = omc_List_append__reverse(threadData, _lst1, tmpMeta2);
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_insert(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inN, modelica_metatype _inElement)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inN);
_outList = omc_List_insert(threadData, _inList, tmp1, _inElement);
return _outList;
}
DLLExport
modelica_metatype omc_List_appendLastList(threadData_t *threadData, modelica_metatype _inListList, modelica_metatype _inList)
{
modelica_metatype _outListList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp5_1;
tmp5_1 = _inListList;
{
modelica_metatype _l = NULL;
modelica_metatype _ll = NULL;
modelica_metatype _ol = NULL;
modelica_metatype tmpMeta3;
volatile mmc_switch_type tmp5;
int tmp6;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
_ol = tmpMeta3;
tmp5 = 0;
for (; tmp5 < 3; tmp5++) {
switch (MMC_SWITCH_CAST(tmp5)) {
case 0: {
modelica_metatype tmpMeta7;
if (!listEmpty(tmp5_1)) goto tmp4_end;
tmpMeta7 = mmc_mk_cons(_inList, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta1 = tmpMeta7;
goto tmp4_done;
}
case 1: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
if (listEmpty(tmp5_1)) goto tmp4_end;
tmpMeta8 = MMC_CAR(tmp5_1);
tmpMeta9 = MMC_CDR(tmp5_1);
if (!listEmpty(tmpMeta9)) goto tmp4_end;
_l = tmpMeta8;
tmpMeta10 = mmc_mk_cons(listAppend(_l, _inList), MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta1 = tmpMeta10;
goto tmp4_done;
}
case 2: {
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
if (listEmpty(tmp5_1)) goto tmp4_end;
tmpMeta11 = MMC_CAR(tmp5_1);
tmpMeta12 = MMC_CDR(tmp5_1);
_l = tmpMeta11;
_ll = tmpMeta12;
while(1)
{
if(!(!listEmpty(_ll))) break;
tmpMeta13 = mmc_mk_cons(_l, _ol);
_ol = tmpMeta13;
tmpMeta14 = _ll;
if (listEmpty(tmpMeta14)) goto goto_2;
tmpMeta15 = MMC_CAR(tmpMeta14);
tmpMeta16 = MMC_CDR(tmpMeta14);
_l = tmpMeta15;
_ll = tmpMeta16;
}
tmpMeta17 = mmc_mk_cons(listAppend(_l, _inList), _ol);
_ol = tmpMeta17;
tmpMeta1 = listReverseInPlace(_ol);
goto tmp4_done;
}
}
goto tmp4_end;
tmp4_end: ;
}
goto goto_2;
goto_2:;
MMC_THROW_INTERNAL();
goto tmp4_done;
tmp4_done:;
}
}
_outListList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outListList;
}
DLLExport
modelica_metatype omc_List_appendElt(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = mmc_mk_cons(_inElement, MMC_REFSTRUCTLIT(mmc_nil));
_outList = listAppend(_inList, tmpMeta1);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_appendr(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outList = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = listAppend(_inList2, _inList1);
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_append__reverser(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = _inList1;
{
modelica_metatype _e;
for (tmpMeta1 = _inList2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
tmpMeta2 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta2;
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_append__reverse(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outList = _inList2;
{
modelica_metatype _e;
for (tmpMeta1 = _inList1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e = MMC_CAR(tmpMeta1);
tmpMeta2 = mmc_mk_cons(_e, _outList);
_outList = tmpMeta2;
}
}
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_consN(threadData_t *threadData, modelica_integer _size, modelica_metatype _inElement, modelica_metatype __omcQ_24in_5FinList)
{
modelica_metatype _inList = NULL;
modelica_metatype tmpMeta1;
modelica_integer tmp2;
modelica_integer tmp3;
modelica_integer tmp4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_inList = __omcQ_24in_5FinList;
tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _size;
if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
{
modelica_integer _i;
for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
{
tmpMeta1 = mmc_mk_cons(_inElement, _inList);
_inList = tmpMeta1;
}
}
_return: OMC_LABEL_UNUSED
return _inList;
}
modelica_metatype boxptr_List_consN(threadData_t *threadData, modelica_metatype _size, modelica_metatype _inElement, modelica_metatype __omcQ_24in_5FinList)
{
modelica_integer tmp1;
modelica_metatype _inList = NULL;
tmp1 = mmc_unbox_integer(_size);
_inList = omc_List_consN(threadData, tmp1, _inElement, __omcQ_24in_5FinList);
return _inList;
}
DLLExport
modelica_metatype omc_List_consOnBool(threadData_t *threadData, modelica_boolean _inValue, modelica_metatype _inElement, modelica_metatype __omcQ_24in_5FtrueList, modelica_metatype __omcQ_24in_5FfalseList, modelica_metatype *out_falseList)
{
modelica_metatype _trueList = NULL;
modelica_metatype _falseList = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_trueList = __omcQ_24in_5FtrueList;
_falseList = __omcQ_24in_5FfalseList;
if(_inValue)
{
tmpMeta1 = mmc_mk_cons(_inElement, _trueList);
_trueList = tmpMeta1;
}
else
{
tmpMeta2 = mmc_mk_cons(_inElement, _falseList);
_falseList = tmpMeta2;
}
_return: OMC_LABEL_UNUSED
if (out_falseList) { *out_falseList = _falseList; }
return _trueList;
}
modelica_metatype boxptr_List_consOnBool(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inElement, modelica_metatype __omcQ_24in_5FtrueList, modelica_metatype __omcQ_24in_5FfalseList, modelica_metatype *out_falseList)
{
modelica_integer tmp1;
modelica_metatype _trueList = NULL;
tmp1 = mmc_unbox_integer(_inValue);
_trueList = omc_List_consOnBool(threadData, tmp1, _inElement, __omcQ_24in_5FtrueList, __omcQ_24in_5FfalseList, out_falseList);
return _trueList;
}
DLLExport
modelica_metatype omc_List_consOption(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inElement;
{
modelica_metatype _e = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
_e = tmpMeta6;
tmpMeta7 = mmc_mk_cons(_e, _inList);
tmpMeta1 = tmpMeta7;
goto tmp3_done;
}
case 1: {
tmpMeta1 = _inList;
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
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_consOnSuccess(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inList, modelica_fnptr _inPredicate)
{
modelica_metatype _outList = NULL;
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
(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredicate), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredicate), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredicate), 2))), _inElement) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inPredicate), 1)))) (threadData, _inElement);
tmpMeta5 = mmc_mk_cons(_inElement, _inList);
_outList = tmpMeta5;
goto tmp2_done;
}
case 1: {
_outList = _inList;
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
return _outList;
}
DLLExport
modelica_metatype omc_List_consOnTrue(threadData_t *threadData, modelica_boolean _inCondition, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_boolean tmp2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmp2 = (modelica_boolean)_inCondition;
if(tmp2)
{
tmpMeta1 = mmc_mk_cons(_inElement, _inList);
tmpMeta3 = tmpMeta1;
}
else
{
tmpMeta3 = _inList;
}
_outList = tmpMeta3;
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_consOnTrue(threadData_t *threadData, modelica_metatype _inCondition, modelica_metatype _inElement, modelica_metatype _inList)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
tmp1 = mmc_unbox_integer(_inCondition);
_outList = omc_List_consOnTrue(threadData, tmp1, _inElement, _inList);
return _outList;
}
DLLExport
modelica_metatype omc_List_consr(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inElement)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = mmc_mk_cons(_inElement, _inList);
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_boolean omc_List_isPrefixOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_boolean _outIsPrefix;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
if (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e1, _e2))) goto tmp3_end;
_inList1 = _rest1;
_inList2 = _rest2;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
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
_outIsPrefix = tmp1;
_return: OMC_LABEL_UNUSED
return _outIsPrefix;
}
modelica_metatype boxptr_List_isPrefixOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_boolean _outIsPrefix;
modelica_metatype out_outIsPrefix;
_outIsPrefix = omc_List_isPrefixOnTrue(threadData, _inList1, _inList2, _inCompFunc);
out_outIsPrefix = mmc_mk_icon(_outIsPrefix);
return out_outIsPrefix;
}
DLLExport
modelica_integer omc_List_compare(threadData_t *threadData, modelica_metatype _list1, modelica_metatype _list2, modelica_fnptr _compareFn)
{
modelica_integer _res;
modelica_integer _l1;
modelica_integer _l2;
modelica_metatype _e2 = NULL;
modelica_metatype _rest_e2 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_l1 = listLength(_list1);
_l2 = listLength(_list2);
_res = ((_l1 == _l2)?((modelica_integer) 0):((_l1 > _l2)?((modelica_integer) 1):((modelica_integer) -1)));
if((_res != ((modelica_integer) 0)))
{
goto _return;
}
_rest_e2 = _list2;
{
modelica_metatype _e1;
for (tmpMeta1 = _list1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_e1 = MMC_CAR(tmpMeta1);
tmpMeta2 = _rest_e2;
if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_CAR(tmpMeta2);
tmpMeta4 = MMC_CDR(tmpMeta2);
_e2 = tmpMeta3;
_rest_e2 = tmpMeta4;
_res = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compareFn), 1)))) (threadData, _e1, _e2));
if((_res != ((modelica_integer) 0)))
{
goto _return;
}
}
}
_return: OMC_LABEL_UNUSED
return _res;
}
modelica_metatype boxptr_List_compare(threadData_t *threadData, modelica_metatype _list1, modelica_metatype _list2, modelica_fnptr _compareFn)
{
modelica_integer _res;
modelica_metatype out_res;
_res = omc_List_compare(threadData, _list1, _list2, _compareFn);
out_res = mmc_mk_icon(_res);
return out_res;
}
DLLExport
modelica_boolean omc_List_isEqualOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_boolean _outIsEqual;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
{
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _rest2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
if (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _e1, _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _e1, _e2))) goto tmp3_end;
_inList1 = _rest1;
_inList2 = _rest2;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
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
_outIsEqual = tmp1;
_return: OMC_LABEL_UNUSED
return _outIsEqual;
}
modelica_metatype boxptr_List_isEqualOnTrue(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_fnptr _inCompFunc)
{
modelica_boolean _outIsEqual;
modelica_metatype out_outIsEqual;
_outIsEqual = omc_List_isEqualOnTrue(threadData, _inList1, _inList2, _inCompFunc);
out_outIsEqual = mmc_mk_icon(_outIsEqual);
return out_outIsEqual;
}
DLLExport
modelica_boolean omc_List_isEqual(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_boolean _inEqualLength)
{
modelica_boolean _outIsEqual;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_boolean tmp4_3;
tmp4_1 = _inList1;
tmp4_2 = _inList2;
tmp4_3 = _inEqualLength;
{
modelica_metatype _e1 = NULL;
modelica_metatype _e2 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _rest2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 5; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_CAR(tmp4_2);
tmpMeta9 = MMC_CDR(tmp4_2);
_e1 = tmpMeta6;
_rest1 = tmpMeta7;
_e2 = tmpMeta8;
_rest2 = tmpMeta9;
if (!valueEq(_e1, _e2)) goto tmp3_end;
_inList1 = _rest1;
_inList2 = _rest2;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
if (0 != tmp4_3) goto tmp3_end;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 3: {
if (0 != tmp4_3) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 4: {
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
_outIsEqual = tmp1;
_return: OMC_LABEL_UNUSED
return _outIsEqual;
}
modelica_metatype boxptr_List_isEqual(threadData_t *threadData, modelica_metatype _inList1, modelica_metatype _inList2, modelica_metatype _inEqualLength)
{
modelica_integer tmp1;
modelica_boolean _outIsEqual;
modelica_metatype out_outIsEqual;
tmp1 = mmc_unbox_integer(_inEqualLength);
_outIsEqual = omc_List_isEqual(threadData, _inList1, _inList2, tmp1);
out_outIsEqual = mmc_mk_icon(_outIsEqual);
return out_outIsEqual;
}
DLLExport
void omc_List_assertIsEmpty(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inList;
if (!listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_List_fromOption(threadData_t *threadData, modelica_metatype _inElement)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inElement;
{
modelica_metatype _e = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
_e = tmpMeta6;
tmpMeta7 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta1 = tmpMeta7;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta8;
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
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_toOption(threadData_t *threadData, modelica_metatype _inList)
{
modelica_metatype _outOption = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inList;
{
modelica_metatype _e = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta1 = mmc_mk_none();
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
if (!listEmpty(tmpMeta7)) goto tmp3_end;
_e = tmpMeta6;
tmpMeta1 = mmc_mk_some(_e);
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
_outOption = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outOption;
}
DLLExport
modelica_metatype omc_List_intRange3(threadData_t *threadData, modelica_integer _inStart, modelica_integer _inStep, modelica_integer _inStop)
{
modelica_metatype _outRange = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if((_inStep == ((modelica_integer) 0)))
{
MMC_THROW_INTERNAL();
}
{
modelica_metatype __omcQ_24tmpVar117;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype __omcQ_24tmpVar116;
modelica_integer tmp4;
modelica_integer tmp5;
modelica_integer tmp6;
modelica_integer _i;
tmp5 = _inStep;
tmp6 = _inStop;
_i = _inStart;
if (tmp5 == 0) {
FILE_INFO info = omc_dummyFileInfo;
omc_assert(threadData, info, "Range with a step of zero.");
}
_i = (_inStart /* Range start-value */)-tmp5;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar117 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar117;
while(1) {
tmp4 = 1;
if (tmp5 > 0 ? _i+tmp5 <= tmp6 : _i+tmp5 >= tmp6) {
_i += tmp5;
tmp4--;
}
if (tmp4 == 0) {
__omcQ_24tmpVar116 = mmc_mk_integer(_i);
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar116,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp4 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar117;
}
_outRange = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outRange;
}
modelica_metatype boxptr_List_intRange3(threadData_t *threadData, modelica_metatype _inStart, modelica_metatype _inStep, modelica_metatype _inStop)
{
modelica_integer tmp1;
modelica_integer tmp2;
modelica_integer tmp3;
modelica_metatype _outRange = NULL;
tmp1 = mmc_unbox_integer(_inStart);
tmp2 = mmc_unbox_integer(_inStep);
tmp3 = mmc_unbox_integer(_inStop);
_outRange = omc_List_intRange3(threadData, tmp1, tmp2, tmp3);
return _outRange;
}
DLLExport
modelica_metatype omc_List_intRange2(threadData_t *threadData, modelica_integer _inStart, modelica_integer _inStop)
{
modelica_metatype _outRange = NULL;
modelica_metatype tmpMeta1;
modelica_integer _i;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outRange = tmpMeta1;
_i = _inStop;
if((_inStart < _inStop))
{
while(1)
{
if(!(_i >= _inStart)) break;
tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_i), _outRange);
_outRange = tmpMeta2;
_i = ((modelica_integer) -1) + _i;
}
}
else
{
while(1)
{
if(!(_i <= _inStart)) break;
tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_i), _outRange);
_outRange = tmpMeta3;
_i = ((modelica_integer) 1) + _i;
}
}
_return: OMC_LABEL_UNUSED
return _outRange;
}
modelica_metatype boxptr_List_intRange2(threadData_t *threadData, modelica_metatype _inStart, modelica_metatype _inStop)
{
modelica_integer tmp1;
modelica_integer tmp2;
modelica_metatype _outRange = NULL;
modelica_metatype tmpMeta3;
tmp1 = mmc_unbox_integer(_inStart);
tmp2 = mmc_unbox_integer(_inStop);
_outRange = omc_List_intRange2(threadData, tmp1, tmp2);
return _outRange;
}
DLLExport
modelica_metatype omc_List_intRange(threadData_t *threadData, modelica_integer _inStop)
{
modelica_metatype _outRange = NULL;
modelica_metatype tmpMeta1;
modelica_integer _i;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outRange = tmpMeta1;
_i = _inStop;
while(1)
{
if(!(_i > ((modelica_integer) 0))) break;
tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_i), _outRange);
_outRange = tmpMeta2;
_i = ((modelica_integer) -1) + _i;
}
_return: OMC_LABEL_UNUSED
return _outRange;
}
modelica_metatype boxptr_List_intRange(threadData_t *threadData, modelica_metatype _inStop)
{
modelica_integer tmp1;
modelica_metatype _outRange = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inStop);
_outRange = omc_List_intRange(threadData, tmp1);
return _outRange;
}
DLLExport
modelica_metatype omc_List_repeat(threadData_t *threadData, modelica_metatype _inElement, modelica_integer _inCount)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_integer _i;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_i = ((modelica_integer) 0);
while(1)
{
if(!(_i < _inCount)) break;
_outList = listAppend(_inElement, _outList);
_i = ((modelica_integer) 1) + _i;
}
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_repeat(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inCount)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inCount);
_outList = omc_List_repeat(threadData, _inElement, tmp1);
return _outList;
}
DLLExport
modelica_metatype omc_List_fill(threadData_t *threadData, modelica_metatype _inElement, modelica_integer _inCount)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
modelica_integer _i;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outList = tmpMeta1;
_i = ((modelica_integer) 0);
while(1)
{
if(!(_i < _inCount)) break;
tmpMeta2 = mmc_mk_cons(_inElement, _outList);
_outList = tmpMeta2;
_i = ((modelica_integer) 1) + _i;
}
_return: OMC_LABEL_UNUSED
return _outList;
}
modelica_metatype boxptr_List_fill(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inCount)
{
modelica_integer tmp1;
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inCount);
_outList = omc_List_fill(threadData, _inElement, tmp1);
return _outList;
}
DLLExport
modelica_metatype omc_List_create2(threadData_t *threadData, modelica_metatype _inElement1, modelica_metatype _inElement2)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = mmc_mk_cons(_inElement1, mmc_mk_cons(_inElement2, MMC_REFSTRUCTLIT(mmc_nil)));
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
DLLExport
modelica_metatype omc_List_create(threadData_t *threadData, modelica_metatype _inElement)
{
modelica_metatype _outList = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = mmc_mk_cons(_inElement, MMC_REFSTRUCTLIT(mmc_nil));
_outList = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outList;
}
