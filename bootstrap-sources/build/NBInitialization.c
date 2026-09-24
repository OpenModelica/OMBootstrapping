#include "omc_simulation_settings.h"
#include "NBInitialization.h"
#define _OMC_LIT0_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,7,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "$getPart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,8,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "NBInitialization.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,19,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,0.0);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1271)),MMC_IMMEDIATE(MMC_TAGFIXNUM(12)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1271)),MMC_IMMEDIATE(MMC_TAGFIXNUM(30)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT6,0.0);
#define _OMC_LIT6 MMC_REFREALLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT8,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,11) {&NBEquation_Equation_DUMMY__EQUATION__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "homotopy"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,8,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "allowNonStandardModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,24,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,9) {&Flags_FlagData_STRING__LIST__FLAG__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "nonStdMultipleExternalDeclarations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,34,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Allow several external declarations in functions.\nSee: https://specification.modelica.org/maint/3.5/functions.html#function-as-a-specialized-class"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,146,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,0) {_OMC_LIT15,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "nonStdEnumerationAsIntegers"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,27,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Allow enumeration as integer without casting via Integer(Enum).\nSee: https://specification.modelica.org/maint/3.5/class-predefined-types-and-declarations.html#type-conversion-of-enumeration-values-to-string-or-integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,217,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,0) {_OMC_LIT18,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "nonStdIntegersAsEnumeration"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,27,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Allow integer as enumeration without casting via Enum(Integer).\nSee: https://specification.modelica.org/maint/3.5/class-predefined-types-and-declarations.html#type-conversion-of-integer-to-enumeration-values"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,207,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,0) {_OMC_LIT21,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "nonStdDifferentCaseFileVsClassName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,34,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Allow directory or file with different case in the name than the contained class name.\nSee: https://specification.modelica.org/maint/3.5/packages.html#mapping-package-class-structures-to-a-hierarchical-file-system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,213,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,0) {_OMC_LIT24,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "nonStdTopLevelOuter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,19,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Allow top level outer.\nSee: https://specification.modelica.org/maint/3.6/scoping-name-lookup-and-flattening.html#S4.p1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,118,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,0) {_OMC_LIT27,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "protectedAccess"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,15,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Allow access of protected elements"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,34,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,0) {_OMC_LIT30,_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "reinitInAlgorithms"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,18,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Allow reinit in algorithm sections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,34,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,0) {_OMC_LIT33,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "unbalancedModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,15,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "Allow models to be locally unbalanced and to have unbalanced connectors"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,71,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,0) {_OMC_LIT36,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "implicitParameterStartAttribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,31,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Allow fixed parameters with no binding or start attribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,57,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,0) {_OMC_LIT39,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "initialSimplified"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,17,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Allow use of experimental operator `initialSimplified()`"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,56,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,0) {_OMC_LIT42,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "illegalConditionalContext"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,25,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Allow use of components with false conditions in illegal contexts"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,65,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,0) {_OMC_LIT45,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT47,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT44,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,1) {_OMC_LIT41,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,1) {_OMC_LIT38,_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,1) {_OMC_LIT35,_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,1) {_OMC_LIT32,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,1) {_OMC_LIT29,_OMC_LIT53}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,1) {_OMC_LIT26,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,1) {_OMC_LIT23,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,1) {_OMC_LIT20,_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,1) {_OMC_LIT17,_OMC_LIT57}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,1,1) {_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "Flags to allow non-standard Modelica."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,37,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(141)),_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT13,_OMC_LIT14,_OMC_LIT60,_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "PRE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,3,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "SRT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,3,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT67_6,0.0);
#define _OMC_LIT67_6 MMC_REFREALLIT(_OMC_LIT_STRUCT67_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(671)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(671)),MMC_IMMEDIATE(MMC_TAGFIXNUM(67)),_OMC_LIT67_6}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT68_6,0.0);
#define _OMC_LIT68_6 MMC_REFREALLIT(_OMC_LIT_STRUCT68_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(572)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(572)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT68_6}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT69_6,0.0);
#define _OMC_LIT69_6 MMC_REFREALLIT(_OMC_LIT_STRUCT69_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(591)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(591)),MMC_IMMEDIATE(MMC_TAGFIXNUM(142)),_OMC_LIT69_6}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT70_6,0.0);
#define _OMC_LIT70_6 MMC_REFREALLIT(_OMC_LIT_STRUCT70_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(527)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(528)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT70_6}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT71_6,0.0);
#define _OMC_LIT71_6 MMC_REFREALLIT(_OMC_LIT_STRUCT71_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(341)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(341)),MMC_IMMEDIATE(MMC_TAGFIXNUM(59)),_OMC_LIT71_6}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,17,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT72,_OMC_LIT73,_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "NBInitialization.createWhenReplacementEquation could not replace when-replacement for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,86,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data " because it has no pre-variable."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,32,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,1,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "Created When Replacement Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,36,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,2,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,1,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,2,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "initialization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,14,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "Shows additional information from the initialization process."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,61,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT83,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "Created "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,8,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data " Start Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,18,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "debugFollowEquations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,20,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "Takes a list of equation names and prints the corresponding equations after each stage of the backend process."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,110,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(153)),_OMC_LIT88,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT13,_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "State"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,5,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "Algebraic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,9,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "Discrete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,8,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "Discrete State"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,14,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "Clocked State"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,13,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT96_6,0.0);
#define _OMC_LIT96_6 MMC_REFREALLIT(_OMC_LIT_STRUCT96_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(141)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(141)),MMC_IMMEDIATE(MMC_TAGFIXNUM(221)),_OMC_LIT96_6}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "Created Secondary Parameter Binding Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,47,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "Created Primary Parameter Binding Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,45,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "dumpBindings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,12,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "Dumps information about the equations created from bindings."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,60,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(46)),_OMC_LIT99,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT100}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "NBInitialization.main failed to create initial partition!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,57,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,2,1) {_OMC_LIT102,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Simplify"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,8,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,1,3) {&DAE_InlineType_NORM__INLINE__desc,}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,1,4) {&DAE_InlineType_BUILTIN__EARLY__INLINE__desc,}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,1,5) {&DAE_InlineType_EARLY__INLINE__desc,}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,1,6) {&DAE_InlineType_DEFAULT__INLINE__desc,}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,2,1) {_OMC_LIT108,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,2,1) {_OMC_LIT107,_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,2,1) {_OMC_LIT106,_OMC_LIT110}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT112,2,1) {_OMC_LIT105,_OMC_LIT111}};
#define _OMC_LIT112 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "Inline"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,6,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "Partitioning"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,12,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "Cleanup"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,7,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "Causalize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,9,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "Tearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,7,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "Initialization Backend Clocks:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,30,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "dumpBackendClocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,17,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "Dumps times for each backend module (only new backend)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,55,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(187)),_OMC_LIT119,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT120}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "NBInitialization.main failed to apply modules!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,46,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT123,2,1) {_OMC_LIT122,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT123 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT123)
#include "util/modelica.h"

#include "NBInitialization_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _kind, modelica_metatype _simplify);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _kind, modelica_metatype _simplify);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInitialization_cleanupInitialCall_cleanupInitialCallExp,2,0) {(void*) boxptr_NBInitialization_cleanupInitialCall_cleanupInitialCallExp,0}};
#define boxvar_NBInitialization_cleanupInitialCall_cleanupInitialCallExp MMC_REFSTRUCTLIT(boxvar_lit_NBInitialization_cleanupInitialCall_cleanupInitialCallExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInitialization_createIteratedStartCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_integer _num_dim, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_subscripts, modelica_metatype *out_frames, modelica_metatype *out_iterator);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInitialization_createIteratedStartCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype _num_dim, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_subscripts, modelica_metatype *out_frames, modelica_metatype *out_iterator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInitialization_createIteratedStartCref,2,0) {(void*) boxptr_NBInitialization_createIteratedStartCref,0}};
#define boxvar_NBInitialization_createIteratedStartCref MMC_REFSTRUCTLIT(boxvar_lit_NBInitialization_createIteratedStartCref)

DLLModelDirection
modelica_metatype omc_NBInitialization_collectAlgorithmOutputs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _outputs)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eqn;
    {
      modelica_metatype _alg = NULL;
      modelica_metatype _out_crefs = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _alg has no default value.
      // _out_crefs has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,5) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 3);
          
          _alg = tmpMeta5;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar71;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar70;
            modelica_integer tmp9;
            modelica_metatype _o_loopVar = 0;
            modelica_metatype _o;
            _o_loopVar = (OMC_BOX_FIELD(_alg, 4));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar71 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar71;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_o_loopVar)) {
                _o = MMC_CAR(_o_loopVar);
                _o_loopVar = MMC_CDR(_o_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar70 = omc_NBVariable_getRecordChildrenCrefOrSelf(threadData, _o);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar70,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar71;
          }
          _out_crefs = omc_List_flatten(threadData, tmpMeta6);

          {
            modelica_metatype _cr;
            for (tmpMeta10 = _out_crefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _cr = MMC_CAR(tmpMeta10);
              omc_UnorderedSet_add(threadData, _cr, _outputs);
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqn;
  return omc_ret_;
}

DLLModelDirection
void omc_NBInitialization_collectNonInitial(threadData_t *threadData, modelica_metatype _condition, modelica_metatype _condition_set)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _condition;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, _condition, _condition_set);
          goto tmp2_done;
        }
        case 11: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_integer tmp7;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _elem;
            for (tmpMeta4 = (OMC_BOX_FIELD(_condition, 3)), tmp7 = arrayLength(tmpMeta4), tmp6 = 1; tmp6 <= tmp7; tmp6++)
            {
              _elem = arrayGet(tmpMeta4,tmp6);
              omc_NBInitialization_collectNonInitial(threadData, _elem, _condition_set);
            }
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
  return;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_isInitialCall(threadData_t *threadData, modelica_metatype _condition)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _condition;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFCall_isNamed(threadData, (OMC_BOX_FIELD(_condition, 2)), _OMC_LIT0);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,3) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 3);
          tmp8 = omc_unbox_integer(tmpMeta7);
          if (28 != tmp8) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NBInitialization_isInitialCall(threadData, (OMC_BOX_FIELD(_condition, 2))) || omc_NBInitialization_isInitialCall(threadData, (OMC_BOX_FIELD(_condition, 4))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_Array_any(threadData, (OMC_BOX_FIELD(_condition, 3)), boxvar_NBInitialization_isInitialCall);
          goto tmp3_done;
        }
        case 3: {
          
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
modelica_metatype boxptr_NBInitialization_isInitialCall(threadData_t *threadData, modelica_metatype _condition)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_isInitialCall(threadData, _condition);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_replaceClockedFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (OMC_BOX_FIELD(_call, 2))), _OMC_LIT1, 1 /* true */, 0 /* false */), _OMC_LIT2))) goto tmp3_end;
          tmpMeta1 = omc_NFExpression_makeZero(threadData, omc_NFExpression_typeOf(threadData, _exp));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_replaceClockedFunctionsEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  omc_Pointer_update(threadData, _eqn, omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, _eqn), boxvar_NBInitialization_replaceClockedFunctions, mmc_mk_none(), boxvar_NFExpression_map));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqn;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_findPreVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _pre_set)
{
  modelica_metatype _exp = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isPrevious(threadData, omc_NBVariable_getVarPointer(threadData, (OMC_BOX_FIELD(_exp, 3)), _OMC_LIT4))) goto tmp2_end;
          omc_UnorderedSet_add(threadData, (OMC_BOX_FIELD(_exp, 3)), _pre_set);
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
  omc_ret_ = _exp;
  return omc_ret_;
}

