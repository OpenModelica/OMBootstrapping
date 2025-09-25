#include "omc_simulation_settings.h"
#include "StaticScript.h"
#define _OMC_LIT0_data "Scripting"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,9,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "OpenModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,12,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,3,5) {&Absyn_ComponentRef_CREF__IDENT__desc,_OMC_LIT0,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,4,4) {&Absyn_ComponentRef_CREF__QUAL__desc,_OMC_LIT1,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "translateModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,14,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,5) {&DAE_Type_T__STRING__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,5) {&DAE_Const_C__VAR__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,3,3) {&DAE_Properties_PROP__desc,_OMC_LIT5,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "outputFile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,10,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,0,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,5) {&DAE_Exp_SCONST__desc,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "dumpSteps"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,9,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,6) {&DAE_Type_T__BOOL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "modelEquationsUC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,16,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "fileNamePrefix"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,14,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "SimulationObject"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,16,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,6) {&ClassInf_State_RECORD__desc,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "flatClass"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,9,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,6) {&DAE_ConnectorType_NON__CONNECTOR__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,5) {&SCode_Parallelism_NON__PARALLEL__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,3) {&SCode_Variability_VAR__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,5) {&Absyn_Direction_BIDIR__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,6) {&Absyn_InnerOuter_NOT__INNER__OUTER__desc,}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,1,3) {&SCode_Visibility_PUBLIC__desc,}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,7,3) {&DAE_Attributes_ATTR__desc,_OMC_LIT22,_OMC_LIT23,_OMC_LIT24,_OMC_LIT25,_OMC_LIT26,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,3) {&DAE_Binding_UNBOUND__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,7,3) {&DAE_Var_TYPES__VAR__desc,_OMC_LIT21,_OMC_LIT28,_OMC_LIT5,_OMC_LIT29,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "exeFile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,7,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,7,3) {&DAE_Var_TYPES__VAR__desc,_OMC_LIT31,_OMC_LIT28,_OMC_LIT5,_OMC_LIT29,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,1) {_OMC_LIT32,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,1) {_OMC_LIT30,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,5,12) {&DAE_Type_T__COMPLEX__desc,_OMC_LIT20,_OMC_LIT34,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "translateModelCPP"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,17,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "translateModelXML"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,17,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "exportDAEtoMatlab"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,17,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "buildModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,10,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,3) {&DAE_Dimension_DIM__INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,1) {_OMC_LIT40,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,3,9) {&DAE_Type_T__ARRAY__desc,_OMC_LIT5,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,3,3) {&DAE_Properties_PROP__desc,_OMC_LIT42,_OMC_LIT6}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "buildModelBeast"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,15,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "simulate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,8,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "simulation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,10,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "linearize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,9,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "optimize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,8,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "moo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,3,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "jacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,8,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "timing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,6,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,3,3) {&DAE_Properties_PROP__desc,_OMC_LIT52,_OMC_LIT6}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "exclude"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,7,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "checkExamplePackages"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,20,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,1,3) {&DAE_Const_C__CONST__desc,}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,3,3) {&DAE_Properties_PROP__desc,_OMC_LIT12,_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "elabCall_InteractiveFunction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,28,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,1,3) {&Flags_FlagVisibility_INTERNAL__desc,}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "Is true when building a model (as opposed to running a Modelica script)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,72,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(115)),_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT59,_OMC_LIT60,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "elabCall_InteractiveFunction1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,29,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "Function %s has no parameter named %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,38,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(80)),_OMC_LIT65,_OMC_LIT66,_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "startTime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,9,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "stopTime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,8,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "numberOfIntervals"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,17,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "stepSize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,8,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "tolerance"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,9,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "method"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,6,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "options"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,7,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "outputFormat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,12,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "variableFilter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,14,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "cflags"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,6,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "simflags"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,8,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,2,1) {_OMC_LIT80,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,2,1) {_OMC_LIT79,_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,1) {_OMC_LIT78,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,1) {_OMC_LIT77,_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,1) {_OMC_LIT76,_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,2,1) {_OMC_LIT17,_OMC_LIT85}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,2,1) {_OMC_LIT75,_OMC_LIT86}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,2,1) {_OMC_LIT74,_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,2,1) {_OMC_LIT73,_OMC_LIT88}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,1) {_OMC_LIT72,_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,2,1) {_OMC_LIT71,_OMC_LIT90}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,2,1) {_OMC_LIT70,_OMC_LIT91}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,1,6) {&DAE_CodeType_C__TYPENAME__desc,}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,2,3) {&DAE_Type_T__INTEGER__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
#include "util/modelica.h"

#include "StaticScript_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_StaticScript_elabCall(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inComponentRef, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_boolean _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_integer _numErrorMessages, modelica_metatype *out_outExp, modelica_metatype *out_outProperties);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_StaticScript_elabCall(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inComponentRef, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_metatype _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype _numErrorMessages, modelica_metatype *out_outExp, modelica_metatype *out_outProperties);
static const MMC_DEFSTRUCTLIT(boxvar_lit_StaticScript_elabCall,2,0) {(void*) boxptr_StaticScript_elabCall,0}};
#define boxvar_StaticScript_elabCall MMC_REFSTRUCTLIT(boxvar_lit_StaticScript_elabCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_StaticScript_elabExp2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_boolean _inImplicit, modelica_boolean _performVectorization, modelica_metatype _inPrefix, modelica_metatype _info, modelica_integer _numErrorMessages, modelica_metatype *out_outExp, modelica_metatype *out_outProperties);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_StaticScript_elabExp2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_metatype _inImplicit, modelica_metatype _performVectorization, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype _numErrorMessages, modelica_metatype *out_outExp, modelica_metatype *out_outProperties);
static const MMC_DEFSTRUCTLIT(boxvar_lit_StaticScript_elabExp2,2,0) {(void*) boxptr_StaticScript_elabExp2,0}};
#define boxvar_StaticScript_elabExp2 MMC_REFSTRUCTLIT(boxvar_lit_StaticScript_elabExp2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_StaticScript_elabCallInteractive__work(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inComponentRef, modelica_metatype _inExps, modelica_metatype _inNamedArgs, modelica_boolean _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype *out_outExp, modelica_metatype *out_outProperties);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_StaticScript_elabCallInteractive__work(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inComponentRef, modelica_metatype _inExps, modelica_metatype _inNamedArgs, modelica_metatype _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype *out_outExp, modelica_metatype *out_outProperties);
static const MMC_DEFSTRUCTLIT(boxvar_lit_StaticScript_elabCallInteractive__work,2,0) {(void*) boxptr_StaticScript_elabCallInteractive__work,0}};
#define boxvar_StaticScript_elabCallInteractive__work MMC_REFSTRUCTLIT(boxvar_lit_StaticScript_elabCallInteractive__work)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_StaticScript_calculateSimulationTimes(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_boolean _inImplInst, modelica_metatype _inPrefix, modelica_metatype _inInfo, modelica_metatype _inSimOpt, modelica_metatype *out_startTime, modelica_metatype *out_stopTime, modelica_metatype *out_numberOfIntervals);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_StaticScript_calculateSimulationTimes(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_metatype _inImplInst, modelica_metatype _inPrefix, modelica_metatype _inInfo, modelica_metatype _inSimOpt, modelica_metatype *out_startTime, modelica_metatype *out_stopTime, modelica_metatype *out_numberOfIntervals);
static const MMC_DEFSTRUCTLIT(boxvar_lit_StaticScript_calculateSimulationTimes,2,0) {(void*) boxptr_StaticScript_calculateSimulationTimes,0}};
#define boxvar_StaticScript_calculateSimulationTimes MMC_REFSTRUCTLIT(boxvar_lit_StaticScript_calculateSimulationTimes)

