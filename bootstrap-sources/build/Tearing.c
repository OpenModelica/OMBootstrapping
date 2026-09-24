#include "omc_simulation_settings.h"
#include "Tearing.h"
#define _OMC_LIT0_data "\nStart Matching:\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,58,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "tearingdumpV"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,12,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Dumps verbose tearing information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,34,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "\nMatching failed, choose different tearing set!\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,50,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "There is no possible matching for a user-defined tearing set."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,61,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "causEq: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,8,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "\nProcess "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,9,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ":\ne_exp: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,9,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "\nMatching succeeded!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,21,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,4) {&BackendDAE_IndexType_NORMAL__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,6) {&ErrorTypes_MessageType_SYMBOLIC__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Wrong usage of user defined tearing: %s Make sure you use user defined tearing as stated in the flag description."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,113,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(577)),_OMC_LIT14,_OMC_LIT15,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Index out of bounds."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,20,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,1) {_OMC_LIT18,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "\n****************************************\nBEGINNING of userDefinedTearing\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,75,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "\nUsers tearing vars: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,21,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "\nUsers residual equations: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,27,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "\nUsers residual equations expanded: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,36,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "\n\n###BEGIN print Strong Component#####################\n(Function:userDefinedTearing)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,85,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\n###END print Strong Component#######################\n(Function:userDefinedTearing)\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,86,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "tearingdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,11,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "Dumps tearing information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,26,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(43)),_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "The number of tearing variables and residual equations is not identical."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,72,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,1) {_OMC_LIT29,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "\nAdjacencyMatrixEnhanced:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,26,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "\nAdjacencyMatrixTransposedEnhanced:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,36,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "\n\nmapEqnIncRow:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,15,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\nmapIncRowEqn:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,15,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,2,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "\n\nUNSOLVABLES:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,15,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "\nDiscrete Vars:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,16,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "\nass1: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,7,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "ass2: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,6,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "\nAdjacency Matrix without tvars and residuals:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,47,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,1,5) {&BackendDAE_Jacobian_EMPTY__JACOBIAN__desc,}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,0,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "\nEND of userDefinedTearing\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,69,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "Matching "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,9,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data ":\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,2,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "ass1: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,6,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "order: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,7,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "\nTearing Variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,20,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "Residual Equations:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,20,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\n****************************************\nBEGINNING of totalTearing\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,69,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "\n\n###BEGIN print Strong Component#####################\n(Function:totalTearing)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,79,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "\n###END print Strong Component#######################\n(Function:totalTearing)\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,80,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "Power Set"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,9,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "totaltearingdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,16,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "Dumps total tearing information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,32,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(145)),_OMC_LIT54,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "totaltearingdumpV"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,17,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Dumps verbose total tearing information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,40,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(146)),_OMC_LIT57,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "\n\n###BEGIN TO LOOP#####################\n****************************************\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,83,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "\ntVars:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,8,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "\n\nTotal number of different tearing sets: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,42,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "\nEND of totalTearing\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,63,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "\n****************************************\n* TEARING RESULTS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,59,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data ":\n* (Global Indexes)\n*\n* No of equations in strong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,62,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "* No of tVars: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,15,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "*\n* tVars: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,11,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "*\n* resEq: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,11,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "*\n* innerEquations ({eqn,vars}):\n* "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,35,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,2,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "\n*\n*"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,4,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "****************************************"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,40,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data ":\n* (Local Indexes)\n*\n* No of equations in strong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,61,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "* "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,2,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,2,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "iterationVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,13,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "Shows a list of all iteration variables."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,40,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(100)),_OMC_LIT76,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT77}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,1,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,1,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,1,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "\n*\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,3,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "recursiveTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,16,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,1,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "do nothing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,10,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,2,0) {_OMC_LIT86,_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,1,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "linear tearing set of size 1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,28,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,2,0) {_OMC_LIT89,_OMC_LIT90}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,1,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "linear tearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,14,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,2,0) {_OMC_LIT92,_OMC_LIT93}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,2,1) {_OMC_LIT94,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,2,1) {_OMC_LIT91,_OMC_LIT95}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,2,1) {_OMC_LIT88,_OMC_LIT96}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT97}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,1,1) {_OMC_LIT98}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "Inline and repeat tearing."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,26,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT83,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT85,_OMC_LIT99,_OMC_LIT100}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,1,8) {&BackendDAE_IndexType_SPARSE__desc,}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "INeqn => "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,9,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,1,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "]\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,2,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "dumpRecursiveTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,20,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "Dump between steps of recursiveTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,38,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(127)),_OMC_LIT106,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT107}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT109,0.0);
#define _OMC_LIT109 MMC_REFREALLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "INres => "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,9,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "RTEARING"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,8,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "OUTeqn => "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,10,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "OUTres => "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,10,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "****************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,17,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "TearVar: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,9,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,1,4) {&BackendDAE_IndexReduction_NO__INDEX__REDUCTION__desc,}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,1,4) {&BackendDAE_EquationConstraints_EXACT__desc,}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,2,0) {_OMC_LIT117,_OMC_LIT118}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT120,1,1) {_OMC_LIT119}};
#define _OMC_LIT120 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,4,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "Most nonlinear equation: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,25,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data " - solvable?: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,14,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,4,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,5,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "assignment: Eq "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,15,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data " - Var "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,7,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "New assEq_coll: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,16,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "\nTarjanAssignment:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,19,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "\nnoncausal\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,11,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "\ncausal\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,8,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "Var "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,4,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data " has "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,5,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data " incident impossible assignments\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,33,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "Tearing.getAllVarsWithMostPoints: Finding variables with most points failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,76,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data " would causalize "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,17,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data " Eqns\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,6,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "Heuristic uses all modified Cellier-Heuristics\n\nHeuristic [MC1]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,105,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "\n\nHeuristic [MC2]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,59,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "\n\nHeuristic [MC11]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,60,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "\n\nHeuristic [MC21]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,60,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "\n\nHeuristic [MC12]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,60,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "\n\nHeuristic [MC22]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,60,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "\n\nHeuristic [MC13]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,60,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "\n\nHeuristic [MC23]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,60,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "\n\nHeuristic [MC231]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,61,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "\n\nHeuristic [MC3]\n****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,59,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "****************************************\n\nSynopsis:\n=========\n[MC1]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,69,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "[MC2]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,7,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "[MC11]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,8,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "[MC21]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,8,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "[MC12]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,8,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "[MC22]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,8,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "[MC13]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,8,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "[MC23]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,8,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
#define _OMC_LIT157_data "[MC231]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT157,9,_OMC_LIT157_data);
#define _OMC_LIT157 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data "[MC3]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,7,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "1st: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,5,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "\n(All potentials)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,19,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "2nd: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,5,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data "\n(Variables from (1st) occurring in most potential-sets ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,57,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data " sets))\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,9,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#define _OMC_LIT164_data "3rd: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT164,5,_OMC_LIT164_data);
#define _OMC_LIT164 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT164)
#define _OMC_LIT165_data "\n(Chosen tearing variable. One from from (2nd) with most occurrence in equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT165,82,_OMC_LIT165_data);
#define _OMC_LIT165 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT165)
#define _OMC_LIT166_data " times))\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT166,11,_OMC_LIT166_data);
#define _OMC_LIT166 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT166)
#define _OMC_LIT167_data "\n(Equations which could be causalized by knowing one more variable)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT167,69,_OMC_LIT167_data);
#define _OMC_LIT167 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT167)
#define _OMC_LIT168_data "\n(All unassigned variables)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT168,29,_OMC_LIT168_data);
#define _OMC_LIT168 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT168)
#define _OMC_LIT169_data "It is not possible to select a new tearing variable, because all remaining variables have the attribute '__OpenModelica_tearingSelect = TearingSelect.never'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT169,157,_OMC_LIT169_data);
#define _OMC_LIT169 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT169)
#define _OMC_LIT170_data "\n(All non-discrete variables from (2nd) without attribute 'never')\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT170,68,_OMC_LIT170_data);
#define _OMC_LIT170 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT170)
#define _OMC_LIT171_data "The tearing heuristic was not able to avoid discrete iteration variables because otherwise the system could not have been torn. This may lead to problems during simulation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT171,172,_OMC_LIT171_data);
#define _OMC_LIT171 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT171)
#define _OMC_LIT172_data "\n(All unassigned variables without attribute 'never' (only discrete variables left))\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT172,86,_OMC_LIT172_data);
#define _OMC_LIT172 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT172)
#define _OMC_LIT173_data "\n4th (Points): "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT173,15,_OMC_LIT173_data);
#define _OMC_LIT173 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT173)
#define _OMC_LIT174_data "\n(Sum of impossible assignments and causalizable equations)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT174,60,_OMC_LIT174_data);
#define _OMC_LIT174 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT174)
#define _OMC_LIT175_data "    (Points): "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT175,14,_OMC_LIT175_data);
#define _OMC_LIT175 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT175)
#define _OMC_LIT176_data "\n(Points after preferring variables with attribute 'prefer')\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT176,61,_OMC_LIT176_data);
#define _OMC_LIT176 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT176)
#define _OMC_LIT177_data "\n(Points after discrimination against variables with attribute 'avoid')\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT177,72,_OMC_LIT177_data);
#define _OMC_LIT177 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT177)
#define _OMC_LIT178_data "\n5th: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT178,6,_OMC_LIT178_data);
#define _OMC_LIT178 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT178)
#define _OMC_LIT179_data "\n(Variables from (3rd) with most points ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT179,41,_OMC_LIT179_data);
#define _OMC_LIT179 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT179)
#define _OMC_LIT180_data "])\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT180,4,_OMC_LIT180_data);
#define _OMC_LIT180 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT180)
#define _OMC_LIT181_data "6th: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT181,5,_OMC_LIT181_data);
#define _OMC_LIT181 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT181)
#define _OMC_LIT182_data "\n(Chosen tearing variable. One from (5th) with most occurrence in equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT182,77,_OMC_LIT182_data);
#define _OMC_LIT182 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT182)
#define _OMC_LIT183_data " times))\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT183,10,_OMC_LIT183_data);
#define _OMC_LIT183 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT183)
#define _OMC_LIT184_data "Start round 1:\n==============\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT184,31,_OMC_LIT184_data);
#define _OMC_LIT184 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT184)
#define _OMC_LIT185_data "\n(Non-discrete variables with most occurrence in equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT185,60,_OMC_LIT185_data);
#define _OMC_LIT185 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT185)
#define _OMC_LIT186_data "\n(Equations which could be causalized by knowing one more Var)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT186,64,_OMC_LIT186_data);
#define _OMC_LIT186 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT186)
#define _OMC_LIT187_data "\nPoints: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT187,9,_OMC_LIT187_data);
#define _OMC_LIT187 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT187)
#define _OMC_LIT188_data "\n2nd: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT188,6,_OMC_LIT188_data);
#define _OMC_LIT188 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT188)
#define _OMC_LIT189_data "\n(Chosen tearing variable. One from (1st) with most points ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT189,60,_OMC_LIT189_data);
#define _OMC_LIT189 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT189)
#define _OMC_LIT190_data " points))\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT190,11,_OMC_LIT190_data);
#define _OMC_LIT190 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT190)
#define _OMC_LIT191_data "\nStart round 2:\n==============\n\n1st: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT191,37,_OMC_LIT191_data);
#define _OMC_LIT191 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT191)
#define _OMC_LIT192_data "\n(Variables with occurrence in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT192,31,_OMC_LIT192_data);
#define _OMC_LIT192 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT192)
#define _OMC_LIT193_data " equations)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT193,13,_OMC_LIT193_data);
#define _OMC_LIT193 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT193)
#define _OMC_LIT194_data "Second set is empty."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT194,20,_OMC_LIT194_data);
#define _OMC_LIT194 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT194)
#define _OMC_LIT195_data "\n=====================\nChosen tearing variable: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT195,48,_OMC_LIT195_data);
#define _OMC_LIT195 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT195)
#define _OMC_LIT196_data "\n=====================\n(from round 1: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT196,38,_OMC_LIT196_data);
#define _OMC_LIT196 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT196)
#define _OMC_LIT197_data ")\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT197,3,_OMC_LIT197_data);
#define _OMC_LIT197 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT197)
#define _OMC_LIT198_data "\n(Chosen tearing variable. One from (1st) with most points ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT198,60,_OMC_LIT198_data);
#define _OMC_LIT198 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT198)
#define _OMC_LIT199_data "Without Discrete: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT199,18,_OMC_LIT199_data);
#define _OMC_LIT199 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT199)
#define _OMC_LIT200_data "\n(Variables in the equation(s) with most Variables)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT200,53,_OMC_LIT200_data);
#define _OMC_LIT200 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT200)
#define _OMC_LIT201_data "\n(Variables from (1st) with most occurrence in equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT201,58,_OMC_LIT201_data);
#define _OMC_LIT201 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT201)
#define _OMC_LIT202_data "\n3rd: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT202,6,_OMC_LIT202_data);
#define _OMC_LIT202 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT202)
#define _OMC_LIT203_data "\n(Chosen tearing variable. One from (2nd) with most points ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT203,60,_OMC_LIT203_data);
#define _OMC_LIT203 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT203)
#define _OMC_LIT204_data "\n(Variables from (1st) with most incident impossible assignments)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT204,67,_OMC_LIT204_data);
#define _OMC_LIT204 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT204)
#define _OMC_LIT205_data "\n(Chosen tearing variable. One from (2nd) causalizing most equations ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT205,70,_OMC_LIT205_data);
#define _OMC_LIT205 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT205)
#define _OMC_LIT206_data "\n(Variables from (2nd) with most incident impossible assignments)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT206,67,_OMC_LIT206_data);
#define _OMC_LIT206 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT206)
#define _OMC_LIT207_data "\n4th: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT207,6,_OMC_LIT207_data);
#define _OMC_LIT207 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT207)
#define _OMC_LIT208_data "\n(Chosen tearing variable.One from (3rd) causalizing most equations ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT208,69,_OMC_LIT208_data);
#define _OMC_LIT208 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT208)
#define _OMC_LIT209_data "\n(Variables from (1st) causalizing most equations)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT209,52,_OMC_LIT209_data);
#define _OMC_LIT209 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT209)
#define _OMC_LIT210_data "\n(Chosen tearing variable. One from (2nd) with most incident impossible assignments ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT210,85,_OMC_LIT210_data);
#define _OMC_LIT210 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT210)
#define _OMC_LIT211_data "\n(Variables from (2nd) causalizing most equations)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT211,52,_OMC_LIT211_data);
#define _OMC_LIT211 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT211)
#define _OMC_LIT212_data "\n(Chosen tearing variable. One from from (3rd) with most incident impossible assignments ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT212,90,_OMC_LIT212_data);
#define _OMC_LIT212 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT212)
#define _OMC_LIT213_data "\n(Chosen tearing variable. One from (1st) causalizing most equations ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT213,70,_OMC_LIT213_data);
#define _OMC_LIT213 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT213)
#define _OMC_LIT214_data "Unknown tearing heuristic: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT214,27,_OMC_LIT214_data);
#define _OMC_LIT214 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT214)
#define _OMC_LIT215_data "Tearing.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT215,10,_OMC_LIT215_data);
#define _OMC_LIT215 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT215)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT216_6,0.0);
#define _OMC_LIT216_6 MMC_REFREALLIT(_OMC_LIT_STRUCT216_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT216,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT215,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2987)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2987)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT216_6}};
#define _OMC_LIT216 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT216)
#define _OMC_LIT217_data "MC1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT217,3,_OMC_LIT217_data);
#define _OMC_LIT217 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT217)
#define _OMC_LIT218_data "MC2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT218,3,_OMC_LIT218_data);
#define _OMC_LIT218 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT218)
#define _OMC_LIT219_data "MC11"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT219,4,_OMC_LIT219_data);
#define _OMC_LIT219 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT219)
#define _OMC_LIT220_data "MC21"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT220,4,_OMC_LIT220_data);
#define _OMC_LIT220 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT220)
#define _OMC_LIT221_data "MC12"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT221,4,_OMC_LIT221_data);
#define _OMC_LIT221 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT221)
#define _OMC_LIT222_data "MC22"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT222,4,_OMC_LIT222_data);
#define _OMC_LIT222 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT222)
#define _OMC_LIT223_data "MC13"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT223,4,_OMC_LIT223_data);
#define _OMC_LIT223 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT223)
#define _OMC_LIT224_data "MC23"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT224,4,_OMC_LIT224_data);
#define _OMC_LIT224 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT224)
#define _OMC_LIT225_data "MC231"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT225,5,_OMC_LIT225_data);
#define _OMC_LIT225 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT225)
#define _OMC_LIT226_data "MC3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT226,3,_OMC_LIT226_data);
#define _OMC_LIT226 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT226)
#define _OMC_LIT227_data "MC4"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT227,3,_OMC_LIT227_data);
#define _OMC_LIT227 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT227)
#define _OMC_LIT228_data "\n****************************************\nBEGINNING of TearingHeuristic\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT228,73,_OMC_LIT228_data);
#define _OMC_LIT228 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT228)
#define _OMC_LIT229_data "Chosen Heuristic: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT229,18,_OMC_LIT229_data);
#define _OMC_LIT229 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT229)
#define _OMC_LIT230_data "\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT230,3,_OMC_LIT230_data);
#define _OMC_LIT230 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT230)
#define _OMC_LIT231_data "\nThe selection of a new tearing variable failed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT231,49,_OMC_LIT231_data);
#define _OMC_LIT231 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT231)
#define _OMC_LIT232_data "Function Tearing.selectTearingVar failed at least once. Use -d=tearingdump or -d=tearingdumpV for more information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT232,115,_OMC_LIT232_data);
#define _OMC_LIT232 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT232)
#define _OMC_LIT233_data "The Tearing heuristic has chosen variables with annotation attribute '__OpenModelica_tearingSelect = TearingSelect.avoid'. Use -d=tearingdump and -d=tearingdumpV for more information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT233,183,_OMC_LIT233_data);
#define _OMC_LIT233 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT233)
#define _OMC_LIT234_data "\nEND of TearingHeuristic\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT234,67,_OMC_LIT234_data);
#define _OMC_LIT234 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT234)
#define _OMC_LIT235_data "\n****************************************\nBEGINNING of selectTearingVar\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT235,73,_OMC_LIT235_data);
#define _OMC_LIT235 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT235)
#define _OMC_LIT236_data "\nEND of selectTearingVar\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT236,67,_OMC_LIT236_data);
#define _OMC_LIT236 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT236)
#define _OMC_LIT237_data "\n\n###BEGIN print Adjacency Matrix w/o tvar############\n(Function: CellierTearing2)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT237,83,_OMC_LIT237_data);
#define _OMC_LIT237 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT237)
#define _OMC_LIT238_data "\n###END print Adjacency Matrix w/o tvar##############\n(Function: CellierTearing2)\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT238,84,_OMC_LIT238_data);
#define _OMC_LIT238 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT238)
#define _OMC_LIT239_data "\n****************************************\nBEGINNING of TarjanMatching\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT239,71,_OMC_LIT239_data);
#define _OMC_LIT239 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT239)
#define _OMC_LIT240_data "\nEND of TarjanMatching\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT240,65,_OMC_LIT240_data);
#define _OMC_LIT240 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT240)
#define _OMC_LIT241_data "\n****************************************\n* TARJAN RESULTS:\n* ass1: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT241,68,_OMC_LIT241_data);
#define _OMC_LIT241 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT241)
#define _OMC_LIT242_data "* ass2: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT242,8,_OMC_LIT242_data);
#define _OMC_LIT242 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT242)
#define _OMC_LIT243_data "* order: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT243,9,_OMC_LIT243_data);
#define _OMC_LIT243 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT243)
#define _OMC_LIT244_data "\norder: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT244,8,_OMC_LIT244_data);
#define _OMC_LIT244 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT244)
#define _OMC_LIT245_data "========================================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT245,40,_OMC_LIT245_data);
#define _OMC_LIT245 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT245)
#define _OMC_LIT246_data "There are tearing variables with annotation attribute '__OpenModelica_tearingSelect = TearingSelect.never'. Use -d=tearingdump and -d=tearingdumpV for more information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT246,168,_OMC_LIT246_data);
#define _OMC_LIT246 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT246)
#define _OMC_LIT247_data "There are discrete tearing variables because otherwise the system could not have been torn (unsolvables). This may lead to problems during simulation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT247,150,_OMC_LIT247_data);
#define _OMC_LIT247 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT247)
#define _OMC_LIT248_data "\nForced selection of Tearing Variables:\n========================================\nUnsolvables as tVars: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT248,103,_OMC_LIT248_data);
#define _OMC_LIT248 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT248)
#define _OMC_LIT249_data "Variables with annotation attribute 'always' as tVars: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT249,55,_OMC_LIT249_data);
#define _OMC_LIT249 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT249)
#define _OMC_LIT250_data "\n\n###BEGIN print Adjacency Matrix w/o tvars###########\n(Function: CellierTearing2)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT250,83,_OMC_LIT250_data);
#define _OMC_LIT250 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT250)
#define _OMC_LIT251_data "\n###END print Adjacency Matrix w/o tvars#############\n(Function: CellierTearing2)\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT251,84,_OMC_LIT251_data);
#define _OMC_LIT251 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT251)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT252,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT252 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT252)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT253,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT253 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT253)
#define _OMC_LIT254_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT254,2,_OMC_LIT254_data);
#define _OMC_LIT254 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT254)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT255,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT252,_OMC_LIT253,_OMC_LIT254}};
#define _OMC_LIT255 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT255)
#define _OMC_LIT256_data "Minimal Tearing is ignoring '__OpenModelica_tearingSelect = TearingSelect.always' annotation for discrete variable: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT256,116,_OMC_LIT256_data);
#define _OMC_LIT256 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT256)
#define _OMC_LIT257_data "Minimal Tearing is ignoring '__OpenModelica_tearingSelect = TearingSelect.prefer' annotation for discrete variable: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT257,116,_OMC_LIT257_data);
#define _OMC_LIT257 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT257)
#define _OMC_LIT258_data "simulation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT258,10,_OMC_LIT258_data);
#define _OMC_LIT258 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT258)
#define _OMC_LIT259_data "preferTVarsWithStartValue"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT259,25,_OMC_LIT259_data);
#define _OMC_LIT259 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT259)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT260,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT260 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT260)
#define _OMC_LIT261_data "Prefer tearing variables with start value for initialization."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT261,61,_OMC_LIT261_data);
#define _OMC_LIT261 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT261)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT262,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(95)),_OMC_LIT259,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT260,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT261}};
#define _OMC_LIT262 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT262)
#define _OMC_LIT263_data "initialization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT263,14,_OMC_LIT263_data);
#define _OMC_LIT263 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT263)
#define _OMC_LIT264_data "tearingAlwaysDer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT264,16,_OMC_LIT264_data);
#define _OMC_LIT264 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT264)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT265,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT265 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT265)
#define _OMC_LIT266_data "Always choose state derivatives as iteration variables in strong components."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT266,76,_OMC_LIT266_data);
#define _OMC_LIT266 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT266)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT267,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(144)),_OMC_LIT264,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT265,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT266}};
#define _OMC_LIT267 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT267)
#define _OMC_LIT268_data "\nExternal influence on selection of iteration variables by variable annotations (__OpenModelica_tearingSelect)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT268,110,_OMC_LIT268_data);
#define _OMC_LIT268 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT268)
#define _OMC_LIT269_data " and preference of variables with start attribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT269,49,_OMC_LIT269_data);
#define _OMC_LIT269 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT269)
#define _OMC_LIT270_data "Always: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT270,8,_OMC_LIT270_data);
#define _OMC_LIT270 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT270)
#define _OMC_LIT271_data "Prefer: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT271,8,_OMC_LIT271_data);
#define _OMC_LIT271 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT271)
#define _OMC_LIT272_data "Avoid: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT272,7,_OMC_LIT272_data);
#define _OMC_LIT272 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT272)
#define _OMC_LIT273_data "Never: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT273,7,_OMC_LIT273_data);
#define _OMC_LIT273 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT273)
#define _OMC_LIT274_data "C"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT274,1,_OMC_LIT274_data);
#define _OMC_LIT274 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT274)
#define _OMC_LIT275_data "wasm-jit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT275,8,_OMC_LIT275_data);
#define _OMC_LIT275 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT275)
#define _OMC_LIT276_data "wasm"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT276,4,_OMC_LIT276_data);
#define _OMC_LIT276 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT276)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT277,2,1) {_OMC_LIT276,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT277 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT277)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT278,2,1) {_OMC_LIT275,_OMC_LIT277}};
#define _OMC_LIT278 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT278)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT279,2,1) {_OMC_LIT274,_OMC_LIT278}};
#define _OMC_LIT279 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT279)
#define _OMC_LIT280_data "dynamicTearingForInitialization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT280,31,_OMC_LIT280_data);
#define _OMC_LIT280 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT280)
#define _OMC_LIT281_data "Enable Dynamic Tearing also for the initialization system."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT281,58,_OMC_LIT281_data);
#define _OMC_LIT281 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT281)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT282,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(94)),_OMC_LIT280,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT265,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT281}};
#define _OMC_LIT282 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT282)
#define _OMC_LIT283_data "linear"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT283,6,_OMC_LIT283_data);
#define _OMC_LIT283 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT283)
#define _OMC_LIT284_data "nonlinear"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT284,9,_OMC_LIT284_data);
#define _OMC_LIT284 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT284)
#define _OMC_LIT285_data "\n****************************************\nBEGINNING of CellierTearing\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT285,71,_OMC_LIT285_data);
#define _OMC_LIT285 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT285)
#define _OMC_LIT286_data "\n\n###BEGIN print Strong Component#####################\n(Function:CellierTearing)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT286,81,_OMC_LIT286_data);
#define _OMC_LIT286 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT286)
#define _OMC_LIT287_data "\n###END print Strong Component#######################\n(Function:CellierTearing)\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT287,82,_OMC_LIT287_data);
#define _OMC_LIT287 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT287)
#define _OMC_LIT288_data "\n\nDetermine STRICT TEARING SET\n********************************************************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT288,113,_OMC_LIT288_data);
#define _OMC_LIT288 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT288)
#define _OMC_LIT289_data "Initialization start-value cycle: the start attribute of '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT289,58,_OMC_LIT289_data);
#define _OMC_LIT289 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT289)
#define _OMC_LIT290_data "' depends, directly or transitively, on the variable itself. The start attribute defines the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT290,93,_OMC_LIT290_data);
#define _OMC_LIT290 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT290)
#define _OMC_LIT291_data "initial value of '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT291,18,_OMC_LIT291_data);
#define _OMC_LIT291 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT291)
#define _OMC_LIT292_data "' and therefore "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT292,16,_OMC_LIT292_data);
#define _OMC_LIT292 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT292)
#define _OMC_LIT293_data "cannot be computed from it, so this start value cannot be used to initialize the variable (see "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT293,95,_OMC_LIT293_data);
#define _OMC_LIT293 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT293)
#define _OMC_LIT294_data "Modelica Specification section 4.9.6). This is possibly a modeling error; if unintended, give '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT294,95,_OMC_LIT294_data);
#define _OMC_LIT294 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT294)
#define _OMC_LIT295_data "' a start value that does not depend on "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT295,40,_OMC_LIT295_data);
#define _OMC_LIT295 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT295)
#define _OMC_LIT296_data "itself. Use the transformational debugger to inspect the dependency chain."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT296,74,_OMC_LIT296_data);
#define _OMC_LIT296 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT296)
#define _OMC_LIT297_data "\neqLinPoints:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT297,14,_OMC_LIT297_data);
#define _OMC_LIT297 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT297)
#define _OMC_LIT298_data "mapEqnIncRow:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT298,13,_OMC_LIT298_data);
#define _OMC_LIT298 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT298)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT299,1,6) {&ErrorTypes_Severity_NOTIFICATION__desc,}};
#define _OMC_LIT299 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT299)
#define _OMC_LIT300_data "Following iteration variables are selected by the user for strong component %s (DAE kind: %s):\n%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT300,97,_OMC_LIT300_data);
#define _OMC_LIT300 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT300)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT301,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(578)),_OMC_LIT14,_OMC_LIT299,_OMC_LIT300}};
#define _OMC_LIT301 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT301)
#define _OMC_LIT302_data "\n****************************************\nBEGINNING of CellierTearing2\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT302,72,_OMC_LIT302_data);
#define _OMC_LIT302 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT302)
#define _OMC_LIT303_data "\nEND of CellierTearing2\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT303,66,_OMC_LIT303_data);
#define _OMC_LIT303 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT303)
#define _OMC_LIT304_data " - STRICT SET"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT304,13,_OMC_LIT304_data);
#define _OMC_LIT304 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT304)
#define _OMC_LIT305_data "Note:\n=====\nNo dynamic Tearing for this strong component. Check if\n- flag 'dynamicTearing' is set proper\n- strong component does not contain statesets\n- system belongs to simulation\n- SimCode target is 'C'\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT305,207,_OMC_LIT305_data);
#define _OMC_LIT305 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT305)
#define _OMC_LIT306_data "\nNote:\n=====\nTearing set is discarded because it is not smaller than the original set. Use +forceTearing to prevent this.\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT306,123,_OMC_LIT306_data);
#define _OMC_LIT306 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT306)
#define _OMC_LIT307_data "forceTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT307,12,_OMC_LIT307_data);
#define _OMC_LIT307 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT307)
#define _OMC_LIT308_data "Use tearing set even if it is not smaller than the original component."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT308,70,_OMC_LIT308_data);
#define _OMC_LIT308 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT308)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT309,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(61)),_OMC_LIT307,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT265,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT308}};
#define _OMC_LIT309 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT309)
#define _OMC_LIT310_data "\n\nDetermine CASUAL TEARING SET\n********************************************************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT310,113,_OMC_LIT310_data);
#define _OMC_LIT310 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT310)
#define _OMC_LIT311_data "\n****************************************\n* TEARING RESULTS (CASUAL SET):\n*\n* No of equations in strong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT311,115,_OMC_LIT311_data);
#define _OMC_LIT311 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT311)
#define _OMC_LIT312_data "*\n* The casual tearing set is not smaller\n* than the strict tearing set and there-\n* fore it is discarded.\n*****************************************\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT312,149,_OMC_LIT312_data);
#define _OMC_LIT312 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT312)
#define _OMC_LIT313_data " - CASUAL SET"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT313,13,_OMC_LIT313_data);
#define _OMC_LIT313 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT313)
#define _OMC_LIT314_data "Nonlinear"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT314,9,_OMC_LIT314_data);
#define _OMC_LIT314 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT314)
#define _OMC_LIT315_data "Linear"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT315,6,_OMC_LIT315_data);
#define _OMC_LIT315 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT315)
#define _OMC_LIT316_data "\nNote:\n=====\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT316,13,_OMC_LIT316_data);
#define _OMC_LIT316 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT316)
#define _OMC_LIT317_data " dynamic tearing for this strong component in model:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT317,53,_OMC_LIT317_data);
#define _OMC_LIT317 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT317)
#define _OMC_LIT318_data "\nEND of CellierTearing\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT318,65,_OMC_LIT318_data);
#define _OMC_LIT318 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT318)
#define _OMC_LIT319_data "function getTearingSetfromAssign failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT319,39,_OMC_LIT319_data);
#define _OMC_LIT319 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT319)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT320_6,0.0);
#define _OMC_LIT320_6 MMC_REFREALLIT(_OMC_LIT_STRUCT320_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT320,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT215,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2202)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2202)),MMC_IMMEDIATE(MMC_TAGFIXNUM(84)),_OMC_LIT320_6}};
#define _OMC_LIT320 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT320)
#define _OMC_LIT321_data "function pathFound failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT321,25,_OMC_LIT321_data);
#define _OMC_LIT321 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT321)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT322_6,0.0);
#define _OMC_LIT322_6 MMC_REFREALLIT(_OMC_LIT_STRUCT322_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT322,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT215,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2176)),MMC_IMMEDIATE(MMC_TAGFIXNUM(6)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2176)),MMC_IMMEDIATE(MMC_TAGFIXNUM(71)),_OMC_LIT322_6}};
#define _OMC_LIT322 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT322)
#define _OMC_LIT323_data "function matchDiscreteVars failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT323,33,_OMC_LIT323_data);
#define _OMC_LIT323 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT323)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT324_6,0.0);
#define _OMC_LIT324_6 MMC_REFREALLIT(_OMC_LIT_STRUCT324_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT324,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT215,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2122)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2122)),MMC_IMMEDIATE(MMC_TAGFIXNUM(78)),_OMC_LIT324_6}};
#define _OMC_LIT324 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT324)
#define _OMC_LIT325_data "function minimalTearing failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT325,30,_OMC_LIT325_data);
#define _OMC_LIT325 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT325)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT326_6,0.0);
#define _OMC_LIT326_6 MMC_REFREALLIT(_OMC_LIT_STRUCT326_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT326,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT215,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2099)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2099)),MMC_IMMEDIATE(MMC_TAGFIXNUM(73)),_OMC_LIT326_6}};
#define _OMC_LIT326 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT326)
#define _OMC_LIT327_data "handle torn System\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT327,19,_OMC_LIT327_data);
#define _OMC_LIT327 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT327)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT328,5,3) {&BackendDAE_TearingSet_TEARINGSET__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT41}};
#define _OMC_LIT328 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT328)
#define _OMC_LIT329_data "Assignment: Eq "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT329,15,_OMC_LIT329_data);
#define _OMC_LIT329 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT329)
#define _OMC_LIT330_data "SOLVABILITY_PARAMETER is not handled yet. Requires revision."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT330,60,_OMC_LIT330_data);
#define _OMC_LIT330 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT330)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT331_6,0.0);
#define _OMC_LIT331_6 MMC_REFREALLIT(_OMC_LIT_STRUCT331_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT331,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT215,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1736)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1736)),MMC_IMMEDIATE(MMC_TAGFIXNUM(109)),_OMC_LIT331_6}};
#define _OMC_LIT331 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT331)
#define _OMC_LIT332_data "tearingStrictness"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT332,17,_OMC_LIT332_data);
#define _OMC_LIT332 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT332)
#define _OMC_LIT333_data "strict"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT333,6,_OMC_LIT333_data);
#define _OMC_LIT333 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT333)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT334,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT333}};
#define _OMC_LIT334 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT334)
#define _OMC_LIT335_data "casual"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT335,6,_OMC_LIT335_data);
#define _OMC_LIT335 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT335)
#define _OMC_LIT336_data "Loose tearing rules using ExpressionSolve to determine the solvability instead of considering the partial derivative. Allows to solve for everything that is analytically possible. This could lead to singularities during simulation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT336,231,_OMC_LIT336_data);
#define _OMC_LIT336 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT336)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT337,2,0) {_OMC_LIT335,_OMC_LIT336}};
#define _OMC_LIT337 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT337)
#define _OMC_LIT338_data "Robust tearing rules by consideration of the partial derivative. Allows to divide by parameters that are not equal to or close to zero."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT338,135,_OMC_LIT338_data);
#define _OMC_LIT338 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT338)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT339,2,0) {_OMC_LIT333,_OMC_LIT338}};
#define _OMC_LIT339 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT339)
#define _OMC_LIT340_data "veryStrict"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT340,10,_OMC_LIT340_data);
#define _OMC_LIT340 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT340)
#define _OMC_LIT341_data "Very strict tearing rules that do not allow to divide by any parameter. Use this if you aim at overriding parameters after compilation with values equal to or close to zero."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT341,173,_OMC_LIT341_data);
#define _OMC_LIT341 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT341)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT342,2,0) {_OMC_LIT340,_OMC_LIT341}};
#define _OMC_LIT342 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT342)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT343,2,1) {_OMC_LIT342,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT343 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT343)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT344,2,1) {_OMC_LIT339,_OMC_LIT343}};
#define _OMC_LIT344 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT344)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT345,2,1) {_OMC_LIT337,_OMC_LIT344}};
#define _OMC_LIT345 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT345)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT346,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT345}};
#define _OMC_LIT346 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT346)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT347,1,1) {_OMC_LIT346}};
#define _OMC_LIT347 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT347)
#define _OMC_LIT348_data "Sets the strictness of the tearing method regarding the solvability restrictions."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT348,81,_OMC_LIT348_data);
#define _OMC_LIT348 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT348)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT349,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT332,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT334,_OMC_LIT347,_OMC_LIT348}};
#define _OMC_LIT349 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT349)
#define _OMC_LIT350_data "Assign Eqns: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT350,13,_OMC_LIT350_data);
#define _OMC_LIT350 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT350)
#define _OMC_LIT351_data "Use next Queue!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT351,16,_OMC_LIT351_data);
#define _OMC_LIT351 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT351)
#define _OMC_LIT352_data "Queue:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT352,7,_OMC_LIT352_data);
#define _OMC_LIT352 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT352)
#define _OMC_LIT353_data "Process Eqn: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT353,13,_OMC_LIT353_data);
#define _OMC_LIT353 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT353)
#define _OMC_LIT354_data "Eqn Size: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT354,10,_OMC_LIT354_data);
#define _OMC_LIT354 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT354)
#define _OMC_LIT355_data "Rows (not assigned variables in eqn "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT355,36,_OMC_LIT355_data);
#define _OMC_LIT355 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT355)
#define _OMC_LIT356_data "):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT356,3,_OMC_LIT356_data);
#define _OMC_LIT356 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT356)
#define _OMC_LIT357_data "Next Queue:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT357,12,_OMC_LIT357_data);
#define _OMC_LIT357 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT357)
#define _OMC_LIT358_data "\nForced selection of Tearing Variable:\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT358,80,_OMC_LIT358_data);
#define _OMC_LIT358 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT358)
#define _OMC_LIT359_data "tVar: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT359,6,_OMC_LIT359_data);
#define _OMC_LIT359 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT359)
#define _OMC_LIT360_data " (unsolvable in omcTearingSelectTearingVar)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT360,45,_OMC_LIT360_data);
#define _OMC_LIT360 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT360)
#define _OMC_LIT361_data "omcTearingSelectTearingVar Candidates(unassigned vars):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT361,56,_OMC_LIT361_data);
#define _OMC_LIT361 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT361)
#define _OMC_LIT362_data "Candidates without variables with annotation attribute 'never':\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT362,64,_OMC_LIT362_data);
#define _OMC_LIT362 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT362)
#define _OMC_LIT363_data "\nPoints after 'calcVarWeights':\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT363,32,_OMC_LIT363_data);
#define _OMC_LIT363 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT363)
#define _OMC_LIT364_data "Points after 'addEqnWeights':\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT364,30,_OMC_LIT364_data);
#define _OMC_LIT364 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT364)
#define _OMC_LIT365_data "Points after 'discriminateDiscrete':\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT365,37,_OMC_LIT365_data);
#define _OMC_LIT365 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT365)
#define _OMC_LIT366_data "Points after preferring variables with attribute 'prefer':\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT366,59,_OMC_LIT366_data);
#define _OMC_LIT366 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT366)
#define _OMC_LIT367_data "Points after discrimination against variables with attribute 'avoid':\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT367,70,_OMC_LIT367_data);
#define _OMC_LIT367 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT367)
#define _OMC_LIT368_data " ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT368,2,_OMC_LIT368_data);
#define _OMC_LIT368 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT368)
#define _OMC_LIT369_data " points)\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT369,10,_OMC_LIT369_data);
#define _OMC_LIT369 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT369)
#define _OMC_LIT370_data "omcTearingSelectTearingVar failed because no unmatched var!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT370,60,_OMC_LIT370_data);
#define _OMC_LIT370 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT370)
#define _OMC_LIT371_data "\n****************************************\nBEGINNING of omcTearingSelectTearingVar\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT371,84,_OMC_LIT371_data);
#define _OMC_LIT371 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT371)
#define _OMC_LIT372_data "\nEND of omcTearingSelectTearingVar\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT372,77,_OMC_LIT372_data);
#define _OMC_LIT372 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT372)
#define _OMC_LIT373_data "Assignable equations containing new tvar:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT373,42,_OMC_LIT373_data);
#define _OMC_LIT373 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT373)
#define _OMC_LIT374_data " (unsolvable in omcTearing2)\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT374,31,_OMC_LIT374_data);
#define _OMC_LIT374 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT374)
#define _OMC_LIT375_data "\nForced selection of Tearing Variables:\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT375,81,_OMC_LIT375_data);
#define _OMC_LIT375 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT375)
#define _OMC_LIT376_data "Assignable equations containing new tvars:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT376,43,_OMC_LIT376_data);
#define _OMC_LIT376 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT376)
#define _OMC_LIT377_data "Tearing.omcTearing2 failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT377,27,_OMC_LIT377_data);
#define _OMC_LIT377 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT377)
#define _OMC_LIT378_data "\n****************************************\nBEGINNING of omcTearing\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT378,67,_OMC_LIT378_data);
#define _OMC_LIT378 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT378)
#define _OMC_LIT379_data "\n\n###BEGIN print Strong Component#####################\n(Function:omcTearing)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT379,77,_OMC_LIT379_data);
#define _OMC_LIT379 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT379)
#define _OMC_LIT380_data "\n###END print Strong Component#######################\n(Function:omcTearing)\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT380,78,_OMC_LIT380_data);
#define _OMC_LIT380 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT380)
#define _OMC_LIT381_data "\n\nAdjacencyMatrixEnhanced:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT381,27,_OMC_LIT381_data);
#define _OMC_LIT381 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT381)
#define _OMC_LIT382_data "\nmapEqnIncRow:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT382,14,_OMC_LIT382_data);
#define _OMC_LIT382 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT382)
#define _OMC_LIT383_data "\n\nUnsolvable Vars:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT383,19,_OMC_LIT383_data);
#define _OMC_LIT383 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT383)
#define _OMC_LIT384_data "\n****************************************\nBEGINNING of omcTearing2\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT384,68,_OMC_LIT384_data);
#define _OMC_LIT384 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT384)
#define _OMC_LIT385_data "\nEND of omcTearing2\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT385,62,_OMC_LIT385_data);
#define _OMC_LIT385 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT385)
#define _OMC_LIT386_data "\n****************************************\n* BFS RESULTS:\n* ass1: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT386,65,_OMC_LIT386_data);
#define _OMC_LIT386 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT386)
#define _OMC_LIT387_data "\nOtherEquationsOrder:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT387,22,_OMC_LIT387_data);
#define _OMC_LIT387 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT387)
#define _OMC_LIT388_data "\nStatus:\nOk system torn\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT388,25,_OMC_LIT388_data);
#define _OMC_LIT388 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT388)
#define _OMC_LIT389_data "\nStatus:\nSystem not torn\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT389,26,_OMC_LIT389_data);
#define _OMC_LIT389 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT389)
#define _OMC_LIT390_data "\n****************************************\n* TEARING RESULTS:\n*\n* No of equations in strong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT390,102,_OMC_LIT390_data);
#define _OMC_LIT390 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT390)
#define _OMC_LIT391_data "\n* Related to entire Equationsystem:\n* =====\n* tVars: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT391,54,_OMC_LIT391_data);
#define _OMC_LIT391 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT391)
#define _OMC_LIT392_data "\n* =====\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT392,9,_OMC_LIT392_data);
#define _OMC_LIT392 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT392)
#define _OMC_LIT393_data "*\n* =====\n* resEq: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT393,19,_OMC_LIT393_data);
#define _OMC_LIT393 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT393)
#define _OMC_LIT394_data "\n\nStrongComponents:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT394,20,_OMC_LIT394_data);
#define _OMC_LIT394 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT394)
#define _OMC_LIT395_data "\n\nEND of omcTearing\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT395,62,_OMC_LIT395_data);
#define _OMC_LIT395 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT395)
#define _OMC_LIT396_data "The selected tearing variables must have unique indexes."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT396,56,_OMC_LIT396_data);
#define _OMC_LIT396 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT396)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT397,2,1) {_OMC_LIT396,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT397 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT397)
#define _OMC_LIT398_data "The selected residual equations must have unique indexes."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT398,57,_OMC_LIT398_data);
#define _OMC_LIT398 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT398)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT399,2,1) {_OMC_LIT398,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT399 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT399)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT400,1.0);
#define _OMC_LIT400 MMC_REFREALLIT(_OMC_LIT_STRUCT400)
#define _OMC_LIT401_data "[tearingCost] component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT401,24,_OMC_LIT401_data);
#define _OMC_LIT401 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT401)
#define _OMC_LIT402_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT402,1,_OMC_LIT402_data);
#define _OMC_LIT402 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT402)
#define _OMC_LIT403_data "LS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT403,2,_OMC_LIT403_data);
#define _OMC_LIT403 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT403)
#define _OMC_LIT404_data "NLS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT404,3,_OMC_LIT404_data);
#define _OMC_LIT404 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT404)
#define _OMC_LIT405_data " ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT405,2,_OMC_LIT405_data);
#define _OMC_LIT405 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT405)
#define _OMC_LIT406_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT406,1,_OMC_LIT406_data);
#define _OMC_LIT406 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT406)
#define _OMC_LIT407_data " n="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT407,3,_OMC_LIT407_data);
#define _OMC_LIT407 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT407)
#define _OMC_LIT408_data " nnz="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT408,5,_OMC_LIT408_data);
#define _OMC_LIT408 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT408)
#define _OMC_LIT409_data " density="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT409,9,_OMC_LIT409_data);
#define _OMC_LIT409 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT409)
#define _OMC_LIT410_data " t="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT410,3,_OMC_LIT410_data);
#define _OMC_LIT410 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT410)
#define _OMC_LIT411_data " inner="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT411,7,_OMC_LIT411_data);
#define _OMC_LIT411 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT411)
#define _OMC_LIT412_data " nnzA="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT412,6,_OMC_LIT412_data);
#define _OMC_LIT412 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT412)
#define _OMC_LIT413_data " densityA="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT413,10,_OMC_LIT413_data);
#define _OMC_LIT413 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT413)
#define _OMC_LIT414_data " colors="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT414,8,_OMC_LIT414_data);
#define _OMC_LIT414 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT414)
#define _OMC_LIT415_data " chain="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT415,7,_OMC_LIT415_data);
#define _OMC_LIT415 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT415)
#define _OMC_LIT416_data " digitsLost="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT416,12,_OMC_LIT416_data);
#define _OMC_LIT416 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT416)
#define _OMC_LIT417_data " valuedCoeffs="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT417,14,_OMC_LIT417_data);
#define _OMC_LIT417 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT417)
#define _OMC_LIT418_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT418,1,_OMC_LIT418_data);
#define _OMC_LIT418 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT418)
#define _OMC_LIT419_data " cost dense="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT419,12,_OMC_LIT419_data);
#define _OMC_LIT419 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT419)
#define _OMC_LIT420_data " sparse="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT420,8,_OMC_LIT420_data);
#define _OMC_LIT420 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT420)
#define _OMC_LIT421_data " tornDense="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT421,11,_OMC_LIT421_data);
#define _OMC_LIT421 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT421)
#define _OMC_LIT422_data " tornSparse="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT422,12,_OMC_LIT422_data);
#define _OMC_LIT422 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT422)
#define _OMC_LIT423_data " format="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT423,8,_OMC_LIT423_data);
#define _OMC_LIT423 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT423)
#define _OMC_LIT424_data "sparse"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT424,6,_OMC_LIT424_data);
#define _OMC_LIT424 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT424)
#define _OMC_LIT425_data "dense"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT425,5,_OMC_LIT425_data);
#define _OMC_LIT425 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT425)
#define _OMC_LIT426_data " tornFormat="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT426,12,_OMC_LIT426_data);
#define _OMC_LIT426 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT426)
#define _OMC_LIT427_data "tearingCost"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT427,11,_OMC_LIT427_data);
#define _OMC_LIT427 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT427)
#define _OMC_LIT428_data "Dumps the estimated cost of every torn system against solving it untorn."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT428,72,_OMC_LIT428_data);
#define _OMC_LIT428 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT428)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT429,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(200)),_OMC_LIT427,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT428}};
#define _OMC_LIT429 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT429)
#define _OMC_LIT430_data "Tearing is skipped for linear strong component %s: solving it torn to %s iteration variables is estimated at %s flops against %s for the untorn system of size %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT430,162,_OMC_LIT430_data);
#define _OMC_LIT430 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT430)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT431,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(626)),_OMC_LIT14,_OMC_LIT299,_OMC_LIT430}};
#define _OMC_LIT431 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT431)
#define _OMC_LIT432_data "tearingCostMargin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT432,17,_OMC_LIT432_data);
#define _OMC_LIT432 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT432)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT433,2.0);
#define _OMC_LIT433 MMC_REFREALLIT(_OMC_LIT_STRUCT433)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT434,2,7) {&Flags_FlagData_REAL__FLAG__desc,_OMC_LIT433}};
#define _OMC_LIT434 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT434)
#define _OMC_LIT435_data "How much cheaper solving a linear system untorn has to be estimated before its\ntearing set is dropped. Raise it to keep tearing systems the estimate would give\nup on, lower it towards 0 to tear less (default 2)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT435,211,_OMC_LIT435_data);
#define _OMC_LIT435 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT435)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT436,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(168)),_OMC_LIT432,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT434,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT435}};
#define _OMC_LIT436 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT436)
#define _OMC_LIT437_data "Tearing is skipped for linear strong component %s: substituting through its %s inner equations amplifies an error by 1e%s, which double precision cannot carry."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT437,159,_OMC_LIT437_data);
#define _OMC_LIT437 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT437)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT438,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(627)),_OMC_LIT14,_OMC_LIT299,_OMC_LIT437}};
#define _OMC_LIT438 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT438)
#define _OMC_LIT439_data "maxSizeLinearTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT439,20,_OMC_LIT439_data);
#define _OMC_LIT439 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT439)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT440,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(200))}};
#define _OMC_LIT440 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT440)
#define _OMC_LIT441_data "Sets the maximum system size for tearing of linear systems (default 200)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT441,73,_OMC_LIT441_data);
#define _OMC_LIT441 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT441)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT442,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(81)),_OMC_LIT439,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT440,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT441}};
#define _OMC_LIT442 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT442)
#define _OMC_LIT443_data "maxSizeNonlinearTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT443,23,_OMC_LIT443_data);
#define _OMC_LIT443 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT443)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT444,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(10000))}};
#define _OMC_LIT444 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT444)
#define _OMC_LIT445_data "Sets the maximum system size for tearing of nonlinear systems (default 10000)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT445,78,_OMC_LIT445_data);
#define _OMC_LIT445 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT445)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT446,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(82)),_OMC_LIT443,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT444,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT445}};
#define _OMC_LIT446 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT446)
#define _OMC_LIT447_data "matrixFormat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT447,12,_OMC_LIT447_data);
#define _OMC_LIT447 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT447)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT448,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT425}};
#define _OMC_LIT448 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT448)
#define _OMC_LIT449_data "Sets the matrix format type in cpp runtime which should be used (dense | sparse ). Default: dense."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT449,98,_OMC_LIT449_data);
#define _OMC_LIT449 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT449)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT450,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(65)),_OMC_LIT447,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT448,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT449}};
#define _OMC_LIT450 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT450)
#define _OMC_LIT451_data "Tearing is skipped for strong component %s because system size of %s exceeds maximum system size for tearing of %s systems (%s).\nTo adjust the maximum system size for tearing use --%s=<size>.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT451,192,_OMC_LIT451_data);
#define _OMC_LIT451 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT451)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT452,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(574)),_OMC_LIT14,_OMC_LIT299,_OMC_LIT451}};
#define _OMC_LIT452 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT452)
#define _OMC_LIT453_data "\nTearing deactivated by user.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT453,30,_OMC_LIT453_data);
#define _OMC_LIT453 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT453)
#define _OMC_LIT454_data "Tearing is skipped for strong component %s because of activated compiler flag 'noTearingForComponent=%1'.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT454,106,_OMC_LIT454_data);
#define _OMC_LIT454 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT454)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT455,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(575)),_OMC_LIT14,_OMC_LIT299,_OMC_LIT454}};
#define _OMC_LIT455 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT455)
#define _OMC_LIT456_data "noTearingForComponent"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT456,21,_OMC_LIT456_data);
#define _OMC_LIT456 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT456)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT457,2,6) {&Flags_FlagData_INT__LIST__FLAG__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT457 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT457)
#define _OMC_LIT458_data "Deactivates tearing for the specified components.\nUse '-d=tearingdump' to find out the relevant indexes."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT458,104,_OMC_LIT458_data);
#define _OMC_LIT458 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT458)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT459,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),_OMC_LIT456,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT457,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT458}};
#define _OMC_LIT459 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT459)
#define _OMC_LIT460_data "Handle strong component with index: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT460,36,_OMC_LIT460_data);
#define _OMC_LIT460 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT460)
#define _OMC_LIT461_data "To disable tearing of this component use '--noTearingForComponent="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT461,66,_OMC_LIT461_data);
#define _OMC_LIT461 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT461)
#define _OMC_LIT462_data "'.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT462,3,_OMC_LIT462_data);
#define _OMC_LIT462 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT462)
#define _OMC_LIT463_data "\nTearing of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT463,12,_OMC_LIT463_data);
#define _OMC_LIT463 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT463)
#define _OMC_LIT464_data "LINEAR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT464,6,_OMC_LIT464_data);
#define _OMC_LIT464 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT464)
#define _OMC_LIT465_data "NONLINEAR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT465,9,_OMC_LIT465_data);
#define _OMC_LIT465 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT465)
#define _OMC_LIT466_data " component\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT466,11,_OMC_LIT466_data);
#define _OMC_LIT466 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT466)
#define _OMC_LIT467_data "Use Flag '-d=tearingdumpV' and '-d=iterationVars' for more details\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT467,68,_OMC_LIT467_data);
#define _OMC_LIT467 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT467)
#define _OMC_LIT468_data "Use Flag '-d=tearingdumpV' for more details\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT468,45,_OMC_LIT468_data);
#define _OMC_LIT468 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT468)
#define _OMC_LIT469_data "Use Flag '-d=iterationVars' for more details\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT469,46,_OMC_LIT469_data);
#define _OMC_LIT469 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT469)
#define _OMC_LIT470_data "Jacobian:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT470,10,_OMC_LIT470_data);
#define _OMC_LIT470 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT470)
#define _OMC_LIT471_data "\n****************************************\nBEGINNING of traverseComponents\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT471,75,_OMC_LIT471_data);
#define _OMC_LIT471 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT471)
#define _OMC_LIT472_data "\nEND of traverseComponents\n****************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT472,69,_OMC_LIT472_data);
#define _OMC_LIT472 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT472)
#define _OMC_LIT473_data "setTearingVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT473,14,_OMC_LIT473_data);
#define _OMC_LIT473 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT473)
#define _OMC_LIT474_data "Sets the tearing variables by its strong component indexes. Use '-d=tearingdump' to find out the relevant indexes.\nUse following format: '--setTearingVars=(sci,n,t1,...,tn)*', with sci = strong component index, n = number of tearing variables, t1,...tn = tearing variables.\nE.g.: '--setTearingVars=4,2,3,5' would select variables 3 and 5 in strong component 4."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT474,360,_OMC_LIT474_data);
#define _OMC_LIT474 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT474)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT475,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(87)),_OMC_LIT473,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT457,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT474}};
#define _OMC_LIT475 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT475)
#define _OMC_LIT476_data "setResidualEqns"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT476,15,_OMC_LIT476_data);
#define _OMC_LIT476 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT476)
#define _OMC_LIT477_data "Sets the residual equations by its strong component indexes. Use '-d=tearingdump' to find out the relevant indexes for the collective equations.\nUse following format: '--setResidualEqns=(sci,n,r1,...,rn)*', with sci = strong component index, n = number of residual equations, r1,...rn = residual equations.\nE.g.: '--setResidualEqns=4,2,3,5' would select equations 3 and 5 in strong component 4.\nOnly works in combination with 'setTearingVars'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT477,443,_OMC_LIT477_data);
#define _OMC_LIT477 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT477)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT478,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT476,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT457,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT477}};
#define _OMC_LIT478 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT478)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT479,1,7) {&Tearing_TearingMethod_USER__DEFINED__TEARING__desc,}};
#define _OMC_LIT479 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT479)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT480,1,6) {&Tearing_TearingMethod_TOTAL__TEARING__desc,}};
#define _OMC_LIT480 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT480)
#define _OMC_LIT481_data "totalTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT481,12,_OMC_LIT481_data);
#define _OMC_LIT481 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT481)
#define _OMC_LIT482_data "Activates total tearing (determination of all possible tearing sets) for the specified components.\nUse '-d=tearingdump' to find out the relevant indexes."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT482,153,_OMC_LIT482_data);
#define _OMC_LIT482 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT482)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT483,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT481,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84,_OMC_LIT457,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT482}};
#define _OMC_LIT483 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT483)
#define _OMC_LIT484_data "\nTearing type: heuristic\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT484,25,_OMC_LIT484_data);
#define _OMC_LIT484 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT484)
#define _OMC_LIT485_data "Tearing strictness: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT485,20,_OMC_LIT485_data);
#define _OMC_LIT485 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT485)
#define _OMC_LIT486_data "\nTearing type: total\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT486,21,_OMC_LIT486_data);
#define _OMC_LIT486 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT486)
#define _OMC_LIT487_data "\nTearing type: minimal\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT487,23,_OMC_LIT487_data);
#define _OMC_LIT487 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT487)
#define _OMC_LIT488_data "\nTearing type: user defined\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT488,28,_OMC_LIT488_data);
#define _OMC_LIT488 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT488)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT489,1,3) {&Tearing_TearingMethod_MINIMAL__TEARING__desc,}};
#define _OMC_LIT489 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT489)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT490,1,4) {&Tearing_TearingMethod_OMC__TEARING__desc,}};
#define _OMC_LIT490 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT490)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT491,1,5) {&Tearing_TearingMethod_CELLIER__TEARING__desc,}};
#define _OMC_LIT491 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT491)
#define _OMC_LIT492_data "Tearing.getTearingMethod got invalid name \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT492,43,_OMC_LIT492_data);
#define _OMC_LIT492 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT492)
#define _OMC_LIT493_data "\"."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT493,2,_OMC_LIT493_data);
#define _OMC_LIT493 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT493)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT494_6,0.0);
#define _OMC_LIT494_6 MMC_REFREALLIT(_OMC_LIT_STRUCT494_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT494,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT215,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(158)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(158)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),_OMC_LIT494_6}};
#define _OMC_LIT494 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT494)
#define _OMC_LIT495_data "minimalTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT495,14,_OMC_LIT495_data);
#define _OMC_LIT495 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT495)
#define _OMC_LIT496_data "omcTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT496,10,_OMC_LIT496_data);
#define _OMC_LIT496 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT496)
#define _OMC_LIT497_data "cellier"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT497,7,_OMC_LIT497_data);
#define _OMC_LIT497 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT497)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT498,1,8) {&ErrorTypes_MessageType_SCRIPTING__desc,}};
#define _OMC_LIT498 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT498)
#define _OMC_LIT499_data "Invalid type of flag %s, expected %s but got %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT499,48,_OMC_LIT499_data);
#define _OMC_LIT499 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT499)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT500,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(207)),_OMC_LIT498,_OMC_LIT15,_OMC_LIT499}};
#define _OMC_LIT500 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT500)
#define _OMC_LIT501_data "non-negative integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT501,20,_OMC_LIT501_data);
#define _OMC_LIT501 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT501)
#define _OMC_LIT502_data "\n\n\n\n================================================================================\nCalling Tearing for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT502,105,_OMC_LIT502_data);
#define _OMC_LIT502 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT502)
#define _OMC_LIT503_data "!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT503,2,_OMC_LIT503_data);
#define _OMC_LIT503 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT503)
#define _OMC_LIT504_data "Tearing.tearingSystem failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT504,28,_OMC_LIT504_data);
#define _OMC_LIT504 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT504)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT505_6,0.0);
#define _OMC_LIT505_6 MMC_REFREALLIT(_OMC_LIT_STRUCT505_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT505,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT215,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(137)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(137)),MMC_IMMEDIATE(MMC_TAGFIXNUM(72)),_OMC_LIT505_6}};
#define _OMC_LIT505 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT505)
#include "util/modelica.h"

#include "Tearing_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_simpleMatching(threadData_t *threadData, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _orderIn, modelica_metatype _causEqIn, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _me, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_simpleMatching,2,0) {(void*) boxptr_Tearing_simpleMatching,0}};
#define boxvar_Tearing_simpleMatching MMC_REFSTRUCTLIT(boxvar_lit_Tearing_simpleMatching)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_countEmptyRows(threadData_t *threadData, modelica_metatype _m);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_countEmptyRows(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_countEmptyRows,2,0) {(void*) boxptr_Tearing_countEmptyRows,0}};
#define boxvar_Tearing_countEmptyRows MMC_REFSTRUCTLIT(boxvar_lit_Tearing_countEmptyRows)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_userDefinedTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_metatype _userTVars, modelica_metatype _userResiduals, modelica_boolean *out_outRunMatching);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_userDefinedTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype _userTVars, modelica_metatype _userResiduals, modelica_metatype *out_outRunMatching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_userDefinedTearing,2,0) {(void*) boxptr_Tearing_userDefinedTearing,0}};
#define boxvar_Tearing_userDefinedTearing MMC_REFSTRUCTLIT(boxvar_lit_Tearing_userDefinedTearing)
PROTECTED_FUNCTION_STATIC void omc_Tearing_dumpMatchingList(threadData_t *threadData, modelica_metatype _matchingList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_dumpMatchingList,2,0) {(void*) boxptr_Tearing_dumpMatchingList,0}};
#define boxvar_Tearing_dumpMatchingList MMC_REFSTRUCTLIT(boxvar_lit_Tearing_dumpMatchingList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_createTearingSets(threadData_t *threadData, modelica_metatype _tVarsIn, modelica_metatype _matchingList, modelica_metatype _vindx, modelica_metatype _eindex, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _tearingSetsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_createTearingSets,2,0) {(void*) boxptr_Tearing_createTearingSets,0}};
#define boxvar_Tearing_createTearingSets MMC_REFSTRUCTLIT(boxvar_lit_Tearing_createTearingSets)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_totalMatching(threadData_t *threadData, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _orderIn, modelica_metatype _causEqIn, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _me, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _visited, modelica_metatype _matchingListIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_totalMatching,2,0) {(void*) boxptr_Tearing_totalMatching,0}};
#define boxvar_Tearing_totalMatching MMC_REFSTRUCTLIT(boxvar_lit_Tearing_totalMatching)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getPowerSetElement(threadData_t *threadData, modelica_integer _i);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getPowerSetElement(threadData_t *threadData, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getPowerSetElement,2,0) {(void*) boxptr_Tearing_getPowerSetElement,0}};
#define boxvar_Tearing_getPowerSetElement MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getPowerSetElement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_totalTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_boolean *out_outRunMatching);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_totalTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype *out_outRunMatching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_totalTearing,2,0) {(void*) boxptr_Tearing_totalTearing,0}};
#define boxvar_Tearing_totalTearing MMC_REFSTRUCTLIT(boxvar_lit_Tearing_totalTearing)
PROTECTED_FUNCTION_STATIC void omc_Tearing_dumpTearingSetsGlobalIndexes(threadData_t *threadData, modelica_metatype _tearingSets, modelica_integer _size);
PROTECTED_FUNCTION_STATIC void boxptr_Tearing_dumpTearingSetsGlobalIndexes(threadData_t *threadData, modelica_metatype _tearingSets, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_dumpTearingSetsGlobalIndexes,2,0) {(void*) boxptr_Tearing_dumpTearingSetsGlobalIndexes,0}};
#define boxvar_Tearing_dumpTearingSetsGlobalIndexes MMC_REFSTRUCTLIT(boxvar_lit_Tearing_dumpTearingSetsGlobalIndexes)
PROTECTED_FUNCTION_STATIC void omc_Tearing_dumpTearingSetGlobalIndexes(threadData_t *threadData, modelica_metatype _tearingSet, modelica_integer _size, modelica_string _setString);
PROTECTED_FUNCTION_STATIC void boxptr_Tearing_dumpTearingSetGlobalIndexes(threadData_t *threadData, modelica_metatype _tearingSet, modelica_metatype _size, modelica_metatype _setString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_dumpTearingSetGlobalIndexes,2,0) {(void*) boxptr_Tearing_dumpTearingSetGlobalIndexes,0}};
#define boxvar_Tearing_dumpTearingSetGlobalIndexes MMC_REFSTRUCTLIT(boxvar_lit_Tearing_dumpTearingSetGlobalIndexes)
PROTECTED_FUNCTION_STATIC void omc_Tearing_dumpTearingSetLocalIndexes(threadData_t *threadData, modelica_metatype _tVars, modelica_metatype _residuals, modelica_metatype _order, modelica_metatype _ass2, modelica_integer _size, modelica_metatype _mapEqnIncRow, modelica_metatype _vars, modelica_metatype _eqns, modelica_string _setString);
PROTECTED_FUNCTION_STATIC void boxptr_Tearing_dumpTearingSetLocalIndexes(threadData_t *threadData, modelica_metatype _tVars, modelica_metatype _residuals, modelica_metatype _order, modelica_metatype _ass2, modelica_metatype _size, modelica_metatype _mapEqnIncRow, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _setString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_dumpTearingSetLocalIndexes,2,0) {(void*) boxptr_Tearing_dumpTearingSetLocalIndexes,0}};
#define boxvar_Tearing_dumpTearingSetLocalIndexes MMC_REFSTRUCTLIT(boxvar_lit_Tearing_dumpTearingSetLocalIndexes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getUnassigned(threadData_t *threadData, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getUnassigned,2,0) {(void*) boxptr_Tearing_getUnassigned,0}};
#define boxvar_Tearing_getUnassigned MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getUnassigned)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_recursiveTearingReplace(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inSourceExp, modelica_metatype _inTargetExp, modelica_boolean _isDer);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_recursiveTearingReplace(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inSourceExp, modelica_metatype _inTargetExp, modelica_metatype _isDer);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_recursiveTearingReplace,2,0) {(void*) boxptr_Tearing_recursiveTearingReplace,0}};
#define boxvar_Tearing_recursiveTearingReplace MMC_REFSTRUCTLIT(boxvar_lit_Tearing_recursiveTearingReplace)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_recursiveTearingHelper(threadData_t *threadData, modelica_metatype _rhs1, modelica_metatype _tear_exp, modelica_integer _m);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_recursiveTearingHelper(threadData_t *threadData, modelica_metatype _rhs1, modelica_metatype _tear_exp, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_recursiveTearingHelper,2,0) {(void*) boxptr_Tearing_recursiveTearingHelper,0}};
#define boxvar_Tearing_recursiveTearingHelper MMC_REFSTRUCTLIT(boxvar_lit_Tearing_recursiveTearingHelper)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_isTornsystem(threadData_t *threadData, modelica_metatype _comp, modelica_boolean _getLin, modelica_boolean _getNoLin);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_isTornsystem(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _getLin, modelica_metatype _getNoLin);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_isTornsystem,2,0) {(void*) boxptr_Tearing_isTornsystem,0}};
#define boxvar_Tearing_isTornsystem MMC_REFSTRUCTLIT(boxvar_lit_Tearing_isTornsystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_recursiveTearingCollect(threadData_t *threadData, modelica_metatype _tear_exp, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_recursiveTearingCollect,2,0) {(void*) boxptr_Tearing_recursiveTearingCollect,0}};
#define boxvar_Tearing_recursiveTearingCollect MMC_REFSTRUCTLIT(boxvar_lit_Tearing_recursiveTearingCollect)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_recursiveTearingMain(threadData_t *threadData, modelica_metatype _inDAE, modelica_boolean *out_update);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_recursiveTearingMain(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype *out_update);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_recursiveTearingMain,2,0) {(void*) boxptr_Tearing_recursiveTearingMain,0}};
#define boxvar_Tearing_recursiveTearingMain MMC_REFSTRUCTLIT(boxvar_lit_Tearing_recursiveTearingMain)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findNEntries(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_integer _num);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_findNEntries(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype _num);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_findNEntries,2,0) {(void*) boxptr_Tearing_findNEntries,0}};
#define boxvar_Tearing_findNEntries MMC_REFSTRUCTLIT(boxvar_lit_Tearing_findNEntries)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getVarOccurringInMostEquations(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype *out_outLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getVarOccurringInMostEquations(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype *out_outLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getVarOccurringInMostEquations,2,0) {(void*) boxptr_Tearing_getVarOccurringInMostEquations,0}};
#define boxvar_Tearing_getVarOccurringInMostEquations MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getVarOccurringInMostEquations)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getVarsOccurringInMostEquations(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype *out_outLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getVarsOccurringInMostEquations(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype *out_outLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getVarsOccurringInMostEquations,2,0) {(void*) boxptr_Tearing_getVarsOccurringInMostEquations,0}};
#define boxvar_Tearing_getVarsOccurringInMostEquations MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getVarsOccurringInMostEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getVarsOfEqnsWithMostVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _mIn, modelica_metatype _mtIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getVarsOfEqnsWithMostVars,2,0) {(void*) boxptr_Tearing_getVarsOfEqnsWithMostVars,0}};
#define boxvar_Tearing_getVarsOfEqnsWithMostVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getVarsOfEqnsWithMostVars)
PROTECTED_FUNCTION_STATIC void omc_Tearing_deleteRowsFromAdjacencyMatrix(threadData_t *threadData, modelica_metatype _mUpdate, modelica_metatype _rows);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_deleteRowsFromAdjacencyMatrix,2,0) {(void*) boxptr_Tearing_deleteRowsFromAdjacencyMatrix,0}};
#define boxvar_Tearing_deleteRowsFromAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_Tearing_deleteRowsFromAdjacencyMatrix)
PROTECTED_FUNCTION_STATIC void omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData_t *threadData, modelica_metatype _mUpdate, modelica_metatype _mHelp, modelica_metatype _entries);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_deleteEntriesFromAdjacencyMatrix,2,0) {(void*) boxptr_Tearing_deleteEntriesFromAdjacencyMatrix,0}};
#define boxvar_Tearing_deleteEntriesFromAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_Tearing_deleteEntriesFromAdjacencyMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectFromList(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _selList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_selectFromList,2,0) {(void*) boxptr_Tearing_selectFromList,0}};
#define boxvar_Tearing_selectFromList MMC_REFSTRUCTLIT(boxvar_lit_Tearing_selectFromList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectFromList__rev(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _selList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_selectFromList__rev,2,0) {(void*) boxptr_Tearing_selectFromList__rev,0}};
#define boxvar_Tearing_selectFromList__rev MMC_REFSTRUCTLIT(boxvar_lit_Tearing_selectFromList__rev)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getMostNonlinearEquation(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inList, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getMostNonlinearEquation(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inList, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getMostNonlinearEquation,2,0) {(void*) boxptr_Tearing_getMostNonlinearEquation,0}};
#define boxvar_Tearing_getMostNonlinearEquation MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getMostNonlinearEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_maxListInt(threadData_t *threadData, modelica_metatype _inList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_maxListInt,2,0) {(void*) boxptr_Tearing_maxListInt,0}};
#define boxvar_Tearing_maxListInt MMC_REFSTRUCTLIT(boxvar_lit_Tearing_maxListInt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_countMultiples3(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _set, modelica_metatype _valIn, modelica_metatype _numIn, modelica_metatype *out_numOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_countMultiples3,2,0) {(void*) boxptr_Tearing_countMultiples3,0}};
#define boxvar_Tearing_countMultiples3 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_countMultiples3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_countMultiples2(threadData_t *threadData, modelica_metatype _rowIn, modelica_metatype _valIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_countMultiples2,2,0) {(void*) boxptr_Tearing_countMultiples2,0}};
#define boxvar_Tearing_countMultiples2 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_countMultiples2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_countMultiples(threadData_t *threadData, modelica_metatype _inArr, modelica_metatype *out_numbers, modelica_metatype *out_values);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_countMultiples,2,0) {(void*) boxptr_Tearing_countMultiples,0}};
#define boxvar_Tearing_countMultiples MMC_REFSTRUCTLIT(boxvar_lit_Tearing_countMultiples)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_markTVarsOrResiduals(threadData_t *threadData, modelica_metatype _markList, modelica_metatype _assIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_markTVarsOrResiduals,2,0) {(void*) boxptr_Tearing_markTVarsOrResiduals,0}};
#define boxvar_Tearing_markTVarsOrResiduals MMC_REFSTRUCTLIT(boxvar_lit_Tearing_markTVarsOrResiduals)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findConstraintForInnerEquation(threadData_t *threadData, modelica_metatype _meRow, modelica_integer _searchIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_findConstraintForInnerEquation(threadData_t *threadData, modelica_metatype _meRow, modelica_metatype _searchIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_findConstraintForInnerEquation,2,0) {(void*) boxptr_Tearing_findConstraintForInnerEquation,0}};
#define boxvar_Tearing_findConstraintForInnerEquation MMC_REFSTRUCTLIT(boxvar_lit_Tearing_findConstraintForInnerEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_assignInnerEquations(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _eindex, modelica_metatype _vindex, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _meOpt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_assignInnerEquations,2,0) {(void*) boxptr_Tearing_assignInnerEquations,0}};
#define boxvar_Tearing_assignInnerEquations MMC_REFSTRUCTLIT(boxvar_lit_Tearing_assignInnerEquations)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_eqnSolvableCheck(threadData_t *threadData, modelica_integer _eqn_coll, modelica_metatype _mapEqnIncRow, modelica_metatype _ass1, modelica_metatype _m, modelica_metatype _me, modelica_metatype *out_eqns, modelica_metatype *out_vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_eqnSolvableCheck(threadData_t *threadData, modelica_metatype _eqn_coll, modelica_metatype _mapEqnIncRow, modelica_metatype _ass1, modelica_metatype _m, modelica_metatype _me, modelica_metatype *out_eqns, modelica_metatype *out_vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_eqnSolvableCheck,2,0) {(void*) boxptr_Tearing_eqnSolvableCheck,0}};
#define boxvar_Tearing_eqnSolvableCheck MMC_REFSTRUCTLIT(boxvar_lit_Tearing_eqnSolvableCheck)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getNextSolvableEqn(threadData_t *threadData, modelica_metatype _assEq_coll, modelica_metatype _m, modelica_metatype _me, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype *out_eqnsOut, modelica_metatype *out_varsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getNextSolvableEqn(threadData_t *threadData, modelica_metatype _assEq_coll, modelica_metatype _m, modelica_metatype _me, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype *out_eqnsOut, modelica_metatype *out_varsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getNextSolvableEqn,2,0) {(void*) boxptr_Tearing_getNextSolvableEqn,0}};
#define boxvar_Tearing_getNextSolvableEqn MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getNextSolvableEqn)
PROTECTED_FUNCTION_STATIC void omc_Tearing_makeAssignment(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _vars, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _mIn, modelica_metatype _mtIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_makeAssignment,2,0) {(void*) boxptr_Tearing_makeAssignment,0}};
#define boxvar_Tearing_makeAssignment MMC_REFSTRUCTLIT(boxvar_lit_Tearing_makeAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_traverseCollectiveEqnsforAssignable(threadData_t *threadData, modelica_metatype _inAss, modelica_metatype _m, modelica_metatype _mapEqnIncRow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_traverseCollectiveEqnsforAssignable,2,0) {(void*) boxptr_Tearing_traverseCollectiveEqnsforAssignable,0}};
#define boxvar_Tearing_traverseCollectiveEqnsforAssignable MMC_REFSTRUCTLIT(boxvar_lit_Tearing_traverseCollectiveEqnsforAssignable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_traverseSingleEqnsforAssignable(threadData_t *threadData, modelica_metatype _inAss, modelica_metatype _m, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_traverseSingleEqnsforAssignable,2,0) {(void*) boxptr_Tearing_traverseSingleEqnsforAssignable,0}};
#define boxvar_Tearing_traverseSingleEqnsforAssignable MMC_REFSTRUCTLIT(boxvar_lit_Tearing_traverseSingleEqnsforAssignable)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_tornMatchingIsStructurallySingular(threadData_t *threadData, modelica_metatype _ass2, modelica_metatype _meTFull, modelica_integer _size, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tornMatchingIsStructurallySingular(threadData_t *threadData, modelica_metatype _ass2, modelica_metatype _meTFull, modelica_metatype _size, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tornMatchingIsStructurallySingular,2,0) {(void*) boxptr_Tearing_tornMatchingIsStructurallySingular,0}};
#define boxvar_Tearing_tornMatchingIsStructurallySingular MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tornMatchingIsStructurallySingular)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getNextDegree1Var(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _meTIn, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype *out_eqnsOut, modelica_metatype *out_varsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getNextDegree1Var(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _meTIn, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype *out_eqnsOut, modelica_metatype *out_varsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getNextDegree1Var,2,0) {(void*) boxptr_Tearing_getNextDegree1Var,0}};
#define boxvar_Tearing_getNextDegree1Var MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getNextDegree1Var)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_TarjanAssignment(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_boolean _forceDegree1, modelica_boolean *out_assignable);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_TarjanAssignment(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype _forceDegree1, modelica_metatype *out_assignable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_TarjanAssignment,2,0) {(void*) boxptr_Tearing_TarjanAssignment,0}};
#define boxvar_Tearing_TarjanAssignment MMC_REFSTRUCTLIT(boxvar_lit_Tearing_TarjanAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_TarjanMatching(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_boolean _forceDegree1, modelica_boolean *out_causal);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_TarjanMatching(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype _forceDegree1, modelica_metatype *out_causal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_TarjanMatching,2,0) {(void*) boxptr_Tearing_TarjanMatching,0}};
#define boxvar_Tearing_TarjanMatching MMC_REFSTRUCTLIT(boxvar_lit_Tearing_TarjanMatching)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_countImpossibleAss(threadData_t *threadData, modelica_metatype _elem);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_countImpossibleAss(threadData_t *threadData, modelica_metatype _elem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_countImpossibleAss,2,0) {(void*) boxptr_Tearing_countImpossibleAss,0}};
#define boxvar_Tearing_countImpossibleAss MMC_REFSTRUCTLIT(boxvar_lit_Tearing_countImpossibleAss)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getOneVarWithMostImpAss(threadData_t *threadData, modelica_metatype _inPotentials, modelica_metatype _ass2, modelica_metatype _meT, modelica_integer *out_outMax);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getOneVarWithMostImpAss(threadData_t *threadData, modelica_metatype _inPotentials, modelica_metatype _ass2, modelica_metatype _meT, modelica_metatype *out_outMax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getOneVarWithMostImpAss,2,0) {(void*) boxptr_Tearing_getOneVarWithMostImpAss,0}};
#define boxvar_Tearing_getOneVarWithMostImpAss MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getOneVarWithMostImpAss)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getAllVarsWithMostImpAss(threadData_t *threadData, modelica_metatype _inPotentials, modelica_metatype _ass2, modelica_metatype _meT, modelica_metatype *out_outCounts, modelica_integer *out_outMax);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getAllVarsWithMostImpAss(threadData_t *threadData, modelica_metatype _inPotentials, modelica_metatype _ass2, modelica_metatype _meT, modelica_metatype *out_outCounts, modelica_metatype *out_outMax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getAllVarsWithMostImpAss,2,0) {(void*) boxptr_Tearing_getAllVarsWithMostImpAss,0}};
#define boxvar_Tearing_getAllVarsWithMostImpAss MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getAllVarsWithMostImpAss)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_sizeOfAssignable(threadData_t *threadData, modelica_integer _Eqn, modelica_metatype _me, modelica_metatype _ass1, modelica_integer _inSize);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_sizeOfAssignable(threadData_t *threadData, modelica_metatype _Eqn, modelica_metatype _me, modelica_metatype _ass1, modelica_metatype _inSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_sizeOfAssignable,2,0) {(void*) boxptr_Tearing_sizeOfAssignable,0}};
#define boxvar_Tearing_sizeOfAssignable MMC_REFSTRUCTLIT(boxvar_lit_Tearing_sizeOfAssignable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getAllVarsWithMostPoints(threadData_t *threadData, modelica_metatype _inVarList, modelica_metatype _inPointsLst, modelica_metatype __omcQ_24in_5FoutVarList, modelica_integer __omcQ_24in_5FoutMax, modelica_integer *out_outMax);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getAllVarsWithMostPoints(threadData_t *threadData, modelica_metatype _inVarList, modelica_metatype _inPointsLst, modelica_metatype __omcQ_24in_5FoutVarList, modelica_metatype __omcQ_24in_5FoutMax, modelica_metatype *out_outMax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getAllVarsWithMostPoints,2,0) {(void*) boxptr_Tearing_getAllVarsWithMostPoints,0}};
#define boxvar_Tearing_getAllVarsWithMostPoints MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getAllVarsWithMostPoints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getOneVarWithMostPoints(threadData_t *threadData, modelica_metatype _inVarList, modelica_metatype _inPointsLst, modelica_integer *out_outMax);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getOneVarWithMostPoints(threadData_t *threadData, modelica_metatype _inVarList, modelica_metatype _inPointsLst, modelica_metatype *out_outMax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getOneVarWithMostPoints,2,0) {(void*) boxptr_Tearing_getOneVarWithMostPoints,0}};
#define boxvar_Tearing_getOneVarWithMostPoints MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getOneVarWithMostPoints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectOneMostCausalizingVar(threadData_t *threadData, modelica_metatype _inMt, modelica_metatype _selVars, modelica_metatype _me, modelica_metatype _ass1In, modelica_metatype _selEqsSetArray, modelica_integer *out_outMax);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_selectOneMostCausalizingVar(threadData_t *threadData, modelica_metatype _inMt, modelica_metatype _selVars, modelica_metatype _me, modelica_metatype _ass1In, modelica_metatype _selEqsSetArray, modelica_metatype *out_outMax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_selectOneMostCausalizingVar,2,0) {(void*) boxptr_Tearing_selectOneMostCausalizingVar,0}};
#define boxvar_Tearing_selectOneMostCausalizingVar MMC_REFSTRUCTLIT(boxvar_lit_Tearing_selectOneMostCausalizingVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectCausalizingVars(threadData_t *threadData, modelica_metatype _inMt, modelica_metatype _selVars, modelica_metatype _me, modelica_metatype _ass1In, modelica_metatype _selEqsSetArray, modelica_metatype *out_counts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_selectCausalizingVars,2,0) {(void*) boxptr_Tearing_selectCausalizingVars,0}};
#define boxvar_Tearing_selectCausalizingVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_selectCausalizingVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectMostCausalizingVars(threadData_t *threadData, modelica_metatype _inMt, modelica_metatype _selVars, modelica_metatype _me, modelica_metatype _ass1In, modelica_metatype _selEqsSetArray, modelica_metatype *out_counts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_selectMostCausalizingVars,2,0) {(void*) boxptr_Tearing_selectMostCausalizingVars,0}};
#define boxvar_Tearing_selectMostCausalizingVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_selectMostCausalizingVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData_t *threadData, modelica_metatype _selEqs, modelica_integer _ass1In_size);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_selectCausalVarsPrepareSelectionSet(threadData_t *threadData, modelica_metatype _selEqs, modelica_metatype _ass1In_size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_selectCausalVarsPrepareSelectionSet,2,0) {(void*) boxptr_Tearing_selectCausalVarsPrepareSelectionSet,0}};
#define boxvar_Tearing_selectCausalVarsPrepareSelectionSet MMC_REFSTRUCTLIT(boxvar_lit_Tearing_selectCausalVarsPrepareSelectionSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_preferAvoidVariables(threadData_t *threadData, modelica_metatype _varsIn, modelica_metatype __omcQ_24in_5Fpoints, modelica_metatype _preferAvoidIn, modelica_real _factor);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_preferAvoidVariables(threadData_t *threadData, modelica_metatype _varsIn, modelica_metatype __omcQ_24in_5Fpoints, modelica_metatype _preferAvoidIn, modelica_metatype _factor);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_preferAvoidVariables,2,0) {(void*) boxptr_Tearing_preferAvoidVariables,0}};
#define boxvar_Tearing_preferAvoidVariables MMC_REFSTRUCTLIT(boxvar_lit_Tearing_preferAvoidVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__4(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__4,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__4,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__4 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__4)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__3(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__3,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__3,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__3 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2__3__1(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2__3__1,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__2__3__1,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__2__3__1 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2__3__1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2__3(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2__3,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__2__3,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__2__3 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2__3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__1__3(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__1__3,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__1__3,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__1__3 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__1__3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2__2(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2__2,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__2__2,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__2__2 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2__2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__1__2(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__1__2,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__1__2,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__1__2 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__1__2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2__1(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2__1,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__2__1,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__2__1 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2__1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__1__1(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__1__1,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__1__1,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__1__1 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__1__1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__2,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__2 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__1(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__1,2,0) {(void*) boxptr_Tearing_ModifiedCellierHeuristic__1,0}};
#define boxvar_Tearing_ModifiedCellierHeuristic__1 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_ModifiedCellierHeuristic__1)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_selectTearingVar(threadData_t *threadData, modelica_metatype _me, modelica_metatype _meT, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_selectTearingVar(threadData_t *threadData, modelica_metatype _me, modelica_metatype _meT, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_selectTearingVar,2,0) {(void*) boxptr_Tearing_selectTearingVar,0}};
#define boxvar_Tearing_selectTearingVar MMC_REFSTRUCTLIT(boxvar_lit_Tearing_selectTearingVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_CellierTearing2(threadData_t *threadData, modelica_boolean _inCausal, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _Unsolvables, modelica_metatype _tvarsIn, modelica_metatype _discreteVars, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_boolean _forceDegree1, modelica_metatype *out_orderOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_CellierTearing2(threadData_t *threadData, modelica_metatype _inCausal, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _Unsolvables, modelica_metatype _tvarsIn, modelica_metatype _discreteVars, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype _forceDegree1, modelica_metatype *out_orderOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_CellierTearing2,2,0) {(void*) boxptr_Tearing_CellierTearing2,0}};
#define boxvar_Tearing_CellierTearing2 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_CellierTearing2)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_nonlinearityWeight(threadData_t *threadData, modelica_metatype _entry);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_nonlinearityWeight(threadData_t *threadData, modelica_metatype _entry);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_nonlinearityWeight,2,0) {(void*) boxptr_Tearing_nonlinearityWeight,0}};
#define boxvar_Tearing_nonlinearityWeight MMC_REFSTRUCTLIT(boxvar_lit_Tearing_nonlinearityWeight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getEquationNonlinearityPoints(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqnNonlinPoints, modelica_metatype _me, modelica_integer _size);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getEquationNonlinearityPoints(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqnNonlinPoints, modelica_metatype _me, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getEquationNonlinearityPoints,2,0) {(void*) boxptr_Tearing_getEquationNonlinearityPoints,0}};
#define boxvar_Tearing_getEquationNonlinearityPoints MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getEquationNonlinearityPoints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findCSE(threadData_t *threadData, modelica_metatype _inVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_findCSE,2,0) {(void*) boxptr_Tearing_findCSE,0}};
#define boxvar_Tearing_findCSE MMC_REFSTRUCTLIT(boxvar_lit_Tearing_findCSE)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findDiscreteWarnTearingSelect(threadData_t *threadData, modelica_metatype _inVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_findDiscreteWarnTearingSelect,2,0) {(void*) boxptr_Tearing_findDiscreteWarnTearingSelect,0}};
#define boxvar_Tearing_findDiscreteWarnTearingSelect MMC_REFSTRUCTLIT(boxvar_lit_Tearing_findDiscreteWarnTearingSelect)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findDiscrete(threadData_t *threadData, modelica_metatype _inVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_findDiscrete,2,0) {(void*) boxptr_Tearing_findDiscrete,0}};
#define boxvar_Tearing_findDiscrete MMC_REFSTRUCTLIT(boxvar_lit_Tearing_findDiscrete)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tearingSelect(threadData_t *threadData, modelica_metatype _var_lstIn, modelica_metatype __omcQ_24in_5Falways, modelica_string _DAEtypeStr, modelica_metatype *out_prefer, modelica_metatype *out_avoid, modelica_metatype *out_never, modelica_metatype *out_alwaysByUser);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tearingSelect,2,0) {(void*) boxptr_Tearing_tearingSelect,0}};
#define boxvar_Tearing_tearingSelect MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tearingSelect)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_CellierTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _tearingSelect_always, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_integer _strongComponentIndex, modelica_boolean *out_outRunMatching);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_CellierTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _tearingSelect_always, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype _strongComponentIndex, modelica_metatype *out_outRunMatching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_CellierTearing,2,0) {(void*) boxptr_Tearing_CellierTearing,0}};
#define boxvar_Tearing_CellierTearing MMC_REFSTRUCTLIT(boxvar_lit_Tearing_CellierTearing)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getTearingSetfromAssign(threadData_t *threadData, modelica_metatype _inDiscreteVars, modelica_metatype _assign1, modelica_metatype __omcQ_24in_5FvarArray, modelica_metatype __omcQ_24in_5FequationArray, modelica_metatype *out_equationArray, modelica_metatype *out_innerEquations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getTearingSetfromAssign,2,0) {(void*) boxptr_Tearing_getTearingSetfromAssign,0}};
#define boxvar_Tearing_getTearingSetfromAssign MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getTearingSetfromAssign)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_pathFound(threadData_t *threadData, modelica_integer _varIdx, modelica_metatype _adjEnhT, modelica_metatype _varArray, modelica_metatype _eqArray, modelica_metatype __omcQ_24in_5FeqMarker, modelica_metatype __omcQ_24in_5FnE, modelica_metatype __omcQ_24in_5FnV, modelica_metatype *out_nE, modelica_metatype *out_nV, modelica_boolean *out_success);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_pathFound(threadData_t *threadData, modelica_metatype _varIdx, modelica_metatype _adjEnhT, modelica_metatype _varArray, modelica_metatype _eqArray, modelica_metatype __omcQ_24in_5FeqMarker, modelica_metatype __omcQ_24in_5FnE, modelica_metatype __omcQ_24in_5FnV, modelica_metatype *out_nE, modelica_metatype *out_nV, modelica_metatype *out_success);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_pathFound,2,0) {(void*) boxptr_Tearing_pathFound,0}};
#define boxvar_Tearing_pathFound MMC_REFSTRUCTLIT(boxvar_lit_Tearing_pathFound)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_matchDiscreteVars(threadData_t *threadData, modelica_metatype _inDiscreteVars, modelica_metatype _adjEnhT, modelica_metatype _varArray, modelica_metatype _eqArray, modelica_metatype __omcQ_24in_5FnE, modelica_metatype __omcQ_24in_5FnV, modelica_metatype *out_nV);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_matchDiscreteVars,2,0) {(void*) boxptr_Tearing_matchDiscreteVars,0}};
#define boxvar_Tearing_matchDiscreteVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_matchDiscreteVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_minimalTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _jacType, modelica_boolean _mixedSystem);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_minimalTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _jacType, modelica_metatype _mixedSystem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_minimalTearing,2,0) {(void*) boxptr_Tearing_minimalTearing,0}};
#define boxvar_Tearing_minimalTearing MMC_REFSTRUCTLIT(boxvar_lit_Tearing_minimalTearing)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing4__1(threadData_t *threadData, modelica_metatype _othercomps, modelica_metatype _ass2, modelica_metatype _mapIncRowEqn, modelica_metatype _eindxarr, modelica_metatype _varindxarr, modelica_metatype _columark, modelica_integer _mark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing4__1(threadData_t *threadData, modelica_metatype _othercomps, modelica_metatype _ass2, modelica_metatype _mapIncRowEqn, modelica_metatype _eindxarr, modelica_metatype _varindxarr, modelica_metatype _columark, modelica_metatype _mark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_omcTearing4__1,2,0) {(void*) boxptr_Tearing_omcTearing4__1,0}};
#define boxvar_Tearing_omcTearing4__1 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_omcTearing4__1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing4(threadData_t *threadData, modelica_metatype _jacType, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _subsyst, modelica_metatype _tvars, modelica_metatype _residual, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _othercomps, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _columark, modelica_integer _mark, modelica_boolean _mixedSystem, modelica_boolean *out_outRunMatching);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing4(threadData_t *threadData, modelica_metatype _jacType, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _subsyst, modelica_metatype _tvars, modelica_metatype _residual, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _othercomps, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _mixedSystem, modelica_metatype *out_outRunMatching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_omcTearing4,2,0) {(void*) boxptr_Tearing_omcTearing4,0}};
#define boxvar_Tearing_omcTearing4 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_omcTearing4)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing3(threadData_t *threadData, modelica_metatype _unassigned, modelica_metatype _unsolvables, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _size, modelica_metatype _vars, modelica_metatype _ishared, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_integer _mark, modelica_metatype _inTVars, modelica_integer *out_oMark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing3(threadData_t *threadData, modelica_metatype _unassigned, modelica_metatype _unsolvables, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _size, modelica_metatype _vars, modelica_metatype _ishared, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _inTVars, modelica_metatype *out_oMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_omcTearing3,2,0) {(void*) boxptr_Tearing_omcTearing3,0}};
#define boxvar_Tearing_omcTearing3 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_omcTearing3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tearingBFS2(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _clst, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _inNextQueue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tearingBFS2,2,0) {(void*) boxptr_Tearing_tearingBFS2,0}};
#define boxvar_Tearing_tearingBFS2 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tearingBFS2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_isEntrySolvable(threadData_t *threadData, modelica_metatype _entry);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_isEntrySolvable(threadData_t *threadData, modelica_metatype _entry);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_isEntrySolvable,2,0) {(void*) boxptr_Tearing_isEntrySolvable,0}};
#define boxvar_Tearing_isEntrySolvable MMC_REFSTRUCTLIT(boxvar_lit_Tearing_isEntrySolvable)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_isEntrySolved(threadData_t *threadData, modelica_metatype _entry);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_isEntrySolved(threadData_t *threadData, modelica_metatype _entry);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_isEntrySolved,2,0) {(void*) boxptr_Tearing_isEntrySolved,0}};
#define boxvar_Tearing_isEntrySolved MMC_REFSTRUCTLIT(boxvar_lit_Tearing_isEntrySolved)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_solvable(threadData_t *threadData, modelica_metatype _s);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solvable(threadData_t *threadData, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_solvable,2,0) {(void*) boxptr_Tearing_solvable,0}};
#define boxvar_Tearing_solvable MMC_REFSTRUCTLIT(boxvar_lit_Tearing_solvable)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_solvableLst(threadData_t *threadData, modelica_metatype _rows);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solvableLst(threadData_t *threadData, modelica_metatype _rows);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_solvableLst,2,0) {(void*) boxptr_Tearing_solvableLst,0}};
#define boxvar_Tearing_solvableLst MMC_REFSTRUCTLIT(boxvar_lit_Tearing_solvableLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tearingBFS1(threadData_t *threadData, modelica_metatype _rows, modelica_integer _size, modelica_metatype _c, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _inNextQueue);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tearingBFS1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _size, modelica_metatype _c, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _inNextQueue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tearingBFS1,2,0) {(void*) boxptr_Tearing_tearingBFS1,0}};
#define boxvar_Tearing_tearingBFS1 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tearingBFS1)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_hasnonlinearVars1(threadData_t *threadData, modelica_metatype _row);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_hasnonlinearVars1(threadData_t *threadData, modelica_metatype _row);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_hasnonlinearVars1,2,0) {(void*) boxptr_Tearing_hasnonlinearVars1,0}};
#define boxvar_Tearing_hasnonlinearVars1 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_hasnonlinearVars1)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_hasnonlinearVars(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _m);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_hasnonlinearVars(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_hasnonlinearVars,2,0) {(void*) boxptr_Tearing_hasnonlinearVars,0}};
#define boxvar_Tearing_hasnonlinearVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_hasnonlinearVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_sortEqnsSolvable(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_sortEqnsSolvable,2,0) {(void*) boxptr_Tearing_sortEqnsSolvable,0}};
#define boxvar_Tearing_sortEqnsSolvable MMC_REFSTRUCTLIT(boxvar_lit_Tearing_sortEqnsSolvable)
PROTECTED_FUNCTION_STATIC void omc_Tearing_tearingBFS(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _size, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _nextQueue);
PROTECTED_FUNCTION_STATIC void boxptr_Tearing_tearingBFS(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _size, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _nextQueue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tearingBFS,2,0) {(void*) boxptr_Tearing_tearingBFS,0}};
#define boxvar_Tearing_tearingBFS MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tearingBFS)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_selectVarWithMostPoints(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _points);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_selectVarWithMostPoints(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _points);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_selectVarWithMostPoints,2,0) {(void*) boxptr_Tearing_selectVarWithMostPoints,0}};
#define boxvar_Tearing_selectVarWithMostPoints MMC_REFSTRUCTLIT(boxvar_lit_Tearing_selectVarWithMostPoints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_discriminateDiscrete(threadData_t *threadData, modelica_integer _v, modelica_metatype _vars, modelica_metatype _iPoints);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_discriminateDiscrete(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_metatype _iPoints);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_discriminateDiscrete,2,0) {(void*) boxptr_Tearing_discriminateDiscrete,0}};
#define boxvar_Tearing_discriminateDiscrete MMC_REFSTRUCTLIT(boxvar_lit_Tearing_discriminateDiscrete)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_isAssignedSaveEnhanced(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _inTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_isAssignedSaveEnhanced(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_isAssignedSaveEnhanced,2,0) {(void*) boxptr_Tearing_isAssignedSaveEnhanced,0}};
#define boxvar_Tearing_isAssignedSaveEnhanced MMC_REFSTRUCTLIT(boxvar_lit_Tearing_isAssignedSaveEnhanced)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_addEqnWeights(threadData_t *threadData, modelica_integer _e, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _iPoints);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_addEqnWeights(threadData_t *threadData, modelica_metatype _e, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _iPoints);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_addEqnWeights,2,0) {(void*) boxptr_Tearing_addEqnWeights,0}};
#define boxvar_Tearing_addEqnWeights MMC_REFSTRUCTLIT(boxvar_lit_Tearing_addEqnWeights)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_solvabilityWeights(threadData_t *threadData, modelica_metatype _solva);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solvabilityWeights(threadData_t *threadData, modelica_metatype _solva);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_solvabilityWeights,2,0) {(void*) boxptr_Tearing_solvabilityWeights,0}};
#define boxvar_Tearing_solvabilityWeights MMC_REFSTRUCTLIT(boxvar_lit_Tearing_solvabilityWeights)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_solvabilityWeightsnoStates(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _ass, modelica_integer _iW);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solvabilityWeightsnoStates(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _ass, modelica_metatype _iW);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_solvabilityWeightsnoStates,2,0) {(void*) boxptr_Tearing_solvabilityWeightsnoStates,0}};
#define boxvar_Tearing_solvabilityWeightsnoStates MMC_REFSTRUCTLIT(boxvar_lit_Tearing_solvabilityWeightsnoStates)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_calcSolvabilityWeight(threadData_t *threadData, modelica_metatype _inRow, modelica_metatype _ass2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_calcSolvabilityWeight(threadData_t *threadData, modelica_metatype _inRow, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_calcSolvabilityWeight,2,0) {(void*) boxptr_Tearing_calcSolvabilityWeight,0}};
#define boxvar_Tearing_calcSolvabilityWeight MMC_REFSTRUCTLIT(boxvar_lit_Tearing_calcSolvabilityWeight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_calcVarWeights(threadData_t *threadData, modelica_integer _v, modelica_metatype _mt, modelica_metatype _ass2, modelica_metatype _iPoints);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_calcVarWeights(threadData_t *threadData, modelica_metatype _v, modelica_metatype _mt, modelica_metatype _ass2, modelica_metatype _iPoints);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_calcVarWeights,2,0) {(void*) boxptr_Tearing_calcVarWeights,0}};
#define boxvar_Tearing_calcVarWeights MMC_REFSTRUCTLIT(boxvar_lit_Tearing_calcVarWeights)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_removeMatched(threadData_t *threadData, modelica_metatype _elem, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_removeMatched,2,0) {(void*) boxptr_Tearing_removeMatched,0}};
#define boxvar_Tearing_removeMatched MMC_REFSTRUCTLIT(boxvar_lit_Tearing_removeMatched)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getUnsolvableVarsConsiderMatching(threadData_t *threadData, modelica_integer _size, modelica_metatype _meT, modelica_metatype _ass1, modelica_metatype _ass2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getUnsolvableVarsConsiderMatching(threadData_t *threadData, modelica_metatype _size, modelica_metatype _meT, modelica_metatype _ass1, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getUnsolvableVarsConsiderMatching,2,0) {(void*) boxptr_Tearing_getUnsolvableVarsConsiderMatching,0}};
#define boxvar_Tearing_getUnsolvableVarsConsiderMatching MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getUnsolvableVarsConsiderMatching)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_omcTearingSelectTearingVar(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearingSelectTearingVar(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_omcTearingSelectTearingVar,2,0) {(void*) boxptr_Tearing_omcTearingSelectTearingVar,0}};
#define boxvar_Tearing_omcTearingSelectTearingVar MMC_REFSTRUCTLIT(boxvar_lit_Tearing_omcTearingSelectTearingVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findVareqns(threadData_t *threadData, modelica_metatype _ass2In, modelica_fnptr _inCompFunc, modelica_metatype _mt, modelica_metatype _tSel_alwaysIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_findVareqns,2,0) {(void*) boxptr_Tearing_findVareqns,0}};
#define boxvar_Tearing_findVareqns MMC_REFSTRUCTLIT(boxvar_lit_Tearing_findVareqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing2(threadData_t *threadData, modelica_metatype _unsolvables, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _size, modelica_metatype _vars, modelica_metatype _ishared, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_integer _mark, modelica_metatype _inTVars, modelica_integer *out_oMark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing2(threadData_t *threadData, modelica_metatype _unsolvables, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _size, modelica_metatype _vars, modelica_metatype _ishared, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _inTVars, modelica_metatype *out_oMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_omcTearing2,2,0) {(void*) boxptr_Tearing_omcTearing2,0}};
#define boxvar_Tearing_omcTearing2 MMC_REFSTRUCTLIT(boxvar_lit_Tearing_omcTearing2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getTVarResiduals(threadData_t *threadData, modelica_integer _index, modelica_metatype _v1, modelica_metatype _eqnLocalGlobal, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getTVarResiduals(threadData_t *threadData, modelica_metatype _index, modelica_metatype _v1, modelica_metatype _eqnLocalGlobal, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getTVarResiduals,2,0) {(void*) boxptr_Tearing_getTVarResiduals,0}};
#define boxvar_Tearing_getTVarResiduals MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getTVarResiduals)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_tVarsofResidualEqns(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _varGlobalLocal, modelica_metatype _visited, modelica_integer _iMark, modelica_metatype *out_oAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tVarsofResidualEqns(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _varGlobalLocal, modelica_metatype _visited, modelica_metatype _iMark, modelica_metatype *out_oAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tVarsofResidualEqns,2,0) {(void*) boxptr_Tearing_tVarsofResidualEqns,0}};
#define boxvar_Tearing_tVarsofResidualEqns MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tVarsofResidualEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getGlobalLocal(threadData_t *threadData, modelica_metatype _iTVars, modelica_integer _index, modelica_metatype _iVarGlobalLocal);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getGlobalLocal(threadData_t *threadData, modelica_metatype _iTVars, modelica_metatype _index, modelica_metatype _iVarGlobalLocal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getGlobalLocal,2,0) {(void*) boxptr_Tearing_getGlobalLocal,0}};
#define boxvar_Tearing_getGlobalLocal MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getGlobalLocal)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_sortResidualDepentOnTVars(threadData_t *threadData, modelica_metatype _iResiduals, modelica_metatype _iTVars, modelica_metatype _ass1, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _visited, modelica_integer _iMark, modelica_integer *out_oMark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_sortResidualDepentOnTVars(threadData_t *threadData, modelica_metatype _iResiduals, modelica_metatype _iTVars, modelica_metatype _ass1, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _visited, modelica_metatype _iMark, modelica_metatype *out_oMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_sortResidualDepentOnTVars,2,0) {(void*) boxptr_Tearing_sortResidualDepentOnTVars,0}};
#define boxvar_Tearing_sortResidualDepentOnTVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_sortResidualDepentOnTVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_uniqueIntLst(threadData_t *threadData, modelica_integer _c, modelica_integer _mark, modelica_metatype _markarray, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_uniqueIntLst(threadData_t *threadData, modelica_metatype _c, modelica_metatype _mark, modelica_metatype _markarray, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_uniqueIntLst,2,0) {(void*) boxptr_Tearing_uniqueIntLst,0}};
#define boxvar_Tearing_uniqueIntLst MMC_REFSTRUCTLIT(boxvar_lit_Tearing_uniqueIntLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tVarsofEqn(threadData_t *threadData, modelica_metatype _iVars, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _visited, modelica_integer _iMark, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tVarsofEqn(threadData_t *threadData, modelica_metatype _iVars, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _visited, modelica_metatype _iMark, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tVarsofEqn,2,0) {(void*) boxptr_Tearing_tVarsofEqn,0}};
#define boxvar_Tearing_tVarsofEqn MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tVarsofEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tVarsofEqns(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _visited, modelica_integer _iMark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tVarsofEqns(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _visited, modelica_metatype _iMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tVarsofEqns,2,0) {(void*) boxptr_Tearing_tVarsofEqns,0}};
#define boxvar_Tearing_tVarsofEqns MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tVarsofEqns)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getDependenciesOfVars(threadData_t *threadData, modelica_metatype _iComps, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _visited, modelica_integer _iMark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getDependenciesOfVars(threadData_t *threadData, modelica_metatype _iComps, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _visited, modelica_metatype _iMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getDependenciesOfVars,2,0) {(void*) boxptr_Tearing_getDependenciesOfVars,0}};
#define boxvar_Tearing_getDependenciesOfVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getDependenciesOfVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_unassignTVars(threadData_t *threadData, modelica_integer _v, modelica_metatype _inAss);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_unassignTVars(threadData_t *threadData, modelica_metatype _v, modelica_metatype _inAss);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_unassignTVars,2,0) {(void*) boxptr_Tearing_unassignTVars,0}};
#define boxvar_Tearing_unassignTVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_unassignTVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getUnsolvableVars(threadData_t *threadData, modelica_integer _size, modelica_metatype _meT);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getUnsolvableVars(threadData_t *threadData, modelica_metatype _size, modelica_metatype _meT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getUnsolvableVars,2,0) {(void*) boxptr_Tearing_getUnsolvableVars,0}};
#define boxvar_Tearing_getUnsolvableVars MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getUnsolvableVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_boolean *out_outRunMatching);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype *out_outRunMatching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_omcTearing,2,0) {(void*) boxptr_Tearing_omcTearing,0}};
#define boxvar_Tearing_omcTearing MMC_REFSTRUCTLIT(boxvar_lit_Tearing_omcTearing)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getUserTearingSet(threadData_t *threadData, modelica_metatype _userTVars, modelica_metatype _userResiduals, modelica_integer _strongComponentIndex, modelica_metatype *out_userResidualsThisComponent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getUserTearingSet(threadData_t *threadData, modelica_metatype _userTVars, modelica_metatype _userResiduals, modelica_metatype _strongComponentIndex, modelica_metatype *out_userResidualsThisComponent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getUserTearingSet,2,0) {(void*) boxptr_Tearing_getUserTearingSet,0}};
#define boxvar_Tearing_getUserTearingSet MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getUserTearingSet)
PROTECTED_FUNCTION_STATIC modelica_real omc_Tearing_solveCost(threadData_t *threadData, modelica_real _size, modelica_real _nnz, modelica_boolean _sparse, modelica_real _fill);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solveCost(threadData_t *threadData, modelica_metatype _size, modelica_metatype _nnz, modelica_metatype _sparse, modelica_metatype _fill);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_solveCost,2,0) {(void*) boxptr_Tearing_solveCost,0}};
#define boxvar_Tearing_solveCost MMC_REFSTRUCTLIT(boxvar_lit_Tearing_solveCost)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_substituteKnownVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype *out_globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_substituteKnownVar,2,0) {(void*) boxptr_Tearing_substituteKnownVar,0}};
#define boxvar_Tearing_substituteKnownVar MMC_REFSTRUCTLIT(boxvar_lit_Tearing_substituteKnownVar)
PROTECTED_FUNCTION_STATIC modelica_real omc_Tearing_jacEntryMagnitude(threadData_t *threadData, modelica_metatype _dEqn, modelica_metatype _globalKnownVars, modelica_boolean *out_known);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_jacEntryMagnitude(threadData_t *threadData, modelica_metatype _dEqn, modelica_metatype _globalKnownVars, modelica_metatype *out_known);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_jacEntryMagnitude,2,0) {(void*) boxptr_Tearing_jacEntryMagnitude,0}};
#define boxvar_Tearing_jacEntryMagnitude MMC_REFSTRUCTLIT(boxvar_lit_Tearing_jacEntryMagnitude)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_tearingPaysOff(threadData_t *threadData, modelica_metatype _tornComp, modelica_metatype _shared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_integer _strongComponentIndex, modelica_boolean _isLinear);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tearingPaysOff(threadData_t *threadData, modelica_metatype _tornComp, modelica_metatype _shared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _strongComponentIndex, modelica_metatype _isLinear);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tearingPaysOff,2,0) {(void*) boxptr_Tearing_tearingPaysOff,0}};
#define boxvar_Tearing_tearingPaysOff MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tearingPaysOff)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_targetHasSparseSolver(threadData_t *threadData, modelica_boolean _isLinear);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_targetHasSparseSolver(threadData_t *threadData, modelica_metatype _isLinear);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_targetHasSparseSolver,2,0) {(void*) boxptr_Tearing_targetHasSparseSolver,0}};
#define boxvar_Tearing_targetHasSparseSolver MMC_REFSTRUCTLIT(boxvar_lit_Tearing_targetHasSparseSolver)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_checkTearingSettings(threadData_t *threadData, modelica_boolean _isLinear, modelica_integer _strongComponentIndex, modelica_integer _numVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_checkTearingSettings(threadData_t *threadData, modelica_metatype _isLinear, modelica_metatype _strongComponentIndex, modelica_metatype _numVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_checkTearingSettings,2,0) {(void*) boxptr_Tearing_checkTearingSettings,0}};
#define boxvar_Tearing_checkTearingSettings MMC_REFSTRUCTLIT(boxvar_lit_Tearing_checkTearingSettings)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_traverseComponent(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMethod, modelica_integer _strongComponentIndexIn, modelica_boolean *out_outRunMatching, modelica_integer *out_strongComponentIndexOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_traverseComponent(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMethod, modelica_metatype _strongComponentIndexIn, modelica_metatype *out_outRunMatching, modelica_metatype *out_strongComponentIndexOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_traverseComponent,2,0) {(void*) boxptr_Tearing_traverseComponent,0}};
#define boxvar_Tearing_traverseComponent MMC_REFSTRUCTLIT(boxvar_lit_Tearing_traverseComponent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_traverseComponents(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMethod, modelica_integer _strongComponentIndexIn, modelica_boolean *out_outRunMatching, modelica_integer *out_strongComponentIndexOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_traverseComponents(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMethod, modelica_metatype _strongComponentIndexIn, modelica_metatype *out_outRunMatching, modelica_metatype *out_strongComponentIndexOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_traverseComponents,2,0) {(void*) boxptr_Tearing_traverseComponents,0}};
#define boxvar_Tearing_traverseComponents MMC_REFSTRUCTLIT(boxvar_lit_Tearing_traverseComponents)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tearingSystemWork(threadData_t *threadData, modelica_metatype _tearingMethod, modelica_metatype _isyst, modelica_metatype _inShared, modelica_integer _inStrongComponentIndex, modelica_metatype *out_outShared, modelica_integer *out_outStrongComponentIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tearingSystemWork(threadData_t *threadData, modelica_metatype _tearingMethod, modelica_metatype _isyst, modelica_metatype _inShared, modelica_metatype _inStrongComponentIndex, modelica_metatype *out_outShared, modelica_metatype *out_outStrongComponentIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_tearingSystemWork,2,0) {(void*) boxptr_Tearing_tearingSystemWork,0}};
#define boxvar_Tearing_tearingSystemWork MMC_REFSTRUCTLIT(boxvar_lit_Tearing_tearingSystemWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_callTearingMethod(threadData_t *threadData, modelica_metatype _inTearingMethod, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_integer _strongComponentIndex, modelica_boolean *out_outRunMatching);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_callTearingMethod(threadData_t *threadData, modelica_metatype _inTearingMethod, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype _strongComponentIndex, modelica_metatype *out_outRunMatching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_callTearingMethod,2,0) {(void*) boxptr_Tearing_callTearingMethod,0}};
#define boxvar_Tearing_callTearingMethod MMC_REFSTRUCTLIT(boxvar_lit_Tearing_callTearingMethod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getTearingMethod(threadData_t *threadData, modelica_string _inTearingMethod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Tearing_getTearingMethod,2,0) {(void*) boxptr_Tearing_getTearingMethod,0}};
#define boxvar_Tearing_getTearingMethod MMC_REFSTRUCTLIT(boxvar_lit_Tearing_getTearingMethod)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_simpleMatching(threadData_t *threadData, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _orderIn, modelica_metatype _causEqIn, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _me, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _orderOut = NULL;
  modelica_integer _e;
  modelica_metatype _causEq = NULL;
  modelica_metatype _e_exp = NULL;
  modelica_metatype _vars = NULL;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _orderOut = _orderIn;
  // _e has no default value.
  _causEq = _causEqIn;
  // _e_exp has no default value.
  // _vars has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT0),stdout);
  }

  while(1)
  {
    if(!(!listEmpty(_causEq))) break;
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
            _e = omc_Tearing_getNextSolvableEqn(threadData, _causEq, _m, _me, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, _ass1 ,&_e_exp ,&_vars);
            goto tmp2_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT3))
            {
              fputs(omc_string_data(_OMC_LIT4),stdout);
            }

            omc_Error_addCompilerError(threadData, _OMC_LIT5);

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

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp5 = stringAppend(_OMC_LIT6,stringDelimitList(omc_List_map(threadData, _causEq, boxvar_intString), _OMC_LIT7));
      tmp6 = stringAppend(tmp5,_OMC_LIT8);
      tmp7 = stringAppend(tmp6,intString(_e));
      tmp8 = stringAppend(tmp7,_OMC_LIT9);
      tmp9 = stringAppend(tmp8,stringDelimitList(omc_List_map(threadData, _e_exp, boxvar_intString), _OMC_LIT7));
      tmp10 = stringAppend(tmp9,_OMC_LIT10);
      fputs(omc_string_data(tmp10),stdout);
    }

    omc_Tearing_makeAssignment(threadData, _e_exp, _vars, _ass1, _ass2, _m, _mt);

    tmpMeta11 = mmc_mk_cons(omc_mk_integer(_e), _orderOut);
    _orderOut = tmpMeta11;

    _causEq = omc_Tearing_traverseCollectiveEqnsforAssignable(threadData, _ass2, _m, _mapEqnIncRow);
  }

  if(listEmpty(omc_Tearing_getUnassigned(threadData, _ass1)))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT11),stdout);
    }

    _orderOut = listReverse(_orderOut);
  }
  else
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT4),stdout);
    }

    omc_Error_addCompilerError(threadData, _OMC_LIT5);

    OMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _orderOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_countEmptyRows(threadData_t *threadData, modelica_metatype _m)
{
  modelica_integer _count;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = ((modelica_integer) 0);
  {
    modelica_metatype _row;
    for (tmpMeta1 = _m, tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _row = arrayGet(tmpMeta1,tmp3);
      if(listEmpty(_row))
      {
        _count = ((modelica_integer) 1) + _count;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _count;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_countEmptyRows(threadData_t *threadData, modelica_metatype _m)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_Tearing_countEmptyRows(threadData, _m);
  out_count = omc_mk_icon(_count);
  return out_count;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_userDefinedTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_metatype _userTVars, modelica_metatype _userResiduals, modelica_boolean *out_outRunMatching)
{
  modelica_metatype _ocomp = NULL;
  modelica_boolean _outRunMatching;
  modelica_integer _size;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _tVars = NULL;
  modelica_metatype _residuals = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _causEq = NULL;
  modelica_metatype _unsolvables = NULL;
  modelica_metatype _discreteVars = NULL;
  modelica_metatype _userResiduals_exp = NULL;
  modelica_metatype _subsyst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mt = NULL;
  modelica_metatype _me = NULL;
  modelica_metatype _meT = NULL;
  modelica_metatype _DAEtype = NULL;
  modelica_metatype _innerEquations = NULL;
  modelica_metatype _tearingSet = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_boolean _linear;
  modelica_string _modelName = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp14;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_string tmp19;
  modelica_string tmp20;
  modelica_string tmp21;
  modelica_string tmp22;
  modelica_string tmp23;
  modelica_string tmp24;
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  modelica_string tmp27;
  modelica_string tmp28;
  modelica_string tmp29;
  modelica_string tmp30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ocomp has no default value.
  // _outRunMatching has no default value.
  // _size has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _mapIncRowEqn has no default value.
  // _mapEqnIncRow has no default value.
  // _tVars has no default value.
  // _residuals has no default value.
  // _order has no default value.
  // _causEq has no default value.
  // _unsolvables has no default value.
  // _discreteVars has no default value.
  // _userResiduals_exp has no default value.
  // _subsyst has no default value.
  // _vars has no default value.
  // _eqns has no default value.
  // _m has no default value.
  // _mt has no default value.
  // _me has no default value.
  // _meT has no default value.
  // _DAEtype has no default value.
  // _innerEquations has no default value.
  // _tearingSet has no default value.
  // _eqn_lst has no default value.
  // _var_lst has no default value.
  // _linear has no default value.
  // _modelName has no default value.
  _linear = omc_BackendDAEUtil_getLinearfromJacType(threadData, _jacType);

  /* Pattern-matching assignment */
  tmpMeta1 = _ishared;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 15);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 17);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 3);
  _DAEtype = tmpMeta2;
  _modelName = tmpMeta4;

  _size = listLength(_vindx);

  _eqn_lst = omc_BackendEquation_getList(threadData, _eindex, omc_BackendEquation_getEqnsFromEqSystem(threadData, _isyst));

  _eqns = omc_BackendEquation_listEquation(threadData, _eqn_lst);

  _var_lst = omc_List_map1r(threadData, _vindx, boxvar_BackendVariable_getVarAt, omc_BackendVariable_daeVars(threadData, _isyst));

  _vars = omc_BackendVariable_listVar1(threadData, _var_lst);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _subsyst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta5, _OMC_LIT12, omc_BackendEquation_emptyEqns(threadData));

  _subsyst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _subsyst, _OMC_LIT13, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,&_mt ,NULL ,NULL);

  _m = omc_Array_map(threadData, _m, boxvar_Tearing_deleteNegativeEntries);

  _mt = omc_Array_map(threadData, _mt, boxvar_Tearing_deleteNegativeEntries);

  _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _subsyst, _ishared, 0 /* false */ ,&_meT ,&_mapEqnIncRow ,&_mapIncRowEqn);

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp7_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp13;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = _userResiduals;
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar5;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar4 = arrayGet(_mapEqnIncRow, omc_unbox_integer(_i));
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar5;
          }
          _userResiduals_exp = omc_List_flatten(threadData, tmpMeta10);
          goto tmp7_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT17, _OMC_LIT19);

          goto goto_6;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      tmp7_done:
      (void)tmp8;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp7_done2;
      goto_6:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp8 < 2) {
        goto tmp7_top;
      }
      OMC_THROW_INTERNAL();
      tmp7_done2:;
    }
  }
  ;

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT20),stdout);
  }

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    tmp14 = stringAppend(_OMC_LIT21,stringDelimitList(omc_List_map(threadData, _userTVars, boxvar_intString), _OMC_LIT7));
    tmp15 = stringAppend(tmp14,_OMC_LIT10);
    fputs(omc_string_data(tmp15),stdout);

    tmp16 = stringAppend(_OMC_LIT22,stringDelimitList(omc_List_map(threadData, _userResiduals, boxvar_intString), _OMC_LIT7));
    tmp17 = stringAppend(tmp16,_OMC_LIT10);
    fputs(omc_string_data(tmp17),stdout);

    tmp18 = stringAppend(_OMC_LIT23,stringDelimitList(omc_List_map(threadData, _userResiduals_exp, boxvar_intString), _OMC_LIT7));
    tmp19 = stringAppend(tmp18,_OMC_LIT10);
    fputs(omc_string_data(tmp19),stdout);

    fputs(omc_string_data(_OMC_LIT24),stdout);

    omc_BackendDump_printEqSystem(threadData, _subsyst);

    fputs(omc_string_data(_OMC_LIT25),stdout);
  }

  if((!(listLength(_userTVars) == listLength(_userResiduals_exp))))
  {
    omc_Error_addMessage(threadData, _OMC_LIT17, _OMC_LIT30);

    OMC_THROW_INTERNAL();
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT31),stdout);

    omc_BackendDump_dumpAdjacencyMatrixEnhanced(threadData, _me);

    fputs(omc_string_data(_OMC_LIT32),stdout);

    omc_BackendDump_dumpAdjacencyMatrixTEnhanced(threadData, _meT);
  }

  _unsolvables = omc_Tearing_getUnsolvableVars(threadData, _size, _meT);

  _discreteVars = omc_Tearing_findDiscrete(threadData, _var_lst);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT33),stdout);

    omc_BackendDump_dumpAdjacencyMatrix(threadData, _mapEqnIncRow);

    tmp20 = stringAppend(_OMC_LIT34,stringDelimitList(omc_List_mapArray(threadData, _mapIncRowEqn, boxvar_intString), _OMC_LIT7));
    tmp21 = stringAppend(tmp20,_OMC_LIT35);
    fputs(omc_string_data(tmp21),stdout);

    tmp22 = stringAppend(_OMC_LIT36,stringDelimitList(omc_List_map(threadData, _unsolvables, boxvar_intString), _OMC_LIT7));
    tmp23 = stringAppend(tmp22,_OMC_LIT35);
    fputs(omc_string_data(tmp23),stdout);

    tmp24 = stringAppend(_OMC_LIT37,stringDelimitList(omc_List_map(threadData, _discreteVars, boxvar_intString), _OMC_LIT7));
    tmp25 = stringAppend(tmp24,_OMC_LIT35);
    fputs(omc_string_data(tmp25),stdout);
  }

  _ass1 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  _ass2 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
  _order = tmpMeta26;

  omc_Tearing_markTVarsOrResiduals(threadData, _userTVars, _ass1);

  omc_Tearing_markTVarsOrResiduals(threadData, _userResiduals_exp, _ass2);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp27 = stringAppend(_OMC_LIT38,stringDelimitList(omc_List_mapArray(threadData, _ass1, boxvar_intString), _OMC_LIT7));
    tmp28 = stringAppend(tmp27,_OMC_LIT10);
    fputs(omc_string_data(tmp28),stdout);

    tmp29 = stringAppend(_OMC_LIT39,stringDelimitList(omc_List_mapArray(threadData, _ass2, boxvar_intString), _OMC_LIT7));
    tmp30 = stringAppend(tmp29,_OMC_LIT10);
    fputs(omc_string_data(tmp30),stdout);
  }

  omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData, _m, _mt, _userTVars);

  omc_Tearing_deleteRowsFromAdjacencyMatrix(threadData, _mt, _userTVars);

  omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData, _mt, _m, _userResiduals_exp);

  omc_Tearing_deleteRowsFromAdjacencyMatrix(threadData, _m, _userResiduals_exp);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT40),stdout);

    omc_BackendDump_dumpAdjacencyMatrix(threadData, _m);

    omc_BackendDump_dumpAdjacencyMatrix(threadData, _mt);
  }

  if(((listLength(_userTVars) == omc_Tearing_countEmptyRows(threadData, _m)) && (listLength(_userResiduals_exp) == omc_Tearing_countEmptyRows(threadData, _mt))))
  {
    _causEq = omc_Tearing_traverseCollectiveEqnsforAssignable(threadData, _ass2, _m, _mapEqnIncRow);

    _order = omc_Tearing_simpleMatching(threadData, _ass1, _ass2, _order, _causEq, _m, _mt, _me, _mapEqnIncRow, _mapIncRowEqn);

    _tVars = omc_Tearing_selectFromList__rev(threadData, _vindx, _userTVars);

    _residuals = omc_Tearing_selectFromList__rev(threadData, _eindex, _userResiduals);

    _innerEquations = omc_Tearing_assignInnerEquations(threadData, _order, _eindex, _vindx, _ass2, _mapEqnIncRow, mmc_mk_none());

    tmpMeta31 = omc_mk_box5(3, &BackendDAE_TearingSet_TEARINGSET__desc, _tVars, _residuals, _innerEquations, _OMC_LIT41);
    _tearingSet = tmpMeta31;

    tmpMeta32 = omc_mk_box5(10, &BackendDAE_StrongComponent_TORNSYSTEM__desc, _tearingSet, mmc_mk_none(), omc_mk_boolean(_linear), omc_mk_boolean(_mixedSystem));
    _ocomp = tmpMeta32;

    _outRunMatching = 1 /* true */;

    if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
    {
      omc_Tearing_dumpTearingSetLocalIndexes(threadData, _userTVars, _userResiduals, _order, _ass2, _size, _mapEqnIncRow, _vars, _eqns, _OMC_LIT42);
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      omc_Tearing_dumpTearingSetGlobalIndexes(threadData, _tearingSet, _size, _OMC_LIT42);
    }
  }
  else
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT4),stdout);
    }

    omc_Error_addCompilerError(threadData, _OMC_LIT5);

    OMC_THROW_INTERNAL();
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT43),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  omc_ret_ = _ocomp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_userDefinedTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype _userTVars, modelica_metatype _userResiduals, modelica_metatype *out_outRunMatching)
{
  modelica_integer tmp1;
  modelica_boolean _outRunMatching;
  modelica_metatype _ocomp = NULL;
  tmp1 = omc_unbox_integer(_mixedSystem);
  _ocomp = omc_Tearing_userDefinedTearing(threadData, _isyst, _ishared, _eindex, _vindx, _ojac, _jacType, tmp1, _userTVars, _userResiduals, &_outRunMatching);
  /* skip box _ocomp; BackendDAE.StrongComponent */
  if (out_outRunMatching) { *out_outRunMatching = omc_mk_icon(_outRunMatching); }
  return _ocomp;
}

PROTECTED_FUNCTION_STATIC void omc_Tearing_dumpMatchingList(threadData_t *threadData, modelica_metatype _matchingList)
{
  modelica_integer _c;
  modelica_metatype _order = NULL;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _c = ((modelica_integer) 0);
  // _order has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  fputs(omc_string_data(_OMC_LIT10),stdout);

  {
    modelica_metatype _matching;
    for (tmpMeta1 = _matchingList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _matching = MMC_CAR(tmpMeta1);
      _c = ((modelica_integer) 1) + _c;

      /* Pattern-matching assignment */
      tmpMeta2 = _matching;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 3);
      _ass1 = tmpMeta3;
      _ass2 = tmpMeta4;
      _order = tmpMeta5;

      tmp6 = stringAppend(_OMC_LIT44,intString(_c));
      tmp7 = stringAppend(tmp6,_OMC_LIT45);
      fputs(omc_string_data(tmp7),stdout);

      tmp8 = stringAppend(_OMC_LIT46,stringDelimitList(omc_List_mapArray(threadData, _ass1, boxvar_intString), _OMC_LIT7));
      tmp9 = stringAppend(tmp8,_OMC_LIT10);
      fputs(omc_string_data(tmp9),stdout);

      tmp10 = stringAppend(_OMC_LIT39,stringDelimitList(omc_List_mapArray(threadData, _ass2, boxvar_intString), _OMC_LIT7));
      tmp11 = stringAppend(tmp10,_OMC_LIT10);
      fputs(omc_string_data(tmp11),stdout);

      tmp12 = stringAppend(_OMC_LIT47,stringDelimitList(omc_List_map(threadData, _order, boxvar_intString), _OMC_LIT7));
      tmp13 = stringAppend(tmp12,_OMC_LIT35);
      fputs(omc_string_data(tmp13),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_createTearingSets(threadData_t *threadData, modelica_metatype _tVarsIn, modelica_metatype _matchingList, modelica_metatype _vindx, modelica_metatype _eindex, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _tearingSetsIn)
{
  modelica_metatype _tearingSetsOut = NULL;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _tVars = NULL;
  modelica_metatype _residual = NULL;
  modelica_metatype _residual_coll = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _innerEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tearingSetsOut = _tearingSetsIn;
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _tVars has no default value.
  // _residual has no default value.
  // _residual_coll has no default value.
  // _order has no default value.
  // _innerEquations has no default value.
  {
    modelica_metatype _matching;
    for (tmpMeta1 = _matchingList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _matching = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _matching;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 3);
      _ass1 = tmpMeta3;
      _ass2 = tmpMeta4;
      _order = tmpMeta5;

      _residual = omc_Tearing_getUnassigned(threadData, _ass2);

      _residual_coll = omc_List_map1r(threadData, _residual, boxvar_arrayGet, _mapIncRowEqn);

      _residual_coll = omc_List_unique(threadData, _residual_coll);

      _tVars = omc_Tearing_selectFromList__rev(threadData, _vindx, _tVarsIn);

      _residual = omc_Tearing_selectFromList__rev(threadData, _eindex, _residual_coll);

      _innerEquations = omc_Tearing_assignInnerEquations(threadData, _order, _eindex, _vindx, _ass2, _mapEqnIncRow, mmc_mk_none());

      tmpMeta7 = omc_mk_box5(3, &BackendDAE_TearingSet_TEARINGSET__desc, _tVars, _residual, _innerEquations, _OMC_LIT41);
      tmpMeta6 = mmc_mk_cons(tmpMeta7, _tearingSetsOut);
      _tearingSetsOut = tmpMeta6;

      if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
      {
        tmp8 = stringAppend(_OMC_LIT48,stringDelimitList(omc_List_map(threadData, _tVarsIn, boxvar_intString), _OMC_LIT7));
        tmp9 = stringAppend(tmp8,_OMC_LIT10);
        fputs(omc_string_data(tmp9),stdout);

        tmp10 = stringAppend(_OMC_LIT49,stringDelimitList(omc_List_map(threadData, _residual_coll, boxvar_intString), _OMC_LIT7));
        tmp11 = stringAppend(tmp10,_OMC_LIT35);
        fputs(omc_string_data(tmp11),stdout);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tearingSetsOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_totalMatching(threadData_t *threadData, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _orderIn, modelica_metatype _causEqIn, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _me, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _visited, modelica_metatype _matchingListIn)
{
  modelica_metatype _matchingListOut = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _causEq = NULL;
  modelica_metatype _e_exp = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _unassigned = NULL;
  modelica_metatype _ass1Copy = NULL;
  modelica_metatype _ass2Copy = NULL;
  modelica_metatype _mCopy = NULL;
  modelica_metatype _mtCopy = NULL;
  modelica_boolean _solvable;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _matchingListOut = _matchingListIn;
  // _order has no default value.
  // _causEq has no default value.
  // _e_exp has no default value.
  // _vars has no default value.
  // _unassigned has no default value.
  // _ass1Copy has no default value.
  // _ass2Copy has no default value.
  // _mCopy has no default value.
  // _mtCopy has no default value.
  // _solvable has no default value.
  {
    modelica_metatype _e;
    for (tmpMeta1 = _causEqIn; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      _solvable = omc_Tearing_eqnSolvableCheck(threadData, omc_unbox_integer(_e), _mapEqnIncRow, _ass1, _m, _me ,&_e_exp ,&_vars);

      if((!_solvable))
      {
        continue;
      }
      else
      {
        _ass1Copy = arrayCopy(_ass1);

        _ass2Copy = arrayCopy(_ass2);

        _mCopy = arrayCopy(_m);

        _mtCopy = arrayCopy(_mt);

        omc_Tearing_makeAssignment(threadData, _e_exp, _vars, _ass1Copy, _ass2Copy, _mCopy, _mtCopy);

        tmpMeta2 = mmc_mk_cons(_e, _orderIn);
        _order = tmpMeta2;

        if(omc_UnorderedSet_contains(threadData, _ass1Copy, _visited))
        {
          continue;
        }

        omc_UnorderedSet_addNew(threadData, _ass1Copy, _visited);

        _causEq = omc_Tearing_traverseCollectiveEqnsforAssignable(threadData, _ass2Copy, _mCopy, _mapEqnIncRow);

        if(listEmpty(_causEq))
        {
          _unassigned = omc_Tearing_getUnassigned(threadData, _ass1Copy);

          if(listEmpty(_unassigned))
          {
            tmpMeta4 = omc_mk_box3(0, _ass1Copy, _ass2Copy, listReverse(_order));
            tmpMeta3 = mmc_mk_cons(tmpMeta4, _matchingListOut);
            _matchingListOut = tmpMeta3;
          }
        }
        else
        {
          _matchingListOut = omc_Tearing_totalMatching(threadData, _ass1Copy, _ass2Copy, _order, _causEq, _mCopy, _mtCopy, _me, _mapEqnIncRow, _mapIncRowEqn, _visited, _matchingListOut);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _matchingListOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getPowerSetElement(threadData_t *threadData, modelica_integer _i)
{
  modelica_metatype _powerSetElement = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _c;
  modelica_integer _e;
  modelica_integer _r;
  modelica_integer tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _powerSetElement = tmpMeta1;
  _c = ((modelica_integer) 0);
  _e = _i;
  // _r has no default value.
  while(1)
  {
    if(!(!(_e == ((modelica_integer) 0)))) break;
    _c = ((modelica_integer) 1) + _c;

    _r = modelica_integer_mod(_e, ((modelica_integer) 2));

    tmp2 = ((modelica_integer) 2);
    if (tmp2 == 0) {OMC_THROW_INTERNAL();}
    _e = modelica_div_integer(_e,tmp2).quot;

    if((_r == ((modelica_integer) 1)))
    {
      tmpMeta3 = mmc_mk_cons(omc_mk_integer(_c), _powerSetElement);
      _powerSetElement = tmpMeta3;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _powerSetElement;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getPowerSetElement(threadData_t *threadData, modelica_metatype _i)
{
  modelica_integer tmp1;
  modelica_metatype _powerSetElement = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_i);
  _powerSetElement = omc_Tearing_getPowerSetElement(threadData, tmp1);
  /* skip box _powerSetElement; list<#Integer> */
  return _powerSetElement;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_totalTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_boolean *out_outRunMatching)
{
  modelica_metatype _ocomp = NULL;
  modelica_boolean _outRunMatching;
  modelica_integer _size;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _tVars = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _causEq = NULL;
  modelica_metatype _unsolvables = NULL;
  modelica_metatype _discreteVars = NULL;
  modelica_metatype _subsyst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mLoop = NULL;
  modelica_metatype _mt = NULL;
  modelica_metatype _mtLoop = NULL;
  modelica_metatype _me = NULL;
  modelica_metatype _meT = NULL;
  modelica_metatype _DAEtype = NULL;
  modelica_metatype _tearingSets = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_boolean _linear;
  modelica_string _modelName = NULL;
  modelica_metatype _powerSet = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _matchingList = NULL;
  modelica_metatype _visited = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_string tmp19;
  modelica_string tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_string tmp25;
  modelica_string tmp26;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ocomp has no default value.
  // _outRunMatching has no default value.
  // _size has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _mapIncRowEqn has no default value.
  // _mapEqnIncRow has no default value.
  // _tVars has no default value.
  // _order has no default value.
  // _causEq has no default value.
  // _unsolvables has no default value.
  // _discreteVars has no default value.
  // _subsyst has no default value.
  // _vars has no default value.
  // _eqns has no default value.
  // _m has no default value.
  // _mLoop has no default value.
  // _mt has no default value.
  // _mtLoop has no default value.
  // _me has no default value.
  // _meT has no default value.
  // _DAEtype has no default value.
  // _tearingSets has no default value.
  // _eqn_lst has no default value.
  // _var_lst has no default value.
  // _linear has no default value.
  // _modelName has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _powerSet = tmpMeta1;
  // _matchingList has no default value.
  // _visited has no default value.
  _linear = omc_BackendDAEUtil_getLinearfromJacType(threadData, _jacType);

  /* Pattern-matching assignment */
  tmpMeta2 = _ishared;
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 15);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 17);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 3);
  _DAEtype = tmpMeta3;
  _modelName = tmpMeta5;

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT50),stdout);
  }

  _size = listLength(_vindx);

  _eqn_lst = omc_BackendEquation_getList(threadData, _eindex, omc_BackendEquation_getEqnsFromEqSystem(threadData, _isyst));

  _eqns = omc_BackendEquation_listEquation(threadData, _eqn_lst);

  _var_lst = omc_List_map1r(threadData, _vindx, boxvar_BackendVariable_getVarAt, omc_BackendVariable_daeVars(threadData, _isyst));

  _vars = omc_BackendVariable_listVar1(threadData, _var_lst);

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _subsyst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta6, _OMC_LIT12, omc_BackendEquation_emptyEqns(threadData));

  _subsyst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _subsyst, _OMC_LIT13, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,&_mt ,NULL ,NULL);

  _m = omc_Array_map(threadData, _m, boxvar_Tearing_deleteNegativeEntries);

  _mt = omc_Array_map(threadData, _mt, boxvar_Tearing_deleteNegativeEntries);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    fputs(omc_string_data(_OMC_LIT51),stdout);

    omc_BackendDump_printEqSystem(threadData, _subsyst);

    fputs(omc_string_data(_OMC_LIT52),stdout);
  }

  _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _subsyst, _ishared, 0 /* false */ ,&_meT ,&_mapEqnIncRow ,&_mapIncRowEqn);

  _unsolvables = omc_Tearing_getUnsolvableVars(threadData, _size, _meT);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    fputs(omc_string_data(_OMC_LIT31),stdout);

    omc_BackendDump_dumpAdjacencyMatrixEnhanced(threadData, _me);

    fputs(omc_string_data(_OMC_LIT32),stdout);

    omc_BackendDump_dumpAdjacencyMatrixTEnhanced(threadData, _meT);
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT33),stdout);

    omc_BackendDump_dumpAdjacencyMatrix(threadData, _mapEqnIncRow);

    tmp7 = stringAppend(_OMC_LIT34,stringDelimitList(omc_List_mapArray(threadData, _mapIncRowEqn, boxvar_intString), _OMC_LIT7));
    tmp8 = stringAppend(tmp7,_OMC_LIT35);
    fputs(omc_string_data(tmp8),stdout);

    tmp9 = stringAppend(_OMC_LIT36,stringDelimitList(omc_List_map(threadData, _unsolvables, boxvar_intString), _OMC_LIT7));
    tmp10 = stringAppend(tmp9,_OMC_LIT35);
    fputs(omc_string_data(tmp10),stdout);
  }

  _discreteVars = omc_Tearing_findDiscrete(threadData, _var_lst);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp11 = stringAppend(_OMC_LIT37,stringDelimitList(omc_List_map(threadData, _discreteVars, boxvar_intString), _OMC_LIT7));
    tmp12 = stringAppend(tmp11,_OMC_LIT35);
    fputs(omc_string_data(tmp12),stdout);
  }

  tmp14 = ((modelica_integer) -1) + omc_Util_intPow(threadData, ((modelica_integer) 2), _size); tmp15 = ((modelica_integer) -1); tmp16 = ((modelica_integer) 1);
  if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) -1) + omc_Util_intPow(threadData, ((modelica_integer) 2), _size); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
    {

      tmpMeta13 = mmc_mk_cons(omc_Tearing_getPowerSetElement(threadData, _i), _powerSet);
      _powerSet = tmpMeta13;
    }
  }

  if((omc_Flags_isSet(threadData, _OMC_LIT56) || omc_Flags_isSet(threadData, _OMC_LIT59)))
  {
    omc_BackendDump_dumpListList(threadData, _powerSet, _OMC_LIT53);
  }

  tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
  _tearingSets = tmpMeta17;

  if((omc_Flags_isSet(threadData, _OMC_LIT56) || omc_Flags_isSet(threadData, _OMC_LIT59)))
  {
    fputs(omc_string_data(_OMC_LIT60),stdout);
  }

  {
    modelica_metatype _tVars;
    for (tmpMeta18 = _powerSet; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
    {
      _tVars = MMC_CAR(tmpMeta18);
      if(omc_Flags_isSet(threadData, _OMC_LIT59))
      {
        tmp19 = stringAppend(_OMC_LIT61,stringDelimitList(omc_List_map(threadData, _tVars, boxvar_intString), _OMC_LIT7));
        tmp20 = stringAppend(tmp19,_OMC_LIT35);
        fputs(omc_string_data(tmp20),stdout);
      }

      _ass1 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

      _ass2 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

      tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
      _order = tmpMeta21;

      _mLoop = arrayCopy(_m);

      _mtLoop = arrayCopy(_mt);

      omc_Tearing_markTVarsOrResiduals(threadData, _tVars, _ass1);

      omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData, _mLoop, _mtLoop, _tVars);

      omc_Tearing_deleteRowsFromAdjacencyMatrix(threadData, _mtLoop, _tVars);

      _causEq = omc_Tearing_traverseCollectiveEqnsforAssignable(threadData, _ass2, _mLoop, _mapEqnIncRow);

      _visited = omc_UnorderedSet_new(threadData, boxvar_Array_hashIntArray, boxvar_Array_isEqual, ((modelica_integer) 13));

      tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
      _matchingList = omc_Tearing_totalMatching(threadData, _ass1, _ass2, _order, _causEq, _mLoop, _mtLoop, _me, _mapEqnIncRow, _mapIncRowEqn, _visited, tmpMeta22);

      if(omc_Flags_isSet(threadData, _OMC_LIT59))
      {
        omc_Tearing_dumpMatchingList(threadData, _matchingList);
      }

      _tearingSets = omc_Tearing_createTearingSets(threadData, _tVars, _matchingList, _vindx, _eindex, _mapEqnIncRow, _mapIncRowEqn, _tearingSets);
    }
  }

  if((omc_Flags_isSet(threadData, _OMC_LIT56) || omc_Flags_isSet(threadData, _OMC_LIT59)))
  {
    omc_Tearing_dumpTearingSetsGlobalIndexes(threadData, _tearingSets, _size);
  }

  tmpMeta24 = omc_mk_box5(10, &BackendDAE_StrongComponent_TORNSYSTEM__desc, listHead(_tearingSets), mmc_mk_none(), omc_mk_boolean(_linear), omc_mk_boolean(_mixedSystem));
  _ocomp = tmpMeta24;

  _outRunMatching = 1 /* true */;

  if((omc_Flags_isSet(threadData, _OMC_LIT56) || omc_Flags_isSet(threadData, _OMC_LIT59)))
  {
    tmp25 = stringAppend(_OMC_LIT62,intString(listLength(_tearingSets)));
    tmp26 = stringAppend(tmp25,_OMC_LIT35);
    fputs(omc_string_data(tmp26),stdout);
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT63),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  omc_ret_ = _ocomp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_totalTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype *out_outRunMatching)
{
  modelica_integer tmp1;
  modelica_boolean _outRunMatching;
  modelica_metatype _ocomp = NULL;
  tmp1 = omc_unbox_integer(_mixedSystem);
  _ocomp = omc_Tearing_totalTearing(threadData, _isyst, _ishared, _eindex, _vindx, _ojac, _jacType, tmp1, &_outRunMatching);
  /* skip box _ocomp; BackendDAE.StrongComponent */
  if (out_outRunMatching) { *out_outRunMatching = omc_mk_icon(_outRunMatching); }
  return _ocomp;
}

PROTECTED_FUNCTION_STATIC void omc_Tearing_dumpTearingSetsGlobalIndexes(threadData_t *threadData, modelica_metatype _tearingSets, modelica_integer _size)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _tearingSet;
    for (tmpMeta1 = _tearingSets; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _tearingSet = MMC_CAR(tmpMeta1);
      omc_Tearing_dumpTearingSetGlobalIndexes(threadData, _tearingSet, _size, _OMC_LIT42);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_Tearing_dumpTearingSetsGlobalIndexes(threadData_t *threadData, modelica_metatype _tearingSets, modelica_metatype _size)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_size);
  omc_Tearing_dumpTearingSetsGlobalIndexes(threadData, _tearingSets, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Tearing_dumpTearingSetGlobalIndexes(threadData_t *threadData, modelica_metatype _tearingSet, modelica_integer _size, modelica_string _setString)
{
  modelica_metatype _tVars = NULL;
  modelica_metatype _residuals = NULL;
  modelica_metatype _innerEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_string tmp6;
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
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tVars has no default value.
  // _residuals has no default value.
  // _innerEquations has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tearingSet;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 4);
  _tVars = tmpMeta2;
  _residuals = tmpMeta3;
  _innerEquations = tmpMeta4;

  tmp5 = stringAppend(_OMC_LIT64,_setString);
  tmp6 = stringAppend(tmp5,_OMC_LIT65);
  tmp7 = stringAppend(tmp6,intString(_size));
  tmp8 = stringAppend(tmp7,_OMC_LIT10);
  fputs(omc_string_data(tmp8),stdout);

  tmp9 = stringAppend(_OMC_LIT66,intString(listLength(_tVars)));
  tmp10 = stringAppend(tmp9,_OMC_LIT10);
  fputs(omc_string_data(tmp10),stdout);

  tmp11 = stringAppend(_OMC_LIT67,stringDelimitList(omc_List_map(threadData, listReverse(_tVars), boxvar_intString), _OMC_LIT7));
  tmp12 = stringAppend(tmp11,_OMC_LIT10);
  fputs(omc_string_data(tmp12),stdout);

  tmp13 = stringAppend(_OMC_LIT68,stringDelimitList(omc_List_map(threadData, _residuals, boxvar_intString), _OMC_LIT7));
  tmp14 = stringAppend(tmp13,_OMC_LIT10);
  fputs(omc_string_data(tmp14),stdout);

  tmp15 = stringAppend(_OMC_LIT69,stringDelimitList(omc_List_map(threadData, _innerEquations, boxvar_BackendDump_innerEquationString), _OMC_LIT70));
  tmp16 = stringAppend(tmp15,_OMC_LIT71);
  tmp17 = stringAppend(tmp16,_OMC_LIT72);
  tmp18 = stringAppend(tmp17,_OMC_LIT35);
  fputs(omc_string_data(tmp18),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_Tearing_dumpTearingSetGlobalIndexes(threadData_t *threadData, modelica_metatype _tearingSet, modelica_metatype _size, modelica_metatype _setString)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_size);
  omc_Tearing_dumpTearingSetGlobalIndexes(threadData, _tearingSet, tmp1, _setString);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Tearing_dumpTearingSetLocalIndexes(threadData_t *threadData, modelica_metatype _tVars, modelica_metatype _residuals, modelica_metatype _order, modelica_metatype _ass2, modelica_integer _size, modelica_metatype _mapEqnIncRow, modelica_metatype _vars, modelica_metatype _eqns, modelica_string _setString)
{
  modelica_metatype _s = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_string tmp16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  modelica_string tmp26;
  modelica_metatype tmpMeta27;
  modelica_string tmp35;
  modelica_string tmp36;
  modelica_string tmp37;
  modelica_string tmp38;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  tmp1 = stringAppend(_OMC_LIT64,_setString);
  tmp2 = stringAppend(tmp1,_OMC_LIT73);
  tmp3 = stringAppend(tmp2,intString(_size));
  tmp4 = stringAppend(tmp3,_OMC_LIT10);
  fputs(omc_string_data(tmp4),stdout);

  tmp5 = stringAppend(_OMC_LIT66,intString(listLength(_tVars)));
  tmp6 = stringAppend(tmp5,_OMC_LIT10);
  fputs(omc_string_data(tmp6),stdout);

  tmp7 = stringAppend(_OMC_LIT67,stringDelimitList(omc_List_map(threadData, listReverse(_tVars), boxvar_intString), _OMC_LIT7));
  tmp8 = stringAppend(tmp7,_OMC_LIT10);
  fputs(omc_string_data(tmp8),stdout);

  if(omc_Flags_isSet(threadData, _OMC_LIT78))
  {
    {
      modelica_metatype __omcQ_24tmpVar7;
      modelica_metatype* tmp10;
      modelica_metatype tmpMeta11;
      modelica_string tmp12;
      modelica_string tmp13;
      modelica_string tmp14;
      modelica_string __omcQ_24tmpVar6;
      modelica_integer tmp15;
      modelica_metatype _tVar_loopVar = 0;
      modelica_metatype _tVar;
      _tVar_loopVar = _tVars;
      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar7 = tmpMeta11; /* defaultValue */
      tmp10 = &__omcQ_24tmpVar7;
      while(1) {
        tmp15 = 1;
        if (!listEmpty(_tVar_loopVar)) {
          _tVar = MMC_CAR(_tVar_loopVar);
          _tVar_loopVar = MMC_CDR(_tVar_loopVar);
          tmp15--;
        }
        if (tmp15 == 0) {
          tmp12 = stringAppend(_OMC_LIT74,intString(omc_unbox_integer(_tVar)));
          tmp13 = stringAppend(tmp12,_OMC_LIT75);
          tmp14 = stringAppend(tmp13,omc_BackendDump_varString(threadData, omc_BackendVariable_getVarAt(threadData, _vars, omc_unbox_integer(_tVar))));
          __omcQ_24tmpVar6 = tmp14;
          *tmp10 = mmc_mk_cons(__omcQ_24tmpVar6,0);
          tmp10 = &MMC_CDR(*tmp10);
        } else if (tmp15 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp10 = mmc_mk_nil();
      tmpMeta9 = __omcQ_24tmpVar7;
    }
    _s = tmpMeta9;

    tmp16 = stringAppend(stringDelimitList(_s, _OMC_LIT10),_OMC_LIT10);
    fputs(omc_string_data(tmp16),stdout);
  }

  tmp17 = stringAppend(_OMC_LIT68,stringDelimitList(omc_List_map(threadData, _residuals, boxvar_intString), _OMC_LIT7));
  tmp18 = stringAppend(tmp17,_OMC_LIT10);
  fputs(omc_string_data(tmp18),stdout);

  if((omc_Flags_isSet(threadData, _OMC_LIT78) && omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    {
      modelica_metatype __omcQ_24tmpVar9;
      modelica_metatype* tmp20;
      modelica_metatype tmpMeta21;
      modelica_string tmp22;
      modelica_string tmp23;
      modelica_string tmp24;
      modelica_string __omcQ_24tmpVar8;
      modelica_integer tmp25;
      modelica_metatype _eqn_loopVar = 0;
      modelica_metatype _eqn;
      _eqn_loopVar = _residuals;
      tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar9 = tmpMeta21; /* defaultValue */
      tmp20 = &__omcQ_24tmpVar9;
      while(1) {
        tmp25 = 1;
        if (!listEmpty(_eqn_loopVar)) {
          _eqn = MMC_CAR(_eqn_loopVar);
          _eqn_loopVar = MMC_CDR(_eqn_loopVar);
          tmp25--;
        }
        if (tmp25 == 0) {
          tmp22 = stringAppend(_OMC_LIT74,intString(omc_unbox_integer(_eqn)));
          tmp23 = stringAppend(tmp22,_OMC_LIT75);
          tmp24 = stringAppend(tmp23,omc_BackendDump_equationString(threadData, omc_BackendEquation_get(threadData, _eqns, omc_unbox_integer(_eqn))));
          __omcQ_24tmpVar8 = tmp24;
          *tmp20 = mmc_mk_cons(__omcQ_24tmpVar8,0);
          tmp20 = &MMC_CDR(*tmp20);
        } else if (tmp25 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp20 = mmc_mk_nil();
      tmpMeta19 = __omcQ_24tmpVar9;
    }
    _s = tmpMeta19;

    tmp26 = stringAppend(stringDelimitList(_s, _OMC_LIT10),_OMC_LIT10);
    fputs(omc_string_data(tmp26),stdout);
  }

  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp28;
    modelica_metatype tmpMeta29;
    modelica_string tmp30;
    modelica_string tmp31;
    modelica_string tmp32;
    modelica_string tmp33;
    modelica_string __omcQ_24tmpVar10;
    modelica_integer tmp34;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _order;
    tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta29; /* defaultValue */
    tmp28 = &__omcQ_24tmpVar11;
    while(1) {
      tmp34 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp34--;
      }
      if (tmp34 == 0) {
        tmp30 = stringAppend(_OMC_LIT79,intString(omc_unbox_integer(_e)));
        tmp31 = stringAppend(tmp30,_OMC_LIT80);
        tmp32 = stringAppend(tmp31,stringDelimitList(omc_List_map(threadData, omc_List_map1r(threadData, arrayGet(_mapEqnIncRow,omc_unbox_integer(_e)) /* DAE.ASUB */, boxvar_arrayGet, _ass2), boxvar_intString), _OMC_LIT7));
        tmp33 = stringAppend(tmp32,_OMC_LIT81);
        __omcQ_24tmpVar10 = tmp33;
        *tmp28 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp28 = &MMC_CDR(*tmp28);
      } else if (tmp34 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp28 = mmc_mk_nil();
    tmpMeta27 = __omcQ_24tmpVar11;
  }
  _s = tmpMeta27;

  tmp35 = stringAppend(_OMC_LIT69,stringDelimitList(_s, _OMC_LIT70));
  tmp36 = stringAppend(tmp35,_OMC_LIT82);
  tmp37 = stringAppend(tmp36,_OMC_LIT72);
  tmp38 = stringAppend(tmp37,_OMC_LIT35);
  fputs(omc_string_data(tmp38),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_Tearing_dumpTearingSetLocalIndexes(threadData_t *threadData, modelica_metatype _tVars, modelica_metatype _residuals, modelica_metatype _order, modelica_metatype _ass2, modelica_metatype _size, modelica_metatype _mapEqnIncRow, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _setString)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_size);
  omc_Tearing_dumpTearingSetLocalIndexes(threadData, _tVars, _residuals, _order, _ass2, tmp1, _mapEqnIncRow, _vars, _eqns, _setString);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getUnassigned(threadData_t *threadData, modelica_metatype _ass)
{
  modelica_metatype _unassigned = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _unassigned = tmpMeta1;
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_ass);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {

      if((omc_unbox_integer(arrayGetNoBoundsChecking(_ass, _i)) < ((modelica_integer) 0)))
      {
        tmpMeta2 = mmc_mk_cons(omc_mk_integer(_i), _unassigned);
        _unassigned = tmpMeta2;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _unassigned;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_recursiveTearingReplace(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inSourceExp, modelica_metatype _inTargetExp, modelica_boolean _isDer)
{
  modelica_metatype _res = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  if(_isDer)
  {
    _res = omc_Expression_crefExp(threadData, _inSourceExp);

    _res = omc_Expression_expDer(threadData, _res);

    _res = omc_Expression_replaceExp(threadData, _inExp, _res, _inTargetExp, NULL);
  }
  else
  {
    _res = omc_Expression_replaceCrefBottomUp(threadData, _inExp, _inSourceExp, _inTargetExp);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_recursiveTearingReplace(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inSourceExp, modelica_metatype _inTargetExp, modelica_metatype _isDer)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = omc_unbox_integer(_isDer);
  _res = omc_Tearing_recursiveTearingReplace(threadData, _inExp, _inSourceExp, _inTargetExp, tmp1);
  /* skip box _res; DAE.Exp */
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_recursiveTearingHelper(threadData_t *threadData, modelica_metatype _rhs1, modelica_metatype _tear_exp, modelica_integer _m)
{
  modelica_metatype _sumRhs = NULL;
  modelica_integer _k;
  modelica_metatype _e = NULL;
  modelica_metatype _rhs = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sumRhs = omc_Expression_makeConstZeroE(threadData, _rhs1);
  // _k has no default value.
  // _e has no default value.
  _rhs = _rhs1;
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _m;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _k;
    for(_k = ((modelica_integer) 1); in_range_integer(_k, tmp1, tmp3); _k += tmp2)
    {

      _e = omc_ExpressionSolve_collectX(threadData, _rhs, arrayGet(_tear_exp, _k), 1 /* true */ ,&_rhs);

      _sumRhs = omc_Expression_expAdd(threadData, _e, _sumRhs);
    }
  }

  _sumRhs = omc_Expression_expAdd(threadData, _rhs, _sumRhs);

  _sumRhs = omc_ExpressionSimplify_simplify(threadData, _sumRhs, NULL);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sumRhs;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_recursiveTearingHelper(threadData_t *threadData, modelica_metatype _rhs1, modelica_metatype _tear_exp, modelica_metatype _m)
{
  modelica_integer tmp1;
  modelica_metatype _sumRhs = NULL;
  tmp1 = omc_unbox_integer(_m);
  _sumRhs = omc_Tearing_recursiveTearingHelper(threadData, _rhs1, _tear_exp, tmp1);
  /* skip box _sumRhs; DAE.Exp */
  return _sumRhs;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_isTornsystem(threadData_t *threadData, modelica_metatype _comp, modelica_boolean _getLin, modelica_boolean _getNoLin)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      modelica_boolean _linear;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _linear has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 4);
          tmp7 = omc_unbox_integer(tmpMeta6);
          
          _linear = tmp7  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((!_linear == !_getLin) || (!_getNoLin == !(!_linear)))) goto tmp3_end;
          tmp1 = 1 /* true */;
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_isTornsystem(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _getLin, modelica_metatype _getNoLin)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = omc_unbox_integer(_getLin);
  tmp2 = omc_unbox_integer(_getNoLin);
  _res = omc_Tearing_isTornsystem(threadData, _comp, tmp1, tmp2);
  out_res = omc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_recursiveTearingCollect(threadData_t *threadData, modelica_metatype _tear_exp, modelica_metatype _inExp)
{
  modelica_metatype _outExp = NULL;
  modelica_integer _k;
  modelica_metatype _lhs = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _k has no default value.
  // _lhs has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  _e1 = omc_ExpressionSolve_collectX(threadData, _inExp, arrayGet(_tear_exp, ((modelica_integer) 1)), 1 /* true */ ,&_e2);

  tmp1 = ((modelica_integer) 2); tmp2 = 1; tmp3 = arrayLength(_tear_exp);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _k;
    for(_k = ((modelica_integer) 2); in_range_integer(_k, tmp1, tmp3); _k += tmp2)
    {

      _lhs = omc_ExpressionSolve_collectX(threadData, _e2, arrayGet(_tear_exp, _k), 1 /* true */ ,&_e2);

      _e1 = omc_Expression_expAdd(threadData, _e1, _lhs);
    }
  }

  _outExp = omc_Expression_expAdd(threadData, _e2, _e1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outExp;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_recursiveTearingMain(threadData_t *threadData, modelica_metatype _inDAE, modelica_boolean *out_update)
{
  modelica_metatype _outDAE = NULL;
  modelica_boolean _update;
  modelica_metatype _systlst_new = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _shared = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _stateSets = NULL;
  modelica_metatype _partitionKind = NULL;
  modelica_metatype _innerEquations = NULL;
  modelica_metatype _innerEquation = NULL;
  modelica_integer _eqindex;
  modelica_integer _vindex;
  modelica_metatype _residualequations = NULL;
  modelica_metatype _tearingvars = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _tear_cr = NULL;
  modelica_metatype _tear_cr_lst = NULL;
  modelica_metatype _all_vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _tear_exp = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _eqn1 = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs1 = NULL;
  modelica_metatype _sumRhs = NULL;
  modelica_metatype _sumLhs = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _res = NULL;
  modelica_integer _n;
  modelica_integer _i;
  modelica_integer _j;
  modelica_integer _m;
  modelica_integer _index;
  modelica_metatype _optarr = NULL;
  modelica_metatype _optarr_res = NULL;
  modelica_metatype _indx_res = NULL;
  modelica_metatype _indx_eq = NULL;
  modelica_metatype _indx_var = NULL;
  modelica_boolean _tmp_update;
  modelica_boolean _isDer;
  modelica_metatype _mm = NULL;
  modelica_boolean _maxSizeOne;
  modelica_metatype _loopT = NULL;
  modelica_metatype _noLoopT = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_integer tmp24;
  modelica_integer tmp25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_string tmp29;
  modelica_string tmp30;
  modelica_string tmp31;
  modelica_string tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_integer tmp44;
  modelica_integer tmp45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_integer tmp49;
  modelica_string tmp50;
  modelica_string tmp51;
  modelica_string tmp52;
  modelica_string tmp53;
  modelica_integer tmp54;
  modelica_integer tmp55;
  modelica_integer tmp56;
  modelica_metatype tmpMeta57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  modelica_metatype tmpMeta60;
  modelica_metatype tmpMeta61;
  modelica_metatype tmpMeta62;
  modelica_metatype tmpMeta63;
  modelica_integer tmp64;
  modelica_integer tmp65;
  modelica_integer tmp66;
  modelica_metatype tmpMeta67;
  modelica_metatype tmpMeta68;
  modelica_metatype tmpMeta69;
  modelica_metatype tmpMeta70;
  modelica_metatype tmpMeta71;
  modelica_metatype tmpMeta72;
  modelica_metatype tmpMeta73;
  modelica_metatype tmpMeta74;
  modelica_integer tmp75;
  modelica_integer tmp76;
  modelica_integer tmp77;
  modelica_integer tmp78;
  modelica_integer tmp79;
  modelica_integer tmp80;
  modelica_metatype tmpMeta81;
  modelica_metatype tmpMeta82;
  modelica_string tmp83;
  modelica_string tmp84;
  modelica_string tmp85;
  modelica_string tmp86;
  modelica_integer tmp87;
  modelica_integer tmp88;
  modelica_integer tmp89;
  modelica_metatype tmpMeta90;
  modelica_metatype tmpMeta91;
  modelica_string tmp92;
  modelica_string tmp93;
  modelica_string tmp94;
  modelica_string tmp95;
  modelica_integer tmp96;
  modelica_integer tmp97;
  modelica_integer tmp98;
  modelica_string tmp99;
  modelica_string tmp100;
  modelica_string tmp101;
  modelica_string tmp102;
  modelica_integer tmp103;
  modelica_integer tmp104;
  modelica_integer tmp105;
  modelica_metatype tmpMeta106;
  modelica_metatype tmpMeta107;
  modelica_metatype tmpMeta108;
  modelica_metatype tmpMeta109;
  modelica_metatype tmpMeta110;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  _update = 0 /* false */;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _systlst_new = tmpMeta1;
  // _shared has no default value.
  // _funcs has no default value.
  // _vars has no default value.
  // _globalKnownVars has no default value.
  // _comps has no default value.
  // _eqns has no default value.
  // _stateSets has no default value.
  // _partitionKind has no default value.
  // _innerEquations has no default value.
  // _innerEquation has no default value.
  // _eqindex has no default value.
  // _vindex has no default value.
  // _residualequations has no default value.
  // _tearingvars has no default value.
  // _var_lst has no default value.
  // _var has no default value.
  // _tear_cr has no default value.
  // _tear_cr_lst has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _all_vars = tmpMeta2;
  // _tear_exp has no default value.
  // _cr has no default value.
  // _eqn has no default value.
  // _eqn1 has no default value.
  // _rhs has no default value.
  // _lhs has no default value.
  // _rhs1 has no default value.
  // _sumRhs has no default value.
  // _sumLhs has no default value.
  // _e has no default value.
  // _res has no default value.
  // _n has no default value.
  // _i has no default value.
  // _j has no default value.
  // _m has no default value.
  _index = ((modelica_integer) 1);
  // _optarr has no default value.
  // _optarr_res has no default value.
  // _indx_res has no default value.
  // _indx_eq has no default value.
  // _indx_var has no default value.
  // _tmp_update has no default value.
  // _isDer has no default value.
  // _mm has no default value.
  _maxSizeOne = (omc_Flags_getConfigInt(threadData, _OMC_LIT101) == ((modelica_integer) 1));
  // _loopT has no default value.
  // _noLoopT has no default value.
  _shared = (OMC_BOX_FIELD(_inDAE, 3));

  /* Pattern-matching assignment */
  tmpMeta3 = _shared;
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 2);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta3, 12);
  _globalKnownVars = tmpMeta4;
  _funcs = tmpMeta5;

  {
    modelica_metatype _syst;
    for (tmpMeta6 = (OMC_BOX_FIELD(_inDAE, 2)); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _syst = MMC_CAR(tmpMeta6);
      /* Pattern-matching assignment */
      tmpMeta7 = _syst;
      tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 2);
      tmpMeta9 = OMC_BOX_FIELD(tmpMeta7, 3);
      tmpMeta10 = OMC_BOX_FIELD(tmpMeta7, 7);
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,3) == 0) OMC_THROW_INTERNAL();
      tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 4);
      tmpMeta12 = OMC_BOX_FIELD(tmpMeta7, 8);
      tmpMeta13 = OMC_BOX_FIELD(tmpMeta7, 9);
      _vars = tmpMeta8;
      _eqns = tmpMeta9;
      _comps = tmpMeta11;
      _stateSets = tmpMeta12;
      _partitionKind = tmpMeta13;

      omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _syst, _OMC_LIT102, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,&_mm ,NULL);

      _tmp_update = 0 /* false */;

      {
        modelica_metatype _comp;
        for (tmpMeta14 = _comps; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
        {
          _comp = MMC_CAR(tmpMeta14);
          if(omc_Tearing_isTornsystem(threadData, _comp, 1 /* true */, 0 /* false */))
          {
            /* Pattern-matching assignment */
            tmpMeta15 = _comp;
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,7,4) == 0) OMC_THROW_INTERNAL();
            tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
            tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 2);
            tmpMeta18 = OMC_BOX_FIELD(tmpMeta16, 3);
            tmpMeta19 = OMC_BOX_FIELD(tmpMeta16, 4);
            _tearingvars = tmpMeta17;
            _residualequations = tmpMeta18;
            _innerEquations = tmpMeta19;

            _n = listLength(_innerEquations);

            _m = listLength(_residualequations);

            if((_maxSizeOne && (_m > ((modelica_integer) 1))))
            {
              continue;
            }

            _indx_res = arrayCreate(_m, omc_mk_integer(((modelica_integer) 0)));

            _indx_var = arrayCreate(_n, omc_mk_integer(((modelica_integer) 0)));

            _indx_eq = arrayCreate(_n, omc_mk_integer(((modelica_integer) 0)));

            _i = ((modelica_integer) 1);

            _optarr = arrayCreate(_n, mmc_mk_none());

            _update = 1 /* true */;

            _tmp_update = 1 /* true */;

            {
              modelica_metatype _innerEquation;
              for (tmpMeta20 = _innerEquations; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
              {
                _innerEquation = MMC_CAR(tmpMeta20);
                /* Pattern-matching tuple assignment */
                tmp25 = omc_BackendDAEUtil_getEqnAndVarsFromInnerEquation(threadData, _innerEquation, &tmpMeta21, NULL);
                _eqindex = tmp25;
                if (listEmpty(tmpMeta21)) OMC_THROW_INTERNAL();
                tmpMeta22 = MMC_CAR(tmpMeta21);
                tmpMeta23 = MMC_CDR(tmpMeta21);
                tmp24 = omc_unbox_integer(tmpMeta22);
                if (!listEmpty(tmpMeta23)) OMC_THROW_INTERNAL();
                _vindex = tmp24  /* pattern as ty=Integer */;

                /* Pattern-matching assignment */
                tmpMeta26 = omc_BackendVariable_getVarAt(threadData, _vars, _vindex);
                tmpMeta27 = OMC_BOX_FIELD(tmpMeta26, 2);
                _var = tmpMeta26;
                _cr = tmpMeta27;

                tmpMeta28 = mmc_mk_cons(_cr, _all_vars);
                _all_vars = tmpMeta28;

                arrayUpdate(_indx_var, _i, omc_mk_integer(_vindex));

                _eqn = omc_BackendEquation_get(threadData, _eqns, _eqindex);

                if(omc_BackendVariable_isStateVar(threadData, _var))
                {
                  _eqn = omc_BackendEquation_solveEquation(threadData, _eqn, omc_Expression_expDer(threadData, omc_Expression_crefExp(threadData, _cr)), mmc_mk_some(_funcs));
                }
                else
                {
                  _eqn = omc_BackendEquation_solveEquation(threadData, _eqn, omc_Expression_crefExp(threadData, _cr), mmc_mk_some(_funcs));
                }

                arrayUpdate(_optarr, _i, mmc_mk_some(_eqn));

                _eqns = omc_BackendEquation_setAtIndex(threadData, _eqns, _eqindex, _eqn);

                arrayUpdate(_indx_eq, _i, omc_mk_integer(_eqindex));

                _i = ((modelica_integer) 1) + _i;

                if(omc_Flags_isSet(threadData, _OMC_LIT108))
                {
                  tmp29 = stringAppend(_OMC_LIT103,omc_BackendDump_equationString(threadData, _eqn));
                  tmp30 = stringAppend(tmp29,_OMC_LIT104);
                  tmp31 = stringAppend(tmp30,intString(((modelica_integer) -1) + _i));
                  tmp32 = stringAppend(tmp31,_OMC_LIT105);
                  fputs(omc_string_data(tmp32),stdout);
                }
              }
            }

            {
              modelica_metatype __omcQ_24tmpVar13;
              modelica_metatype* tmp35;
              modelica_metatype tmpMeta36;
              modelica_metatype __omcQ_24tmpVar12;
              modelica_integer tmp37;
              modelica_metatype _i_loopVar = 0;
              modelica_metatype _i;
              _i_loopVar = _tearingvars;
              tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar13 = tmpMeta36; /* defaultValue */
              tmp35 = &__omcQ_24tmpVar13;
              while(1) {
                tmp37 = 1;
                if (!listEmpty(_i_loopVar)) {
                  _i = MMC_CAR(_i_loopVar);
                  _i_loopVar = MMC_CDR(_i_loopVar);
                  tmp37--;
                }
                if (tmp37 == 0) {
                  __omcQ_24tmpVar12 = omc_BackendVariable_getVarAt(threadData, _vars, omc_unbox_integer(_i));
                  *tmp35 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                  tmp35 = &MMC_CDR(*tmp35);
                } else if (tmp37 == 1) {
                  break;
                } else {
                  OMC_THROW_INTERNAL();
                }
              }
              *tmp35 = mmc_mk_nil();
              tmpMeta34 = __omcQ_24tmpVar13;
            }
            _var_lst = tmpMeta34;

            {
              modelica_metatype __omcQ_24tmpVar15;
              modelica_metatype* tmp39;
              modelica_metatype tmpMeta40;
              modelica_metatype __omcQ_24tmpVar14;
              modelica_integer tmp41;
              modelica_metatype _vv_loopVar = 0;
              modelica_metatype _vv;
              _vv_loopVar = _var_lst;
              tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar15 = tmpMeta40; /* defaultValue */
              tmp39 = &__omcQ_24tmpVar15;
              while(1) {
                tmp41 = 1;
                if (!listEmpty(_vv_loopVar)) {
                  _vv = MMC_CAR(_vv_loopVar);
                  _vv_loopVar = MMC_CDR(_vv_loopVar);
                  tmp41--;
                }
                if (tmp41 == 0) {
                  __omcQ_24tmpVar14 = omc_BackendVariable_varCref(threadData, _vv);
                  *tmp39 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                  tmp39 = &MMC_CDR(*tmp39);
                } else if (tmp41 == 1) {
                  break;
                } else {
                  OMC_THROW_INTERNAL();
                }
              }
              *tmp39 = mmc_mk_nil();
              tmpMeta38 = __omcQ_24tmpVar15;
            }
            _tear_cr_lst = tmpMeta38;

            _tear_cr = listArray(_tear_cr_lst);

            _all_vars = listAppend(_tear_cr_lst, _all_vars);

            _tear_exp = arrayCreate(_m, _OMC_LIT110);

            _i = ((modelica_integer) 1);

            {
              modelica_metatype _tcr;
              for (tmpMeta42 = _tear_cr, tmp45 = arrayLength(tmpMeta42), tmp44 = 1; tmp44 <= tmp45; tmp44++)
              {
                _tcr = arrayGet(tmpMeta42,tmp44);
                arrayUpdate(_tear_exp, _i, omc_Expression_crefExp(threadData, _tcr));

                _i = ((modelica_integer) 1) + _i;
              }
            }

            _optarr_res = arrayCreate(_m, mmc_mk_none());

            tmp54 = ((modelica_integer) 1); tmp55 = 1; tmp56 = _m;
            if(!(((tmp55 > 0) && (tmp54 > tmp56)) || ((tmp55 < 0) && (tmp54 < tmp56))))
            {
              modelica_integer _i;
              for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp54, tmp56); _i += tmp55)
              {

                /* Pattern-matching assignment */
                tmpMeta46 = _residualequations;
                if (listEmpty(tmpMeta46)) OMC_THROW_INTERNAL();
                tmpMeta47 = MMC_CAR(tmpMeta46);
                tmpMeta48 = MMC_CDR(tmpMeta46);
                tmp49 = omc_unbox_integer(tmpMeta47);
                _eqindex = tmp49  /* pattern as ty=Integer */;
                _residualequations = tmpMeta48;

                arrayUpdate(_indx_res, _i, omc_mk_integer(_eqindex));

                _eqn = omc_BackendEquation_get(threadData, _eqns, _eqindex);

                if(omc_Flags_isSet(threadData, _OMC_LIT108))
                {
                  tmp50 = stringAppend(_OMC_LIT111,omc_BackendDump_equationString(threadData, _eqn));
                  tmp51 = stringAppend(tmp50,_OMC_LIT104);
                  tmp52 = stringAppend(tmp51,intString(_i));
                  tmp53 = stringAppend(tmp52,_OMC_LIT105);
                  fputs(omc_string_data(tmp53),stdout);
                }

                arrayUpdate(_optarr_res, _i, mmc_mk_some(_eqn));
              }
            }

            tmp78 = ((modelica_integer) 1); tmp79 = 1; tmp80 = _n;
            if(!(((tmp79 > 0) && (tmp78 > tmp80)) || ((tmp79 < 0) && (tmp78 < tmp80))))
            {
              modelica_integer _i;
              for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp78, tmp80); _i += tmp79)
              {

                /* Pattern-matching assignment */
                tmpMeta57 = arrayGet(_optarr, _i);
                if (optionNone(tmpMeta57)) OMC_THROW_INTERNAL();
                tmpMeta58 = OMC_BOX_FIELD(tmpMeta57, 1);
                _eqn = tmpMeta58;

                _rhs = omc_BackendEquation_getEquationRHS(threadData, _eqn);

                _lhs = omc_BackendEquation_getEquationLHS(threadData, _eqn);

                _cr = omc_Expression_expOrDerCref(threadData, _lhs ,&_isDer);

                tmp64 = ((modelica_integer) 1) + _i; tmp65 = 1; tmp66 = _n;
                if(!(((tmp65 > 0) && (tmp64 > tmp66)) || ((tmp65 < 0) && (tmp64 < tmp66))))
                {
                  modelica_integer _j;
                  for(_j = ((modelica_integer) 1) + _i; in_range_integer(_j, tmp64, tmp66); _j += tmp65)
                  {

                    if(listMember(arrayGet(_indx_var, _i), arrayGet(_mm, omc_unbox_integer(arrayGet(_indx_eq, _j)))))
                    {
                      /* Pattern-matching assignment */
                      tmpMeta59 = arrayGet(_optarr, _j);
                      if (optionNone(tmpMeta59)) OMC_THROW_INTERNAL();
                      tmpMeta60 = OMC_BOX_FIELD(tmpMeta59, 1);
                      _eqn1 = tmpMeta60;

                      _rhs1 = omc_BackendEquation_getEquationRHS(threadData, _eqn1);

                      _rhs1 = omc_Tearing_recursiveTearingReplace(threadData, _rhs1, _cr, _rhs, _isDer);

                      _rhs1 = omc_Tearing_recursiveTearingCollect(threadData, _tear_exp, _rhs1);

                      tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta62 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
                      _index = omc_BackendDAEOptimize_simplifyLoopExp(threadData, _index, _vars, _eqns, _shared, _all_vars, _rhs1, tmpMeta61, tmpMeta62, 1 /* true */, 1 /* true */, ((modelica_integer) -1), tmpMeta63, _OMC_LIT112, 0 /* false */ ,&_vars ,&_eqns ,&_shared ,NULL ,&_e ,NULL ,NULL ,NULL);

                      _eqn1 = omc_BackendEquation_setEquationRHS(threadData, _eqn1, _e);

                      arrayUpdate(_optarr, _j, mmc_mk_some(_eqn1));
                    }
                  }
                }

                tmp75 = ((modelica_integer) 1); tmp76 = 1; tmp77 = _m;
                if(!(((tmp76 > 0) && (tmp75 > tmp77)) || ((tmp76 < 0) && (tmp75 < tmp77))))
                {
                  modelica_integer _j;
                  for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp75, tmp77); _j += tmp76)
                  {

                    if(listMember(arrayGet(_indx_var, _i), arrayGet(_mm, omc_unbox_integer(arrayGet(_indx_res, _j)))))
                    {
                      /* Pattern-matching assignment */
                      tmpMeta67 = arrayGet(_optarr_res, _j);
                      if (optionNone(tmpMeta67)) OMC_THROW_INTERNAL();
                      tmpMeta68 = OMC_BOX_FIELD(tmpMeta67, 1);
                      _eqn1 = tmpMeta68;

                      _res = omc_BackendDAEOptimize_makeEquationToResidualExp(threadData, _eqn1);

                      _res = omc_Tearing_recursiveTearingCollect(threadData, _tear_exp, _res);

                      _loopT = omc_BackendDAEOptimize_simplifyLoops__SplitTerms(threadData, _all_vars, _res ,&_noLoopT);

                      _sumRhs = omc_Expression_makeSum1(threadData, _noLoopT, 1 /* true */);

                      _sumLhs = omc_Expression_makeSum1(threadData, _loopT, 1 /* true */);

                      _sumRhs = omc_Tearing_recursiveTearingReplace(threadData, _sumRhs, _cr, _rhs, _isDer);

                      _sumLhs = omc_Tearing_recursiveTearingReplace(threadData, _sumLhs, _cr, _rhs, _isDer);

                      _sumRhs = omc_Tearing_recursiveTearingCollect(threadData, _tear_exp, _sumRhs);

                      _sumLhs = omc_Tearing_recursiveTearingCollect(threadData, _tear_exp, _sumLhs);

                      _sumRhs = omc_ExpressionSimplify_simplify(threadData, _sumRhs, NULL);

                      tmpMeta69 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta70 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta71 = MMC_REFSTRUCTLIT(mmc_nil);
                      _index = omc_BackendDAEOptimize_simplifyLoopExp(threadData, _index, _vars, _eqns, _shared, _all_vars, _sumRhs, tmpMeta69, tmpMeta70, 1 /* true */, 1 /* true */, ((modelica_integer) -1), tmpMeta71, _OMC_LIT112, 0 /* false */ ,&_vars ,&_eqns ,&_shared ,NULL ,&_sumRhs ,NULL ,NULL ,NULL);

                      _eqn1 = omc_BackendEquation_setEquationRHS(threadData, _eqn1, omc_Expression_negate(threadData, _sumRhs));

                      _sumLhs = omc_ExpressionSimplify_simplify(threadData, _sumLhs, NULL);

                      tmpMeta72 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta73 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta74 = MMC_REFSTRUCTLIT(mmc_nil);
                      _index = omc_BackendDAEOptimize_simplifyLoopExp(threadData, _index, _vars, _eqns, _shared, _all_vars, _sumLhs, tmpMeta72, tmpMeta73, 1 /* true */, 1 /* true */, ((modelica_integer) -1), tmpMeta74, _OMC_LIT112, 0 /* false */ ,&_vars ,&_eqns ,&_shared ,NULL ,&_sumLhs ,NULL ,NULL ,NULL);

                      _eqn1 = omc_BackendEquation_setEquationLHS(threadData, _eqn1, _sumLhs);

                      arrayUpdate(_optarr_res, _j, mmc_mk_some(_eqn1));
                    }
                  }
                }
              }
            }

            tmp87 = ((modelica_integer) 1); tmp88 = 1; tmp89 = _n;
            if(!(((tmp88 > 0) && (tmp87 > tmp89)) || ((tmp88 < 0) && (tmp87 < tmp89))))
            {
              modelica_integer _i;
              for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp87, tmp89); _i += tmp88)
              {

                _eqindex = omc_unbox_integer(arrayGet(_indx_eq, _i));

                /* Pattern-matching assignment */
                tmpMeta81 = arrayGet(_optarr, _i);
                if (optionNone(tmpMeta81)) OMC_THROW_INTERNAL();
                tmpMeta82 = OMC_BOX_FIELD(tmpMeta81, 1);
                _eqn = tmpMeta82;

                _eqns = omc_BackendEquation_setAtIndex(threadData, _eqns, _eqindex, _eqn);

                if(omc_Flags_isSet(threadData, _OMC_LIT108))
                {
                  tmp83 = stringAppend(_OMC_LIT113,omc_BackendDump_equationString(threadData, _eqn));
                  tmp84 = stringAppend(tmp83,_OMC_LIT104);
                  tmp85 = stringAppend(tmp84,intString(((modelica_integer) -1) + _i));
                  tmp86 = stringAppend(tmp85,_OMC_LIT105);
                  fputs(omc_string_data(tmp86),stdout);
                }
              }
            }

            tmp96 = ((modelica_integer) 1); tmp97 = 1; tmp98 = _m;
            if(!(((tmp97 > 0) && (tmp96 > tmp98)) || ((tmp97 < 0) && (tmp96 < tmp98))))
            {
              modelica_integer _i;
              for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp96, tmp98); _i += tmp97)
              {

                _eqindex = omc_unbox_integer(arrayGet(_indx_res, _i));

                /* Pattern-matching assignment */
                tmpMeta90 = arrayGet(_optarr_res, _i);
                if (optionNone(tmpMeta90)) OMC_THROW_INTERNAL();
                tmpMeta91 = OMC_BOX_FIELD(tmpMeta90, 1);
                _eqn = tmpMeta91;

                _eqns = omc_BackendEquation_setAtIndex(threadData, _eqns, _eqindex, _eqn);

                if(omc_Flags_isSet(threadData, _OMC_LIT108))
                {
                  tmp92 = stringAppend(_OMC_LIT114,omc_BackendDump_equationString(threadData, _eqn));
                  tmp93 = stringAppend(tmp92,_OMC_LIT104);
                  tmp94 = stringAppend(tmp93,intString(((modelica_integer) -1) + _i));
                  tmp95 = stringAppend(tmp94,_OMC_LIT105);
                  fputs(omc_string_data(tmp95),stdout);
                }
              }
            }

            if(omc_Flags_isSet(threadData, _OMC_LIT108))
            {
              fputs(omc_string_data(_OMC_LIT115),stdout);

              tmp103 = ((modelica_integer) 1); tmp104 = 1; tmp105 = _m;
              if(!(((tmp104 > 0) && (tmp103 > tmp105)) || ((tmp104 < 0) && (tmp103 < tmp105))))
              {
                modelica_integer _i;
                for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp103, tmp105); _i += tmp104)
                {

                  tmp99 = stringAppend(_OMC_LIT116,omc_ExpressionBasics_printExpStr(threadData, arrayGet(_tear_exp, _i)));
                  tmp100 = stringAppend(tmp99,_OMC_LIT104);
                  tmp101 = stringAppend(tmp100,intString(((modelica_integer) -1) + _i));
                  tmp102 = stringAppend(tmp101,_OMC_LIT105);
                  fputs(omc_string_data(tmp102),stdout);
                }
              }

              fputs(omc_string_data(_OMC_LIT115),stdout);
            }
          }
        }
      }

      if(_tmp_update)
      {
        tmpMeta107 = mmc_mk_cons(omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, _stateSets, _partitionKind, omc_BackendEquation_emptyEqns(threadData)), _systlst_new);
        _systlst_new = tmpMeta107;
      }
      else
      {
        tmpMeta108 = mmc_mk_cons(_syst, _systlst_new);
        _systlst_new = tmpMeta108;
      }
    }
  }

  if(_update)
  {
    tmpMeta110 = omc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systlst_new, _shared);
    _outDAE = tmpMeta110;

    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp113;
        int tmp114;
        tmp113 = 0;
        OMC_TRY_INTERNAL(mmc_jumper)
        tmp112_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp113 < 2; tmp113++) {
          switch (MMC_SWITCH_CAST(tmp113)) {
          case 0: {
            /* Pattern matching succeeded */
            _outDAE = omc_BackendDAEUtil_transformBackendDAE(threadData, _outDAE, _OMC_LIT120, mmc_mk_none(), mmc_mk_none());
            goto tmp112_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            _update = 0 /* false */;
            goto tmp112_done;
          }
          }
          goto tmp112_end;
          tmp112_end: ;
        }
        goto goto_111;
        tmp112_done:
        (void)tmp113;
        OMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp112_done2;
        goto_111:;
        OMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp113 < 2) {
          goto tmp112_top;
        }
        OMC_THROW_INTERNAL();
        tmp112_done2:;
      }
    }
    ;
  }
  else
  {
    _outDAE = _inDAE;
  }
  _return: OMC_LABEL_UNUSED
  if (out_update) { *out_update = _update; }
  omc_ret_ = _outDAE;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_recursiveTearingMain(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype *out_update)
{
  modelica_boolean _update;
  modelica_metatype _outDAE = NULL;
  _outDAE = omc_Tearing_recursiveTearingMain(threadData, _inDAE, &_update);
  /* skip box _outDAE; BackendDAE.BackendDAE */
  if (out_update) { *out_update = omc_mk_icon(_update); }
  return _outDAE;
}

DLLModelDirection
modelica_metatype omc_Tearing_recursiveTearing(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_boolean _con;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _con has no default value.
  if((omc_Flags_getConfigInt(threadData, _OMC_LIT101) > ((modelica_integer) 0)))
  {
    _outDAE = omc_Tearing_recursiveTearingMain(threadData, _inDAE ,&_con);

    while(1)
    {
      if(!_con) break;
      _outDAE = omc_Tearing_tearingSystem(threadData, _outDAE);

      _outDAE = omc_Tearing_recursiveTearingMain(threadData, _outDAE ,&_con);
    }
  }
  else
  {
    _outDAE = _inDAE;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outDAE;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findNEntries(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_integer _num)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _length;
  modelica_metatype _row = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _length has no default value.
  // _row has no default value.
  {
    modelica_metatype _sel;
    for (tmpMeta2 = _inSelect; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _sel = MMC_CAR(tmpMeta2);
      _row = arrayGet(_mtIn, omc_unbox_integer(_sel));

      _length = listLength(_row);

      if((_num == _length))
      {
        tmpMeta3 = mmc_mk_cons(_sel, _outList);
        _outList = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outList;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_findNEntries(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype _num)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_num);
  _outList = omc_Tearing_findNEntries(threadData, _mtIn, _inSelect, tmp1);
  /* skip box _outList; list<#Integer> */
  return _outList;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getVarOccurringInMostEquations(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype *out_outLst)
{
  modelica_integer _length;
  modelica_metatype _outLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _length1;
  modelica_metatype _row = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _length = ((modelica_integer) 0);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outLst = tmpMeta1;
  // _length1 has no default value.
  // _row has no default value.
  {
    modelica_metatype _sel;
    for (tmpMeta2 = _inSelect; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _sel = MMC_CAR(tmpMeta2);
      _row = arrayGet(_mtIn, omc_unbox_integer(_sel));

      _length1 = listLength(_row);

      if((_length1 > _length))
      {
        _length = _length1;

        tmpMeta3 = mmc_mk_cons(_sel, MMC_REFSTRUCTLIT(mmc_nil));
        _outLst = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outLst) { *out_outLst = _outLst; }
  omc_ret_ = _length;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getVarOccurringInMostEquations(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype *out_outLst)
{
  modelica_integer _length;
  modelica_metatype out_length;
  _length = omc_Tearing_getVarOccurringInMostEquations(threadData, _mtIn, _inSelect, out_outLst);
  out_length = omc_mk_icon(_length);
  /* skip box _outLst; list<#Integer> */
  return out_length;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getVarsOccurringInMostEquations(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype *out_outLst)
{
  modelica_integer _length;
  modelica_metatype _outLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _length1;
  modelica_metatype _row = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _length = ((modelica_integer) 0);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outLst = tmpMeta1;
  // _length1 has no default value.
  // _row has no default value.
  {
    modelica_metatype _sel;
    for (tmpMeta2 = _inSelect; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _sel = MMC_CAR(tmpMeta2);
      _row = arrayGet(_mtIn, omc_unbox_integer(_sel));

      _length1 = listLength(_row);

      if((_length1 > _length))
      {
        _length = _length1;

        tmpMeta3 = mmc_mk_cons(_sel, MMC_REFSTRUCTLIT(mmc_nil));
        _outLst = tmpMeta3;
      }
      else
      {
        if((_length1 == _length))
        {
          tmpMeta4 = mmc_mk_cons(_sel, _outLst);
          _outLst = tmpMeta4;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outLst) { *out_outLst = _outLst; }
  omc_ret_ = _length;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getVarsOccurringInMostEquations(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _inSelect, modelica_metatype *out_outLst)
{
  modelica_integer _length;
  modelica_metatype out_length;
  _length = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _inSelect, out_outLst);
  out_length = omc_mk_icon(_length);
  /* skip box _outLst; list<#Integer> */
  return out_length;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getVarsOfEqnsWithMostVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _mIn, modelica_metatype _mtIn)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _size;
  modelica_integer _maxSize;
  modelica_metatype _eqns = NULL;
  modelica_metatype _eqn_size_arr = NULL;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVars = tmpMeta1;
  // _size has no default value.
  _maxSize = ((modelica_integer) 0);
  // _eqns has no default value.
  // _eqn_size_arr has no default value.
  _eqn_size_arr = arrayCreate(arrayLength(_mIn), omc_mk_integer(((modelica_integer) -1)));

  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = arrayLength(_mIn);
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {

      _size = listLength(arrayGet(_mIn,_i) /* DAE.ASUB */);

      arrayUpdate(_eqn_size_arr,_i,omc_mk_integer(_size));

      if((_size > _maxSize))
      {
        _maxSize = _size;
      }
    }
  }

  {
    modelica_metatype _var;
    for (tmpMeta5 = _inVars; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _var = MMC_CAR(tmpMeta5);
      _eqns = arrayGet(_mtIn,omc_unbox_integer(_var)) /* DAE.ASUB */;

      {
        modelica_metatype _e;
        for (tmpMeta6 = _eqns; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
        {
          _e = MMC_CAR(tmpMeta6);
          if((omc_unbox_integer(arrayGet(_eqn_size_arr,omc_unbox_integer(_e)) /* DAE.ASUB */) == _maxSize))
          {
            tmpMeta7 = mmc_mk_cons(_var, _outVars);
            _outVars = tmpMeta7;

            break;
          }
        }
      }
    }
  }

  omc_GCExt_free(threadData, _eqn_size_arr);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outVars;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC void omc_Tearing_deleteRowsFromAdjacencyMatrix(threadData_t *threadData, modelica_metatype _mUpdate, modelica_metatype _rows)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _row;
    for (tmpMeta1 = _rows; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _row = MMC_CAR(tmpMeta1);
      tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      omc_Array_replaceAtWithFill(threadData, omc_unbox_integer(_row), tmpMeta2, tmpMeta3, _mUpdate);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData_t *threadData, modelica_metatype _mUpdate, modelica_metatype _mHelp, modelica_metatype _entries)
{
  modelica_integer _rowIndx;
  modelica_metatype _rowsIndx = NULL;
  modelica_metatype _row = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rowIndx has no default value.
  // _rowsIndx has no default value.
  // _row has no default value.
  {
    modelica_metatype _entry;
    for (tmpMeta1 = _entries; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _entry = MMC_CAR(tmpMeta1);
      _rowsIndx = arrayGet(_mHelp, omc_unbox_integer(_entry));

      {
        modelica_metatype _rowIndx;
        for (tmpMeta2 = _rowsIndx; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _rowIndx = MMC_CAR(tmpMeta2);
          _row = arrayGet(_mUpdate, omc_unbox_integer(_rowIndx));

          _row = omc_List_deleteMemberOnTrue(threadData, _entry, _row, boxvar_intEq, NULL);

          omc_Array_replaceAtWithFill(threadData, omc_unbox_integer(_rowIndx), _row, _row, _mUpdate);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectFromList(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _selList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _num;
  modelica_integer _actual;
  modelica_integer _len;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _num has no default value.
  // _actual has no default value.
  // _len has no default value.
  _len = listLength(_inList);

  {
    modelica_metatype _num;
    for (tmpMeta2 = _selList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _num = MMC_CAR(tmpMeta2);
      if(((omc_unbox_integer(_num) > ((modelica_integer) 0)) && (omc_unbox_integer(_num) <= _len)))
      {
        _actual = omc_unbox_integer(listGet(_inList, omc_unbox_integer(_num)));

        tmpMeta3 = mmc_mk_cons(omc_mk_integer(_actual), _outList);
        _outList = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outList;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectFromList__rev(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _selList)
{
  modelica_metatype _outList = NULL;
  modelica_integer _len;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  // _len has no default value.
  _len = listLength(_inList);

  {
    modelica_metatype __omcQ_24tmpVar17;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar16;
    modelica_integer tmp4;
    modelica_metatype _num_loopVar = 0;
    modelica_metatype _num;
    _num_loopVar = _selList;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar17 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar17;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_num_loopVar)) {
        _num = MMC_CAR(_num_loopVar);
        _num_loopVar = MMC_CDR(_num_loopVar);
        if (((omc_unbox_integer(_num) > ((modelica_integer) 0)) && (omc_unbox_integer(_num) <= _len))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar16 = listGet(_inList, omc_unbox_integer(_num));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar16,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar17;
  }
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outList;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getMostNonlinearEquation(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inList, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_integer _index;
  modelica_integer _maxi;
  modelica_integer tmp1;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _index = ((modelica_integer) 1);
  // _maxi has no default value.
  {
    modelica_integer __omcQ_24tmpVar19;
    modelica_integer __omcQ_24tmpVar18;
    modelica_integer tmp2;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _inList;
    __omcQ_24tmpVar19 = ((modelica_integer) -4611686018427387903); /* defaultValue */
    while(1) {
      tmp2 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp2--;
      }
      if (tmp2 == 0) {
        __omcQ_24tmpVar18 = omc_unbox_integer(arrayGet(_inArray,omc_unbox_integer(listHead(arrayGet(_mapEqnIncRow,omc_unbox_integer(_i)) /* DAE.ASUB */))) /* DAE.ASUB */);
        __omcQ_24tmpVar19 = modelica_integer_max((modelica_integer)(__omcQ_24tmpVar18),(modelica_integer)(__omcQ_24tmpVar19));
      } else if (tmp2 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    tmp1 = __omcQ_24tmpVar19;
  }
  _maxi = tmp1;

  {
    modelica_metatype _i;
    for (tmpMeta3 = _inList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      _index = omc_unbox_integer(listHead(arrayGet(_mapEqnIncRow,omc_unbox_integer(_i)) /* DAE.ASUB */));

      if((omc_unbox_integer(arrayGet(_inArray,_index) /* DAE.ASUB */) == _maxi))
      {
        _index = omc_unbox_integer(arrayGet(_mapIncRowEqn,_index) /* DAE.ASUB */);

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _index;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getMostNonlinearEquation(threadData_t *threadData, modelica_metatype _inArray, modelica_metatype _inList, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_integer _index;
  modelica_metatype out_index;
  _index = omc_Tearing_getMostNonlinearEquation(threadData, _inArray, _inList, _mapEqnIncRow, _mapIncRowEqn);
  out_index = omc_mk_icon(_index);
  return out_index;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_maxListInt(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _maxi;
  modelica_integer _index;
  modelica_integer tmp2;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  // _maxi has no default value.
  _index = ((modelica_integer) 1);
  {
    modelica_integer __omcQ_24tmpVar21;
    modelica_integer __omcQ_24tmpVar20;
    modelica_integer tmp3;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _inList;
    __omcQ_24tmpVar21 = ((modelica_integer) -4611686018427387903); /* defaultValue */
    while(1) {
      tmp3 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp3--;
      }
      if (tmp3 == 0) {
        __omcQ_24tmpVar20 = omc_unbox_integer(_i);
        __omcQ_24tmpVar21 = modelica_integer_max((modelica_integer)(__omcQ_24tmpVar20),(modelica_integer)(__omcQ_24tmpVar21));
      } else if (tmp3 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    tmp2 = __omcQ_24tmpVar21;
  }
  _maxi = tmp2;

  {
    modelica_metatype _i;
    for (tmpMeta4 = _inList; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _i = MMC_CAR(tmpMeta4);
      if((omc_unbox_integer(_i) == _maxi))
      {
        tmpMeta5 = mmc_mk_cons(omc_mk_integer(_index), _outList);
        _outList = tmpMeta5;
      }

      _index = ((modelica_integer) 1) + _index;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outList;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_countMultiples3(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _set, modelica_metatype _valIn, modelica_metatype _numIn, modelica_metatype *out_numOut)
{
  modelica_metatype _valOut = NULL;
  modelica_metatype _numOut = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _valOut has no default value.
  // _numOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _set;
    {
      modelica_integer _value;
      modelica_integer _number;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _value has no default value.
      // _number has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = omc_unbox_integer(tmpMeta6);
          _value = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _number = listLength(_lstIn) - listLength(omc_List_removeOnTrue(threadData, omc_mk_integer(_value), boxvar_intEq, _lstIn));
          tmpMeta9 = mmc_mk_cons(omc_mk_integer(_value), _valIn);
          tmpMeta10 = mmc_mk_cons(omc_mk_integer(_number), _numIn);
          /* Tail recursive call */
          _set = _rest;
          _valIn = tmpMeta9;
          _numIn = tmpMeta10;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _valIn;
          tmpMeta[0+1] = _numIn;
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
  _valOut = tmpMeta[0+0];
  _numOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_numOut) { *out_numOut = _numOut; }
  omc_ret_ = _valOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_countMultiples2(threadData_t *threadData, modelica_metatype _rowIn, modelica_metatype _valIn)
{
  modelica_metatype _valOut = NULL;
  modelica_metatype _counter = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype _row = NULL;
  modelica_metatype _set = NULL;
  modelica_metatype _num = NULL;
  modelica_metatype _val = NULL;
  modelica_metatype _positions = NULL;
  modelica_metatype _numbers = NULL;
  modelica_integer _indx;
  modelica_integer _value;
  modelica_integer _number;
  modelica_integer _position;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _valOut has no default value.
  // _counter has no default value.
  // _values has no default value.
  // _row has no default value.
  // _set has no default value.
  // _num has no default value.
  // _val has no default value.
  // _positions has no default value.
  // _numbers has no default value.
  // _indx has no default value.
  // _value has no default value.
  // _number has no default value.
  // _position has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _valIn;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmp5 = omc_unbox_integer(tmpMeta4);
  _counter = tmpMeta2;
  _values = tmpMeta3;
  _indx = tmp5  /* pattern as ty=Integer */;

  _row = omc_List_removeOnTrue(threadData, omc_mk_integer(((modelica_integer) 0)), boxvar_intEq, _rowIn);

  _set = omc_List_unique(threadData, _row);

  if(listEmpty(_set))
  {
    _val = _OMC_LIT121;

    _num = _OMC_LIT121;
  }
  else
  {
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    _val = omc_Tearing_countMultiples3(threadData, _row, _set, tmpMeta6, tmpMeta7 ,&_num);
  }

  _positions = omc_Tearing_maxListInt(threadData, _num);

  _position = omc_unbox_integer(listHead(_positions));

  _number = omc_unbox_integer(listGet(_num, _position));

  _numbers = omc_Tearing_selectFromList(threadData, _val, _positions);

  _value = omc_unbox_integer(listGet(_val, _position));

  _counter = omc_List_set(threadData, _counter, _indx, omc_mk_integer(_number));

  _values = omc_List_set(threadData, _values, _indx, omc_mk_integer(_value));

  tmpMeta8 = omc_mk_box4(0, _counter, _numbers, _values, omc_mk_integer(((modelica_integer) 1) + _indx));
  _valOut = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _valOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_countMultiples(threadData_t *threadData, modelica_metatype _inArr, modelica_metatype *out_numbers, modelica_metatype *out_values)
{
  modelica_metatype _counter = NULL;
  modelica_metatype _numbers = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _counter has no default value.
  // _numbers has no default value.
  // _values has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Array_fold(threadData, _inArr, boxvar_Tearing_countMultiples2, _OMC_LIT122);
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 3);
  _counter = tmpMeta2;
  _numbers = tmpMeta3;
  _values = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  if (out_numbers) { *out_numbers = _numbers; }
  if (out_values) { *out_values = _values; }
  omc_ret_ = _counter;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_markTVarsOrResiduals(threadData_t *threadData, modelica_metatype _markList, modelica_metatype _assIn)
{
  modelica_metatype _assOut = NULL;
  modelica_integer _len;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _assOut = _assIn;
  // _len has no default value.
  _len = arrayLength(_assIn);

  {
    modelica_metatype _i;
    for (tmpMeta1 = _markList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      arrayUpdate(_assOut, omc_unbox_integer(_i), omc_mk_integer((((modelica_integer) 2)) * (_len)));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _assOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findConstraintForInnerEquation(threadData_t *threadData, modelica_metatype _meRow, modelica_integer _searchIndex)
{
  modelica_metatype _constraints = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype _meElem = NULL;
  modelica_metatype _cons = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _constraints = tmpMeta1;
  // _index has no default value.
  // _meElem has no default value.
  // _cons has no default value.
  {
    modelica_metatype _meElem;
    for (tmpMeta2 = _meRow; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _meElem = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _meElem;
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
      tmp5 = omc_unbox_integer(tmpMeta4);
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta3, 3);
      _index = tmp5  /* pattern as ty=Integer */;
      _cons = tmpMeta6;

      if((_index == _searchIndex))
      {
        _constraints = _cons;

        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _constraints;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_findConstraintForInnerEquation(threadData_t *threadData, modelica_metatype _meRow, modelica_metatype _searchIndex)
{
  modelica_integer tmp1;
  modelica_metatype _constraints = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_searchIndex);
  _constraints = omc_Tearing_findConstraintForInnerEquation(threadData, _meRow, tmp1);
  /* skip box _constraints; list<DAE.Constraint> */
  return _constraints;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_assignInnerEquations(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _eindex, modelica_metatype _vindex, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _meOpt)
{
  modelica_metatype _outInnerEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outInnerEquations has no default value.
  {
    modelica_metatype __omcQ_24tmpVar23;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar22;
    modelica_integer tmp15;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = _inEqns;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar23 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar23;
    while(1) {
      tmp15 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp15--;
      }
      if (tmp15 == 0) {
        { /* match expression */
          modelica_metatype tmp7_1;modelica_metatype tmp7_2;
          tmp7_1 = _eqn;
          tmp7_2 = _meOpt;
          {
            modelica_integer _eq;
            modelica_integer _otherEqn;
            modelica_metatype _eqns = NULL;
            modelica_metatype _vars = NULL;
            modelica_metatype _otherVars = NULL;
            modelica_metatype _innerEquation = NULL;
            modelica_metatype _constraints = NULL;
            modelica_metatype _me = NULL;
            volatile mmc_switch_type tmp7;
            int tmp8;
            // _eq has no default value.
            // _otherEqn has no default value.
            // _eqns has no default value.
            // _vars has no default value.
            // _otherVars has no default value.
            // _innerEquation has no default value.
            // _constraints has no default value.
            // _me has no default value.
            tmp7 = 0;
            for (; tmp7 < 2; tmp7++) {
              switch (MMC_SWITCH_CAST(tmp7)) {
              case 0: {
                modelica_integer tmp9;
                modelica_metatype tmpMeta10;
                if (!optionNone(tmp7_2)) goto tmp6_end;
                tmp9 = omc_unbox_integer(tmp7_1);
                _eq = tmp9  /* pattern as ty=Integer */;
                /* Pattern matching succeeded */
                _vars = omc_List_map1r(threadData, arrayGet(_mapEqnIncRow,_eq) /* DAE.ASUB */, boxvar_arrayGet, _ass2);

                _otherEqn = omc_unbox_integer(listGet(_eindex, _eq));

                _otherVars = omc_Tearing_selectFromList__rev(threadData, _vindex, _vars);
                tmpMeta10 = omc_mk_box3(3, &BackendDAE_InnerEquation_INNEREQUATION__desc, omc_mk_integer(_otherEqn), _otherVars);
                tmpMeta4 = tmpMeta10;
                goto tmp6_done;
              }
              case 1: {
                modelica_metatype tmpMeta11;
                modelica_integer tmp12;
                modelica_metatype tmpMeta13;
                modelica_metatype tmpMeta14;
                if (optionNone(tmp7_2)) goto tmp6_end;
                tmpMeta11 = OMC_BOX_FIELD(tmp7_2, 1);
                tmp12 = omc_unbox_integer(tmp7_1);
                _me = tmpMeta11;
                _eq = tmp12  /* pattern as ty=Integer */;
                /* Pattern matching succeeded */
                _eqns = arrayGet(_mapEqnIncRow,_eq) /* DAE.ASUB */;

                _vars = omc_List_map1r(threadData, _eqns, boxvar_arrayGet, _ass2);

                _otherEqn = omc_unbox_integer(listGet(_eindex, _eq));

                _otherVars = omc_Tearing_selectFromList__rev(threadData, _vindex, _vars);

                _constraints = omc_Tearing_findConstraintForInnerEquation(threadData, arrayGet(_me,omc_unbox_integer(listHead(_eqns))) /* DAE.ASUB */, omc_unbox_integer(listHead(_vars)));

                if(listEmpty(_constraints))
                {
                  tmpMeta13 = omc_mk_box3(3, &BackendDAE_InnerEquation_INNEREQUATION__desc, omc_mk_integer(_otherEqn), _otherVars);
                  _innerEquation = tmpMeta13;
                }
                else
                {
                  tmpMeta14 = omc_mk_box4(4, &BackendDAE_InnerEquation_INNEREQUATIONCONSTRAINTS__desc, omc_mk_integer(_otherEqn), _otherVars, _constraints);
                  _innerEquation = tmpMeta14;
                }
                tmpMeta4 = _innerEquation;
                goto tmp6_done;
              }
              }
              goto tmp6_end;
              tmp6_end: ;
            }
            goto goto_5;
            goto_5:;
            OMC_THROW_INTERNAL();
            goto tmp6_done;
            tmp6_done:;
          }
        }__omcQ_24tmpVar22 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar22,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp15 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar23;
  }
  _outInnerEquations = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outInnerEquations;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_eqnSolvableCheck(threadData_t *threadData, modelica_integer _eqn_coll, modelica_metatype _mapEqnIncRow, modelica_metatype _ass1, modelica_metatype _m, modelica_metatype _me, modelica_metatype *out_eqns, modelica_metatype *out_vars)
{
  modelica_boolean _solvable;
  modelica_metatype _eqns = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _eqn;
  modelica_metatype _vars_enh = NULL;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _solvable has no default value.
  // _eqns has no default value.
  // _vars has no default value.
  // _eqn has no default value.
  // _vars_enh has no default value.
  _eqns = arrayGet(_mapEqnIncRow,_eqn_coll) /* DAE.ASUB */;

  _eqn = omc_unbox_integer(listHead(_eqns));

  _vars = arrayGet(_m, _eqn);

  _vars_enh = omc_List_removeOnTrue(threadData, _ass1, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_me,_eqn) /* DAE.ASUB */);

  _solvable = omc_Tearing_solvableLst(threadData, _vars_enh);
  _return: OMC_LABEL_UNUSED
  if (out_eqns) { *out_eqns = _eqns; }
  if (out_vars) { *out_vars = _vars; }
  omc_ret_ = _solvable;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_eqnSolvableCheck(threadData_t *threadData, modelica_metatype _eqn_coll, modelica_metatype _mapEqnIncRow, modelica_metatype _ass1, modelica_metatype _m, modelica_metatype _me, modelica_metatype *out_eqns, modelica_metatype *out_vars)
{
  modelica_integer tmp1;
  modelica_boolean _solvable;
  modelica_metatype out_solvable;
  tmp1 = omc_unbox_integer(_eqn_coll);
  _solvable = omc_Tearing_eqnSolvableCheck(threadData, tmp1, _mapEqnIncRow, _ass1, _m, _me, out_eqns, out_vars);
  out_solvable = omc_mk_icon(_solvable);
  /* skip box _eqns; list<#Integer> */
  /* skip box _vars; list<#Integer> */
  return out_solvable;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getNextSolvableEqn(threadData_t *threadData, modelica_metatype _assEq_coll, modelica_metatype _m, modelica_metatype _me, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype *out_eqnsOut, modelica_metatype *out_varsOut)
{
  modelica_integer _eqOut;
  modelica_metatype _eqnsOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _varsOut = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean _solvable;
  modelica_metatype _eqns = NULL;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqOut = ((modelica_integer) 0);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqnsOut = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _varsOut = tmpMeta2;
  _solvable = 0 /* false */;
  _eqns = _assEq_coll;
  while(1)
  {
    if(!(!listEmpty(_eqns))) break;
    _eqOut = omc_Tearing_getMostNonlinearEquation(threadData, _eqnNonlinPoints, _eqns, _mapEqnIncRow, _mapIncRowEqn);

    _solvable = omc_Tearing_eqnSolvableCheck(threadData, _eqOut, _mapEqnIncRow, _ass1, _m, _me ,&_eqnsOut ,&_varsOut);

    _eqns = omc_List_deleteMemberOnTrue(threadData, omc_mk_integer(_eqOut), _eqns, boxvar_intEq, NULL);

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp3 = stringAppend(_OMC_LIT123,intString(_eqOut));
      tmp4 = stringAppend(tmp3,_OMC_LIT124);
      tmp5 = stringAppend(tmp4,(_solvable?_OMC_LIT125:_OMC_LIT126));
      tmp6 = stringAppend(tmp5,_OMC_LIT10);
      fputs(omc_string_data(tmp6),stdout);
    }

    if(_solvable)
    {
      break;
    }
    else
    {
      {
        modelica_metatype _eq;
        for (tmpMeta7 = arrayGet(_mapEqnIncRow,_eqOut) /* DAE.ASUB */; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
        {
          _eq = MMC_CAR(tmpMeta7);
          arrayUpdate(_ass2, omc_unbox_integer(_eq), omc_mk_integer(((modelica_integer) -2)));
        }
      }
    }
  }

  if((!_solvable))
  {
    OMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  if (out_eqnsOut) { *out_eqnsOut = _eqnsOut; }
  if (out_varsOut) { *out_varsOut = _varsOut; }
  omc_ret_ = _eqOut;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getNextSolvableEqn(threadData_t *threadData, modelica_metatype _assEq_coll, modelica_metatype _m, modelica_metatype _me, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype *out_eqnsOut, modelica_metatype *out_varsOut)
{
  modelica_integer _eqOut;
  modelica_metatype out_eqOut;
  _eqOut = omc_Tearing_getNextSolvableEqn(threadData, _assEq_coll, _m, _me, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, out_eqnsOut, out_varsOut);
  out_eqOut = omc_mk_icon(_eqOut);
  /* skip box _eqnsOut; list<#Integer> */
  /* skip box _varsOut; list<#Integer> */
  return out_eqOut;
}

PROTECTED_FUNCTION_STATIC void omc_Tearing_makeAssignment(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _vars, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _mIn, modelica_metatype _mtIn)
{
  modelica_integer _eq;
  modelica_integer _var;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  // _var has no default value.
  tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = listLength(_eqns);
  if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
  {
    modelica_integer _index;
    for(_index = ((modelica_integer) 1); in_range_integer(_index, tmp11, tmp13); _index += tmp12)
    {

      _eq = omc_unbox_integer(listGet(_eqns, _index));

      _var = omc_unbox_integer(listGet(_vars, _index));

      arrayUpdate(_ass1In, _var, omc_mk_integer(_eq));

      arrayUpdate(_ass2In, _eq, omc_mk_integer(_var));

      if(omc_Flags_isSet(threadData, _OMC_LIT3))
      {
        tmp1 = stringAppend(_OMC_LIT127,intString(_eq));
        tmp2 = stringAppend(tmp1,_OMC_LIT128);
        tmp3 = stringAppend(tmp2,intString(_var));
        tmp4 = stringAppend(tmp3,_OMC_LIT10);
        fputs(omc_string_data(tmp4),stdout);
      }

      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      omc_Array_replaceAtWithFill(threadData, _eq, tmpMeta5, tmpMeta6, _mIn);

      tmpMeta7 = mmc_mk_cons(omc_mk_integer(_var), MMC_REFSTRUCTLIT(mmc_nil));
      omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData, _mIn, _mtIn, tmpMeta7);

      tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      omc_Array_replaceAtWithFill(threadData, _var, tmpMeta8, tmpMeta9, _mtIn);

      tmpMeta10 = mmc_mk_cons(omc_mk_integer(_eq), MMC_REFSTRUCTLIT(mmc_nil));
      omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData, _mtIn, _mIn, tmpMeta10);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_traverseCollectiveEqnsforAssignable(threadData_t *threadData, modelica_metatype _inAss, modelica_metatype _m, modelica_metatype _mapEqnIncRow)
{
  modelica_metatype _selectedrows = NULL;
  modelica_integer _eqnSize;
  modelica_integer _e;
  modelica_integer _eqnColl;
  modelica_metatype _delst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _selectedrows has no default value.
  // _eqnSize has no default value.
  // _e has no default value.
  _eqnColl = ((modelica_integer) 0);
  // _delst has no default value.
  _delst = omc_DoubleEnded_empty(threadData, omc_mk_integer(((modelica_integer) 0)));

  {
    modelica_metatype _eqnLst;
    for (tmpMeta1 = _mapEqnIncRow, tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _eqnLst = arrayGet(tmpMeta1,tmp3);
      _eqnColl = ((modelica_integer) 1) + _eqnColl;

      _e = omc_unbox_integer(listHead(_eqnLst));

      if((omc_unbox_integer(arrayGet(_inAss, _e)) != ((modelica_integer) -1)))
      {
        continue;
      }

      _eqnSize = listLength(_eqnLst);

      if((listLength(arrayGet(_m,_e) /* DAE.ASUB */) == _eqnSize))
      {
        if((_eqnSize == ((modelica_integer) 1)))
        {
          omc_DoubleEnded_push__back(threadData, _delst, omc_mk_integer(_eqnColl));
        }
        else
        {
          omc_DoubleEnded_push__front(threadData, _delst, omc_mk_integer(_eqnColl));
        }
      }
    }
  }

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _selectedrows = omc_DoubleEnded_toListAndClear(threadData, _delst, tmpMeta5);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _selectedrows;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_traverseSingleEqnsforAssignable(threadData_t *threadData, modelica_metatype _inAss, modelica_metatype _m, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _selectedrows = NULL;
  modelica_integer _eqnColl;
  modelica_integer _eqnSize;
  modelica_metatype _delst = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _selectedrows has no default value.
  // _eqnColl has no default value.
  // _eqnSize has no default value.
  // _delst has no default value.
  _delst = omc_DoubleEnded_empty(threadData, omc_mk_integer(((modelica_integer) 0)));

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_inAss);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _e;
    for(_e = ((modelica_integer) 1); in_range_integer(_e, tmp1, tmp3); _e += tmp2)
    {

      if((omc_unbox_integer(arrayGet(_inAss, _e)) != ((modelica_integer) -1)))
      {
        continue;
      }

      _eqnColl = omc_unbox_integer(arrayGet(_mapIncRowEqn,_e) /* DAE.ASUB */);

      _eqnSize = listLength(arrayGet(_mapEqnIncRow,_eqnColl) /* DAE.ASUB */);

      if((listLength(arrayGet(_m,_e) /* DAE.ASUB */) == ((modelica_integer) 1) + _eqnSize))
      {
        if((_eqnSize == ((modelica_integer) 1)))
        {
          omc_DoubleEnded_push__back(threadData, _delst, omc_mk_integer(_e));
        }
        else
        {
          omc_DoubleEnded_push__front(threadData, _delst, omc_mk_integer(_e));
        }
      }
    }
  }

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _selectedrows = omc_DoubleEnded_toListAndClear(threadData, _delst, tmpMeta4);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _selectedrows;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_tornMatchingIsStructurallySingular(threadData_t *threadData, modelica_metatype _ass2, modelica_metatype _meTFull, modelica_integer _size, modelica_metatype _vars)
{
  modelica_boolean _singular;
  modelica_integer _ev;
  modelica_integer _cnt;
  modelica_integer _theEqn;
  modelica_integer _owner;
  modelica_metatype _s = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _singular = 0 /* false */;
  // _ev has no default value.
  // _cnt has no default value.
  // _theEqn has no default value.
  // _owner has no default value.
  // _s has no default value.
  // _cref has no default value.
  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _size;
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _v;
    for(_v = ((modelica_integer) 1); in_range_integer(_v, tmp7, tmp9); _v += tmp8)
    {

      _cref = omc_BackendVariable_varCref(threadData, omc_BackendVariable_getVarAt(threadData, _vars, _v));

      if(omc_ComponentReference_isStartCref(threadData, _cref))
      {
        _cnt = ((modelica_integer) 0);

        _theEqn = ((modelica_integer) -1);

        {
          modelica_metatype _entry;
          for (tmpMeta1 = arrayGet(_meTFull, _v); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
          {
            _entry = MMC_CAR(tmpMeta1);
            /* Pattern-matching assignment */
            tmpMeta2 = _entry;
            tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
            tmp4 = omc_unbox_integer(tmpMeta3);
            tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 2);
            _ev = tmp4  /* pattern as ty=Integer */;
            _s = tmpMeta5;

            if(omc_BackendDAEUtil_isSolvable(threadData, _s, 0 /* false */))
            {
              _cnt = ((modelica_integer) 1) + _cnt;

              _theEqn = _ev;

              if((_cnt > ((modelica_integer) 1)))
              {
                break;
              }
            }
          }
        }

        if((_cnt == ((modelica_integer) 1)))
        {
          _owner = omc_unbox_integer(arrayGet(_ass2, _theEqn));

          if(((_owner != _v) && (_owner != ((modelica_integer) -2))))
          {
            _singular = 1 /* true */;

            goto _return;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _singular;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tornMatchingIsStructurallySingular(threadData_t *threadData, modelica_metatype _ass2, modelica_metatype _meTFull, modelica_metatype _size, modelica_metatype _vars)
{
  modelica_integer tmp1;
  modelica_boolean _singular;
  modelica_metatype out_singular;
  tmp1 = omc_unbox_integer(_size);
  _singular = omc_Tearing_tornMatchingIsStructurallySingular(threadData, _ass2, _meTFull, tmp1, _vars);
  out_singular = omc_mk_icon(_singular);
  return out_singular;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getNextDegree1Var(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _meTIn, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype *out_eqnsOut, modelica_metatype *out_varsOut)
{
  modelica_integer _eqCollOut;
  modelica_metatype _eqnsOut = NULL;
  modelica_metatype _varsOut = NULL;
  modelica_integer _e;
  modelica_integer _eqColl;
  modelica_integer _cnt;
  modelica_integer _theEqn;
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqCollOut has no default value.
  // _eqnsOut has no default value.
  // _varsOut has no default value.
  // _e has no default value.
  // _eqColl has no default value.
  // _cnt has no default value.
  // _theEqn has no default value.
  // _s has no default value.
  tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = arrayLength(_meTIn);
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer _v;
    for(_v = ((modelica_integer) 1); in_range_integer(_v, tmp9, tmp11); _v += tmp10)
    {

      if(((omc_unbox_integer(arrayGet(_ass1, _v)) == ((modelica_integer) -1)) && (listLength(arrayGet(_mtIn, _v)) > ((modelica_integer) 1))))
      {
        _cnt = ((modelica_integer) 0);

        _theEqn = ((modelica_integer) -1);

        {
          modelica_metatype _entry;
          for (tmpMeta1 = arrayGet(_meTIn,_v) /* DAE.ASUB */; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
          {
            _entry = MMC_CAR(tmpMeta1);
            /* Pattern-matching assignment */
            tmpMeta2 = _entry;
            tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
            tmp4 = omc_unbox_integer(tmpMeta3);
            tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 2);
            _e = tmp4  /* pattern as ty=Integer */;
            _s = tmpMeta5;

            if(((omc_unbox_integer(arrayGet(_ass2, _e)) == ((modelica_integer) -1)) && omc_BackendDAEUtil_isSolvable(threadData, _s, 0 /* false */)))
            {
              _cnt = ((modelica_integer) 1) + _cnt;

              _theEqn = _e;

              if((_cnt > ((modelica_integer) 1)))
              {
                break;
              }
            }
          }
        }

        if((_cnt == ((modelica_integer) 1)))
        {
          _eqColl = omc_unbox_integer(arrayGet(_mapIncRowEqn,_theEqn) /* DAE.ASUB */);

          if((listLength(arrayGet(_mapEqnIncRow,_eqColl) /* DAE.ASUB */) == ((modelica_integer) 1)))
          {
            _eqCollOut = _eqColl;

            tmpMeta7 = mmc_mk_cons(omc_mk_integer(_theEqn), MMC_REFSTRUCTLIT(mmc_nil));
            _eqnsOut = tmpMeta7;

            tmpMeta8 = mmc_mk_cons(omc_mk_integer(_v), MMC_REFSTRUCTLIT(mmc_nil));
            _varsOut = tmpMeta8;

            goto _return;
          }
        }
      }
    }
  }

  OMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  if (out_eqnsOut) { *out_eqnsOut = _eqnsOut; }
  if (out_varsOut) { *out_varsOut = _varsOut; }
  omc_ret_ = _eqCollOut;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getNextDegree1Var(threadData_t *threadData, modelica_metatype _mtIn, modelica_metatype _meTIn, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype *out_eqnsOut, modelica_metatype *out_varsOut)
{
  modelica_integer _eqCollOut;
  modelica_metatype out_eqCollOut;
  _eqCollOut = omc_Tearing_getNextDegree1Var(threadData, _mtIn, _meTIn, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, out_eqnsOut, out_varsOut);
  out_eqCollOut = omc_mk_icon(_eqCollOut);
  /* skip box _eqnsOut; list<#Integer> */
  /* skip box _varsOut; list<#Integer> */
  return out_eqCollOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_TarjanAssignment(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_boolean _forceDegree1, modelica_boolean *out_assignable)
{
  modelica_metatype _orderOut = NULL;
  modelica_boolean _assignable;
  modelica_integer _eq_coll;
  modelica_metatype _assEq_coll = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _orderOut = _orderIn;
  _assignable = 0 /* false */;
  // _eq_coll has no default value.
  // _assEq_coll has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqns = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars = tmpMeta2;
  if(_forceDegree1)
  {
    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp5;
        int tmp6;
        tmp5 = 0;
        OMC_TRY_INTERNAL(mmc_jumper)
        tmp4_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp5 < 2; tmp5++) {
          switch (MMC_SWITCH_CAST(tmp5)) {
          case 0: {
            modelica_metatype tmpMeta7;
            /* Pattern matching succeeded */
            _eq_coll = omc_Tearing_getNextDegree1Var(threadData, _mtIn, _meTIn, _ass1In, _ass2In, _mapEqnIncRow, _mapIncRowEqn ,&_eqns ,&_vars);

            tmpMeta7 = mmc_mk_cons(omc_mk_integer(_eq_coll), _orderOut);
            _orderOut = tmpMeta7;

            _assignable = 1 /* true */;
            goto tmp4_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            goto tmp4_done;
          }
          }
          goto tmp4_end;
          tmp4_end: ;
        }
        goto goto_3;
        tmp4_done:
        (void)tmp5;
        OMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp4_done2;
        goto_3:;
        OMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp5 < 2) {
          goto tmp4_top;
        }
        OMC_THROW_INTERNAL();
        tmp4_done2:;
      }
    }
    ;
  }

  if((!_assignable))
  {
    _assEq_coll = omc_Tearing_traverseCollectiveEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow);

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp8 = stringAppend(_OMC_LIT129,stringDelimitList(omc_List_map(threadData, _assEq_coll, boxvar_intString), _OMC_LIT7));
      tmp9 = stringAppend(tmp8,_OMC_LIT10);
      fputs(omc_string_data(tmp9),stdout);
    }

    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp12;
        int tmp13;
        tmp12 = 0;
        OMC_TRY_INTERNAL(mmc_jumper)
        tmp11_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp12 < 2; tmp12++) {
          switch (MMC_SWITCH_CAST(tmp12)) {
          case 0: {
            modelica_metatype tmpMeta14;
            /* Pattern matching succeeded */
            _eq_coll = omc_Tearing_getNextSolvableEqn(threadData, _assEq_coll, _mIn, _meIn, _ass1In, _ass2In, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints ,&_eqns ,&_vars);

            tmpMeta14 = mmc_mk_cons(omc_mk_integer(_eq_coll), _orderOut);
            _orderOut = tmpMeta14;

            _assignable = 1 /* true */;
            goto tmp11_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            goto tmp11_done;
          }
          }
          goto tmp11_end;
          tmp11_end: ;
        }
        goto goto_10;
        tmp11_done:
        (void)tmp12;
        OMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp11_done2;
        goto_10:;
        OMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp12 < 2) {
          goto tmp11_top;
        }
        OMC_THROW_INTERNAL();
        tmp11_done2:;
      }
    }
    ;
  }

  if(_assignable)
  {
    omc_Tearing_makeAssignment(threadData, _eqns, _vars, _ass1In, _ass2In, _mIn, _mtIn);
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp15 = stringAppend(_OMC_LIT47,stringDelimitList(omc_List_map(threadData, listReverse(_orderOut), boxvar_intString), _OMC_LIT7));
    tmp16 = stringAppend(tmp15,_OMC_LIT35);
    fputs(omc_string_data(tmp16),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_assignable) { *out_assignable = _assignable; }
  omc_ret_ = _orderOut;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_TarjanAssignment(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype _forceDegree1, modelica_metatype *out_assignable)
{
  modelica_integer tmp1;
  modelica_boolean _assignable;
  modelica_metatype _orderOut = NULL;
  tmp1 = omc_unbox_integer(_forceDegree1);
  _orderOut = omc_Tearing_TarjanAssignment(threadData, _mIn, _mtIn, _meIn, _meTIn, _ass1In, _ass2In, _orderIn, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, tmp1, &_assignable);
  /* skip box _orderOut; list<#Integer> */
  if (out_assignable) { *out_assignable = omc_mk_icon(_assignable); }
  return _orderOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_TarjanMatching(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_boolean _forceDegree1, modelica_boolean *out_causal)
{
  modelica_metatype _orderOut = NULL;
  modelica_boolean _causal;
  modelica_metatype _unassigned = NULL;
  modelica_metatype _order = NULL;
  modelica_boolean _assignable;
  modelica_boolean _debug;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _orderOut has no default value.
  // _causal has no default value.
  // _unassigned has no default value.
  _order = _orderIn;
  _assignable = 1 /* true */;
  _debug = 0 /* false */;
  while(1)
  {
    if(!_assignable) break;
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT130),stdout);
    }

    _order = omc_Tearing_TarjanAssignment(threadData, _mIn, _mtIn, _meIn, _meTIn, _ass1In, _ass2In, _order, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, _forceDegree1 ,&_assignable);
  }

  _unassigned = omc_Tearing_getUnassigned(threadData, _ass1In);

  if(listEmpty(_unassigned))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT132),stdout);
    }

    _orderOut = listReverse(_order);

    _causal = 1 /* true */;
  }
  else
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT131),stdout);
    }

    _orderOut = _order;

    _causal = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  if (out_causal) { *out_causal = _causal; }
  omc_ret_ = _orderOut;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_TarjanMatching(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype _forceDegree1, modelica_metatype *out_causal)
{
  modelica_integer tmp1;
  modelica_boolean _causal;
  modelica_metatype _orderOut = NULL;
  tmp1 = omc_unbox_integer(_forceDegree1);
  _orderOut = omc_Tearing_TarjanMatching(threadData, _mIn, _mtIn, _meIn, _meTIn, _ass1In, _ass2In, _orderIn, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, tmp1, &_causal);
  /* skip box _orderOut; list<#Integer> */
  if (out_causal) { *out_causal = omc_mk_icon(_causal); }
  return _orderOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_countImpossibleAss(threadData_t *threadData, modelica_metatype _elem)
{
  modelica_integer _outCount;
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outCount = ((modelica_integer) 0);
  // _s has no default value.
  {
    modelica_metatype _e;
    for (tmpMeta1 = _elem; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _e;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 2);
      _s = tmpMeta3;

      if((!omc_Tearing_solvable(threadData, _s)))
      {
        _outCount = ((modelica_integer) 1) + _outCount;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outCount;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_countImpossibleAss(threadData_t *threadData, modelica_metatype _elem)
{
  modelica_integer _outCount;
  modelica_metatype out_outCount;
  _outCount = omc_Tearing_countImpossibleAss(threadData, _elem);
  out_outCount = omc_mk_icon(_outCount);
  return out_outCount;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getOneVarWithMostImpAss(threadData_t *threadData, modelica_metatype _inPotentials, modelica_metatype _ass2, modelica_metatype _meT, modelica_integer *out_outMax)
{
  modelica_metatype _outPotentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _outMax;
  modelica_integer _count;
  modelica_metatype _elem = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outPotentials = tmpMeta1;
  _outMax = ((modelica_integer) -1);
  // _count has no default value.
  // _elem has no default value.
  {
    modelica_metatype _v;
    for (tmpMeta2 = _inPotentials; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      _elem = omc_List_removeOnTrue(threadData, _ass2, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_meT,omc_unbox_integer(_v)) /* DAE.ASUB */);

      _count = omc_Tearing_countImpossibleAss(threadData, _elem);

      if((_count > _outMax))
      {
        tmpMeta3 = mmc_mk_cons(_v, MMC_REFSTRUCTLIT(mmc_nil));
        _outPotentials = tmpMeta3;

        _outMax = _count;
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT3))
      {
        tmp4 = stringAppend(_OMC_LIT133,intString(omc_unbox_integer(_v)));
        tmp5 = stringAppend(tmp4,_OMC_LIT134);
        tmp6 = stringAppend(tmp5,intString(_count));
        tmp7 = stringAppend(tmp6,_OMC_LIT135);
        fputs(omc_string_data(tmp7),stdout);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outMax) { *out_outMax = _outMax; }
  omc_ret_ = _outPotentials;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getOneVarWithMostImpAss(threadData_t *threadData, modelica_metatype _inPotentials, modelica_metatype _ass2, modelica_metatype _meT, modelica_metatype *out_outMax)
{
  modelica_integer _outMax;
  modelica_metatype _outPotentials = NULL;
  modelica_metatype tmpMeta1;
  _outPotentials = omc_Tearing_getOneVarWithMostImpAss(threadData, _inPotentials, _ass2, _meT, &_outMax);
  /* skip box _outPotentials; list<#Integer> */
  if (out_outMax) { *out_outMax = omc_mk_icon(_outMax); }
  return _outPotentials;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getAllVarsWithMostImpAss(threadData_t *threadData, modelica_metatype _inPotentials, modelica_metatype _ass2, modelica_metatype _meT, modelica_metatype *out_outCounts, modelica_integer *out_outMax)
{
  modelica_metatype _outPotentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outCounts = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _outMax;
  modelica_integer _count;
  modelica_metatype _elem = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outPotentials = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outCounts = tmpMeta2;
  _outMax = ((modelica_integer) 0);
  // _count has no default value.
  // _elem has no default value.
  {
    modelica_metatype _v;
    for (tmpMeta3 = _inPotentials; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _v = MMC_CAR(tmpMeta3);
      _elem = omc_List_removeOnTrue(threadData, _ass2, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_meT,omc_unbox_integer(_v)) /* DAE.ASUB */);

      _count = omc_Tearing_countImpossibleAss(threadData, _elem);

      if((_count > _outMax))
      {
        tmpMeta4 = mmc_mk_cons(_v, MMC_REFSTRUCTLIT(mmc_nil));
        _outPotentials = tmpMeta4;

        _outMax = _count;
      }
      else
      {
        if((_count == _outMax))
        {
          tmpMeta5 = mmc_mk_cons(_v, _outPotentials);
          _outPotentials = tmpMeta5;
        }
      }

      tmpMeta6 = mmc_mk_cons(omc_mk_integer(_count), _outCounts);
      _outCounts = tmpMeta6;

      if(omc_Flags_isSet(threadData, _OMC_LIT3))
      {
        tmp7 = stringAppend(_OMC_LIT133,intString(omc_unbox_integer(_v)));
        tmp8 = stringAppend(tmp7,_OMC_LIT134);
        tmp9 = stringAppend(tmp8,intString(_count));
        tmp10 = stringAppend(tmp9,_OMC_LIT135);
        fputs(omc_string_data(tmp10),stdout);
      }
    }
  }

  _outCounts = listReverse(_outCounts);
  _return: OMC_LABEL_UNUSED
  if (out_outCounts) { *out_outCounts = _outCounts; }
  if (out_outMax) { *out_outMax = _outMax; }
  omc_ret_ = _outPotentials;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getAllVarsWithMostImpAss(threadData_t *threadData, modelica_metatype _inPotentials, modelica_metatype _ass2, modelica_metatype _meT, modelica_metatype *out_outCounts, modelica_metatype *out_outMax)
{
  modelica_integer _outMax;
  modelica_metatype _outPotentials = NULL;
  modelica_metatype tmpMeta1;
  _outPotentials = omc_Tearing_getAllVarsWithMostImpAss(threadData, _inPotentials, _ass2, _meT, out_outCounts, &_outMax);
  /* skip box _outPotentials; list<#Integer> */
  /* skip box _outCounts; list<#Integer> */
  if (out_outMax) { *out_outMax = omc_mk_icon(_outMax); }
  return _outPotentials;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_sizeOfAssignable(threadData_t *threadData, modelica_integer _Eqn, modelica_metatype _me, modelica_metatype _ass1, modelica_integer _inSize)
{
  modelica_integer _outSize;
  modelica_metatype _vars = NULL;
  modelica_boolean _b;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSize has no default value.
  // _vars has no default value.
  // _b has no default value.
  _vars = omc_List_removeOnTrue(threadData, _ass1, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_me,_Eqn) /* DAE.ASUB */);

  _b = omc_Tearing_solvableLst(threadData, _vars);

  _outSize = (_b?((modelica_integer) 1) + _inSize:_inSize);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outSize;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_sizeOfAssignable(threadData_t *threadData, modelica_metatype _Eqn, modelica_metatype _me, modelica_metatype _ass1, modelica_metatype _inSize)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outSize;
  modelica_metatype out_outSize;
  tmp1 = omc_unbox_integer(_Eqn);
  tmp2 = omc_unbox_integer(_inSize);
  _outSize = omc_Tearing_sizeOfAssignable(threadData, tmp1, _me, _ass1, tmp2);
  out_outSize = omc_mk_icon(_outSize);
  return out_outSize;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getAllVarsWithMostPoints(threadData_t *threadData, modelica_metatype _inVarList, modelica_metatype _inPointsLst, modelica_metatype __omcQ_24in_5FoutVarList, modelica_integer __omcQ_24in_5FoutMax, modelica_integer *out_outMax)
{
  modelica_metatype _outVarList = NULL;
  modelica_integer _outMax;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVarList = __omcQ_24in_5FoutVarList;
  _outMax = __omcQ_24in_5FoutMax;
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _inVarList;
    tmp3_2 = _inPointsLst;
    {
      modelica_integer _p;
      modelica_integer _v;
      modelica_metatype _prest = NULL;
      modelica_metatype _vrest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _p has no default value.
      // _v has no default value.
      // _prest has no default value.
      // _vrest has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = omc_unbox_integer(tmpMeta5);
          if (!listEmpty(tmpMeta6)) goto tmp2_end;
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta8 = MMC_CAR(tmp3_2);
          tmpMeta9 = MMC_CDR(tmp3_2);
          tmp10 = omc_unbox_integer(tmpMeta8);
          if (!listEmpty(tmpMeta9)) goto tmp2_end;
          _v = tmp7  /* pattern as ty=Integer */;
          _p = tmp10  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          if((_p > _outMax))
          {
            _outMax = _p;

            tmpMeta11 = mmc_mk_cons(omc_mk_integer(_v), MMC_REFSTRUCTLIT(mmc_nil));
            _outVarList = tmpMeta11;
          }
          else
          {
            if((_p == _outMax))
            {
              tmpMeta12 = mmc_mk_cons(omc_mk_integer(_v), _outVarList);
              _outVarList = tmpMeta12;
            }
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta13 = MMC_CAR(tmp3_1);
          tmpMeta14 = MMC_CDR(tmp3_1);
          tmp15 = omc_unbox_integer(tmpMeta13);
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta16 = MMC_CAR(tmp3_2);
          tmpMeta17 = MMC_CDR(tmp3_2);
          tmp18 = omc_unbox_integer(tmpMeta16);
          _v = tmp15  /* pattern as ty=Integer */;
          _vrest = tmpMeta14;
          _p = tmp18  /* pattern as ty=Integer */;
          _prest = tmpMeta17;
          /* Pattern matching succeeded */
          if((_p > _outMax))
          {
            _outMax = _p;

            tmpMeta19 = mmc_mk_cons(omc_mk_integer(_v), MMC_REFSTRUCTLIT(mmc_nil));
            _outVarList = tmpMeta19;
          }
          else
          {
            if((_p == _outMax))
            {
              tmpMeta20 = mmc_mk_cons(omc_mk_integer(_v), _outVarList);
              _outVarList = tmpMeta20;
            }
          }

          _outVarList = omc_Tearing_getAllVarsWithMostPoints(threadData, _vrest, _prest, _outVarList, _outMax ,&_outMax);
          goto tmp2_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addCompilerError(threadData, _OMC_LIT136);

          goto goto_1;
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
  if (out_outMax) { *out_outMax = _outMax; }
  omc_ret_ = _outVarList;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getAllVarsWithMostPoints(threadData_t *threadData, modelica_metatype _inVarList, modelica_metatype _inPointsLst, modelica_metatype __omcQ_24in_5FoutVarList, modelica_metatype __omcQ_24in_5FoutMax, modelica_metatype *out_outMax)
{
  modelica_integer tmp1;
  modelica_integer _outMax;
  modelica_metatype _outVarList = NULL;
  tmp1 = omc_unbox_integer(__omcQ_24in_5FoutMax);
  _outVarList = omc_Tearing_getAllVarsWithMostPoints(threadData, _inVarList, _inPointsLst, __omcQ_24in_5FoutVarList, tmp1, &_outMax);
  /* skip box _outVarList; list<#Integer> */
  if (out_outMax) { *out_outMax = omc_mk_icon(_outMax); }
  return _outVarList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getOneVarWithMostPoints(threadData_t *threadData, modelica_metatype _inVarList, modelica_metatype _inPointsLst, modelica_integer *out_outMax)
{
  modelica_metatype _outVarList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _outMax;
  modelica_integer _index;
  modelica_integer tmp2;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVarList = tmpMeta1;
  // _outMax has no default value.
  _index = ((modelica_integer) 1);
  {
    modelica_integer __omcQ_24tmpVar25;
    modelica_integer __omcQ_24tmpVar24;
    modelica_integer tmp3;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _inPointsLst;
    __omcQ_24tmpVar25 = ((modelica_integer) -4611686018427387903); /* defaultValue */
    while(1) {
      tmp3 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp3--;
      }
      if (tmp3 == 0) {
        __omcQ_24tmpVar24 = omc_unbox_integer(_i);
        __omcQ_24tmpVar25 = modelica_integer_max((modelica_integer)(__omcQ_24tmpVar24),(modelica_integer)(__omcQ_24tmpVar25));
      } else if (tmp3 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    tmp2 = __omcQ_24tmpVar25;
  }
  _outMax = tmp2;

  {
    modelica_metatype _i;
    for (tmpMeta4 = _inPointsLst; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _i = MMC_CAR(tmpMeta4);
      if((omc_unbox_integer(_i) == _outMax))
      {
        tmpMeta5 = mmc_mk_cons(listGet(_inVarList, _index), MMC_REFSTRUCTLIT(mmc_nil));
        _outVarList = tmpMeta5;

        goto _return;
      }

      _index = ((modelica_integer) 1) + _index;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outMax) { *out_outMax = _outMax; }
  omc_ret_ = _outVarList;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getOneVarWithMostPoints(threadData_t *threadData, modelica_metatype _inVarList, modelica_metatype _inPointsLst, modelica_metatype *out_outMax)
{
  modelica_integer _outMax;
  modelica_metatype _outVarList = NULL;
  modelica_metatype tmpMeta1;
  _outVarList = omc_Tearing_getOneVarWithMostPoints(threadData, _inVarList, _inPointsLst, &_outMax);
  /* skip box _outVarList; list<#Integer> */
  if (out_outMax) { *out_outMax = omc_mk_icon(_outMax); }
  return _outVarList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectOneMostCausalizingVar(threadData_t *threadData, modelica_metatype _inMt, modelica_metatype _selVars, modelica_metatype _me, modelica_metatype _ass1In, modelica_metatype _selEqsSetArray, modelica_integer *out_outMax)
{
  modelica_metatype _cVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _outMax;
  modelica_metatype _row = NULL;
  modelica_integer _size;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cVars = tmpMeta1;
  _outMax = ((modelica_integer) 0);
  // _row has no default value.
  // _size has no default value.
  {
    modelica_metatype _var;
    for (tmpMeta2 = _selVars; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      _row = arrayGet(_inMt, omc_unbox_integer(_var));

      arrayUpdate(_ass1In, omc_unbox_integer(_var), omc_mk_integer(((modelica_integer) 1)));

      _size = ((modelica_integer) 0);

      {
        modelica_metatype _i;
        for (tmpMeta3 = _row; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _i = MMC_CAR(tmpMeta3);
          if(omc_unbox_boolean(arrayGet(_selEqsSetArray, omc_unbox_integer(_i))))
          {
            _size = omc_Tearing_sizeOfAssignable(threadData, omc_unbox_integer(_i), _me, _ass1In, _size);
          }
        }
      }

      arrayUpdate(_ass1In, omc_unbox_integer(_var), omc_mk_integer(((modelica_integer) -1)));

      if((_size >= _outMax))
      {
        tmpMeta5 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
        _cVars = tmpMeta5;

        _outMax = _size;
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT3))
      {
        tmp6 = stringAppend(_OMC_LIT133,intString(omc_unbox_integer(_var)));
        tmp7 = stringAppend(tmp6,_OMC_LIT137);
        tmp8 = stringAppend(tmp7,intString(_size));
        tmp9 = stringAppend(tmp8,_OMC_LIT138);
        fputs(omc_string_data(tmp9),stdout);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outMax) { *out_outMax = _outMax; }
  omc_ret_ = _cVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_selectOneMostCausalizingVar(threadData_t *threadData, modelica_metatype _inMt, modelica_metatype _selVars, modelica_metatype _me, modelica_metatype _ass1In, modelica_metatype _selEqsSetArray, modelica_metatype *out_outMax)
{
  modelica_integer _outMax;
  modelica_metatype _cVars = NULL;
  modelica_metatype tmpMeta1;
  _cVars = omc_Tearing_selectOneMostCausalizingVar(threadData, _inMt, _selVars, _me, _ass1In, _selEqsSetArray, &_outMax);
  /* skip box _cVars; list<#Integer> */
  if (out_outMax) { *out_outMax = omc_mk_icon(_outMax); }
  return _cVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectCausalizingVars(threadData_t *threadData, modelica_metatype _inMt, modelica_metatype _selVars, modelica_metatype _me, modelica_metatype _ass1In, modelica_metatype _selEqsSetArray, modelica_metatype *out_counts)
{
  modelica_metatype _cVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _counts = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _row = NULL;
  modelica_integer _size;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _counts = tmpMeta2;
  // _row has no default value.
  // _size has no default value.
  {
    modelica_metatype _var;
    for (tmpMeta3 = _selVars; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _var = MMC_CAR(tmpMeta3);
      _row = arrayGet(_inMt, omc_unbox_integer(_var));

      arrayUpdate(_ass1In, omc_unbox_integer(_var), omc_mk_integer(((modelica_integer) 1)));

      _size = ((modelica_integer) 0);

      {
        modelica_metatype _i;
        for (tmpMeta4 = _row; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
        {
          _i = MMC_CAR(tmpMeta4);
          if(omc_unbox_boolean(arrayGet(_selEqsSetArray, omc_unbox_integer(_i))))
          {
            _size = omc_Tearing_sizeOfAssignable(threadData, omc_unbox_integer(_i), _me, _ass1In, _size);
          }
        }
      }

      arrayUpdate(_ass1In, omc_unbox_integer(_var), omc_mk_integer(((modelica_integer) -1)));

      if((!(_size == ((modelica_integer) 0))))
      {
        tmpMeta6 = mmc_mk_cons(_var, _cVars);
        _cVars = tmpMeta6;

        tmpMeta7 = mmc_mk_cons(omc_mk_integer(_size), _counts);
        _counts = tmpMeta7;
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT3))
      {
        tmp8 = stringAppend(_OMC_LIT133,intString(omc_unbox_integer(_var)));
        tmp9 = stringAppend(tmp8,_OMC_LIT137);
        tmp10 = stringAppend(tmp9,intString(_size));
        tmp11 = stringAppend(tmp10,_OMC_LIT138);
        fputs(omc_string_data(tmp11),stdout);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_counts) { *out_counts = _counts; }
  omc_ret_ = _cVars;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectMostCausalizingVars(threadData_t *threadData, modelica_metatype _inMt, modelica_metatype _selVars, modelica_metatype _me, modelica_metatype _ass1In, modelica_metatype _selEqsSetArray, modelica_metatype *out_counts)
{
  modelica_metatype _cVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _counts = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _row = NULL;
  modelica_integer _size;
  modelica_integer _num;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _counts = tmpMeta2;
  // _row has no default value.
  // _size has no default value.
  _num = ((modelica_integer) 0);
  {
    modelica_metatype _var;
    for (tmpMeta3 = _selVars; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _var = MMC_CAR(tmpMeta3);
      _row = arrayGet(_inMt, omc_unbox_integer(_var));

      arrayUpdate(_ass1In, omc_unbox_integer(_var), omc_mk_integer(((modelica_integer) 1)));

      _size = ((modelica_integer) 0);

      {
        modelica_metatype _i;
        for (tmpMeta4 = _row; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
        {
          _i = MMC_CAR(tmpMeta4);
          if(omc_unbox_boolean(arrayGet(_selEqsSetArray, omc_unbox_integer(_i))))
          {
            _size = omc_Tearing_sizeOfAssignable(threadData, omc_unbox_integer(_i), _me, _ass1In, _size);
          }
        }
      }

      arrayUpdate(_ass1In, omc_unbox_integer(_var), omc_mk_integer(((modelica_integer) -1)));

      if((_size < _num))
      {
        tmpMeta6 = mmc_mk_cons(omc_mk_integer(_size), _counts);
        _counts = tmpMeta6;
      }
      else
      {
        if((_size == _num))
        {
          tmpMeta7 = mmc_mk_cons(_var, _cVars);
          _cVars = tmpMeta7;

          tmpMeta8 = mmc_mk_cons(omc_mk_integer(_size), _counts);
          _counts = tmpMeta8;
        }
        else
        {
          tmpMeta9 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
          _cVars = tmpMeta9;

          _num = _size;

          tmpMeta10 = mmc_mk_cons(omc_mk_integer(_size), _counts);
          _counts = tmpMeta10;
        }
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT3))
      {
        tmp11 = stringAppend(_OMC_LIT133,intString(omc_unbox_integer(_var)));
        tmp12 = stringAppend(tmp11,_OMC_LIT137);
        tmp13 = stringAppend(tmp12,intString(_size));
        tmp14 = stringAppend(tmp13,_OMC_LIT138);
        fputs(omc_string_data(tmp14),stdout);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_counts) { *out_counts = _counts; }
  omc_ret_ = _cVars;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData_t *threadData, modelica_metatype _selEqs, modelica_integer _ass1In_size)
{
  modelica_metatype _selEqsSetArray = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _selEqsSetArray has no default value.
  _selEqsSetArray = arrayCreate(_ass1In_size, omc_mk_boolean(0 /* false */));

  {
    modelica_metatype _e;
    for (tmpMeta1 = _selEqs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      arrayUpdate(_selEqsSetArray, omc_unbox_integer(_e), omc_mk_boolean(1 /* true */));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _selEqsSetArray;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_selectCausalVarsPrepareSelectionSet(threadData_t *threadData, modelica_metatype _selEqs, modelica_metatype _ass1In_size)
{
  modelica_integer tmp1;
  modelica_metatype _selEqsSetArray = NULL;
  tmp1 = omc_unbox_integer(_ass1In_size);
  _selEqsSetArray = omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selEqs, tmp1);
  /* skip box _selEqsSetArray; array<#Boolean> */
  return _selEqsSetArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_preferAvoidVariables(threadData_t *threadData, modelica_metatype _varsIn, modelica_metatype __omcQ_24in_5Fpoints, modelica_metatype _preferAvoidIn, modelica_real _factor)
{
  modelica_metatype _points = NULL;
  modelica_integer _preferAvoidVar;
  modelica_integer _pos;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _points = __omcQ_24in_5Fpoints;
  // _preferAvoidVar has no default value.
  // _pos has no default value.
  {
    modelica_metatype _preferAvoidVar;
    for (tmpMeta1 = _preferAvoidIn; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _preferAvoidVar = MMC_CAR(tmpMeta1);
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
              _pos = omc_List_position(threadData, _preferAvoidVar, _varsIn);

              _points = omc_List_set(threadData, _points, _pos, omc_mk_integer(((modelica_integer)floor((_factor) * (((modelica_real)omc_unbox_integer(listGet(_points, _pos))))))));
              goto tmp3_done;
            }
            case 1: {
              /* Pattern matching succeeded */
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
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _points;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_preferAvoidVariables(threadData_t *threadData, modelica_metatype _varsIn, modelica_metatype __omcQ_24in_5Fpoints, modelica_metatype _preferAvoidIn, modelica_metatype _factor)
{
  modelica_real tmp1;
  modelica_metatype _points = NULL;
  tmp1 = omc_unbox_real(_factor);
  _points = omc_Tearing_preferAvoidVariables(threadData, _varsIn, __omcQ_24in_5Fpoints, _preferAvoidIn, tmp1);
  /* skip box _points; list<#Integer> */
  return _points;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__4(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_metatype _potentials1 = NULL;
  modelica_metatype _potentials2 = NULL;
  modelica_metatype _potentials3 = NULL;
  modelica_metatype _potentials4 = NULL;
  modelica_metatype _potentials5 = NULL;
  modelica_metatype _potentials6 = NULL;
  modelica_metatype _potentials7 = NULL;
  modelica_metatype _potentials8 = NULL;
  modelica_metatype _potentials9 = NULL;
  modelica_metatype _potentials10 = NULL;
  modelica_metatype _selectedvars = NULL;
  modelica_metatype _count = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
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
  modelica_string tmp23;
  modelica_string tmp24;
  modelica_string tmp25;
  modelica_string tmp26;
  modelica_string tmp27;
  modelica_string tmp28;
  modelica_string tmp29;
  modelica_string tmp30;
  modelica_string tmp31;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _potentials1 has no default value.
  // _potentials2 has no default value.
  // _potentials3 has no default value.
  // _potentials4 has no default value.
  // _potentials5 has no default value.
  // _potentials6 has no default value.
  // _potentials7 has no default value.
  // _potentials8 has no default value.
  // _potentials9 has no default value.
  // _potentials10 has no default value.
  // _selectedvars has no default value.
  // _count has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT139),stdout);
  }

  _potentials1 = omc_Tearing_ModifiedCellierHeuristic__1(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT140),stdout);
  }

  _potentials2 = omc_Tearing_ModifiedCellierHeuristic__2(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT141),stdout);
  }

  _potentials3 = omc_Tearing_ModifiedCellierHeuristic__1__1(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT142),stdout);
  }

  _potentials4 = omc_Tearing_ModifiedCellierHeuristic__2__1(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT143),stdout);
  }

  _potentials5 = omc_Tearing_ModifiedCellierHeuristic__1__2(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT144),stdout);
  }

  _potentials6 = omc_Tearing_ModifiedCellierHeuristic__2__2(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT145),stdout);
  }

  _potentials7 = omc_Tearing_ModifiedCellierHeuristic__1__3(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT146),stdout);
  }

  _potentials8 = omc_Tearing_ModifiedCellierHeuristic__2__3(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT147),stdout);
  }

  _potentials9 = omc_Tearing_ModifiedCellierHeuristic__2__3__1(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT148),stdout);
  }

  _potentials10 = omc_Tearing_ModifiedCellierHeuristic__3(threadData, _mIn, _mtIn, _meIn, _metIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    tmp2 = stringAppend(_OMC_LIT149,stringDelimitList(omc_List_map(threadData, _potentials1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT10);
    fputs(omc_string_data(tmp3),stdout);

    tmp4 = stringAppend(_OMC_LIT150,stringDelimitList(omc_List_map(threadData, _potentials2, boxvar_intString), _OMC_LIT7));
    tmp5 = stringAppend(tmp4,_OMC_LIT10);
    fputs(omc_string_data(tmp5),stdout);

    tmp6 = stringAppend(_OMC_LIT151,stringDelimitList(omc_List_map(threadData, _potentials3, boxvar_intString), _OMC_LIT7));
    tmp7 = stringAppend(tmp6,_OMC_LIT10);
    fputs(omc_string_data(tmp7),stdout);

    tmp8 = stringAppend(_OMC_LIT152,stringDelimitList(omc_List_map(threadData, _potentials4, boxvar_intString), _OMC_LIT7));
    tmp9 = stringAppend(tmp8,_OMC_LIT10);
    fputs(omc_string_data(tmp9),stdout);

    tmp10 = stringAppend(_OMC_LIT153,stringDelimitList(omc_List_map(threadData, _potentials5, boxvar_intString), _OMC_LIT7));
    tmp11 = stringAppend(tmp10,_OMC_LIT10);
    fputs(omc_string_data(tmp11),stdout);

    tmp12 = stringAppend(_OMC_LIT154,stringDelimitList(omc_List_map(threadData, _potentials6, boxvar_intString), _OMC_LIT7));
    tmp13 = stringAppend(tmp12,_OMC_LIT10);
    fputs(omc_string_data(tmp13),stdout);

    tmp14 = stringAppend(_OMC_LIT155,stringDelimitList(omc_List_map(threadData, _potentials7, boxvar_intString), _OMC_LIT7));
    tmp15 = stringAppend(tmp14,_OMC_LIT10);
    fputs(omc_string_data(tmp15),stdout);

    tmp16 = stringAppend(_OMC_LIT156,stringDelimitList(omc_List_map(threadData, _potentials8, boxvar_intString), _OMC_LIT7));
    tmp17 = stringAppend(tmp16,_OMC_LIT10);
    fputs(omc_string_data(tmp17),stdout);

    tmp18 = stringAppend(_OMC_LIT157,stringDelimitList(omc_List_map(threadData, _potentials9, boxvar_intString), _OMC_LIT7));
    tmp19 = stringAppend(tmp18,_OMC_LIT10);
    fputs(omc_string_data(tmp19),stdout);

    tmp20 = stringAppend(_OMC_LIT158,stringDelimitList(omc_List_map(threadData, _potentials10, boxvar_intString), _OMC_LIT7));
    tmp21 = stringAppend(tmp20,_OMC_LIT35);
    fputs(omc_string_data(tmp21),stdout);
  }

  _selectedvars = listAppend(_potentials1, listAppend(_potentials2, listAppend(_potentials3, listAppend(_potentials4, listAppend(_potentials5, listAppend(_potentials6, listAppend(_potentials7, listAppend(_potentials8, listAppend(_potentials9, _potentials10)))))))));

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    tmp22 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedvars, boxvar_intString), _OMC_LIT7));
    tmp23 = stringAppend(tmp22,_OMC_LIT160);
    fputs(omc_string_data(tmp23),stdout);
  }

  _count = omc_Tearing_countMultiples(threadData, arrayCreate(((modelica_integer) 1), _selectedvars) ,&_selectedvars ,NULL);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    tmp24 = stringAppend(_OMC_LIT161,stringDelimitList(omc_List_map(threadData, _selectedvars, boxvar_intString), _OMC_LIT7));
    tmp25 = stringAppend(tmp24,_OMC_LIT162);
    tmp26 = stringAppend(tmp25,stringDelimitList(omc_List_map(threadData, _count, boxvar_intString), _OMC_LIT7));
    tmp27 = stringAppend(tmp26,_OMC_LIT163);
    fputs(omc_string_data(tmp27),stdout);
  }

  _edges = omc_Tearing_getVarOccurringInMostEquations(threadData, _mtIn, _selectedvars ,&_potentials);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    tmp28 = stringAppend(_OMC_LIT164,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp29 = stringAppend(tmp28,_OMC_LIT165);
    tmp30 = stringAppend(tmp29,intString(_edges));
    tmp31 = stringAppend(tmp30,_OMC_LIT166);
    fputs(omc_string_data(tmp31),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__3(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_integer _maxPoints;
  modelica_metatype _potentialTVars = NULL;
  modelica_metatype _potentialTVars2 = NULL;
  modelica_metatype _bestPotentialTVars = NULL;
  modelica_metatype _causEq = NULL;
  modelica_metatype _points = NULL;
  modelica_metatype _counts1 = NULL;
  modelica_metatype _counts2 = NULL;
  modelica_boolean _debug;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_string tmp15;
  modelica_metatype tmpMeta16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_string tmp19;
  modelica_string tmp20;
  modelica_string tmp21;
  modelica_string tmp22;
  modelica_string tmp23;
  modelica_string tmp24;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _maxPoints has no default value.
  // _potentialTVars has no default value.
  // _potentialTVars2 has no default value.
  // _bestPotentialTVars has no default value.
  // _causEq has no default value.
  // _points has no default value.
  // _counts1 has no default value.
  // _counts2 has no default value.
  _debug = 0 /* false */;
  _causEq = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _causEq, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT167);
    fputs(omc_string_data(tmp3),stdout);
  }

  _potentialTVars = omc_Tearing_getUnassigned(threadData, _ass1In);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp4 = stringAppend(_OMC_LIT161,stringDelimitList(omc_List_map(threadData, _potentialTVars, boxvar_intString), _OMC_LIT7));
    tmp5 = stringAppend(tmp4,_OMC_LIT168);
    fputs(omc_string_data(tmp5),stdout);
  }

  omc_List_intersection1OnTrue(threadData, _potentialTVars, _tSel_never, boxvar_intEq ,&_potentialTVars ,NULL);

  if(listEmpty(_potentialTVars))
  {
    omc_Error_addCompilerError(threadData, _OMC_LIT169);

    goto _return;
  }

  omc_List_intersection1OnTrue(threadData, _potentialTVars, _discreteVars, boxvar_intEq ,&_potentialTVars2 ,NULL);

  if(listEmpty(_potentialTVars2))
  {
    _potentialTVars2 = _potentialTVars;

    omc_Error_addCompilerWarning(threadData, _OMC_LIT171);

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp6 = stringAppend(_OMC_LIT164,stringDelimitList(omc_List_map(threadData, _potentialTVars2, boxvar_intString), _OMC_LIT7));
      tmp7 = stringAppend(tmp6,_OMC_LIT172);
      fputs(omc_string_data(tmp7),stdout);
    }
  }
  else
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp8 = stringAppend(_OMC_LIT164,stringDelimitList(omc_List_map(threadData, _potentialTVars2, boxvar_intString), _OMC_LIT7));
      tmp9 = stringAppend(tmp8,_OMC_LIT170);
      fputs(omc_string_data(tmp9),stdout);
    }
  }

  _potentialTVars = omc_Tearing_selectCausalizingVars(threadData, _mtIn, _potentialTVars2, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _causEq, arrayLength(_ass1In)) ,&_counts1);

  if(listEmpty(_potentialTVars))
  {
    _potentialTVars = _potentialTVars2;

    _counts1 = omc_List_fill(threadData, omc_mk_integer(((modelica_integer) 0)), listLength(_potentialTVars2));
  }

  omc_Tearing_getAllVarsWithMostImpAss(threadData, _potentialTVars, _ass2In, _metIn ,&_counts2 ,NULL);

  _points = omc_List_threadMap(threadData, _counts1, _counts2, boxvar_intAdd);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp10 = stringAppend(_OMC_LIT173,stringDelimitList(omc_List_map(threadData, listReverse(_points), boxvar_intString), _OMC_LIT7));
    tmp11 = stringAppend(tmp10,_OMC_LIT174);
    fputs(omc_string_data(tmp11),stdout);
  }

  if((!listEmpty(_tSel_prefer)))
  {
    _points = omc_Tearing_preferAvoidVariables(threadData, _potentialTVars, _points, _tSel_prefer, 3.0);

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp12 = stringAppend(_OMC_LIT175,stringDelimitList(omc_List_map(threadData, _points, boxvar_intString), _OMC_LIT7));
      tmp13 = stringAppend(tmp12,_OMC_LIT176);
      fputs(omc_string_data(tmp13),stdout);
    }
  }

  if((!listEmpty(_tSel_avoid)))
  {
    _points = omc_Tearing_preferAvoidVariables(threadData, _potentialTVars, _points, _tSel_avoid, 0.334);

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp14 = stringAppend(_OMC_LIT175,stringDelimitList(omc_List_map(threadData, _points, boxvar_intString), _OMC_LIT7));
      tmp15 = stringAppend(tmp14,_OMC_LIT177);
      fputs(omc_string_data(tmp15),stdout);
    }
  }

  tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
  _bestPotentialTVars = omc_Tearing_getAllVarsWithMostPoints(threadData, _potentialTVars, _points, tmpMeta16, ((modelica_integer) -1) ,&_maxPoints);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp17 = stringAppend(_OMC_LIT178,stringDelimitList(omc_List_map(threadData, _bestPotentialTVars, boxvar_intString), _OMC_LIT7));
    tmp18 = stringAppend(tmp17,_OMC_LIT179);
    tmp19 = stringAppend(tmp18,intString(_maxPoints));
    tmp20 = stringAppend(tmp19,_OMC_LIT180);
    fputs(omc_string_data(tmp20),stdout);
  }

  _edges = omc_Tearing_getVarOccurringInMostEquations(threadData, _mtIn, _bestPotentialTVars ,&_potentials);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp21 = stringAppend(_OMC_LIT181,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp22 = stringAppend(tmp21,_OMC_LIT182);
    tmp23 = stringAppend(tmp22,intString(_edges));
    tmp24 = stringAppend(tmp23,_OMC_LIT183);
    fputs(omc_string_data(tmp24),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2__3__1(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_integer _potpoints1;
  modelica_integer _potpoints2;
  modelica_metatype _varlst = NULL;
  modelica_metatype _selectedcols0 = NULL;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_metatype _potentials1 = NULL;
  modelica_metatype _potentials2 = NULL;
  modelica_metatype _counts1 = NULL;
  modelica_metatype _counts2 = NULL;
  modelica_metatype _points1 = NULL;
  modelica_metatype _points2 = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
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
  modelica_string tmp23;
  modelica_string tmp24;
  modelica_string tmp25;
  modelica_string tmp26;
  modelica_string tmp27;
  modelica_string tmp28;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _potpoints1 has no default value.
  // _potpoints2 has no default value.
  // _varlst has no default value.
  // _selectedcols0 has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  // _potentials1 has no default value.
  // _potentials2 has no default value.
  // _counts1 has no default value.
  // _counts2 has no default value.
  // _points1 has no default value.
  // _points2 has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT184),stdout);
  }

  _varlst = omc_Tearing_getUnassigned(threadData, _ass1In);

  omc_List_intersection1OnTrue(threadData, _varlst, _discreteVars, boxvar_intEq ,&_selectedcols0 ,NULL);

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols0 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT185);
    tmp4 = stringAppend(tmp3,intString(_edges));
    tmp5 = stringAppend(tmp4,_OMC_LIT183);
    fputs(omc_string_data(tmp5),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp6),stdout);
  }

  omc_Tearing_selectMostCausalizingVars(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)) ,&_counts1);

  _counts1 = listReverse(_counts1);

  omc_Tearing_getAllVarsWithMostImpAss(threadData, _selectedcols1, _ass2In, _metIn ,&_counts2 ,NULL);

  _points1 = omc_List_threadMap(threadData, _counts1, _counts2, boxvar_intAdd);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp7 = stringAppend(_OMC_LIT187,stringDelimitList(omc_List_map(threadData, _points1, boxvar_intString), _OMC_LIT7));
    tmp8 = stringAppend(tmp7,_OMC_LIT174);
    fputs(omc_string_data(tmp8),stdout);
  }

  _potentials1 = omc_Tearing_getOneVarWithMostPoints(threadData, _selectedcols1, _points1 ,&_potpoints1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp9 = stringAppend(_OMC_LIT188,stringDelimitList(omc_List_map(threadData, _potentials1, boxvar_intString), _OMC_LIT7));
    tmp10 = stringAppend(tmp9,_OMC_LIT189);
    tmp11 = stringAppend(tmp10,intString(_potpoints1));
    tmp12 = stringAppend(tmp11,_OMC_LIT190);
    fputs(omc_string_data(tmp12),stdout);
  }

  _selectedcols1 = omc_Tearing_findNEntries(threadData, _mtIn, _selectedcols0, ((modelica_integer) -1) + _edges);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp13 = stringAppend(_OMC_LIT191,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp14 = stringAppend(tmp13,_OMC_LIT192);
    tmp15 = stringAppend(tmp14,intString(((modelica_integer) -1) + _edges));
    tmp16 = stringAppend(tmp15,_OMC_LIT193);
    tmp17 = stringAppend(tmp16,stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7));
    tmp18 = stringAppend(tmp17,_OMC_LIT186);
    fputs(omc_string_data(tmp18),stdout);
  }

  if(listEmpty(_selectedcols1))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT194),stdout);
    }

    _potentials = _potentials1;

    _potpoints2 = ((modelica_integer) 0);
  }
  else
  {
    omc_Tearing_selectMostCausalizingVars(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)) ,&_counts1);

    _counts1 = listReverse(_counts1);

    omc_Tearing_getAllVarsWithMostImpAss(threadData, _selectedcols1, _ass2In, _metIn ,&_counts2 ,NULL);

    _points2 = omc_List_threadMap(threadData, _counts1, _counts2, boxvar_intAdd);

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp19 = stringAppend(_OMC_LIT187,stringDelimitList(omc_List_map(threadData, _points2, boxvar_intString), _OMC_LIT7));
      tmp20 = stringAppend(tmp19,_OMC_LIT174);
      fputs(omc_string_data(tmp20),stdout);
    }

    _potentials2 = omc_Tearing_getOneVarWithMostPoints(threadData, _selectedcols1, _points2 ,&_potpoints2);

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmp21 = stringAppend(_OMC_LIT188,stringDelimitList(omc_List_map(threadData, _potentials2, boxvar_intString), _OMC_LIT7));
      tmp22 = stringAppend(tmp21,_OMC_LIT189);
      tmp23 = stringAppend(tmp22,intString(_potpoints2));
      tmp24 = stringAppend(tmp23,_OMC_LIT190);
      fputs(omc_string_data(tmp24),stdout);
    }

    _potentials = ((_potpoints1 >= _potpoints2)?_potentials1:_potentials2);
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp25 = stringAppend(_OMC_LIT195,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp26 = stringAppend(tmp25,_OMC_LIT196);
    tmp27 = stringAppend(tmp26,((_potpoints1 >= _potpoints2)?_OMC_LIT125:_OMC_LIT126));
    tmp28 = stringAppend(tmp27,_OMC_LIT197);
    fputs(omc_string_data(tmp28),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2__3(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_integer _maxPoints;
  modelica_metatype _varlst = NULL;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_metatype _points = NULL;
  modelica_metatype _counts1 = NULL;
  modelica_metatype _counts2 = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _maxPoints has no default value.
  // _varlst has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  // _points has no default value.
  // _counts1 has no default value.
  // _counts2 has no default value.
  _varlst = omc_Tearing_getUnassigned(threadData, _ass1In);

  omc_List_intersection1OnTrue(threadData, _varlst, _discreteVars, boxvar_intEq ,&_selectedcols1 ,NULL);

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols1 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT185);
    tmp4 = stringAppend(tmp3,intString(_edges));
    tmp5 = stringAppend(tmp4,_OMC_LIT183);
    fputs(omc_string_data(tmp5),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp6),stdout);
  }

  omc_Tearing_selectMostCausalizingVars(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)) ,&_counts1);

  _counts1 = listReverse(_counts1);

  omc_Tearing_getAllVarsWithMostImpAss(threadData, _selectedcols1, _ass2In, _metIn ,&_counts2 ,NULL);

  _points = omc_List_threadMap(threadData, _counts1, _counts2, boxvar_intAdd);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp7 = stringAppend(_OMC_LIT187,stringDelimitList(omc_List_map(threadData, _points, boxvar_intString), _OMC_LIT7));
    tmp8 = stringAppend(tmp7,_OMC_LIT174);
    fputs(omc_string_data(tmp8),stdout);
  }

  _potentials = omc_Tearing_getOneVarWithMostPoints(threadData, _selectedcols1, _points ,&_maxPoints);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp9 = stringAppend(_OMC_LIT188,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp10 = stringAppend(tmp9,_OMC_LIT198);
    tmp11 = stringAppend(tmp10,intString(_maxPoints));
    tmp12 = stringAppend(tmp11,_OMC_LIT180);
    fputs(omc_string_data(tmp12),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__1__3(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_integer _maxPoints;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_metatype _points = NULL;
  modelica_metatype _counts1 = NULL;
  modelica_metatype _counts2 = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
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
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _maxPoints has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  // _points has no default value.
  // _counts1 has no default value.
  // _counts2 has no default value.
  _selectedcols1 = omc_Tearing_getUnassigned(threadData, _ass1In);

  _selectedcols1 = omc_Tearing_getVarsOfEqnsWithMostVars(threadData, _selectedcols1, _mIn, _mtIn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT10);
    fputs(omc_string_data(tmp3),stdout);
  }

  omc_List_intersection1OnTrue(threadData, _selectedcols1, _discreteVars, boxvar_intEq ,&_selectedcols1 ,NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp4 = stringAppend(_OMC_LIT199,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp5 = stringAppend(tmp4,_OMC_LIT200);
    fputs(omc_string_data(tmp5),stdout);
  }

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols1 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(_OMC_LIT161,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp7 = stringAppend(tmp6,_OMC_LIT201);
    tmp8 = stringAppend(tmp7,intString(_edges));
    tmp9 = stringAppend(tmp8,_OMC_LIT183);
    fputs(omc_string_data(tmp9),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp10 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp10),stdout);
  }

  omc_Tearing_selectMostCausalizingVars(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)) ,&_counts1);

  _counts1 = listReverse(_counts1);

  omc_Tearing_getAllVarsWithMostImpAss(threadData, _selectedcols1, _ass2In, _metIn ,&_counts2 ,NULL);

  _points = omc_List_threadMap(threadData, _counts1, _counts2, boxvar_intAdd);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp11 = stringAppend(_OMC_LIT187,stringDelimitList(omc_List_map(threadData, _points, boxvar_intString), _OMC_LIT7));
    tmp12 = stringAppend(tmp11,_OMC_LIT174);
    fputs(omc_string_data(tmp12),stdout);
  }

  _potentials = omc_Tearing_getOneVarWithMostPoints(threadData, _selectedcols1, _points ,&_maxPoints);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp13 = stringAppend(_OMC_LIT202,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp14 = stringAppend(tmp13,_OMC_LIT203);
    tmp15 = stringAppend(tmp14,intString(_maxPoints));
    tmp16 = stringAppend(tmp15,_OMC_LIT180);
    fputs(omc_string_data(tmp16),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2__2(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_metatype _varlst = NULL;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _varlst has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  _varlst = omc_Tearing_getUnassigned(threadData, _ass1In);

  omc_List_intersection1OnTrue(threadData, _varlst, _discreteVars, boxvar_intEq ,&_selectedcols1 ,NULL);

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols1 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT185);
    tmp4 = stringAppend(tmp3,intString(_edges));
    tmp5 = stringAppend(tmp4,_OMC_LIT183);
    fputs(omc_string_data(tmp5),stdout);
  }

  _selectedcols1 = omc_Tearing_getAllVarsWithMostImpAss(threadData, _selectedcols1, _ass2In, _metIn, NULL, NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(_OMC_LIT188,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp7 = stringAppend(tmp6,_OMC_LIT204);
    fputs(omc_string_data(tmp7),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp8 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp8),stdout);
  }

  _potentials = omc_Tearing_selectOneMostCausalizingVar(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)) ,&_edges);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp9 = stringAppend(_OMC_LIT202,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp10 = stringAppend(tmp9,_OMC_LIT205);
    tmp11 = stringAppend(tmp10,intString(_edges));
    tmp12 = stringAppend(tmp11,_OMC_LIT180);
    fputs(omc_string_data(tmp12),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__1__2(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
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
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  _selectedcols1 = omc_Tearing_getUnassigned(threadData, _ass1In);

  _selectedcols1 = omc_Tearing_getVarsOfEqnsWithMostVars(threadData, _selectedcols1, _mIn, _mtIn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT10);
    fputs(omc_string_data(tmp3),stdout);
  }

  omc_List_intersection1OnTrue(threadData, _selectedcols1, _discreteVars, boxvar_intEq ,&_selectedcols1 ,NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp4 = stringAppend(_OMC_LIT199,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp5 = stringAppend(tmp4,_OMC_LIT200);
    fputs(omc_string_data(tmp5),stdout);
  }

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols1 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(_OMC_LIT161,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp7 = stringAppend(tmp6,_OMC_LIT201);
    tmp8 = stringAppend(tmp7,intString(_edges));
    tmp9 = stringAppend(tmp8,_OMC_LIT183);
    fputs(omc_string_data(tmp9),stdout);
  }

  _selectedcols1 = omc_Tearing_getAllVarsWithMostImpAss(threadData, _selectedcols1, _ass2In, _metIn, NULL, NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp10 = stringAppend(_OMC_LIT202,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp11 = stringAppend(tmp10,_OMC_LIT206);
    fputs(omc_string_data(tmp11),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp12 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp12),stdout);
  }

  _potentials = omc_Tearing_selectOneMostCausalizingVar(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)) ,&_edges);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp13 = stringAppend(_OMC_LIT207,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp14 = stringAppend(tmp13,_OMC_LIT208);
    tmp15 = stringAppend(tmp14,intString(_edges));
    tmp16 = stringAppend(tmp15,_OMC_LIT180);
    fputs(omc_string_data(tmp16),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2__1(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_metatype _varlst = NULL;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _varlst has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  _varlst = omc_Tearing_getUnassigned(threadData, _ass1In);

  omc_List_intersection1OnTrue(threadData, _varlst, _discreteVars, boxvar_intEq ,&_selectedcols1 ,NULL);

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols1 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT185);
    tmp4 = stringAppend(tmp3,intString(_edges));
    tmp5 = stringAppend(tmp4,_OMC_LIT183);
    fputs(omc_string_data(tmp5),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp6),stdout);
  }

  _potentials = omc_Tearing_selectMostCausalizingVars(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)), NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp7 = stringAppend(_OMC_LIT188,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp8 = stringAppend(tmp7,_OMC_LIT209);
    fputs(omc_string_data(tmp8),stdout);
  }

  _potentials = omc_Tearing_getOneVarWithMostImpAss(threadData, _potentials, _ass2In, _metIn ,&_edges);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp9 = stringAppend(_OMC_LIT202,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp10 = stringAppend(tmp9,_OMC_LIT210);
    tmp11 = stringAppend(tmp10,intString(_edges));
    tmp12 = stringAppend(tmp11,_OMC_LIT180);
    fputs(omc_string_data(tmp12),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__1__1(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
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
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  _selectedcols1 = omc_Tearing_getUnassigned(threadData, _ass1In);

  _selectedcols1 = omc_Tearing_getVarsOfEqnsWithMostVars(threadData, _selectedcols1, _mIn, _mtIn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT10);
    fputs(omc_string_data(tmp3),stdout);
  }

  omc_List_intersection1OnTrue(threadData, _selectedcols1, _discreteVars, boxvar_intEq ,&_selectedcols1 ,NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp4 = stringAppend(_OMC_LIT199,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp5 = stringAppend(tmp4,_OMC_LIT200);
    fputs(omc_string_data(tmp5),stdout);
  }

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols1 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(_OMC_LIT161,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp7 = stringAppend(tmp6,_OMC_LIT201);
    tmp8 = stringAppend(tmp7,intString(_edges));
    tmp9 = stringAppend(tmp8,_OMC_LIT183);
    fputs(omc_string_data(tmp9),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp10 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp10),stdout);
  }

  _potentials = omc_Tearing_selectMostCausalizingVars(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)), NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp11 = stringAppend(_OMC_LIT202,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp12 = stringAppend(tmp11,_OMC_LIT211);
    fputs(omc_string_data(tmp12),stdout);
  }

  _potentials = omc_Tearing_getOneVarWithMostImpAss(threadData, _potentials, _ass2In, _metIn ,&_edges);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp13 = stringAppend(_OMC_LIT207,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp14 = stringAppend(tmp13,_OMC_LIT212);
    tmp15 = stringAppend(tmp14,intString(_edges));
    tmp16 = stringAppend(tmp15,_OMC_LIT180);
    fputs(omc_string_data(tmp16),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__2(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_metatype _varlst = NULL;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _varlst has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  _varlst = omc_Tearing_getUnassigned(threadData, _ass1In);

  omc_List_intersection1OnTrue(threadData, _varlst, _discreteVars, boxvar_intEq ,&_selectedcols1 ,NULL);

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols1 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT185);
    tmp4 = stringAppend(tmp3,intString(_edges));
    tmp5 = stringAppend(tmp4,_OMC_LIT183);
    fputs(omc_string_data(tmp5),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp6),stdout);
  }

  _potentials = omc_Tearing_selectOneMostCausalizingVar(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)) ,&_edges);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp7 = stringAppend(_OMC_LIT188,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp8 = stringAppend(tmp7,_OMC_LIT213);
    tmp9 = stringAppend(tmp8,intString(_edges));
    tmp10 = stringAppend(tmp9,_OMC_LIT180);
    fputs(omc_string_data(tmp10),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_ModifiedCellierHeuristic__1(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _metIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _potentials = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _edges;
  modelica_metatype _selectedcols1 = NULL;
  modelica_metatype _selectedrows = NULL;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _potentials = tmpMeta1;
  // _edges has no default value.
  // _selectedcols1 has no default value.
  // _selectedrows has no default value.
  _selectedcols1 = omc_Tearing_getUnassigned(threadData, _ass1In);

  _selectedcols1 = omc_Tearing_getVarsOfEqnsWithMostVars(threadData, _selectedcols1, _mIn, _mtIn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp2 = stringAppend(_OMC_LIT159,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT10);
    fputs(omc_string_data(tmp3),stdout);
  }

  omc_List_intersection1OnTrue(threadData, _selectedcols1, _discreteVars, boxvar_intEq ,&_selectedcols1 ,NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp4 = stringAppend(_OMC_LIT199,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp5 = stringAppend(tmp4,_OMC_LIT200);
    fputs(omc_string_data(tmp5),stdout);
  }

  _edges = omc_Tearing_getVarsOccurringInMostEquations(threadData, _mtIn, _selectedcols1 ,&_selectedcols1);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp6 = stringAppend(_OMC_LIT161,stringDelimitList(omc_List_map(threadData, _selectedcols1, boxvar_intString), _OMC_LIT7));
    tmp7 = stringAppend(tmp6,_OMC_LIT201);
    tmp8 = stringAppend(tmp7,intString(_edges));
    tmp9 = stringAppend(tmp8,_OMC_LIT183);
    fputs(omc_string_data(tmp9),stdout);
  }

  _selectedrows = omc_Tearing_traverseSingleEqnsforAssignable(threadData, _ass2In, _mIn, _mapEqnIncRow, _mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp10 = stringAppend(stringDelimitList(omc_List_map(threadData, _selectedrows, boxvar_intString), _OMC_LIT7),_OMC_LIT186);
    fputs(omc_string_data(tmp10),stdout);
  }

  _potentials = omc_Tearing_selectOneMostCausalizingVar(threadData, _mtIn, _selectedcols1, _meIn, _ass1In, omc_Tearing_selectCausalVarsPrepareSelectionSet(threadData, _selectedrows, arrayLength(_ass1In)) ,&_edges);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp11 = stringAppend(_OMC_LIT202,stringDelimitList(omc_List_map(threadData, _potentials, boxvar_intString), _OMC_LIT7));
    tmp12 = stringAppend(tmp11,_OMC_LIT205);
    tmp13 = stringAppend(tmp12,intString(_edges));
    tmp14 = stringAppend(tmp13,_OMC_LIT180);
    fputs(omc_string_data(tmp14),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _potentials;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_selectTearingVar(threadData_t *threadData, modelica_metatype _me, modelica_metatype _meT, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_integer _OutTVar;
  modelica_metatype _potentials = NULL;
  modelica_string _heuristic = NULL;
  modelica_fnptr _tearingHeuristic;
  modelica_fnptr tmp1 = 0;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _OutTVar has no default value.
  // _potentials has no default value.
  // _heuristic has no default value.
  omc_string_store(&(_heuristic), omc_Config_getTearingHeuristic(threadData));

  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _heuristic;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 12; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (3 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT217), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__1;
          goto tmp3_done;
        }
        case 1: {
          if (3 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT218), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__2;
          goto tmp3_done;
        }
        case 2: {
          if (4 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT219), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__1__1;
          goto tmp3_done;
        }
        case 3: {
          if (4 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT220), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__2__1;
          goto tmp3_done;
        }
        case 4: {
          if (4 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT221), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__1__2;
          goto tmp3_done;
        }
        case 5: {
          if (4 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT222), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__2__2;
          goto tmp3_done;
        }
        case 6: {
          if (4 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT223), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__1__3;
          goto tmp3_done;
        }
        case 7: {
          if (4 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT224), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__2__3;
          goto tmp3_done;
        }
        case 8: {
          if (5 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT225), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__2__3__1;
          goto tmp3_done;
        }
        case 9: {
          if (3 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT226), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__3;
          goto tmp3_done;
        }
        case 10: {
          if (3 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT227), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_Tearing_ModifiedCellierHeuristic__4;
          goto tmp3_done;
        }
        case 11: {
          modelica_string tmp6;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT214,_heuristic);
          omc_Error_addInternalError(threadData, tmp6, _OMC_LIT216);
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
  _tearingHeuristic = (modelica_fnptr) tmp1;

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT228),stdout);

    tmp7 = stringAppend(_OMC_LIT229,_heuristic);
    tmp8 = stringAppend(tmp7,_OMC_LIT230);
    fputs(omc_string_data(tmp8),stdout);
  }

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp11;
      int tmp12;
      tmp11 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp10_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp11 < 2; tmp11++) {
        switch (MMC_SWITCH_CAST(tmp11)) {
        case 0: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          /* Pattern matching succeeded */
          _potentials = (OMC_BOX_FIELD(_tearingHeuristic, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_tearingHeuristic, 1))) (threadData, (OMC_BOX_FIELD(_tearingHeuristic, 2)), _m, _mt, _me, _meT, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_tearingHeuristic, 1))) (threadData, _m, _mt, _me, _meT, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

          /* Pattern-matching assignment */
          tmpMeta13 = _potentials;
          if (listEmpty(tmpMeta13)) goto goto_9;
          tmpMeta14 = MMC_CAR(tmpMeta13);
          tmpMeta15 = MMC_CDR(tmpMeta13);
          tmp16 = omc_unbox_integer(tmpMeta14);
          if (!listEmpty(tmpMeta15)) goto goto_9;
          _OutTVar = tmp16  /* pattern as ty=Integer */;
          goto tmp10_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          fputs(omc_string_data(_OMC_LIT231),stdout);

          omc_Error_addCompilerWarning(threadData, _OMC_LIT232);

          goto goto_9;
          goto tmp10_done;
        }
        }
        goto tmp10_end;
        tmp10_end: ;
      }
      goto goto_9;
      tmp10_done:
      (void)tmp11;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp10_done2;
      goto_9:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp11 < 2) {
        goto tmp10_top;
      }
      OMC_THROW_INTERNAL();
      tmp10_done2:;
    }
  }
  ;

  if(listMember(omc_mk_integer(_OutTVar), _tSel_avoid))
  {
    omc_Error_addCompilerWarning(threadData, _OMC_LIT233);
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT234),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _OutTVar;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_selectTearingVar(threadData_t *threadData, modelica_metatype _me, modelica_metatype _meT, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _discreteVars, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_integer _OutTVar;
  modelica_metatype out_OutTVar;
  _OutTVar = omc_Tearing_selectTearingVar(threadData, _me, _meT, _m, _mt, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);
  out_OutTVar = omc_mk_icon(_OutTVar);
  return out_OutTVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_CellierTearing2(threadData_t *threadData, modelica_boolean _inCausal, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _Unsolvables, modelica_metatype _tvarsIn, modelica_metatype _discreteVars, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_boolean _forceDegree1, modelica_metatype *out_orderOut)
{
  modelica_metatype _OutTVars = NULL;
  modelica_metatype _orderOut = NULL;
  modelica_boolean _debug;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _OutTVars has no default value.
  // _orderOut has no default value.
  _debug = 0 /* false */;
  if(_inCausal)
  {
    _OutTVars = _tvarsIn;

    _orderOut = _orderIn;

    goto _return;
  }

  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _Unsolvables;
    tmp4_2 = _tSel_always;
    {
      modelica_integer _tvar;
      modelica_metatype _tvars = NULL;
      modelica_metatype _unsolvables = NULL;
      modelica_metatype _tVar_never = NULL;
      modelica_metatype _tVar_discrete = NULL;
      modelica_metatype _order = NULL;
      modelica_boolean _causal;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tvar has no default value.
      // _tvars has no default value.
      // _unsolvables has no default value.
      // _tVar_never has no default value.
      // _tVar_discrete has no default value.
      // _order has no default value.
      // _causal has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
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
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT235),stdout);
          }

          _tvar = omc_Tearing_selectTearingVar(threadData, _meIn, _meTIn, _mIn, _mtIn, _ass1In, _ass2In, _discreteVars, _tSel_prefer, _tSel_avoid, _tSel_never, _mapEqnIncRow, _mapIncRowEqn);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT236),stdout);
          }

          arrayUpdate(_ass1In, _tvar, omc_mk_integer((((modelica_integer) 2)) * (arrayLength(_ass1In))));

          tmpMeta6 = mmc_mk_cons(omc_mk_integer(_tvar), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData, _mIn, _mtIn, tmpMeta6);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT237),stdout);

            omc_BackendDump_dumpAdjacencyMatrix(threadData, _mIn);
          }

          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Array_replaceAtWithFill(threadData, _tvar, tmpMeta7, tmpMeta8, _mtIn);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            omc_BackendDump_dumpAdjacencyMatrixT(threadData, _mtIn);

            fputs(omc_string_data(_OMC_LIT238),stdout);
          }

          tmpMeta9 = mmc_mk_cons(omc_mk_integer(_tvar), _tvarsIn);
          _tvars = tmpMeta9;

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT239),stdout);
          }

          _order = omc_Tearing_TarjanMatching(threadData, _mIn, _mtIn, _meIn, _meTIn, _ass1In, _ass2In, _orderIn, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, _forceDegree1 ,&_causal);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT240),stdout);

            tmp10 = stringAppend(_OMC_LIT241,stringDelimitList(omc_List_mapArray(threadData, _ass1In, boxvar_intString), _OMC_LIT7));
            tmp11 = stringAppend(tmp10,_OMC_LIT10);
            fputs(omc_string_data(tmp11),stdout);

            tmp12 = stringAppend(_OMC_LIT242,stringDelimitList(omc_List_mapArray(threadData, _ass2In, boxvar_intString), _OMC_LIT7));
            tmp13 = stringAppend(tmp12,_OMC_LIT10);
            fputs(omc_string_data(tmp13),stdout);

            tmp14 = stringAppend(_OMC_LIT243,stringDelimitList(omc_List_map(threadData, _order, boxvar_intString), _OMC_LIT7));
            tmp15 = stringAppend(tmp14,_OMC_LIT10);
            tmp16 = stringAppend(tmp15,_OMC_LIT72);
            tmp17 = stringAppend(tmp16,_OMC_LIT35);
            fputs(omc_string_data(tmp17),stdout);
          }

          if((_causal && (omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3))))
          {
            fputs(omc_string_data(_OMC_LIT10),stdout);

            omc_BackendDump_dumpMatching(threadData, _ass1In);

            tmp18 = stringAppend(_OMC_LIT244,stringDelimitList(omc_List_map(threadData, _order, boxvar_intString), _OMC_LIT7));
            tmp19 = stringAppend(tmp18,_OMC_LIT10);
            tmp20 = stringAppend(tmp19,_OMC_LIT245);
            tmp21 = stringAppend(tmp20,_OMC_LIT35);
            fputs(omc_string_data(tmp21),stdout);
          }

          _unsolvables = omc_Tearing_getUnsolvableVarsConsiderMatching(threadData, arrayLength(_meTIn), _meTIn, _ass1In, _ass2In);

          omc_List_intersection1OnTrue(threadData, _unsolvables, _tvars, boxvar_intEq ,&_unsolvables ,NULL);
          /* Tail recursive call */
          _inCausal = _causal;
          _Unsolvables = _unsolvables;
          _tvarsIn = _tvars;
          _orderIn = _order;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
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
          modelica_metatype tmpMeta38;
          
          /* Pattern matching succeeded */
          _tvars = omc_List_unique(threadData, listAppend(_Unsolvables, _tSel_always));

          _tVar_never = omc_List_intersectionOnTrue(threadData, _tSel_never, _tvars, boxvar_intEq);

          _tVar_discrete = omc_List_intersectionOnTrue(threadData, _discreteVars, _tvars, boxvar_intEq);

          if((!listEmpty(_tVar_never)))
          {
            omc_Error_addCompilerWarning(threadData, _OMC_LIT246);
          }

          if((!listEmpty(_tVar_discrete)))
          {
            omc_Error_addCompilerWarning(threadData, _OMC_LIT247);
          }

          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            tmp22 = stringAppend(_OMC_LIT248,stringDelimitList(omc_List_map(threadData, _Unsolvables, boxvar_intString), _OMC_LIT7));
            tmp23 = stringAppend(tmp22,_OMC_LIT10);
            fputs(omc_string_data(tmp23),stdout);

            tmp24 = stringAppend(_OMC_LIT249,stringDelimitList(omc_List_map(threadData, _tSel_always, boxvar_intString), _OMC_LIT7));
            tmp25 = stringAppend(tmp24,_OMC_LIT10);
            fputs(omc_string_data(tmp25),stdout);
          }

          omc_Tearing_markTVarsOrResiduals(threadData, _tvars, _ass1In);

          omc_Tearing_deleteEntriesFromAdjacencyMatrix(threadData, _mIn, _mtIn, _tvars);

          omc_Tearing_deleteRowsFromAdjacencyMatrix(threadData, _mtIn, _tvars);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT250),stdout);

            omc_BackendDump_dumpAdjacencyMatrix(threadData, _mIn);

            omc_BackendDump_dumpAdjacencyMatrixT(threadData, _mtIn);

            fputs(omc_string_data(_OMC_LIT251),stdout);

            fputs(omc_string_data(_OMC_LIT239),stdout);
          }

          _tvars = listAppend(_tvars, _tvarsIn);

          _order = omc_Tearing_TarjanMatching(threadData, _mIn, _mtIn, _meIn, _meTIn, _ass1In, _ass2In, _orderIn, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, _forceDegree1 ,&_causal);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT240),stdout);

            tmp26 = stringAppend(_OMC_LIT241,stringDelimitList(omc_List_mapArray(threadData, _ass1In, boxvar_intString), _OMC_LIT7));
            tmp27 = stringAppend(tmp26,_OMC_LIT10);
            fputs(omc_string_data(tmp27),stdout);

            tmp28 = stringAppend(_OMC_LIT242,stringDelimitList(omc_List_mapArray(threadData, _ass2In, boxvar_intString), _OMC_LIT7));
            tmp29 = stringAppend(tmp28,_OMC_LIT10);
            fputs(omc_string_data(tmp29),stdout);

            tmp30 = stringAppend(_OMC_LIT243,stringDelimitList(omc_List_map(threadData, _order, boxvar_intString), _OMC_LIT7));
            tmp31 = stringAppend(tmp30,_OMC_LIT10);
            tmp32 = stringAppend(tmp31,_OMC_LIT72);
            tmp33 = stringAppend(tmp32,_OMC_LIT35);
            fputs(omc_string_data(tmp33),stdout);
          }

          if((_causal && (omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3))))
          {
            fputs(omc_string_data(_OMC_LIT10),stdout);

            omc_BackendDump_dumpMatching(threadData, _ass1In);

            tmp34 = stringAppend(_OMC_LIT244,stringDelimitList(omc_List_map(threadData, _order, boxvar_intString), _OMC_LIT7));
            tmp35 = stringAppend(tmp34,_OMC_LIT10);
            tmp36 = stringAppend(tmp35,_OMC_LIT245);
            tmp37 = stringAppend(tmp36,_OMC_LIT35);
            fputs(omc_string_data(tmp37),stdout);
          }

          _unsolvables = omc_Tearing_getUnsolvableVarsConsiderMatching(threadData, arrayLength(_meTIn), _meTIn, _ass1In, _ass2In);

          omc_List_intersection1OnTrue(threadData, _unsolvables, _tvars, boxvar_intEq ,&_unsolvables ,NULL);
          tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
          /* Tail recursive call */
          _inCausal = _causal;
          _Unsolvables = _unsolvables;
          _tvarsIn = _tvars;
          _tSel_always = tmpMeta38;
          _orderIn = _order;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _OutTVars = tmpMeta[0+0];
  _orderOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_orderOut) { *out_orderOut = _orderOut; }
  omc_ret_ = _OutTVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_CellierTearing2(threadData_t *threadData, modelica_metatype _inCausal, modelica_metatype _mIn, modelica_metatype _mtIn, modelica_metatype _meIn, modelica_metatype _meTIn, modelica_metatype _ass1In, modelica_metatype _ass2In, modelica_metatype _Unsolvables, modelica_metatype _tvarsIn, modelica_metatype _discreteVars, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _orderIn, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _eqnNonlinPoints, modelica_metatype _forceDegree1, modelica_metatype *out_orderOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _OutTVars = NULL;
  tmp1 = omc_unbox_integer(_inCausal);
  tmp2 = omc_unbox_integer(_forceDegree1);
  _OutTVars = omc_Tearing_CellierTearing2(threadData, tmp1, _mIn, _mtIn, _meIn, _meTIn, _ass1In, _ass2In, _Unsolvables, _tvarsIn, _discreteVars, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _orderIn, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, tmp2, out_orderOut);
  /* skip box _OutTVars; list<#Integer> */
  /* skip box _orderOut; list<#Integer> */
  return _OutTVars;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_nonlinearityWeight(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_integer _weight;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _weight has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _entry;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,1) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          if (1 /* true */ != tmp11) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 10);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,3,1) == 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 2);
          tmp14 = omc_unbox_integer(tmpMeta13);
          if (0 /* false */ != tmp14) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 20);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          tmpMeta15 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,4,1) == 0) goto tmp3_end;
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
          tmp17 = omc_unbox_integer(tmpMeta16);
          if (1 /* true */ != tmp17) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 20);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          tmpMeta18 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,4,1) == 0) goto tmp3_end;
          tmpMeta19 = OMC_BOX_FIELD(tmpMeta18, 2);
          tmp20 = omc_unbox_integer(tmpMeta19);
          if (0 /* false */ != tmp20) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 50);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta21;
          tmpMeta21 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,5,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 50);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta22;
          tmpMeta22 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,6,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 100);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _weight = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _weight;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_nonlinearityWeight(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_integer _weight;
  modelica_metatype out_weight;
  _weight = omc_Tearing_nonlinearityWeight(threadData, _entry);
  out_weight = omc_mk_icon(_weight);
  return out_weight;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getEquationNonlinearityPoints(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqnNonlinPoints, modelica_metatype _me, modelica_integer _size)
{
  modelica_metatype _eqnNonlinPoints = NULL;
  modelica_metatype _row = NULL;
  modelica_integer _sum;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqnNonlinPoints = __omcQ_24in_5FeqnNonlinPoints;
  // _row has no default value.
  // _sum has no default value.
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _size;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {

      _row = arrayGet(_me,_i) /* DAE.ASUB */;

      _sum = ((modelica_integer) 0);

      {
        modelica_metatype _entry;
        for (tmpMeta1 = _row; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
        {
          _entry = MMC_CAR(tmpMeta1);
          _sum = _sum + omc_Tearing_nonlinearityWeight(threadData, _entry);
        }
      }

      arrayUpdate(_eqnNonlinPoints,_i,omc_mk_integer(_sum));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqnNonlinPoints;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getEquationNonlinearityPoints(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqnNonlinPoints, modelica_metatype _me, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _eqnNonlinPoints = NULL;
  tmp1 = omc_unbox_integer(_size);
  _eqnNonlinPoints = omc_Tearing_getEquationNonlinearityPoints(threadData, __omcQ_24in_5FeqnNonlinPoints, _me, tmp1);
  /* skip box _eqnNonlinPoints; array<#Integer> */
  return _eqnNonlinPoints;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findCSE(threadData_t *threadData, modelica_metatype _inVars)
{
  modelica_metatype _cseVarsOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cseVarsOut = tmpMeta1;
  _index = ((modelica_integer) 1);
  {
    modelica_metatype _var;
    for (tmpMeta2 = _inVars; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      if(omc_BackendVariable_isCSEVar(threadData, _var))
      {
        tmpMeta3 = mmc_mk_cons(omc_mk_integer(_index), _cseVarsOut);
        _cseVarsOut = tmpMeta3;
      }

      _index = ((modelica_integer) 1) + _index;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cseVarsOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findDiscreteWarnTearingSelect(threadData_t *threadData, modelica_metatype _inVars)
{
  modelica_metatype _discreteVarsOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _discreteVarsOut = tmpMeta1;
  _index = ((modelica_integer) 1);
  {
    modelica_metatype _var;
    for (tmpMeta2 = _inVars; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      if(omc_BackendVariable_isVarDiscrete(threadData, _var))
      {
        tmpMeta3 = mmc_mk_cons(omc_mk_integer(_index), _discreteVarsOut);
        _discreteVarsOut = tmpMeta3;

        { /* match expression */
          modelica_metatype tmp6_1;
          tmp6_1 = (OMC_BOX_FIELD(_var, 12));
          {
            volatile mmc_switch_type tmp6;
            int tmp7;
            tmp6 = 0;
            for (; tmp6 < 3; tmp6++) {
              switch (MMC_SWITCH_CAST(tmp6)) {
              case 0: {
                modelica_metatype tmpMeta8;
                modelica_metatype tmpMeta9;
                modelica_string tmp10;
                if (optionNone(tmp6_1)) goto tmp5_end;
                tmpMeta8 = OMC_BOX_FIELD(tmp6_1, 1);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,4,0) == 0) goto tmp5_end;
                /* Pattern matching succeeded */
                tmp10 = stringAppend(_OMC_LIT256,omc_BackendDump_varString(threadData, _var));
                tmpMeta9 = mmc_mk_cons(tmp10, MMC_REFSTRUCTLIT(mmc_nil));
                omc_Error_addSourceMessage(threadData, _OMC_LIT255, tmpMeta9, omc_ElementSource_getInfo(threadData, (OMC_BOX_FIELD(_var, 10))));
                goto tmp5_done;
              }
              case 1: {
                modelica_metatype tmpMeta11;
                modelica_metatype tmpMeta12;
                modelica_string tmp13;
                if (optionNone(tmp6_1)) goto tmp5_end;
                tmpMeta11 = OMC_BOX_FIELD(tmp6_1, 1);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,0) == 0) goto tmp5_end;
                /* Pattern matching succeeded */
                tmp13 = stringAppend(_OMC_LIT257,omc_BackendDump_varString(threadData, _var));
                tmpMeta12 = mmc_mk_cons(tmp13, MMC_REFSTRUCTLIT(mmc_nil));
                omc_Error_addSourceMessage(threadData, _OMC_LIT255, tmpMeta12, omc_ElementSource_getInfo(threadData, (OMC_BOX_FIELD(_var, 10))));
                goto tmp5_done;
              }
              case 2: {
                
                /* Pattern matching succeeded */
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
        ;
      }

      _index = ((modelica_integer) 1) + _index;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _discreteVarsOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findDiscrete(threadData_t *threadData, modelica_metatype _inVars)
{
  modelica_metatype _discreteVarsOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _discreteVarsOut = tmpMeta1;
  _index = ((modelica_integer) 1);
  {
    modelica_metatype _var;
    for (tmpMeta2 = _inVars; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      if(omc_BackendVariable_isVarDiscrete(threadData, _var))
      {
        tmpMeta3 = mmc_mk_cons(omc_mk_integer(_index), _discreteVarsOut);
        _discreteVarsOut = tmpMeta3;
      }

      _index = ((modelica_integer) 1) + _index;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _discreteVarsOut;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_Tearing_deleteNegativeEntries(threadData_t *threadData, modelica_metatype _rowIn)
{
  modelica_metatype _rowOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rowOut has no default value.
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _r_loopVar = 0;
    modelica_metatype _r;
    _r_loopVar = _rowIn;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_r_loopVar)) {
        _r = MMC_CAR(_r_loopVar);
        _r_loopVar = MMC_CDR(_r_loopVar);
        if ((omc_unbox_integer(_r) > ((modelica_integer) 0))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = _r;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _rowOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _rowOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tearingSelect(threadData_t *threadData, modelica_metatype _var_lstIn, modelica_metatype __omcQ_24in_5Falways, modelica_string _DAEtypeStr, modelica_metatype *out_prefer, modelica_metatype *out_avoid, modelica_metatype *out_never, modelica_metatype *out_alwaysByUser)
{
  modelica_metatype _always = NULL;
  modelica_metatype _prefer = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _avoid = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _never = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _alwaysByUser = NULL;
  modelica_metatype _var = NULL;
  modelica_integer _index;
  modelica_metatype _ts = NULL;
  modelica_boolean _preferTVarsWithStartValue;
  modelica_boolean _inSimulation;
  modelica_boolean _decided;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_boolean tmp7 = 0;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
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
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _always = __omcQ_24in_5Falways;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _prefer = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _avoid = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _never = tmpMeta3;
  _alwaysByUser = _always;
  // _var has no default value.
  _index = ((modelica_integer) 1);
  // _ts has no default value.
  // _preferTVarsWithStartValue has no default value.
  _inSimulation = (stringEqual(_DAEtypeStr, _OMC_LIT258));
  // _decided has no default value.
  _preferTVarsWithStartValue = (omc_Flags_getConfigBool(threadData, _OMC_LIT262) && (stringEqual(_DAEtypeStr, _OMC_LIT263)));

  {
    modelica_metatype _var;
    for (tmpMeta4 = _var_lstIn; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _var = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _var;
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 12);
      _ts = tmpMeta6;

      { /* match expression */
        modelica_metatype tmp10_1;
        tmp10_1 = _ts;
        {
          volatile mmc_switch_type tmp10;
          int tmp11;
          tmp10 = 0;
          for (; tmp10 < 6; tmp10++) {
            switch (MMC_SWITCH_CAST(tmp10)) {
            case 0: {
              if (!optionNone(tmp10_1)) goto tmp9_end;
              /* Pattern matching succeeded */
              tmp7 = 0 /* false */;
              goto tmp9_done;
            }
            case 1: {
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              if (optionNone(tmp10_1)) goto tmp9_end;
              tmpMeta12 = OMC_BOX_FIELD(tmp10_1, 1);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,4,0) == 0) goto tmp9_end;
              /* Pattern matching succeeded */
              if((!listMember(omc_mk_integer(_index), _always)))
              {
                tmpMeta13 = mmc_mk_cons(omc_mk_integer(_index), _always);
                _always = tmpMeta13;

                tmpMeta14 = mmc_mk_cons(omc_mk_integer(_index), _alwaysByUser);
                _alwaysByUser = tmpMeta14;
              }
              tmp7 = 1 /* true */;
              goto tmp9_done;
            }
            case 2: {
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              if (optionNone(tmp10_1)) goto tmp9_end;
              tmpMeta15 = OMC_BOX_FIELD(tmp10_1, 1);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,3,0) == 0) goto tmp9_end;
              /* Pattern matching succeeded */
              tmpMeta16 = mmc_mk_cons(omc_mk_integer(_index), _prefer);
              _prefer = tmpMeta16;
              tmp7 = 1 /* true */;
              goto tmp9_done;
            }
            case 3: {
              modelica_metatype tmpMeta17;
              if (optionNone(tmp10_1)) goto tmp9_end;
              tmpMeta17 = OMC_BOX_FIELD(tmp10_1, 1);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,2,0) == 0) goto tmp9_end;
              /* Pattern matching succeeded */
              tmp7 = 1 /* true */;
              goto tmp9_done;
            }
            case 4: {
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              if (optionNone(tmp10_1)) goto tmp9_end;
              tmpMeta18 = OMC_BOX_FIELD(tmp10_1, 1);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,0) == 0) goto tmp9_end;
              /* Pattern matching succeeded */
              tmpMeta19 = mmc_mk_cons(omc_mk_integer(_index), _avoid);
              _avoid = tmpMeta19;
              tmp7 = 1 /* true */;
              goto tmp9_done;
            }
            case 5: {
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              if (optionNone(tmp10_1)) goto tmp9_end;
              tmpMeta20 = OMC_BOX_FIELD(tmp10_1, 1);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,0) == 0) goto tmp9_end;
              /* Pattern matching succeeded */
              tmpMeta21 = mmc_mk_cons(omc_mk_integer(_index), _never);
              _never = tmpMeta21;
              tmp7 = 1 /* true */;
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
      _decided = tmp7;

      if((!_decided))
      {
        if((((omc_Flags_getConfigBool(threadData, _OMC_LIT267) && _inSimulation) && omc_BackendVariable_isStateVar(threadData, _var)) && (!listMember(omc_mk_integer(_index), _always))))
        {
          tmpMeta22 = mmc_mk_cons(omc_mk_integer(_index), _always);
          _always = tmpMeta22;
        }
        else
        {
          if((_preferTVarsWithStartValue && omc_BackendVariable_varHasStartValue(threadData, _var)))
          {
            tmpMeta23 = mmc_mk_cons(omc_mk_integer(_index), _prefer);
            _prefer = tmpMeta23;
          }
        }
      }

      _index = ((modelica_integer) 1) + _index;
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp25 = stringAppend(_OMC_LIT268,(_preferTVarsWithStartValue?_OMC_LIT269:_OMC_LIT42));
    tmp26 = stringAppend(tmp25,_OMC_LIT45);
    fputs(omc_string_data(tmp26),stdout);

    tmp27 = stringAppend(_OMC_LIT270,stringDelimitList(omc_List_map(threadData, _always, boxvar_intString), _OMC_LIT7));
    tmp28 = stringAppend(tmp27,_OMC_LIT10);
    fputs(omc_string_data(tmp28),stdout);

    tmp29 = stringAppend(_OMC_LIT271,stringDelimitList(omc_List_map(threadData, _prefer, boxvar_intString), _OMC_LIT7));
    tmp30 = stringAppend(tmp29,_OMC_LIT10);
    fputs(omc_string_data(tmp30),stdout);

    tmp31 = stringAppend(_OMC_LIT272,stringDelimitList(omc_List_map(threadData, _avoid, boxvar_intString), _OMC_LIT7));
    tmp32 = stringAppend(tmp31,_OMC_LIT10);
    fputs(omc_string_data(tmp32),stdout);

    tmp33 = stringAppend(_OMC_LIT273,stringDelimitList(omc_List_map(threadData, _never, boxvar_intString), _OMC_LIT7));
    tmp34 = stringAppend(tmp33,_OMC_LIT35);
    fputs(omc_string_data(tmp34),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_prefer) { *out_prefer = _prefer; }
  if (out_avoid) { *out_avoid = _avoid; }
  if (out_never) { *out_never = _never; }
  if (out_alwaysByUser) { *out_alwaysByUser = _alwaysByUser; }
  omc_ret_ = _always;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_CellierTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _tearingSelect_always, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_integer _strongComponentIndex, modelica_boolean *out_outRunMatching)
{
  modelica_metatype _ocomp = NULL;
  modelica_boolean _outRunMatching;
  modelica_integer _size;
  modelica_integer _tornsize;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _eqnNonlinPoints = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _OutTVars = NULL;
  modelica_metatype _residual = NULL;
  modelica_metatype _residual_coll = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _unsolvables = NULL;
  modelica_metatype _discreteVars = NULL;
  modelica_metatype _tSel_always = NULL;
  modelica_metatype _tSel_alwaysByUser = NULL;
  modelica_metatype _tSel_prefer = NULL;
  modelica_metatype _tSel_avoid = NULL;
  modelica_metatype _tSel_never = NULL;
  modelica_metatype _innerEquations = NULL;
  modelica_metatype _subsyst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mt = NULL;
  modelica_metatype _me = NULL;
  modelica_metatype _meT = NULL;
  modelica_metatype _DAEtype = NULL;
  modelica_string _DAEtypeStr = NULL;
  modelica_metatype _strictTearingSet = NULL;
  modelica_metatype _stateSets = NULL;
  modelica_metatype _casualTearingSet = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_boolean _linear;
  modelica_boolean _b;
  modelica_boolean _noDynamicStateSelection;
  modelica_boolean _dynamicTearing;
  modelica_boolean _dtTarget;
  modelica_boolean _forceDegree1;
  modelica_boolean _hasStartCycle;
  modelica_metatype _cref = NULL;
  modelica_metatype _startBaseCrefs = NULL;
  modelica_metatype _valueCrefs = NULL;
  modelica_metatype _cyclicBaseCrefs = NULL;
  modelica_metatype _meTFull = NULL;
  modelica_string _s = NULL;
  modelica_string _modelName = NULL;
  modelica_boolean _debug;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_boolean tmp7 = 0;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
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
  modelica_metatype tmpMeta35;
  modelica_string tmp36;
  modelica_string tmp37;
  modelica_string tmp38;
  modelica_string tmp39;
  modelica_string tmp40;
  modelica_string tmp41;
  modelica_string tmp42;
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_string tmp51;
  modelica_string tmp52;
  modelica_string tmp53;
  modelica_string tmp54;
  modelica_string tmp55;
  modelica_string tmp56;
  modelica_string tmp57;
  modelica_string tmp58;
  modelica_metatype tmpMeta59;
  modelica_metatype tmpMeta60;
  modelica_metatype tmpMeta61;
  modelica_metatype tmpMeta62;
  modelica_string tmp63;
  modelica_string tmp64;
  modelica_string tmp65;
  modelica_string tmp66;
  modelica_string tmp67;
  modelica_string tmp68;
  modelica_string tmp69;
  modelica_string tmp70;
  modelica_string tmp71;
  modelica_string tmp72;
  modelica_metatype tmpMeta73;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ocomp has no default value.
  // _outRunMatching has no default value.
  // _size has no default value.
  // _tornsize has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _mapIncRowEqn has no default value.
  // _eqnNonlinPoints has no default value.
  // _mapEqnIncRow has no default value.
  // _OutTVars has no default value.
  // _residual has no default value.
  // _residual_coll has no default value.
  // _order has no default value.
  // _unsolvables has no default value.
  // _discreteVars has no default value.
  // _tSel_always has no default value.
  // _tSel_alwaysByUser has no default value.
  // _tSel_prefer has no default value.
  // _tSel_avoid has no default value.
  // _tSel_never has no default value.
  // _innerEquations has no default value.
  // _subsyst has no default value.
  // _vars has no default value.
  // _eqns has no default value.
  // _m has no default value.
  // _mt has no default value.
  // _me has no default value.
  // _meT has no default value.
  // _DAEtype has no default value.
  // _DAEtypeStr has no default value.
  // _strictTearingSet has no default value.
  // _stateSets has no default value.
  // _casualTearingSet has no default value.
  // _eqn_lst has no default value.
  // _var_lst has no default value.
  // _linear has no default value.
  // _b has no default value.
  // _noDynamicStateSelection has no default value.
  // _dynamicTearing has no default value.
  // _dtTarget has no default value.
  // _forceDegree1 has no default value.
  // _hasStartCycle has no default value.
  // _cref has no default value.
  // _startBaseCrefs has no default value.
  // _valueCrefs has no default value.
  // _cyclicBaseCrefs has no default value.
  // _meTFull has no default value.
  // _s has no default value.
  // _modelName has no default value.
  _debug = 0 /* false */;
  _linear = omc_BackendDAEUtil_getLinearfromJacType(threadData, _jacType);

  /* Pattern-matching assignment */
  tmpMeta1 = _isyst;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 8);
  _stateSets = tmpMeta2;

  _noDynamicStateSelection = listEmpty(_stateSets);

  /* Pattern-matching assignment */
  tmpMeta3 = _ishared;
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 15);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta3, 17);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 3);
  _DAEtype = tmpMeta4;
  _modelName = tmpMeta6;

  omc_string_store(&(_DAEtypeStr), omc_BackendDump_printBackendDAEType2String(threadData, _DAEtype));

  _forceDegree1 = omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared);

  _dtTarget = listMember(omc_Config_simCodeTarget(threadData), _OMC_LIT279);

  { /* match expression */
    modelica_string tmp10_1;modelica_boolean tmp10_2;modelica_boolean tmp10_3;modelica_string tmp10_4;modelica_boolean tmp10_5;modelica_boolean tmp10_6;
    tmp10_1 = omc_Config_dynamicTearing(threadData);
    tmp10_2 = _linear;
    tmp10_3 = _noDynamicStateSelection;
    tmp10_4 = _DAEtypeStr;
    tmp10_5 = omc_Flags_getConfigBool(threadData, _OMC_LIT282);
    tmp10_6 = _dtTarget;
    {
      volatile mmc_switch_type tmp10;
      int tmp11;
      tmp10 = 0;
      for (; tmp10 < 7; tmp10++) {
        switch (MMC_SWITCH_CAST(tmp10)) {
        case 0: {
          if (1 /* true */ != tmp10_3) goto tmp9_end;
          if (1 /* true */ != tmp10_6) goto tmp9_end;
          if (4 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT125), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
          if (10 != omc_string_len(tmp10_4) || strcmp(omc_string_data(_OMC_LIT258), omc_string_data(tmp10_4)) != 0) goto tmp9_end;
          
          /* Pattern matching succeeded */
          tmp7 = 1 /* true */;
          goto tmp9_done;
        }
        case 1: {
          if (1 /* true */ != tmp10_3) goto tmp9_end;
          if (1 /* true */ != tmp10_5) goto tmp9_end;
          if (1 /* true */ != tmp10_6) goto tmp9_end;
          if (4 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT125), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
          if (14 != omc_string_len(tmp10_4) || strcmp(omc_string_data(_OMC_LIT263), omc_string_data(tmp10_4)) != 0) goto tmp9_end;
          
          /* Pattern matching succeeded */
          tmp7 = 1 /* true */;
          goto tmp9_done;
        }
        case 2: {
          if (1 /* true */ != tmp10_2) goto tmp9_end;
          if (1 /* true */ != tmp10_3) goto tmp9_end;
          if (1 /* true */ != tmp10_6) goto tmp9_end;
          if (6 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT283), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
          if (10 != omc_string_len(tmp10_4) || strcmp(omc_string_data(_OMC_LIT258), omc_string_data(tmp10_4)) != 0) goto tmp9_end;
          
          /* Pattern matching succeeded */
          tmp7 = 1 /* true */;
          goto tmp9_done;
        }
        case 3: {
          if (1 /* true */ != tmp10_2) goto tmp9_end;
          if (1 /* true */ != tmp10_3) goto tmp9_end;
          if (1 /* true */ != tmp10_5) goto tmp9_end;
          if (1 /* true */ != tmp10_6) goto tmp9_end;
          if (6 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT283), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
          if (14 != omc_string_len(tmp10_4) || strcmp(omc_string_data(_OMC_LIT263), omc_string_data(tmp10_4)) != 0) goto tmp9_end;
          /* Pattern matching succeeded */
          tmp7 = 1 /* true */;
          goto tmp9_done;
        }
        case 4: {
          if (0 /* false */ != tmp10_2) goto tmp9_end;
          if (1 /* true */ != tmp10_3) goto tmp9_end;
          if (1 /* true */ != tmp10_6) goto tmp9_end;
          if (9 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT284), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
          if (10 != omc_string_len(tmp10_4) || strcmp(omc_string_data(_OMC_LIT258), omc_string_data(tmp10_4)) != 0) goto tmp9_end;
          
          /* Pattern matching succeeded */
          tmp7 = 1 /* true */;
          goto tmp9_done;
        }
        case 5: {
          if (0 /* false */ != tmp10_2) goto tmp9_end;
          if (1 /* true */ != tmp10_3) goto tmp9_end;
          if (1 /* true */ != tmp10_5) goto tmp9_end;
          if (1 /* true */ != tmp10_6) goto tmp9_end;
          if (9 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT284), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
          if (14 != omc_string_len(tmp10_4) || strcmp(omc_string_data(_OMC_LIT263), omc_string_data(tmp10_4)) != 0) goto tmp9_end;
          /* Pattern matching succeeded */
          tmp7 = 1 /* true */;
          goto tmp9_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp7 = 0 /* false */;
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
  _dynamicTearing = tmp7;

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT285),stdout);
  }

  _size = listLength(_vindx);

  _eqn_lst = omc_BackendEquation_getList(threadData, _eindex, omc_BackendEquation_getEqnsFromEqSystem(threadData, _isyst));

  _eqns = omc_BackendEquation_listEquation(threadData, _eqn_lst);

  _var_lst = omc_List_map1r(threadData, _vindx, boxvar_BackendVariable_getVarAt, omc_BackendVariable_daeVars(threadData, _isyst));

  _vars = omc_BackendVariable_listVar1(threadData, _var_lst);

  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  _subsyst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta12, _OMC_LIT12, omc_BackendEquation_emptyEqns(threadData));

  _subsyst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _subsyst, _OMC_LIT13, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,&_mt ,NULL ,NULL);

  _m = omc_Array_map(threadData, _m, boxvar_Tearing_deleteNegativeEntries);

  _mt = omc_Array_map(threadData, _mt, boxvar_Tearing_deleteNegativeEntries);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    fputs(omc_string_data(_OMC_LIT286),stdout);

    omc_BackendDump_printEqSystem(threadData, _subsyst);

    fputs(omc_string_data(_OMC_LIT287),stdout);
  }

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    fputs(omc_string_data(_OMC_LIT288),stdout);
  }

  _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _subsyst, _ishared, 0 /* false */ ,&_meT ,&_mapEqnIncRow ,&_mapIncRowEqn);

  _unsolvables = omc_Tearing_getUnsolvableVars(threadData, _size, _meT);

  _hasStartCycle = 0 /* false */;

  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  _cyclicBaseCrefs = tmpMeta13;

  if(_forceDegree1)
  {
    tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
    _startBaseCrefs = tmpMeta14;

    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    _valueCrefs = tmpMeta15;

    tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = _size;
    if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp18, tmp20); _i += tmp19)
      {

        _cref = omc_BackendVariable_varCref(threadData, omc_BackendVariable_getVarAt(threadData, _vars, _i));

        if(omc_ComponentReference_isStartCref(threadData, _cref))
        {
          tmpMeta16 = mmc_mk_cons(omc_ComponentReference_popCref(threadData, _cref), _startBaseCrefs);
          _startBaseCrefs = tmpMeta16;
        }
        else
        {
          tmpMeta17 = mmc_mk_cons(_cref, _valueCrefs);
          _valueCrefs = tmpMeta17;
        }
      }
    }

    {
      modelica_metatype _baseCref;
      for (tmpMeta21 = _startBaseCrefs; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
      {
        _baseCref = MMC_CAR(tmpMeta21);
        if(omc_List_isMemberOnTrue(threadData, _baseCref, _valueCrefs, boxvar_ComponentReferenceBasics_crefEqual))
        {
          _hasStartCycle = 1 /* true */;

          tmpMeta22 = mmc_mk_cons(_baseCref, _cyclicBaseCrefs);
          _cyclicBaseCrefs = tmpMeta22;
        }
      }
    }
  }

  {
    modelica_metatype _baseCref;
    for (tmpMeta24 = _cyclicBaseCrefs; !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
    {
      _baseCref = MMC_CAR(tmpMeta24);
      tmp25 = stringAppend(_OMC_LIT289,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _baseCref));
      tmp26 = stringAppend(tmp25,_OMC_LIT290);
      tmp27 = stringAppend(tmp26,_OMC_LIT291);
      tmp28 = stringAppend(tmp27,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _baseCref));
      tmp29 = stringAppend(tmp28,_OMC_LIT292);
      tmp30 = stringAppend(tmp29,_OMC_LIT293);
      tmp31 = stringAppend(tmp30,_OMC_LIT294);
      tmp32 = stringAppend(tmp31,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _baseCref));
      tmp33 = stringAppend(tmp32,_OMC_LIT295);
      tmp34 = stringAppend(tmp33,_OMC_LIT296);
      omc_Error_addCompilerWarning(threadData, tmp34);
    }
  }

  _eqnNonlinPoints = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  omc_Tearing_getEquationNonlinearityPoints(threadData, _eqnNonlinPoints, _me, _size);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    fputs(omc_string_data(_OMC_LIT31),stdout);

    omc_BackendDump_dumpAdjacencyMatrixEnhanced(threadData, _me);

    fputs(omc_string_data(_OMC_LIT32),stdout);

    omc_BackendDump_dumpAdjacencyMatrixTEnhanced(threadData, _meT);

    tmp36 = stringAppend(_OMC_LIT297,stringDelimitList(omc_List_mapArray(threadData, _eqnNonlinPoints, boxvar_intString), _OMC_LIT7));
    tmp37 = stringAppend(tmp36,_OMC_LIT35);
    fputs(omc_string_data(tmp37),stdout);
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT298),stdout);

    omc_BackendDump_dumpAdjacencyMatrix(threadData, _mapEqnIncRow);

    tmp38 = stringAppend(_OMC_LIT34,stringDelimitList(omc_List_mapArray(threadData, _mapIncRowEqn, boxvar_intString), _OMC_LIT7));
    tmp39 = stringAppend(tmp38,_OMC_LIT35);
    fputs(omc_string_data(tmp39),stdout);

    tmp40 = stringAppend(_OMC_LIT36,stringDelimitList(omc_List_map(threadData, _unsolvables, boxvar_intString), _OMC_LIT7));
    tmp41 = stringAppend(tmp40,_OMC_LIT35);
    fputs(omc_string_data(tmp41),stdout);
  }

  _discreteVars = omc_Tearing_findDiscrete(threadData, _var_lst);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    tmp42 = stringAppend(_OMC_LIT37,stringDelimitList(omc_List_map(threadData, _discreteVars, boxvar_intString), _OMC_LIT7));
    tmp43 = stringAppend(tmp42,_OMC_LIT35);
    fputs(omc_string_data(tmp43),stdout);
  }

  _tSel_always = omc_Tearing_tearingSelect(threadData, _var_lst, _tearingSelect_always, _DAEtypeStr ,&_tSel_prefer ,&_tSel_avoid ,&_tSel_never ,&_tSel_alwaysByUser);

  if((!listEmpty(_tSel_alwaysByUser)))
  {
    tmpMeta44 = mmc_mk_cons(intString(_strongComponentIndex), mmc_mk_cons(omc_BackendDump_printBackendDAEType2String(threadData, _DAEtype), mmc_mk_cons(omc_BackendDump_dumpMarkedVarList(threadData, _var_lst, _tSel_alwaysByUser), MMC_REFSTRUCTLIT(mmc_nil))));
    omc_Error_addMessage(threadData, _OMC_LIT301, tmpMeta44);
  }

  _ass1 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  _ass2 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  tmpMeta45 = MMC_REFSTRUCTLIT(mmc_nil);
  _order = tmpMeta45;

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT302),stdout);
  }

  _meTFull = (_forceDegree1?arrayCopy(_meT):_meT);

  tmpMeta46 = MMC_REFSTRUCTLIT(mmc_nil);
  _OutTVars = omc_Tearing_CellierTearing2(threadData, 0 /* false */, _m, _mt, _me, _meT, _ass1, _ass2, _unsolvables, tmpMeta46, _discreteVars, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _order, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, 0 /* false */ ,&_order);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT303),stdout);
  }

  if(((_forceDegree1 && _hasStartCycle) && omc_Tearing_tornMatchingIsStructurallySingular(threadData, _ass2, _meTFull, _size, _vars)))
  {
    tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
    _subsyst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta47, _OMC_LIT12, omc_BackendEquation_emptyEqns(threadData));

    _subsyst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _subsyst, _OMC_LIT13, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,&_mt ,NULL ,NULL);

    _m = omc_Array_map(threadData, _m, boxvar_Tearing_deleteNegativeEntries);

    _mt = omc_Array_map(threadData, _mt, boxvar_Tearing_deleteNegativeEntries);

    _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _subsyst, _ishared, 0 /* false */ ,&_meT ,&_mapEqnIncRow ,&_mapIncRowEqn);

    _unsolvables = omc_Tearing_getUnsolvableVars(threadData, _size, _meT);

    _eqnNonlinPoints = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

    omc_Tearing_getEquationNonlinearityPoints(threadData, _eqnNonlinPoints, _me, _size);

    _ass1 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

    _ass2 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

    tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
    _order = tmpMeta48;

    tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
    _OutTVars = omc_Tearing_CellierTearing2(threadData, 0 /* false */, _m, _mt, _me, _meT, _ass1, _ass2, _unsolvables, tmpMeta49, _discreteVars, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _order, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, 1 /* true */ ,&_order);
  }

  _tornsize = listLength(_OutTVars);

  _b = (_tornsize < _size);

  _residual = omc_Tearing_getUnassigned(threadData, _ass2);

  _residual_coll = omc_List_map1r(threadData, _residual, boxvar_arrayGet, _mapIncRowEqn);

  _residual_coll = omc_List_unique(threadData, _residual_coll);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    omc_Tearing_dumpTearingSetLocalIndexes(threadData, _OutTVars, _residual_coll, _order, _ass2, _size, _mapEqnIncRow, _vars, _eqns, _OMC_LIT304);
  }

  _OutTVars = omc_Tearing_selectFromList__rev(threadData, _vindx, _OutTVars);

  _residual = omc_Tearing_selectFromList__rev(threadData, _eindex, _residual_coll);

  _innerEquations = omc_Tearing_assignInnerEquations(threadData, _order, _eindex, _vindx, _ass2, _mapEqnIncRow, mmc_mk_none());

  tmpMeta50 = omc_mk_box5(3, &BackendDAE_TearingSet_TEARINGSET__desc, _OutTVars, _residual, _innerEquations, _OMC_LIT41);
  _strictTearingSet = tmpMeta50;

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    omc_Tearing_dumpTearingSetGlobalIndexes(threadData, _strictTearingSet, _size, _OMC_LIT304);
  }

  if(_dynamicTearing)
  {
    if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
    {
      fputs(omc_string_data(_OMC_LIT310),stdout);
    }

    omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _subsyst, _OMC_LIT13, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,&_mt ,NULL ,NULL);

    _m = omc_Array_map(threadData, _m, boxvar_Tearing_deleteNegativeEntries);

    _mt = omc_Array_map(threadData, _mt, boxvar_Tearing_deleteNegativeEntries);

    _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _subsyst, _ishared, 1 /* true */ ,&_meT ,&_mapEqnIncRow ,&_mapIncRowEqn);

    _unsolvables = omc_Tearing_getUnsolvableVars(threadData, _size, _meT);

    if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
    {
      fputs(omc_string_data(_OMC_LIT31),stdout);

      omc_BackendDump_dumpAdjacencyMatrixEnhanced(threadData, _me);

      fputs(omc_string_data(_OMC_LIT32),stdout);

      omc_BackendDump_dumpAdjacencyMatrixTEnhanced(threadData, _meT);

      tmp51 = stringAppend(_OMC_LIT297,stringDelimitList(omc_List_mapArray(threadData, _eqnNonlinPoints, boxvar_intString), _OMC_LIT7));
      tmp52 = stringAppend(tmp51,_OMC_LIT35);
      fputs(omc_string_data(tmp52),stdout);
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT298),stdout);

      omc_BackendDump_dumpAdjacencyMatrix(threadData, _mapEqnIncRow);

      tmp53 = stringAppend(_OMC_LIT34,stringDelimitList(omc_List_mapArray(threadData, _mapIncRowEqn, boxvar_intString), _OMC_LIT7));
      tmp54 = stringAppend(tmp53,_OMC_LIT35);
      fputs(omc_string_data(tmp54),stdout);

      tmp55 = stringAppend(_OMC_LIT36,stringDelimitList(omc_List_map(threadData, _unsolvables, boxvar_intString), _OMC_LIT7));
      tmp56 = stringAppend(tmp55,_OMC_LIT35);
      fputs(omc_string_data(tmp56),stdout);

      tmp57 = stringAppend(_OMC_LIT37,stringDelimitList(omc_List_map(threadData, _discreteVars, boxvar_intString), _OMC_LIT7));
      tmp58 = stringAppend(tmp57,_OMC_LIT35);
      fputs(omc_string_data(tmp58),stdout);
    }

    _ass1 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

    _ass2 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

    tmpMeta59 = MMC_REFSTRUCTLIT(mmc_nil);
    _order = tmpMeta59;

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT302),stdout);
    }

    tmpMeta60 = MMC_REFSTRUCTLIT(mmc_nil);
    _OutTVars = omc_Tearing_CellierTearing2(threadData, 0 /* false */, _m, _mt, _me, _meT, _ass1, _ass2, _unsolvables, tmpMeta60, _discreteVars, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _order, _mapEqnIncRow, _mapIncRowEqn, _eqnNonlinPoints, 0 /* false */ ,&_order);

    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      fputs(omc_string_data(_OMC_LIT303),stdout);
    }

    if((listLength(_OutTVars) < _tornsize))
    {
      _residual = omc_Tearing_getUnassigned(threadData, _ass2);

      _residual_coll = omc_List_map1r(threadData, _residual, boxvar_arrayGet, _mapIncRowEqn);

      _residual_coll = omc_List_unique(threadData, _residual_coll);

      if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
      {
        omc_Tearing_dumpTearingSetLocalIndexes(threadData, _OutTVars, _residual_coll, _order, _ass2, _size, _mapEqnIncRow, _vars, _eqns, _OMC_LIT313);
      }

      _OutTVars = omc_Tearing_selectFromList__rev(threadData, _vindx, _OutTVars);

      _residual = omc_Tearing_selectFromList__rev(threadData, _eindex, _residual_coll);

      _innerEquations = omc_Tearing_assignInnerEquations(threadData, _order, _eindex, _vindx, _ass2, _mapEqnIncRow, mmc_mk_some(_me));

      tmpMeta61 = omc_mk_box5(3, &BackendDAE_TearingSet_TEARINGSET__desc, _OutTVars, _residual, _innerEquations, _OMC_LIT41);
      _casualTearingSet = mmc_mk_some(tmpMeta61);

      if(omc_Flags_isSet(threadData, _OMC_LIT3))
      {
        tmpMeta62 = omc_mk_box5(3, &BackendDAE_TearingSet_TEARINGSET__desc, _OutTVars, _residual, _innerEquations, _OMC_LIT41);
        omc_Tearing_dumpTearingSetGlobalIndexes(threadData, tmpMeta62, _size, _OMC_LIT313);
      }

      if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
      {
        if(_linear)
        {
          omc_string_store(&(_s), _OMC_LIT315);
        }
        else
        {
          omc_string_store(&(_s), _OMC_LIT314);
        }

        tmp63 = stringAppend(_OMC_LIT316,_s);
        tmp64 = stringAppend(tmp63,_OMC_LIT317);
        tmp65 = stringAppend(tmp64,_modelName);
        tmp66 = stringAppend(tmp65,_OMC_LIT35);
        fputs(omc_string_data(tmp66),stdout);
      }
    }
    else
    {
      if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
      {
        tmp67 = stringAppend(_OMC_LIT311,intString(_size));
        tmp68 = stringAppend(tmp67,_OMC_LIT10);
        fputs(omc_string_data(tmp68),stdout);

        tmp69 = stringAppend(_OMC_LIT66,intString(listLength(_OutTVars)));
        tmp70 = stringAppend(tmp69,_OMC_LIT10);
        fputs(omc_string_data(tmp70),stdout);

        tmp71 = stringAppend(_OMC_LIT67,stringDelimitList(omc_List_map(threadData, listReverse(_OutTVars), boxvar_intString), _OMC_LIT7));
        tmp72 = stringAppend(tmp71,_OMC_LIT10);
        fputs(omc_string_data(tmp72),stdout);

        fputs(omc_string_data(_OMC_LIT312),stdout);
      }

      if(((!_b) && (!omc_Flags_getConfigBool(threadData, _OMC_LIT309))))
      {
        if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
        {
          fputs(omc_string_data(_OMC_LIT306),stdout);
        }

        OMC_THROW_INTERNAL();
      }

      _casualTearingSet = mmc_mk_none();
    }
  }
  else
  {
    if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
    {
      fputs(omc_string_data(_OMC_LIT305),stdout);
    }

    if(((!_b) && (!omc_Flags_getConfigBool(threadData, _OMC_LIT309))))
    {
      if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
      {
        fputs(omc_string_data(_OMC_LIT306),stdout);
      }

      OMC_THROW_INTERNAL();
    }

    _casualTearingSet = mmc_mk_none();
  }

  tmpMeta73 = omc_mk_box5(10, &BackendDAE_StrongComponent_TORNSYSTEM__desc, _strictTearingSet, _casualTearingSet, omc_mk_boolean(_linear), omc_mk_boolean(_mixedSystem));
  _ocomp = tmpMeta73;

  _outRunMatching = 1 /* true */;

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT318),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  omc_ret_ = _ocomp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_CellierTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _tearingSelect_always, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype _strongComponentIndex, modelica_metatype *out_outRunMatching)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _outRunMatching;
  modelica_metatype _ocomp = NULL;
  tmp1 = omc_unbox_integer(_mixedSystem);
  tmp2 = omc_unbox_integer(_strongComponentIndex);
  _ocomp = omc_Tearing_CellierTearing(threadData, _isyst, _ishared, _eindex, _vindx, _tearingSelect_always, _ojac, _jacType, tmp1, tmp2, &_outRunMatching);
  /* skip box _ocomp; BackendDAE.StrongComponent */
  if (out_outRunMatching) { *out_outRunMatching = omc_mk_icon(_outRunMatching); }
  return _ocomp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getTearingSetfromAssign(threadData_t *threadData, modelica_metatype _inDiscreteVars, modelica_metatype _assign1, modelica_metatype __omcQ_24in_5FvarArray, modelica_metatype __omcQ_24in_5FequationArray, modelica_metatype *out_equationArray, modelica_metatype *out_innerEquations)
{
  modelica_metatype _varArray = NULL;
  modelica_metatype _equationArray = NULL;
  modelica_metatype _innerEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _eqIdx;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _varArray = __omcQ_24in_5FvarArray;
  _equationArray = __omcQ_24in_5FequationArray;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _innerEquations = tmpMeta1;
  // _eqIdx has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          {
            modelica_metatype _varIdx;
            for (tmpMeta6 = _inDiscreteVars; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _varIdx = MMC_CAR(tmpMeta6);
              arrayUpdate(_varArray, omc_unbox_integer(_varIdx), omc_mk_boolean(0 /* false */));

              _eqIdx = omc_unbox_integer(arrayGet(_assign1,omc_unbox_integer(_varIdx)) /* DAE.ASUB */);

              arrayUpdate(_equationArray, _eqIdx, omc_mk_boolean(0 /* false */));

              tmpMeta8 = mmc_mk_cons(_varIdx, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta9 = omc_mk_box3(3, &BackendDAE_InnerEquation_INNEREQUATION__desc, omc_mk_integer(_eqIdx), tmpMeta8);
              tmpMeta7 = mmc_mk_cons(tmpMeta9, _innerEquations);
              _innerEquations = tmpMeta7;
            }
          }
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT319, _OMC_LIT320);

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
  if (out_equationArray) { *out_equationArray = _equationArray; }
  if (out_innerEquations) { *out_innerEquations = _innerEquations; }
  omc_ret_ = _varArray;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_pathFound(threadData_t *threadData, modelica_integer _varIdx, modelica_metatype _adjEnhT, modelica_metatype _varArray, modelica_metatype _eqArray, modelica_metatype __omcQ_24in_5FeqMarker, modelica_metatype __omcQ_24in_5FnE, modelica_metatype __omcQ_24in_5FnV, modelica_metatype *out_nE, modelica_metatype *out_nV, modelica_boolean *out_success)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _eqMarker = NULL;
  modelica_metatype _nE = NULL;
  modelica_metatype _nV = NULL;
  modelica_boolean _success;
  modelica_integer _eqIdx;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqMarker = __omcQ_24in_5FeqMarker;
  _nE = __omcQ_24in_5FnE;
  _nV = __omcQ_24in_5FnV;
  _success = 0 /* false */;
  // _eqIdx has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          /* Pattern matching succeeded */
          {
            modelica_metatype _entry;
            for (tmpMeta5 = arrayGet(_adjEnhT,_varIdx) /* DAE.ASUB */; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _entry = MMC_CAR(tmpMeta5);
              /* Pattern-matching assignment */
              tmpMeta6 = _entry;
              tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
              tmp8 = omc_unbox_integer(tmpMeta7);
              _eqIdx = tmp8  /* pattern as ty=Integer */;

              if((omc_Tearing_isEntrySolvable(threadData, _entry) && (_eqIdx > ((modelica_integer) 0))))
              {
                if((omc_unbox_boolean(arrayGet(_eqArray,_eqIdx) /* DAE.ASUB */) && (omc_unbox_integer(arrayGet(_nV,_eqIdx) /* DAE.ASUB */) == ((modelica_integer) -1))))
                {
                  arrayUpdate(_nV,_eqIdx,omc_mk_integer(_varIdx));

                  arrayUpdate(_nE,_varIdx,omc_mk_integer(_eqIdx));

                  _success = 1 /* true */;

                  goto _return;
                }
              }
            }
          }

          {
            modelica_metatype _entry;
            for (tmpMeta10 = arrayGet(_adjEnhT,_varIdx) /* DAE.ASUB */; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _entry = MMC_CAR(tmpMeta10);
              /* Pattern-matching assignment */
              tmpMeta11 = _entry;
              tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 1);
              tmp13 = omc_unbox_integer(tmpMeta12);
              _eqIdx = tmp13  /* pattern as ty=Integer */;

              if((omc_Tearing_isEntrySolvable(threadData, _entry) && (_eqIdx > ((modelica_integer) 0))))
              {
                if(omc_unbox_boolean(arrayGet(_eqMarker,_eqIdx) /* DAE.ASUB */))
                {
                  arrayUpdate(_eqMarker,_eqIdx,omc_mk_boolean(0 /* false */));

                  _eqMarker = omc_Tearing_pathFound(threadData, omc_unbox_integer(arrayGet(_nV,_eqIdx) /* DAE.ASUB */), _adjEnhT, _varArray, _eqArray, _eqMarker, _nE, _nV ,&_nE ,&_nV ,&_success);
                }
              }

              if(_success)
              {
                arrayUpdate(_nV,_eqIdx,omc_mk_integer(_varIdx));

                arrayUpdate(_nE,_varIdx,omc_mk_integer(_eqIdx));

                goto _return;
              }
            }
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT321, _OMC_LIT322);

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
  if (out_nE) { *out_nE = _nE; }
  if (out_nV) { *out_nV = _nV; }
  if (out_success) { *out_success = _success; }
  threadData->mmc_jumper = old_mmc_jumper;
  omc_ret_ = _eqMarker;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_pathFound(threadData_t *threadData, modelica_metatype _varIdx, modelica_metatype _adjEnhT, modelica_metatype _varArray, modelica_metatype _eqArray, modelica_metatype __omcQ_24in_5FeqMarker, modelica_metatype __omcQ_24in_5FnE, modelica_metatype __omcQ_24in_5FnV, modelica_metatype *out_nE, modelica_metatype *out_nV, modelica_metatype *out_success)
{
  modelica_integer tmp1;
  modelica_boolean _success;
  modelica_metatype _eqMarker = NULL;
  tmp1 = omc_unbox_integer(_varIdx);
  _eqMarker = omc_Tearing_pathFound(threadData, tmp1, _adjEnhT, _varArray, _eqArray, __omcQ_24in_5FeqMarker, __omcQ_24in_5FnE, __omcQ_24in_5FnV, out_nE, out_nV, &_success);
  /* skip box _eqMarker; array<#Boolean> */
  /* skip box _nE; array<#Integer> */
  /* skip box _nV; array<#Integer> */
  if (out_success) { *out_success = omc_mk_icon(_success); }
  return _eqMarker;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_matchDiscreteVars(threadData_t *threadData, modelica_metatype _inDiscreteVars, modelica_metatype _adjEnhT, modelica_metatype _varArray, modelica_metatype _eqArray, modelica_metatype __omcQ_24in_5FnE, modelica_metatype __omcQ_24in_5FnV, modelica_metatype *out_nV)
{
  modelica_metatype _nE = NULL;
  modelica_metatype _nV = NULL;
  modelica_metatype _eqMarker = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _nE = __omcQ_24in_5FnE;
  _nV = __omcQ_24in_5FnV;
  // _eqMarker has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          {
            modelica_metatype _varIdx;
            for (tmpMeta5 = _inDiscreteVars; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _varIdx = MMC_CAR(tmpMeta5);
              _eqMarker = arrayCopy(_eqArray);

              /* Pattern-matching tuple assignment */
              tmpMeta9 = omc_Tearing_pathFound(threadData, omc_unbox_integer(_varIdx), _adjEnhT, _varArray, _eqArray, _eqMarker, _nE, _nV, &tmpMeta6, &tmpMeta7, &tmp8);
              _eqMarker = tmpMeta9;
              if (1 /* true */ != tmp8) goto goto_1;
              _nE = tmpMeta6;
              _nV = tmpMeta7;
            }
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT323, _OMC_LIT324);

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
  if (out_nV) { *out_nV = _nV; }
  omc_ret_ = _nE;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_minimalTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _jacType, modelica_boolean _mixedSystem)
{
  modelica_metatype _ocomp = NULL;
  modelica_integer _size;
  modelica_integer _qidx;
  modelica_integer _vidx;
  modelica_metatype _nE = NULL;
  modelica_metatype _nV = NULL;
  modelica_metatype _varArray = NULL;
  modelica_metatype _eqArray = NULL;
  modelica_metatype _unsolvedDiscreteVars = NULL;
  modelica_metatype _unsolvedCSEVars = NULL;
  modelica_metatype _unsolvedCombined = NULL;
  modelica_metatype _algSolvedVars = NULL;
  modelica_metatype _iterationVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _residualequations = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _innerEquationsLocalIndex = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _innerEquations = NULL;
  modelica_metatype _adjEnh = NULL;
  modelica_metatype _adjEnhT = NULL;
  modelica_boolean _linear;
  modelica_metatype _eqns = NULL;
  modelica_metatype _subsyst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ocomp has no default value.
  // _size has no default value.
  // _qidx has no default value.
  // _vidx has no default value.
  // _nE has no default value.
  // _nV has no default value.
  // _varArray has no default value.
  // _eqArray has no default value.
  // _unsolvedDiscreteVars has no default value.
  // _unsolvedCSEVars has no default value.
  // _unsolvedCombined has no default value.
  // _algSolvedVars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _iterationVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _residualequations = tmpMeta2;
  // _var_lst has no default value.
  // _eqn_lst has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _innerEquationsLocalIndex = tmpMeta3;
  // _innerEquations has no default value.
  // _adjEnh has no default value.
  // _adjEnhT has no default value.
  // _linear has no default value.
  // _eqns has no default value.
  // _subsyst has no default value.
  // _vars has no default value.
  _linear = omc_BackendDAEUtil_getLinearfromJacType(threadData, _jacType);

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp5_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_integer tmp25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_integer tmp29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          /* Pattern matching succeeded */
          _eqn_lst = omc_BackendEquation_getList(threadData, _eindex, omc_BackendEquation_getEqnsFromEqSystem(threadData, _isyst));

          _eqns = omc_BackendEquation_listEquation(threadData, _eqn_lst);

          _var_lst = omc_List_map1r(threadData, _vindx, boxvar_BackendVariable_getVarAt, omc_BackendVariable_daeVars(threadData, _isyst));

          _vars = omc_BackendVariable_listVar1(threadData, _var_lst);

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _subsyst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta8, _OMC_LIT12, omc_BackendEquation_emptyEqns(threadData));

          _adjEnh = omc_BackendDAEUtil_getAdjacencyMatrixEnhanced(threadData, _subsyst, _ishared, omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_adjEnhT);

          _size = listLength(_vindx);

          _varArray = arrayCreate(_size, omc_mk_boolean(1 /* true */));

          _eqArray = arrayCreate(_size, omc_mk_boolean(1 /* true */));

          _nE = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

          _nV = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

          _unsolvedDiscreteVars = omc_Tearing_findDiscreteWarnTearingSelect(threadData, _var_lst);

          _unsolvedCSEVars = omc_Tearing_findCSE(threadData, _var_lst);

          _unsolvedCombined = listReverse(omc_List_uniqueIntN(threadData, listAppend(_unsolvedDiscreteVars, _unsolvedCSEVars), listLength(_var_lst)));

          _qidx = ((modelica_integer) 1);

          {
            modelica_metatype _eqn;
            for (tmpMeta9 = _eqn_lst; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _eqn = MMC_CAR(tmpMeta9);
              if(omc_BackendEquation_isAlgorithm(threadData, _eqn))
              {
                arrayUpdate(_eqArray,_qidx,omc_mk_boolean(0 /* false */));

                tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
                _algSolvedVars = tmpMeta10;

                {
                  modelica_metatype _entr;
                  for (tmpMeta11 = arrayGet(_adjEnh,_qidx) /* DAE.ASUB */; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
                  {
                    _entr = MMC_CAR(tmpMeta11);
                    if(omc_Tearing_isEntrySolved(threadData, _entr))
                    {
                      /* Pattern-matching assignment */
                      tmpMeta12 = _entr;
                      tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 1);
                      tmp14 = omc_unbox_integer(tmpMeta13);
                      _vidx = tmp14  /* pattern as ty=Integer */;

                      tmpMeta15 = mmc_mk_cons(omc_mk_integer(_vidx), _algSolvedVars);
                      _algSolvedVars = tmpMeta15;

                      _unsolvedCombined = omc_List_deleteMemberOnTrue(threadData, omc_mk_integer(_vidx), _unsolvedCombined, boxvar_intEq, NULL);

                      arrayUpdate(_varArray,_vidx,omc_mk_boolean(0 /* false */));
                    }
                  }
                }

                tmpMeta18 = omc_mk_box3(3, &BackendDAE_InnerEquation_INNEREQUATION__desc, omc_mk_integer(_qidx), _algSolvedVars);
                tmpMeta17 = mmc_mk_cons(tmpMeta18, _innerEquationsLocalIndex);
                _innerEquationsLocalIndex = tmpMeta17;
              }

              _qidx = ((modelica_integer) 1) + _qidx;
            }
          }

          if((!listEmpty(_unsolvedCombined)))
          {
            omc_Tearing_matchDiscreteVars(threadData, _unsolvedCombined, _adjEnhT, _varArray, _eqArray, _nE, _nV, NULL);

            _varArray = omc_Tearing_getTearingSetfromAssign(threadData, _unsolvedCombined, _nE, _varArray, _eqArray ,&_eqArray ,&_innerEquations);

            {
              modelica_metatype _iq;
              for (tmpMeta20 = _innerEquations; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
              {
                _iq = MMC_CAR(tmpMeta20);
                tmpMeta21 = mmc_mk_cons(_iq, _innerEquationsLocalIndex);
                _innerEquationsLocalIndex = tmpMeta21;
              }
            }
          }

          tmp24 = ((modelica_integer) 1); tmp25 = 1; tmp26 = listLength(_eindex);
          if(!(((tmp25 > 0) && (tmp24 > tmp26)) || ((tmp25 < 0) && (tmp24 < tmp26))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp24, tmp26); _i += tmp25)
            {

              if(omc_unbox_boolean(arrayGet(_eqArray,_i) /* DAE.ASUB */))
              {
                tmpMeta23 = mmc_mk_cons(omc_mk_integer(_i), _residualequations);
                _residualequations = tmpMeta23;
              }
            }
          }

          tmp28 = ((modelica_integer) 1); tmp29 = 1; tmp30 = listLength(_vindx);
          if(!(((tmp29 > 0) && (tmp28 > tmp30)) || ((tmp29 < 0) && (tmp28 < tmp30))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp28, tmp30); _i += tmp29)
            {

              if(omc_unbox_boolean(arrayGet(_varArray,_i) /* DAE.ASUB */))
              {
                tmpMeta27 = mmc_mk_cons(omc_mk_integer(_i), _iterationVars);
                _iterationVars = tmpMeta27;
              }
            }
          }

          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp32;
            modelica_metatype tmpMeta33;
            modelica_metatype tmpMeta34;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp41;
            modelica_metatype _ieqn_loopVar = 0;
            modelica_metatype _ieqn;
            _ieqn_loopVar = _innerEquationsLocalIndex;
            tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta33; /* defaultValue */
            tmp32 = &__omcQ_24tmpVar27;
            while(1) {
              tmp41 = 1;
              if (!listEmpty(_ieqn_loopVar)) {
                _ieqn = MMC_CAR(_ieqn_loopVar);
                _ieqn_loopVar = MMC_CDR(_ieqn_loopVar);
                tmp41--;
              }
              if (tmp41 == 0) {
                { /* match expression */
                  modelica_metatype tmp37_1;
                  tmp37_1 = _ieqn;
                  {
                    volatile mmc_switch_type tmp37;
                    int tmp38;
                    tmp37 = 0;
                    for (; tmp37 < 1; tmp37++) {
                      switch (MMC_SWITCH_CAST(tmp37)) {
                      case 0: {
                        modelica_metatype tmpMeta39;
                        modelica_metatype tmpMeta40;
                        if (mmc__uniontype__metarecord__typedef__equal(tmp37_1,0,2) == 0) goto tmp36_end;
                        
                        /* Pattern matching succeeded */
                        tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(4));
                        memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_ieqn), 4*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[3] = omc_Tearing_selectFromList__rev(threadData, _vindx, (OMC_BOX_FIELD(_ieqn, 3)));
                        _ieqn = tmpMeta39;

                        tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(4));
                        memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_ieqn), 4*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[2] = listGet(_eindex, omc_unbox_integer((OMC_BOX_FIELD(_ieqn, 2))));
                        _ieqn = tmpMeta40;
                        tmpMeta34 = _ieqn;
                        goto tmp36_done;
                      }
                      }
                      goto tmp36_end;
                      tmp36_end: ;
                    }
                    goto goto_35;
                    goto_35:;
                    goto goto_4;
                    goto tmp36_done;
                    tmp36_done:;
                  }
                }__omcQ_24tmpVar26 = tmpMeta34;
                *tmp32 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp32 = &MMC_CDR(*tmp32);
              } else if (tmp41 == 1) {
                break;
              } else {
                goto goto_4;
              }
            }
            *tmp32 = mmc_mk_nil();
            tmpMeta31 = __omcQ_24tmpVar27;
          }
          _innerEquations = tmpMeta31;

          _iterationVars = omc_Tearing_selectFromList__rev(threadData, _vindx, _iterationVars);

          _residualequations = omc_Tearing_selectFromList__rev(threadData, _eindex, _residualequations);

          tmpMeta42 = omc_mk_box5(3, &BackendDAE_TearingSet_TEARINGSET__desc, listReverse(_iterationVars), listReverse(_residualequations), listReverse(_innerEquations), _OMC_LIT41);
          tmpMeta43 = omc_mk_box5(10, &BackendDAE_StrongComponent_TORNSYSTEM__desc, tmpMeta42, mmc_mk_none(), omc_mk_boolean(_linear), omc_mk_boolean(_mixedSystem));
          _ocomp = tmpMeta43;
          goto tmp5_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT325, _OMC_LIT326);

          goto goto_4;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_4;
      tmp5_done:
      (void)tmp6;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp5_done2;
      goto_4:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp6 < 2) {
        goto tmp5_top;
      }
      OMC_THROW_INTERNAL();
      tmp5_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _ocomp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_minimalTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _jacType, modelica_metatype _mixedSystem)
{
  modelica_integer tmp1;
  modelica_metatype _ocomp = NULL;
  tmp1 = omc_unbox_integer(_mixedSystem);
  _ocomp = omc_Tearing_minimalTearing(threadData, _isyst, _ishared, _eindex, _vindx, _jacType, tmp1);
  /* skip box _ocomp; BackendDAE.StrongComponent */
  return _ocomp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing4__1(threadData_t *threadData, modelica_metatype _othercomps, modelica_metatype _ass2, modelica_metatype _mapIncRowEqn, modelica_metatype _eindxarr, modelica_metatype _varindxarr, modelica_metatype _columark, modelica_integer _mark)
{
  modelica_metatype _outInnerEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outInnerEquations has no default value.
  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp20;
    modelica_metatype _x_loopVar = 0;
    modelica_metatype _x;
    _x_loopVar = _othercomps;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar29;
    while(1) {
      tmp20 = 1;
      if (!listEmpty(_x_loopVar)) {
        _x = MMC_CAR(_x_loopVar);
        _x_loopVar = MMC_CDR(_x_loopVar);
        tmp20--;
      }
      if (tmp20 == 0) {
        { /* match expression */
          modelica_metatype tmp7_1;
          tmp7_1 = _x;
          {
            modelica_metatype _vlst = NULL;
            modelica_metatype _clst = NULL;
            modelica_metatype _elst = NULL;
            modelica_integer _e;
            modelica_integer _v;
            modelica_integer _c;
            volatile mmc_switch_type tmp7;
            int tmp8;
            // _vlst has no default value.
            // _clst has no default value.
            // _elst has no default value.
            // _e has no default value.
            // _v has no default value.
            // _c has no default value.
            tmp7 = 0;
            for (; tmp7 < 2; tmp7++) {
              switch (MMC_SWITCH_CAST(tmp7)) {
              case 0: {
                modelica_metatype tmpMeta9;
                modelica_metatype tmpMeta10;
                modelica_integer tmp11;
                modelica_metatype tmpMeta12;
                modelica_metatype tmpMeta13;
                if (listEmpty(tmp7_1)) goto tmp6_end;
                tmpMeta9 = MMC_CAR(tmp7_1);
                tmpMeta10 = MMC_CDR(tmp7_1);
                tmp11 = omc_unbox_integer(tmpMeta9);
                if (!listEmpty(tmpMeta10)) goto tmp6_end;
                _c = tmp11  /* pattern as ty=Integer */;
                /* Pattern matching succeeded */
                _e = omc_unbox_integer(arrayGet(_mapIncRowEqn,_c) /* DAE.ASUB */);

                _e = omc_unbox_integer(arrayGet(_eindxarr,_e) /* DAE.ASUB */);

                _v = omc_unbox_integer(arrayGet(_ass2,_c) /* DAE.ASUB */);

                _v = omc_unbox_integer(arrayGet(_varindxarr,_v) /* DAE.ASUB */);
                tmpMeta12 = mmc_mk_cons(omc_mk_integer(_v), MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta13 = omc_mk_box3(3, &BackendDAE_InnerEquation_INNEREQUATION__desc, omc_mk_integer(_e), tmpMeta12);
                tmpMeta4 = tmpMeta13;
                goto tmp6_done;
              }
              case 1: {
                modelica_metatype tmpMeta14;
                modelica_metatype tmpMeta15;
                modelica_metatype tmpMeta16;
                modelica_metatype tmpMeta17;
                modelica_integer tmp18;
                modelica_metatype tmpMeta19;
                
                _clst = tmp7_1;
                /* Pattern matching succeeded */
                _elst = omc_List_map1r(threadData, _clst, boxvar_arrayGet, _mapIncRowEqn);

                tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
                _elst = omc_List_fold2(threadData, _elst, boxvar_Tearing_uniqueIntLst, omc_mk_integer(_mark), _columark, tmpMeta14);

                /* Pattern-matching assignment */
                tmpMeta15 = _elst;
                if (listEmpty(tmpMeta15)) goto goto_5;
                tmpMeta16 = MMC_CAR(tmpMeta15);
                tmpMeta17 = MMC_CDR(tmpMeta15);
                tmp18 = omc_unbox_integer(tmpMeta16);
                if (!listEmpty(tmpMeta17)) goto goto_5;
                _e = tmp18  /* pattern as ty=Integer */;

                _e = omc_unbox_integer(arrayGet(_eindxarr,_e) /* DAE.ASUB */);

                _vlst = omc_List_map1r(threadData, _clst, boxvar_arrayGet, _ass2);

                _vlst = omc_List_map1r(threadData, _vlst, boxvar_arrayGet, _varindxarr);
                tmpMeta19 = omc_mk_box3(3, &BackendDAE_InnerEquation_INNEREQUATION__desc, omc_mk_integer(_e), _vlst);
                tmpMeta4 = tmpMeta19;
                goto tmp6_done;
              }
              }
              goto tmp6_end;
              tmp6_end: ;
            }
            goto goto_5;
            goto_5:;
            OMC_THROW_INTERNAL();
            goto tmp6_done;
            tmp6_done:;
          }
        }__omcQ_24tmpVar28 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar28,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp20 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar29;
  }
  _outInnerEquations = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outInnerEquations;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing4__1(threadData_t *threadData, modelica_metatype _othercomps, modelica_metatype _ass2, modelica_metatype _mapIncRowEqn, modelica_metatype _eindxarr, modelica_metatype _varindxarr, modelica_metatype _columark, modelica_metatype _mark)
{
  modelica_integer tmp1;
  modelica_metatype _outInnerEquations = NULL;
  tmp1 = omc_unbox_integer(_mark);
  _outInnerEquations = omc_Tearing_omcTearing4__1(threadData, _othercomps, _ass2, _mapIncRowEqn, _eindxarr, _varindxarr, _columark, tmp1);
  /* skip box _outInnerEquations; list<BackendDAE.InnerEquation> */
  return _outInnerEquations;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing4(threadData_t *threadData, modelica_metatype _jacType, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _subsyst, modelica_metatype _tvars, modelica_metatype _residual, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _othercomps, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _columark, modelica_integer _mark, modelica_boolean _mixedSystem, modelica_boolean *out_outRunMatching)
{
  modelica_metatype _ocomp = NULL;
  modelica_boolean _outRunMatching;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ocomp has no default value.
  // _outRunMatching has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _ores = NULL;
      modelica_metatype _residual1 = NULL;
      modelica_metatype _ovars = NULL;
      modelica_metatype _innerEquations = NULL;
      modelica_metatype _eindxarr = NULL;
      modelica_metatype _varindxarr = NULL;
      modelica_boolean _linear;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ores has no default value.
      // _residual1 has no default value.
      // _ovars has no default value.
      // _innerEquations has no default value.
      // _eindxarr has no default value.
      // _varindxarr has no default value.
      // _linear has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT327),stdout);
          }

          _residual1 = omc_List_map1r(threadData, _residual, boxvar_arrayGet, _mapIncRowEqn);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _residual1 = omc_List_fold2(threadData, _residual1, boxvar_Tearing_uniqueIntLst, omc_mk_integer(_mark), _columark, tmpMeta6);

          _eindxarr = listArray(_eindex);

          _ores = omc_List_map1r(threadData, _residual1, boxvar_arrayGet, _eindxarr);

          _varindxarr = listArray(_vindx);

          _ovars = omc_List_map1r(threadData, _tvars, boxvar_arrayGet, _varindxarr);

          _innerEquations = omc_Tearing_omcTearing4__1(threadData, _othercomps, _ass2, _mapIncRowEqn, _eindxarr, _varindxarr, _columark, _mark);

          _linear = omc_BackendDAEUtil_getLinearfromJacType(threadData, _jacType);
          tmpMeta7 = omc_mk_box5(3, &BackendDAE_TearingSet_TEARINGSET__desc, _ovars, _ores, _innerEquations, _OMC_LIT41);
          tmpMeta8 = omc_mk_box5(10, &BackendDAE_StrongComponent_TORNSYSTEM__desc, tmpMeta7, mmc_mk_none(), omc_mk_boolean(_linear), omc_mk_boolean(_mixedSystem));
          tmpMeta[0+0] = tmpMeta8;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta9 = omc_mk_box5(10, &BackendDAE_StrongComponent_TORNSYSTEM__desc, _OMC_LIT328, mmc_mk_none(), omc_mk_boolean(0 /* false */), omc_mk_boolean(_mixedSystem));
          tmpMeta[0+0] = tmpMeta9;
          tmp1_c1 = 0 /* false */;
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
  _ocomp = tmpMeta[0+0];
  _outRunMatching = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  omc_ret_ = _ocomp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing4(threadData_t *threadData, modelica_metatype _jacType, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _subsyst, modelica_metatype _tvars, modelica_metatype _residual, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _othercomps, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _mixedSystem, modelica_metatype *out_outRunMatching)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _outRunMatching;
  modelica_metatype _ocomp = NULL;
  tmp1 = omc_unbox_integer(_mark);
  tmp2 = omc_unbox_integer(_mixedSystem);
  _ocomp = omc_Tearing_omcTearing4(threadData, _jacType, _isyst, _ishared, _subsyst, _tvars, _residual, _ass1, _ass2, _othercomps, _eindex, _vindx, _mapEqnIncRow, _mapIncRowEqn, _columark, tmp1, tmp2, &_outRunMatching);
  /* skip box _ocomp; BackendDAE.StrongComponent */
  if (out_outRunMatching) { *out_outRunMatching = omc_mk_icon(_outRunMatching); }
  return _ocomp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing3(threadData_t *threadData, modelica_metatype _unassigned, modelica_metatype _unsolvables, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _size, modelica_metatype _vars, modelica_metatype _ishared, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_integer _mark, modelica_metatype _inTVars, modelica_integer *out_oMark)
{
  modelica_metatype _outTVars = NULL;
  modelica_integer _oMark;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTVars has no default value.
  // _oMark has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _unassigned;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inTVars;
          tmp1_c1 = _mark;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_Tearing_omcTearing2(threadData, _unsolvables, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, _size, _vars, _ishared, _ass1, _ass2, _columark, _mark, _inTVars, &tmp1_c1);
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
  _outTVars = tmpMeta[0+0];
  _oMark = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_oMark) { *out_oMark = _oMark; }
  omc_ret_ = _outTVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing3(threadData_t *threadData, modelica_metatype _unassigned, modelica_metatype _unsolvables, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _size, modelica_metatype _vars, modelica_metatype _ishared, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _inTVars, modelica_metatype *out_oMark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oMark;
  modelica_metatype _outTVars = NULL;
  tmp1 = omc_unbox_integer(_size);
  tmp2 = omc_unbox_integer(_mark);
  _outTVars = omc_Tearing_omcTearing3(threadData, _unassigned, _unsolvables, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, tmp1, _vars, _ishared, _ass1, _ass2, _columark, tmp2, _inTVars, &_oMark);
  /* skip box _outTVars; list<#Integer> */
  if (out_oMark) { *out_oMark = omc_mk_icon(_oMark); }
  return _outTVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tearingBFS2(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _clst, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _inNextQueue)
{
  modelica_metatype _outNextQueue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNextQueue has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _rows;
    tmp4_2 = _clst;
    {
      modelica_integer _r;
      modelica_integer _c;
      modelica_metatype _ilst = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _vareqns = NULL;
      modelica_metatype _newqueue = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _c has no default value.
      // _ilst has no default value.
      // _rest has no default value.
      // _vareqns has no default value.
      // _newqueue has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNextQueue;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 1);
          tmp9 = omc_unbox_integer(tmpMeta8);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          tmp12 = omc_unbox_integer(tmpMeta10);
          _r = tmp9  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          _c = tmp12  /* pattern as ty=Integer */;
          _ilst = tmpMeta11;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp13 = stringAppend(_OMC_LIT329,intString(_c));
            tmp14 = stringAppend(tmp13,_OMC_LIT128);
            tmp15 = stringAppend(tmp14,intString(_r));
            tmp16 = stringAppend(tmp15,_OMC_LIT10);
            fputs(omc_string_data(tmp16),stdout);
          }

          arrayUpdate(_ass1, _r, omc_mk_integer(_c));

          arrayUpdate(_ass2, _c, omc_mk_integer(_r));

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp17 = stringAppend(_OMC_LIT46,stringDelimitList(omc_List_mapArray(threadData, _ass1, boxvar_intString), _OMC_LIT7));
            tmp18 = stringAppend(tmp17,_OMC_LIT10);
            fputs(omc_string_data(tmp18),stdout);

            tmp19 = stringAppend(_OMC_LIT39,stringDelimitList(omc_List_mapArray(threadData, _ass2, boxvar_intString), _OMC_LIT7));
            tmp20 = stringAppend(tmp19,_OMC_LIT10);
            fputs(omc_string_data(tmp20),stdout);
          }

          _vareqns = omc_List_removeOnTrue(threadData, _ass2, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_mt,_r) /* DAE.ASUB */);

          _newqueue = listAppend(_inNextQueue, _vareqns);
          /* Tail recursive call */
          _rows = _rest;
          _clst = _ilst;
          _inNextQueue = _newqueue;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outNextQueue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNextQueue;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_isEntrySolvable(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = omc_Tearing_solvable(threadData, omc_Util_tuple32(threadData, _entry));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_isEntrySolvable(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Tearing_isEntrySolvable(threadData, _entry);
  out_b = omc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_isEntrySolved(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _entry;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,1) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 2);
          tmp9 = omc_unbox_integer(tmpMeta8);
          
          _b = tmp9  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT330, _OMC_LIT331);
          tmp1 = (_b && (!(stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT349), _OMC_LIT340))));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_isEntrySolved(threadData_t *threadData, modelica_metatype _entry)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Tearing_isEntrySolved(threadData, _entry);
  out_b = omc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_solvable(threadData_t *threadData, modelica_metatype _s)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _s;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp6 = omc_unbox_integer(tmpMeta5);
          _b = tmp6  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _b;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp8 = omc_unbox_integer(tmpMeta7);
          _b = tmp8  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = (_b && (!(stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT349), _OMC_LIT340))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 10: {
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solvable(threadData_t *threadData, modelica_metatype _s)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Tearing_solvable(threadData, _s);
  out_b = omc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_solvableLst(threadData_t *threadData, modelica_metatype _rows)
{
  modelica_boolean _solvable;
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _solvable = 1 /* true */;
  // _s has no default value.
  {
    modelica_metatype _r;
    for (tmpMeta1 = _rows; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _r = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _r;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 2);
      _s = tmpMeta3;

      if((!omc_Tearing_solvable(threadData, _s)))
      {
        _solvable = 0 /* false */;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _solvable;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solvableLst(threadData_t *threadData, modelica_metatype _rows)
{
  modelica_boolean _solvable;
  modelica_metatype out_solvable;
  _solvable = omc_Tearing_solvableLst(threadData, _rows);
  out_solvable = omc_mk_icon(_solvable);
  return out_solvable;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tearingBFS1(threadData_t *threadData, modelica_metatype _rows, modelica_integer _size, modelica_metatype _c, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _inNextQueue)
{
  modelica_metatype _outNextQueue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNextQueue has no default value.
  { /* match expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_string tmp6;
          modelica_string tmp7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((listLength(_rows) == _size) && omc_Tearing_solvableLst(threadData, _rows))) goto tmp3_end;
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp6 = stringAppend(_OMC_LIT350,stringDelimitList(omc_List_map(threadData, _c, boxvar_intString), _OMC_LIT70));
            tmp7 = stringAppend(tmp6,_OMC_LIT10);
            fputs(omc_string_data(tmp7),stdout);
          }
          tmpMeta1 = omc_Tearing_tearingBFS2(threadData, _rows, _c, _mt, _ass1, _ass2, _inNextQueue);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _inNextQueue;
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
  _outNextQueue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNextQueue;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tearingBFS1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _size, modelica_metatype _c, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _inNextQueue)
{
  modelica_integer tmp1;
  modelica_metatype _outNextQueue = NULL;
  tmp1 = omc_unbox_integer(_size);
  _outNextQueue = omc_Tearing_tearingBFS1(threadData, _rows, tmp1, _c, _mt, _ass1, _ass2, _inNextQueue);
  /* skip box _outNextQueue; list<tuple<#Integer, BackendDAE.Solvability, list<DAE.Constraint>>> */
  return _outNextQueue;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_hasnonlinearVars1(threadData_t *threadData, modelica_metatype _row)
{
  modelica_boolean _hasnonlinear;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasnonlinear has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _row;
    {
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,5,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _row = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _hasnonlinear = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hasnonlinear;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_hasnonlinearVars1(threadData_t *threadData, modelica_metatype _row)
{
  modelica_boolean _hasnonlinear;
  modelica_metatype out_hasnonlinear;
  _hasnonlinear = omc_Tearing_hasnonlinearVars1(threadData, _row);
  out_hasnonlinear = omc_mk_icon(_hasnonlinear);
  return out_hasnonlinear;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_hasnonlinearVars(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _m)
{
  modelica_boolean _hasnonlinear;
  modelica_integer _r;
  modelica_metatype _row = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasnonlinear has no default value.
  // _r has no default value.
  // _row has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _entry;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmp3 = omc_unbox_integer(tmpMeta2);
  _r = tmp3  /* pattern as ty=Integer */;

  _row = arrayGet(_m,_r) /* DAE.ASUB */;

  _hasnonlinear = omc_Tearing_hasnonlinearVars1(threadData, _row);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hasnonlinear;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_hasnonlinearVars(threadData_t *threadData, modelica_metatype _entry, modelica_metatype _m)
{
  modelica_boolean _hasnonlinear;
  modelica_metatype out_hasnonlinear;
  _hasnonlinear = omc_Tearing_hasnonlinearVars(threadData, _entry, _m);
  out_hasnonlinear = omc_mk_icon(_hasnonlinear);
  return out_hasnonlinear;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_sortEqnsSolvable(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m)
{
  modelica_metatype _nextQueue = NULL;
  modelica_metatype _qnon = NULL;
  modelica_metatype _qsolv = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _nextQueue has no default value.
  // _qnon has no default value.
  // _qsolv has no default value.
  _qnon = omc_List_split1OnTrue(threadData, _queue, boxvar_Tearing_hasnonlinearVars, _m ,&_qsolv);

  _nextQueue = listAppend(_qsolv, _qnon);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _nextQueue;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC void omc_Tearing_tearingBFS(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _size, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _nextQueue)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _queue;
    tmp3_2 = _nextQueue;
    {
      modelica_integer _c;
      modelica_integer _eqnsize;
      modelica_integer _cnonscalar;
      modelica_metatype _rest = NULL;
      modelica_metatype _newqueue = NULL;
      modelica_metatype _rows = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _c has no default value.
      // _eqnsize has no default value.
      // _cnonscalar has no default value.
      // _rest has no default value.
      // _newqueue has no default value.
      // _rows has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _newqueue = omc_List_removeOnTrue(threadData, _ass2, boxvar_Tearing_isAssignedSaveEnhanced, _nextQueue);

          _newqueue = omc_Tearing_sortEqnsSolvable(threadData, _newqueue, _m);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT351),stdout);
          }

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          /* Tail recursive call */
          _queue = _newqueue;
          _nextQueue = tmpMeta5;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmp3_1);
          tmpMeta7 = MMC_CDR(tmp3_1);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 1);
          tmp9 = omc_unbox_integer(tmpMeta8);
          
          _c = tmp9  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT352),stdout);

            omc_BackendDump_dumpAdjacencyRowEnhanced(threadData, _queue);

            tmp10 = stringAppend(_OMC_LIT353,intString(_c));
            tmp11 = stringAppend(tmp10,_OMC_LIT10);
            fputs(omc_string_data(tmp11),stdout);
          }

          _rows = omc_List_removeOnTrue(threadData, _ass1, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_m,_c) /* DAE.ASUB */);

          _cnonscalar = omc_unbox_integer(arrayGet(_mapIncRowEqn,_c) /* DAE.ASUB */);

          _eqnsize = listLength(arrayGet(_mapEqnIncRow,_cnonscalar) /* DAE.ASUB */);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp12 = stringAppend(_OMC_LIT354,intString(_eqnsize));
            tmp13 = stringAppend(tmp12,_OMC_LIT10);
            fputs(omc_string_data(tmp13),stdout);

            tmp14 = stringAppend(_OMC_LIT355,intString(_c));
            tmp15 = stringAppend(tmp14,_OMC_LIT356);
            fputs(omc_string_data(tmp15),stdout);

            omc_BackendDump_dumpAdjacencyRowEnhanced(threadData, _rows);

            fputs(omc_string_data(_OMC_LIT10),stdout);
          }

          _newqueue = omc_Tearing_tearingBFS1(threadData, _rows, _eqnsize, arrayGet(_mapEqnIncRow,_cnonscalar) /* DAE.ASUB */, _mt, _ass1, _ass2, _nextQueue);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT357),stdout);

            omc_BackendDump_dumpAdjacencyRowEnhanced(threadData, _newqueue);

            fputs(omc_string_data(_OMC_LIT35),stdout);
          }

          /* Tail recursive call */
          _queue = _rest;
          _nextQueue = _newqueue;
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_Tearing_tearingBFS(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _size, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _nextQueue)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_size);
  omc_Tearing_tearingBFS(threadData, _queue, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, tmp1, _ass1, _ass2, _nextQueue);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_selectVarWithMostPoints(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _points)
{
  modelica_integer _oVar;
  modelica_integer _defp;
  modelica_integer _p;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oVar = ((modelica_integer) -1);
  _defp = ((modelica_integer) -1);
  // _p has no default value.
  {
    modelica_metatype _v;
    for (tmpMeta1 = _vars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      _p = omc_unbox_integer(listGet(_points, omc_unbox_integer(_v)));

      if((_p > _defp))
      {
        _defp = _p;

        _oVar = omc_unbox_integer(_v);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oVar;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_selectVarWithMostPoints(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _points)
{
  modelica_integer _oVar;
  modelica_metatype out_oVar;
  _oVar = omc_Tearing_selectVarWithMostPoints(threadData, _vars, _points);
  out_oVar = omc_mk_icon(_oVar);
  return out_oVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_discriminateDiscrete(threadData_t *threadData, modelica_integer _v, modelica_metatype _vars, modelica_metatype _iPoints)
{
  modelica_metatype _oPoints = NULL;
  modelica_integer _p;
  modelica_boolean _b;
  modelica_metatype _var = NULL;
  modelica_integer tmp1;
  modelica_boolean tmp2;
  modelica_integer tmp3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oPoints has no default value.
  // _p has no default value.
  // _b has no default value.
  // _var has no default value.
  _var = omc_BackendVariable_getVarAt(threadData, _vars, _v);

  _b = omc_BackendVariable_isVarDiscrete(threadData, _var);

  _p = omc_unbox_integer(arrayGet(_iPoints,_v) /* DAE.ASUB */);

  tmp2 = (modelica_boolean)_b;
  if(tmp2)
  {
    tmp1 = ((modelica_integer) 10);
    if (tmp1 == 0) {OMC_THROW_INTERNAL();}
    tmp3 = modelica_div_integer(_p,tmp1).quot;
  }
  else
  {
    tmp3 = _p;
  }
  _p = tmp3;

  _oPoints = arrayUpdate(_iPoints, _v, omc_mk_integer(_p));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oPoints;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_discriminateDiscrete(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_metatype _iPoints)
{
  modelica_integer tmp1;
  modelica_metatype _oPoints = NULL;
  tmp1 = omc_unbox_integer(_v);
  _oPoints = omc_Tearing_discriminateDiscrete(threadData, tmp1, _vars, _iPoints);
  /* skip box _oPoints; array<#Integer> */
  return _oPoints;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_isAssignedSaveEnhanced(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _inTpl)
{
  modelica_boolean _outB;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTpl;
    {
      modelica_integer _i;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          tmp7 = omc_unbox_integer(tmpMeta6);
          
          _i = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_i > ((modelica_integer) 0))) goto tmp3_end;
          tmp1 = (omc_unbox_integer(arrayGet(_ass,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outB;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_isAssignedSaveEnhanced(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _inTpl)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_Tearing_isAssignedSaveEnhanced(threadData, _ass, _inTpl);
  out_outB = omc_mk_icon(_outB);
  return out_outB;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_addEqnWeights(threadData_t *threadData, modelica_integer _e, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _iPoints)
{
  modelica_metatype _oPoints = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oPoints has no default value.
  { /* matchcontinue expression */
    {
      modelica_integer _v1;
      modelica_integer _v2;
      modelica_metatype _points = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v1 has no default value.
      // _v2 has no default value.
      // _points has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = omc_List_removeOnTrue(threadData, _ass1, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_m,_e) /* DAE.ASUB */);
          if (listEmpty(tmpMeta6)) goto goto_2;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta7, 1);
          tmp10 = omc_unbox_integer(tmpMeta9);
          if (listEmpty(tmpMeta8)) goto goto_2;
          tmpMeta11 = MMC_CAR(tmpMeta8);
          tmpMeta12 = MMC_CDR(tmpMeta8);
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta11, 1);
          tmp14 = omc_unbox_integer(tmpMeta13);
          if (!listEmpty(tmpMeta12)) goto goto_2;
          _v1 = tmp10  /* pattern as ty=Integer */;
          _v2 = tmp14  /* pattern as ty=Integer */;

          _points = arrayUpdate(_iPoints, _v1, omc_mk_integer(((modelica_integer) 5) + (omc_unbox_integer(arrayGet(_iPoints,_v1) /* DAE.ASUB */))));
          tmpMeta1 = arrayUpdate(_iPoints, _v2, omc_mk_integer(((modelica_integer) 5) + (omc_unbox_integer(arrayGet(_points,_v2) /* DAE.ASUB */))));
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iPoints;
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
  _oPoints = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oPoints;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_addEqnWeights(threadData_t *threadData, modelica_metatype _e, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _iPoints)
{
  modelica_integer tmp1;
  modelica_metatype _oPoints = NULL;
  tmp1 = omc_unbox_integer(_e);
  _oPoints = omc_Tearing_addEqnWeights(threadData, tmp1, _m, _ass1, _iPoints);
  /* skip box _oPoints; array<#Integer> */
  return _oPoints;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_solvabilityWeights(threadData_t *threadData, modelica_metatype _solva)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _solva;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          if (0 /* false */ != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp9 = omc_unbox_integer(tmpMeta8);
          if (1 /* true */ != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 50);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          if (0 /* false */ != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp13 = omc_unbox_integer(tmpMeta12);
          if (1 /* true */ != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 100);
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 200);
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 300);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _i = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _i;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solvabilityWeights(threadData_t *threadData, modelica_metatype _solva)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_Tearing_solvabilityWeights(threadData, _solva);
  out_i = omc_mk_icon(_i);
  return out_i;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_solvabilityWeightsnoStates(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _ass, modelica_integer _iW)
{
  modelica_integer _oW;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oW has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTpl;
    {
      modelica_metatype _s = NULL;
      modelica_integer _eq;
      modelica_integer _w;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s has no default value.
      // _eq has no default value.
      // _w has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _eq = tmp7  /* pattern as ty=Integer */;
          _s = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((_eq > ((modelica_integer) 0)) && (!(omc_unbox_integer(arrayGet(_ass,_eq) /* DAE.ASUB */) > ((modelica_integer) 0))))) goto tmp3_end;
          _w = omc_Tearing_solvabilityWeights(threadData, _s);
          tmp1 = _w + _iW;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _iW;
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
  _oW = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oW;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solvabilityWeightsnoStates(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _ass, modelica_metatype _iW)
{
  modelica_integer tmp1;
  modelica_integer _oW;
  modelica_metatype out_oW;
  tmp1 = omc_unbox_integer(_iW);
  _oW = omc_Tearing_solvabilityWeightsnoStates(threadData, _inTpl, _ass, tmp1);
  out_oW = omc_mk_icon(_oW);
  return out_oW;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_calcSolvabilityWeight(threadData_t *threadData, modelica_metatype _inRow, modelica_metatype _ass2)
{
  modelica_integer _w;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _w has no default value.
  _w = omc_unbox_integer(omc_List_fold1(threadData, _inRow, boxvar_Tearing_solvabilityWeightsnoStates, _ass2, omc_mk_integer(((modelica_integer) 0))));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _w;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_calcSolvabilityWeight(threadData_t *threadData, modelica_metatype _inRow, modelica_metatype _ass2)
{
  modelica_integer _w;
  modelica_metatype out_w;
  _w = omc_Tearing_calcSolvabilityWeight(threadData, _inRow, _ass2);
  out_w = omc_mk_icon(_w);
  return out_w;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_calcVarWeights(threadData_t *threadData, modelica_integer _v, modelica_metatype _mt, modelica_metatype _ass2, modelica_metatype _iPoints)
{
  modelica_metatype _oPoints = NULL;
  modelica_integer _p;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oPoints has no default value.
  // _p has no default value.
  _p = omc_Tearing_calcSolvabilityWeight(threadData, arrayGet(_mt,_v) /* DAE.ASUB */, _ass2);

  _oPoints = arrayUpdate(_iPoints, _v, omc_mk_integer(_p));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oPoints;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_calcVarWeights(threadData_t *threadData, modelica_metatype _v, modelica_metatype _mt, modelica_metatype _ass2, modelica_metatype _iPoints)
{
  modelica_integer tmp1;
  modelica_metatype _oPoints = NULL;
  tmp1 = omc_unbox_integer(_v);
  _oPoints = omc_Tearing_calcVarWeights(threadData, tmp1, _mt, _ass2, _iPoints);
  /* skip box _oPoints; array<#Integer> */
  return _oPoints;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_removeMatched(threadData_t *threadData, modelica_metatype _elem, modelica_metatype _ass2)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _e;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oAcc = tmpMeta1;
  // _e has no default value.
  {
    modelica_metatype _el;
    for (tmpMeta2 = _elem; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _el = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _el;
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
      tmp5 = omc_unbox_integer(tmpMeta4);
      _e = tmp5  /* pattern as ty=Integer */;

      if(((_e > ((modelica_integer) 0)) && (omc_unbox_integer(arrayGet(_ass2,_e) /* DAE.ASUB */) < ((modelica_integer) 0))))
      {
        tmpMeta6 = mmc_mk_cons(_el, _oAcc);
        _oAcc = tmpMeta6;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oAcc;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getUnsolvableVarsConsiderMatching(threadData_t *threadData, modelica_integer _size, modelica_metatype _meT, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_metatype _unsolvables = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _elem = NULL;
  modelica_boolean _isUnsolvable;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _unsolvables = tmpMeta1;
  // _elem has no default value.
  // _isUnsolvable has no default value.
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _size;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _index;
    for(_index = ((modelica_integer) 1); in_range_integer(_index, tmp3, tmp5); _index += tmp4)
    {

      if((omc_unbox_integer(arrayGet(_ass1,_index) /* DAE.ASUB */) < ((modelica_integer) 0)))
      {
        _elem = arrayGet(_meT,_index) /* DAE.ASUB */;

        _elem = omc_Tearing_removeMatched(threadData, _elem, _ass2);

        _isUnsolvable = omc_Tearing_unsolvable(threadData, _elem);

        if(_isUnsolvable)
        {
          tmpMeta2 = mmc_mk_cons(omc_mk_integer(_index), _unsolvables);
          _unsolvables = tmpMeta2;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _unsolvables;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getUnsolvableVarsConsiderMatching(threadData_t *threadData, modelica_metatype _size, modelica_metatype _meT, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_integer tmp1;
  modelica_metatype _unsolvables = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_size);
  _unsolvables = omc_Tearing_getUnsolvableVarsConsiderMatching(threadData, tmp1, _meT, _ass1, _ass2);
  /* skip box _unsolvables; list<#Integer> */
  return _unsolvables;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_omcTearingSelectTearingVar(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never)
{
  modelica_integer _tearingVar;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tearingVar has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _freeVars = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _unsolvables = NULL;
      modelica_metatype _pointsLst = NULL;
      modelica_integer _tvar;
      modelica_integer _varsize;
      modelica_metatype _points = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _freeVars has no default value.
      // _eqns has no default value.
      // _unsolvables has no default value.
      // _pointsLst has no default value.
      // _tvar has no default value.
      // _varsize has no default value.
      // _points has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          /* Pattern matching succeeded */
          _unsolvables = omc_Tearing_getUnsolvableVarsConsiderMatching(threadData, omc_BackendVariable_varsSize(threadData, _vars), _mt, _ass1, _ass2);

          /* Pattern-matching assignment */
          tmp6 = listEmpty(_unsolvables);
          if (0 /* false */ != tmp6) goto goto_2;

          _tvar = omc_unbox_integer(listHead(_unsolvables));

          if(listMember(omc_mk_integer(_tvar), _tSel_never))
          {
            omc_Error_addCompilerWarning(threadData, _OMC_LIT246);
          }

          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            fputs(omc_string_data(_OMC_LIT358),stdout);
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp7 = stringAppend(_OMC_LIT359,intString(_tvar));
            tmp8 = stringAppend(tmp7,_OMC_LIT360);
            fputs(omc_string_data(tmp8),stdout);
          }
          tmp1 = _tvar;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_metatype tmpMeta13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_string tmp24;
          modelica_string tmp25;
          /* Pattern matching succeeded */
          _varsize = omc_BackendVariable_varsSize(threadData, _vars);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _freeVars = omc_Matching_getUnassigned(threadData, _varsize, _ass1, tmpMeta9);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT361),stdout);

            omc_BackendDump_debuglst(threadData, _freeVars, boxvar_intString, _OMC_LIT70, _OMC_LIT10);
          }

          omc_List_intersection1OnTrue(threadData, _freeVars, _tSel_never, boxvar_intEq ,&_freeVars ,NULL);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT362),stdout);

            omc_BackendDump_debuglst(threadData, _freeVars, boxvar_intString, _OMC_LIT70, _OMC_LIT10);
          }

          /* Pattern-matching assignment */
          tmp10 = listEmpty(_freeVars);
          if (0 /* false */ != tmp10) goto goto_2;

          _points = arrayCreate(_varsize, omc_mk_integer(((modelica_integer) 0)));

          _points = omc_List_fold2(threadData, _freeVars, boxvar_Tearing_calcVarWeights, _mt, _ass2, _points);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp11 = stringAppend(_OMC_LIT363,stringDelimitList(omc_List_mapArray(threadData, _points, boxvar_intString), _OMC_LIT7));
            tmp12 = stringAppend(tmp11,_OMC_LIT35);
            fputs(omc_string_data(tmp12),stdout);
          }

          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqns = omc_Matching_getUnassigned(threadData, arrayLength(_m), _ass2, tmpMeta13);

          _points = omc_List_fold2(threadData, _eqns, boxvar_Tearing_addEqnWeights, _m, _ass1, _points);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp14 = stringAppend(_OMC_LIT364,stringDelimitList(omc_List_mapArray(threadData, _points, boxvar_intString), _OMC_LIT7));
            tmp15 = stringAppend(tmp14,_OMC_LIT35);
            fputs(omc_string_data(tmp15),stdout);
          }

          _points = omc_List_fold1(threadData, _freeVars, boxvar_Tearing_discriminateDiscrete, _vars, _points);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp16 = stringAppend(_OMC_LIT365,stringDelimitList(omc_List_mapArray(threadData, _points, boxvar_intString), _OMC_LIT7));
            tmp17 = stringAppend(tmp16,_OMC_LIT35);
            fputs(omc_string_data(tmp17),stdout);
          }

          _pointsLst = omc_Tearing_preferAvoidVariables(threadData, _freeVars, arrayList(_points), _tSel_prefer, 3.0);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp18 = stringAppend(_OMC_LIT366,stringDelimitList(omc_List_map(threadData, _pointsLst, boxvar_intString), _OMC_LIT7));
            tmp19 = stringAppend(tmp18,_OMC_LIT35);
            fputs(omc_string_data(tmp19),stdout);
          }

          _pointsLst = omc_Tearing_preferAvoidVariables(threadData, _freeVars, _pointsLst, _tSel_avoid, 0.334);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp20 = stringAppend(_OMC_LIT367,stringDelimitList(omc_List_map(threadData, _pointsLst, boxvar_intString), _OMC_LIT7));
            tmp21 = stringAppend(tmp20,_OMC_LIT35);
            fputs(omc_string_data(tmp21),stdout);
          }

          _tvar = omc_Tearing_selectVarWithMostPoints(threadData, _freeVars, _pointsLst);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            tmp22 = stringAppend(_OMC_LIT359,intString(_tvar));
            tmp23 = stringAppend(tmp22,_OMC_LIT368);
            tmp24 = stringAppend(tmp23,intString(omc_unbox_integer(listGet(_pointsLst, _tvar))));
            tmp25 = stringAppend(tmp24,_OMC_LIT369);
            fputs(omc_string_data(tmp25),stdout);
          }
          else
          {
            if(listMember(omc_mk_integer(_tvar), _tSel_avoid))
            {
              omc_Error_addCompilerWarning(threadData, _OMC_LIT233);
            }
          }
          tmp1 = _tvar;
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          fputs(omc_string_data(_OMC_LIT370),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _tearingVar = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tearingVar;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearingSelectTearingVar(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never)
{
  modelica_integer _tearingVar;
  modelica_metatype out_tearingVar;
  _tearingVar = omc_Tearing_omcTearingSelectTearingVar(threadData, _vars, _ass1, _ass2, _m, _mt, _tSel_prefer, _tSel_avoid, _tSel_never);
  out_tearingVar = omc_mk_icon(_tearingVar);
  return out_tearingVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_findVareqns(threadData_t *threadData, modelica_metatype _ass2In, modelica_fnptr _inCompFunc, modelica_metatype _mt, modelica_metatype _tSel_alwaysIn)
{
  modelica_metatype _vareqnsOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _vareqnsOut = tmpMeta1;
  {
    modelica_metatype _tvar;
    for (tmpMeta2 = _tSel_alwaysIn; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _tvar = MMC_CAR(tmpMeta2);
      _vareqnsOut = omc_List_append__reverse(threadData, omc_List_removeOnTrue(threadData, _ass2In, ((modelica_fnptr) _inCompFunc), arrayGet(_mt,omc_unbox_integer(_tvar)) /* DAE.ASUB */), _vareqnsOut);
    }
  }

  _vareqnsOut = omc_List_unique(threadData, _vareqnsOut);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _vareqnsOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing2(threadData_t *threadData, modelica_metatype _unsolvables, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _size, modelica_metatype _vars, modelica_metatype _ishared, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_integer _mark, modelica_metatype _inTVars, modelica_integer *out_oMark)
{
  modelica_metatype _outTVars = NULL;
  modelica_integer _oMark;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTVars has no default value.
  // _oMark has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _unsolvables;
    tmp4_2 = _tSel_always;
    {
      modelica_integer _tvar;
      modelica_metatype _unassigned = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _unsolv = NULL;
      modelica_metatype _vareqns = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tvar has no default value.
      // _unassigned has no default value.
      // _rest has no default value.
      // _unsolv has no default value.
      // _vareqns has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT371),stdout);
          }

          _tvar = omc_Tearing_omcTearingSelectTearingVar(threadData, _vars, _ass1, _ass2, _m, _mt, _tSel_prefer, _tSel_avoid, _tSel_never);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT372),stdout);
          }

          arrayUpdate(_ass1, _tvar, omc_mk_integer((((modelica_integer) 2)) * (_size)));

          _vareqns = omc_List_removeOnTrue(threadData, _ass2, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_mt,_tvar) /* DAE.ASUB */);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT373),stdout);

            omc_BackendDump_dumpAdjacencyRowEnhanced(threadData, _vareqns);

            fputs(omc_string_data(_OMC_LIT10),stdout);
          }

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Tearing_tearingBFS(threadData, _vareqns, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, _size, _ass1, _ass2, tmpMeta6);

          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _unassigned = omc_Matching_getUnassigned(threadData, _size, _ass1, tmpMeta7);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = mmc_mk_cons(omc_mk_integer(_tvar), _inTVars);
          tmpMeta[0+0] = omc_Tearing_omcTearing3(threadData, _unassigned, tmpMeta8, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, _size, _vars, _ishared, _ass1, _ass2, _columark, ((modelica_integer) 1) + _mark, tmpMeta9, &tmp1_c1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          tmp12 = omc_unbox_integer(tmpMeta10);
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          _tvar = tmp12  /* pattern as ty=Integer */;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          if(listMember(omc_mk_integer(_tvar), _tSel_never))
          {
            omc_Error_addCompilerWarning(threadData, _OMC_LIT246);
          }

          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            fputs(omc_string_data(_OMC_LIT358),stdout);

            tmp13 = stringAppend(_OMC_LIT359,intString(_tvar));
            tmp14 = stringAppend(tmp13,_OMC_LIT374);
            fputs(omc_string_data(tmp14),stdout);
          }

          arrayUpdate(_ass1, _tvar, omc_mk_integer((((modelica_integer) 2)) * (_size)));

          _vareqns = omc_List_removeOnTrue(threadData, _ass2, boxvar_Tearing_isAssignedSaveEnhanced, arrayGet(_mt,_tvar) /* DAE.ASUB */);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT373),stdout);

            omc_BackendDump_dumpAdjacencyRowEnhanced(threadData, _vareqns);

            fputs(omc_string_data(_OMC_LIT10),stdout);
          }

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Tearing_tearingBFS(threadData, _vareqns, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, _size, _ass1, _ass2, tmpMeta15);

          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          _unassigned = omc_Matching_getUnassigned(threadData, _size, _ass1, tmpMeta16);
          tmpMeta17 = mmc_mk_cons(omc_mk_integer(_tvar), _inTVars);
          tmpMeta[0+0] = omc_Tearing_omcTearing3(threadData, _unassigned, _rest, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, _size, _vars, _ishared, _ass1, _ass2, _columark, ((modelica_integer) 1) + _mark, tmpMeta17, &tmp1_c1);
          goto tmp3_done;
        }
        case 2: {
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            fputs(omc_string_data(_OMC_LIT375),stdout);

            tmp18 = stringAppend(_OMC_LIT249,stringDelimitList(omc_List_map(threadData, _tSel_always, boxvar_intString), _OMC_LIT7));
            tmp19 = stringAppend(tmp18,_OMC_LIT10);
            fputs(omc_string_data(tmp19),stdout);
          }

          omc_Tearing_markTVarsOrResiduals(threadData, _tSel_always, _ass1);

          omc_List_intersection1OnTrue(threadData, _unsolvables, _tSel_always, boxvar_intEq ,&_unsolv ,NULL);

          _vareqns = omc_Tearing_findVareqns(threadData, _ass2, boxvar_Tearing_isAssignedSaveEnhanced, _mt, _tSel_always);

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            fputs(omc_string_data(_OMC_LIT376),stdout);

            omc_BackendDump_dumpAdjacencyRowEnhanced(threadData, _vareqns);

            fputs(omc_string_data(_OMC_LIT10),stdout);
          }

          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Tearing_tearingBFS(threadData, _vareqns, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, _size, _ass1, _ass2, tmpMeta20);

          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          _unassigned = omc_Matching_getUnassigned(threadData, _size, _ass1, tmpMeta21);
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_Tearing_omcTearing3(threadData, _unassigned, _unsolv, tmpMeta22, _tSel_prefer, _tSel_avoid, _tSel_never, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, _size, _vars, _ishared, _ass1, _ass2, _columark, ((modelica_integer) 1) + _mark, listAppend(_tSel_always, _inTVars), &tmp1_c1);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(omc_string_data(_OMC_LIT377),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outTVars = tmpMeta[0+0];
  _oMark = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_oMark) { *out_oMark = _oMark; }
  omc_ret_ = _outTVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing2(threadData_t *threadData, modelica_metatype _unsolvables, modelica_metatype _tSel_always, modelica_metatype _tSel_prefer, modelica_metatype _tSel_avoid, modelica_metatype _tSel_never, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _size, modelica_metatype _vars, modelica_metatype _ishared, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _inTVars, modelica_metatype *out_oMark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oMark;
  modelica_metatype _outTVars = NULL;
  tmp1 = omc_unbox_integer(_size);
  tmp2 = omc_unbox_integer(_mark);
  _outTVars = omc_Tearing_omcTearing2(threadData, _unsolvables, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _m, _mt, _mapEqnIncRow, _mapIncRowEqn, tmp1, _vars, _ishared, _ass1, _ass2, _columark, tmp2, _inTVars, &_oMark);
  /* skip box _outTVars; list<#Integer> */
  if (out_oMark) { *out_oMark = omc_mk_icon(_oMark); }
  return _outTVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getTVarResiduals(threadData_t *threadData, modelica_integer _index, modelica_metatype _v1, modelica_metatype _eqnLocalGlobal, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _index;
    {
      modelica_integer _e;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _iAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _e = omc_unbox_integer(arrayGet(_v1,_index) /* DAE.ASUB */);

          _e = omc_unbox_integer(arrayGet(_eqnLocalGlobal,_e) /* DAE.ASUB */);
          tmpMeta6 = mmc_mk_cons(omc_mk_integer(_e), _iAcc);
          /* Tail recursive call */
          _index = ((modelica_integer) -1) + _index;
          _iAcc = tmpMeta6;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oAcc;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getTVarResiduals(threadData_t *threadData, modelica_metatype _index, modelica_metatype _v1, modelica_metatype _eqnLocalGlobal, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _oAcc = NULL;
  tmp1 = omc_unbox_integer(_index);
  _oAcc = omc_Tearing_getTVarResiduals(threadData, tmp1, _v1, _eqnLocalGlobal, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_tVarsofResidualEqns(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _varGlobalLocal, modelica_metatype _visited, modelica_integer _iMark, modelica_metatype *out_oAcc)
{
  modelica_integer _oMark;
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oMark = _iMark;
  // _oAcc has no default value.
  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp11;
    modelica_metatype _eq_loopVar = 0;
    modelica_metatype _eq;
    _eq_loopVar = _iEqns;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar31;
    while(1) {
      tmp11 = 1;
      if (!listEmpty(_eq_loopVar)) {
        _eq = MMC_CAR(_eq_loopVar);
        _eq_loopVar = MMC_CDR(_eq_loopVar);
        tmp11--;
      }
      if (tmp11 == 0) {
        { /* match expression */
          modelica_metatype tmp7_1;
          tmp7_1 = _eq;
          {
            modelica_integer _e;
            modelica_metatype _vars = NULL;
            modelica_metatype _tvars = NULL;
            volatile mmc_switch_type tmp7;
            int tmp8;
            // _e has no default value.
            // _vars has no default value.
            // _tvars has no default value.
            tmp7 = 0;
            for (; tmp7 < 1; tmp7++) {
              switch (MMC_SWITCH_CAST(tmp7)) {
              case 0: {
                modelica_integer tmp9;
                modelica_metatype tmpMeta10;
                tmp9 = omc_unbox_integer(tmp7_1);
                _e = tmp9  /* pattern as ty=Integer */;
                /* Pattern matching succeeded */
                _vars = omc_List_select(threadData, arrayGet(_m,_e) /* DAE.ASUB */, boxvar_Util_intPositive);

                tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
                _tvars = omc_Tearing_tVarsofEqn(threadData, _vars, _ass1, _mT, _visited, _oMark, tmpMeta10);

                _tvars = omc_List_map1r(threadData, _tvars, boxvar_arrayGet, _varGlobalLocal);

                _oMark = ((modelica_integer) 1) + _oMark;
                tmpMeta4 = _tvars;
                goto tmp6_done;
              }
              }
              goto tmp6_end;
              tmp6_end: ;
            }
            goto goto_5;
            goto_5:;
            OMC_THROW_INTERNAL();
            goto tmp6_done;
            tmp6_done:;
          }
        }__omcQ_24tmpVar30 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp11 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar31;
  }
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_oAcc) { *out_oAcc = _oAcc; }
  omc_ret_ = _oMark;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tVarsofResidualEqns(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _varGlobalLocal, modelica_metatype _visited, modelica_metatype _iMark, modelica_metatype *out_oAcc)
{
  modelica_integer tmp1;
  modelica_integer _oMark;
  modelica_metatype out_oMark;
  tmp1 = omc_unbox_integer(_iMark);
  _oMark = omc_Tearing_tVarsofResidualEqns(threadData, _iEqns, _m, _ass1, _mT, _varGlobalLocal, _visited, tmp1, out_oAcc);
  out_oMark = omc_mk_icon(_oMark);
  /* skip box _oAcc; list<list<#Integer>> */
  return out_oMark;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getGlobalLocal(threadData_t *threadData, modelica_metatype _iTVars, modelica_integer _index, modelica_metatype _iVarGlobalLocal)
{
  modelica_metatype _oVarGlobalLocal = NULL;
  modelica_integer _idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oVarGlobalLocal = _iVarGlobalLocal;
  _idx = _index;
  {
    modelica_metatype _i;
    for (tmpMeta1 = _iTVars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      arrayUpdate(_oVarGlobalLocal, omc_unbox_integer(_i), omc_mk_integer(_idx));

      _idx = ((modelica_integer) 1) + _idx;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oVarGlobalLocal;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getGlobalLocal(threadData_t *threadData, modelica_metatype _iTVars, modelica_metatype _index, modelica_metatype _iVarGlobalLocal)
{
  modelica_integer tmp1;
  modelica_metatype _oVarGlobalLocal = NULL;
  tmp1 = omc_unbox_integer(_index);
  _oVarGlobalLocal = omc_Tearing_getGlobalLocal(threadData, _iTVars, tmp1, _iVarGlobalLocal);
  /* skip box _oVarGlobalLocal; array<#Integer> */
  return _oVarGlobalLocal;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_sortResidualDepentOnTVars(threadData_t *threadData, modelica_metatype _iResiduals, modelica_metatype _iTVars, modelica_metatype _ass1, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _visited, modelica_integer _iMark, modelica_integer *out_oMark)
{
  modelica_metatype _oResiduals = NULL;
  modelica_integer _oMark;
  modelica_integer _size;
  modelica_metatype _maplst = NULL;
  modelica_metatype _map = NULL;
  modelica_metatype _eqnLocalGlobal = NULL;
  modelica_metatype _varGlobalLocal = NULL;
  modelica_metatype _v1 = NULL;
  modelica_metatype _v2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oResiduals has no default value.
  // _oMark has no default value.
  // _size has no default value.
  // _maplst has no default value.
  // _map has no default value.
  // _eqnLocalGlobal has no default value.
  // _varGlobalLocal has no default value.
  // _v1 has no default value.
  // _v2 has no default value.
  _eqnLocalGlobal = listArray(_iResiduals);

  _varGlobalLocal = arrayCreate(arrayLength(_m), omc_mk_integer(((modelica_integer) -1)));

  _varGlobalLocal = omc_Tearing_getGlobalLocal(threadData, _iTVars, ((modelica_integer) 1), _varGlobalLocal);

  _oMark = omc_Tearing_tVarsofResidualEqns(threadData, _iResiduals, _m, _ass1, _mT, _varGlobalLocal, _visited, _iMark ,&_maplst);

  _map = listArray(_maplst);

  _size = arrayLength(_map);

  omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _size, _size, _map);

  omc_BackendDAEEXT_matching(threadData, _size, _size, ((modelica_integer) 5), ((modelica_integer) -1), 1.0, ((modelica_integer) 1));

  _v1 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  _v2 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  omc_BackendDAEEXT_getAssignment(threadData, _v2, _v1);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oResiduals = omc_Tearing_getTVarResiduals(threadData, _size, _v1, _eqnLocalGlobal, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  if (out_oMark) { *out_oMark = _oMark; }
  omc_ret_ = _oResiduals;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_sortResidualDepentOnTVars(threadData_t *threadData, modelica_metatype _iResiduals, modelica_metatype _iTVars, modelica_metatype _ass1, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _visited, modelica_metatype _iMark, modelica_metatype *out_oMark)
{
  modelica_integer tmp1;
  modelica_integer _oMark;
  modelica_metatype _oResiduals = NULL;
  tmp1 = omc_unbox_integer(_iMark);
  _oResiduals = omc_Tearing_sortResidualDepentOnTVars(threadData, _iResiduals, _iTVars, _ass1, _m, _mT, _visited, tmp1, &_oMark);
  /* skip box _oResiduals; list<#Integer> */
  if (out_oMark) { *out_oMark = omc_mk_icon(_oMark); }
  return _oResiduals;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_uniqueIntLst(threadData_t *threadData, modelica_integer _c, modelica_integer _mark, modelica_metatype _markarray, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oAcc = _iAcc;
  if((!(_mark == omc_unbox_integer(arrayGet(_markarray,_c) /* DAE.ASUB */))))
  {
    arrayUpdate(_markarray, _c, omc_mk_integer(_mark));

    tmpMeta1 = mmc_mk_cons(omc_mk_integer(_c), _oAcc);
    _oAcc = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oAcc;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_uniqueIntLst(threadData_t *threadData, modelica_metatype _c, modelica_metatype _mark, modelica_metatype _markarray, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oAcc = NULL;
  tmp1 = omc_unbox_integer(_c);
  tmp2 = omc_unbox_integer(_mark);
  _oAcc = omc_Tearing_uniqueIntLst(threadData, tmp1, tmp2, _markarray, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tVarsofEqn(threadData_t *threadData, modelica_metatype _iVars, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _visited, modelica_integer _iMark, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oAcc = _iAcc;
  {
    modelica_metatype _v;
    for (tmpMeta1 = _iVars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      if((omc_unbox_integer(arrayGet(_ass1,omc_unbox_integer(_v)) /* DAE.ASUB */) < ((modelica_integer) 0)))
      {
        _oAcc = omc_Tearing_uniqueIntLst(threadData, omc_unbox_integer(_v), _iMark, _visited, _oAcc);
      }
      else
      {
        _oAcc = omc_List_fold2(threadData, arrayGet(_mT,omc_unbox_integer(_v)) /* DAE.ASUB */, boxvar_Tearing_uniqueIntLst, omc_mk_integer(_iMark), _visited, _oAcc);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oAcc;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tVarsofEqn(threadData_t *threadData, modelica_metatype _iVars, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _visited, modelica_metatype _iMark, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _oAcc = NULL;
  tmp1 = omc_unbox_integer(_iMark);
  _oAcc = omc_Tearing_tVarsofEqn(threadData, _iVars, _ass1, _mT, _visited, tmp1, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tVarsofEqns(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _visited, modelica_integer _iMark)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oAcc = tmpMeta1;
  // _vars has no default value.
  {
    modelica_metatype _e;
    for (tmpMeta2 = _iEqns; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _e = MMC_CAR(tmpMeta2);
      _vars = omc_List_select(threadData, arrayGet(_m,omc_unbox_integer(_e)) /* DAE.ASUB */, boxvar_Util_intPositive);

      _oAcc = omc_Tearing_tVarsofEqn(threadData, _vars, _ass1, _mT, _visited, _iMark, _oAcc);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oAcc;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tVarsofEqns(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _mT, modelica_metatype _visited, modelica_metatype _iMark)
{
  modelica_integer tmp1;
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_iMark);
  _oAcc = omc_Tearing_tVarsofEqns(threadData, _iEqns, _m, _ass1, _mT, _visited, tmp1);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Tearing_getDependenciesOfVars(threadData_t *threadData, modelica_metatype _iComps, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _visited, modelica_integer _iMark)
{
  modelica_integer _oMark;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMark has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iComps;
    {
      modelica_integer _c;
      modelica_integer _v;
      modelica_metatype _comp = NULL;
      modelica_metatype _tvars = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _comps = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _c has no default value.
      // _v has no default value.
      // _comp has no default value.
      // _tvars has no default value.
      // _vars has no default value.
      // _comps has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _iMark;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta6);
          tmpMeta9 = MMC_CDR(tmpMeta6);
          tmp10 = omc_unbox_integer(tmpMeta8);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          _c = tmp10  /* pattern as ty=Integer */;
          _comps = tmpMeta7;
          /* Pattern matching succeeded */
          _v = omc_unbox_integer(arrayGet(_ass2,_c) /* DAE.ASUB */);

          _vars = omc_List_select(threadData, arrayGet(_m,_c) /* DAE.ASUB */, boxvar_Util_intPositive);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _tvars = omc_Tearing_tVarsofEqn(threadData, _vars, _ass1, _mT, _visited, _iMark, tmpMeta11);

          arrayUpdate(_mT, _v, _tvars);
          /* Tail recursive call */
          _iComps = _comps;
          _iMark = ((modelica_integer) 1) + _iMark;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          _comp = tmpMeta12;
          _comps = tmpMeta13;
          /* Pattern matching succeeded */
          _vars = omc_List_map1r(threadData, _comp, boxvar_arrayGet, _ass2);

          _tvars = omc_Tearing_tVarsofEqns(threadData, _comp, _m, _ass1, _mT, _visited, _iMark);

          omc_List_fold1r(threadData, _vars, boxvar_arrayUpdate, _tvars, _mT);
          /* Tail recursive call */
          _iComps = _comps;
          _iMark = ((modelica_integer) 1) + _iMark;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _oMark = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oMark;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getDependenciesOfVars(threadData_t *threadData, modelica_metatype _iComps, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _visited, modelica_metatype _iMark)
{
  modelica_integer tmp1;
  modelica_integer _oMark;
  modelica_metatype out_oMark;
  tmp1 = omc_unbox_integer(_iMark);
  _oMark = omc_Tearing_getDependenciesOfVars(threadData, _iComps, _ass1, _ass2, _m, _mT, _visited, tmp1);
  out_oMark = omc_mk_icon(_oMark);
  return out_oMark;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_unassignTVars(threadData_t *threadData, modelica_integer _v, modelica_metatype _inAss)
{
  modelica_metatype _outAss = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAss has no default value.
  _outAss = arrayUpdate(_inAss, _v, omc_mk_integer(((modelica_integer) -1)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outAss;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_unassignTVars(threadData_t *threadData, modelica_metatype _v, modelica_metatype _inAss)
{
  modelica_integer tmp1;
  modelica_metatype _outAss = NULL;
  tmp1 = omc_unbox_integer(_v);
  _outAss = omc_Tearing_unassignTVars(threadData, tmp1, _inAss);
  /* skip box _outAss; array<#Integer> */
  return _outAss;
}

DLLModelDirection
modelica_boolean omc_Tearing_unsolvable(threadData_t *threadData, modelica_metatype _elem)
{
  modelica_boolean _isUnsolvable;
  modelica_integer _e;
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isUnsolvable = 1 /* true */;
  // _e has no default value.
  // _s has no default value.
  {
    modelica_metatype _el;
    for (tmpMeta1 = _elem; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _el = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _el;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmp4 = omc_unbox_integer(tmpMeta3);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 2);
      _e = tmp4  /* pattern as ty=Integer */;
      _s = tmpMeta5;

      if(omc_Tearing_solvable(threadData, _s))
      {
        if((_e > ((modelica_integer) 0)))
        {
          _isUnsolvable = 0 /* false */;

          goto _return;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isUnsolvable;
  return omc_ret_;
}
modelica_metatype boxptr_Tearing_unsolvable(threadData_t *threadData, modelica_metatype _elem)
{
  modelica_boolean _isUnsolvable;
  modelica_metatype out_isUnsolvable;
  _isUnsolvable = omc_Tearing_unsolvable(threadData, _elem);
  out_isUnsolvable = omc_mk_icon(_isUnsolvable);
  return out_isUnsolvable;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getUnsolvableVars(threadData_t *threadData, modelica_integer _size, modelica_metatype _meT)
{
  modelica_metatype _unsolvables = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _isUnsolvable;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _unsolvables = tmpMeta1;
  // _isUnsolvable has no default value.
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _size;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _index;
    for(_index = ((modelica_integer) 1); in_range_integer(_index, tmp3, tmp5); _index += tmp4)
    {

      _isUnsolvable = omc_Tearing_unsolvable(threadData, arrayGet(_meT,_index) /* DAE.ASUB */);

      if(_isUnsolvable)
      {
        tmpMeta2 = mmc_mk_cons(omc_mk_integer(_index), _unsolvables);
        _unsolvables = tmpMeta2;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _unsolvables;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getUnsolvableVars(threadData_t *threadData, modelica_metatype _size, modelica_metatype _meT)
{
  modelica_integer tmp1;
  modelica_metatype _unsolvables = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_size);
  _unsolvables = omc_Tearing_getUnsolvableVars(threadData, tmp1, _meT);
  /* skip box _unsolvables; list<#Integer> */
  return _unsolvables;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_omcTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_boolean *out_outRunMatching)
{
  modelica_metatype _ocomp = NULL;
  modelica_boolean _outRunMatching;
  modelica_metatype _tvars = NULL;
  modelica_metatype _residual = NULL;
  modelica_metatype _unsolvables = NULL;
  modelica_metatype _othercomps = NULL;
  modelica_metatype _subsyst = NULL;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _columark = NULL;
  modelica_integer _size;
  modelica_integer _tornsize;
  modelica_integer _mark;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _m1 = NULL;
  modelica_metatype _mt = NULL;
  modelica_metatype _mt1 = NULL;
  modelica_metatype _me = NULL;
  modelica_metatype _meT = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _tSel_always = NULL;
  modelica_metatype _tSel_prefer = NULL;
  modelica_metatype _tSel_avoid = NULL;
  modelica_metatype _tSel_never = NULL;
  modelica_string _DAEtypeStr = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_boolean tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_string tmp19;
  modelica_string tmp20;
  modelica_string tmp21;
  modelica_string tmp22;
  modelica_string tmp23;
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_string tmp29;
  modelica_string tmp30;
  modelica_string tmp31;
  modelica_string tmp32;
  modelica_string tmp33;
  modelica_string tmp34;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ocomp has no default value.
  // _outRunMatching has no default value.
  // _tvars has no default value.
  // _residual has no default value.
  // _unsolvables has no default value.
  // _othercomps has no default value.
  // _subsyst has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _columark has no default value.
  // _size has no default value.
  // _tornsize has no default value.
  // _mark has no default value.
  // _eqn_lst has no default value.
  // _var_lst has no default value.
  // _vars has no default value.
  // _eqns has no default value.
  // _m has no default value.
  // _m1 has no default value.
  // _mt has no default value.
  // _mt1 has no default value.
  // _me has no default value.
  // _meT has no default value.
  // _mapEqnIncRow has no default value.
  // _mapIncRowEqn has no default value.
  // _funcs has no default value.
  // _tSel_always has no default value.
  // _tSel_prefer has no default value.
  // _tSel_avoid has no default value.
  // _tSel_never has no default value.
  // _DAEtypeStr has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT378),stdout);
  }

  omc_string_store(&(_DAEtypeStr), omc_BackendDump_printBackendDAEType2String(threadData, (OMC_BOX_FIELD(_ishared, 15))));

  _size = listLength(_vindx);

  _eqn_lst = omc_BackendEquation_getList(threadData, _eindex, omc_BackendEquation_getEqnsFromEqSystem(threadData, _isyst));

  _eqns = omc_BackendEquation_listEquation(threadData, _eqn_lst);

  _var_lst = omc_List_map1r(threadData, _vindx, boxvar_BackendVariable_getVarAt, omc_BackendVariable_daeVars(threadData, _isyst));

  _vars = omc_BackendVariable_listVar1(threadData, _var_lst);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _subsyst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta1, _OMC_LIT12, omc_BackendEquation_emptyEqns(threadData));

  _funcs = omc_BackendDAEUtil_getFunctions(threadData, _ishared);

  _subsyst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _subsyst, _OMC_LIT13, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,&_mt ,NULL ,NULL);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    fputs(omc_string_data(_OMC_LIT379),stdout);

    omc_BackendDump_printEqSystem(threadData, _subsyst);

    fputs(omc_string_data(_OMC_LIT380),stdout);
  }

  _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _subsyst, _ishared, 0 /* false */ ,&_meT ,&_mapEqnIncRow ,&_mapIncRowEqn);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT381),stdout);

    omc_BackendDump_dumpAdjacencyMatrixEnhanced(threadData, _me);

    fputs(omc_string_data(_OMC_LIT32),stdout);

    omc_BackendDump_dumpAdjacencyMatrixTEnhanced(threadData, _meT);

    fputs(omc_string_data(_OMC_LIT382),stdout);

    omc_BackendDump_dumpAdjacencyMatrix(threadData, _mapEqnIncRow);

    tmp2 = stringAppend(_OMC_LIT34,stringDelimitList(omc_List_mapArray(threadData, _mapIncRowEqn, boxvar_intString), _OMC_LIT7));
    tmp3 = stringAppend(tmp2,_OMC_LIT35);
    fputs(omc_string_data(tmp3),stdout);
  }

  _ass1 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  _ass2 = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  _unsolvables = omc_Tearing_getUnsolvableVars(threadData, _size, _meT);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT383),stdout);

    omc_BackendDump_debuglst(threadData, _unsolvables, boxvar_intString, _OMC_LIT70, _OMC_LIT10);
  }

  _columark = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _tSel_always = omc_Tearing_tearingSelect(threadData, _var_lst, tmpMeta4, _DAEtypeStr ,&_tSel_prefer ,&_tSel_avoid ,&_tSel_never ,NULL);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT384),stdout);
  }

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _tvars = omc_Tearing_omcTearing2(threadData, _unsolvables, _tSel_always, _tSel_prefer, _tSel_avoid, _tSel_never, _me, _meT, _mapEqnIncRow, _mapIncRowEqn, _size, _vars, _ishared, _ass1, _ass2, _columark, ((modelica_integer) 1), tmpMeta5 ,&_mark);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT385),stdout);
  }

  _ass1 = omc_List_fold(threadData, _tvars, boxvar_Tearing_unassignTVars, _ass1);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    tmp6 = stringAppend(_OMC_LIT386,stringDelimitList(omc_List_mapArray(threadData, _ass1, boxvar_intString), _OMC_LIT7));
    tmp7 = stringAppend(tmp6,_OMC_LIT10);
    fputs(omc_string_data(tmp7),stdout);

    tmp8 = stringAppend(_OMC_LIT242,stringDelimitList(omc_List_mapArray(threadData, _ass2, boxvar_intString), _OMC_LIT7));
    tmp9 = stringAppend(tmp8,_OMC_LIT10);
    tmp10 = stringAppend(tmp9,_OMC_LIT72);
    tmp11 = stringAppend(tmp10,_OMC_LIT35);
    fputs(omc_string_data(tmp11),stdout);
  }

  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  _residual = omc_Matching_getUnassigned(threadData, _size, _ass2, tmpMeta12);

  _tornsize = listLength(_tvars);

  /* Pattern-matching assignment */
  tmp13 = (_tornsize < _size);
  if (1 /* true */ != tmp13) OMC_THROW_INTERNAL();

  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  _m1 = arrayCreate(_size, tmpMeta14);

  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  _mt1 = arrayCreate(_size, tmpMeta15);

  _m1 = omc_AdjacencyMatrix_getOtherEqSysAdjacencyMatrix(threadData, _m, _size, ((modelica_integer) 1), _ass2, _ass1, _m1);

  _mt1 = omc_AdjacencyMatrix_getOtherEqSysAdjacencyMatrix(threadData, _mt, _size, ((modelica_integer) 1), _ass1, _ass2, _mt1);

  _othercomps = omc_Sorting_TarjanTransposed(threadData, _mt1, _ass2);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT387),stdout);

    omc_BackendDump_dumpComponentsOLD(threadData, _othercomps);

    fputs(omc_string_data(_OMC_LIT10),stdout);
  }

  tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
  _mt1 = arrayCreate(_size, tmpMeta16);

  _mark = omc_Tearing_getDependenciesOfVars(threadData, _othercomps, _ass1, _ass2, _m, _mt1, _columark, _mark);

  _residual = omc_Tearing_sortResidualDepentOnTVars(threadData, _residual, _tvars, _ass1, _m, _mt1, _columark, _mark ,&_mark);

  _ocomp = omc_Tearing_omcTearing4(threadData, _jacType, _isyst, _ishared, _subsyst, _tvars, _residual, _ass1, _ass2, _othercomps, _eindex, _vindx, _mapEqnIncRow, _mapIncRowEqn, _columark, _mark, _mixedSystem ,&_outRunMatching);

  if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
  {
    fputs(omc_string_data((_outRunMatching?_OMC_LIT388:_OMC_LIT389)),stdout);

    tmp17 = stringAppend(_OMC_LIT390,intString(_size));
    tmp18 = stringAppend(tmp17,_OMC_LIT10);
    fputs(omc_string_data(tmp18),stdout);

    tmp19 = stringAppend(_OMC_LIT66,intString(_tornsize));
    tmp20 = stringAppend(tmp19,_OMC_LIT10);
    fputs(omc_string_data(tmp20),stdout);

    tmp21 = stringAppend(_OMC_LIT67,stringDelimitList(omc_List_map(threadData, _tvars, boxvar_intString), _OMC_LIT7));
    tmp22 = stringAppend(tmp21,_OMC_LIT10);
    fputs(omc_string_data(tmp22),stdout);

    tmp23 = stringAppend(_OMC_LIT68,stringDelimitList(omc_List_map(threadData, _residual, boxvar_intString), _OMC_LIT7));
    tmp24 = stringAppend(tmp23,_OMC_LIT71);
    fputs(omc_string_data(tmp24),stdout);

    /* Pattern-matching assignment */
    tmpMeta25 = _ocomp;
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,7,4) == 0) OMC_THROW_INTERNAL();
    tmpMeta26 = OMC_BOX_FIELD(tmpMeta25, 2);
    tmpMeta27 = OMC_BOX_FIELD(tmpMeta26, 2);
    tmpMeta28 = OMC_BOX_FIELD(tmpMeta26, 3);
    _tvars = tmpMeta27;
    _residual = tmpMeta28;

    tmp29 = stringAppend(_OMC_LIT391,stringDelimitList(omc_List_map(threadData, _tvars, boxvar_intString), _OMC_LIT7));
    tmp30 = stringAppend(tmp29,_OMC_LIT392);
    fputs(omc_string_data(tmp30),stdout);

    tmp31 = stringAppend(_OMC_LIT393,stringDelimitList(omc_List_map(threadData, _residual, boxvar_intString), _OMC_LIT7));
    tmp32 = stringAppend(tmp31,_OMC_LIT392);
    tmp33 = stringAppend(tmp32,_OMC_LIT72);
    tmp34 = stringAppend(tmp33,_OMC_LIT10);
    fputs(omc_string_data(tmp34),stdout);
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT394),stdout);

    omc_BackendDump_dumpComponent(threadData, _ocomp, mmc_mk_none());

    fputs(omc_string_data(_OMC_LIT395),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  omc_ret_ = _ocomp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_omcTearing(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype *out_outRunMatching)
{
  modelica_integer tmp1;
  modelica_boolean _outRunMatching;
  modelica_metatype _ocomp = NULL;
  tmp1 = omc_unbox_integer(_mixedSystem);
  _ocomp = omc_Tearing_omcTearing(threadData, _isyst, _ishared, _eindex, _vindx, _ojac, _jacType, tmp1, &_outRunMatching);
  /* skip box _ocomp; BackendDAE.StrongComponent */
  if (out_outRunMatching) { *out_outRunMatching = omc_mk_icon(_outRunMatching); }
  return _ocomp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getUserTearingSet(threadData_t *threadData, modelica_metatype _userTVars, modelica_metatype _userResiduals, modelica_integer _strongComponentIndex, modelica_metatype *out_userResidualsThisComponent)
{
  modelica_metatype _userTvarsThisComponent = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _userResidualsThisComponent = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _i;
  modelica_integer _len;
  modelica_integer _start;
  modelica_integer _end_;
  modelica_metatype _arr_TVars = NULL;
  modelica_metatype _arr_residuals = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _userTvarsThisComponent = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _userResidualsThisComponent = tmpMeta2;
  // _i has no default value.
  // _len has no default value.
  // _start has no default value.
  // _end_ has no default value.
  // _arr_TVars has no default value.
  // _arr_residuals has no default value.
  _arr_TVars = listArray(_userTVars);

  _arr_residuals = listArray(_userResiduals);

  _i = ((modelica_integer) 1);

  _len = listLength(_userTVars);

  while(1)
  {
    if(!(_i < _len)) break;
    if((omc_unbox_integer(arrayGet(_arr_TVars,_i) /* DAE.ASUB */) == _strongComponentIndex))
    {
      _start = ((modelica_integer) 2) + _i;

      _end_ = ((modelica_integer) 1) + (_i + (omc_unbox_integer(arrayGet(_arr_TVars,((modelica_integer) 1) + _i) /* DAE.ASUB */)));

      {
        modelica_metatype __omcQ_24tmpVar33;
        modelica_metatype* tmp4;
        modelica_metatype tmpMeta5;
        modelica_metatype __omcQ_24tmpVar32;
        modelica_integer tmp6;
        modelica_integer tmp7;
        modelica_integer tmp8;
        modelica_integer _j;
        tmp7 = 1 /* Range step-value */;
        tmp8 = _end_ /* Range stop-value */;
        _j = _start /* Range start-value */;
        _j = (_start /* Range start-value */)-tmp7;
        tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar33 = tmpMeta5; /* defaultValue */
        tmp4 = &__omcQ_24tmpVar33;
        while(1) {
          tmp6 = 1;
          if (tmp7 > 0 ? _j+tmp7 <= tmp8 : _j+tmp7 >= tmp8) {
            _j += tmp7;
            tmp6--;
          }
          if (tmp6 == 0) {
            __omcQ_24tmpVar32 = arrayGet(_arr_TVars,_j) /* DAE.ASUB */;
            *tmp4 = mmc_mk_cons(__omcQ_24tmpVar32,0);
            tmp4 = &MMC_CDR(*tmp4);
          } else if (tmp6 == 1) {
            break;
          } else {
            OMC_THROW_INTERNAL();
          }
        }
        *tmp4 = mmc_mk_nil();
        tmpMeta3 = __omcQ_24tmpVar33;
      }
      _userTvarsThisComponent = omc_List_unique(threadData, tmpMeta3);

      if((listLength(_userTvarsThisComponent) != omc_unbox_integer(arrayGet(_arr_TVars,((modelica_integer) 1) + _i) /* DAE.ASUB */)))
      {
        omc_Error_addMessage(threadData, _OMC_LIT17, _OMC_LIT397);

        OMC_THROW_INTERNAL();
      }

      break;
    }
    else
    {
      _i = ((modelica_integer) 2) + (_i + (omc_unbox_integer(arrayGet(_arr_TVars,((modelica_integer) 1) + _i) /* DAE.ASUB */)));
    }
  }

  if((!listEmpty(_userTvarsThisComponent)))
  {
    _i = ((modelica_integer) 1);

    _len = listLength(_userResiduals);

    while(1)
    {
      if(!(_i < _len)) break;
      if((omc_unbox_integer(arrayGet(_arr_residuals,_i) /* DAE.ASUB */) == _strongComponentIndex))
      {
        _start = ((modelica_integer) 2) + _i;

        _end_ = ((modelica_integer) 1) + (_i + (omc_unbox_integer(arrayGet(_arr_residuals,((modelica_integer) 1) + _i) /* DAE.ASUB */)));

        {
          modelica_metatype __omcQ_24tmpVar35;
          modelica_metatype* tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype __omcQ_24tmpVar34;
          modelica_integer tmp12;
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer _j;
          tmp13 = 1 /* Range step-value */;
          tmp14 = _end_ /* Range stop-value */;
          _j = _start /* Range start-value */;
          _j = (_start /* Range start-value */)-tmp13;
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar35 = tmpMeta11; /* defaultValue */
          tmp10 = &__omcQ_24tmpVar35;
          while(1) {
            tmp12 = 1;
            if (tmp13 > 0 ? _j+tmp13 <= tmp14 : _j+tmp13 >= tmp14) {
              _j += tmp13;
              tmp12--;
            }
            if (tmp12 == 0) {
              __omcQ_24tmpVar34 = arrayGet(_arr_residuals,_j) /* DAE.ASUB */;
              *tmp10 = mmc_mk_cons(__omcQ_24tmpVar34,0);
              tmp10 = &MMC_CDR(*tmp10);
            } else if (tmp12 == 1) {
              break;
            } else {
              OMC_THROW_INTERNAL();
            }
          }
          *tmp10 = mmc_mk_nil();
          tmpMeta9 = __omcQ_24tmpVar35;
        }
        _userResidualsThisComponent = omc_List_unique(threadData, tmpMeta9);

        if((listLength(_userResidualsThisComponent) != omc_unbox_integer(arrayGet(_arr_residuals,((modelica_integer) 1) + _i) /* DAE.ASUB */)))
        {
          omc_Error_addMessage(threadData, _OMC_LIT17, _OMC_LIT399);

          OMC_THROW_INTERNAL();
        }

        break;
      }
      else
      {
        _i = ((modelica_integer) 2) + (_i + (omc_unbox_integer(arrayGet(_arr_residuals,((modelica_integer) 1) + _i) /* DAE.ASUB */)));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_userResidualsThisComponent) { *out_userResidualsThisComponent = _userResidualsThisComponent; }
  omc_ret_ = _userTvarsThisComponent;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_getUserTearingSet(threadData_t *threadData, modelica_metatype _userTVars, modelica_metatype _userResiduals, modelica_metatype _strongComponentIndex, modelica_metatype *out_userResidualsThisComponent)
{
  modelica_integer tmp1;
  modelica_metatype _userTvarsThisComponent = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_strongComponentIndex);
  _userTvarsThisComponent = omc_Tearing_getUserTearingSet(threadData, _userTVars, _userResiduals, tmp1, out_userResidualsThisComponent);
  /* skip box _userTvarsThisComponent; list<#Integer> */
  /* skip box _userResidualsThisComponent; list<#Integer> */
  return _userTvarsThisComponent;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_Tearing_solveCost(threadData_t *threadData, modelica_real _size, modelica_real _nnz, modelica_boolean _sparse, modelica_real _fill)
{
  modelica_real _cost;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_real omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cost has no default value.
  tmp7 = (modelica_boolean)(_size <= 0.0);
  if(tmp7)
  {
    tmp8 = 0.0;
  }
  else
  {
    tmp5 = (modelica_boolean)_sparse;
    if(tmp5)
    {
      tmp1 = _nnz;
      tmp2 = _size;
      if (tmp2 == 0) {OMC_THROW_INTERNAL();}
      tmp6 = (_fill) * (((tmp1 * tmp1)) / tmp2) + ((2.0) * (_nnz));
    }
    else
    {
      tmp3 = _size;
      tmp4 = _size;
      tmp6 = (0.6666666666666666) * ((tmp3 * tmp3 * tmp3)) + ((2.0) * ((tmp4 * tmp4)));
    }
    tmp8 = tmp6;
  }
  _cost = tmp8;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cost;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_solveCost(threadData_t *threadData, modelica_metatype _size, modelica_metatype _nnz, modelica_metatype _sparse, modelica_metatype _fill)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_real tmp4;
  modelica_real _cost;
  modelica_metatype out_cost;
  tmp1 = omc_unbox_real(_size);
  tmp2 = omc_unbox_real(_nnz);
  tmp3 = omc_unbox_integer(_sparse);
  tmp4 = omc_unbox_real(_fill);
  _cost = omc_Tearing_solveCost(threadData, tmp1, tmp2, tmp3, tmp4);
  out_cost = omc_mk_rcon(_cost);
  return out_cost;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_substituteKnownVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype *out_globalKnownVars)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _var = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _var has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _var = omc_BackendVariable_getVarSingle(threadData, (OMC_BOX_FIELD(_exp, 2)), _globalKnownVars, NULL);
          tmpMeta1 = omc_BackendVariable_varBindExp(threadData, _var);
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_globalKnownVars) { *out_globalKnownVars = _globalKnownVars; }
  omc_ret_ = _exp;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_Tearing_jacEntryMagnitude(threadData_t *threadData, modelica_metatype _dEqn, modelica_metatype _globalKnownVars, modelica_boolean *out_known)
{
  modelica_real _magnitude;
  modelica_boolean _known;
  modelica_metatype _exp = NULL;
  modelica_real tmp1_c0 __attribute__((unused)) = 0;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_real omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _magnitude has no default value.
  // _known has no default value.
  // _exp has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _dEqn;
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
          modelica_integer tmp6;
          modelica_integer tmp7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _exp = (OMC_BOX_FIELD(_dEqn, 2));

          tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) 3);
          if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
            {

              _exp = omc_Expression_traverseExpBottomUp(threadData, _exp, boxvar_Tearing_substituteKnownVar, _globalKnownVars, NULL);

              _exp = omc_ExpressionSimplify_simplify(threadData, _exp, NULL);
            }
          }
          tmp1_c0 = fabs(omc_Expression_toReal(threadData, _exp));
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1_c0 = 1.0;
          tmp1_c1 = 0 /* false */;
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
  _magnitude = tmp1_c0;
  _known = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_known) { *out_known = _known; }
  omc_ret_ = _magnitude;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_jacEntryMagnitude(threadData_t *threadData, modelica_metatype _dEqn, modelica_metatype _globalKnownVars, modelica_metatype *out_known)
{
  modelica_boolean _known;
  modelica_real _magnitude;
  modelica_metatype out_magnitude;
  _magnitude = omc_Tearing_jacEntryMagnitude(threadData, _dEqn, _globalKnownVars, &_known);
  out_magnitude = omc_mk_rcon(_magnitude);
  if (out_known) { *out_known = omc_mk_icon(_known); }
  return out_magnitude;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_tearingPaysOff(threadData_t *threadData, modelica_metatype _tornComp, modelica_metatype _shared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_integer _strongComponentIndex, modelica_boolean _isLinear)
{
  modelica_boolean _keep;
  modelica_real _entryCost;
  modelica_real _fillFactor;
  modelica_real _precisionDigits;
  modelica_real _trustedCoeffs;
  modelica_metatype _jac = NULL;
  modelica_metatype _tvars = NULL;
  modelica_metatype _residuals = NULL;
  modelica_metatype _innerVars = NULL;
  modelica_metatype _stack = NULL;
  modelica_metatype _dep = NULL;
  modelica_metatype _dEqn = NULL;
  modelica_metatype _innerEquations = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _eqDeps = NULL;
  modelica_metatype _tvarId = NULL;
  modelica_metatype _solvedBy = NULL;
  modelica_metatype _stamp = NULL;
  modelica_metatype _depth = NULL;
  modelica_metatype _growth = NULL;
  modelica_integer _n;
  modelica_integer _nnz;
  modelica_integer _t;
  modelica_integer _m;
  modelica_integer _row;
  modelica_integer _col;
  modelica_integer _v;
  modelica_integer _w;
  modelica_integer _eq;
  modelica_integer _cnt;
  modelica_integer _nnzA;
  modelica_integer _maxRowA;
  modelica_integer _maxDepth;
  modelica_integer _d;
  modelica_integer _valued;
  modelica_real _density;
  modelica_real _densityA;
  modelica_real _buildTorn;
  modelica_real _costDense;
  modelica_real _costSparse;
  modelica_real _costTornDense;
  modelica_real _costTornSparse;
  modelica_real _costTorn;
  modelica_real _costUntorn;
  modelica_real _rn;
  modelica_real _rt;
  modelica_real _g;
  modelica_real _coeff;
  modelica_real _pivot;
  modelica_real _maxGrowth;
  modelica_real _digitsLost;
  modelica_boolean _known;
  modelica_boolean _isValued;
  modelica_boolean tmp1_c4 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_integer tmp19;
  modelica_metatype tmpMeta20;
  modelica_integer tmp21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_integer tmp29_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_metatype tmpMeta56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_string tmp66;
  modelica_string tmp67;
  modelica_string tmp68;
  modelica_string tmp69;
  modelica_string tmp70;
  modelica_string tmp71;
  modelica_string tmp72;
  modelica_string tmp73;
  modelica_string tmp74;
  modelica_string tmp75;
  modelica_string tmp76;
  modelica_string tmp77;
  modelica_string tmp78;
  modelica_string tmp79;
  modelica_string tmp80;
  modelica_string tmp81;
  modelica_string tmp82;
  modelica_string tmp83;
  modelica_string tmp84;
  modelica_string tmp85;
  modelica_string tmp86;
  modelica_string tmp87;
  modelica_string tmp88;
  modelica_string tmp89;
  modelica_string tmp90;
  modelica_string tmp91;
  modelica_string tmp92;
  modelica_string tmp93;
  modelica_string tmp94;
  modelica_string tmp95;
  modelica_string tmp96;
  modelica_string tmp97;
  modelica_string tmp98;
  modelica_string tmp99;
  modelica_string tmp100;
  modelica_string tmp101;
  modelica_string tmp102;
  modelica_string tmp103;
  modelica_string tmp104;
  modelica_string tmp105;
  modelica_string tmp106;
  modelica_string tmp107;
  modelica_string tmp108;
  modelica_metatype tmpMeta109;
  modelica_metatype tmpMeta110;
  modelica_boolean omc_ret_;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _keep = 1 /* true */;
  _entryCost = 4.0;
  _fillFactor = 14.0;
  _precisionDigits = 16.0;
  _trustedCoeffs = 0.9;
  // _jac has no default value.
  // _tvars has no default value.
  // _residuals has no default value.
  // _innerVars has no default value.
  // _stack has no default value.
  // _dep has no default value.
  // _dEqn has no default value.
  // _innerEquations has no default value.
  // _globalKnownVars has no default value.
  // _eqDeps has no default value.
  // _tvarId has no default value.
  // _solvedBy has no default value.
  // _stamp has no default value.
  // _depth has no default value.
  // _growth has no default value.
  // _n has no default value.
  // _nnz has no default value.
  // _t has no default value.
  // _m has no default value.
  // _row has no default value.
  // _col has no default value.
  // _v has no default value.
  // _w has no default value.
  // _eq has no default value.
  // _cnt has no default value.
  // _nnzA has no default value.
  // _maxRowA has no default value.
  // _maxDepth has no default value.
  // _d has no default value.
  _valued = ((modelica_integer) 0);
  // _density has no default value.
  // _densityA has no default value.
  // _buildTorn has no default value.
  // _costDense has no default value.
  // _costSparse has no default value.
  // _costTornDense has no default value.
  // _costTornSparse has no default value.
  // _costTorn has no default value.
  // _costUntorn has no default value.
  // _rn has no default value.
  // _rt has no default value.
  // _g has no default value.
  // _coeff has no default value.
  // _pivot has no default value.
  // _maxGrowth has no default value.
  // _digitsLost has no default value.
  // _known has no default value.
  // _isValued has no default value.
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _ojac;
    tmp4_2 = _tornComp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,4) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 2);
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta7, 3);
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta7, 4);
          
          _jac = tmpMeta6;
          _tvars = tmpMeta8;
          _residuals = tmpMeta9;
          _innerEquations = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _jac;
          tmpMeta[0+1] = _tvars;
          tmpMeta[0+2] = _residuals;
          tmpMeta[0+3] = _innerEquations;
          tmp1_c4 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = tmpMeta12;
          tmpMeta[0+2] = tmpMeta13;
          tmpMeta[0+3] = tmpMeta14;
          tmp1_c4 = 0 /* false */;
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
  _jac = tmpMeta[0+0];
  _tvars = tmpMeta[0+1];
  _residuals = tmpMeta[0+2];
  _innerEquations = tmpMeta[0+3];
  _known = tmp1_c4;

  if((!_known))
  {
    goto _return;
  }

  _n = listLength(_vindx);

  _nnz = listLength(_jac);

  _t = listLength(_tvars);

  _m = listLength(_innerEquations);

  _globalKnownVars = omc_BackendDAEUtil_getGlobalKnownVarsFromShared(threadData, _shared);

  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqDeps = arrayCreate(_n, tmpMeta15);

  {
    modelica_metatype _entry;
    for (tmpMeta16 = _jac; !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
    {
      _entry = MMC_CAR(tmpMeta16);
      /* Pattern-matching assignment */
      tmpMeta17 = _entry;
      tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 1);
      tmp19 = omc_unbox_integer(tmpMeta18);
      tmpMeta20 = OMC_BOX_FIELD(tmpMeta17, 2);
      tmp21 = omc_unbox_integer(tmpMeta20);
      tmpMeta22 = OMC_BOX_FIELD(tmpMeta17, 3);
      _row = tmp19  /* pattern as ty=Integer */;
      _col = tmp21  /* pattern as ty=Integer */;
      _dEqn = tmpMeta22;

      _coeff = omc_Tearing_jacEntryMagnitude(threadData, _dEqn, _globalKnownVars ,&_isValued);

      _valued = _valued + ((_isValued?((modelica_integer) 1):((modelica_integer) 0)));

      tmpMeta24 = omc_mk_box2(0, omc_mk_integer(_col), omc_mk_real(_coeff));
      tmpMeta23 = mmc_mk_cons(tmpMeta24, arrayGet(_eqDeps,_row) /* DAE.ASUB */);
      arrayUpdate(_eqDeps, _row, tmpMeta23);
    }
  }

  _tvarId = arrayCreate(_n, omc_mk_integer(((modelica_integer) 0)));

  _growth = arrayCreate(_n, _OMC_LIT109);

  _cnt = ((modelica_integer) 0);

  {
    modelica_metatype _gv;
    for (tmpMeta26 = _tvars; !listEmpty(tmpMeta26); tmpMeta26=MMC_CDR(tmpMeta26))
    {
      _gv = MMC_CAR(tmpMeta26);
      _cnt = ((modelica_integer) 1) + _cnt;

      _v = omc_List_position(threadData, _gv, _vindx);

      arrayUpdate(_tvarId, _v, omc_mk_integer(_cnt));

      arrayUpdate(_growth, _v, _OMC_LIT400);
    }
  }

  _solvedBy = arrayCreate(_n, omc_mk_integer(((modelica_integer) 0)));

  _depth = arrayCreate(_n, omc_mk_integer(((modelica_integer) 0)));

  _maxDepth = ((modelica_integer) 0);

  {
    modelica_metatype _ie;
    for (tmpMeta28 = _innerEquations; !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
    {
      _ie = MMC_CAR(tmpMeta28);
      
      
      { /* match expression */
        modelica_metatype tmp32_1;
        tmp32_1 = _ie;
        {
          volatile mmc_switch_type tmp32;
          int tmp33;
          tmp32 = 0;
          for (; tmp32 < 2; tmp32++) {
            switch (MMC_SWITCH_CAST(tmp32)) {
            case 0: {
              modelica_metatype tmpMeta34;
              if (mmc__uniontype__metarecord__typedef__equal(tmp32_1,0,2) == 0) goto tmp31_end;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype __omcQ_24tmpVar37;
                modelica_metatype* tmp35;
                modelica_metatype tmpMeta36;
                modelica_metatype __omcQ_24tmpVar36;
                modelica_integer tmp37;
                modelica_metatype _gv_loopVar = 0;
                modelica_metatype _gv;
                _gv_loopVar = (OMC_BOX_FIELD(_ie, 3));
                tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar37 = tmpMeta36; /* defaultValue */
                tmp35 = &__omcQ_24tmpVar37;
                while(1) {
                  tmp37 = 1;
                  if (!listEmpty(_gv_loopVar)) {
                    _gv = MMC_CAR(_gv_loopVar);
                    _gv_loopVar = MMC_CDR(_gv_loopVar);
                    tmp37--;
                  }
                  if (tmp37 == 0) {
                    __omcQ_24tmpVar36 = omc_mk_integer(omc_List_position(threadData, _gv, _vindx));
                    *tmp35 = mmc_mk_cons(__omcQ_24tmpVar36,0);
                    tmp35 = &MMC_CDR(*tmp35);
                  } else if (tmp37 == 1) {
                    break;
                  } else {
                    goto goto_30;
                  }
                }
                *tmp35 = mmc_mk_nil();
                tmpMeta34 = __omcQ_24tmpVar37;
              }
              tmp29_c0 = omc_List_position(threadData, (OMC_BOX_FIELD(_ie, 2)), _eindex);
              tmpMeta[0+1] = tmpMeta34;
              goto tmp31_done;
            }
            case 1: {
              modelica_metatype tmpMeta38;
              if (mmc__uniontype__metarecord__typedef__equal(tmp32_1,1,3) == 0) goto tmp31_end;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype __omcQ_24tmpVar39;
                modelica_metatype* tmp39;
                modelica_metatype tmpMeta40;
                modelica_metatype __omcQ_24tmpVar38;
                modelica_integer tmp41;
                modelica_metatype _gv_loopVar = 0;
                modelica_metatype _gv;
                _gv_loopVar = (OMC_BOX_FIELD(_ie, 3));
                tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar39 = tmpMeta40; /* defaultValue */
                tmp39 = &__omcQ_24tmpVar39;
                while(1) {
                  tmp41 = 1;
                  if (!listEmpty(_gv_loopVar)) {
                    _gv = MMC_CAR(_gv_loopVar);
                    _gv_loopVar = MMC_CDR(_gv_loopVar);
                    tmp41--;
                  }
                  if (tmp41 == 0) {
                    __omcQ_24tmpVar38 = omc_mk_integer(omc_List_position(threadData, _gv, _vindx));
                    *tmp39 = mmc_mk_cons(__omcQ_24tmpVar38,0);
                    tmp39 = &MMC_CDR(*tmp39);
                  } else if (tmp41 == 1) {
                    break;
                  } else {
                    goto goto_30;
                  }
                }
                *tmp39 = mmc_mk_nil();
                tmpMeta38 = __omcQ_24tmpVar39;
              }
              tmp29_c0 = omc_List_position(threadData, (OMC_BOX_FIELD(_ie, 2)), _eindex);
              tmpMeta[0+1] = tmpMeta38;
              goto tmp31_done;
            }
            }
            goto tmp31_end;
            tmp31_end: ;
          }
          goto goto_30;
          goto_30:;
          OMC_THROW_INTERNAL();
          goto tmp31_done;
          tmp31_done:;
        }
      }
      _eq = tmp29_c0;
      _innerVars = tmpMeta[0+1];

      _d = ((modelica_integer) 0);

      _g = 0.0;

      _pivot = 0.0;

      {
        modelica_metatype _dep;
        for (tmpMeta42 = arrayGet(_eqDeps,_eq) /* DAE.ASUB */; !listEmpty(tmpMeta42); tmpMeta42=MMC_CDR(tmpMeta42))
        {
          _dep = MMC_CAR(tmpMeta42);
          _w = omc_unbox_integer(omc_Util_tuple21(threadData, _dep));

          _coeff = omc_unbox_real(omc_Util_tuple22(threadData, _dep));

          if(listMember(omc_mk_integer(_w), _innerVars))
          {
            _pivot = fmax(_pivot,_coeff);
          }
          else
          {
            _d = modelica_integer_max((modelica_integer)(_d),(modelica_integer)(omc_unbox_integer(arrayGet(_depth,_w) /* DAE.ASUB */)));

            _g = _g + ((_coeff) * (omc_unbox_real(arrayGet(_growth,_w) /* DAE.ASUB */)));
          }
        }
      }

      tmp45 = (modelica_boolean)(_pivot > 0.0);
      if(tmp45)
      {
        tmp44 = _pivot;
        if (tmp44 == 0) {OMC_THROW_INTERNAL();}
        tmp46 = (_g) / tmp44;
      }
      else
      {
        tmp46 = _g;
      }
      _g = tmp46;

      {
        modelica_metatype _v;
        for (tmpMeta47 = _innerVars; !listEmpty(tmpMeta47); tmpMeta47=MMC_CDR(tmpMeta47))
        {
          _v = MMC_CAR(tmpMeta47);
          arrayUpdate(_solvedBy, omc_unbox_integer(_v), omc_mk_integer(_eq));

          arrayUpdate(_depth, omc_unbox_integer(_v), omc_mk_integer(((modelica_integer) 1) + _d));

          arrayUpdate(_growth, omc_unbox_integer(_v), omc_mk_real(((_g > 1e300)?1e300:_g)));
        }
      }

      _maxDepth = modelica_integer_max((modelica_integer)(_maxDepth),(modelica_integer)(((modelica_integer) 1) + _d));
    }
  }

  _stamp = arrayCreate(_n, omc_mk_integer(((modelica_integer) 0)));

  _nnzA = ((modelica_integer) 0);

  _maxRowA = ((modelica_integer) 0);

  _maxGrowth = 0.0;

  _row = ((modelica_integer) 0);

  {
    modelica_metatype _ge;
    for (tmpMeta50 = _residuals; !listEmpty(tmpMeta50); tmpMeta50=MMC_CDR(tmpMeta50))
    {
      _ge = MMC_CAR(tmpMeta50);
      _row = ((modelica_integer) 1) + _row;

      _cnt = ((modelica_integer) 0);

      _eq = omc_List_position(threadData, _ge, _eindex);

      _g = 0.0;

      _pivot = 0.0;

      {
        modelica_metatype _dep;
        for (tmpMeta51 = arrayGet(_eqDeps,_eq) /* DAE.ASUB */; !listEmpty(tmpMeta51); tmpMeta51=MMC_CDR(tmpMeta51))
        {
          _dep = MMC_CAR(tmpMeta51);
          _w = omc_unbox_integer(omc_Util_tuple21(threadData, _dep));

          _coeff = omc_unbox_real(omc_Util_tuple22(threadData, _dep));

          _g = _g + ((_coeff) * (omc_unbox_real(arrayGet(_growth,_w) /* DAE.ASUB */)));

          _pivot = fmax(_pivot,_coeff);
        }
      }

      tmp54 = (modelica_boolean)(_pivot > 0.0);
      if(tmp54)
      {
        tmp53 = _pivot;
        if (tmp53 == 0) {OMC_THROW_INTERNAL();}
        tmp55 = (_g) / tmp53;
      }
      else
      {
        tmp55 = _g;
      }
      _maxGrowth = fmax(_maxGrowth,tmp55);

      _stack = arrayGet(_eqDeps,_eq) /* DAE.ASUB */;

      while(1)
      {
        if(!(!listEmpty(_stack))) break;
        _v = omc_unbox_integer(omc_Util_tuple21(threadData, listHead(_stack)));

        _stack = listRest(_stack);

        if((omc_unbox_integer(arrayGet(_stamp,_v) /* DAE.ASUB */) != _row))
        {
          arrayUpdate(_stamp, _v, omc_mk_integer(_row));

          if((omc_unbox_integer(arrayGet(_tvarId,_v) /* DAE.ASUB */) > ((modelica_integer) 0)))
          {
            _cnt = ((modelica_integer) 1) + _cnt;
          }
          else
          {
            if((omc_unbox_integer(arrayGet(_solvedBy,_v) /* DAE.ASUB */) > ((modelica_integer) 0)))
            {
              _stack = listAppend(arrayGet(_eqDeps,omc_unbox_integer(arrayGet(_solvedBy,_v) /* DAE.ASUB */)) /* DAE.ASUB */, _stack);
            }
          }
        }
      }

      _nnzA = _nnzA + _cnt;

      _maxRowA = modelica_integer_max((modelica_integer)(_maxRowA),(modelica_integer)(_cnt));
    }
  }

  _rn = ((modelica_real)_n);

  _rt = ((modelica_real)_t);

  tmp57 = _rn;
  tmp58 = (tmp57 * tmp57);
  if (tmp58 == 0) {OMC_THROW_INTERNAL();}
  _density = (((modelica_real)_nnz)) / tmp58;

  tmp61 = (modelica_boolean)(_t > ((modelica_integer) 0));
  if(tmp61)
  {
    tmp59 = _rt;
    tmp60 = (tmp59 * tmp59);
    if (tmp60 == 0) {OMC_THROW_INTERNAL();}
    tmp62 = (((modelica_real)_nnzA)) / tmp60;
  }
  else
  {
    tmp62 = 1.0;
  }
  _densityA = tmp62;

  tmp64 = (modelica_boolean)(_maxGrowth > 1.0);
  if(tmp64)
  {
    tmp63 = _maxGrowth;
    if(!(tmp63 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(maxGrowth) was %g should be > 0", tmp63);
    }
    tmp65 = log10(tmp63);
  }
  else
  {
    tmp65 = 0.0;
  }
  _digitsLost = tmp65;

  _buildTorn = (4.0) * (((modelica_real)(_maxRowA) * (_nnz)));

  _costDense = (4.0) * (((modelica_real)_nnz)) + omc_Tearing_solveCost(threadData, _rn, ((modelica_real)_nnz), 0 /* false */, 1.0);

  _costSparse = (4.0) * (((modelica_real)_nnz)) + omc_Tearing_solveCost(threadData, _rn, ((modelica_real)_nnz), 1 /* true */, 14.0);

  _costTornDense = _buildTorn + omc_Tearing_solveCost(threadData, _rt, ((modelica_real)_nnzA), 0 /* false */, 1.0);

  _costTornSparse = _buildTorn + omc_Tearing_solveCost(threadData, _rt, ((modelica_real)_nnzA), 1 /* true */, 1.0);

  _costUntorn = (omc_BackendDAEUtil_useSparseSolver(threadData, _n, _nnz, _isLinear)?_costSparse:_costDense);

  _costTorn = (omc_BackendDAEUtil_useSparseSolver(threadData, _t, _nnzA, _isLinear)?_costTornSparse:_costTornDense);

  if(omc_Flags_isSet(threadData, _OMC_LIT429))
  {
    tmp66 = stringAppend(_OMC_LIT401,intString(_strongComponentIndex));
    tmp67 = stringAppend(tmp66,_OMC_LIT402);
    tmp68 = stringAppend(tmp67,(_isLinear?_OMC_LIT403:_OMC_LIT404));
    tmp69 = stringAppend(tmp68,_OMC_LIT405);
    tmp70 = stringAppend(tmp69,omc_BackendDump_jacobianTypeStr(threadData, _jacType));
    tmp71 = stringAppend(tmp70,_OMC_LIT406);
    tmp72 = stringAppend(tmp71,_OMC_LIT407);
    tmp73 = stringAppend(tmp72,intString(_n));
    tmp74 = stringAppend(tmp73,_OMC_LIT408);
    tmp75 = stringAppend(tmp74,intString(_nnz));
    tmp76 = stringAppend(tmp75,_OMC_LIT409);
    tmp77 = stringAppend(tmp76,realString(_density));
    tmp78 = stringAppend(tmp77,_OMC_LIT410);
    tmp79 = stringAppend(tmp78,intString(_t));
    tmp80 = stringAppend(tmp79,_OMC_LIT411);
    tmp81 = stringAppend(tmp80,intString(_m));
    tmp82 = stringAppend(tmp81,_OMC_LIT412);
    tmp83 = stringAppend(tmp82,intString(_nnzA));
    tmp84 = stringAppend(tmp83,_OMC_LIT413);
    tmp85 = stringAppend(tmp84,realString(_densityA));
    tmp86 = stringAppend(tmp85,_OMC_LIT414);
    tmp87 = stringAppend(tmp86,intString(_maxRowA));
    tmp88 = stringAppend(tmp87,_OMC_LIT415);
    tmp89 = stringAppend(tmp88,intString(_maxDepth));
    tmp90 = stringAppend(tmp89,_OMC_LIT416);
    tmp91 = stringAppend(tmp90,realString(_digitsLost));
    tmp92 = stringAppend(tmp91,_OMC_LIT417);
    tmp93 = stringAppend(tmp92,intString(_valued));
    tmp94 = stringAppend(tmp93,_OMC_LIT418);
    tmp95 = stringAppend(tmp94,intString(_nnz));
    tmp96 = stringAppend(tmp95,_OMC_LIT419);
    tmp97 = stringAppend(tmp96,realString(_costDense));
    tmp98 = stringAppend(tmp97,_OMC_LIT420);
    tmp99 = stringAppend(tmp98,realString(_costSparse));
    tmp100 = stringAppend(tmp99,_OMC_LIT421);
    tmp101 = stringAppend(tmp100,realString(_costTornDense));
    tmp102 = stringAppend(tmp101,_OMC_LIT422);
    tmp103 = stringAppend(tmp102,realString(_costTornSparse));
    tmp104 = stringAppend(tmp103,_OMC_LIT423);
    tmp105 = stringAppend(tmp104,(omc_BackendDAEUtil_useSparseSolver(threadData, _n, _nnz, _isLinear)?_OMC_LIT424:_OMC_LIT425));
    tmp106 = stringAppend(tmp105,_OMC_LIT426);
    tmp107 = stringAppend(tmp106,(omc_BackendDAEUtil_useSparseSolver(threadData, _t, _nnzA, _isLinear)?_OMC_LIT424:_OMC_LIT425));
    tmp108 = stringAppend(tmp107,_OMC_LIT10);
    fputs(omc_string_data(tmp108),stdout);
  }

  if((!_isLinear))
  {
    goto _return;
  }

  if(((_digitsLost >= 16.0) && (((modelica_real)_valued) >= (0.9) * (((modelica_real)_nnz)))))
  {
    tmpMeta109 = mmc_mk_cons(intString(_strongComponentIndex), mmc_mk_cons(intString(_m), mmc_mk_cons(intString(((modelica_integer)floor(_digitsLost))), MMC_REFSTRUCTLIT(mmc_nil))));
    omc_Error_addMessage(threadData, _OMC_LIT438, tmpMeta109);

    _keep = 0 /* false */;
  }
  else
  {
    if(((_costUntorn) * (omc_Flags_getConfigReal(threadData, _OMC_LIT436)) < _costTorn))
    {
      tmpMeta110 = mmc_mk_cons(intString(_strongComponentIndex), mmc_mk_cons(intString(_t), mmc_mk_cons(intString(((modelica_integer)floor(_costTorn))), mmc_mk_cons(intString(((modelica_integer)floor(_costUntorn))), mmc_mk_cons(intString(_n), MMC_REFSTRUCTLIT(mmc_nil))))));
      omc_Error_addMessage(threadData, _OMC_LIT431, tmpMeta110);

      _keep = 0 /* false */;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _keep;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tearingPaysOff(threadData_t *threadData, modelica_metatype _tornComp, modelica_metatype _shared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _strongComponentIndex, modelica_metatype _isLinear)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _keep;
  modelica_metatype out_keep;
  tmp1 = omc_unbox_integer(_strongComponentIndex);
  tmp2 = omc_unbox_integer(_isLinear);
  _keep = omc_Tearing_tearingPaysOff(threadData, _tornComp, _shared, _eindex, _vindx, _ojac, _jacType, tmp1, tmp2);
  out_keep = omc_mk_icon(_keep);
  return out_keep;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_targetHasSparseSolver(threadData_t *threadData, modelica_boolean _isLinear)
{
  modelica_boolean _hasSparseSolver;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hasSparseSolver = listMember(omc_Config_simCodeTarget(threadData), _OMC_LIT279);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hasSparseSolver;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_targetHasSparseSolver(threadData_t *threadData, modelica_metatype _isLinear)
{
  modelica_integer tmp1;
  modelica_boolean _hasSparseSolver;
  modelica_metatype out_hasSparseSolver;
  tmp1 = omc_unbox_integer(_isLinear);
  _hasSparseSolver = omc_Tearing_targetHasSparseSolver(threadData, tmp1);
  out_hasSparseSolver = omc_mk_icon(_hasSparseSolver);
  return out_hasSparseSolver;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Tearing_checkTearingSettings(threadData_t *threadData, modelica_boolean _isLinear, modelica_integer _strongComponentIndex, modelica_integer _numVars)
{
  modelica_boolean _activateTearing;
  modelica_boolean _debugFlag;
  modelica_integer _maxSize;
  modelica_boolean _isDense;
  modelica_boolean _hasSparseSolver;
  modelica_boolean _forcedTearing;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _activateTearing = 0 /* false */;
  _debugFlag = (omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3));
  // _maxSize has no default value.
  // _isDense has no default value.
  // _hasSparseSolver has no default value.
  // _forcedTearing has no default value.
  _maxSize = omc_Flags_getConfigInt(threadData, (_isLinear?_OMC_LIT442:_OMC_LIT446));

  if((_maxSize == ((modelica_integer) 0)))
  {
    goto _return;
  }

  _isDense = (stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT450), _OMC_LIT425));

  _hasSparseSolver = omc_Tearing_targetHasSparseSolver(threadData, _isLinear);

  _forcedTearing = (_isDense && (!_hasSparseSolver));

  if(((_numVars > _maxSize) && (!_forcedTearing)))
  {
    tmpMeta1 = mmc_mk_cons(intString(_strongComponentIndex), mmc_mk_cons(intString(_numVars), mmc_mk_cons((_isLinear?_OMC_LIT283:_OMC_LIT284), mmc_mk_cons(intString(_maxSize), mmc_mk_cons((_isLinear?_OMC_LIT439:_OMC_LIT443), MMC_REFSTRUCTLIT(mmc_nil))))));
    omc_Error_addMessage(threadData, _OMC_LIT452, tmpMeta1);

    goto _return;
  }

  if(listMember(omc_mk_integer(_strongComponentIndex), omc_Flags_getConfigIntList(threadData, _OMC_LIT459)))
  {
    if(_debugFlag)
    {
      fputs(omc_string_data(_OMC_LIT453),stdout);
    }

    tmpMeta2 = mmc_mk_cons(intString(_strongComponentIndex), MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT455, tmpMeta2);

    goto _return;
  }

  _activateTearing = 1 /* true */;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _activateTearing;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_checkTearingSettings(threadData_t *threadData, modelica_metatype _isLinear, modelica_metatype _strongComponentIndex, modelica_metatype _numVars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_boolean _activateTearing;
  modelica_metatype out_activateTearing;
  tmp1 = omc_unbox_integer(_isLinear);
  tmp2 = omc_unbox_integer(_strongComponentIndex);
  tmp3 = omc_unbox_integer(_numVars);
  _activateTearing = omc_Tearing_checkTearingSettings(threadData, tmp1, tmp2, tmp3);
  out_activateTearing = omc_mk_icon(_activateTearing);
  return out_activateTearing;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_traverseComponent(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMethod, modelica_integer _strongComponentIndexIn, modelica_boolean *out_outRunMatching, modelica_integer *out_strongComponentIndexOut)
{
  modelica_metatype _oComp = NULL;
  modelica_boolean _outRunMatching;
  modelica_integer _strongComponentIndexOut;
  modelica_boolean _debug;
  modelica_boolean _debugFlag;
  modelica_integer tmp1 = 0;
  modelica_boolean tmp11_c1 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oComp has no default value.
  // _outRunMatching has no default value.
  _strongComponentIndexOut = _strongComponentIndexIn;
  _debug = 0 /* false */;
  _debugFlag = (omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3));
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inComp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          modelica_string tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(_debugFlag)
          {
            tmp7 = stringAppend(_OMC_LIT460,intString(((modelica_integer) 1) + _strongComponentIndexOut));
            tmp8 = stringAppend(tmp7,_OMC_LIT10);
            fputs(omc_string_data(tmp8),stdout);

            if((!listMember(omc_mk_integer(((modelica_integer) 1) + _strongComponentIndexOut), omc_Flags_getConfigIntList(threadData, _OMC_LIT459))))
            {
              tmp9 = stringAppend(_OMC_LIT461,intString(((modelica_integer) 1) + _strongComponentIndexOut));
              tmp10 = stringAppend(tmp9,_OMC_LIT462);
              fputs(omc_string_data(tmp10),stdout);
            }
          }
          tmp1 = ((modelica_integer) 1) + _strongComponentIndexOut;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _strongComponentIndexOut;
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
  _strongComponentIndexOut = tmp1;

  
  
  { /* match expression */
    modelica_metatype tmp14_1;
    tmp14_1 = _inComp;
    {
      modelica_metatype _eindex = NULL;
      modelica_metatype _vindx = NULL;
      modelica_metatype _ojac = NULL;
      modelica_metatype _jacType = NULL;
      modelica_boolean _mixedSystem;
      modelica_boolean _isLinear;
      modelica_boolean _useTearing;
      volatile mmc_switch_type tmp14;
      int tmp15;
      // _eindex has no default value.
      // _vindx has no default value.
      // _ojac has no default value.
      // _jacType has no default value.
      // _mixedSystem has no default value.
      // _isLinear has no default value.
      // _useTearing has no default value.
      tmp14 = 0;
      for (; tmp14 < 2; tmp14++) {
        switch (MMC_SWITCH_CAST(tmp14)) {
        case 0: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_string tmp23;
          modelica_string tmp24;
          modelica_string tmp29;
          modelica_string tmp30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,1,5) == 0) goto tmp13_end;
          tmpMeta16 = OMC_BOX_FIELD(tmp14_1, 2);
          tmpMeta17 = OMC_BOX_FIELD(tmp14_1, 3);
          tmpMeta18 = OMC_BOX_FIELD(tmp14_1, 4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,1) == 0) goto tmp13_end;
          tmpMeta19 = OMC_BOX_FIELD(tmpMeta18, 2);
          tmpMeta20 = OMC_BOX_FIELD(tmp14_1, 5);
          tmpMeta21 = OMC_BOX_FIELD(tmp14_1, 6);
          tmp22 = omc_unbox_integer(tmpMeta21);
          _eindex = tmpMeta16;
          _vindx = tmpMeta17;
          _ojac = tmpMeta19;
          _jacType = tmpMeta20;
          _mixedSystem = tmp22  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _isLinear = omc_BackendDAEUtil_getLinearfromJacType(threadData, _jacType);

          _useTearing = omc_Tearing_checkTearingSettings(threadData, _isLinear, _strongComponentIndexOut, listLength(_vindx));

          if(_useTearing)
          {
            if(_debugFlag)
            {
              tmp23 = stringAppend(_OMC_LIT463,(_isLinear?_OMC_LIT464:_OMC_LIT465));
              tmp24 = stringAppend(tmp23,_OMC_LIT466);
              fputs(omc_string_data(tmp24),stdout);

              { /* match expression */
                modelica_boolean tmp27_1;modelica_boolean tmp27_2;
                tmp27_1 = omc_Flags_isSet(threadData, _OMC_LIT3);
                tmp27_2 = omc_Flags_isSet(threadData, _OMC_LIT78);
                {
                  volatile mmc_switch_type tmp27;
                  int tmp28;
                  tmp27 = 0;
                  for (; tmp27 < 4; tmp27++) {
                    switch (MMC_SWITCH_CAST(tmp27)) {
                    case 0: {
                      if (0 /* false */ != tmp27_1) goto tmp26_end;
                      if (0 /* false */ != tmp27_2) goto tmp26_end;
                      /* Pattern matching succeeded */
                      fputs(omc_string_data(_OMC_LIT467),stdout);
                      goto tmp26_done;
                    }
                    case 1: {
                      if (0 /* false */ != tmp27_1) goto tmp26_end;
                      if (1 /* true */ != tmp27_2) goto tmp26_end;
                      /* Pattern matching succeeded */
                      fputs(omc_string_data(_OMC_LIT468),stdout);
                      goto tmp26_done;
                    }
                    case 2: {
                      if (1 /* true */ != tmp27_1) goto tmp26_end;
                      if (0 /* false */ != tmp27_2) goto tmp26_end;
                      /* Pattern matching succeeded */
                      fputs(omc_string_data(_OMC_LIT469),stdout);
                      goto tmp26_done;
                    }
                    case 3: {
                      if (1 /* true */ != tmp27_1) goto tmp26_end;
                      if (1 /* true */ != tmp27_2) goto tmp26_end;
                      /* Pattern matching succeeded */
                      fputs(omc_string_data(_OMC_LIT10),stdout);
                      goto tmp26_done;
                    }
                    }
                    goto tmp26_end;
                    tmp26_end: ;
                  }
                  goto goto_25;
                  goto_25:;
                  goto goto_12;
                  goto tmp26_done;
                  tmp26_done:;
                }
              }
              ;
            }

            if(omc_Flags_isSet(threadData, _OMC_LIT3))
            {
              tmp29 = stringAppend(_OMC_LIT470,omc_BackendDump_dumpJacobianStr(threadData, _ojac));
              tmp30 = stringAppend(tmp29,_OMC_LIT35);
              fputs(omc_string_data(tmp30),stdout);
            }

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
                    /* Pattern matching succeeded */
                    _oComp = omc_Tearing_callTearingMethod(threadData, _inMethod, _isyst, _ishared, _eindex, _vindx, _ojac, _jacType, _mixedSystem, _strongComponentIndexOut, NULL);

                    _outRunMatching = 1 /* true */;

                    if((!omc_Tearing_tearingPaysOff(threadData, _oComp, _ishared, _eindex, _vindx, _ojac, _jacType, _strongComponentIndexOut, _isLinear)))
                    {
                      _oComp = _inComp;

                      _outRunMatching = 0 /* false */;
                    }
                    goto tmp32_done;
                  }
                  case 1: {
                    /* Pattern matching succeeded */
                    _oComp = _inComp;

                    _outRunMatching = 0 /* false */;
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
                goto goto_12;
                tmp32_done2:;
              }
            }
            ;
          }
          else
          {
            _oComp = _inComp;

            _outRunMatching = 0 /* false */;
          }
          tmpMeta[0+0] = _oComp;
          tmp11_c1 = _outRunMatching;
          goto tmp13_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inComp;
          tmp11_c1 = 0 /* false */;
          goto tmp13_done;
        }
        }
        goto tmp13_end;
        tmp13_end: ;
      }
      goto goto_12;
      goto_12:;
      OMC_THROW_INTERNAL();
      goto tmp13_done;
      tmp13_done:;
    }
  }
  _oComp = tmpMeta[0+0];
  _outRunMatching = tmp11_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  if (out_strongComponentIndexOut) { *out_strongComponentIndexOut = _strongComponentIndexOut; }
  omc_ret_ = _oComp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_traverseComponent(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMethod, modelica_metatype _strongComponentIndexIn, modelica_metatype *out_outRunMatching, modelica_metatype *out_strongComponentIndexOut)
{
  modelica_integer tmp1;
  modelica_boolean _outRunMatching;
  modelica_integer _strongComponentIndexOut;
  modelica_metatype _oComp = NULL;
  tmp1 = omc_unbox_integer(_strongComponentIndexIn);
  _oComp = omc_Tearing_traverseComponent(threadData, _inComp, _isyst, _ishared, _inMethod, tmp1, &_outRunMatching, &_strongComponentIndexOut);
  /* skip box _oComp; BackendDAE.StrongComponent */
  if (out_outRunMatching) { *out_outRunMatching = omc_mk_icon(_outRunMatching); }
  if (out_strongComponentIndexOut) { *out_strongComponentIndexOut = omc_mk_icon(_strongComponentIndexOut); }
  return _oComp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_traverseComponents(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMethod, modelica_integer _strongComponentIndexIn, modelica_boolean *out_outRunMatching, modelica_integer *out_strongComponentIndexOut)
{
  modelica_metatype _oComps = NULL;
  modelica_boolean _outRunMatching;
  modelica_integer _strongComponentIndexOut;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oComps has no default value.
  _outRunMatching = 0 /* false */;
  _strongComponentIndexOut = _strongComponentIndexIn;
  {
    modelica_metatype __omcQ_24tmpVar41;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar40;
    modelica_integer tmp9;
    modelica_metatype _co_loopVar = 0;
    modelica_metatype _co;
    _co_loopVar = _inComps;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar41 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar41;
    while(1) {
      tmp9 = 1;
      if (!listEmpty(_co_loopVar)) {
        _co = MMC_CAR(_co_loopVar);
        _co_loopVar = MMC_CDR(_co_loopVar);
        tmp9--;
      }
      if (tmp9 == 0) {
        { /* match expression */
          modelica_metatype tmp7_1;
          tmp7_1 = _co;
          {
            modelica_metatype _comp = NULL;
            modelica_boolean _b;
            volatile mmc_switch_type tmp7;
            int tmp8;
            // _comp has no default value.
            // _b has no default value.
            tmp7 = 0;
            for (; tmp7 < 1; tmp7++) {
              switch (MMC_SWITCH_CAST(tmp7)) {
              case 0: {
                
                _comp = tmp7_1;
                /* Pattern matching succeeded */
                _comp = omc_Tearing_traverseComponent(threadData, _comp, _isyst, _ishared, _inMethod, _strongComponentIndexOut ,&_b ,&_strongComponentIndexOut);

                _outRunMatching = (_outRunMatching || _b);
                tmpMeta4 = _comp;
                goto tmp6_done;
              }
              }
              goto tmp6_end;
              tmp6_end: ;
            }
            goto goto_5;
            goto_5:;
            OMC_THROW_INTERNAL();
            goto tmp6_done;
            tmp6_done:;
          }
        }__omcQ_24tmpVar40 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar40,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp9 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar41;
  }
  _oComps = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  if (out_strongComponentIndexOut) { *out_strongComponentIndexOut = _strongComponentIndexOut; }
  omc_ret_ = _oComps;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_traverseComponents(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMethod, modelica_metatype _strongComponentIndexIn, modelica_metatype *out_outRunMatching, modelica_metatype *out_strongComponentIndexOut)
{
  modelica_integer tmp1;
  modelica_boolean _outRunMatching;
  modelica_integer _strongComponentIndexOut;
  modelica_metatype _oComps = NULL;
  tmp1 = omc_unbox_integer(_strongComponentIndexIn);
  _oComps = omc_Tearing_traverseComponents(threadData, _inComps, _isyst, _ishared, _inMethod, tmp1, &_outRunMatching, &_strongComponentIndexOut);
  /* skip box _oComps; list<BackendDAE.StrongComponent> */
  if (out_outRunMatching) { *out_outRunMatching = omc_mk_icon(_outRunMatching); }
  if (out_strongComponentIndexOut) { *out_strongComponentIndexOut = omc_mk_icon(_strongComponentIndexOut); }
  return _oComps;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_tearingSystemWork(threadData_t *threadData, modelica_metatype _tearingMethod, modelica_metatype _isyst, modelica_metatype _inShared, modelica_integer _inStrongComponentIndex, modelica_metatype *out_outShared, modelica_integer *out_outStrongComponentIndex)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _outShared = NULL;
  modelica_integer _outStrongComponentIndex;
  modelica_metatype _comps = NULL;
  modelica_boolean _runMatching;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_boolean tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  _outShared = _inShared;
  // _outStrongComponentIndex has no default value.
  // _comps has no default value.
  // _runMatching has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _isyst;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 7);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,3) == 0) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 2);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 4);
  _ass1 = tmpMeta3;
  _ass2 = tmpMeta4;
  _comps = tmpMeta5;

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT471),stdout);
  }

  _comps = omc_Tearing_traverseComponents(threadData, _comps, _isyst, _inShared, _tearingMethod, _inStrongComponentIndex ,&_runMatching ,&_outStrongComponentIndex);

  if(omc_Flags_isSet(threadData, _OMC_LIT3))
  {
    fputs(omc_string_data(_OMC_LIT472),stdout);
  }

  tmp7 = (modelica_boolean)_runMatching;
  if(tmp7)
  {
    tmpMeta6 = omc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, _comps);
    tmpMeta8 = omc_BackendDAEUtil_setEqSystMatching(threadData, _isyst, tmpMeta6);
  }
  else
  {
    tmpMeta8 = _isyst;
  }
  _osyst = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  if (out_outShared) { *out_outShared = _outShared; }
  if (out_outStrongComponentIndex) { *out_outStrongComponentIndex = _outStrongComponentIndex; }
  omc_ret_ = _osyst;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_tearingSystemWork(threadData_t *threadData, modelica_metatype _tearingMethod, modelica_metatype _isyst, modelica_metatype _inShared, modelica_metatype _inStrongComponentIndex, modelica_metatype *out_outShared, modelica_metatype *out_outStrongComponentIndex)
{
  modelica_integer tmp1;
  modelica_integer _outStrongComponentIndex;
  modelica_metatype _osyst = NULL;
  tmp1 = omc_unbox_integer(_inStrongComponentIndex);
  _osyst = omc_Tearing_tearingSystemWork(threadData, _tearingMethod, _isyst, _inShared, tmp1, out_outShared, &_outStrongComponentIndex);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _outShared; BackendDAE.Shared */
  if (out_outStrongComponentIndex) { *out_outStrongComponentIndex = omc_mk_icon(_outStrongComponentIndex); }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_callTearingMethod(threadData_t *threadData, modelica_metatype _inTearingMethod, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_boolean _mixedSystem, modelica_integer _strongComponentIndex, modelica_boolean *out_outRunMatching)
{
  modelica_metatype _ocomp = NULL;
  modelica_boolean _outRunMatching;
  modelica_boolean _debug;
  modelica_metatype _userTVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _userResiduals = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _tearingMethod = NULL;
  modelica_boolean tmp3_c1 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ocomp has no default value.
  // _outRunMatching has no default value.
  _debug = 0 /* false */;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _userTVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _userResiduals = tmpMeta2;
  _tearingMethod = _inTearingMethod;
  if(listMember(omc_mk_integer(_strongComponentIndex), omc_Flags_getConfigIntList(threadData, _OMC_LIT483)))
  {
    _tearingMethod = _OMC_LIT480;
  }
  else
  {
    _userTVars = omc_Flags_getConfigIntList(threadData, _OMC_LIT475);

    _userResiduals = omc_Flags_getConfigIntList(threadData, _OMC_LIT478);

    _userTVars = omc_Tearing_getUserTearingSet(threadData, _userTVars, _userResiduals, _strongComponentIndex ,&_userResiduals);

    if(((!listEmpty(_userTVars)) && (!listEmpty(_userResiduals))))
    {
      _tearingMethod = _OMC_LIT479;
    }
  }

  
  
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _tearingMethod;
    {
      int tmp6;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp6_1))) {
        case 4: {
          modelica_string tmp7;
          modelica_string tmp8;
          
          /* Pattern matching succeeded */
          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            fputs(omc_string_data(_OMC_LIT484),stdout);

            tmp7 = stringAppend(_OMC_LIT485,omc_Flags_getConfigString(threadData, _OMC_LIT349));
            tmp8 = stringAppend(tmp7,_OMC_LIT10);
            fputs(omc_string_data(tmp8),stdout);
          }
          tmpMeta[0+0] = omc_Tearing_omcTearing(threadData, _isyst, _ishared, _eindex, _vindx, _ojac, _jacType, _mixedSystem, &tmp3_c1);
          goto tmp5_done;
        }
        case 5: {
          modelica_string tmp9;
          modelica_string tmp10;
          
          /* Pattern matching succeeded */
          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            fputs(omc_string_data(_OMC_LIT484),stdout);

            tmp9 = stringAppend(_OMC_LIT485,omc_Flags_getConfigString(threadData, _OMC_LIT349));
            tmp10 = stringAppend(tmp9,_OMC_LIT10);
            fputs(omc_string_data(tmp10),stdout);
          }
          tmpMeta[0+0] = omc_Tearing_CellierTearing(threadData, _isyst, _ishared, _eindex, _vindx, _userTVars, _ojac, _jacType, _mixedSystem, _strongComponentIndex, &tmp3_c1);
          goto tmp5_done;
        }
        case 6: {
          modelica_string tmp11;
          modelica_string tmp12;
          
          /* Pattern matching succeeded */
          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            fputs(omc_string_data(_OMC_LIT486),stdout);

            tmp11 = stringAppend(_OMC_LIT485,omc_Flags_getConfigString(threadData, _OMC_LIT349));
            tmp12 = stringAppend(tmp11,_OMC_LIT10);
            fputs(omc_string_data(tmp12),stdout);
          }
          tmpMeta[0+0] = omc_Tearing_totalTearing(threadData, _isyst, _ishared, _eindex, _vindx, _ojac, _jacType, _mixedSystem, &tmp3_c1);
          goto tmp5_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            fputs(omc_string_data(_OMC_LIT487),stdout);
          }

          _ocomp = omc_Tearing_minimalTearing(threadData, _isyst, _ishared, _eindex, _vindx, _jacType, _mixedSystem);
          tmpMeta[0+0] = _ocomp;
          tmp3_c1 = 1 /* true */;
          goto tmp5_done;
        }
        case 7: {
          modelica_string tmp13;
          modelica_string tmp14;
          
          /* Pattern matching succeeded */
          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            fputs(omc_string_data(_OMC_LIT488),stdout);

            tmp13 = stringAppend(_OMC_LIT485,omc_Flags_getConfigString(threadData, _OMC_LIT349));
            tmp14 = stringAppend(tmp13,_OMC_LIT10);
            fputs(omc_string_data(tmp14),stdout);
          }
          tmpMeta[0+0] = omc_Tearing_userDefinedTearing(threadData, _isyst, _ishared, _eindex, _vindx, _ojac, _jacType, _mixedSystem, _userTVars, _userResiduals, &tmp3_c1);
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
  _ocomp = tmpMeta[0+0];
  _outRunMatching = tmp3_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  omc_ret_ = _ocomp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Tearing_callTearingMethod(threadData_t *threadData, modelica_metatype _inTearingMethod, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ojac, modelica_metatype _jacType, modelica_metatype _mixedSystem, modelica_metatype _strongComponentIndex, modelica_metatype *out_outRunMatching)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _outRunMatching;
  modelica_metatype _ocomp = NULL;
  tmp1 = omc_unbox_integer(_mixedSystem);
  tmp2 = omc_unbox_integer(_strongComponentIndex);
  _ocomp = omc_Tearing_callTearingMethod(threadData, _inTearingMethod, _isyst, _ishared, _eindex, _vindx, _ojac, _jacType, tmp1, tmp2, &_outRunMatching);
  /* skip box _ocomp; BackendDAE.StrongComponent */
  if (out_outRunMatching) { *out_outRunMatching = omc_mk_icon(_outRunMatching); }
  return _ocomp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Tearing_getTearingMethod(threadData_t *threadData, modelica_string _inTearingMethod)
{
  modelica_metatype _outTearingMethod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTearingMethod has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inTearingMethod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (14 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT495), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT489;
          goto tmp3_done;
        }
        case 1: {
          if (10 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT496), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT490;
          goto tmp3_done;
        }
        case 2: {
          if (7 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT497), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT491;
          goto tmp3_done;
        }
        case 3: {
          modelica_string tmp6;
          modelica_string tmp7;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT492,_inTearingMethod);
          tmp7 = stringAppend(tmp6,_OMC_LIT493);
          omc_Error_addInternalError(threadData, tmp7, _OMC_LIT494);
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
  _outTearingMethod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTearingMethod;
  return omc_ret_;
}

static modelica_metatype closure0_Tearing_tearingSystemWork(threadData_t *thData, modelica_metatype closure, modelica_metatype isyst, modelica_metatype inShared, modelica_metatype inStrongComponentIndex, modelica_metatype tmp16, modelica_metatype tmp17)
{
  modelica_metatype tearingMethod = OMC_BOX_FIELD(closure, 1);
  return boxptr_Tearing_tearingSystemWork(thData, tearingMethod, isyst, inShared, inStrongComponentIndex, tmp16, tmp17);
}
DLLModelDirection
modelica_metatype omc_Tearing_tearingSystem(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_string _methodString = NULL;
  modelica_metatype _method = NULL;
  modelica_metatype _DAEtype = NULL;
  modelica_integer _strongComponentIndex;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  _methodString = omc_Config_getTearingMethod(threadData);
  // _method has no default value.
  // _DAEtype has no default value.
  _strongComponentIndex = omc_System_tmpTickIndex(threadData, ((modelica_integer) 24));
  if((omc_Flags_getConfigInt(threadData, _OMC_LIT442) < ((modelica_integer) 0)))
  {
    tmpMeta1 = mmc_mk_cons(_OMC_LIT439, mmc_mk_cons(_OMC_LIT501, mmc_mk_cons(intString(omc_Flags_getConfigInt(threadData, _OMC_LIT442)), MMC_REFSTRUCTLIT(mmc_nil))));
    omc_Error_addMessage(threadData, _OMC_LIT500, tmpMeta1);

    OMC_THROW_INTERNAL();
  }
  else
  {
    if((omc_Flags_getConfigInt(threadData, _OMC_LIT446) < ((modelica_integer) 0)))
    {
      tmpMeta2 = mmc_mk_cons(_OMC_LIT443, mmc_mk_cons(_OMC_LIT501, mmc_mk_cons(intString(omc_Flags_getConfigInt(threadData, _OMC_LIT446)), MMC_REFSTRUCTLIT(mmc_nil))));
      omc_Error_addMessage(threadData, _OMC_LIT500, tmpMeta2);

      OMC_THROW_INTERNAL();
    }
  }

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp4_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_string tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          /* Pattern matching succeeded */
          _method = omc_Tearing_getTearingMethod(threadData, _methodString);

          if((omc_Flags_isSet(threadData, _OMC_LIT28) || omc_Flags_isSet(threadData, _OMC_LIT3)))
          {
            /* Pattern-matching assignment */
            tmpMeta7 = (OMC_BOX_FIELD(_inDAE, 3));
            tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 15);
            _DAEtype = tmpMeta8;

            tmp9 = stringAppend(_OMC_LIT502,omc_BackendDump_printBackendDAEType2String(threadData, _DAEtype));
            tmp10 = stringAppend(tmp9,_OMC_LIT503);
            tmp11 = stringAppend(tmp10,_OMC_LIT245);
            tmp12 = stringAppend(tmp11,_OMC_LIT245);
            tmp13 = stringAppend(tmp12,_OMC_LIT10);
            fputs(omc_string_data(tmp13),stdout);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta18 = omc_mk_box1(0, _method);
          tmpMeta19 = omc_BackendDAEUtil_mapEqSystemAndFold(threadData, _inDAE, (modelica_fnptr) omc_mk_box2(0,closure0_Tearing_tearingSystemWork,tmpMeta18), omc_mk_integer(_strongComponentIndex), &tmpMeta14);
          _outDAE = tmpMeta19;
          tmp15 = omc_unbox_integer(tmpMeta14);
          _strongComponentIndex = tmp15  /* pattern as ty=Integer */;

          omc_System_tmpTickSetIndex(threadData, _strongComponentIndex, ((modelica_integer) 24));
          goto tmp4_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT504, _OMC_LIT505);

          goto goto_3;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      tmp4_done:
      (void)tmp5;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp4_done2;
      goto_3:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp5 < 2) {
        goto tmp4_top;
      }
      OMC_THROW_INTERNAL();
      tmp4_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outDAE;
  return omc_ret_;
}

