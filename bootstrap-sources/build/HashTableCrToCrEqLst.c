#include "omc_simulation_settings.h"
#include "HashTableCrToCrEqLst.h"
#define _OMC_LIT0_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#include "util/modelica.h"

#include "HashTableCrToCrEqLst_includes.h"



DLLDirection
modelica_string omc_HashTableCrToCrEqLst_printTupleComponentRefEqStr(threadData_t *threadData, modelica_metatype _cr_eq)
{
  modelica_string _res = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _cr has no default value.
  // _eq has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _cr_eq;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _cr = tmpMeta2;
  _eq = tmpMeta3;

  tmpMeta4 = stringAppend(_OMC_LIT0,omc_ComponentReference_printComponentRefStr(threadData, _cr));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT1);
  tmpMeta6 = stringAppend(tmpMeta5,omc_BackendDump_equationString(threadData, _eq));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
  _res = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_string omc_HashTableCrToCrEqLst_printTupleComponentRefEqListStr(threadData_t *threadData, modelica_metatype _cr_eq_lst)
{
  modelica_string _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = stringDelimitList(omc_List_map(threadData, _cr_eq_lst, boxvar_HashTableCrToCrEqLst_printTupleComponentRefEqStr), _OMC_LIT1);
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_HashTableCrToCrEqLst_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, boxvar_ComponentReference_printComponentRefStr, boxvar_HashTableCrToCrEqLst_printTupleComponentRefEqListStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTableCrToCrEqLst_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTableCrToCrEqLst_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, list<tuple<DAE.ComponentRef, BackendDAE.Equation>>>>>>, #Integer, tuple<.HashTableCrToCrEqLst.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrToCrEqLst.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrToCrEqLst.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrToCrEqLst.FuncExpStr<function>(list<tuple<DAE.ComponentRef, BackendDAE.Equation>> exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTableCrToCrEqLst_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableCrToCrEqLst_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

