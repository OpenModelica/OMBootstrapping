#include "omc_simulation_settings.h"
#include "Global.h"
#include "util/modelica.h"

#include "Global_includes.h"



DLLModelDirection
void omc_Global_initialize(threadData_t *threadData)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  setGlobalRoot(((modelica_integer) 0), mmc_mk_none());

  setGlobalRoot(((modelica_integer) 19), mmc_mk_none());

  setGlobalRoot(((modelica_integer) 20), mmc_mk_none());

  setGlobalRoot(((modelica_integer) 22), mmc_mk_none());

  setGlobalRoot(((modelica_integer) 23), mmc_mk_none());

  setGlobalRoot(((modelica_integer) 26), mmc_mk_none());

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 10), tmpMeta1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 11), tmpMeta2);

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 12), tmpMeta3);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 30), tmpMeta4);

  setGlobalRoot(((modelica_integer) 33), mmc_mk_none());

  setGlobalRoot(((modelica_integer) 34), mmc_mk_none());

  setGlobalRoot(((modelica_integer) 35), mmc_mk_none());

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 36), tmpMeta5);

  setGlobalRoot(((modelica_integer) 37), mmc_mk_none());

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 38), tmpMeta6);

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 39), tmpMeta7);

  setGlobalRoot(((modelica_integer) 40), mmc_mk_none());

  setGlobalRoot(((modelica_integer) 41), mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return;
}

