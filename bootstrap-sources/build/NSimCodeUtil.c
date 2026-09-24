#include "omc_simulation_settings.h"
#include "NSimCodeUtil.h"
#include "util/modelica.h"

#include "NSimCodeUtil_includes.h"



DLLModelDirection
modelica_metatype omc_NSimCodeUtil_convertSimCodeMap(threadData_t *threadData, modelica_metatype _simcode_map, modelica_metatype _memo)
{
  modelica_metatype _old_ht = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _old_ht has no default value.
  _old_ht = omc_HashTableCrefSimVar_emptyHashTableSized(threadData, omc_UnorderedMap_size(threadData, _simcode_map));

  {
    modelica_metatype _var;
    for (tmpMeta1 = omc_UnorderedMap_valueList(threadData, _simcode_map); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      _old_ht = omc_HashTableCrefSimVar_addSimVarToHashTable(threadData, omc_NSimVar_SimVar_convertMemoized(threadData, _var, _memo), _old_ht);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _old_ht;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimCodeUtil_addListSimCodeMap(threadData_t *threadData, modelica_metatype _simVars, modelica_metatype __omcQ_24in_5Fsimcode_5Fmap)
{
  modelica_metatype _simcode_map = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
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
  omc_ret_ = _simcode_map;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimCodeUtil_createSimCodeMap(threadData_t *threadData, modelica_metatype _simVars, modelica_metatype _extObjInfo)
{
  modelica_metatype _simcode_map = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _simcode_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 2)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 3)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 4)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 5)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 6)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 7)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 10)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 11)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 12)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 13)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 14)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 17)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 18)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 19)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 8)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 20)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 15)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 22)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 23)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 24)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 25)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 26)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 28)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 29)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 30)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 31)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 32)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 33)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 34)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 35)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_simVars, 36)), _simcode_map);

  omc_NSimCodeUtil_addListSimCodeMap(threadData, (OMC_BOX_FIELD(_extObjInfo, 2)), _simcode_map);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _simcode_map;
  return omc_ret_;
}

