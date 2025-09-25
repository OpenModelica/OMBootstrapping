#include "omc_simulation_settings.h"
#include "Util.h"
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT0,0.0);
#define _OMC_LIT0 MMC_REFREALLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "Time all: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,10,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Time t1: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,9,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Time t2: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,9,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Time all-t1-t2: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,16,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,0,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "$tmpVar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,7,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "^[0-9][0-9]*$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,13,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "^[_A-Za-z][_A-Za-z0-9]*$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,24,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,4,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,5,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "yes"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,3,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "no"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,2,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "&"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "&amp;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,5,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "<"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "&lt;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,4,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data ">"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,1,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "&gt;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,4,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,1,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "&quot;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,6,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "\\"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\\\\"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,2,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,1,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "\\'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,2,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "&#10;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,5,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "\r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "&#13;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,5,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,1,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "\"\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,2,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "\\\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,2,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "# Cannot write to file: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,24,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,1,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "SOME("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,5,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,1,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "NONE()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,6,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "- stringDelimitListAndSeparate2 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,39,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "linux"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,5,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "darwin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,6,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "./"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,2,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#include "util/modelica.h"

#include "Util_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Util_createDirectoryTreeH(threadData_t *threadData, modelica_string _inString, modelica_string _parentDir, modelica_boolean _parentDirExists);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Util_createDirectoryTreeH(threadData_t *threadData, modelica_metatype _inString, modelica_metatype _parentDir, modelica_metatype _parentDirExists);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Util_createDirectoryTreeH,2,0) {(void*) boxptr_Util_createDirectoryTreeH,0}};
#define boxvar_Util_createDirectoryTreeH MMC_REFSTRUCTLIT(boxvar_lit_Util_createDirectoryTreeH)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Util_nextPrime__isPrime(threadData_t *threadData, modelica_integer _inN);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Util_nextPrime__isPrime(threadData_t *threadData, modelica_metatype _inN);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Util_nextPrime__isPrime,2,0) {(void*) boxptr_Util_nextPrime__isPrime,0}};
#define boxvar_Util_nextPrime__isPrime MMC_REFSTRUCTLIT(boxvar_lit_Util_nextPrime__isPrime)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Util_nextPrime2(threadData_t *threadData, modelica_integer _inN);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Util_nextPrime2(threadData_t *threadData, modelica_metatype _inN);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Util_nextPrime2,2,0) {(void*) boxptr_Util_nextPrime2,0}};
#define boxvar_Util_nextPrime2 MMC_REFSTRUCTLIT(boxvar_lit_Util_nextPrime2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Util_stringBool2(threadData_t *threadData, modelica_string _inString);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Util_stringBool2(threadData_t *threadData, modelica_metatype _inString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Util_stringBool2,2,0) {(void*) boxptr_Util_stringBool2,0}};
#define boxvar_Util_stringBool2 MMC_REFSTRUCTLIT(boxvar_lit_Util_stringBool2)
PROTECTED_FUNCTION_STATIC void omc_Util_stringDelimitListAndSeparate2(threadData_t *threadData, modelica_metatype _inStringLst1, modelica_string _inString2, modelica_string _inString3, modelica_integer _inInteger4, modelica_integer _inInteger5);
PROTECTED_FUNCTION_STATIC void boxptr_Util_stringDelimitListAndSeparate2(threadData_t *threadData, modelica_metatype _inStringLst1, modelica_metatype _inString2, modelica_metatype _inString3, modelica_metatype _inInteger4, modelica_metatype _inInteger5);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Util_stringDelimitListAndSeparate2,2,0) {(void*) boxptr_Util_stringDelimitListAndSeparate2,0}};
#define boxvar_Util_stringDelimitListAndSeparate2 MMC_REFSTRUCTLIT(boxvar_lit_Util_stringDelimitListAndSeparate2)

DLLDirection
modelica_metatype omc_Util_foldcallN(threadData_t *threadData, modelica_integer _n, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _n;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 2))), _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFoldFunc), 1)))) (threadData, _outResult);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_Util_foldcallN(threadData_t *threadData, modelica_metatype _n, modelica_fnptr _inFoldFunc, modelica_metatype _inStartValue)
{
  modelica_integer tmp1;
  modelica_metatype _outResult = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _outResult = omc_Util_foldcallN(threadData, tmp1, _inFoldFunc, _inStartValue);
  /* skip box _outResult; polymorphic<FT> */
  return _outResult;
}

DLLDirection
modelica_integer omc_Util_msb(threadData_t *threadData, modelica_integer _n)
{
  modelica_integer _res;
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = ((modelica_integer) 0);
  _i = _n;
  while(1)
  {
    if(!(_i > ((modelica_integer) 0))) break;
    _i = ((_i) >> (((modelica_integer) 1)));

    _res = ((modelica_integer) 1) + _res;
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_msb(threadData_t *threadData, modelica_metatype _n)
{
  modelica_integer tmp1;
  modelica_integer _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_n);
  _res = omc_Util_msb(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_integer omc_Util_lcm(threadData_t *threadData, modelica_integer _a, modelica_integer _b)
{
  modelica_integer _res;
  modelica_integer tmp1;
  modelica_boolean tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  tmp2 = (modelica_boolean)((_a < ((modelica_integer) 0)) || (_b < ((modelica_integer) 0)));
  if(tmp2)
  {
    tmp3 = ((modelica_integer) -1);
  }
  else
  {
    tmp1 = omc_Util_gcd(threadData, _a, _b);
    if (tmp1 == 0) {MMC_THROW_INTERNAL();}
    tmp3 = modelica_div_integer((_a) * (_b),tmp1).quot;
  }
  _res = tmp3;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_lcm(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_a);
  tmp2 = mmc_unbox_integer(_b);
  _res = omc_Util_lcm(threadData, tmp1, tmp2);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_integer omc_Util_gcd(threadData_t *threadData, modelica_integer _a, modelica_integer _b)
{
  modelica_integer _res;
  modelica_integer tmp1;
  modelica_boolean tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  tmp2 = (modelica_boolean)(_b == ((modelica_integer) 0));
  if(tmp2)
  {
    tmp3 = _a;
  }
  else
  {
    /* Tail recursive call */
    tmp1 = _b;
    _b = modelica_integer_mod(_a, _b);
    _a = tmp1;
    goto _tailrecursive;
    /* TODO: Make sure any eventual dead code below is never generated */
  }
  _res = tmp3;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_gcd(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_a);
  tmp2 = mmc_unbox_integer(_b);
  _res = omc_Util_gcd(threadData, tmp1, tmp2);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

modelica_integer omc_Util_referenceCompare(threadData_t *threadData, modelica_metatype _ref1, modelica_metatype _ref2)
{
  modelica_metatype _ref1_ext;
  modelica_metatype _ref2_ext;
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _ref1_ext = (modelica_metatype)_ref1;
  _ref2_ext = (modelica_metatype)_ref2;
  _result_ext = referenceCompareExt(_ref1_ext, _ref2_ext);
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Util_referenceCompare(threadData_t *threadData, modelica_metatype _ref1, modelica_metatype _ref2)
{
  modelica_integer _result;
  modelica_metatype out_result;
  _result = omc_Util_referenceCompare(threadData, _ref1, _ref2);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_metatype omc_Util_applyTuple31(threadData_t *threadData, modelica_metatype _inTuple, modelica_fnptr _func)
{
  modelica_metatype _outTuple = NULL;
  modelica_metatype _t1 = NULL;
  modelica_metatype _t1_new = NULL;
  modelica_metatype _t2 = NULL;
  modelica_metatype _t3 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_boolean tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTuple has no default value.
  // _t1 has no default value.
  // _t1_new has no default value.
  // _t2 has no default value.
  // _t3 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _t1 = tmpMeta2;
  _t2 = tmpMeta3;
  _t3 = tmpMeta4;

  _t1_new = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _t1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _t1);

  tmp6 = (modelica_boolean)referenceEq(_t1, _t1_new);
  if(tmp6)
  {
    tmpMeta7 = _inTuple;
  }
  else
  {
    tmpMeta5 = mmc_mk_box3(0, _t1_new, _t2, _t3);
    tmpMeta7 = tmpMeta5;
  }
  _outTuple = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _outTuple;
}

DLLDirection
modelica_metatype omc_Util_applyTuple22(threadData_t *threadData, modelica_metatype _inTuple, modelica_fnptr _func)
{
  modelica_metatype _outTuple = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2_1 = NULL;
  modelica_metatype _e2_2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_boolean tmp5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTuple has no default value.
  // _e1 has no default value.
  // _e2_1 has no default value.
  // _e2_2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _e1 = tmpMeta2;
  _e2_1 = tmpMeta3;

  _e2_2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e2_1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e2_1);

  tmp5 = (modelica_boolean)referenceEq(_e2_1, _e2_2);
  if(tmp5)
  {
    tmpMeta6 = _inTuple;
  }
  else
  {
    tmpMeta4 = mmc_mk_box2(0, _e1, _e2_2);
    tmpMeta6 = tmpMeta4;
  }
  _outTuple = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _outTuple;
}

DLLDirection
modelica_metatype omc_Util_applyTuple21(threadData_t *threadData, modelica_metatype _inTuple, modelica_fnptr _func)
{
  modelica_metatype _outTuple = NULL;
  modelica_metatype _e1_1 = NULL;
  modelica_metatype _e1_2 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_boolean tmp5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTuple has no default value.
  // _e1_1 has no default value.
  // _e1_2 has no default value.
  // _e2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _e1_1 = tmpMeta2;
  _e2 = tmpMeta3;

  _e1_2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1_1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1_1);

  tmp5 = (modelica_boolean)referenceEq(_e1_1, _e1_2);
  if(tmp5)
  {
    tmpMeta6 = _inTuple;
  }
  else
  {
    tmpMeta4 = mmc_mk_box2(0, _e1_2, _e2);
    tmpMeta6 = tmpMeta4;
  }
  _outTuple = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _outTuple;
}

DLLDirection
modelica_real omc_Util_profilertock2(threadData_t *threadData)
{
  modelica_real _t;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _t has no default value.
  _t = omc_System_realtimeTock(threadData, ((modelica_integer) 21));
  _return: OMC_LABEL_UNUSED
  return _t;
}
modelica_metatype boxptr_Util_profilertock2(threadData_t *threadData)
{
  modelica_real _t;
  modelica_metatype out_t;
  _t = omc_Util_profilertock2(threadData);
  out_t = mmc_mk_rcon(_t);
  return out_t;
}

DLLDirection
modelica_real omc_Util_profilertock1(threadData_t *threadData)
{
  modelica_real _t;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _t has no default value.
  _t = omc_System_realtimeTock(threadData, ((modelica_integer) 20));
  _return: OMC_LABEL_UNUSED
  return _t;
}
modelica_metatype boxptr_Util_profilertock1(threadData_t *threadData)
{
  modelica_real _t;
  modelica_metatype out_t;
  _t = omc_Util_profilertock1(threadData);
  out_t = mmc_mk_rcon(_t);
  return out_t;
}

DLLDirection
void omc_Util_profilerreset2(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  setGlobalRoot(((modelica_integer) 16), _OMC_LIT0);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_Util_profilerreset1(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  setGlobalRoot(((modelica_integer) 15), _OMC_LIT0);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_Util_profilerstop2(threadData_t *threadData)
{
  modelica_real _t;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _t has no default value.
  _t = omc_System_realtimeTock(threadData, ((modelica_integer) 21));

  setGlobalRoot(((modelica_integer) 16), mmc_mk_real(mmc_unbox_real(getGlobalRoot(((modelica_integer) 16))) + _t));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_Util_profilerstop1(threadData_t *threadData)
{
  modelica_real _t;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _t has no default value.
  _t = omc_System_realtimeTock(threadData, ((modelica_integer) 20));

  setGlobalRoot(((modelica_integer) 15), mmc_mk_real(mmc_unbox_real(getGlobalRoot(((modelica_integer) 15))) + _t));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_Util_profilerstart2(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_System_realtimeTick(threadData, ((modelica_integer) 21));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_Util_profilerstart1(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_System_realtimeTick(threadData, ((modelica_integer) 20));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_real omc_Util_profilertime2(threadData_t *threadData)
{
  modelica_real _t2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _t2 has no default value.
  _t2 = mmc_unbox_real(getGlobalRoot(((modelica_integer) 16)));
  _return: OMC_LABEL_UNUSED
  return _t2;
}
modelica_metatype boxptr_Util_profilertime2(threadData_t *threadData)
{
  modelica_real _t2;
  modelica_metatype out_t2;
  _t2 = omc_Util_profilertime2(threadData);
  out_t2 = mmc_mk_rcon(_t2);
  return out_t2;
}

DLLDirection
modelica_real omc_Util_profilertime1(threadData_t *threadData)
{
  modelica_real _t1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _t1 has no default value.
  _t1 = mmc_unbox_real(getGlobalRoot(((modelica_integer) 15)));
  _return: OMC_LABEL_UNUSED
  return _t1;
}
modelica_metatype boxptr_Util_profilertime1(threadData_t *threadData)
{
  modelica_real _t1;
  modelica_metatype out_t1;
  _t1 = omc_Util_profilertime1(threadData);
  out_t1 = mmc_mk_rcon(_t1);
  return out_t1;
}

DLLDirection
void omc_Util_profilerresults(threadData_t *threadData)
{
  modelica_real _tg;
  modelica_real _t1;
  modelica_real _t2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tg has no default value.
  // _t1 has no default value.
  // _t2 has no default value.
  _tg = omc_System_realtimeTock(threadData, ((modelica_integer) 19));

  _t1 = omc_Util_profilertime1(threadData);

  _t2 = omc_Util_profilertime2(threadData);

  fputs(MMC_STRINGDATA(_OMC_LIT1),stdout);

  fputs(MMC_STRINGDATA(realString(_tg)),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

  fputs(MMC_STRINGDATA(realString(_t1)),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);

  fputs(MMC_STRINGDATA(realString(_t2)),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT5),stdout);

  fputs(MMC_STRINGDATA(realString(_tg + (-_t1) - _t2)),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_Util_profilerinit(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  setGlobalRoot(((modelica_integer) 15), _OMC_LIT0);

  setGlobalRoot(((modelica_integer) 16), _OMC_LIT0);

  omc_System_realtimeTick(threadData, ((modelica_integer) 19));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_Util_sourceInfoIsEqual(threadData_t *threadData, modelica_metatype _inInfo1, modelica_metatype _inInfo2)
{
  modelica_boolean _outIsEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsEqual has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inInfo1;
    tmp4_2 = _inInfo2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          tmp1 = ((((((stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo2), 2))))) && (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo1), 3)))) == !mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo2), 3)))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo1), 4)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo2), 4)))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo1), 5)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo2), 5)))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo1), 6)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo2), 6)))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo1), 7)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inInfo2), 7))))));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
