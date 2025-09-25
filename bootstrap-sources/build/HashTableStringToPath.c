#include "omc_simulation_settings.h"
#include "HashTableStringToPath.h"
#include "util/modelica.h"

#include "HashTableStringToPath_includes.h"



DLLDirection
modelica_metatype omc_HashTableStringToPath_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_stringHashDjb2, boxvar_stringEq, boxvar_Util_id, boxvar_AbsynUtil_pathStringDefault);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTableStringToPath_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTableStringToPath_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<String, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<String, Absyn.Path>>>>, #Integer, tuple<.HashTableStringToPath.FuncHashCref<function>(String cr) => #Integer, .HashTableStringToPath.FuncCrefEqual<function>(String cr1, String cr2) => #Boolean, .HashTableStringToPath.FuncCrefStr<function>(String cr) => String, .HashTableStringToPath.FuncExpStr<function>(Absyn.Path exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTableStringToPath_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableStringToPath_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

