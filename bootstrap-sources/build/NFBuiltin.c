#include "omc_simulation_settings.h"
#include "NFBuiltin.h"
#define _OMC_LIT0_data "Lookup tree for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,16,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ":\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#include "util/modelica.h"

#include "NFBuiltin_includes.h"



DLLDirection
void omc_NFBuiltin_makeBuiltinLookupTree(threadData_t *threadData, modelica_string _name, modelica_metatype _components, modelica_metatype _classes)
{
  modelica_metatype _ltree = NULL;
  modelica_integer _i;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ltree = omc_NFLookupTree_new(threadData);
  // _i has no default value.
  _i = ((modelica_integer) 1);

  {
    modelica_metatype _comp;
    for (tmpMeta1 = _components; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _comp = MMC_CAR(tmpMeta1);
      tmpMeta2 = mmc_mk_box2(4, &NFLookupTree_Entry_COMPONENT__desc, mmc_mk_integer(_i));
      _ltree = omc_NFLookupTree_add(threadData, _ltree, _comp, tmpMeta2, boxvar_NFLookupTree_addConflictDefault);

      _i = ((modelica_integer) 1) + _i;
    }
  }

  {
    modelica_metatype _cls;
    for (tmpMeta4 = _classes; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _cls = MMC_CAR(tmpMeta4);
      tmpMeta5 = mmc_mk_box2(4, &NFLookupTree_Entry_COMPONENT__desc, mmc_mk_integer(_i));
      _ltree = omc_NFLookupTree_add(threadData, _ltree, _cls, tmpMeta5, boxvar_NFLookupTree_addConflictDefault);

      _i = ((modelica_integer) 1) + _i;
    }
  }

  tmpMeta7 = stringAppend(_OMC_LIT0,_name);
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT1);
  fputs(MMC_STRINGDATA(tmpMeta8),stdout);

  fputs(MMC_STRINGDATA(mmc_anyString(_ltree)),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

