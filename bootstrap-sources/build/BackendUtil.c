#include "omc_simulation_settings.h"
#include "BackendUtil.h"
#define _OMC_LIT0_data "der("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "$DER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "pre("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,4,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "BackendUtil.modelicaStringToCStr1 failed for str:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,49,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "$P"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,3,3) {&BackendUtil_ReplacePattern_REPLACEPATTERN__desc,_OMC_LIT8,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "$lB"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,3,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,3,3) {&BackendUtil_ReplacePattern_REPLACEPATTERN__desc,_OMC_LIT11,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,1,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "$rB"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,3,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,3,3) {&BackendUtil_ReplacePattern_REPLACEPATTERN__desc,_OMC_LIT14,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "$lP"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,3,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,3,3) {&BackendUtil_ReplacePattern_REPLACEPATTERN__desc,_OMC_LIT17,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "$rP"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,3,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,3,3) {&BackendUtil_ReplacePattern_REPLACEPATTERN__desc,_OMC_LIT4,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,1,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "$c"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,2,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,3,3) {&BackendUtil_ReplacePattern_REPLACEPATTERN__desc,_OMC_LIT22,_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,1,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "$a"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,2,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,3,3) {&BackendUtil_ReplacePattern_REPLACEPATTERN__desc,_OMC_LIT25,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,1) {_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,1) {_OMC_LIT24,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,1) {_OMC_LIT21,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,1) {_OMC_LIT19,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,1) {_OMC_LIT16,_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,1) {_OMC_LIT13,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,1) {_OMC_LIT10,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#include "util/modelica.h"

#include "BackendUtil_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_BackendUtil_modelicaStringToCStr2(threadData_t *threadData, modelica_string _inDerName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendUtil_modelicaStringToCStr2,2,0) {(void*) boxptr_BackendUtil_modelicaStringToCStr2,0}};
#define boxvar_BackendUtil_modelicaStringToCStr2 MMC_REFSTRUCTLIT(boxvar_lit_BackendUtil_modelicaStringToCStr2)
PROTECTED_FUNCTION_STATIC modelica_string omc_BackendUtil_modelicaStringToCStr1(threadData_t *threadData, modelica_string _inString, modelica_metatype _inReplacePatternLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendUtil_modelicaStringToCStr1,2,0) {(void*) boxptr_BackendUtil_modelicaStringToCStr1,0}};
#define boxvar_BackendUtil_modelicaStringToCStr1 MMC_REFSTRUCTLIT(boxvar_lit_BackendUtil_modelicaStringToCStr1)

PROTECTED_FUNCTION_STATIC modelica_string omc_BackendUtil_modelicaStringToCStr2(threadData_t *threadData, modelica_string _inDerName)
{
  modelica_string _outDerName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDerName has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;
    tmp4_1 = _inDerName;
    {
      modelica_string _name = NULL;
      modelica_string _derName = NULL;
      modelica_metatype _names = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _derName has no default value.
      // _names has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          _derName = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_System_strncmp(threadData, _derName, _OMC_LIT0, ((modelica_integer) 4));
          if (0 != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta7 = omc_System_strtok(threadData, _derName, _OMC_LIT1);
          if (listEmpty(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          _names = tmpMeta9;

          _names = omc_List_map1(threadData, _names, boxvar_BackendUtil_modelicaStringToCStr, mmc_mk_boolean(0 /* false */));
          tmpMeta10 = stringAppend(_OMC_LIT2,stringAppendList(_names));
          tmp1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          
          _derName = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = omc_System_strncmp(threadData, _derName, _OMC_LIT3, ((modelica_integer) 4));
          if (0 != tmp11) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta12 = omc_System_strtok(threadData, _derName, _OMC_LIT1);
          if (listEmpty(tmpMeta12)) goto goto_2;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (listEmpty(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          _name = tmpMeta15;
          tmpMeta17 = stringAppend(_OMC_LIT3,omc_BackendUtil_modelicaStringToCStr(threadData, _name, 0 /* false */));
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT4);
          tmp1 = tmpMeta18;
          goto tmp3_done;
        }
        case 2: {
          
          _derName = tmp4_1;
          /* Pattern matching succeeded */
          tmp1 = omc_BackendUtil_modelicaStringToCStr(threadData, _derName, 0 /* false */);
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
  _outDerName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outDerName;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_BackendUtil_modelicaStringToCStr1(threadData_t *threadData, modelica_string _inString, modelica_metatype _inReplacePatternLst)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inString;
    tmp4_2 = _inReplacePatternLst;
    {
      modelica_string _str = NULL;
      modelica_string _str_1 = NULL;
      modelica_string _from = NULL;
      modelica_string _to = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _str has no default value.
      // _str_1 has no default value.
      // _from has no default value.
      // _to has no default value.
      // _res has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          _str = tmp4_1;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _str;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _from = tmpMeta8;
          _to = tmpMeta9;
          _res = tmpMeta7;
          _str = tmp4_1;
          /* Pattern matching succeeded */
          _str_1 = omc_BackendUtil_modelicaStringToCStr1(threadData, _str, _res);
          tmp1 = omc_System_stringReplace(threadData, _str_1, _from, _to);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT5,_inString);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT6);
          fputs(MMC_STRINGDATA(tmpMeta11),stdout);
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_BackendUtil_modelicaStringToCStr(threadData_t *threadData, modelica_string _str, modelica_boolean _changeDerCall)
{
  modelica_string _res_str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res_str has no default value.
  { /* match expression */
    modelica_string tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _str;
    tmp4_2 = _changeDerCall;
    {
      modelica_string _s = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT7,omc_BackendUtil_modelicaStringToCStr1(threadData, _str, _OMC_LIT34));
          tmp1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          
          _s = tmp4_1;
          /* Pattern matching succeeded */
          tmp1 = omc_BackendUtil_modelicaStringToCStr2(threadData, _s);
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
  _res_str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res_str;
}
modelica_metatype boxptr_BackendUtil_modelicaStringToCStr(threadData_t *threadData, modelica_metatype _str, modelica_metatype _changeDerCall)
{
  modelica_integer tmp1;
  modelica_string _res_str = NULL;
  tmp1 = mmc_unbox_integer(_changeDerCall);
  _res_str = omc_BackendUtil_modelicaStringToCStr(threadData, _str, tmp1);
  /* skip box _res_str; String */
  return _res_str;
}

