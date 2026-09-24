#include "omc_simulation_settings.h"
#include "NBSorting.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "NBSorting.SuperNode.collapse crucially failed for the following Phase II strong component because the body turned out to still have strong components:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,151,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,3) {&NBSorting_SuperNode_SINGLE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NBSorting.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,12,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8_6,0.0);
#define _OMC_LIT8_6 MMC_REFREALLIT(_OMC_LIT_STRUCT8_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(546)),MMC_IMMEDIATE(MMC_TAGFIXNUM(49)),MMC_IMMEDIATE(MMC_TAGFIXNUM(546)),MMC_IMMEDIATE(MMC_TAGFIXNUM(179)),_OMC_LIT8_6}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT9_6,0.0);
#define _OMC_LIT9_6 MMC_REFREALLIT(_OMC_LIT_STRUCT9_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(572)),MMC_IMMEDIATE(MMC_TAGFIXNUM(49)),MMC_IMMEDIATE(MMC_TAGFIXNUM(572)),MMC_IMMEDIATE(MMC_TAGFIXNUM(178)),_OMC_LIT9_6}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "NBSorting.SuperNode.create failed because of unknown adjacency matrix type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,75,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,1) {_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NBSorting.SuperNode.getEqnIndices failed because elements should not be accessed, only their parents: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,102,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "NBSorting.SuperNode.getEqnIndices failed because of incorrect super node type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,78,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,1) {_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,1,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "] single "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,9,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "] scalar element of ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,21,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "] algebraic loop "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,17,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "] array bucket "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,15,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,5,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data " eqns: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,7,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "\n vars:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,7,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "Sorting"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,7,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "dumpSorting"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,11,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "Dumps information about the process of sorting."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,47,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(47)),_OMC_LIT25,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NBSorting.tarjan failed because of unknown adjacency matrix or matching type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,77,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,1) {_OMC_LIT28,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "NBSorting.tarjan failed because adjacency matrix has unknown type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,66,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,1) {_OMC_LIT30,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "NBSorting.tarjan failed to sort system:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,40,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "System"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,6,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,0,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "\n	val: ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,8,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "\n	val: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,7,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#include "util/modelica.h"

