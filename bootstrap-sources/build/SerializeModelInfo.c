#include "omc_simulation_settings.h"
#include "SerializeModelInfo.h"
#define _OMC_LIT0_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,4,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,3,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "%d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data " \f\n\r	\v"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,6,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "\","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,2,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "variable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,8,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "state"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,5,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "derivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,10,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "dummy derivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,16,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "dummy state"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,11,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "clocked state"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,13,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "discrete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,8,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "parameter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,9,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "constant"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,8,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "external object"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,15,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "jacobian variable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,17,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "jacobian differentiated variable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,32,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,10,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "final constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,16,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "use derivation of input"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,23,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "derivation of input"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,19,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "time grid for optimization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,26,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "variable for transform loop in constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,41,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "helper variable transform ode for symSolver"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,43,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "iteration variable for solving an algebraic loop"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,48,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "residual variable for dae mode"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,30,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,17,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT32,_OMC_LIT33,_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "serializeVarKind failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,28,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "{\"row\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,7,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data ",\"column\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,10,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data ",\"exp\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,8,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "\",\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,11,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,1,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "SerializeModelInfo.serializeLinearCell failed. Expected only SES_RESIDUAL as input."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,83,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,1) {_OMC_LIT43,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "\n{\"eqIndex\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,12,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data ",\"parent\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,10,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data ",\"section\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,12,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "\",\"tag\":\"residual\",\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,27,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "],\"equation\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,15,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\"],\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,12,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data ",\"tag\":\"assign\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,28,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data ",\"tag\":\"jacobian\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,30,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data ",\"tag\":\"torn\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,26,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "\"],\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,11,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\",\"tag\":\"assign\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,29,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "\",\"tag\":\"jacobian\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,31,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "\",\"tag\":\"torn\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,27,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data ",\n{\"eqIndex\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,13,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "\",\"tag\":\"system\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,16,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "\",\"tag\":\"tornsystem\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,20,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data ",\"display\":\"linear\",\"unknowns\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,31,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data ",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,12,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "],\"equation\":[{\"size\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,22,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data ",\"density\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,11,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "%.2f"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,4,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data ",\"A\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,6,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "],\"b\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,7,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "]}]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,4,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "]}]},"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,5,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "\",\"tag\":\"algorithm\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,32,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "],\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,14,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "],\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,11,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "\",\"tag\":\"algorithm\",\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,32,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data ",\"display\":\"non-linear\",\"unknowns\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,35,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "],\"equation\":[["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,15,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "],["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,3,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "]]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,3,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "]]},"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,4,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "\",\"tag\":\"if-equation\",\"display\":\"if-equation\",\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,58,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,2,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "\",\"tag\":\"container\",\"display\":\"mixed\",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,49,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "\",\"tag\":\"when\",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,26,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "],\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,10,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "\",\"tag\":\"when\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,14,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data ",\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,9,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data ",\"tag\":\"alias\",\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,27,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "],\"section\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,13,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "\"}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,2,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "serializeEquation failed: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,26,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/SimCode/SerializeModelInfo.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,76,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT92_6,1.758197185e9);
#define _OMC_LIT92_6 MMC_REFREALLIT(_OMC_LIT_STRUCT92_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT91,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1147)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1147)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT92_6}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "{\"op\":\"before-after\",\"display\":\"flattening\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,53,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,10,3) {&SCodeDump_SCodeDumpOptions_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "\",\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,3,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "\"]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,3,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "{\"op\":\"info\",\"display\":\"scode\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,40,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "{\"op\":\"before-after\",\"display\":\"simplify\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,51,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "{\"op\":\"before-after\",\"display\":\"inline\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,49,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "{\"op\":\"before-after\",\"display\":\"solved\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,49,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "{\"op\":\"before-after-assert\",\"display\":\"solved\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,56,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data ",\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,2,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "{\"op\":\"before-after\",\"display\":\"residual\",\"data\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,50,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data ",\"0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,6,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "{\"op\":\"chain\",\"display\":\"substitution\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,48,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "{\"op\":\"info\",\"display\":\"solved\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,41,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "{\"op\":\"before-after\",\"display\":\"differentiate d/d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,49,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,11,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "{\"op\":\"before-after\",\"display\":\"scalarize ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,43,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "]\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,12,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "{\"op\":\"dummy-der\",\"display\":\"dummy derivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,45,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "serializeOperation failed: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,27,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT113_6,1.758197185e9);
#define _OMC_LIT113_6 MMC_REFREALLIT(_OMC_LIT_STRUCT113_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT113,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT91,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(430)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(430)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT113_6}};
#define _OMC_LIT113 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "{\"file\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,9,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "\",\"lineStart\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,14,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data ",\"lineEnd\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,11,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data ",\"colStart\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,12,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data ",\"colEnd\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,10,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "{\"info\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,8,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data ",\"within\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,11,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data ",\"instance\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,13,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data ",\"typeLst\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,12,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data ",\"operations\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,15,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data ",\"type\":\"Real\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,14,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data ",\"type\":\"Integer\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,17,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data ",\"type\":\"String\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,16,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data ",\"type\":\"Boolean\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,17,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data ",\"type\":\"Enumeration\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,21,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data ",\n\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,3,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "\":{\"comment\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,14,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "\",\"kind\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,10,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data ",\"unit\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,9,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "\",\"displayUnit\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,17,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "SerializeModelInfo.serializeVar failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,38,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT135,2,1) {_OMC_LIT134,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT135 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "SerializeModelInfo.serializeVars failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,39,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT137,2,1) {_OMC_LIT136,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT137 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "_info.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,10,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,1,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "omsic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,5,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "{\"format\":\"Transformational debugger info\",\"version\":1,\n\"info\":{\"name\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,71,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data ",\"description\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,16,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "\"},\n\"variables\":{\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,18,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "\n},\n\"equations\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,17,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "{\"eqIndex\":0,\"tag\":\"dummy\"}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,27,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,7,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "initial-lambda0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,15,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "removed-initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,15,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "regular"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,7,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "synchronous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,11,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "start"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,5,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "nominal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,7,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,3,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,3,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "assertions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,10,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "inline"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,6,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
#define _OMC_LIT157_data "residuals"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT157,9,_OMC_LIT157_data);
#define _OMC_LIT157 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data "jacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,8,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "\n],\n\"functions\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,17,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "\n]\n}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,4,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "SerializeModelInfo.serialize failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,35,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT162_6,1.758197185e9);
#define _OMC_LIT162_6 MMC_REFREALLIT(_OMC_LIT_STRUCT162_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT162,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT91,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(117)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(117)),MMC_IMMEDIATE(MMC_TAGFIXNUM(84)),_OMC_LIT162_6}};
#define _OMC_LIT162 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,0,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#include "util/modelica.h"

