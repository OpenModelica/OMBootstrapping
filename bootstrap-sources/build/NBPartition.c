#include "omc_simulation_settings.h"
#include "NBPartition.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "NBPartition.Partition.kindToInteger failed. Unknown partition kind in match."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,76,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,0,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "ODE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,3,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "ALG"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,3,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "ODE_EVT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,7,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "ALG_EVT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,7,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "INI"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,3,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "DAE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,3,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "JAC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,3,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "CLK"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,3,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "NBPartition.Partition.kindToString failed. Unknown partition kind in match."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,75,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,1) {_OMC_LIT16,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "NBPartition.Partition.getClocks failed. There is no clock in continuous partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,83,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,1,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data ") "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,2,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data " Partition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,10,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "Unknown"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,7,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,9,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "NBPartition.Association.expClocked failed becase of unhandled clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,69,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/NBackEnd/Classes/NBPartition.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,78,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT27_6,1.758197185e9);
#define _OMC_LIT27_6 MMC_REFREALLIT(_OMC_LIT_STRUCT27_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(163)),MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),MMC_IMMEDIATE(MMC_TAGFIXNUM(163)),MMC_IMMEDIATE(MMC_TAGFIXNUM(120)),_OMC_LIT27_6}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT28_6,1.758197185e9);
#define _OMC_LIT28_6 MMC_REFREALLIT(_OMC_LIT_STRUCT28_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(161)),MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),MMC_IMMEDIATE(MMC_TAGFIXNUM(161)),MMC_IMMEDIATE(MMC_TAGFIXNUM(121)),_OMC_LIT28_6}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT29_6,1.758197185e9);
#define _OMC_LIT29_6 MMC_REFREALLIT(_OMC_LIT_STRUCT29_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(135)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(135)),MMC_IMMEDIATE(MMC_TAGFIXNUM(80)),_OMC_LIT29_6}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT30_6,1.758197185e9);
#define _OMC_LIT30_6 MMC_REFREALLIT(_OMC_LIT_STRUCT30_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(136)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(136)),MMC_IMMEDIATE(MMC_TAGFIXNUM(117)),_OMC_LIT30_6}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Base clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,12,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Sub clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,11,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data " of base clock  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,16,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "NBPartition.Association.toString failed. Unknown partition association in match."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,80,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,1) {_OMC_LIT34,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Continuous "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,11,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "Clocked"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,7,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#include "util/modelica.h"

#include "NBPartition_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartition_Association_expClocked(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _info, modelica_metatype _clock_ptr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartition_Association_expClocked,2,0) {(void*) boxptr_NBPartition_Association_expClocked,0}};
#define boxvar_NBPartition_Association_expClocked MMC_REFSTRUCTLIT(boxvar_lit_NBPartition_Association_expClocked)

