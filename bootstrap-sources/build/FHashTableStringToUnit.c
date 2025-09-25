#include "omc_simulation_settings.h"
#include "FHashTableStringToUnit.h"
#include "util/modelica.h"

#include "FHashTableStringToUnit_includes.h"



DLLDirection
modelica_metatype omc_FHashTableStringToUnit_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_stringHashDjb2, boxvar_stringEq, boxvar_Util_id, boxvar_FUnit_unit2string);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_FHashTableStringToUnit_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_FHashTableStringToUnit_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<String, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<String, FUnit.Unit>>>>, #Integer, tuple<.FHashTableStringToUnit.FuncHashKey<function>(String cr) => #Integer, .FHashTableStringToUnit.FuncKeyEqual<function>(String cr1, String cr2) => #Boolean, .FHashTableStringToUnit.FuncKeyStr<function>(String cr) => String, .FHashTableStringToUnit.FuncValueStr<function>(FUnit.Unit exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_FHashTableStringToUnit_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_FHashTableStringToUnit_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

