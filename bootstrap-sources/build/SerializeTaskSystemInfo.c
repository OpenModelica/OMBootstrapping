#include "omc_simulation_settings.h"
#include "SerializeTaskSystemInfo.h"
#define _OMC_LIT0_data "{}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,2,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,3,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "%d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " \f\n\r	\v"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,6,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "\","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,2,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "{\"row\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,7,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ",\"column\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,10,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ",\"exp\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,8,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "\",\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,11,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,17,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT17,_OMC_LIT18,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "SerializeTaskSystemInfo.serializeLinearCell failed. Expected only SES_RESIDUAL as input."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,88,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,1) {_OMC_LIT22,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "\n{\"eqIndex\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,12,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data ",\"parent\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,10,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data ",\"section\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,12,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "\",\"tag\":\"residual\",\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,27,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "],\"equation\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,15,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "\"],\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,12,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "\",\"tag\":\"assign\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,29,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "\",\"tag\":\"jacobian\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,31,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "\",\"tag\":\"torn\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,27,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "\"],\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,11,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\",\"tag\":\"system\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,16,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "\",\"tag\":\"tornsystem\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,20,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data ",\"display\":\"linear\",\"unknowns\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,31,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data ",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,12,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "],\"equation\":[{\"size\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,22,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data ",\"density\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,11,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "%.2f"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,4,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data ",\"A\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,6,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "],\"b\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,7,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "]}]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,3,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data ",\n\"internal-equations\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,24,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "\n]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,2,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data ",\n\"jacobian-equations\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,24,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "\n]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,3,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data ",\n{\"eqIndex\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,13,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "\",\"tag\":\"system-dynamic\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,24,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\",\"tag\":\"tornsystem-dynamic\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,28,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "]}]},"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,5,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "]}]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,4,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "\",\"tag\":\"algorithm\",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,31,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "],\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,10,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "],\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,14,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "],\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,11,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data ",\"display\":\"non-linear\",\"unknowns\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,35,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "],\"equation\":[["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,15,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "],["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,3,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "]]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,2,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "]]},"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,4,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "]]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,3,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "\",\"tag\":\"if-equation\",\"display\":\"if-equation\",\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,58,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,2,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "\",\"tag\":\"container\",\"display\":\"mixed\",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,49,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "\",\"tag\":\"when\",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,26,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "\",\"tag\":\"when\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,14,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data ",\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,9,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data ",\"tag\":\"alias\",\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,27,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "],\"section\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,13,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "\"}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,2,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "serializeEquation failed: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,26,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/SimCode/SerializeTaskSystemInfo.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,81,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT75_6,1.758197185e9);
#define _OMC_LIT75_6 MMC_REFREALLIT(_OMC_LIT_STRUCT75_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT74,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(706)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(706)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT75_6}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "_ode.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,9,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "{\"format\":\"ParModelica task system info\",\"version\":1,\n\"info\":{\"name\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,69,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data ",\"description\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,16,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "\"},\n\"ode-equations\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,21,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "{\"eqIndex\":0,\"tag\":\"dummy\"}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,27,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "regular"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,7,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "\n]\n}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,4,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "SerializeTaskSystemInfo.serializeParModWork failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,50,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT84_6,1.758197185e9);
#define _OMC_LIT84_6 MMC_REFREALLIT(_OMC_LIT_STRUCT84_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT74,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),MMC_IMMEDIATE(MMC_TAGFIXNUM(95)),_OMC_LIT84_6}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
#include "util/modelica.h"

