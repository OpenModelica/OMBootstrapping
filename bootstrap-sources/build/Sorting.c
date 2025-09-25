#include "omc_simulation_settings.h"
#include "Sorting.h"
#include "util/modelica.h"

#include "Sorting_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Sorting_StrongConnectTransposed(threadData_t *threadData, modelica_metatype _mT, modelica_metatype _ass2, modelica_integer _eqn, modelica_metatype _stack, modelica_integer _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_integer *out_outIndex, modelica_metatype *out_outComponents);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Sorting_StrongConnectTransposed(threadData_t *threadData, modelica_metatype _mT, modelica_metatype _ass2, modelica_metatype _eqn, modelica_metatype _stack, modelica_metatype _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_metatype *out_outIndex, modelica_metatype *out_outComponents);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Sorting_StrongConnectTransposed,2,0) {(void*) boxptr_Sorting_StrongConnectTransposed,0}};
#define boxvar_Sorting_StrongConnectTransposed MMC_REFSTRUCTLIT(boxvar_lit_Sorting_StrongConnectTransposed)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Sorting_StrongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_integer _eqn, modelica_metatype _stack, modelica_integer _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_integer *out_outIndex, modelica_metatype *out_outComponents);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Sorting_StrongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _eqn, modelica_metatype _stack, modelica_metatype _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_metatype *out_outIndex, modelica_metatype *out_outComponents);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Sorting_StrongConnect,2,0) {(void*) boxptr_Sorting_StrongConnect,0}};
#define boxvar_Sorting_StrongConnect MMC_REFSTRUCTLIT(boxvar_lit_Sorting_StrongConnect)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Sorting_StrongConnectTransposed(threadData_t *threadData, modelica_metatype _mT, modelica_metatype _ass2, modelica_integer _eqn, modelica_metatype _stack, modelica_integer _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_integer *out_outIndex, modelica_metatype *out_outComponents)
{
  modelica_metatype _outStack = NULL;
  modelica_integer _outIndex;
  modelica_metatype _outComponents = NULL;
  modelica_metatype _SCC = NULL;
  modelica_integer _var;
  modelica_integer _eqn2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outStack = _stack;
  _outIndex = _index;
  _outComponents = _inComponents;
  // _SCC has no default value.
  // _var has no default value.
  // _eqn2 has no default value.
  arrayUpdate(_number, _eqn, mmc_mk_integer(_outIndex));

  arrayUpdate(_lowlink, _eqn, mmc_mk_integer(_outIndex));

  arrayUpdate(_onStack, _eqn, mmc_mk_boolean(1 /* true */));

  _outIndex = ((modelica_integer) 1) + _outIndex;

  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_eqn), _outStack);
  _outStack = tmpMeta1;

  _var = mmc_unbox_integer(arrayGet(_ass2,_eqn) /* DAE.ASUB */);

  if((_var > ((modelica_integer) 0)))
  {
    {
      modelica_metatype _eqn2;
      for (tmpMeta2 = arrayGet(_mT,_var) /* DAE.ASUB */; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _eqn2 = MMC_CAR(tmpMeta2);
        if(((mmc_unbox_integer(_eqn2) > ((modelica_integer) 0)) && (mmc_unbox_integer(_eqn2) != _eqn)))
        {
          if((mmc_unbox_integer(arrayGet(_number,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */) == ((modelica_integer) -1)))
          {
            _outStack = omc_Sorting_StrongConnectTransposed(threadData, _mT, _ass2, mmc_unbox_integer(_eqn2), _outStack, _outIndex, _number, _lowlink, _onStack, _outComponents ,&_outIndex ,&_outComponents);

            arrayUpdate(_lowlink, _eqn, mmc_mk_integer(modelica_integer_min((modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */)),(modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */)))));
          }
          else
          {
            if(mmc_unbox_boolean(arrayGet(_onStack,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */))
            {
              arrayUpdate(_lowlink, _eqn, mmc_mk_integer(modelica_integer_min((modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */)),(modelica_integer)(mmc_unbox_integer(arrayGet(_number,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */)))));
            }
          }
        }
      }
    }
  }

  if((mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */) == mmc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */)))
  {
    /* Pattern-matching assignment */
    tmpMeta4 = _outStack;
    if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
    tmpMeta5 = MMC_CAR(tmpMeta4);
    tmpMeta6 = MMC_CDR(tmpMeta4);
    tmp7 = mmc_unbox_integer(tmpMeta5);
    _eqn2 = tmp7  /* pattern as ty=Integer */;
    _outStack = tmpMeta6;

    arrayUpdate(_onStack, _eqn2, mmc_mk_boolean(0 /* false */));

    tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_eqn2), MMC_REFSTRUCTLIT(mmc_nil));
    _SCC = tmpMeta8;

    while(1)
    {
      if(!(_eqn != _eqn2)) break;
      /* Pattern-matching assignment */
      tmpMeta9 = _outStack;
      if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
      tmpMeta10 = MMC_CAR(tmpMeta9);
      tmpMeta11 = MMC_CDR(tmpMeta9);
      tmp12 = mmc_unbox_integer(tmpMeta10);
      _eqn2 = tmp12  /* pattern as ty=Integer */;
      _outStack = tmpMeta11;

      arrayUpdate(_onStack, _eqn2, mmc_mk_boolean(0 /* false */));

      tmpMeta13 = mmc_mk_cons(mmc_mk_integer(_eqn2), _SCC);
      _SCC = tmpMeta13;
    }

    tmpMeta14 = mmc_mk_cons(listReverseInPlace(_SCC), _outComponents);
    _outComponents = tmpMeta14;
  }
  _return: OMC_LABEL_UNUSED
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outComponents) { *out_outComponents = _outComponents; }
  return _outStack;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Sorting_StrongConnectTransposed(threadData_t *threadData, modelica_metatype _mT, modelica_metatype _ass2, modelica_metatype _eqn, modelica_metatype _stack, modelica_metatype _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_metatype *out_outIndex, modelica_metatype *out_outComponents)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outIndex;
  modelica_metatype _outStack = NULL;
  tmp1 = mmc_unbox_integer(_eqn);
  tmp2 = mmc_unbox_integer(_index);
  _outStack = omc_Sorting_StrongConnectTransposed(threadData, _mT, _ass2, tmp1, _stack, tmp2, _number, _lowlink, _onStack, _inComponents, &_outIndex, out_outComponents);
  /* skip box _outStack; list<#Integer> */
  if (out_outIndex) { *out_outIndex = mmc_mk_icon(_outIndex); }
  /* skip box _outComponents; list<list<#Integer>> */
  return _outStack;
}

