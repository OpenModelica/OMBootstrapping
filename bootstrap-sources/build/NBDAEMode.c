#include "omc_simulation_settings.h"
#include "NBDAEMode.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "default"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,7,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,17,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NBDAEMode.main failed due to wrong BackendDAE record!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,53,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "NBDAEMode.main failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,22,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,1) {_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#include "util/modelica.h"

#include "NBDAEMode_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBDAEMode_daeModeDefault(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype _variables, modelica_metatype _uniqueIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBDAEMode_daeModeDefault,2,0) {(void*) boxptr_NBDAEMode_daeModeDefault,0}};
#define boxvar_NBDAEMode_daeModeDefault MMC_REFSTRUCTLIT(boxvar_lit_NBDAEMode_daeModeDefault)

static modelica_metatype closure0_NBInline_inlineRecordTupleArrayEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype iter = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype new_eqns = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype index = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype inlineSimple = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_NBInline_inlineRecordTupleArrayEquation(thData, $in_eqn, iter, variables, new_eqns, set, index, inlineSimple);
}static modelica_metatype closure1_NBEquation_Equation_createResidual(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn_ptr)
{
  modelica_metatype new = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_createResidual(thData, $in_eqn_ptr, new);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBDAEMode_daeModeDefault(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype _variables, modelica_metatype _uniqueIndex)
{
  modelica_metatype _partitions = NULL;
  modelica_metatype _new_partitions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _new_eqns = NULL;
  modelica_metatype _dummy_set = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta26;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partitions = __omcQ_24in_5Fpartitions;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_partitions = tmpMeta1;
  // _new_eqns has no default value.
  _dummy_set = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));
  {
    modelica_metatype _part;
    for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _part = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3)));
        {
          modelica_metatype _association = NULL;
          volatile mmc_switch_type tmp6;
          int tmp7;
          // _association has no default value.
          tmp6 = 0;
          for (; tmp6 < 2; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_metatype tmpMeta11;
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_boolean tmp24;
              modelica_metatype tmpMeta25;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,2) == 0) goto tmp5_end;
              
              _association = tmp6_1;
              /* Pattern matching succeeded */
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(4));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_association), 4*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = mmc_mk_integer(6);
              _association = tmpMeta8;

              tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _association;
              _part = tmpMeta9;

              {
                modelica_metatype __omcQ_24tmpVar3;
                modelica_metatype* tmp12;
                modelica_metatype tmpMeta13;
                modelica_metatype __omcQ_24tmpVar2;
                modelica_integer tmp14;
                modelica_metatype _eqn_loopVar = 0;
                modelica_metatype _eqn;
                _eqn_loopVar = omc_NBEquation_EquationPointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))));
                tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar3 = tmpMeta13; /* defaultValue */
                tmp12 = &__omcQ_24tmpVar3;
                while(1) {
                  tmp14 = 1;
                  while (!listEmpty(_eqn_loopVar)) {
                    _eqn = MMC_CAR(_eqn_loopVar);
                    _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                    if ((!omc_NBEquation_Equation_isDiscrete(threadData, _eqn))) {
                      tmp14--;
                      break;
                    }
                  }
                  if (tmp14 == 0) {
                    __omcQ_24tmpVar2 = _eqn;
                    *tmp12 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                    tmp12 = &MMC_CDR(*tmp12);
                  } else if (tmp14 == 1) {
                    break;
                  } else {
                    goto goto_4;
                  }
                }
                *tmp12 = mmc_mk_nil();
                tmpMeta11 = __omcQ_24tmpVar3;
              }
              tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[6] = omc_NBEquation_EquationPointers_fromList(threadData, tmpMeta11);
              _part = tmpMeta10;

              tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[6] = omc_NBEquation_EquationPointers_clone(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), 0 /* false */);
              _part = tmpMeta15;

              tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
              _new_eqns = omc_Pointer_create(threadData, tmpMeta16);

              tmpMeta17 = mmc_mk_box6(0, _OMC_LIT0, _variables, _new_eqns, _dummy_set, _uniqueIndex, mmc_mk_boolean(1 /* true */));
              omc_NBEquation_EquationPointers_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (modelica_fnptr) mmc_mk_box2(0,closure0_NBInline_inlineRecordTupleArrayEquation,tmpMeta17));

              tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[6] = omc_NBEquation_EquationPointers_addList(threadData, omc_Pointer_access(threadData, _new_eqns), omc_NBEquation_EquationPointers_compress(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6)))));
              _part = tmpMeta18;

              tmpMeta19 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
              omc_NBEquation_EquationPointers_mapPtr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (modelica_fnptr) mmc_mk_box2(0,closure1_NBEquation_Equation_createResidual,tmpMeta19));

              tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[5] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))));
              _part = tmpMeta20;

              tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[4] = omc_NBEquation_EquationPointers_getResiduals(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))));
              _part = tmpMeta21;

              tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[9] = mmc_mk_none();
              _part = tmpMeta22;
              tmp24 = (modelica_boolean)omc_NBPartition_Partition_isEmpty(threadData, _part);
              if(tmp24)
              {
                tmpMeta25 = _new_partitions;
              }
              else
              {
                tmpMeta23 = mmc_mk_cons(_part, _new_partitions);
                tmpMeta25 = tmpMeta23;
              }
              tmpMeta3 = tmpMeta25;
              goto tmp5_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta3 = _new_partitions;
              goto tmp5_done;
            }
            }
            goto tmp5_end;
            tmp5_end: ;
          }
          goto goto_4;
          goto_4:;
          MMC_THROW_INTERNAL();
          goto tmp5_done;
          tmp5_done:;
        }
      }
      _new_partitions = tmpMeta3;
    }
  }

  _partitions = listReverse(_new_partitions);
  _return: OMC_LABEL_UNUSED
  return _partitions;
}

