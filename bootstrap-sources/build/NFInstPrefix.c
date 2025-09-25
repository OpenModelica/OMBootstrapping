#include "omc_simulation_settings.h"
#include "NFInstPrefix.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,2,3) {&NFInstPrefix_Prefix_EMPTY__PREFIX__desc,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "E()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "E("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#include "util/modelica.h"

#include "NFInstPrefix_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInstPrefix_fromStringList2(threadData_t *threadData, modelica_metatype _inStrings, modelica_metatype _inPrefix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_fromStringList2,2,0) {(void*) boxptr_NFInstPrefix_fromStringList2,0}};
#define boxvar_NFInstPrefix_fromStringList2 MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_fromStringList2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInstPrefix_fromPath2(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inPrefix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_fromPath2,2,0) {(void*) boxptr_NFInstPrefix_fromPath2,0}};
#define boxvar_NFInstPrefix_fromPath2 MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_fromPath2)

DLLDirection
modelica_metatype omc_NFInstPrefix_toPackagePrefix(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _name = NULL;
      modelica_metatype _dims = NULL;
      modelica_metatype _rest_prefix = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _dims has no default value.
      // _rest_prefix has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta6;
          _dims = tmpMeta7;
          _rest_prefix = tmpMeta8;
          /* Pattern matching succeeded */
          _rest_prefix = omc_NFInstPrefix_toPackagePrefix(threadData, _rest_prefix);
          tmpMeta9 = mmc_mk_box4(4, &NFInstPrefix_Prefix_PREFIX__desc, _name, _dims, _rest_prefix);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT0;
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
  _outPrefix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_boolean omc_NFInstPrefix_isPackagePrefix(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_boolean _outIsPackagePrefix;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsPackagePrefix has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_metatype _prefix = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _prefix has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _prefix = tmpMeta6;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inPrefix = _prefix;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!optionNone(tmpMeta7)) goto tmp3_end;
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
  _outIsPackagePrefix = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsPackagePrefix;
}
modelica_metatype boxptr_NFInstPrefix_isPackagePrefix(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_boolean _outIsPackagePrefix;
  modelica_metatype out_outIsPackagePrefix;
  _outIsPackagePrefix = omc_NFInstPrefix_isPackagePrefix(threadData, _inPrefix);
  out_outIsPackagePrefix = mmc_mk_icon(_outIsPackagePrefix);
  return out_outIsPackagePrefix;
}

DLLDirection
modelica_string omc_NFInstPrefix_toStrWithEmpty(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_string _outStr = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _name = NULL;
      modelica_metatype _rest_prefix = NULL;
      modelica_metatype _path = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _rest_prefix has no default value.
      // _path has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _path = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT2,omc_AbsynUtil_pathLastIdent(threadData, _path));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT3);
          tmp1 = tmpMeta10;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta11;
          _rest_prefix = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(omc_NFInstPrefix_toStrWithEmpty(threadData, _rest_prefix),_OMC_LIT4);
          tmpMeta14 = stringAppend(tmpMeta13,_name);
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
  _outStr = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outStr;
}

