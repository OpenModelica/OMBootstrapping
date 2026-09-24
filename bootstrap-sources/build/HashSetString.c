#include "omc_simulation_settings.h"
#include "HashSetString.h"
#include "util/modelica.h"

#include "HashSetString_includes.h"



DLLModelDirection
modelica_metatype omc_HashSetString_emptyHashSetSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashSet = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashSet has no default value.
  tmpMeta1 = omc_mk_box3(0, boxvar_stringHashDjb2, boxvar_stringEq, boxvar_Util_id);
  _hashSet = omc_BaseHashSet_emptyHashSetWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hashSet;
  return omc_ret_;
}
modelica_metatype boxptr_HashSetString_emptyHashSetSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashSet = NULL;
  tmp1 = omc_unbox_integer(_size);
  _hashSet = omc_HashSetString_emptyHashSetSized(threadData, tmp1);
  /* skip box _hashSet; tuple<array<list<tuple<String, #Integer>>>, tuple<#Integer, #Integer, array<Option<String>>>, #Integer, #Integer, tuple<.HashSetString.FuncHashCref<function>(String cr) => #Integer, .HashSetString.FuncCrefEqual<function>(String cr1, String cr2) => #Boolean, .HashSetString.FuncCrefStr<function>(String cr) => String>> */
  return _hashSet;
}

DLLModelDirection
modelica_metatype omc_HashSetString_emptyHashSet(threadData_t *threadData)
{
  modelica_metatype _hashSet = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashSet has no default value.
  _hashSet = omc_HashSetString_emptyHashSetSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hashSet;
  return omc_ret_;
}

