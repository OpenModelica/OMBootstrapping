#include "omc_simulation_settings.h"
#include "SimCodeFunction.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,6,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ", type: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,8,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "VARIABLE("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,9,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "FUNCTION_PTR("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,13,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,17,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT6,_OMC_LIT7,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "SimCodeFunction.Variable.toString failed for an unknown reason."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,63,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,1) {_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "cref: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,6,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ", isInput: true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,15,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ", isInput: false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,16,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ", outputIndex: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,15,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data ", isArray: true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,15,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data ", isArray: false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,16,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data ", hasBinding: true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,18,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data ", hasBinding: false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,19,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "SIMEXTARG("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,10,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "exp: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,5,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "SIMEXTARGEXP("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,13,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ", exp: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,7,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "SIMEXTARGSIZE("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,14,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "SIMNOEXTARG()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,13,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "SimCodeFunction.SimExtArg.toString failed for an unknown reason."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,64,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,2,1) {_OMC_LIT26,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,1,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "FUNCTION("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,9,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "PARALLEL_FUNCTION("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,18,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "KERNEL_FUNCTION("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,16,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,1,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "  name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,8,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data ",\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,2,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "  extName: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,11,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "  funArgs: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,12,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,2,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "},\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,3,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "  extArgs: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,12,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "  extReturn: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,13,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "  inVars: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,11,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "  outVars: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,12,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "  biVars: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,11,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "  includes: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,13,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "  libs: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,9,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "  language: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,12,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "EXTERNAL_FUNCTION("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,18,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "RECORD_CONSTRUCTOR("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,19,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "SimCodeFunction.Function.toString failed for an unknown reason."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,63,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,1) {_OMC_LIT49,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#include "util/modelica.h"

#include "SimCodeFunction_includes.h"