DLLDirection
modelica_metatype omc_Sorting_TarjanTransposed(threadData_t *threadData, modelica_metatype _mT, modelica_metatype _ass2)
{
  modelica_metatype _outComponents = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype _stack = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _number = NULL;
  modelica_metatype _lowlink = NULL;
  modelica_metatype _onStack = NULL;
  modelica_integer _N;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outComponents = tmpMeta1;
  _index = ((modelica_integer) 0);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _stack = tmpMeta2;
  // _number has no default value.
  // _lowlink has no default value.
  // _onStack has no default value.
  _N = arrayLength(_ass2);
  _number = arrayCreate(_N, mmc_mk_integer(((modelica_integer) -1)));

  _lowlink = arrayCreate(_N, mmc_mk_integer(((modelica_integer) -1)));

  _onStack = arrayCreate(_N, mmc_mk_boolean(0 /* false */));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _N;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _eqn;
    for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp3, tmp5); _eqn += tmp4)
    {
      if(((mmc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */) == ((modelica_integer) -1)) && (mmc_unbox_integer(arrayGet(_ass2,_eqn) /* DAE.ASUB */) > ((modelica_integer) 0))))
      {
        _stack = omc_Sorting_StrongConnectTransposed(threadData, _mT, _ass2, _eqn, _stack, _index, _number, _lowlink, _onStack, _outComponents ,&_index ,&_outComponents);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outComponents;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Sorting_StrongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_integer _eqn, modelica_metatype _stack, modelica_integer _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_integer *out_outIndex, modelica_metatype *out_outComponents)
{
  modelica_metatype _outStack = NULL;
  modelica_integer _outIndex;
  modelica_metatype _outComponents = NULL;
  modelica_metatype _SCC = NULL;
  modelica_integer _eqn2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outStack = _stack;
  _outIndex = _index;
  _outComponents = _inComponents;
  // _SCC has no default value.
  // _eqn2 has no default value.
  arrayUpdate(_number, _eqn, mmc_mk_integer(_outIndex));

  arrayUpdate(_lowlink, _eqn, mmc_mk_integer(_outIndex));

  arrayUpdate(_onStack, _eqn, mmc_mk_boolean(1 /* true */));

  _outIndex = ((modelica_integer) 1) + _outIndex;

  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_eqn), _outStack);
  _outStack = tmpMeta1;

  {
    modelica_metatype _eqn2;
    for (tmpMeta2 = omc_Matching_incomingEquations(threadData, _eqn, _m, _ass1); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqn2 = MMC_CAR(tmpMeta2);
      if((mmc_unbox_integer(arrayGet(_number,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        _outStack = omc_Sorting_StrongConnect(threadData, _m, _ass1, mmc_unbox_integer(_eqn2), _outStack, _outIndex, _number, _lowlink, _onStack, _outComponents ,&_outIndex ,&_outComponents);

        arrayUpdate(_lowlink, _eqn, mmc_mk_integer(modelica_integer_min((modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */)),(modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */)))));
      }
      else
      {
        if(mmc_unbox_boolean(arrayGet(_onStack,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */))
        {
          arrayUpdate(_lowlink, _eqn, mmc_mk_integer(modelica_integer_min((modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */)),(modelica_integer)(mmc_unbox_integer(arrayGet(_number,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */)))));
        }
      }
    }
  }

  if((mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */) == mmc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */)))
  {
    /* Pattern-matching assignment */
    tmpMeta4 = _outStack;
    if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
    tmpMeta5 = MMC_CAR(tmpMeta4);
    tmpMeta6 = MMC_CDR(tmpMeta4);
    tmp7 = mmc_unbox_integer(tmpMeta5);
    _eqn2 = tmp7  /* pattern as ty=Integer */;
    _outStack = tmpMeta6;

    arrayUpdate(_onStack, _eqn2, mmc_mk_boolean(0 /* false */));

    tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_eqn2), MMC_REFSTRUCTLIT(mmc_nil));
    _SCC = tmpMeta8;

    while(1)
    {
      if(!(_eqn != _eqn2)) break;
      /* Pattern-matching assignment */
      tmpMeta9 = _outStack;
      if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
      tmpMeta10 = MMC_CAR(tmpMeta9);
      tmpMeta11 = MMC_CDR(tmpMeta9);
      tmp12 = mmc_unbox_integer(tmpMeta10);
      _eqn2 = tmp12  /* pattern as ty=Integer */;
      _outStack = tmpMeta11;

      arrayUpdate(_onStack, _eqn2, mmc_mk_boolean(0 /* false */));

      tmpMeta13 = mmc_mk_cons(mmc_mk_integer(_eqn2), _SCC);
      _SCC = tmpMeta13;
    }

    tmpMeta14 = mmc_mk_cons(listReverseInPlace(_SCC), _outComponents);
    _outComponents = tmpMeta14;
  }
  _return: OMC_LABEL_UNUSED
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outComponents) { *out_outComponents = _outComponents; }
  return _outStack;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Sorting_StrongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _eqn, modelica_metatype _stack, modelica_metatype _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_metatype *out_outIndex, modelica_metatype *out_outComponents)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outIndex;
  modelica_metatype _outStack = NULL;
  tmp1 = mmc_unbox_integer(_eqn);
  tmp2 = mmc_unbox_integer(_index);
  _outStack = omc_Sorting_StrongConnect(threadData, _m, _ass1, tmp1, _stack, tmp2, _number, _lowlink, _onStack, _inComponents, &_outIndex, out_outComponents);
  /* skip box _outStack; list<#Integer> */
  if (out_outIndex) { *out_outIndex = mmc_mk_icon(_outIndex); }
  /* skip box _outComponents; list<list<#Integer>> */
  return _outStack;
}