static modelica_metatype closure0_NBInitialization_findPreVars(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype pre_set = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_findPreVars(thData, $in_exp, pre_set);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_removeConditionEquation(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _condition_set, modelica_metatype _tail_stmts_ptr)
{
  modelica_metatype _out_stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _out_stmts = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _stmt;
    {
      modelica_metatype _pre_set = NULL;
      modelica_metatype _post_cref = NULL;
      modelica_metatype _tail_stmts = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _pre_set has no default value.
      // _post_cref has no default value.
      // _tail_stmts has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,4) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_UnorderedSet_contains(threadData, (OMC_BOX_FIELD(_stmt, 2)), _condition_set)) goto tmp4_end;
          _pre_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

          tmpMeta7 = omc_mk_box1(0, _pre_set);
          omc_NFExpression_map(threadData, (OMC_BOX_FIELD(_stmt, 3)), (modelica_fnptr) omc_mk_box2(0,closure0_NBInitialization_findPreVars,tmpMeta7));

          if(omc_UnorderedSet_isEmpty(threadData, _pre_set))
          {
            tmpMeta8 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
            _out_stmts = tmpMeta8;
          }
          else
          {
            tmpMeta9 = mmc_mk_cons(_stmt, omc_Pointer_access(threadData, _tail_stmts_ptr));
            _tail_stmts = tmpMeta9;

            {
              modelica_metatype _pre_cref;
              for (tmpMeta10 = omc_UnorderedSet_toList(threadData, _pre_set); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
              {
                _pre_cref = MMC_CAR(tmpMeta10);
                _post_cref = omc_NBVariable_getPartnerCref(threadData, _pre_cref, boxvar_NBVariable_getVarPre, 0 /* false */);

                tmpMeta12 = omc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, omc_NFExpression_fromCref(threadData, _pre_cref, 0 /* false */), omc_NFExpression_fromCref(threadData, _post_cref, 0 /* false */), omc_NFComponentRef_getSubscriptedType(threadData, _pre_cref, 0 /* false */), _OMC_LIT9);
                tmpMeta11 = mmc_mk_cons(tmpMeta12, _tail_stmts);
                _tail_stmts = tmpMeta11;
              }
            }

            omc_Pointer_update(threadData, _tail_stmts_ptr, _tail_stmts);
          }
          tmpMeta2 = _out_stmts;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta2 = tmpMeta14;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      goto_3:;
      OMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _out_stmts = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _out_stmts;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_removeWhenEquationStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _condition_set)
{
  modelica_metatype _out_stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _out_stmts = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _stmt;
    {
      modelica_metatype _cond = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _stmts_acc = NULL;
      modelica_metatype tmpMeta4;
      int tmp6;
      // _cond has no default value.
      // _stmts has no default value.
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _stmts_acc = tmpMeta4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp6_1))) {
        case 7: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _tpl;
            for (tmpMeta7 = (OMC_BOX_FIELD(_stmt, 2)); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _tpl = MMC_CAR(tmpMeta7);
              /* Pattern-matching assignment */
              tmpMeta8 = _tpl;
              tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
              tmpMeta10 = OMC_BOX_FIELD(tmpMeta8, 2);
              _cond = tmpMeta9;
              _stmts = tmpMeta10;

              if(omc_NBInitialization_isInitialCall(threadData, _cond))
              {
                _out_stmts = _stmts;
              }

              omc_NBInitialization_collectNonInitial(threadData, _cond, _condition_set);
            }
          }
          tmpMeta2 = _out_stmts;
          goto tmp5_done;
        }
        case 5: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _body_stmt;
            for (tmpMeta12 = listReverse((OMC_BOX_FIELD(_stmt, 4))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _body_stmt = MMC_CAR(tmpMeta12);
              tmpMeta13 = mmc_mk_cons(omc_NBInitialization_removeWhenEquationStatement(threadData, _body_stmt, _condition_set), _stmts_acc);
              _stmts_acc = tmpMeta13;
            }
          }

          _stmts = omc_List_flatten(threadData, _stmts_acc);

          if((!listEmpty(_stmts)))
          {
            tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_stmt), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[4] = _stmts;
            _stmt = tmpMeta15;

            tmpMeta16 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
            _out_stmts = tmpMeta16;
          }
          else
          {
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            _out_stmts = tmpMeta17;
          }
          tmpMeta2 = _out_stmts;
          goto tmp5_done;
        }
        default:
        tmp5_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta2 = tmpMeta18;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_3;
      goto_3:;
      OMC_THROW_INTERNAL();
      goto tmp5_done;
      tmp5_done:;
    }
  }
  _out_stmts = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _out_stmts;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_removeWhenEquationAlgorithmBody(threadData_t *threadData, modelica_metatype _in_stmts)
{
  modelica_metatype _out_stmts = NULL;
  modelica_metatype _condition_set = NULL;
  modelica_metatype _tail_stmts_ptr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_stmts has no default value.
  _condition_set = omc_UnorderedSet_new(threadData, boxvar_NFExpression_hash, boxvar_NFExpression_isEqual, ((modelica_integer) 13));
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tail_stmts_ptr = omc_Pointer_create(threadData, tmpMeta1);
  {
    modelica_metatype __omcQ_24tmpVar73;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar72;
    modelica_integer tmp5;
    modelica_metatype _stmt_loopVar = 0;
    modelica_metatype _stmt;
    _stmt_loopVar = _in_stmts;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar73 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar73;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_stmt_loopVar)) {
        _stmt = MMC_CAR(_stmt_loopVar);
        _stmt_loopVar = MMC_CDR(_stmt_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar72 = omc_NBInitialization_removeWhenEquationStatement(threadData, _stmt, _condition_set);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar72,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar73;
  }
  _out_stmts = omc_List_flatten(threadData, tmpMeta2);

  {
    modelica_metatype __omcQ_24tmpVar75;
    modelica_metatype* tmp7;
    modelica_metatype tmpMeta8;
    modelica_metatype __omcQ_24tmpVar74;
    modelica_integer tmp9;
    modelica_metatype _stmt_loopVar = 0;
    modelica_metatype _stmt;
    _stmt_loopVar = _out_stmts;
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar75 = tmpMeta8; /* defaultValue */
    tmp7 = &__omcQ_24tmpVar75;
    while(1) {
      tmp9 = 1;
      if (!listEmpty(_stmt_loopVar)) {
        _stmt = MMC_CAR(_stmt_loopVar);
        _stmt_loopVar = MMC_CDR(_stmt_loopVar);
        tmp9--;
      }
      if (tmp9 == 0) {
        __omcQ_24tmpVar74 = omc_NBInitialization_removeConditionEquation(threadData, _stmt, _condition_set, _tail_stmts_ptr);
        *tmp7 = mmc_mk_cons(__omcQ_24tmpVar74,0);
        tmp7 = &MMC_CDR(*tmp7);
      } else if (tmp9 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp7 = mmc_mk_nil();
    tmpMeta6 = __omcQ_24tmpVar75;
  }
  _out_stmts = omc_List_flatten(threadData, tmpMeta6);

  _out_stmts = listAppend(_out_stmts, omc_Pointer_access(threadData, _tail_stmts_ptr));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _out_stmts;
  return omc_ret_;
}

static modelica_metatype closure1_NBInitialization_removeWhenEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype iter = OMC_BOX_FIELD(closure, 1);
  modelica_metatype cref_map = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBInitialization_removeWhenEquation(thData, $in_eqn, iter, cref_map);
}static modelica_metatype closure2_NBInitialization_removeWhenEquationIfBody(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_body)
{
  modelica_metatype iter = OMC_BOX_FIELD(closure, 1);
  modelica_metatype cref_map = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBInitialization_removeWhenEquationIfBody(thData, $in_body, iter, cref_map);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_removeWhenEquationIfBody(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody, modelica_metatype _iter, modelica_metatype _cref_map)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _body = __omcQ_24in_5Fbody;
  {
    modelica_metatype __omcQ_24tmpVar77;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar76;
    modelica_integer tmp5;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = (OMC_BOX_FIELD(_body, 3));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar77 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar77;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = omc_mk_box2(0, _iter, _cref_map);
        __omcQ_24tmpVar76 = omc_Pointer_apply(threadData, _e, (modelica_fnptr) omc_mk_box2(0,closure1_NBInitialization_removeWhenEquation,tmpMeta4));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar76,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar77;
  }
  __omcQ_24mrfa_5F0 = tmpMeta1;

  tmpMeta6 = omc_mk_box2(0, _iter, _cref_map);
  __omcQ_24mrfa_5F1 = omc_Util_applyOption(threadData, (OMC_BOX_FIELD(_body, 4)), (modelica_fnptr) omc_mk_box2(0,closure2_NBInitialization_removeWhenEquationIfBody,tmpMeta6));

  tmpMeta7 = omc_mk_box4(3, &NBEquation_IfEquationBody_IF__EQUATION__BODY__desc, (OMC_BOX_FIELD(_body, 2)), __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1);
  _body = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _body;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_removeWhenEquationBody(threadData_t *threadData, modelica_metatype _body_opt)
{
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmts has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _body_opt;
    {
      modelica_metatype _body = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _body has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          _body = tmpMeta6;
          /* Pattern matching succeeded */
          if(omc_NBInitialization_isInitialCall(threadData, (OMC_BOX_FIELD(_body, 2))))
          {
            {
              modelica_metatype __omcQ_24tmpVar79;
              modelica_metatype* tmp8;
              modelica_metatype tmpMeta9;
              modelica_metatype __omcQ_24tmpVar78;
              modelica_integer tmp10;
              modelica_metatype _st_loopVar = 0;
              modelica_metatype _st;
              _st_loopVar = (OMC_BOX_FIELD(_body, 3));
              tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar79 = tmpMeta9; /* defaultValue */
              tmp8 = &__omcQ_24tmpVar79;
              while(1) {
                tmp10 = 1;
                if (!listEmpty(_st_loopVar)) {
                  _st = MMC_CAR(_st_loopVar);
                  _st_loopVar = MMC_CDR(_st_loopVar);
                  tmp10--;
                }
                if (tmp10 == 0) {
                  __omcQ_24tmpVar78 = omc_NBEquation_WhenStatement_toStatement(threadData, _st);
                  *tmp8 = mmc_mk_cons(__omcQ_24tmpVar78,0);
                  tmp8 = &MMC_CDR(*tmp8);
                } else if (tmp10 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp8 = mmc_mk_nil();
              tmpMeta7 = __omcQ_24tmpVar79;
            }
            _stmts = tmpMeta7;
          }
          else
          {
            _stmts = omc_NBInitialization_removeWhenEquationBody(threadData, (OMC_BOX_FIELD(_body, 4)));
          }
          tmpMeta1 = _stmts;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta11;
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
  _stmts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _stmts;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_removeWhenEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _cref_map)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _new_eqn = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _lhs_crefs = NULL;
      modelica_metatype _alg = NULL;
      int tmp4;
      // _new_eqn has no default value.
      // _stmts has no default value.
      // _lhs_crefs has no default value.
      // _alg has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 8: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar81;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar80;
            modelica_integer tmp9;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (OMC_BOX_FIELD(_eqn, 4));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar81 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar81;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar80 = omc_NBInitialization_removeWhenEquation(threadData, _b, (OMC_BOX_FIELD(_eqn, 3)), _cref_map);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar80,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar81;
          }
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_eqn), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = tmpMeta6;
          _eqn = tmpMeta5;
          tmpMeta1 = (omc_List_all(threadData, (OMC_BOX_FIELD(_eqn, 4)), boxvar_NBEquation_Equation_isDummy)?_OMC_LIT10:_eqn);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _stmts = omc_NBInitialization_removeWhenEquationBody(threadData, mmc_mk_some((OMC_BOX_FIELD(_eqn, 3))));

          if((!listEmpty(_stmts)))
          {
            _new_eqn = omc_Pointer_access(threadData, omc_NBEquation_Equation_makeAlgorithm(threadData, _stmts, 1 /* true */));

            _new_eqn = omc_NBEquation_Equation_setResidualVar(threadData, _new_eqn, omc_NBEquation_Equation_getResidualVar(threadData, omc_Pointer_create(threadData, _eqn)));
          }
          else
          {
            _lhs_crefs = omc_NBEquation_WhenEquationBody_getAllAssigned(threadData, (OMC_BOX_FIELD(_eqn, 3)));

            {
              modelica_metatype _cref;
              for (tmpMeta10 = _lhs_crefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
              {
                _cref = MMC_CAR(tmpMeta10);
                omc_UnorderedMap_add(threadData, _cref, _iter, _cref_map);
              }
            }

            _new_eqn = _OMC_LIT10;
          }
          tmpMeta1 = _new_eqn;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_eqn), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = omc_NBInitialization_removeWhenEquationIfBody(threadData, (OMC_BOX_FIELD(_eqn, 3)), _iter, _cref_map);
          _eqn = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_eqn), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_mk_integer(omc_NBEquation_IfEquationBody_size(threadData, (OMC_BOX_FIELD(_eqn, 3)), 0 /* false */));
          _eqn = tmpMeta13;
          tmpMeta1 = ((omc_unbox_integer((OMC_BOX_FIELD(_eqn, 2))) > ((modelica_integer) 0))?_eqn:_OMC_LIT10);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _alg = tmpMeta14;
          /* Pattern matching succeeded */
          _stmts = omc_NBInitialization_removeWhenEquationAlgorithmBody(threadData, (OMC_BOX_FIELD(_alg, 2)));

          if((!listEmpty(_stmts)))
          {
            tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_alg), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = _stmts;
            _alg = tmpMeta15;

            tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_eqn), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[3] = omc_NFAlgorithm_setInputsOutputs(threadData, _alg);
            _eqn = tmpMeta16;

            {
              modelica_integer __omcQ_24tmpVar83;
              modelica_integer __omcQ_24tmpVar82;
              modelica_integer tmp19;
              modelica_metatype _out_loopVar = 0;
              modelica_metatype _out;
              _out_loopVar = (OMC_BOX_FIELD((OMC_BOX_FIELD(_eqn, 3)), 4));
              __omcQ_24tmpVar83 = ((modelica_integer) 0); /* defaultValue */
              while(1) {
                tmp19 = 1;
                if (!listEmpty(_out_loopVar)) {
                  _out = MMC_CAR(_out_loopVar);
                  _out_loopVar = MMC_CDR(_out_loopVar);
                  tmp19--;
                }
                if (tmp19 == 0) {
                  __omcQ_24tmpVar82 = omc_NFComponentRef_size(threadData, _out, 1 /* true */, 0 /* false */);
                  __omcQ_24tmpVar83 = __omcQ_24tmpVar83 + __omcQ_24tmpVar82;
                } else if (tmp19 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp18 = __omcQ_24tmpVar83;
            }
            tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_eqn), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = omc_mk_integer(tmp18);
            _eqn = tmpMeta17;

            _new_eqn = _eqn;
          }
          else
          {
            _new_eqn = _OMC_LIT10;
          }
          tmpMeta1 = _new_eqn;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _eqn;
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
  _eqn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqn;
  return omc_ret_;
}

static modelica_metatype closure3_NBStrongComponent_setHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp)
{
  modelica_metatype homotopy = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBStrongComponent_setHomotopy(thData, $in_comp, homotopy);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_minimizeHomotopySystem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bdae;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(isSome((OMC_BOX_FIELD(_bdae, 8))))
          {
            {
              modelica_metatype __omcQ_24tmpVar85;
              modelica_metatype* tmp8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_metatype __omcQ_24tmpVar84;
              modelica_integer tmp11;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = (OMC_BOX_FIELD(_bdae, 7));
              tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar85 = tmpMeta9; /* defaultValue */
              tmp8 = &__omcQ_24tmpVar85;
              while(1) {
                tmp11 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp11--;
                }
                if (tmp11 == 0) {
                  tmpMeta10 = omc_mk_box1(0, omc_mk_boolean(1 /* true */));
                  __omcQ_24tmpVar84 = omc_NBPartition_Partition_mapStrongComponents(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure3_NBStrongComponent_setHomotopy,tmpMeta10));
                  *tmp8 = mmc_mk_cons(__omcQ_24tmpVar84,0);
                  tmp8 = &MMC_CDR(*tmp8);
                } else if (tmp11 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp8 = mmc_mk_nil();
              tmpMeta7 = __omcQ_24tmpVar85;
            }
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(16));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[7] = tmpMeta7;
            _bdae = tmpMeta6;
          }
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _bdae;
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _bdae;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_containsLambda0(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _b)
{
  modelica_metatype _exp = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  if(((!omc_unbox_boolean(omc_Pointer_access(threadData, _b))) && (omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT11) || (omc_Flags_isConfigFlagSet(threadData, _OMC_LIT62, _OMC_LIT42) && omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT42)))))
  {
    omc_Pointer_update(threadData, _b, omc_mk_boolean(1 /* true */));
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_containsHomotopyCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _b)
{
  modelica_metatype _exp = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  if(((!omc_unbox_boolean(omc_Pointer_access(threadData, _b))) && omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT11)))
  {
    omc_Pointer_update(threadData, _b, omc_mk_boolean(1 /* true */));
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_cleanupHomotopy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _kind)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFCall_isNamed(threadData, (OMC_BOX_FIELD(_exp, 2)), _OMC_LIT11)) goto tmp3_end;
          { /* match expression */
            modelica_integer tmp9_1;
            tmp9_1 = (modelica_integer)_kind;
            {
              int tmp9;
              {
                switch (MMC_SWITCH_CAST(tmp9_1)) {
                case 6: {
                  if (6 != tmp9_1) goto tmp8_end;
                  /* Pattern matching succeeded */
                  tmpMeta6 = listGet(omc_NFCall_arguments(threadData, (OMC_BOX_FIELD(_exp, 2))), ((modelica_integer) 2));
                  goto tmp8_done;
                }
                case 5: {
                  if (5 != tmp9_1) goto tmp8_end;
                  /* Pattern matching succeeded */
                  tmpMeta6 = _exp;
                  goto tmp8_done;
                }
                default:
                tmp8_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmpMeta6 = listHead(omc_NFCall_arguments(threadData, (OMC_BOX_FIELD(_exp, 2))));
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
          }tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}
modelica_metatype boxptr_NBInitialization_cleanupHomotopy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _exp = omc_NBInitialization_cleanupHomotopy(threadData, __omcQ_24in_5Fexp, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _kind, modelica_metatype _simplify)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  if(omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT0))
  {
    tmpMeta1 = omc_mk_box2(6, &NFExpression_BOOLEAN__desc, omc_mk_boolean((((modelica_integer)_kind == 5) || ((modelica_integer)_kind == 6))));
    _exp = tmpMeta1;

    omc_Pointer_update(threadData, _simplify, omc_mk_boolean(1 /* true */));
  }
  else
  {
    if((omc_Flags_isConfigFlagSet(threadData, _OMC_LIT62, _OMC_LIT42) && omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT42)))
    {
      tmpMeta2 = omc_mk_box2(6, &NFExpression_BOOLEAN__desc, omc_mk_boolean(((modelica_integer)_kind == 6)));
      _exp = tmpMeta2;

      omc_Pointer_update(threadData, _simplify, omc_mk_boolean(1 /* true */));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _kind, modelica_metatype _simplify)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _exp = omc_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData, __omcQ_24in_5Fexp, tmp1, _simplify);
  /* skip box _exp; NFExpression */
  return _exp;
}

static modelica_metatype closure4_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  modelica_metatype simplify = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(thData, $in_exp, kind, simplify);
}static modelica_metatype closure5_NFSimplifyExp_simplifyDump(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype includeScope = OMC_BOX_FIELD(closure, 1);
  modelica_string name = OMC_BOX_FIELD(closure, 2);
  modelica_string indent = OMC_BOX_FIELD(closure, 3);
  return boxptr_NFSimplifyExp_simplifyDump(thData, exp, includeScope, name, indent);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_cleanupInitialCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_integer _kind)
{
  modelica_metatype _eq = NULL;
  modelica_metatype _simplify = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  _simplify = omc_Pointer_create(threadData, omc_mk_boolean(0 /* false */));
  tmpMeta1 = omc_mk_box2(0, omc_mk_integer((modelica_integer)_kind), _simplify);
  _eq = omc_NBEquation_Equation_map(threadData, _eq, (modelica_fnptr) omc_mk_box2(0,closure4_NBInitialization_cleanupInitialCall_cleanupInitialCallExp,tmpMeta1), mmc_mk_none(), boxvar_NFExpression_map);

  if(omc_unbox_boolean(omc_Pointer_access(threadData, _simplify)))
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta4 = omc_mk_box3(0, omc_mk_boolean(1 /* true */), _OMC_LIT5, _OMC_LIT5);
    _eq = omc_NBEquation_Equation_simplify(threadData, _eq, _OMC_LIT5, _OMC_LIT5, omc_Pointer_create(threadData, tmpMeta2), omc_Pointer_create(threadData, tmpMeta3), (modelica_fnptr) omc_mk_box2(0,closure5_NFSimplifyExp_simplifyDump,tmpMeta4));
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eq;
  return omc_ret_;
}
modelica_metatype boxptr_NBInitialization_cleanupInitialCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _eq = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _eq = omc_NBInitialization_cleanupInitialCall(threadData, __omcQ_24in_5Feq, tmp1);
  /* skip box _eq; NBEquation.Equation */
  return _eq;
}

