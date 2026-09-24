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
  modelica_metatype _callStack = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _SCC = NULL;
  modelica_metatype _successors = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _current;
  modelica_integer _var;
  modelica_integer _eqn2;
  modelica_integer _parent;
  modelica_boolean _entering;
  modelica_boolean _descended;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta8;
  modelica_boolean tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_integer tmp25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_integer tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outStack = _stack;
  _outIndex = _index;
  _outComponents = _inComponents;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _callStack = tmpMeta1;
  // _SCC has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _successors = tmpMeta2;
  _current = _eqn;
  // _var has no default value.
  // _eqn2 has no default value.
  // _parent has no default value.
  _entering = 1 /* true */;
  // _descended has no default value.
  while(1)
  {
    if(!1 /* true */) break;
    if(_entering)
    {
      _entering = 0 /* false */;

      arrayUpdate(_number, _current, omc_mk_integer(_outIndex));

      arrayUpdate(_lowlink, _current, omc_mk_integer(_outIndex));

      arrayUpdate(_onStack, _current, omc_mk_boolean(1 /* true */));

      _outIndex = ((modelica_integer) 1) + _outIndex;

      tmpMeta3 = mmc_mk_cons(omc_mk_integer(_current), _outStack);
      _outStack = tmpMeta3;

      _var = omc_unbox_integer(arrayGet(_ass2,_current) /* DAE.ASUB */);

      tmp9 = (modelica_boolean)(_var > ((modelica_integer) 0));
      if(tmp9)
      {
        {
          modelica_metatype __omcQ_24tmpVar3;
          modelica_metatype* tmp5;
          modelica_metatype tmpMeta6;
          modelica_metatype __omcQ_24tmpVar2;
          modelica_integer tmp7;
          modelica_metatype _e_loopVar = 0;
          modelica_metatype _e;
          _e_loopVar = arrayGet(_mT,_var) /* DAE.ASUB */;
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar3 = tmpMeta6; /* defaultValue */
          tmp5 = &__omcQ_24tmpVar3;
          while(1) {
            tmp7 = 1;
            while (!listEmpty(_e_loopVar)) {
              _e = MMC_CAR(_e_loopVar);
              _e_loopVar = MMC_CDR(_e_loopVar);
              if (((omc_unbox_integer(_e) > ((modelica_integer) 0)) && (omc_unbox_integer(_e) != _current))) {
                tmp7--;
                break;
              }
            }
            if (tmp7 == 0) {
              __omcQ_24tmpVar2 = _e;
              *tmp5 = mmc_mk_cons(__omcQ_24tmpVar2,0);
              tmp5 = &MMC_CDR(*tmp5);
            } else if (tmp7 == 1) {
              break;
            } else {
              OMC_THROW_INTERNAL();
            }
          }
          *tmp5 = mmc_mk_nil();
          tmpMeta4 = __omcQ_24tmpVar3;
        }
        tmpMeta10 = tmpMeta4;
      }
      else
      {
        tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta10 = tmpMeta8;
      }
      _successors = tmpMeta10;
    }

    _descended = 0 /* false */;

    while(1)
    {
      if(!(!listEmpty(_successors))) break;
      /* Pattern-matching assignment */
      tmpMeta11 = _successors;
      if (listEmpty(tmpMeta11)) OMC_THROW_INTERNAL();
      tmpMeta12 = MMC_CAR(tmpMeta11);
      tmpMeta13 = MMC_CDR(tmpMeta11);
      tmp14 = omc_unbox_integer(tmpMeta12);
      _eqn2 = tmp14  /* pattern as ty=Integer */;
      _successors = tmpMeta13;

      if((omc_unbox_integer(arrayGet(_number,_eqn2) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        tmpMeta16 = omc_mk_box2(0, omc_mk_integer(_current), _successors);
        tmpMeta15 = mmc_mk_cons(tmpMeta16, _callStack);
        _callStack = tmpMeta15;

        _current = _eqn2;

        _entering = 1 /* true */;

        _descended = 1 /* true */;

        break;
      }
      else
      {
        if(omc_unbox_boolean(arrayGet(_onStack,_eqn2) /* DAE.ASUB */))
        {
          arrayUpdate(_lowlink, _current, omc_mk_integer(modelica_integer_min((modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_current) /* DAE.ASUB */)),(modelica_integer)(omc_unbox_integer(arrayGet(_number,_eqn2) /* DAE.ASUB */)))));
        }
      }
    }

    if((!_descended))
    {
      if((omc_unbox_integer(arrayGet(_lowlink,_current) /* DAE.ASUB */) == omc_unbox_integer(arrayGet(_number,_current) /* DAE.ASUB */)))
      {
        /* Pattern-matching assignment */
        tmpMeta17 = _outStack;
        if (listEmpty(tmpMeta17)) OMC_THROW_INTERNAL();
        tmpMeta18 = MMC_CAR(tmpMeta17);
        tmpMeta19 = MMC_CDR(tmpMeta17);
        tmp20 = omc_unbox_integer(tmpMeta18);
        _eqn2 = tmp20  /* pattern as ty=Integer */;
        _outStack = tmpMeta19;

        arrayUpdate(_onStack, _eqn2, omc_mk_boolean(0 /* false */));

        tmpMeta21 = mmc_mk_cons(omc_mk_integer(_eqn2), MMC_REFSTRUCTLIT(mmc_nil));
        _SCC = tmpMeta21;

        while(1)
        {
          if(!(_current != _eqn2)) break;
          /* Pattern-matching assignment */
          tmpMeta22 = _outStack;
          if (listEmpty(tmpMeta22)) OMC_THROW_INTERNAL();
          tmpMeta23 = MMC_CAR(tmpMeta22);
          tmpMeta24 = MMC_CDR(tmpMeta22);
          tmp25 = omc_unbox_integer(tmpMeta23);
          _eqn2 = tmp25  /* pattern as ty=Integer */;
          _outStack = tmpMeta24;

          arrayUpdate(_onStack, _eqn2, omc_mk_boolean(0 /* false */));

          tmpMeta26 = mmc_mk_cons(omc_mk_integer(_eqn2), _SCC);
          _SCC = tmpMeta26;
        }

        tmpMeta27 = mmc_mk_cons(listReverseInPlace(_SCC), _outComponents);
        _outComponents = tmpMeta27;
      }

      if(listEmpty(_callStack))
      {
        break;
      }

      /* Pattern-matching assignment */
      tmpMeta28 = _callStack;
      if (listEmpty(tmpMeta28)) OMC_THROW_INTERNAL();
      tmpMeta29 = MMC_CAR(tmpMeta28);
      tmpMeta30 = MMC_CDR(tmpMeta28);
      tmpMeta31 = OMC_BOX_FIELD(tmpMeta29, 1);
      tmp32 = omc_unbox_integer(tmpMeta31);
      tmpMeta33 = OMC_BOX_FIELD(tmpMeta29, 2);
      _parent = tmp32  /* pattern as ty=Integer */;
      _successors = tmpMeta33;
      _callStack = tmpMeta30;

      arrayUpdate(_lowlink, _parent, omc_mk_integer(modelica_integer_min((modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_parent) /* DAE.ASUB */)),(modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_current) /* DAE.ASUB */)))));

      _current = _parent;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outComponents) { *out_outComponents = _outComponents; }
  omc_ret_ = _outStack;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Sorting_StrongConnectTransposed(threadData_t *threadData, modelica_metatype _mT, modelica_metatype _ass2, modelica_metatype _eqn, modelica_metatype _stack, modelica_metatype _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_metatype *out_outIndex, modelica_metatype *out_outComponents)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outIndex;
  modelica_metatype _outStack = NULL;
  tmp1 = omc_unbox_integer(_eqn);
  tmp2 = omc_unbox_integer(_index);
  _outStack = omc_Sorting_StrongConnectTransposed(threadData, _mT, _ass2, tmp1, _stack, tmp2, _number, _lowlink, _onStack, _inComponents, &_outIndex, out_outComponents);
  /* skip box _outStack; list<#Integer> */
  if (out_outIndex) { *out_outIndex = omc_mk_icon(_outIndex); }
  /* skip box _outComponents; list<list<#Integer>> */
  return _outStack;
}

