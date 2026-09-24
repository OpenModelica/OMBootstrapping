#include "omc_simulation_settings.h"
#include "FExpand.h"
#define _OMC_LIT0_data "Extends:        "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,16,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Derived:        "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,16,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "ConstrainedBy:  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,16,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "ClassExtends:   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,16,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "ComponentTypes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,16,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Comp Refs:      "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,16,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Modifiers:      "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,16,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "FExpand.all:    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,16,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT9,0.0);
#define _OMC_LIT9 MMC_REFREALLIT(_OMC_LIT_STRUCT9)
#include "util/modelica.h"

#include "FExpand_includes.h"



DLLModelDirection
modelica_metatype omc_FExpand_all(threadData_t *threadData, modelica_metatype _inGraph)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inGraph;
    {
      modelica_metatype _lst = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lst has no default value.
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _lst = tmpMeta6;

          omc_System_startTimer(threadData);

          _g = omc_FResolve_ext(threadData, omc_FGraph_top(threadData, _g), _g);

          omc_System_stopTimer(threadData);

          _lst = omc_List_consr(threadData, _lst, omc_mk_real(omc_System_getTimerIntervalTime(threadData)));

          tmp7 = stringAppend(_OMC_LIT0,realString(omc_unbox_real(listHead(_lst))));
          tmp8 = stringAppend(tmp7,_OMC_LIT1);
          fputs(omc_string_data(tmp8),stdout);

          omc_System_startTimer(threadData);

          _g = omc_FResolve_derived(threadData, omc_FGraph_top(threadData, _g), _g);

          omc_System_stopTimer(threadData);

          _lst = omc_List_consr(threadData, _lst, omc_mk_real(omc_System_getTimerIntervalTime(threadData)));

          tmp9 = stringAppend(_OMC_LIT2,realString(omc_unbox_real(listHead(_lst))));
          tmp10 = stringAppend(tmp9,_OMC_LIT1);
          fputs(omc_string_data(tmp10),stdout);

          omc_System_startTimer(threadData);

          _g = omc_FResolve_cc(threadData, omc_FGraph_top(threadData, _g), _g);

          omc_System_stopTimer(threadData);

          _lst = omc_List_consr(threadData, _lst, omc_mk_real(omc_System_getTimerIntervalTime(threadData)));

          tmp11 = stringAppend(_OMC_LIT3,realString(omc_unbox_real(listHead(_lst))));
          tmp12 = stringAppend(tmp11,_OMC_LIT1);
          fputs(omc_string_data(tmp12),stdout);

          omc_System_startTimer(threadData);

          _g = omc_FResolve_clsext(threadData, omc_FGraph_top(threadData, _g), _g);

          omc_System_stopTimer(threadData);

          _lst = omc_List_consr(threadData, _lst, omc_mk_real(omc_System_getTimerIntervalTime(threadData)));

          tmp13 = stringAppend(_OMC_LIT4,realString(omc_unbox_real(listHead(_lst))));
          tmp14 = stringAppend(tmp13,_OMC_LIT1);
          fputs(omc_string_data(tmp14),stdout);

          omc_System_startTimer(threadData);

          _g = omc_FResolve_ty(threadData, omc_FGraph_top(threadData, _g), _g);

          omc_System_stopTimer(threadData);

          _lst = omc_List_consr(threadData, _lst, omc_mk_real(omc_System_getTimerIntervalTime(threadData)));

          tmp15 = stringAppend(_OMC_LIT5,realString(omc_unbox_real(listHead(_lst))));
          tmp16 = stringAppend(tmp15,_OMC_LIT1);
          fputs(omc_string_data(tmp16),stdout);

          omc_System_startTimer(threadData);

          _g = omc_FResolve_cr(threadData, omc_FGraph_top(threadData, _g), _g);

          omc_System_stopTimer(threadData);

          _lst = omc_List_consr(threadData, _lst, omc_mk_real(omc_System_getTimerIntervalTime(threadData)));

          tmp17 = stringAppend(_OMC_LIT6,realString(omc_unbox_real(listHead(_lst))));
          tmp18 = stringAppend(tmp17,_OMC_LIT1);
          fputs(omc_string_data(tmp18),stdout);

          omc_System_startTimer(threadData);

          _g = omc_FResolve_mod(threadData, omc_FGraph_top(threadData, _g), _g);

          omc_System_stopTimer(threadData);

          _lst = omc_List_consr(threadData, _lst, omc_mk_real(omc_System_getTimerIntervalTime(threadData)));

          tmp19 = stringAppend(_OMC_LIT7,realString(omc_unbox_real(listHead(_lst))));
          tmp20 = stringAppend(tmp19,_OMC_LIT1);
          fputs(omc_string_data(tmp20),stdout);

          tmp21 = stringAppend(_OMC_LIT8,realString(omc_unbox_real(omc_List_fold(threadData, _lst, boxvar_realAdd, _OMC_LIT9))));
          tmp22 = stringAppend(tmp21,_OMC_LIT1);
          fputs(omc_string_data(tmp22),stdout);
          tmpMeta1 = _g;
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
  _outGraph = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FExpand_path(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inPath, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inGraph;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _t has no default value.
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _t = omc_FGraph_top(threadData, _g);

          _r = _t;
          tmpMeta[0+0] = _g;
          tmpMeta[0+1] = _r;
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
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