static modelica_metatype closure6_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure7_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure8_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure9_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure10_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure11_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure12_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure13_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure14_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure15_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure16_NBInitialization_containsLambda0(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype b = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_containsLambda0(thData, $in_exp, b);
}static modelica_metatype closure17_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure18_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure19_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_cleanup(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype _hasHom = NULL;
  modelica_metatype _init_0 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  _hasHom = omc_Pointer_create(threadData, omc_mk_boolean(0 /* false */));
  // _init_0 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bdae;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype tmpMeta10;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp11;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 2));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar7;
            while(1) {
              tmp11 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp11--;
              }
              if (tmp11 == 0) {
                tmpMeta10 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar6 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure6_NBInitialization_cleanupInitialCall,tmpMeta10));
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar7;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = tmpMeta7;
          _bdae = tmpMeta6;

          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp17;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 3));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar9;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                tmpMeta16 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar8 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure7_NBInitialization_cleanupInitialCall,tmpMeta16));
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar9;
          }
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = tmpMeta13;
          _bdae = tmpMeta12;

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp20;
            modelica_metatype tmpMeta21;
            modelica_metatype tmpMeta22;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp23;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 4));
            tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta21; /* defaultValue */
            tmp20 = &__omcQ_24tmpVar11;
            while(1) {
              tmp23 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp23--;
              }
              if (tmp23 == 0) {
                tmpMeta22 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar10 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure8_NBInitialization_cleanupInitialCall,tmpMeta22));
                *tmp20 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp20 = &MMC_CDR(*tmp20);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp20 = mmc_mk_nil();
            tmpMeta19 = __omcQ_24tmpVar11;
          }
          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[4] = tmpMeta19;
          _bdae = tmpMeta18;

          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp26;
            modelica_metatype tmpMeta27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp29;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 5));
            tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta27; /* defaultValue */
            tmp26 = &__omcQ_24tmpVar13;
            while(1) {
              tmp29 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp29--;
              }
              if (tmp29 == 0) {
                tmpMeta28 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar12 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure9_NBInitialization_cleanupInitialCall,tmpMeta28));
                *tmp26 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp26 = &MMC_CDR(*tmp26);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp26 = mmc_mk_nil();
            tmpMeta25 = __omcQ_24tmpVar13;
          }
          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[5] = tmpMeta25;
          _bdae = tmpMeta24;

          if(isSome((OMC_BOX_FIELD(_bdae, 9))))
          {
            {
              modelica_metatype __omcQ_24tmpVar15;
              modelica_metatype* tmp32;
              modelica_metatype tmpMeta33;
              modelica_metatype tmpMeta34;
              modelica_metatype __omcQ_24tmpVar14;
              modelica_integer tmp35;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = omc_Util_getOption(threadData, (OMC_BOX_FIELD(_bdae, 9)));
              tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar15 = tmpMeta33; /* defaultValue */
              tmp32 = &__omcQ_24tmpVar15;
              while(1) {
                tmp35 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp35--;
                }
                if (tmp35 == 0) {
                  tmpMeta34 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                  __omcQ_24tmpVar14 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure10_NBInitialization_cleanupInitialCall,tmpMeta34));
                  *tmp32 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                  tmp32 = &MMC_CDR(*tmp32);
                } else if (tmp35 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp32 = mmc_mk_nil();
              tmpMeta31 = __omcQ_24tmpVar15;
            }
            tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(16));
            memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[9] = mmc_mk_some(tmpMeta31);
            _bdae = tmpMeta30;
          }

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp38;
            modelica_metatype tmpMeta39;
            modelica_metatype tmpMeta40;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp41;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 2));
            tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta39; /* defaultValue */
            tmp38 = &__omcQ_24tmpVar17;
            while(1) {
              tmp41 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp41--;
              }
              if (tmp41 == 0) {
                tmpMeta40 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar16 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure11_NBInitialization_cleanupHomotopy,tmpMeta40));
                *tmp38 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp38 = &MMC_CDR(*tmp38);
              } else if (tmp41 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp38 = mmc_mk_nil();
            tmpMeta37 = __omcQ_24tmpVar17;
          }
          tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[2] = tmpMeta37;
          _bdae = tmpMeta36;

          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp44;
            modelica_metatype tmpMeta45;
            modelica_metatype tmpMeta46;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp47;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 3));
            tmpMeta45 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta45; /* defaultValue */
            tmp44 = &__omcQ_24tmpVar19;
            while(1) {
              tmp47 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp47--;
              }
              if (tmp47 == 0) {
                tmpMeta46 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar18 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure12_NBInitialization_cleanupHomotopy,tmpMeta46));
                *tmp44 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp44 = &MMC_CDR(*tmp44);
              } else if (tmp47 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp44 = mmc_mk_nil();
            tmpMeta43 = __omcQ_24tmpVar19;
          }
          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[3] = tmpMeta43;
          _bdae = tmpMeta42;

          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp50;
            modelica_metatype tmpMeta51;
            modelica_metatype tmpMeta52;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp53;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 4));
            tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta51; /* defaultValue */
            tmp50 = &__omcQ_24tmpVar21;
            while(1) {
              tmp53 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp53--;
              }
              if (tmp53 == 0) {
                tmpMeta52 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar20 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure13_NBInitialization_cleanupHomotopy,tmpMeta52));
                *tmp50 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp50 = &MMC_CDR(*tmp50);
              } else if (tmp53 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp50 = mmc_mk_nil();
            tmpMeta49 = __omcQ_24tmpVar21;
          }
          tmpMeta48 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta48), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta48))[4] = tmpMeta49;
          _bdae = tmpMeta48;

          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp56;
            modelica_metatype tmpMeta57;
            modelica_metatype tmpMeta58;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp59;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 5));
            tmpMeta57 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta57; /* defaultValue */
            tmp56 = &__omcQ_24tmpVar23;
            while(1) {
              tmp59 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp59--;
              }
              if (tmp59 == 0) {
                tmpMeta58 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar22 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure14_NBInitialization_cleanupHomotopy,tmpMeta58));
                *tmp56 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp56 = &MMC_CDR(*tmp56);
              } else if (tmp59 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp56 = mmc_mk_nil();
            tmpMeta55 = __omcQ_24tmpVar23;
          }
          tmpMeta54 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta54), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta54))[5] = tmpMeta55;
          _bdae = tmpMeta54;

          if(isSome((OMC_BOX_FIELD(_bdae, 9))))
          {
            {
              modelica_metatype __omcQ_24tmpVar25;
              modelica_metatype* tmp62;
              modelica_metatype tmpMeta63;
              modelica_metatype tmpMeta64;
              modelica_metatype __omcQ_24tmpVar24;
              modelica_integer tmp65;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = omc_Util_getOption(threadData, (OMC_BOX_FIELD(_bdae, 9)));
              tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar25 = tmpMeta63; /* defaultValue */
              tmp62 = &__omcQ_24tmpVar25;
              while(1) {
                tmp65 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp65--;
                }
                if (tmp65 == 0) {
                  tmpMeta64 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                  __omcQ_24tmpVar24 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure15_NBInitialization_cleanupHomotopy,tmpMeta64));
                  *tmp62 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                  tmp62 = &MMC_CDR(*tmp62);
                } else if (tmp65 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp62 = mmc_mk_nil();
              tmpMeta61 = __omcQ_24tmpVar25;
            }
            tmpMeta60 = MMC_TAGPTR(mmc_alloc_words(16));
            memcpy(MMC_UNTAGPTR(tmpMeta60), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta60))[9] = mmc_mk_some(tmpMeta61);
            _bdae = tmpMeta60;
          }

          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp68;
            modelica_metatype tmpMeta69;
            modelica_metatype tmpMeta70;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp71;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 7));
            tmpMeta69 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta69; /* defaultValue */
            tmp68 = &__omcQ_24tmpVar27;
            while(1) {
              tmp71 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp71--;
              }
              if (tmp71 == 0) {
                tmpMeta70 = omc_mk_box1(0, _hasHom);
                __omcQ_24tmpVar26 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure16_NBInitialization_containsLambda0,tmpMeta70));
                *tmp68 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp68 = &MMC_CDR(*tmp68);
              } else if (tmp71 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp68 = mmc_mk_nil();
            tmpMeta67 = __omcQ_24tmpVar27;
          }
          tmpMeta66 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta66), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta66))[7] = tmpMeta67;
          _bdae = tmpMeta66;

          if(omc_unbox_boolean(omc_Pointer_access(threadData, _hasHom)))
          {
            {
              modelica_metatype __omcQ_24tmpVar29;
              modelica_metatype* tmp73;
              modelica_metatype tmpMeta74;
              modelica_metatype __omcQ_24tmpVar28;
              modelica_integer tmp75;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = (OMC_BOX_FIELD(_bdae, 7));
              tmpMeta74 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar29 = tmpMeta74; /* defaultValue */
              tmp73 = &__omcQ_24tmpVar29;
              while(1) {
                tmp75 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp75--;
                }
                if (tmp75 == 0) {
                  __omcQ_24tmpVar28 = omc_NBPartition_Partition_setKind(threadData, omc_NBPartition_Partition_clone(threadData, _par, 0 /* false */), 6);
                  *tmp73 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                  tmp73 = &MMC_CDR(*tmp73);
                } else if (tmp75 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp73 = mmc_mk_nil();
              tmpMeta72 = __omcQ_24tmpVar29;
            }
            _init_0 = tmpMeta72;

            {
              modelica_metatype __omcQ_24tmpVar31;
              modelica_metatype* tmp77;
              modelica_metatype tmpMeta78;
              modelica_metatype tmpMeta79;
              modelica_metatype __omcQ_24tmpVar30;
              modelica_integer tmp80;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = _init_0;
              tmpMeta78 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar31 = tmpMeta78; /* defaultValue */
              tmp77 = &__omcQ_24tmpVar31;
              while(1) {
                tmp80 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp80--;
                }
                if (tmp80 == 0) {
                  tmpMeta79 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                  __omcQ_24tmpVar30 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure17_NBInitialization_cleanupInitialCall,tmpMeta79));
                  *tmp77 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                  tmp77 = &MMC_CDR(*tmp77);
                } else if (tmp80 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp77 = mmc_mk_nil();
              tmpMeta76 = __omcQ_24tmpVar31;
            }
            _init_0 = tmpMeta76;

            {
              modelica_metatype __omcQ_24tmpVar33;
              modelica_metatype* tmp82;
              modelica_metatype tmpMeta83;
              modelica_metatype tmpMeta84;
              modelica_metatype __omcQ_24tmpVar32;
              modelica_integer tmp85;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = _init_0;
              tmpMeta83 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar33 = tmpMeta83; /* defaultValue */
              tmp82 = &__omcQ_24tmpVar33;
              while(1) {
                tmp85 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp85--;
                }
                if (tmp85 == 0) {
                  tmpMeta84 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                  __omcQ_24tmpVar32 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure18_NBInitialization_cleanupHomotopy,tmpMeta84));
                  *tmp82 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                  tmp82 = &MMC_CDR(*tmp82);
                } else if (tmp85 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp82 = mmc_mk_nil();
              tmpMeta81 = __omcQ_24tmpVar33;
            }
            _init_0 = tmpMeta81;

            tmpMeta86 = MMC_TAGPTR(mmc_alloc_words(16));
            memcpy(MMC_UNTAGPTR(tmpMeta86), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta86))[8] = mmc_mk_some(_init_0);
            _bdae = tmpMeta86;
          }

          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp89;
            modelica_metatype tmpMeta90;
            modelica_metatype tmpMeta91;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp92;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (OMC_BOX_FIELD(_bdae, 7));
            tmpMeta90 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta90; /* defaultValue */
            tmp89 = &__omcQ_24tmpVar35;
            while(1) {
              tmp92 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp92--;
              }
              if (tmp92 == 0) {
                tmpMeta91 = omc_mk_box1(0, omc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar34 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) omc_mk_box2(0,closure19_NBInitialization_cleanupInitialCall,tmpMeta91));
                *tmp89 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                tmp89 = &MMC_CDR(*tmp89);
              } else if (tmp92 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp89 = mmc_mk_nil();
            tmpMeta88 = __omcQ_24tmpVar35;
          }
          tmpMeta87 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta87), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta87))[7] = tmpMeta88;
          _bdae = tmpMeta87;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _bdae;
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _bdae;
  return omc_ret_;
}

