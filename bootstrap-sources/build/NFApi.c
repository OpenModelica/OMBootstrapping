#include "omc_simulation_settings.h"
#include "NFApi.h"
#define _OMC_LIT0_data "disableSingleFlowEq"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,19,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "Disables the generation of single flow equations."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,49,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "allowNonStandardModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,24,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,9) {&Flags_FlagData_STRING__LIST__FLAG__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "nonStdMultipleExternalDeclarations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,34,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Allow several external declarations in functions.\nSee: https://specification.modelica.org/maint/3.5/functions.html#function-as-a-specialized-class"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,146,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,0) {_OMC_LIT6,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "nonStdEnumerationAsIntegers"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,27,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Allow enumeration as integer without casting via Integer(Enum).\nSee: https://specification.modelica.org/maint/3.5/class-predefined-types-and-declarations.html#type-conversion-of-enumeration-values-to-string-or-integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,217,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,0) {_OMC_LIT9,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "nonStdIntegersAsEnumeration"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,27,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Allow integer as enumeration without casting via Enum(Integer).\nSee: https://specification.modelica.org/maint/3.5/class-predefined-types-and-declarations.html#type-conversion-of-integer-to-enumeration-values"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,207,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,0) {_OMC_LIT12,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "nonStdDifferentCaseFileVsClassName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,34,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Allow directory or file with different case in the name than the contained class name.\nSee: https://specification.modelica.org/maint/3.5/packages.html#mapping-package-class-structures-to-a-hierarchical-file-system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,213,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,0) {_OMC_LIT15,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "nonStdTopLevelOuter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,19,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Allow top level outer.\nSee: https://specification.modelica.org/maint/3.6/scoping-name-lookup-and-flattening.html#S4.p1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,118,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,0) {_OMC_LIT18,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "protectedAccess"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,15,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Allow access of protected elements"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,34,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,0) {_OMC_LIT21,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "reinitInAlgorithms"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,18,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Allow reinit in algorithm sections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,34,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,0) {_OMC_LIT24,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "unbalancedModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,15,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Allow models to be locally unbalanced and to have unbalanced connectors"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,71,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,0) {_OMC_LIT27,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "implicitParameterStartAttribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,31,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Allow fixed parameters with no binding or start attribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,57,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,0) {_OMC_LIT30,_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "initialSimplified"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,17,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Allow use of experimental operator `initialSimplified()`"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,56,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,0) {_OMC_LIT33,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "illegalConditionalContext"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,25,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "Allow use of components with false conditions in illegal contexts"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,65,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,0) {_OMC_LIT36,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,1) {_OMC_LIT38,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,1) {_OMC_LIT35,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,1) {_OMC_LIT32,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,1) {_OMC_LIT29,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,1) {_OMC_LIT26,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,1) {_OMC_LIT23,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,1) {_OMC_LIT20,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {_OMC_LIT17,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT14,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT11,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT8,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,1) {_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Flags to allow non-standard Modelica."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,37,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(141)),_OMC_LIT3,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT4,_OMC_LIT5,_OMC_LIT51,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "translateResidualsDAE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,21,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,1,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "NFApi.toListForm"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,16,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "JSON.toString"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,13,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "newInst"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,7,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "Enables new instantiation phase."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,32,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(65)),_OMC_LIT59,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT60}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "AllLoadedClasses"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,16,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "NFApi.frontEndLookup_dispatch("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,30,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,1,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "execstat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,8,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "Prints out execution statistics for the compiler."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,49,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(31)),_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "nfScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,11,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "Run scalarization in NF, default true."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,38,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(167)),_OMC_LIT69,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "NFApi.frontEndBack("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,19,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data ", name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,8,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data ", scalarize: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,13,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,4,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,5,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,0,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT78,0.0);
#define _OMC_LIT78 MMC_REFREALLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT77,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,1,5) {&NFModifier_Modifier_NOMOD__desc,}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,1,5) {&NFSections_EMPTY__desc,}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,3,3) {&NFInst_InstSettings_SETTINGS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "evaluateAllParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,21,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "Evaluates all parameters if set, except the ones that have annotation(Evaluate = false)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,88,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(26)),_OMC_LIT83,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "NFApi.frontEndFront_dispatch("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,29,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "NFApi.mkFullyQual"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,17,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "nfAPINoise"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,10,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "Enables error display for the experimental new instantiation use in the OMC API."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,80,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(172)),_OMC_LIT88,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "NFApi.mkFullyQual("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,18,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,2,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data ") -> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,5,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,1,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,1,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "NFApi.evaluateAnnotations_dispatch("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,35,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data " annotation("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,12,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,1,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,1,3) {&Absyn_EqMod_NOMOD__desc,}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,1,4) {&SCode_Final_NOT__FINAL__desc,}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,1,4) {&SCode_Each_NOT__EACH__desc,}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT102,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT79,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,1,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "Icon"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,4,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "Diagram"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,7,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "choices"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,7,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,2,1) {_OMC_LIT108,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,2,1) {_OMC_LIT107,_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,2,1) {_OMC_LIT106,_OMC_LIT110}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,1,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "error evaluating: annotation("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,29,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "(\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,2,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "\")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,2,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "NFApi.evaluateAnnotation_dispatch("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,34,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#include "util/modelica.h"

#include "NFApi_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndLookup__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_expanded_cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndLookup__dispatch,2,0) {(void*) boxptr_NFApi_frontEndLookup__dispatch,0}};
#define boxvar_NFApi_frontEndLookup__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndLookup__dispatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndLookup(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_expanded_cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndLookup,2,0) {(void*) boxptr_NFApi_frontEndLookup,0}};
#define boxvar_NFApi_frontEndLookup MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndLookup)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndBack(threadData_t *threadData, modelica_metatype _inst_cls, modelica_string _name, modelica_boolean _scalarize);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFApi_frontEndBack(threadData_t *threadData, modelica_metatype _inst_cls, modelica_metatype _name, modelica_metatype _scalarize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndBack,2,0) {(void*) boxptr_NFApi_frontEndBack,0}};
#define boxvar_NFApi_frontEndBack MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndBack)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndFront__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_inst_cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndFront__dispatch,2,0) {(void*) boxptr_NFApi_frontEndFront__dispatch,0}};
#define boxvar_NFApi_frontEndFront__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndFront__dispatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndFront(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_inst_cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndFront,2,0) {(void*) boxptr_NFApi_frontEndFront,0}};
#define boxvar_NFApi_frontEndFront MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndFront)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_evaluateAnnotations__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inElements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_evaluateAnnotations__dispatch,2,0) {(void*) boxptr_NFApi_evaluateAnnotations__dispatch,0}};
#define boxvar_NFApi_evaluateAnnotations__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFApi_evaluateAnnotations__dispatch)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFApi_evaluateAnnotation__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation, modelica_boolean _addAnnotationName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFApi_evaluateAnnotation__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation, modelica_metatype _addAnnotationName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_evaluateAnnotation__dispatch,2,0) {(void*) boxptr_NFApi_evaluateAnnotation__dispatch,0}};
#define boxvar_NFApi_evaluateAnnotation__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFApi_evaluateAnnotation__dispatch)