DLLDirection
modelica_fnptr omc_NBDAEMode_getModule(threadData_t *threadData)
{
  modelica_fnptr _func;
  modelica_string _flag = NULL;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flag = _OMC_LIT1;
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _flag;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT1), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBDAEMode_daeModeDefault;
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
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  return _func;
}

DLLDirection
modelica_metatype omc_NBDAEMode_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_fnptr _func;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          _func = (modelica_fnptr) omc_NBDAEMode_getModule(threadData);

          { /* match expression */
            modelica_metatype tmp8_1;
            tmp8_1 = _bdae;
            {
              modelica_metatype _ode = NULL;
              modelica_metatype _eqData = NULL;
              modelica_metatype _variables = NULL;
              volatile mmc_switch_type tmp8;
              int tmp9;
              // _ode has no default value.
              // _eqData has no default value.
              // _variables has no default value.
              tmp8 = 0;
              for (; tmp8 < 2; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,13) == 0) goto tmp7_end;
                  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 2));
                  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 10));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,23) == 0) goto tmp7_end;
                  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
                  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 11));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,9) == 0) goto tmp7_end;
                  
                  _ode = tmpMeta10;
                  _variables = tmpMeta12;
                  _eqData = tmpMeta13;
                  /* Pattern matching succeeded */
                  tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[9] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _ode, _variables, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _ode, _variables, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2)))));
                  _bdae = tmpMeta14;
                  tmpMeta5 = _bdae;
                  goto tmp7_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  omc_Error_addMessage(threadData, _OMC_LIT6, _OMC_LIT8);
                  goto goto_6;
                  goto tmp7_done;
                }
                }
                goto tmp7_end;
                tmp7_end: ;
              }
              goto goto_6;
              goto_6:;
              goto goto_1;
              goto tmp7_done;
              tmp7_done:;
            }
          }
          _bdae = tmpMeta5;

          _bdae = omc_NBCausalize_main(threadData, _bdae, 6);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT6, _OMC_LIT10);
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}

