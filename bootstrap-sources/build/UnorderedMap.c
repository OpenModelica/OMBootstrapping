#include "omc_simulation_settings.h"
#include "UnorderedMap.h"
#define _OMC_LIT0_data "UnorderedMap.toJSON"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,19,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&IOStream_IOStreamType_LIST__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "{\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "  \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,3,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "\": \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,4,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ",\n  \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,5,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\n}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "UnorderedMap.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,15,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT13_6,0.0);
#define _OMC_LIT13_6 MMC_REFREALLIT(_OMC_LIT_STRUCT13_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(707)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(707)),MMC_IMMEDIATE(MMC_TAGFIXNUM(53)),_OMC_LIT13_6}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "UnorderedMap.merge failed because both maps contain the same key."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,65,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "UnorderedMap.getSafe failed because the key did not exist."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,58,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#include "util/modelica.h"

#include "UnorderedMap_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_UnorderedMap_addEntry(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_integer _hash, modelica_metatype _map);
PROTECTED_FUNCTION_STATIC void boxptr_UnorderedMap_addEntry(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _hash, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_addEntry,2,0) {(void*) boxptr_UnorderedMap_addEntry,0}};
#define boxvar_UnorderedMap_addEntry MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_addEntry)
PROTECTED_FUNCTION_STATIC modelica_integer omc_UnorderedMap_find(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map, modelica_integer *out_hash);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnorderedMap_find(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map, modelica_metatype *out_hash);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_find,2,0) {(void*) boxptr_UnorderedMap_find,0}};
#define boxvar_UnorderedMap_find MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_find)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnorderedMap_remove_update__indices(threadData_t *threadData, modelica_metatype _bucket, modelica_integer _removedIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnorderedMap_remove_update__indices(threadData_t *threadData, modelica_metatype _bucket, modelica_metatype _removedIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnorderedMap_remove_update__indices,2,0) {(void*) boxptr_UnorderedMap_remove_update__indices,0}};
#define boxvar_UnorderedMap_remove_update__indices MMC_REFSTRUCTLIT(boxvar_lit_UnorderedMap_remove_update__indices)

PROTECTED_FUNCTION_STATIC void omc_UnorderedMap_addEntry(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_integer _hash, modelica_metatype _map)
{
  modelica_metatype _buckets = NULL;
  modelica_metatype tmpMeta1;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _buckets = (OMC_BOX_FIELD(_map, 2));
  omc_Vector_push(threadData, (OMC_BOX_FIELD(_map, 3)), _key);

  omc_Vector_push(threadData, (OMC_BOX_FIELD(_map, 4)), _value);

  if((omc_UnorderedMap_loadFactor(threadData, _map) > 1.0))
  {
    omc_UnorderedMap_rehash(threadData, _map);
  }
  else
  {
    tmpMeta1 = mmc_mk_cons(omc_mk_integer(omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 3)))), omc_Vector_get(threadData, _buckets, ((modelica_integer) 1) + _hash));
    omc_Vector_update(threadData, _buckets, ((modelica_integer) 1) + _hash, tmpMeta1);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_UnorderedMap_addEntry(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _hash, modelica_metatype _map)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_hash);
  omc_UnorderedMap_addEntry(threadData, _key, _value, tmp1, _map);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_UnorderedMap_find(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map, modelica_integer *out_hash)
{
  modelica_integer _index;
  modelica_integer _hash;
  modelica_fnptr _hashfn;
  modelica_fnptr _eqfn;
  modelica_metatype _bucket = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _index = ((modelica_integer) -1);
  // _hash has no default value.
  _hashfn = (OMC_BOX_FIELD(_map, 5));
  _eqfn = (OMC_BOX_FIELD(_map, 6));
  // _bucket has no default value.
  if((omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 2))) > ((modelica_integer) 0)))
  {
    _hash = modelica_integer_mod(omc_unbox_integer((OMC_BOX_FIELD(_hashfn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_hashfn, 1))) (threadData, (OMC_BOX_FIELD(_hashfn, 2)), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_hashfn, 1))) (threadData, _key)), omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 2))));

    _bucket = omc_Vector_get(threadData, (OMC_BOX_FIELD(_map, 2)), ((modelica_integer) 1) + _hash);

    {
      modelica_metatype _i;
      for (tmpMeta1 = _bucket; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _i = MMC_CAR(tmpMeta1);
        if(omc_unbox_boolean((OMC_BOX_FIELD(_eqfn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_eqfn, 1))) (threadData, (OMC_BOX_FIELD(_eqfn, 2)), _key, omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 3)), omc_unbox_integer(_i))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_eqfn, 1))) (threadData, _key, omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 3)), omc_unbox_integer(_i)))))
        {
          _index = omc_unbox_integer(_i);

          break;
        }
      }
    }
  }
  else
  {
    _hash = ((modelica_integer) 0);
  }
  _return: OMC_LABEL_UNUSED
  if (out_hash) { *out_hash = _hash; }
  omc_ret_ = _index;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnorderedMap_find(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map, modelica_metatype *out_hash)
{
  modelica_integer _hash;
  modelica_integer _index;
  modelica_metatype out_index;
  _index = omc_UnorderedMap_find(threadData, _key, _map, &_hash);
  out_index = omc_mk_icon(_index);
  if (out_hash) { *out_hash = omc_mk_icon(_hash); }
  return out_index;
}