DLLDirection
modelica_string omc_NFInstPrefix_toStr(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_string _outStr = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _name = NULL;
      modelica_metatype _rest_prefix = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _rest_prefix has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT5;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = _name;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta8;
          _rest_prefix = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(omc_NFInstPrefix_toStr(threadData, _rest_prefix),_OMC_LIT4);
          tmpMeta11 = stringAppend(tmpMeta10,_name);
          tmp1 = tmpMeta11;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInstPrefix_fromStringList2(threadData_t *threadData, modelica_metatype _inStrings, modelica_metatype _inPrefix)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inStrings;
    {
      modelica_metatype _strl = NULL;
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _strl has no default value.
      // _str has no default value.
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
          _str = tmpMeta6;
          _strl = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = mmc_mk_box4(4, &NFInstPrefix_Prefix_PREFIX__desc, _str, tmpMeta8, _inPrefix);
          /* Tail recursive call */
          _inStrings = _strl;
          _inPrefix = tmpMeta9;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inPrefix;
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
  _outPrefix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_fromStringList(threadData_t *threadData, modelica_metatype _inStrings)
{
  modelica_metatype _outPrefix = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  _outPrefix = omc_NFInstPrefix_fromStringList2(threadData, _inStrings, _OMC_LIT0);
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInstPrefix_fromPath2(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inPrefix)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPath;
    {
      modelica_metatype _path = NULL;
      modelica_string _name = NULL;
      int tmp4;
      // _path has no default value.
      // _name has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _name = tmpMeta5;
          _path = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_box4(4, &NFInstPrefix_Prefix_PREFIX__desc, _name, tmpMeta7, _inPrefix);
          /* Tail recursive call */
          _inPath = _path;
          _inPrefix = tmpMeta8;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _name = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box4(4, &NFInstPrefix_Prefix_PREFIX__desc, _name, tmpMeta10, _inPrefix);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _path = tmpMeta12;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inPath = _path;
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
  _outPrefix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_fromPath(threadData_t *threadData, modelica_metatype _inPath)
{
  modelica_metatype _outPrefix = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  _outPrefix = omc_NFInstPrefix_fromPath2(threadData, _inPath, _OMC_LIT0);
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_toPath(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_metatype _outPath = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPath has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _name = NULL;
      modelica_metatype _rest_prefix = NULL;
      modelica_metatype _path = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _rest_prefix has no default value.
      // _path has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _name);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta9;
          _rest_prefix = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _name);
          _path = tmpMeta11;
          tmpMeta1 = omc_NFInstPrefix_prefixPath(threadData, _path, _rest_prefix);
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
  _outPath = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPath;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_toCref(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_metatype _outCref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _name = NULL;
      modelica_metatype _rest_prefix = NULL;
      modelica_metatype _cref = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _rest_prefix has no default value.
      // _cref has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name, _OMC_LIT6, tmpMeta8);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta10;
          _rest_prefix = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name, _OMC_LIT6, tmpMeta12);
          _cref = tmpMeta13;
          tmpMeta1 = omc_NFInstPrefix_prefixCref(threadData, _cref, _rest_prefix);
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
  _outCref = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCref;
}

DLLDirection
modelica_string omc_NFInstPrefix_prefixStr(threadData_t *threadData, modelica_string _inString, modelica_metatype _inPrefix)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _str has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _inString;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _str = omc_NFInstPrefix_toStr(threadData, _inPrefix);
          tmpMeta6 = stringAppend(_str,_OMC_LIT4);
          tmpMeta7 = stringAppend(tmpMeta6,_inString);
          tmp1 = tmpMeta7;
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
modelica_metatype omc_NFInstPrefix_prefixPath(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inPrefix)
{
  modelica_metatype _outPath = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPath has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _name = NULL;
      modelica_metatype _rest_prefix = NULL;
      modelica_metatype _path = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _rest_prefix has no default value.
      // _path has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inPath;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta6;
          _rest_prefix = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box3(3, &Absyn_Path_QUALIFIED__desc, _name, _inPath);
          _path = tmpMeta8;
          /* Tail recursive call */
          _inPath = _path;
          _inPrefix = _rest_prefix;
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
  _outPath = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPath;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_prefixCref(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inPrefix)
{
  modelica_metatype _outCref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _name = NULL;
      modelica_metatype _rest_prefix = NULL;
      modelica_metatype _cref = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _rest_prefix has no default value.
      // _cref has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inCref;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta6;
          _rest_prefix = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _name, _OMC_LIT6, tmpMeta8, _inCref);
          _cref = tmpMeta9;
          /* Tail recursive call */
          _inCref = _cref;
          _inPrefix = _rest_prefix;
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
  _outCref = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCref;
}

DLLDirection
modelica_string omc_NFInstPrefix_firstName(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_string _outStr = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPrefix;
    {
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT5;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = _name;
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
modelica_metatype omc_NFInstPrefix_restPrefix(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_metatype _outRestPrefix = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRestPrefix has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inPrefix;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _outRestPrefix = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outRestPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_addStringList(threadData_t *threadData, modelica_metatype _inStrings, modelica_metatype _inPrefix)
{
  modelica_metatype _outPrefix = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  _outPrefix = omc_NFInstPrefix_fromStringList2(threadData, _inStrings, _inPrefix);
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_addString(threadData_t *threadData, modelica_string _inName, modelica_metatype _inPrefix)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box4(4, &NFInstPrefix_Prefix_PREFIX__desc, _inName, tmpMeta1, _inPrefix);
  _outPrefix = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_addOptPath(threadData_t *threadData, modelica_metatype _inOptPath, modelica_metatype _inPrefix)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOptPath;
    {
      modelica_metatype _p = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _p has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inPrefix;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _p = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstPrefix_addPath(threadData, _p, _inPrefix);
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
  _outPrefix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_addPath(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inPrefix)
{
  modelica_metatype _outPrefix = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  _outPrefix = omc_NFInstPrefix_fromPath2(threadData, _inPath, _inPrefix);
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_add(threadData_t *threadData, modelica_string _inName, modelica_metatype _inDimensions, modelica_metatype _inPrefix)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  tmpMeta1 = mmc_mk_box4(4, &NFInstPrefix_Prefix_PREFIX__desc, _inName, _inDimensions, _inPrefix);
  _outPrefix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_makeEmptyPrefix(threadData_t *threadData, modelica_metatype _inClassPath)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  tmpMeta1 = mmc_mk_box2(3, &NFInstPrefix_Prefix_EMPTY__PREFIX__desc, mmc_mk_some(_inClassPath));
  _outPrefix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

DLLDirection
modelica_metatype omc_NFInstPrefix_makePrefix(threadData_t *threadData, modelica_string _inName, modelica_metatype _inDims)
{
  modelica_metatype _outPrefix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPrefix has no default value.
  tmpMeta1 = mmc_mk_box4(4, &NFInstPrefix_Prefix_PREFIX__desc, _inName, _inDims, _OMC_LIT0);
  _outPrefix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPrefix;
}

