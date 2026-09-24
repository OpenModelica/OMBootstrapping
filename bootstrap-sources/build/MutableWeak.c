#include "omc_simulation_settings.h"
#include "MutableWeak.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,3) {&MutableWeak_Roots_ROOTS__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#include "util/modelica.h"

#include "MutableWeak_includes.h"



DLLModelDirection
void omc_MutableWeak_clearRoots(threadData_t *threadData)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_MutableWeak_root(threadData_t *threadData, modelica_metatype _mutable)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_MutableWeak_useRoots(threadData_t *threadData, modelica_metatype _roots)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_MutableWeak_newRoots(threadData_t *threadData)
{
  modelica_metatype _roots = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _roots = _OMC_LIT0;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _roots;
  return omc_ret_;
}

modelica_metatype omc_MutableWeak_value(threadData_t *threadData, modelica_metatype _weak)
{
  modelica_metatype _weak_ext;
  modelica_metatype _val_ext;
  modelica_metatype _val = NULL;
  // _val has no default value.
  _weak_ext = (modelica_metatype) _weak;
  _val_ext = mutableWeakValue(_weak_ext);
  _val = (modelica_metatype)_val_ext;
  return _val;
}

modelica_metatype omc_MutableWeak_ofValue(threadData_t *threadData, modelica_metatype _val)
{
  modelica_metatype _val_ext;
  modelica_metatype _weak_ext;
  modelica_metatype _weak = NULL;
  // _weak has no default value.
  _val_ext = (modelica_metatype) _val;
  _weak_ext = mutableWeakOfValue(_val_ext);
  _weak = (modelica_metatype)_weak_ext;
  return _weak;
}

modelica_metatype omc_MutableWeak_upgradeOwning(threadData_t *threadData, modelica_metatype _weak)
{
  modelica_metatype _weak_ext;
  modelica_metatype _mutable_ext;
  modelica_metatype _mutable = NULL;
  // _mutable has no default value.
  _weak_ext = (modelica_metatype) _weak;
  _mutable_ext = mutableWeakUpgrade(_weak_ext);
  _mutable = (modelica_metatype)_mutable_ext;
  return _mutable;
}

modelica_metatype omc_MutableWeak_upgrade(threadData_t *threadData, modelica_metatype _weak)
{
  modelica_metatype _weak_ext;
  modelica_metatype _mutable_ext;
  modelica_metatype _mutable = NULL;
  // _mutable has no default value.
  _weak_ext = (modelica_metatype) _weak;
  _mutable_ext = mutableWeakUpgrade(_weak_ext);
  _mutable = (modelica_metatype)_mutable_ext;
  return _mutable;
}

modelica_metatype omc_MutableWeak_downgrade(threadData_t *threadData, modelica_metatype _mutable)
{
  modelica_metatype _mutable_ext;
  modelica_metatype _weak_ext;
  modelica_metatype _weak = NULL;
  // _weak has no default value.
  _mutable_ext = (modelica_metatype) _mutable;
  _weak_ext = mutableWeakDowngrade(_mutable_ext);
  _weak = (modelica_metatype)_weak_ext;
  return _weak;
}