DLLModelDirection
modelica_boolean omc_NFApi_translateResidualsDAE(threadData_t *threadData, modelica_metatype _path, modelica_string _fileNamePrefix)
{
  modelica_boolean _success;
  modelica_boolean _disable_single_flow_eq;
  modelica_metatype _non_std_flags = NULL;
  modelica_metatype _flat_model = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _simSettings = NULL;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _success = 1 /* true */;
  // _disable_single_flow_eq has no default value.
  // _non_std_flags has no default value.
  // _flat_model has no default value.
  // _funcs has no default value.
  // _simSettings has no default value.
  _disable_single_flow_eq = omc_FlagsUtil_set(threadData, _OMC_LIT2, 1 /* true */);

  _non_std_flags = omc_FlagsUtil_appendConfigStringList(threadData, _OMC_LIT53, _OMC_LIT30);

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
          _flat_model = omc_CevalScriptBackend_runFrontEndNF(threadData, _path, 0 /* false */, 0 /* false */ ,&_funcs, NULL);

          _flat_model = omc_NFInstUtil_createExtractorModel(threadData, _flat_model, _funcs ,&_funcs);

          omc_NFInstUtil_dumpFlatModelDebug(threadData, _OMC_LIT54, _flat_model, _funcs);

          _simSettings = mmc_mk_some(omc_CevalScriptBackend_convertSimulationOptionsToSimCode(threadData, omc_CevalScriptBackend_buildSimulationOptionsFromModelExperimentAnnotation(threadData, _path, _fileNamePrefix, mmc_mk_none())));

          omc_SimCodeMain_translateModelCallBackend(threadData, _flat_model, _funcs, _path, _fileNamePrefix, 1 /* true */, _simSettings, NULL, NULL);
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
      tmp2_done:
      (void)tmp3;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;

  omc_FlagsUtil_setConfigStringList(threadData, _OMC_LIT53, _non_std_flags);

  omc_FlagsUtil_set(threadData, _OMC_LIT2, _disable_single_flow_eq);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _success;
  return omc_ret_;
}
modelica_metatype boxptr_NFApi_translateResidualsDAE(threadData_t *threadData, modelica_metatype _path, modelica_metatype _fileNamePrefix)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_NFApi_translateResidualsDAE(threadData, _path, _fileNamePrefix);
  out_success = omc_mk_icon(_success);
  return out_success;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _env)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _cref = NULL;
  modelica_metatype _qualified_path = NULL;
  modelica_metatype _qualified_cref = NULL;
  modelica_metatype _opt_path = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  // _qualified_path has no default value.
  // _qualified_cref has no default value.
  // _opt_path has no default value.
  if((omc_AbsynUtil_crefIsFullyQualified(threadData, _cref) || omc_AbsynUtil_crefIsWild(threadData, _cref)))
  {
    goto _return;
  }

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
          _qualified_path = omc_NFLookup_lookupSimpleNameRootPath(threadData, omc_AbsynUtil_crefFirstIdent(threadData, _cref), (OMC_BOX_FIELD(_env, 2)), ((modelica_integer) 5));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;

  if(omc_AbsynUtil_pathIsFullyQualified(threadData, _qualified_path))
  {
    _qualified_path = omc_AbsynUtil_makeNotFullyQualified(threadData, _qualified_path);

    if((omc_AbsynUtil_pathIsIdent(threadData, _qualified_path) && (stringEqual(omc_AbsynUtil_pathFirstIdent(threadData, _qualified_path), omc_AbsynUtil_pathFirstIdent(threadData, (OMC_BOX_FIELD(_env, 3)))))))
    {
      _cref = omc_AbsynUtil_crefStripFirst(threadData, _cref);
    }
    else
    {
      _opt_path = omc_AbsynUtil_pathStripSamePrefix(threadData, _qualified_path, (OMC_BOX_FIELD(_env, 3)));

      if(isSome(_opt_path))
      {
        /* Pattern-matching assignment */
        tmpMeta5 = _opt_path;
        if (optionNone(tmpMeta5)) OMC_THROW_INTERNAL();
        tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
        _qualified_path = tmpMeta6;

        _qualified_cref = omc_AbsynUtil_pathToCref(threadData, _qualified_path);

        if(omc_AbsynUtil_crefIsQual(threadData, _cref))
        {
          _cref = omc_AbsynUtil_joinCrefs(threadData, _qualified_cref, omc_AbsynUtil_crefStripFirst(threadData, _cref));
        }
        else
        {
          _cref = _qualified_cref;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  omc_ret_ = _cref;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedExp__traverser(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype *out_env)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _env = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _env = __omcQ_24in_5Fenv;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 5: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = omc_NFApi_updateMovedCref(threadData, (OMC_BOX_FIELD(_exp, 2)), _env);
          _exp = tmpMeta4;
          goto tmp2_done;
        }
        case 14: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedCref(threadData, (OMC_BOX_FIELD(_exp, 2)), _env);
          _exp = tmpMeta5;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_env) { *out_env = _env; }
  omc_ret_ = _exp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _env)
{
  modelica_metatype _exp = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = omc_AbsynUtil_traverseExp(threadData, _exp, boxvar_NFApi_updateMovedExp__traverser, _env, NULL);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedSubscript(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsub, modelica_metatype _env)
{
  modelica_metatype _sub = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sub = __omcQ_24in_5Fsub;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _sub;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_sub), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedExp(threadData, (OMC_BOX_FIELD(_sub, 2)), _env);
          _sub = tmpMeta5;
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sub;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedAnnotation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fann, modelica_metatype _env)
{
  modelica_metatype _ann = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ann = __omcQ_24in_5Fann;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp5;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = (OMC_BOX_FIELD(_ann, 2));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar3;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar2 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar3;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(3));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_ann), 3*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = tmpMeta2;
  _ann = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _ann;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedAnnotationOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fann, modelica_metatype _env)
{
  modelica_metatype _ann = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ann = __omcQ_24in_5Fann;
  if(isSome(_ann))
  {
    _ann = mmc_mk_some(omc_NFApi_updateMovedAnnotation(threadData, omc_Util_getOption(threadData, _ann), _env));
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _ann;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedComment(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcmt, modelica_metatype _env)
{
  modelica_metatype _cmt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cmt = __omcQ_24in_5Fcmt;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_cmt), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFApi_updateMovedAnnotationOpt(threadData, (OMC_BOX_FIELD(_cmt, 2)), _env);
  _cmt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cmt;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedCommentOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcmt, modelica_metatype _env)
{
  modelica_metatype _cmt = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cmt = __omcQ_24in_5Fcmt;
  if(isSome(_cmt))
  {
    _cmt = mmc_mk_some(omc_NFApi_updateMovedComment(threadData, omc_Util_getOption(threadData, _cmt), _env));
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cmt;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedPath(threadData_t *threadData, modelica_metatype _path, modelica_metatype _env)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _outPath = NULL;
  modelica_metatype _qualified_path = NULL;
  modelica_metatype _new_path = NULL;
  modelica_metatype _opt_path = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outPath = _path;
  // _qualified_path has no default value.
  // _new_path has no default value.
  // _opt_path has no default value.
  // _node has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
          _qualified_path = omc_NFLookup_lookupSimpleNameRootPath(threadData, omc_AbsynUtil_pathFirstIdent(threadData, _path), (OMC_BOX_FIELD(_env, 2)), ((modelica_integer) 5));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;

  if(omc_AbsynUtil_pathIsFullyQualified(threadData, _qualified_path))
  {
    _qualified_path = omc_AbsynUtil_makeNotFullyQualified(threadData, _qualified_path);

    if((omc_AbsynUtil_pathIsIdent(threadData, _qualified_path) && (stringEqual(omc_AbsynUtil_pathFirstIdent(threadData, _qualified_path), omc_AbsynUtil_pathFirstIdent(threadData, (OMC_BOX_FIELD(_env, 3)))))))
    {
      _outPath = omc_AbsynUtil_pathRest(threadData, _path);
    }
    else
    {
      _opt_path = omc_AbsynUtil_pathStripSamePrefix(threadData, _qualified_path, (OMC_BOX_FIELD(_env, 3)));

      if(isSome(_opt_path))
      {
        /* Pattern-matching assignment */
        tmpMeta5 = _opt_path;
        if (optionNone(tmpMeta5)) OMC_THROW_INTERNAL();
        tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
        _new_path = tmpMeta6;

        _outPath = omc_AbsynUtil_pathReplaceFirst(threadData, _path, _new_path);
      }
    }

    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp9;
        int tmp10;
        tmp9 = 0;
        OMC_TRY_INTERNAL(mmc_jumper)
        tmp8_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp9 < 2; tmp9++) {
          switch (MMC_SWITCH_CAST(tmp9)) {
          case 0: {
            modelica_boolean tmp11;
            /* Pattern matching succeeded */
            _node = omc_NFLookup_lookupSimpleName(threadData, omc_AbsynUtil_pathFirstIdent(threadData, _outPath), (OMC_BOX_FIELD(_env, 4)), ((modelica_integer) 5), NULL);

            /* Pattern-matching assignment */
            tmp11 = omc_AbsynUtil_pathPrefixOf(threadData, omc_NFInstNode_InstNode_fullPath(threadData, _node, 0 /* false */), _qualified_path);
            if (0 /* false */ != tmp11) goto goto_7;

            _outPath = omc_AbsynUtil_pathReplaceFirst(threadData, _path, _qualified_path);

            _outPath = omc_AbsynUtil_makeFullyQualified(threadData, _outPath);
            goto tmp8_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            goto tmp8_done;
          }
          }
          goto tmp8_end;
          tmp8_end: ;
        }
        goto goto_7;
        tmp8_done:
        (void)tmp9;
        OMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp8_done2;
        goto_7:;
        OMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp9 < 2) {
          goto tmp8_top;
        }
        OMC_THROW_INTERNAL();
        tmp8_done2:;
      }
    }
    ;
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  omc_ret_ = _outPath;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedTypeSpec(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _env)
{
  modelica_metatype _ty = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ty = __omcQ_24in_5Fty;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ty;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedPath(threadData, (OMC_BOX_FIELD(_ty, 2)), _env);
          _ty = tmpMeta5;

          if(isSome((OMC_BOX_FIELD(_ty, 3))))
          {
            {
              modelica_metatype __omcQ_24tmpVar5;
              modelica_metatype* tmp8;
              modelica_metatype tmpMeta9;
              modelica_metatype __omcQ_24tmpVar4;
              modelica_integer tmp10;
              modelica_metatype _s_loopVar = 0;
              modelica_metatype _s;
              _s_loopVar = omc_Util_getOption(threadData, (OMC_BOX_FIELD(_ty, 3)));
              tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar5 = tmpMeta9; /* defaultValue */
              tmp8 = &__omcQ_24tmpVar5;
              while(1) {
                tmp10 = 1;
                if (!listEmpty(_s_loopVar)) {
                  _s = MMC_CAR(_s_loopVar);
                  _s_loopVar = MMC_CDR(_s_loopVar);
                  tmp10--;
                }
                if (tmp10 == 0) {
                  __omcQ_24tmpVar4 = omc_NFApi_updateMovedSubscript(threadData, _s, _env);
                  *tmp8 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                  tmp8 = &MMC_CDR(*tmp8);
                } else if (tmp10 == 1) {
                  break;
                } else {
                  goto goto_1;
                }
              }
              *tmp8 = mmc_mk_nil();
              tmpMeta7 = __omcQ_24tmpVar5;
            }
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = mmc_mk_some(tmpMeta7);
            _ty = tmpMeta6;
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_ty), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = omc_NFApi_updateMovedPath(threadData, (OMC_BOX_FIELD(_ty, 2)), _env);
          _ty = tmpMeta11;

          if(isSome((OMC_BOX_FIELD(_ty, 4))))
          {
            {
              modelica_metatype __omcQ_24tmpVar7;
              modelica_metatype* tmp14;
              modelica_metatype tmpMeta15;
              modelica_metatype __omcQ_24tmpVar6;
              modelica_integer tmp16;
              modelica_metatype _s_loopVar = 0;
              modelica_metatype _s;
              _s_loopVar = omc_Util_getOption(threadData, (OMC_BOX_FIELD(_ty, 4)));
              tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar7 = tmpMeta15; /* defaultValue */
              tmp14 = &__omcQ_24tmpVar7;
              while(1) {
                tmp16 = 1;
                if (!listEmpty(_s_loopVar)) {
                  _s = MMC_CAR(_s_loopVar);
                  _s_loopVar = MMC_CDR(_s_loopVar);
                  tmp16--;
                }
                if (tmp16 == 0) {
                  __omcQ_24tmpVar6 = omc_NFApi_updateMovedSubscript(threadData, _s, _env);
                  *tmp14 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                  tmp14 = &MMC_CDR(*tmp14);
                } else if (tmp16 == 1) {
                  break;
                } else {
                  goto goto_1;
                }
              }
              *tmp14 = mmc_mk_nil();
              tmpMeta13 = __omcQ_24tmpVar7;
            }
            tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_ty), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[4] = mmc_mk_some(tmpMeta13);
            _ty = tmpMeta12;
          }
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _ty;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedAlgorithmItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fitems, modelica_metatype _env)
{
  modelica_metatype _items = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _items = __omcQ_24in_5Fitems;
  _items = omc_AbsynUtil_traverseAlgorithmItemListBidir(threadData, _items, boxvar_NFApi_updateMovedExp__traverser, boxvar_AbsynUtil_dummyTraverseExp, _env, NULL);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _items;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedEquationItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fitems, modelica_metatype _env)
{
  modelica_metatype _items = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _items = __omcQ_24in_5Fitems;
  _items = omc_AbsynUtil_traverseEquationItemListBidir(threadData, _items, boxvar_NFApi_updateMovedExp__traverser, boxvar_AbsynUtil_dummyTraverseExp, _env, NULL);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _items;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedComponent(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent, modelica_metatype _env)
{
  modelica_metatype _component = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  if((!listEmpty((OMC_BOX_FIELD(_component, 3)))))
  {
    {
      modelica_metatype __omcQ_24tmpVar9;
      modelica_metatype* tmp3;
      modelica_metatype tmpMeta4;
      modelica_metatype __omcQ_24tmpVar8;
      modelica_integer tmp5;
      modelica_metatype _d_loopVar = 0;
      modelica_metatype _d;
      _d_loopVar = (OMC_BOX_FIELD(_component, 3));
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar9 = tmpMeta4; /* defaultValue */
      tmp3 = &__omcQ_24tmpVar9;
      while(1) {
        tmp5 = 1;
        if (!listEmpty(_d_loopVar)) {
          _d = MMC_CAR(_d_loopVar);
          _d_loopVar = MMC_CDR(_d_loopVar);
          tmp5--;
        }
        if (tmp5 == 0) {
          __omcQ_24tmpVar8 = omc_NFApi_updateMovedSubscript(threadData, _d, _env);
          *tmp3 = mmc_mk_cons(__omcQ_24tmpVar8,0);
          tmp3 = &MMC_CDR(*tmp3);
        } else if (tmp5 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp3 = mmc_mk_nil();
      tmpMeta2 = __omcQ_24tmpVar9;
    }
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_component), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
    _component = tmpMeta1;
  }

  if(isSome((OMC_BOX_FIELD(_component, 4))))
  {
    tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_component), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = mmc_mk_some(omc_NFApi_updateMovedModification(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_component, 4))), _env));
    _component = tmpMeta6;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _component;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedComponentItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fitem, modelica_metatype _env)
{
  modelica_metatype _item = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _item = __omcQ_24in_5Fitem;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_item), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFApi_updateMovedComponent(threadData, (OMC_BOX_FIELD(_item, 2)), _env);
  _item = tmpMeta1;

  if(isSome((OMC_BOX_FIELD(_item, 3))))
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_item), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = mmc_mk_some(omc_NFApi_updateMovedExp(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_item, 3))), _env));
    _item = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _item;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedModification(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _env)
{
  modelica_metatype _mod = NULL;
  modelica_metatype _eq_mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  // _eq_mod has no default value.
  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp5;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = (OMC_BOX_FIELD(_mod, 2));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar11;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar10 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar11;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_mod), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = tmpMeta2;
  _mod = tmpMeta1;

  _eq_mod = (OMC_BOX_FIELD(_mod, 3));

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _eq_mod;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_eq_mod), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = omc_NFApi_updateMovedExp(threadData, (OMC_BOX_FIELD(_eq_mod, 2)), _env);
          _eq_mod = tmpMeta10;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_mod), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = _eq_mod;
          _mod = tmpMeta11;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
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
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mod;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedElementArg(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _env)
{
  modelica_metatype _arg = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _arg;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          if(isSome((OMC_BOX_FIELD(_arg, 5))))
          {
            tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[5] = mmc_mk_some(omc_NFApi_updateMovedModification(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_arg, 5))), _env));
            _arg = tmpMeta4;
          }
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = omc_NFApi_updateMovedElementSpec(threadData, (OMC_BOX_FIELD(_arg, 5)), _env);
          _arg = tmpMeta5;

          if(isSome((OMC_BOX_FIELD(_arg, 6))))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[6] = mmc_mk_some(omc_NFApi_updateMovedConstrainClass(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_arg, 6))), _env));
            _arg = tmpMeta6;
          }
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _arg;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedElementAttributes(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattr, modelica_metatype _env)
{
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _attr = __omcQ_24in_5Fattr;
  if((!listEmpty((OMC_BOX_FIELD(_attr, 8)))))
  {
    {
      modelica_metatype __omcQ_24tmpVar13;
      modelica_metatype* tmp3;
      modelica_metatype tmpMeta4;
      modelica_metatype __omcQ_24tmpVar12;
      modelica_integer tmp5;
      modelica_metatype _s_loopVar = 0;
      modelica_metatype _s;
      _s_loopVar = (OMC_BOX_FIELD(_attr, 8));
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar13 = tmpMeta4; /* defaultValue */
      tmp3 = &__omcQ_24tmpVar13;
      while(1) {
        tmp5 = 1;
        if (!listEmpty(_s_loopVar)) {
          _s = MMC_CAR(_s_loopVar);
          _s_loopVar = MMC_CDR(_s_loopVar);
          tmp5--;
        }
        if (tmp5 == 0) {
          __omcQ_24tmpVar12 = omc_NFApi_updateMovedSubscript(threadData, _s, _env);
          *tmp3 = mmc_mk_cons(__omcQ_24tmpVar12,0);
          tmp3 = &MMC_CDR(*tmp3);
        } else if (tmp5 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp3 = mmc_mk_nil();
      tmpMeta2 = __omcQ_24tmpVar13;
    }
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_attr), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[8] = tmpMeta2;
    _attr = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _attr;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedElementSpec(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fspec, modelica_metatype _env)
{
  modelica_metatype _spec = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _spec = __omcQ_24in_5Fspec;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _spec;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_spec), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[3] = omc_NFApi_updateMovedClass(threadData, (OMC_BOX_FIELD(_spec, 3)), _env);
          _spec = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedPath(threadData, (OMC_BOX_FIELD(_spec, 2)), _env);
          _spec = tmpMeta5;

          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp10;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (OMC_BOX_FIELD(_spec, 3));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar15;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar14 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar15;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
          _spec = tmpMeta6;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[4] = omc_NFApi_updateMovedAnnotationOpt(threadData, (OMC_BOX_FIELD(_spec, 4)), _env);
          _spec = tmpMeta11;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = omc_NFApi_updateMovedElementAttributes(threadData, (OMC_BOX_FIELD(_spec, 2)), _env);
          _spec = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = omc_NFApi_updateMovedTypeSpec(threadData, (OMC_BOX_FIELD(_spec, 3)), _env);
          _spec = tmpMeta13;

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp18;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype _c;
            _c_loopVar = (OMC_BOX_FIELD(_spec, 4));
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar17;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                __omcQ_24tmpVar16 = omc_NFApi_updateMovedComponentItem(threadData, _c, _env);
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar17;
          }
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[4] = tmpMeta15;
          _spec = tmpMeta14;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _spec;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedConstrainClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcc, modelica_metatype _env)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _cc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _cc = __omcQ_24in_5Fcc;
  __omcQ_24mrfa_5F0 = omc_NFApi_updateMovedElementSpec(threadData, (OMC_BOX_FIELD(_cc, 2)), _env);

  __omcQ_24mrfa_5F1 = omc_NFApi_updateMovedCommentOpt(threadData, (OMC_BOX_FIELD(_cc, 3)), _env);

  tmpMeta1 = omc_mk_box3(3, &Absyn_ConstrainClass_CONSTRAINCLASS__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1);
  _cc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cc;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedElement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype _env)
{
  modelica_metatype _element = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _element = __omcQ_24in_5Felement;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_element), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = omc_NFApi_updateMovedElementSpec(threadData, (OMC_BOX_FIELD(_element, 5)), _env);
          _element = tmpMeta5;

          if(isSome((OMC_BOX_FIELD(_element, 7))))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_element), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[7] = mmc_mk_some(omc_NFApi_updateMovedConstrainClass(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_element, 7))), _env));
            _element = tmpMeta6;
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _element;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedElementItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fitem, modelica_metatype _env)
{
  modelica_metatype _item = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _item = __omcQ_24in_5Fitem;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _item;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_item), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedElement(threadData, (OMC_BOX_FIELD(_item, 2)), _env);
          _item = tmpMeta5;
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _item;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedClassPart(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _env)
{
  modelica_metatype _part = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _part;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp8;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (OMC_BOX_FIELD(_part, 2));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar19;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar18 = omc_NFApi_updateMovedElementItem(threadData, _i, _env);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar19;
          }
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = tmpMeta5;
          _part = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp13;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (OMC_BOX_FIELD(_part, 2));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar21;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar20 = omc_NFApi_updateMovedElementItem(threadData, _i, _env);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar21;
          }
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = tmpMeta10;
          _part = tmpMeta9;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = omc_NFApi_updateMovedEquationItems(threadData, (OMC_BOX_FIELD(_part, 2)), _env);
          _part = tmpMeta14;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = omc_NFApi_updateMovedEquationItems(threadData, (OMC_BOX_FIELD(_part, 2)), _env);
          _part = tmpMeta15;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = omc_NFApi_updateMovedAlgorithmItems(threadData, (OMC_BOX_FIELD(_part, 2)), _env);
          _part = tmpMeta16;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = omc_NFApi_updateMovedAlgorithmItems(threadData, (OMC_BOX_FIELD(_part, 2)), _env);
          _part = tmpMeta17;
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_part), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[3] = omc_NFApi_updateMovedAnnotationOpt(threadData, (OMC_BOX_FIELD(_part, 3)), _env);
          _part = tmpMeta18;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _part;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedClassDef(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcdef, modelica_metatype _env)
{
  modelica_metatype _cdef = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cdef = __omcQ_24in_5Fcdef;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cdef;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp8;
            modelica_metatype _p_loopVar = 0;
            modelica_metatype _p;
            _p_loopVar = (OMC_BOX_FIELD(_cdef, 4));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar23;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_p_loopVar)) {
                _p = MMC_CAR(_p_loopVar);
                _p_loopVar = MMC_CDR(_p_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar22 = omc_NFApi_updateMovedClassPart(threadData, _p, _env);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar23;
          }
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[4] = tmpMeta5;
          _cdef = tmpMeta4;

          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp13;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (OMC_BOX_FIELD(_cdef, 5));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar25;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar24 = omc_NFApi_updateMovedAnnotation(threadData, _a, _env);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar25;
          }
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[5] = tmpMeta10;
          _cdef = tmpMeta9;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = omc_NFApi_updateMovedTypeSpec(threadData, (OMC_BOX_FIELD(_cdef, 2)), _env);
          _cdef = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = omc_NFApi_updateMovedElementAttributes(threadData, (OMC_BOX_FIELD(_cdef, 3)), _env);
          _cdef = tmpMeta15;

          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp20;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (OMC_BOX_FIELD(_cdef, 4));
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar27;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar26 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar27;
          }
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[4] = tmpMeta17;
          _cdef = tmpMeta16;

          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[5] = omc_NFApi_updateMovedCommentOpt(threadData, (OMC_BOX_FIELD(_cdef, 5)), _env);
          _cdef = tmpMeta21;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar29;
            modelica_metatype* tmp24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar28;
            modelica_integer tmp26;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (OMC_BOX_FIELD(_cdef, 3));
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar29 = tmpMeta25; /* defaultValue */
            tmp24 = &__omcQ_24tmpVar29;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                __omcQ_24tmpVar28 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
                *tmp24 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                tmp24 = &MMC_CDR(*tmp24);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp24 = mmc_mk_nil();
            tmpMeta23 = __omcQ_24tmpVar29;
          }
          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[3] = tmpMeta23;
          _cdef = tmpMeta22;

          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp29;
            modelica_metatype tmpMeta30;
            modelica_metatype __omcQ_24tmpVar30;
            modelica_integer tmp31;
            modelica_metatype _p_loopVar = 0;
            modelica_metatype _p;
            _p_loopVar = (OMC_BOX_FIELD(_cdef, 5));
            tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta30; /* defaultValue */
            tmp29 = &__omcQ_24tmpVar31;
            while(1) {
              tmp31 = 1;
              if (!listEmpty(_p_loopVar)) {
                _p = MMC_CAR(_p_loopVar);
                _p_loopVar = MMC_CDR(_p_loopVar);
                tmp31--;
              }
              if (tmp31 == 0) {
                __omcQ_24tmpVar30 = omc_NFApi_updateMovedClassPart(threadData, _p, _env);
                *tmp29 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp29 = &MMC_CDR(*tmp29);
              } else if (tmp31 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp29 = mmc_mk_nil();
            tmpMeta28 = __omcQ_24tmpVar31;
          }
          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[5] = tmpMeta28;
          _cdef = tmpMeta27;

          {
            modelica_metatype __omcQ_24tmpVar33;
            modelica_metatype* tmp34;
            modelica_metatype tmpMeta35;
            modelica_metatype __omcQ_24tmpVar32;
            modelica_integer tmp36;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (OMC_BOX_FIELD(_cdef, 6));
            tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar33 = tmpMeta35; /* defaultValue */
            tmp34 = &__omcQ_24tmpVar33;
            while(1) {
              tmp36 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp36--;
              }
              if (tmp36 == 0) {
                __omcQ_24tmpVar32 = omc_NFApi_updateMovedAnnotation(threadData, _a, _env);
                *tmp34 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                tmp34 = &MMC_CDR(*tmp34);
              } else if (tmp36 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp34 = mmc_mk_nil();
            tmpMeta33 = __omcQ_24tmpVar33;
          }
          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[6] = tmpMeta33;
          _cdef = tmpMeta32;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          
          /* Pattern matching succeeded */
          tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_cdef), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[2] = omc_NFApi_updateMovedPath(threadData, (OMC_BOX_FIELD(_cdef, 2)), _env);
          _cdef = tmpMeta37;

          tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_cdef), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[4] = omc_NFApi_updateMovedCommentOpt(threadData, (OMC_BOX_FIELD(_cdef, 4)), _env);
          _cdef = tmpMeta38;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cdef;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NFApi_classHasScope(threadData_t *threadData, modelica_metatype _cls)
{
  modelica_boolean _hasScope;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasScope has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_cls, 7));
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _hasScope = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hasScope;
  return omc_ret_;
}
modelica_metatype boxptr_NFApi_classHasScope(threadData_t *threadData, modelica_metatype _cls)
{
  modelica_boolean _hasScope;
  modelica_metatype out_hasScope;
  _hasScope = omc_NFApi_classHasScope(threadData, _cls);
  out_hasScope = omc_mk_icon(_hasScope);
  return out_hasScope;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _env)
{
  modelica_metatype _cls = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls_env = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cls = __omcQ_24in_5Fcls;
  // _cls_node has no default value.
  // _cls_env has no default value.
  if(omc_NFApi_classHasScope(threadData, _cls))
  {
    _cls_node = omc_NFLookup_lookupLocalSimpleName(threadData, (OMC_BOX_FIELD(_cls, 2)), (OMC_BOX_FIELD(_env, 2)), NULL);

    omc_NFInst_expand(threadData, _cls_node, ((modelica_integer) 5));

    tmpMeta1 = omc_mk_box4(3, &NFApi_MoveEnv_MOVE__ENV__desc, _cls_node, omc_AbsynUtil_suffixPath(threadData, (OMC_BOX_FIELD(_env, 3)), (OMC_BOX_FIELD(_cls, 2))), (OMC_BOX_FIELD(_env, 4)));
    _cls_env = tmpMeta1;
  }
  else
  {
    _cls_env = _env;
  }

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_cls), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[7] = omc_NFApi_updateMovedClassDef(threadData, (OMC_BOX_FIELD(_cls, 7)), _cls_env);
  _cls = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cls;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_updateMovedClassPaths(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _clsPath, modelica_metatype _destination)
{
  modelica_metatype _cls = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _src_node = NULL;
  modelica_metatype _dst_node = NULL;
  modelica_metatype _env = NULL;
  modelica_metatype _dst_path = NULL;
  modelica_metatype _p = NULL;
  modelica_boolean _found;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cls = __omcQ_24in_5Fcls;
  // _top has no default value.
  // _src_node has no default value.
  _dst_node = _OMC_LIT55;
  // _env has no default value.
  // _dst_path has no default value.
  // _p has no default value.
  _found = 0 /* false */;
  omc_NFInstanceAPI_mkTop(threadData, omc_SymbolTable_getAbsyn(threadData), mmc_mk_some(omc_SymbolTable_getSCode(threadData)), omc_AbsynUtil_pathString(threadData, _clsPath, _OMC_LIT56, 1 /* true */, 0 /* false */) ,&_top);

  _src_node = omc_NFInst_lookupRootClass(threadData, _clsPath, _top, ((modelica_integer) 5));

  omc_NFInst_expand(threadData, _src_node, ((modelica_integer) 5));

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _destination;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AbsynUtil_suffixPath(threadData, (OMC_BOX_FIELD(_destination, 2)), omc_NFInstNode_InstNode_name(threadData, _src_node));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box2(4, &Absyn_Path_IDENT__desc, omc_NFInstNode_InstNode_name(threadData, _src_node));
          tmpMeta1 = tmpMeta6;
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
  _dst_path = tmpMeta1;

  _dst_node = _top;

  _p = _dst_path;

  while(1)
  {
    if(!((!_found) && (!omc_AbsynUtil_pathIsIdent(threadData, _p)))) break;
    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp9;
        int tmp10;
        tmp9 = 0;
        OMC_TRY_INTERNAL(mmc_jumper)
        tmp8_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp9 < 2; tmp9++) {
          switch (MMC_SWITCH_CAST(tmp9)) {
          case 0: {
            /* Pattern matching succeeded */
            _p = omc_AbsynUtil_pathPrefix(threadData, _p);

            _dst_node = omc_NFLookup_lookupName(threadData, _p, _top, ((modelica_integer) 5), 0 /* false */, NULL, NULL);

            omc_NFInst_expand(threadData, _dst_node, ((modelica_integer) 5));

            _found = 1 /* true */;
            goto tmp8_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            goto tmp8_done;
          }
          }
          goto tmp8_end;
          tmp8_end: ;
        }
        goto goto_7;
        tmp8_done:
        (void)tmp9;
        OMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp8_done2;
        goto_7:;
        OMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp9 < 2) {
          goto tmp8_top;
        }
        OMC_THROW_INTERNAL();
        tmp8_done2:;
      }
    }
    ;
  }

  tmpMeta11 = omc_mk_box4(3, &NFApi_MoveEnv_MOVE__ENV__desc, _src_node, _dst_path, _dst_node);
  _env = tmpMeta11;

  tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_cls), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[7] = omc_NFApi_updateMovedClassDef(threadData, (OMC_BOX_FIELD(_cls, 7)), _env);
  _cls = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cls;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_scodeFor(threadData_t *threadData, modelica_metatype _absynProgram)
{
  modelica_metatype _scodeProgram = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _scodeProgram = (referenceEq(_absynProgram, omc_SymbolTable_getAbsyn(threadData))?mmc_mk_some(omc_SymbolTable_getSCode(threadData)):mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _scodeProgram;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_modifierToJSON(threadData_t *threadData, modelica_string _modifier, modelica_boolean _prettyPrint)
{
  modelica_metatype _jsonString = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jsonString has no default value.
  tmpMeta1 = omc_mk_box2(5, &Values_Value_STRING__desc, omc_JSON_toString(threadData, omc_NFInstanceAPI_modifierJSON(threadData, _modifier), _prettyPrint));
  _jsonString = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _jsonString;
  return omc_ret_;
}
modelica_metatype boxptr_NFApi_modifierToJSON(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype _prettyPrint)
{
  modelica_integer tmp1;
  modelica_metatype _jsonString = NULL;
  tmp1 = omc_unbox_integer(_prettyPrint);
  _jsonString = omc_NFApi_modifierToJSON(threadData, _modifier, tmp1);
  /* skip box _jsonString; Values.Value */
  return _jsonString;
}

DLLModelDirection
modelica_metatype omc_NFApi_releaseModelInstanceReference(threadData_t *threadData, modelica_integer _handle)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  tmpMeta1 = omc_mk_box2(6, &Values_Value_BOOL__desc, omc_mk_boolean(omc_NFInstanceAPI_releaseModelInstanceReferenceImpl(threadData, _handle)));
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_NFApi_releaseModelInstanceReference(threadData_t *threadData, modelica_metatype _handle)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = omc_unbox_integer(_handle);
  _res = omc_NFApi_releaseModelInstanceReference(threadData, tmp1);
  /* skip box _res; Values.Value */
  return _res;
}

DLLModelDirection
modelica_metatype omc_NFApi_getModelInstanceAnnotationReference(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _filter)
{
  modelica_metatype _res = NULL;
  modelica_metatype _json = NULL;
  modelica_integer _handle;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _json has no default value.
  // _handle has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          _json = omc_NFInstanceAPI_buildModelInstanceAnnotationJSON(threadData, omc_SymbolTable_getAbsyn(threadData), mmc_mk_some(omc_SymbolTable_getSCode(threadData)), _classPath, _filter);

          _json = omc_JSON_toListForm(threadData, _json);

          _handle = omc_NFInstanceAPI_storeModelInstanceReference(threadData, _json);

          tmpMeta5 = omc_mk_box2(3, &Values_Value_INTEGER__desc, omc_mk_integer(_handle));
          _res = tmpMeta5;

          omc_NFInst_clearCaches(threadData);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_NFInst_clearCaches(threadData);

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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_getModelInstanceAnnotation(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _filter, modelica_boolean _prettyPrint)
{
  modelica_metatype _res = NULL;
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _json has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          _json = omc_NFInstanceAPI_buildModelInstanceAnnotationJSON(threadData, omc_SymbolTable_getAbsyn(threadData), mmc_mk_some(omc_SymbolTable_getSCode(threadData)), _classPath, _filter);

          tmpMeta5 = omc_mk_box2(5, &Values_Value_STRING__desc, omc_JSON_toString(threadData, _json, _prettyPrint));
          _res = tmpMeta5;

          omc_NFInst_clearCaches(threadData);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_NFInst_clearCaches(threadData);

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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_NFApi_getModelInstanceAnnotation(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _filter, modelica_metatype _prettyPrint)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = omc_unbox_integer(_prettyPrint);
  _res = omc_NFApi_getModelInstanceAnnotation(threadData, _classPath, _filter, tmp1);
  /* skip box _res; Values.Value */
  return _res;
}

DLLModelDirection
modelica_metatype omc_NFApi_getModelInstanceIconReference(threadData_t *threadData, modelica_metatype _classPath)
{
  modelica_metatype _res = NULL;
  modelica_metatype _json = NULL;
  modelica_integer _handle;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _json has no default value.
  // _handle has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          _json = omc_NFInstanceAPI_buildModelInstanceIconJSON(threadData, omc_SymbolTable_getAbsyn(threadData), mmc_mk_some(omc_SymbolTable_getSCode(threadData)), _classPath);

          _json = omc_JSON_toListForm(threadData, _json);

          _handle = omc_NFInstanceAPI_storeModelInstanceReference(threadData, _json);

          tmpMeta5 = omc_mk_box2(3, &Values_Value_INTEGER__desc, omc_mk_integer(_handle));
          _res = tmpMeta5;

          omc_NFInst_clearCaches(threadData);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_NFInst_clearCaches(threadData);

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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_getModelInstanceReference(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _contextPath, modelica_string _modifier)
{
  modelica_metatype _res = NULL;
  modelica_metatype _json = NULL;
  modelica_integer _handle;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _json has no default value.
  // _handle has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          _json = omc_NFInstanceAPI_buildModelInstanceJSON(threadData, omc_SymbolTable_getAbsyn(threadData), mmc_mk_some(omc_SymbolTable_getSCode(threadData)), _classPath, _contextPath, _modifier);

          _json = omc_JSON_toListForm(threadData, _json);

          omc_ExecStat_execStat(threadData, _OMC_LIT57);

          _handle = omc_NFInstanceAPI_storeModelInstanceReference(threadData, _json);

          tmpMeta5 = omc_mk_box2(3, &Values_Value_INTEGER__desc, omc_mk_integer(_handle));
          _res = tmpMeta5;

          omc_NFInst_clearCaches(threadData);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_NFInst_clearCaches(threadData);

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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_getModelInstance(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _contextPath, modelica_string _modifier, modelica_boolean _prettyPrint)
{
  modelica_metatype _res = NULL;
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _json has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          _json = omc_NFInstanceAPI_buildModelInstanceJSON(threadData, omc_SymbolTable_getAbsyn(threadData), mmc_mk_some(omc_SymbolTable_getSCode(threadData)), _classPath, _contextPath, _modifier);

          tmpMeta5 = omc_mk_box2(5, &Values_Value_STRING__desc, omc_JSON_toString(threadData, _json, _prettyPrint));
          _res = tmpMeta5;

          omc_ExecStat_execStat(threadData, _OMC_LIT58);

          omc_NFInst_clearCaches(threadData);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_NFInst_clearCaches(threadData);

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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_NFApi_getModelInstance(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _contextPath, modelica_metatype _modifier, modelica_metatype _prettyPrint)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = omc_unbox_integer(_prettyPrint);
  _res = omc_NFApi_getModelInstance(threadData, _classPath, _contextPath, _modifier, tmp1);
  /* skip box _res; Values.Value */
  return _res;
}

DLLModelDirection
modelica_metatype omc_NFApi_getNthInheritedClass(threadData_t *threadData, modelica_metatype _classPath, modelica_integer _index, modelica_metatype _program)
{
  modelica_metatype _result = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _exts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _cls_node has no default value.
  // _cls has no default value.
  // _exts has no default value.
  if((!omc_Flags_isSet(threadData, _OMC_LIT61)))
  {
    _result = omc_ValuesMake_makeBoolean(threadData, 0 /* false */);

    goto _return;
  }

  omc_NFApi_frontEndLookup(threadData, _program, _classPath ,NULL ,&_cls_node);

  if((!omc_NFInstNode_InstNode_isClass(threadData, _cls_node)))
  {
    _result = omc_ValuesMake_makeBoolean(threadData, 0 /* false */);

    goto _return;
  }

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _cls_node);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cls;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons((OMC_BOX_FIELD(_cls, 2)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = listArray(tmpMeta6);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFClassTree_ClassTree_getExtends(threadData, omc_NFClass_classTree(threadData, _cls));
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
  _exts = tmpMeta1;

  if(((_index < ((modelica_integer) 1)) || (_index > arrayLength(_exts))))
  {
    _result = omc_ValuesMake_makeBoolean(threadData, 0 /* false */);

    goto _return;
  }

  _result = omc_ValuesMake_makeCodeTypeName(threadData, omc_NFInstNode_InstNode_fullPath(threadData, arrayGet(_exts,_index) /* DAE.ASUB */, 1 /* true */));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _result;
  return omc_ret_;
}
modelica_metatype boxptr_NFApi_getNthInheritedClass(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _index, modelica_metatype _program)
{
  modelica_integer tmp1;
  modelica_metatype _result = NULL;
  tmp1 = omc_unbox_integer(_index);
  _result = omc_NFApi_getNthInheritedClass(threadData, _classPath, tmp1, _program);
  /* skip box _result; Values.Value */
  return _result;
}

DLLModelDirection
modelica_metatype omc_NFApi_getInheritedClasses(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _program)
{
  modelica_metatype _extendsPaths = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _exts = NULL;
  modelica_integer _start_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _extendsPaths has no default value.
  // _cls_node has no default value.
  // _cls has no default value.
  // _exts has no default value.
  // _start_idx has no default value.
  if((!omc_Flags_isSet(threadData, _OMC_LIT61)))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _extendsPaths = tmpMeta1;

    goto _return;
  }

  omc_NFApi_frontEndLookup(threadData, _program, _classPath ,NULL ,&_cls_node);

  if((!omc_NFInstNode_InstNode_isClass(threadData, _cls_node)))
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    _extendsPaths = tmpMeta2;

    goto _return;
  }

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _cls_node);

  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _cls;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,4,7) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(omc_NFInstNode_InstNode_fullPath(threadData, (OMC_BOX_FIELD(_cls, 2)), 1 /* true */), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta3 = tmpMeta8;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          _exts = omc_NFClassTree_ClassTree_getExtends(threadData, omc_NFClass_classTree(threadData, _cls));

          _start_idx = (omc_SCodeUtil_isClassExtends(threadData, omc_NFInstNode_InstNode_definition(threadData, _cls_node))?((modelica_integer) 2):((modelica_integer) 1));
          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp10;
            modelica_metatype tmpMeta11;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp12;
            modelica_integer tmp13;
            modelica_integer tmp14;
            modelica_integer _i;
            tmp13 = 1 /* Range step-value */;
            tmp14 = arrayLength(_exts) /* Range stop-value */;
            _i = _start_idx /* Range start-value */;
            _i = (_start_idx /* Range start-value */)-tmp13;
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta11; /* defaultValue */
            tmp10 = &__omcQ_24tmpVar35;
            while(1) {
              tmp12 = 1;
              if (tmp13 > 0 ? _i+tmp13 <= tmp14 : _i+tmp13 >= tmp14) {
                _i += tmp13;
                tmp12--;
              }
              if (tmp12 == 0) {
                __omcQ_24tmpVar34 = omc_NFInstNode_InstNode_fullPath(threadData, arrayGet(_exts,_i) /* DAE.ASUB */, 1 /* true */);
                *tmp10 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                tmp10 = &MMC_CDR(*tmp10);
              } else if (tmp12 == 1) {
                break;
              } else {
                goto goto_4;
              }
            }
            *tmp10 = mmc_mk_nil();
            tmpMeta9 = __omcQ_24tmpVar35;
          }
          tmpMeta3 = tmpMeta9;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_4;
      goto_4:;
      OMC_THROW_INTERNAL();
      goto tmp5_done;
      tmp5_done:;
    }
  }
  _extendsPaths = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _extendsPaths;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndLookup__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_expanded_cls)
{
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_metatype _expanded_cls = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _name has no default value.
  // _expanded_cls has no default value.
  // _top has no default value.
  // _cls has no default value.
  omc_string_store(&(_name), omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT56, 1 /* true */, 0 /* false */));

  _program = omc_NFInstanceAPI_mkTop(threadData, _absynProgram, omc_NFApi_scodeFor(threadData, _absynProgram), _name ,&_top);

  if(omc_AbsynUtil_pathEqual(threadData, _classPath, _OMC_LIT63))
  {
    _expanded_cls = _top;
  }
  else
  {
    _cls = omc_NFInst_lookupRootClass(threadData, _classPath, _top, ((modelica_integer) 5));

    _expanded_cls = omc_NFInst_expand(threadData, _cls, ((modelica_integer) 5));
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT68))
  {
    tmp1 = stringAppend(_OMC_LIT64,_name);
    tmp2 = stringAppend(tmp1,_OMC_LIT65);
    omc_ExecStat_execStat(threadData, tmp2);
  }

  omc_NFInst_clearCaches(threadData);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_expanded_cls) { *out_expanded_cls = _expanded_cls; }
  omc_ret_ = _program;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndLookup(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_expanded_cls)
{
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_metatype _expanded_cls = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _name has no default value.
  // _expanded_cls has no default value.
  // _cache has no default value.
  _cache = getGlobalRoot(((modelica_integer) 12));

  if((!listEmpty(_cache)))
  {
    {
      modelica_metatype _i;
      for (tmpMeta1 = _cache; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _i = MMC_CAR(tmpMeta1);
        if(referenceEq(_absynProgram, omc_Util_tuple21(threadData, omc_Util_tuple21(threadData, _i))))
        {
          if(omc_AbsynUtil_pathEqual(threadData, _classPath, omc_Util_tuple22(threadData, omc_Util_tuple21(threadData, _i))))
          {
            /* Pattern-matching assignment */
            tmpMeta2 = omc_Util_tuple22(threadData, _i);
            tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
            tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
            tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 3);
            _program = tmpMeta3;
            _name = tmpMeta4;
            _expanded_cls = tmpMeta5;

            goto _return;
          }

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _cache = tmpMeta6;

          setGlobalRoot(((modelica_integer) 12), _cache);

          break;
        }
        else
        {
          if(omc_AbsynUtil_pathEqual(threadData, _classPath, omc_Util_tuple22(threadData, omc_Util_tuple21(threadData, _i))))
          {
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            _cache = tmpMeta7;

            setGlobalRoot(((modelica_integer) 12), _cache);

            break;
          }
        }
      }
    }
  }

  _program = omc_NFApi_frontEndLookup__dispatch(threadData, _absynProgram, _classPath ,&_name ,&_expanded_cls);

  if((listLength(_cache) > ((modelica_integer) 100)))
  {
    _cache = omc_List_firstN(threadData, _cache, ((modelica_integer) 10));
  }

  tmpMeta10 = omc_mk_box2(0, _absynProgram, _classPath);
  tmpMeta11 = omc_mk_box3(0, _program, _name, _expanded_cls);
  tmpMeta12 = omc_mk_box2(0, tmpMeta10, tmpMeta11);
  tmpMeta9 = mmc_mk_cons(tmpMeta12, _cache);
  _cache = tmpMeta9;

  setGlobalRoot(((modelica_integer) 12), _cache);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_expanded_cls) { *out_expanded_cls = _expanded_cls; }
  omc_ret_ = _program;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndBack(threadData_t *threadData, modelica_metatype _inst_cls, modelica_string _name, modelica_boolean _scalarize)
{
  modelica_metatype _dae = NULL;
  modelica_metatype _flat_model = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _daeFuncs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dae has no default value.
  // _flat_model has no default value.
  // _funcs has no default value.
  // _daeFuncs has no default value.
  omc_NFTyping_typeClass(threadData, _inst_cls, ((modelica_integer) 1));

  tmpMeta1 = omc_mk_box2(4, &Absyn_Path_IDENT__desc, _name);
  _flat_model = omc_NFFlatten_flatten(threadData, _inst_cls, tmpMeta1, 1 /* true */);

  _flat_model = omc_NFEvalConstants_evaluate(threadData, _flat_model, ((modelica_integer) 1));

  _flat_model = omc_NFUnitCheck_checkUnits(threadData, _flat_model);

  _flat_model = omc_NFSimplifyModel_simplify(threadData, _flat_model);

  _flat_model = omc_NFPackage_collectConstants(threadData, _flat_model);

  _funcs = omc_NFFlatten_collectFunctions(threadData, _flat_model);

  if(omc_Flags_isSet(threadData, _OMC_LIT71))
  {
    _flat_model = omc_NFScalarize_scalarize(threadData, _flat_model);
  }
  else
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = omc_List_filterOnFalse(threadData, (OMC_BOX_FIELD(_flat_model, 3)), boxvar_NFVariable_isEmptyArray);
    _flat_model = tmpMeta2;
  }

  omc_NFVerifyModel_verify(threadData, _flat_model, omc_NFInstNode_InstNode_isPartial(threadData, _inst_cls));

  _dae = omc_NFConvertDAE_convert(threadData, _flat_model, _funcs ,&_daeFuncs);

  if(omc_Flags_isSet(threadData, _OMC_LIT68))
  {
    tmp3 = stringAppend(_OMC_LIT72,omc_AbsynUtil_pathString(threadData, omc_NFInstNode_InstNode_enclosingScopePath(threadData, _inst_cls, 0 /* false */, 0 /* false */), _OMC_LIT56, 1 /* true */, 0 /* false */));
    tmp4 = stringAppend(tmp3,_OMC_LIT73);
    tmp5 = stringAppend(tmp4,_name);
    tmp6 = stringAppend(tmp5,_OMC_LIT74);
    tmp7 = stringAppend(tmp6,(_scalarize?_OMC_LIT75:_OMC_LIT76));
    tmp8 = stringAppend(tmp7,_OMC_LIT65);
    omc_ExecStat_execStat(threadData, tmp8);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _dae;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFApi_frontEndBack(threadData_t *threadData, modelica_metatype _inst_cls, modelica_metatype _name, modelica_metatype _scalarize)
{
  modelica_integer tmp1;
  modelica_metatype _dae = NULL;
  tmp1 = omc_unbox_integer(_scalarize);
  _dae = omc_NFApi_frontEndBack(threadData, _inst_cls, _name, tmp1);
  /* skip box _dae; DAE.DAElist */
  return _dae;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndFront__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_inst_cls)
{
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_metatype _inst_cls = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _name has no default value.
  // _inst_cls has no default value.
  // _top has no default value.
  // _cls has no default value.
  omc_string_store(&(_name), omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT56, 1 /* true */, 0 /* false */));

  _program = omc_NFInstanceAPI_mkTop(threadData, _absynProgram, omc_NFApi_scodeFor(threadData, _absynProgram), _name ,&_top);

  _cls = omc_NFLookup_lookupClassName(threadData, _classPath, _top, ((modelica_integer) 1), _OMC_LIT79, 0 /* false */, NULL);

  _cls = omc_NFInstNode_InstNode_makeRootClass(threadData, _cls, _OMC_LIT55, mmc_mk_none());

  _inst_cls = omc_NFInst_instantiate(threadData, _cls, _OMC_LIT80, _OMC_LIT55, ((modelica_integer) 1), 0 /* false */);

  omc_NFInst_insertGeneratedInners(threadData, _inst_cls, _top, ((modelica_integer) 1));

  omc_NFInst_instExpressions(threadData, _inst_cls, _inst_cls, _OMC_LIT81, omc_NFConnectBreakTree_new(threadData), ((modelica_integer) 1), _OMC_LIT82);

  omc_NFInst_updateImplicitVariability(threadData, _inst_cls, omc_Flags_isSet(threadData, _OMC_LIT85), ((modelica_integer) 1));

  if(omc_Flags_isSet(threadData, _OMC_LIT68))
  {
    tmp1 = stringAppend(_OMC_LIT86,_name);
    tmp2 = stringAppend(tmp1,_OMC_LIT65);
    omc_ExecStat_execStat(threadData, tmp2);
  }

  omc_NFInst_clearCaches(threadData);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_inst_cls) { *out_inst_cls = _inst_cls; }
  omc_ret_ = _program;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndFront(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_inst_cls)
{
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_metatype _inst_cls = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _name has no default value.
  // _inst_cls has no default value.
  // _cache has no default value.
  _cache = getGlobalRoot(((modelica_integer) 10));

  if((!listEmpty(_cache)))
  {
    {
      modelica_metatype _i;
      for (tmpMeta1 = _cache; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _i = MMC_CAR(tmpMeta1);
        if(referenceEq(_absynProgram, omc_Util_tuple21(threadData, omc_Util_tuple21(threadData, _i))))
        {
          if(omc_AbsynUtil_pathEqual(threadData, _classPath, omc_Util_tuple22(threadData, omc_Util_tuple21(threadData, _i))))
          {
            /* Pattern-matching assignment */
            tmpMeta2 = omc_Util_tuple22(threadData, _i);
            tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
            tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
            tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 3);
            _program = tmpMeta3;
            _name = tmpMeta4;
            _inst_cls = tmpMeta5;

            goto _return;
          }

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _cache = tmpMeta6;

          setGlobalRoot(((modelica_integer) 10), _cache);

          break;
        }
        else
        {
          if(omc_AbsynUtil_pathEqual(threadData, _classPath, omc_Util_tuple22(threadData, omc_Util_tuple21(threadData, _i))))
          {
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            _cache = tmpMeta7;

            setGlobalRoot(((modelica_integer) 10), _cache);

            break;
          }
        }
      }
    }
  }

  _program = omc_NFApi_frontEndFront__dispatch(threadData, _absynProgram, _classPath ,&_name ,&_inst_cls);

  if((listLength(_cache) > ((modelica_integer) 100)))
  {
    _cache = omc_List_firstN(threadData, _cache, ((modelica_integer) 10));
  }

  tmpMeta10 = omc_mk_box2(0, _absynProgram, _classPath);
  tmpMeta11 = omc_mk_box3(0, _program, _name, _inst_cls);
  tmpMeta12 = omc_mk_box2(0, tmpMeta10, tmpMeta11);
  tmpMeta9 = mmc_mk_cons(tmpMeta12, _cache);
  _cache = tmpMeta9;

  setGlobalRoot(((modelica_integer) 10), _cache);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_inst_cls) { *out_inst_cls = _inst_cls; }
  omc_ret_ = _program;
  return omc_ret_;
}

