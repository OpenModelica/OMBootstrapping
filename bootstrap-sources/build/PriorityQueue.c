#include "omc_simulation_settings.h"
#include "PriorityQueue.h"
#include "util/modelica.h"

#include "PriorityQueue_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PriorityQueue_getMin(threadData_t *threadData, modelica_metatype _ts, modelica_metatype *out_ots);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_getMin,2,0) {(void*) boxptr_PriorityQueue_getMin,0}};
#define boxvar_PriorityQueue_getMin MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_getMin)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PriorityQueue_ins(threadData_t *threadData, modelica_metatype _t, modelica_metatype _its);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_ins,2,0) {(void*) boxptr_PriorityQueue_ins,0}};
#define boxvar_PriorityQueue_ins MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_ins)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PriorityQueue_link(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_link,2,0) {(void*) boxptr_PriorityQueue_link,0}};
#define boxvar_PriorityQueue_link MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_link)
PROTECTED_FUNCTION_STATIC modelica_integer omc_PriorityQueue_rank(threadData_t *threadData, modelica_metatype _tree);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PriorityQueue_rank(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_rank,2,0) {(void*) boxptr_PriorityQueue_rank,0}};
#define boxvar_PriorityQueue_rank MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_rank)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PriorityQueue_root(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PriorityQueue_root,2,0) {(void*) boxptr_PriorityQueue_root,0}};
#define boxvar_PriorityQueue_root MMC_REFSTRUCTLIT(boxvar_lit_PriorityQueue_root)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PriorityQueue_getMin(threadData_t *threadData, modelica_metatype _ts, modelica_metatype *out_ots)
{
  modelica_metatype _min = NULL;
  modelica_metatype _ots = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _min has no default value.
  // _ots has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ts;
    {
      modelica_metatype _t = NULL;
      modelica_metatype _t1 = NULL;
      modelica_metatype _t2 = NULL;
      modelica_metatype _ts1 = NULL;
      modelica_metatype _ts2 = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _t1 has no default value.
      // _t2 has no default value.
      // _ts1 has no default value.
      // _ts2 has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _t = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _t;
          tmpMeta[0+1] = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          _t1 = tmpMeta9;
          _ts1 = tmpMeta10;
          /* Pattern matching succeeded */
          _t2 = omc_PriorityQueue_getMin(threadData, _ts1 ,&_ts2);

          _b = omc_PriorityQueue_compareElement(threadData, omc_PriorityQueue_root(threadData, _t1), omc_PriorityQueue_root(threadData, _t2));
          tmp12 = (modelica_boolean)_b;
          if(tmp12)
          {
            tmpMeta13 = _ts1;
          }
          else
          {
            tmpMeta11 = mmc_mk_cons(_t1, _ts2);
            tmpMeta13 = tmpMeta11;
          }
          tmpMeta[0+0] = (_b?_t1:_t2);
          tmpMeta[0+1] = tmpMeta13;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _min = tmpMeta[0+0];
  _ots = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_ots) { *out_ots = _ots; }
  return _min;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PriorityQueue_ins(threadData_t *threadData, modelica_metatype _t, modelica_metatype _its)
{
  modelica_metatype _ots = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ots has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _t;
    tmp4_2 = _its;
    {
      modelica_metatype _t1 = NULL;
      modelica_metatype _t2 = NULL;
      modelica_metatype _ts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t1 has no default value.
      // _t2 has no default value.
      // _ts has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(_t, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_2);
          tmpMeta8 = MMC_CDR(tmp4_2);
          
          _t2 = tmpMeta7;
          _ts = tmpMeta8;
          _t1 = tmp4_1;
          /* Pattern matching succeeded */
          tmp11 = (modelica_boolean)(omc_PriorityQueue_rank(threadData, _t1) < omc_PriorityQueue_rank(threadData, _t2));
          if(tmp11)
          {
            tmpMeta10 = mmc_mk_cons(_t2, _ts);
            tmpMeta9 = mmc_mk_cons(_t1, tmpMeta10);
            tmpMeta12 = tmpMeta9;
          }
          else
          {
            /* Tail recursive call */
            _t = omc_PriorityQueue_link(threadData, _t1, _t2);
            _its = _ts;
            goto _tailrecursive;
            /* TODO: Make sure any eventual dead code below is never generated */
          }
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _ots = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ots;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PriorityQueue_link(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _t has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _t1;
    tmp4_2 = _t2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_integer _r1;
      modelica_integer _r2;
      modelica_metatype _ts1 = NULL;
      modelica_metatype _ts2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _r1 has no default value.
      // _r2 has no default value.
      // _ts1 has no default value.
      // _ts2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _e1 = tmpMeta6;
          _r1 = tmp8  /* pattern as ty=Integer */;
          _ts1 = tmpMeta9;
          _e2 = tmpMeta10;
          _r2 = tmp12  /* pattern as ty=Integer */;
          _ts2 = tmpMeta13;
          /* Pattern matching succeeded */
          _r1 = ((modelica_integer) 1) + _r1;

          _r2 = ((modelica_integer) 1) + _r2;

          tmpMeta14 = mmc_mk_cons(_t2, _ts1);
          _ts1 = tmpMeta14;

          tmpMeta15 = mmc_mk_cons(_t1, _ts2);
          _ts2 = tmpMeta15;
          tmp18 = (modelica_boolean)omc_PriorityQueue_compareElement(threadData, omc_PriorityQueue_root(threadData, _t1), omc_PriorityQueue_root(threadData, _t2));
          if(tmp18)
          {
            tmpMeta16 = mmc_mk_box4(3, &PriorityQueue_Tree_NODE__desc, _e1, mmc_mk_integer(_r1), _ts1);
            tmpMeta19 = tmpMeta16;
          }
          else
          {
            tmpMeta17 = mmc_mk_box4(3, &PriorityQueue_Tree_NODE__desc, _e2, mmc_mk_integer(_r2), _ts2);
            tmpMeta19 = tmpMeta17;
          }
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _t = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _t;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_PriorityQueue_rank(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_integer _rank;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rank has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _rank = tmp3  /* pattern as ty=Integer */;
  _return: OMC_LABEL_UNUSED
  return _rank;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PriorityQueue_rank(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_integer _rank;
  modelica_metatype out_rank;
  _rank = omc_PriorityQueue_rank(threadData, _tree);
  out_rank = mmc_mk_icon(_rank);
  return out_rank;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PriorityQueue_root(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_metatype _elt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _elt has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _elt = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _elt;
}

DLLDirection
modelica_metatype omc_PriorityQueue_elements2(threadData_t *threadData, modelica_metatype _its, modelica_metatype _acc)
{
  modelica_metatype _elts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _elts has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _its;
    {
      modelica_metatype _elt = NULL;
      modelica_metatype _ts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _elt has no default value.
      // _ts has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listReverse(_acc);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          _ts = tmp4_1;
          /* Pattern matching succeeded */
          _ts = omc_PriorityQueue_deleteAndReturnMin(threadData, _ts ,&_elt);
          tmpMeta6 = mmc_mk_cons(_elt, _acc);
          /* Tail recursive call */
          _its = _ts;
          _acc = tmpMeta6;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _elts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _elts;
}

DLLDirection
modelica_metatype omc_PriorityQueue_elements(threadData_t *threadData, modelica_metatype _ts)
{
  modelica_metatype _elts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _elts has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _elts = omc_PriorityQueue_elements2(threadData, _ts, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _elts;
}

DLLDirection
modelica_metatype omc_PriorityQueue_deleteAndReturnMin(threadData_t *threadData, modelica_metatype _ts, modelica_metatype *out_elt)
{
  modelica_metatype _ots = NULL;
  modelica_metatype _elt = NULL;
  modelica_metatype _ts1 = NULL;
  modelica_metatype _ts2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ots has no default value.
  // _elt has no default value.
  // _ts1 has no default value.
  // _ts2 has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta2 = omc_PriorityQueue_getMin(threadData, _ts, &tmpMeta1);
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _elt = tmpMeta3;
  _ts1 = tmpMeta4;
  _ts2 = tmpMeta1;

  _ots = omc_PriorityQueue_meld(threadData, listReverse(_ts1), _ts2);
  _return: OMC_LABEL_UNUSED
  if (out_elt) { *out_elt = _elt; }
  return _ots;
}

DLLDirection
modelica_metatype omc_PriorityQueue_deleteMin(threadData_t *threadData, modelica_metatype _ts)
{
  modelica_metatype _ots = NULL;
  modelica_metatype _ts1 = NULL;
  modelica_metatype _ts2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ots has no default value.
  // _ts1 has no default value.
  // _ts2 has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta2 = omc_PriorityQueue_getMin(threadData, _ts, &tmpMeta1);
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _ts1 = tmpMeta3;
  _ts2 = tmpMeta1;

  _ots = omc_PriorityQueue_meld(threadData, listReverse(_ts1), _ts2);
  _return: OMC_LABEL_UNUSED
  return _ots;
}

DLLDirection
modelica_metatype omc_PriorityQueue_findMin(threadData_t *threadData, modelica_metatype _inTs)
{
  modelica_metatype _elt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _elt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTs;
    {
      modelica_metatype _t = NULL;
      modelica_metatype _x = NULL;
      modelica_metatype _y = NULL;
      modelica_metatype _ts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _x has no default value.
      // _y has no default value.
      // _ts has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _t = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_PriorityQueue_root(threadData, _t);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _t = tmpMeta8;
          _ts = tmpMeta9;
          /* Pattern matching succeeded */
          _x = omc_PriorityQueue_root(threadData, _t);

          _y = omc_PriorityQueue_findMin(threadData, _ts);
          tmpMeta1 = (omc_PriorityQueue_compareElement(threadData, _x, _y)?_x:_y);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _elt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _elt;
}

DLLDirection
modelica_metatype omc_PriorityQueue_meld2(threadData_t *threadData, modelica_boolean _b1, modelica_boolean _b2, modelica_metatype _t1, modelica_metatype _inTs1, modelica_metatype _t2, modelica_metatype _inTs2)
{
  modelica_metatype _ts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ts has no default value.
  { /* match expression */
    modelica_boolean tmp4_1;modelica_boolean tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _b1;
    tmp4_2 = _b2;
    tmp4_3 = _inTs1;
    tmp4_4 = _inTs2;
    {
      modelica_metatype _ts1 = NULL;
      modelica_metatype _ts2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ts1 has no default value.
      // _ts2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          
          _ts1 = tmp4_3;
          _ts2 = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(_t2, _ts2);
          _ts = omc_PriorityQueue_meld(threadData, _ts1, tmpMeta6);
          tmpMeta7 = mmc_mk_cons(_t1, _ts);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          
          _ts1 = tmp4_3;
          _ts2 = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_t1, _ts1);
          _ts = omc_PriorityQueue_meld(threadData, tmpMeta8, _ts2);
          tmpMeta9 = mmc_mk_cons(_t2, _ts);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_PriorityQueue_ins(threadData, omc_PriorityQueue_link(threadData, _t1, _t2), omc_PriorityQueue_meld(threadData, _inTs1, _inTs2));
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _ts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ts;
}
modelica_metatype boxptr_PriorityQueue_meld2(threadData_t *threadData, modelica_metatype _b1, modelica_metatype _b2, modelica_metatype _t1, modelica_metatype _inTs1, modelica_metatype _t2, modelica_metatype _inTs2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _ts = NULL;
  tmp1 = mmc_unbox_integer(_b1);
  tmp2 = mmc_unbox_integer(_b2);
  _ts = omc_PriorityQueue_meld2(threadData, tmp1, tmp2, _t1, _inTs1, _t2, _inTs2);
  /* skip box _ts; list<PriorityQueue.Tree> */
  return _ts;
}

DLLDirection
modelica_metatype omc_PriorityQueue_meld(threadData_t *threadData, modelica_metatype _its1, modelica_metatype _its2)
{
  modelica_metatype _ts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ts has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _its1;
    tmp4_2 = _its2;
    {
      modelica_metatype _t1 = NULL;
      modelica_metatype _t2 = NULL;
      modelica_metatype _ts1 = NULL;
      modelica_metatype _ts2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t1 has no default value.
      // _t2 has no default value.
      // _ts1 has no default value.
      // _ts2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          _ts1 = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _ts1;
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _ts2 = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta1 = _ts2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _t1 = tmpMeta6;
          _ts1 = tmpMeta7;
          _t2 = tmpMeta8;
          _ts2 = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_PriorityQueue_meld2(threadData, (omc_PriorityQueue_rank(threadData, _t1) < omc_PriorityQueue_rank(threadData, _t2)), (omc_PriorityQueue_rank(threadData, _t2) < omc_PriorityQueue_rank(threadData, _t1)), _t1, _ts1, _t2, _ts2);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _ts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ts;
}

DLLDirection
modelica_metatype omc_PriorityQueue_insert(threadData_t *threadData, modelica_metatype _elt, modelica_metatype _ts)
{
  modelica_metatype _ots = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ots has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box4(3, &PriorityQueue_Tree_NODE__desc, _elt, mmc_mk_integer(((modelica_integer) 0)), tmpMeta1);
  _ots = omc_PriorityQueue_ins(threadData, tmpMeta2, _ts);
  _return: OMC_LABEL_UNUSED
  return _ots;
}

DLLDirection
modelica_boolean omc_PriorityQueue_isEmpty(threadData_t *threadData, modelica_metatype _ts)
{
  modelica_boolean _isEmpty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  _isEmpty = listEmpty(_ts);
  _return: OMC_LABEL_UNUSED
  return _isEmpty;
}
modelica_metatype boxptr_PriorityQueue_isEmpty(threadData_t *threadData, modelica_metatype _ts)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_PriorityQueue_isEmpty(threadData, _ts);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLDirection
modelica_boolean omc_PriorityQueue_compareElement(threadData_t *threadData, modelica_metatype _el1, modelica_metatype _el2)
{
  modelica_boolean _b;
  modelica_integer _p1;
  modelica_integer _p2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _p1 has no default value.
  // _p2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _el1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _p1 = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _el2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _p2 = tmp6  /* pattern as ty=Integer */;

  _b = (_p1 <= _p2);
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_PriorityQueue_compareElement(threadData_t *threadData, modelica_metatype _el1, modelica_metatype _el2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_PriorityQueue_compareElement(threadData, _el1, _el2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

