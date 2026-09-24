#include "omc_simulation_settings.h"
#include "GlobalScriptDump.h"
#define _OMC_LIT0_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,2,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "AST\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,4,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,0,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "printIstmtStr: unknown"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,22,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "; "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "printIstmtsStr: unknown"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,23,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#include "util/modelica.h"

#include "GlobalScriptDump_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_GlobalScriptDump_classString(threadData_t *threadData, modelica_metatype _cl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GlobalScriptDump_classString,2,0) {(void*) boxptr_GlobalScriptDump_classString,0}};
#define boxvar_GlobalScriptDump_classString MMC_REFSTRUCTLIT(boxvar_lit_GlobalScriptDump_classString)

PROTECTED_FUNCTION_STATIC modelica_string omc_GlobalScriptDump_classString(threadData_t *threadData, modelica_metatype _cl)
{
  modelica_string _s = NULL;
  modelica_string _id = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  // _id has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _cl;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _id = tmpMeta2;

  tmp3 = stringAppend(_id,_OMC_LIT0);
  tmp4 = stringAppend(tmp3,omc_AbsynUtil_classFilename(threadData, _cl));
  omc_string_store(&(_s), tmp4);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _s;
  return omc_ret_;
}

DLLModelDirection
void omc_GlobalScriptDump_printGlobalScript(threadData_t *threadData, modelica_metatype _st)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(omc_string_data(_OMC_LIT1),stdout);

  omc_GlobalScriptDump_printAST(threadData, (OMC_BOX_FIELD(_st, 2)));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_GlobalScriptDump_printAST(threadData_t *threadData, modelica_metatype _pr)
{
  modelica_string _s = NULL;
  modelica_metatype _class_ = NULL;
  modelica_metatype _classes = NULL;
  modelica_metatype _within_ = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = _OMC_LIT2;
  // _class_ has no default value.
  // _classes has no default value.
  // _within_ has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _pr;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  _classes = tmpMeta2;
  _within_ = tmpMeta3;

  {
    modelica_metatype _class_;
    for (tmpMeta4 = _classes; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _class_ = MMC_CAR(tmpMeta4);
      tmp5 = stringAppend(_s,omc_GlobalScriptDump_classString(threadData, _class_));
      tmp6 = stringAppend(tmp5,_OMC_LIT3);
      omc_string_store(&(_s), tmp6);
    }
  }

  fputs(omc_string_data(_s),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_string omc_GlobalScriptDump_printIstmtStr(threadData_t *threadData, modelica_metatype _inStatement)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inStatement;
    {
      modelica_metatype _alg = NULL;
      modelica_metatype _expr = NULL;
      int tmp4;
      // _alg has no default value.
      // _expr has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          _alg = tmpMeta5;
          /* Pattern matching succeeded */
          tmp1 = omc_Dump_unparseAlgorithmStr(threadData, _alg);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _expr = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_Dump_printExpStr(threadData, _expr);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT4;
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
modelica_string omc_GlobalScriptDump_printIstmtsStr(threadData_t *threadData, modelica_metatype _inStatements)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inStatements;
    {
      modelica_metatype _stmts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _stmts has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _stmts = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = stringDelimitList(omc_List_map(threadData, _stmts, boxvar_GlobalScriptDump_printIstmtStr), _OMC_LIT5);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT6;
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