DLLModelDirection
void omc_NBInitialization_createPreEquationSlice(threadData_t *threadData, modelica_metatype _var_slice, modelica_metatype _ptr_pre_eqs, modelica_metatype _idx)
{
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _pre = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _pre_name = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype _iterators = NULL;
  modelica_metatype _ranges = NULL;
  modelica_metatype _subscripts = NULL;
  modelica_metatype _frames = NULL;
  modelica_metatype _pre_eq = NULL;
  modelica_integer _kind;
  modelica_metatype _sliced_eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var_ptr has no default value.
  // _pre has no default value.
  // _name has no default value.
  // _pre_name has no default value.
  // _dims has no default value.
  // _iterators has no default value.
  // _ranges has no default value.
  // _subscripts has no default value.
  // _frames has no default value.
  // _pre_eq has no default value.
  // _kind has no default value.
  // _sliced_eqn has no default value.
  _var_ptr = omc_NBSlice_getT(threadData, _var_slice);

  if((!omc_NBVariable_isPrevious(threadData, _var_ptr)))
  {
    _pre = omc_NBVariable_getVarPre(threadData, _var_ptr, NULL);

    if(isSome(_pre))
    {
      _name = omc_NBVariable_getVarName(threadData, _var_ptr);

      _dims = omc_NFType_arrayDims(threadData, omc_NFComponentRef_getSubscriptedType(threadData, _name, 0 /* false */));

      _iterators = omc_NFFlatten_makeIterators(threadData, _name, _dims ,&_ranges ,&_subscripts);

      {
        modelica_metatype __omcQ_24tmpVar87;
        modelica_metatype* tmp2;
        modelica_metatype tmpMeta3;
        modelica_metatype __omcQ_24tmpVar86;
        modelica_integer tmp4;
        modelica_metatype _iter_loopVar = 0;
        modelica_metatype _iter;
        _iter_loopVar = _iterators;
        tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar87 = tmpMeta3; /* defaultValue */
        tmp2 = &__omcQ_24tmpVar87;
        while(1) {
          tmp4 = 1;
          if (!listEmpty(_iter_loopVar)) {
            _iter = MMC_CAR(_iter_loopVar);
            _iter_loopVar = MMC_CDR(_iter_loopVar);
            tmp4--;
          }
          if (tmp4 == 0) {
            __omcQ_24tmpVar86 = omc_NFComponentRef_makeIterator(threadData, _iter, _OMC_LIT63);
            *tmp2 = mmc_mk_cons(__omcQ_24tmpVar86,0);
            tmp2 = &MMC_CDR(*tmp2);
          } else if (tmp4 == 1) {
            break;
          } else {
            OMC_THROW_INTERNAL();
          }
        }
        *tmp2 = mmc_mk_nil();
        tmpMeta1 = __omcQ_24tmpVar87;
      }
      _frames = omc_List_zip3(threadData, tmpMeta1, _ranges, omc_List_fill(threadData, mmc_mk_none(), listLength(_ranges)));

      _pre_name = omc_NBVariable_getVarName(threadData, omc_Util_getOption(threadData, _pre));

      _pre_name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _pre_name, 1 /* true */, 1 /* true */, 0 /* false */);

      _name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _name, 1 /* true */, 1 /* true */, 0 /* false */);

      _kind = (omc_NBVariable_isContinuous(threadData, _var_ptr, 1 /* true */)?1:2);

      _pre_eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _name, 1 /* true */), omc_NFExpression_fromCref(threadData, _pre_name, 0 /* false */), _idx, _OMC_LIT64, omc_NBEquation_Iterator_fromFrames(threadData, _frames), omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

      if((!listEmpty((OMC_BOX_FIELD(_var_slice, 3)))))
      {
        _sliced_eqn = omc_NBEquation_Equation_slice(threadData, _pre_eq, (OMC_BOX_FIELD(_var_slice, 3)), NULL);

        omc_Pointer_update(threadData, _ptr_pre_eqs, listAppend(omc_Pointer_access(threadData, _ptr_pre_eqs), _sliced_eqn));
      }
      else
      {
        tmpMeta5 = mmc_mk_cons(_pre_eq, omc_Pointer_access(threadData, _ptr_pre_eqs));
        omc_Pointer_update(threadData, _ptr_pre_eqs, tmpMeta5);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_NBInitialization_createPreEquation(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _ptr_pre_eqs, modelica_metatype _idx)
{
  modelica_metatype _pre = NULL;
  modelica_metatype _pre_eq = NULL;
  modelica_integer _kind;
  modelica_metatype tmpMeta1;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _pre has no default value.
  // _pre_eq has no default value.
  // _kind has no default value.
  if((!omc_NBVariable_isPrevious(threadData, _var_ptr)))
  {
    _pre = omc_NBVariable_getVarPre(threadData, _var_ptr, NULL);

    if(isSome(_pre))
    {
      _kind = (omc_NBVariable_isContinuous(threadData, _var_ptr, 1 /* true */)?1:2);

      _pre_eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), 0 /* false */), omc_NFExpression_fromCref(threadData, omc_NBVariable_getVarName(threadData, omc_Util_getOption(threadData, _pre)), 0 /* false */), _idx, _OMC_LIT64, _OMC_LIT65, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

      tmpMeta1 = mmc_mk_cons(_pre_eq, omc_Pointer_access(threadData, _ptr_pre_eqs));
      omc_Pointer_update(threadData, _ptr_pre_eqs, tmpMeta1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInitialization_createIteratedStartCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_integer _num_dim, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_subscripts, modelica_metatype *out_frames, modelica_metatype *out_iterator)
{
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _start_cref = NULL;
  modelica_metatype _subscripts = NULL;
  modelica_metatype _frames = NULL;
  modelica_metatype _iterator = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype _iterators = NULL;
  modelica_metatype _ranges = NULL;
  modelica_metatype _iter_crefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  _name = __omcQ_24in_5Fname;
  // _start_var has no default value.
  // _start_cref has no default value.
  // _subscripts has no default value.
  // _frames has no default value.
  // _iterator has no default value.
  // _dims has no default value.
  // _iterators has no default value.
  // _ranges has no default value.
  // _iter_crefs has no default value.
  _dims = omc_NFType_arrayDims(threadData, omc_NFComponentRef_getSubscriptedType(threadData, _name, 0 /* false */));

  _dims = ((_num_dim == ((modelica_integer) 0))?_dims:omc_List_firstN(threadData, _dims, _num_dim));

  _iterators = omc_NFFlatten_makeIterators(threadData, _name, _dims ,&_ranges ,&_subscripts);

  {
    modelica_metatype __omcQ_24tmpVar89;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar88;
    modelica_integer tmp4;
    modelica_metatype _iter_loopVar = 0;
    modelica_metatype _iter;
    _iter_loopVar = _iterators;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar89 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar89;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_iter_loopVar)) {
        _iter = MMC_CAR(_iter_loopVar);
        _iter_loopVar = MMC_CDR(_iter_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar88 = omc_NFComponentRef_makeIterator(threadData, _iter, _OMC_LIT63);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar88,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar89;
  }
  _iter_crefs = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar91;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar90;
    modelica_integer tmp8;
    modelica_metatype _iter_loopVar = 0;
    modelica_metatype _iter;
    _iter_loopVar = _iter_crefs;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar91 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar91;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_iter_loopVar)) {
        _iter = MMC_CAR(_iter_loopVar);
        _iter_loopVar = MMC_CDR(_iter_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar90 = omc_NBackendDAE_lowerIteratorCref(threadData, _iter);
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar90,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar91;
  }
  _iter_crefs = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar93;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar92;
    modelica_integer tmp12;
    modelica_metatype _sub_loopVar = 0;
    modelica_metatype _sub;
    _sub_loopVar = _subscripts;
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar93 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar93;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_sub_loopVar)) {
        _sub = MMC_CAR(_sub_loopVar);
        _sub_loopVar = MMC_CDR(_sub_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        __omcQ_24tmpVar92 = omc_NFSubscript_mapExp(threadData, _sub, boxvar_NBackendDAE_lowerIteratorExp);
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar92,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp12 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar93;
  }
  _subscripts = tmpMeta9;

  _frames = omc_List_zip3(threadData, _iter_crefs, _ranges, omc_List_fill(threadData, mmc_mk_none(), listLength(_iter_crefs)));

  _iterator = omc_NBEquation_Iterator_fromFrames(threadData, _frames);

  _var_ptr = omc_NBInitialization_createStartVar(threadData, _var_ptr, _name, _subscripts ,&_name ,&_start_var ,&_start_cref);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_start_var) { *out_start_var = _start_var; }
  if (out_start_cref) { *out_start_cref = _start_cref; }
  if (out_subscripts) { *out_subscripts = _subscripts; }
  if (out_frames) { *out_frames = _frames; }
  if (out_iterator) { *out_iterator = _iterator; }
  omc_ret_ = _var_ptr;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInitialization_createIteratedStartCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype _num_dim, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_subscripts, modelica_metatype *out_frames, modelica_metatype *out_iterator)
{
  modelica_integer tmp1;
  modelica_metatype _var_ptr = NULL;
  tmp1 = omc_unbox_integer(_num_dim);
  _var_ptr = omc_NBInitialization_createIteratedStartCref(threadData, __omcQ_24in_5Fvar_5Fptr, __omcQ_24in_5Fname, tmp1, out_name, out_start_var, out_start_cref, out_subscripts, out_frames, out_iterator);
  /* skip box _var_ptr; Pointer<NFVariable> */
  /* skip box _name; NFComponentRef */
  /* skip box _start_var; Pointer<NFVariable> */
  /* skip box _start_cref; NFComponentRef */
  /* skip box _subscripts; list<NFSubscript> */
  /* skip box _frames; list<tuple<NFComponentRef, NFExpression, Option<NBEquation.Iterator>>> */
  /* skip box _iterator; NBEquation.Iterator */
  return _var_ptr;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_createStartVariableSlice(threadData_t *threadData, modelica_metatype _var_slice, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype _ptr_start_vars, modelica_metatype *out_var_ptr, modelica_metatype *out_name, modelica_metatype *out_iterator)
{
  modelica_metatype _start_exp = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _iterator = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _start_name = NULL;
  modelica_metatype _subscripts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _start_exp has no default value.
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  _name = __omcQ_24in_5Fname;
  // _iterator has no default value.
  // _start_var has no default value.
  // _start_name has no default value.
  // _subscripts has no default value.
  if(omc_NBSlice_isFull(threadData, _var_slice))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _var_ptr = omc_NBInitialization_createStartVar(threadData, _var_ptr, _name, tmpMeta1 ,&_name ,&_start_var ,&_start_name);

    _iterator = _OMC_LIT65;
  }
  else
  {
    _var_ptr = omc_NBInitialization_createIteratedStartCref(threadData, _var_ptr, _name, ((modelica_integer) 0) ,&_name ,&_start_var ,&_start_name ,&_subscripts ,NULL ,&_iterator);
  }

  tmpMeta2 = mmc_mk_cons(_start_var, omc_Pointer_access(threadData, _ptr_start_vars));
  omc_Pointer_update(threadData, _ptr_start_vars, tmpMeta2);

  _start_exp = omc_NFExpression_fromCref(threadData, _start_name, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  if (out_var_ptr) { *out_var_ptr = _var_ptr; }
  if (out_name) { *out_name = _name; }
  if (out_iterator) { *out_iterator = _iterator; }
  omc_ret_ = _start_exp;
  return omc_ret_;
}

static modelica_metatype closure20_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_createStartExpressionSlice(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _var_slice, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype *out_var_ptr, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_iterator)
{
  modelica_metatype _start_exp = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _start_cref = NULL;
  modelica_metatype _iterator = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _start_exp has no default value.
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  _name = __omcQ_24in_5Fname;
  // _start_var has no default value.
  // _start_cref has no default value.
  // _iterator has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _array_constructor = NULL;
      modelica_metatype _frames = NULL;
      modelica_metatype _replacements = NULL;
      modelica_metatype _old_iter = NULL;
      modelica_metatype _new_iter = NULL;
      modelica_metatype _subscripts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _array_constructor has no default value.
      // _frames has no default value.
      // _replacements has no default value.
      // _old_iter has no default value.
      // _new_iter has no default value.
      // _subscripts has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
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
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,4,5) == 0) goto tmp3_end;
          
          _array_constructor = tmpMeta6;
          /* Pattern matching succeeded */
          _var_ptr = omc_NBInitialization_createIteratedStartCref(threadData, _var_ptr, _name, listLength((OMC_BOX_FIELD(_array_constructor, 6))) ,&_name ,&_start_var ,&_start_cref ,NULL ,&_frames ,&_iterator);

          _replacements = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

          {
            modelica_metatype _tpl;
            for (tmpMeta7 = omc_List_zip(threadData, (OMC_BOX_FIELD(_array_constructor, 6)), _frames); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _tpl = MMC_CAR(tmpMeta7);
              /* Pattern-matching assignment */
              tmpMeta8 = _tpl;
              tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
              tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 1);
              tmpMeta11 = OMC_BOX_FIELD(tmpMeta8, 2);
              tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 1);
              _old_iter = tmpMeta10;
              _new_iter = tmpMeta12;

              tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
              omc_UnorderedMap_add(threadData, omc_NFComponentRef_fromNode(threadData, _old_iter, omc_NFInstNode_InstNode_getType(threadData, _old_iter), tmpMeta13, 1), omc_NFExpression_fromCref(threadData, _new_iter, 0 /* false */), _replacements);
            }
          }
          tmpMeta15 = omc_mk_box1(0, _replacements);
          tmpMeta[0+0] = omc_NFExpression_map(threadData, (OMC_BOX_FIELD(_array_constructor, 5)), (modelica_fnptr) omc_mk_box2(0,closure20_NBReplacements_applySimpleExp,tmpMeta15));
          tmpMeta[0+1] = _iterator;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          if(omc_NBSlice_isFull(threadData, _var_slice))
          {
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            _var_ptr = omc_NBInitialization_createStartVar(threadData, _var_ptr, _name, tmpMeta16 ,&_name ,&_start_var ,&_start_cref);

            _iterator = _OMC_LIT65;

            _start_exp = _exp;
          }
          else
          {
            _var_ptr = omc_NBInitialization_createIteratedStartCref(threadData, _var_ptr, _name, ((modelica_integer) 0) ,&_name ,&_start_var ,&_start_cref ,&_subscripts ,NULL ,&_iterator);

            _start_exp = omc_NFExpression_applySubscripts(threadData, _subscripts, _exp, 1 /* true */);
          }
          tmpMeta[0+0] = _start_exp;
          tmpMeta[0+1] = _iterator;
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
  _start_exp = tmpMeta[0+0];
  _iterator = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_var_ptr) { *out_var_ptr = _var_ptr; }
  if (out_name) { *out_name = _name; }
  if (out_start_var) { *out_start_var = _start_var; }
  if (out_start_cref) { *out_start_cref = _start_cref; }
  if (out_iterator) { *out_iterator = _iterator; }
  omc_ret_ = _start_exp;
  return omc_ret_;
}

