#include "omc_simulation_settings.h"
#include "NFCardinalityTable.h"
#define _OMC_LIT0_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,2,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#include "util/modelica.h"

#include "NFCardinalityTable_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFCardinalityTable_addConnector_update(threadData_t *threadData, modelica_metatype _count);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCardinalityTable_addConnector_update(threadData_t *threadData, modelica_metatype _count);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCardinalityTable_addConnector_update,2,0) {(void*) boxptr_NFCardinalityTable_addConnector_update,0}};
#define boxvar_NFCardinalityTable_addConnector_update MMC_REFSTRUCTLIT(boxvar_lit_NFCardinalityTable_addConnector_update)

DLLModelDirection
void omc_NFCardinalityTable_print(threadData_t *threadData, modelica_metatype _table)
{
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = omc_UnorderedMap_toList(threadData, _table); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      tmp2 = stringAppend(omc_Util_tuple21(threadData, _e),_OMC_LIT0);
      tmp3 = modelica_integer_to_modelica_string(omc_unbox_integer(omc_Util_tuple22(threadData, _e)), ((modelica_integer) 0), 1 /* true */);
      tmp4 = stringAppend(tmp2,tmp3);
      tmp5 = stringAppend(tmp4,_OMC_LIT1);
      fputs(omc_string_data(tmp5),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_NFCardinalityTable_evaluateCardinality(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _table)
{
  modelica_metatype _res = NULL;
  modelica_integer _count;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _count has no default value.
  _count = omc_unbox_integer(omc_UnorderedMap_getOrDefault(threadData, omc_NFExpression_toString(threadData, _arg), _table, omc_mk_integer(((modelica_integer) 0))));

  tmpMeta1 = omc_mk_box2(3, &NFExpression_INTEGER__desc, omc_mk_integer(_count));
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFCardinalityTable_addConnector_update(threadData_t *threadData, modelica_metatype _count)
{
  modelica_integer _outCount;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCount has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _count;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          tmp7 = omc_unbox_integer(tmpMeta6);
          _outCount = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1) + _outCount;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outCount = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outCount;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCardinalityTable_addConnector_update(threadData_t *threadData, modelica_metatype _count)
{
  modelica_integer _outCount;
  modelica_metatype out_outCount;
  _outCount = omc_NFCardinalityTable_addConnector_update(threadData, _count);
  out_outCount = omc_mk_icon(_outCount);
  return out_outCount;
}

DLLModelDirection
void omc_NFCardinalityTable_addConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _table)
{
  modelica_string _conn_str = NULL;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _conn_str has no default value.
  omc_string_store(&(_conn_str), omc_NFConnector_toString(threadData, _conn));

  omc_UnorderedMap_addUpdate(threadData, _conn_str, boxvar_NFCardinalityTable_addConnector_update, _table);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_NFCardinalityTable_fromConnections(threadData_t *threadData, modelica_metatype _conns)
{
  modelica_metatype _table = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _table has no default value.
  if(omc_System_getUsesCardinality(threadData))
  {
    _table = omc_NFCardinalityTable_emptyCardinalityTable(threadData, modelica_integer_max((modelica_integer)(((modelica_integer) 1)),(modelica_integer)(omc_Util_nextPrime(threadData, listLength((OMC_BOX_FIELD(_conns, 2)))))));

    {
      modelica_metatype _conn;
      for (tmpMeta1 = (OMC_BOX_FIELD(_conns, 2)); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _conn = MMC_CAR(tmpMeta1);
        omc_NFCardinalityTable_addConnector(threadData, (OMC_BOX_FIELD(_conn, 2)), _table);

        omc_NFCardinalityTable_addConnector(threadData, (OMC_BOX_FIELD(_conn, 3)), _table);
      }
    }
  }
  else
  {
    _table = omc_NFCardinalityTable_emptyCardinalityTable(threadData, ((modelica_integer) 1));
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _table;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFCardinalityTable_emptyCardinalityTable(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _table = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _table has no default value.
  _table = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, _size);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _table;
  return omc_ret_;
}
modelica_metatype boxptr_NFCardinalityTable_emptyCardinalityTable(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _table = NULL;
  tmp1 = omc_unbox_integer(_size);
  _table = omc_NFCardinalityTable_emptyCardinalityTable(threadData, tmp1);
  /* skip box _table; UnorderedMap<String,#Integer> */
  return _table;
}