modelica_metatype boxptr_Util_sourceInfoIsEqual(threadData_t *threadData, modelica_metatype _inInfo1, modelica_metatype _inInfo2)
{
  modelica_boolean _outIsEqual;
  modelica_metatype out_outIsEqual;
  _outIsEqual = omc_Util_sourceInfoIsEqual(threadData, _inInfo1, _inInfo2);
  out_outIsEqual = mmc_mk_icon(_outIsEqual);
  return out_outIsEqual;
}

DLLDirection
modelica_boolean omc_Util_sourceInfoIsEmpty(threadData_t *threadData, modelica_metatype _inInfo)
{
  modelica_boolean _outIsEmpty;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (0 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT6), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _outIsEmpty = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsEmpty;
}
modelica_metatype boxptr_Util_sourceInfoIsEmpty(threadData_t *threadData, modelica_metatype _inInfo)
{
  modelica_boolean _outIsEmpty;
  modelica_metatype out_outIsEmpty;
  _outIsEmpty = omc_Util_sourceInfoIsEmpty(threadData, _inInfo);
  out_outIsEmpty = mmc_mk_icon(_outIsEmpty);
  return out_outIsEmpty;
}

DLLDirection
modelica_string omc_Util_intLstString(threadData_t *threadData, modelica_metatype _lst)
{
  modelica_string _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = stringDelimitList(omc_List_map(threadData, _lst, boxvar_intString), _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_string omc_Util_absoluteOrRelative(threadData_t *threadData, modelica_string _inFileName)
{
  modelica_string _outFileName = NULL;
  modelica_string _pwd = NULL;
  modelica_string _pd = NULL;
  modelica_string _f = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outFileName = _inFileName;
  // _pwd has no default value.
  // _pd has no default value.
  // _f has no default value.
  _pwd = omc_System_pwd(threadData);

  _pd = _OMC_LIT8;

  if((!omc_System_regularFileExists(threadData, _inFileName)))
  {
    tmpMeta1 = mmc_mk_cons(_pwd, mmc_mk_cons(_pd, mmc_mk_cons(_inFileName, MMC_REFSTRUCTLIT(mmc_nil))));
    _f = stringAppendList(tmpMeta1);

    _outFileName = (omc_System_regularFileExists(threadData, _f)?_f:_outFileName);
  }
  _return: OMC_LABEL_UNUSED
  return _outFileName;
}

DLLDirection
modelica_boolean omc_Util_anyReturnTrue(threadData_t *threadData, modelica_metatype _a)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 1 /* true */;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Util_anyReturnTrue(threadData_t *threadData, modelica_metatype _a)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Util_anyReturnTrue(threadData, _a);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_Util_getTempVariableIndex(threadData_t *threadData)
{
  modelica_string _name = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT9,intString(omc_System_tmpTickIndex(threadData, ((modelica_integer) 4))));
  _name = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLDirection
modelica_string omc_Util_stringTrunc(threadData_t *threadData, modelica_string _str, modelica_integer _len)
{
  modelica_string _truncatedStr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _truncatedStr has no default value.
  _truncatedStr = ((stringLength(_str) <= _len)?_str:substring(_str, ((modelica_integer) 0), _len));
  _return: OMC_LABEL_UNUSED
  return _truncatedStr;
}
modelica_metatype boxptr_Util_stringTrunc(threadData_t *threadData, modelica_metatype _str, modelica_metatype _len)
{
  modelica_integer tmp1;
  modelica_string _truncatedStr = NULL;
  tmp1 = mmc_unbox_integer(_len);
  _truncatedStr = omc_Util_stringTrunc(threadData, _str, tmp1);
  /* skip box _truncatedStr; String */
  return _truncatedStr;
}

DLLDirection
modelica_boolean omc_Util_isIntegerString(threadData_t *threadData, modelica_string _str)
{
  modelica_boolean _b;
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _i has no default value.
  _i = omc_System_regex(threadData, _str, _OMC_LIT10, ((modelica_integer) 0), 1 /* true */, 0 /* false */, NULL);

  _b = (_i == ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Util_isIntegerString(threadData_t *threadData, modelica_metatype _str)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Util_isIntegerString(threadData, _str);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_Util_isCIdentifier(threadData_t *threadData, modelica_string _str)
{
  modelica_boolean _b;
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _i has no default value.
  _i = omc_System_regex(threadData, _str, _OMC_LIT11, ((modelica_integer) 0), 1 /* true */, 0 /* false */, NULL);

  _b = (_i == ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Util_isCIdentifier(threadData_t *threadData, modelica_metatype _str)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Util_isCIdentifier(threadData, _str);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_Util_nextPowerOf2(threadData_t *threadData, modelica_integer _i)
{
  modelica_integer _v;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  _v = ((modelica_integer) -1) + _i;

  _v = ((_v) | (((_v) << (((modelica_integer) 1)))));

  _v = ((_v) | (((_v) << (((modelica_integer) 2)))));

  _v = ((_v) | (((_v) << (((modelica_integer) 4)))));

  _v = ((_v) | (((_v) << (((modelica_integer) 8)))));

  _v = ((_v) | (((_v) << (((modelica_integer) 16)))));

  _v = ((modelica_integer) 1) + _v;
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_Util_nextPowerOf2(threadData_t *threadData, modelica_metatype _i)
{
  modelica_integer tmp1;
  modelica_integer _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_integer(_i);
  _v = omc_Util_nextPowerOf2(threadData, tmp1);
  out_v = mmc_mk_icon(_v);
  return out_v;
}

DLLDirection
modelica_boolean omc_Util_createDirectoryTree(threadData_t *threadData, modelica_string _inString)
{
  modelica_boolean _outBool;
  modelica_string _parentDir = NULL;
  modelica_boolean _parentDirExists;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBool has no default value.
  // _parentDir has no default value.
  // _parentDirExists has no default value.
  if(omc_System_directoryExists(threadData, _inString))
  {
    _outBool = 1 /* true */;
  }
  else
  {
    _parentDir = omc_System_dirname(threadData, _inString);

    _parentDirExists = omc_System_directoryExists(threadData, _parentDir);

    _outBool = omc_Util_createDirectoryTreeH(threadData, _inString, _parentDir, _parentDirExists);
  }
  _return: OMC_LABEL_UNUSED
  return _outBool;
}
modelica_metatype boxptr_Util_createDirectoryTree(threadData_t *threadData, modelica_metatype _inString)
{
  modelica_boolean _outBool;
  modelica_metatype out_outBool;
  _outBool = omc_Util_createDirectoryTree(threadData, _inString);
  out_outBool = mmc_mk_icon(_outBool);
  return out_outBool;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Util_createDirectoryTreeH(threadData_t *threadData, modelica_string _inString, modelica_string _parentDir, modelica_boolean _parentDirExists)
{
  modelica_boolean _outBool;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBool has no default value.
  { /* matchcontinue expression */
    volatile modelica_boolean tmp4_1;
    tmp4_1 = _parentDirExists;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (stringEqual(_parentDir, omc_System_dirname(threadData, _parentDir)));
          if (1 /* true */ != tmp6) goto goto_2;
          tmp1 = omc_System_createDirectory(threadData, _inString);
          goto tmp3_done;
        }
        case 1: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_System_createDirectory(threadData, _inString);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp7;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_Util_createDirectoryTree(threadData, _parentDir);
          if (1 /* true */ != tmp7) goto goto_2;
          tmp1 = omc_System_createDirectory(threadData, _inString);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _outBool = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBool;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Util_createDirectoryTreeH(threadData_t *threadData, modelica_metatype _inString, modelica_metatype _parentDir, modelica_metatype _parentDirExists)
{
  modelica_integer tmp1;
  modelica_boolean _outBool;
  modelica_metatype out_outBool;
  tmp1 = mmc_unbox_integer(_parentDirExists);
  _outBool = omc_Util_createDirectoryTreeH(threadData, _inString, _parentDir, tmp1);
  out_outBool = mmc_mk_icon(_outBool);
  return out_outBool;
}

DLLDirection
modelica_integer omc_Util_realRangeSize(threadData_t *threadData, modelica_real _inStart, modelica_real _inStep, modelica_real _inStop)
{
  modelica_integer _outSize;
  modelica_real tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSize has no default value.
  tmp1 = _inStep;
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  _outSize = ((modelica_integer) 1) + ((modelica_integer)floor(floor(5e-15 + (_inStop - _inStart) / tmp1)));

  _outSize = modelica_integer_max((modelica_integer)(_outSize),(modelica_integer)(((modelica_integer) 0)));
  _return: OMC_LABEL_UNUSED
  return _outSize;
}
modelica_metatype boxptr_Util_realRangeSize(threadData_t *threadData, modelica_metatype _inStart, modelica_metatype _inStep, modelica_metatype _inStop)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _outSize;
  modelica_metatype out_outSize;
  tmp1 = mmc_unbox_real(_inStart);
  tmp2 = mmc_unbox_real(_inStep);
  tmp3 = mmc_unbox_real(_inStop);
  _outSize = omc_Util_realRangeSize(threadData, tmp1, tmp2, tmp3);
  out_outSize = mmc_mk_icon(_outSize);
  return out_outSize;
}

DLLDirection
modelica_metatype omc_Util_replace(threadData_t *threadData, modelica_metatype _replaced, modelica_metatype _arg)
{
  modelica_metatype _outArg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outArg = _arg;
  _return: OMC_LABEL_UNUSED
  return _outArg;
}

DLLDirection
modelica_metatype omc_Util_swap(threadData_t *threadData, modelica_boolean _cond, modelica_metatype _in1, modelica_metatype _in2, modelica_metatype *out_out2)
{
  modelica_metatype _out1 = NULL;
  modelica_metatype _out2 = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out1 has no default value.
  // _out2 has no default value.
  
  
  { /* match expression */
    modelica_boolean tmp4_1;
    tmp4_1 = _cond;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _in2;
          tmpMeta[0+1] = _in1;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _in1;
          tmpMeta[0+1] = _in2;
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
  _out1 = tmpMeta[0+0];
  _out2 = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_out2) { *out_out2 = _out2; }
  return _out1;
}
modelica_metatype boxptr_Util_swap(threadData_t *threadData, modelica_metatype _cond, modelica_metatype _in1, modelica_metatype _in2, modelica_metatype *out_out2)
{
  modelica_integer tmp1;
  modelica_metatype _out1 = NULL;
  tmp1 = mmc_unbox_integer(_cond);
  _out1 = omc_Util_swap(threadData, tmp1, _in1, _in2, out_out2);
  /* skip box _out1; polymorphic<T> */
  /* skip box _out2; polymorphic<T> */
  return _out1;
}

DLLDirection
modelica_boolean omc_Util_stringNotEqual(threadData_t *threadData, modelica_string _str1, modelica_string _str2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (!(stringEqual(_str1, _str2)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Util_stringNotEqual(threadData_t *threadData, modelica_metatype _str1, modelica_metatype _str2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Util_stringNotEqual(threadData, _str1, _str2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_Util_removeLastNChar(threadData_t *threadData, modelica_string _str, modelica_integer _n)
{
  modelica_string _outStr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  _outStr = substring(_str, ((modelica_integer) 1), stringLength(_str) - _n);
  _return: OMC_LABEL_UNUSED
  return _outStr;
}
modelica_metatype boxptr_Util_removeLastNChar(threadData_t *threadData, modelica_metatype _str, modelica_metatype _n)
{
  modelica_integer tmp1;
  modelica_string _outStr = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _outStr = omc_Util_removeLastNChar(threadData, _str, tmp1);
  /* skip box _outStr; String */
  return _outStr;
}

DLLDirection
modelica_string omc_Util_removeLast4Char(threadData_t *threadData, modelica_string _str)
{
  modelica_string _outStr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  _outStr = substring(_str, ((modelica_integer) 1), ((modelica_integer) -4) + stringLength(_str));
  _return: OMC_LABEL_UNUSED
  return _outStr;
}

DLLDirection
modelica_string omc_Util_removeLast3Char(threadData_t *threadData, modelica_string _str)
{
  modelica_string _outStr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  _outStr = substring(_str, ((modelica_integer) 1), ((modelica_integer) -3) + stringLength(_str));
  _return: OMC_LABEL_UNUSED
  return _outStr;
}

DLLDirection
modelica_string omc_Util_anyToEmptyString(threadData_t *threadData, modelica_metatype _a)
{
  modelica_string _empty = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = _OMC_LIT6;
  _return: OMC_LABEL_UNUSED
  return _empty;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Util_nextPrime__isPrime(threadData_t *threadData, modelica_integer _inN)
{
  modelica_boolean _outIsPrime;
  modelica_integer _i;
  modelica_integer _q;
  modelica_integer tmp1;
  modelica_integer tmp2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsPrime has no default value.
  _i = ((modelica_integer) 3);
  tmp1 = ((modelica_integer) 3);
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  _q = modelica_div_integer(_inN,tmp1).quot;
  while(1)
  {
    if(!(_q >= _i)) break;
    if((_inN == (_q) * (_i)))
    {
      _outIsPrime = 0 /* false */;

      goto _return;
    }

    _i = ((modelica_integer) 2) + _i;

    tmp2 = _i;
    if (tmp2 == 0) {MMC_THROW_INTERNAL();}
    _q = modelica_div_integer(_inN,tmp2).quot;
  }

  _outIsPrime = 1 /* true */;
  _return: OMC_LABEL_UNUSED
  return _outIsPrime;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Util_nextPrime__isPrime(threadData_t *threadData, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_boolean _outIsPrime;
  modelica_metatype out_outIsPrime;
  tmp1 = mmc_unbox_integer(_inN);
  _outIsPrime = omc_Util_nextPrime__isPrime(threadData, tmp1);
  out_outIsPrime = mmc_mk_icon(_outIsPrime);
  return out_outIsPrime;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Util_nextPrime2(threadData_t *threadData, modelica_integer _inN)
{
  modelica_integer _outNextPrime;
  modelica_boolean tmp1;
  modelica_integer tmp2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNextPrime has no default value.
  tmp1 = (modelica_boolean)omc_Util_nextPrime__isPrime(threadData, _inN);
  if(tmp1)
  {
    tmp2 = _inN;
  }
  else
  {
    /* Tail recursive call */
    _inN = ((modelica_integer) 2) + _inN;
    goto _tailrecursive;
    /* TODO: Make sure any eventual dead code below is never generated */
  }
  _outNextPrime = tmp2;
  _return: OMC_LABEL_UNUSED
  return _outNextPrime;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Util_nextPrime2(threadData_t *threadData, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_integer _outNextPrime;
  modelica_metatype out_outNextPrime;
  tmp1 = mmc_unbox_integer(_inN);
  _outNextPrime = omc_Util_nextPrime2(threadData, tmp1);
  out_outNextPrime = mmc_mk_icon(_outNextPrime);
  return out_outNextPrime;
}

DLLDirection
modelica_integer omc_Util_nextPrime(threadData_t *threadData, modelica_integer _inN)
{
  modelica_integer _outNextPrime;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNextPrime has no default value.
  _outNextPrime = ((_inN <= ((modelica_integer) 2))?((modelica_integer) 2):omc_Util_nextPrime2(threadData, _inN + modelica_integer_mod(((modelica_integer) 1) + _inN, ((modelica_integer) 2))));
  _return: OMC_LABEL_UNUSED
  return _outNextPrime;
}
modelica_metatype boxptr_Util_nextPrime(threadData_t *threadData, modelica_metatype _inN)
{
  modelica_integer tmp1;
  modelica_integer _outNextPrime;
  modelica_metatype out_outNextPrime;
  tmp1 = mmc_unbox_integer(_inN);
  _outNextPrime = omc_Util_nextPrime(threadData, tmp1);
  out_outNextPrime = mmc_mk_icon(_outNextPrime);
  return out_outNextPrime;
}

DLLDirection
modelica_integer omc_Util_intProduct(threadData_t *threadData, modelica_metatype _lst)
{
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = mmc_unbox_integer(omc_List_fold(threadData, _lst, boxvar_intMul, mmc_mk_integer(((modelica_integer) 1))));
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_Util_intProduct(threadData_t *threadData, modelica_metatype _lst)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_Util_intProduct(threadData, _lst);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_string omc_Util_stringPadLeft(threadData_t *threadData, modelica_string _inString, modelica_integer _inPadWidth, modelica_string _inPadString)
{
  modelica_string _outString = NULL;
  modelica_integer _pad_length;
  modelica_string _pad_str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _pad_length has no default value.
  // _pad_str has no default value.
  _pad_length = _inPadWidth - stringLength(_inString);

  if((_pad_length > ((modelica_integer) 0)))
  {
    {
      modelica_metatype __omcQ_24tmpVar1;
      modelica_metatype* tmp2;
      modelica_metatype tmpMeta3;
      modelica_string __omcQ_24tmpVar0;
      modelica_integer tmp4;
      modelica_integer tmp5;
      modelica_integer tmp6;
      modelica_integer _i;
      tmp5 = 1 /* Range step-value */;
      tmp6 = _pad_length /* Range stop-value */;
      _i = ((modelica_integer) 1) /* Range start-value */;
      _i = (((modelica_integer) 1) /* Range start-value */)-tmp5;
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar1 = tmpMeta3; /* defaultValue */
      tmp2 = &__omcQ_24tmpVar1;
      while(1) {
        tmp4 = 1;
        if (tmp5 > 0 ? _i+tmp5 <= tmp6 : _i+tmp5 >= tmp6) {
          _i += tmp5;
          tmp4--;
        }
        if (tmp4 == 0) {
          __omcQ_24tmpVar0 = _inPadString;
          *tmp2 = mmc_mk_cons(__omcQ_24tmpVar0,0);
          tmp2 = &MMC_CDR(*tmp2);
        } else if (tmp4 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp2 = mmc_mk_nil();
      tmpMeta1 = __omcQ_24tmpVar1;
    }
    _pad_str = stringAppendList(tmpMeta1);

    tmpMeta7 = stringAppend(_pad_str,_inString);
    _outString = tmpMeta7;
  }
  else
  {
    _outString = _inString;
  }
  _return: OMC_LABEL_UNUSED
  return _outString;
}
modelica_metatype boxptr_Util_stringPadLeft(threadData_t *threadData, modelica_metatype _inString, modelica_metatype _inPadWidth, modelica_metatype _inPadString)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_inPadWidth);
  _outString = omc_Util_stringPadLeft(threadData, _inString, tmp1, _inPadString);
  /* skip box _outString; String */
  return _outString;
}

DLLDirection
modelica_string omc_Util_stringPadRight(threadData_t *threadData, modelica_string _inString, modelica_integer _inPadWidth, modelica_string _inPadString)
{
  modelica_string _outString = NULL;
  modelica_integer _pad_length;
  modelica_string _pad_str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _pad_length has no default value.
  // _pad_str has no default value.
  _pad_length = _inPadWidth - stringLength(_inString);

  if((_pad_length > ((modelica_integer) 0)))
  {
    {
      modelica_metatype __omcQ_24tmpVar3;
      modelica_metatype* tmp2;
      modelica_metatype tmpMeta3;
      modelica_string __omcQ_24tmpVar2;
      modelica_integer tmp4;
      modelica_integer tmp5;
      modelica_integer tmp6;
      modelica_integer _i;
      tmp5 = 1 /* Range step-value */;
      tmp6 = _pad_length /* Range stop-value */;
      _i = ((modelica_integer) 1) /* Range start-value */;
      _i = (((modelica_integer) 1) /* Range start-value */)-tmp5;
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
      tmp2 = &__omcQ_24tmpVar3;
      while(1) {
        tmp4 = 1;
        if (tmp5 > 0 ? _i+tmp5 <= tmp6 : _i+tmp5 >= tmp6) {
          _i += tmp5;
          tmp4--;
        }
        if (tmp4 == 0) {
          __omcQ_24tmpVar2 = _inPadString;
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
    _pad_str = stringAppendList(tmpMeta1);

    tmpMeta7 = stringAppend(_inString,_pad_str);
    _outString = tmpMeta7;
  }
  else
  {
    _outString = _inString;
  }
  _return: OMC_LABEL_UNUSED
  return _outString;
}
modelica_metatype boxptr_Util_stringPadRight(threadData_t *threadData, modelica_metatype _inString, modelica_metatype _inPadWidth, modelica_metatype _inPadString)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_inPadWidth);
  _outString = omc_Util_stringPadRight(threadData, _inString, tmp1, _inPadString);
  /* skip box _outString; String */
  return _outString;
}

DLLDirection
modelica_boolean omc_Util_stringEqCaseInsensitive(threadData_t *threadData, modelica_string _str1, modelica_string _str2)
{
  modelica_boolean _eq;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  _eq = (stringEqual(omc_System_tolower(threadData, _str1), omc_System_tolower(threadData, _str2)));
  _return: OMC_LABEL_UNUSED
  return _eq;
}
modelica_metatype boxptr_Util_stringEqCaseInsensitive(threadData_t *threadData, modelica_metatype _str1, modelica_metatype _str2)
{
  modelica_boolean _eq;
  modelica_metatype out_eq;
  _eq = omc_Util_stringEqCaseInsensitive(threadData, _str1, _str2);
  out_eq = mmc_mk_icon(_eq);
  return out_eq;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Util_stringBool2(threadData_t *threadData, modelica_string _inString)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inString;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT12), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT13), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          if (2 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Util_stringBool2(threadData_t *threadData, modelica_metatype _inString)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_Util_stringBool2(threadData, _inString);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_Util_stringBool(threadData_t *threadData, modelica_string _inString)
{
  modelica_boolean _outBoolean;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  _outBoolean = omc_Util_stringBool2(threadData, omc_System_tolower(threadData, _inString));
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_Util_stringBool(threadData_t *threadData, modelica_metatype _inString)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_Util_stringBool(threadData, _inString);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_Util_intBool(threadData_t *threadData, modelica_integer _inInteger)
{
  modelica_boolean _outBoolean;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBoolean = (_inInteger > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_Util_intBool(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  tmp1 = mmc_unbox_integer(_inInteger);
  _outBoolean = omc_Util_intBool(threadData, tmp1);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_integer omc_Util_boolInt(threadData_t *threadData, modelica_boolean _inBoolean)
{
  modelica_integer _outInteger;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outInteger = (_inBoolean?((modelica_integer) 1):((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _outInteger;
}
modelica_metatype boxptr_Util_boolInt(threadData_t *threadData, modelica_metatype _inBoolean)
{
  modelica_integer tmp1;
  modelica_integer _outInteger;
  modelica_metatype out_outInteger;
  tmp1 = mmc_unbox_integer(_inBoolean);
  _outInteger = omc_Util_boolInt(threadData, tmp1);
  out_outInteger = mmc_mk_icon(_outInteger);
  return out_outInteger;
}

DLLDirection
modelica_metatype omc_Util_assoc(threadData_t *threadData, modelica_metatype _inKey, modelica_metatype _inList)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_boolean tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  // _k has no default value.
  // _v has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = listHead(_inList);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _k = tmpMeta2;
  _v = tmpMeta3;

  tmp4 = (modelica_boolean)valueEq(_inKey, _k);
  if(tmp4)
  {
    tmpMeta5 = _v;
  }
  else
  {
    /* Tail recursive call */
    _inList = listRest(_inList);
    goto _tailrecursive;
    /* TODO: Make sure any eventual dead code below is never generated */
  }
  _outValue = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_string omc_Util_buildMapStr(threadData_t *threadData, modelica_metatype _inLst1, modelica_metatype _inLst2, modelica_string _inMiddleDelimiter, modelica_string _inEndDelimiter)
{
  modelica_string _outStr = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_string tmp4_3;modelica_string tmp4_4;
    tmp4_1 = _inLst1;
    tmp4_2 = _inLst2;
    tmp4_3 = _inMiddleDelimiter;
    tmp4_4 = _inEndDelimiter;
    {
      modelica_metatype _ra = NULL;
      modelica_metatype _rb = NULL;
      modelica_string _fa = NULL;
      modelica_string _fb = NULL;
      modelica_string _md = NULL;
      modelica_string _ed = NULL;
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ra has no default value.
      // _rb has no default value.
      // _fa has no default value.
      // _fb has no default value.
      // _md has no default value.
      // _ed has no default value.
      // _str has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT6;
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
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          
          _fa = tmpMeta6;
          _fb = tmpMeta8;
          _md = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(_fa, mmc_mk_cons(_md, mmc_mk_cons(_fb, MMC_REFSTRUCTLIT(mmc_nil))));
          tmp1 = stringAppendList(tmpMeta10);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_2);
          tmpMeta14 = MMC_CDR(tmp4_2);
          
          _fa = tmpMeta11;
          _ra = tmpMeta12;
          _fb = tmpMeta13;
          _rb = tmpMeta14;
          _md = tmp4_3;
          _ed = tmp4_4;
          /* Pattern matching succeeded */
          _str = omc_Util_buildMapStr(threadData, _ra, _rb, _md, _ed);
          tmpMeta15 = mmc_mk_cons(_fa, mmc_mk_cons(_md, mmc_mk_cons(_fb, mmc_mk_cons(_ed, mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil))))));
          tmp1 = stringAppendList(tmpMeta15);
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
  _outStr = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outStr;
}

DLLDirection
modelica_metatype omc_Util_id(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_metatype _outValue = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outValue = _inValue;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_boolean omc_Util_isSuccess(threadData_t *threadData, modelica_metatype _status)
{
  modelica_boolean _bool;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bool has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _status;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _bool = tmp1;
  _return: OMC_LABEL_UNUSED
  return _bool;
}
modelica_metatype boxptr_Util_isSuccess(threadData_t *threadData, modelica_metatype _status)
{
  modelica_boolean _bool;
  modelica_metatype out_bool;
  _bool = omc_Util_isSuccess(threadData, _status);
  out_bool = mmc_mk_icon(_bool);
  return out_bool;
}

DLLDirection
modelica_metatype omc_Util_getCurrentDateTime(threadData_t *threadData)
{
  modelica_metatype _dt = NULL;
  modelica_integer _sec;
  modelica_integer _min;
  modelica_integer _hour;
  modelica_integer _mday;
  modelica_integer _mon;
  modelica_integer _year;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dt has no default value.
  // _sec has no default value.
  // _min has no default value.
  // _hour has no default value.
  // _mday has no default value.
  // _mon has no default value.
  // _year has no default value.
  _sec = omc_System_getCurrentDateTime(threadData ,&_min ,&_hour ,&_mday ,&_mon ,&_year);

  tmpMeta1 = mmc_mk_box7(3, &Util_DateTime_DATETIME__desc, mmc_mk_integer(_sec), mmc_mk_integer(_min), mmc_mk_integer(_hour), mmc_mk_integer(_mday), mmc_mk_integer(_mon), mmc_mk_integer(_year));
  _dt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dt;
}

DLLDirection
modelica_string omc_Util_stringAppendNonEmpty(threadData_t *threadData, modelica_string _inString1, modelica_string _inString2)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inString2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT6), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _inString2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_inString1,_inString2);
          tmp1 = tmpMeta6;
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

DLLDirection
modelica_string omc_Util_stringAppendReverse(threadData_t *threadData, modelica_string _str1, modelica_string _str2)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_str2,_str1);
  _str = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_boolean omc_Util_strcmpBool(threadData_t *threadData, modelica_string _s1, modelica_string _s2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (stringCompare(_s1, _s2) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Util_strcmpBool(threadData_t *threadData, modelica_metatype _s1, modelica_metatype _s2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Util_strcmpBool(threadData, _s1, _s2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_Util_xmlEscape(threadData_t *threadData, modelica_string _s1)
{
  modelica_string _s2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s2 has no default value.
  _s2 = omc_Util_stringReplaceChar(threadData, _s1, _OMC_LIT16, _OMC_LIT17);

  _s2 = omc_Util_stringReplaceChar(threadData, _s2, _OMC_LIT18, _OMC_LIT19);

  _s2 = omc_Util_stringReplaceChar(threadData, _s2, _OMC_LIT20, _OMC_LIT21);

  _s2 = omc_Util_stringReplaceChar(threadData, _s2, _OMC_LIT22, _OMC_LIT23);
  _return: OMC_LABEL_UNUSED
  return _s2;
}

DLLDirection
modelica_metatype omc_Util_makeValueOrDefault(threadData_t *threadData, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype _inDefaultValue)
{
  modelica_metatype _outValue = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  { /* matchcontinue expression */
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
          /* Pattern matching succeeded */
          _outValue = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _inArg);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outValue = _inDefaultValue;
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
  return _outValue;
}

DLLDirection
modelica_boolean omc_Util_optionEqual(threadData_t *threadData, modelica_metatype _inOption1, modelica_metatype _inOption2, modelica_fnptr _inFunc)
{
  modelica_boolean _outEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqual has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inOption1;
    tmp4_2 = _inOption2;
    {
      modelica_metatype _val1 = NULL;
      modelica_metatype _val2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _val1 has no default value.
      // _val2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _val1 = tmpMeta6;
          _val2 = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _val1, _val2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _val1, _val2));
          goto tmp3_done;
        }
        case 1: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
modelica_metatype boxptr_Util_optionEqual(threadData_t *threadData, modelica_metatype _inOption1, modelica_metatype _inOption2, modelica_fnptr _inFunc)
{
  modelica_boolean _outEqual;
  modelica_metatype out_outEqual;
  _outEqual = omc_Util_optionEqual(threadData, _inOption1, _inOption2, _inFunc);
  out_outEqual = mmc_mk_icon(_outEqual);
  return out_outEqual;
}

DLLDirection
void omc_Util_setStatefulBoolean(threadData_t *threadData, modelica_metatype _sb, modelica_boolean _b)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  arrayUpdate(_sb, ((modelica_integer) 1), mmc_mk_boolean(_b));
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Util_setStatefulBoolean(threadData_t *threadData, modelica_metatype _sb, modelica_metatype _b)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_b);
  omc_Util_setStatefulBoolean(threadData, _sb, tmp1);
  return;
}

DLLDirection
modelica_boolean omc_Util_getStatefulBoolean(threadData_t *threadData, modelica_metatype _sb)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = mmc_unbox_boolean(arrayGet(_sb,((modelica_integer) 1)) /* DAE.ASUB */);
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Util_getStatefulBoolean(threadData_t *threadData, modelica_metatype _sb)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Util_getStatefulBoolean(threadData, _sb);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_Util_makeStatefulBoolean(threadData_t *threadData, modelica_boolean _b)
{
  modelica_metatype _sb = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sb = arrayCreate(((modelica_integer) 1), mmc_mk_boolean(_b));
  _return: OMC_LABEL_UNUSED
  return _sb;
}
modelica_metatype boxptr_Util_makeStatefulBoolean(threadData_t *threadData, modelica_metatype _b)
{
  modelica_integer tmp1;
  modelica_metatype _sb = NULL;
  tmp1 = mmc_unbox_integer(_b);
  _sb = omc_Util_makeStatefulBoolean(threadData, tmp1);
  /* skip box _sb; array<#Boolean> */
  return _sb;
}

DLLDirection
modelica_integer omc_Util_mulListIntegerOpt(threadData_t *threadData, modelica_metatype _inList, modelica_integer _inAccum)
{
  modelica_integer _outResult;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      modelica_integer _i;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _inAccum;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _i = tmp9  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inList = _rest;
          _inAccum = (_i) * (_inAccum);
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (!optionNone(tmpMeta10)) goto tmp3_end;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inList = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outResult = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_Util_mulListIntegerOpt(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _inAccum)
{
  modelica_integer tmp1;
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  tmp1 = mmc_unbox_integer(_inAccum);
  _outResult = omc_Util_mulListIntegerOpt(threadData, _inList, tmp1);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_metatype omc_Util_make3Tuple(threadData_t *threadData, modelica_metatype _inValue1, modelica_metatype _inValue2, modelica_metatype _inValue3)
{
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(0, _inValue1, _inValue2, _inValue3);
  _outTuple = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTuple;
}

DLLDirection
modelica_metatype omc_Util_makeTupleR(threadData_t *threadData, modelica_metatype _inValue1, modelica_metatype _inValue2)
{
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(0, _inValue2, _inValue1);
  _outTuple = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTuple;
}

DLLDirection
modelica_metatype omc_Util_makeTuple(threadData_t *threadData, modelica_metatype _inValue1, modelica_metatype _inValue2)
{
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(0, _inValue1, _inValue2);
  _outTuple = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTuple;
}

DLLDirection
modelica_string omc_Util_escapeQuotes(threadData_t *threadData, modelica_string _str)
{
  modelica_string _quotes = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _quotes has no default value.
  _quotes = omc_System_stringReplace(threadData, _str, _OMC_LIT24, _OMC_LIT25);

  _quotes = omc_System_stringReplace(threadData, _quotes, _OMC_LIT26, _OMC_LIT27);
  _return: OMC_LABEL_UNUSED
  return _quotes;
}

DLLDirection
modelica_string omc_Util_makeQuotedIdentifier(threadData_t *threadData, modelica_string _str)
{
  modelica_string _quotedIdentifier = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _quotedIdentifier has no default value.
  _quotedIdentifier = omc_System_stringReplace(threadData, _str, _OMC_LIT24, _OMC_LIT25);

  _quotedIdentifier = omc_System_stringReplace(threadData, _quotedIdentifier, _OMC_LIT26, _OMC_LIT27);

  tmpMeta1 = stringAppend(_OMC_LIT26,_quotedIdentifier);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT26);
  _quotedIdentifier = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _quotedIdentifier;
}

DLLDirection
modelica_string omc_Util_escapeModelicaStringToXmlString(threadData_t *threadData, modelica_string _modelicaString)
{
  modelica_string _xmlString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _xmlString has no default value.
  _xmlString = omc_System_stringReplace(threadData, _modelicaString, _OMC_LIT16, _OMC_LIT17);

  _xmlString = omc_System_stringReplace(threadData, _xmlString, _OMC_LIT22, _OMC_LIT23);

  _xmlString = omc_System_stringReplace(threadData, _xmlString, _OMC_LIT18, _OMC_LIT19);

  _xmlString = omc_System_stringReplace(threadData, _xmlString, _OMC_LIT20, _OMC_LIT21);

  _xmlString = omc_System_stringReplace(threadData, _xmlString, _OMC_LIT2, _OMC_LIT28);

  _xmlString = omc_System_stringReplace(threadData, _xmlString, _OMC_LIT29, _OMC_LIT30);
  _return: OMC_LABEL_UNUSED
  return _xmlString;
}

DLLDirection
modelica_string omc_Util_escapeModelicaStringToJLString(threadData_t *threadData, modelica_string _modelicaString)
{
  modelica_string _cString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cString has no default value.
  _cString = omc_System_stringReplace(threadData, _modelicaString, _OMC_LIT31, _OMC_LIT6);

  _cString = omc_System_stringReplace(threadData, _cString, _OMC_LIT22, _OMC_LIT6);

  _cString = omc_System_stringReplace(threadData, _cString, _OMC_LIT22, _OMC_LIT6);

  _cString = omc_System_stringReplace(threadData, _cString, _OMC_LIT32, _OMC_LIT6);

  _cString = omc_System_escapedString(threadData, _cString, 1 /* true */);
  _return: OMC_LABEL_UNUSED
  return _cString;
}

DLLDirection
modelica_string omc_Util_escapeModelicaStringToCString(threadData_t *threadData, modelica_string _modelicaString)
{
  modelica_string _cString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cString has no default value.
  _cString = omc_System_escapedString(threadData, _modelicaString, 1 /* true */);
  _return: OMC_LABEL_UNUSED
  return _cString;
}

DLLDirection
modelica_string omc_Util_rawStringToInputString(threadData_t *threadData, modelica_string _inString)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_System_stringReplace(threadData, _inString, _OMC_LIT33, _OMC_LIT22);

  _outString = omc_System_stringReplace(threadData, _outString, _OMC_LIT25, _OMC_LIT24);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_Util_getAbsoluteDirectoryAndFile(threadData_t *threadData, modelica_string _filename, modelica_string *out_basename)
{
  modelica_string _dirname = NULL;
  modelica_string _basename = NULL;
  modelica_string _realpath = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dirname has no default value.
  // _basename has no default value.
  // _realpath has no default value.
  _realpath = omc_System_realpath(threadData, _filename);

  _dirname = omc_System_dirname(threadData, _realpath);

  _basename = omc_System_basename(threadData, _realpath);

  _dirname = omc_Util_replaceWindowsBackSlashWithPathDelimiter(threadData, _dirname);
  _return: OMC_LABEL_UNUSED
  if (out_basename) { *out_basename = _basename; }
  return _dirname;
}

DLLDirection
modelica_string omc_Util_replaceWindowsBackSlashWithPathDelimiter(threadData_t *threadData, modelica_string _inPath)
{
  modelica_string _outPath = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPath has no default value.
  _outPath = _inPath;
  _return: OMC_LABEL_UNUSED
  return _outPath;
}

DLLDirection
modelica_string omc_Util_tickStr(threadData_t *threadData)
{
  modelica_string _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = intString(tick());
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_boolean omc_Util_notStrncmp(threadData_t *threadData, modelica_string _inString1, modelica_string _inString2, modelica_integer _inLength)
{
  modelica_boolean _outEqual;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqual has no default value.
  _outEqual = (((modelica_integer) 0) != omc_System_strncmp(threadData, _inString1, _inString2, _inLength));
  _return: OMC_LABEL_UNUSED
  return _outEqual;
}
modelica_metatype boxptr_Util_notStrncmp(threadData_t *threadData, modelica_metatype _inString1, modelica_metatype _inString2, modelica_metatype _inLength)
{
  modelica_integer tmp1;
  modelica_boolean _outEqual;
  modelica_metatype out_outEqual;
  tmp1 = mmc_unbox_integer(_inLength);
  _outEqual = omc_Util_notStrncmp(threadData, _inString1, _inString2, tmp1);
  out_outEqual = mmc_mk_icon(_outEqual);
  return out_outEqual;
}

DLLDirection
modelica_boolean omc_Util_strncmp(threadData_t *threadData, modelica_string _inString1, modelica_string _inString2, modelica_integer _inLength)
{
  modelica_boolean _outEqual;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqual has no default value.
  _outEqual = (((modelica_integer) 0) == omc_System_strncmp(threadData, _inString1, _inString2, _inLength));
  _return: OMC_LABEL_UNUSED
  return _outEqual;
}
modelica_metatype boxptr_Util_strncmp(threadData_t *threadData, modelica_metatype _inString1, modelica_metatype _inString2, modelica_metatype _inLength)
{
  modelica_integer tmp1;
  modelica_boolean _outEqual;
  modelica_metatype out_outEqual;
  tmp1 = mmc_unbox_integer(_inLength);
  _outEqual = omc_Util_strncmp(threadData, _inString1, _inString2, tmp1);
  out_outEqual = mmc_mk_icon(_outEqual);
  return out_outEqual;
}

DLLDirection
void omc_Util_writeFileOrErrorMsg(threadData_t *threadData, modelica_string _inFilename, modelica_string _inString)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
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
          /* Pattern matching succeeded */
          omc_System_writeFile(threadData, _inFilename, _inString);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT34,_inFilename);
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT35);
          omc_Print_printErrorBuf(threadData, tmpMeta6);
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

DLLDirection
modelica_boolean omc_Util_isNotEmptyString(threadData_t *threadData, modelica_string _inString)
{
  modelica_boolean _outIsNotEmpty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outIsNotEmpty = (stringLength(_inString) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _outIsNotEmpty;
}
modelica_metatype boxptr_Util_isNotEmptyString(threadData_t *threadData, modelica_metatype _inString)
{
  modelica_boolean _outIsNotEmpty;
  modelica_metatype out_outIsNotEmpty;
  _outIsNotEmpty = omc_Util_isNotEmptyString(threadData, _inString);
  out_outIsNotEmpty = mmc_mk_icon(_outIsNotEmpty);
  return out_outIsNotEmpty;
}

DLLDirection
modelica_integer omc_Util_boolCompare(threadData_t *threadData, modelica_boolean _inN, modelica_boolean _inM)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = ((!_inN == !_inM)?((modelica_integer) 0):((_inN && !_inM)?((modelica_integer) 1):((modelica_integer) -1)));
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_Util_boolCompare(threadData_t *threadData, modelica_metatype _inN, modelica_metatype _inM)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  tmp1 = mmc_unbox_integer(_inN);
  tmp2 = mmc_unbox_integer(_inM);
  _outResult = omc_Util_boolCompare(threadData, tmp1, tmp2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_integer omc_Util_realCompare(threadData_t *threadData, modelica_real _inN, modelica_real _inM)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = ((_inN == _inM)?((modelica_integer) 0):((_inN > _inM)?((modelica_integer) 1):((modelica_integer) -1)));
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_Util_realCompare(threadData_t *threadData, modelica_metatype _inN, modelica_metatype _inM)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  tmp1 = mmc_unbox_real(_inN);
  tmp2 = mmc_unbox_real(_inM);
  _outResult = omc_Util_realCompare(threadData, tmp1, tmp2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_boolean omc_Util_realNegative(threadData_t *threadData, modelica_real _v)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (_v < 0.0);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_realNegative(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_real(_v);
  _res = omc_Util_realNegative(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_integer omc_Util_intPow(threadData_t *threadData, modelica_integer _base, modelica_integer _exponent)
{
  modelica_integer _result;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _result = ((modelica_integer) 1);
  if((_exponent >= ((modelica_integer) 0)))
  {
    tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _exponent;
    if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
      {
        _result = (_result) * (_base);
      }
    }
  }
  else
  {
    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Util_intPow(threadData_t *threadData, modelica_metatype _base, modelica_metatype _exponent)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_base);
  tmp2 = mmc_unbox_integer(_exponent);
  _result = omc_Util_intPow(threadData, tmp1, tmp2);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_integer omc_Util_intCompare(threadData_t *threadData, modelica_integer _inN, modelica_integer _inM)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = ((_inN == _inM)?((modelica_integer) 0):((_inN > _inM)?((modelica_integer) 1):((modelica_integer) -1)));
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_Util_intCompare(threadData_t *threadData, modelica_metatype _inN, modelica_metatype _inM)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  tmp1 = mmc_unbox_integer(_inN);
  tmp2 = mmc_unbox_integer(_inM);
  _outResult = omc_Util_intCompare(threadData, tmp1, tmp2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_integer omc_Util_intSign(threadData_t *threadData, modelica_integer _i)
{
  modelica_integer _o;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _o = ((_i == ((modelica_integer) 0))?((modelica_integer) 0):((_i > ((modelica_integer) 0))?((modelica_integer) 1):((modelica_integer) -1)));
  _return: OMC_LABEL_UNUSED
  return _o;
}
modelica_metatype boxptr_Util_intSign(threadData_t *threadData, modelica_metatype _i)
{
  modelica_integer tmp1;
  modelica_integer _o;
  modelica_metatype out_o;
  tmp1 = mmc_unbox_integer(_i);
  _o = omc_Util_intSign(threadData, tmp1);
  out_o = mmc_mk_icon(_o);
  return out_o;
}

DLLDirection
modelica_boolean omc_Util_intNegative(threadData_t *threadData, modelica_integer _v)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (_v < ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_intNegative(threadData_t *threadData, modelica_metatype _v)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_v);
  _res = omc_Util_intNegative(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_Util_intPositive(threadData_t *threadData, modelica_integer _v)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (_v >= ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_intPositive(threadData_t *threadData, modelica_metatype _v)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_v);
  _res = omc_Util_intPositive(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_Util_intGreaterZero(threadData_t *threadData, modelica_integer _v)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (_v > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_intGreaterZero(threadData_t *threadData, modelica_metatype _v)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_v);
  _res = omc_Util_intGreaterZero(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_Util_getOptionOrDefault(threadData_t *threadData, modelica_metatype _inOption, modelica_metatype _inDefault)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOption;
    {
      modelica_metatype _value = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _value has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inDefault;
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
  _outValue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_getOption(threadData_t *threadData, modelica_metatype _inOption)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inOption;
  if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_makeOptionOnTrue(threadData_t *threadData, modelica_boolean _inCondition, modelica_metatype _inValue)
{
  modelica_metatype _outOption = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outOption = (_inCondition?mmc_mk_some(_inValue):mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return _outOption;
}
modelica_metatype boxptr_Util_makeOptionOnTrue(threadData_t *threadData, modelica_metatype _inCondition, modelica_metatype _inValue)
{
  modelica_integer tmp1;
  modelica_metatype _outOption = NULL;
  tmp1 = mmc_unbox_integer(_inCondition);
  _outOption = omc_Util_makeOptionOnTrue(threadData, tmp1, _inValue);
  /* skip box _outOption; Option<polymorphic<T>> */
  return _outOption;
}

DLLDirection
modelica_metatype omc_Util_makeOption(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_metatype _outOption = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outOption = mmc_mk_some(_inValue);
  _return: OMC_LABEL_UNUSED
  return _outOption;
}

DLLDirection
modelica_metatype omc_Util_applyOption__2(threadData_t *threadData, modelica_metatype _inValue1, modelica_metatype _inValue2, modelica_fnptr _inFunc)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inValue1;
    tmp4_2 = _inValue2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inValue2;
          goto tmp3_done;
        }
        case 1: {
          if (!optionNone(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inValue1;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), omc_Util_getOption(threadData, _inValue1), omc_Util_getOption(threadData, _inValue2)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, omc_Util_getOption(threadData, _inValue1), omc_Util_getOption(threadData, _inValue2)));
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
  _outValue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_applyOptionOrDefault2(threadData_t *threadData, modelica_metatype _inValue, modelica_fnptr _inFunc, modelica_metatype _inArg1, modelica_metatype _inArg2, modelica_metatype _inDefaultValue)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inValue;
    {
      modelica_metatype _value = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _value has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _value, _inArg1, _inArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _value, _inArg1, _inArg2);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inDefaultValue;
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
  _outValue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_applyOptionOrDefault1(threadData_t *threadData, modelica_metatype _inValue, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype _inDefaultValue)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inValue;
    {
      modelica_metatype _value = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _value has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _value, _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _value, _inArg);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inDefaultValue;
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
  _outValue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_applyOptionOrDefault(threadData_t *threadData, modelica_metatype _inValue, modelica_fnptr _inFunc, modelica_metatype _inDefaultValue)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inValue;
    {
      modelica_metatype _value = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _value has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _value);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inDefaultValue;
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
  _outValue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_applyOption1(threadData_t *threadData, modelica_metatype _inOption, modelica_fnptr _inFunc, modelica_metatype _inArg)
{
  modelica_metatype _outOption = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOption has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOption;
    {
      modelica_metatype _ival = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ival has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _ival = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _ival, _inArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _ival, _inArg));
          goto tmp3_done;
        }
        case 1: {
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outOption = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outOption;
}

DLLDirection
modelica_metatype omc_Util_applyOption(threadData_t *threadData, modelica_metatype _inOption, modelica_fnptr _inFunc)
{
  modelica_metatype _outOption = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOption has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOption;
    {
      modelica_metatype _ival = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ival has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _ival = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _ival) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _ival));
          goto tmp3_done;
        }
        case 1: {
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outOption = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outOption;
}

DLLDirection
modelica_string omc_Util_optionToString(threadData_t *threadData, modelica_metatype _ot, modelica_fnptr _f)
{
  modelica_string _str = NULL;
  modelica_metatype _t = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _t has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ot;
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _t = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT36,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 2))), _t) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 1)))) (threadData, _t));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT37);
          tmp1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT38;
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

DLLDirection
modelica_boolean omc_Util_boolAndList(threadData_t *threadData, modelica_metatype _inBooleanLst)
{
  modelica_boolean _outBoolean;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBoolean = 1 /* true */;
  {
    modelica_metatype _b;
    for (tmpMeta1 = _inBooleanLst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _b = MMC_CAR(tmpMeta1);
      if((!mmc_unbox_boolean(_b)))
      {
        _outBoolean = 0 /* false */;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_Util_boolAndList(threadData_t *threadData, modelica_metatype _inBooleanLst)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_Util_boolAndList(threadData, _inBooleanLst);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_Util_boolOrList(threadData_t *threadData, modelica_metatype _inBooleanLst)
{
  modelica_boolean _outBoolean;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBoolean = 0 /* false */;
  {
    modelica_metatype _b;
    for (tmpMeta1 = _inBooleanLst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _b = MMC_CAR(tmpMeta1);
      if(mmc_unbox_boolean(_b))
      {
        _outBoolean = 1 /* true */;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_Util_boolOrList(threadData_t *threadData, modelica_metatype _inBooleanLst)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_Util_boolOrList(threadData, _inBooleanLst);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_metatype omc_Util_stringSplitAtChar(threadData_t *threadData, modelica_string _string, modelica_string _token)
{
  modelica_metatype _strings = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _ch;
  modelica_metatype _cur = NULL;
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
  _strings = tmpMeta1;
  _ch = stringCharInt(_token);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _cur = tmpMeta2;
  {
    modelica_metatype _c;
    for (tmpMeta3 = stringListStringChar(_string); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _c = MMC_CAR(tmpMeta3);
      if((stringCharInt(_c) == _ch))
      {
        tmpMeta4 = mmc_mk_cons(stringAppendList(listReverse(_cur)), _strings);
        _strings = tmpMeta4;

        tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
        _cur = tmpMeta5;
      }
      else
      {
        tmpMeta6 = mmc_mk_cons(_c, _cur);
        _cur = tmpMeta6;
      }
    }
  }

  if((!listEmpty(_cur)))
  {
    tmpMeta8 = mmc_mk_cons(stringAppendList(listReverse(_cur)), _strings);
    _strings = tmpMeta8;
  }

  _strings = listReverse(_strings);
  _return: OMC_LABEL_UNUSED
  return _strings;
}

DLLDirection
modelica_string omc_Util_stringReplaceChar(threadData_t *threadData, modelica_string _inString1, modelica_string _inString2, modelica_string _inString3)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_System_stringReplace(threadData, _inString1, _inString2, _inString3);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_integer omc_Util_mulStringDelimit2Int(threadData_t *threadData, modelica_string _inString, modelica_string _delim)
{
  modelica_integer _i;
  modelica_metatype _lst = NULL;
  modelica_metatype _lst2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  // _lst has no default value.
  // _lst2 has no default value.
  _lst = omc_Util_stringSplitAtChar(threadData, _inString, _delim);

  _lst2 = omc_List_map(threadData, _lst, boxvar_stringInt);

  if((!listEmpty(_lst2)))
  {
    _i = mmc_unbox_integer(omc_List_fold(threadData, _lst2, boxvar_intMul, mmc_mk_integer(((modelica_integer) 1))));
  }
  else
  {
    _i = ((modelica_integer) 0);
  }
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_Util_mulStringDelimit2Int(threadData_t *threadData, modelica_metatype _inString, modelica_metatype _delim)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_Util_mulStringDelimit2Int(threadData, _inString, _delim);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_string omc_Util_stringDelimitListNonEmptyElts(threadData_t *threadData, modelica_metatype _lst, modelica_string _delim)
{
  modelica_string _str = NULL;
  modelica_metatype _lst1 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _lst1 has no default value.
  _lst1 = omc_List_select(threadData, _lst, boxvar_Util_isNotEmptyString);

  _str = stringDelimitList(_lst1, _delim);
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC void omc_Util_stringDelimitListAndSeparate2(threadData_t *threadData, modelica_metatype _inStringLst1, modelica_string _inString2, modelica_string _inString3, modelica_integer _inInteger4, modelica_integer _inInteger5)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_string tmp3_2;volatile modelica_string tmp3_3;volatile modelica_integer tmp3_4;volatile modelica_integer tmp3_5;
    tmp3_1 = _inStringLst1;
    tmp3_2 = _inString2;
    tmp3_3 = _inString3;
    tmp3_4 = _inInteger4;
    tmp3_5 = _inInteger5;
    {
      modelica_string _s = NULL;
      modelica_string _f = NULL;
      modelica_string _sep1 = NULL;
      modelica_string _sep2 = NULL;
      modelica_metatype _r = NULL;
      modelica_integer _n;
      modelica_integer _iter_1;
      modelica_integer _iter;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _s has no default value.
      // _f has no default value.
      // _sep1 has no default value.
      // _sep2 has no default value.
      // _r has no default value.
      // _n has no default value.
      // _iter_1 has no default value.
      // _iter has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          tmp3 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (!listEmpty(tmpMeta6)) goto tmp2_end;
          
          _s = tmpMeta5;
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _s);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (0 != tmp3_5) goto tmp2_end;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          
          _f = tmpMeta7;
          _r = tmpMeta8;
          _sep1 = tmp3_2;
          _sep2 = tmp3_3;
          _n = tmp3_4;
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _f);

          omc_Print_printBuf(threadData, _sep1);

          omc_Util_stringDelimitListAndSeparate2(threadData, _r, _sep1, _sep2, _n, ((modelica_integer) 1));
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta9 = MMC_CAR(tmp3_1);
          tmpMeta10 = MMC_CDR(tmp3_1);
          
          _f = tmpMeta9;
          _r = tmpMeta10;
          _sep1 = tmp3_2;
          _sep2 = tmp3_3;
          _n = tmp3_4;
          _iter = tmp3_5;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = modelica_integer_mod(_iter, _n);
          if (0 != tmp11) goto goto_1;

          _iter_1 = ((modelica_integer) 1) + _iter;

          omc_Print_printBuf(threadData, _f);

          omc_Print_printBuf(threadData, _sep1);

          omc_Print_printBuf(threadData, _sep2);

          omc_Util_stringDelimitListAndSeparate2(threadData, _r, _sep1, _sep2, _n, _iter_1);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta12 = MMC_CAR(tmp3_1);
          tmpMeta13 = MMC_CDR(tmp3_1);
          
          _f = tmpMeta12;
          _r = tmpMeta13;
          _sep1 = tmp3_2;
          _sep2 = tmp3_3;
          _n = tmp3_4;
          _iter = tmp3_5;
          /* Pattern matching succeeded */
          _iter_1 = ((modelica_integer) 1) + _iter;

          omc_Print_printBuf(threadData, _f);

          omc_Print_printBuf(threadData, _sep1);

          omc_Util_stringDelimitListAndSeparate2(threadData, _r, _sep1, _sep2, _n, _iter_1);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT39),stdout);
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
      if (++tmp3 < 6) {
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
PROTECTED_FUNCTION_STATIC void boxptr_Util_stringDelimitListAndSeparate2(threadData_t *threadData, modelica_metatype _inStringLst1, modelica_metatype _inString2, modelica_metatype _inString3, modelica_metatype _inInteger4, modelica_metatype _inInteger5)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_inInteger4);
  tmp2 = mmc_unbox_integer(_inInteger5);
  omc_Util_stringDelimitListAndSeparate2(threadData, _inStringLst1, _inString2, _inString3, tmp1, tmp2);
  return;
}

DLLDirection
modelica_string omc_Util_stringDelimitListAndSeparate(threadData_t *threadData, modelica_metatype _str, modelica_string _sep1, modelica_string _sep2, modelica_integer _n)
{
  modelica_string _res = NULL;
  modelica_integer _handle;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _handle has no default value.
  _handle = omc_Print_saveAndClearBuf(threadData);

  omc_Util_stringDelimitListAndSeparate2(threadData, _str, _sep1, _sep2, _n, ((modelica_integer) 0));

  _res = omc_Print_getString(threadData);

  omc_Print_restoreBuf(threadData, _handle);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_stringDelimitListAndSeparate(threadData_t *threadData, modelica_metatype _str, modelica_metatype _sep1, modelica_metatype _sep2, modelica_metatype _n)
{
  modelica_integer tmp1;
  modelica_string _res = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _res = omc_Util_stringDelimitListAndSeparate(threadData, _str, _sep1, _sep2, tmp1);
  /* skip box _res; String */
  return _res;
}

DLLDirection
void omc_Util_stringDelimitListPrintBuf(threadData_t *threadData, modelica_metatype _inStringLst, modelica_string _inDelimiter)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inStringLst;
    {
      modelica_string _f = NULL;
      modelica_metatype _r = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _f has no default value.
      // _r has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (!listEmpty(tmpMeta6)) goto tmp2_end;
          _f = tmpMeta5;
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _f);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          _f = tmpMeta7;
          _r = tmpMeta8;
          /* Pattern matching succeeded */
          omc_Util_stringDelimitListPrintBuf(threadData, _r, _inDelimiter);

          omc_Print_printBuf(threadData, _f);

          omc_Print_printBuf(threadData, _inDelimiter);
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
      if (++tmp3 < 3) {
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

DLLDirection
modelica_boolean omc_Util_stringContainsChar(threadData_t *threadData, modelica_string _str, modelica_string _char)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* matchcontinue expression */
    {
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
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = omc_Util_stringSplitAtChar(threadData, _str, _char);
          if (listEmpty(tmpMeta6)) goto goto_2;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          if (listEmpty(tmpMeta8)) goto goto_2;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_stringContainsChar(threadData_t *threadData, modelica_metatype _str, modelica_metatype _char)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_Util_stringContainsChar(threadData, _str, _char);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_Util_tuple62(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple61(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple55(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple54(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple53(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple52(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple51(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple44(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple43(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple42(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple41(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple33(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inValue;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple32(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inValue;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple31(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inValue;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple312(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outTuple = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTuple has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _e1 = tmpMeta2;
  _e2 = tmpMeta3;

  tmpMeta4 = mmc_mk_box2(0, _e1, _e2);
  _outTuple = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outTuple;
}

DLLDirection
modelica_metatype omc_Util_optTuple22(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  _outValue = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple22(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_metatype omc_Util_tuple21(threadData_t *threadData, modelica_metatype _inTuple)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_boolean omc_Util_compareTuple2IntLt(threadData_t *threadData, modelica_metatype _inTplA, modelica_metatype _inTplB)
{
  modelica_boolean _res;
  modelica_integer _a;
  modelica_integer _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _a has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTplA;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _a = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _inTplB;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _b = tmp6  /* pattern as ty=Integer */;

  _res = (_a < _b);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_compareTuple2IntLt(threadData_t *threadData, modelica_metatype _inTplA, modelica_metatype _inTplB)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_Util_compareTuple2IntLt(threadData, _inTplA, _inTplB);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_Util_compareTuple2IntGt(threadData_t *threadData, modelica_metatype _inTplA, modelica_metatype _inTplB)
{
  modelica_boolean _res;
  modelica_integer _a;
  modelica_integer _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _a has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTplA;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _a = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _inTplB;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _b = tmp6  /* pattern as ty=Integer */;

  _res = (_a > _b);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_compareTuple2IntGt(threadData_t *threadData, modelica_metatype _inTplA, modelica_metatype _inTplB)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_Util_compareTuple2IntGt(threadData, _inTplA, _inTplB);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_Util_compareTupleIntLt(threadData_t *threadData, modelica_metatype _inTplA, modelica_metatype _inTplB)
{
  modelica_boolean _res;
  modelica_integer _a;
  modelica_integer _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _a has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTplA;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _a = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _inTplB;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _b = tmp6  /* pattern as ty=Integer */;

  _res = (_a < _b);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_compareTupleIntLt(threadData_t *threadData, modelica_metatype _inTplA, modelica_metatype _inTplB)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_Util_compareTupleIntLt(threadData, _inTplA, _inTplB);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_Util_compareTupleIntGt(threadData_t *threadData, modelica_metatype _inTplA, modelica_metatype _inTplB)
{
  modelica_boolean _res;
  modelica_integer _a;
  modelica_integer _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _a has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTplA;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _a = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _inTplB;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _b = tmp6  /* pattern as ty=Integer */;

  _res = (_a > _b);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Util_compareTupleIntGt(threadData_t *threadData, modelica_metatype _inTplA, modelica_metatype _inTplB)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_Util_compareTupleIntGt(threadData, _inTplA, _inTplB);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_string omc_Util_selectFirstNonEmptyString(threadData_t *threadData, modelica_metatype _inStrings)
{
  modelica_string _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  {
    modelica_metatype _e;
    for (tmpMeta1 = _inStrings; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      if((!stringEqual(_e, _OMC_LIT6)))
      {
        _outResult = _e;

        goto _return;
      }
    }
  }

  _outResult = _OMC_LIT6;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLDirection
modelica_string omc_Util_flagValue(threadData_t *threadData, modelica_string _flag, modelica_metatype _arguments)
{
  modelica_string _flagVal = NULL;
  modelica_string _arg = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _flagVal has no default value.
  // _arg has no default value.
  _rest = _arguments;
  while(1)
  {
    if(!(!listEmpty(_rest))) break;
    /* Pattern-matching assignment */
    tmpMeta1 = _rest;
    if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_CAR(tmpMeta1);
    tmpMeta3 = MMC_CDR(tmpMeta1);
    _arg = tmpMeta2;
    _rest = tmpMeta3;

    if((stringEqual(_arg, _flag)))
    {
      break;
    }
  }

  _flagVal = (listEmpty(_rest)?_OMC_LIT6:listHead(_rest));
  _return: OMC_LABEL_UNUSED
  return _flagVal;
}

DLLDirection
modelica_string omc_Util_linuxDotSlash(threadData_t *threadData)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _str = _OMC_LIT40;

  _str = (((stringEqual(_str, _OMC_LIT40)) || (stringEqual(_str, _OMC_LIT41)))?_OMC_LIT42:_OMC_LIT6);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_boolean omc_Util_isRealGreater(threadData_t *threadData, modelica_real _lhs, modelica_real _rhs)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (_lhs > _rhs);
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Util_isRealGreater(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_real(_lhs);
  tmp2 = mmc_unbox_real(_rhs);
  _b = omc_Util_isRealGreater(threadData, tmp1, tmp2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_Util_isIntGreater(threadData_t *threadData, modelica_integer _lhs, modelica_integer _rhs)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (_lhs > _rhs);
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Util_isIntGreater(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_lhs);
  tmp2 = mmc_unbox_integer(_rhs);
  _b = omc_Util_isIntGreater(threadData, tmp1, tmp2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