DLLDirection
modelica_metatype omc_Sorting_Tarjan(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_integer _N)
{
  modelica_metatype _outComponents = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype _stack = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _number = NULL;
  modelica_metatype _lowlink = NULL;
  modelica_metatype _onStack = NULL;
  modelica_integer _eqn;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outComponents = tmpMeta1;
  _index = ((modelica_integer) 0);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _stack = tmpMeta2;
  // _number has no default value.
  // _lowlink has no default value.
  // _onStack has no default value.
  // _eqn has no default value.
  _number = arrayCreate(_N, mmc_mk_integer(((modelica_integer) -1)));

  _lowlink = arrayCreate(_N, mmc_mk_integer(((modelica_integer) -1)));

  _onStack = arrayCreate(_N, mmc_mk_boolean(0 /* false */));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_ass1);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _var;
    for(_var = ((modelica_integer) 1); in_range_integer(_var, tmp3, tmp5); _var += tmp4)
    {
      _eqn = mmc_unbox_integer(arrayGet(_ass1,_var) /* DAE.ASUB */);

      if(((_eqn > ((modelica_integer) 0)) && (mmc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */) == ((modelica_integer) -1))))
      {
        _stack = omc_Sorting_StrongConnect(threadData, _m, _ass1, _eqn, _stack, _index, _number, _lowlink, _onStack, _outComponents ,&_index ,&_outComponents);
      }
    }
  }

  omc_GCExt_free(threadData, _number);

  omc_GCExt_free(threadData, _lowlink);

  omc_GCExt_free(threadData, _onStack);

  _outComponents = listReverse(_outComponents);
  _return: OMC_LABEL_UNUSED
  return _outComponents;
}
modelica_metatype boxptr_Sorting_Tarjan(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _N)
{
  modelica_integer tmp1;
  modelica_metatype _outComponents = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_N);
  _outComponents = omc_Sorting_Tarjan(threadData, _m, _ass1, tmp1);
  /* skip box _outComponents; list<list<#Integer>> */
  return _outComponents;
}