DLLModelDirection
void omc_NBInitialization_createStartEquationSlice(threadData_t *threadData, modelica_metatype _var_slice, modelica_metatype _ptr_start_vars, modelica_metatype _ptr_start_eqs, modelica_metatype _idx, modelica_boolean _fixed)
{
  modelica_metatype _start_exp = NULL;
  modelica_metatype _start_var_exp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _start_eq = NULL;
  modelica_integer _kind;
  modelica_metatype _iterator = NULL;
  modelica_metatype _sliced_eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta14;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _start_exp has no default value.
  // _start_var_exp has no default value.
  // _e has no default value.
  // _var_ptr has no default value.
  // _start_var has no default value.
  // _name has no default value.
  _start_eq = mmc_mk_none();
  // _kind has no default value.
  // _iterator has no default value.
  // _sliced_eqn has no default value.
  _var_ptr = omc_NBSlice_getT(threadData, _var_slice);

  _name = omc_NBVariable_getVarName(threadData, _var_ptr);

  _kind = (omc_NBVariable_isContinuous(threadData, _var_ptr, 1 /* true */)?1:2);

  if(_fixed)
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = omc_NBVariable_getStartAttribute(threadData, _var_ptr);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            if (optionNone(tmp4_1)) goto tmp3_end;
            tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
            _e = tmpMeta6;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!(!omc_NFExpression_isLiteralXML(threadData, _e))) goto tmp3_end;
            _start_exp = omc_NBInitialization_createStartExpressionSlice(threadData, _e, _var_slice, _var_ptr, _name ,&_var_ptr ,&_name ,NULL ,NULL ,&_iterator);
            tmpMeta1 = _start_exp;
            goto tmp3_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            _start_var_exp = omc_NBInitialization_createStartVariableSlice(threadData, _var_slice, _var_ptr, _name, _ptr_start_vars ,&_var_ptr ,&_name ,&_iterator);
            tmpMeta1 = _start_var_exp;
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
    _start_exp = tmpMeta1;

    _start_eq = mmc_mk_some(omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _name, 1 /* true */), _start_exp, _idx, _OMC_LIT66, _iterator, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none())));
  }
  else
  {
    { /* match expression */
      modelica_metatype tmp10_1;
      tmp10_1 = omc_NBVariable_getStartAttribute(threadData, _var_ptr);
      {
        volatile mmc_switch_type tmp10;
        int tmp11;
        tmp10 = 0;
        for (; tmp10 < 2; tmp10++) {
          switch (MMC_SWITCH_CAST(tmp10)) {
          case 0: {
            modelica_metatype tmpMeta12;
            modelica_metatype tmpMeta13;
            if (optionNone(tmp10_1)) goto tmp9_end;
            tmpMeta12 = OMC_BOX_FIELD(tmp10_1, 1);
            _e = tmpMeta12;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!(!omc_NFExpression_isLiteralXML(threadData, _e))) goto tmp9_end;
            _start_exp = omc_NBInitialization_createStartExpressionSlice(threadData, _e, _var_slice, _var_ptr, _name ,&_var_ptr ,NULL ,&_start_var ,&_name ,&_iterator);

            _start_eq = mmc_mk_some(omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _name, 1 /* true */), _start_exp, _idx, _OMC_LIT66, _iterator, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none())));

            tmpMeta13 = mmc_mk_cons(_start_var, omc_Pointer_access(threadData, _ptr_start_vars));
            omc_Pointer_update(threadData, _ptr_start_vars, tmpMeta13);
            tmpMeta7 = _start_eq;
            goto tmp9_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmpMeta7 = mmc_mk_none();
            goto tmp9_done;
          }
          }
          goto tmp9_end;
          tmp9_end: ;
        }
        goto goto_8;
        goto_8:;
        OMC_THROW_INTERNAL();
        goto tmp9_done;
        tmp9_done:;
      }
    }
    _start_eq = tmpMeta7;
  }

  if(isSome(_start_eq))
  {
    if((!listEmpty((OMC_BOX_FIELD(_var_slice, 3)))))
    {
      _sliced_eqn = omc_NBEquation_Equation_slice(threadData, omc_Util_getOption(threadData, _start_eq), (OMC_BOX_FIELD(_var_slice, 3)), NULL);

      omc_Pointer_update(threadData, _ptr_start_eqs, listAppend(omc_Pointer_access(threadData, _ptr_start_eqs), _sliced_eqn));
    }
    else
    {
      tmpMeta14 = mmc_mk_cons(omc_Util_getOption(threadData, _start_eq), omc_Pointer_access(threadData, _ptr_start_eqs));
      omc_Pointer_update(threadData, _ptr_start_eqs, tmpMeta14);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBInitialization_createStartEquationSlice(threadData_t *threadData, modelica_metatype _var_slice, modelica_metatype _ptr_start_vars, modelica_metatype _ptr_start_eqs, modelica_metatype _idx, modelica_metatype _fixed)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_fixed);
  omc_NBInitialization_createStartEquationSlice(threadData, _var_slice, _ptr_start_vars, _ptr_start_eqs, _idx, tmp1);
  return;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_createParameterEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _new_iters, modelica_metatype _idx, modelica_metatype __omcQ_24in_5Fparameter_5Feqs, modelica_metatype __omcQ_24in_5Finitial_5Fparam_5Fvars, modelica_metatype *out_initial_param_vars)
{
  modelica_metatype _parameter_eqs = NULL;
  modelica_metatype _initial_param_vars = NULL;
  modelica_metatype _parent = NULL;
  modelica_metatype _c_var = NULL;
  modelica_metatype _c_cell = NULL;
  modelica_boolean _skip;
  modelica_boolean tmp1 = 0;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _parameter_eqs = __omcQ_24in_5Fparameter_5Feqs;
  _initial_param_vars = __omcQ_24in_5Finitial_5Fparam_5Fvars;
  // _parent has no default value.
  // _c_var has no default value.
  // _c_cell has no default value.
  // _skip has no default value.
  if(omc_NBVariable_isConst(threadData, _var))
  {
    _skip = 1 /* true */;
  }
  else
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = omc_NBVariable_getParent(threadData, _var);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            if (optionNone(tmp4_1)) goto tmp3_end;
            tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
            _parent = tmpMeta6;
            /* Pattern matching succeeded */
            tmp1 = (omc_NBVariable_isBound(threadData, _parent) && omc_NBVariable_isKnownRecord(threadData, _parent));
            goto tmp3_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmp1 = (omc_NBVariable_isRecord(threadData, _var) && (!omc_NBVariable_isBound(threadData, _var)));
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
    _skip = tmp1;
  }

  if(_skip)
  {
    goto _return;
  }

  if(omc_NBVariable_isKnownRecord(threadData, _var))
  {
    if(((!omc_NBVariable_hasEvaluableBinding(threadData, _var)) && (omc_NBVariable_isBound(threadData, _var) || omc_NBVariable_hasStartAttr(threadData, _var))))
    {
      _initial_param_vars = listAppend(omc_NBVariable_getRecordChildren(threadData, _var), _initial_param_vars);

      tmpMeta7 = mmc_mk_cons(omc_NBEquation_Equation_generateBindingEquation(threadData, _var, _idx, 1 /* true */, _new_iters), _parameter_eqs);
      _parameter_eqs = tmpMeta7;
    }
    else
    {
      {
        modelica_metatype _c_cell;
        for (tmpMeta8 = omc_NBVariable_getRecordChildrenCells(threadData, _var); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
        {
          _c_cell = MMC_CAR(tmpMeta8);
          _c_var = omc_PointerWeak_upgrade(threadData, _c_cell);

          if(omc_NBVariable_isBound(threadData, _c_var))
          {
            omc_NBVariable_setBindingAsStart(threadData, _c_var, 1 /* true */);
          }

          if(omc_NBVariable_isRecord(threadData, _c_var))
          {
            _parameter_eqs = omc_NBInitialization_createParameterEquation(threadData, _c_var, _new_iters, _idx, _parameter_eqs, _initial_param_vars ,&_initial_param_vars);
          }
        }
      }
    }
  }
  else
  {
    if((!omc_NBVariable_isRecord(threadData, _var)))
    {
      if((!omc_NBVariable_hasEvaluableBinding(threadData, _var)))
      {
        tmpMeta10 = mmc_mk_cons(_var, _initial_param_vars);
        _initial_param_vars = tmpMeta10;

        if(omc_NBVariable_isFixed(threadData, _var))
        {
          tmpMeta11 = mmc_mk_cons(omc_NBEquation_Equation_generateBindingEquation(threadData, _var, _idx, 1 /* true */, _new_iters), _parameter_eqs);
          _parameter_eqs = tmpMeta11;
        }
      }
      else
      {
        if(omc_NBVariable_isBound(threadData, _var))
        {
          omc_NBVariable_setBindingAsStart(threadData, _var, 1 /* true */);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_initial_param_vars) { *out_initial_param_vars = _initial_param_vars; }
  omc_ret_ = _parameter_eqs;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_isPrimaryCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _primary, modelica_metatype _unresolved)
{
  modelica_boolean _b;
  modelica_metatype _name = NULL;
  modelica_metatype _parent = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _name = omc_NFComponentRef_stripSubscriptsAll(threadData, _cref);
  _parent = _name;
  // _var_ptr has no default value.
  if((omc_NFComponentRef_isIterator(threadData, _cref) || omc_NBInitialization_isSolved(threadData, _name, _primary)))
  {
    _b = 1 /* true */;
  }
  else
  {
    _b = 1 /* true */;

    while(1)
    {
      if(!(!omc_NFComponentRef_isEmpty(threadData, _parent))) break;
      if(omc_UnorderedSet_contains(threadData, _parent, _unresolved))
      {
        _b = 0 /* false */;

        break;
      }

      _parent = omc_NFComponentRef_rest(threadData, _parent);
    }

    if(_b)
    {
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _cref;
        {
          volatile mmc_switch_type tmp4;
          int tmp5;
          tmp4 = 0;
          for (; tmp4 < 2; tmp4++) {
            switch (MMC_SWITCH_CAST(tmp4)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
              
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!omc_NFInstNode_InstNode_isVar(threadData, omc_NFComponentRef_node(threadData, _cref))) goto tmp3_end;
              _var_ptr = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT67);
              tmp1 = (omc_NBVariable_isConst(threadData, _var_ptr) || (omc_NBVariable_isParamOrConst(threadData, _var_ptr) && omc_NBVariable_isFixed(threadData, _var_ptr)));
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
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBInitialization_isPrimaryCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _primary, modelica_metatype _unresolved)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_isPrimaryCref(threadData, _cref, _primary, _unresolved);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_isSolved(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _primary)
{
  modelica_boolean _b;
  modelica_metatype _parent = NULL;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 0 /* false */;
  _parent = _cref;
  while(1)
  {
    if(!(!omc_NFComponentRef_isEmpty(threadData, _parent))) break;
    if(omc_UnorderedSet_contains(threadData, _parent, _primary))
    {
      _b = 1 /* true */;

      break;
    }

    _parent = omc_NFComponentRef_rest(threadData, _parent);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBInitialization_isSolved(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _primary)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_isSolved(threadData, _cref, _primary);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_isPrimaryBinding(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _primary)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBInitialization_explicitBindingName(threadData, _eqn_ptr);
    {
      modelica_metatype _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_UnorderedSet_contains(threadData, _name, _primary);
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
modelica_metatype boxptr_NBInitialization_isPrimaryBinding(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _primary)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_isPrimaryBinding(threadData, _eqn_ptr, _primary);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_isDuplicateBinding(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _duplicates)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBInitialization_explicitBindingName(threadData, _eqn_ptr);
    {
      modelica_metatype _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_UnorderedSet_contains(threadData, _name, _duplicates);
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
modelica_metatype boxptr_NBInitialization_isDuplicateBinding(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _duplicates)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_isDuplicateBinding(threadData, _eqn_ptr, _duplicates);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_hasSubscripts(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (!omc_NFComponentRef_isEqual(threadData, _cref, omc_NFComponentRef_stripSubscriptsAll(threadData, _cref)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBInitialization_hasSubscripts(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_hasSubscripts(threadData, _cref);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_coversVariable(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _eqn)
{
  modelica_boolean _b;
  modelica_metatype _subs = NULL;
  modelica_metatype _iters = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _subs = omc_NFComponentRef_subscriptsAllFlat(threadData, _cref);
  _iters = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  // _iter has no default value.
  // _var_ptr has no default value.
  _var_ptr = omc_NBVariable_getVarPointer(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, _cref), _OMC_LIT68);

  if(isSome(omc_NBVariable_getParent(threadData, _var_ptr)))
  {
    _b = 0 /* false */;

    goto _return;
  }

  _b = (!listEmpty(_subs));

  {
    modelica_metatype _sub;
    for (tmpMeta1 = _subs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _sub = MMC_CAR(tmpMeta1);
      if((!omc_NFSubscript_isIterator(threadData, _sub)))
      {
        _b = 0 /* false */;

        break;
      }

      _iter = omc_NFExpression_toCref(threadData, omc_NFSubscript_toExp(threadData, _sub));

      if(omc_UnorderedSet_contains(threadData, _iter, _iters))
      {
        _b = 0 /* false */;

        break;
      }

      omc_UnorderedSet_add(threadData, _iter, _iters);
    }
  }

  if(_b)
  {
    _b = (omc_NBEquation_Equation_size(threadData, omc_Pointer_create(threadData, _eqn), 0 /* false */) == omc_NBVariable_size(threadData, omc_NBVariable_getVarPointer(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, _cref), _OMC_LIT69), 0 /* false */));
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBInitialization_coversVariable(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _eqn)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_coversVariable(threadData, _cref, _eqn);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_explicitBindingName(threadData_t *threadData, modelica_metatype _eqn_ptr)
{
  modelica_metatype _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Pointer_access(threadData, _eqn_ptr);
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 3);
          
          _cref = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NBInitialization_hasSubscripts(threadData, _cref))) goto tmp3_end;
          tmpMeta1 = mmc_mk_some(_cref);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 3);
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 7);
          if (!optionNone(tmpMeta11)) goto tmp3_end;
          _ty = tmpMeta8;
          _cref = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((!omc_NBInitialization_hasSubscripts(threadData, _cref)) && (!omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _ty))))) goto tmp3_end;
          tmpMeta1 = mmc_mk_some(_cref);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,2) == 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 3);
          
          _cref = tmpMeta13;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NBInitialization_hasSubscripts(threadData, _cref))) goto tmp3_end;
          tmpMeta1 = mmc_mk_some(_cref);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 4);
          if (listEmpty(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,5) == 0) goto tmp3_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta15, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,6,2) == 0) goto tmp3_end;
          tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 3);
          if (!listEmpty(tmpMeta16)) goto tmp3_end;
          
          _cref = tmpMeta18;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBInitialization_coversVariable(threadData, _cref, omc_Pointer_access(threadData, _eqn_ptr))) goto tmp3_end;
          tmpMeta1 = mmc_mk_some(omc_NFComponentRef_stripSubscriptsAll(threadData, _cref));
          goto tmp3_done;
        }
        case 4: {
          
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
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _name = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _name;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_isFunctionAliasCref(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cref;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFInstNode_InstNode_isVar(threadData, omc_NFComponentRef_node(threadData, _cref))) goto tmp3_end;
          tmp1 = omc_NBVariable_isFunctionAlias(threadData, omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT70));
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
modelica_metatype boxptr_NBInitialization_isFunctionAliasCref(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_isFunctionAliasCref(threadData, _cref);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBInitialization_isFunctionAliasBinding(threadData_t *threadData, modelica_metatype _eqn_ptr)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Pointer_access(threadData, _eqn_ptr);
    {
      modelica_metatype _cref = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 3);
          
          _cref = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_NBInitialization_isFunctionAliasCref(threadData, _cref);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 3);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 7);
          if (!optionNone(tmpMeta10)) goto tmp3_end;
          _cref = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = omc_NBInitialization_isFunctionAliasCref(threadData, _cref);
          goto tmp3_done;
        }
        case 2: {
          
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
modelica_metatype boxptr_NBInitialization_isFunctionAliasBinding(threadData_t *threadData, modelica_metatype _eqn_ptr)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_isFunctionAliasBinding(threadData, _eqn_ptr);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_selectPrimaryParameters(threadData_t *threadData, modelica_metatype _parameter_eqs, modelica_metatype _initial_param_vars, modelica_metatype _aux_eqs, modelica_metatype _initial_eqs, modelica_metatype *out_secondary_eqs, modelica_metatype *out_secondary_vars, modelica_metatype *out_primary_aux_eqs)
{
  modelica_metatype _primary_comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _secondary_eqs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _secondary_vars = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _primary_aux_eqs = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _primary = NULL;
  modelica_metatype _unresolved = NULL;
  modelica_metatype _duplicates = NULL;
  modelica_metatype _remaining = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _next = NULL;
  modelica_metatype _sorted = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _name_opt = NULL;
  modelica_metatype _name = NULL;
  modelica_boolean _progress;
  modelica_boolean _ready;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta52;
  modelica_metatype tmpMeta56;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _primary_comps = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _secondary_eqs = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _secondary_vars = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _primary_aux_eqs = tmpMeta4;
  _primary = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _unresolved = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _duplicates = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _remaining = tmpMeta5;
  // _next has no default value.
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _sorted = tmpMeta6;
  // _name_opt has no default value.
  // _name has no default value.
  _progress = 1 /* true */;
  // _ready has no default value.
  {
    modelica_metatype _eqn_ptr;
    for (tmpMeta7 = listAppend(_parameter_eqs, _aux_eqs); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _eqn_ptr = MMC_CAR(tmpMeta7);
      _name_opt = omc_NBInitialization_explicitBindingName(threadData, _eqn_ptr);

      { /* match expression */
        modelica_metatype tmp10_1;
        tmp10_1 = _name_opt;
        {
          volatile mmc_switch_type tmp10;
          int tmp11;
          tmp10 = 0;
          for (; tmp10 < 2; tmp10++) {
            switch (MMC_SWITCH_CAST(tmp10)) {
            case 0: {
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              if (optionNone(tmp10_1)) goto tmp9_end;
              tmpMeta12 = OMC_BOX_FIELD(tmp10_1, 1);
              _name = tmpMeta12;
              /* Pattern matching succeeded */
              if(omc_UnorderedSet_contains(threadData, _name, _unresolved))
              {
                omc_UnorderedSet_add(threadData, _name, _duplicates);
              }

              omc_UnorderedSet_add(threadData, _name, _unresolved);

              tmpMeta13 = mmc_mk_cons(_eqn_ptr, _remaining);
              _remaining = tmpMeta13;
              goto tmp9_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              { /* match expression */
                modelica_metatype tmp16_1;
                tmp16_1 = omc_NBEquation_Equation_getLHS(threadData, omc_Pointer_access(threadData, _eqn_ptr));
                {
                  volatile mmc_switch_type tmp16;
                  int tmp17;
                  tmp16 = 0;
                  for (; tmp16 < 2; tmp16++) {
                    switch (MMC_SWITCH_CAST(tmp16)) {
                    case 0: {
                      modelica_metatype tmpMeta18;
                      modelica_metatype tmpMeta19;
                      if (optionNone(tmp16_1)) goto tmp15_end;
                      tmpMeta18 = OMC_BOX_FIELD(tmp16_1, 1);
                      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,6,2) == 0) goto tmp15_end;
                      tmpMeta19 = OMC_BOX_FIELD(tmpMeta18, 3);
                      _name = tmpMeta19;
                      /* Pattern matching succeeded */
                      omc_UnorderedSet_add(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, _name), _unresolved);
                      goto tmp15_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp15_done;
                    }
                    }
                    goto tmp15_end;
                    tmp15_end: ;
                  }
                  goto goto_14;
                  goto_14:;
                  goto goto_8;
                  goto tmp15_done;
                  tmp15_done:;
                }
              }
              ;
              goto tmp9_done;
            }
            }
            goto tmp9_end;
            tmp9_end: ;
          }
          goto goto_8;
          goto_8:;
          OMC_THROW_INTERNAL();
          goto tmp9_done;
          tmp9_done:;
        }
      }
      ;
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar95;
    modelica_metatype* tmp22;
    modelica_metatype tmpMeta23;
    modelica_metatype __omcQ_24tmpVar94;
    modelica_integer tmp24;
    modelica_metatype _eqn_ptr_loopVar = 0;
    modelica_metatype _eqn_ptr;
    _eqn_ptr_loopVar = listReverse(_remaining);
    tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar95 = tmpMeta23; /* defaultValue */
    tmp22 = &__omcQ_24tmpVar95;
    while(1) {
      tmp24 = 1;
      while (!listEmpty(_eqn_ptr_loopVar)) {
        _eqn_ptr = MMC_CAR(_eqn_ptr_loopVar);
        _eqn_ptr_loopVar = MMC_CDR(_eqn_ptr_loopVar);
        if ((!omc_NBInitialization_isDuplicateBinding(threadData, _eqn_ptr, _duplicates))) {
          tmp24--;
          break;
        }
      }
      if (tmp24 == 0) {
        __omcQ_24tmpVar94 = _eqn_ptr;
        *tmp22 = mmc_mk_cons(__omcQ_24tmpVar94,0);
        tmp22 = &MMC_CDR(*tmp22);
      } else if (tmp24 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp22 = mmc_mk_nil();
    tmpMeta21 = __omcQ_24tmpVar95;
  }
  _remaining = tmpMeta21;

  {
    modelica_metatype _eqn_ptr;
    for (tmpMeta25 = _initial_eqs; !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
    {
      _eqn_ptr = MMC_CAR(tmpMeta25);
      { /* match expression */
        modelica_metatype tmp28_1;
        tmp28_1 = omc_NBEquation_Equation_getLHS(threadData, omc_Pointer_access(threadData, _eqn_ptr));
        {
          volatile mmc_switch_type tmp28;
          int tmp29;
          tmp28 = 0;
          for (; tmp28 < 2; tmp28++) {
            switch (MMC_SWITCH_CAST(tmp28)) {
            case 0: {
              modelica_metatype tmpMeta30;
              modelica_metatype tmpMeta31;
              if (optionNone(tmp28_1)) goto tmp27_end;
              tmpMeta30 = OMC_BOX_FIELD(tmp28_1, 1);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,6,2) == 0) goto tmp27_end;
              tmpMeta31 = OMC_BOX_FIELD(tmpMeta30, 3);
              _name = tmpMeta31;
              /* Pattern matching succeeded */
              omc_UnorderedSet_add(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, _name), _unresolved);
              goto tmp27_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              goto tmp27_done;
            }
            }
            goto tmp27_end;
            tmp27_end: ;
          }
          goto goto_26;
          goto_26:;
          OMC_THROW_INTERNAL();
          goto tmp27_done;
          tmp27_done:;
        }
      }
      ;
    }
  }

  while(1)
  {
    if(!(_progress && (!listEmpty(_remaining)))) break;
    _progress = 0 /* false */;

    tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
    _next = tmpMeta33;

    {
      modelica_metatype _eqn_ptr;
      for (tmpMeta34 = _remaining; !listEmpty(tmpMeta34); tmpMeta34=MMC_CDR(tmpMeta34))
      {
        _eqn_ptr = MMC_CAR(tmpMeta34);
        /* Pattern-matching assignment */
        tmpMeta35 = omc_NBInitialization_explicitBindingName(threadData, _eqn_ptr);
        if (optionNone(tmpMeta35)) OMC_THROW_INTERNAL();
        tmpMeta36 = OMC_BOX_FIELD(tmpMeta35, 1);
        _name = tmpMeta36;

        _ready = 1 /* true */;

        {
          modelica_metatype _dep;
          for (tmpMeta37 = omc_UnorderedSet_toList(threadData, omc_NFExpression_extractCrefs(threadData, omc_Util_getOption(threadData, omc_NBEquation_Equation_getRHS(threadData, omc_Pointer_access(threadData, _eqn_ptr))))); !listEmpty(tmpMeta37); tmpMeta37=MMC_CDR(tmpMeta37))
          {
            _dep = MMC_CAR(tmpMeta37);
            if((!omc_NBInitialization_isPrimaryCref(threadData, _dep, _primary, _unresolved)))
            {
              _ready = 0 /* false */;

              break;
            }
          }
        }

        if(_ready)
        {
          omc_UnorderedSet_add(threadData, _name, _primary);

          tmpMeta39 = mmc_mk_cons(_eqn_ptr, _sorted);
          _sorted = tmpMeta39;

          _progress = 1 /* true */;
        }
        else
        {
          tmpMeta40 = mmc_mk_cons(_eqn_ptr, _next);
          _next = tmpMeta40;
        }
      }
    }

    _remaining = listReverse(_next);
  }

  _sorted = listReverse(_sorted);

  {
    modelica_metatype __omcQ_24tmpVar97;
    modelica_metatype* tmp43;
    modelica_metatype tmpMeta44;
    modelica_metatype tmpMeta45;
    modelica_metatype tmpMeta46;
    modelica_metatype __omcQ_24tmpVar96;
    modelica_integer tmp47;
    modelica_metatype _eqn_ptr_loopVar = 0;
    modelica_metatype _eqn_ptr;
    _eqn_ptr_loopVar = _sorted;
    tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar97 = tmpMeta44; /* defaultValue */
    tmp43 = &__omcQ_24tmpVar97;
    while(1) {
      tmp47 = 1;
      if (!listEmpty(_eqn_ptr_loopVar)) {
        _eqn_ptr = MMC_CAR(_eqn_ptr_loopVar);
        _eqn_ptr_loopVar = MMC_CDR(_eqn_ptr_loopVar);
        tmp47--;
      }
      if (tmp47 == 0) {
        tmpMeta45 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta46 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, tmpMeta45);
        __omcQ_24tmpVar96 = omc_NBStrongComponent_fromSolvedEquationSlice(threadData, tmpMeta46);
        *tmp43 = mmc_mk_cons(__omcQ_24tmpVar96,0);
        tmp43 = &MMC_CDR(*tmp43);
      } else if (tmp47 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp43 = mmc_mk_nil();
    tmpMeta42 = __omcQ_24tmpVar97;
  }
  _primary_comps = tmpMeta42;

  {
    modelica_metatype __omcQ_24tmpVar99;
    modelica_metatype* tmp49;
    modelica_metatype tmpMeta50;
    modelica_metatype __omcQ_24tmpVar98;
    modelica_integer tmp51;
    modelica_metatype _eqn_ptr_loopVar = 0;
    modelica_metatype _eqn_ptr;
    _eqn_ptr_loopVar = _parameter_eqs;
    tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar99 = tmpMeta50; /* defaultValue */
    tmp49 = &__omcQ_24tmpVar99;
    while(1) {
      tmp51 = 1;
      while (!listEmpty(_eqn_ptr_loopVar)) {
        _eqn_ptr = MMC_CAR(_eqn_ptr_loopVar);
        _eqn_ptr_loopVar = MMC_CDR(_eqn_ptr_loopVar);
        if ((!omc_NBInitialization_isPrimaryBinding(threadData, _eqn_ptr, _primary))) {
          tmp51--;
          break;
        }
      }
      if (tmp51 == 0) {
        __omcQ_24tmpVar98 = _eqn_ptr;
        *tmp49 = mmc_mk_cons(__omcQ_24tmpVar98,0);
        tmp49 = &MMC_CDR(*tmp49);
      } else if (tmp51 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp49 = mmc_mk_nil();
    tmpMeta48 = __omcQ_24tmpVar99;
  }
  _secondary_eqs = tmpMeta48;

  {
    modelica_metatype __omcQ_24tmpVar101;
    modelica_metatype* tmp53;
    modelica_metatype tmpMeta54;
    modelica_metatype __omcQ_24tmpVar100;
    modelica_integer tmp55;
    modelica_metatype _var_loopVar = 0;
    modelica_metatype _var;
    _var_loopVar = _initial_param_vars;
    tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar101 = tmpMeta54; /* defaultValue */
    tmp53 = &__omcQ_24tmpVar101;
    while(1) {
      tmp55 = 1;
      while (!listEmpty(_var_loopVar)) {
        _var = MMC_CAR(_var_loopVar);
        _var_loopVar = MMC_CDR(_var_loopVar);
        if ((!omc_NBInitialization_isSolved(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, omc_NBVariable_getVarName(threadData, _var)), _primary))) {
          tmp55--;
          break;
        }
      }
      if (tmp55 == 0) {
        __omcQ_24tmpVar100 = _var;
        *tmp53 = mmc_mk_cons(__omcQ_24tmpVar100,0);
        tmp53 = &MMC_CDR(*tmp53);
      } else if (tmp55 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp53 = mmc_mk_nil();
    tmpMeta52 = __omcQ_24tmpVar101;
  }
  _secondary_vars = tmpMeta52;

  {
    modelica_metatype __omcQ_24tmpVar103;
    modelica_metatype* tmp57;
    modelica_metatype tmpMeta58;
    modelica_metatype __omcQ_24tmpVar102;
    modelica_integer tmp59;
    modelica_metatype _eqn_ptr_loopVar = 0;
    modelica_metatype _eqn_ptr;
    _eqn_ptr_loopVar = _aux_eqs;
    tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar103 = tmpMeta58; /* defaultValue */
    tmp57 = &__omcQ_24tmpVar103;
    while(1) {
      tmp59 = 1;
      while (!listEmpty(_eqn_ptr_loopVar)) {
        _eqn_ptr = MMC_CAR(_eqn_ptr_loopVar);
        _eqn_ptr_loopVar = MMC_CDR(_eqn_ptr_loopVar);
        if (omc_NBInitialization_isPrimaryBinding(threadData, _eqn_ptr, _primary)) {
          tmp59--;
          break;
        }
      }
      if (tmp59 == 0) {
        __omcQ_24tmpVar102 = _eqn_ptr;
        *tmp57 = mmc_mk_cons(__omcQ_24tmpVar102,0);
        tmp57 = &MMC_CDR(*tmp57);
      } else if (tmp59 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp57 = mmc_mk_nil();
    tmpMeta56 = __omcQ_24tmpVar103;
  }
  _primary_aux_eqs = tmpMeta56;
  _return: OMC_LABEL_UNUSED
  if (out_secondary_eqs) { *out_secondary_eqs = _secondary_eqs; }
  if (out_secondary_vars) { *out_secondary_vars = _secondary_vars; }
  if (out_primary_aux_eqs) { *out_primary_aux_eqs = _primary_aux_eqs; }
  omc_ret_ = _primary_comps;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_createParameterEquations(threadData_t *threadData, modelica_metatype _parameters, modelica_metatype _new_iters, modelica_metatype _idx, modelica_metatype __omcQ_24in_5Fparameter_5Feqs, modelica_metatype __omcQ_24in_5Finitial_5Fparam_5Fvars, modelica_metatype *out_initial_param_vars)
{
  modelica_metatype _parameter_eqs = NULL;
  modelica_metatype _initial_param_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _parameter_eqs = __omcQ_24in_5Fparameter_5Feqs;
  _initial_param_vars = __omcQ_24in_5Finitial_5Fparam_5Fvars;
  {
    modelica_metatype _var;
    for (tmpMeta1 = omc_NBVariable_VariablePointers_toList(threadData, _parameters); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      _parameter_eqs = omc_NBInitialization_createParameterEquation(threadData, _var, _new_iters, _idx, _parameter_eqs, _initial_param_vars ,&_initial_param_vars);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_initial_param_vars) { *out_initial_param_vars = _initial_param_vars; }
  omc_ret_ = _parameter_eqs;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBInitialization_createStartVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype _subscripts, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_name)
{
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _start_name = NULL;
  modelica_metatype _var_pre = NULL;
  modelica_metatype _merged_name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  _name = __omcQ_24in_5Fname;
  // _start_var has no default value.
  // _start_name has no default value.
  _var_pre = omc_NBVariable_getVarPre(threadData, _var_ptr, NULL);
  // _merged_name has no default value.
  if((omc_NBVariable_isPrevious(threadData, _var_ptr) && isSome(_var_pre)))
  {
    _merged_name = omc_NBVariable_getVarName(threadData, omc_Util_getOption(threadData, _var_pre));

    _merged_name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _merged_name, 1 /* true */, 1 /* true */, 1 /* true */);
  }
  else
  {
    if(isSome(_var_pre))
    {
      _merged_name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _name, 1 /* true */, 1 /* true */, 1 /* true */);

      _var_ptr = omc_Util_getOption(threadData, _var_pre);

      _name = omc_NBVariable_getVarName(threadData, _var_ptr);

      _name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _name, 1 /* true */, 1 /* true */, 1 /* true */);
    }
    else
    {
      _name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _name, 1 /* true */, 1 /* true */, 1 /* true */);

      _merged_name = _name;
    }
  }

  _start_name = omc_NBVariable_makeStartVar(threadData, _merged_name ,&_start_var);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBVariable_getParent(threadData, _var_ptr);
    {
      modelica_metatype _parent = NULL;
      modelica_metatype _start_parent = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _parent has no default value.
      // _start_parent has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          _parent = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = omc_NBVariable_getVarStart(threadData, _parent, NULL);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  modelica_metatype tmpMeta12;
                  if (optionNone(tmp10_1)) goto tmp9_end;
                  tmpMeta12 = OMC_BOX_FIELD(tmp10_1, 1);
                  _start_parent = tmpMeta12;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _start_parent;
                  goto tmp9_done;
                }
                case 1: {
                  modelica_metatype tmpMeta13;
                  
                  /* Pattern matching succeeded */
                  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
                  omc_NBInitialization_createStartVar(threadData, _parent, omc_NBVariable_getVarName(threadData, _parent), tmpMeta13 ,NULL ,&_start_parent ,NULL);
                  tmpMeta7 = _start_parent;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_2;
              goto tmp9_done;
              tmp9_done:;
            }
          }
          _start_parent = tmpMeta7;

          omc_NBVariable_addRecordChild(threadData, _start_parent, _start_var);
          tmpMeta1 = omc_NBVariable_setParent(threadData, _start_var, _start_parent);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _start_var;
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
  _start_var = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_start_var) { *out_start_var = _start_var; }
  if (out_start_name) { *out_start_name = _start_name; }
  omc_ret_ = _var_ptr;
  return omc_ret_;
}

DLLModelDirection
void omc_NBInitialization_createWhenReplacementEquation(threadData_t *threadData, modelica_metatype _tpl, modelica_metatype _ptr_start_eqs, modelica_metatype _idx)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _var_pre = NULL;
  modelica_metatype _pre = NULL;
  modelica_integer _kind;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  // _iter has no default value.
  // _var_ptr has no default value.
  // _var_pre has no default value.
  // _pre has no default value.
  // _kind has no default value.
  // _eq has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 2);
  _cref = tmpMeta2;
  _iter = tmpMeta3;

  _var_ptr = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT71);

  _var_pre = omc_NBVariable_getVarPre(threadData, _var_ptr, NULL);

  if(isSome(_var_pre))
  {
    _pre = omc_NBVariable_getVarName(threadData, omc_Util_getOption(threadData, _var_pre));

    _pre = omc_NFComponentRef_copySubscripts(threadData, _cref, _pre);

    _kind = (omc_NBVariable_isContinuous(threadData, _var_ptr, 1 /* true */)?1:2);

    _eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _cref, 1 /* true */), omc_NFExpression_fromCref(threadData, _pre, 1 /* true */), _idx, _OMC_LIT66, _iter, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

    tmpMeta4 = mmc_mk_cons(_eq, omc_Pointer_access(threadData, _ptr_start_eqs));
    omc_Pointer_update(threadData, _ptr_start_eqs, tmpMeta4);
  }
  else
  {
    tmp6 = stringAppend(_OMC_LIT76,omc_NFComponentRef_toString(threadData, _cref));
    tmp7 = stringAppend(tmp6,_OMC_LIT77);
    tmpMeta5 = mmc_mk_cons(tmp7, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT75, tmpMeta5);

    OMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static modelica_metatype closure21_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_createWhenReplacementEquations(threadData_t *threadData, modelica_metatype _cref_map, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FinitialEqs, modelica_metatype _idx, modelica_metatype *out_initialEqs)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _ptr_start_eqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _start_eqs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  _initialEqs = __omcQ_24in_5FinitialEqs;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_eqs = omc_Pointer_create(threadData, tmpMeta1);
  // _start_eqs has no default value.
  {
    modelica_metatype _tpl;
    for (tmpMeta2 = omc_UnorderedMap_toList(threadData, _cref_map); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _tpl = MMC_CAR(tmpMeta2);
      omc_NBInitialization_createWhenReplacementEquation(threadData, _tpl, _ptr_start_eqs, _idx);
    }
  }

  _start_eqs = omc_Pointer_access(threadData, _ptr_start_eqs);

  _equations = omc_NBEquation_EquationPointers_addList(threadData, _start_eqs, _equations);

  _initialEqs = omc_NBEquation_EquationPointers_addList(threadData, _start_eqs, _initialEqs);

  if((omc_Flags_isSet(threadData, _OMC_LIT85) && (!listEmpty(_start_eqs))))
  {
    tmpMeta4 = omc_mk_box1(0, _OMC_LIT78);
    tmp5 = stringAppend(_OMC_LIT79,intString(listLength(_start_eqs)));
    tmp6 = stringAppend(tmp5,_OMC_LIT80);
    tmp7 = stringAppend(omc_List_toStringCustom(threadData, _start_eqs, (modelica_fnptr) omc_mk_box2(0,closure21_NBEquation_Equation_pointerToString,tmpMeta4), omc_StringUtil_headline__4(threadData, tmp6), _OMC_LIT5, _OMC_LIT81, _OMC_LIT5, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT82);
    fputs(omc_string_data(tmp7),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_initialEqs) { *out_initialEqs = _initialEqs; }
  omc_ret_ = _equations;
  return omc_ret_;
}

DLLModelDirection
void omc_NBInitialization_createStartEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _ptr_start_vars, modelica_metatype _ptr_start_vars_init, modelica_metatype _ptr_start_eqs, modelica_metatype _idx, modelica_metatype _algorithm_outputs)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((!omc_UnorderedSet_contains(threadData, omc_NBVariable_getVarName(threadData, _var), _algorithm_outputs)))
  {
    { /* match expression */
      modelica_metatype tmp3_1;
      tmp3_1 = omc_Pointer_access(threadData, _var);
      {
        modelica_metatype _name = NULL;
        modelica_metatype _start_name = NULL;
        modelica_metatype _start_var = NULL;
        modelica_metatype _start_eq = NULL;
        modelica_integer _kind;
        modelica_metatype _start_exp = NULL;
        volatile mmc_switch_type tmp3;
        int tmp4;
        // _name has no default value.
        // _start_name has no default value.
        // _start_var has no default value.
        // _start_eq has no default value.
        // _kind has no default value.
        // _start_exp has no default value.
        tmp3 = 0;
        for (; tmp3 < 4; tmp3++) {
          switch (MMC_SWITCH_CAST(tmp3)) {
          case 0: {
            modelica_metatype tmpMeta5;
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!omc_NBVariable_isArray(threadData, _var)) goto tmp2_end;
            if(omc_NBVariable_isFixed(threadData, _var))
            {
              tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta6 = omc_mk_box3(3, &NBSlice_SLICE__desc, _var, tmpMeta5);
              omc_NBInitialization_createStartEquationSlice(threadData, tmpMeta6, _ptr_start_vars, _ptr_start_eqs, _idx, omc_NBVariable_isFixed(threadData, _var));
            }
            else
            {
              tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta8 = omc_mk_box3(3, &NBSlice_SLICE__desc, _var, tmpMeta7);
              omc_NBInitialization_createStartEquationSlice(threadData, tmpMeta8, _ptr_start_vars_init, _ptr_start_eqs, _idx, omc_NBVariable_isFixed(threadData, _var));
            }
            goto tmp2_done;
          }
          case 1: {
            modelica_metatype tmpMeta9;
            modelica_metatype tmpMeta17;
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!omc_NBVariable_isFixed(threadData, _var)) goto tmp2_end;
            _name = omc_NBVariable_getVarName(threadData, _var);

            { /* match expression */
              modelica_metatype tmp12_1;
              tmp12_1 = omc_NBVariable_getStartAttribute(threadData, _var);
              {
                modelica_metatype _e = NULL;
                volatile mmc_switch_type tmp12;
                int tmp13;
                // _e has no default value.
                tmp12 = 0;
                for (; tmp12 < 2; tmp12++) {
                  switch (MMC_SWITCH_CAST(tmp12)) {
                  case 0: {
                    modelica_metatype tmpMeta14;
                    if (optionNone(tmp12_1)) goto tmp11_end;
                    tmpMeta14 = OMC_BOX_FIELD(tmp12_1, 1);
                    _e = tmpMeta14;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!(!omc_NFExpression_isLiteralXML(threadData, _e))) goto tmp11_end;
                    tmpMeta9 = _e;
                    goto tmp11_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta15;
                    modelica_metatype tmpMeta16;
                    
                    /* Pattern matching succeeded */
                    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
                    omc_NBInitialization_createStartVar(threadData, _var, _name, tmpMeta15 ,&_name ,&_start_var ,&_start_name);

                    tmpMeta16 = mmc_mk_cons(_start_var, omc_Pointer_access(threadData, _ptr_start_vars));
                    omc_Pointer_update(threadData, _ptr_start_vars, tmpMeta16);
                    tmpMeta9 = omc_NFExpression_fromCref(threadData, _start_name, 0 /* false */);
                    goto tmp11_done;
                  }
                  }
                  goto tmp11_end;
                  tmp11_end: ;
                }
                goto goto_10;
                goto_10:;
                goto goto_1;
                goto tmp11_done;
                tmp11_done:;
              }
            }
            _start_exp = tmpMeta9;

            _kind = (omc_NBVariable_isContinuous(threadData, _var, 1 /* true */)?1:2);

            _start_eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _name, 0 /* false */), _start_exp, _idx, _OMC_LIT66, _OMC_LIT65, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

            tmpMeta17 = mmc_mk_cons(_start_eq, omc_Pointer_access(threadData, _ptr_start_eqs));
            omc_Pointer_update(threadData, _ptr_start_eqs, tmpMeta17);
            goto tmp2_done;
          }
          case 2: {
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            { /* match expression */
              modelica_metatype tmp20_1;
              tmp20_1 = omc_NBVariable_getStartAttribute(threadData, _var);
              {
                modelica_metatype _e = NULL;
                volatile mmc_switch_type tmp20;
                int tmp21;
                // _e has no default value.
                tmp20 = 0;
                for (; tmp20 < 2; tmp20++) {
                  switch (MMC_SWITCH_CAST(tmp20)) {
                  case 0: {
                    modelica_metatype tmpMeta22;
                    modelica_metatype tmpMeta23;
                    modelica_metatype tmpMeta24;
                    modelica_metatype tmpMeta25;
                    if (optionNone(tmp20_1)) goto tmp19_end;
                    tmpMeta22 = OMC_BOX_FIELD(tmp20_1, 1);
                    _e = tmpMeta22;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!(!omc_NFExpression_isLiteralXML(threadData, _e))) goto tmp19_end;
                    tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
                    omc_NBInitialization_createStartVar(threadData, _var, omc_NBVariable_getVarName(threadData, _var), tmpMeta23 ,NULL ,&_start_var ,&_start_name);

                    _kind = (omc_NBVariable_isContinuous(threadData, _var, 1 /* true */)?1:2);

                    _start_eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _start_name, 0 /* false */), _e, _idx, _OMC_LIT66, _OMC_LIT65, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

                    tmpMeta24 = mmc_mk_cons(_start_eq, omc_Pointer_access(threadData, _ptr_start_eqs));
                    omc_Pointer_update(threadData, _ptr_start_eqs, tmpMeta24);

                    tmpMeta25 = mmc_mk_cons(_start_var, omc_Pointer_access(threadData, _ptr_start_vars_init));
                    omc_Pointer_update(threadData, _ptr_start_vars_init, tmpMeta25);
                    goto tmp19_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    goto tmp19_done;
                  }
                  }
                  goto tmp19_end;
                  tmp19_end: ;
                }
                goto goto_18;
                goto_18:;
                goto goto_1;
                goto tmp19_done;
                tmp19_done:;
              }
            }
            ;
            goto tmp2_done;
          }
          case 3: {
            
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
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static void closure22_NBInitialization_createStartEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype var)
{
  modelica_metatype ptr_start_vars = OMC_BOX_FIELD(closure, 1);
  modelica_metatype ptr_start_vars_init = OMC_BOX_FIELD(closure, 2);
  modelica_metatype ptr_start_eqs = OMC_BOX_FIELD(closure, 3);
  modelica_metatype idx = OMC_BOX_FIELD(closure, 4);
  modelica_metatype algorithm_outputs = OMC_BOX_FIELD(closure, 5);
  boxptr_NBInitialization_createStartEquation(thData, var, ptr_start_vars, ptr_start_vars_init, ptr_start_eqs, idx, algorithm_outputs);
}static modelica_metatype closure23_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_createStartEquations(threadData_t *threadData, modelica_metatype _states, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5FinitialVars, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FinitialEqs, modelica_metatype _idx, modelica_metatype _algorithm_outputs, modelica_string _str, modelica_metatype *out_initialVars, modelica_metatype *out_equations, modelica_metatype *out_initialEqs)
{
  modelica_metatype _variables = NULL;
  modelica_metatype _initialVars = NULL;
  modelica_metatype _equations = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _ptr_start_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ptr_start_vars_init = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _ptr_start_eqs = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _start_eqs = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _variables = __omcQ_24in_5Fvariables;
  _initialVars = __omcQ_24in_5FinitialVars;
  _equations = __omcQ_24in_5Fequations;
  _initialEqs = __omcQ_24in_5FinitialEqs;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_vars = omc_Pointer_create(threadData, tmpMeta1);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_vars_init = omc_Pointer_create(threadData, tmpMeta2);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_eqs = omc_Pointer_create(threadData, tmpMeta3);
  // _start_eqs has no default value.
  tmpMeta4 = omc_mk_box5(0, _ptr_start_vars, _ptr_start_vars_init, _ptr_start_eqs, _idx, _algorithm_outputs);
  omc_NBVariable_VariablePointers_mapPtr(threadData, _states, (modelica_fnptr) omc_mk_box2(0,closure22_NBInitialization_createStartEquation,tmpMeta4));

  _start_eqs = omc_Pointer_access(threadData, _ptr_start_eqs);

  _variables = omc_NBVariable_VariablePointers_addList(threadData, omc_Pointer_access(threadData, _ptr_start_vars), _variables);

  _initialVars = omc_NBVariable_VariablePointers_addList(threadData, omc_Pointer_access(threadData, _ptr_start_vars_init), _initialVars);

  _equations = omc_NBEquation_EquationPointers_addList(threadData, _start_eqs, _equations);

  _initialEqs = omc_NBEquation_EquationPointers_addList(threadData, _start_eqs, _initialEqs);

  if((omc_Flags_isSet(threadData, _OMC_LIT85) && (!listEmpty(_start_eqs))))
  {
    tmpMeta5 = omc_mk_box1(0, _OMC_LIT78);
    tmp6 = stringAppend(_OMC_LIT86,_str);
    tmp7 = stringAppend(tmp6,_OMC_LIT87);
    tmp8 = stringAppend(tmp7,intString(listLength(_start_eqs)));
    tmp9 = stringAppend(tmp8,_OMC_LIT80);
    tmp10 = stringAppend(omc_List_toStringCustom(threadData, _start_eqs, (modelica_fnptr) omc_mk_box2(0,closure23_NBEquation_Equation_pointerToString,tmpMeta5), omc_StringUtil_headline__4(threadData, tmp9), _OMC_LIT5, _OMC_LIT81, _OMC_LIT5, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT82);
    fputs(omc_string_data(tmp10),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_initialVars) { *out_initialVars = _initialVars; }
  if (out_equations) { *out_equations = _equations; }
  if (out_initialEqs) { *out_initialEqs = _initialEqs; }
  omc_ret_ = _variables;
  return omc_ret_;
}

static modelica_metatype closure24_NBInitialization_removeWhenEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype iter = OMC_BOX_FIELD(closure, 1);
  modelica_metatype cref_map = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBInitialization_removeWhenEquation(thData, $in_eqn, iter, cref_map);
}static modelica_metatype closure25_NBInitialization_collectAlgorithmOutputs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype outputs = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_collectAlgorithmOutputs(thData, $in_eqn, outputs);
}static modelica_metatype closure26_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure27_NBStrongComponent_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype comp)
{
  modelica_metatype index = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBStrongComponent_toString(thData, comp, index);
}static modelica_metatype closure28_NBackendDAE_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype init = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBackendDAE_simplify(thData, $in_bdae, init);
}static modelica_metatype closure29_NBInline_main(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype inline_types = OMC_BOX_FIELD(closure, 1);
  modelica_metatype init = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBInline_main(thData, $in_bdae, inline_types, init);
}static modelica_metatype closure30_NBPartitioning_main(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBPartitioning_main(thData, $in_bdae, kind);
}static modelica_metatype closure31_NBCausalize_main(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBCausalize_main(thData, $in_bdae, kind);
}static modelica_metatype closure32_NBTearing_main(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBTearing_main(thData, $in_bdae, kind);
}
DLLModelDirection
modelica_metatype omc_NBInitialization_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype _variables = NULL;
  modelica_metatype _initialVars = NULL;
  modelica_metatype _equations = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _modules = NULL;
  modelica_metatype _clocks = NULL;
  modelica_metatype _followEquations = NULL;
  modelica_metatype _eq_filter_opt = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  // _variables has no default value.
  // _initialVars has no default value.
  // _equations has no default value.
  // _initialEqs has no default value.
  // _modules has no default value.
  // _clocks has no default value.
  _followEquations = omc_Flags_getConfigStringList(threadData, _OMC_LIT90);
  // _eq_filter_opt has no default value.
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
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_string tmp58;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp8_1;
            tmp8_1 = _bdae;
            {
              modelica_metatype _varData = NULL;
              modelica_metatype _eqData = NULL;
              modelica_metatype _clonedEqns = NULL;
              modelica_metatype _clonedVars = NULL;
              modelica_metatype _algorithm_outputs = NULL;
              modelica_metatype _new_iters = NULL;
              modelica_metatype _cref_map = NULL;
              modelica_metatype _parameter_eqs = NULL;
              modelica_metatype _secondary_eqs = NULL;
              modelica_metatype _primary_aux_eqs = NULL;
              modelica_metatype _parameter_vars = NULL;
              modelica_metatype _secondary_vars = NULL;
              modelica_metatype _primary_comps = NULL;
              volatile mmc_switch_type tmp8;
              int tmp9;
              // _varData has no default value.
              // _eqData has no default value.
              // _clonedEqns has no default value.
              // _clonedVars has no default value.
              _algorithm_outputs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
              _new_iters = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));
              _cref_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
              // _parameter_eqs has no default value.
              // _secondary_eqs has no default value.
              // _primary_aux_eqs has no default value.
              // _parameter_vars has no default value.
              // _secondary_vars has no default value.
              // _primary_comps has no default value.
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
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta24;
                  modelica_metatype tmpMeta28;
                  modelica_string tmp29;
                  modelica_string tmp30;
                  modelica_string tmp31;
                  modelica_metatype tmpMeta32;
                  modelica_string tmp33;
                  modelica_string tmp34;
                  modelica_string tmp35;
                  modelica_metatype tmpMeta36;
                  modelica_metatype tmpMeta37;
                  modelica_metatype tmpMeta38;
                  modelica_metatype tmpMeta39;
                  modelica_metatype tmpMeta40;
                  modelica_metatype tmpMeta41;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,14) == 0) goto tmp7_end;
                  tmpMeta10 = OMC_BOX_FIELD(tmp8_1, 11);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,24) == 0) goto tmp7_end;
                  tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 3);
                  tmpMeta12 = OMC_BOX_FIELD(tmpMeta10, 6);
                  tmpMeta13 = OMC_BOX_FIELD(tmp8_1, 12);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,9) == 0) goto tmp7_end;
                  tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 3);
                  tmpMeta15 = OMC_BOX_FIELD(tmpMeta13, 8);
                  
                  _varData = tmpMeta10;
                  _variables = tmpMeta11;
                  _initialVars = tmpMeta12;
                  _eqData = tmpMeta13;
                  _equations = tmpMeta14;
                  _initialEqs = tmpMeta15;
                  /* Pattern matching succeeded */
                  _clonedEqns = omc_NBEquation_EquationPointers_clone(threadData, _equations, 0 /* false */);

                  _initialEqs = omc_NBEquation_EquationPointers_addList(threadData, omc_NBEquation_EquationPointers_toList(threadData, _initialEqs), _clonedEqns);

                  omc_NBEquation_EquationPointers_mapRemovePtr(threadData, _initialEqs, boxvar_NBEquation_Equation_isClocked);

                  omc_NBEquation_EquationPointers_mapPtr(threadData, _initialEqs, boxvar_NBInitialization_replaceClockedFunctionsEqn);

                  tmpMeta16 = omc_mk_box2(0, _OMC_LIT65, _cref_map);
                  _initialEqs = omc_NBEquation_EquationPointers_map(threadData, _initialEqs, (modelica_fnptr) omc_mk_box2(0,closure24_NBInitialization_removeWhenEquation,tmpMeta16));

                  _equations = omc_NBInitialization_createWhenReplacementEquations(threadData, _cref_map, _equations, _initialEqs, (OMC_BOX_FIELD(_eqData, 2)) ,&_initialEqs);

                  tmpMeta17 = omc_mk_box1(0, _algorithm_outputs);
                  omc_NBEquation_EquationPointers_map(threadData, _initialEqs, (modelica_fnptr) omc_mk_box2(0,closure25_NBInitialization_collectAlgorithmOutputs,tmpMeta17));

                  _variables = omc_NBInitialization_createStartEquations(threadData, (OMC_BOX_FIELD(_varData, 17)), _variables, _initialVars, _equations, _initialEqs, (OMC_BOX_FIELD(_eqData, 2)), _algorithm_outputs, _OMC_LIT91 ,&_initialVars ,&_equations ,&_initialEqs);

                  _variables = omc_NBInitialization_createStartEquations(threadData, (OMC_BOX_FIELD(_varData, 11)), _variables, _initialVars, _equations, _initialEqs, (OMC_BOX_FIELD(_eqData, 2)), _algorithm_outputs, _OMC_LIT92 ,&_initialVars ,&_equations ,&_initialEqs);

                  _variables = omc_NBInitialization_createStartEquations(threadData, (OMC_BOX_FIELD(_varData, 12)), _variables, _initialVars, _equations, _initialEqs, (OMC_BOX_FIELD(_eqData, 2)), _algorithm_outputs, _OMC_LIT93 ,&_initialVars ,&_equations ,&_initialEqs);

                  _variables = omc_NBInitialization_createStartEquations(threadData, (OMC_BOX_FIELD(_varData, 13)), _variables, _initialVars, _equations, _initialEqs, (OMC_BOX_FIELD(_eqData, 2)), _algorithm_outputs, _OMC_LIT94 ,&_initialVars ,&_equations ,&_initialEqs);

                  _variables = omc_NBInitialization_createStartEquations(threadData, (OMC_BOX_FIELD(_varData, 14)), _variables, _initialVars, _equations, _initialEqs, (OMC_BOX_FIELD(_eqData, 2)), _algorithm_outputs, _OMC_LIT95 ,&_initialVars ,&_equations ,&_initialEqs);

                  tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
                  _parameter_eqs = omc_NBInitialization_createParameterEquations(threadData, (OMC_BOX_FIELD(_varData, 20)), _new_iters, (OMC_BOX_FIELD(_eqData, 2)), tmpMeta18, tmpMeta19 ,&_parameter_vars);

                  _parameter_eqs = omc_NBInitialization_createParameterEquations(threadData, (OMC_BOX_FIELD(_varData, 19)), _new_iters, (OMC_BOX_FIELD(_eqData, 2)), _parameter_eqs, _parameter_vars ,&_parameter_vars);

                  _parameter_eqs = omc_NBInitialization_createParameterEquations(threadData, (OMC_BOX_FIELD(_varData, 22)), _new_iters, (OMC_BOX_FIELD(_eqData, 2)), _parameter_eqs, _parameter_vars ,&_parameter_vars);

                  _parameter_eqs = omc_NBInitialization_createParameterEquations(threadData, (OMC_BOX_FIELD(_varData, 23)), _new_iters, (OMC_BOX_FIELD(_eqData, 2)), _parameter_eqs, _parameter_vars ,&_parameter_vars);

                  {
                    modelica_metatype __omcQ_24tmpVar105;
                    modelica_metatype* tmp21;
                    modelica_metatype tmpMeta22;
                    modelica_metatype __omcQ_24tmpVar104;
                    modelica_integer tmp23;
                    modelica_metatype _eqn_ptr_loopVar = 0;
                    modelica_metatype _eqn_ptr;
                    _eqn_ptr_loopVar = omc_NBEquation_EquationPointers_toList(threadData, _initialEqs);
                    tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar105 = tmpMeta22; /* defaultValue */
                    tmp21 = &__omcQ_24tmpVar105;
                    while(1) {
                      tmp23 = 1;
                      while (!listEmpty(_eqn_ptr_loopVar)) {
                        _eqn_ptr = MMC_CAR(_eqn_ptr_loopVar);
                        _eqn_ptr_loopVar = MMC_CDR(_eqn_ptr_loopVar);
                        if (omc_NBInitialization_isFunctionAliasBinding(threadData, _eqn_ptr)) {
                          tmp23--;
                          break;
                        }
                      }
                      if (tmp23 == 0) {
                        __omcQ_24tmpVar104 = _eqn_ptr;
                        *tmp21 = mmc_mk_cons(__omcQ_24tmpVar104,0);
                        tmp21 = &MMC_CDR(*tmp21);
                      } else if (tmp23 == 1) {
                        break;
                      } else {
                        goto goto_6;
                      }
                    }
                    *tmp21 = mmc_mk_nil();
                    tmpMeta20 = __omcQ_24tmpVar105;
                  }
                  _primary_comps = omc_NBInitialization_selectPrimaryParameters(threadData, _parameter_eqs, _parameter_vars, tmpMeta20, omc_NBEquation_EquationPointers_toList(threadData, _initialEqs) ,&_secondary_eqs ,&_secondary_vars ,&_primary_aux_eqs);

                  _equations = omc_NBEquation_EquationPointers_addList(threadData, _parameter_eqs, _equations);

                  _initialEqs = omc_NBEquation_EquationPointers_removeList(threadData, _primary_aux_eqs, _initialEqs);

                  _initialEqs = omc_NBEquation_EquationPointers_addList(threadData, _secondary_eqs, _initialEqs);

                  {
                    modelica_metatype __omcQ_24tmpVar107;
                    modelica_metatype* tmp25;
                    modelica_metatype tmpMeta26;
                    modelica_metatype __omcQ_24tmpVar106;
                    modelica_integer tmp27;
                    modelica_metatype _eqn_ptr_loopVar = 0;
                    modelica_metatype _eqn_ptr;
                    _eqn_ptr_loopVar = _primary_aux_eqs;
                    tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar107 = tmpMeta26; /* defaultValue */
                    tmp25 = &__omcQ_24tmpVar107;
                    while(1) {
                      tmp27 = 1;
                      if (!listEmpty(_eqn_ptr_loopVar)) {
                        _eqn_ptr = MMC_CAR(_eqn_ptr_loopVar);
                        _eqn_ptr_loopVar = MMC_CDR(_eqn_ptr_loopVar);
                        tmp27--;
                      }
                      if (tmp27 == 0) {
                        __omcQ_24tmpVar106 = omc_NBVariable_getVarPointer(threadData, omc_NFExpression_toCref(threadData, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, omc_Pointer_access(threadData, _eqn_ptr)))), _OMC_LIT96);
                        *tmp25 = mmc_mk_cons(__omcQ_24tmpVar106,0);
                        tmp25 = &MMC_CDR(*tmp25);
                      } else if (tmp27 == 1) {
                        break;
                      } else {
                        goto goto_6;
                      }
                    }
                    *tmp25 = mmc_mk_nil();
                    tmpMeta24 = __omcQ_24tmpVar107;
                  }
                  _initialVars = omc_NBVariable_VariablePointers_removeList(threadData, tmpMeta24, _initialVars);

                  _initialVars = omc_NBVariable_VariablePointers_addList(threadData, _secondary_vars, _initialVars);

                  if((omc_Flags_isSet(threadData, _OMC_LIT85) || omc_Flags_isSet(threadData, _OMC_LIT101)))
                  {
                    tmpMeta28 = omc_mk_box1(0, _OMC_LIT78);
                    tmp29 = stringAppend(_OMC_LIT97,intString(listLength(_secondary_eqs)));
                    tmp30 = stringAppend(tmp29,_OMC_LIT80);
                    tmp31 = stringAppend(omc_List_toStringCustom(threadData, _secondary_eqs, (modelica_fnptr) omc_mk_box2(0,closure26_NBEquation_Equation_pointerToString,tmpMeta28), omc_StringUtil_headline__4(threadData, tmp30), _OMC_LIT5, _OMC_LIT81, _OMC_LIT5, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT82);
                    fputs(omc_string_data(tmp31),stdout);

                    tmpMeta32 = omc_mk_box1(0, omc_mk_integer(((modelica_integer) -1)));
                    tmp33 = stringAppend(_OMC_LIT98,intString(listLength(_primary_comps)));
                    tmp34 = stringAppend(tmp33,_OMC_LIT80);
                    tmp35 = stringAppend(omc_List_toStringCustom(threadData, _primary_comps, (modelica_fnptr) omc_mk_box2(0,closure27_NBStrongComponent_toString,tmpMeta32), omc_StringUtil_headline__4(threadData, tmp34), _OMC_LIT5, _OMC_LIT81, _OMC_LIT5, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT82);
                    fputs(omc_string_data(tmp35),stdout);
                  }

                  _clonedVars = omc_NBVariable_VariablePointers_clone(threadData, _initialVars, 1 /* true */);

                  omc_NBVariable_VariablePointers_mapRemovePtr(threadData, _clonedVars, boxvar_NBVariable_isClocked);

                  tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(26));
                  memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_varData), 26*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[3] = _variables;
                  _varData = tmpMeta36;

                  tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(26));
                  memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_varData), 26*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[6] = omc_NBVariable_VariablePointers_compress(threadData, _clonedVars);
                  _varData = tmpMeta37;

                  tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(11));
                  memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[3] = _equations;
                  _eqData = tmpMeta38;

                  tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(11));
                  memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[8] = omc_NBEquation_EquationPointers_compress(threadData, _initialEqs);
                  _eqData = tmpMeta39;

                  tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(16));
                  memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[12] = _eqData;
                  _bdae = tmpMeta40;

                  tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(16));
                  memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[10] = _primary_comps;
                  _bdae = tmpMeta41;
                  tmpMeta5 = omc_NBackendDAE_setVarData(threadData, _bdae, omc_NBVariable_VarData_addTypedList(threadData, _varData, omc_UnorderedSet_toList(threadData, _new_iters), 9));
                  goto tmp7_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  omc_Error_addMessage(threadData, _OMC_LIT75, _OMC_LIT103);
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

          if(listEmpty(_followEquations))
          {
            _eq_filter_opt = mmc_mk_none();
          }
          else
          {
            _eq_filter_opt = mmc_mk_some(omc_UnorderedSet_fromList(threadData, _followEquations, boxvar_stringHashDjb2, boxvar_stringEqual));
          }

          tmpMeta43 = omc_mk_box1(0, omc_mk_boolean(1 /* true */));
          tmpMeta44 = omc_mk_box2(0, (modelica_fnptr) omc_mk_box2(0,closure28_NBackendDAE_simplify,tmpMeta43), _OMC_LIT104);
          tmpMeta45 = omc_mk_box2(0, _OMC_LIT112, omc_mk_boolean(1 /* true */));
          tmpMeta46 = omc_mk_box2(0, (modelica_fnptr) omc_mk_box2(0,closure29_NBInline_main,tmpMeta45), _OMC_LIT113);
          tmpMeta47 = omc_mk_box1(0, omc_mk_integer(5));
          tmpMeta48 = omc_mk_box2(0, (modelica_fnptr) omc_mk_box2(0,closure30_NBPartitioning_main,tmpMeta47), _OMC_LIT114);
          tmpMeta49 = omc_mk_box2(0, boxvar_NBInitialization_cleanup, _OMC_LIT115);
          tmpMeta50 = omc_mk_box1(0, omc_mk_integer(5));
          tmpMeta51 = omc_mk_box2(0, (modelica_fnptr) omc_mk_box2(0,closure31_NBCausalize_main,tmpMeta50), _OMC_LIT116);
          tmpMeta52 = omc_mk_box1(0, omc_mk_integer(5));
          tmpMeta53 = omc_mk_box2(0, (modelica_fnptr) omc_mk_box2(0,closure32_NBTearing_main,tmpMeta52), _OMC_LIT117);
          tmpMeta42 = mmc_mk_cons(tmpMeta44, mmc_mk_cons(tmpMeta46, mmc_mk_cons(tmpMeta48, mmc_mk_cons(tmpMeta49, mmc_mk_cons(tmpMeta51, mmc_mk_cons(tmpMeta53, MMC_REFSTRUCTLIT(mmc_nil)))))));
          _modules = tmpMeta42;

          _bdae = omc_NBackendDAE_applyModules(threadData, _bdae, _modules, _eq_filter_opt, ((modelica_integer) 30) ,&_clocks);

          if(omc_Flags_isSet(threadData, _OMC_LIT121))
          {
            if((!listEmpty(_clocks)))
            {
              fputs(omc_string_data(omc_StringUtil_headline__4(threadData, _OMC_LIT118)),stdout);

              {
                modelica_metatype __omcQ_24tmpVar109;
                modelica_metatype* tmp55;
                modelica_metatype tmpMeta56;
                modelica_string __omcQ_24tmpVar108;
                modelica_integer tmp57;
                modelica_metatype _clck_loopVar = 0;
                modelica_metatype _clck;
                _clck_loopVar = _clocks;
                tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar109 = tmpMeta56; /* defaultValue */
                tmp55 = &__omcQ_24tmpVar109;
                while(1) {
                  tmp57 = 1;
                  if (!listEmpty(_clck_loopVar)) {
                    _clck = MMC_CAR(_clck_loopVar);
                    _clck_loopVar = MMC_CDR(_clck_loopVar);
                    tmp57--;
                  }
                  if (tmp57 == 0) {
                    __omcQ_24tmpVar108 = omc_NBModule_moduleClockString(threadData, _clck);
                    *tmp55 = mmc_mk_cons(__omcQ_24tmpVar108,0);
                    tmp55 = &MMC_CDR(*tmp55);
                  } else if (tmp57 == 1) {
                    break;
                  } else {
                    goto goto_1;
                  }
                }
                *tmp55 = mmc_mk_nil();
                tmpMeta54 = __omcQ_24tmpVar109;
              }
              tmp58 = stringAppend(stringDelimitList(tmpMeta54, _OMC_LIT81),_OMC_LIT81);
              fputs(omc_string_data(tmp58),stdout);
            }
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT75, _OMC_LIT123);

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
  omc_ret_ = _bdae;
  return omc_ret_;
}