DLLModelDirection
modelica_string omc_UnorderedMap_toJSON(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _keyStringFn, modelica_fnptr _valueStringFn)
{
  modelica_string _str = NULL;
  modelica_metatype _io = NULL;
  modelica_metatype _keys = NULL;
  modelica_metatype _values = NULL;
  modelica_integer _sz;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _io has no default value.
  _keys = (OMC_BOX_FIELD(_map, 3));
  _values = (OMC_BOX_FIELD(_map, 4));
  _sz = omc_Vector_size(threadData, _keys);
  _io = omc_IOStream_create(threadData, _OMC_LIT0, _OMC_LIT1);

  _io = omc_IOStream_append(threadData, _io, _OMC_LIT2);

  if((_sz > ((modelica_integer) 0)))
  {
    _io = omc_IOStream_append(threadData, _io, _OMC_LIT3);

    _io = omc_IOStream_append(threadData, _io, (OMC_BOX_FIELD(_keyStringFn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyStringFn, 1))) (threadData, (OMC_BOX_FIELD(_keyStringFn, 2)), omc_Vector_getNoBounds(threadData, _keys, ((modelica_integer) 1))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_keyStringFn, 1))) (threadData, omc_Vector_getNoBounds(threadData, _keys, ((modelica_integer) 1))));

    _io = omc_IOStream_append(threadData, _io, _OMC_LIT4);

    _io = omc_IOStream_append(threadData, _io, (OMC_BOX_FIELD(_valueStringFn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_valueStringFn, 1))) (threadData, (OMC_BOX_FIELD(_valueStringFn, 2)), omc_Vector_getNoBounds(threadData, _values, ((modelica_integer) 1))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_valueStringFn, 1))) (threadData, omc_Vector_getNoBounds(threadData, _values, ((modelica_integer) 1))));

    _io = omc_IOStream_append(threadData, _io, _OMC_LIT5);

    tmp1 = ((modelica_integer) 2); tmp2 = 1; tmp3 = _sz;
    if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
      {

        _io = omc_IOStream_append(threadData, _io, _OMC_LIT6);

        _io = omc_IOStream_append(threadData, _io, (OMC_BOX_FIELD(_keyStringFn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyStringFn, 1))) (threadData, (OMC_BOX_FIELD(_keyStringFn, 2)), omc_Vector_getNoBounds(threadData, _keys, _i)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_keyStringFn, 1))) (threadData, omc_Vector_getNoBounds(threadData, _keys, _i)));

        _io = omc_IOStream_append(threadData, _io, _OMC_LIT4);

        _io = omc_IOStream_append(threadData, _io, (OMC_BOX_FIELD(_valueStringFn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_valueStringFn, 1))) (threadData, (OMC_BOX_FIELD(_valueStringFn, 2)), omc_Vector_getNoBounds(threadData, _values, _i)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_valueStringFn, 1))) (threadData, omc_Vector_getNoBounds(threadData, _values, _i)));

        _io = omc_IOStream_append(threadData, _io, _OMC_LIT5);
      }
    }
  }

  _io = omc_IOStream_append(threadData, _io, _OMC_LIT7);

  omc_string_store(&(_str), omc_IOStream_string(threadData, _io));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_UnorderedMap_toString(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _keyStringFn, modelica_fnptr _valueStringFn, modelica_string _delimiter, modelica_string _concatinator)
{
  modelica_string _str = NULL;
  modelica_metatype _strl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _keys = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _strl = tmpMeta1;
  _keys = (OMC_BOX_FIELD(_map, 3));
  _values = (OMC_BOX_FIELD(_map, 4));
  tmp7 = omc_Vector_size(threadData, _keys); tmp8 = ((modelica_integer) -1); tmp9 = ((modelica_integer) 1);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _i;
    for(_i = omc_Vector_size(threadData, _keys); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
    {

      tmp3 = stringAppend(_OMC_LIT10,(OMC_BOX_FIELD(_keyStringFn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_keyStringFn, 1))) (threadData, (OMC_BOX_FIELD(_keyStringFn, 2)), omc_Vector_get(threadData, _keys, _i)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_keyStringFn, 1))) (threadData, omc_Vector_get(threadData, _keys, _i)));
      tmp4 = stringAppend(tmp3,_concatinator);
      tmp5 = stringAppend(tmp4,(OMC_BOX_FIELD(_valueStringFn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_valueStringFn, 1))) (threadData, (OMC_BOX_FIELD(_valueStringFn, 2)), omc_Vector_get(threadData, _values, _i)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_valueStringFn, 1))) (threadData, omc_Vector_get(threadData, _values, _i)));
      tmp6 = stringAppend(tmp5,_OMC_LIT11);
      tmpMeta2 = mmc_mk_cons(tmp6, _strl);
      _strl = tmpMeta2;
    }
  }

  omc_string_store(&(_str), stringDelimitList(_strl, _delimiter));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
