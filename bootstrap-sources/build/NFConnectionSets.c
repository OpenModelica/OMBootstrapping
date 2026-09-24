#include "omc_simulation_settings.h"
#include "NFConnectionSets.h"
#define _OMC_LIT0_data "disableSingleFlowEq"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,19,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "Disables the generation of single flow equations."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,49,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data " sets:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,7,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data " -> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,4,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#include "util/modelica.h"

#include "NFConnectionSets_includes.h"



DLLModelDirection
modelica_boolean omc_NFConnectionSets_ConnectionSets_EntryEqual(threadData_t *threadData, modelica_metatype _entry1, modelica_metatype _entry2)
{
  modelica_boolean _isEqual;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  _isEqual = omc_NFConnector_isEqual(threadData, _entry1, _entry2);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isEqual;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_EntryEqual(threadData_t *threadData, modelica_metatype _entry1, modelica_metatype _entry2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_NFConnectionSets_ConnectionSets_EntryEqual(threadData, _entry1, _entry2);
  out_isEqual = omc_mk_icon(_isEqual);
  return out_isEqual;
}

DLLModelDirection
modelica_integer omc_NFConnectionSets_ConnectionSets_EntryHash(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_integer _hash;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hash has no default value.
  _hash = omc_NFConnector_hash(threadData, _entry);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hash;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_EntryHash(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_NFConnectionSets_ConnectionSets_EntryHash(threadData, _entry);
  out_hash = omc_mk_icon(_hash);
  return out_hash;
}

DLLModelDirection
modelica_string omc_NFConnectionSets_ConnectionSets_EntryString(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_string _str = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  omc_string_store(&(_str), omc_NFConnector_toString(threadData, _entry));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_add(threadData_t *threadData, modelica_metatype _entry, modelica_metatype __omcQ_24in_5Fsets, modelica_integer *out_index)
{
  modelica_metatype _sets = NULL;
  modelica_integer _index;
  modelica_metatype _nodes = NULL;
  modelica_metatype _elements = NULL;
  modelica_integer _node_count;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  // _index has no default value.
  // _nodes has no default value.
  // _elements has no default value.
  // _node_count has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _sets;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmp5 = omc_unbox_integer(tmpMeta4);
  _nodes = tmpMeta2;
  _elements = tmpMeta3;
  _node_count = tmp5  /* pattern as ty=Integer */;

  _index = ((modelica_integer) 1) + _node_count;

  if((_index > arrayLength(_nodes)))
  {
    _nodes = omc_Array_expand(threadData, ((modelica_integer)floor((1.4) * (((modelica_real)_index)))), _nodes, omc_mk_integer(((modelica_integer) -1)));
  }

  omc_UnorderedMap_addNew(threadData, _entry, omc_mk_integer(_index), _elements);

  tmpMeta6 = omc_mk_box4(3, &NFConnectionSets_ConnectionSets_Sets_DISJOINT__SETS__desc, _nodes, _elements, omc_mk_integer(_index));
  _sets = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  if (out_index) { *out_index = _index; }
  omc_ret_ = _sets;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_add(threadData_t *threadData, modelica_metatype _entry, modelica_metatype __omcQ_24in_5Fsets, modelica_metatype *out_index)
{
  modelica_integer _index;
  modelica_metatype _sets = NULL;
  _sets = omc_NFConnectionSets_ConnectionSets_add(threadData, _entry, __omcQ_24in_5Fsets, &_index);
  /* skip box _sets; NFConnectionSets.ConnectionSets.Sets */
  if (out_index) { *out_index = omc_mk_icon(_index); }
  return _sets;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_addConnection(threadData_t *threadData, modelica_metatype _connection, modelica_metatype _broken, modelica_metatype __omcQ_24in_5Fsets)
{
  modelica_metatype _sets = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  if(((!listEmpty(_broken)) && omc_NFConnectionSets_ConnectionSets_isBroken(threadData, (OMC_BOX_FIELD(_connection, 2)), (OMC_BOX_FIELD(_connection, 3)), _broken)))
  {
    goto _return;
  }

  _sets = omc_NFConnectionSets_ConnectionSets_merge(threadData, (OMC_BOX_FIELD(_connection, 2)), (OMC_BOX_FIELD(_connection, 3)), _sets);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_addConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fsets)
{
  modelica_metatype _sets = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  _sets = omc_NFConnectionSets_ConnectionSets_addList(threadData, omc_NFConnector_scalarize(threadData, _conn), _sets);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_addList(threadData_t *threadData, modelica_metatype _entries, modelica_metatype __omcQ_24in_5Fsets)
{
  modelica_metatype _sets = NULL;
  modelica_metatype _nodes = NULL;
  modelica_metatype _elements = NULL;
  modelica_integer _node_count;
  modelica_integer _sz;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  // _nodes has no default value.
  // _elements has no default value.
  // _node_count has no default value.
  // _sz has no default value.
  // _index has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _sets;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmp5 = omc_unbox_integer(tmpMeta4);
  _nodes = tmpMeta2;
  _elements = tmpMeta3;
  _node_count = tmp5  /* pattern as ty=Integer */;

  _sz = listLength(_entries);

  _index = ((modelica_integer) 1) + _node_count;

  _node_count = _node_count + _sz;

  if((_node_count > arrayLength(_nodes)))
  {
    _nodes = omc_Array_expand(threadData, ((modelica_integer)floor((1.4) * (((modelica_real)_node_count)))), _nodes, omc_mk_integer(((modelica_integer) -1)));
  }

  {
    modelica_metatype _e;
    for (tmpMeta6 = _entries; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _e = MMC_CAR(tmpMeta6);
      omc_UnorderedMap_addNew(threadData, _e, omc_mk_integer(_index), _elements);

      _index = ((modelica_integer) 1) + _index;
    }
  }

  tmpMeta8 = omc_mk_box4(3, &NFConnectionSets_ConnectionSets_Sets_DISJOINT__SETS__desc, _nodes, _elements, omc_mk_integer(_node_count));
  _sets = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_addScalarConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fsets)
{
  modelica_metatype _sets = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  _sets = omc_NFConnectionSets_ConnectionSets_add(threadData, _conn, _sets, NULL);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_addSingleConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fsets)
{
  modelica_metatype _sets = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  _sets = omc_NFConnectionSets_ConnectionSets_find(threadData, _conn, _sets, NULL);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NFConnectionSets_ConnectionSets_contains(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _sets)
{
  modelica_boolean _found;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _found has no default value.
  _found = isSome(omc_UnorderedMap_get(threadData, _entry, (OMC_BOX_FIELD(_sets, 3))));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _found;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_contains(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _sets)
{
  modelica_boolean _found;
  modelica_metatype out_found;
  _found = omc_NFConnectionSets_ConnectionSets_contains(threadData, _entry, _sets);
  out_found = omc_mk_icon(_found);
  return out_found;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_emptySets(threadData_t *threadData, modelica_integer _setCount)
{
  modelica_metatype _sets = NULL;
  modelica_metatype _nodes = NULL;
  modelica_metatype _elements = NULL;
  modelica_integer _sz;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sets has no default value.
  // _nodes has no default value.
  // _elements has no default value.
  // _sz has no default value.
  _sz = modelica_integer_max((modelica_integer)(_setCount),(modelica_integer)(((modelica_integer) 3)));

  _nodes = arrayCreate(_sz, omc_mk_integer(((modelica_integer) -1)));

  _elements = omc_UnorderedMap_new(threadData, boxvar_NFConnectionSets_ConnectionSets_EntryHash, boxvar_NFConnectionSets_ConnectionSets_EntryEqual, ((modelica_integer) 1));

  tmpMeta1 = omc_mk_box4(3, &NFConnectionSets_ConnectionSets_Sets_DISJOINT__SETS__desc, _nodes, _elements, omc_mk_integer(((modelica_integer) 0)));
  _sets = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_emptySets(threadData_t *threadData, modelica_metatype _setCount)
{
  modelica_integer tmp1;
  modelica_metatype _sets = NULL;
  tmp1 = omc_unbox_integer(_setCount);
  _sets = omc_NFConnectionSets_ConnectionSets_emptySets(threadData, tmp1);
  /* skip box _sets; NFConnectionSets.ConnectionSets.Sets */
  return _sets;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_extractSets(threadData_t *threadData, modelica_metatype _sets, modelica_metatype *out_assignedSets)
{
  modelica_metatype _setsArray = NULL;
  modelica_metatype _assignedSets = NULL;
  modelica_metatype _nodes = NULL;
  modelica_integer _set_idx;
  modelica_integer _idx;
  modelica_metatype _entries = NULL;
  modelica_metatype _e = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _setsArray has no default value.
  // _assignedSets has no default value.
  // _nodes has no default value.
  _set_idx = ((modelica_integer) 0);
  // _idx has no default value.
  // _entries has no default value.
  // _e has no default value.
  _nodes = (OMC_BOX_FIELD(_sets, 2));

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = omc_unbox_integer((OMC_BOX_FIELD(_sets, 4)));
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {

      if((omc_unbox_integer(arrayGet(_nodes,_i) /* DAE.ASUB */) < ((modelica_integer) 0)))
      {
        _set_idx = ((modelica_integer) 1) + _set_idx;

        arrayUpdate(_nodes,_i,omc_mk_integer((-_set_idx)));
      }
    }
  }

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _setsArray = arrayCreate(_set_idx, tmpMeta4);

  _entries = omc_UnorderedMap_toArray(threadData, (OMC_BOX_FIELD(_sets, 3)));

  tmp10 = arrayLength(_entries); tmp11 = ((modelica_integer) -1); tmp12 = ((modelica_integer) 1);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_entries); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {

      /* Pattern-matching assignment */
      tmpMeta5 = arrayGetNoBoundsChecking(_entries, _i);
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
      tmpMeta7 = OMC_BOX_FIELD(tmpMeta5, 2);
      tmp8 = omc_unbox_integer(tmpMeta7);
      _e = tmpMeta6;
      _idx = tmp8  /* pattern as ty=Integer */;

      _set_idx = omc_unbox_integer(arrayGet(_nodes,_idx) /* DAE.ASUB */);

      while(1)
      {
        if(!(_set_idx > ((modelica_integer) 0))) break;
        _set_idx = omc_unbox_integer(arrayGet(_nodes,_set_idx) /* DAE.ASUB */);
      }

      _set_idx = (-_set_idx);

      tmpMeta9 = mmc_mk_cons(_e, arrayGet(_setsArray,_set_idx) /* DAE.ASUB */);
      arrayUpdate(_setsArray,_set_idx,tmpMeta9);
    }
  }

  tmpMeta13 = omc_mk_box4(3, &NFConnectionSets_ConnectionSets_Sets_DISJOINT__SETS__desc, _nodes, (OMC_BOX_FIELD(_sets, 3)), (OMC_BOX_FIELD(_sets, 4)));
  _assignedSets = tmpMeta13;
  _return: OMC_LABEL_UNUSED
  if (out_assignedSets) { *out_assignedSets = _assignedSets; }
  omc_ret_ = _setsArray;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_find(threadData_t *threadData, modelica_metatype _entry, modelica_metatype __omcQ_24in_5Fsets, modelica_integer *out_index)
{
  modelica_metatype _sets = NULL;
  modelica_integer _index;
  modelica_metatype _oindex = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  // _index has no default value.
  // _oindex has no default value.
  _oindex = omc_UnorderedMap_get(threadData, _entry, (OMC_BOX_FIELD(_sets, 3)));

  if(isSome(_oindex))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _oindex;
    if (optionNone(tmpMeta1)) OMC_THROW_INTERNAL();
    tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
    tmp3 = omc_unbox_integer(tmpMeta2);
    _index = tmp3  /* pattern as ty=Integer */;
  }
  else
  {
    _sets = omc_NFConnectionSets_ConnectionSets_add(threadData, _entry, _sets ,&_index);
  }
  _return: OMC_LABEL_UNUSED
  if (out_index) { *out_index = _index; }
  omc_ret_ = _sets;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_find(threadData_t *threadData, modelica_metatype _entry, modelica_metatype __omcQ_24in_5Fsets, modelica_metatype *out_index)
{
  modelica_integer _index;
  modelica_metatype _sets = NULL;
  _sets = omc_NFConnectionSets_ConnectionSets_find(threadData, _entry, __omcQ_24in_5Fsets, &_index);
  /* skip box _sets; NFConnectionSets.ConnectionSets.Sets */
  if (out_index) { *out_index = omc_mk_icon(_index); }
  return _sets;
}

DLLModelDirection
modelica_integer omc_NFConnectionSets_ConnectionSets_findRoot(threadData_t *threadData, modelica_integer _nodeIndex, modelica_metatype _nodes)
{
  modelica_integer _rootIndex;
  modelica_integer _parent;
  modelica_integer _idx;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rootIndex = _nodeIndex;
  _parent = omc_unbox_integer(arrayGet(_nodes,_nodeIndex) /* DAE.ASUB */);
  _idx = _nodeIndex;
  while(1)
  {
    if(!(_parent > ((modelica_integer) 0))) break;
    _rootIndex = _parent;

    _parent = omc_unbox_integer(arrayGet(_nodes,_parent) /* DAE.ASUB */);
  }

  _parent = omc_unbox_integer(arrayGet(_nodes,_nodeIndex) /* DAE.ASUB */);

  while(1)
  {
    if(!(_parent > ((modelica_integer) 0))) break;
    arrayUpdate(_nodes, _idx, omc_mk_integer(_rootIndex));

    _idx = _parent;

    _parent = omc_unbox_integer(arrayGet(_nodes,_parent) /* DAE.ASUB */);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _rootIndex;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_findRoot(threadData_t *threadData, modelica_metatype _nodeIndex, modelica_metatype _nodes)
{
  modelica_integer tmp1;
  modelica_integer _rootIndex;
  modelica_metatype out_rootIndex;
  tmp1 = omc_unbox_integer(_nodeIndex);
  _rootIndex = omc_NFConnectionSets_ConnectionSets_findRoot(threadData, tmp1, _nodes);
  out_rootIndex = omc_mk_icon(_rootIndex);
  return out_rootIndex;
}

DLLModelDirection
modelica_integer omc_NFConnectionSets_ConnectionSets_findSet(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _sets, modelica_metatype *out_updatedSets)
{
  modelica_integer _set;
  modelica_metatype _updatedSets = NULL;
  modelica_integer _index;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  // _updatedSets has no default value.
  // _index has no default value.
  _updatedSets = omc_NFConnectionSets_ConnectionSets_find(threadData, _entry, _sets ,&_index);

  _set = omc_NFConnectionSets_ConnectionSets_findRoot(threadData, _index, (OMC_BOX_FIELD(_updatedSets, 2)));
  _return: OMC_LABEL_UNUSED
  if (out_updatedSets) { *out_updatedSets = _updatedSets; }
  omc_ret_ = _set;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_findSet(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _sets, modelica_metatype *out_updatedSets)
{
  modelica_integer _set;
  modelica_metatype out_set;
  _set = omc_NFConnectionSets_ConnectionSets_findSet(threadData, _entry, _sets, out_updatedSets);
  out_set = omc_mk_icon(_set);
  /* skip box _updatedSets; NFConnectionSets.ConnectionSets.Sets */
  return out_set;
}

DLLModelDirection
modelica_integer omc_NFConnectionSets_ConnectionSets_findSetArrayIndex(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _sets)
{
  modelica_integer _set;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  _set = omc_unbox_integer(omc_UnorderedMap_getOrFail(threadData, _entry, (OMC_BOX_FIELD(_sets, 3))));

  while(1)
  {
    if(!(_set > ((modelica_integer) 0))) break;
    _set = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_sets, 2)),_set) /* DAE.ASUB */);
  }

  _set = (-_set);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _set;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_findSetArrayIndex(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _sets)
{
  modelica_integer _set;
  modelica_metatype out_set;
  _set = omc_NFConnectionSets_ConnectionSets_findSetArrayIndex(threadData, _entry, _sets);
  out_set = omc_mk_icon(_set);
  return out_set;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_fromConnections(threadData_t *threadData, modelica_metatype _connections)
{
  modelica_metatype _sets = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sets has no default value.
  _sets = omc_NFConnectionSets_ConnectionSets_emptySets(threadData, listLength((OMC_BOX_FIELD(_connections, 2))) + listLength((OMC_BOX_FIELD(_connections, 3))));

  if((!omc_Flags_isSet(threadData, _OMC_LIT2)))
  {
    _sets = omc_List_fold(threadData, (OMC_BOX_FIELD(_connections, 3)), boxvar_NFConnectionSets_ConnectionSets_addSingleConnector, _sets);
  }

  _sets = omc_List_fold1(threadData, (OMC_BOX_FIELD(_connections, 2)), boxvar_NFConnectionSets_ConnectionSets_addConnection, (OMC_BOX_FIELD(_connections, 4)), _sets);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_getEntry(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _sets)
{
  modelica_metatype _outEntry = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEntry has no default value.
  _outEntry = omc_UnorderedMap_getKey(threadData, _entry, (OMC_BOX_FIELD(_sets, 3)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outEntry;
  return omc_ret_;
}

DLLModelDirection
modelica_integer omc_NFConnectionSets_ConnectionSets_getNodeCount(threadData_t *threadData, modelica_metatype _sets)
{
  modelica_integer _nodeCount;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _nodeCount = omc_unbox_integer((OMC_BOX_FIELD(_sets, 4)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _nodeCount;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_getNodeCount(threadData_t *threadData, modelica_metatype _sets)
{
  modelica_integer _nodeCount;
  modelica_metatype out_nodeCount;
  _nodeCount = omc_NFConnectionSets_ConnectionSets_getNodeCount(threadData, _sets);
  out_nodeCount = omc_mk_icon(_nodeCount);
  return out_nodeCount;
}

DLLModelDirection
modelica_boolean omc_NFConnectionSets_ConnectionSets_isBroken(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2, modelica_metatype _broken)
{
  modelica_boolean _b;
  modelica_metatype _cr1 = NULL;
  modelica_metatype _cr2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 0 /* false */;
  // _cr1 has no default value.
  // _cr2 has no default value.
  _cr1 = omc_NFConnector_name(threadData, _c1);

  _cr2 = omc_NFConnector_name(threadData, _c2);

  {
    modelica_metatype _c;
    for (tmpMeta1 = _broken; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _c = MMC_CAR(tmpMeta1);
      if(((omc_NFComponentRef_isPrefix(threadData, (OMC_BOX_FIELD(_c, 2)), _cr1) && omc_NFComponentRef_isPrefix(threadData, (OMC_BOX_FIELD(_c, 3)), _cr2)) || (omc_NFComponentRef_isPrefix(threadData, (OMC_BOX_FIELD(_c, 2)), _cr2) && omc_NFComponentRef_isPrefix(threadData, (OMC_BOX_FIELD(_c, 3)), _cr1))))
      {
        _b = 1 /* true */;

        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_isBroken(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2, modelica_metatype _broken)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFConnectionSets_ConnectionSets_isBroken(threadData, _c1, _c2, _broken);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_merge(threadData_t *threadData, modelica_metatype _entry1, modelica_metatype _entry2, modelica_metatype __omcQ_24in_5Fsets)
{
  modelica_metatype _sets = NULL;
  modelica_integer _set1;
  modelica_integer _set2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  // _set1 has no default value.
  // _set2 has no default value.
  _set1 = omc_NFConnectionSets_ConnectionSets_findSet(threadData, _entry1, _sets ,&_sets);

  _set2 = omc_NFConnectionSets_ConnectionSets_findSet(threadData, _entry2, _sets ,&_sets);

  _sets = omc_NFConnectionSets_ConnectionSets_union(threadData, _set1, _set2, _sets);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}

DLLModelDirection
void omc_NFConnectionSets_ConnectionSets_printSets(threadData_t *threadData, modelica_metatype _sets)
{
  modelica_metatype _nodes = NULL;
  modelica_metatype _entries = NULL;
  modelica_metatype _e = NULL;
  modelica_integer _i;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _nodes has no default value.
  // _entries has no default value.
  // _e has no default value.
  // _i has no default value.
  tmp1 = stringAppend(intString(omc_unbox_integer((OMC_BOX_FIELD(_sets, 4)))),_OMC_LIT3);
  fputs(omc_string_data(tmp1),stdout);

  _nodes = (OMC_BOX_FIELD(_sets, 2));

  _entries = omc_UnorderedMap_toList(threadData, (OMC_BOX_FIELD(_sets, 3)));

  {
    modelica_metatype _p;
    for (tmpMeta2 = _entries; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _p = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _p;
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta3, 2);
      tmp6 = omc_unbox_integer(tmpMeta5);
      _e = tmpMeta4;
      _i = tmp6  /* pattern as ty=Integer */;

      fputs(omc_string_data(_OMC_LIT4),stdout);

      tmp7 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
      fputs(omc_string_data(tmp7),stdout);

      fputs(omc_string_data(_OMC_LIT5),stdout);

      fputs(omc_string_data(omc_NFConnectionSets_ConnectionSets_EntryString(threadData, _e)),stdout);

      fputs(omc_string_data(_OMC_LIT6),stdout);

      tmp8 = modelica_integer_to_modelica_string(omc_unbox_integer(arrayGet(_nodes,_i) /* DAE.ASUB */), ((modelica_integer) 0), 1 /* true */);
      fputs(omc_string_data(tmp8),stdout);

      fputs(omc_string_data(_OMC_LIT7),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_NFConnectionSets_ConnectionSets_union(threadData_t *threadData, modelica_integer _set1, modelica_integer _set2, modelica_metatype __omcQ_24in_5Fsets)
{
  modelica_metatype _sets = NULL;
  modelica_integer _rank1;
  modelica_integer _rank2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sets = __omcQ_24in_5Fsets;
  // _rank1 has no default value.
  // _rank2 has no default value.
  if((_set1 != _set2))
  {
    _rank1 = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_sets, 2)),_set1) /* DAE.ASUB */);

    _rank2 = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_sets, 2)),_set2) /* DAE.ASUB */);

    if((_rank1 > _rank2))
    {
      arrayUpdate((OMC_BOX_FIELD(_sets, 2)), _set2, omc_mk_integer(_set1));
    }
    else
    {
      if((_rank1 < _rank2))
      {
        arrayUpdate((OMC_BOX_FIELD(_sets, 2)), _set1, omc_mk_integer(_set2));
      }
      else
      {
        arrayUpdate((OMC_BOX_FIELD(_sets, 2)), _set1, omc_mk_integer(((modelica_integer) -1) + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_sets, 2)),_set1) /* DAE.ASUB */))));

        arrayUpdate((OMC_BOX_FIELD(_sets, 2)), _set2, omc_mk_integer(_set1));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sets;
  return omc_ret_;
}
modelica_metatype boxptr_NFConnectionSets_ConnectionSets_union(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2, modelica_metatype __omcQ_24in_5Fsets)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _sets = NULL;
  tmp1 = omc_unbox_integer(_set1);
  tmp2 = omc_unbox_integer(_set2);
  _sets = omc_NFConnectionSets_ConnectionSets_union(threadData, tmp1, tmp2, __omcQ_24in_5Fsets);
  /* skip box _sets; NFConnectionSets.ConnectionSets.Sets */
  return _sets;
}

