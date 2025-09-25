#include "omc_simulation_settings.h"
#include "SBAtomicSet.h"
#define _OMC_LIT0_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#include "util/modelica.h"

#include "SBAtomicSet_includes.h"



DLLDirection
modelica_string omc_SBAtomicSet_toString(threadData_t *threadData, modelica_metatype _set)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_OMC_LIT0,omc_SBMultiInterval_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2)))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
  _str = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_integer omc_SBAtomicSet_hash(threadData_t *threadData, modelica_metatype _set1)
{
  modelica_integer _hash;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hash = omc_SBMultiInterval_hash(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))));
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_SBAtomicSet_hash(threadData_t *threadData, modelica_metatype _set1)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_SBAtomicSet_hash(threadData, _set1);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_boolean omc_SBAtomicSet_isEqual(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_boolean _equal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equal = omc_SBMultiInterval_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2))));
  _return: OMC_LABEL_UNUSED
  return _equal;
}
modelica_metatype boxptr_SBAtomicSet_isEqual(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_boolean _equal;
  modelica_metatype out_equal;
  _equal = omc_SBAtomicSet_isEqual(threadData, _set1, _set2);
  out_equal = mmc_mk_icon(_equal);
  return out_equal;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_replace(threadData_t *threadData, modelica_metatype _i, modelica_integer _dim, modelica_metatype _set)
{
  modelica_metatype _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_SBAtomicSet_new(threadData, omc_SBMultiInterval_replace(threadData, _i, _dim, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2)))));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBAtomicSet_replace(threadData_t *threadData, modelica_metatype _i, modelica_metatype _dim, modelica_metatype _set)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_dim);
  _res = omc_SBAtomicSet_replace(threadData, _i, tmp1, _set);
  /* skip box _res; SBAtomicSet */
  return _res;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_minElem(threadData_t *threadData, modelica_metatype _set)
{
  modelica_metatype _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = omc_SBMultiInterval_minElem(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_aset(threadData_t *threadData, modelica_metatype _set)
{
  modelica_metatype _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2)));
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_integer omc_SBAtomicSet_cardinality(threadData_t *threadData, modelica_metatype _set, modelica_integer __omcQ_24in_5Fcard)
{
  modelica_integer _card;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _card = __omcQ_24in_5Fcard;
  _card = _card + omc_SBMultiInterval_cardinality(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
  _return: OMC_LABEL_UNUSED
  return _card;
}
modelica_metatype boxptr_SBAtomicSet_cardinality(threadData_t *threadData, modelica_metatype _set, modelica_metatype __omcQ_24in_5Fcard)
{
  modelica_integer tmp1;
  modelica_integer _card;
  modelica_metatype out_card;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fcard);
  _card = omc_SBAtomicSet_cardinality(threadData, _set, tmp1);
  out_card = mmc_mk_icon(_card);
  return out_card;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_crossProd(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_metatype _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_SBAtomicSet_new(threadData, omc_SBMultiInterval_crossProd(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2)))));
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_complement(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_metatype _res = NULL;
  modelica_metatype _diff = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _diff has no default value.
  _diff = omc_SBMultiInterval_complement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2))));

  _res = omc_UnorderedSet_new(threadData, boxvar_SBAtomicSet_hash, boxvar_SBAtomicSet_isEqual, omc_UnorderedSet_bucketCount(threadData, _diff));

  if((!omc_UnorderedSet_isEmpty(threadData, _diff)))
  {
    {
      modelica_metatype _s;
      for (tmpMeta1 = omc_UnorderedSet_toArray(threadData, _diff), tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
      {
        _s = arrayGet(tmpMeta1,tmp3);
        omc_UnorderedSet_add(threadData, omc_SBAtomicSet_new(threadData, _s), _res);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_intersection(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_metatype _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_SBAtomicSet_new(threadData, omc_SBMultiInterval_intersection(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2)))));
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_boolean omc_SBAtomicSet_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _set)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = omc_SBMultiInterval_contains(threadData, _vals, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBAtomicSet_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _set)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_SBAtomicSet_contains(threadData, _vals, _set);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_SBAtomicSet_isEmpty(threadData_t *threadData, modelica_metatype _set)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = omc_SBMultiInterval_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_SBAtomicSet_isEmpty(threadData_t *threadData, modelica_metatype _set)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_SBAtomicSet_isEmpty(threadData, _set);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_integer omc_SBAtomicSet_ndim(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _ndim;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ndim = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))));
  _return: OMC_LABEL_UNUSED
  return _ndim;
}
modelica_metatype boxptr_SBAtomicSet_ndim(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _ndim;
  modelica_metatype out_ndim;
  _ndim = omc_SBAtomicSet_ndim(threadData, _set);
  out_ndim = mmc_mk_icon(_ndim);
  return out_ndim;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_copy(threadData_t *threadData, modelica_metatype _set)
{
  modelica_metatype _outSet = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSet has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBAtomicSet_ATOMIC__SET__desc, omc_SBMultiInterval_copy(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))));
  _outSet = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSet;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_newEmpty(threadData_t *threadData)
{
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBAtomicSet_ATOMIC__SET__desc, omc_SBMultiInterval_newEmpty(threadData), mmc_mk_integer(((modelica_integer) 0)));
  _set = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _set;
}

DLLDirection
modelica_metatype omc_SBAtomicSet_new(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBAtomicSet_ATOMIC__SET__desc, omc_SBMultiInterval_copy(threadData, _mi), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 3))));
  _set = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _set;
}

