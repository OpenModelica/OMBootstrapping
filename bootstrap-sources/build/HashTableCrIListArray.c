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



DLLModelDirection
modelica_string omc_HashTableCrIListArray_printIntListArrayStr(threadData_t *threadData, modelica_metatype _iValue)
{
  modelica_string _res = NULL;
  modelica_metatype _iList = NULL;
  modelica_metatype _iArray = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _iList has no default value.
  // _iArray has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iValue;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 2);
  _iList = tmpMeta2;
  _iArray = tmpMeta3;

  tmp4 = stringAppend(_OMC_LIT0,stringDelimitList(omc_List_map(threadData, _iList, boxvar_intString), _OMC_LIT1));
  tmp5 = stringAppend(tmp4,_OMC_LIT2);
  tmp6 = stringAppend(tmp5,stringDelimitList(omc_List_mapArray(threadData, _iArray, boxvar_intString), _OMC_LIT1));
  tmp7 = stringAppend(tmp6,_OMC_LIT3);
  omc_string_store(&(_res), tmp7);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_HashTableCrIListArray_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = omc_mk_box4(0, boxvar_ComponentReferenceBasics_hashComponentRef, boxvar_ComponentReferenceBasics_crefEqual, boxvar_ComponentReferenceBasics_printComponentRefStr, boxvar_HashTableCrIListArray_printIntListArrayStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hashTable;
  return omc_ret_;
}
modelica_metatype boxptr_HashTableCrIListArray_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = omc_unbox_integer(_size);
  _hashTable = omc_HashTableCrIListArray_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<list<#Integer>, array<#Integer>>>>>>, #Integer, tuple<.HashTableCrIListArray.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrIListArray.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrIListArray.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrIListArray.FuncExpStr<function>(tuple<list<#Integer>, array<#Integer>> exp) => String>> */
  return _hashTable;
}

DLLModelDirection
modelica_metatype omc_HashTableCrIListArray_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableCrIListArray_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hashTable;
  return omc_ret_;
}

