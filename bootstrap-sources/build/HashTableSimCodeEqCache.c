#include "omc_simulation_settings.h"
#include "HashTableSimCodeEqCache.h"
#include "util/modelica.h"

#include "HashTableSimCodeEqCache_includes.h"



DLLDirection
modelica_metatype omc_HashTableSimCodeEqCache_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_SimCodeUtil_hashEqSystem, boxvar_SimCodeUtil_compareEqSystemsEquality, boxvar_SimCodeUtil_simEqSystemString, boxvar_intString);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTableSimCodeEqCache_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTableSimCodeEqCache_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<SimCode.SimEqSystem, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<SimCode.SimEqSystem, #Integer>>>>, #Integer, tuple<.HashTableSimCodeEqCache.FuncHashCref<function>(SimCode.SimEqSystem cr) => #Integer, .HashTableSimCodeEqCache.FuncCrefEqual<function>(SimCode.SimEqSystem cr1, SimCode.SimEqSystem cr2) => #Boolean, .HashTableSimCodeEqCache.FuncCrefStr<function>(SimCode.SimEqSystem cr) => String, .HashTableSimCodeEqCache.FuncExpStr<function>(#Integer exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTableSimCodeEqCache_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableSimCodeEqCache_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