DLLDirection
modelica_metatype omc_StaticScript_elabGraphicsExp(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_boolean _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_metatype _outCache = NULL;
  modelica_metatype _outExp = NULL;
  modelica_metatype _outProperties = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCache has no default value.
  // _outExp has no default value.
  // _outProperties has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_boolean tmp4_4;volatile modelica_metatype tmp4_5;
    tmp4_1 = _inCache;
    tmp4_2 = _inEnv;
    tmp4_3 = _inExp;
    tmp4_4 = _inImplInst;
    tmp4_5 = _inPrefix;
    {
      modelica_boolean _impl;
      modelica_metatype _env = NULL;
      modelica_metatype _fn = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _args = NULL;
      modelica_metatype _nargs = NULL;
      modelica_metatype _cache = NULL;
      modelica_metatype _pre = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _impl has no default value.
      // _env has no default value.
      // _fn has no default value.
      // _e has no default value.
      // _args has no default value.
      // _nargs has no default value.
      // _cache has no default value.
      // _pre has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,11,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          
          _fn = tmpMeta6;
          _args = tmpMeta8;
          _nargs = tmpMeta9;
          _cache = tmp4_1;
          _env = tmp4_2;
          _pre = tmp4_5;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_StaticScript_elabCall(threadData, _cache, _env, _fn, _args, _nargs, 1 /* true */, _pre, _info, omc_Error_getNumErrorMessages(threadData), &tmpMeta[0+1], &tmpMeta[0+2]);
          goto tmp3_done;
        }
        case 1: {
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _e = tmp4_3;
          _impl = tmp4_4;
          _pre = tmp4_5;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_Static_elabGraphicsExp(threadData, _cache, _env, _e, _impl, _pre, _info, &tmpMeta[0+1], &tmpMeta[0+2]);
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outCache = tmpMeta[0+0];
  _outExp = tmpMeta[0+1];
  _outProperties = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outExp) { *out_outExp = _outExp; }
  if (out_outProperties) { *out_outProperties = _outProperties; }
  return _outCache;
}
modelica_metatype boxptr_StaticScript_elabGraphicsExp(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_metatype _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_integer tmp1;
  modelica_metatype _outCache = NULL;
  tmp1 = mmc_unbox_integer(_inImplInst);
  _outCache = omc_StaticScript_elabGraphicsExp(threadData, _inCache, _inEnv, _inExp, tmp1, _inPrefix, _info, out_outExp, out_outProperties);
  /* skip box _outCache; FCore.Cache */
  /* skip box _outExp; DAE.Exp */
  /* skip box _outProperties; DAE.Properties */
  return _outCache;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_StaticScript_elabCall(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inComponentRef, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_boolean _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_integer _numErrorMessages, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_metatype _outCache = NULL;
  modelica_metatype _outExp = NULL;
  modelica_metatype _outProperties = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCache has no default value.
  // _outExp has no default value.
  // _outProperties has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;modelica_boolean tmp4_6;modelica_metatype tmp4_7;
    tmp4_1 = _inCache;
    tmp4_2 = _inEnv;
    tmp4_3 = _inComponentRef;
    tmp4_4 = _inAbsynExpLst;
    tmp4_5 = _inAbsynNamedArgLst;
    tmp4_6 = _inImplInst;
    tmp4_7 = _inPrefix;
    {
      modelica_metatype _env = NULL;
      modelica_metatype _fn = NULL;
      modelica_metatype _args = NULL;
      modelica_metatype _nargs = NULL;
      modelica_boolean _impl;
      modelica_metatype _cache = NULL;
      modelica_metatype _pre = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _env has no default value.
      // _fn has no default value.
      // _args has no default value.
      // _nargs has no default value.
      // _impl has no default value.
      // _cache has no default value.
      // _pre has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _fn = tmp4_3;
          _args = tmp4_4;
          _nargs = tmp4_5;
          _impl = tmp4_6;
          _pre = tmp4_7;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_StaticScript_elabCallInteractive__work(threadData, _cache, _env, _fn, _args, _nargs, _impl, _pre, _info, &tmpMeta[0+1], &tmpMeta[0+2]);
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
  _outCache = tmpMeta[0+0];
  _outExp = tmpMeta[0+1];
  _outProperties = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outExp) { *out_outExp = _outExp; }
  if (out_outProperties) { *out_outProperties = _outProperties; }
  return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_StaticScript_elabCall(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inComponentRef, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_metatype _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype _numErrorMessages, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outCache = NULL;
  tmp1 = mmc_unbox_integer(_inImplInst);
  tmp2 = mmc_unbox_integer(_numErrorMessages);
  _outCache = omc_StaticScript_elabCall(threadData, _inCache, _inEnv, _inComponentRef, _inAbsynExpLst, _inAbsynNamedArgLst, tmp1, _inPrefix, _info, tmp2, out_outExp, out_outProperties);
  /* skip box _outCache; FCore.Cache */
  /* skip box _outExp; DAE.Exp */
  /* skip box _outProperties; DAE.Properties */
  return _outCache;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_StaticScript_elabExp2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_boolean _inImplicit, modelica_boolean _performVectorization, modelica_metatype _inPrefix, modelica_metatype _info, modelica_integer _numErrorMessages, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_metatype _outCache = NULL;
  modelica_metatype _outExp = NULL;
  modelica_metatype _outProperties = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCache has no default value.
  // _outExp has no default value.
  // _outProperties has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_boolean tmp4_4;volatile modelica_boolean tmp4_5;volatile modelica_metatype tmp4_6;
    tmp4_1 = _inCache;
    tmp4_2 = _inEnv;
    tmp4_3 = _inExp;
    tmp4_4 = _inImplicit;
    tmp4_5 = _performVectorization;
    tmp4_6 = _inPrefix;
    {
      modelica_boolean _impl;
      modelica_boolean _doVect;
      modelica_metatype _e_1 = NULL;
      modelica_metatype _prop = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _fn = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _args = NULL;
      modelica_metatype _nargs = NULL;
      modelica_metatype _cache = NULL;
      modelica_metatype _pre = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _impl has no default value.
      // _doVect has no default value.
      // _e_1 has no default value.
      // _prop has no default value.
      // _env has no default value.
      // _fn has no default value.
      // _exp has no default value.
      // _args has no default value.
      // _nargs has no default value.
      // _cache has no default value.
      // _pre has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,11,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          
          _fn = tmpMeta6;
          _args = tmpMeta8;
          _nargs = tmpMeta9;
          _cache = tmp4_1;
          _env = tmp4_2;
          _impl = tmp4_4;
          _pre = tmp4_6;
          /* Pattern matching succeeded */
          _cache = omc_StaticScript_elabCall(threadData, _cache, _env, _fn, _args, _nargs, _impl, _pre, _info, omc_Error_getNumErrorMessages(threadData) ,&_e_1 ,&_prop);

          _e_1 = omc_ExpressionSimplify_simplify1(threadData, _e_1, NULL);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = _e_1;
          tmpMeta[0+2] = _prop;
          goto tmp3_done;
        }
        case 1: {
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _exp = tmp4_3;
          _impl = tmp4_4;
          _doVect = tmp4_5;
          _pre = tmp4_6;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_Static_elabExp(threadData, _cache, _env, _exp, _impl, _doVect, _pre, _info, &tmpMeta[0+1], &tmpMeta[0+2]);
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outCache = tmpMeta[0+0];
  _outExp = tmpMeta[0+1];
  _outProperties = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outExp) { *out_outExp = _outExp; }
  if (out_outProperties) { *out_outProperties = _outProperties; }
  return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_StaticScript_elabExp2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_metatype _inImplicit, modelica_metatype _performVectorization, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype _numErrorMessages, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outCache = NULL;
  tmp1 = mmc_unbox_integer(_inImplicit);
  tmp2 = mmc_unbox_integer(_performVectorization);
  tmp3 = mmc_unbox_integer(_numErrorMessages);
  _outCache = omc_StaticScript_elabExp2(threadData, _inCache, _inEnv, _inExp, tmp1, tmp2, _inPrefix, _info, tmp3, out_outExp, out_outProperties);
  /* skip box _outCache; FCore.Cache */
  /* skip box _outExp; DAE.Exp */
  /* skip box _outProperties; DAE.Properties */
  return _outCache;
}

DLLDirection
modelica_metatype omc_StaticScript_elabExp(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_boolean _inImplicit, modelica_boolean _performVectorization, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_metatype _outCache = NULL;
  modelica_metatype _outExp = NULL;
  modelica_metatype _outProperties = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCache has no default value.
  // _outExp has no default value.
  // _outProperties has no default value.
  _outCache = omc_StaticScript_elabExp2(threadData, _inCache, _inEnv, _inExp, _inImplicit, _performVectorization, _inPrefix, _info, omc_Error_getNumErrorMessages(threadData) ,&_outExp ,&_outProperties);
  _return: OMC_LABEL_UNUSED
  if (out_outExp) { *out_outExp = _outExp; }
  if (out_outProperties) { *out_outProperties = _outProperties; }
  return _outCache;
}
modelica_metatype boxptr_StaticScript_elabExp(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_metatype _inImplicit, modelica_metatype _performVectorization, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outCache = NULL;
  tmp1 = mmc_unbox_integer(_inImplicit);
  tmp2 = mmc_unbox_integer(_performVectorization);
  _outCache = omc_StaticScript_elabExp(threadData, _inCache, _inEnv, _inExp, tmp1, tmp2, _inPrefix, _info, out_outExp, out_outProperties);
  /* skip box _outCache; FCore.Cache */
  /* skip box _outExp; DAE.Exp */
  /* skip box _outProperties; DAE.Properties */
  return _outCache;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_StaticScript_elabCallInteractive__work(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inComponentRef, modelica_metatype _inExps, modelica_metatype _inNamedArgs, modelica_boolean _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_metatype _outCache = NULL;
  modelica_metatype _outExp = NULL;
  modelica_metatype _outProperties = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCache has no default value.
  // _outExp has no default value.
  // _outProperties has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;volatile modelica_boolean tmp4_6;volatile modelica_metatype tmp4_7;
    tmp4_1 = _inCache;
    tmp4_2 = _inEnv;
    tmp4_3 = _inComponentRef;
    tmp4_4 = _inExps;
    tmp4_5 = _inNamedArgs;
    tmp4_6 = _inImplInst;
    tmp4_7 = _inPrefix;
    {
      modelica_metatype _cr_1 = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _cr2 = NULL;
      modelica_boolean _impl;
      modelica_string _cname_str = NULL;
      modelica_string _str = NULL;
      modelica_metatype _filenameprefix = NULL;
      modelica_metatype _exp_1 = NULL;
      modelica_metatype _crefExp = NULL;
      modelica_metatype _outputFile = NULL;
      modelica_metatype _dumpExtractionSteps = NULL;
      modelica_metatype _recordtype = NULL;
      modelica_metatype _args = NULL;
      modelica_metatype _excludeList = NULL;
      modelica_metatype _prop = NULL;
      modelica_integer _excludeListSize;
      modelica_metatype _exp = NULL;
      modelica_metatype _cache = NULL;
      modelica_metatype _pre = NULL;
      modelica_metatype _className = NULL;
      modelica_metatype _simulationArgs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr_1 has no default value.
      // _env has no default value.
      // _cr has no default value.
      // _cr2 has no default value.
      // _impl has no default value.
      // _cname_str has no default value.
      // _str has no default value.
      // _filenameprefix has no default value.
      // _exp_1 has no default value.
      // _crefExp has no default value.
      // _outputFile has no default value.
      // _dumpExtractionSteps has no default value.
      // _recordtype has no default value.
      // _args has no default value.
      // _excludeList has no default value.
      // _prop has no default value.
      // _excludeListSize has no default value.
      // _exp has no default value.
      // _cache has no default value.
      // _pre has no default value.
      // _className has no default value.
      // _simulationArgs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 20; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          
          _cr2 = tmp4_3;
          _cache = tmp4_1;
          _env = tmp4_2;
          _impl = tmp4_6;
          /* Pattern matching succeeded */
          omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT0);

          _cr = omc_AbsynUtil_joinCrefs(threadData, _OMC_LIT3, _cr2);

          tmpMeta6 = mmc_mk_box3(3, &Absyn_FunctionArgs_FUNCTIONARGS__desc, _inExps, _inNamedArgs);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_box4(14, &Absyn_Exp_CALL__desc, _cr, tmpMeta6, tmpMeta7);
          _cache = omc_Static_elabExp(threadData, _cache, _env, tmpMeta8, _impl, 0 /* false */, _inPrefix, _info ,&_exp_1 ,&_prop);

          omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT0);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = _exp_1;
          tmpMeta[0+2] = _prop;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_ErrorExt_rollBack(threadData, _OMC_LIT0);
          goto goto_2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (14 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT4), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_4);
          tmpMeta11 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta11)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          tmp4 += 17; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_getSimulationArguments(threadData, _cache, _env, _inExps, _args, _inImplInst, _inPrefix, _OMC_LIT4, _info, mmc_mk_none() ,&_simulationArgs);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT4, _simulationArgs, _OMC_LIT5);
          tmpMeta[0+2] = _OMC_LIT7;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (16 != MMC_STRLEN(tmpMeta12) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmpMeta12)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_4);
          tmpMeta14 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,2,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          if (!listEmpty(tmpMeta14)) goto tmp3_end;
          
          _cr = tmpMeta15;
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          _impl = tmp4_6;
          _pre = tmp4_7;
          tmp4 += 16; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_Static_elabUntypedCref(threadData, _cache, _env, _cr, _impl, _pre, _info ,&_cr_1);

          _className = omc_ComponentReference_crefToPathIgnoreSubs(threadData, _cr_1);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT8, _OMC_LIT5, _args, _OMC_LIT10, _pre, _info ,&_outputFile);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT11, _OMC_LIT12, _args, _OMC_LIT13, _pre, _info ,&_dumpExtractionSteps);
          tmpMeta17 = mmc_mk_box2(3, &Absyn_CodeNode_C__TYPENAME__desc, _className);
          tmpMeta18 = mmc_mk_box3(28, &DAE_Exp_CODE__desc, tmpMeta17, _OMC_LIT15);
          tmpMeta16 = mmc_mk_cons(tmpMeta18, mmc_mk_cons(_outputFile, mmc_mk_cons(_dumpExtractionSteps, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT14, tmpMeta16, _OMC_LIT5);
          tmpMeta[0+2] = _OMC_LIT7;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (17 != MMC_STRLEN(tmpMeta19) || strcmp(MMC_STRINGDATA(_OMC_LIT36), MMC_STRINGDATA(tmpMeta19)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmp4_4);
          tmpMeta21 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,2,1) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (!listEmpty(tmpMeta21)) goto tmp3_end;
          
          _cr = tmpMeta22;
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          _impl = tmp4_6;
          _pre = tmp4_7;
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          _className = omc_AbsynUtil_crefToPath(threadData, _cr);

          _cname_str = omc_AbsynUtil_pathString(threadData, _className, _OMC_LIT16, 1 /* true */, 0 /* false */);

          tmpMeta23 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _cname_str);
          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT17, _OMC_LIT5, _args, tmpMeta23, _pre, _info ,&_filenameprefix);

          _recordtype = _OMC_LIT35;
          tmpMeta25 = mmc_mk_box2(3, &Absyn_CodeNode_C__TYPENAME__desc, _className);
          tmpMeta26 = mmc_mk_box3(28, &DAE_Exp_CODE__desc, tmpMeta25, _OMC_LIT15);
          tmpMeta24 = mmc_mk_cons(tmpMeta26, mmc_mk_cons(_filenameprefix, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta27 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _recordtype, _OMC_LIT6);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT36, tmpMeta24, _OMC_LIT5);
          tmpMeta[0+2] = tmpMeta27;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (17 != MMC_STRLEN(tmpMeta28) || strcmp(MMC_STRINGDATA(_OMC_LIT37), MMC_STRINGDATA(tmpMeta28)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta29 = MMC_CAR(tmp4_4);
          tmpMeta30 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,2,1) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          if (!listEmpty(tmpMeta30)) goto tmp3_end;
          
          _cr = tmpMeta31;
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          _impl = tmp4_6;
          _pre = tmp4_7;
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          _className = omc_AbsynUtil_crefToPath(threadData, _cr);

          _cname_str = omc_AbsynUtil_pathString(threadData, _className, _OMC_LIT16, 1 /* true */, 0 /* false */);

          tmpMeta32 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _cname_str);
          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT17, _OMC_LIT5, _args, tmpMeta32, _pre, _info ,&_filenameprefix);

          _recordtype = _OMC_LIT35;
          tmpMeta34 = mmc_mk_box2(3, &Absyn_CodeNode_C__TYPENAME__desc, _className);
          tmpMeta35 = mmc_mk_box3(28, &DAE_Exp_CODE__desc, tmpMeta34, _OMC_LIT15);
          tmpMeta33 = mmc_mk_cons(tmpMeta35, mmc_mk_cons(_filenameprefix, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta36 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _recordtype, _OMC_LIT6);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT37, tmpMeta33, _OMC_LIT5);
          tmpMeta[0+2] = tmpMeta36;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (17 != MMC_STRLEN(tmpMeta37) || strcmp(MMC_STRINGDATA(_OMC_LIT38), MMC_STRINGDATA(tmpMeta37)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta38 = MMC_CAR(tmp4_4);
          tmpMeta39 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,2,1) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
          if (!listEmpty(tmpMeta39)) goto tmp3_end;
          
          _cr = tmpMeta40;
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          _impl = tmp4_6;
          _pre = tmp4_7;
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          _className = omc_AbsynUtil_crefToPath(threadData, _cr);

          _cname_str = omc_AbsynUtil_pathString(threadData, _className, _OMC_LIT16, 1 /* true */, 0 /* false */);

          tmpMeta41 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _cname_str);
          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT17, _OMC_LIT5, _args, tmpMeta41, _pre, _info ,&_filenameprefix);

          _recordtype = _OMC_LIT35;
          tmpMeta43 = mmc_mk_box2(3, &Absyn_CodeNode_C__TYPENAME__desc, _className);
          tmpMeta44 = mmc_mk_box3(28, &DAE_Exp_CODE__desc, tmpMeta43, _OMC_LIT15);
          tmpMeta42 = mmc_mk_cons(tmpMeta44, mmc_mk_cons(_filenameprefix, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta45 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _recordtype, _OMC_LIT6);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT38, tmpMeta42, _OMC_LIT5);
          tmpMeta[0+2] = tmpMeta45;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (10 != MMC_STRLEN(tmpMeta46) || strcmp(MMC_STRINGDATA(_OMC_LIT39), MMC_STRINGDATA(tmpMeta46)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta47 = MMC_CAR(tmp4_4);
          tmpMeta48 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta48)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_getSimulationArguments(threadData, _cache, _env, _inExps, _args, _inImplInst, _inPrefix, _OMC_LIT39, _info, mmc_mk_none() ,&_simulationArgs);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT39, _simulationArgs, _OMC_LIT15);
          tmpMeta[0+2] = _OMC_LIT43;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (15 != MMC_STRLEN(tmpMeta49) || strcmp(MMC_STRINGDATA(_OMC_LIT44), MMC_STRINGDATA(tmpMeta49)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta50 = MMC_CAR(tmp4_4);
          tmpMeta51 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta50,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta51)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_getSimulationArguments(threadData, _cache, _env, _inExps, _args, _inImplInst, _inPrefix, _OMC_LIT44, _info, mmc_mk_none() ,&_simulationArgs);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT44, _simulationArgs, _OMC_LIT15);
          tmpMeta[0+2] = _OMC_LIT43;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (8 != MMC_STRLEN(tmpMeta52) || strcmp(MMC_STRINGDATA(_OMC_LIT45), MMC_STRINGDATA(tmpMeta52)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta53 = MMC_CAR(tmp4_4);
          tmpMeta54 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta54)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_getSimulationArguments(threadData, _cache, _env, _inExps, _args, _inImplInst, _inPrefix, _OMC_LIT45, _info, mmc_mk_none() ,&_simulationArgs);

          _recordtype = omc_CevalScriptBackend_getSimulationResultType(threadData);
          tmpMeta55 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _recordtype, _OMC_LIT6);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT45, _simulationArgs, _OMC_LIT15);
          tmpMeta[0+2] = tmpMeta55;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (10 != MMC_STRLEN(tmpMeta56) || strcmp(MMC_STRINGDATA(_OMC_LIT46), MMC_STRINGDATA(tmpMeta56)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta57 = MMC_CAR(tmp4_4);
          tmpMeta58 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta57,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta58)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_getSimulationArguments(threadData, _cache, _env, _inExps, _args, _inImplInst, _inPrefix, _OMC_LIT46, _info, mmc_mk_none() ,&_simulationArgs);

          _recordtype = omc_CevalScriptBackend_getDrModelicaSimulationResultType(threadData);
          tmpMeta59 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _recordtype, _OMC_LIT6);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT46, _simulationArgs, _OMC_LIT15);
          tmpMeta[0+2] = tmpMeta59;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (9 != MMC_STRLEN(tmpMeta60) || strcmp(MMC_STRINGDATA(_OMC_LIT47), MMC_STRINGDATA(tmpMeta60)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta61 = MMC_CAR(tmp4_4);
          tmpMeta62 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta62)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_getSimulationArguments(threadData, _cache, _env, _inExps, _args, _inImplInst, _inPrefix, _OMC_LIT47, _info, mmc_mk_none() ,&_simulationArgs);

          _recordtype = omc_CevalScriptBackend_getSimulationResultType(threadData);
          tmpMeta63 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _recordtype, _OMC_LIT6);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT47, _simulationArgs, _OMC_LIT15);
          tmpMeta[0+2] = tmpMeta63;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (8 != MMC_STRLEN(tmpMeta64) || strcmp(MMC_STRINGDATA(_OMC_LIT48), MMC_STRINGDATA(tmpMeta64)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta65 = MMC_CAR(tmp4_4);
          tmpMeta66 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta65,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta66)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_getSimulationArguments(threadData, _cache, _env, _inExps, _args, _inImplInst, _inPrefix, _OMC_LIT48, _info, mmc_mk_none() ,&_simulationArgs);

          _recordtype = omc_CevalScriptBackend_getSimulationResultType(threadData);
          tmpMeta67 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _recordtype, _OMC_LIT6);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT48, _simulationArgs, _OMC_LIT15);
          tmpMeta[0+2] = tmpMeta67;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (3 != MMC_STRLEN(tmpMeta68) || strcmp(MMC_STRINGDATA(_OMC_LIT49), MMC_STRINGDATA(tmpMeta68)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta69 = MMC_CAR(tmp4_4);
          tmpMeta70 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta69,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta70)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_5;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_getSimulationArguments(threadData, _cache, _env, _inExps, _args, _inImplInst, _inPrefix, _OMC_LIT49, _info, mmc_mk_none() ,&_simulationArgs);

          _recordtype = omc_CevalScriptBackend_getSimulationResultType(threadData);
          tmpMeta71 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _recordtype, _OMC_LIT6);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT49, _simulationArgs, _OMC_LIT15);
          tmpMeta[0+2] = tmpMeta71;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (8 != MMC_STRLEN(tmpMeta72) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmpMeta72)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta73 = MMC_CAR(tmp4_4);
          tmpMeta74 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta73,2,1) == 0) goto tmp3_end;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta73), 2));
          if (!listEmpty(tmpMeta74)) goto tmp3_end;
          
          _cr = tmpMeta75;
          _cache = tmp4_1;
          _env = tmp4_2;
          _impl = tmp4_6;
          _pre = tmp4_7;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_Static_elabUntypedCref(threadData, _cache, _env, _cr, _impl, _pre, _info ,&_cr_1);

          _crefExp = omc_Expression_crefExp(threadData, _cr_1);
          tmpMeta76 = mmc_mk_cons(_crefExp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT50, tmpMeta76, _OMC_LIT5);
          tmpMeta[0+2] = _OMC_LIT7;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          if (!listEmpty(tmp4_5)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (6 != MMC_STRLEN(tmpMeta77) || strcmp(MMC_STRINGDATA(_OMC_LIT51), MMC_STRINGDATA(tmpMeta77)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta78 = MMC_CAR(tmp4_4);
          tmpMeta79 = MMC_CDR(tmp4_4);
          if (!listEmpty(tmpMeta79)) goto tmp3_end;
          
          _exp = tmpMeta78;
          _cache = tmp4_1;
          _env = tmp4_2;
          _impl = tmp4_6;
          _pre = tmp4_7;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cache = omc_StaticScript_elabExp(threadData, _cache, _env, _exp, _impl, 1 /* true */, _pre, _info ,&_exp_1 ,NULL);
          tmpMeta80 = mmc_mk_cons(_exp_1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT51, tmpMeta80, _OMC_LIT52);
          tmpMeta[0+2] = _OMC_LIT53;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          if (!listEmpty(tmp4_4)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (20 != MMC_STRLEN(tmpMeta81) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta81)) != 0) goto tmp3_end;
          
          _cache = tmp4_1;
          _args = tmp4_5;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _excludeList = omc_Static_getOptionalNamedArgExpList(threadData, _OMC_LIT54, _args);

          _excludeListSize = listLength(_excludeList);
          tmpMeta84 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_excludeListSize));
          tmpMeta83 = mmc_mk_cons(tmpMeta84, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta85 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta83);
          tmpMeta86 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, tmpMeta85, mmc_mk_boolean(0 /* false */), _excludeList);
          tmpMeta82 = mmc_mk_cons(tmpMeta86, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT55, tmpMeta82, _OMC_LIT5);
          tmpMeta[0+2] = _OMC_LIT57;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (20 != MMC_STRLEN(tmpMeta87) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta87)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta88 = MMC_CAR(tmp4_4);
          tmpMeta89 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta88,3,1) == 0) goto tmp3_end;
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta88), 2));
          if (!listEmpty(tmpMeta89)) goto tmp3_end;
          
          _str = tmpMeta90;
          _cache = tmp4_1;
          _args = tmp4_5;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _excludeList = omc_Static_getOptionalNamedArgExpList(threadData, _OMC_LIT54, _args);

          _excludeListSize = listLength(_excludeList);
          tmpMeta93 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_excludeListSize));
          tmpMeta92 = mmc_mk_cons(tmpMeta93, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta94 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta92);
          tmpMeta95 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, tmpMeta94, mmc_mk_boolean(0 /* false */), _excludeList);
          tmpMeta96 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _str);
          tmpMeta91 = mmc_mk_cons(tmpMeta95, mmc_mk_cons(tmpMeta96, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT55, tmpMeta91, _OMC_LIT5);
          tmpMeta[0+2] = _OMC_LIT57;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta97 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (20 != MMC_STRLEN(tmpMeta97) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta97)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta98 = MMC_CAR(tmp4_4);
          tmpMeta99 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta98,2,1) == 0) goto tmp3_end;
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta98), 2));
          if (!listEmpty(tmpMeta99)) goto tmp3_end;
          
          _cr = tmpMeta100;
          _cache = tmp4_1;
          _args = tmp4_5;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _className = omc_AbsynUtil_crefToPath(threadData, _cr);

          _excludeList = omc_Static_getOptionalNamedArgExpList(threadData, _OMC_LIT54, _args);

          _excludeListSize = listLength(_excludeList);
          tmpMeta103 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_excludeListSize));
          tmpMeta102 = mmc_mk_cons(tmpMeta103, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta104 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta102);
          tmpMeta105 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, tmpMeta104, mmc_mk_boolean(0 /* false */), _excludeList);
          tmpMeta106 = mmc_mk_box2(3, &Absyn_CodeNode_C__TYPENAME__desc, _className);
          tmpMeta107 = mmc_mk_box3(28, &DAE_Exp_CODE__desc, tmpMeta106, _OMC_LIT15);
          tmpMeta101 = mmc_mk_cons(tmpMeta105, mmc_mk_cons(tmpMeta107, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT55, tmpMeta101, _OMC_LIT5);
          tmpMeta[0+2] = _OMC_LIT57;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,2) == 0) goto tmp3_end;
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (20 != MMC_STRLEN(tmpMeta108) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta108)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta109 = MMC_CAR(tmp4_4);
          tmpMeta110 = MMC_CDR(tmp4_4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta109,2,1) == 0) goto tmp3_end;
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta109), 2));
          if (listEmpty(tmpMeta110)) goto tmp3_end;
          tmpMeta112 = MMC_CAR(tmpMeta110);
          tmpMeta113 = MMC_CDR(tmpMeta110);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta112,3,1) == 0) goto tmp3_end;
          tmpMeta114 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta112), 2));
          if (!listEmpty(tmpMeta113)) goto tmp3_end;
          
          _cr = tmpMeta111;
          _str = tmpMeta114;
          _cache = tmp4_1;
          _args = tmp4_5;
          /* Pattern matching succeeded */
          _className = omc_AbsynUtil_crefToPath(threadData, _cr);

          _excludeList = omc_Static_getOptionalNamedArgExpList(threadData, _OMC_LIT54, _args);

          _excludeListSize = listLength(_excludeList);
          tmpMeta117 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_excludeListSize));
          tmpMeta116 = mmc_mk_cons(tmpMeta117, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta118 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta116);
          tmpMeta119 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, tmpMeta118, mmc_mk_boolean(0 /* false */), _excludeList);
          tmpMeta120 = mmc_mk_box2(3, &Absyn_CodeNode_C__TYPENAME__desc, _className);
          tmpMeta121 = mmc_mk_box3(28, &DAE_Exp_CODE__desc, tmpMeta120, _OMC_LIT15);
          tmpMeta122 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _str);
          tmpMeta115 = mmc_mk_cons(tmpMeta119, mmc_mk_cons(tmpMeta121, mmc_mk_cons(tmpMeta122, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT55, tmpMeta115, _OMC_LIT5);
          tmpMeta[0+2] = _OMC_LIT57;
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
      if (++tmp4 < 20) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outCache = tmpMeta[0+0];
  _outExp = tmpMeta[0+1];
  _outProperties = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outExp) { *out_outExp = _outExp; }
  if (out_outProperties) { *out_outProperties = _outProperties; }
  return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_StaticScript_elabCallInteractive__work(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inComponentRef, modelica_metatype _inExps, modelica_metatype _inNamedArgs, modelica_metatype _inImplInst, modelica_metatype _inPrefix, modelica_metatype _info, modelica_metatype *out_outExp, modelica_metatype *out_outProperties)
{
  modelica_integer tmp1;
  modelica_metatype _outCache = NULL;
  tmp1 = mmc_unbox_integer(_inImplInst);
  _outCache = omc_StaticScript_elabCallInteractive__work(threadData, _inCache, _inEnv, _inComponentRef, _inExps, _inNamedArgs, tmp1, _inPrefix, _info, out_outExp, out_outProperties);
  /* skip box _outCache; FCore.Cache */
  /* skip box _outExp; DAE.Exp */
  /* skip box _outProperties; DAE.Properties */
  return _outCache;
}

DLLDirection
modelica_metatype omc_StaticScript_elabCallInteractive(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _env, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _nargs, modelica_boolean _impl, modelica_metatype _pre, modelica_metatype _info, modelica_metatype *out_e, modelica_metatype *out_prop)
{
  modelica_metatype _cache = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _prop = NULL;
  modelica_metatype _handles = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cache = __omcQ_24in_5Fcache;
  // _e has no default value.
  // _prop has no default value.
  // _handles has no default value.
  if(omc_Flags_getConfigBool(threadData, _OMC_LIT63))
  {
    omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT58);

    MMC_THROW_INTERNAL();
  }

  _handles = omc_ErrorExt_popCheckPoint(threadData, _OMC_LIT58);

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
          /* Pattern matching succeeded */
          omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT64);

          _cache = omc_StaticScript_elabCallInteractive__work(threadData, _cache, _env, _fn, _args, _nargs, _impl, _pre, _info ,&_e ,&_prop);

          omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT64);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_ErrorExt_rollBack(threadData, _OMC_LIT64);

          omc_ErrorExt_pushMessages(threadData, _handles);

          goto goto_1;
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

  omc_ErrorExt_freeMessages(threadData, _handles);
  _return: OMC_LABEL_UNUSED
  if (out_e) { *out_e = _e; }
  if (out_prop) { *out_prop = _prop; }
  return _cache;
}
modelica_metatype boxptr_StaticScript_elabCallInteractive(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _env, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _nargs, modelica_metatype _impl, modelica_metatype _pre, modelica_metatype _info, modelica_metatype *out_e, modelica_metatype *out_prop)
{
  modelica_integer tmp1;
  modelica_metatype _cache = NULL;
  tmp1 = mmc_unbox_integer(_impl);
  _cache = omc_StaticScript_elabCallInteractive(threadData, __omcQ_24in_5Fcache, _env, _fn, _args, _nargs, tmp1, _pre, _info, out_e, out_prop);
  /* skip box _cache; FCore.Cache */
  /* skip box _e; DAE.Exp */
  /* skip box _prop; DAE.Properties */
  return _cache;
}