void omc_UnorderedMap_rehash(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _keys = NULL;
  modelica_metatype _buckets = NULL;
  modelica_integer _bucket_count;
  modelica_integer _bucket_id;
  modelica_fnptr _hashfn;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _keys = (OMC_BOX_FIELD(_map, 3));
  _buckets = (OMC_BOX_FIELD(_map, 2));
  // _bucket_count has no default value.
  // _bucket_id has no default value.
  _hashfn = (OMC_BOX_FIELD(_map, 5));
  omc_Vector_clear(threadData, _buckets);

  _bucket_count = omc_Util_nextPrime(threadData, (((modelica_integer) 2)) * (omc_Vector_size(threadData, _keys)));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  omc_Vector_resize(threadData, _buckets, _bucket_count, tmpMeta1);

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 3)));
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {

      _bucket_id = ((modelica_integer) 1) + modelica_integer_mod(omc_unbox_integer((OMC_BOX_FIELD(_hashfn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_hashfn, 1))) (threadData, (OMC_BOX_FIELD(_hashfn, 2)), omc_Vector_get(threadData, _keys, _i)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_hashfn, 1))) (threadData, omc_Vector_get(threadData, _keys, _i))), _bucket_count);

      tmpMeta2 = mmc_mk_cons(omc_mk_integer(_i), omc_Vector_getNoBounds(threadData, _buckets, _bucket_id));
      omc_Vector_updateNoBounds(threadData, _buckets, _bucket_id, tmpMeta2);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_real omc_UnorderedMap_loadFactor(threadData_t *threadData, modelica_metatype _map)
{
  modelica_real _load;
  modelica_real tmp1;
  modelica_real omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = ((modelica_real)omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 2))));
  if (tmp1 == 0) {OMC_THROW_INTERNAL();}
  _load = (((modelica_real)omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 3))))) / tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _load;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_loadFactor(threadData_t *threadData, modelica_metatype _map)
{
  modelica_real _load;
  modelica_real tmp1;
  modelica_metatype out_load;
  _load = omc_UnorderedMap_loadFactor(threadData, _map);
  out_load = omc_mk_rcon(_load);
  return out_load;
}

DLLModelDirection
modelica_integer omc_UnorderedMap_bucketCount(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer _count;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 2)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _count;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_bucketCount(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_UnorderedMap_bucketCount(threadData, _map);
  out_count = omc_mk_icon(_count);
  return out_count;
}

