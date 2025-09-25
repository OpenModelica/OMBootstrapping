#include "omc_simulation_settings.h"
#include "HpcOmBenchmark.h"
#define _OMC_LIT0_data "expandCalcTimes: Invalid number of list-entries\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,48,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ".json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,5,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Using json-file\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,16,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data ".xml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,4,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "readCalcTimesFromFile: No valid profiling-file found.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,54,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#include "util/modelica.h"

#include "HpcOmBenchmark_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmBenchmark_expandCalcTimes(threadData_t *threadData, modelica_metatype _iList, modelica_metatype _iTuples);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_expandCalcTimes,2,0) {(void*) boxptr_HpcOmBenchmark_expandCalcTimes,0}};
#define boxvar_HpcOmBenchmark_expandCalcTimes MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_expandCalcTimes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmBenchmark_readCalcTimesFromJson(threadData_t *threadData, modelica_string _fileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_readCalcTimesFromJson,2,0) {(void*) boxptr_HpcOmBenchmark_readCalcTimesFromJson,0}};
#define boxvar_HpcOmBenchmark_readCalcTimesFromJson MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_readCalcTimesFromJson)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmBenchmark_readCalcTimesFromXml(threadData_t *threadData, modelica_string _fileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_readCalcTimesFromXml,2,0) {(void*) boxptr_HpcOmBenchmark_readCalcTimesFromXml,0}};
#define boxvar_HpcOmBenchmark_readCalcTimesFromXml MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_readCalcTimesFromXml)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmBenchmark_expandCalcTimes(threadData_t *threadData, modelica_metatype _iList, modelica_metatype _iTuples)
{
  modelica_metatype _oTuples = NULL;
  modelica_real _eqIdx;
  modelica_real _numOfCalcs;
  modelica_real _calcTimeSum;
  modelica_integer _intNumOfCalcs;
  modelica_integer _intEqIdx;
  modelica_metatype _rest = NULL;
  modelica_metatype _tmpTuples = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTuples has no default value.
  // _eqIdx has no default value.
  // _numOfCalcs has no default value.
  // _calcTimeSum has no default value.
  // _intNumOfCalcs has no default value.
  // _intEqIdx has no default value.
  // _rest has no default value.
  // _tmpTuples has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iList;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_real tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_real tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_real tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_real(tmpMeta6);
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta7);
          tmpMeta10 = MMC_CDR(tmpMeta7);
          tmp11 = mmc_unbox_real(tmpMeta9);
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta10);
          tmpMeta13 = MMC_CDR(tmpMeta10);
          tmp14 = mmc_unbox_real(tmpMeta12);
          _numOfCalcs = tmp8  /* pattern as ty=Real */;
          _calcTimeSum = tmp11  /* pattern as ty=Real */;
          _eqIdx = tmp14  /* pattern as ty=Real */;
          _rest = tmpMeta13;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _intNumOfCalcs = ((modelica_integer)floor(_numOfCalcs));

          _intEqIdx = ((modelica_integer)floor(_eqIdx));
          tmpMeta16 = mmc_mk_box3(0, mmc_mk_integer(_intEqIdx), mmc_mk_integer(_intNumOfCalcs), mmc_mk_real(_calcTimeSum));
          tmpMeta15 = mmc_mk_cons(tmpMeta16, _iTuples);
          tmpMeta1 = omc_HpcOmBenchmark_expandCalcTimes(threadData, _rest, tmpMeta15);
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _iTuples;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);
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
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oTuples = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTuples;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmBenchmark_readCalcTimesFromJson(threadData_t *threadData, modelica_string _fileName)
{
  modelica_metatype _calcTimes = NULL;
  modelica_metatype _tmpResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _calcTimes has no default value.
  // _tmpResult has no default value.
  _tmpResult = omc_HpcOmBenchmarkExt_readCalcTimesFromJson(threadData, _fileName);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _calcTimes = omc_HpcOmBenchmark_expandCalcTimes(threadData, _tmpResult, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _calcTimes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmBenchmark_readCalcTimesFromXml(threadData_t *threadData, modelica_string _fileName)
{
  modelica_metatype _calcTimes = NULL;
  modelica_metatype _tmpResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _calcTimes has no default value.
  // _tmpResult has no default value.
  _tmpResult = omc_HpcOmBenchmarkExt_readCalcTimesFromXml(threadData, _fileName);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _calcTimes = omc_HpcOmBenchmark_expandCalcTimes(threadData, _tmpResult, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _calcTimes;
}

DLLDirection
modelica_metatype omc_HpcOmBenchmark_readCalcTimesFromFile(threadData_t *threadData, modelica_string _iFileNamePrefix)
{
  modelica_metatype _calcTimes = NULL;
  modelica_string _fullFileName = NULL;
  modelica_metatype _tmpCalcTimes = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _calcTimes has no default value.
  // _fullFileName has no default value.
  // _tmpCalcTimes has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_iFileNamePrefix,_OMC_LIT1);
          _fullFileName = tmpMeta6;

          /* Pattern-matching assignment */
          tmpMeta7 = omc_System_getFileModificationTime(threadData, _fullFileName);
          if (optionNone(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));

          fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);
          tmpMeta1 = omc_HpcOmBenchmark_readCalcTimesFromJson(threadData, _fullFileName);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_iFileNamePrefix,_OMC_LIT3);
          _fullFileName = tmpMeta9;

          /* Pattern-matching assignment */
          tmpMeta10 = omc_System_getFileModificationTime(threadData, _fullFileName);
          if (optionNone(tmpMeta10)) goto goto_2;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          tmpMeta1 = omc_HpcOmBenchmark_readCalcTimesFromXml(threadData, _fullFileName);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);
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
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _calcTimes = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _calcTimes;
}