DLLDirection
modelica_metatype omc_NBPartition_Partition_updateHeldVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpar, modelica_metatype _held_crefs)
{
  modelica_metatype _par = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _par = __omcQ_24in_5Fpar;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_par), 3)));
    {
      modelica_metatype _association = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _association has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,3) == 0) goto tmp4_end;
          
          _association = tmp5_1;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_association), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = mmc_mk_boolean((!omc_UnorderedSet_isDisjoint(threadData, _held_crefs, omc_UnorderedMap_keySet(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_par), 4)))), 2)))))));
          _association = tmpMeta7;
          tmpMeta2 = _association;
          goto tmp4_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_par), 3)));
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      goto_3:;
      MMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_par), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _par = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _par;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_removeAlias(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpar)
{
  modelica_metatype _par = NULL;
  modelica_metatype _comps = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _par = __omcQ_24in_5Fpar;
  // _comps has no default value.
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_par), 9)))))
  {
    _comps = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_par), 9))));

    tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_comps);
    if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
      {
        arrayUpdate(_comps,_i,omc_NBStrongComponent_removeAlias(threadData, arrayGet(_comps,_i) /* DAE.ASUB */));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _par;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_clone(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpar, modelica_boolean _shallow)
{
  modelica_metatype _par = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _par = __omcQ_24in_5Fpar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_par), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = omc_NBEquation_EquationPointers_clone(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_par), 6))), _shallow);
  _par = tmpMeta1;

  if((!_shallow))
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(10));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_par), 10*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[7] = mmc_mk_none();
    _par = tmpMeta2;

    tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(10));
    memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_par), 10*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[8] = mmc_mk_none();
    _par = tmpMeta3;

    tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(10));
    memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_par), 10*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[9] = mmc_mk_none();
    _par = tmpMeta4;

    { /* match expression */
      modelica_metatype tmp9_1;
      tmp9_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_par), 3)));
      {
        modelica_metatype _association = NULL;
        volatile mmc_switch_type tmp9;
        int tmp10;
        // _association has no default value.
        tmp9 = 0;
        for (; tmp9 < 2; tmp9++) {
          switch (MMC_SWITCH_CAST(tmp9)) {
          case 0: {
            modelica_metatype tmpMeta11;
            if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,2) == 0) goto tmp8_end;
            
            _association = tmp9_1;
            /* Pattern matching succeeded */
            tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_association), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = mmc_mk_none();
            _association = tmpMeta11;
            tmpMeta6 = _association;
            goto tmp8_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_par), 3)));
            goto tmp8_done;
          }
          }
          goto tmp8_end;
          tmp8_end: ;
        }
        goto goto_7;
        goto_7:;
        MMC_THROW_INTERNAL();
        goto tmp8_done;
        tmp8_done:;
      }
    }
    tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(10));
    memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_par), 10*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = tmpMeta6;
    _par = tmpMeta5;
  }
  _return: OMC_LABEL_UNUSED
  return _par;
}
modelica_metatype boxptr_NBPartition_Partition_clone(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpar, modelica_metatype _shallow)
{
  modelica_integer tmp1;
  modelica_metatype _par = NULL;
  tmp1 = mmc_unbox_integer(_shallow);
  _par = omc_NBPartition_Partition_clone(threadData, __omcQ_24in_5Fpar, tmp1);
  /* skip box _par; NBPartition.Partition */
  return _par;
}

DLLDirection
modelica_integer omc_NBPartition_Partition_kindToInteger(threadData_t *threadData, modelica_integer _kind)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_kind;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 3);
          goto tmp3_done;
        }
        case 4: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 4);
          goto tmp3_done;
        }
        case 5: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
          goto tmp3_done;
        }
        case 6: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 6);
          goto tmp3_done;
        }
        case 7: {
          if (8 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 7);
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT6);
          goto goto_2;
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
  _i = tmp1;
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_NBPartition_Partition_kindToInteger(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_integer _i;
  modelica_metatype out_i;
  tmp1 = mmc_unbox_integer(_kind);
  _i = omc_NBPartition_Partition_kindToInteger(threadData, tmp1);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_string omc_NBPartition_Partition_kindToString(threadData_t *threadData, modelica_integer _kind)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT7;
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_kind;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT8;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT9;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT10;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT11;
          goto tmp3_done;
        }
        case 4: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT12;
          goto tmp3_done;
        }
        case 5: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT13;
          goto tmp3_done;
        }
        case 6: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 7: {
          if (8 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT17);
          goto goto_2;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NBPartition_Partition_kindToString(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _str = omc_NBPartition_Partition_kindToString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_mapStrongComponents(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartition, modelica_fnptr _func)
{
  modelica_metatype _partition = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partition = __omcQ_24in_5Fpartition;
  // _comps has no default value.
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 9)))))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 9)));
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _comps = tmpMeta2;

    tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_comps);
    if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
      {
        arrayUpdate(_comps,_i,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), arrayGet(_comps,_i) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, arrayGet(_comps,_i) /* DAE.ASUB */));
      }
    }

    tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(10));
    memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[9] = mmc_mk_some(_comps);
    _partition = tmpMeta6;
  }
  _return: OMC_LABEL_UNUSED
  return _partition;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartition, modelica_fnptr _func)
{
  modelica_metatype _partition = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partition = __omcQ_24in_5Fpartition;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = omc_NBEquation_EquationPointers_mapExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 6))), ((modelica_fnptr) _func), mmc_mk_none());
  _partition = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _partition;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_mapEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartition, modelica_fnptr _func)
{
  modelica_metatype _partition = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partition = __omcQ_24in_5Fpartition;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = omc_NBEquation_EquationPointers_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 6))), ((modelica_fnptr) _func));
  _partition = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _partition;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_getLoopResiduals(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _residuals = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _residuals = tmpMeta1;
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)))))
  {
    {
      modelica_metatype _comp;
      for (tmpMeta2 = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)))), tmp5 = arrayLength(tmpMeta2), tmp4 = 1; tmp4 <= tmp5; tmp4++)
      {
        _comp = arrayGet(tmpMeta2,tmp4);
        _residuals = listAppend(omc_NBStrongComponent_getLoopResiduals(threadData, _comp), _residuals);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _residuals;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_getClocks(threadData_t *threadData, modelica_metatype _part, modelica_metatype *out_baseClock, modelica_boolean *out_holdEvents)
{
  modelica_metatype _clock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_boolean _holdEvents;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clock has no default value.
  // _baseClock has no default value.
  // _holdEvents has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _clock = tmpMeta6;
          _baseClock = tmpMeta7;
          _holdEvents = tmp9  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _clock;
          tmpMeta[0+1] = _baseClock;
          tmp1_c2 = _holdEvents;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT18,omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 0)));
          tmpMeta10 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta10);
          goto goto_2;
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
  _clock = tmpMeta[0+0];
  _baseClock = tmpMeta[0+1];
  _holdEvents = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_baseClock) { *out_baseClock = _baseClock; }
  if (out_holdEvents) { *out_holdEvents = _holdEvents; }
  return _clock;
}
modelica_metatype boxptr_NBPartition_Partition_getClocks(threadData_t *threadData, modelica_metatype _part, modelica_metatype *out_baseClock, modelica_metatype *out_holdEvents)
{
  modelica_boolean _holdEvents;
  modelica_metatype _clock = NULL;
  _clock = omc_NBPartition_Partition_getClocks(threadData, _part, out_baseClock, &_holdEvents);
  /* skip box _clock; NBPartitioning.BClock */
  /* skip box _baseClock; Option<NBPartitioning.BClock> */
  if (out_holdEvents) { *out_holdEvents = mmc_mk_icon(_holdEvents); }
  return _clock;
}

