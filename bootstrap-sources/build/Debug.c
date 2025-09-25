#include "omc_simulation_settings.h"
#include "Debug.h"
#define _OMC_LIT0_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#include "util/modelica.h"

#include "Debug_includes.h"



DLLDirection
void omc_Debug_traceln(threadData_t *threadData, modelica_string _str)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Print_printErrorBuf(threadData, _str);

  omc_Print_printErrorBuf(threadData, _OMC_LIT0);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_Debug_trace(threadData_t *threadData, modelica_string _s)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Print_printErrorBuf(threadData, _s);
  _return: OMC_LABEL_UNUSED
  return;
}

