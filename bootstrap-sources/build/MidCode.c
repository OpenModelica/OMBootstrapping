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



DLLDirection
modelica_string omc_MidCode_varString(threadData_t *threadData, modelica_metatype _var)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT0,omc_DAEDump_daeTypeStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
  tmpMeta3 = stringAppend(tmpMeta2,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))));
  _str = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _str;
}