#include "NBSorting_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_strongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _data, modelica_metatype _var_to_eqn, modelica_integer _eqn, modelica_metatype __omcQ_24in_5Fstack, modelica_integer __omcQ_24in_5Findex, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype __omcQ_24in_5Fcomps, modelica_integer *out_index, modelica_metatype *out_comps);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_strongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _data, modelica_metatype _var_to_eqn, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5Fstack, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype __omcQ_24in_5Fcomps, modelica_metatype *out_index, modelica_metatype *out_comps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_strongConnect,2,0) {(void*) boxptr_NBSorting_strongConnect,0}};
#define boxvar_NBSorting_strongConnect MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_strongConnect)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_getLocalSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _eqn_indices, modelica_metatype _var_loc, modelica_metatype *out_matching_loc, modelica_metatype *out_map_back);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_getLocalSystem,2,0) {(void*) boxptr_NBSorting_getLocalSystem,0}};
#define boxvar_NBSorting_getLocalSystem MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_getLocalSystem)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeLoopNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_boolean _update_scalar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeLoopNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _update_scalar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeLoopNodes,2,0) {(void*) boxptr_NBSorting_SuperNode_mergeLoopNodes,0}};
#define boxvar_NBSorting_SuperNode_mergeLoopNodes MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeLoopNodes)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeArrayNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _cref_to_solve, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_integer _arr_idx, modelica_boolean _update_scalar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeArrayNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _cref_to_solve, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _arr_idx, modelica_metatype _update_scalar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeArrayNodes,2,0) {(void*) boxptr_NBSorting_SuperNode_mergeArrayNodes,0}};
#define boxvar_NBSorting_SuperNode_mergeArrayNodes MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeArrayNodes)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeRows(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_metatype _stamp, modelica_metatype _counts, modelica_metatype _uniq, modelica_metatype _sorted);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeRows(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _stamp, modelica_metatype _counts, modelica_metatype _uniq, modelica_metatype _sorted);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeRows,2,0) {(void*) boxptr_NBSorting_SuperNode_mergeRows,0}};
#define boxvar_NBSorting_SuperNode_mergeRows MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeRows)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_maxMergedRow(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rows);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_maxMergedRow(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rows);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_maxMergedRow,2,0) {(void*) boxptr_NBSorting_SuperNode_maxMergedRow,0}};
#define boxvar_NBSorting_SuperNode_maxMergedRow MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_maxMergedRow)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergedSize(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rows);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergedSize(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rows);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergedSize,2,0) {(void*) boxptr_NBSorting_SuperNode_mergedSize,0}};
#define boxvar_NBSorting_SuperNode_mergedSize MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergedSize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_SuperNode_mapFlatten(threadData_t *threadData, modelica_metatype _components, modelica_metatype _map_back);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mapFlatten,2,0) {(void*) boxptr_NBSorting_SuperNode_mapFlatten,0}};
#define boxvar_NBSorting_SuperNode_mapFlatten MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mapFlatten)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_strongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _data, modelica_metatype _var_to_eqn, modelica_integer _eqn, modelica_metatype __omcQ_24in_5Fstack, modelica_integer __omcQ_24in_5Findex, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype __omcQ_24in_5Fcomps, modelica_integer *out_index, modelica_metatype *out_comps)
{
  modelica_metatype _stack = NULL;
  modelica_integer _index;
  modelica_metatype _comps = NULL;
  modelica_metatype _SCC = NULL;
  modelica_integer _eqn2;
  modelica_integer _cand;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stack = __omcQ_24in_5Fstack;
  _index = __omcQ_24in_5Findex;
  _comps = __omcQ_24in_5Fcomps;
  // _SCC has no default value.
  // _eqn2 has no default value.
  // _cand has no default value.
  arrayUpdate(_number, _eqn, omc_mk_integer(_index));

  arrayUpdate(_lowlink, _eqn, omc_mk_integer(_index));

  arrayUpdate(_onStack, _eqn, omc_mk_boolean(1 /* true */));

  _index = ((modelica_integer) 1) + _index;

  tmpMeta1 = mmc_mk_cons(omc_mk_integer(_eqn), _stack);
  _stack = tmpMeta1;

  tmp2 = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 2)),_eqn) /* DAE.ASUB */); tmp3 = 1; tmp4 = ((modelica_integer) -1) + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 2)),_eqn) /* DAE.ASUB */) + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),_eqn) /* DAE.ASUB */)));
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _k;
    for(_k = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 2)),_eqn) /* DAE.ASUB */); in_range_integer(_k, tmp2, tmp4); _k += tmp3)
    {

      _cand = omc_unbox_integer(arrayGet(_data,_k) /* DAE.ASUB */);

      if((_cand > ((modelica_integer) 0)))
      {
        _eqn2 = omc_unbox_integer(arrayGet(_var_to_eqn,_cand) /* DAE.ASUB */);

        if(((_eqn2 > ((modelica_integer) 0)) && (_eqn2 != _eqn)))
        {
          if((omc_unbox_integer(arrayGet(_number,_eqn2) /* DAE.ASUB */) == ((modelica_integer) -1)))
          {
            _stack = omc_NBSorting_strongConnect(threadData, _m, _data, _var_to_eqn, _eqn2, _stack, _index, _number, _lowlink, _onStack, _comps ,&_index ,&_comps);

            arrayUpdate(_lowlink, _eqn, omc_mk_integer(modelica_integer_min((modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */)),(modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_eqn2) /* DAE.ASUB */)))));
          }
          else
          {
            if(omc_unbox_boolean(arrayGet(_onStack,_eqn2) /* DAE.ASUB */))
            {
              arrayUpdate(_lowlink, _eqn, omc_mk_integer(modelica_integer_min((modelica_integer)(omc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */)),(modelica_integer)(omc_unbox_integer(arrayGet(_number,_eqn2) /* DAE.ASUB */)))));
            }
          }
        }
      }
    }
  }

  if((omc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */) == omc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */)))
  {
    /* Pattern-matching assignment */
    tmpMeta5 = _stack;
    if (listEmpty(tmpMeta5)) OMC_THROW_INTERNAL();
    tmpMeta6 = MMC_CAR(tmpMeta5);
    tmpMeta7 = MMC_CDR(tmpMeta5);
    tmp8 = omc_unbox_integer(tmpMeta6);
    _eqn2 = tmp8  /* pattern as ty=Integer */;
    _stack = tmpMeta7;

    arrayUpdate(_onStack, _eqn2, omc_mk_boolean(0 /* false */));

    tmpMeta9 = mmc_mk_cons(omc_mk_integer(_eqn2), MMC_REFSTRUCTLIT(mmc_nil));
    _SCC = tmpMeta9;

    while(1)
    {
      if(!(_eqn != _eqn2)) break;
      /* Pattern-matching assignment */
      tmpMeta10 = _stack;
      if (listEmpty(tmpMeta10)) OMC_THROW_INTERNAL();
      tmpMeta11 = MMC_CAR(tmpMeta10);
      tmpMeta12 = MMC_CDR(tmpMeta10);
      tmp13 = omc_unbox_integer(tmpMeta11);
      _eqn2 = tmp13  /* pattern as ty=Integer */;
      _stack = tmpMeta12;

      arrayUpdate(_onStack, _eqn2, omc_mk_boolean(0 /* false */));

      tmpMeta14 = mmc_mk_cons(omc_mk_integer(_eqn2), _SCC);
      _SCC = tmpMeta14;
    }

    tmpMeta15 = mmc_mk_cons(listReverseInPlace(_SCC), _comps);
    _comps = tmpMeta15;
  }
  _return: OMC_LABEL_UNUSED
  if (out_index) { *out_index = _index; }
  if (out_comps) { *out_comps = _comps; }
  omc_ret_ = _stack;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_strongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _data, modelica_metatype _var_to_eqn, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5Fstack, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype __omcQ_24in_5Fcomps, modelica_metatype *out_index, modelica_metatype *out_comps)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype _stack = NULL;
  tmp1 = omc_unbox_integer(_eqn);
  tmp2 = omc_unbox_integer(__omcQ_24in_5Findex);
  _stack = omc_NBSorting_strongConnect(threadData, _m, _data, _var_to_eqn, tmp1, __omcQ_24in_5Fstack, tmp2, _number, _lowlink, _onStack, __omcQ_24in_5Fcomps, &_index, out_comps);
  /* skip box _stack; list<#Integer> */
  if (out_index) { *out_index = omc_mk_icon(_index); }
  /* skip box _comps; list<list<#Integer>> */
  return _stack;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_getLocalSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _eqn_indices, modelica_metatype _var_loc, modelica_metatype *out_matching_loc, modelica_metatype *out_map_back)
{
  modelica_metatype _m_loc = NULL;
  modelica_metatype _matching_loc = NULL;
  modelica_metatype _map_back = NULL;
  modelica_integer _N;
  modelica_metatype _var_to_eqn = NULL;
  modelica_metatype _eqn_to_var = NULL;
  modelica_metatype _data = NULL;
  modelica_metatype _builder = NULL;
  modelica_integer _j;
  modelica_integer _row;
  modelica_integer _first;
  modelica_integer _edges;
  modelica_integer _loc;
  modelica_integer _var;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_loc has no default value.
  // _matching_loc has no default value.
  // _map_back has no default value.
  _N = listLength(_eqn_indices);
  _var_to_eqn = arrayCreate(listLength(_eqn_indices), omc_mk_integer(((modelica_integer) -1)));
  _eqn_to_var = arrayCreate(listLength(_eqn_indices), omc_mk_integer(((modelica_integer) -1)));
  _data = omc_NBAdjacency_IntMatrix_entries(threadData, _m);
  // _builder has no default value.
  _j = ((modelica_integer) 1);
  // _row has no default value.
  // _first has no default value.
  _edges = ((modelica_integer) 0);
  // _loc has no default value.
  // _var has no default value.
  _map_back = arrayCreate(listLength(_eqn_indices), omc_mk_integer(((modelica_integer) -1)));

  {
    modelica_metatype _i;
    for (tmpMeta1 = _eqn_indices; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      arrayUpdate(_map_back,_j,_i);

      _var = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_matching, 3)),omc_unbox_integer(_i)) /* DAE.ASUB */);

      if((_var > ((modelica_integer) 0)))
      {
        arrayUpdate(_var_loc, _var, omc_mk_integer(_j));
      }

      arrayUpdate(_eqn_to_var,_j,omc_mk_integer(_j));

      arrayUpdate(_var_to_eqn,_j,omc_mk_integer(_j));

      _j = ((modelica_integer) 1) + _j;
    }
  }

  tmpMeta3 = omc_mk_box3(3, &NBMatching_MATCHING__desc, _var_to_eqn, _eqn_to_var);
  _matching_loc = tmpMeta3;

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = listLength(_eqn_indices);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp4, tmp6); _j += tmp5)
    {

      _edges = _edges + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),omc_unbox_integer(arrayGet(_map_back,_j) /* DAE.ASUB */)) /* DAE.ASUB */));
    }
  }

  _builder = omc_NBAdjacency_IntMatrix_newBuilder(threadData, _edges, 0 /* false */);

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = listLength(_eqn_indices);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp10, tmp12); _j += tmp11)
    {

      _row = omc_unbox_integer(arrayGet(_map_back,_j) /* DAE.ASUB */);

      _first = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 2)),_row) /* DAE.ASUB */);

      tmp7 = ((modelica_integer) -1) + (_first + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),_row) /* DAE.ASUB */))); tmp8 = ((modelica_integer) -1); tmp9 = _first;
      if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
      {
        modelica_integer _k;
        for(_k = ((modelica_integer) -1) + (_first + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),_row) /* DAE.ASUB */))); in_range_integer(_k, tmp7, tmp9); _k += tmp8)
        {

          _var = omc_unbox_integer(arrayGet(_data,_k) /* DAE.ASUB */);

          _loc = ((_var > ((modelica_integer) 0))?omc_unbox_integer(arrayGet(_var_loc,_var) /* DAE.ASUB */):((modelica_integer) 0));

          if((_loc > ((modelica_integer) 0)))
          {
            omc_NBAdjacency_IntMatrix_builderAdd(threadData, _builder, _j, _loc);
          }
        }
      }
    }
  }

  _m_loc = omc_NBAdjacency_IntMatrix_fromBuilder(threadData, _builder, listLength(_eqn_indices));

  {
    modelica_metatype _i;
    for (tmpMeta13 = _eqn_indices; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
    {
      _i = MMC_CAR(tmpMeta13);
      _var = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_matching, 3)),omc_unbox_integer(_i)) /* DAE.ASUB */);

      if((_var > ((modelica_integer) 0)))
      {
        arrayUpdate(_var_loc, _var, omc_mk_integer(((modelica_integer) 0)));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_matching_loc) { *out_matching_loc = _matching_loc; }
  if (out_map_back) { *out_map_back = _map_back; }
  omc_ret_ = _m_loc;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeLoopNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_boolean _update_scalar)
{
  modelica_integer _new_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _new_idx = __omcQ_24in_5Fnew_5Fidx;
  tmpMeta1 = omc_mk_box3(5, &NBSorting_SuperNode_ALGEBRAIC__LOOP__desc, omc_mk_integer(_new_idx), _rows_to_merge);
  arrayUpdate(_super_nodes, _new_idx, tmpMeta1);

  if(_update_scalar)
  {
    {
      modelica_metatype _i;
      for (tmpMeta2 = _rows_to_merge; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _i = MMC_CAR(tmpMeta2);
        tmpMeta3 = omc_mk_box3(4, &NBSorting_SuperNode_ELEMENT__desc, _i, omc_mk_integer(_new_idx));
        arrayUpdate(_super_nodes, omc_unbox_integer(_i), tmpMeta3);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _new_idx;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeLoopNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _update_scalar)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _new_idx;
  modelica_metatype out_new_idx;
  tmp1 = omc_unbox_integer(__omcQ_24in_5Fnew_5Fidx);
  tmp2 = omc_unbox_integer(_update_scalar);
  _new_idx = omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _rows_to_merge, tmp1, tmp2);
  out_new_idx = omc_mk_icon(_new_idx);
  return out_new_idx;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeArrayNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _cref_to_solve, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_integer _arr_idx, modelica_boolean _update_scalar)
{
  modelica_integer _new_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _new_idx = __omcQ_24in_5Fnew_5Fidx;
  tmpMeta1 = omc_mk_box5(6, &NBSorting_SuperNode_ARRAY__BUCKET__desc, omc_mk_integer(_new_idx), _cref_to_solve, _rows_to_merge, omc_mk_integer(_arr_idx));
  arrayUpdate(_super_nodes, _new_idx, tmpMeta1);

  if(_update_scalar)
  {
    {
      modelica_metatype _i;
      for (tmpMeta2 = _rows_to_merge; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _i = MMC_CAR(tmpMeta2);
        tmpMeta3 = omc_mk_box3(4, &NBSorting_SuperNode_ELEMENT__desc, _i, omc_mk_integer(_new_idx));
        arrayUpdate(_super_nodes, omc_unbox_integer(_i), tmpMeta3);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _new_idx;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeArrayNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _cref_to_solve, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _arr_idx, modelica_metatype _update_scalar)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _new_idx;
  modelica_metatype out_new_idx;
  tmp1 = omc_unbox_integer(__omcQ_24in_5Fnew_5Fidx);
  tmp2 = omc_unbox_integer(_arr_idx);
  tmp3 = omc_unbox_integer(_update_scalar);
  _new_idx = omc_NBSorting_SuperNode_mergeArrayNodes(threadData, _super_nodes, _cref_to_solve, _rows_to_merge, tmp1, tmp2, tmp3);
  out_new_idx = omc_mk_icon(_new_idx);
  return out_new_idx;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeRows(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_metatype _stamp, modelica_metatype _counts, modelica_metatype _uniq, modelica_metatype _sorted)
{
  modelica_integer _new_idx;
  modelica_metatype _data = NULL;
  modelica_integer _total;
  modelica_integer _first;
  modelica_integer _n;
  modelica_integer _p;
  modelica_integer _h;
  modelica_integer _v;
  modelica_integer _acc;
  modelica_integer _c;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _new_idx = __omcQ_24in_5Fnew_5Fidx;
  _data = omc_NBAdjacency_IntMatrix_entries(threadData, _m);
  _total = ((modelica_integer) 0);
  // _first has no default value.
  _n = ((modelica_integer) 0);
  // _p has no default value.
  // _h has no default value.
  // _v has no default value.
  // _acc has no default value.
  // _c has no default value.
  {
    modelica_metatype _idx;
    for (tmpMeta1 = _rows_to_merge; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _idx = MMC_CAR(tmpMeta1);
      _total = _total + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),omc_unbox_integer(_idx)) /* DAE.ASUB */));
    }
  }

  _p = omc_Util_nextPrime(threadData, _total);

  {
    modelica_metatype _idx;
    for (tmpMeta3 = _rows_to_merge; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _idx = MMC_CAR(tmpMeta3);
      _first = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 2)),omc_unbox_integer(_idx)) /* DAE.ASUB */);

      tmp4 = _first; tmp5 = 1; tmp6 = ((modelica_integer) -1) + (_first + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),omc_unbox_integer(_idx)) /* DAE.ASUB */)));
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer _k;
        for(_k = _first; in_range_integer(_k, tmp4, tmp6); _k += tmp5)
        {

          _v = omc_unbox_integer(arrayGet(_data,_k) /* DAE.ASUB */);

          if((omc_unbox_integer(arrayGet(_stamp,_v) /* DAE.ASUB */) == ((modelica_integer) 0)))
          {
            arrayUpdate(_stamp, _v, omc_mk_integer(((modelica_integer) 1)));

            _n = ((modelica_integer) 1) + _n;

            arrayUpdate(_uniq, _n, omc_mk_integer(_v));
          }
        }
      }
    }
  }

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = _p;
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
    {

      arrayUpdate(_counts, _i, omc_mk_integer(((modelica_integer) 0)));
    }
  }

  tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = _n;
  if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
    {

      _h = ((modelica_integer) 1) + modelica_integer_mod(omc_unbox_integer(arrayGet(_uniq,_i) /* DAE.ASUB */), _p);

      arrayUpdate(_counts, _h, omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(arrayGet(_counts,_h) /* DAE.ASUB */))));
    }
  }

  _acc = ((modelica_integer) 0);

  tmp14 = _p; tmp15 = ((modelica_integer) -1); tmp16 = ((modelica_integer) 1);
  if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
  {
    modelica_integer _i;
    for(_i = _p; in_range_integer(_i, tmp14, tmp16); _i += tmp15)
    {

      _c = omc_unbox_integer(arrayGet(_counts,_i) /* DAE.ASUB */);

      arrayUpdate(_counts, _i, omc_mk_integer(_acc));

      _acc = _acc + _c;
    }
  }

  tmp17 = ((modelica_integer) 1); tmp18 = 1; tmp19 = _n;
  if(!(((tmp18 > 0) && (tmp17 > tmp19)) || ((tmp18 < 0) && (tmp17 < tmp19))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp17, tmp19); _i += tmp18)
    {

      _v = omc_unbox_integer(arrayGet(_uniq,_i) /* DAE.ASUB */);

      _h = ((modelica_integer) 1) + modelica_integer_mod(_v, _p);

      arrayUpdate(_sorted, ((modelica_integer) 1) + (omc_unbox_integer(arrayGet(_counts,_h) /* DAE.ASUB */)), omc_mk_integer(_v));

      arrayUpdate(_counts, _h, omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(arrayGet(_counts,_h) /* DAE.ASUB */))));

      arrayUpdate(_stamp, _v, omc_mk_integer(((modelica_integer) 0)));
    }
  }

  omc_NBAdjacency_IntMatrix_setRowFromArray(threadData, _m, _new_idx, _sorted, _n);

  {
    modelica_metatype _idx;
    for (tmpMeta20 = _rows_to_merge; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
    {
      _idx = MMC_CAR(tmpMeta20);
      omc_NBAdjacency_IntMatrix_clearRow(threadData, _m, omc_unbox_integer(_idx));

      arrayUpdate(_matching, omc_unbox_integer(_idx), omc_mk_integer(((modelica_integer) -1)));
    }
  }

  _new_idx = ((modelica_integer) 1) + _new_idx;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _new_idx;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeRows(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _stamp, modelica_metatype _counts, modelica_metatype _uniq, modelica_metatype _sorted)
{
  modelica_integer tmp1;
  modelica_integer _new_idx;
  modelica_metatype out_new_idx;
  tmp1 = omc_unbox_integer(__omcQ_24in_5Fnew_5Fidx);
  _new_idx = omc_NBSorting_SuperNode_mergeRows(threadData, _m, _matching, _super_nodes, _rows_to_merge, tmp1, _stamp, _counts, _uniq, _sorted);
  out_new_idx = omc_mk_icon(_new_idx);
  return out_new_idx;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_maxMergedRow(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rows)
{
  modelica_integer _mx;
  modelica_integer _total;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mx = ((modelica_integer) 0);
  // _total has no default value.
  {
    modelica_metatype _row;
    for (tmpMeta1 = _rows; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _row = MMC_CAR(tmpMeta1);
      _total = ((modelica_integer) 0);

      {
        modelica_metatype _idx;
        for (tmpMeta2 = _row; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _idx = MMC_CAR(tmpMeta2);
          _total = _total + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),omc_unbox_integer(_idx)) /* DAE.ASUB */));
        }
      }

      _mx = modelica_integer_max((modelica_integer)(_mx),(modelica_integer)(_total));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mx;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_maxMergedRow(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rows)
{
  modelica_integer _mx;
  modelica_metatype out_mx;
  _mx = omc_NBSorting_SuperNode_maxMergedRow(threadData, _m, _rows);
  out_mx = omc_mk_icon(_mx);
  return out_mx;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergedSize(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rows)
{
  modelica_integer _total;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _total = ((modelica_integer) 0);
  {
    modelica_metatype _row;
    for (tmpMeta1 = _rows; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _row = MMC_CAR(tmpMeta1);
      {
        modelica_metatype _idx;
        for (tmpMeta2 = _row; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _idx = MMC_CAR(tmpMeta2);
          _total = _total + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),omc_unbox_integer(_idx)) /* DAE.ASUB */));
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _total;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergedSize(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rows)
{
  modelica_integer _total;
  modelica_metatype out_total;
  _total = omc_NBSorting_SuperNode_mergedSize(threadData, _m, _rows);
  out_total = omc_mk_icon(_total);
  return out_total;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_SuperNode_mapFlatten(threadData_t *threadData, modelica_metatype _components, modelica_metatype _map_back)
{
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _indices = tmpMeta1;
  {
    modelica_metatype _comp;
    for (tmpMeta2 = _components; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _comp = MMC_CAR(tmpMeta2);
      {
        modelica_metatype _i;
        for (tmpMeta3 = _comp; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _i = MMC_CAR(tmpMeta3);
          tmpMeta4 = mmc_mk_cons(arrayGet(_map_back,omc_unbox_integer(_i)) /* DAE.ASUB */, _indices);
          _indices = tmpMeta4;
        }
      }
    }
  }

  _indices = listReverseInPlace(_indices);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _indices;
  return omc_ret_;
}

static modelica_metatype closure0_intEq(threadData_t *thData, modelica_metatype closure, modelica_metatype i1)
{
  modelica_metatype i2 = OMC_BOX_FIELD(closure, 1);
  return boxptr_intEq(thData, i1, i2);
}
DLLModelDirection
modelica_metatype omc_NBSorting_SuperNode_collapse(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _super_nodes, modelica_metatype _m, modelica_metatype _mapping, modelica_metatype _matching, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _var_loc)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _node_comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sorted_body_components = NULL;
  modelica_metatype _sorted_body_indices = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _comp_indices;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = arrayGet(_super_nodes,omc_unbox_integer(_i)) /* DAE.ASUB */;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _node_comp = tmpMeta1;
  // _sorted_body_components has no default value.
  // _sorted_body_indices has no default value.
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _node_comp;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _m_local = NULL;
      modelica_metatype _matching_local = NULL;
      modelica_boolean _indep;
      modelica_metatype _map_back = NULL;
      modelica_integer _eqn_arr_idx;
      modelica_integer _var_arr_idx;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _node has no default value.
      // _m_local has no default value.
      // _matching_local has no default value.
      _indep = 1 /* true */;
      // _map_back has no default value.
      // _eqn_arr_idx has no default value.
      // _var_arr_idx has no default value.
      tmp8 = 0;
      for (; tmp8 < 5; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta10 = MMC_CAR(tmp8_1);
          tmpMeta11 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta11)) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta5 = omc_NBStrongComponent_createPseudoScalar(threadData, _comp_indices, (OMC_BOX_FIELD(_matching, 3)), _mapping, _vars, _eqns);
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta12 = MMC_CAR(tmp8_1);
          tmpMeta13 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,2,2) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta13)) goto tmp7_end;
          _node = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta5 = omc_NBStrongComponent_createPseudoScalar(threadData, (OMC_BOX_FIELD(_node, 3)), (OMC_BOX_FIELD(_matching, 3)), _mapping, _vars, _eqns);
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_metatype tmpMeta19;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta14 = MMC_CAR(tmp8_1);
          tmpMeta15 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,4) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta15)) goto tmp7_end;
          _node = tmpMeta14;
          /* Pattern matching succeeded */
          _m_local = omc_NBSorting_getLocalSystem(threadData, _m, _matching, (OMC_BOX_FIELD(_node, 4)), _var_loc ,&_matching_local ,&_map_back);

          _sorted_body_components = omc_NBSorting_tarjanScalar(threadData, _m_local, _matching_local);

          _sorted_body_indices = omc_NBSorting_SuperNode_mapFlatten(threadData, _sorted_body_components, _map_back);

          if((omc_List_compareLength(threadData, _sorted_body_components, _sorted_body_indices) != ((modelica_integer) 0)))
          {
            tmp17 = stringAppend(_OMC_LIT4,omc_List_toString(threadData, _node_comp, boxvar_NBSorting_SuperNode_toString, 8));
            tmp18 = stringAppend(tmp17,_OMC_LIT5);
            tmpMeta16 = mmc_mk_cons(tmp18, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta16);
          }

          tmpMeta19 = omc_mk_box1(0, omc_mk_integer(((modelica_integer) 1)));
          _indep = omc_Array_all(threadData, (OMC_BOX_FIELD(_m_local, 3)), (modelica_fnptr) omc_mk_box2(0,closure0_intEq,tmpMeta19));

          _eqn_arr_idx = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(listHead((OMC_BOX_FIELD(_node, 4))))) /* DAE.ASUB */);

          _var_arr_idx = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 3)),omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_matching, 3)),omc_unbox_integer(listHead((OMC_BOX_FIELD(_node, 4))))) /* DAE.ASUB */)) /* DAE.ASUB */);
          tmpMeta5 = omc_NBStrongComponent_createPseudoSlice(threadData, _var_arr_idx, _eqn_arr_idx, (OMC_BOX_FIELD(_node, 3)), _sorted_body_indices, (OMC_BOX_FIELD(_matching, 3)), _eqns, _mapping, _indep);
          goto tmp7_done;
        }
        case 3: {
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_List_any(threadData, _node_comp, boxvar_NBSorting_SuperNode_isArrayBucket)) goto tmp7_end;
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp21;
            modelica_metatype tmpMeta22;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp23;
            modelica_metatype _n_loopVar = 0;
            modelica_metatype _n;
            _n_loopVar = _node_comp;
            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta22; /* defaultValue */
            tmp21 = &__omcQ_24tmpVar5;
            while(1) {
              tmp23 = 1;
              if (!listEmpty(_n_loopVar)) {
                _n = MMC_CAR(_n_loopVar);
                _n_loopVar = MMC_CDR(_n_loopVar);
                tmp23--;
              }
              if (tmp23 == 0) {
                __omcQ_24tmpVar4 = omc_NBSorting_SuperNode_getEqnIndices(threadData, _n);
                *tmp21 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp21 = &MMC_CDR(*tmp21);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp21 = mmc_mk_nil();
            tmpMeta20 = __omcQ_24tmpVar5;
          }
          _m_local = omc_NBSorting_getLocalSystem(threadData, _m, _matching, omc_List_flatten(threadData, tmpMeta20), _var_loc ,&_matching_local ,&_map_back);

          _sorted_body_components = omc_NBSorting_tarjanScalar(threadData, _m_local, _matching_local);

          _sorted_body_indices = omc_NBSorting_SuperNode_mapFlatten(threadData, _sorted_body_components, _map_back);
          tmpMeta5 = omc_NBStrongComponent_createPseudoEntwined(threadData, _sorted_body_indices, (OMC_BOX_FIELD(_matching, 3)), _mapping, _vars, _eqns, _node_comp);
          goto tmp7_done;
        }
        case 4: {
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp25;
            modelica_metatype tmpMeta26;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp27;
            modelica_metatype _n_loopVar = 0;
            modelica_metatype _n;
            _n_loopVar = _node_comp;
            tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta26; /* defaultValue */
            tmp25 = &__omcQ_24tmpVar7;
            while(1) {
              tmp27 = 1;
              if (!listEmpty(_n_loopVar)) {
                _n = MMC_CAR(_n_loopVar);
                _n_loopVar = MMC_CDR(_n_loopVar);
                tmp27--;
              }
              if (tmp27 == 0) {
                __omcQ_24tmpVar6 = omc_NBSorting_SuperNode_getEqnIndices(threadData, _n);
                *tmp25 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp25 = &MMC_CDR(*tmp25);
              } else if (tmp27 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp25 = mmc_mk_nil();
            tmpMeta24 = __omcQ_24tmpVar7;
          }
          _sorted_body_indices = omc_List_flatten(threadData, tmpMeta24);
          tmpMeta5 = omc_NBStrongComponent_createPseudoScalar(threadData, _sorted_body_indices, (OMC_BOX_FIELD(_matching, 3)), _mapping, _vars, _eqns);
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      OMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _comp = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBSorting_SuperNode_create(threadData_t *threadData, modelica_metatype _adj, modelica_metatype _mapping, modelica_metatype _matching, modelica_metatype _eqn_map, modelica_metatype _scc_phase1, modelica_metatype _buck, modelica_metatype *out_phase2_matching, modelica_metatype *out_super_nodes)
{
  modelica_metatype _phase2_adj = NULL;
  modelica_metatype _phase2_matching = NULL;
  modelica_metatype _super_nodes = NULL;
  modelica_metatype _li = NULL;
  modelica_metatype _loop_map = NULL;
  modelica_metatype _algebraic_loops = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _buckets = NULL;
  modelica_metatype _mode = NULL;
  modelica_metatype _val = NULL;
  modelica_integer _index;
  modelica_integer _shift;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _eqn_rows = NULL;
  modelica_metatype _var_rows = NULL;
  modelica_metatype _rest_var_rows = NULL;
  modelica_metatype _alg_loop_set = NULL;
  modelica_metatype _stamp = NULL;
  modelica_metatype _counts = NULL;
  modelica_metatype _uniq = NULL;
  modelica_metatype _sorted = NULL;
  modelica_integer _mx;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _phase2_adj = _adj;
  _phase2_matching = _matching;
  // _super_nodes has no default value.
  // _li has no default value.
  _loop_map = omc_UnorderedMap_new(threadData, boxvar_NBSorting_LoopIdentifier_hash, boxvar_NBSorting_LoopIdentifier_isEqual, ((modelica_integer) 1));
  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp4;
    modelica_metatype _scc_loopVar = 0;
    modelica_metatype _scc;
    _scc_loopVar = _scc_phase1;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_scc_loopVar)) {
        _scc = MMC_CAR(_scc_loopVar);
        _scc_loopVar = MMC_CDR(_scc_loopVar);
        if (omc_List_hasSeveralElements(threadData, _scc)) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar8 = _scc;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar9;
  }
  _algebraic_loops = tmpMeta1;
  _buckets = _buck;
  // _mode has no default value.
  // _val has no default value.
  // _index has no default value.
  // _shift has no default value.
  // _var_lst has no default value.
  // _eqn_lst has no default value.
  // _eqn_rows has no default value.
  // _var_rows has no default value.
  // _rest_var_rows has no default value.
  _alg_loop_set = omc_UnorderedSet_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 13));
  // _stamp has no default value.
  // _counts has no default value.
  // _uniq has no default value.
  // _sorted has no default value.
  // _mx has no default value.
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _phase2_adj;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_integer tmp27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_integer tmp31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_integer tmp34;
          modelica_integer tmp35;
          modelica_integer tmp36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta78;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,2,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _scc;
            for (tmpMeta10 = _algebraic_loops; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _scc = MMC_CAR(tmpMeta10);
              _li = omc_NBSorting_LoopIdentifier_fromSCC(threadData, _scc, _mapping, _matching);

              tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
              omc_UnorderedMap_add(threadData, _li, listAppend(_scc, omc_UnorderedMap_getOrDefault(threadData, _li, _loop_map, tmpMeta11)), _loop_map);
            }
          }

          _algebraic_loops = omc_UnorderedMap_valueList(threadData, _loop_map);

          {
            modelica_metatype _scc;
            for (tmpMeta13 = _algebraic_loops; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _scc = MMC_CAR(tmpMeta13);
              {
                modelica_metatype _idx;
                for (tmpMeta14 = _scc; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
                {
                  _idx = MMC_CAR(tmpMeta14);
                  omc_UnorderedSet_add(threadData, _idx, _alg_loop_set);
                }
              }
            }
          }

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp20;
            modelica_metatype _bucket_tpl_loopVar = 0;
            modelica_metatype _bucket_tpl;
            _bucket_tpl_loopVar = _buckets;
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar11;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_bucket_tpl_loopVar)) {
                _bucket_tpl = MMC_CAR(_bucket_tpl_loopVar);
                _bucket_tpl_loopVar = MMC_CDR(_bucket_tpl_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar10 = omc_NBSorting_PseudoBucket_filter(threadData, _bucket_tpl, _alg_loop_set);
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar11;
          }
          _buckets = tmpMeta17;

          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp24;
            modelica_metatype _bucket_tpl_loopVar = 0;
            modelica_metatype _bucket_tpl;
            _bucket_tpl_loopVar = _buckets;
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar13;
            while(1) {
              tmp24 = 1;
              while (!listEmpty(_bucket_tpl_loopVar)) {
                _bucket_tpl = MMC_CAR(_bucket_tpl_loopVar);
                _bucket_tpl_loopVar = MMC_CDR(_bucket_tpl_loopVar);
                if (omc_NBSorting_PseudoBucket_relevant(threadData, _bucket_tpl)) {
                  tmp24--;
                  break;
                }
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar12 = _bucket_tpl;
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar13;
          }
          _buckets = tmpMeta21;

          _shift = listLength(_algebraic_loops) + listLength(_buckets);

          _super_nodes = arrayCreate(omc_NBAdjacency_IntMatrix_rows(threadData, (OMC_BOX_FIELD(_phase2_adj, 2))) + _shift, _OMC_LIT6);

          tmp26 = ((modelica_integer) 1); tmp27 = 1; tmp28 = arrayLength(_super_nodes);
          if(!(((tmp27 > 0) && (tmp26 > tmp28)) || ((tmp27 < 0) && (tmp26 < tmp28))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp26, tmp28); _i += tmp27)
            {

              tmpMeta25 = omc_mk_box2(3, &NBSorting_SuperNode_SINGLE__desc, omc_mk_integer(_i));
              arrayUpdate(_super_nodes, _i, tmpMeta25);
            }
          }

          _index = arrayLength((OMC_BOX_FIELD(_phase2_matching, 3)));

          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_phase2_matching), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[3] = omc_Array_expandToSize(threadData, arrayLength((OMC_BOX_FIELD(_phase2_matching, 3))) + _shift, (OMC_BOX_FIELD(_phase2_matching, 3)), omc_mk_integer(((modelica_integer) -1)));
          _phase2_matching = tmpMeta29;

          tmp30 = ((modelica_integer) 1) + _index; tmp31 = 1; tmp32 = _index + _shift;
          if(!(((tmp31 > 0) && (tmp30 > tmp32)) || ((tmp31 < 0) && (tmp30 < tmp32))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1) + _index; in_range_integer(_i, tmp30, tmp32); _i += tmp31)
            {

              arrayUpdate((OMC_BOX_FIELD(_phase2_matching, 3)),_i,omc_mk_integer(_i));
            }
          }

          _index = arrayLength((OMC_BOX_FIELD(_phase2_matching, 2)));

          tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_phase2_matching), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[2] = omc_Array_expandToSize(threadData, arrayLength((OMC_BOX_FIELD(_phase2_matching, 2))) + _shift, (OMC_BOX_FIELD(_phase2_matching, 2)), omc_mk_integer(((modelica_integer) -1)));
          _phase2_matching = tmpMeta33;

          tmp34 = ((modelica_integer) 1) + _index; tmp35 = 1; tmp36 = _index + _shift;
          if(!(((tmp35 > 0) && (tmp34 > tmp36)) || ((tmp35 < 0) && (tmp34 < tmp36))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1) + _index; in_range_integer(_i, tmp34, tmp36); _i += tmp35)
            {

              arrayUpdate((OMC_BOX_FIELD(_phase2_matching, 2)),_i,omc_mk_integer(_i));
            }
          }

          _index = ((modelica_integer) 1) + omc_NBAdjacency_IntMatrix_rows(threadData, (OMC_BOX_FIELD(_phase2_adj, 3)));

          _stamp = arrayCreate(modelica_integer_max((modelica_integer)(omc_NBAdjacency_IntMatrix_rows(threadData, (OMC_BOX_FIELD(_phase2_adj, 2)))),(modelica_integer)(omc_NBAdjacency_IntMatrix_rows(threadData, (OMC_BOX_FIELD(_phase2_adj, 3))))) + _shift, omc_mk_integer(((modelica_integer) 0)));

          tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_phase2_adj), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[3] = omc_NBAdjacency_IntMatrix_expandRows(threadData, (OMC_BOX_FIELD(_phase2_adj, 3)), _shift);
          _phase2_adj = tmpMeta37;

          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp39;
            modelica_metatype tmpMeta40;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp41;
            modelica_metatype _bucket_loopVar = 0;
            modelica_metatype _bucket;
            _bucket_loopVar = _buckets;
            tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta40; /* defaultValue */
            tmp39 = &__omcQ_24tmpVar15;
            while(1) {
              tmp41 = 1;
              if (!listEmpty(_bucket_loopVar)) {
                _bucket = MMC_CAR(_bucket_loopVar);
                _bucket_loopVar = MMC_CDR(_bucket_loopVar);
                tmp41--;
              }
              if (tmp41 == 0) {
                __omcQ_24tmpVar14 = omc_NBSorting_Value_getEquations(threadData, omc_Util_tuple22(threadData, _bucket));
                *tmp39 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp39 = &MMC_CDR(*tmp39);
              } else if (tmp41 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp39 = mmc_mk_nil();
            tmpMeta38 = __omcQ_24tmpVar15;
          }
          _eqn_rows = listAppend(_algebraic_loops, tmpMeta38);

          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp43;
            modelica_metatype tmpMeta44;
            modelica_metatype tmpMeta45;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp49;
            modelica_metatype _row_loopVar = 0;
            modelica_metatype _row;
            _row_loopVar = _eqn_rows;
            tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta44; /* defaultValue */
            tmp43 = &__omcQ_24tmpVar19;
            while(1) {
              tmp49 = 1;
              if (!listEmpty(_row_loopVar)) {
                _row = MMC_CAR(_row_loopVar);
                _row_loopVar = MMC_CDR(_row_loopVar);
                tmp49--;
              }
              if (tmp49 == 0) {
                {
                  modelica_metatype __omcQ_24tmpVar17;
                  modelica_metatype* tmp46;
                  modelica_metatype tmpMeta47;
                  modelica_metatype __omcQ_24tmpVar16;
                  modelica_integer tmp48;
                  modelica_metatype _idx_loopVar = 0;
                  modelica_metatype _idx;
                  _idx_loopVar = _row;
                  tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar17 = tmpMeta47; /* defaultValue */
                  tmp46 = &__omcQ_24tmpVar17;
                  while(1) {
                    tmp48 = 1;
                    if (!listEmpty(_idx_loopVar)) {
                      _idx = MMC_CAR(_idx_loopVar);
                      _idx_loopVar = MMC_CDR(_idx_loopVar);
                      tmp48--;
                    }
                    if (tmp48 == 0) {
                      __omcQ_24tmpVar16 = arrayGet((OMC_BOX_FIELD(_phase2_matching, 3)),omc_unbox_integer(_idx)) /* DAE.ASUB */;
                      *tmp46 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                      tmp46 = &MMC_CDR(*tmp46);
                    } else if (tmp48 == 1) {
                      break;
                    } else {
                      goto goto_6;
                    }
                  }
                  *tmp46 = mmc_mk_nil();
                  tmpMeta45 = __omcQ_24tmpVar17;
                }
                __omcQ_24tmpVar18 = tmpMeta45;
                *tmp43 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp43 = &MMC_CDR(*tmp43);
              } else if (tmp49 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp43 = mmc_mk_nil();
            tmpMeta42 = __omcQ_24tmpVar19;
          }
          _var_rows = tmpMeta42;

          omc_NBAdjacency_IntMatrix_reserveData(threadData, (OMC_BOX_FIELD(_phase2_adj, 3)), omc_NBSorting_SuperNode_mergedSize(threadData, (OMC_BOX_FIELD(_phase2_adj, 3)), _var_rows), 0 /* false */);

          _mx = omc_NBSorting_SuperNode_maxMergedRow(threadData, (OMC_BOX_FIELD(_phase2_adj, 3)), _var_rows);

          _counts = arrayCreate(omc_Util_nextPrime(threadData, _mx), omc_mk_integer(((modelica_integer) 0)));

          _uniq = arrayCreate(_mx, omc_mk_integer(((modelica_integer) 0)));

          _sorted = arrayCreate(_mx, omc_mk_integer(((modelica_integer) 0)));

          _rest_var_rows = _var_rows;

          {
            modelica_metatype _scc;
            for (tmpMeta50 = _algebraic_loops; !listEmpty(tmpMeta50); tmpMeta50=MMC_CDR(tmpMeta50))
            {
              _scc = MMC_CAR(tmpMeta50);
              /* Pattern-matching assignment */
              tmpMeta51 = _rest_var_rows;
              if (listEmpty(tmpMeta51)) goto goto_6;
              tmpMeta52 = MMC_CAR(tmpMeta51);
              tmpMeta53 = MMC_CDR(tmpMeta51);
              _var_lst = tmpMeta52;
              _rest_var_rows = tmpMeta53;

              omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _var_lst, _index, 0 /* false */);

              _index = omc_NBSorting_SuperNode_mergeRows(threadData, (OMC_BOX_FIELD(_phase2_adj, 3)), (OMC_BOX_FIELD(_phase2_matching, 2)), _super_nodes, _var_lst, _index, _stamp, _counts, _uniq, _sorted);
            }
          }

          {
            modelica_metatype _bucket;
            for (tmpMeta55 = _buckets; !listEmpty(tmpMeta55); tmpMeta55=MMC_CDR(tmpMeta55))
            {
              _bucket = MMC_CAR(tmpMeta55);
              /* Pattern-matching assignment */
              tmpMeta56 = _bucket;
              tmpMeta57 = OMC_BOX_FIELD(tmpMeta56, 1);
              tmpMeta58 = OMC_BOX_FIELD(tmpMeta56, 2);
              _mode = tmpMeta57;
              _val = tmpMeta58;

              /* Pattern-matching assignment */
              tmpMeta59 = _rest_var_rows;
              if (listEmpty(tmpMeta59)) goto goto_6;
              tmpMeta60 = MMC_CAR(tmpMeta59);
              tmpMeta61 = MMC_CDR(tmpMeta59);
              _var_lst = tmpMeta60;
              _rest_var_rows = tmpMeta61;

              { /* match expression */
                modelica_metatype tmp64_1;
                tmp64_1 = _val;
                {
                  volatile mmc_switch_type tmp64;
                  int tmp65;
                  tmp64 = 0;
                  for (; tmp64 < 2; tmp64++) {
                    switch (MMC_SWITCH_CAST(tmp64)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp64_1,0,2) == 0) goto tmp63_end;
                      
                      /* Pattern matching succeeded */
                      omc_NBSorting_SuperNode_mergeArrayNodes(threadData, _super_nodes, (OMC_BOX_FIELD(_val, 2)), _var_lst, _index, omc_unbox_integer(omc_UnorderedMap_getSafe(threadData, (OMC_BOX_FIELD(_mode, 2)), _eqn_map, _OMC_LIT8)), 0 /* false */);
                      goto tmp63_done;
                    }
                    case 1: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp64_1,1,2) == 0) goto tmp63_end;
                      
                      /* Pattern matching succeeded */
                      omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _var_lst, _index, 0 /* false */);
                      goto tmp63_done;
                    }
                    }
                    goto tmp63_end;
                    tmp63_end: ;
                  }
                  goto goto_62;
                  goto_62:;
                  goto goto_6;
                  goto tmp63_done;
                  tmp63_done:;
                }
              }
              ;

              _index = omc_NBSorting_SuperNode_mergeRows(threadData, (OMC_BOX_FIELD(_phase2_adj, 3)), (OMC_BOX_FIELD(_phase2_matching, 2)), _super_nodes, _var_lst, _index, _stamp, _counts, _uniq, _sorted);
            }
          }

          _index = ((modelica_integer) 1) + omc_NBAdjacency_IntMatrix_rows(threadData, (OMC_BOX_FIELD(_phase2_adj, 2)));

          tmpMeta67 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta67), MMC_UNTAGPTR(_phase2_adj), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta67))[2] = omc_NBAdjacency_IntMatrix_transpose(threadData, (OMC_BOX_FIELD(_phase2_adj, 3)), omc_NBAdjacency_IntMatrix_rows(threadData, (OMC_BOX_FIELD(_phase2_adj, 2))) + _shift, omc_NBSorting_SuperNode_mergedSize(threadData, (OMC_BOX_FIELD(_phase2_adj, 2)), _eqn_rows));
          _phase2_adj = tmpMeta67;

          _mx = omc_NBSorting_SuperNode_maxMergedRow(threadData, (OMC_BOX_FIELD(_phase2_adj, 2)), _eqn_rows);

          _counts = arrayCreate(omc_Util_nextPrime(threadData, _mx), omc_mk_integer(((modelica_integer) 0)));

          _uniq = arrayCreate(_mx, omc_mk_integer(((modelica_integer) 0)));

          _sorted = arrayCreate(_mx, omc_mk_integer(((modelica_integer) 0)));

          {
            modelica_metatype _scc;
            for (tmpMeta68 = _algebraic_loops; !listEmpty(tmpMeta68); tmpMeta68=MMC_CDR(tmpMeta68))
            {
              _scc = MMC_CAR(tmpMeta68);
              omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _scc, _index, 1 /* true */);

              _index = omc_NBSorting_SuperNode_mergeRows(threadData, (OMC_BOX_FIELD(_phase2_adj, 2)), (OMC_BOX_FIELD(_phase2_matching, 3)), _super_nodes, _scc, _index, _stamp, _counts, _uniq, _sorted);
            }
          }

          {
            modelica_metatype _bucket;
            for (tmpMeta70 = _buckets; !listEmpty(tmpMeta70); tmpMeta70=MMC_CDR(tmpMeta70))
            {
              _bucket = MMC_CAR(tmpMeta70);
              /* Pattern-matching assignment */
              tmpMeta71 = _bucket;
              tmpMeta72 = OMC_BOX_FIELD(tmpMeta71, 1);
              tmpMeta73 = OMC_BOX_FIELD(tmpMeta71, 2);
              _mode = tmpMeta72;
              _val = tmpMeta73;

              _eqn_lst = omc_NBSorting_Value_getEquations(threadData, _val);

              { /* match expression */
                modelica_metatype tmp76_1;
                tmp76_1 = _val;
                {
                  volatile mmc_switch_type tmp76;
                  int tmp77;
                  tmp76 = 0;
                  for (; tmp76 < 2; tmp76++) {
                    switch (MMC_SWITCH_CAST(tmp76)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp76_1,0,2) == 0) goto tmp75_end;
                      
                      /* Pattern matching succeeded */
                      omc_NBSorting_SuperNode_mergeArrayNodes(threadData, _super_nodes, (OMC_BOX_FIELD(_val, 2)), _eqn_lst, _index, omc_unbox_integer(omc_UnorderedMap_getSafe(threadData, (OMC_BOX_FIELD(_mode, 2)), _eqn_map, _OMC_LIT9)), 1 /* true */);
                      goto tmp75_done;
                    }
                    case 1: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp76_1,1,2) == 0) goto tmp75_end;
                      
                      /* Pattern matching succeeded */
                      omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _eqn_lst, _index, 1 /* true */);
                      goto tmp75_done;
                    }
                    }
                    goto tmp75_end;
                    tmp75_end: ;
                  }
                  goto goto_74;
                  goto_74:;
                  goto goto_6;
                  goto tmp75_done;
                  tmp75_done:;
                }
              }
              ;

              _index = omc_NBSorting_SuperNode_mergeRows(threadData, (OMC_BOX_FIELD(_phase2_adj, 2)), (OMC_BOX_FIELD(_phase2_matching, 3)), _super_nodes, _eqn_lst, _index, _stamp, _counts, _uniq, _sorted);
            }
          }
          tmpMeta5 = _phase2_adj;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT11);
          goto goto_6;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      OMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _phase2_adj = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_phase2_matching) { *out_phase2_matching = _phase2_matching; }
  if (out_super_nodes) { *out_super_nodes = _super_nodes; }
  omc_ret_ = _phase2_adj;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBSorting_SuperNode_getEqnIndices(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _eqn_indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqn_indices has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _node;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((OMC_BOX_FIELD(_node, 2)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_node, 3));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_node, 4));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_string tmp7;
          
          /* Pattern matching succeeded */
          tmp7 = stringAppend(_OMC_LIT12,omc_NBSorting_SuperNode_toString(threadData, _node));
          tmpMeta6 = mmc_mk_cons(tmp7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta6);
          goto goto_2;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT14);
          goto goto_2;
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
  _eqn_indices = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqn_indices;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NBSorting_SuperNode_isArrayBucket(threadData_t *threadData, modelica_metatype _node)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _node;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBSorting_SuperNode_isArrayBucket(threadData_t *threadData, modelica_metatype _node)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBSorting_SuperNode_isArrayBucket(threadData, _node);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_string omc_NBSorting_SuperNode_toString(threadData_t *threadData, modelica_metatype _node)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _node;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_string tmp5;
          modelica_string tmp6;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_OMC_LIT15,intString(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_node, 2))))));
          tmp6 = stringAppend(tmp5,_OMC_LIT16);
          tmp1 = tmp6;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          modelica_string tmp10;
          
          /* Pattern matching succeeded */
          tmp7 = stringAppend(_OMC_LIT15,intString(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_node, 2))))));
          tmp8 = stringAppend(tmp7,_OMC_LIT17);
          tmp9 = stringAppend(tmp8,intString(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_node, 3))))));
          tmp10 = stringAppend(tmp9,_OMC_LIT18);
          tmp1 = tmp10;
          goto tmp3_done;
        }
        case 5: {
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_metatype tmpMeta13;
          modelica_string tmp17;
          
          /* Pattern matching succeeded */
          tmp11 = stringAppend(_OMC_LIT15,intString(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_node, 2))))));
          tmp12 = stringAppend(tmp11,_OMC_LIT19);
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp16;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (OMC_BOX_FIELD(_node, 3));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar21;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar20 = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(_i)));
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar21;
          }
          tmp17 = stringAppend(tmp12,omc_List_toString(threadData, tmpMeta13, boxvar_intString, 4));
          tmp1 = tmp17;
          goto tmp3_done;
        }
        case 6: {
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_metatype tmpMeta20;
          modelica_string tmp24;
          
          /* Pattern matching succeeded */
          tmp18 = stringAppend(_OMC_LIT15,intString(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_node, 2))))));
          tmp19 = stringAppend(tmp18,_OMC_LIT20);
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp21;
            modelica_metatype tmpMeta22;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp23;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (OMC_BOX_FIELD(_node, 4));
            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta22; /* defaultValue */
            tmp21 = &__omcQ_24tmpVar23;
            while(1) {
              tmp23 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp23--;
              }
              if (tmp23 == 0) {
                __omcQ_24tmpVar22 = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(_i)));
                *tmp21 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp21 = &MMC_CDR(*tmp21);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp21 = mmc_mk_nil();
            tmpMeta20 = __omcQ_24tmpVar23;
          }
          tmp24 = stringAppend(tmp19,omc_List_toString(threadData, tmpMeta20, boxvar_intString, 4));
          tmp1 = tmp24;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT21;
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBSorting_LoopIdentifier_fromSCC(threadData_t *threadData, modelica_metatype _scc, modelica_metatype _mapping, modelica_metatype _matching)
{
  modelica_metatype _li = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _li has no default value.
  {
    modelica_metatype __omcQ_24tmpVar25;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar24;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _scc;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar25 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar25;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar24 = arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(_i)) /* DAE.ASUB */;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar24,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar25;
  }
  {
    modelica_metatype __omcQ_24tmpVar27;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar26;
    modelica_integer tmp8;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _scc;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar27 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar27;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar26 = arrayGet((OMC_BOX_FIELD(_mapping, 3)),omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_matching, 3)),omc_unbox_integer(_i)) /* DAE.ASUB */)) /* DAE.ASUB */;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar26,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar27;
  }
  tmpMeta9 = omc_mk_box3(3, &NBSorting_LoopIdentifier_LOOP__IDENTIFIER__desc, omc_UnorderedSet_fromList(threadData, tmpMeta1, boxvar_Util_id, boxvar_intEq), omc_UnorderedSet_fromList(threadData, tmpMeta5, boxvar_Util_id, boxvar_intEq));
  _li = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _li;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NBSorting_LoopIdentifier_toString(threadData_t *threadData, modelica_metatype _li)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmp1 = stringAppend(_OMC_LIT22,omc_UnorderedSet_toString(threadData, (OMC_BOX_FIELD(_li, 2)), boxvar_intString, _OMC_LIT5));
  tmp2 = stringAppend(tmp1,_OMC_LIT23);
  tmp3 = stringAppend(tmp2,omc_UnorderedSet_toString(threadData, (OMC_BOX_FIELD(_li, 3)), boxvar_intString, _OMC_LIT5));
  tmp4 = stringAppend(tmp3,_OMC_LIT5);
  omc_string_store(&(_str), tmp4);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NBSorting_LoopIdentifier_isEqual(threadData_t *threadData, modelica_metatype _li1, modelica_metatype _li2)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (omc_UnorderedSet_isEqual(threadData, (OMC_BOX_FIELD(_li1, 2)), (OMC_BOX_FIELD(_li2, 2))) && omc_UnorderedSet_isEqual(threadData, (OMC_BOX_FIELD(_li1, 3)), (OMC_BOX_FIELD(_li2, 3))));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBSorting_LoopIdentifier_isEqual(threadData_t *threadData, modelica_metatype _li1, modelica_metatype _li2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBSorting_LoopIdentifier_isEqual(threadData, _li1, _li2);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_integer omc_NBSorting_LoopIdentifier_hash(threadData_t *threadData, modelica_metatype _li)
{
  modelica_integer _i;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = stringHashDjb2(omc_NBSorting_LoopIdentifier_toString(threadData, _li));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _i;
  return omc_ret_;
}
modelica_metatype boxptr_NBSorting_LoopIdentifier_hash(threadData_t *threadData, modelica_metatype _li)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBSorting_LoopIdentifier_hash(threadData, _li);
  out_i = omc_mk_icon(_i);
  return out_i;
}

