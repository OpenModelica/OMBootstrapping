#include "omc_simulation_settings.h"
#include "NBModule.h"
#define _OMC_LIT0_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "%.4g"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#include "util/modelica.h"

#include "NBModule_includes.h"



DLLDirection
modelica_string omc_NBModule_moduleClockString(threadData_t *threadData, modelica_metatype _name_clock)
{
  modelica_string _str = NULL;
  modelica_string _name = NULL;
  modelica_real _clck;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_real tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _name has no default value.
  // _clck has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _name_clock;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_real(tmpMeta3);
  _name = tmpMeta2;
  _clck = tmp4  /* pattern as ty=Real */;

  tmpMeta5 = stringAppend(_OMC_LIT0,_name);
  tmpMeta6 = stringAppend(tmpMeta5,omc_StringUtil_repeat(threadData, _OMC_LIT1, ((modelica_integer) 50) - stringLength(_name)));
  tmpMeta7 = stringAppend(tmpMeta6,omc_System_sprintff(threadData, _OMC_LIT2, _clck));
  _str = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _str;
}