#include "SerializeTaskSystemInfo_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeSource(threadData_t *threadData, modelica_complex _file, modelica_metatype _source, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeSource(threadData_t *threadData, modelica_metatype _file, modelica_metatype _source, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeSource,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeSource,0}};
#define boxvar_SerializeTaskSystemInfo_serializeSource MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeSource)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeFunction(threadData_t *threadData, modelica_complex _file, modelica_metatype _func);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeFunction(threadData_t *threadData, modelica_metatype _file, modelica_metatype _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeFunction,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeFunction,0}};
#define boxvar_SerializeTaskSystemInfo_serializeFunction MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeFunction)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_writeEqExpStr(threadData_t *threadData, modelica_complex _file, modelica_metatype _eqExp);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_writeEqExpStr(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eqExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_writeEqExpStr,2,0) {(void*) boxptr_SerializeTaskSystemInfo_writeEqExpStr,0}};
#define boxvar_SerializeTaskSystemInfo_writeEqExpStr MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_writeEqExpStr)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeIfBranch(threadData_t *threadData, modelica_complex _file, modelica_metatype _branch);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeIfBranch(threadData_t *threadData, modelica_metatype _file, modelica_metatype _branch);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeIfBranch,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeIfBranch,0}};
#define boxvar_SerializeTaskSystemInfo_serializeIfBranch MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeIfBranch)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeEquationIndex(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeEquationIndex(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeEquationIndex,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeEquationIndex,0}};
#define boxvar_SerializeTaskSystemInfo_serializeEquationIndex MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeEquationIndex)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializePath(threadData_t *threadData, modelica_complex _file, modelica_metatype _path);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializePath(threadData_t *threadData, modelica_metatype _file, modelica_metatype _path);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializePath,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializePath,0}};
#define boxvar_SerializeTaskSystemInfo_serializePath MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializePath)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeString(threadData_t *threadData, modelica_complex _file, modelica_string _string);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeString(threadData_t *threadData, modelica_metatype _file, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeString,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeString,0}};
#define boxvar_SerializeTaskSystemInfo_serializeString MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeString)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeCref(threadData_t *threadData, modelica_complex _file, modelica_metatype _cr);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeCref(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeCref,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeCref,0}};
#define boxvar_SerializeTaskSystemInfo_serializeCref MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeCref)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeExp(threadData_t *threadData, modelica_complex _file, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeExp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeExp,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeExp,0}};
#define boxvar_SerializeTaskSystemInfo_serializeExp MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeExp)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeList1(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_metatype _extra, modelica_fnptr _func);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeList1(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_metatype _extra, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeList1,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeList1,0}};
#define boxvar_SerializeTaskSystemInfo_serializeList1 MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeList1)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeList(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_fnptr _func);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeList(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeList,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeList,0}};
#define boxvar_SerializeTaskSystemInfo_serializeList MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeList)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeStatement(threadData_t *threadData, modelica_complex _file, modelica_metatype _stmt);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeStatement(threadData_t *threadData, modelica_metatype _file, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeStatement,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeStatement,0}};
#define boxvar_SerializeTaskSystemInfo_serializeStatement MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeStatement)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeUses(threadData_t *threadData, modelica_complex _file, modelica_metatype _crefs);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeUses(threadData_t *threadData, modelica_metatype _file, modelica_metatype _crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeUses,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeUses,0}};
#define boxvar_SerializeTaskSystemInfo_serializeUses MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeUses)
PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeLinearCell(threadData_t *threadData, modelica_complex _file, modelica_metatype _cell, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeLinearCell(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cell, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeLinearCell,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeLinearCell,0}};
#define boxvar_SerializeTaskSystemInfo_serializeLinearCell MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeLinearCell)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeTaskSystemInfo_serializeEquation(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq, modelica_string _section, modelica_boolean _withOperations, modelica_integer _parent, modelica_boolean _first, modelica_integer _assign_type);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeTaskSystemInfo_serializeEquation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq, modelica_metatype _section, modelica_metatype _withOperations, modelica_metatype _parent, modelica_metatype _first, modelica_metatype _assign_type);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeEquation,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeEquation,0}};
#define boxvar_SerializeTaskSystemInfo_serializeEquation MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeEquation)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeTaskSystemInfo_serializeParModWork(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations, modelica_string *out_fileName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeTaskSystemInfo_serializeParModWork(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations, modelica_metatype *out_fileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeParModWork,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeParModWork,0}};
#define boxvar_SerializeTaskSystemInfo_serializeParModWork MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeParModWork)

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeSource(threadData_t *threadData, modelica_complex _file, modelica_metatype _source, modelica_boolean _withOperations)
{
  modelica_metatype _info = NULL;
  modelica_metatype _paths = NULL;
  modelica_metatype _typeLst = NULL;
  modelica_metatype _partOfLst = NULL;
  modelica_metatype _instance = NULL;
  modelica_integer _i;
  modelica_metatype _operations = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  // _paths has no default value.
  // _typeLst has no default value.
  // _partOfLst has no default value.
  // _instance has no default value.
  // _i has no default value.
  // _operations has no default value.
  omc_File_write(threadData, _file, _OMC_LIT0);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeSource(threadData_t *threadData, modelica_metatype _file, modelica_metatype _source, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, _source, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeFunction(threadData_t *threadData, modelica_complex _file, modelica_metatype _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT1);

  omc_SerializeTaskSystemInfo_serializePath(threadData, _file, omc_SimCodeUtil_functionPath(threadData, _func));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeFunction(threadData_t *threadData, modelica_metatype _file, modelica_metatype _func)
{
  omc_SerializeTaskSystemInfo_serializeFunction(threadData, _file, _func);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_writeEqExpStr(threadData_t *threadData, modelica_complex _file, modelica_metatype _eqExp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eqExp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 2)))), 3);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 2)))), 3);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 2)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT3);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 3)))), 3);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_writeEqExpStr(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eqExp)
{
  omc_SerializeTaskSystemInfo_writeEqExpStr(threadData, _file, _eqExp);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeIfBranch(threadData_t *threadData, modelica_complex _file, modelica_metatype _branch)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _eqs has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _branch;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _exp = tmpMeta2;
  _eqs = tmpMeta3;

  omc_File_write(threadData, _file, _OMC_LIT4);

  omc_SerializeTaskSystemInfo_serializeExp(threadData, _file, _exp);

  omc_File_write(threadData, _file, _OMC_LIT5);

  omc_SerializeTaskSystemInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeTaskSystemInfo_serializeEquationIndex);

  omc_File_write(threadData, _file, _OMC_LIT6);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeIfBranch(threadData_t *threadData, modelica_metatype _file, modelica_metatype _branch)
{
  omc_SerializeTaskSystemInfo_serializeIfBranch(threadData, _file, _branch);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeEquationIndex(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_writeInt(threadData, _file, omc_SimCodeUtil_simEqSystemIndex(threadData, _eq), _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeEquationIndex(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq)
{
  omc_SerializeTaskSystemInfo_serializeEquationIndex(threadData, _file, _eq);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializePath(threadData_t *threadData, modelica_complex _file, modelica_metatype _path)
{
  modelica_metatype _p = NULL;
  modelica_boolean _b;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _p = _path;
  _b = 1 /* true */;
  omc_File_write(threadData, _file, _OMC_LIT8);

  while(1)
  {
    if(!_b) break;
    
    
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _p;
      {
        int tmp4;
        {
          switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
          case 4: {
            
            /* Pattern matching succeeded */
            omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2))), 3);
            tmpMeta[0+0] = _p;
            tmp1_c1 = 0 /* false */;
            goto tmp3_done;
          }
          case 3: {
            
            /* Pattern matching succeeded */
            omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2))), 3);

            omc_File_write(threadData, _file, _OMC_LIT9);
            tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 3)));
            tmp1_c1 = 1 /* true */;
            goto tmp3_done;
          }
          case 5: {
            
            /* Pattern matching succeeded */
            tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2)));
            tmp1_c1 = 1 /* true */;
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
    _p = tmpMeta[0+0];
    _b = tmp1_c1;
  }

  omc_File_write(threadData, _file, _OMC_LIT8);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializePath(threadData_t *threadData, modelica_metatype _file, modelica_metatype _path)
{
  omc_SerializeTaskSystemInfo_serializePath(threadData, _file, _path);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeString(threadData_t *threadData, modelica_complex _file, modelica_string _string)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT8);

  omc_File_writeEscape(threadData, _file, _string, 3);

  omc_File_write(threadData, _file, _OMC_LIT8);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeString(threadData_t *threadData, modelica_metatype _file, modelica_metatype _string)
{
  omc_SerializeTaskSystemInfo_serializeString(threadData, _file, _string);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeCref(threadData_t *threadData, modelica_complex _file, modelica_metatype _cr)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT8);

  omc_ComponentReference_writeCref(threadData, _file, _cr, 3);

  omc_File_write(threadData, _file, _OMC_LIT8);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeCref(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cr)
{
  omc_SerializeTaskSystemInfo_serializeCref(threadData, _file, _cr);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeExp(threadData_t *threadData, modelica_complex _file, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT8);

  omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, _exp), 3);

  omc_File_write(threadData, _file, _OMC_LIT8);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeExp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _exp)
{
  omc_SerializeTaskSystemInfo_serializeExp(threadData, _file, _exp);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeList1(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_metatype _extra, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _lst;
    {
      modelica_metatype _a = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _a has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (!listEmpty(tmpMeta6)) goto tmp2_end;
          _a = tmpMeta5;
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_complex, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _file, _a, _extra) : ((void(*)(threadData_t*, modelica_complex, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _file, _a, _extra);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          _a = tmpMeta7;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_complex, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _file, _a, _extra) : ((void(*)(threadData_t*, modelica_complex, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _file, _a, _extra);

          omc_File_write(threadData, _file, _OMC_LIT5);

          /* Tail recursive call */
          _lst = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeList1(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_metatype _extra, modelica_fnptr _func)
{
  omc_SerializeTaskSystemInfo_serializeList1(threadData, _file, _lst, _extra, _func);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeList(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _lst;
    {
      modelica_metatype _a = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _a has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (!listEmpty(tmpMeta6)) goto tmp2_end;
          _a = tmpMeta5;
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_complex, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _file, _a) : ((void(*)(threadData_t*, modelica_complex, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _file, _a);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          _a = tmpMeta7;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_complex, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _file, _a) : ((void(*)(threadData_t*, modelica_complex, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _file, _a);

          omc_File_write(threadData, _file, _OMC_LIT5);

          /* Tail recursive call */
          _lst = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeList(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_fnptr _func)
{
  omc_SerializeTaskSystemInfo_serializeList(threadData, _file, _lst, _func);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeStatement(threadData_t *threadData, modelica_complex _file, modelica_metatype _stmt)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT8);

  omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_DAEDump_ppStatementStr(threadData, _stmt), _OMC_LIT10), 3);

  omc_File_write(threadData, _file, _OMC_LIT8);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeStatement(threadData_t *threadData, modelica_metatype _file, modelica_metatype _stmt)
{
  omc_SerializeTaskSystemInfo_serializeStatement(threadData, _file, _stmt);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeUses(threadData_t *threadData, modelica_complex _file, modelica_metatype _crefs)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _crefs;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cr has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (!listEmpty(tmpMeta6)) goto tmp2_end;
          _cr = tmpMeta5;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT8);

          omc_ComponentReference_writeCref(threadData, _file, _cr, 3);

          omc_File_write(threadData, _file, _OMC_LIT8);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          _cr = tmpMeta7;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT8);

          omc_ComponentReference_writeCref(threadData, _file, _cr, 3);

          omc_File_write(threadData, _file, _OMC_LIT11);

          /* Tail recursive call */
          _crefs = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeUses(threadData_t *threadData, modelica_metatype _file, modelica_metatype _crefs)
{
  omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, _crefs);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeTaskSystemInfo_serializeLinearCell(threadData_t *threadData, modelica_complex _file, modelica_metatype _cell, modelica_boolean _withOperations)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cell;
    {
      modelica_integer _i;
      modelica_integer _j;
      modelica_metatype _eq = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _i has no default value.
      // _j has no default value.
      // _eq has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,5) == 0) goto tmp2_end;
          
          _i = tmp6  /* pattern as ty=Integer */;
          _j = tmp8  /* pattern as ty=Integer */;
          _eq = tmpMeta9;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT12);

          omc_File_write(threadData, _file, intString(_i));

          omc_File_write(threadData, _file, _OMC_LIT13);

          omc_File_write(threadData, _file, intString(_j));

          omc_File_write(threadData, _file, _OMC_LIT14);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT15);

          omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT16);
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT21, _OMC_LIT23);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeTaskSystemInfo_serializeLinearCell(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cell, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeTaskSystemInfo_serializeLinearCell(threadData, _file, _cell, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeTaskSystemInfo_serializeEquation(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq, modelica_string _section, modelica_boolean _withOperations, modelica_integer _parent, modelica_boolean _first, modelica_integer _assign_type)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  if((!_first))
  {
    omc_File_write(threadData, _file, _OMC_LIT5);
  }

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_integer _i;
      modelica_integer _j;
      modelica_metatype _stmt = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _jeqs = NULL;
      modelica_metatype _constantEqns = NULL;
      modelica_metatype _lSystem = NULL;
      modelica_metatype _atL = NULL;
      modelica_metatype _nlSystem = NULL;
      modelica_metatype _atNL = NULL;
      modelica_metatype _whenOp = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _crefs2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _j has no default value.
      // _stmt has no default value.
      // _eqs has no default value.
      // _jeqs has no default value.
      // _constantEqns has no default value.
      // _lSystem has no default value.
      // _atL has no default value.
      // _nlSystem has no default value.
      // _atNL has no default value.
      // _whenOp has no default value.
      // _crefs has no default value.
      // _crefs2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 16; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT27);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT28);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT29);

          omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT16);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT32);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT31);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT30);
            }
          }

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT33);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT28);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT29);

          omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT16);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT32);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT31);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT30);
            }
          }

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT33);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT28);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT29);

          omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT16);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT32);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT31);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT30);
            }
          }

          omc_ComponentReference_writeCref(threadData, _file, omc_Expression_expCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT33);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT28);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT29);

          omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT16);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_real tmp31;
          modelica_boolean tmp32;
          modelica_boolean tmp34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!optionNone(tmpMeta7)) goto tmp3_end;
          
          _lSystem = tmpMeta6;
          /* Pattern matching succeeded */
          _i = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))));

          _j = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))));

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 8))));

          { /* match expression */
            modelica_metatype tmp11_1;
            tmp11_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 9)));
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              for (; tmp11 < 2; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  if (optionNone(tmp11_1)) goto tmp10_end;
                  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 1));
                  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
                  if (listEmpty(tmpMeta14)) goto tmp10_end;
                  tmpMeta15 = MMC_CAR(tmpMeta14);
                  tmpMeta16 = MMC_CDR(tmpMeta14);
                  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
                  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 5));
                  if (!listEmpty(tmpMeta16)) goto tmp10_end;
                  
                  _jeqs = tmpMeta17;
                  _constantEqns = tmpMeta18;
                  /* Pattern matching succeeded */
                  tmpMeta8 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp10_done;
                }
                case 1: {
                  modelica_metatype tmpMeta19;
                  
                  /* Pattern matching succeeded */
                  tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta8 = tmpMeta19;
                  goto tmp10_done;
                }
                }
                goto tmp10_end;
                tmp10_end: ;
              }
              goto goto_9;
              goto_9:;
              goto goto_2;
              goto tmp10_done;
              tmp10_done:;
            }
          }
          _jeqs = tmpMeta8;

          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT35);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT34);
          }

          tmpMeta20 = stringAppend(_OMC_LIT36,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 12))))));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT37);
          omc_File_write(threadData, _file, tmpMeta21);

          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp23;
            modelica_metatype tmpMeta24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp30;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 5)));
            tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta24; /* defaultValue */
            tmp23 = &__omcQ_24tmpVar1;
            while(1) {
              tmp30 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp30--;
              }
              if (tmp30 == 0) {
                { /* match expression */
                  modelica_metatype tmp28_1;
                  tmp28_1 = _v;
                  {
                    volatile mmc_switch_type tmp28;
                    int tmp29;
                    tmp28 = 0;
                    for (; tmp28 < 1; tmp28++) {
                      switch (MMC_SWITCH_CAST(tmp28)) {
                      case 0: {
                        
                        /* Pattern matching succeeded */
                        tmpMeta25 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
                        goto tmp27_done;
                      }
                      }
                      goto tmp27_end;
                      tmp27_end: ;
                    }
                    goto goto_26;
                    goto_26:;
                    goto goto_2;
                    goto tmp27_done;
                    tmp27_done:;
                  }
                }__omcQ_24tmpVar0 = tmpMeta25;
                *tmp23 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp23 = &MMC_CDR(*tmp23);
              } else if (tmp30 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp23 = mmc_mk_nil();
            tmpMeta22 = __omcQ_24tmpVar1;
          }
          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, tmpMeta22);

          omc_File_write(threadData, _file, _OMC_LIT38);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT39);

            tmp31 = ((modelica_real)(_i) * (_i));
            if (tmp31 == 0) {goto goto_2;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp31, _OMC_LIT40);
          }

          omc_File_write(threadData, _file, _OMC_LIT41);

          omc_SerializeTaskSystemInfo_serializeList1(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))), mmc_mk_boolean(_withOperations), boxvar_SerializeTaskSystemInfo_serializeLinearCell);

          omc_File_write(threadData, _file, _OMC_LIT42);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))), boxvar_SerializeTaskSystemInfo_serializeExp);

          omc_File_write(threadData, _file, _OMC_LIT43);

          omc_File_write(threadData, _file, _OMC_LIT44);

          if((!listEmpty(_eqs)))
          {
            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?((modelica_integer) 1):((modelica_integer) 0)));

            {
              modelica_boolean __omcQ_24tmpVar3;
              modelica_boolean __omcQ_24tmpVar2;
              modelica_integer tmp33;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_eqs);
              __omcQ_24tmpVar3 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp33 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp33--;
                }
                if (tmp33 == 0) {
                  __omcQ_24tmpVar2 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?((modelica_integer) 1):((modelica_integer) 0)));
                  __omcQ_24tmpVar3 = (__omcQ_24tmpVar2 && __omcQ_24tmpVar3);
                } else if (tmp33 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp32 = __omcQ_24tmpVar3;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_write(threadData, _file, _OMC_LIT46);

          if((!listEmpty(_jeqs)))
          {
            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar5;
              modelica_boolean __omcQ_24tmpVar4;
              modelica_integer tmp35;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar5 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp35 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp35--;
                }
                if (tmp35 == 0) {
                  __omcQ_24tmpVar4 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar5 = (__omcQ_24tmpVar4 && __omcQ_24tmpVar5);
                } else if (tmp35 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp34 = __omcQ_24tmpVar5;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT47);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_boolean tmp39;
          modelica_metatype tmpMeta41;
          modelica_boolean tmp53;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_real tmp66;
          modelica_boolean tmp67;
          modelica_metatype tmpMeta69;
          modelica_boolean tmp81;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_real tmp94;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta37)) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 1));
          
          _lSystem = tmpMeta36;
          _atL = tmpMeta38;
          /* Pattern matching succeeded */
          _i = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))));

          _j = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))));

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 8))));

          if((!listEmpty(_eqs)))
          {
            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?((modelica_integer) 1):((modelica_integer) 0)));

            {
              modelica_boolean __omcQ_24tmpVar7;
              modelica_boolean __omcQ_24tmpVar6;
              modelica_integer tmp40;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_eqs);
              __omcQ_24tmpVar7 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp40 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp40--;
                }
                if (tmp40 == 0) {
                  __omcQ_24tmpVar6 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?((modelica_integer) 1):((modelica_integer) 0)));
                  __omcQ_24tmpVar7 = (__omcQ_24tmpVar6 && __omcQ_24tmpVar7);
                } else if (tmp40 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp39 = __omcQ_24tmpVar7;
            }
          }

          { /* match expression */
            modelica_metatype tmp44_1;
            tmp44_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 9)));
            {
              volatile mmc_switch_type tmp44;
              int tmp45;
              tmp44 = 0;
              for (; tmp44 < 2; tmp44++) {
                switch (MMC_SWITCH_CAST(tmp44)) {
                case 0: {
                  modelica_metatype tmpMeta46;
                  modelica_metatype tmpMeta47;
                  modelica_metatype tmpMeta48;
                  modelica_metatype tmpMeta49;
                  modelica_metatype tmpMeta50;
                  modelica_metatype tmpMeta51;
                  if (optionNone(tmp44_1)) goto tmp43_end;
                  tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp44_1), 1));
                  tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 2));
                  if (listEmpty(tmpMeta47)) goto tmp43_end;
                  tmpMeta48 = MMC_CAR(tmpMeta47);
                  tmpMeta49 = MMC_CDR(tmpMeta47);
                  tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
                  tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 5));
                  if (!listEmpty(tmpMeta49)) goto tmp43_end;
                  
                  _jeqs = tmpMeta50;
                  _constantEqns = tmpMeta51;
                  /* Pattern matching succeeded */
                  tmpMeta41 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp43_done;
                }
                case 1: {
                  modelica_metatype tmpMeta52;
                  
                  /* Pattern matching succeeded */
                  tmpMeta52 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta41 = tmpMeta52;
                  goto tmp43_done;
                }
                }
                goto tmp43_end;
                tmp43_end: ;
              }
              goto goto_42;
              goto_42:;
              goto goto_2;
              goto tmp43_done;
              tmp43_done:;
            }
          }
          _jeqs = tmpMeta41;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT5);

            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar9;
              modelica_boolean __omcQ_24tmpVar8;
              modelica_integer tmp54;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar9 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp54 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp54--;
                }
                if (tmp54 == 0) {
                  __omcQ_24tmpVar8 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar9 = (__omcQ_24tmpVar8 && __omcQ_24tmpVar9);
                } else if (tmp54 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp53 = __omcQ_24tmpVar9;
            }
          }

          if((listEmpty(_eqs) && listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT24);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT48);
          }

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT50);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT49);
          }

          tmpMeta55 = stringAppend(_OMC_LIT36,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 12))))));
          tmpMeta56 = stringAppend(tmpMeta55,_OMC_LIT37);
          omc_File_write(threadData, _file, tmpMeta56);

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp58;
            modelica_metatype tmpMeta59;
            modelica_metatype tmpMeta60;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp65;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 5)));
            tmpMeta59 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta59; /* defaultValue */
            tmp58 = &__omcQ_24tmpVar11;
            while(1) {
              tmp65 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp65--;
              }
              if (tmp65 == 0) {
                { /* match expression */
                  modelica_metatype tmp63_1;
                  tmp63_1 = _v;
                  {
                    volatile mmc_switch_type tmp63;
                    int tmp64;
                    tmp63 = 0;
                    for (; tmp63 < 1; tmp63++) {
                      switch (MMC_SWITCH_CAST(tmp63)) {
                      case 0: {
                        
                        /* Pattern matching succeeded */
                        tmpMeta60 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
                        goto tmp62_done;
                      }
                      }
                      goto tmp62_end;
                      tmp62_end: ;
                    }
                    goto goto_61;
                    goto_61:;
                    goto goto_2;
                    goto tmp62_done;
                    tmp62_done:;
                  }
                }__omcQ_24tmpVar10 = tmpMeta60;
                *tmp58 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp58 = &MMC_CDR(*tmp58);
              } else if (tmp65 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp58 = mmc_mk_nil();
            tmpMeta57 = __omcQ_24tmpVar11;
          }
          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, tmpMeta57);

          omc_File_write(threadData, _file, _OMC_LIT38);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT39);

            tmp66 = ((modelica_real)(_i) * (_i));
            if (tmp66 == 0) {goto goto_2;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp66, _OMC_LIT40);
          }

          omc_File_write(threadData, _file, _OMC_LIT41);

          omc_SerializeTaskSystemInfo_serializeList1(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))), mmc_mk_boolean(_withOperations), boxvar_SerializeTaskSystemInfo_serializeLinearCell);

          omc_File_write(threadData, _file, _OMC_LIT42);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))), boxvar_SerializeTaskSystemInfo_serializeExp);

          omc_File_write(threadData, _file, _OMC_LIT51);

          _i = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 6))));

          _j = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 7))));

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 8))));

          if((!listEmpty(_eqs)))
          {
            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4))))?((modelica_integer) 1):((modelica_integer) 0)));

            {
              modelica_boolean __omcQ_24tmpVar13;
              modelica_boolean __omcQ_24tmpVar12;
              modelica_integer tmp68;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_eqs);
              __omcQ_24tmpVar13 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp68 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp68--;
                }
                if (tmp68 == 0) {
                  __omcQ_24tmpVar12 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4))))?((modelica_integer) 1):((modelica_integer) 0)));
                  __omcQ_24tmpVar13 = (__omcQ_24tmpVar12 && __omcQ_24tmpVar13);
                } else if (tmp68 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp67 = __omcQ_24tmpVar13;
            }
          }

          { /* match expression */
            modelica_metatype tmp72_1;
            tmp72_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 9)));
            {
              volatile mmc_switch_type tmp72;
              int tmp73;
              tmp72 = 0;
              for (; tmp72 < 2; tmp72++) {
                switch (MMC_SWITCH_CAST(tmp72)) {
                case 0: {
                  modelica_metatype tmpMeta74;
                  modelica_metatype tmpMeta75;
                  modelica_metatype tmpMeta76;
                  modelica_metatype tmpMeta77;
                  modelica_metatype tmpMeta78;
                  modelica_metatype tmpMeta79;
                  if (optionNone(tmp72_1)) goto tmp71_end;
                  tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp72_1), 1));
                  tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta74), 2));
                  if (listEmpty(tmpMeta75)) goto tmp71_end;
                  tmpMeta76 = MMC_CAR(tmpMeta75);
                  tmpMeta77 = MMC_CDR(tmpMeta75);
                  tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta76), 2));
                  tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta76), 5));
                  if (!listEmpty(tmpMeta77)) goto tmp71_end;
                  
                  _jeqs = tmpMeta78;
                  _constantEqns = tmpMeta79;
                  /* Pattern matching succeeded */
                  tmpMeta69 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp71_done;
                }
                case 1: {
                  modelica_metatype tmpMeta80;
                  
                  /* Pattern matching succeeded */
                  tmpMeta80 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta69 = tmpMeta80;
                  goto tmp71_done;
                }
                }
                goto tmp71_end;
                tmp71_end: ;
              }
              goto goto_70;
              goto_70:;
              goto goto_2;
              goto tmp71_done;
              tmp71_done:;
            }
          }
          _jeqs = tmpMeta69;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT5);

            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar15;
              modelica_boolean __omcQ_24tmpVar14;
              modelica_integer tmp82;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar15 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp82 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp82--;
                }
                if (tmp82 == 0) {
                  __omcQ_24tmpVar14 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar15 = (__omcQ_24tmpVar14 && __omcQ_24tmpVar15);
                } else if (tmp82 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp81 = __omcQ_24tmpVar15;
            }
          }

          if((listEmpty(_eqs) && listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT24);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT48);
          }

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT35);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT34);
          }

          tmpMeta83 = stringAppend(_OMC_LIT36,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 12))))));
          tmpMeta84 = stringAppend(tmpMeta83,_OMC_LIT37);
          omc_File_write(threadData, _file, tmpMeta84);

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp86;
            modelica_metatype tmpMeta87;
            modelica_metatype tmpMeta88;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp93;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 5)));
            tmpMeta87 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta87; /* defaultValue */
            tmp86 = &__omcQ_24tmpVar17;
            while(1) {
              tmp93 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp93--;
              }
              if (tmp93 == 0) {
                { /* match expression */
                  modelica_metatype tmp91_1;
                  tmp91_1 = _v;
                  {
                    volatile mmc_switch_type tmp91;
                    int tmp92;
                    tmp91 = 0;
                    for (; tmp91 < 1; tmp91++) {
                      switch (MMC_SWITCH_CAST(tmp91)) {
                      case 0: {
                        
                        /* Pattern matching succeeded */
                        tmpMeta88 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
                        goto tmp90_done;
                      }
                      }
                      goto tmp90_end;
                      tmp90_end: ;
                    }
                    goto goto_89;
                    goto_89:;
                    goto goto_2;
                    goto tmp90_done;
                    tmp90_done:;
                  }
                }__omcQ_24tmpVar16 = tmpMeta88;
                *tmp86 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp86 = &MMC_CDR(*tmp86);
              } else if (tmp93 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp86 = mmc_mk_nil();
            tmpMeta85 = __omcQ_24tmpVar17;
          }
          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, tmpMeta85);

          omc_File_write(threadData, _file, _OMC_LIT38);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT39);

            tmp94 = ((modelica_real)(_i) * (_i));
            if (tmp94 == 0) {goto goto_2;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp94, _OMC_LIT40);
          }

          omc_File_write(threadData, _file, _OMC_LIT41);

          omc_SerializeTaskSystemInfo_serializeList1(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 7))), mmc_mk_boolean(_withOperations), boxvar_SerializeTaskSystemInfo_serializeLinearCell);

          omc_File_write(threadData, _file, _OMC_LIT42);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 6))), boxvar_SerializeTaskSystemInfo_serializeExp);

          omc_File_write(threadData, _file, _OMC_LIT52);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,3) == 0) goto tmp3_end;
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta95)) goto tmp3_end;
          tmpMeta96 = MMC_CAR(tmpMeta95);
          tmpMeta97 = MMC_CDR(tmpMeta95);
          
          _stmt = tmpMeta96;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          tmpMeta98 = stringAppend(_section,_OMC_LIT53);
          omc_File_write(threadData, _file, tmpMeta98);

          /* Pattern-matching assignment */
          tmpMeta99 = omc_Expression_extractUniqueCrefsFromStatmentS(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta99), 1));
          tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta99), 2));
          _crefs = tmpMeta100;
          _crefs2 = tmpMeta101;

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, _crefs);

          omc_File_write(threadData, _file, _OMC_LIT54);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, _crefs2);

          omc_File_write(threadData, _file, _OMC_LIT55);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeTaskSystemInfo_serializeStatement);

          omc_File_write(threadData, _file, _OMC_LIT56);

          omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, omc_Algorithm_getStatementSource(threadData, _stmt), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT16);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,5) == 0) goto tmp3_end;
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta102)) goto tmp3_end;
          tmpMeta103 = MMC_CAR(tmpMeta102);
          tmpMeta104 = MMC_CDR(tmpMeta102);
          
          _stmt = tmpMeta103;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          tmpMeta105 = stringAppend(_section,_OMC_LIT53);
          omc_File_write(threadData, _file, tmpMeta105);

          /* Pattern-matching assignment */
          tmpMeta106 = omc_Expression_extractUniqueCrefsFromStatmentS(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 1));
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 2));
          _crefs = tmpMeta107;
          _crefs2 = tmpMeta108;

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, _crefs);

          omc_File_write(threadData, _file, _OMC_LIT54);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, _crefs2);

          omc_File_write(threadData, _file, _OMC_LIT55);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeTaskSystemInfo_serializeStatement);

          omc_File_write(threadData, _file, _OMC_LIT56);

          omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, omc_Algorithm_getStatementSource(threadData, _stmt), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT16);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_boolean tmp125;
          modelica_boolean tmp127;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!optionNone(tmpMeta110)) goto tmp3_end;
          
          _nlSystem = tmpMeta109;
          /* Pattern matching succeeded */
          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 3))));

          { /* match expression */
            modelica_metatype tmp114_1;
            tmp114_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 7)));
            {
              volatile mmc_switch_type tmp114;
              int tmp115;
              tmp114 = 0;
              for (; tmp114 < 2; tmp114++) {
                switch (MMC_SWITCH_CAST(tmp114)) {
                case 0: {
                  modelica_metatype tmpMeta116;
                  modelica_metatype tmpMeta117;
                  modelica_metatype tmpMeta118;
                  modelica_metatype tmpMeta119;
                  modelica_metatype tmpMeta120;
                  modelica_metatype tmpMeta121;
                  if (optionNone(tmp114_1)) goto tmp113_end;
                  tmpMeta116 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp114_1), 1));
                  tmpMeta117 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta116), 2));
                  if (listEmpty(tmpMeta117)) goto tmp113_end;
                  tmpMeta118 = MMC_CAR(tmpMeta117);
                  tmpMeta119 = MMC_CDR(tmpMeta117);
                  tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta118), 2));
                  tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta118), 5));
                  if (!listEmpty(tmpMeta119)) goto tmp113_end;
                  
                  _jeqs = tmpMeta120;
                  _constantEqns = tmpMeta121;
                  /* Pattern matching succeeded */
                  tmpMeta111 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp113_done;
                }
                case 1: {
                  modelica_metatype tmpMeta122;
                  
                  /* Pattern matching succeeded */
                  tmpMeta122 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta111 = tmpMeta122;
                  goto tmp113_done;
                }
                }
                goto tmp113_end;
                tmp113_end: ;
              }
              goto goto_112;
              goto_112:;
              goto goto_2;
              goto tmp113_done;
              tmp113_done:;
            }
          }
          _jeqs = tmpMeta111;

          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT35);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT34);
          }

          tmpMeta123 = stringAppend(_OMC_LIT57,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 6))))));
          tmpMeta124 = stringAppend(tmpMeta123,_OMC_LIT37);
          omc_File_write(threadData, _file, tmpMeta124);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 4))));

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeTaskSystemInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT59);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeTaskSystemInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT60);

          omc_File_write(threadData, _file, _OMC_LIT44);

          if((!listEmpty(_eqs)))
          {
            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?((modelica_integer) 1):((modelica_integer) 0)));

            {
              modelica_boolean __omcQ_24tmpVar19;
              modelica_boolean __omcQ_24tmpVar18;
              modelica_integer tmp126;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_eqs);
              __omcQ_24tmpVar19 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp126 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp126--;
                }
                if (tmp126 == 0) {
                  __omcQ_24tmpVar18 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?((modelica_integer) 1):((modelica_integer) 0)));
                  __omcQ_24tmpVar19 = (__omcQ_24tmpVar18 && __omcQ_24tmpVar19);
                } else if (tmp126 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp125 = __omcQ_24tmpVar19;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_write(threadData, _file, _OMC_LIT46);

          if((!listEmpty(_jeqs)))
          {
            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar21;
              modelica_boolean __omcQ_24tmpVar20;
              modelica_integer tmp128;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar21 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp128 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp128--;
                }
                if (tmp128 == 0) {
                  __omcQ_24tmpVar20 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar21 = (__omcQ_24tmpVar20 && __omcQ_24tmpVar21);
                } else if (tmp128 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp127 = __omcQ_24tmpVar21;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT47);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_boolean tmp132;
          modelica_metatype tmpMeta134;
          modelica_boolean tmp146;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_boolean tmp150;
          modelica_metatype tmpMeta152;
          modelica_boolean tmp164;
          modelica_metatype tmpMeta166;
          modelica_metatype tmpMeta167;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta129 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta130 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta130)) goto tmp3_end;
          tmpMeta131 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta130), 1));
          
          _nlSystem = tmpMeta129;
          _atNL = tmpMeta131;
          /* Pattern matching succeeded */
          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 3))));

          omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?((modelica_integer) 1):((modelica_integer) 0)));

          {
            modelica_boolean __omcQ_24tmpVar23;
            modelica_boolean __omcQ_24tmpVar22;
            modelica_integer tmp133;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = listRest(_eqs);
            __omcQ_24tmpVar23 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp133 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp133--;
              }
              if (tmp133 == 0) {
                __omcQ_24tmpVar22 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?((modelica_integer) 1):((modelica_integer) 0)));
                __omcQ_24tmpVar23 = (__omcQ_24tmpVar22 && __omcQ_24tmpVar23);
              } else if (tmp133 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp132 = __omcQ_24tmpVar23;
          }

          { /* match expression */
            modelica_metatype tmp137_1;
            tmp137_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 7)));
            {
              volatile mmc_switch_type tmp137;
              int tmp138;
              tmp137 = 0;
              for (; tmp137 < 2; tmp137++) {
                switch (MMC_SWITCH_CAST(tmp137)) {
                case 0: {
                  modelica_metatype tmpMeta139;
                  modelica_metatype tmpMeta140;
                  modelica_metatype tmpMeta141;
                  modelica_metatype tmpMeta142;
                  modelica_metatype tmpMeta143;
                  modelica_metatype tmpMeta144;
                  if (optionNone(tmp137_1)) goto tmp136_end;
                  tmpMeta139 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp137_1), 1));
                  tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta139), 2));
                  if (listEmpty(tmpMeta140)) goto tmp136_end;
                  tmpMeta141 = MMC_CAR(tmpMeta140);
                  tmpMeta142 = MMC_CDR(tmpMeta140);
                  tmpMeta143 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta141), 2));
                  tmpMeta144 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta141), 5));
                  if (!listEmpty(tmpMeta142)) goto tmp136_end;
                  
                  _jeqs = tmpMeta143;
                  _constantEqns = tmpMeta144;
                  /* Pattern matching succeeded */
                  tmpMeta134 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp136_done;
                }
                case 1: {
                  modelica_metatype tmpMeta145;
                  
                  /* Pattern matching succeeded */
                  tmpMeta145 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta134 = tmpMeta145;
                  goto tmp136_done;
                }
                }
                goto tmp136_end;
                tmp136_end: ;
              }
              goto goto_135;
              goto_135:;
              goto goto_2;
              goto tmp136_done;
              tmp136_done:;
            }
          }
          _jeqs = tmpMeta134;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT5);

            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar25;
              modelica_boolean __omcQ_24tmpVar24;
              modelica_integer tmp147;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar25 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp147 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp147--;
                }
                if (tmp147 == 0) {
                  __omcQ_24tmpVar24 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar25 = (__omcQ_24tmpVar24 && __omcQ_24tmpVar25);
                } else if (tmp147 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp146 = __omcQ_24tmpVar25;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT35);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT34);
          }

          tmpMeta148 = stringAppend(_OMC_LIT57,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 6))))));
          tmpMeta149 = stringAppend(tmpMeta148,_OMC_LIT37);
          omc_File_write(threadData, _file, tmpMeta149);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 4))));

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeTaskSystemInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT59);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeTaskSystemInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT61);

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 3))));

          omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10))))?((modelica_integer) 1):((modelica_integer) 0)));

          {
            modelica_boolean __omcQ_24tmpVar27;
            modelica_boolean __omcQ_24tmpVar26;
            modelica_integer tmp151;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = listRest(_eqs);
            __omcQ_24tmpVar27 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp151 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp151--;
              }
              if (tmp151 == 0) {
                __omcQ_24tmpVar26 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10))))?((modelica_integer) 1):((modelica_integer) 0)));
                __omcQ_24tmpVar27 = (__omcQ_24tmpVar26 && __omcQ_24tmpVar27);
              } else if (tmp151 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp150 = __omcQ_24tmpVar27;
          }

          { /* match expression */
            modelica_metatype tmp155_1;
            tmp155_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 7)));
            {
              volatile mmc_switch_type tmp155;
              int tmp156;
              tmp155 = 0;
              for (; tmp155 < 2; tmp155++) {
                switch (MMC_SWITCH_CAST(tmp155)) {
                case 0: {
                  modelica_metatype tmpMeta157;
                  modelica_metatype tmpMeta158;
                  modelica_metatype tmpMeta159;
                  modelica_metatype tmpMeta160;
                  modelica_metatype tmpMeta161;
                  modelica_metatype tmpMeta162;
                  if (optionNone(tmp155_1)) goto tmp154_end;
                  tmpMeta157 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp155_1), 1));
                  tmpMeta158 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta157), 2));
                  if (listEmpty(tmpMeta158)) goto tmp154_end;
                  tmpMeta159 = MMC_CAR(tmpMeta158);
                  tmpMeta160 = MMC_CDR(tmpMeta158);
                  tmpMeta161 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta159), 2));
                  tmpMeta162 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta159), 5));
                  if (!listEmpty(tmpMeta160)) goto tmp154_end;
                  
                  _jeqs = tmpMeta161;
                  _constantEqns = tmpMeta162;
                  /* Pattern matching succeeded */
                  tmpMeta152 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp154_done;
                }
                case 1: {
                  modelica_metatype tmpMeta163;
                  
                  /* Pattern matching succeeded */
                  tmpMeta163 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta152 = tmpMeta163;
                  goto tmp154_done;
                }
                }
                goto tmp154_end;
                tmp154_end: ;
              }
              goto goto_153;
              goto_153:;
              goto goto_2;
              goto tmp154_done;
              tmp154_done:;
            }
          }
          _jeqs = tmpMeta152;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT5);

            omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar29;
              modelica_boolean __omcQ_24tmpVar28;
              modelica_integer tmp165;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar29 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp165 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp165--;
                }
                if (tmp165 == 0) {
                  __omcQ_24tmpVar28 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar29 = (__omcQ_24tmpVar28 && __omcQ_24tmpVar29);
                } else if (tmp165 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp164 = __omcQ_24tmpVar29;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT35);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT34);
          }

          tmpMeta166 = stringAppend(_OMC_LIT57,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 6))))));
          tmpMeta167 = stringAppend(tmpMeta166,_OMC_LIT37);
          omc_File_write(threadData, _file, tmpMeta167);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 4))));

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeTaskSystemInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT59);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeTaskSystemInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT62);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta168;
          modelica_boolean tmp172;
          modelica_metatype tmpMeta174;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp169;
            modelica_metatype tmpMeta170;
            modelica_metatype __omcQ_24tmpVar30;
            modelica_integer tmp171;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)));
            tmpMeta170 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta170; /* defaultValue */
            tmp169 = &__omcQ_24tmpVar31;
            while(1) {
              tmp171 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp171--;
              }
              if (tmp171 == 0) {
                __omcQ_24tmpVar30 = omc_Util_tuple22(threadData, _e);
                *tmp169 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp169 = &MMC_CDR(*tmp169);
              } else if (tmp171 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp169 = mmc_mk_nil();
            tmpMeta168 = __omcQ_24tmpVar31;
          }
          _eqs = listAppend(omc_List_flatten(threadData, tmpMeta168), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));

          omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, ((modelica_integer) 0), 1 /* true */, ((modelica_integer) 0));

          {
            modelica_boolean __omcQ_24tmpVar33;
            modelica_boolean __omcQ_24tmpVar32;
            modelica_integer tmp173;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = listRest(_eqs);
            __omcQ_24tmpVar33 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp173 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp173--;
              }
              if (tmp173 == 0) {
                __omcQ_24tmpVar32 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar33 = (__omcQ_24tmpVar32 && __omcQ_24tmpVar33);
              } else if (tmp173 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp172 = __omcQ_24tmpVar33;
          }

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT63);

          omc_SerializeTaskSystemInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeTaskSystemInfo_serializeIfBranch);

          omc_File_write(threadData, _file, _OMC_LIT5);

          tmpMeta174 = mmc_mk_box2(0, _OMC_LIT64, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          omc_SerializeTaskSystemInfo_serializeIfBranch(threadData, _file, tmpMeta174);

          omc_File_write(threadData, _file, _OMC_LIT65);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          modelica_boolean tmp175;
          modelica_metatype tmpMeta177;
          modelica_metatype tmpMeta181;
          modelica_metatype tmpMeta182;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _section, _withOperations, ((modelica_integer) 0), 1 /* true */, ((modelica_integer) 0));

          {
            modelica_boolean __omcQ_24tmpVar35;
            modelica_boolean __omcQ_24tmpVar34;
            modelica_integer tmp176;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)));
            __omcQ_24tmpVar35 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp176 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp176--;
              }
              if (tmp176 == 0) {
                __omcQ_24tmpVar34 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar35 = (__omcQ_24tmpVar34 && __omcQ_24tmpVar35);
              } else if (tmp176 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp175 = __omcQ_24tmpVar35;
          }

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT66);

          {
            modelica_metatype __omcQ_24tmpVar37;
            modelica_metatype* tmp178;
            modelica_metatype tmpMeta179;
            modelica_metatype __omcQ_24tmpVar36;
            modelica_integer tmp180;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
            tmpMeta179 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar37 = tmpMeta179; /* defaultValue */
            tmp178 = &__omcQ_24tmpVar37;
            while(1) {
              tmp180 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp180--;
              }
              if (tmp180 == 0) {
                __omcQ_24tmpVar36 = omc_SimCodeFunctionUtil_varName(threadData, _v);
                *tmp178 = mmc_mk_cons(__omcQ_24tmpVar36,0);
                tmp178 = &MMC_CDR(*tmp178);
              } else if (tmp180 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp178 = mmc_mk_nil();
            tmpMeta177 = __omcQ_24tmpVar37;
          }
          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, tmpMeta177);

          omc_File_write(threadData, _file, _OMC_LIT55);

          omc_SerializeTaskSystemInfo_serializeEquationIndex(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));

          {
            modelica_metatype _e1;
            for (tmpMeta181 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))); !listEmpty(tmpMeta181); tmpMeta181=MMC_CDR(tmpMeta181))
            {
              _e1 = MMC_CAR(tmpMeta181);
              omc_File_write(threadData, _file, _OMC_LIT5);

              omc_SerializeTaskSystemInfo_serializeEquationIndex(threadData, _file, _e1);
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT65);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta183;
          modelica_metatype tmpMeta188;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          {
            modelica_metatype _whenOps;
            for (tmpMeta183 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))); !listEmpty(tmpMeta183); tmpMeta183=MMC_CDR(tmpMeta183))
            {
              _whenOps = MMC_CAR(tmpMeta183);
              { /* match expression */
                modelica_metatype tmp186_1;
                tmp186_1 = _whenOps;
                {
                  volatile mmc_switch_type tmp186;
                  int tmp187;
                  tmp186 = 0;
                  for (; tmp186 < 5; tmp186++) {
                    switch (MMC_SWITCH_CAST(tmp186)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp186_1,0,3) == 0) goto tmp185_end;
                      
                      _whenOp = tmp186_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT67);

                      omc_SerializeTaskSystemInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT54);

                      omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_List_union(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))), 1 /* true */)));

                      omc_File_write(threadData, _file, _OMC_LIT55);

                      omc_SerializeTaskSystemInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT56);

                      omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT16);
                      goto tmp185_done;
                    }
                    case 1: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp186_1,1,3) == 0) goto tmp185_end;
                      
                      _whenOp = tmp186_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT67);

                      omc_SerializeTaskSystemInfo_serializeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT54);

                      omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_List_union(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))), 1 /* true */)));

                      omc_File_write(threadData, _file, _OMC_LIT55);

                      omc_SerializeTaskSystemInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT56);

                      omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT16);
                      goto tmp185_done;
                    }
                    case 2: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp186_1,2,4) == 0) goto tmp185_end;
                      
                      _whenOp = tmp186_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT68);

                      omc_File_write(threadData, _file, _OMC_LIT69);

                      _crefs = listAppend(omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))), 1 /* true */), omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))), 1 /* true */));

                      omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_List_union(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _crefs));

                      omc_File_write(threadData, _file, _OMC_LIT55);

                      omc_SerializeTaskSystemInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT56);

                      omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT16);
                      goto tmp185_done;
                    }
                    case 3: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp186_1,3,2) == 0) goto tmp185_end;
                      
                      _whenOp = tmp186_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT68);

                      omc_File_write(threadData, _file, _OMC_LIT69);

                      omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_List_union(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))), 1 /* true */)));

                      omc_File_write(threadData, _file, _OMC_LIT55);

                      omc_SerializeTaskSystemInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT56);

                      omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT16);
                      goto tmp185_done;
                    }
                    case 4: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp186_1,4,2) == 0) goto tmp185_end;
                      
                      _whenOp = tmp186_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT68);

                      omc_File_write(threadData, _file, _OMC_LIT69);

                      omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_List_union(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))), 1 /* true */)));

                      omc_File_write(threadData, _file, _OMC_LIT55);

                      omc_SerializeTaskSystemInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT56);

                      omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT16);
                      goto tmp185_done;
                    }
                    }
                    goto tmp185_end;
                    tmp185_end: ;
                  }
                  goto goto_184;
                  goto_184:;
                  goto goto_2;
                  goto tmp185_done;
                  tmp185_done:;
                }
              }
              ;
            }
          }

          { /* match expression */
            modelica_metatype tmp191_1;
            tmp191_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)));
            {
              modelica_metatype _e = NULL;
              volatile mmc_switch_type tmp191;
              int tmp192;
              // _e has no default value.
              tmp191 = 0;
              for (; tmp191 < 2; tmp191++) {
                switch (MMC_SWITCH_CAST(tmp191)) {
                case 0: {
                  modelica_metatype tmpMeta193;
                  if (optionNone(tmp191_1)) goto tmp190_end;
                  tmpMeta193 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp191_1), 1));
                  _e = tmpMeta193;
                  /* Pattern matching succeeded */
                  if((omc_SimCodeUtil_simEqSystemIndex(threadData, _e) != ((modelica_integer) 0)))
                  {
                    omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                  }
                  goto tmp190_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  goto tmp190_done;
                }
                }
                goto tmp190_end;
                tmp190_end: ;
              }
              goto goto_189;
              goto_189:;
              goto goto_2;
              goto tmp190_done;
              tmp190_done:;
            }
          }
          ;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT25);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT7);
          }

          omc_File_write(threadData, _file, _OMC_LIT26);

          omc_File_write(threadData, _file, _section);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT32);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT31);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT30);
            }
          }

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), 3);

          omc_File_write(threadData, _file, _OMC_LIT33);

          omc_SerializeTaskSystemInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT28);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT29);

          omc_SerializeTaskSystemInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 8))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT16);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 14: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT7);

          omc_File_write(threadData, _file, _OMC_LIT70);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), _OMC_LIT7);

          omc_File_write(threadData, _file, _OMC_LIT71);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT72);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta194;
          
          /* Pattern matching succeeded */
          tmpMeta194 = stringAppend(_OMC_LIT73,mmc_anyString(_eq));
          omc_Error_addInternalError(threadData, tmpMeta194, _OMC_LIT75);
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
  _success = tmp1;
  _return: OMC_LABEL_UNUSED
  return _success;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeTaskSystemInfo_serializeEquation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq, modelica_metatype _section, modelica_metatype _withOperations, modelica_metatype _parent, modelica_metatype _first, modelica_metatype _assign_type)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_withOperations);
  tmp2 = mmc_unbox_integer(_parent);
  tmp3 = mmc_unbox_integer(_first);
  tmp4 = mmc_unbox_integer(_assign_type);
  _success = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _eq, _section, tmp1, tmp2, tmp3, tmp4);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeTaskSystemInfo_serializeParModWork(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations, modelica_string *out_fileName)
{
  modelica_boolean _success;
  modelica_string _fileName = NULL;
  modelica_complex _file;
  modelica_metatype _mi = NULL;
  modelica_metatype _vars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  // _fileName has no default value.
  _file = omc_File_File_constructor(threadData, omc_File_noReference(threadData));
  // _mi has no default value.
  // _vars has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _code;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 11));
          _mi = tmpMeta6;
          _vars = tmpMeta7;

          tmpMeta8 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 37))),_OMC_LIT76);
          _fileName = tmpMeta8;

          omc_File_open(threadData, _file, _fileName, 2);

          omc_File_write(threadData, _file, _OMC_LIT77);

          omc_SerializeTaskSystemInfo_serializePath(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))));

          omc_File_write(threadData, _file, _OMC_LIT78);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT79);

          omc_File_write(threadData, _file, _OMC_LIT80);

          {
            modelica_boolean __omcQ_24tmpVar39;
            modelica_boolean __omcQ_24tmpVar38;
            modelica_integer tmp10;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, omc_List_flatten(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 9)))));
            __omcQ_24tmpVar39 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar38 = omc_SerializeTaskSystemInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT81, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar39 = (__omcQ_24tmpVar38 && __omcQ_24tmpVar39);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            tmp9 = __omcQ_24tmpVar39;
          }

          omc_File_write(threadData, _file, _OMC_LIT82);

          _success = 1 /* true */;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT83, _OMC_LIT84);

          _success = 0 /* false */;
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
  if (out_fileName) { *out_fileName = _fileName; }
  omc_File_File_destructor(threadData,_file);
  return _success;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeTaskSystemInfo_serializeParModWork(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations, modelica_metatype *out_fileName)
{
  modelica_integer tmp1;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_withOperations);
  _success = omc_SerializeTaskSystemInfo_serializeParModWork(threadData, _code, tmp1, out_fileName);
  out_success = mmc_mk_icon(_success);
  /* skip box _fileName; String */
  return out_success;
}

DLLDirection
modelica_string omc_SerializeTaskSystemInfo_serializeParMod(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations)
{
  modelica_string _fileName = NULL;
  modelica_string tmp1;
  modelica_boolean tmp2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fileName has no default value.
  /* Pattern-matching tuple assignment */
  tmp2 = omc_SerializeTaskSystemInfo_serializeParModWork(threadData, _code, _withOperations, &tmp1);
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
  _fileName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _fileName;
}
modelica_metatype boxptr_SerializeTaskSystemInfo_serializeParMod(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  modelica_string _fileName = NULL;
  tmp1 = mmc_unbox_integer(_withOperations);
  _fileName = omc_SerializeTaskSystemInfo_serializeParMod(threadData, _code, tmp1);
  /* skip box _fileName; String */
  return _fileName;
}

