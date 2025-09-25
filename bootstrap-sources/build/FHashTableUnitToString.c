#include "omc_simulation_settings.h"
#include "FHashTableUnitToString.h"
#include "util/modelica.h"

#include "FHashTableUnitToString_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_FHashTableUnitToString_id(threadData_t *threadData, modelica_string _inStr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FHashTableUnitToString_id,2,0) {(void*) boxptr_FHashTableUnitToString_id,0}};
#define boxvar_FHashTableUnitToString_id MMC_REFSTRUCTLIT(boxvar_lit_FHashTableUnitToString_id)

DLLDirection
modelica_metatype omc_FHashTableUnitToString_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_FUnit_hashUnit, boxvar_FUnit_unitEqual, boxvar_FUnit_unit2string, boxvar_FHashTableUnitToString_id);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_FHashTableUnitToString_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_FHashTableUnitToString_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<FUnit.Unit, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<FUnit.Unit, String>>>>, #Integer, tuple<.FHashTableUnitToString.FuncHashKey<function>(FUnit.Unit cr) => #Integer, .FHashTableUnitToString.FuncKeyEqual<function>(FUnit.Unit cr1, FUnit.Unit cr2) => #Boolean, .FHashTableUnitToString.FuncKeyStr<function>(FUnit.Unit cr) => String, .FHashTableUnitToString.FuncValueStr<function>(String exp) => String>> */
  return _hashTable;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_FHashTableUnitToString_id(threadData_t *threadData, modelica_string _inStr)
{
  modelica_string _outStr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  _outStr = _inStr;
  _return: OMC_LABEL_UNUSED
  return _outStr;
}

DLLDirection
modelica_metatype omc_FHashTableUnitToString_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_FHashTableUnitToString_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