DLLDirection
modelica_integer omc_NBPartition_Partition_getKind(threadData_t *threadData, modelica_metatype _part)
{
  modelica_integer _kind;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _kind has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _kind = tmp7  /* pattern as ty=enumeration(ODE, ALG, ODE_EVT, ALG_EVT, INI, DAE, JAC, CLK) */;
          /* Pattern matching succeeded */
          tmp1 = (modelica_integer)_kind;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 8;
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
  _kind = tmp1;
  _return: OMC_LABEL_UNUSED
  return _kind;
}
modelica_metatype boxptr_NBPartition_Partition_getKind(threadData_t *threadData, modelica_metatype _part)
{
  modelica_integer _kind;
  modelica_metatype out_kind;
  _kind = omc_NBPartition_Partition_getKind(threadData, _part);
  out_kind = mmc_mk_icon(_kind);
  return out_kind;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_getJacobian(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _jac = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jac has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _jac = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _jac;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
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
  _jac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _jac;
}

DLLDirection
void omc_NBPartition_Partition_categorize(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _ode, modelica_metatype _alg, modelica_metatype _ode_evt, modelica_metatype _alg_evt, modelica_metatype _clocked)
{
  modelica_boolean _algebraic;
  modelica_boolean _continuous;
  modelica_integer _kind;
  modelica_metatype _association = NULL;
  modelica_integer tmp1 = 0;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _algebraic has no default value.
  // _continuous has no default value.
  // _kind has no default value.
  // _association has no default value.
  _algebraic = omc_NBPartition_Partition_isAlgebraicContinuous(threadData, _partition ,&_continuous);

  { /* match expression */
    modelica_boolean tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _algebraic;
    tmp4_2 = _continuous;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 1: {
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 2: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 4;
          goto tmp3_done;
        }
        case 3: {
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 3;
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
  _kind = tmp1;

  { /* match expression */
    modelica_integer tmp10_1;modelica_metatype tmp10_2;
    tmp10_1 = (modelica_integer)_kind;
    tmp10_2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 3)));
    {
      volatile mmc_switch_type tmp10;
      int tmp11;
      tmp10 = 0;
      for (; tmp10 < 5; tmp10++) {
        switch (MMC_SWITCH_CAST(tmp10)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,1,3) == 0) goto tmp9_end;
          
          /* Pattern matching succeeded */
          omc_DoubleEnded_push__back(threadData, _clocked, _partition);
          tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 3)));
          goto tmp9_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          if (2 != tmp10_1) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,0,2) == 0) goto tmp9_end;
          
          _association = tmp10_2;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_association), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = mmc_mk_integer((modelica_integer)_kind);
          _association = tmpMeta12;

          omc_DoubleEnded_push__back(threadData, _alg, _partition);
          tmpMeta7 = _association;
          goto tmp9_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          if (1 != tmp10_1) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,0,2) == 0) goto tmp9_end;
          
          _association = tmp10_2;
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_association), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = mmc_mk_integer((modelica_integer)_kind);
          _association = tmpMeta13;

          omc_DoubleEnded_push__back(threadData, _ode, _partition);
          tmpMeta7 = _association;
          goto tmp9_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          if (4 != tmp10_1) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,0,2) == 0) goto tmp9_end;
          
          _association = tmp10_2;
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_association), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = mmc_mk_integer((modelica_integer)_kind);
          _association = tmpMeta14;

          omc_DoubleEnded_push__back(threadData, _alg_evt, _partition);
          tmpMeta7 = _association;
          goto tmp9_done;
        }
        case 4: {
          modelica_metatype tmpMeta15;
          if (3 != tmp10_1) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,0,2) == 0) goto tmp9_end;
          
          _association = tmp10_2;
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_association), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = mmc_mk_integer((modelica_integer)_kind);
          _association = tmpMeta15;

          omc_DoubleEnded_push__back(threadData, _ode_evt, _partition);
          tmpMeta7 = _association;
          goto tmp9_done;
        }
        }
        goto tmp9_end;
        tmp9_end: ;
      }
      goto goto_8;
      goto_8:;
      MMC_THROW_INTERNAL();
      goto tmp9_done;
      tmp9_done:;
    }
  }
  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
  _partition = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_NBPartition_Partition_isAlgebraicContinuous(threadData_t *threadData, modelica_metatype _part, modelica_boolean *out_con)
{
  modelica_boolean _alg;
  modelica_boolean _con;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = 1 /* true */;
  _con = 1 /* true */;
  {
    modelica_metatype _var;
    for (tmpMeta1 = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      _alg = (_alg?(!omc_NBVariable_isStateDerivative(threadData, _var)):0 /* false */);

      _con = (_con?(!omc_NBVariable_isDiscrete(threadData, _var)):0 /* false */);

      if((!(_alg || _con)))
      {
        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_con) { *out_con = _con; }
  return _alg;
}
modelica_metatype boxptr_NBPartition_Partition_isAlgebraicContinuous(threadData_t *threadData, modelica_metatype _part, modelica_metatype *out_con)
{
  modelica_boolean _con;
  modelica_boolean _alg;
  modelica_metatype out_alg;
  _alg = omc_NBPartition_Partition_isAlgebraicContinuous(threadData, _part, &_con);
  out_alg = mmc_mk_icon(_alg);
  if (out_con) { *out_con = mmc_mk_icon(_con); }
  return out_alg;
}

DLLDirection
modelica_boolean omc_NBPartition_Partition_isEmpty(threadData_t *threadData, modelica_metatype _partition)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (omc_NBEquation_EquationPointers_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 6)))) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartition_Partition_isEmpty(threadData_t *threadData, modelica_metatype _partition)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartition_Partition_isEmpty(threadData, _partition);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NBPartition_Partition_sort(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartition)
{
  modelica_metatype _partition = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partition = __omcQ_24in_5Fpartition;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = omc_NBVariable_VariablePointers_sort(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 4))));
  _partition = tmpMeta1;

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[6] = omc_NBEquation_EquationPointers_sort(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 6))));
  _partition = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _partition;
}

