#include "omc_simulation_settings.h"
#include "SerializeInitXML.h"
#define _OMC_LIT0_data "%d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,2,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "%.15g"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,5,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "initial value of unknown type: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,31,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/SimCode/SerializeInitXML.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,74,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,1.758714003e9);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(640)),MMC_IMMEDIATE(MMC_TAGFIXNUM(18)),MMC_IMMEDIATE(MMC_TAGFIXNUM(640)),MMC_IMMEDIATE(MMC_TAGFIXNUM(108)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "-%02d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,5,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "T%02d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,5,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ":%02d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,5,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ":%02dZ"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,6,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "\"alias\" aliasVariable=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,23,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "\" aliasVariableId=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,19,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "\"negatedAlias\" aliasVariable=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,30,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "\"noAlias\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,9,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "discrete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,8,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "parameter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,9,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "constant"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,8,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "continuous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,10,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,4,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "output"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,6,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "input"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,5,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "local"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,5,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "calculatedParameter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,19,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,0,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,2,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data " fixed=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,8,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "=\"true\" "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,8,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "=\"false\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,8,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "<Integer "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,9,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "start"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,5,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,3,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,3,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "unit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,4,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "displayUnit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,11,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data " />"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,3,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "<Real "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,6,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "useNominal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,10,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "nominal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,7,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "<Boolean "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,9,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "<String "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,8,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "<ExternalObject path=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,22,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,1,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "ScalarVariableType: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,20,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT44_6,1.758714003e9);
#define _OMC_LIT44_6 MMC_REFREALLIT(_OMC_LIT_STRUCT44_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(490)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(490)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT44_6}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "    name = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,12,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,2,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "    valueReference = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,22,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "    description = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,19,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "    variability = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,19,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\" isDiscrete = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,16,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "    causality = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,17,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "\" isValueChangeable = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,23,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "    inputIndex = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,18,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "    alias = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,12,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,1,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "    classIndex = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,18,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "\" classType = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,15,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "    isProtected = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,19,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "\" hideResult = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,16,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "\" isEncrypted = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,17,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,4,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,5,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "\" initNonlinear = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,19,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "    fileName = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,16,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "\" startLine = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,15,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "\" startColumn = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,17,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "\" endLine = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,13,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "\" endColumn = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,15,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "\" fileWritable = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,18,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "\">\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,3,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "    <Dimension start=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,22,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "\"/>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,4,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "ArrayVariable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,13,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "ScalarVariable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,14,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "  <"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,3,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,4,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,3,3) {&Tpl_Text_MEM__TEXT__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "\n  </"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,5,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data ">\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,2,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "omsic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,5,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "omsicpp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,7,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "rSta"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,4,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "rDer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,4,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "rAlg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,4,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "rPar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,4,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "rAli"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,4,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "iAlg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,4,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "iPar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,4,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "iAli"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,4,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "bAlg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,4,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "bPar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,4,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "bAli"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,4,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "sAlg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,4,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "sPar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,4,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "sAli"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,4,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "rSen"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,4,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,1,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "_init.xml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,9,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "2.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,3,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "1.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,3,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "<?xml version = \"1.0\" encoding=\"UTF-8\"?>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,42,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "<!-- description of the model interface using an extention of the FMI standard -->\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,83,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "<fmiModelDescription\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,21,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "  fmiVersion                          = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,41,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,3,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "  modelName                           = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,41,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "  modelIdentifier                     = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,41,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,1,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "  OPENMODELICAHOME                    = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,41,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "  guid                                = \"{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,42,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "}\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,4,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "  description                         = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,41,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "  generationTool                      = \"OpenModelica Compiler "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,63,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "  generationDateAndTime               = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,41,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "  variableNamingConvention            = \"structured\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,54,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "  numberOfEventIndicators             = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,41,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "\"  cmt_numberOfEventIndicators             = \"NG:       number of zero crossings,                           FMI\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,113,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "  numberOfTimeEvents                  = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,41,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "\"  cmt_numberOfTimeEvents                  = \"NG_SAM:   number of zero crossings that are samples,          OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,114,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "  numberOfInputVariables              = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,41,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "\"  cmt_numberOfInputVariables              = \"NI:       number of inputvar on topmodel,                     OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,113,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "  numberOfOutputVariables             = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,41,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "\"  cmt_numberOfOutputVariables             = \"NO:       number of outputvar on topmodel,                    OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,114,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "  numberOfExternalObjects             = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,41,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "\"  cmt_numberOfExternalObjects             = \"NEXT:     number of external objects,                         OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,113,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "  numberOfFunctions                   = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,41,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "\"  cmt_numberOfFunctions                   = \"NFUNC:    number of functions used by the simulation,         OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,114,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "  numberOfContinuousStates            = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,41,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "\"  cmt_numberOfContinuousStates            = \"NX:       number of states,                                   FMI\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,113,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "  numberOfRealAlgebraicVariables      = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,41,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "\"  cmt_numberOfRealAlgebraicVariables      = \"NY:       number of real variables,                           OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,113,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "  numberOfRealAlgebraicAliasVariables = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,41,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "\"  cmt_numberOfRealAlgebraicAliasVariables = \"NA:       number of alias variables,                          OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,113,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "  numberOfRealParameters              = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,41,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "\"  cmt_numberOfRealParameters              = \"NP:       number of parameters,                               OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,114,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "  numberOfIntegerAlgebraicVariables   = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,41,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "\"  cmt_numberOfIntegerAlgebraicVariables   = \"NYINT:    number of alg. int variables,                       OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,113,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "  numberOfIntegerAliasVariables       = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,41,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "\"  cmt_numberOfIntegerAliasVariables       = \"NAINT:    number of alias int variables,                      OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,113,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "  numberOfIntegerParameters           = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,41,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "\"  cmt_numberOfIntegerParameters           = \"NPINT:    number of int parameters,                           OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,114,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "  numberOfStringAlgebraicVariables    = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,41,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "\"  cmt_numberOfStringAlgebraicVariables    = \"NYSTR:    number of alg. string variables,                    OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,113,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "  numberOfStringAliasVariables        = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,41,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "\"  cmt_numberOfStringAliasVariables        = \"NASTR:    number of alias string variables,                   OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,113,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "  numberOfStringParameters            = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,41,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "\"  cmt_numberOfStringParameters            = \"NPSTR:    number of string parameters,                        OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,114,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "  numberOfBooleanAlgebraicVariables   = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,41,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "\"  cmt_numberOfBooleanAlgebraicVariables   = \"NYBOOL:   number of alg. bool variables,                      OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,113,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "  numberOfBooleanAliasVariables       = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,41,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "\"  cmt_numberOfBooleanAliasVariables       = \"NABOOL:   number of alias bool variables,                     OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,113,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "  numberOfBooleanParameters           = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,41,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "\"  cmt_numberOfBooleanParameters           = \"NPBOOL:   number of bool parameters,                          OMC\" >\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,117,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "  <!-- startTime, stopTime, tolerance are FMI specific, all others are OMC specific -->\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,88,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "  <DefaultExperiment\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,21,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "    startTime      = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,22,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
#define _OMC_LIT157_data "    stopTime       = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT157,22,_OMC_LIT157_data);
#define _OMC_LIT157 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data "    stepSize       = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,22,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "    tolerance      = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,22,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "    solver         = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,22,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "    outputFormat   = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,22,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data "    variableFilter = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,22,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "\" />\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,6,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#define _OMC_LIT164_data "  <!-- variables in the model -->\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT164,34,_OMC_LIT164_data);
#define _OMC_LIT164 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT164)
#define _OMC_LIT165_data "  <ModelVariables>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT165,20,_OMC_LIT165_data);
#define _OMC_LIT165 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT165)
#define _OMC_LIT166_data "\n\n\n  </ModelVariables>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT166,24,_OMC_LIT166_data);
#define _OMC_LIT166 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT166)
#define _OMC_LIT167_data "\n</fmiModelDescription>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT167,25,_OMC_LIT167_data);
#define _OMC_LIT167 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT167)
#include "util/modelica.h"

