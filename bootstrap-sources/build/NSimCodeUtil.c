#include "omc_simulation_settings.h"
#include "NSimCodeUtil.h"
#include "util/modelica.h"

#include "NSimCodeUtil_includes.h"



DLLDirection
modelica_metatype omc_NSimCodeUtil_convertSimCodeMap(threadData_t *threadData, modelica_metatype _simcode_map)
{
  modelica_metatype _old_ht = NULL;
  modelica_metatype _vars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _old_ht has no default value.
  _vars = omc_UnorderedMap_valueList(threadData, _simcode_map);
  _old_ht = omc_HashTableCrefSimVar_emptyHashTableSized(threadData, omc_UnorderedMap_size(threadData, _simcode_map));

  _old_ht = omc_List_fold(threadData, omc_NSimVar_SimVar_convertList(threadData, _vars), boxvar_HashTableCrefSimVar_addSimVarToHashTable, _old_ht);
  _return: OMC_LABEL_UNUSED
  return _old_ht;
}

DLLDirection
modelica_metatype omc_NSimCodeUtil_addListSimCodeMap(threadData_t *threadData, modelica_metatype _simVars, modelica_metatype __omcQ_24in_5Fsimcode_5Fmap)
{
  modelica_metatype _simcode_map = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _simcode_map = __omcQ_24in_5Fsimcode_5Fmap;
  {
    modelica_metatype _var;
    for (tmpMeta1 = _simVars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      omc_UnorderedMap_add(threadData, omc_NSimVar_SimVar_getName(threadData, _var), _var, _simcode_map);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _simcode_map;
}

DLLDirection
modelica_metatype omc_NSimCodeUtil_createSimCodeMap(threadData_t *threadData, modelica_metatype _simVars, modelica_metatype _extObjInfo)
{
  modelica_metatype _simcode_map = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _simcode_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 2))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 3))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 4))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 5))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 6))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 7))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 10))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 11))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 12))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 13))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 14))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 17))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 18))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 19))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 8))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 20))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 15))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 22))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 23))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 24))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 25))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 26))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 28))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 29))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 30))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 31))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 32))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 33))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 34))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 35))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 36))), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_extObjInfo), 2))), _simcode_map);
  _return: OMC_LABEL_UNUSED
  return _simcode_map;
}