DLLModelDirection
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
  modelica_metatype omc_ret_;
  OMC_SO();
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
  _number = arrayCreate(_N, omc_mk_integer(((modelica_integer) -1)));

  _lowlink = arrayCreate(_N, omc_mk_integer(((modelica_integer) -1)));

  _onStack = arrayCreate(_N, omc_mk_boolean(0 /* false */));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _N;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _eqn;
    for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp3, tmp5); _eqn += tmp4)
    {

      if(((omc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */) == ((modelica_integer) -1)) && (omc_unbox_integer(arrayGet(_ass2,_eqn) /* DAE.ASUB */) > ((modelica_integer) 0))))
      {
        _stack = omc_Sorting_StrongConnectTransposed(threadData, _mT, _ass2, _eqn, _stack, _index, _number, _lowlink, _onStack, _outComponents ,&_index ,&_outComponents);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outComponents;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Sorting_StrongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_integer _eqn, modelica_metatype _stack, modelica_integer _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_integer *out_outIndex, modelica_metatype *out_outComponents)
{
  modelica_metatype _outStack = NULL;
  modelica_integer _outIndex;
  modelica_metatype _outComponents = NULL;
  modelica_metatype _callStack = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _SCC = NULL;
  modelica_metatype _successors = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _current;
  modelica_integer _eqn2;
  modelica_integer _parent;
  modelica_boolean _entering;
  modelica_boolean _descended;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_integer tmp25;
  modelica_metatype tmpMeta26;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outStack = _stack;
  _outIndex = _index;
  _outComponents = _inComponents;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _callStack = tmpMeta1;
  // _SCC has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _successors = tmpMeta2;
  _current = _eqn;
  // _eqn2 has no default value.
  // _parent has no default value.
  _entering = 1 /* true */;
  // _descended has no default value.
  while(1)
  {
    if(!1 /* true */) break;
    if(_entering)
    {
      _entering = 0 /* false */;

      arrayUpdate(_number, _current, omc_mk_integer(_outIndex));

      arrayUpdate(_lowlink, _current, omc_mk_integer(_outIndex));

      arrayUpdate(_onStack, _current, omc_mk_boolean(1 /* true */));

      _outIndex = ((modelica_integer) 1) + _outIndex;

      tmpMeta3 = mmc_mk_cons(omc_mk_integer(_current), _outStack);
      _outStack = tmpMeta3;

      _successors = omc_Matching_incomingEquations(threadData, _current, _m, _ass1);
    }

    _descended = 0 /* false */;

    while(1)
    {
      if(!(!listEmpty(_successors))) break;
      /* Pattern-matching assignment */
      tmpMeta4 = _successors;
      if (listEmpty(tmpMeta4)) OMC_THROW_INTERNAL();
      tmpMeta5 = MMC_CAR(tmpMeta4);
      tmpMeta6 = MMC_CDR(tmpMeta4);
      tmp7 = omc_unbox_integer(tmpMeta5);
      _eqn2 = tmp7  /* pattern as ty=Integer */;
      _successors = tmpMeta6;

      if((omc_unbox_integer(arrayGet(_number,_eqn2) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        tmpMeta9 = omc_mk_box2(0, omc_mk_integer(_current), _successors);
        tmpMeta8 = mmc_mk_cons(tmpMeta9, _callStack);
        _callStack = tmpMeta8;

        _current = _eqn2;

        _entering = 1 /* true */;

        _descended = 1 /* true */;

        break;
      }
      else
      {
        if(omc_unbox_boolean(arrayGet(_onStack,_eqn2) /* DAE.ASUB */))
        {
          arrayUpdate(_lowlink, _current, omc_mk_integer(modelica_integer_min((modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_current) /* DAE.ASUB */)),(modelica_integer)(omc_unbox_integer(arrayGet(_number,_eqn2) /* DAE.ASUB */)))));
        }
      }
    }

    if((!_descended))
    {
      if((omc_unbox_integer(arrayGet(_lowlink,_current) /* DAE.ASUB */) == omc_unbox_integer(arrayGet(_number,_current) /* DAE.ASUB */)))
      {
        /* Pattern-matching assignment */
        tmpMeta10 = _outStack;
        if (listEmpty(tmpMeta10)) OMC_THROW_INTERNAL();
        tmpMeta11 = MMC_CAR(tmpMeta10);
        tmpMeta12 = MMC_CDR(tmpMeta10);
        tmp13 = omc_unbox_integer(tmpMeta11);
        _eqn2 = tmp13  /* pattern as ty=Integer */;
        _outStack = tmpMeta12;

        arrayUpdate(_onStack, _eqn2, omc_mk_boolean(0 /* false */));

        tmpMeta14 = mmc_mk_cons(omc_mk_integer(_eqn2), MMC_REFSTRUCTLIT(mmc_nil));
        _SCC = tmpMeta14;

        while(1)
        {
          if(!(_current != _eqn2)) break;
          /* Pattern-matching assignment */
          tmpMeta15 = _outStack;
          if (listEmpty(tmpMeta15)) OMC_THROW_INTERNAL();
          tmpMeta16 = MMC_CAR(tmpMeta15);
          tmpMeta17 = MMC_CDR(tmpMeta15);
          tmp18 = omc_unbox_integer(tmpMeta16);
          _eqn2 = tmp18  /* pattern as ty=Integer */;
          _outStack = tmpMeta17;

          arrayUpdate(_onStack, _eqn2, omc_mk_boolean(0 /* false */));

          tmpMeta19 = mmc_mk_cons(omc_mk_integer(_eqn2), _SCC);
          _SCC = tmpMeta19;
        }

        tmpMeta20 = mmc_mk_cons(listReverseInPlace(_SCC), _outComponents);
        _outComponents = tmpMeta20;
      }

      if(listEmpty(_callStack))
      {
        break;
      }

      /* Pattern-matching assignment */
      tmpMeta21 = _callStack;
      if (listEmpty(tmpMeta21)) OMC_THROW_INTERNAL();
      tmpMeta22 = MMC_CAR(tmpMeta21);
      tmpMeta23 = MMC_CDR(tmpMeta21);
      tmpMeta24 = OMC_BOX_FIELD(tmpMeta22, 1);
      tmp25 = omc_unbox_integer(tmpMeta24);
      tmpMeta26 = OMC_BOX_FIELD(tmpMeta22, 2);
      _parent = tmp25  /* pattern as ty=Integer */;
      _successors = tmpMeta26;
      _callStack = tmpMeta23;

      arrayUpdate(_lowlink, _parent, omc_mk_integer(modelica_integer_min((modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_parent) /* DAE.ASUB */)),(modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_current) /* DAE.ASUB */)))));

      _current = _parent;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outComponents) { *out_outComponents = _outComponents; }
  omc_ret_ = _outStack;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Sorting_StrongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _eqn, modelica_metatype _stack, modelica_metatype _index, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype _inComponents, modelica_metatype *out_outIndex, modelica_metatype *out_outComponents)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outIndex;
  modelica_metatype _outStack = NULL;
  tmp1 = omc_unbox_integer(_eqn);
  tmp2 = omc_unbox_integer(_index);
  _outStack = omc_Sorting_StrongConnect(threadData, _m, _ass1, tmp1, _stack, tmp2, _number, _lowlink, _onStack, _inComponents, &_outIndex, out_outComponents);
  /* skip box _outStack; list<#Integer> */
  if (out_outIndex) { *out_outIndex = omc_mk_icon(_outIndex); }
  /* skip box _outComponents; list<list<#Integer>> */
  return _outStack;
}

DLLModelDirection
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
  modelica_metatype omc_ret_;
  OMC_SO();
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
  _number = arrayCreate(_N, omc_mk_integer(((modelica_integer) -1)));

  _lowlink = arrayCreate(_N, omc_mk_integer(((modelica_integer) -1)));

  _onStack = arrayCreate(_N, omc_mk_boolean(0 /* false */));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_ass1);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _var;
    for(_var = ((modelica_integer) 1); in_range_integer(_var, tmp3, tmp5); _var += tmp4)
    {

      _eqn = omc_unbox_integer(arrayGet(_ass1,_var) /* DAE.ASUB */);

      if(((_eqn > ((modelica_integer) 0)) && (omc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */) == ((modelica_integer) -1))))
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
  omc_ret_ = _outComponents;
  return omc_ret_;
}
modelica_metatype boxptr_Sorting_Tarjan(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _N)
{
  modelica_integer tmp1;
  modelica_metatype _outComponents = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_N);
  _outComponents = omc_Sorting_Tarjan(threadData, _m, _ass1, tmp1);
  /* skip box _outComponents; list<list<#Integer>> */
  return _outComponents;
}

