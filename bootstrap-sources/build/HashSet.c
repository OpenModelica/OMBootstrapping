#include "omc_simulation_settings.h"
#include "HashSet.h"
#include "util/modelica.h"

#include "HashSet_includes.h"



DLLDirection
modelica_metatype omc_HashSet_emptyHashSetSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashSet = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashSet has no default value.
  tmpMeta1 = mmc_mk_box3(0, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, boxvar_ComponentReference_printComponentRefStr);
  _hashSet = omc_BaseHashSet_emptyHashSetWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashSet;
}
modelica_metatype boxptr_HashSet_emptyHashSetSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashSet = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashSet = omc_HashSet_emptyHashSetSized(threadData, tmp1);
  /* skip box _hashSet; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<DAE.ComponentRef>>>, #Integer, #Integer, tuple<.HashSet.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashSet.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashSet.FuncCrefStr<function>(DAE.ComponentRef cr) => String>> */
  return _hashSet;
}

DLLDirection
modelica_metatype omc_HashSet_emptyHashSet(threadData_t *threadData)
{
  modelica_metatype _hashSet = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashSet has no default value.
  _hashSet = omc_HashSet_emptyHashSetSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashSet;
}

