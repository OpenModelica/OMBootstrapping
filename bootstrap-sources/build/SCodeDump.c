#ifdef OMC_BASE_FILE
#define OMC_FILE OMC_BASE_FILE
#else
#define OMC_FILE "SCodeDump.c"
#endif
#include "omc_simulation_settings.h"
#include "SCodeDump.h"
#define _OMC_LIT0_data "replaceable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,12,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,0,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,10,3) {&SCodeDump_SCodeDumpOptions_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "redeclare "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,10,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "each "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,5,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "final "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,6,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "public "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,7,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "protected "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,10,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "partial "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,8,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "encapsulated "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,13,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "flow"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,4,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "stream"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,6,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,7,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "non initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,11,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "discrete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,8,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "parameter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,9,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "constant"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,8,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "INNER/OUTER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,11,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "INNER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,5,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "OUTER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,5,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "PARGLOBAL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,9,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "PARLOCAL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,8,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "NON_PARALLEL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,12,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "VAR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,3,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "DISCRETE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,8,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "PARAM"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,5,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "CONST"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,5,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "extends "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,8,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data ";"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,1,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "class extends "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,14,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,6,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data " enumeration;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,13,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "import "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,7,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "class"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,5,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "optimization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,12,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,5,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "record"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,6,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "operator record"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,15,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "block"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,5,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,9,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "expandable connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,20,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "operator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,8,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "pure function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,13,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "impure function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,15,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "operator function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,17,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "pure external function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,22,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "impure external function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,24,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "record constructor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,18,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "parallel function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,17,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "kernel function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,15,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,4,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "package"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,7,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "enumeration"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,11,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "metarecord "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,11,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "uniontype"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,9,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,7,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "Real"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,4,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "String"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,6,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "Boolean"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,7,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "Clock"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,5,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#include "util/modelica.h"
#include "SCodeDump_includes.h"
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SCodeDump_filterElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _options);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SCodeDump_filterElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _options);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SCodeDump_filterElement,2,0) {(void*) boxptr_SCodeDump_filterElement,0}};
#define boxvar_SCodeDump_filterElement MMC_REFSTRUCTLIT(boxvar_lit_SCodeDump_filterElement)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SCodeDump_filterElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _options)
{
modelica_boolean _b;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _element;
tmp4_2 = _options;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 5; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_integer tmp7;
modelica_metatype tmpMeta8;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
tmp7 = mmc_unbox_integer(tmpMeta6);
if (1 != tmp7) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,0) == 0) goto tmp3_end;
tmp1 = 0;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta9;
modelica_integer tmp10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
tmp10 = mmc_unbox_integer(tmpMeta9);
if (1 != tmp10) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,0) == 0) goto tmp3_end;
tmp1 = 0;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta13;
modelica_integer tmp14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
tmp14 = mmc_unbox_integer(tmpMeta13);
if (1 != tmp14) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,0) == 0) goto tmp3_end;
tmp1 = 0;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta17;
modelica_integer tmp18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_integer tmp21;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
tmp18 = mmc_unbox_integer(tmpMeta17);
if (1 != tmp18) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,17,5) == 0) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 5));
tmp21 = mmc_unbox_integer(tmpMeta20);
if (1 != tmp21) goto tmp3_end;
tmp1 = 0;
goto tmp3_done;
}
case 4: {
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SCodeDump_filterElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _options)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_SCodeDump_filterElement(threadData, _element, _options);
out_b = mmc_mk_icon(_b);
return out_b;
}
DLLExport
modelica_metatype omc_SCodeDump_filterElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _options)
{
modelica_metatype _outElements = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outElements = omc_List_select1(threadData, _elements, boxvar_SCodeDump_filterElement, _options);
_return: OMC_LABEL_UNUSED
return _outElements;
}
DLLExport
modelica_string omc_SCodeDump_prefixesStr(threadData_t *threadData, modelica_metatype _prefixes)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _prefixes;
{
modelica_metatype _v = NULL;
modelica_metatype _rd = NULL;
modelica_metatype _f = NULL;
modelica_metatype _io = NULL;
modelica_metatype _rpl = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 1; tmp4++) {
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
modelica_metatype tmpMeta14;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_v = tmpMeta6;
_rd = tmpMeta7;
_f = tmpMeta8;
_io = tmpMeta9;
_rpl = tmpMeta10;
tmpMeta11 = stringAppend(omc_SCodeDump_visibilityStr(threadData, _v),omc_SCodeDump_redeclareStr(threadData, _rd));
tmpMeta12 = stringAppend(tmpMeta11,omc_SCodeDump_finalStr(threadData, _f));
tmpMeta13 = stringAppend(tmpMeta12,omc_Dump_unparseInnerOuterStr(threadData, _io));
tmpMeta14 = stringAppend(tmpMeta13,omc_SCodeDump_replaceablePrefixStr(threadData, _rpl));
tmp1 = tmpMeta14;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_replaceableConstrainClassStr(threadData_t *threadData, modelica_metatype _inReplaceable)
{
modelica_string _strReplaceable = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
omc_SCodeDump_replaceableStr(threadData, _inReplaceable ,&_strReplaceable);
_return: OMC_LABEL_UNUSED
return _strReplaceable;
}
DLLExport
modelica_string omc_SCodeDump_replaceablePrefixStr(threadData_t *threadData, modelica_metatype _inReplaceable)
{
modelica_string _strReplaceable = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inReplaceable;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
tmp1 = _OMC_LIT0;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT1;
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
_strReplaceable = tmp1;
_return: OMC_LABEL_UNUSED
return _strReplaceable;
}
DLLExport
modelica_string omc_SCodeDump_replaceableStr(threadData_t *threadData, modelica_metatype _inReplaceable, modelica_string *out_strConstraint)
{
modelica_string _strReplaceable = NULL;
modelica_string _strConstraint = NULL;
modelica_string tmp1_c0 __attribute__((unused)) = 0;
modelica_string tmp1_c1 __attribute__((unused)) = 0;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inReplaceable;
{
modelica_metatype _path = NULL;
modelica_metatype _mod = NULL;
modelica_string _path_str = NULL;
modelica_string _mod_str = NULL;
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
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (optionNone(tmpMeta6)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
_path = tmpMeta8;
_mod = tmpMeta9;
_path_str = omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT2, 1, 0);
_mod_str = omc_SCodeDump_printModStr(threadData, _mod, _OMC_LIT3);
tmpMeta10 = stringAppend(_path_str,_OMC_LIT4);
tmpMeta11 = stringAppend(tmpMeta10,_mod_str);
tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT5);
tmp1_c0 = _OMC_LIT0;
tmp1_c1 = tmpMeta12;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta13;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (!optionNone(tmpMeta13)) goto tmp3_end;
tmp1_c0 = _OMC_LIT0;
tmp1_c1 = _OMC_LIT1;
goto tmp3_done;
}
case 2: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1_c0 = _OMC_LIT1;
tmp1_c1 = _OMC_LIT1;
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
_strReplaceable = tmp1_c0;
_strConstraint = tmp1_c1;
_return: OMC_LABEL_UNUSED
if (out_strConstraint) { *out_strConstraint = _strConstraint; }
return _strReplaceable;
}
DLLExport
modelica_string omc_SCodeDump_redeclareStr(threadData_t *threadData, modelica_metatype _inRedeclare)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inRedeclare;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT6;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT1;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_eachStr(threadData_t *threadData, modelica_metatype _inEach)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inEach;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT7;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT1;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_finalStr(threadData_t *threadData, modelica_metatype _inFinal)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inFinal;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT8;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT1;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_visibilityStr(threadData_t *threadData, modelica_metatype _inVisibility)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inVisibility;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT9;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT10;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_partialStr(threadData_t *threadData, modelica_metatype _inPartial)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inPartial;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT11;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT1;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_encapsulatedStr(threadData_t *threadData, modelica_metatype _inEncapsulated)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inEncapsulated;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT12;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT1;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_connectorTypeStr(threadData_t *threadData, modelica_metatype _inConnectorType)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inConnectorType;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmp1 = _OMC_LIT1;
goto tmp3_done;
}
case 4: {
tmp1 = _OMC_LIT13;
goto tmp3_done;
}
case 5: {
tmp1 = _OMC_LIT14;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_printInitialStr(threadData_t *threadData, modelica_metatype _initial_)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _initial_;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT15;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT16;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_unparseVariability(threadData_t *threadData, modelica_metatype _inVariability)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inVariability;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmp1 = _OMC_LIT1;
goto tmp3_done;
}
case 4: {
tmp1 = _OMC_LIT17;
goto tmp3_done;
}
case 5: {
tmp1 = _OMC_LIT18;
goto tmp3_done;
}
case 6: {
tmp1 = _OMC_LIT19;
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
modelica_string omc_SCodeDump_innerouterString(threadData_t *threadData, modelica_metatype _innerOuter)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _innerOuter;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
tmp1 = _OMC_LIT20;
goto tmp3_done;
}
case 3: {
tmp1 = _OMC_LIT21;
goto tmp3_done;
}
case 4: {
tmp1 = _OMC_LIT22;
goto tmp3_done;
}
case 6: {
tmp1 = _OMC_LIT1;
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
modelica_string omc_SCodeDump_parallelismString(threadData_t *threadData, modelica_metatype _inParallelism)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inParallelism;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmp1 = _OMC_LIT23;
goto tmp3_done;
}
case 4: {
tmp1 = _OMC_LIT24;
goto tmp3_done;
}
case 5: {
tmp1 = _OMC_LIT25;
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
modelica_string omc_SCodeDump_variabilityString(threadData_t *threadData, modelica_metatype _inVariability)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inVariability;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmp1 = _OMC_LIT26;
goto tmp3_done;
}
case 4: {
tmp1 = _OMC_LIT27;
goto tmp3_done;
}
case 5: {
tmp1 = _OMC_LIT28;
goto tmp3_done;
}
case 6: {
tmp1 = _OMC_LIT29;
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
modelica_string omc_SCodeDump_printEnumStr(threadData_t *threadData, modelica_metatype _en)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _en;
{
modelica_string _s = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 1; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_s = tmpMeta6;
tmp1 = _s;
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
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
DLLExport
modelica_string omc_SCodeDump_shortElementStr(threadData_t *threadData, modelica_metatype _inElement)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inElement;
{
modelica_string _str = NULL;
modelica_string _n = NULL;
modelica_string _ioStr = NULL;
modelica_metatype _mod = NULL;
modelica_metatype _path = NULL;
modelica_metatype _imp = NULL;
modelica_metatype _io = NULL;
modelica_metatype _rdp = NULL;
modelica_metatype _rpp = NULL;
modelica_metatype _pp = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 7; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
_path = tmpMeta6;
_mod = tmpMeta7;
_str = omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT2, 1, 0);
tmpMeta8 = stringAppend(_str,omc_SCodeDump_printModStr(threadData, _mod, _OMC_LIT3));
_str = tmpMeta8;
tmpMeta9 = mmc_mk_cons(_OMC_LIT30, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT31, MMC_REFSTRUCTLIT(mmc_nil))));
tmp1 = stringAppendList(tmpMeta9);
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
tmp1 = omc_SCodeDump_unparseElementStr(threadData, _inElement, _OMC_LIT3);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,3) == 0) goto tmp3_end;
tmp1 = omc_SCodeDump_unparseElementStr(threadData, _inElement, _OMC_LIT3);
goto tmp3_done;
}
case 3: {
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 5));
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 6));
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,2) == 0) goto tmp3_end;
_n = tmpMeta12;
_rdp = tmpMeta14;
_io = tmpMeta15;
_rpp = tmpMeta16;
_pp = tmpMeta17;
tmpMeta19 = stringAppend(omc_Dump_unparseInnerOuterStr(threadData, _io),omc_SCodeDump_redeclareStr(threadData, _rdp));
tmpMeta20 = stringAppend(tmpMeta19,omc_SCodeDump_replaceablePrefixStr(threadData, _rpp));
tmpMeta21 = stringAppend(tmpMeta20,omc_SCodeDump_partialStr(threadData, _pp));
_ioStr = tmpMeta21;
tmpMeta22 = mmc_mk_cons(_ioStr, mmc_mk_cons(_OMC_LIT32, mmc_mk_cons(_n, mmc_mk_cons(_OMC_LIT31, MMC_REFSTRUCTLIT(mmc_nil)))));
tmp1 = stringAppendList(tmpMeta22);
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_metatype tmpMeta26;
modelica_metatype tmpMeta27;
modelica_metatype tmpMeta28;
modelica_metatype tmpMeta29;
modelica_metatype tmpMeta30;
modelica_metatype tmpMeta31;
modelica_metatype tmpMeta32;
modelica_metatype tmpMeta33;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 5));
tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 6));
tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,3,1) == 0) goto tmp3_end;
_n = tmpMeta23;
_rdp = tmpMeta25;
_io = tmpMeta26;
_rpp = tmpMeta27;
_pp = tmpMeta28;
tmpMeta30 = stringAppend(omc_Dump_unparseInnerOuterStr(threadData, _io),omc_SCodeDump_redeclareStr(threadData, _rdp));
tmpMeta31 = stringAppend(tmpMeta30,omc_SCodeDump_replaceablePrefixStr(threadData, _rpp));
tmpMeta32 = stringAppend(tmpMeta31,omc_SCodeDump_partialStr(threadData, _pp));
_ioStr = tmpMeta32;
tmpMeta33 = mmc_mk_cons(_ioStr, mmc_mk_cons(_OMC_LIT33, mmc_mk_cons(_n, mmc_mk_cons(_OMC_LIT34, MMC_REFSTRUCTLIT(mmc_nil)))));
tmp1 = stringAppendList(tmpMeta33);
goto tmp3_done;
}
case 5: {
modelica_metatype tmpMeta34;
modelica_metatype tmpMeta35;
modelica_metatype tmpMeta36;
modelica_metatype tmpMeta37;
modelica_metatype tmpMeta38;
modelica_metatype tmpMeta39;
modelica_metatype tmpMeta40;
modelica_metatype tmpMeta41;
modelica_metatype tmpMeta42;
modelica_metatype tmpMeta43;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 3));
tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 5));
tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 6));
tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
_n = tmpMeta34;
_rdp = tmpMeta36;
_io = tmpMeta37;
_rpp = tmpMeta38;
_pp = tmpMeta39;
tmpMeta40 = stringAppend(omc_Dump_unparseInnerOuterStr(threadData, _io),omc_SCodeDump_redeclareStr(threadData, _rdp));
tmpMeta41 = stringAppend(tmpMeta40,omc_SCodeDump_replaceablePrefixStr(threadData, _rpp));
tmpMeta42 = stringAppend(tmpMeta41,omc_SCodeDump_partialStr(threadData, _pp));
_ioStr = tmpMeta42;
tmpMeta43 = mmc_mk_cons(_ioStr, mmc_mk_cons(_OMC_LIT33, mmc_mk_cons(_n, mmc_mk_cons(_OMC_LIT31, MMC_REFSTRUCTLIT(mmc_nil)))));
tmp1 = stringAppendList(tmpMeta43);
goto tmp3_done;
}
case 6: {
modelica_metatype tmpMeta44;
modelica_metatype tmpMeta45;
modelica_metatype tmpMeta46;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_imp = tmpMeta44;
tmpMeta45 = stringAppend(_OMC_LIT35,omc_AbsynUtil_printImportString(threadData, _imp));
tmpMeta46 = stringAppend(tmpMeta45,_OMC_LIT31);
tmp1 = tmpMeta46;
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
modelica_string omc_SCodeDump_unparseElementStr(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _options)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = omc_Tpl_tplString3(threadData, boxvar_SCodeDumpTpl_dumpElement, _inElement, _OMC_LIT1, _options);
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_SCodeDump_restrictionStringPP(threadData_t *threadData, modelica_metatype _inRestriction)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = omc_Tpl_tplString(threadData, boxvar_SCodeDumpTpl_dumpRestriction, _inRestriction);
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_SCodeDump_restrString(threadData_t *threadData, modelica_metatype _inRestriction)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inRestriction;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 28; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT36;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT37;
goto tmp3_done;
}
case 2: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT38;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta6;
modelica_integer tmp7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmp7 = mmc_unbox_integer(tmpMeta6);
if (0 != tmp7) goto tmp3_end;
tmp1 = _OMC_LIT39;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta8;
modelica_integer tmp9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmp9 = mmc_unbox_integer(tmpMeta8);
if (1 != tmp9) goto tmp3_end;
tmp1 = _OMC_LIT40;
goto tmp3_done;
}
case 5: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT41;
goto tmp3_done;
}
case 6: {
modelica_metatype tmpMeta10;
modelica_integer tmp11;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmp11 = mmc_unbox_integer(tmpMeta10);
if (0 != tmp11) goto tmp3_end;
tmp1 = _OMC_LIT42;
goto tmp3_done;
}
case 7: {
modelica_metatype tmpMeta12;
modelica_integer tmp13;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmp13 = mmc_unbox_integer(tmpMeta12);
if (1 != tmp13) goto tmp3_end;
tmp1 = _OMC_LIT43;
goto tmp3_done;
}
case 8: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT44;
goto tmp3_done;
}
case 9: {
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_integer tmp16;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,1) == 0) goto tmp3_end;
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
tmp16 = mmc_unbox_integer(tmpMeta15);
if (0 != tmp16) goto tmp3_end;
tmp1 = _OMC_LIT45;
goto tmp3_done;
}
case 10: {
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_integer tmp19;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,1) == 0) goto tmp3_end;
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
tmp19 = mmc_unbox_integer(tmpMeta18);
if (1 != tmp19) goto tmp3_end;
tmp1 = _OMC_LIT46;
goto tmp3_done;
}
case 11: {
modelica_metatype tmpMeta20;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,2,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT47;
goto tmp3_done;
}
case 12: {
modelica_metatype tmpMeta21;
modelica_metatype tmpMeta22;
modelica_integer tmp23;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,1) == 0) goto tmp3_end;
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
tmp23 = mmc_unbox_integer(tmpMeta22);
if (0 != tmp23) goto tmp3_end;
tmp1 = _OMC_LIT48;
goto tmp3_done;
}
case 13: {
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_integer tmp26;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,1) == 0) goto tmp3_end;
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
tmp26 = mmc_unbox_integer(tmpMeta25);
if (1 != tmp26) goto tmp3_end;
tmp1 = _OMC_LIT49;
goto tmp3_done;
}
case 14: {
modelica_metatype tmpMeta27;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,3,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT50;
goto tmp3_done;
}
case 15: {
modelica_metatype tmpMeta28;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,4,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT51;
goto tmp3_done;
}
case 16: {
modelica_metatype tmpMeta29;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,5,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT52;
goto tmp3_done;
}
case 17: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT53;
goto tmp3_done;
}
case 18: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT54;
goto tmp3_done;
}
case 19: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT55;
goto tmp3_done;
}
case 20: {
modelica_metatype tmpMeta30;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,5) == 0) goto tmp3_end;
tmpMeta30 = stringAppend(_OMC_LIT56,omc_AbsynUtil_pathString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inRestriction), 2))), _OMC_LIT2, 1, 0));
tmp1 = tmpMeta30;
goto tmp3_done;
}
case 21: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,1) == 0) goto tmp3_end;
tmp1 = _OMC_LIT57;
goto tmp3_done;
}
case 22: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT58;
goto tmp3_done;
}
case 23: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT59;
goto tmp3_done;
}
case 24: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT60;
goto tmp3_done;
}
case 25: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT61;
goto tmp3_done;
}
case 26: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT62;
goto tmp3_done;
}
case 27: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT55;
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
modelica_string omc_SCodeDump_printAnnotationStr(threadData_t *threadData, modelica_metatype _inComment, modelica_metatype _options)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inComment;
{
modelica_metatype _annotation_ = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_annotation_ = tmpMeta6;
tmp1 = omc_Tpl_tplString2(threadData, boxvar_SCodeDumpTpl_dumpAnnotationOpt, _annotation_, _options);
goto tmp3_done;
}
case 1: {
tmp1 = _OMC_LIT1;
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
modelica_string omc_SCodeDump_printCommentStr(threadData_t *threadData, modelica_metatype _inComment, modelica_metatype _options)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inComment;
{
modelica_metatype _comment = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_comment = tmpMeta6;
tmp1 = omc_Tpl_tplString2(threadData, boxvar_SCodeDumpTpl_dumpCommentStr, _comment, _options);
goto tmp3_done;
}
case 1: {
tmp1 = _OMC_LIT1;
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
modelica_string omc_SCodeDump_printCommentAndAnnotationStr(threadData_t *threadData, modelica_metatype _inComment, modelica_metatype _options)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = omc_Tpl_tplString2(threadData, boxvar_SCodeDumpTpl_dumpComment, _inComment, _options);
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_SCodeDump_printModStr(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _options)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = omc_Tpl_tplString2(threadData, boxvar_SCodeDumpTpl_dumpModifier, _inMod, _options);
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_SCodeDump_equationStr(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _options)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = omc_Tpl_tplString2(threadData, boxvar_SCodeDumpTpl_dumpEquation, _inEquation, _options);
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_SCodeDump_statementStr(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _options)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = omc_Tpl_tplString2(threadData, boxvar_SCodeDumpTpl_dumpStatement, _stmt, _options);
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_SCodeDump_classDefStr(threadData_t *threadData, modelica_metatype _cd, modelica_metatype _options)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = omc_Tpl_tplString2(threadData, boxvar_SCodeDumpTpl_dumpClassDef, _cd, _options);
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_SCodeDump_programStr(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _options)
{
modelica_string _outString = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outString = omc_Tpl_tplString2(threadData, boxvar_SCodeDumpTpl_dumpProgram, _inProgram, _options);
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_metatype omc_SCodeDump_generateOptions(threadData_t *threadData, modelica_boolean _stripAlgorithmSections, modelica_boolean _stripProtectedImports, modelica_boolean _stripProtectedClasses, modelica_boolean _stripProtectedComponents, modelica_boolean _stripMetaRecords, modelica_boolean _stripGraphicalAnnotations, modelica_boolean _stripStringComments, modelica_boolean _stripExternalDecl, modelica_boolean _stripOutputBindings)
{
modelica_metatype _options = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = mmc_mk_box10(3, &SCodeDump_SCodeDumpOptions_OPTIONS__desc, mmc_mk_boolean(_stripAlgorithmSections), mmc_mk_boolean(_stripProtectedImports), mmc_mk_boolean(_stripProtectedClasses), mmc_mk_boolean(_stripProtectedComponents), mmc_mk_boolean(_stripMetaRecords), mmc_mk_boolean(_stripGraphicalAnnotations), mmc_mk_boolean(_stripStringComments), mmc_mk_boolean(_stripExternalDecl), mmc_mk_boolean(_stripOutputBindings));
_options = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _options;
}
modelica_metatype boxptr_SCodeDump_generateOptions(threadData_t *threadData, modelica_metatype _stripAlgorithmSections, modelica_metatype _stripProtectedImports, modelica_metatype _stripProtectedClasses, modelica_metatype _stripProtectedComponents, modelica_metatype _stripMetaRecords, modelica_metatype _stripGraphicalAnnotations, modelica_metatype _stripStringComments, modelica_metatype _stripExternalDecl, modelica_metatype _stripOutputBindings)
{
modelica_integer tmp1;
modelica_integer tmp2;
modelica_integer tmp3;
modelica_integer tmp4;
modelica_integer tmp5;
modelica_integer tmp6;
modelica_integer tmp7;
modelica_integer tmp8;
modelica_integer tmp9;
modelica_metatype _options = NULL;
tmp1 = mmc_unbox_integer(_stripAlgorithmSections);
tmp2 = mmc_unbox_integer(_stripProtectedImports);
tmp3 = mmc_unbox_integer(_stripProtectedClasses);
tmp4 = mmc_unbox_integer(_stripProtectedComponents);
tmp5 = mmc_unbox_integer(_stripMetaRecords);
tmp6 = mmc_unbox_integer(_stripGraphicalAnnotations);
tmp7 = mmc_unbox_integer(_stripStringComments);
tmp8 = mmc_unbox_integer(_stripExternalDecl);
tmp9 = mmc_unbox_integer(_stripOutputBindings);
_options = omc_SCodeDump_generateOptions(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
return _options;
}