DLLDirection
modelica_string omc_NBPartition_Partition_toStringList(threadData_t *threadData, modelica_metatype _partitions, modelica_string _header)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT7;
  if((!listEmpty(_partitions)))
  {
    if((!stringEqual(_header, _OMC_LIT7)))
    {
      tmpMeta1 = stringAppend(omc_StringUtil_headline__1(threadData, _header),_OMC_LIT19);
      _str = tmpMeta1;
    }

    {
      modelica_metatype _part;
      for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _part = MMC_CAR(tmpMeta2);
        tmpMeta3 = stringAppend(_str,omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 0)));
        _str = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NBPartition_Partition_toString(threadData_t *threadData, modelica_metatype _partition, modelica_integer _level)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6 = 0;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT20,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 2))))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT21);
  tmpMeta3 = stringAppend(tmpMeta2,omc_NBPartition_Association_toStringShort(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 3)))));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT22);
  tmpMeta5 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta4),_OMC_LIT19);
  _str = tmpMeta5;

  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 9)));
    {
      modelica_metatype _comps = NULL;
      volatile mmc_switch_type tmp9;
      int tmp10;
      // _comps has no default value.
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_integer tmp16;
          if (optionNone(tmp9_1)) goto tmp8_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 1));
          _comps = tmpMeta11;
          /* Pattern matching succeeded */
          tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = arrayLength(_comps);
          if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
            {
              tmpMeta12 = stringAppend(_str,omc_NBStrongComponent_toString(threadData, arrayGet(_comps,_i) /* DAE.ASUB */, _i));
              tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT19);
              _str = tmpMeta13;
            }
          }
          tmp6 = _str;
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta17 = stringAppend(_str,omc_NBVariable_VariablePointers_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 4))), _OMC_LIT23, mmc_mk_none(), 1 /* true */));
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT19);
          tmpMeta19 = stringAppend(tmpMeta18,omc_NBEquation_EquationPointers_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 6))), _OMC_LIT24, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
          tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT19);
          tmp6 = tmpMeta20;
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _str = tmp6;

  if(((_level == ((modelica_integer) 1)) || (_level == ((modelica_integer) 3))))
  {
    if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 7)))))
    {
      tmpMeta21 = stringAppend(_str,omc_NBAdjacency_Matrix_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 7)))), _OMC_LIT7));
      tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT19);
      _str = tmpMeta22;
    }

    if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 8)))))
    {
      tmpMeta23 = stringAppend(_str,omc_NBMatching_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 8)))), _OMC_LIT7));
      tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT19);
      _str = tmpMeta24;
    }
  }

  if((_level == ((modelica_integer) 2)))
  {
    tmpMeta25 = stringAppend(_str,omc_NBPartition_Association_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 3)))));
    _str = tmpMeta25;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NBPartition_Partition_toString(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _level)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_level);
  _str = omc_NBPartition_Partition_toString(threadData, _partition, tmp1);
  /* skip box _str; String */
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartition_Association_expClocked(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _info, modelica_metatype _clock_ptr)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  if((!isSome(omc_Pointer_access(threadData, _clock_ptr))))
  {
    { /* match expression */
      modelica_metatype tmp3_1;
      tmp3_1 = _exp;
      {
        volatile mmc_switch_type tmp3;
        int tmp4;
        tmp3 = 0;
        for (; tmp3 < 2; tmp3++) {
          switch (MMC_SWITCH_CAST(tmp3)) {
          case 0: {
            modelica_metatype tmpMeta5;
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!omc_NFType_isClock(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))))) goto tmp2_end;
            if(omc_UnorderedMap_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2)))))
            {
              tmpMeta5 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), omc_UnorderedMap_getSafe(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))), _OMC_LIT28));
              omc_Pointer_update(threadData, _clock_ptr, mmc_mk_some(tmpMeta5));
            }
            else
            {
              if(omc_UnorderedMap_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3)))))
              {
                tmpMeta6 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), omc_UnorderedMap_getSafe(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))), _OMC_LIT27));
                omc_Pointer_update(threadData, _clock_ptr, mmc_mk_some(tmpMeta6));
              }
              else
              {
                tmpMeta8 = stringAppend(_OMC_LIT25,omc_NFExpression_toString(threadData, _exp));
                tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
                omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta7);

                goto goto_1;
              }
            }
            goto tmp2_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            goto tmp2_done;
          }
          }
          goto tmp2_end;
          tmp2_end: ;
        }
        goto goto_1;
        goto_1:;
        MMC_THROW_INTERNAL();
        goto tmp2_done;
        tmp2_done:;
      }
    }
    ;
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_boolean omc_NBPartition_Association_isClocked(threadData_t *threadData, modelica_metatype _association)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _association;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartition_Association_isClocked(threadData_t *threadData, modelica_metatype _association)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartition_Association_isClocked(threadData, _association);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