#include "SerializeInitXML_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_writeExp(threadData_t *threadData, modelica_complex _file, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_writeExp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_writeExp,2,0) {(void*) boxptr_SerializeInitXML_writeExp,0}};
#define boxvar_SerializeInitXML_writeExp MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_writeExp)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_xsdateTime(threadData_t *threadData, modelica_complex _file, modelica_metatype _dt);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_xsdateTime(threadData_t *threadData, modelica_metatype _file, modelica_metatype _dt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_xsdateTime,2,0) {(void*) boxptr_SerializeInitXML_xsdateTime,0}};
#define boxvar_SerializeInitXML_xsdateTime MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_xsdateTime)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_getAliasVar(threadData_t *threadData, modelica_complex _file, modelica_metatype _simVar);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_getAliasVar(threadData_t *threadData, modelica_metatype _file, modelica_metatype _simVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_getAliasVar,2,0) {(void*) boxptr_SerializeInitXML_getAliasVar,0}};
#define boxvar_SerializeInitXML_getAliasVar MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_getAliasVar)
PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_getVariablity(threadData_t *threadData, modelica_metatype _varKind);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_getVariablity,2,0) {(void*) boxptr_SerializeInitXML_getVariablity,0}};
#define boxvar_SerializeInitXML_getVariablity MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_getVariablity)
PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_getCausality(threadData_t *threadData, modelica_metatype _c);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_getCausality,2,0) {(void*) boxptr_SerializeInitXML_getCausality,0}};
#define boxvar_SerializeInitXML_getCausality MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_getCausality)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData_t *threadData, modelica_complex _file, modelica_string _attr, modelica_string _name);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeStringAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeStringAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableTypeStringAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableTypeStringAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeStringAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _attr, modelica_string _name);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableTypeAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableTypeAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData_t *threadData, modelica_complex _file, modelica_boolean _isFixed);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _isFixed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeFixedAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableTypeFixedAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableTypeFixedAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeFixedAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeUseAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _startValue, modelica_string _use, modelica_string _name);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeUseAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _startValue, modelica_metatype _use, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeUseAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableTypeUseAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableTypeUseAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeUseAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableType(threadData_t *threadData, modelica_complex _file, modelica_string _unit, modelica_string _displayUnit, modelica_metatype _minValue, modelica_metatype _maxValue, modelica_metatype _startValue, modelica_metatype _nominalValue, modelica_boolean _isFixed, modelica_metatype _t);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableType(threadData_t *threadData, modelica_metatype _file, modelica_metatype _unit, modelica_metatype _displayUnit, modelica_metatype _minValue, modelica_metatype _maxValue, modelica_metatype _startValue, modelica_metatype _nominalValue, modelica_metatype _isFixed, modelica_metatype _t);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableType,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableType,0}};
#define boxvar_SerializeInitXML_scalarVariableType MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableType)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _simVar, modelica_string _classType, modelica_integer _valueReference, modelica_integer _classIndex);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _simVar, modelica_metatype _classType, modelica_metatype _valueReference, modelica_metatype _classIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariable(threadData_t *threadData, modelica_complex _file, modelica_metatype _var, modelica_string _classType, modelica_integer _valueReference, modelica_integer _classIndex);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariable(threadData_t *threadData, modelica_metatype _file, modelica_metatype _var, modelica_metatype _classType, modelica_metatype _valueReference, modelica_metatype _classIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariable,2,0) {(void*) boxptr_SerializeInitXML_scalarVariable,0}};
#define boxvar_SerializeInitXML_scalarVariable MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariable)
PROTECTED_FUNCTION_STATIC modelica_integer omc_SerializeInitXML_scalarVariables(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_string _classType, modelica_integer __omcQ_24in_5FvalueReference, modelica_integer __omcQ_24in_5Findex, modelica_integer *out_index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeInitXML_scalarVariables(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _classType, modelica_metatype __omcQ_24in_5FvalueReference, modelica_metatype __omcQ_24in_5Findex, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariables,2,0) {(void*) boxptr_SerializeInitXML_scalarVariables,0}};
#define boxvar_SerializeInitXML_scalarVariables MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariables)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_modelVariables(threadData_t *threadData, modelica_complex _file, modelica_metatype _modelInfo);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_modelVariables(threadData_t *threadData, modelica_metatype _file, modelica_metatype _modelInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_modelVariables,2,0) {(void*) boxptr_SerializeInitXML_modelVariables,0}};
#define boxvar_SerializeInitXML_modelVariables MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_modelVariables)

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_writeExp(threadData_t *threadData, modelica_complex _file, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), _OMC_LIT0);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), _OMC_LIT1);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), 4);
          goto tmp2_done;
        }
        case 6: {
          modelica_string tmp4;
          
          /* Pattern matching succeeded */
          tmp4 = modelica_boolean_to_modelica_string(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), ((modelica_integer) 0), 1 /* true */);
          omc_File_write(threadData, _file, tmp4);
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), _OMC_LIT0);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT2,omc_ExpressionDump_printExpStr(threadData, _exp));
          omc_Error_addInternalError(threadData, tmpMeta5, _OMC_LIT4);
          goto goto_1;
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
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_writeExp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _exp)
{
  omc_SerializeInitXML_writeExp(threadData, _file, _exp);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_xsdateTime(threadData_t *threadData, modelica_complex _file, modelica_metatype _dt)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 7)))), _OMC_LIT0);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 6)))), _OMC_LIT5);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 5)))), _OMC_LIT5);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 4)))), _OMC_LIT6);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 3)))), _OMC_LIT7);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 2)))), _OMC_LIT8);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_xsdateTime(threadData_t *threadData, modelica_metatype _file, modelica_metatype _dt)
{
  omc_SerializeInitXML_xsdateTime(threadData, _file, _dt);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_getAliasVar(threadData_t *threadData, modelica_complex _file, modelica_metatype _simVar)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _simVar;
    {
      modelica_metatype _aliasvar = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _aliasvar has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 16));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,1,1) == 0) goto tmp2_end;
          
          _aliasvar = tmpMeta5;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT9);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aliasvar), 2))), 4);

          omc_File_write(threadData, _file, _OMC_LIT10);

          omc_File_write(threadData, _file, omc_SimCodeUtil_getValueReference(threadData, _simVar, omc_SimCodeUtil_getSimCode(threadData), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT11);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 16));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp2_end;
          
          _aliasvar = tmpMeta6;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT12);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aliasvar), 2))), 4);

          omc_File_write(threadData, _file, _OMC_LIT10);

          omc_File_write(threadData, _file, omc_SimCodeUtil_getValueReference(threadData, _simVar, omc_SimCodeUtil_getSimCode(threadData), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT11);
          goto tmp2_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT13);
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
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_getAliasVar(threadData_t *threadData, modelica_metatype _file, modelica_metatype _simVar)
{
  omc_SerializeInitXML_getAliasVar(threadData, _file, _simVar);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_getVariablity(threadData_t *threadData, modelica_metatype _varKind)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _varKind;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT17;
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

PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_getCausality(threadData_t *threadData, modelica_metatype _c)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _c;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT19;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT21;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,4,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,5,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 6: {
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData_t *threadData, modelica_complex _file, modelica_string _attr, modelica_string _name)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((stringEqual(_attr, _OMC_LIT23)))
  {
    goto _return;
  }

  omc_File_write(threadData, _file, _OMC_LIT24);

  omc_File_write(threadData, _file, _name);

  omc_File_write(threadData, _file, _OMC_LIT25);

  omc_File_writeEscape(threadData, _file, _attr, 4);

  omc_File_write(threadData, _file, _OMC_LIT11);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeStringAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _name)
{
  omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _attr, _name);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _attr, modelica_string _name)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _attr;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          _exp = tmpMeta5;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_write(threadData, _file, _name);

          omc_File_write(threadData, _file, _OMC_LIT25);

          omc_SerializeInitXML_writeExp(threadData, _file, _exp);

          omc_File_write(threadData, _file, _OMC_LIT11);
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
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _name)
{
  omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _attr, _name);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData_t *threadData, modelica_complex _file, modelica_boolean _isFixed)
{
  modelica_string tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT26);

  tmp1 = modelica_boolean_to_modelica_string(_isFixed, ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp1);

  omc_File_write(threadData, _file, _OMC_LIT11);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _isFixed)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isFixed);
  omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeUseAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _startValue, modelica_string _use, modelica_string _name)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  omc_File_write(threadData, _file, _use);

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _startValue;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          _exp = tmpMeta5;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT27);

          omc_File_write(threadData, _file, _name);

          omc_File_write(threadData, _file, _OMC_LIT25);

          omc_SerializeInitXML_writeExp(threadData, _file, _exp);

          omc_File_write(threadData, _file, _OMC_LIT11);
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT28);
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
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeUseAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _startValue, modelica_metatype _use, modelica_metatype _name)
{
  omc_SerializeInitXML_scalarVariableTypeUseAttribute(threadData, _file, _startValue, _use, _name);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableType(threadData_t *threadData, modelica_complex _file, modelica_string _unit, modelica_string _displayUnit, modelica_metatype _minValue, modelica_metatype _maxValue, modelica_metatype _startValue, modelica_metatype _nominalValue, modelica_boolean _isFixed, modelica_metatype _t)
{
  modelica_metatype _path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _path has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _t;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 7; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT29);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _startValue, _OMC_LIT30);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, _isFixed);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _minValue, _OMC_LIT31);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _maxValue, _OMC_LIT32);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _unit, _OMC_LIT33);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _displayUnit, _OMC_LIT34);

          omc_File_write(threadData, _file, _OMC_LIT35);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT36);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _startValue, _OMC_LIT30);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, _isFixed);

          omc_SerializeInitXML_scalarVariableTypeUseAttribute(threadData, _file, _nominalValue, _OMC_LIT37, _OMC_LIT38);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _minValue, _OMC_LIT31);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _maxValue, _OMC_LIT32);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _unit, _OMC_LIT33);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _displayUnit, _OMC_LIT34);
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT39);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _startValue, _OMC_LIT30);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, _isFixed);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _unit, _OMC_LIT33);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _displayUnit, _OMC_LIT34);
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT40);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _startValue, _OMC_LIT30);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, _isFixed);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _unit, _OMC_LIT33);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _displayUnit, _OMC_LIT34);
          goto tmp2_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT29);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _startValue, _OMC_LIT30);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, _isFixed);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _unit, _OMC_LIT33);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _displayUnit, _OMC_LIT34);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,9,4) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,17,1) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          
          _path = tmpMeta6;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT41);

          omc_Dump_writePath(threadData, _file, _path, 4, _OMC_LIT42, 1 /* true */);

          omc_File_write(threadData, _file, _OMC_LIT11);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT43,omc_Types_unparseType(threadData, _t));
          omc_Error_addInternalError(threadData, tmpMeta7, _OMC_LIT44);
          goto goto_1;
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

  omc_File_write(threadData, _file, _OMC_LIT35);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableType(threadData_t *threadData, modelica_metatype _file, modelica_metatype _unit, modelica_metatype _displayUnit, modelica_metatype _minValue, modelica_metatype _maxValue, modelica_metatype _startValue, modelica_metatype _nominalValue, modelica_metatype _isFixed, modelica_metatype _t)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isFixed);
  omc_SerializeInitXML_scalarVariableType(threadData, _file, _unit, _displayUnit, _minValue, _maxValue, _startValue, _nominalValue, tmp1, _t);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _simVar, modelica_string _classType, modelica_integer _valueReference, modelica_integer _classIndex)
{
  modelica_integer _inputIndex;
  modelica_metatype _info = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _inputIndex = omc_SimCodeUtil_getInputIndex(threadData, _simVar);
  _info = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 17)))), 2)));
  omc_File_write(threadData, _file, _OMC_LIT45);

  omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 2))), 4);

  omc_File_write(threadData, _file, _OMC_LIT46);

  omc_File_write(threadData, _file, _OMC_LIT47);

  omc_File_writeInt(threadData, _file, _valueReference, _OMC_LIT0);

  omc_File_write(threadData, _file, _OMC_LIT46);

  if((!stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 4))), _OMC_LIT23)))
  {
    omc_File_write(threadData, _file, _OMC_LIT48);

    omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 4))), 4);

    omc_File_write(threadData, _file, _OMC_LIT46);
  }

  omc_File_write(threadData, _file, _OMC_LIT49);

  omc_File_write(threadData, _file, omc_SerializeInitXML_getVariablity(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 3)))));

  omc_File_write(threadData, _file, _OMC_LIT50);

  tmp1 = modelica_boolean_to_modelica_string(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 14)))), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp1);

  omc_File_write(threadData, _file, _OMC_LIT46);

  omc_File_write(threadData, _file, _OMC_LIT51);

  omc_File_write(threadData, _file, omc_SerializeInitXML_getCausality(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 18)))));

  omc_File_write(threadData, _file, _OMC_LIT52);

  tmp2 = modelica_boolean_to_modelica_string(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 22)))), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp2);

  omc_File_write(threadData, _file, _OMC_LIT46);

  if((_inputIndex != ((modelica_integer) -1)))
  {
    omc_File_write(threadData, _file, _OMC_LIT53);

    omc_File_writeInt(threadData, _file, _inputIndex, _OMC_LIT0);

    omc_File_write(threadData, _file, _OMC_LIT46);
  }

  omc_File_write(threadData, _file, _OMC_LIT54);

  omc_SerializeInitXML_getAliasVar(threadData, _file, _simVar);

  omc_File_write(threadData, _file, _OMC_LIT55);

  omc_File_write(threadData, _file, _OMC_LIT56);

  omc_File_writeInt(threadData, _file, _classIndex, _OMC_LIT0);

  omc_File_write(threadData, _file, _OMC_LIT57);

  omc_File_write(threadData, _file, _classType);

  omc_File_write(threadData, _file, _OMC_LIT46);

  omc_File_write(threadData, _file, _OMC_LIT58);

  tmp3 = modelica_boolean_to_modelica_string(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 23)))), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp3);

  omc_File_write(threadData, _file, _OMC_LIT59);

  omc_File_write(threadData, _file, omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 24))), boxvar_boolString, _OMC_LIT23));

  omc_File_write(threadData, _file, _OMC_LIT60);

  omc_File_write(threadData, _file, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 25))))?_OMC_LIT61:_OMC_LIT62));

  omc_File_write(threadData, _file, _OMC_LIT63);

  omc_File_write(threadData, _file, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 27))))?_OMC_LIT61:_OMC_LIT62));

  omc_File_write(threadData, _file, _OMC_LIT46);

  omc_File_write(threadData, _file, _OMC_LIT64);

  omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))), 4);

  omc_File_write(threadData, _file, _OMC_LIT65);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4)))), _OMC_LIT0);

  omc_File_write(threadData, _file, _OMC_LIT66);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5)))), _OMC_LIT0);

  omc_File_write(threadData, _file, _OMC_LIT67);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 6)))), _OMC_LIT0);

  omc_File_write(threadData, _file, _OMC_LIT68);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 7)))), _OMC_LIT0);

  omc_File_write(threadData, _file, _OMC_LIT69);

  tmp4 = modelica_boolean_to_modelica_string((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))))), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp4);

  omc_File_write(threadData, _file, _OMC_LIT70);

  {
    modelica_metatype _dim;
    for (tmpMeta5 = omc_Expression_arrayDimension(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 13)))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _dim = MMC_CAR(tmpMeta5);
      tmpMeta6 = stringAppend(_OMC_LIT71,intString(omc_Expression_dimensionSize(threadData, _dim)));
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT72);
      omc_File_write(threadData, _file, tmpMeta7);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _simVar, modelica_metatype _classType, modelica_metatype _valueReference, modelica_metatype _classIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_valueReference);
  tmp2 = mmc_unbox_integer(_classIndex);
  omc_SerializeInitXML_scalarVariableAttribute(threadData, _file, _simVar, _classType, tmp1, tmp2);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariable(threadData_t *threadData, modelica_complex _file, modelica_metatype _var, modelica_string _classType, modelica_integer _valueReference, modelica_integer _classIndex)
{
  modelica_string _type_name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _type_name = (omc_DAEUtil_expTypeArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 13))))?_OMC_LIT73:_OMC_LIT74);
  tmpMeta1 = stringAppend(_OMC_LIT75,_type_name);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT55);
  omc_File_write(threadData, _file, tmpMeta2);

  omc_SerializeInitXML_scalarVariableAttribute(threadData, _file, _var, _classType, _valueReference, _classIndex);

  omc_File_write(threadData, _file, _OMC_LIT76);

  omc_File_write(threadData, _file, omc_Tpl_textString(threadData, omc_CodegenUtil_ScalarVariableType(threadData, _OMC_LIT77, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))), mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 12)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 13))))));

  tmpMeta3 = stringAppend(_OMC_LIT78,_type_name);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT79);
  omc_File_write(threadData, _file, tmpMeta4);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariable(threadData_t *threadData, modelica_metatype _file, modelica_metatype _var, modelica_metatype _classType, modelica_metatype _valueReference, modelica_metatype _classIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_valueReference);
  tmp2 = mmc_unbox_integer(_classIndex);
  omc_SerializeInitXML_scalarVariable(threadData, _file, _var, _classType, tmp1, tmp2);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_SerializeInitXML_scalarVariables(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_string _classType, modelica_integer __omcQ_24in_5FvalueReference, modelica_integer __omcQ_24in_5Findex, modelica_integer *out_index)
{
  modelica_integer _valueReference;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _valueReference = __omcQ_24in_5FvalueReference;
  _index = __omcQ_24in_5Findex;
  {
    modelica_metatype _var;
    for (tmpMeta1 = _vars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      omc_SerializeInitXML_scalarVariable(threadData, _file, _var, _classType, _valueReference, _index);

      _index = ((modelica_integer) 1) + _index;

      _valueReference = ((modelica_integer) 1) + _valueReference;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_index) { *out_index = _index; }
  return _valueReference;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeInitXML_scalarVariables(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _classType, modelica_metatype __omcQ_24in_5FvalueReference, modelica_metatype __omcQ_24in_5Findex, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_integer _valueReference;
  modelica_metatype out_valueReference;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5FvalueReference);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Findex);
  _valueReference = omc_SerializeInitXML_scalarVariables(threadData, _file, _vars, _classType, tmp1, tmp2, &_index);
  out_valueReference = mmc_mk_icon(_valueReference);
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return out_valueReference;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_modelVariables(threadData_t *threadData, modelica_complex _file, modelica_metatype _modelInfo)
{
  modelica_metatype _vars = NULL;
  modelica_integer _vr;
  modelica_integer _ix;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vars has no default value.
  // _vr has no default value.
  _ix = ((modelica_integer) 0);
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = omc_Config_simCodeTarget(threadData);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT80), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT81), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1000);
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
  _vr = tmp1;

  _vars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 11)));

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 2))), _OMC_LIT82, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 3))), _OMC_LIT83, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 4))), _OMC_LIT84, _vr, _ix ,&_ix);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 5))), _OMC_LIT84, _vr, _ix ,&_ix);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 26))), _OMC_LIT84, _vr, _ix ,&_ix);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 27))), _OMC_LIT84, _vr, _ix ,&_ix);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 13))), _OMC_LIT85, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 10))), _OMC_LIT86, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 6))), _OMC_LIT87, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 14))), _OMC_LIT88, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 11))), _OMC_LIT89, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 7))), _OMC_LIT90, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 15))), _OMC_LIT91, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 12))), _OMC_LIT92, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 16))), _OMC_LIT93, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 17))), _OMC_LIT94, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 18))), _OMC_LIT95, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 28))), _OMC_LIT96, _vr, ((modelica_integer) 0), NULL);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_modelVariables(threadData_t *threadData, modelica_metatype _file, modelica_metatype _modelInfo)
{
  omc_SerializeInitXML_modelVariables(threadData, _file, _modelInfo);
  return;
}

