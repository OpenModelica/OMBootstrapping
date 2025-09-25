#include "omc_simulation_settings.h"
#include "HashTableCrIListArray.h"
#define _OMC_LIT0_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "] {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,3,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#include "util/modelica.h"

#include "HashTableCrIListArray_includes.h"



DLLDirection
modelica_string omc_HashTableCrIListArray_printIntListArrayStr(threadData_t *threadData, modelica_metatype _iValue)
{
  modelica_string _res = NULL;
  modelica_metatype _iList = NULL;
  modelica_metatype _iArray = NULL;
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
  // _iList has no default value.
  // _iArray has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iValue;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _iList = tmpMeta2;
  _iArray = tmpMeta3;

  tmpMeta4 = stringAppend(_OMC_LIT0,stringDelimitList(omc_List_map(threadData, _iList, boxvar_intString), _OMC_LIT1));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT2);
  tmpMeta6 = stringAppend(tmpMeta5,stringDelimitList(omc_List_map(threadData, arrayList(_iArray), boxvar_intString), _OMC_LIT1));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT3);
  _res = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_HashTableCrIListArray_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, boxvar_ComponentReference_printComponentRefStr, boxvar_HashTableCrIListArray_printIntListArrayStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTableCrIListArray_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTableCrIListArray_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<list<#Integer>, array<#Integer>>>>>>, #Integer, tuple<.HashTableCrIListArray.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrIListArray.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrIListArray.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrIListArray.FuncExpStr<function>(tuple<list<#Integer>, array<#Integer>> exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTableCrIListArray_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableCrIListArray_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