static modelica_metatype closure0_NBPartition_Association_expClocked(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype clock_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBPartition_Association_expClocked(thData, $in_exp, info, clock_ptr);
}
DLLDirection
modelica_metatype omc_NBPartition_Association_create(threadData_t *threadData, modelica_metatype _equations, modelica_integer _kind, modelica_metatype _info)
{
  modelica_metatype _association = NULL;
  modelica_metatype _clock_ptr = NULL;
  modelica_metatype _clock_tpl = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _base_name = NULL;
  modelica_metatype _clock = NULL;
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
  // _association has no default value.
  _clock_ptr = omc_Pointer_create(threadData, mmc_mk_none());
  // _clock_tpl has no default value.
  // _name has no default value.
  // _base_name has no default value.
  // _clock has no default value.
  tmpMeta1 = mmc_mk_box2(0, _info, _clock_ptr);
  omc_NBEquation_EquationPointers_mapExp(threadData, _equations, (modelica_fnptr) mmc_mk_box2(0,closure0_NBPartition_Association_expClocked,tmpMeta1), mmc_mk_none());

  _clock_tpl = omc_Pointer_access(threadData, _clock_ptr);

  if(isSome(_clock_tpl))
  {
    /* Pattern-matching assignment */
    tmpMeta2 = _clock_tpl;
    if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
    tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
    tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
    _name = tmpMeta4;
    _clock = tmpMeta5;

    if(omc_NBPartitioning_BClock_isBaseClock(threadData, _clock))
    {
      tmpMeta6 = mmc_mk_box4(4, &NBPartition_Association_CLOCKED__desc, _clock, mmc_mk_none(), mmc_mk_boolean(0 /* false */));
      _association = tmpMeta6;
    }
    else
    {
      _base_name = omc_UnorderedMap_getSafe(threadData, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))), _OMC_LIT29);

      tmpMeta7 = mmc_mk_box4(4, &NBPartition_Association_CLOCKED__desc, _clock, mmc_mk_some(omc_UnorderedMap_getSafe(threadData, _base_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))), _OMC_LIT30)), mmc_mk_boolean(0 /* false */));
      _association = tmpMeta7;
    }
  }
  else
  {
    tmpMeta8 = mmc_mk_box3(3, &NBPartition_Association_CONTINUOUS__desc, mmc_mk_integer((modelica_integer)_kind), mmc_mk_none());
    _association = tmpMeta8;
  }
  _return: OMC_LABEL_UNUSED
  return _association;
}
modelica_metatype boxptr_NBPartition_Association_create(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _kind, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _association = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _association = omc_NBPartition_Association_create(threadData, _equations, tmp1, _info);
  /* skip box _association; NBPartition.Association */
  return _association;
}

DLLDirection
modelica_string omc_NBPartition_Association_toString(threadData_t *threadData, modelica_metatype _association)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _association;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_association), 3)))))
          {
            tmpMeta5 = stringAppend(omc_NBJacobian_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_association), 3)))), omc_NBPartition_Partition_kindToString(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_association), 2)))))),_OMC_LIT19);
            _str = tmpMeta5;
          }
          tmp1 = _str;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _str = omc_NBPartitioning_BClock_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_association), 2))));

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_association), 3)))))
          {
            tmpMeta6 = stringAppend(_OMC_LIT32,_str);
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT33);
            tmpMeta8 = stringAppend(tmpMeta7,omc_NBPartitioning_BClock_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_association), 3))))));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT19);
            _str = tmpMeta9;
          }
          else
          {
            tmpMeta10 = stringAppend(_OMC_LIT31,_str);
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT19);
            _str = tmpMeta11;
          }
          tmp1 = _str;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT35);
          goto goto_2;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NBPartition_Association_toStringShort(threadData_t *threadData, modelica_metatype _association)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _association;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT36,omc_NBPartition_Partition_kindToString(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_association), 2))))));
          tmp1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT37;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT23;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

