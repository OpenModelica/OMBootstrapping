#include "omc_simulation_settings.h"
#include "MidCode.h"
#define _OMC_LIT0_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ") "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#include "util/modelica.h"

#include "MidCode_includes.h"



DLLModelDirection
modelica_string omc_MidCode_varString(threadData_t *threadData, modelica_metatype _var)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmp1 = stringAppend(_OMC_LIT0,omc_DAEDump_daeTypeStr(threadData, (OMC_BOX_FIELD(_var, 3))));
  tmp2 = stringAppend(tmp1,_OMC_LIT1);
  tmp3 = stringAppend(tmp2,(OMC_BOX_FIELD(_var, 2)));
  omc_string_store(&(_str), tmp3);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