DLLDirection
modelica_boolean omc_SerializeInitXML_simulationInitFileReturnBool(threadData_t *threadData, modelica_metatype _simCode, modelica_string _guid)
{
  modelica_boolean _success;
  modelica_metatype _makefileParams = NULL;
  modelica_metatype _modelInfo = NULL;
  modelica_metatype _vi = NULL;
  modelica_metatype _s = NULL;
  modelica_complex _file;
  modelica_string _FMUType = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _success = 0 /* false */;
  // _makefileParams has no default value.
  // _modelInfo has no default value.
  // _vi has no default value.
  // _s has no default value.
  _file = omc_File_File_constructor(threadData, omc_File_noReference(threadData));
  // _FMUType has no default value.
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
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_string tmp15 = 0;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp7_1;
            tmp7_1 = omc_Config_simCodeTarget(threadData);
            {
              volatile mmc_switch_type tmp7;
              int tmp8;
              tmp7 = 0;
              for (; tmp7 < 2; tmp7++) {
                switch (MMC_SWITCH_CAST(tmp7)) {
                case 0: {
                  modelica_metatype tmpMeta9;
                  modelica_metatype tmpMeta10;
                  modelica_metatype tmpMeta11;
                  if (5 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT80), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
                  /* Pattern matching succeeded */
                  tmpMeta9 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 38))),_OMC_LIT97);
                  tmpMeta10 = stringAppend(tmpMeta9,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 37))));
                  tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT98);
                  omc_File_open(threadData, _file, tmpMeta11, 2);
                  goto tmp6_done;
                }
                case 1: {
                  modelica_metatype tmpMeta12;
                  
                  /* Pattern matching succeeded */
                  tmpMeta12 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 37))),_OMC_LIT98);
                  omc_File_open(threadData, _file, tmpMeta12, 2);
                  goto tmp6_done;
                }
                }
                goto tmp6_end;
                tmp6_end: ;
              }
              goto goto_5;
              goto_5:;
              goto goto_1;
              goto tmp6_done;
              tmp6_done:;
            }
          }
          ;

          _makefileParams = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 32)));

          _modelInfo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 2)));

          _vi = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 10)));

          /* Pattern-matching assignment */
          tmpMeta13 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 36)));
          if (optionNone(tmpMeta13)) goto goto_1;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
          _s = tmpMeta14;

          { /* match expression */
            modelica_string tmp18_1;
            tmp18_1 = omc_Config_simCodeTarget(threadData);
            {
              volatile mmc_switch_type tmp18;
              int tmp19;
              tmp18 = 0;
              for (; tmp18 < 3; tmp18++) {
                switch (MMC_SWITCH_CAST(tmp18)) {
                case 0: {
                  if (5 != MMC_STRLEN(tmp18_1) || strcmp(MMC_STRINGDATA(_OMC_LIT80), MMC_STRINGDATA(tmp18_1)) != 0) goto tmp17_end;
                  /* Pattern matching succeeded */
                  tmp15 = _OMC_LIT99;
                  goto tmp17_done;
                }
                case 1: {
                  if (7 != MMC_STRLEN(tmp18_1) || strcmp(MMC_STRINGDATA(_OMC_LIT81), MMC_STRINGDATA(tmp18_1)) != 0) goto tmp17_end;
                  /* Pattern matching succeeded */
                  tmp15 = _OMC_LIT99;
                  goto tmp17_done;
                }
                case 2: {
                  
                  /* Pattern matching succeeded */
                  tmp15 = _OMC_LIT100;
                  goto tmp17_done;
                }
                }
                goto tmp17_end;
                tmp17_end: ;
              }
              goto goto_16;
              goto_16:;
              goto goto_1;
              goto tmp17_done;
              tmp17_done:;
            }
          }
          _FMUType = tmp15;

          omc_File_write(threadData, _file, _OMC_LIT101);

          omc_File_write(threadData, _file, _OMC_LIT102);

          omc_File_write(threadData, _file, _OMC_LIT103);

          tmpMeta20 = stringAppend(_OMC_LIT104,_FMUType);
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT105);
          omc_File_write(threadData, _file, tmpMeta21);

          omc_File_write(threadData, _file, _OMC_LIT106);

          omc_Dump_writePath(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 2))), 1, _OMC_LIT42, 0 /* false */);

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT107);

          omc_Dump_writePath(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 2))), 1, _OMC_LIT108, 0 /* false */);

          omc_File_write(threadData, _file, _OMC_LIT105);

          omc_File_write(threadData, _file, _OMC_LIT109);

          omc_File_write(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makefileParams), 7))));

          omc_File_write(threadData, _file, _OMC_LIT105);

          omc_File_write(threadData, _file, _OMC_LIT110);

          omc_File_write(threadData, _file, _guid);

          omc_File_write(threadData, _file, _OMC_LIT111);

          omc_File_write(threadData, _file, _OMC_LIT112);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 3))), 4);

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT113);

          omc_File_write(threadData, _file, omc_Settings_getVersionNr(threadData));

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT114);

          omc_SerializeInitXML_xsdateTime(threadData, _file, omc_Util_getCurrentDateTime(threadData));

          omc_File_write(threadData, _file, _OMC_LIT105);

          omc_File_write(threadData, _file, _OMC_LIT115);

          omc_File_write(threadData, _file, _OMC_LIT116);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 2)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT117);

          omc_File_write(threadData, _file, _OMC_LIT118);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 3)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT119);

          omc_File_write(threadData, _file, _OMC_LIT120);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 18)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT121);

          omc_File_write(threadData, _file, _OMC_LIT122);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 17)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT123);

          omc_File_write(threadData, _file, _OMC_LIT124);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 19)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT125);

          omc_File_write(threadData, _file, _OMC_LIT126);

          omc_File_writeInt(threadData, _file, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 12)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT127);

          omc_File_write(threadData, _file, _OMC_LIT128);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 6)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT129);

          omc_File_write(threadData, _file, _OMC_LIT130);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 7)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 8)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 29)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 30)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT131);

          omc_File_write(threadData, _file, _OMC_LIT132);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 11)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT133);

          omc_File_write(threadData, _file, _OMC_LIT134);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 14)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT135);

          omc_File_write(threadData, _file, _OMC_LIT136);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 9)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT137);

          omc_File_write(threadData, _file, _OMC_LIT138);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 12)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT139);

          omc_File_write(threadData, _file, _OMC_LIT140);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 15)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT141);

          omc_File_write(threadData, _file, _OMC_LIT142);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 20)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT143);

          omc_File_write(threadData, _file, _OMC_LIT144);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 22)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT145);

          omc_File_write(threadData, _file, _OMC_LIT146);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 21)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT147);

          omc_File_write(threadData, _file, _OMC_LIT148);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 10)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT149);

          omc_File_write(threadData, _file, _OMC_LIT150);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 13)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT151);

          omc_File_write(threadData, _file, _OMC_LIT152);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 16)))), _OMC_LIT0);

          omc_File_write(threadData, _file, _OMC_LIT153);

          omc_File_write(threadData, _file, _OMC_LIT154);

          omc_File_write(threadData, _file, _OMC_LIT155);

          omc_File_write(threadData, _file, _OMC_LIT156);

          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 2)))), _OMC_LIT1);

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT157);

          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 3)))), _OMC_LIT1);

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT158);

          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 5)))), _OMC_LIT1);

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT159);

          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 6)))), _OMC_LIT1);

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT160);

          omc_File_write(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 7))));

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT161);

          omc_File_write(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 9))));

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _OMC_LIT162);

          omc_File_write(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 10))));

          omc_File_write(threadData, _file, _OMC_LIT163);

          omc_File_write(threadData, _file, _OMC_LIT164);

          omc_File_write(threadData, _file, _OMC_LIT165);

          omc_SerializeInitXML_modelVariables(threadData, _file, _modelInfo);

          omc_File_write(threadData, _file, _OMC_LIT166);

          omc_File_write(threadData, _file, _OMC_LIT167);

          _success = 1 /* true */;
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
  omc_File_File_destructor(threadData,_file);
  return _success;
}
modelica_metatype boxptr_SerializeInitXML_simulationInitFileReturnBool(threadData_t *threadData, modelica_metatype _simCode, modelica_metatype _guid)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_SerializeInitXML_simulationInitFileReturnBool(threadData, _simCode, _guid);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
void omc_SerializeInitXML_simulationInitFile(threadData_t *threadData, modelica_metatype _simCode, modelica_string _guid)
{
  modelica_boolean tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  /* Pattern-matching assignment */
  tmp1 = omc_SerializeInitXML_simulationInitFileReturnBool(threadData, _simCode, _guid);
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