DLLModelDirection
modelica_string omc_SimCodeFunction_Variable_toString(threadData_t *threadData, modelica_metatype _variable)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT0;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _variable;
    {
      modelica_string _tmp = NULL;
      int tmp4;
      _tmp = (modelica_string) omc_string_empty;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_string tmp5;
          modelica_string tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          modelica_string tmp10;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_tmp,_OMC_LIT1);
          tmp6 = stringAppend(tmp5,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_variable, 2))));
          omc_string_store(&(_tmp), tmp6);

          tmp7 = stringAppend(_tmp,_OMC_LIT2);
          tmp8 = stringAppend(tmp7,omc_TypesDump_unparseType(threadData, (OMC_BOX_FIELD(_variable, 3))));
          omc_string_store(&(_tmp), tmp8);
          tmp9 = stringAppend(_OMC_LIT3,_tmp);
          tmp10 = stringAppend(tmp9,_OMC_LIT4);
          tmp1 = tmp10;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          
          /* Pattern matching succeeded */
          tmp11 = stringAppend(_tmp,_OMC_LIT1);
          tmp12 = stringAppend(tmp11,(OMC_BOX_FIELD(_variable, 2)));
          omc_string_store(&(_tmp), tmp12);
          tmp13 = stringAppend(_OMC_LIT5,_tmp);
          tmp14 = stringAppend(tmp13,_OMC_LIT4);
          tmp1 = tmp14;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT9, _OMC_LIT11);
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_SimCodeFunction_SimExtArg_toString(threadData_t *threadData, modelica_metatype _simExtArg)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT0;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _simExtArg;
    {
      modelica_string _tmp = NULL;
      int tmp4;
      _tmp = (modelica_string) omc_string_empty;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_string tmp5;
          modelica_string tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_boolean tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_boolean tmp15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_boolean tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_string tmp24;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_tmp,_OMC_LIT12);
          tmp6 = stringAppend(tmp5,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_simExtArg, 2))));
          omc_string_store(&(_tmp), tmp6);

          tmp9 = (modelica_boolean)omc_unbox_boolean((OMC_BOX_FIELD(_simExtArg, 3)));
          if(tmp9)
          {
            tmp7 = stringAppend(_tmp,_OMC_LIT13);
            tmp10 = tmp7;
          }
          else
          {
            tmp8 = stringAppend(_tmp,_OMC_LIT14);
            tmp10 = tmp8;
          }
          omc_string_store(&(_tmp), tmp10);

          tmp11 = stringAppend(_tmp,_OMC_LIT15);
          tmp12 = stringAppend(tmp11,intString(omc_unbox_integer((OMC_BOX_FIELD(_simExtArg, 4)))));
          omc_string_store(&(_tmp), tmp12);

          tmp15 = (modelica_boolean)omc_unbox_boolean((OMC_BOX_FIELD(_simExtArg, 5)));
          if(tmp15)
          {
            tmp13 = stringAppend(_tmp,_OMC_LIT16);
            tmp16 = tmp13;
          }
          else
          {
            tmp14 = stringAppend(_tmp,_OMC_LIT17);
            tmp16 = tmp14;
          }
          omc_string_store(&(_tmp), tmp16);

          tmp19 = (modelica_boolean)omc_unbox_boolean((OMC_BOX_FIELD(_simExtArg, 6)));
          if(tmp19)
          {
            tmp17 = stringAppend(_tmp,_OMC_LIT18);
            tmp20 = tmp17;
          }
          else
          {
            tmp18 = stringAppend(_tmp,_OMC_LIT19);
            tmp20 = tmp18;
          }
          omc_string_store(&(_tmp), tmp20);

          tmp21 = stringAppend(_tmp,_OMC_LIT2);
          tmp22 = stringAppend(tmp21,omc_TypesDump_unparseType(threadData, (OMC_BOX_FIELD(_simExtArg, 7))));
          omc_string_store(&(_tmp), tmp22);
          tmp23 = stringAppend(_OMC_LIT20,_tmp);
          tmp24 = stringAppend(tmp23,_OMC_LIT4);
          tmp1 = tmp24;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp25;
          modelica_string tmp26;
          modelica_string tmp27;
          modelica_string tmp28;
          modelica_string tmp29;
          modelica_string tmp30;
          
          /* Pattern matching succeeded */
          tmp25 = stringAppend(_tmp,_OMC_LIT21);
          tmp26 = stringAppend(tmp25,omc_ExpressionBasics_printExpStr(threadData, (OMC_BOX_FIELD(_simExtArg, 2))));
          omc_string_store(&(_tmp), tmp26);

          tmp27 = stringAppend(_tmp,_OMC_LIT2);
          tmp28 = stringAppend(tmp27,omc_TypesDump_unparseType(threadData, (OMC_BOX_FIELD(_simExtArg, 3))));
          omc_string_store(&(_tmp), tmp28);
          tmp29 = stringAppend(_OMC_LIT22,_tmp);
          tmp30 = stringAppend(tmp29,_OMC_LIT4);
          tmp1 = tmp30;
          goto tmp3_done;
        }
        case 5: {
          modelica_string tmp31;
          modelica_string tmp32;
          modelica_string tmp33;
          modelica_string tmp34;
          modelica_boolean tmp35;
          modelica_string tmp36;
          modelica_string tmp37;
          modelica_string tmp38;
          modelica_string tmp39;
          modelica_string tmp40;
          modelica_string tmp41;
          modelica_string tmp42;
          modelica_string tmp43;
          modelica_string tmp44;
          
          /* Pattern matching succeeded */
          tmp31 = stringAppend(_tmp,_OMC_LIT12);
          tmp32 = stringAppend(tmp31,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_simExtArg, 2))));
          omc_string_store(&(_tmp), tmp32);

          tmp35 = (modelica_boolean)omc_unbox_boolean((OMC_BOX_FIELD(_simExtArg, 3)));
          if(tmp35)
          {
            tmp33 = stringAppend(_tmp,_OMC_LIT13);
            tmp36 = tmp33;
          }
          else
          {
            tmp34 = stringAppend(_tmp,_OMC_LIT14);
            tmp36 = tmp34;
          }
          omc_string_store(&(_tmp), tmp36);

          tmp37 = stringAppend(_tmp,_OMC_LIT15);
          tmp38 = stringAppend(tmp37,intString(omc_unbox_integer((OMC_BOX_FIELD(_simExtArg, 4)))));
          omc_string_store(&(_tmp), tmp38);

          tmp39 = stringAppend(_tmp,_OMC_LIT2);
          tmp40 = stringAppend(tmp39,omc_TypesDump_unparseType(threadData, (OMC_BOX_FIELD(_simExtArg, 5))));
          omc_string_store(&(_tmp), tmp40);

          tmp41 = stringAppend(_tmp,_OMC_LIT23);
          tmp42 = stringAppend(tmp41,omc_ExpressionBasics_printExpStr(threadData, (OMC_BOX_FIELD(_simExtArg, 6))));
          omc_string_store(&(_tmp), tmp42);
          tmp43 = stringAppend(_OMC_LIT24,_tmp);
          tmp44 = stringAppend(tmp43,_OMC_LIT4);
          tmp1 = tmp44;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT25;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT9, _OMC_LIT27);
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_SimCodeFunction_Function_toString(threadData_t *threadData, modelica_metatype _func)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT0;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _func;
    {
      modelica_string _tmp = NULL;
      modelica_metatype _ls = NULL;
      int tmp4;
      _tmp = (modelica_string) omc_string_empty;
      // _ls has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_string tmp5;
          modelica_string tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_tmp,_OMC_LIT1);
          tmp6 = stringAppend(tmp5,omc_AbsynUtil_pathString(threadData, (OMC_BOX_FIELD(_func, 2)), _OMC_LIT28, 1 /* true */, 0 /* false */));
          omc_string_store(&(_tmp), tmp6);
          tmp7 = stringAppend(_OMC_LIT29,_tmp);
          tmp8 = stringAppend(tmp7,_OMC_LIT4);
          tmp1 = tmp8;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_tmp,_OMC_LIT1);
          tmp10 = stringAppend(tmp9,omc_AbsynUtil_pathString(threadData, (OMC_BOX_FIELD(_func, 2)), _OMC_LIT28, 1 /* true */, 0 /* false */));
          omc_string_store(&(_tmp), tmp10);
          tmp11 = stringAppend(_OMC_LIT30,_tmp);
          tmp12 = stringAppend(tmp11,_OMC_LIT4);
          tmp1 = tmp12;
          goto tmp3_done;
        }
        case 5: {
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          
          /* Pattern matching succeeded */
          tmp13 = stringAppend(_tmp,_OMC_LIT1);
          tmp14 = stringAppend(tmp13,omc_AbsynUtil_pathString(threadData, (OMC_BOX_FIELD(_func, 2)), _OMC_LIT28, 1 /* true */, 0 /* false */));
          omc_string_store(&(_tmp), tmp14);
          tmp15 = stringAppend(_OMC_LIT31,_tmp);
          tmp16 = stringAppend(tmp15,_OMC_LIT4);
          tmp1 = tmp16;
          goto tmp3_done;
        }
        case 6: {
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_string tmp24;
          modelica_string tmp25;
          modelica_string tmp26;
          modelica_string tmp27;
          modelica_string tmp28;
          modelica_string tmp29;
          modelica_string tmp30;
          modelica_string tmp31;
          modelica_string tmp32;
          modelica_string tmp33;
          modelica_string tmp34;
          modelica_string tmp35;
          modelica_string tmp36;
          modelica_string tmp37;
          modelica_string tmp38;
          modelica_string tmp39;
          modelica_string tmp40;
          modelica_string tmp41;
          modelica_string tmp42;
          modelica_string tmp43;
          modelica_string tmp44;
          modelica_string tmp45;
          modelica_string tmp46;
          modelica_string tmp47;
          modelica_string tmp48;
          modelica_string tmp49;
          modelica_string tmp50;
          modelica_string tmp51;
          
          /* Pattern matching succeeded */
          omc_string_store(&(_tmp), _OMC_LIT32);

          tmp17 = stringAppend(_tmp,_OMC_LIT33);
          tmp18 = stringAppend(tmp17,omc_AbsynUtil_pathString(threadData, (OMC_BOX_FIELD(_func, 2)), _OMC_LIT28, 1 /* true */, 0 /* false */));
          tmp19 = stringAppend(tmp18,_OMC_LIT34);
          omc_string_store(&(_tmp), tmp19);

          tmp20 = stringAppend(_tmp,_OMC_LIT35);
          tmp21 = stringAppend(tmp20,(OMC_BOX_FIELD(_func, 3)));
          tmp22 = stringAppend(tmp21,_OMC_LIT34);
          omc_string_store(&(_tmp), tmp22);

          _ls = omc_List_map(threadData, (OMC_BOX_FIELD(_func, 4)), boxvar_SimCodeFunction_Variable_toString);

          tmp23 = stringAppend(_tmp,_OMC_LIT36);
          tmp24 = stringAppend(tmp23,stringDelimitList(_ls, _OMC_LIT37));
          tmp25 = stringAppend(tmp24,_OMC_LIT38);
          omc_string_store(&(_tmp), tmp25);

          _ls = omc_List_map(threadData, (OMC_BOX_FIELD(_func, 5)), boxvar_SimCodeFunction_SimExtArg_toString);

          tmp26 = stringAppend(_tmp,_OMC_LIT39);
          tmp27 = stringAppend(tmp26,stringDelimitList(_ls, _OMC_LIT37));
          tmp28 = stringAppend(tmp27,_OMC_LIT38);
          omc_string_store(&(_tmp), tmp28);

          tmp29 = stringAppend(_tmp,_OMC_LIT40);
          tmp30 = stringAppend(tmp29,omc_SimCodeFunction_SimExtArg_toString(threadData, (OMC_BOX_FIELD(_func, 6))));
          tmp31 = stringAppend(tmp30,_OMC_LIT34);
          omc_string_store(&(_tmp), tmp31);

          _ls = omc_List_map(threadData, (OMC_BOX_FIELD(_func, 7)), boxvar_SimCodeFunction_Variable_toString);

          tmp32 = stringAppend(_tmp,_OMC_LIT41);
          tmp33 = stringAppend(tmp32,stringDelimitList(_ls, _OMC_LIT37));
          tmp34 = stringAppend(tmp33,_OMC_LIT38);
          omc_string_store(&(_tmp), tmp34);

          _ls = omc_List_map(threadData, (OMC_BOX_FIELD(_func, 8)), boxvar_SimCodeFunction_Variable_toString);

          tmp35 = stringAppend(_tmp,_OMC_LIT42);
          tmp36 = stringAppend(tmp35,stringDelimitList(_ls, _OMC_LIT37));
          tmp37 = stringAppend(tmp36,_OMC_LIT38);
          omc_string_store(&(_tmp), tmp37);

          _ls = omc_List_map(threadData, (OMC_BOX_FIELD(_func, 9)), boxvar_SimCodeFunction_Variable_toString);

          tmp38 = stringAppend(_tmp,_OMC_LIT43);
          tmp39 = stringAppend(tmp38,stringDelimitList(_ls, _OMC_LIT37));
          tmp40 = stringAppend(tmp39,_OMC_LIT38);
          omc_string_store(&(_tmp), tmp40);

          tmp41 = stringAppend(_tmp,_OMC_LIT44);
          tmp42 = stringAppend(tmp41,stringDelimitList((OMC_BOX_FIELD(_func, 10)), _OMC_LIT37));
          tmp43 = stringAppend(tmp42,_OMC_LIT38);
          omc_string_store(&(_tmp), tmp43);

          tmp44 = stringAppend(_tmp,_OMC_LIT45);
          tmp45 = stringAppend(tmp44,stringDelimitList((OMC_BOX_FIELD(_func, 11)), _OMC_LIT37));
          tmp46 = stringAppend(tmp45,_OMC_LIT38);
          omc_string_store(&(_tmp), tmp46);

          tmp47 = stringAppend(_tmp,_OMC_LIT46);
          tmp48 = stringAppend(tmp47,(OMC_BOX_FIELD(_func, 12)));
          tmp49 = stringAppend(tmp48,_OMC_LIT32);
          omc_string_store(&(_tmp), tmp49);
          tmp50 = stringAppend(_OMC_LIT47,_tmp);
          tmp51 = stringAppend(tmp50,_OMC_LIT4);
          tmp1 = tmp51;
          goto tmp3_done;
        }
        case 7: {
          modelica_string tmp52;
          modelica_string tmp53;
          modelica_string tmp54;
          modelica_string tmp55;
          
          /* Pattern matching succeeded */
          tmp52 = stringAppend(_tmp,_OMC_LIT1);
          tmp53 = stringAppend(tmp52,omc_AbsynUtil_pathString(threadData, (OMC_BOX_FIELD(_func, 2)), _OMC_LIT28, 1 /* true */, 0 /* false */));
          omc_string_store(&(_tmp), tmp53);
          tmp54 = stringAppend(_OMC_LIT48,_tmp);
          tmp55 = stringAppend(tmp54,_OMC_LIT4);
          tmp1 = tmp55;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT9, _OMC_LIT50);
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