DLLModelDirection
modelica_metatype omc_NBSorting_tarjanScalar(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching)
{
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype _stack = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _number = NULL;
  modelica_metatype _lowlink = NULL;
  modelica_metatype _onStack = NULL;
  modelica_metatype _data = NULL;
  modelica_integer _N;
  modelica_integer _M;
  modelica_integer _eqn;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _comps = tmpMeta1;
  _index = ((modelica_integer) 0);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _stack = tmpMeta2;
  // _number has no default value.
  // _lowlink has no default value.
  // _onStack has no default value.
  _data = omc_NBAdjacency_IntMatrix_entries(threadData, _m);
  _N = arrayLength((OMC_BOX_FIELD(_matching, 2)));
  _M = arrayLength((OMC_BOX_FIELD(_matching, 3)));
  // _eqn has no default value.
  _number = arrayCreate(_M, omc_mk_integer(((modelica_integer) -1)));

  _lowlink = arrayCreate(_M, omc_mk_integer(((modelica_integer) -1)));

  _onStack = arrayCreate(_M, omc_mk_boolean(0 /* false */));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _N;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _var;
    for(_var = ((modelica_integer) 1); in_range_integer(_var, tmp3, tmp5); _var += tmp4)
    {

      _eqn = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_matching, 2)),_var) /* DAE.ASUB */);

      if(((_eqn > ((modelica_integer) 0)) && (omc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */) == ((modelica_integer) -1))))
      {
        _stack = omc_NBSorting_strongConnect(threadData, _m, _data, (OMC_BOX_FIELD(_matching, 2)), _eqn, _stack, _index, _number, _lowlink, _onStack, _comps ,&_index ,&_comps);
      }
    }
  }

  omc_GCExt_free(threadData, _number);

  omc_GCExt_free(threadData, _lowlink);

  omc_GCExt_free(threadData, _onStack);

  _comps = listReverse(_comps);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comps;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBSorting_tarjan(threadData_t *threadData, modelica_metatype _adj, modelica_metatype _matching, modelica_metatype _vars, modelica_metatype _eqns)
{
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _mapping_opt = NULL;
  modelica_metatype _eqn_AtS = NULL;
  modelica_metatype _var_AtS = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _comps = tmpMeta1;
  // _mapping_opt has no default value.
  // _eqn_AtS has no default value.
  // _var_AtS has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp9_1;
            tmp9_1 = _adj;
            {
              modelica_metatype _comps_indices = NULL;
              modelica_metatype _phase2_indices = NULL;
              modelica_metatype _phase2_adj = NULL;
              modelica_metatype _phase2_matching = NULL;
              modelica_metatype _super_nodes = NULL;
              modelica_metatype _var_loc = NULL;
              modelica_metatype _buckets = NULL;
              int tmp9;
              // _comps_indices has no default value.
              // _phase2_indices has no default value.
              // _phase2_adj has no default value.
              // _phase2_matching has no default value.
              // _super_nodes has no default value.
              // _var_loc has no default value.
              // _buckets has no default value.
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp9_1))) {
                case 5: {
                  
                  /* Pattern matching succeeded */
                  if(omc_Flags_isSet(threadData, _OMC_LIT27))
                  {
                    fputs(omc_string_data(omc_StringUtil_headline__1(threadData, _OMC_LIT24)),stdout);
                  }

                  _buckets = omc_NBSorting_PseudoBucket_create(threadData, (OMC_BOX_FIELD(_matching, 3)), _eqns, (OMC_BOX_FIELD(_adj, 4)), (OMC_BOX_FIELD(_adj, 2)), (OMC_BOX_FIELD(_adj, 5)));

                  _comps_indices = omc_NBSorting_tarjanScalar(threadData, (OMC_BOX_FIELD(_adj, 2)), _matching);

                  _phase2_adj = omc_NBSorting_SuperNode_create(threadData, _adj, (OMC_BOX_FIELD(_adj, 4)), _matching, (OMC_BOX_FIELD(_eqns, 2)), _comps_indices, _buckets ,&_phase2_matching ,&_super_nodes);

                  { /* match expression */
                    modelica_metatype tmp12_1;
                    tmp12_1 = _phase2_adj;
                    {
                      volatile mmc_switch_type tmp12;
                      int tmp13;
                      tmp12 = 0;
                      for (; tmp12 < 2; tmp12++) {
                        switch (MMC_SWITCH_CAST(tmp12)) {
                        case 0: {
                          modelica_metatype tmpMeta14;
                          if (mmc__uniontype__metarecord__typedef__equal(tmp12_1,2,5) == 0) goto tmp11_end;
                          
                          /* Pattern matching succeeded */
                          _phase2_indices = omc_NBSorting_tarjanScalar(threadData, (OMC_BOX_FIELD(_phase2_adj, 2)), _phase2_matching);

                          _var_loc = arrayCreate(arrayLength((OMC_BOX_FIELD(_matching, 2))), omc_mk_integer(((modelica_integer) 0)));

                          {
                            modelica_metatype __omcQ_24tmpVar29;
                            modelica_metatype* tmp15;
                            modelica_metatype tmpMeta16;
                            modelica_metatype __omcQ_24tmpVar28;
                            modelica_integer tmp17;
                            modelica_metatype _comp_loopVar = 0;
                            modelica_metatype _comp;
                            _comp_loopVar = _phase2_indices;
                            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
                            __omcQ_24tmpVar29 = tmpMeta16; /* defaultValue */
                            tmp15 = &__omcQ_24tmpVar29;
                            while(1) {
                              tmp17 = 1;
                              if (!listEmpty(_comp_loopVar)) {
                                _comp = MMC_CAR(_comp_loopVar);
                                _comp_loopVar = MMC_CDR(_comp_loopVar);
                                tmp17--;
                              }
                              if (tmp17 == 0) {
                                __omcQ_24tmpVar28 = omc_NBSorting_SuperNode_collapse(threadData, _comp, _super_nodes, (OMC_BOX_FIELD(_adj, 2)), (OMC_BOX_FIELD(_adj, 4)), _matching, _vars, _eqns, _var_loc);
                                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                                tmp15 = &MMC_CDR(*tmp15);
                              } else if (tmp17 == 1) {
                                break;
                              } else {
                                goto goto_10;
                              }
                            }
                            *tmp15 = mmc_mk_nil();
                            tmpMeta14 = __omcQ_24tmpVar29;
                          }
                          _comps = tmpMeta14;

                          omc_GCExt_free(threadData, _var_loc);
                          goto tmp11_done;
                        }
                        case 1: {
                          
                          /* Pattern matching succeeded */
                          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT29);
                          goto goto_10;
                          goto tmp11_done;
                        }
                        }
                        goto tmp11_end;
                        tmp11_end: ;
                      }
                      goto goto_10;
                      goto_10:;
                      goto goto_7;
                      goto tmp11_done;
                      tmp11_done:;
                    }
                  }
                  ;
                  tmpMeta6 = _comps;
                  goto tmp8_done;
                }
                case 3: {
                  modelica_metatype tmpMeta18;
                  
                  /* Pattern matching succeeded */
                  tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta6 = tmpMeta18;
                  goto tmp8_done;
                }
                default:
                tmp8_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT31);
                  goto goto_7;
                  goto tmp8_done;
                }
                }
                goto tmp8_end;
                tmp8_end: ;
              }
              goto goto_7;
              goto_7:;
              goto goto_2;
              goto tmp8_done;
              tmp8_done:;
            }
          }
          _comps = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta25;
          modelica_string tmp26;
          modelica_string tmp27;
          modelica_string tmp28;
          modelica_string tmp29;
          modelica_string tmp30;
          /* Pattern matching succeeded */
          _mapping_opt = omc_NBAdjacency_Matrix_getMappingOpt(threadData, _adj);

          
          
          { /* match expression */
            modelica_metatype tmp22_1;
            tmp22_1 = _mapping_opt;
            {
              modelica_metatype _mapping = NULL;
              volatile mmc_switch_type tmp22;
              int tmp23;
              // _mapping has no default value.
              tmp22 = 0;
              for (; tmp22 < 2; tmp22++) {
                switch (MMC_SWITCH_CAST(tmp22)) {
                case 0: {
                  modelica_metatype tmpMeta24;
                  if (optionNone(tmp22_1)) goto tmp21_end;
                  tmpMeta24 = OMC_BOX_FIELD(tmp22_1, 1);
                  _mapping = tmpMeta24;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = mmc_mk_some((OMC_BOX_FIELD(_mapping, 4)));
                  tmpMeta[0+1] = mmc_mk_some((OMC_BOX_FIELD(_mapping, 5)));
                  goto tmp21_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = mmc_mk_none();
                  tmpMeta[0+1] = mmc_mk_none();
                  goto tmp21_done;
                }
                }
                goto tmp21_end;
                tmp21_end: ;
              }
              goto goto_20;
              goto_20:;
              goto goto_2;
              goto tmp21_done;
              tmp21_done:;
            }
          }
          _eqn_AtS = tmpMeta[0+0];
          _var_AtS = tmpMeta[0+1];

          tmp26 = stringAppend(_OMC_LIT32,omc_NBVariable_VariablePointers_toString(threadData, _vars, _OMC_LIT33, _var_AtS, 1 /* true */));
          tmp27 = stringAppend(tmp26,_OMC_LIT5);
          tmp28 = stringAppend(tmp27,omc_NBEquation_EquationPointers_toString(threadData, _eqns, _OMC_LIT33, _eqn_AtS, 1 /* true */, mmc_mk_none()));
          tmp29 = stringAppend(tmp28,_OMC_LIT5);
          tmp30 = stringAppend(tmp29,omc_NBMatching_toString(threadData, _matching, _OMC_LIT34));
          tmpMeta25 = mmc_mk_cons(tmp30, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta25);

          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comps;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NBSorting_PseudoBucket_relevant(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_boolean _b;
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _val has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _val = tmpMeta2;

  _b = omc_List_hasSeveralElements(threadData, omc_NBSorting_Value_getEquations(threadData, _val));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBSorting_PseudoBucket_relevant(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBSorting_PseudoBucket_relevant(threadData, _tpl);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NBSorting_PseudoBucket_filter(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftpl, modelica_metatype _set)
{
  modelica_metatype _tpl = NULL;
  modelica_metatype _mode = NULL;
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tpl = __omcQ_24in_5Ftpl;
  // _mode has no default value.
  // _val has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 2);
  _mode = tmpMeta2;
  _val = tmpMeta3;

  _val = omc_NBSorting_Value_filter(threadData, _val, _set);

  tmpMeta4 = omc_mk_box2(0, _mode, _val);
  _tpl = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tpl;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBSorting_PseudoBucket_getBucket(threadData_t *threadData, modelica_metatype _mode, modelica_boolean _multi, modelica_integer _eqn_arr_idx, modelica_metatype _per_eqn, modelica_metatype *out_cref_ptr, modelica_boolean *out_fresh)
{
  modelica_metatype _idx_ptr = NULL;
  modelica_metatype _cref_ptr = NULL;
  modelica_boolean _fresh;
  modelica_metatype _m = NULL;
  modelica_boolean _mu;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_boolean tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _idx_ptr has no default value.
  // _cref_ptr has no default value.
  _fresh = 0 /* false */;
  // _m has no default value.
  // _mu has no default value.
  {
    modelica_metatype _bucket;
    for (tmpMeta1 = arrayGet(_per_eqn,_eqn_arr_idx) /* DAE.ASUB */; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _bucket = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _bucket;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
      tmp5 = omc_unbox_integer(tmpMeta4);
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta2, 3);
      tmpMeta7 = OMC_BOX_FIELD(tmpMeta2, 4);
      _m = tmpMeta3;
      _mu = tmp5  /* pattern as ty=Boolean */;
      _idx_ptr = tmpMeta6;
      _cref_ptr = tmpMeta7;

      if(((!_mu == !_multi) && omc_NBAdjacency_Mode_isEqual(threadData, _m, _mode)))
      {
        goto _return;
      }
    }
  }

  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _idx_ptr = omc_Pointer_create(threadData, tmpMeta9);

  tmp11 = (modelica_boolean)_multi;
  if(tmp11)
  {
    tmpMeta12 = (OMC_BOX_FIELD(_mode, 3));
  }
  else
  {
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta12 = tmpMeta10;
  }
  _cref_ptr = omc_Pointer_create(threadData, tmpMeta12);

  _fresh = 1 /* true */;

  tmpMeta14 = omc_mk_box4(0, _mode, omc_mk_boolean(_multi), _idx_ptr, _cref_ptr);
  tmpMeta13 = mmc_mk_cons(tmpMeta14, arrayGet(_per_eqn,_eqn_arr_idx) /* DAE.ASUB */);
  arrayUpdate(_per_eqn, _eqn_arr_idx, tmpMeta13);
  _return: OMC_LABEL_UNUSED
  if (out_cref_ptr) { *out_cref_ptr = _cref_ptr; }
  if (out_fresh) { *out_fresh = _fresh; }
  omc_ret_ = _idx_ptr;
  return omc_ret_;
}
modelica_metatype boxptr_NBSorting_PseudoBucket_getBucket(threadData_t *threadData, modelica_metatype _mode, modelica_metatype _multi, modelica_metatype _eqn_arr_idx, modelica_metatype _per_eqn, modelica_metatype *out_cref_ptr, modelica_metatype *out_fresh)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _fresh;
  modelica_metatype _idx_ptr = NULL;
  tmp1 = omc_unbox_integer(_multi);
  tmp2 = omc_unbox_integer(_eqn_arr_idx);
  _idx_ptr = omc_NBSorting_PseudoBucket_getBucket(threadData, _mode, tmp1, tmp2, _per_eqn, out_cref_ptr, &_fresh);
  /* skip box _idx_ptr; Pointer<list<#Integer>> */
  /* skip box _cref_ptr; Pointer<list<NFComponentRef>> */
  if (out_fresh) { *out_fresh = omc_mk_icon(_fresh); }
  return _idx_ptr;
}

DLLModelDirection
modelica_metatype omc_NBSorting_PseudoBucket_create(threadData_t *threadData, modelica_metatype _eqn_to_var, modelica_metatype _eqns, modelica_metatype _mapping, modelica_metatype _m, modelica_metatype _modes)
{
  modelica_metatype _buckets = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _data = NULL;
  modelica_metatype _ids = NULL;
  modelica_metatype _per_eqn = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _order = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _mode_opt = NULL;
  modelica_metatype _mode = NULL;
  modelica_metatype _cref = NULL;
  modelica_integer _eqn_arr_idx;
  modelica_boolean _multi;
  modelica_boolean _fresh;
  modelica_metatype _idx_ptr = NULL;
  modelica_metatype _cref_ptr = NULL;
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_string tmp29;
  modelica_string tmp30;
  modelica_metatype tmpMeta31;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _buckets = tmpMeta1;
  _data = omc_NBAdjacency_IntMatrix_entries(threadData, _m);
  _ids = omc_NBAdjacency_IntMatrix_payload(threadData, _m);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _per_eqn = arrayCreate(modelica_integer_max((modelica_integer)(arrayLength((OMC_BOX_FIELD(_mapping, 4)))),(modelica_integer)(((modelica_integer) 1))), tmpMeta2);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _order = tmpMeta3;
  // _mode_opt has no default value.
  // _mode has no default value.
  // _cref has no default value.
  // _eqn_arr_idx has no default value.
  // _multi has no default value.
  // _fresh has no default value.
  // _idx_ptr has no default value.
  // _cref_ptr has no default value.
  // _val has no default value.
  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = arrayLength(_eqn_to_var);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _eqn_scal_idx;
    for(_eqn_scal_idx = ((modelica_integer) 1); in_range_integer(_eqn_scal_idx, tmp10, tmp12); _eqn_scal_idx += tmp11)
    {

      _mode_opt = omc_NBAdjacency_Modes_get(threadData, _modes, _m, _data, _ids, _eqn_scal_idx, omc_unbox_integer(arrayGet(_eqn_to_var,_eqn_scal_idx) /* DAE.ASUB */));

      if(isSome(_mode_opt))
      {
        _mode = omc_Util_getOption(threadData, _mode_opt);

        _eqn_arr_idx = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 2)),_eqn_scal_idx) /* DAE.ASUB */);

        _multi = omc_NBEquation_Equation_isRecordOrTupleEquation(threadData, omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, _eqn_arr_idx));

        _cref = _OMC_LIT35;

        if(_multi)
        {
          _cref = listHead((OMC_BOX_FIELD(_mode, 3)));

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_mode), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[3] = tmpMeta5;
          _mode = tmpMeta4;
        }

        _idx_ptr = omc_NBSorting_PseudoBucket_getBucket(threadData, _mode, _multi, _eqn_arr_idx, _per_eqn ,&_cref_ptr ,&_fresh);

        if(_fresh)
        {
          tmpMeta7 = omc_mk_box4(0, _mode, omc_mk_boolean(_multi), _idx_ptr, _cref_ptr);
          tmpMeta6 = mmc_mk_cons(tmpMeta7, _order);
          _order = tmpMeta6;
        }
        else
        {
          if(_multi)
          {
            tmpMeta8 = mmc_mk_cons(_cref, omc_Pointer_access(threadData, _cref_ptr));
            omc_Pointer_update(threadData, _cref_ptr, tmpMeta8);
          }
        }

        tmpMeta9 = mmc_mk_cons(omc_mk_integer(_eqn_scal_idx), omc_Pointer_access(threadData, _idx_ptr));
        omc_Pointer_update(threadData, _idx_ptr, tmpMeta9);
      }
    }
  }

  {
    modelica_metatype _bucket;
    for (tmpMeta13 = _order; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
    {
      _bucket = MMC_CAR(tmpMeta13);
      /* Pattern-matching assignment */
      tmpMeta14 = _bucket;
      tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 1);
      tmpMeta16 = OMC_BOX_FIELD(tmpMeta14, 2);
      tmp17 = omc_unbox_integer(tmpMeta16);
      tmpMeta18 = OMC_BOX_FIELD(tmpMeta14, 3);
      tmpMeta19 = OMC_BOX_FIELD(tmpMeta14, 4);
      _mode = tmpMeta15;
      _multi = tmp17  /* pattern as ty=Boolean */;
      _idx_ptr = tmpMeta18;
      _cref_ptr = tmpMeta19;

      if(_multi)
      {
        tmpMeta20 = omc_mk_box3(4, &NBSorting_Value_MULTI__VAL__desc, omc_Pointer_access(threadData, _cref_ptr), omc_Pointer_access(threadData, _idx_ptr));
        _val = tmpMeta20;
      }
      else
      {
        tmpMeta21 = omc_mk_box3(3, &NBSorting_Value_SINGLE__VAL__desc, listHead((OMC_BOX_FIELD(_mode, 3))), omc_Pointer_access(threadData, _idx_ptr));
        _val = tmpMeta21;
      }

      tmpMeta23 = omc_mk_box2(0, _mode, _val);
      tmpMeta22 = mmc_mk_cons(tmpMeta23, _buckets);
      _buckets = tmpMeta22;
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT27))
  {
    {
      modelica_metatype _bucket_tpl;
      for (tmpMeta25 = _buckets; !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
      {
        _bucket_tpl = MMC_CAR(tmpMeta25);
        /* Pattern-matching assignment */
        tmpMeta26 = _bucket_tpl;
        tmpMeta27 = OMC_BOX_FIELD(tmpMeta26, 1);
        tmpMeta28 = OMC_BOX_FIELD(tmpMeta26, 2);
        _mode = tmpMeta27;
        _val = tmpMeta28;

        tmp29 = stringAppend(omc_NBAdjacency_Mode_toString(threadData, _mode),omc_NBSorting_Value_toString(threadData, _val));
        tmp30 = stringAppend(tmp29,_OMC_LIT5);
        fputs(omc_string_data(tmp30),stdout);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _buckets;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBSorting_Value_getEquations(threadData_t *threadData, modelica_metatype _val)
{
  modelica_metatype _eqn_scal_indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqn_scal_indices has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _val;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_val, 3));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_val, 3));
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
  _eqn_scal_indices = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqn_scal_indices;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBSorting_Value_filter(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_metatype _set)
{
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _val = __omcQ_24in_5Fval;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _val;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar30;
            modelica_integer tmp10;
            modelica_metatype _idx_loopVar = 0;
            modelica_metatype _idx;
            _idx_loopVar = (OMC_BOX_FIELD(_val, 3));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar31;
            while(1) {
              tmp10 = 1;
              while (!listEmpty(_idx_loopVar)) {
                _idx = MMC_CAR(_idx_loopVar);
                _idx_loopVar = MMC_CDR(_idx_loopVar);
                if ((!omc_UnorderedSet_contains(threadData, _idx, _set))) {
                  tmp10--;
                  break;
                }
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar30 = _idx;
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar31;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_val), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
          _val = tmpMeta6;
          tmpMeta1 = _val;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar33;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_metatype __omcQ_24tmpVar32;
            modelica_integer tmp15;
            modelica_metatype _idx_loopVar = 0;
            modelica_metatype _idx;
            _idx_loopVar = (OMC_BOX_FIELD(_val, 3));
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar33 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar33;
            while(1) {
              tmp15 = 1;
              while (!listEmpty(_idx_loopVar)) {
                _idx = MMC_CAR(_idx_loopVar);
                _idx_loopVar = MMC_CDR(_idx_loopVar);
                if ((!omc_UnorderedSet_contains(threadData, _idx, _set))) {
                  tmp15--;
                  break;
                }
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar32 = _idx;
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar33;
          }
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_val), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = tmpMeta12;
          _val = tmpMeta11;
          tmpMeta1 = _val;
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
  _val = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _val;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NBSorting_Value_toString(threadData_t *threadData, modelica_metatype _val)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _val;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_string tmp6;
          modelica_string tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT36,omc_NFComponentRef_toString(threadData, (OMC_BOX_FIELD(_val, 2))));
          tmp7 = stringAppend(tmp6,_OMC_LIT18);
          tmp1 = tmp7;
          goto tmp3_done;
        }
        case 1: {
          modelica_string tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp8 = stringAppend(_OMC_LIT37,omc_List_toString(threadData, (OMC_BOX_FIELD(_val, 2)), boxvar_NFComponentRef_toString, 4));
          tmp1 = tmp8;
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