DLLModelDirection
void omc_NFApi_clearCache(threadData_t *threadData)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 10), tmpMeta1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 12), tmpMeta2);

  omc_NFInstanceAPI_clearTopScopeCache(threadData);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_NFApi_mkFullyQual(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _pathToQualify, modelica_boolean _failOnError)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _qualPath = NULL;
  modelica_metatype _expanded_cls = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_string _id1 = NULL;
  modelica_string _id2 = NULL;
  modelica_boolean _b;
  modelica_boolean _s;
  modelica_integer _context;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_string tmp15;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _qualPath = _pathToQualify;
  // _expanded_cls has no default value.
  // _cls has no default value.
  // _program has no default value.
  // _name has no default value.
  // _id1 has no default value.
  // _id2 has no default value.
  // _b has no default value.
  // _s has no default value.
  // _context has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _classPath;
    tmp3_2 = _pathToQualify;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,2) == 0) goto tmp2_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp3_2, 2);
          
          _id1 = tmpMeta5;
          _id2 = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_id1, _id2))) goto tmp2_end;
          goto _return;
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;

  _b = omc_FlagsUtil_set(threadData, _OMC_LIT61, 1 /* true */);

  _s = omc_FlagsUtil_set(threadData, _OMC_LIT71, 1 /* true */);

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp8_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          /* Pattern matching succeeded */
          if((!omc_Flags_isSet(threadData, _OMC_LIT90)))
          {
            omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT87);
          }

          _program = omc_NFApi_frontEndLookup(threadData, _absynProgram, _classPath ,&_name ,&_expanded_cls);

          _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 4));

          if(omc_NFInstNode_InstNode_isDerivedClass(threadData, _expanded_cls))
          {
            _cls = omc_NFLookup_lookupClassName(threadData, _pathToQualify, omc_NFInstNode_InstNode_classParent(threadData, _expanded_cls), _context, _OMC_LIT79, 0 /* false */, NULL);
          }
          else
          {
            _cls = omc_NFLookup_lookupClassName(threadData, _pathToQualify, _expanded_cls, _context, _OMC_LIT79, 0 /* false */, NULL);
          }

          _qualPath = omc_NFInstNode_InstNode_fullPath(threadData, _cls, 0 /* false */);

          if((!omc_Flags_isSet(threadData, _OMC_LIT90)))
          {
            omc_ErrorExt_rollBack(threadData, _OMC_LIT87);
          }

          omc_FlagsUtil_set(threadData, _OMC_LIT61, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT71, _s);
          goto tmp8_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          if((!omc_Flags_isSet(threadData, _OMC_LIT90)))
          {
            omc_ErrorExt_rollBack(threadData, _OMC_LIT87);
          }

          omc_FlagsUtil_set(threadData, _OMC_LIT61, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT71, _s);

          if(_failOnError)
          {
            goto goto_7;
          }
          else
          {
            _qualPath = _pathToQualify;
          }
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      tmp8_done:
      (void)tmp9;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp8_done2;
      goto_7:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp9 < 2) {
        goto tmp8_top;
      }
      OMC_THROW_INTERNAL();
      tmp8_done2:;
    }
  }
  ;

  if(omc_Flags_isSet(threadData, _OMC_LIT68))
  {
    tmp11 = stringAppend(_OMC_LIT91,omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT56, 1 /* true */, 0 /* false */));
    tmp12 = stringAppend(tmp11,_OMC_LIT92);
    tmp13 = stringAppend(tmp12,omc_AbsynUtil_pathString(threadData, _pathToQualify, _OMC_LIT56, 1 /* true */, 0 /* false */));
    tmp14 = stringAppend(tmp13,_OMC_LIT93);
    tmp15 = stringAppend(tmp14,omc_AbsynUtil_pathString(threadData, _qualPath, _OMC_LIT56, 1 /* true */, 0 /* false */));
    omc_ExecStat_execStat(threadData, tmp15);
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  omc_ret_ = _qualPath;
  return omc_ret_;
}
modelica_metatype boxptr_NFApi_mkFullyQual(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _pathToQualify, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _qualPath = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _qualPath = omc_NFApi_mkFullyQual(threadData, _absynProgram, _classPath, _pathToQualify, tmp1);
  /* skip box _qualPath; Absyn.Path */
  return _qualPath;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_evaluateAnnotations__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inElements)
{
  modelica_metatype _outStringLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_string _str = NULL;
  modelica_metatype _elArgs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _el = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _stringLst = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _items = NULL;
  modelica_metatype _cc = NULL;
  modelica_metatype _anns = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_string tmp52;
  modelica_string tmp53;
  modelica_string tmp54;
  modelica_string tmp55;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outStringLst = tmpMeta1;
  // _str has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _elArgs = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _el = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringLst = tmpMeta4;
  // _items has no default value.
  // _cc has no default value.
  // _anns has no default value.
  // _cmt has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta5 = _inElements; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _i = MMC_CAR(tmpMeta5);
      { /* match expression */
        modelica_metatype tmp9_1;
        tmp9_1 = _i;
        {
          volatile mmc_switch_type tmp9;
          int tmp10;
          tmp9 = 0;
          for (; tmp9 < 6; tmp9++) {
            switch (MMC_SWITCH_CAST(tmp9)) {
            case 0: {
              modelica_metatype tmpMeta11;
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta11 = OMC_BOX_FIELD(tmp9_1, 5);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,3) == 0) goto tmp8_end;
              tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 4);
              tmpMeta13 = OMC_BOX_FIELD(tmp9_1, 7);
              _items = tmpMeta12;
              _cc = tmpMeta13;
              /* Pattern matching succeeded */
              _el = omc_AbsynUtil_getAnnotationsFromItems(threadData, _items, omc_AbsynUtil_getAnnotationsFromConstraintClass(threadData, _cc));
              tmpMeta6 = listAppend(_el, _elArgs);
              goto tmp8_done;
            }
            case 1: {
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta14 = OMC_BOX_FIELD(tmp9_1, 5);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,3) == 0) goto tmp8_end;
              
              /* Pattern matching succeeded */
              tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta15 = mmc_mk_cons(tmpMeta16, _elArgs);
              tmpMeta6 = tmpMeta15;
              goto tmp8_done;
            }
            case 2: {
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta32;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta17 = OMC_BOX_FIELD(tmp9_1, 5);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,2) == 0) goto tmp8_end;
              tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 3);
              tmpMeta19 = OMC_BOX_FIELD(tmpMeta18, 7);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,1,4) == 0) goto tmp8_end;
              tmpMeta20 = OMC_BOX_FIELD(tmpMeta19, 5);
              tmpMeta21 = OMC_BOX_FIELD(tmp9_1, 7);
              _cmt = tmpMeta20;
              _cc = tmpMeta21;
              /* Pattern matching succeeded */
              { /* match expression */
                modelica_metatype tmp25_1;
                tmp25_1 = _cmt;
                {
                  volatile mmc_switch_type tmp25;
                  int tmp26;
                  tmp25 = 0;
                  for (; tmp25 < 2; tmp25++) {
                    switch (MMC_SWITCH_CAST(tmp25)) {
                    case 0: {
                      modelica_metatype tmpMeta27;
                      modelica_metatype tmpMeta28;
                      modelica_metatype tmpMeta29;
                      modelica_metatype tmpMeta30;
                      if (optionNone(tmp25_1)) goto tmp24_end;
                      tmpMeta27 = OMC_BOX_FIELD(tmp25_1, 1);
                      tmpMeta28 = OMC_BOX_FIELD(tmpMeta27, 2);
                      if (optionNone(tmpMeta28)) goto tmp24_end;
                      tmpMeta29 = OMC_BOX_FIELD(tmpMeta28, 1);
                      tmpMeta30 = OMC_BOX_FIELD(tmpMeta29, 2);
                      
                      _anns = tmpMeta30;
                      /* Pattern matching succeeded */
                      tmpMeta22 = _anns;
                      goto tmp24_done;
                    }
                    case 1: {
                      modelica_metatype tmpMeta31;
                      
                      /* Pattern matching succeeded */
                      tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta22 = tmpMeta31;
                      goto tmp24_done;
                    }
                    }
                    goto tmp24_end;
                    tmp24_end: ;
                  }
                  goto goto_23;
                  goto_23:;
                  goto goto_7;
                  goto tmp24_done;
                  tmp24_done:;
                }
              }
              _anns = tmpMeta22;
              tmpMeta32 = mmc_mk_cons(listAppend(_anns, omc_AbsynUtil_getAnnotationsFromConstraintClass(threadData, _cc)), _elArgs);
              tmpMeta6 = tmpMeta32;
              goto tmp8_done;
            }
            case 3: {
              modelica_metatype tmpMeta33;
              modelica_metatype tmpMeta34;
              modelica_metatype tmpMeta35;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta33 = OMC_BOX_FIELD(tmp9_1, 5);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,3,3) == 0) goto tmp8_end;
              
              /* Pattern matching succeeded */
              tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta34 = mmc_mk_cons(tmpMeta35, _elArgs);
              tmpMeta6 = tmpMeta34;
              goto tmp8_done;
            }
            case 4: {
              modelica_metatype tmpMeta36;
              modelica_metatype tmpMeta37;
              modelica_metatype tmpMeta38;
              modelica_metatype tmpMeta39;
              modelica_metatype tmpMeta40;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta36 = OMC_BOX_FIELD(tmp9_1, 5);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,0,2) == 0) goto tmp8_end;
              tmpMeta37 = OMC_BOX_FIELD(tmpMeta36, 3);
              tmpMeta38 = OMC_BOX_FIELD(tmpMeta37, 7);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,1,4) == 0) goto tmp8_end;
              
              /* Pattern matching succeeded */
              tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta39 = mmc_mk_cons(tmpMeta40, _elArgs);
              tmpMeta6 = tmpMeta39;
              goto tmp8_done;
            }
            case 5: {
              
              /* Pattern matching succeeded */
              tmpMeta6 = _elArgs;
              goto tmp8_done;
            }
            }
            goto tmp8_end;
            tmp8_end: ;
          }
          goto goto_7;
          goto_7:;
          OMC_THROW_INTERNAL();
          goto tmp8_done;
          tmp8_done:;
        }
      }
      _elArgs = tmpMeta6;
    }
  }

  {
    modelica_metatype _l;
    for (tmpMeta42 = _elArgs; !listEmpty(tmpMeta42); tmpMeta42=MMC_CDR(tmpMeta42))
    {
      _l = MMC_CAR(tmpMeta42);
      tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
      _stringLst = tmpMeta43;

      {
        modelica_metatype _e;
        for (tmpMeta44 = listReverse(_l); !listEmpty(tmpMeta44); tmpMeta44=MMC_CDR(tmpMeta44))
        {
          _e = MMC_CAR(tmpMeta44);
          tmpMeta45 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta46 = omc_mk_box2(3, &Absyn_Annotation_ANNOTATION__desc, tmpMeta45);
          omc_string_store(&(_str), omc_NFApi_evaluateAnnotation__dispatch(threadData, _absynProgram, _classPath, tmpMeta46, 1 /* true */));

          tmpMeta47 = mmc_mk_cons(_str, _stringLst);
          _stringLst = tmpMeta47;
        }
      }

      omc_string_store(&(_str), stringDelimitList(_stringLst, _OMC_LIT92));

      tmpMeta50 = mmc_mk_cons(_OMC_LIT94, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT95, MMC_REFSTRUCTLIT(mmc_nil))));
      tmpMeta49 = mmc_mk_cons(stringAppendList(tmpMeta50), _outStringLst);
      _outStringLst = tmpMeta49;
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT68))
  {
    tmp52 = stringAppend(_OMC_LIT96,omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT56, 1 /* true */, 0 /* false */));
    tmp53 = stringAppend(tmp52,_OMC_LIT97);
    tmp54 = stringAppend(tmp53,stringDelimitList(omc_List_map(threadData, omc_List_flatten(threadData, _elArgs), boxvar_Dump_unparseElementArgStr), _OMC_LIT92));
    tmp55 = stringAppend(tmp54,_OMC_LIT65);
    omc_ExecStat_execStat(threadData, tmp55);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outStringLst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFApi_evaluateAnnotations(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inElements)
{
  modelica_metatype _outStringLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _b;
  modelica_boolean _s;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outStringLst = tmpMeta1;
  // _b has no default value.
  // _s has no default value.
  _b = omc_FlagsUtil_set(threadData, _OMC_LIT61, 1 /* true */);

  _s = omc_FlagsUtil_set(threadData, _OMC_LIT71, 1 /* true */);

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
          /* Pattern matching succeeded */
          _outStringLst = omc_NFApi_evaluateAnnotations__dispatch(threadData, _absynProgram, _classPath, _inElements);

          omc_FlagsUtil_set(threadData, _OMC_LIT61, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT71, _s);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_FlagsUtil_set(threadData, _OMC_LIT61, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT71, _s);

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
  omc_ret_ = _outStringLst;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFApi_evaluateAnnotation__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation, modelica_boolean _addAnnotationName)
{
  modelica_string _outString = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _inst_cls = NULL;
  modelica_metatype _anncls = NULL;
  modelica_metatype _inst_anncls = NULL;
  modelica_string _name = NULL;
  modelica_string _annName = NULL;
  modelica_string _str = NULL;
  modelica_metatype _program = NULL;
  modelica_metatype _el = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _stringLst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _absynExp = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _save = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _stripped_mod = NULL;
  modelica_metatype _graphics_mod = NULL;
  modelica_metatype _eqmod = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype _dae = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _var;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7 = 0;
  modelica_metatype tmpMeta65;
  modelica_metatype tmpMeta66;
  modelica_string tmp67;
  modelica_string tmp68;
  modelica_string tmp69;
  modelica_string tmp70;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outString = _OMC_LIT77;
  // _top has no default value.
  // _inst_cls has no default value.
  // _anncls has no default value.
  // _inst_anncls has no default value.
  // _name has no default value.
  // _annName has no default value.
  // _str has no default value.
  // _program has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _el = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringLst = tmpMeta2;
  // _absynExp has no default value.
  // _exp has no default value.
  // _save has no default value.
  // _info has no default value.
  // _mod has no default value.
  // _stripped_mod has no default value.
  // _graphics_mod has no default value.
  // _eqmod has no default value.
  // _smod has no default value.
  // _dae has no default value.
  // _ty has no default value.
  // _var has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringLst = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _inAnnotation;
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 2);
  _el = tmpMeta5;

  {
    modelica_metatype _e;
    for (tmpMeta6 = listReverse(_el); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _e = MMC_CAR(tmpMeta6);
      _e = omc_AbsynUtil_createChoiceArray(threadData, _e);

      { /* matchcontinue expression */
        volatile modelica_metatype tmp10_1;
        tmp10_1 = _e;
        {
          volatile mmc_switch_type tmp10;
          int tmp11;
          tmp10 = 0;
          OMC_TRY_INTERNAL(mmc_jumper)
          tmp9_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp10 < 4; tmp10++) {
            switch (MMC_SWITCH_CAST(tmp10)) {
            case 0: {
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,6) == 0) goto tmp9_end;
              tmpMeta12 = OMC_BOX_FIELD(tmp10_1, 4);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,1) == 0) goto tmp9_end;
              tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 2);
              tmpMeta14 = OMC_BOX_FIELD(tmp10_1, 5);
              if (optionNone(tmpMeta14)) goto tmp9_end;
              tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 1);
              tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
              if (!listEmpty(tmpMeta16)) goto tmp9_end;
              tmpMeta17 = OMC_BOX_FIELD(tmpMeta15, 3);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,2) == 0) goto tmp9_end;
              tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 2);
              tmpMeta19 = OMC_BOX_FIELD(tmp10_1, 7);
              _annName = tmpMeta13;
              _eqmod = tmpMeta17;
              _absynExp = tmpMeta18;
              _info = tmpMeta19;
              tmp10 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
              if(omc_AbsynUtil_onlyLiteralsInEqMod(threadData, _eqmod))
              {
                _program = omc_NFInstanceAPI_mkTop(threadData, _absynProgram, omc_NFApi_scodeFor(threadData, _absynProgram), _annName ,&_top);

                _inst_cls = _top;
              }
              else
              {
                _program = omc_NFApi_frontEndFront(threadData, _absynProgram, _classPath ,&_name ,&_inst_cls);
              }

              _exp = omc_NFInst_instExp(threadData, _absynExp, _inst_cls, ((modelica_integer) 67108865), _info);

              _exp = omc_NFTyping_typeExp(threadData, _exp, ((modelica_integer) 67108865), _info, 0 /* false */ ,&_ty ,&_var, NULL);

              _exp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);

              omc_string_store(&(_str), omc_NFExpression_toString(threadData, _exp));
              tmpMeta20 = mmc_mk_cons(_annName, mmc_mk_cons(_OMC_LIT98, mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil))));
              tmp7 = stringAppendList(tmpMeta20);
              goto tmp9_done;
            }
            case 1: {
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_metatype tmpMeta24;
              modelica_metatype tmpMeta25;
              modelica_metatype tmpMeta26;
              modelica_metatype tmpMeta27;
              modelica_metatype tmpMeta28;
              modelica_metatype tmpMeta29;
              modelica_metatype tmpMeta30;
              modelica_metatype tmpMeta48;
              modelica_boolean tmp49;
              modelica_string tmp50;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,6) == 0) goto tmp9_end;
              tmpMeta21 = OMC_BOX_FIELD(tmp10_1, 4);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,1) == 0) goto tmp9_end;
              tmpMeta22 = OMC_BOX_FIELD(tmpMeta21, 2);
              tmpMeta23 = OMC_BOX_FIELD(tmp10_1, 5);
              if (optionNone(tmpMeta23)) goto tmp9_end;
              tmpMeta24 = OMC_BOX_FIELD(tmpMeta23, 1);
              tmpMeta25 = OMC_BOX_FIELD(tmpMeta24, 2);
              tmpMeta26 = OMC_BOX_FIELD(tmpMeta24, 3);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,0) == 0) goto tmp9_end;
              tmpMeta27 = OMC_BOX_FIELD(tmp10_1, 7);
              _annName = tmpMeta22;
              _mod = tmpMeta25;
              _info = tmpMeta27;
              tmp10 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
              if(omc_AbsynUtil_onlyLiteralsInAnnotationMod(threadData, _mod))
              {
                _program = omc_NFInstanceAPI_mkTop(threadData, _absynProgram, omc_NFApi_scodeFor(threadData, _absynProgram), _annName ,&_top);

                _inst_cls = _top;
              }
              else
              {
                _program = omc_NFApi_frontEndFront(threadData, _absynProgram, _classPath ,&_name ,&_inst_cls);
              }

              _stripped_mod = omc_AbsynUtil_stripGraphicsAndInteractionModification(threadData, _mod ,&_graphics_mod);

              tmpMeta28 = omc_mk_box3(3, &Absyn_Modification_CLASSMOD__desc, _stripped_mod, _OMC_LIT99);
              _smod = omc_AbsynToSCode_translateMod(threadData, mmc_mk_some(tmpMeta28), _OMC_LIT100, _OMC_LIT101, mmc_mk_none(), _info, 0 /* false */);

              tmpMeta29 = omc_mk_box2(4, &Absyn_Path_IDENT__desc, _annName);
              _anncls = omc_NFLookup_lookupClassName(threadData, tmpMeta29, _inst_cls, ((modelica_integer) 67108865), _OMC_LIT79, 0 /* false */, NULL);

              _inst_anncls = omc_NFInst_expand(threadData, _anncls, ((modelica_integer) 67108865));

              tmpMeta30 = omc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, _annName);
              _inst_anncls = omc_NFInst_instClass(threadData, _inst_anncls, omc_NFModifier_Modifier_create(threadData, _smod, _annName, tmpMeta30, _inst_cls, ((modelica_integer) 0)), _OMC_LIT103, 1 /* true */, ((modelica_integer) 0), ((modelica_integer) 0), _inst_cls, ((modelica_integer) 67108865), NULL);

              omc_NFInst_instExpressions(threadData, _inst_anncls, _inst_anncls, _OMC_LIT81, omc_NFConnectBreakTree_new(threadData), ((modelica_integer) 67108865), _OMC_LIT82);

              omc_NFInst_updateImplicitVariability(threadData, _inst_anncls, omc_Flags_isSet(threadData, _OMC_LIT85), ((modelica_integer) 67108865));

              _dae = omc_NFApi_frontEndBack(threadData, _inst_anncls, _annName, 0 /* false */);

              omc_string_store(&(_str), omc_DAEUtil_getVariableBindingsStr(threadData, omc_DAEUtil_daeElements(threadData, _dae)));

              if((listMember(_annName, _OMC_LIT111) && (!listEmpty(_graphics_mod))))
              {
                { /* matchcontinue expression */
                  {
                    volatile mmc_switch_type tmp33;
                    int tmp34;
                    tmp33 = 0;
                    OMC_TRY_INTERNAL(mmc_jumper)
                    tmp32_top:
                    threadData->mmc_jumper = &new_mmc_jumper;
                    for (; tmp33 < 2; tmp33++) {
                      switch (MMC_SWITCH_CAST(tmp33)) {
                      case 0: {
                        modelica_metatype tmpMeta35;
                        modelica_metatype tmpMeta36;
                        modelica_metatype tmpMeta37;
                        modelica_metatype tmpMeta38;
                        modelica_metatype tmpMeta39;
                        modelica_metatype tmpMeta40;
                        modelica_metatype tmpMeta41;
                        modelica_string tmp46;
                        modelica_string tmp47;
                        /* Pattern matching succeeded */
                        /* Pattern-matching assignment */
                        tmpMeta35 = _graphics_mod;
                        if (listEmpty(tmpMeta35)) goto goto_31;
                        tmpMeta36 = MMC_CAR(tmpMeta35);
                        tmpMeta37 = MMC_CDR(tmpMeta35);
                        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,0,6) == 0) goto goto_31;
                        tmpMeta38 = OMC_BOX_FIELD(tmpMeta36, 5);
                        if (optionNone(tmpMeta38)) goto goto_31;
                        tmpMeta39 = OMC_BOX_FIELD(tmpMeta38, 1);
                        tmpMeta40 = OMC_BOX_FIELD(tmpMeta39, 3);
                        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,1,2) == 0) goto goto_31;
                        tmpMeta41 = OMC_BOX_FIELD(tmpMeta40, 2);
                        if (!listEmpty(tmpMeta37)) goto goto_31;
                        _absynExp = tmpMeta41;

                        _exp = omc_NFInst_instExp(threadData, _absynExp, _inst_cls, ((modelica_integer) 67108865), _info);

                        _exp = omc_NFTyping_typeExp(threadData, _exp, ((modelica_integer) 67108865), _info, 0 /* false */ ,&_ty ,&_var, NULL);

                        _save = _exp;

                        { /* matchcontinue expression */
                          {
                            volatile mmc_switch_type tmp44;
                            int tmp45;
                            tmp44 = 0;
                            OMC_TRY_INTERNAL(mmc_jumper)
                            tmp43_top:
                            threadData->mmc_jumper = &new_mmc_jumper;
                            for (; tmp44 < 2; tmp44++) {
                              switch (MMC_SWITCH_CAST(tmp44)) {
                              case 0: {
                                /* Pattern matching succeeded */
                                _exp = omc_NFCeval_evalExp(threadData, _save, _OMC_LIT104);
                                goto tmp43_done;
                              }
                              case 1: {
                                /* Pattern matching succeeded */
                                _exp = omc_NFEvalConstants_evaluateExp(threadData, _save, _info);
                                goto tmp43_done;
                              }
                              }
                              goto tmp43_end;
                              tmp43_end: ;
                            }
                            goto goto_42;
                            tmp43_done:
                            (void)tmp44;
                            OMC_RESTORE_INTERNAL(mmc_jumper);
                            goto tmp43_done2;
                            goto_42:;
                            OMC_CATCH_INTERNAL(mmc_jumper);
                            if (++tmp44 < 2) {
                              goto tmp43_top;
                            }
                            goto goto_31;
                            tmp43_done2:;
                          }
                        }
                        ;

                        _exp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);

                        tmp46 = stringAppend(_str,_OMC_LIT105);
                        tmp47 = stringAppend(tmp46,omc_NFExpression_toString(threadData, _exp));
                        omc_string_store(&(_str), tmp47);
                        goto tmp32_done;
                      }
                      case 1: {
                        /* Pattern matching succeeded */
                        goto tmp32_done;
                      }
                      }
                      goto tmp32_end;
                      tmp32_end: ;
                    }
                    goto goto_31;
                    tmp32_done:
                    (void)tmp33;
                    OMC_RESTORE_INTERNAL(mmc_jumper);
                    goto tmp32_done2;
                    goto_31:;
                    OMC_CATCH_INTERNAL(mmc_jumper);
                    if (++tmp33 < 2) {
                      goto tmp32_top;
                    }
                    goto goto_8;
                    tmp32_done2:;
                  }
                }
                ;
              }
              tmp49 = (modelica_boolean)_addAnnotationName;
              if(tmp49)
              {
                tmpMeta48 = mmc_mk_cons(_annName, mmc_mk_cons(_OMC_LIT112, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT65, MMC_REFSTRUCTLIT(mmc_nil)))));
                tmp50 = stringAppendList(tmpMeta48);
              }
              else
              {
                tmp50 = _str;
              }
              tmp7 = tmp50;
              goto tmp9_done;
            }
            case 2: {
              modelica_metatype tmpMeta51;
              modelica_metatype tmpMeta52;
              modelica_metatype tmpMeta53;
              modelica_metatype tmpMeta54;
              modelica_metatype tmpMeta55;
              modelica_metatype tmpMeta56;
              modelica_boolean tmp57;
              modelica_string tmp58;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,6) == 0) goto tmp9_end;
              tmpMeta51 = OMC_BOX_FIELD(tmp10_1, 4);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta51,1,1) == 0) goto tmp9_end;
              tmpMeta52 = OMC_BOX_FIELD(tmpMeta51, 2);
              tmpMeta53 = OMC_BOX_FIELD(tmp10_1, 5);
              if (!optionNone(tmpMeta53)) goto tmp9_end;
              tmpMeta54 = OMC_BOX_FIELD(tmp10_1, 7);
              _annName = tmpMeta52;
              _info = tmpMeta54;
              /* Pattern matching succeeded */
              _program = omc_NFInstanceAPI_mkTop(threadData, _absynProgram, omc_NFApi_scodeFor(threadData, _absynProgram), _annName ,&_top);

              _inst_cls = _top;

              tmpMeta55 = omc_mk_box2(4, &Absyn_Path_IDENT__desc, _annName);
              _anncls = omc_NFLookup_lookupClassName(threadData, tmpMeta55, _inst_cls, ((modelica_integer) 67108865), _OMC_LIT79, 0 /* false */, NULL);

              _inst_anncls = omc_NFInst_instantiate(threadData, _anncls, _OMC_LIT80, _OMC_LIT55, ((modelica_integer) 67108865), 0 /* false */);

              omc_NFInst_instExpressions(threadData, _inst_anncls, _inst_anncls, _OMC_LIT81, omc_NFConnectBreakTree_new(threadData), ((modelica_integer) 67108865), _OMC_LIT82);

              omc_NFInst_updateImplicitVariability(threadData, _inst_anncls, omc_Flags_isSet(threadData, _OMC_LIT85), ((modelica_integer) 67108865));

              _dae = omc_NFApi_frontEndBack(threadData, _inst_anncls, _annName, 0 /* false */);

              omc_string_store(&(_str), omc_DAEUtil_getVariableBindingsStr(threadData, omc_DAEUtil_daeElements(threadData, _dae)));
              tmp57 = (modelica_boolean)_addAnnotationName;
              if(tmp57)
              {
                tmpMeta56 = mmc_mk_cons(_annName, mmc_mk_cons(_OMC_LIT112, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT65, MMC_REFSTRUCTLIT(mmc_nil)))));
                tmp58 = stringAppendList(tmpMeta56);
              }
              else
              {
                tmp58 = _str;
              }
              tmp7 = tmp58;
              goto tmp9_done;
            }
            case 3: {
              modelica_metatype tmpMeta59;
              modelica_metatype tmpMeta60;
              modelica_metatype tmpMeta61;
              modelica_string tmp62;
              modelica_string tmp63;
              modelica_metatype tmpMeta64;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,6) == 0) goto tmp9_end;
              tmpMeta59 = OMC_BOX_FIELD(tmp10_1, 4);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,1,1) == 0) goto tmp9_end;
              tmpMeta60 = OMC_BOX_FIELD(tmpMeta59, 2);
              tmpMeta61 = OMC_BOX_FIELD(tmp10_1, 7);
              _annName = tmpMeta60;
              _info = tmpMeta61;
              /* Pattern matching succeeded */
              tmp62 = stringAppend(_OMC_LIT113,omc_Dump_unparseElementArgStr(threadData, _e));
              tmp63 = stringAppend(tmp62,_OMC_LIT65);
              omc_string_store(&(_str), tmp63);

              omc_string_store(&(_str), omc_Util_escapeQuotes(threadData, _str));
              tmpMeta64 = mmc_mk_cons(_annName, mmc_mk_cons(_OMC_LIT114, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT115, MMC_REFSTRUCTLIT(mmc_nil)))));
              tmp7 = stringAppendList(tmpMeta64);
              goto tmp9_done;
            }
            }
            goto tmp9_end;
            tmp9_end: ;
          }
          goto goto_8;
          tmp9_done:
          (void)tmp10;
          OMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp9_done2;
          goto_8:;
          OMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp10 < 4) {
            goto tmp9_top;
          }
          OMC_THROW_INTERNAL();
          tmp9_done2:;
        }
      }
      omc_string_store(&(_str), tmp7);

      tmpMeta65 = mmc_mk_cons(_str, _stringLst);
      _stringLst = tmpMeta65;
    }
  }

  omc_string_store(&(_outString), stringDelimitList(_stringLst, _OMC_LIT92));

  if(omc_Flags_isSet(threadData, _OMC_LIT68))
  {
    tmp67 = stringAppend(_OMC_LIT116,omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT56, 1 /* true */, 0 /* false */));
    tmp68 = stringAppend(tmp67,_OMC_LIT97);
    tmp69 = stringAppend(tmp68,stringDelimitList(omc_List_map(threadData, _el, boxvar_Dump_unparseElementArgStr), _OMC_LIT92));
    tmp70 = stringAppend(tmp69,_OMC_LIT65);
    omc_ExecStat_execStat(threadData, tmp70);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFApi_evaluateAnnotation__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation, modelica_metatype _addAnnotationName)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = omc_unbox_integer(_addAnnotationName);
  _outString = omc_NFApi_evaluateAnnotation__dispatch(threadData, _absynProgram, _classPath, _inAnnotation, tmp1);
  /* skip box _outString; String */
  return _outString;
}

DLLModelDirection
modelica_string omc_NFApi_evaluateAnnotation(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation)
{
  modelica_string _outString = NULL;
  modelica_boolean _b;
  modelica_boolean _s;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outString = _OMC_LIT77;
  // _b has no default value.
  // _s has no default value.
  _b = omc_FlagsUtil_set(threadData, _OMC_LIT61, 1 /* true */);

  _s = omc_FlagsUtil_set(threadData, _OMC_LIT71, 1 /* true */);

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
          omc_string_store(&(_outString), omc_NFApi_evaluateAnnotation__dispatch(threadData, _absynProgram, _classPath, _inAnnotation, 0 /* false */));

          omc_FlagsUtil_set(threadData, _OMC_LIT61, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT71, _s);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_FlagsUtil_set(threadData, _OMC_LIT61, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT71, _s);

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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

