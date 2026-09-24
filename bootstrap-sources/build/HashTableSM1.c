#include "omc_simulation_settings.h"
#include "HashTableSM1.h"
#define _OMC_LIT0_data "SMNODE("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,7,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,5,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "EDGES("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,6,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "))\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,3,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#include "util/modelica.h"

#include "HashTableSM1_includes.h"



DLLModelDirection
modelica_string omc_HashTableSM1_modeStr(threadData_t *threadData, modelica_metatype _mode)
{
  modelica_string _s = NULL;
  modelica_metatype _componentRef = NULL;
  modelica_boolean _isInitial;
  modelica_metatype _edges = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype _paths = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  // _componentRef has no default value.
  // _isInitial has no default value.
  // _edges has no default value.
  // _crefs has no default value.
  // _paths has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _mode;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp4 = omc_unbox_integer(tmpMeta3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  _componentRef = tmpMeta2;
  _isInitial = tmp4  /* pattern as ty=Boolean */;
  _edges = tmpMeta5;

  _crefs = omc_BaseHashSet_hashSetList(threadData, _edges);

  _paths = omc_List_map(threadData, _crefs, boxvar_ComponentReferenceBasics_printComponentRefStr);

  tmp6 = stringAppend(_OMC_LIT0,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _componentRef));
  tmp7 = stringAppend(tmp6,_OMC_LIT1);
  tmp8 = stringAppend(tmp7,(_isInitial?_OMC_LIT2:_OMC_LIT3));
  tmp9 = stringAppend(tmp8,_OMC_LIT4);
  tmp10 = stringAppend(tmp9,_OMC_LIT5);
  tmp11 = stringAppend(tmp10,stringDelimitList(_paths, _OMC_LIT1));
  tmp12 = stringAppend(tmp11,_OMC_LIT6);
  omc_string_store(&(_s), tmp12);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _s;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_HashTableSM1_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = omc_mk_box4(0, boxvar_ComponentReferenceBasics_hashComponentRef, boxvar_ComponentReferenceBasics_crefEqual, boxvar_ComponentReferenceBasics_printComponentRefStr, boxvar_HashTableSM1_modeStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hashTable;
  return omc_ret_;
}
modelica_metatype boxptr_HashTableSM1_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = omc_unbox_integer(_size);
  _hashTable = omc_HashTableSM1_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, InstStateMachineUtil.SMNode>>>>, #Integer, tuple<.HashTableSM1.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableSM1.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableSM1.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableSM1.FuncExpStr<function>(InstStateMachineUtil.SMNode exp) => String>> */
  return _hashTable;
}

DLLModelDirection
modelica_metatype omc_HashTableSM1_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableSM1_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hashTable;
  return omc_ret_;
}