#include "SerializeModelInfo_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeFunction(threadData_t *threadData, modelica_complex _file, modelica_metatype _func);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeFunction(threadData_t *threadData, modelica_metatype _file, modelica_metatype _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeFunction,2,0) {(void*) boxptr_SerializeModelInfo_serializeFunction,0}};
#define boxvar_SerializeModelInfo_serializeFunction MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeFunction)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_writeEqExpStr(threadData_t *threadData, modelica_complex _file, modelica_metatype _eqExp);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_writeEqExpStr(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eqExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_writeEqExpStr,2,0) {(void*) boxptr_SerializeModelInfo_writeEqExpStr,0}};
#define boxvar_SerializeModelInfo_writeEqExpStr MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_writeEqExpStr)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeIfBranch(threadData_t *threadData, modelica_complex _file, modelica_metatype _branch);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeIfBranch(threadData_t *threadData, modelica_metatype _file, modelica_metatype _branch);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeIfBranch,2,0) {(void*) boxptr_SerializeModelInfo_serializeIfBranch,0}};
#define boxvar_SerializeModelInfo_serializeIfBranch MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeIfBranch)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeEquationIndex(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeEquationIndex(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeEquationIndex,2,0) {(void*) boxptr_SerializeModelInfo_serializeEquationIndex,0}};
#define boxvar_SerializeModelInfo_serializeEquationIndex MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeEquationIndex)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializePath(threadData_t *threadData, modelica_complex _file, modelica_metatype _path);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializePath(threadData_t *threadData, modelica_metatype _file, modelica_metatype _path);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializePath,2,0) {(void*) boxptr_SerializeModelInfo_serializePath,0}};
#define boxvar_SerializeModelInfo_serializePath MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializePath)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeString(threadData_t *threadData, modelica_complex _file, modelica_string _string);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeString(threadData_t *threadData, modelica_metatype _file, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeString,2,0) {(void*) boxptr_SerializeModelInfo_serializeString,0}};
#define boxvar_SerializeModelInfo_serializeString MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeString)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeCref(threadData_t *threadData, modelica_complex _file, modelica_metatype _cr);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeCref(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeCref,2,0) {(void*) boxptr_SerializeModelInfo_serializeCref,0}};
#define boxvar_SerializeModelInfo_serializeCref MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeCref)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeExp(threadData_t *threadData, modelica_complex _file, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeExp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeExp,2,0) {(void*) boxptr_SerializeModelInfo_serializeExp,0}};
#define boxvar_SerializeModelInfo_serializeExp MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeExp)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeList1(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_metatype _extra, modelica_fnptr _func);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeList1(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_metatype _extra, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeList1,2,0) {(void*) boxptr_SerializeModelInfo_serializeList1,0}};
#define boxvar_SerializeModelInfo_serializeList1 MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeList1)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeList(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_fnptr _func);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeList(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeList,2,0) {(void*) boxptr_SerializeModelInfo_serializeList,0}};
#define boxvar_SerializeModelInfo_serializeList MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeList)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeStatement(threadData_t *threadData, modelica_complex _file, modelica_metatype _stmt);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeStatement(threadData_t *threadData, modelica_metatype _file, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeStatement,2,0) {(void*) boxptr_SerializeModelInfo_serializeStatement,0}};
#define boxvar_SerializeModelInfo_serializeStatement MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeStatement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SerializeModelInfo_getWhenUses(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_getWhenUses,2,0) {(void*) boxptr_SerializeModelInfo_getWhenUses,0}};
#define boxvar_SerializeModelInfo_getWhenUses MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_getWhenUses)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeUses(threadData_t *threadData, modelica_complex _file, modelica_metatype _crefs);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeUses(threadData_t *threadData, modelica_metatype _file, modelica_metatype _crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeUses,2,0) {(void*) boxptr_SerializeModelInfo_serializeUses,0}};
#define boxvar_SerializeModelInfo_serializeUses MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeUses)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeVarKind(threadData_t *threadData, modelica_complex _file, modelica_metatype _varKind, modelica_metatype _var);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeVarKind(threadData_t *threadData, modelica_metatype _file, modelica_metatype _varKind, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVarKind,2,0) {(void*) boxptr_SerializeModelInfo_serializeVarKind,0}};
#define boxvar_SerializeModelInfo_serializeVarKind MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVarKind)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeLinearCell(threadData_t *threadData, modelica_complex _file, modelica_metatype _cell, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeLinearCell(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cell, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeLinearCell,2,0) {(void*) boxptr_SerializeModelInfo_serializeLinearCell,0}};
#define boxvar_SerializeModelInfo_serializeLinearCell MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeLinearCell)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeEquation(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq, modelica_string _section, modelica_boolean _withOperations, modelica_integer _parent, modelica_boolean _first, modelica_integer _assign_type);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeEquation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq, modelica_metatype _section, modelica_metatype _withOperations, modelica_metatype _parent, modelica_metatype _first, modelica_metatype _assign_type);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeEquation,2,0) {(void*) boxptr_SerializeModelInfo_serializeEquation,0}};
#define boxvar_SerializeModelInfo_serializeEquation MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeEquation)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeOperation(threadData_t *threadData, modelica_complex _file, modelica_metatype _op);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeOperation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeOperation,2,0) {(void*) boxptr_SerializeModelInfo_serializeOperation,0}};
#define boxvar_SerializeModelInfo_serializeOperation MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeOperation)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeInfo(threadData_t *threadData, modelica_complex _file, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeInfo(threadData_t *threadData, modelica_metatype _file, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeInfo,2,0) {(void*) boxptr_SerializeModelInfo_serializeInfo,0}};
#define boxvar_SerializeModelInfo_serializeInfo MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeInfo)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeSource(threadData_t *threadData, modelica_complex _file, modelica_metatype _source, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeSource(threadData_t *threadData, modelica_metatype _file, modelica_metatype _source, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeSource,2,0) {(void*) boxptr_SerializeModelInfo_serializeSource,0}};
#define boxvar_SerializeModelInfo_serializeSource MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeSource)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeTypeName(threadData_t *threadData, modelica_complex _file, modelica_metatype _ty);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeTypeName(threadData_t *threadData, modelica_metatype _file, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeTypeName,2,0) {(void*) boxptr_SerializeModelInfo_serializeTypeName,0}};
#define boxvar_SerializeModelInfo_serializeTypeName MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeTypeName)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeVar(threadData_t *threadData, modelica_complex _file, modelica_metatype _var, modelica_boolean _withOperations, modelica_boolean _first);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeVar(threadData_t *threadData, modelica_metatype _file, modelica_metatype _var, modelica_metatype _withOperations, modelica_metatype _first);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVar,2,0) {(void*) boxptr_SerializeModelInfo_serializeVar,0}};
#define boxvar_SerializeModelInfo_serializeVar MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVar)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeVarsHelp(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_boolean _withOperations, modelica_boolean _inFirst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeVarsHelp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _withOperations, modelica_metatype _inFirst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVarsHelp,2,0) {(void*) boxptr_SerializeModelInfo_serializeVarsHelp,0}};
#define boxvar_SerializeModelInfo_serializeVarsHelp MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVarsHelp)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeVars(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeVars(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVars,2,0) {(void*) boxptr_SerializeModelInfo_serializeVars,0}};
#define boxvar_SerializeModelInfo_serializeVars MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVars)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeWork(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations, modelica_string *out_fileName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeWork(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations, modelica_metatype *out_fileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeWork,2,0) {(void*) boxptr_SerializeModelInfo_serializeWork,0}};
#define boxvar_SerializeModelInfo_serializeWork MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeWork)

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeFunction(threadData_t *threadData, modelica_complex _file, modelica_metatype _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT0);

  omc_SerializeModelInfo_serializePath(threadData, _file, omc_SimCodeUtil_functionPath(threadData, _func));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeFunction(threadData_t *threadData, modelica_metatype _file, modelica_metatype _func)
{
  omc_SerializeModelInfo_serializeFunction(threadData, _file, _func);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_writeEqExpStr(threadData_t *threadData, modelica_complex _file, modelica_metatype _eqExp)
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
          omc_File_write(threadData, _file, _OMC_LIT1);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 2)))), 3);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 2)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_writeEqExpStr(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eqExp)
{
  omc_SerializeModelInfo_writeEqExpStr(threadData, _file, _eqExp);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeIfBranch(threadData_t *threadData, modelica_complex _file, modelica_metatype _branch)
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

  omc_File_write(threadData, _file, _OMC_LIT3);

  omc_SerializeModelInfo_serializeExp(threadData, _file, _exp);

  if((!listEmpty(_eqs)))
  {
    omc_File_write(threadData, _file, _OMC_LIT4);

    omc_SerializeModelInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeModelInfo_serializeEquationIndex);
  }

  omc_File_write(threadData, _file, _OMC_LIT5);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeIfBranch(threadData_t *threadData, modelica_metatype _file, modelica_metatype _branch)
{
  omc_SerializeModelInfo_serializeIfBranch(threadData, _file, _branch);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeEquationIndex(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_writeInt(threadData, _file, omc_SimCodeUtil_simEqSystemIndex(threadData, _eq), _OMC_LIT6);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeEquationIndex(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq)
{
  omc_SerializeModelInfo_serializeEquationIndex(threadData, _file, _eq);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializePath(threadData_t *threadData, modelica_complex _file, modelica_metatype _path)
{
  modelica_metatype _p = NULL;
  modelica_boolean _b;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _p = _path;
  _b = 1 /* true */;
  omc_File_write(threadData, _file, _OMC_LIT7);

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

            omc_File_write(threadData, _file, _OMC_LIT8);
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

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializePath(threadData_t *threadData, modelica_metatype _file, modelica_metatype _path)
{
  omc_SerializeModelInfo_serializePath(threadData, _file, _path);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeString(threadData_t *threadData, modelica_complex _file, modelica_string _string)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_File_writeEscape(threadData, _file, _string, 3);

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeString(threadData_t *threadData, modelica_metatype _file, modelica_metatype _string)
{
  omc_SerializeModelInfo_serializeString(threadData, _file, _string);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeCref(threadData_t *threadData, modelica_complex _file, modelica_metatype _cr)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_ComponentReference_writeCref(threadData, _file, _cr, 3);

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeCref(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cr)
{
  omc_SerializeModelInfo_serializeCref(threadData, _file, _cr);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeExp(threadData_t *threadData, modelica_complex _file, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, _exp), 3);

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeExp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _exp)
{
  omc_SerializeModelInfo_serializeExp(threadData, _file, _exp);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeList1(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_metatype _extra, modelica_fnptr _func)
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

          omc_File_write(threadData, _file, _OMC_LIT4);

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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeList1(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_metatype _extra, modelica_fnptr _func)
{
  omc_SerializeModelInfo_serializeList1(threadData, _file, _lst, _extra, _func);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeList(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_fnptr _func)
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

          omc_File_write(threadData, _file, _OMC_LIT4);

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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeList(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_fnptr _func)
{
  omc_SerializeModelInfo_serializeList(threadData, _file, _lst, _func);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeStatement(threadData_t *threadData, modelica_complex _file, modelica_metatype _stmt)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_DAEDump_ppStatementStr(threadData, _stmt), _OMC_LIT9), 3);

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeStatement(threadData_t *threadData, modelica_metatype _file, modelica_metatype _stmt)
{
  omc_SerializeModelInfo_serializeStatement(threadData, _file, _stmt);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SerializeModelInfo_getWhenUses(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _value)
{
  modelica_metatype _uses = NULL;
  modelica_metatype _crefs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _uses has no default value.
  // _crefs has no default value.
  _uses = listAppend(_conditions, omc_Expression_extractCrefsFromExpDerPreStart(threadData, _value, 1 /* true */));

  _uses = omc_UnorderedSet_unique__list(threadData, _uses, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual);
  _return: OMC_LABEL_UNUSED
  return _uses;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeUses(threadData_t *threadData, modelica_complex _file, modelica_metatype _crefs)
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
          omc_File_write(threadData, _file, _OMC_LIT7);

          omc_ComponentReference_writeCref(threadData, _file, _cr, 3);

          omc_File_write(threadData, _file, _OMC_LIT7);
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
          omc_File_write(threadData, _file, _OMC_LIT7);

          omc_ComponentReference_writeCref(threadData, _file, _cr, 3);

          omc_File_write(threadData, _file, _OMC_LIT10);

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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeUses(threadData_t *threadData, modelica_metatype _file, modelica_metatype _crefs)
{
  omc_SerializeModelInfo_serializeUses(threadData, _file, _crefs);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeVarKind(threadData_t *threadData, modelica_complex _file, modelica_metatype _varKind, modelica_metatype _var)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _varKind;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT11);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT12);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT13);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT14);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT15);
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT16);
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT17);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT18);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT19);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT20);
          goto tmp2_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT21);
          goto tmp2_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT22);
          goto tmp2_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT23);
          goto tmp2_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT24);
          goto tmp2_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT25);
          goto tmp2_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT26);
          goto tmp2_done;
        }
        case 20: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT27);
          goto tmp2_done;
        }
        case 21: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT28);
          goto tmp2_done;
        }
        case 22: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT29);
          goto tmp2_done;
        }
        case 23: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT29);
          goto tmp2_done;
        }
        case 26: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT30);
          goto tmp2_done;
        }
        case 24: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT31);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT37,omc_SimCodeUtil_simVarString(threadData, _var));
          tmpMeta4 = mmc_mk_cons(tmpMeta5, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT36, tmpMeta4);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeVarKind(threadData_t *threadData, modelica_metatype _file, modelica_metatype _varKind, modelica_metatype _var)
{
  omc_SerializeModelInfo_serializeVarKind(threadData, _file, _varKind, _var);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeLinearCell(threadData_t *threadData, modelica_complex _file, modelica_metatype _cell, modelica_boolean _withOperations)
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
          omc_File_write(threadData, _file, _OMC_LIT38);

          omc_File_write(threadData, _file, intString(_i));

          omc_File_write(threadData, _file, _OMC_LIT39);

          omc_File_write(threadData, _file, intString(_j));

          omc_File_write(threadData, _file, _OMC_LIT40);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT41);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT36, _OMC_LIT44);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeLinearCell(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cell, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeModelInfo_serializeLinearCell(threadData, _file, _cell, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeEquation(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq, modelica_string _section, modelica_boolean _withOperations, modelica_integer _parent, modelica_boolean _first, modelica_integer _assign_type)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  if((!_first))
  {
    omc_File_write(threadData, _file, _OMC_LIT4);
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
      tmp4 = 0;
      for (; tmp4 < 22; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_SerializeModelInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_SerializeModelInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_SerializeModelInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT7);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT53);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT52);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT51);
            }
          }

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT54);

          omc_SerializeModelInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT7);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT53);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT52);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT51);
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT7);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT53);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT52);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT51);
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT57);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT56);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT55);
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT57);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT56);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT55);
            }
          }

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT54);

          omc_SerializeModelInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT57);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT56);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT55);
            }
          }

          omc_ComponentReference_writeCref(threadData, _file, omc_Expression_expCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT54);

          omc_SerializeModelInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_real tmp35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!optionNone(tmpMeta7)) goto tmp3_end;
          
          _lSystem = tmpMeta6;
          /* Pattern matching succeeded */
          _i = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))));

          _j = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))));

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 8))));

          if((!listEmpty(_eqs)))
          {
            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?((modelica_integer) 1):((modelica_integer) 0)));

            {
              modelica_boolean __omcQ_24tmpVar1;
              modelica_boolean __omcQ_24tmpVar0;
              modelica_integer tmp9;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_eqs);
              __omcQ_24tmpVar1 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp9 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp9--;
                }
                if (tmp9 == 0) {
                  __omcQ_24tmpVar0 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?((modelica_integer) 1):((modelica_integer) 0)));
                  __omcQ_24tmpVar1 = (__omcQ_24tmpVar0 && __omcQ_24tmpVar1);
                } else if (tmp9 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp8 = __omcQ_24tmpVar1;
            }
          }

          { /* match expression */
            modelica_metatype tmp13_1;
            tmp13_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 9)));
            {
              volatile mmc_switch_type tmp13;
              int tmp14;
              tmp13 = 0;
              for (; tmp13 < 2; tmp13++) {
                switch (MMC_SWITCH_CAST(tmp13)) {
                case 0: {
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  if (optionNone(tmp13_1)) goto tmp12_end;
                  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 1));
                  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
                  if (listEmpty(tmpMeta16)) goto tmp12_end;
                  tmpMeta17 = MMC_CAR(tmpMeta16);
                  tmpMeta18 = MMC_CDR(tmpMeta16);
                  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
                  tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 5));
                  if (!listEmpty(tmpMeta18)) goto tmp12_end;
                  
                  _jeqs = tmpMeta19;
                  _constantEqns = tmpMeta20;
                  /* Pattern matching succeeded */
                  tmpMeta10 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp12_done;
                }
                case 1: {
                  modelica_metatype tmpMeta21;
                  
                  /* Pattern matching succeeded */
                  tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta10 = tmpMeta21;
                  goto tmp12_done;
                }
                }
                goto tmp12_end;
                tmp12_end: ;
              }
              goto goto_11;
              goto_11:;
              goto goto_2;
              goto tmp12_done;
              tmp12_done:;
            }
          }
          _jeqs = tmpMeta10;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar3;
              modelica_boolean __omcQ_24tmpVar2;
              modelica_integer tmp23;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar3 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp23 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp23--;
                }
                if (tmp23 == 0) {
                  __omcQ_24tmpVar2 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar3 = (__omcQ_24tmpVar2 && __omcQ_24tmpVar3);
                } else if (tmp23 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp22 = __omcQ_24tmpVar3;
            }
          }

          if((listEmpty(_eqs) && listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT58);
          }

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT60);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT59);
          }

          tmpMeta24 = stringAppend(_OMC_LIT61,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 12))))));
          tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT62);
          omc_File_write(threadData, _file, tmpMeta25);

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp27;
            modelica_metatype tmpMeta28;
            modelica_metatype tmpMeta29;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp34;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 5)));
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta28; /* defaultValue */
            tmp27 = &__omcQ_24tmpVar5;
            while(1) {
              tmp34 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp34--;
              }
              if (tmp34 == 0) {
                { /* match expression */
                  modelica_metatype tmp32_1;
                  tmp32_1 = _v;
                  {
                    volatile mmc_switch_type tmp32;
                    int tmp33;
                    tmp32 = 0;
                    for (; tmp32 < 1; tmp32++) {
                      switch (MMC_SWITCH_CAST(tmp32)) {
                      case 0: {
                        
                        /* Pattern matching succeeded */
                        tmpMeta29 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
                        goto tmp31_done;
                      }
                      }
                      goto tmp31_end;
                      tmp31_end: ;
                    }
                    goto goto_30;
                    goto_30:;
                    goto goto_2;
                    goto tmp31_done;
                    tmp31_done:;
                  }
                }__omcQ_24tmpVar4 = tmpMeta29;
                *tmp27 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp27 = &MMC_CDR(*tmp27);
              } else if (tmp34 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp27 = mmc_mk_nil();
            tmpMeta26 = __omcQ_24tmpVar5;
          }
          omc_SerializeModelInfo_serializeUses(threadData, _file, tmpMeta26);

          omc_File_write(threadData, _file, _OMC_LIT63);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT64);

            tmp35 = ((modelica_real)(_i) * (_i));
            if (tmp35 == 0) {goto goto_2;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp35, _OMC_LIT65);
          }

          omc_File_write(threadData, _file, _OMC_LIT66);

          omc_SerializeModelInfo_serializeList1(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))), mmc_mk_boolean(_withOperations), boxvar_SerializeModelInfo_serializeLinearCell);

          omc_File_write(threadData, _file, _OMC_LIT67);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))), boxvar_SerializeModelInfo_serializeExp);

          omc_File_write(threadData, _file, _OMC_LIT68);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
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
            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?((modelica_integer) 1):((modelica_integer) 0)));

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
                  __omcQ_24tmpVar6 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?((modelica_integer) 1):((modelica_integer) 0)));
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
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, ((modelica_integer) 2));

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
                  __omcQ_24tmpVar8 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, ((modelica_integer) 2));
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
            omc_File_write(threadData, _file, _OMC_LIT45);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT58);
          }

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT60);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT59);
          }

          tmpMeta55 = stringAppend(_OMC_LIT61,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 12))))));
          tmpMeta56 = stringAppend(tmpMeta55,_OMC_LIT62);
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
          omc_SerializeModelInfo_serializeUses(threadData, _file, tmpMeta57);

          omc_File_write(threadData, _file, _OMC_LIT63);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT64);

            tmp66 = ((modelica_real)(_i) * (_i));
            if (tmp66 == 0) {goto goto_2;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp66, _OMC_LIT65);
          }

          omc_File_write(threadData, _file, _OMC_LIT66);

          omc_SerializeModelInfo_serializeList1(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))), mmc_mk_boolean(_withOperations), boxvar_SerializeModelInfo_serializeLinearCell);

          omc_File_write(threadData, _file, _OMC_LIT67);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))), boxvar_SerializeModelInfo_serializeExp);

          omc_File_write(threadData, _file, _OMC_LIT69);

          _i = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 6))));

          _j = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 7))));

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 8))));

          if((!listEmpty(_eqs)))
          {
            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4))))?((modelica_integer) 1):((modelica_integer) 0)));

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
                  __omcQ_24tmpVar12 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4))))?((modelica_integer) 1):((modelica_integer) 0)));
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
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 1 /* true */, ((modelica_integer) 2));

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
                  __omcQ_24tmpVar14 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 0 /* false */, ((modelica_integer) 2));
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
            omc_File_write(threadData, _file, _OMC_LIT45);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT58);
          }

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT60);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT59);
          }

          tmpMeta83 = stringAppend(_OMC_LIT61,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 12))))));
          tmpMeta84 = stringAppend(tmpMeta83,_OMC_LIT62);
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
          omc_SerializeModelInfo_serializeUses(threadData, _file, tmpMeta85);

          omc_File_write(threadData, _file, _OMC_LIT63);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT64);

            tmp94 = ((modelica_real)(_i) * (_i));
            if (tmp94 == 0) {goto goto_2;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp94, _OMC_LIT65);
          }

          omc_File_write(threadData, _file, _OMC_LIT66);

          omc_SerializeModelInfo_serializeList1(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 7))), mmc_mk_boolean(_withOperations), boxvar_SerializeModelInfo_serializeLinearCell);

          omc_File_write(threadData, _file, _OMC_LIT67);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 6))), boxvar_SerializeModelInfo_serializeExp);

          omc_File_write(threadData, _file, _OMC_LIT68);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,3) == 0) goto tmp3_end;
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta95)) goto tmp3_end;
          tmpMeta96 = MMC_CAR(tmpMeta95);
          tmpMeta97 = MMC_CDR(tmpMeta95);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta96,0,4) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta97)) goto tmp3_end;
          
          _stmt = tmpMeta96;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          tmpMeta98 = stringAppend(_section,_OMC_LIT70);
          omc_File_write(threadData, _file, tmpMeta98);

          omc_ComponentReference_writeCref(threadData, _file, omc_Expression_expCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT54);

          omc_SerializeModelInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT71);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeModelInfo_serializeStatement);

          omc_File_write(threadData, _file, _OMC_LIT72);

          omc_SerializeModelInfo_serializeSource(threadData, _file, omc_Algorithm_getStatementSource(threadData, _stmt), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,3) == 0) goto tmp3_end;
          tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta99)) goto tmp3_end;
          tmpMeta100 = MMC_CAR(tmpMeta99);
          tmpMeta101 = MMC_CDR(tmpMeta99);
          
          _stmt = tmpMeta100;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          tmpMeta102 = stringAppend(_section,_OMC_LIT73);
          omc_File_write(threadData, _file, tmpMeta102);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeModelInfo_serializeStatement);

          omc_File_write(threadData, _file, _OMC_LIT72);

          omc_SerializeModelInfo_serializeSource(threadData, _file, omc_Algorithm_getStatementSource(threadData, _stmt), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,5) == 0) goto tmp3_end;
          tmpMeta103 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta103)) goto tmp3_end;
          tmpMeta104 = MMC_CAR(tmpMeta103);
          tmpMeta105 = MMC_CDR(tmpMeta103);
          
          _stmt = tmpMeta104;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          tmpMeta106 = stringAppend(_section,_OMC_LIT73);
          omc_File_write(threadData, _file, tmpMeta106);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeModelInfo_serializeStatement);

          omc_File_write(threadData, _file, _OMC_LIT72);

          omc_SerializeModelInfo_serializeSource(threadData, _file, omc_Algorithm_getStatementSource(threadData, _stmt), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_boolean tmp109;
          modelica_metatype tmpMeta111;
          modelica_boolean tmp123;
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!optionNone(tmpMeta108)) goto tmp3_end;
          
          _nlSystem = tmpMeta107;
          /* Pattern matching succeeded */
          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 3))));

          omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?((modelica_integer) 1):((modelica_integer) 0)));

          {
            modelica_boolean __omcQ_24tmpVar19;
            modelica_boolean __omcQ_24tmpVar18;
            modelica_integer tmp110;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = listRest(_eqs);
            __omcQ_24tmpVar19 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp110 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp110--;
              }
              if (tmp110 == 0) {
                __omcQ_24tmpVar18 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?((modelica_integer) 1):((modelica_integer) 0)));
                __omcQ_24tmpVar19 = (__omcQ_24tmpVar18 && __omcQ_24tmpVar19);
              } else if (tmp110 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp109 = __omcQ_24tmpVar19;
          }

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

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar21;
              modelica_boolean __omcQ_24tmpVar20;
              modelica_integer tmp124;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar21 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp124 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp124--;
                }
                if (tmp124 == 0) {
                  __omcQ_24tmpVar20 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar21 = (__omcQ_24tmpVar20 && __omcQ_24tmpVar21);
                } else if (tmp124 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp123 = __omcQ_24tmpVar21;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT60);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT59);
          }

          tmpMeta125 = stringAppend(_OMC_LIT74,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 6))))));
          tmpMeta126 = stringAppend(tmpMeta125,_OMC_LIT62);
          omc_File_write(threadData, _file, tmpMeta126);

          omc_SerializeModelInfo_serializeUses(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 4))));

          omc_File_write(threadData, _file, _OMC_LIT75);

          omc_SerializeModelInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeModelInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT76);

          omc_SerializeModelInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeModelInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT77);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_boolean tmp130;
          modelica_metatype tmpMeta132;
          modelica_boolean tmp144;
          modelica_metatype tmpMeta146;
          modelica_metatype tmpMeta147;
          modelica_boolean tmp148;
          modelica_metatype tmpMeta150;
          modelica_boolean tmp162;
          modelica_metatype tmpMeta164;
          modelica_metatype tmpMeta165;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta127 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta128)) goto tmp3_end;
          tmpMeta129 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta128), 1));
          
          _nlSystem = tmpMeta127;
          _atNL = tmpMeta129;
          /* Pattern matching succeeded */
          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 3))));

          omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?((modelica_integer) 1):((modelica_integer) 0)));

          {
            modelica_boolean __omcQ_24tmpVar23;
            modelica_boolean __omcQ_24tmpVar22;
            modelica_integer tmp131;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = listRest(_eqs);
            __omcQ_24tmpVar23 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp131 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp131--;
              }
              if (tmp131 == 0) {
                __omcQ_24tmpVar22 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?((modelica_integer) 1):((modelica_integer) 0)));
                __omcQ_24tmpVar23 = (__omcQ_24tmpVar22 && __omcQ_24tmpVar23);
              } else if (tmp131 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp130 = __omcQ_24tmpVar23;
          }

          { /* match expression */
            modelica_metatype tmp135_1;
            tmp135_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 7)));
            {
              volatile mmc_switch_type tmp135;
              int tmp136;
              tmp135 = 0;
              for (; tmp135 < 2; tmp135++) {
                switch (MMC_SWITCH_CAST(tmp135)) {
                case 0: {
                  modelica_metatype tmpMeta137;
                  modelica_metatype tmpMeta138;
                  modelica_metatype tmpMeta139;
                  modelica_metatype tmpMeta140;
                  modelica_metatype tmpMeta141;
                  modelica_metatype tmpMeta142;
                  if (optionNone(tmp135_1)) goto tmp134_end;
                  tmpMeta137 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp135_1), 1));
                  tmpMeta138 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta137), 2));
                  if (listEmpty(tmpMeta138)) goto tmp134_end;
                  tmpMeta139 = MMC_CAR(tmpMeta138);
                  tmpMeta140 = MMC_CDR(tmpMeta138);
                  tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta139), 2));
                  tmpMeta142 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta139), 5));
                  if (!listEmpty(tmpMeta140)) goto tmp134_end;
                  
                  _jeqs = tmpMeta141;
                  _constantEqns = tmpMeta142;
                  /* Pattern matching succeeded */
                  tmpMeta132 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp134_done;
                }
                case 1: {
                  modelica_metatype tmpMeta143;
                  
                  /* Pattern matching succeeded */
                  tmpMeta143 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta132 = tmpMeta143;
                  goto tmp134_done;
                }
                }
                goto tmp134_end;
                tmp134_end: ;
              }
              goto goto_133;
              goto_133:;
              goto goto_2;
              goto tmp134_done;
              tmp134_done:;
            }
          }
          _jeqs = tmpMeta132;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar25;
              modelica_boolean __omcQ_24tmpVar24;
              modelica_integer tmp145;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar25 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp145 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp145--;
                }
                if (tmp145 == 0) {
                  __omcQ_24tmpVar24 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar25 = (__omcQ_24tmpVar24 && __omcQ_24tmpVar25);
                } else if (tmp145 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp144 = __omcQ_24tmpVar25;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT60);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT59);
          }

          tmpMeta146 = stringAppend(_OMC_LIT74,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 6))))));
          tmpMeta147 = stringAppend(tmpMeta146,_OMC_LIT62);
          omc_File_write(threadData, _file, tmpMeta147);

          omc_SerializeModelInfo_serializeUses(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 4))));

          omc_File_write(threadData, _file, _OMC_LIT75);

          omc_SerializeModelInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeModelInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT76);

          omc_SerializeModelInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeModelInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT78);

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 3))));

          omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10))))?((modelica_integer) 1):((modelica_integer) 0)));

          {
            modelica_boolean __omcQ_24tmpVar27;
            modelica_boolean __omcQ_24tmpVar26;
            modelica_integer tmp149;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = listRest(_eqs);
            __omcQ_24tmpVar27 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp149 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp149--;
              }
              if (tmp149 == 0) {
                __omcQ_24tmpVar26 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10))))?((modelica_integer) 1):((modelica_integer) 0)));
                __omcQ_24tmpVar27 = (__omcQ_24tmpVar26 && __omcQ_24tmpVar27);
              } else if (tmp149 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp148 = __omcQ_24tmpVar27;
          }

          { /* match expression */
            modelica_metatype tmp153_1;
            tmp153_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 7)));
            {
              volatile mmc_switch_type tmp153;
              int tmp154;
              tmp153 = 0;
              for (; tmp153 < 2; tmp153++) {
                switch (MMC_SWITCH_CAST(tmp153)) {
                case 0: {
                  modelica_metatype tmpMeta155;
                  modelica_metatype tmpMeta156;
                  modelica_metatype tmpMeta157;
                  modelica_metatype tmpMeta158;
                  modelica_metatype tmpMeta159;
                  modelica_metatype tmpMeta160;
                  if (optionNone(tmp153_1)) goto tmp152_end;
                  tmpMeta155 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp153_1), 1));
                  tmpMeta156 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta155), 2));
                  if (listEmpty(tmpMeta156)) goto tmp152_end;
                  tmpMeta157 = MMC_CAR(tmpMeta156);
                  tmpMeta158 = MMC_CDR(tmpMeta156);
                  tmpMeta159 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta157), 2));
                  tmpMeta160 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta157), 5));
                  if (!listEmpty(tmpMeta158)) goto tmp152_end;
                  
                  _jeqs = tmpMeta159;
                  _constantEqns = tmpMeta160;
                  /* Pattern matching succeeded */
                  tmpMeta150 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp152_done;
                }
                case 1: {
                  modelica_metatype tmpMeta161;
                  
                  /* Pattern matching succeeded */
                  tmpMeta161 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta150 = tmpMeta161;
                  goto tmp152_done;
                }
                }
                goto tmp152_end;
                tmp152_end: ;
              }
              goto goto_151;
              goto_151:;
              goto goto_2;
              goto tmp152_done;
              tmp152_done:;
            }
          }
          _jeqs = tmpMeta150;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 1 /* true */, ((modelica_integer) 2));

            {
              modelica_boolean __omcQ_24tmpVar29;
              modelica_boolean __omcQ_24tmpVar28;
              modelica_integer tmp163;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = listRest(_jeqs);
              __omcQ_24tmpVar29 = 1 /* true */; /* defaultValue */
              while(1) {
                tmp163 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp163--;
                }
                if (tmp163 == 0) {
                  __omcQ_24tmpVar28 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 0 /* false */, ((modelica_integer) 2));
                  __omcQ_24tmpVar29 = (__omcQ_24tmpVar28 && __omcQ_24tmpVar29);
                } else if (tmp163 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              tmp162 = __omcQ_24tmpVar29;
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT60);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT59);
          }

          tmpMeta164 = stringAppend(_OMC_LIT74,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 6))))));
          tmpMeta165 = stringAppend(tmpMeta164,_OMC_LIT62);
          omc_File_write(threadData, _file, tmpMeta165);

          omc_SerializeModelInfo_serializeUses(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 4))));

          omc_File_write(threadData, _file, _OMC_LIT75);

          omc_SerializeModelInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeModelInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT76);

          omc_SerializeModelInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeModelInfo_serializeEquationIndex);

          omc_File_write(threadData, _file, _OMC_LIT77);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta166;
          modelica_boolean tmp170;
          modelica_metatype tmpMeta172;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp167;
            modelica_metatype tmpMeta168;
            modelica_metatype __omcQ_24tmpVar30;
            modelica_integer tmp169;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)));
            tmpMeta168 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta168; /* defaultValue */
            tmp167 = &__omcQ_24tmpVar31;
            while(1) {
              tmp169 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp169--;
              }
              if (tmp169 == 0) {
                __omcQ_24tmpVar30 = omc_Util_tuple22(threadData, _e);
                *tmp167 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp167 = &MMC_CDR(*tmp167);
              } else if (tmp169 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp167 = mmc_mk_nil();
            tmpMeta166 = __omcQ_24tmpVar31;
          }
          _eqs = listAppend(omc_List_flatten(threadData, tmpMeta166), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));

          omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, ((modelica_integer) 0), 1 /* true */, ((modelica_integer) 0));

          {
            modelica_boolean __omcQ_24tmpVar33;
            modelica_boolean __omcQ_24tmpVar32;
            modelica_integer tmp171;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = listRest(_eqs);
            __omcQ_24tmpVar33 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp171 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp171--;
              }
              if (tmp171 == 0) {
                __omcQ_24tmpVar32 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar33 = (__omcQ_24tmpVar32 && __omcQ_24tmpVar33);
              } else if (tmp171 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp170 = __omcQ_24tmpVar33;
          }

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT79);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeModelInfo_serializeIfBranch);

          omc_File_write(threadData, _file, _OMC_LIT4);

          tmpMeta172 = mmc_mk_box2(0, _OMC_LIT80, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          omc_SerializeModelInfo_serializeIfBranch(threadData, _file, tmpMeta172);

          omc_File_write(threadData, _file, _OMC_LIT81);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 17: {
          modelica_boolean tmp173;
          modelica_metatype tmpMeta175;
          modelica_metatype tmpMeta179;
          modelica_metatype tmpMeta180;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SerializeModelInfo_serializeEquation(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _section, _withOperations, ((modelica_integer) 0), 1 /* true */, ((modelica_integer) 0));

          {
            modelica_boolean __omcQ_24tmpVar35;
            modelica_boolean __omcQ_24tmpVar34;
            modelica_integer tmp174;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)));
            __omcQ_24tmpVar35 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp174 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp174--;
              }
              if (tmp174 == 0) {
                __omcQ_24tmpVar34 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar35 = (__omcQ_24tmpVar34 && __omcQ_24tmpVar35);
              } else if (tmp174 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp173 = __omcQ_24tmpVar35;
          }

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT82);

          {
            modelica_metatype __omcQ_24tmpVar37;
            modelica_metatype* tmp176;
            modelica_metatype tmpMeta177;
            modelica_metatype __omcQ_24tmpVar36;
            modelica_integer tmp178;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
            tmpMeta177 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar37 = tmpMeta177; /* defaultValue */
            tmp176 = &__omcQ_24tmpVar37;
            while(1) {
              tmp178 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp178--;
              }
              if (tmp178 == 0) {
                __omcQ_24tmpVar36 = omc_SimCodeFunctionUtil_varName(threadData, _v);
                *tmp176 = mmc_mk_cons(__omcQ_24tmpVar36,0);
                tmp176 = &MMC_CDR(*tmp176);
              } else if (tmp178 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp176 = mmc_mk_nil();
            tmpMeta175 = __omcQ_24tmpVar37;
          }
          omc_SerializeModelInfo_serializeUses(threadData, _file, tmpMeta175);

          omc_File_write(threadData, _file, _OMC_LIT71);

          omc_SerializeModelInfo_serializeEquationIndex(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));

          {
            modelica_metatype _e1;
            for (tmpMeta179 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))); !listEmpty(tmpMeta179); tmpMeta179=MMC_CDR(tmpMeta179))
            {
              _e1 = MMC_CAR(tmpMeta179);
              omc_File_write(threadData, _file, _OMC_LIT4);

              omc_SerializeModelInfo_serializeEquationIndex(threadData, _file, _e1);
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT81);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta181;
          modelica_metatype tmpMeta186;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          {
            modelica_metatype _whenOps;
            for (tmpMeta181 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))); !listEmpty(tmpMeta181); tmpMeta181=MMC_CDR(tmpMeta181))
            {
              _whenOps = MMC_CAR(tmpMeta181);
              { /* match expression */
                modelica_metatype tmp184_1;
                tmp184_1 = _whenOps;
                {
                  volatile mmc_switch_type tmp184;
                  int tmp185;
                  tmp184 = 0;
                  for (; tmp184 < 5; tmp184++) {
                    switch (MMC_SWITCH_CAST(tmp184)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp184_1,0,3) == 0) goto tmp183_end;
                      
                      _whenOp = tmp184_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT83);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT84);

                      omc_SerializeModelInfo_serializeUses(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3)))));

                      omc_File_write(threadData, _file, _OMC_LIT71);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT72);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT42);
                      goto tmp183_done;
                    }
                    case 1: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp184_1,1,3) == 0) goto tmp183_end;
                      
                      _whenOp = tmp184_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT83);

                      omc_SerializeModelInfo_serializeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT84);

                      omc_SerializeModelInfo_serializeUses(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3)))));

                      omc_File_write(threadData, _file, _OMC_LIT71);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT72);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT42);
                      goto tmp183_done;
                    }
                    case 2: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp184_1,2,4) == 0) goto tmp183_end;
                      
                      _whenOp = tmp184_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT85);

                      omc_File_write(threadData, _file, _OMC_LIT86);

                      _crefs = omc_Expression_extractCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))), 1 /* true */);

                      omc_SerializeModelInfo_serializeUses(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, _crefs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3)))));

                      omc_File_write(threadData, _file, _OMC_LIT71);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT72);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT42);
                      goto tmp183_done;
                    }
                    case 3: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp184_1,3,2) == 0) goto tmp183_end;
                      
                      _whenOp = tmp184_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT85);

                      omc_File_write(threadData, _file, _OMC_LIT86);

                      omc_SerializeModelInfo_serializeUses(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2)))));

                      omc_File_write(threadData, _file, _OMC_LIT71);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT72);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT42);
                      goto tmp183_done;
                    }
                    case 4: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp184_1,4,2) == 0) goto tmp183_end;
                      
                      _whenOp = tmp184_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT85);

                      omc_File_write(threadData, _file, _OMC_LIT86);

                      omc_SerializeModelInfo_serializeUses(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2)))));

                      omc_File_write(threadData, _file, _OMC_LIT71);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT72);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT42);
                      goto tmp183_done;
                    }
                    }
                    goto tmp183_end;
                    tmp183_end: ;
                  }
                  goto goto_182;
                  goto_182:;
                  goto goto_2;
                  goto tmp183_done;
                  tmp183_done:;
                }
              }
              ;
            }
          }

          { /* match expression */
            modelica_metatype tmp189_1;
            tmp189_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)));
            {
              modelica_metatype _e = NULL;
              volatile mmc_switch_type tmp189;
              int tmp190;
              // _e has no default value.
              tmp189 = 0;
              for (; tmp189 < 2; tmp189++) {
                switch (MMC_SWITCH_CAST(tmp189)) {
                case 0: {
                  modelica_metatype tmpMeta191;
                  if (optionNone(tmp189_1)) goto tmp188_end;
                  tmpMeta191 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp189_1), 1));
                  _e = tmpMeta191;
                  /* Pattern matching succeeded */
                  if((omc_SimCodeUtil_simEqSystemIndex(threadData, _e) != ((modelica_integer) 0)))
                  {
                    omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                  }
                  goto tmp188_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  goto tmp188_done;
                }
                }
                goto tmp188_end;
                tmp188_end: ;
              }
              goto goto_187;
              goto_187:;
              goto goto_2;
              goto tmp188_done;
              tmp188_done:;
            }
          }
          ;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 19: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT46);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_File_write(threadData, _file, _section);

          if((_assign_type == ((modelica_integer) 1)))
          {
            omc_File_write(threadData, _file, _OMC_LIT57);
          }
          else
          {
            if((_assign_type == ((modelica_integer) 2)))
            {
              omc_File_write(threadData, _file, _OMC_LIT56);
            }
            else
            {
              omc_File_write(threadData, _file, _OMC_LIT55);
            }
          }

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), 3);

          omc_File_write(threadData, _file, _OMC_LIT54);

          omc_SerializeModelInfo_serializeUses(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT50);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 8))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 20: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT45);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          omc_File_write(threadData, _file, _OMC_LIT87);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), _OMC_LIT6);

          omc_File_write(threadData, _file, _OMC_LIT88);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT89);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta192;
          
          /* Pattern matching succeeded */
          tmpMeta192 = stringAppend(_OMC_LIT90,mmc_anyString(_eq));
          omc_Error_addInternalError(threadData, tmpMeta192, _OMC_LIT92);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeEquation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq, modelica_metatype _section, modelica_metatype _withOperations, modelica_metatype _parent, modelica_metatype _first, modelica_metatype _assign_type)
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
  _success = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _section, tmp1, tmp2, tmp3, tmp4);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeOperation(threadData_t *threadData, modelica_complex _file, modelica_metatype _op)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _op;
    {
      modelica_metatype _elt = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _elt has no default value.
      tmp3 = 0;
      for (; tmp3 < 13; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (optionNone(tmpMeta5)) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          _elt = tmpMeta6;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT93);

          omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_SCodeDump_equationStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), _OMC_LIT94), _OMC_LIT9), 3);

          omc_File_write(threadData, _file, _OMC_LIT95);

          omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_DAEDump_dumpEquationStr(threadData, _elt), _OMC_LIT9), 3);

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT97);

          omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_SCodeDump_equationStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), _OMC_LIT94), _OMC_LIT9), 3);

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT98);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));

          omc_File_write(threadData, _file, _OMC_LIT95);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3))));

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT99);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));

          omc_File_write(threadData, _file, _OMC_LIT95);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3))));

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,5) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 6));
          if (!listEmpty(tmpMeta7)) goto tmp2_end;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT100);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT95);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 5)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 5: {
          modelica_boolean tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT101);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT95);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 5)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT7);

          {
            modelica_boolean __omcQ_24tmpVar39;
            modelica_boolean tmp9 = 0;
            modelica_boolean __omcQ_24tmpVar38;
            modelica_integer tmp14;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 6)));
            __omcQ_24tmpVar39 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                { /* match expression */
                  {
                    volatile mmc_switch_type tmp12;
                    int tmp13;
                    tmp12 = 0;
                    for (; tmp12 < 1; tmp12++) {
                      switch (MMC_SWITCH_CAST(tmp12)) {
                      case 0: {
                        /* Pattern matching succeeded */
                        omc_File_write(threadData, _file, _OMC_LIT102);

                        omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, _e), 3);

                        omc_File_write(threadData, _file, _OMC_LIT7);
                        tmp9 = 1 /* true */;
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
                }__omcQ_24tmpVar38 = tmp9;
                __omcQ_24tmpVar39 = (__omcQ_24tmpVar38 && __omcQ_24tmpVar39);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            tmp8 = __omcQ_24tmpVar39;
          }

          omc_File_write(threadData, _file, _OMC_LIT81);
          goto tmp2_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,10,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT103);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT104);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 7: {
          modelica_boolean tmp15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT105);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT7);

          {
            modelica_boolean __omcQ_24tmpVar41;
            modelica_boolean tmp16 = 0;
            modelica_boolean __omcQ_24tmpVar40;
            modelica_integer tmp21;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2)));
            __omcQ_24tmpVar41 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp21 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp21--;
              }
              if (tmp21 == 0) {
                { /* match expression */
                  {
                    volatile mmc_switch_type tmp19;
                    int tmp20;
                    tmp19 = 0;
                    for (; tmp19 < 1; tmp19++) {
                      switch (MMC_SWITCH_CAST(tmp19)) {
                      case 0: {
                        /* Pattern matching succeeded */
                        omc_File_write(threadData, _file, _OMC_LIT102);

                        omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, _e), 3);

                        omc_File_write(threadData, _file, _OMC_LIT7);
                        tmp16 = 1 /* true */;
                        goto tmp18_done;
                      }
                      }
                      goto tmp18_end;
                      tmp18_end: ;
                    }
                    goto goto_17;
                    goto_17:;
                    goto goto_1;
                    goto tmp18_done;
                    tmp18_done:;
                  }
                }__omcQ_24tmpVar40 = tmp16;
                __omcQ_24tmpVar41 = (__omcQ_24tmpVar40 && __omcQ_24tmpVar41);
              } else if (tmp21 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            tmp15 = __omcQ_24tmpVar41;
          }

          omc_File_write(threadData, _file, _OMC_LIT81);
          goto tmp2_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT106);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT107);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT108);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT95);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT109);

          omc_File_write(threadData, _file, intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3))))));

          omc_File_write(threadData, _file, _OMC_LIT110);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));

          omc_File_write(threadData, _file, _OMC_LIT95);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4))));

          omc_File_write(threadData, _file, _OMC_LIT96);
          goto tmp2_done;
        }
        case 11: {
          modelica_boolean tmp22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,9,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT111);

          omc_File_write(threadData, _file, _OMC_LIT108);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 1);

          omc_File_write(threadData, _file, _OMC_LIT7);

          {
            modelica_boolean __omcQ_24tmpVar43;
            modelica_boolean tmp23 = 0;
            modelica_boolean __omcQ_24tmpVar42;
            modelica_integer tmp28;
            modelica_metatype _cr_loopVar = 0;
            modelica_metatype _cr;
            _cr_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
            __omcQ_24tmpVar43 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp28 = 1;
              if (!listEmpty(_cr_loopVar)) {
                _cr = MMC_CAR(_cr_loopVar);
                _cr_loopVar = MMC_CDR(_cr_loopVar);
                tmp28--;
              }
              if (tmp28 == 0) {
                { /* match expression */
                  {
                    volatile mmc_switch_type tmp26;
                    int tmp27;
                    tmp26 = 0;
                    for (; tmp26 < 1; tmp26++) {
                      switch (MMC_SWITCH_CAST(tmp26)) {
                      case 0: {
                        /* Pattern matching succeeded */
                        omc_File_write(threadData, _file, _OMC_LIT102);

                        omc_ComponentReference_writeCref(threadData, _file, _cr, 3);

                        omc_File_write(threadData, _file, _OMC_LIT7);
                        tmp23 = 1 /* true */;
                        goto tmp25_done;
                      }
                      }
                      goto tmp25_end;
                      tmp25_end: ;
                    }
                    goto goto_24;
                    goto_24:;
                    goto goto_1;
                    goto tmp25_done;
                    tmp25_done:;
                  }
                }__omcQ_24tmpVar42 = tmp23;
                __omcQ_24tmpVar43 = (__omcQ_24tmpVar42 && __omcQ_24tmpVar43);
              } else if (tmp28 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            tmp22 = __omcQ_24tmpVar43;
          }

          omc_File_write(threadData, _file, _OMC_LIT81);
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          tmpMeta29 = stringAppend(_OMC_LIT112,mmc_anyString(_op));
          omc_Error_addInternalError(threadData, tmpMeta29, _OMC_LIT113);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeOperation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _op)
{
  omc_SerializeModelInfo_serializeOperation(threadData, _file, _op);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeInfo(threadData_t *threadData, modelica_complex _file, modelica_metatype _info)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype _i;
    tmp3_1 = _info;
    _i = tmp3_1;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT114);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT115);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i), 4)))), _OMC_LIT6);

          omc_File_write(threadData, _file, _OMC_LIT116);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i), 6)))), _OMC_LIT6);

          omc_File_write(threadData, _file, _OMC_LIT117);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i), 5)))), _OMC_LIT6);

          omc_File_write(threadData, _file, _OMC_LIT118);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i), 7)))), _OMC_LIT6);

          omc_File_write(threadData, _file, _OMC_LIT42);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeInfo(threadData_t *threadData, modelica_metatype _file, modelica_metatype _info)
{
  omc_SerializeModelInfo_serializeInfo(threadData, _file, _info);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeSource(threadData_t *threadData, modelica_complex _file, modelica_metatype _source, modelica_boolean _withOperations)
{
  modelica_metatype _info = NULL;
  modelica_metatype _paths = NULL;
  modelica_metatype _typeLst = NULL;
  modelica_metatype _partOfLst = NULL;
  modelica_metatype _instance = NULL;
  modelica_integer _i;
  modelica_metatype _operations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  // _paths has no default value.
  // _typeLst has no default value.
  // _partOfLst has no default value.
  // _instance has no default value.
  // _i has no default value.
  // _operations has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _source;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  _info = tmpMeta2;
  _partOfLst = tmpMeta3;
  _instance = tmpMeta4;
  _typeLst = tmpMeta5;
  _operations = tmpMeta6;

  omc_File_write(threadData, _file, _OMC_LIT119);

  omc_SerializeModelInfo_serializeInfo(threadData, _file, _info);

  if((!listEmpty(_partOfLst)))
  {
    {
      modelica_metatype __omcQ_24tmpVar45;
      modelica_metatype* tmp8;
      modelica_metatype tmpMeta9;
      modelica_metatype tmpMeta10;
      modelica_metatype __omcQ_24tmpVar44;
      modelica_integer tmp15;
      modelica_metatype _w_loopVar = 0;
      modelica_boolean tmp16 = 0;
      modelica_metatype _w;
      _w_loopVar = _partOfLst;
      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar45 = tmpMeta9; /* defaultValue */
      tmp8 = &__omcQ_24tmpVar45;
      while(1) {
        tmp15 = 1;
        while (!listEmpty(_w_loopVar)) {
          _w = MMC_CAR(_w_loopVar);
          _w_loopVar = MMC_CDR(_w_loopVar);
          { /* match expression */
            modelica_metatype tmp19_1;
            tmp19_1 = _w;
            {
              volatile mmc_switch_type tmp19;
              int tmp20;
              tmp19 = 0;
              for (; tmp19 < 2; tmp19++) {
                switch (MMC_SWITCH_CAST(tmp19)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp19_1,1,0) == 0) goto tmp18_end;
                  /* Pattern matching succeeded */
                  tmp16 = 0 /* false */;
                  goto tmp18_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmp16 = 1 /* true */;
                  goto tmp18_done;
                }
                }
                goto tmp18_end;
                tmp18_end: ;
              }
              goto goto_17;
              goto_17:;
              MMC_THROW_INTERNAL();
              goto tmp18_done;
              tmp18_done:;
            }
          }
          if (tmp16) {
            tmp15--;
            break;
          }
        }
        if (tmp15 == 0) {
          { /* match expression */
            modelica_metatype tmp13_1;
            tmp13_1 = _w;
            {
              volatile mmc_switch_type tmp13;
              int tmp14;
              tmp13 = 0;
              for (; tmp13 < 1; tmp13++) {
                switch (MMC_SWITCH_CAST(tmp13)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,0,1) == 0) goto tmp12_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_w), 2)));
                  goto tmp12_done;
                }
                }
                goto tmp12_end;
                tmp12_end: ;
              }
              goto goto_11;
              goto_11:;
              MMC_THROW_INTERNAL();
              goto tmp12_done;
              tmp12_done:;
            }
          }__omcQ_24tmpVar44 = tmpMeta10;
          *tmp8 = mmc_mk_cons(__omcQ_24tmpVar44,0);
          tmp8 = &MMC_CDR(*tmp8);
        } else if (tmp15 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp8 = mmc_mk_nil();
      tmpMeta7 = __omcQ_24tmpVar45;
    }
    _paths = tmpMeta7;

    omc_File_write(threadData, _file, _OMC_LIT120);

    omc_SerializeModelInfo_serializeList(threadData, _file, _paths, boxvar_SerializeModelInfo_serializePath);

    omc_File_write(threadData, _file, _OMC_LIT5);
  }

  { /* match expression */
    modelica_metatype tmp23_1;
    tmp23_1 = _instance;
    {
      volatile mmc_switch_type tmp23;
      int tmp24;
      tmp23 = 0;
      for (; tmp23 < 2; tmp23++) {
        switch (MMC_SWITCH_CAST(tmp23)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp23_1,1,0) == 0) goto tmp22_end;
          /* Pattern matching succeeded */
          goto tmp22_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp23_1,0,6) == 0) goto tmp22_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT121);

          omc_PrefixUtil_writeComponentPrefix(threadData, _file, _instance, 3);

          omc_File_write(threadData, _file, _OMC_LIT7);
          goto tmp22_done;
        }
        }
        goto tmp22_end;
        tmp22_end: ;
      }
      goto goto_21;
      goto_21:;
      MMC_THROW_INTERNAL();
      goto tmp22_done;
      tmp22_done:;
    }
  }
  ;

  if((!listEmpty(_typeLst)))
  {
    omc_File_write(threadData, _file, _OMC_LIT122);

    omc_SerializeModelInfo_serializeList(threadData, _file, _typeLst, boxvar_SerializeModelInfo_serializePath);

    omc_File_write(threadData, _file, _OMC_LIT5);
  }

  if((_withOperations && (!listEmpty(_operations))))
  {
    omc_File_write(threadData, _file, _OMC_LIT123);

    omc_SerializeModelInfo_serializeList(threadData, _file, _operations, boxvar_SerializeModelInfo_serializeOperation);

    omc_File_write(threadData, _file, _OMC_LIT81);
  }
  else
  {
    omc_File_write(threadData, _file, _OMC_LIT42);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeSource(threadData_t *threadData, modelica_metatype _file, modelica_metatype _source, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeModelInfo_serializeSource(threadData, _file, _source, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeTypeName(threadData_t *threadData, modelica_complex _file, modelica_metatype _ty)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ty;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT124);
          goto tmp2_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT125);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT126);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT127);
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT128);
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
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeTypeName(threadData_t *threadData, modelica_metatype _file, modelica_metatype _ty)
{
  omc_SerializeModelInfo_serializeTypeName(threadData, _file, _ty);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeVar(threadData_t *threadData, modelica_complex _file, modelica_metatype _var, modelica_boolean _withOperations, modelica_boolean _first)
{
  modelica_boolean _ok;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ok has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, (_first?_OMC_LIT7:_OMC_LIT129));

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT130);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), 3);

          omc_File_write(threadData, _file, _OMC_LIT131);

          omc_SerializeModelInfo_serializeVarKind(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))), _var);

          omc_File_write(threadData, _file, _OMC_LIT7);

          omc_SerializeModelInfo_serializeTypeName(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 13))));

          omc_File_write(threadData, _file, _OMC_LIT132);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 5))), 3);

          omc_File_write(threadData, _file, _OMC_LIT133);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6))), 3);

          omc_File_write(threadData, _file, _OMC_LIT41);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 17))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT42);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT36, _OMC_LIT135);
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
  _ok = tmp1;
  _return: OMC_LABEL_UNUSED
  return _ok;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeVar(threadData_t *threadData, modelica_metatype _file, modelica_metatype _var, modelica_metatype _withOperations, modelica_metatype _first)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _ok;
  modelica_metatype out_ok;
  tmp1 = mmc_unbox_integer(_withOperations);
  tmp2 = mmc_unbox_integer(_first);
  _ok = omc_SerializeModelInfo_serializeVar(threadData, _file, _var, tmp1, tmp2);
  out_ok = mmc_mk_icon(_ok);
  return out_ok;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeVarsHelp(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_boolean _withOperations, modelica_boolean _inFirst)
{
  modelica_boolean _outFirst;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFirst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _vars;
    {
      modelica_metatype _var = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _var has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _inFirst;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _var = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          omc_SerializeModelInfo_serializeVar(threadData, _file, _var, _withOperations, (!_inFirst));

          {
            modelica_boolean __omcQ_24tmpVar47;
            modelica_boolean __omcQ_24tmpVar46;
            modelica_integer tmp9;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = _rest;
            __omcQ_24tmpVar47 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar46 = omc_SerializeModelInfo_serializeVar(threadData, _file, _v, _withOperations, 0 /* false */);
                __omcQ_24tmpVar47 = (__omcQ_24tmpVar46 && __omcQ_24tmpVar47);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp8 = __omcQ_24tmpVar47;
          }
          tmp1 = 1 /* true */;
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
  _outFirst = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outFirst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeVarsHelp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _withOperations, modelica_metatype _inFirst)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _outFirst;
  modelica_metatype out_outFirst;
  tmp1 = mmc_unbox_integer(_withOperations);
  tmp2 = mmc_unbox_integer(_inFirst);
  _outFirst = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, _vars, tmp1, tmp2);
  out_outFirst = mmc_mk_icon(_outFirst);
  return out_outFirst;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeVars(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_boolean _withOperations)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _vars;
    {
      modelica_boolean _b;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _b has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          
          /* Pattern matching succeeded */
          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 2))), _withOperations, 0 /* false */);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 3))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 4))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 6))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 7))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 8))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 11))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 12))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 13))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 14))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 15))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 16))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 18))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 19))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 20))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 21))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 22))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 23))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 24))), _withOperations, _b);

          _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 28))), _withOperations, _b);
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT36, _OMC_LIT137);
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
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeVars(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeModelInfo_serializeVars(threadData, _file, _vars, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeWork(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations, modelica_string *out_fileName)
{
  modelica_boolean _success;
  modelica_string _fileName = NULL;
  modelica_complex _file;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_string tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  // _fileName has no default value.
  _file = omc_File_File_constructor(threadData, omc_File_noReference(threadData));
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _code;
    {
      modelica_metatype _mi = NULL;
      modelica_metatype _vars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _mi has no default value.
      // _vars has no default value.
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
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_boolean tmp14;
          modelica_boolean tmp16;
          modelica_boolean tmp18;
          modelica_boolean tmp20;
          modelica_boolean tmp22;
          modelica_boolean tmp24;
          modelica_boolean tmp26;
          modelica_boolean tmp28;
          modelica_boolean tmp30;
          modelica_boolean tmp32;
          modelica_boolean tmp34;
          modelica_boolean tmp36;
          modelica_boolean tmp38;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 11));
          
          _mi = tmpMeta6;
          _vars = tmpMeta7;
          /* Pattern matching succeeded */
          if((stringEqual(omc_Config_simCodeTarget(threadData), _OMC_LIT140)))
          {
            tmpMeta8 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 38))),_OMC_LIT139);
            tmpMeta9 = stringAppend(tmpMeta8,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 37))));
            tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT138);
            _fileName = tmpMeta10;
          }
          else
          {
            tmpMeta11 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 37))),_OMC_LIT138);
            _fileName = tmpMeta11;
          }

          omc_File_open(threadData, _file, _fileName, 2);

          omc_File_write(threadData, _file, _OMC_LIT141);

          omc_SerializeModelInfo_serializePath(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))));

          omc_File_write(threadData, _file, _OMC_LIT142);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT143);

          omc_SerializeModelInfo_serializeVars(threadData, _file, _vars, _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT144);

          omc_File_write(threadData, _file, _OMC_LIT145);

          {
            modelica_boolean __omcQ_24tmpVar49;
            modelica_boolean __omcQ_24tmpVar48;
            modelica_integer tmp13;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 12))));
            __omcQ_24tmpVar49 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar48 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT146, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar49 = (__omcQ_24tmpVar48 && __omcQ_24tmpVar49);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp12 = __omcQ_24tmpVar49;
          }

          {
            modelica_boolean __omcQ_24tmpVar51;
            modelica_boolean __omcQ_24tmpVar50;
            modelica_integer tmp15;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 13))));
            __omcQ_24tmpVar51 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp15 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp15--;
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar50 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT147, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar51 = (__omcQ_24tmpVar50 && __omcQ_24tmpVar51);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp14 = __omcQ_24tmpVar51;
          }

          {
            modelica_boolean __omcQ_24tmpVar53;
            modelica_boolean __omcQ_24tmpVar52;
            modelica_integer tmp17;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 14))));
            __omcQ_24tmpVar53 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar52 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT148, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar53 = (__omcQ_24tmpVar52 && __omcQ_24tmpVar53);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp16 = __omcQ_24tmpVar53;
          }

          {
            modelica_boolean __omcQ_24tmpVar55;
            modelica_boolean __omcQ_24tmpVar54;
            modelica_integer tmp19;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 8))));
            __omcQ_24tmpVar55 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar54 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT149, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar55 = (__omcQ_24tmpVar54 && __omcQ_24tmpVar55);
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp18 = __omcQ_24tmpVar55;
          }

          {
            modelica_boolean __omcQ_24tmpVar57;
            modelica_boolean __omcQ_24tmpVar56;
            modelica_integer tmp21;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, omc_SimCodeUtil_getClockedEquations(threadData, omc_SimCodeUtil_getSubPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 11))))));
            __omcQ_24tmpVar57 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp21 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp21--;
              }
              if (tmp21 == 0) {
                __omcQ_24tmpVar56 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT150, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar57 = (__omcQ_24tmpVar56 && __omcQ_24tmpVar57);
              } else if (tmp21 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp20 = __omcQ_24tmpVar57;
          }

          {
            modelica_boolean __omcQ_24tmpVar59;
            modelica_boolean __omcQ_24tmpVar58;
            modelica_integer tmp23;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 15))));
            __omcQ_24tmpVar59 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp23 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp23--;
              }
              if (tmp23 == 0) {
                __omcQ_24tmpVar58 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT151, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar59 = (__omcQ_24tmpVar58 && __omcQ_24tmpVar59);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp22 = __omcQ_24tmpVar59;
          }

          {
            modelica_boolean __omcQ_24tmpVar61;
            modelica_boolean __omcQ_24tmpVar60;
            modelica_integer tmp25;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 16))));
            __omcQ_24tmpVar61 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp25 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp25--;
              }
              if (tmp25 == 0) {
                __omcQ_24tmpVar60 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT152, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar61 = (__omcQ_24tmpVar60 && __omcQ_24tmpVar61);
              } else if (tmp25 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp24 = __omcQ_24tmpVar61;
          }

          {
            modelica_boolean __omcQ_24tmpVar63;
            modelica_boolean __omcQ_24tmpVar62;
            modelica_integer tmp27;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 17))));
            __omcQ_24tmpVar63 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp27 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp27--;
              }
              if (tmp27 == 0) {
                __omcQ_24tmpVar62 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT153, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar63 = (__omcQ_24tmpVar62 && __omcQ_24tmpVar63);
              } else if (tmp27 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp26 = __omcQ_24tmpVar63;
          }

          {
            modelica_boolean __omcQ_24tmpVar65;
            modelica_boolean __omcQ_24tmpVar64;
            modelica_integer tmp29;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 18))));
            __omcQ_24tmpVar65 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp29 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp29--;
              }
              if (tmp29 == 0) {
                __omcQ_24tmpVar64 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT154, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar65 = (__omcQ_24tmpVar64 && __omcQ_24tmpVar65);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp28 = __omcQ_24tmpVar65;
          }

          {
            modelica_boolean __omcQ_24tmpVar67;
            modelica_boolean __omcQ_24tmpVar66;
            modelica_integer tmp31;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 19))));
            __omcQ_24tmpVar67 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp31 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp31--;
              }
              if (tmp31 == 0) {
                __omcQ_24tmpVar66 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT18, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar67 = (__omcQ_24tmpVar66 && __omcQ_24tmpVar67);
              } else if (tmp31 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp30 = __omcQ_24tmpVar67;
          }

          {
            modelica_boolean __omcQ_24tmpVar69;
            modelica_boolean __omcQ_24tmpVar68;
            modelica_integer tmp33;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 21))));
            __omcQ_24tmpVar69 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp33 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp33--;
              }
              if (tmp33 == 0) {
                __omcQ_24tmpVar68 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT155, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar69 = (__omcQ_24tmpVar68 && __omcQ_24tmpVar69);
              } else if (tmp33 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp32 = __omcQ_24tmpVar69;
          }

          {
            modelica_boolean __omcQ_24tmpVar71;
            modelica_boolean __omcQ_24tmpVar70;
            modelica_integer tmp35;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 51))));
            __omcQ_24tmpVar71 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp35 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp35--;
              }
              if (tmp35 == 0) {
                __omcQ_24tmpVar70 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT156, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar71 = (__omcQ_24tmpVar70 && __omcQ_24tmpVar71);
              } else if (tmp35 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp34 = __omcQ_24tmpVar71;
          }

          {
            modelica_boolean __omcQ_24tmpVar73;
            modelica_boolean __omcQ_24tmpVar72;
            modelica_integer tmp37;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, omc_List_flatten(threadData, omc_SimCodeUtil_getSimCodeDAEModeDataEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 50))))));
            __omcQ_24tmpVar73 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp37 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp37--;
              }
              if (tmp37 == 0) {
                __omcQ_24tmpVar72 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT157, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar73 = (__omcQ_24tmpVar72 && __omcQ_24tmpVar73);
              } else if (tmp37 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp36 = __omcQ_24tmpVar73;
          }

          {
            modelica_boolean __omcQ_24tmpVar75;
            modelica_boolean __omcQ_24tmpVar74;
            modelica_integer tmp39;
            modelica_metatype _eq_loopVar = 0;
            modelica_metatype _eq;
            _eq_loopVar = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 23))));
            __omcQ_24tmpVar75 = 1 /* true */; /* defaultValue */
            while(1) {
              tmp39 = 1;
              if (!listEmpty(_eq_loopVar)) {
                _eq = MMC_CAR(_eq_loopVar);
                _eq_loopVar = MMC_CDR(_eq_loopVar);
                tmp39--;
              }
              if (tmp39 == 0) {
                __omcQ_24tmpVar74 = omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _OMC_LIT158, _withOperations, ((modelica_integer) 0), 0 /* false */, ((modelica_integer) 0));
                __omcQ_24tmpVar75 = (__omcQ_24tmpVar74 && __omcQ_24tmpVar75);
              } else if (tmp39 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp38 = __omcQ_24tmpVar75;
          }

          omc_File_write(threadData, _file, _OMC_LIT159);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 12))), boxvar_SerializeModelInfo_serializeFunction);

          omc_File_write(threadData, _file, _OMC_LIT160);
          tmp1_c0 = 1 /* true */;
          tmp1_c1 = _fileName;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT161, _OMC_LIT162);
          tmp1_c0 = 0 /* false */;
          tmp1_c1 = _OMC_LIT163;
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
  _success = tmp1_c0;
  _fileName = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_fileName) { *out_fileName = _fileName; }
  omc_File_File_destructor(threadData,_file);
  return _success;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeWork(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations, modelica_metatype *out_fileName)
{
  modelica_integer tmp1;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_withOperations);
  _success = omc_SerializeModelInfo_serializeWork(threadData, _code, tmp1, out_fileName);
  out_success = mmc_mk_icon(_success);
  /* skip box _fileName; String */
  return out_success;
}

DLLDirection
modelica_string omc_SerializeModelInfo_serialize(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations)
{
  modelica_string _fileName = NULL;
  modelica_string tmp1;
  modelica_boolean tmp2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fileName has no default value.
  /* Pattern-matching tuple assignment */
  tmp2 = omc_SerializeModelInfo_serializeWork(threadData, _code, _withOperations, &tmp1);
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
  _fileName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _fileName;
}
modelica_metatype boxptr_SerializeModelInfo_serialize(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  modelica_string _fileName = NULL;
  tmp1 = mmc_unbox_integer(_withOperations);
  _fileName = omc_SerializeModelInfo_serialize(threadData, _code, tmp1);
  /* skip box _fileName; String */
  return _fileName;
}