DLLDirection
modelica_metatype omc_HpcOmBenchmark_benchSystem(threadData_t *threadData)
{
  modelica_metatype _oTime = NULL;
  modelica_integer _comCostM;
  modelica_integer _comCostN;
  modelica_integer _opCostM;
  modelica_integer _opCostN;
  modelica_metatype _opCosts = NULL;
  modelica_metatype _comCosts = NULL;
  modelica_string _s1 = NULL;
  modelica_string _s2 = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTime has no default value.
  // _comCostM has no default value.
  // _comCostN has no default value.
  // _opCostM has no default value.
  // _opCostN has no default value.
  // _opCosts has no default value.
  // _comCosts has no default value.
  // _s1 has no default value.
  // _s2 has no default value.
  _opCosts = omc_HpcOmBenchmarkExt_requiredTimeForOp(threadData);

  /* Pattern-matching assignment */
  tmp1 = (listLength(_opCosts) == ((modelica_integer) 2));
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();

  _opCostM = mmc_unbox_integer(listGet(_opCosts, ((modelica_integer) 1)));

  _opCostN = mmc_unbox_integer(listGet(_opCosts, ((modelica_integer) 2)));

  _s1 = intString(_opCostM);

  _s2 = intString(_opCostN);

  _comCosts = omc_HpcOmBenchmarkExt_requiredTimeForComm(threadData);

  _comCostM = mmc_unbox_integer(listGet(_comCosts, ((modelica_integer) 1)));

  _comCostN = mmc_unbox_integer(listGet(_comCosts, ((modelica_integer) 2)));

  _s1 = intString(_comCostM);

  _s2 = intString(_comCostN);

  tmpMeta2 = mmc_mk_box2(0, mmc_mk_integer(_opCostM), mmc_mk_integer(_opCostN));
  tmpMeta3 = mmc_mk_box2(0, mmc_mk_integer(_comCostM), mmc_mk_integer(_comCostN));
  tmpMeta4 = mmc_mk_box2(0, tmpMeta2, tmpMeta3);
  _oTime = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _oTime;
}

