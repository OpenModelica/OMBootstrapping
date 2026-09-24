#include "omc_simulation_settings.h"
#include "PointerWeak.h"
#include "util/modelica.h"

#include "PointerWeak_includes.h"



modelica_metatype omc_PointerWeak_upgrade(threadData_t *threadData, modelica_metatype _weak)
{
  modelica_metatype _weak_ext;
  modelica_metatype _pointer_ext;
  modelica_metatype _pointer = NULL;
  // _pointer has no default value.
  _weak_ext = (modelica_metatype) _weak;
  _pointer_ext = pointerWeakUpgrade(_weak_ext);
  _pointer = (modelica_metatype)_pointer_ext;
  return _pointer;
}

modelica_metatype omc_PointerWeak_downgrade(threadData_t *threadData, modelica_metatype _pointer)
{
  modelica_metatype _pointer_ext;
  modelica_metatype _weak_ext;
  modelica_metatype _weak = NULL;
  // _weak has no default value.
  _pointer_ext = (modelica_metatype) _pointer;
  _weak_ext = pointerWeakDowngrade(_pointer_ext);
  _weak = (modelica_metatype)_weak_ext;
  return _weak;
}