DLLDirection
void omc_StaticScript_checkSimulationArguments(threadData_t *threadData, modelica_metatype _args, modelica_string _callName, modelica_metatype _info)
{
  modelica_metatype _valid_names = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _valid_names has no default value.
  {
    modelica_metatype _arg;
    for (tmpMeta1 = _args; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _arg = MMC_CAR(tmpMeta1);
      if((!listMember((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 2))), _OMC_LIT92)))
      {
        tmpMeta2 = mmc_mk_cons(_callName, mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 2))), MMC_REFSTRUCTLIT(mmc_nil)));
        omc_Error_addSourceMessage(threadData, _OMC_LIT69, tmpMeta2, _info);

        MMC_THROW_INTERNAL();
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_StaticScript_getSimulationArguments(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_boolean _inImplInst, modelica_metatype _inPrefix, modelica_string _callName, modelica_metatype _inInfo, modelica_metatype _defaultOption, modelica_metatype *out_outSimulationArguments)
{
  modelica_metatype _outCache = NULL;
  modelica_metatype _outSimulationArguments = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCache has no default value.
  // _outSimulationArguments has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_boolean tmp4_5;modelica_metatype tmp4_6;modelica_metatype tmp4_7;
    tmp4_1 = _inCache;
    tmp4_2 = _inEnv;
    tmp4_3 = _inAbsynExpLst;
    tmp4_4 = _inAbsynNamedArgLst;
    tmp4_5 = _inImplInst;
    tmp4_6 = _inPrefix;
    tmp4_7 = _inInfo;
    {
      modelica_metatype _crexp = NULL;
      modelica_metatype _args = NULL;
      modelica_boolean _impl;
      modelica_metatype _pre = NULL;
      modelica_metatype _info = NULL;
      modelica_string _cname_str = NULL;
      modelica_metatype _className = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _startTime = NULL;
      modelica_metatype _stopTime = NULL;
      modelica_metatype _numberOfIntervals = NULL;
      modelica_metatype _tolerance = NULL;
      modelica_metatype _method = NULL;
      modelica_metatype _cflags = NULL;
      modelica_metatype _simflags = NULL;
      modelica_metatype _fileNamePrefix = NULL;
      modelica_metatype _options = NULL;
      modelica_metatype _outputFormat = NULL;
      modelica_metatype _variableFilter = NULL;
      modelica_metatype _defaulSimOpt = NULL;
      modelica_metatype _cache = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _v = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _crexp has no default value.
      // _args has no default value.
      // _impl has no default value.
      // _pre has no default value.
      // _info has no default value.
      // _cname_str has no default value.
      // _className has no default value.
      // _exp has no default value.
      // _startTime has no default value.
      // _stopTime has no default value.
      // _numberOfIntervals has no default value.
      // _tolerance has no default value.
      // _method has no default value.
      // _cflags has no default value.
      // _simflags has no default value.
      // _fileNamePrefix has no default value.
      // _options has no default value.
      // _outputFormat has no default value.
      // _variableFilter has no default value.
      // _defaulSimOpt has no default value.
      // _cache has no default value.
      // _env has no default value.
      // _v has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_3);
          tmpMeta7 = MMC_CDR(tmp4_3);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          
          _crexp = tmpMeta6;
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_4;
          _impl = tmp4_5;
          _pre = tmp4_6;
          _info = tmp4_7;
          /* Pattern matching succeeded */
          omc_StaticScript_checkSimulationArguments(threadData, _args, _callName, _info);

          _exp = omc_Static_elabCodeExp(threadData, _crexp, _cache, _env, _OMC_LIT93, _info);

          tmpMeta8 = mmc_mk_box2(3, &Absyn_Msg_MSG__desc, _info);
          _cache = omc_Ceval_ceval(threadData, _cache, _env, _exp, 1 /* true */, tmpMeta8, ((modelica_integer) 0) ,&_v);

          /* Pattern-matching assignment */
          tmpMeta9 = omc_CevalScript_evalCodeTypeName(threadData, _v, _env);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,12,1) == 0) goto goto_2;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto goto_2;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          _className = tmpMeta11;

          _cname_str = omc_AbsynUtil_pathString(threadData, omc_AbsynUtil_unqotePathIdents(threadData, _className), _OMC_LIT16, 1 /* true */, 0 /* false */);

          _defaulSimOpt = omc_CevalScriptBackend_buildSimulationOptionsFromModelExperimentAnnotation(threadData, _className, _cname_str, _defaultOption);

          _cache = omc_StaticScript_calculateSimulationTimes(threadData, _inCache, _inEnv, _inAbsynExpLst, _inAbsynNamedArgLst, _impl, _inPrefix, _inInfo, _defaulSimOpt ,&_startTime ,&_stopTime ,&_numberOfIntervals);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT74, _OMC_LIT52, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _defaulSimOpt, _OMC_LIT74), _pre, _info ,&_tolerance);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT75, _OMC_LIT5, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _defaulSimOpt, _OMC_LIT75), _pre, _info ,&_method);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT17, _OMC_LIT5, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _defaulSimOpt, _OMC_LIT17), _pre, _info ,&_fileNamePrefix);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT76, _OMC_LIT5, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _defaulSimOpt, _OMC_LIT76), _pre, _info ,&_options);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT77, _OMC_LIT5, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _defaulSimOpt, _OMC_LIT77), _pre, _info ,&_outputFormat);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT78, _OMC_LIT5, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _defaulSimOpt, _OMC_LIT78), _pre, _info ,&_variableFilter);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT79, _OMC_LIT5, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _defaulSimOpt, _OMC_LIT79), _pre, _info ,&_cflags);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT80, _OMC_LIT5, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _defaulSimOpt, _OMC_LIT80), _pre, _info ,&_simflags);
          tmpMeta13 = mmc_mk_box2(3, &Absyn_CodeNode_C__TYPENAME__desc, _className);
          tmpMeta14 = mmc_mk_box3(28, &DAE_Exp_CODE__desc, tmpMeta13, _OMC_LIT15);
          tmpMeta12 = mmc_mk_cons(tmpMeta14, mmc_mk_cons(_startTime, mmc_mk_cons(_stopTime, mmc_mk_cons(_numberOfIntervals, mmc_mk_cons(_tolerance, mmc_mk_cons(_method, mmc_mk_cons(_fileNamePrefix, mmc_mk_cons(_options, mmc_mk_cons(_outputFormat, mmc_mk_cons(_variableFilter, mmc_mk_cons(_cflags, mmc_mk_cons(_simflags, MMC_REFSTRUCTLIT(mmc_nil)))))))))))));
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = tmpMeta12;
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
  _outCache = tmpMeta[0+0];
  _outSimulationArguments = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outSimulationArguments) { *out_outSimulationArguments = _outSimulationArguments; }
  return _outCache;
}
modelica_metatype boxptr_StaticScript_getSimulationArguments(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_metatype _inImplInst, modelica_metatype _inPrefix, modelica_metatype _callName, modelica_metatype _inInfo, modelica_metatype _defaultOption, modelica_metatype *out_outSimulationArguments)
{
  modelica_integer tmp1;
  modelica_metatype _outCache = NULL;
  tmp1 = mmc_unbox_integer(_inImplInst);
  _outCache = omc_StaticScript_getSimulationArguments(threadData, _inCache, _inEnv, _inAbsynExpLst, _inAbsynNamedArgLst, tmp1, _inPrefix, _callName, _inInfo, _defaultOption, out_outSimulationArguments);
  /* skip box _outCache; FCore.Cache */
  /* skip box _outSimulationArguments; list<DAE.Exp> */
  return _outCache;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_StaticScript_calculateSimulationTimes(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_boolean _inImplInst, modelica_metatype _inPrefix, modelica_metatype _inInfo, modelica_metatype _inSimOpt, modelica_metatype *out_startTime, modelica_metatype *out_stopTime, modelica_metatype *out_numberOfIntervals)
{
  modelica_metatype _outCache = NULL;
  modelica_metatype _startTime = NULL;
  modelica_metatype _stopTime = NULL;
  modelica_metatype _numberOfIntervals = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCache has no default value.
  // _startTime has no default value.
  // _stopTime has no default value.
  // _numberOfIntervals has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_boolean tmp4_5;volatile modelica_metatype tmp4_6;volatile modelica_metatype tmp4_7;
    tmp4_1 = _inCache;
    tmp4_2 = _inEnv;
    tmp4_3 = _inAbsynExpLst;
    tmp4_4 = _inAbsynNamedArgLst;
    tmp4_5 = _inImplInst;
    tmp4_6 = _inPrefix;
    tmp4_7 = _inInfo;
    {
      modelica_metatype _args = NULL;
      modelica_boolean _impl;
      modelica_metatype _pre = NULL;
      modelica_metatype _info = NULL;
      modelica_integer _intervals;
      modelica_real _rstepTime;
      modelica_real _rstopTime;
      modelica_real _rstartTime;
      modelica_metatype _cache = NULL;
      modelica_metatype _env = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _args has no default value.
      // _impl has no default value.
      // _pre has no default value.
      // _info has no default value.
      // _intervals has no default value.
      // _rstepTime has no default value.
      // _rstopTime has no default value.
      // _rstartTime has no default value.
      // _cache has no default value.
      // _env has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_real tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_real tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_real tmp18;
          modelica_metatype tmpMeta19;
          modelica_real tmp20;
          modelica_metatype tmpMeta21;
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_3);
          tmpMeta7 = MMC_CDR(tmp4_3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_4;
          _impl = tmp4_5;
          _pre = tmp4_6;
          _info = tmp4_7;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta11 = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT73, _OMC_LIT52, _args, _OMC_LIT94, _pre, _info, &tmpMeta8);
          _cache = tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto goto_2;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp10 = mmc_unbox_real(tmpMeta9);
          _rstepTime = tmp10  /* pattern as ty=Real */;

          /* Pattern-matching tuple assignment */
          tmpMeta15 = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT70, _OMC_LIT52, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _inSimOpt, _OMC_LIT70), _pre, _info, &tmpMeta12);
          _cache = tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,1) == 0) goto goto_2;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmp14 = mmc_unbox_real(tmpMeta13);
          _startTime = tmpMeta12;
          _rstartTime = tmp14  /* pattern as ty=Real */;

          /* Pattern-matching tuple assignment */
          tmpMeta19 = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT71, _OMC_LIT52, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _inSimOpt, _OMC_LIT71), _pre, _info, &tmpMeta16);
          _cache = tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto goto_2;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmp18 = mmc_unbox_real(tmpMeta17);
          _stopTime = tmpMeta16;
          _rstopTime = tmp18  /* pattern as ty=Real */;

          tmp20 = _rstepTime;
          if (tmp20 == 0) {goto goto_2;}
          _intervals = ((modelica_integer)floor((_rstopTime - _rstartTime) / tmp20));

          tmpMeta21 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_intervals));
          _numberOfIntervals = tmpMeta21;
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = _startTime;
          tmpMeta[0+2] = _stopTime;
          tmpMeta[0+3] = _numberOfIntervals;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmp4_3);
          tmpMeta23 = MMC_CDR(tmp4_3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,2,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta23)) goto tmp3_end;
          
          _cache = tmp4_1;
          _env = tmp4_2;
          _args = tmp4_4;
          _impl = tmp4_5;
          _pre = tmp4_6;
          _info = tmp4_7;
          /* Pattern matching succeeded */
          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT70, _OMC_LIT52, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _inSimOpt, _OMC_LIT70), _pre, _info ,&_startTime);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT71, _OMC_LIT52, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _inSimOpt, _OMC_LIT71), _pre, _info ,&_stopTime);

          _cache = omc_Static_getOptionalNamedArg(threadData, _cache, _env, _impl, _OMC_LIT72, _OMC_LIT95, _args, omc_CevalScriptBackend_getSimulationOption(threadData, _inSimOpt, _OMC_LIT72), _pre, _info ,&_numberOfIntervals);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = _startTime;
          tmpMeta[0+2] = _stopTime;
          tmpMeta[0+3] = _numberOfIntervals;
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outCache = tmpMeta[0+0];
  _startTime = tmpMeta[0+1];
  _stopTime = tmpMeta[0+2];
  _numberOfIntervals = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_startTime) { *out_startTime = _startTime; }
  if (out_stopTime) { *out_stopTime = _stopTime; }
  if (out_numberOfIntervals) { *out_numberOfIntervals = _numberOfIntervals; }
  return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_StaticScript_calculateSimulationTimes(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inAbsynExpLst, modelica_metatype _inAbsynNamedArgLst, modelica_metatype _inImplInst, modelica_metatype _inPrefix, modelica_metatype _inInfo, modelica_metatype _inSimOpt, modelica_metatype *out_startTime, modelica_metatype *out_stopTime, modelica_metatype *out_numberOfIntervals)
{
  modelica_integer tmp1;
  modelica_metatype _outCache = NULL;
  tmp1 = mmc_unbox_integer(_inImplInst);
  _outCache = omc_StaticScript_calculateSimulationTimes(threadData, _inCache, _inEnv, _inAbsynExpLst, _inAbsynNamedArgLst, tmp1, _inPrefix, _inInfo, _inSimOpt, out_startTime, out_stopTime, out_numberOfIntervals);
  /* skip box _outCache; FCore.Cache */
  /* skip box _startTime; DAE.Exp */
  /* skip box _stopTime; DAE.Exp */
  /* skip box _numberOfIntervals; DAE.Exp */
  return _outCache;
}

