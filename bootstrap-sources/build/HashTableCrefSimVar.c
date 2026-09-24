#include "omc_simulation_settings.h"
#include "HashTableCrefSimVar.h"
#define _OMC_LIT0_data "function addSimVarToHashTable failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,36,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "HashTableCrefSimVar.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,22,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,0.0);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(145)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(145)),MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "#SimVar(index="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,14,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ",name="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,6,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ")#"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#include "util/modelica.h"

#include "HashTableCrefSimVar_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_HashTableCrefSimVar_opaqueStr(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrefSimVar_opaqueStr,2,0) {(void*) boxptr_HashTableCrefSimVar_opaqueStr,0}};
#define boxvar_HashTableCrefSimVar_opaqueStr MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrefSimVar_opaqueStr)

DLLModelDirection
modelica_metatype omc_HashTableCrefSimVar_addSimVarToHashTable(threadData_t *threadData, modelica_metatype _simvarIn, modelica_metatype _inHT)
{
  modelica_metatype _outHT = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHT has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _simvarIn;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _acr = NULL;
      modelica_metatype _sv = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _acr has no default value.
      // _sv has no default value.
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
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 15);
          if (!optionNone(tmpMeta7)) goto tmp3_end;
          
          _sv = tmp4_1;
          _cr = tmpMeta6;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta8 = omc_mk_box2(0, _cr, _sv);
          tmpMeta1 = omc_BaseHashTable_add(threadData, tmpMeta8, _inHT);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 15);
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 1);
          
          _sv = tmp4_1;
          _cr = tmpMeta9;
          _acr = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = omc_mk_box2(0, _acr, _sv);
          _outHT = omc_BaseHashTable_add(threadData, tmpMeta12, _inHT);
          tmpMeta13 = omc_mk_box2(0, _cr, _sv);
          tmpMeta1 = omc_BaseHashTable_add(threadData, tmpMeta13, _outHT);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT0, _OMC_LIT2);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outHT = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outHT;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HashTableCrefSimVar_opaqueStr(threadData_t *threadData, modelica_metatype _var)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmp1 = modelica_integer_to_modelica_string(omc_unbox_integer((OMC_BOX_FIELD(_var, 7))), ((modelica_integer) 0), 1 /* true */);
  tmp2 = stringAppend(_OMC_LIT3,tmp1);
  tmp3 = stringAppend(tmp2,_OMC_LIT4);
  tmp4 = stringAppend(tmp3,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
  tmp5 = stringAppend(tmp4,_OMC_LIT5);
  omc_string_store(&(_str), tmp5);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_HashTableCrefSimVar_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = omc_mk_box4(0, boxvar_ComponentReferenceBasics_hashComponentRef, boxvar_ComponentReferenceBasics_crefEqual, boxvar_ComponentReferenceBasics_printComponentRefStr, boxvar_HashTableCrefSimVar_opaqueStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hashTable;
  return omc_ret_;
}
modelica_metatype boxptr_HashTableCrefSimVar_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = omc_unbox_integer(_size);
  _hashTable = omc_HashTableCrefSimVar_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, SimCodeVar.SimVar>>>>, #Integer, tuple<.HashTableCrefSimVar.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrefSimVar.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrefSimVar.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrefSimVar.FuncExpStr<function>(SimCodeVar.SimVar exp) => String>> */
  return _hashTable;
}

DLLModelDirection
modelica_metatype omc_HashTableCrefSimVar_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableCrefSimVar_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hashTable;
  return omc_ret_;
}

