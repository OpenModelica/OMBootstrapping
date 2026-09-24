#include "omc_simulation_settings.h"
#include "NFCallAttributes.h"
#include "util/modelica.h"

#include "NFCallAttributes_includes.h"



DLLModelDirection
modelica_metatype omc_NFCallAttributes_toDAE(threadData_t *threadData, modelica_metatype _attr, modelica_metatype _returnType)
{
  modelica_metatype _fattr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fattr has no default value.
  tmpMeta1 = omc_mk_box9(3, &DAE_CallAttributes_CALL__ATTR__desc, omc_NFType_toDAE(threadData, _returnType, 1 /* true */), (OMC_BOX_FIELD(_attr, 2)), (OMC_BOX_FIELD(_attr, 3)), (OMC_BOX_FIELD(_attr, 4)), (OMC_BOX_FIELD(_attr, 5)), (OMC_BOX_FIELD(_attr, 6)), (OMC_BOX_FIELD(_attr, 7)), omc_mk_integer(1));
  _fattr = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _fattr;
  return omc_ret_;
}