DLLModelDirection
modelica_boolean omc_UnorderedMap_isEmpty(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _empty;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = omc_Vector_isEmpty(threadData, (OMC_BOX_FIELD(_map, 3)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _empty;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_isEmpty(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_UnorderedMap_isEmpty(threadData, _map);
  out_empty = omc_mk_icon(_empty);
  return out_empty;
}

DLLModelDirection
modelica_integer omc_UnorderedMap_size(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer _s;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 3)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _s;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_size(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer _s;
  modelica_metatype out_s;
  _s = omc_UnorderedMap_size(threadData, _map);
  out_s = omc_mk_icon(_s);
  return out_s;
}

DLLModelDirection
modelica_boolean omc_UnorderedMap_none(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_Vector_none(threadData, (OMC_BOX_FIELD(_map, 4)), ((modelica_fnptr) _fn));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_none(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_UnorderedMap_none(threadData, _map, _fn);
  out_res = omc_mk_icon(_res);
  return out_res;
}

DLLModelDirection
modelica_boolean omc_UnorderedMap_any(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_Vector_any(threadData, (OMC_BOX_FIELD(_map, 4)), ((modelica_fnptr) _fn));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_any(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_UnorderedMap_any(threadData, _map, _fn);
  out_res = omc_mk_icon(_res);
  return out_res;
}

DLLModelDirection
modelica_boolean omc_UnorderedMap_all(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_Vector_all(threadData, (OMC_BOX_FIELD(_map, 4)), ((modelica_fnptr) _fn));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_all(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_UnorderedMap_all(threadData, _map, _fn);
  out_res = omc_mk_icon(_res);
  return out_res;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_subMap(threadData_t *threadData, modelica_metatype _map, modelica_metatype _lst)
{
  modelica_metatype _sub_map = NULL;
  modelica_integer _len;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sub_map has no default value.
  // _len has no default value.
  _len = listLength(_lst);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = omc_mk_box6(3, &UnorderedMap_UNORDERED__MAP__desc, omc_Vector_newFill(threadData, omc_Util_nextPrime(threadData, _len), tmpMeta1), omc_Vector_new(threadData, _len), omc_Vector_new(threadData, _len), (OMC_BOX_FIELD(_map, 5)), (OMC_BOX_FIELD(_map, 6)));
  _sub_map = tmpMeta2;

  {
    modelica_metatype _k;
    for (tmpMeta3 = _lst; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _k = MMC_CAR(tmpMeta3);
      omc_UnorderedMap_add(threadData, _k, omc_UnorderedMap_getSafe(threadData, _k, _map, _OMC_LIT13), _sub_map);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sub_map;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_merge(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2, modelica_metatype _info)
{
  modelica_metatype _result = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype _v = NULL;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _tmp has no default value.
  // _k has no default value.
  // _v has no default value.
  if((omc_Vector_size(threadData, (OMC_BOX_FIELD(_map1, 3))) > omc_Vector_size(threadData, (OMC_BOX_FIELD(_map2, 3)))))
  {
    _result = omc_UnorderedMap_copy(threadData, _map1);

    _tmp = _map2;
  }
  else
  {
    _result = omc_UnorderedMap_copy(threadData, _map2);

    _tmp = _map1;
  }

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = omc_Vector_size(threadData, (OMC_BOX_FIELD(_tmp, 3)));
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
    {

      _k = omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_tmp, 3)), _i);

      _v = omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_tmp, 4)), _i);

      { /* matchcontinue expression */
        {
          volatile mmc_switch_type tmp3;
          int tmp4;
          tmp3 = 0;
          OMC_TRY_INTERNAL(mmc_jumper)
          tmp2_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp3 < 2; tmp3++) {
            switch (MMC_SWITCH_CAST(tmp3)) {
            case 0: {
              /* Pattern matching succeeded */
              omc_UnorderedMap_addUnique(threadData, _k, _v, _result);
              goto tmp2_done;
            }
            case 1: {
              /* Pattern matching succeeded */
              omc_Error_addInternalError(threadData, _OMC_LIT14, _info);
              goto tmp2_done;
            }
            }
            goto tmp2_end;
            tmp2_end: ;
          }
          goto goto_1;
          tmp2_done:
          (void)tmp3;
          OMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp2_done2;
          goto_1:;
          OMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp3 < 2) {
            goto tmp2_top;
          }
          OMC_THROW_INTERNAL();
          tmp2_done2:;
        }
      }
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _result;
  return omc_ret_;
}

DLLModelDirection
void omc_UnorderedMap_apply(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Vector_apply(threadData, (OMC_BOX_FIELD(_map, 4)), ((modelica_fnptr) _fn));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_map(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype _new_values = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  // _new_values has no default value.
  _new_values = omc_Vector_map(threadData, (OMC_BOX_FIELD(_map, 4)), ((modelica_fnptr) _fn), 1 /* true */);

  tmpMeta1 = omc_mk_box6(3, &UnorderedMap_UNORDERED__MAP__desc, omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 2))), omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 3))), _new_values, (OMC_BOX_FIELD(_map, 5)), (OMC_BOX_FIELD(_map, 6)));
  _outMap = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outMap;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_fold(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  _arg = omc_Vector_fold(threadData, (OMC_BOX_FIELD(_map, 4)), ((modelica_fnptr) _fn), _arg);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _arg;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_keySet(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _set = NULL;
  modelica_integer _bucket_count;
  modelica_metatype _buckets = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  _bucket_count = omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 2)));
  // _buckets has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _buckets = arrayCreate(_bucket_count, tmpMeta1);

  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = _bucket_count;
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer _h;
    for(_h = ((modelica_integer) 1); in_range_integer(_h, tmp6, tmp8); _h += tmp7)
    {

      {
        modelica_metatype __omcQ_24tmpVar3;
        modelica_metatype* tmp3;
        modelica_metatype tmpMeta4;
        modelica_metatype __omcQ_24tmpVar2;
        modelica_integer tmp5;
        modelica_metatype _i_loopVar = 0;
        modelica_metatype _i;
        _i_loopVar = omc_Vector_get(threadData, (OMC_BOX_FIELD(_map, 2)), _h);
        tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
        tmp3 = &__omcQ_24tmpVar3;
        while(1) {
          tmp5 = 1;
          if (!listEmpty(_i_loopVar)) {
            _i = MMC_CAR(_i_loopVar);
            _i_loopVar = MMC_CDR(_i_loopVar);
            tmp5--;
          }
          if (tmp5 == 0) {
            __omcQ_24tmpVar2 = omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 3)), omc_unbox_integer(_i));
            *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
            tmp3 = &MMC_CDR(*tmp3);
          } else if (tmp5 == 1) {
            break;
          } else {
            OMC_THROW_INTERNAL();
          }
        }
        *tmp3 = mmc_mk_nil();
        tmpMeta2 = __omcQ_24tmpVar3;
      }
      arrayUpdateNoBoundsChecking(_buckets, _h, tmpMeta2);
    }
  }

  tmpMeta9 = omc_mk_box5(3, &UnorderedSet_UNORDERED__SET__desc, omc_Mutable_create(threadData, _buckets), omc_Mutable_create(threadData, omc_mk_integer(omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 3))))), (OMC_BOX_FIELD(_map, 5)), (OMC_BOX_FIELD(_map, 6)));
  _set = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _set;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_valueVector(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _values = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _values = omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 4)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _values;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_keyVector(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _keys = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _keys = omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 3)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _keys;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_toVector(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _entries = NULL;
  modelica_metatype _keys = NULL;
  modelica_metatype _values = NULL;
  modelica_integer _sz;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _entries has no default value.
  _keys = (OMC_BOX_FIELD(_map, 3));
  _values = (OMC_BOX_FIELD(_map, 4));
  _sz = omc_Vector_size(threadData, _keys);
  _entries = omc_Vector_new(threadData, _sz);

  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _sz;
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {

      tmpMeta1 = omc_mk_box2(0, omc_Vector_getNoBounds(threadData, _keys, _i), omc_Vector_getNoBounds(threadData, _values, _i));
      omc_Vector_updateNoBounds(threadData, _entries, _i, tmpMeta1);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _entries;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_valueArray(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _values = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _values = omc_Vector_toArray(threadData, (OMC_BOX_FIELD(_map, 4)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _values;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_keyArray(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _keys = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _keys = omc_Vector_toArray(threadData, (OMC_BOX_FIELD(_map, 3)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _keys;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_toArray(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _entries = NULL;
  modelica_metatype _keys = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype _t = NULL;
  modelica_integer _sz;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _entries has no default value.
  _keys = (OMC_BOX_FIELD(_map, 3));
  _values = (OMC_BOX_FIELD(_map, 4));
  _t = _t;
  _sz = omc_Vector_size(threadData, _keys);
  _entries = arrayCreateNoInit(_sz, _t);

  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _sz;
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {

      tmpMeta1 = omc_mk_box2(0, omc_Vector_getNoBounds(threadData, _keys, _i), omc_Vector_getNoBounds(threadData, _values, _i));
      arrayUpdateNoBoundsChecking(_entries, _i, tmpMeta1);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _entries;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_valueList(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _values = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _values = omc_Vector_toList(threadData, (OMC_BOX_FIELD(_map, 4)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _values;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_keyList(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _keys = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _keys = omc_Vector_toList(threadData, (OMC_BOX_FIELD(_map, 3)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _keys;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_toList(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _lst = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = omc_List_zip(threadData, omc_UnorderedMap_keyList(threadData, _map), omc_UnorderedMap_valueList(threadData, _map));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _lst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_valueAt(threadData_t *threadData, modelica_metatype _map, modelica_integer _index)
{
  modelica_metatype _value = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = omc_Vector_get(threadData, (OMC_BOX_FIELD(_map, 4)), _index);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_valueAt(threadData_t *threadData, modelica_metatype _map, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_metatype _value = NULL;
  tmp1 = omc_unbox_integer(_index);
  _value = omc_UnorderedMap_valueAt(threadData, _map, tmp1);
  /* skip box _value; polymorphic<V> */
  return _value;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_keyAt(threadData_t *threadData, modelica_metatype _map, modelica_integer _index)
{
  modelica_metatype _key = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _key = omc_Vector_get(threadData, (OMC_BOX_FIELD(_map, 3)), _index);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _key;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_keyAt(threadData_t *threadData, modelica_metatype _map, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_metatype _key = NULL;
  tmp1 = omc_unbox_integer(_index);
  _key = omc_UnorderedMap_keyAt(threadData, _map, tmp1);
  /* skip box _key; polymorphic<K> */
  return _key;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_firstKey(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _key = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _key = omc_Vector_get(threadData, (OMC_BOX_FIELD(_map, 3)), ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _key;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_first(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _value = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = omc_Vector_get(threadData, (OMC_BOX_FIELD(_map, 4)), ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_UnorderedMap_contains(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map)
{
  modelica_boolean _res;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (omc_UnorderedMap_find(threadData, _key, _map, NULL) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_contains(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_UnorderedMap_contains(threadData, _key, _map);
  out_res = omc_mk_icon(_res);
  return out_res;
}

DLLModelDirection
void omc_UnorderedMap_updateKey(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Vector_update(threadData, (OMC_BOX_FIELD(_map, 3)), omc_UnorderedMap_find(threadData, _key, _map, NULL), _key);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_getKey(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map)
{
  modelica_metatype _outKey = NULL;
  modelica_integer _index;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKey has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map, NULL);
  _outKey = ((_index > ((modelica_integer) 0))?mmc_mk_some(omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 3)), _index)):mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outKey;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_getList(threadData_t *threadData, modelica_metatype _keys, modelica_metatype _map)
{
  modelica_metatype _values = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _values = tmpMeta1;
  // _index has no default value.
  {
    modelica_metatype _key;
    for (tmpMeta2 = _keys; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _key = MMC_CAR(tmpMeta2);
      _index = omc_UnorderedMap_find(threadData, _key, _map, NULL);

      if((_index > ((modelica_integer) 0)))
      {
        tmpMeta3 = mmc_mk_cons(omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index), _values);
        _values = tmpMeta3;
      }
    }
  }

  _values = listReverseInPlace(_values);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _values;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_getOrDefault(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map, modelica_metatype _default)
{
  modelica_metatype _value = NULL;
  modelica_integer _index;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map, NULL);
  _value = ((_index > ((modelica_integer) 0))?omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index):_default);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_getOrFail(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map)
{
  modelica_metatype _value = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = omc_Vector_get(threadData, (OMC_BOX_FIELD(_map, 4)), omc_UnorderedMap_find(threadData, _key, _map, NULL));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_getSafe(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map, modelica_metatype _info)
{
  modelica_metatype _value = NULL;
  modelica_integer _index;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map, NULL);
  if((_index > ((modelica_integer) 0)))
  {
    _value = omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index);
  }
  else
  {
    omc_Error_addInternalError(threadData, _OMC_LIT15, _info);

    OMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_get(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map)
{
  modelica_metatype _value = NULL;
  modelica_integer _index;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map, NULL);
  _value = ((_index > ((modelica_integer) 0))?mmc_mk_some(omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index)):mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
void omc_UnorderedMap_clear(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype tmpMeta1;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Vector_clear(threadData, (OMC_BOX_FIELD(_map, 2)));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  omc_Vector_push(threadData, (OMC_BOX_FIELD(_map, 2)), tmpMeta1);

  omc_Vector_clear(threadData, (OMC_BOX_FIELD(_map, 3)));

  omc_Vector_clear(threadData, (OMC_BOX_FIELD(_map, 4)));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnorderedMap_remove_update__indices(threadData_t *threadData, modelica_metatype _bucket, modelica_integer _removedIndex)
{
  modelica_metatype _outBucket = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBucket has no default value.
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _bucket;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar5;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar4 = omc_mk_integer(((omc_unbox_integer(_i) > _removedIndex)?((modelica_integer) -1) + (omc_unbox_integer(_i)):omc_unbox_integer(_i)));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar5;
  }
  _outBucket = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outBucket;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnorderedMap_remove_update__indices(threadData_t *threadData, modelica_metatype _bucket, modelica_metatype _removedIndex)
{
  modelica_integer tmp1;
  modelica_metatype _outBucket = NULL;
  tmp1 = omc_unbox_integer(_removedIndex);
  _outBucket = omc_UnorderedMap_remove_update__indices(threadData, _bucket, tmp1);
  /* skip box _outBucket; list<#Integer> */
  return _outBucket;
}

static modelica_metatype closure0_UnorderedMap_remove_update__indices(threadData_t *thData, modelica_metatype closure, modelica_metatype bucket)
{
  modelica_metatype removedIndex = OMC_BOX_FIELD(closure, 1);
  return boxptr_UnorderedMap_remove_update__indices(thData, bucket, removedIndex);
}
DLLModelDirection
modelica_boolean omc_UnorderedMap_remove(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map)
{
  modelica_boolean _removed;
  modelica_integer _hash;
  modelica_integer _index;
  modelica_metatype _bucket = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _removed has no default value.
  // _hash has no default value.
  // _index has no default value.
  // _bucket has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map ,&_hash);

  _removed = (_index > ((modelica_integer) 0));

  if((!_removed))
  {
    goto _return;
  }

  _bucket = omc_Vector_get(threadData, (OMC_BOX_FIELD(_map, 2)), ((modelica_integer) 1) + _hash);

  _bucket = omc_List_deleteMemberOnTrue(threadData, omc_mk_integer(_index), _bucket, boxvar_intEq, NULL);

  omc_Vector_updateNoBounds(threadData, (OMC_BOX_FIELD(_map, 2)), ((modelica_integer) 1) + _hash, _bucket);

  omc_Vector_remove(threadData, (OMC_BOX_FIELD(_map, 3)), _index);

  omc_Vector_remove(threadData, (OMC_BOX_FIELD(_map, 4)), _index);

  tmpMeta1 = omc_mk_box1(0, omc_mk_integer(_index));
  omc_Vector_apply(threadData, (OMC_BOX_FIELD(_map, 2)), (modelica_fnptr) omc_mk_box2(0,closure0_UnorderedMap_remove_update__indices,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _removed;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_remove(threadData_t *threadData, modelica_metatype _key, modelica_metatype _map)
{
  modelica_boolean _removed;
  modelica_metatype out_removed;
  _removed = omc_UnorderedMap_remove(threadData, _key, _map);
  out_removed = omc_mk_icon(_removed);
  return out_removed;
}

DLLModelDirection
modelica_boolean omc_UnorderedMap_tryAddUpdate(threadData_t *threadData, modelica_metatype _key, modelica_fnptr _fn, modelica_metatype _map)
{
  modelica_boolean _updated;
  modelica_integer _index;
  modelica_integer _hash;
  modelica_metatype _value = NULL;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _updated has no default value.
  // _index has no default value.
  // _hash has no default value.
  // _value has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map ,&_hash);

  _updated = (_index > ((modelica_integer) 0));

  if(_updated)
  {
    _value = (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_some(omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_some(omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index)));

    omc_Vector_updateNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index, _value);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _updated;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_tryAddUpdate(threadData_t *threadData, modelica_metatype _key, modelica_fnptr _fn, modelica_metatype _map)
{
  modelica_boolean _updated;
  modelica_metatype out_updated;
  _updated = omc_UnorderedMap_tryAddUpdate(threadData, _key, _fn, _map);
  out_updated = omc_mk_icon(_updated);
  return out_updated;
}

DLLModelDirection
void omc_UnorderedMap_addMerge(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_fnptr _fn, modelica_metatype _map)
{
  modelica_integer _index;
  modelica_integer _hash;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  // _hash has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map ,&_hash);

  if((_index > ((modelica_integer) 0)))
  {
    omc_Vector_updateNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index, (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), _value, omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, _value, omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index)));
  }
  else
  {
    omc_UnorderedMap_addEntry(threadData, _key, _value, _hash, _map);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_addUpdate(threadData_t *threadData, modelica_metatype _key, modelica_fnptr _fn, modelica_metatype _map)
{
  modelica_metatype _value = NULL;
  modelica_integer _index;
  modelica_integer _hash;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _index has no default value.
  // _hash has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map ,&_hash);

  if((_index > ((modelica_integer) 0)))
  {
    _value = (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_some(omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_some(omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index)));

    omc_Vector_updateNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index, _value);
  }
  else
  {
    _value = (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_none());

    omc_UnorderedMap_addEntry(threadData, _key, _value, _hash, _map);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_UnorderedMap_tryUpdate(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map)
{
  modelica_boolean _updated;
  modelica_integer _index;
  modelica_integer _hash;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _updated has no default value.
  // _index has no default value.
  // _hash has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map ,&_hash);

  _updated = (_index > ((modelica_integer) 0));

  if(_updated)
  {
    omc_Vector_update(threadData, (OMC_BOX_FIELD(_map, 4)), _index, _value);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _updated;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_tryUpdate(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map)
{
  modelica_boolean _updated;
  modelica_metatype out_updated;
  _updated = omc_UnorderedMap_tryUpdate(threadData, _key, _value, _map);
  out_updated = omc_mk_icon(_updated);
  return out_updated;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_tryAdd(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map)
{
  modelica_metatype _outValue = NULL;
  modelica_integer _index;
  modelica_integer _hash;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  // _index has no default value.
  // _hash has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map ,&_hash);

  if((_index > ((modelica_integer) 0)))
  {
    _outValue = omc_Vector_getNoBounds(threadData, (OMC_BOX_FIELD(_map, 4)), _index);
  }
  else
  {
    _outValue = _value;

    omc_UnorderedMap_addEntry(threadData, _key, _value, _hash, _map);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}

DLLModelDirection
void omc_UnorderedMap_addUnique(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map)
{
  modelica_integer _index;
  modelica_integer _hash;
  modelica_boolean tmp1;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  // _hash has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map ,&_hash);

  /* Pattern-matching assignment */
  tmp1 = (_index > ((modelica_integer) 0));
  if (0 /* false */ != tmp1) OMC_THROW_INTERNAL();

  omc_UnorderedMap_addEntry(threadData, _key, _value, _hash, _map);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_UnorderedMap_addNew(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map)
{
  modelica_fnptr _hashfn;
  modelica_integer _hash;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hashfn = (OMC_BOX_FIELD(_map, 5));
  _hash = modelica_integer_mod(omc_unbox_integer((OMC_BOX_FIELD(_hashfn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_hashfn, 1))) (threadData, (OMC_BOX_FIELD(_hashfn, 2)), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_hashfn, 1))) (threadData, _key)), omc_Vector_size(threadData, (OMC_BOX_FIELD(_map, 2))));
  omc_UnorderedMap_addEntry(threadData, _key, _value, _hash, _map);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_UnorderedMap_add(threadData_t *threadData, modelica_metatype _key, modelica_metatype _value, modelica_metatype _map)
{
  modelica_integer _index;
  modelica_integer _hash;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  // _hash has no default value.
  _index = omc_UnorderedMap_find(threadData, _key, _map ,&_hash);

  if((_index > ((modelica_integer) 0)))
  {
    omc_Vector_update(threadData, (OMC_BOX_FIELD(_map, 4)), _index, _value);
  }
  else
  {
    omc_UnorderedMap_addEntry(threadData, _key, _value, _hash, _map);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_deepCopy(threadData_t *threadData, modelica_metatype _map, modelica_fnptr _fn)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  tmpMeta1 = omc_mk_box6(3, &UnorderedMap_UNORDERED__MAP__desc, omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 2))), omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 3))), omc_Vector_deepCopy(threadData, (OMC_BOX_FIELD(_map, 4)), ((modelica_fnptr) _fn)), (OMC_BOX_FIELD(_map, 5)), (OMC_BOX_FIELD(_map, 6)));
  _outMap = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outMap;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_copy(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  tmpMeta1 = omc_mk_box6(3, &UnorderedMap_UNORDERED__MAP__desc, omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 2))), omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 3))), omc_Vector_copy(threadData, (OMC_BOX_FIELD(_map, 4))), (OMC_BOX_FIELD(_map, 5)), (OMC_BOX_FIELD(_map, 6)));
  _outMap = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outMap;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_fromLists(threadData_t *threadData, modelica_metatype _keys, modelica_metatype _values, modelica_fnptr _hash, modelica_fnptr _keyEq)
{
  modelica_metatype _map = NULL;
  modelica_integer _key_count;
  modelica_integer _bucket_count;
  modelica_metatype _v = NULL;
  modelica_metatype _rest_v = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  // _key_count has no default value.
  // _bucket_count has no default value.
  // _v has no default value.
  _rest_v = _values;
  _key_count = listLength(_keys);

  _bucket_count = omc_Util_nextPrime(threadData, _key_count);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = omc_mk_box6(3, &UnorderedMap_UNORDERED__MAP__desc, omc_Vector_newFill(threadData, _bucket_count, tmpMeta1), omc_Vector_new(threadData, _key_count), omc_Vector_new(threadData, _key_count), ((modelica_fnptr) _hash), ((modelica_fnptr) _keyEq));
  _map = tmpMeta2;

  {
    modelica_metatype _k;
    for (tmpMeta3 = _keys; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _k = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _rest_v;
      if (listEmpty(tmpMeta4)) OMC_THROW_INTERNAL();
      tmpMeta5 = MMC_CAR(tmpMeta4);
      tmpMeta6 = MMC_CDR(tmpMeta4);
      _v = tmpMeta5;
      _rest_v = tmpMeta6;

      omc_UnorderedMap_add(threadData, _k, _v, _map);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _map;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_UnorderedMap_new(threadData_t *threadData, modelica_fnptr _hash, modelica_fnptr _keyEq, modelica_integer _bucketCount)
{
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = omc_mk_box6(3, &UnorderedMap_UNORDERED__MAP__desc, omc_Vector_newFill(threadData, _bucketCount, tmpMeta1), omc_Vector_new(threadData, ((modelica_integer) 0)), omc_Vector_new(threadData, ((modelica_integer) 0)), ((modelica_fnptr) _hash), ((modelica_fnptr) _keyEq));
  _map = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _map;
  return omc_ret_;
}
modelica_metatype boxptr_UnorderedMap_new(threadData_t *threadData, modelica_fnptr _hash, modelica_fnptr _keyEq, modelica_metatype _bucketCount)
{
  modelica_integer tmp1;
  modelica_metatype _map = NULL;
  tmp1 = omc_unbox_integer(_bucketCount);
  _map = omc_UnorderedMap_new(threadData, _hash, _keyEq, tmp1);
  /* skip box _map; UnorderedMap<polymorphic<K>,polymorphic<V>> */
  return _map;
}

