#include "omc_simulation_settings.h"
#include "DataReconciliation.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "= 0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,3,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,3,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "if "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,3,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data " then\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,8,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data " in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,4,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,3,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,4,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data " loop\n    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,10,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "; end for; "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,11,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,1,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Sxij,"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,5,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,0) {_OMC_LIT0,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "<html> \n <head> <h1> Data Reconciliation Report</h1></head> \n <body> \n <h2> Overview: </h2> \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,93,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "<html> \n <head> <h1> Boundary Condition Report</h1></head> \n <body> \n <h2> Overview: </h2> \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,92,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "<table> \n <tr> \n <th align=right> Model file: </th> \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,53,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "<td>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,4,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ".mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,3,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "</td>\n</tr>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,12,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data " <tr> \n <th align=right> Model name: </th>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,43,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "<tr> \n <th align=right> Generated: </th>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,41,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "<b> by OpenModelica "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,20,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "</b>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,4,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "</td>\n</tr>\n <table>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,21,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "<h2> Analysis: </h2>\n<table>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,28,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "<tr>\n <th align=right> Number of auxiliary conditions: </th> \n <td>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,67,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "<tr>\n <th align=right> Number of measured variables: </th> \n <td>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,65,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "<tr>\n <th align=right> Number of unmeasured variables: </th> \n <td>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,67,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "<tr>\n <th align=right> Number of related boundary conditions: </th> \n <td>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,74,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "</td>\n</tr>\n</table>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,20,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "<tr>\n <th align=right> Number of boundary conditions: </th> \n <td>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,66,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "<h3> <a href="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,13,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "_IntermediateEquations.html target=_blank> Intermediate equations for measured variables </a> </h3>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,99,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "_BoundaryConditionsEquations.html target=_blank> Boundary conditions </a> </h3>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,79,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "_BoundaryConditionIntermediateEquations.html target=_blank> Intermediate equations for unmeasured variables </a> </h3>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,118,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "_BoundaryConditionIntermediateEquations.html target=_blank> Intermediate equations </a> </h3>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,93,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "<h3> Errors: </h3> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,19,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n <p>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,5,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "</p>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,4,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "<p>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,3,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "\n <ol>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,6,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "  <li>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,6,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data " </li>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,6,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "\n</ol> \n</p>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,12,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "\n <li>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,6,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "</li>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,5,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "\n</ol>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,6,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "\n</html>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,8,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data ".html"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,5,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "_BoundaryConditions.html"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,24,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\n\nAutomatic Verification Steps of DataReconciliation Algorithm\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,138,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "knownVariables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,15,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "-SET_C:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,7,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "-SET_S:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,7,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,2,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "Condition-1 \"SET_C and SET_S must not have no equations in common\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,66,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "=========================================================================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,74,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "-Failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,8,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "Sets C and S have equations in common"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,37,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,17,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT64,_OMC_LIT65,_OMC_LIT66}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data ": Condition 1-Failed: SET_C and SET_S must not have no equations in common: The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,120,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,1) {_OMC_LIT68,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "Internal Error: Condition 1-Failed: \"SET_C and SET_S must not have no equations in common\": The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,136,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "-Passed\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,9,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "Condition-2 \"All variables of interest must be involved in SET_C or SET_S\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,74,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "knownVariables not Found:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,25,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data ": Condition 2-Failed: All variables of interest must be involved in Set-C or Set-S: The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,128,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,1) {_OMC_LIT74,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "_NonReconcilcedVars.txt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,23,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "-Passed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,8,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "-SET_C has known variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,27,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "-SET_S has known variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,27,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "-SET_C has all known variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,31,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "Condition-3 \"SET_C equations must be strictly less than Variable of Interest\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,77,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "Set-C has "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,10,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data " equations and "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,15,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data " variables to be reconciled"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,27,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "-Failed\n-"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,9,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data ": Condition 3-Failed: The number of auxiliary conditions must be strictly less than the number of variables to be reconciled. The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,170,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,2,1) {_OMC_LIT86,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "<b>User Error:</b> Condition 3-Failed: \"The number of auxiliary conditions must be strictly less than the number of variables to be reconciled.\": The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,190,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "<b>User Error:</b> Condition 7 failed: \"The set of auxiliary conditions is empty.\" The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,127,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "-Passed\n-SET_C contains:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,24,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data " equations < "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,13,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data " known variables\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,18,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "Condition-4 \"SET_S should contain all intermediate variables involved in SET_C\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,79,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "-SET_C has intermediate variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,34,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "-SET_S does not have intermediate variables involved in SET_C:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,62,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data ": Condition 4-Failed: SET_S should contain all intermediate variables involved in SET_C: The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,133,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,2,1) {_OMC_LIT96,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "<b>Internal Error:</b> Condition 4-Failed: \"SET_S should contain all intermediate variables involved in SET_C\": The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,156,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "Set-S does not have intermediate variables involved in Set-C"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,60,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "-SET_S has intermediate variables involved in SET_C:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,52,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "-Passed\n-SET_C contains No Intermediate Variables\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,51,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "Condition-5 \"SET_S should be square\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,36,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "Set-S has "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,10,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data " variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,10,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "-Failed\n "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,9,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data ": Condition 5-Failed: Set_S should be square: The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,90,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,2,1) {_OMC_LIT106,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "<b>Internal Error:</b> Condition 5-Failed: \"Set_S should be square\": The data reconciliation problem is ill-posed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,113,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "-Passed\n Set_S has "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,19,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data " variables\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,12,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "-Passed\n-SET_S contains 0 intermediate variables and 0 equations\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,66,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "Set-S' has "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,11,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "Boundary condition(s) "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,22,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data " cannot be computed from the variables of interest only. They must be computed also from boundary conditions(s) "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,112,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,2,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data " Therefore, the problem is ill-posed regarding the computation of boundary conditions from the variables of interest only."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,122,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data " Therefore, the problem is ill-posed regarding the computation of unmeasured variables of interest from the variables of interest only."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,135,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "constants"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,9,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "knowns"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,6,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "\nTargetBlocks :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,15,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data " || EBLT_Block"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,14,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "\nDetailed BlockTarget Dependency tree:\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,80,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "\nFIND Blocks target of :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,24,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "\n========================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,25,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "\nFinal-Target-Blocks : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,23,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data " || rankList"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,12,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "__OpenModelica_ExactConstantEquation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,36,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "__OpenModelica_BoundaryCondition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,32,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "__OpenModelica_ApproximatedEquation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,35,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data ":\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,2,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,1,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,1,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "unknowns"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,8,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,2,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT135,0.0);
#define _OMC_LIT135 MMC_REFREALLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT135}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT137,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT135}};
#define _OMC_LIT137 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT139,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT137,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT138,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT139 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT139)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT140,1,5) {&BackendDAE_EquationKind_INITIAL__EQUATION__desc,}};
#define _OMC_LIT140 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT140)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT141,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT141 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT141)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT142,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT140,_OMC_LIT141}};
#define _OMC_LIT142 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "\nUnion of Blue, Red and Yellow and E-BLT-Blocks\n====================================================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,101,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "\nUnion-E-BLT-blocks                                     :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,57,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "\nUnion-Blue-TargetBlockInfo (blocks with Knowns)        :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,57,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "\nUnion-Red-TargetBlockInfo  (blocks with UnKnowns)      :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,57,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "\nUnion-Brown-TargetBlockInfo  (blocks with Exact eqns)  :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,57,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "\n\nSetC-Operations\n===================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,38,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "\n(BlocksWithKnowns) intersection (e_BLTBlocks)   :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,50,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "\n(BlocksWithUnknowns) intersection (e_BLTBlocks) :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,50,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "\nSetC                                            :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,50,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "\nSetS-Operations\n=================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,35,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "\n(BlocksWithKnowns - BlocksWithUnknowns)                  :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,59,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "\n((BlocksWithKnowns - BlocksWithUnknowns) - e_BLTBlocks)) :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,59,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "\nz1(B) => (ConstantBlocks - UnknownsBlocks)               :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,59,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "\nz2(B) => (z1(B) - e_BLTBlocks)                           :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,59,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
#define _OMC_LIT157_data "\nSetS                                                     :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT157,59,_OMC_LIT157_data);
#define _OMC_LIT157 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data " ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,2,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,1,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "\n==============================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,32,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "\nBlock :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,8,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data " || blockTargetsInfo :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,22,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data " || KnownBlocks :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,17,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#define _OMC_LIT164_data " || constantBlocks :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT164,20,_OMC_LIT164_data);
#define _OMC_LIT164 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT164)
#define _OMC_LIT165_data "\nTargets of blocks without predecessors:\n========================================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT165,81,_OMC_LIT165_data);
#define _OMC_LIT165 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT165)
#define _OMC_LIT166_data "Targets of Blue blocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT166,22,_OMC_LIT166_data);
#define _OMC_LIT166 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT166)
#define _OMC_LIT167_data "Targets of Red blocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT167,21,_OMC_LIT167_data);
#define _OMC_LIT167 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT167)
#define _OMC_LIT168_data "constant"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT168,8,_OMC_LIT168_data);
#define _OMC_LIT168 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT168)
#define _OMC_LIT169_data "Targets of Brown blocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT169,23,_OMC_LIT169_data);
#define _OMC_LIT169 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT169)
#define _OMC_LIT170_data "\nS-BLTBlocks-TargetInfo\n=======================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT170,48,_OMC_LIT170_data);
#define _OMC_LIT170 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT170)
#define _OMC_LIT171_data " || blockStatusVarInfo :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT171,24,_OMC_LIT171_data);
#define _OMC_LIT171 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT171)
#define _OMC_LIT172_data "\nBLT-BLOCK_STATUS\n=================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT172,36,_OMC_LIT172_data);
#define _OMC_LIT172 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT172)
#define _OMC_LIT173_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT173,2,_OMC_LIT173_data);
#define _OMC_LIT173 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT173)
#define _OMC_LIT174_data "========================================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT174,40,_OMC_LIT174_data);
#define _OMC_LIT174 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT174)
#define _OMC_LIT175_data " type: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT175,7,_OMC_LIT175_data);
#define _OMC_LIT175 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT175)
#define _OMC_LIT176_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT176,1,_OMC_LIT176_data);
#define _OMC_LIT176 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT176)
#define _OMC_LIT177_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT177,1,_OMC_LIT177_data);
#define _OMC_LIT177 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT177)
#define _OMC_LIT178_data "\n============================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT178,62,_OMC_LIT178_data);
#define _OMC_LIT178 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT178)
#define _OMC_LIT179_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT179,1,_OMC_LIT179_data);
#define _OMC_LIT179 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT179)
#define _OMC_LIT180_data "): "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT180,3,_OMC_LIT180_data);
#define _OMC_LIT180 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT180)
#define _OMC_LIT181_data ": Boundary Condition cannot be set on Integer or Boolean parameters: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT181,69,_OMC_LIT181_data);
#define _OMC_LIT181 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT181)
#define _OMC_LIT182_data " must be Real, The extraction algorithm will fail"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT182,49,_OMC_LIT182_data);
#define _OMC_LIT182 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT182)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT183,1,3) {&BackendDAE_EquationKind_BINDING__EQUATION__desc,}};
#define _OMC_LIT183 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT183)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT184,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT183,_OMC_LIT141}};
#define _OMC_LIT184 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT184)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT185,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT185 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT185)
#define _OMC_LIT186_data "boundaryConditionVarsTaggedAsParmeters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT186,38,_OMC_LIT186_data);
#define _OMC_LIT186 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT186)
#define _OMC_LIT187_data "<html>\n<body>\n<h2>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT187,18,_OMC_LIT187_data);
#define _OMC_LIT187 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT187)
#define _OMC_LIT188_data "</h2>\n<ol>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT188,10,_OMC_LIT188_data);
#define _OMC_LIT188 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT188)
#define _OMC_LIT189_data "\n</ol>\n</body>\n</html>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT189,22,_OMC_LIT189_data);
#define _OMC_LIT189 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT189)
#define _OMC_LIT190_data "The set of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT190,11,_OMC_LIT190_data);
#define _OMC_LIT190 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT190)
#define _OMC_LIT191_data " is empty."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT191,10,_OMC_LIT191_data);
#define _OMC_LIT191 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT191)
#define _OMC_LIT192_data "\n  //"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT192,5,_OMC_LIT192_data);
#define _OMC_LIT192 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT192)
#define _OMC_LIT193_data ";"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT193,1,_OMC_LIT193_data);
#define _OMC_LIT193 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT193)
#define _OMC_LIT194_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT194,1,_OMC_LIT194_data);
#define _OMC_LIT194 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT194)
#define _OMC_LIT195_data "\n  parameter "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT195,13,_OMC_LIT195_data);
#define _OMC_LIT195 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT195)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT196,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT196 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT196)
#define _OMC_LIT197_data "\nVarIndex                     : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT197,32,_OMC_LIT197_data);
#define _OMC_LIT197 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT197)
#define _OMC_LIT198_data "\nVariable Name                : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT198,32,_OMC_LIT198_data);
#define _OMC_LIT198 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT198)
#define _OMC_LIT199_data "\nEquation Exist               : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT199,32,_OMC_LIT199_data);
#define _OMC_LIT199 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT199)
#define _OMC_LIT200_data "\nmappedEquation               : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT200,32,_OMC_LIT200_data);
#define _OMC_LIT200 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT200)
#define _OMC_LIT201_data "\nMatched Equation             : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT201,32,_OMC_LIT201_data);
#define _OMC_LIT201 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT201)
#define _OMC_LIT202_data "\nS'                           : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT202,32,_OMC_LIT202_data);
#define _OMC_LIT202 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT202)
#define _OMC_LIT203_data "\nUnknowns in matchedEquation  : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT203,32,_OMC_LIT203_data);
#define _OMC_LIT203 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT203)
#define _OMC_LIT204_data "\nVisited vars                 : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT204,32,_OMC_LIT204_data);
#define _OMC_LIT204 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT204)
#define _OMC_LIT205_data "\nRemaining Vars               : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT205,32,_OMC_LIT205_data);
#define _OMC_LIT205 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT205)
#define _OMC_LIT206_data "\nV_EQ                         : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT206,32,_OMC_LIT206_data);
#define _OMC_LIT206 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT206)
#define _OMC_LIT207_data "\nVarIndex           : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT207,22,_OMC_LIT207_data);
#define _OMC_LIT207 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT207)
#define _OMC_LIT208_data "\nVariable Name      : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT208,22,_OMC_LIT208_data);
#define _OMC_LIT208 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT208)
#define _OMC_LIT209_data "\nEquation Not Exist : NIL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT209,25,_OMC_LIT209_data);
#define _OMC_LIT209 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT209)
#define _OMC_LIT210_data "\nRemainingVars      : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT210,22,_OMC_LIT210_data);
#define _OMC_LIT210 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT210)
#define _OMC_LIT211_data "\nIntermediate varList : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT211,24,_OMC_LIT211_data);
#define _OMC_LIT211 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT211)
#define _OMC_LIT212_data "dataReconciliation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT212,18,_OMC_LIT212_data);
#define _OMC_LIT212 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT212)
#define _OMC_LIT213_data "Dumps all the dataReconciliation extraction algorithm procedure"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT213,63,_OMC_LIT213_data);
#define _OMC_LIT213 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT213)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT214,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(180)),_OMC_LIT212,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT213}};
#define _OMC_LIT214 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT214)
#define _OMC_LIT215_data "\nModelInfo: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT215,12,_OMC_LIT215_data);
#define _OMC_LIT215 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT215)
#define _OMC_LIT216_data "OrderedVariables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT216,16,_OMC_LIT216_data);
#define _OMC_LIT216 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT216)
#define _OMC_LIT217_data "OrderedEquation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT217,15,_OMC_LIT217_data);
#define _OMC_LIT217 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT217)
#define _OMC_LIT218_data "Updated-OrderedVariables-withBoundaryConditionVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT218,50,_OMC_LIT218_data);
#define _OMC_LIT218 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT218)
#define _OMC_LIT219_data "Updated-OrderedVariables-withBoundaryConditionEqs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT219,49,_OMC_LIT219_data);
#define _OMC_LIT219 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT219)
#define _OMC_LIT220_data "Updated-GlobalKnownVars-withBoundaryConditionVarsRemoved"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT220,56,_OMC_LIT220_data);
#define _OMC_LIT220 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT220)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT221,1,4) {&BackendDAE_IndexType_NORMAL__desc,}};
#define _OMC_LIT221 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT221)
#define _OMC_LIT222_data "\nVariablesCategories\n============================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT222,50,_OMC_LIT222_data);
#define _OMC_LIT222 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT222)
#define _OMC_LIT223_data "\nknownVars                    :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT223,31,_OMC_LIT223_data);
#define _OMC_LIT223 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT223)
#define _OMC_LIT224_data "\nboundaryConditionVars        :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT224,31,_OMC_LIT224_data);
#define _OMC_LIT224 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT224)
#define _OMC_LIT225_data "\nexactEquationVars            :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT225,31,_OMC_LIT225_data);
#define _OMC_LIT225 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT225)
#define _OMC_LIT226_data "\nadjacencyMatrix              :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT226,31,_OMC_LIT226_data);
#define _OMC_LIT226 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT226)
#define _OMC_LIT227_data "\nEquations with KnownBindings:\n==================================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT227,66,_OMC_LIT227_data);
#define _OMC_LIT227 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT227)
#define _OMC_LIT228_data "\nAdjacency Matrix                     :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT228,39,_OMC_LIT228_data);
#define _OMC_LIT228 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT228)
#define _OMC_LIT229_data "\nLength of Adjacency Matrix           :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT229,39,_OMC_LIT229_data);
#define _OMC_LIT229 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT229)
#define _OMC_LIT230_data "\nList of known equation with bindings :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT230,39,_OMC_LIT230_data);
#define _OMC_LIT230 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT230)
#define _OMC_LIT231_data "OverDetermined-System-Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT231,31,_OMC_LIT231_data);
#define _OMC_LIT231 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT231)
#define _OMC_LIT232_data "\nOverDetermined-Systems-Information :\n====================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT232,75,_OMC_LIT232_data);
#define _OMC_LIT232 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT232)
#define _OMC_LIT233_data "\nAdjacency Matrix     :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT233,23,_OMC_LIT233_data);
#define _OMC_LIT233 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT233)
#define _OMC_LIT234_data "\nNumber of Vars       :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT234,23,_OMC_LIT234_data);
#define _OMC_LIT234 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT234)
#define _OMC_LIT235_data "\nNumber of Equations  :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT235,23,_OMC_LIT235_data);
#define _OMC_LIT235 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT235)
#define _OMC_LIT236_data "\nFinding unmatched subset of equations :\n=========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT236,83,_OMC_LIT236_data);
#define _OMC_LIT236 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT236)
#define _OMC_LIT237_data "\nSolvedEqsAndVarsInfo                   :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT237,41,_OMC_LIT237_data);
#define _OMC_LIT237 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT237)
#define _OMC_LIT238_data "\nList of Equations                      :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT238,41,_OMC_LIT238_data);
#define _OMC_LIT238 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT238)
#define _OMC_LIT239_data "\nMatchedEquationsLst                    :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT239,41,_OMC_LIT239_data);
#define _OMC_LIT239 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT239)
#define _OMC_LIT240_data "\nSizeofMatchedEquationLST               :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT240,41,_OMC_LIT240_data);
#define _OMC_LIT240 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT240)
#define _OMC_LIT241_data "\nUnMatchedSubSetOfEquations             :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT241,41,_OMC_LIT241_data);
#define _OMC_LIT241 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT241)
#define _OMC_LIT242_data "\nUnMatchedSubSetOfEquationsMappedIndex  :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT242,41,_OMC_LIT242_data);
#define _OMC_LIT242 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT242)
#define _OMC_LIT243_data "E-BLT-Equations "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT243,16,_OMC_LIT243_data);
#define _OMC_LIT243 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT243)
#define _OMC_LIT244_data "\nE-BLT Information\n================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT244,35,_OMC_LIT244_data);
#define _OMC_LIT244 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT244)
#define _OMC_LIT245_data "\nE-BLT-Blocks   :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT245,17,_OMC_LIT245_data);
#define _OMC_LIT245 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT245)
#define _OMC_LIT246_data "\nE-BLT-Blocks-with ranks   :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT246,28,_OMC_LIT246_data);
#define _OMC_LIT246 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT246)
#define _OMC_LIT247_data "\nE-BLT-Adjacency-Matrix    :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT247,28,_OMC_LIT247_data);
#define _OMC_LIT247 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT247)
#define _OMC_LIT248_data "\nE_BLTSolvedEqsAndVars     :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT248,28,_OMC_LIT248_data);
#define _OMC_LIT248 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT248)
#define _OMC_LIT249_data "reOrdered-Equations-after-removal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT249,33,_OMC_LIT249_data);
#define _OMC_LIT249 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT249)
#define _OMC_LIT250_data "reOrderedVariables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT250,18,_OMC_LIT250_data);
#define _OMC_LIT250 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT250)
#define _OMC_LIT251_data "\nS-BLT-Information\n================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT251,35,_OMC_LIT251_data);
#define _OMC_LIT251 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT251)
#define _OMC_LIT252_data "\nS-BLT Number of Vars       :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT252,29,_OMC_LIT252_data);
#define _OMC_LIT252 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT252)
#define _OMC_LIT253_data "\nS-BLT Number of Equations  :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT253,29,_OMC_LIT253_data);
#define _OMC_LIT253 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT253)
#define _OMC_LIT254_data "\nS-BLT-Blocks               :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT254,29,_OMC_LIT254_data);
#define _OMC_LIT254 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT254)
#define _OMC_LIT255_data "\nS-BLT-Blocks-with ranks    :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT255,29,_OMC_LIT255_data);
#define _OMC_LIT255 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT255)
#define _OMC_LIT256_data "\nS-BLT Adjacency Matrix     :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT256,29,_OMC_LIT256_data);
#define _OMC_LIT256 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT256)
#define _OMC_LIT257_data "\nS_BLTSolvedEqsAndVars      :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT257,29,_OMC_LIT257_data);
#define _OMC_LIT257 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT257)
#define _OMC_LIT258_data "\nCombined S-BLT and E-BLT Information\n================================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT258,70,_OMC_LIT258_data);
#define _OMC_LIT258 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT258)
#define _OMC_LIT259_data "\nCombined S-BLT-Blocks and E-BLT-Blocks                :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT259,56,_OMC_LIT259_data);
#define _OMC_LIT259 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT259)
#define _OMC_LIT260_data "\nCombined S-BLT-Blocks and E-BLT-Blocks with Ranks     :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT260,56,_OMC_LIT260_data);
#define _OMC_LIT260 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT260)
#define _OMC_LIT261_data "\nCombined Adjacency Matrix with S-BLT and E-BLT        :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT261,56,_OMC_LIT261_data);
#define _OMC_LIT261 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT261)
#define _OMC_LIT262_data "\nCombined SolvedEquationsVarsInfo with S-BLT and E-BLT :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT262,56,_OMC_LIT262_data);
#define _OMC_LIT262 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT262)
#define _OMC_LIT263_data "BLT_BLOCKS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT263,10,_OMC_LIT263_data);
#define _OMC_LIT263 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT263)
#define _OMC_LIT264_data "ApproximatedEquations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT264,21,_OMC_LIT264_data);
#define _OMC_LIT264 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT264)
#define _OMC_LIT265_data "boundaryConditionEquations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT265,26,_OMC_LIT265_data);
#define _OMC_LIT265 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT265)
#define _OMC_LIT266_data "\nApproximated and BoundaryCondition Equation Indexes :\n==========================================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT266,98,_OMC_LIT266_data);
#define _OMC_LIT266 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT266)
#define _OMC_LIT267_data "\nApproximatedEquationIndexes      :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT267,35,_OMC_LIT267_data);
#define _OMC_LIT267 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT267)
#define _OMC_LIT268_data "\nBoundayConditionEquationIndexes  :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT268,35,_OMC_LIT268_data);
#define _OMC_LIT268 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT268)
#define _OMC_LIT269_data "boundaryConditionTaggedEquationSolvedVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT269,41,_OMC_LIT269_data);
#define _OMC_LIT269 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT269)
#define _OMC_LIT270_data "\nUpdatedVariablesCategories\n============================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT270,57,_OMC_LIT270_data);
#define _OMC_LIT270 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT270)
#define _OMC_LIT271_data "\nFINAL SET OF EQUATIONS After Reconciliation\n==========================================================================\nSET_C: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT271,127,_OMC_LIT271_data);
#define _OMC_LIT271 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT271)
#define _OMC_LIT272_data "SET_S: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT272,7,_OMC_LIT272_data);
#define _OMC_LIT272 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT272)
#define _OMC_LIT273_data "Set-S Solved-Variables Information"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT273,34,_OMC_LIT273_data);
#define _OMC_LIT273 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT273)
#define _OMC_LIT274_data "SET_C"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT274,5,_OMC_LIT274_data);
#define _OMC_LIT274 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT274)
#define _OMC_LIT275_data "SET_S"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT275,5,_OMC_LIT275_data);
#define _OMC_LIT275 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT275)
#define _OMC_LIT276_data "\nStart of Extract Minimal Set-S Algorithm\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT276,117,_OMC_LIT276_data);
#define _OMC_LIT276 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT276)
#define _OMC_LIT277_data "\nSet-S Adjacency MAtrix : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT277,26,_OMC_LIT277_data);
#define _OMC_LIT277 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT277)
#define _OMC_LIT278_data "\nS'        : {}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT278,15,_OMC_LIT278_data);
#define _OMC_LIT278 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT278)
#define _OMC_LIT279_data "\nV_C       :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT279,12,_OMC_LIT279_data);
#define _OMC_LIT279 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT279)
#define _OMC_LIT280_data "\n****End of Minimal extraction Algorithm****\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT280,45,_OMC_LIT280_data);
#define _OMC_LIT280 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT280)
#define _OMC_LIT281_data "\nSet-S after running minimal extraction algorithm\n==========================================================================\nSET_S: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT281,132,_OMC_LIT281_data);
#define _OMC_LIT281 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT281)
#define _OMC_LIT282_data "\nSET_S_After_Minimal_Extraction (0, 0)\n==========================================================================\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT282,115,_OMC_LIT282_data);
#define _OMC_LIT282 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT282)
#define _OMC_LIT283_data "SET_S_After_Minimal_Extraction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT283,30,_OMC_LIT283_data);
#define _OMC_LIT283 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT283)
#define _OMC_LIT284_data "$res_F_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT284,7,_OMC_LIT284_data);
#define _OMC_LIT284 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT284)
#define _OMC_LIT285_data "Unknown variables in SET_S "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT285,27,_OMC_LIT285_data);
#define _OMC_LIT285 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT285)
#define _OMC_LIT286_data "Parameters in SET_S"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT286,19,_OMC_LIT286_data);
#define _OMC_LIT286 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT286)
#define _OMC_LIT287_data "_AuxiliaryConditions.html"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT287,25,_OMC_LIT287_data);
#define _OMC_LIT287 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT287)
#define _OMC_LIT288_data "Auxiliary conditions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT288,20,_OMC_LIT288_data);
#define _OMC_LIT288 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT288)
#define _OMC_LIT289_data "_IntermediateEquations.html"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT289,27,_OMC_LIT289_data);
#define _OMC_LIT289 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT289)
#define _OMC_LIT290_data "Intermediate equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT290,22,_OMC_LIT290_data);
#define _OMC_LIT290 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT290)
#define _OMC_LIT291_data "Jacobian_knownVariables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT291,23,_OMC_LIT291_data);
#define _OMC_LIT291 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT291)
#define _OMC_LIT292_data "Jacobian_outResidualVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT292,24,_OMC_LIT292_data);
#define _OMC_LIT292 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT292)
#define _OMC_LIT293_data "Jacobian_outOtherVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT293,21,_OMC_LIT293_data);
#define _OMC_LIT293 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT293)
#define _OMC_LIT294_data "Jacobian_ResidualEquation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT294,25,_OMC_LIT294_data);
#define _OMC_LIT294 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT294)
#define _OMC_LIT295_data "Jacobian_other_Equation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT295,23,_OMC_LIT295_data);
#define _OMC_LIT295 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT295)
#define _OMC_LIT296_data "F"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT296,1,_OMC_LIT296_data);
#define _OMC_LIT296 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT296)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT297,1,3) {&DAE_VarDirection_INPUT__desc,}};
#define _OMC_LIT297 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT297)
#define _OMC_LIT298_data "Variable Names,Measured Value-x,HalfWidthConfidenceInterval\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT298,60,_OMC_LIT298_data);
#define _OMC_LIT298 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT298)
#define _OMC_LIT299_data "_Inputs.csv"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT299,11,_OMC_LIT299_data);
#define _OMC_LIT299 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT299)
#define _OMC_LIT300_data "_Reconciled_tmp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT300,15,_OMC_LIT300_data);
#define _OMC_LIT300 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT300)
#define _OMC_LIT301_data "Reconciled_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT301,11,_OMC_LIT301_data);
#define _OMC_LIT301 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT301)
#define _OMC_LIT302_data "/* This is a Reconciled Model which is generated by the Data Reconciliation extraction algorithm */\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT302,100,_OMC_LIT302_data);
#define _OMC_LIT302 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT302)
#define _OMC_LIT303_data "model "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT303,6,_OMC_LIT303_data);
#define _OMC_LIT303 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT303)
#define _OMC_LIT304_data "Variables of Interest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT304,21,_OMC_LIT304_data);
#define _OMC_LIT304 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT304)
#define _OMC_LIT305_data "parameters in SET-S"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT305,19,_OMC_LIT305_data);
#define _OMC_LIT305 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT305)
#define _OMC_LIT306_data "residualVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT306,12,_OMC_LIT306_data);
#define _OMC_LIT306 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT306)
#define _OMC_LIT307_data "remaining variables in setS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT307,27,_OMC_LIT307_data);
#define _OMC_LIT307 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT307)
#define _OMC_LIT308_data "\nequation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT308,9,_OMC_LIT308_data);
#define _OMC_LIT308 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT308)
#define _OMC_LIT309_data "set-C Canonical form"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT309,20,_OMC_LIT309_data);
#define _OMC_LIT309 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT309)
#define _OMC_LIT310_data "remaining equations in Set-S"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT310,28,_OMC_LIT310_data);
#define _OMC_LIT310 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT310)
#define _OMC_LIT311_data "\nend "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT311,5,_OMC_LIT311_data);
#define _OMC_LIT311 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT311)
#define _OMC_LIT312_data " is a boundary condition ---> exit procedure"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT312,44,_OMC_LIT312_data);
#define _OMC_LIT312 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT312)
#define _OMC_LIT313_data "success"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT313,7,_OMC_LIT313_data);
#define _OMC_LIT313 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT313)
#define _OMC_LIT314_data "failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT314,6,_OMC_LIT314_data);
#define _OMC_LIT314 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT314)
#define _OMC_LIT315_data "\nExtract set-S' to compute the boundary conditions\nProcedure is applied on each equation in the failed boundary conditions\n=========================================================================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT315,197,_OMC_LIT315_data);
#define _OMC_LIT315 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT315)
#define _OMC_LIT316_data "\n>>>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT316,4,_OMC_LIT316_data);
#define _OMC_LIT316 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT316)
#define _OMC_LIT317_data "\nProcedure "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT317,11,_OMC_LIT317_data);
#define _OMC_LIT317 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT317)
#define _OMC_LIT318_data "\nExtracting SET-C and SET-S from E-BLT\nProcedure is applied on each equation in the E-BLT\n=========================================================================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT318,164,_OMC_LIT318_data);
#define _OMC_LIT318 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT318)
#define _OMC_LIT319_data ">>>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT319,3,_OMC_LIT319_data);
#define _OMC_LIT319 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT319)
#define _OMC_LIT320_data "\nGenerate Modified Model, For each failed procedure, the equation involving the boundary condition that failed the procedure is replaced by x = 0 where x is the variable of interest of the procedure.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT320,200,_OMC_LIT320_data);
#define _OMC_LIT320 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT320)
#define _OMC_LIT321_data "Equations to remove"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT321,19,_OMC_LIT321_data);
#define _OMC_LIT321 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT321)
#define _OMC_LIT322_data "Equations to add"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT322,16,_OMC_LIT322_data);
#define _OMC_LIT322 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT322)
#define _OMC_LIT323_data "Warning complex equation detected in Set-C"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT323,42,_OMC_LIT323_data);
#define _OMC_LIT323 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT323)
#define _OMC_LIT324_data "Swapping Equations from Set-S"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT324,29,_OMC_LIT324_data);
#define _OMC_LIT324 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT324)
#define _OMC_LIT325_data "\nStart of extraction procedure for boundary conditions\nSet of boundary conditions equations that failed the extraction of set S: ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT325,130,_OMC_LIT325_data);
#define _OMC_LIT325 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT325)
#define _OMC_LIT326_data "\nStart of extraction procedure for unmeasured variables of interest\nSet of equations that failed the extraction of set S and that contain an unmeasured variable of interest: ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT326,175,_OMC_LIT326_data);
#define _OMC_LIT326 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT326)
#define _OMC_LIT327_data "Boundary conditions to be computed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT327,34,_OMC_LIT327_data);
#define _OMC_LIT327 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT327)
#define _OMC_LIT328_data "umeasured variables to be computed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT328,34,_OMC_LIT328_data);
#define _OMC_LIT328 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT328)
#define _OMC_LIT329_data "\nunMeasuredVars               :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT329,31,_OMC_LIT329_data);
#define _OMC_LIT329 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT329)
#define _OMC_LIT330_data "Standard BLT of the original model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT330,34,_OMC_LIT330_data);
#define _OMC_LIT330 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT330)
#define _OMC_LIT331_data "Variables of interest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT331,21,_OMC_LIT331_data);
#define _OMC_LIT331 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT331)
#define _OMC_LIT332_data "unMeasured Variables of interest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT332,32,_OMC_LIT332_data);
#define _OMC_LIT332 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT332)
#define _OMC_LIT333_data "Boundary conditions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT333,19,_OMC_LIT333_data);
#define _OMC_LIT333 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT333)
#define _OMC_LIT334_data "Binding equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT334,17,_OMC_LIT334_data);
#define _OMC_LIT334 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT334)
#define _OMC_LIT335_data "Approximated equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT335,22,_OMC_LIT335_data);
#define _OMC_LIT335 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT335)
#define _OMC_LIT336_data "boundary condition equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT336,28,_OMC_LIT336_data);
#define _OMC_LIT336 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT336)
#define _OMC_LIT337_data "E-BLT: equations that compute the variables of interest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT337,55,_OMC_LIT337_data);
#define _OMC_LIT337 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT337)
#define _OMC_LIT338_data "\nExtraction procedure failed for iteration count: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT338,50,_OMC_LIT338_data);
#define _OMC_LIT338 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT338)
#define _OMC_LIT339_data ", re-running with modified model\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT339,33,_OMC_LIT339_data);
#define _OMC_LIT339 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT339)
#define _OMC_LIT340_data "\nExtraction procedure is successfully completed in iteration count: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT340,68,_OMC_LIT340_data);
#define _OMC_LIT340 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT340)
#define _OMC_LIT341_data "\nFinal set of equations after extraction algorithm\n==========================================================================\nSET_C: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT341,133,_OMC_LIT341_data);
#define _OMC_LIT341 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT341)
#define _OMC_LIT342_data "Unknown variables in SET_S"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT342,26,_OMC_LIT342_data);
#define _OMC_LIT342 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT342)
#define _OMC_LIT343_data "Auxiliary conditions ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT343,22,_OMC_LIT343_data);
#define _OMC_LIT343 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT343)
#define _OMC_LIT344_data "Intermediate equations for measured variables ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT344,47,_OMC_LIT344_data);
#define _OMC_LIT344 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT344)
#define _OMC_LIT345_data "E-BLT: equations in the BLT that compute the unmeasured variables of interest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT345,77,_OMC_LIT345_data);
#define _OMC_LIT345 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT345)
#define _OMC_LIT346_data "Set-SPrime Solved-Variables Information"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT346,39,_OMC_LIT346_data);
#define _OMC_LIT346 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT346)
#define _OMC_LIT347_data "SET_B"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT347,5,_OMC_LIT347_data);
#define _OMC_LIT347 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT347)
#define _OMC_LIT348_data "SET_SPrime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT348,10,_OMC_LIT348_data);
#define _OMC_LIT348 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT348)
#define _OMC_LIT349_data "unmeasured variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT349,20,_OMC_LIT349_data);
#define _OMC_LIT349 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT349)
#define _OMC_LIT350_data "Intermediate vars in set-S'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT350,27,_OMC_LIT350_data);
#define _OMC_LIT350 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT350)
#define _OMC_LIT351_data "Known vars in set-S'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT351,20,_OMC_LIT351_data);
#define _OMC_LIT351 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT351)
#define _OMC_LIT352_data "Param vars in set-S'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT352,20,_OMC_LIT352_data);
#define _OMC_LIT352 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT352)
#define _OMC_LIT353_data "extra vars in set-S'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT353,20,_OMC_LIT353_data);
#define _OMC_LIT353 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT353)
#define _OMC_LIT354_data "Unknown variables in SET_SPrime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT354,31,_OMC_LIT354_data);
#define _OMC_LIT354 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT354)
#define _OMC_LIT355_data "_BoundaryConditionsEquations.html"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT355,33,_OMC_LIT355_data);
#define _OMC_LIT355 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT355)
#define _OMC_LIT356_data "Boundary conditions ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT356,21,_OMC_LIT356_data);
#define _OMC_LIT356 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT356)
#define _OMC_LIT357_data "_BoundaryConditionIntermediateEquations.html"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT357,44,_OMC_LIT357_data);
#define _OMC_LIT357 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT357)
#define _OMC_LIT358_data "Intermediate equations for unmeasured variables  ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT358,50,_OMC_LIT358_data);
#define _OMC_LIT358 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT358)
#define _OMC_LIT359_data "Jacobian_outOtherEquations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT359,26,_OMC_LIT359_data);
#define _OMC_LIT359 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT359)
#define _OMC_LIT360_data "H"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT360,1,_OMC_LIT360_data);
#define _OMC_LIT360 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT360)
#define _OMC_LIT361_data "Final DAE with set-c, set-S and set-SPrime combined"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT361,51,_OMC_LIT361_data);
#define _OMC_LIT361 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT361)
#define _OMC_LIT362_data "Intermediate vars in final DAE updated'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT362,39,_OMC_LIT362_data);
#define _OMC_LIT362 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT362)
#define _OMC_LIT363_data "parameters in final DAE updated"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT363,31,_OMC_LIT363_data);
#define _OMC_LIT363 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT363)
#define _OMC_LIT364_data "FinalOrderedVariables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT364,21,_OMC_LIT364_data);
#define _OMC_LIT364 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT364)
#define _OMC_LIT365_data "FinalOrderedEquation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT365,20,_OMC_LIT365_data);
#define _OMC_LIT365 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT365)
#define _OMC_LIT366_data "FinalGlobalKnownVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT366,20,_OMC_LIT366_data);
#define _OMC_LIT366 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT366)
#define _OMC_LIT367_data "_Correlation_Inputs.csv"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT367,23,_OMC_LIT367_data);
#define _OMC_LIT367 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT367)
#define _OMC_LIT368_data "_BoundaryConditionVars.txt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT368,26,_OMC_LIT368_data);
#define _OMC_LIT368 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT368)
#define _OMC_LIT369_data "/* This is a Reconciled Model which is generated by the State Estimation extraction algorithm */\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT369,97,_OMC_LIT369_data);
#define _OMC_LIT369 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT369)
#define _OMC_LIT370_data "parameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT370,10,_OMC_LIT370_data);
#define _OMC_LIT370 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT370)
#define _OMC_LIT371_data "intermediate variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT371,22,_OMC_LIT371_data);
#define _OMC_LIT371 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT371)
#define _OMC_LIT372_data "residual equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT372,18,_OMC_LIT372_data);
#define _OMC_LIT372 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT372)
#define _OMC_LIT373_data "remaining equations in Set-S'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT373,29,_OMC_LIT373_data);
#define _OMC_LIT373 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT373)
#define _OMC_LIT374_data "\nFinal set of equations after extraction algorithm\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT374,126,_OMC_LIT374_data);
#define _OMC_LIT374 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT374)
#define _OMC_LIT375_data "SET_S'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT375,6,_OMC_LIT375_data);
#define _OMC_LIT375 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT375)
#define _OMC_LIT376_data "Boundary condition Vars'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT376,24,_OMC_LIT376_data);
#define _OMC_LIT376 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT376)
#define _OMC_LIT377_data "Intermediate equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT377,24,_OMC_LIT377_data);
#define _OMC_LIT377 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT377)
#define _OMC_LIT378_data "/* This is a Reconciled Model which is generated by the Boundary condition extraction algorithm */\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT378,99,_OMC_LIT378_data);
#define _OMC_LIT378 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT378)
#define _OMC_LIT379_data "boundary condition Vars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT379,23,_OMC_LIT379_data);
#define _OMC_LIT379 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT379)
#define _OMC_LIT380_data "<html>\n<body>\n<h2> Related boundary conditions ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT380,48,_OMC_LIT380_data);
#define _OMC_LIT380 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT380)
#define _OMC_LIT381_data ") "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT381,2,_OMC_LIT381_data);
#define _OMC_LIT381 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT381)
#define _OMC_LIT382_data "The set of Related boundary conditions are empty."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT382,49,_OMC_LIT382_data);
#define _OMC_LIT382 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT382)
#define _OMC_LIT383_data "_relatedBoundaryConditionsEquations.html"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT383,40,_OMC_LIT383_data);
#define _OMC_LIT383 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT383)
#define _OMC_LIT384_data ": Entry for variable of interest "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT384,33,_OMC_LIT384_data);
#define _OMC_LIT384 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT384)
#define _OMC_LIT385_data " not found in the measurement csv file "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT385,39,_OMC_LIT385_data);
#define _OMC_LIT385 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT385)
#define _OMC_LIT386_data ": Failed to convert the measurement value \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT386,43,_OMC_LIT386_data);
#define _OMC_LIT386 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT386)
#define _OMC_LIT387_data "\" for variable of interest "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT387,27,_OMC_LIT387_data);
#define _OMC_LIT387 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT387)
#define _OMC_LIT388_data " from csv file "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT388,15,_OMC_LIT388_data);
#define _OMC_LIT388 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT388)
#define _OMC_LIT389_data " to a valid Real number for setting start value for data reconciliation initialization."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT389,87,_OMC_LIT389_data);
#define _OMC_LIT389 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT389)
#define _OMC_LIT390_data ": simflags is NONE, expected the simulation flags to be present in shared.info.simflags for reading measurements from csv file for data reconciliation initialization."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT390,166,_OMC_LIT390_data);
#define _OMC_LIT390 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT390)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT391,2,1) {_OMC_LIT390,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT391 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT391)
#define _OMC_LIT392_data ": No csv file provided or failed to read file with -sx flag in simflags."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT392,72,_OMC_LIT392_data);
#define _OMC_LIT392 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT392)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT393,2,1) {_OMC_LIT392,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT393 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT393)
#define _OMC_LIT394_data "modelica://"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT394,11,_OMC_LIT394_data);
#define _OMC_LIT394 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT394)
#define _OMC_LIT395_data "file://"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT395,7,_OMC_LIT395_data);
#define _OMC_LIT395 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT395)
#define _OMC_LIT396_data ": Failed to read csv file content from "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT396,39,_OMC_LIT396_data);
#define _OMC_LIT396 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT396)
#define _OMC_LIT397_data " and hence start values can not be set."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT397,39,_OMC_LIT397_data);
#define _OMC_LIT397 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT397)
#define _OMC_LIT398_data " \f\n\r	\v"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT398,6,_OMC_LIT398_data);
#define _OMC_LIT398 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT398)
#define _OMC_LIT399_data ": No -sx flag found in simflags, hence no csv file will be read for setting start values of the variables of interest for data reconciliation initialization."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT399,157,_OMC_LIT399_data);
#define _OMC_LIT399 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT399)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT400,2,1) {_OMC_LIT399,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT400 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT400)
#define _OMC_LIT401_data "-sx"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT401,3,_OMC_LIT401_data);
#define _OMC_LIT401 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT401)
#define _OMC_LIT402_data "-sx[ 	]*=[ 	]*(\"[^\"]*\"|[^, 	]+)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT402,31,_OMC_LIT402_data);
#define _OMC_LIT402 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT402)
#define _OMC_LIT403_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT403,1,_OMC_LIT403_data);
#define _OMC_LIT403 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT403)
#include "util/modelica.h"

#include "DataReconciliation_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpEquationString(threadData_t *threadData, modelica_metatype _inEquation);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpEquationString,2,0) {(void*) boxptr_DataReconciliation_dumpEquationString,0}};
#define boxvar_DataReconciliation_dumpEquationString MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpEquationString)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_generateCompileTimeHtmlReport(threadData_t *threadData, modelica_metatype _shared, modelica_string _conditions, modelica_string _auxilliaryConditions, modelica_string _varsToReconcile, modelica_metatype _condition1, modelica_metatype _condition2, modelica_string _condition3, modelica_metatype _condition4, modelica_string _condition5, modelica_boolean _boundaryCondition, modelica_boolean _stateEstimation, modelica_integer _setC, modelica_integer _numRelatedBoundaryConditions, modelica_integer _unMeasuredVariables);
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_generateCompileTimeHtmlReport(threadData_t *threadData, modelica_metatype _shared, modelica_metatype _conditions, modelica_metatype _auxilliaryConditions, modelica_metatype _varsToReconcile, modelica_metatype _condition1, modelica_metatype _condition2, modelica_metatype _condition3, modelica_metatype _condition4, modelica_metatype _condition5, modelica_metatype _boundaryCondition, modelica_metatype _stateEstimation, modelica_metatype _setC, modelica_metatype _numRelatedBoundaryConditions, modelica_metatype _unMeasuredVariables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_generateCompileTimeHtmlReport,2,0) {(void*) boxptr_DataReconciliation_generateCompileTimeHtmlReport,0}};
#define boxvar_DataReconciliation_generateCompileTimeHtmlReport MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_generateCompileTimeHtmlReport)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_VerifyDataReconciliation(threadData_t *threadData, modelica_metatype _setc, modelica_metatype _sets, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _mExt, modelica_metatype _solvedvar, modelica_metatype _constantvars, modelica_metatype _approximatedEquations, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _outsetS_vars, modelica_metatype _outsetS_eq, modelica_metatype _shared, modelica_metatype _mappedSetC, modelica_metatype _mappedSetS, modelica_integer _unMeasuredVariablesOfInterest);
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_VerifyDataReconciliation(threadData_t *threadData, modelica_metatype _setc, modelica_metatype _sets, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _mExt, modelica_metatype _solvedvar, modelica_metatype _constantvars, modelica_metatype _approximatedEquations, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _outsetS_vars, modelica_metatype _outsetS_eq, modelica_metatype _shared, modelica_metatype _mappedSetC, modelica_metatype _mappedSetS, modelica_metatype _unMeasuredVariablesOfInterest);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_VerifyDataReconciliation,2,0) {(void*) boxptr_DataReconciliation_VerifyDataReconciliation,0}};
#define boxvar_DataReconciliation_VerifyDataReconciliation MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_VerifyDataReconciliation)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_VerifySetSPrime(threadData_t *threadData, modelica_metatype _boundaryConditionsVars, modelica_metatype _intermediateVars, modelica_metatype _knownVars, modelica_metatype _extraVarsinSetSPrime, modelica_metatype _boundaryConditionsEquations, modelica_metatype _intermediateEquations, modelica_metatype _shared, modelica_integer _auxillaryEquations, modelica_integer _numRelatedBoundaryConditions, modelica_boolean _stateEstimation);
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_VerifySetSPrime(threadData_t *threadData, modelica_metatype _boundaryConditionsVars, modelica_metatype _intermediateVars, modelica_metatype _knownVars, modelica_metatype _extraVarsinSetSPrime, modelica_metatype _boundaryConditionsEquations, modelica_metatype _intermediateEquations, modelica_metatype _shared, modelica_metatype _auxillaryEquations, modelica_metatype _numRelatedBoundaryConditions, modelica_metatype _stateEstimation);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_VerifySetSPrime,2,0) {(void*) boxptr_DataReconciliation_VerifySetSPrime,0}};
#define boxvar_DataReconciliation_VerifySetSPrime MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_VerifySetSPrime)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getKnownOrExactEquationBlocksHelper(threadData_t *threadData, modelica_metatype _blocksVarList, modelica_metatype _targetBlocks, modelica_string _knownOrConstant);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getKnownOrExactEquationBlocksHelper,2,0) {(void*) boxptr_DataReconciliation_getKnownOrExactEquationBlocksHelper,0}};
#define boxvar_DataReconciliation_getKnownOrExactEquationBlocksHelper MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getKnownOrExactEquationBlocksHelper)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedConstant(threadData_t *threadData, modelica_metatype _m);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedConstant(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedConstant,2,0) {(void*) boxptr_DataReconciliation_isEquationTaggedConstant,0}};
#define boxvar_DataReconciliation_isEquationTaggedConstant MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedConstant)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedBoundaryCondition(threadData_t *threadData, modelica_metatype _m);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedBoundaryCondition(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedBoundaryCondition,2,0) {(void*) boxptr_DataReconciliation_isEquationTaggedBoundaryCondition,0}};
#define boxvar_DataReconciliation_isEquationTaggedBoundaryCondition MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedBoundaryCondition)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedApproximated(threadData_t *threadData, modelica_metatype _m);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedApproximated(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedApproximated,2,0) {(void*) boxptr_DataReconciliation_isEquationTaggedApproximated,0}};
#define boxvar_DataReconciliation_isEquationTaggedApproximated MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedApproximated)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData_t *threadData, modelica_metatype _commentIn, modelica_boolean *out_boundaryConditionEquations);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData_t *threadData, modelica_metatype _commentIn, modelica_metatype *out_boundaryConditionEquations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper,2,0) {(void*) boxptr_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper,0}};
#define boxvar_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition(threadData_t *threadData, modelica_metatype _eqn, modelica_boolean *out_boundaryConditionEquations);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype *out_boundaryConditionEquations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition,2,0) {(void*) boxptr_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition,0}};
#define boxvar_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getUncertainRefineAndUnknownVariableIndexes(threadData_t *threadData, modelica_metatype _allVariables, modelica_metatype _variableIndexList, modelica_metatype *out_unknowns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getUncertainRefineAndUnknownVariableIndexes,2,0) {(void*) boxptr_DataReconciliation_getUncertainRefineAndUnknownVariableIndexes,0}};
#define boxvar_DataReconciliation_getUncertainRefineAndUnknownVariableIndexes MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getUncertainRefineAndUnknownVariableIndexes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getVariablesBlockCategories(threadData_t *threadData, modelica_metatype _allVariables, modelica_metatype _variableIndexList, modelica_metatype *out_boundaryConditionVars, modelica_metatype *out_exactEquationVars, modelica_metatype *out_unMeasuredVariablesOfInterest);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getVariablesBlockCategories,2,0) {(void*) boxptr_DataReconciliation_getVariablesBlockCategories,0}};
#define boxvar_DataReconciliation_getVariablesBlockCategories MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getVariablesBlockCategories)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpPredecessorBlocksHelper(threadData_t *threadData, modelica_metatype _predecessorBlockInfo, modelica_string _blockInfo, modelica_string _header);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpPredecessorBlocksHelper,2,0) {(void*) boxptr_DataReconciliation_dumpPredecessorBlocksHelper,0}};
#define boxvar_DataReconciliation_dumpPredecessorBlocksHelper MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpPredecessorBlocksHelper)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpPredecessorBlocks(threadData_t *threadData, modelica_metatype _predecessorBlockInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpPredecessorBlocks,2,0) {(void*) boxptr_DataReconciliation_dumpPredecessorBlocks,0}};
#define boxvar_DataReconciliation_dumpPredecessorBlocks MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpPredecessorBlocks)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpBlockTargets(threadData_t *threadData, modelica_metatype _s_BLTBlockTargetInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpBlockTargets,2,0) {(void*) boxptr_DataReconciliation_dumpBlockTargets,0}};
#define boxvar_DataReconciliation_dumpBlockTargets MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpBlockTargets)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpBlockStatus(threadData_t *threadData, modelica_metatype _allBlocks, modelica_metatype _allBlocksStatusVarInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpBlockStatus,2,0) {(void*) boxptr_DataReconciliation_dumpBlockStatus,0}};
#define boxvar_DataReconciliation_dumpBlockStatus MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpBlockStatus)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpSetSVars(threadData_t *threadData, modelica_metatype _setSVars, modelica_string _heading);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpSetSVars,2,0) {(void*) boxptr_DataReconciliation_dumpSetSVars,0}};
#define boxvar_DataReconciliation_dumpSetSVars MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpSetSVars)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData_t *threadData, modelica_metatype _tempSetS, modelica_metatype _solvedEqsVarInfo, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _orderedVars, modelica_string _heading);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpSetSVarsSolvedInfo,2,0) {(void*) boxptr_DataReconciliation_dumpSetSVarsSolvedInfo,0}};
#define boxvar_DataReconciliation_dumpSetSVarsSolvedInfo MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpSetSVarsSolvedInfo)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpSetSTargetEquations(threadData_t *threadData, modelica_integer _eq, modelica_metatype _solvedEqsVarInfo, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _orderedVars, modelica_string _heading);
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_dumpSetSTargetEquations(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _solvedEqsVarInfo, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _orderedVars, modelica_metatype _heading);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpSetSTargetEquations,2,0) {(void*) boxptr_DataReconciliation_dumpSetSTargetEquations,0}};
#define boxvar_DataReconciliation_dumpSetSTargetEquations MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpSetSTargetEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getAbsoluteIndexHelper(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getAbsoluteIndexHelper,2,0) {(void*) boxptr_DataReconciliation_getAbsoluteIndexHelper,0}};
#define boxvar_DataReconciliation_getAbsoluteIndexHelper MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getAbsoluteIndexHelper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getEquationsFromEBLT(threadData_t *threadData, modelica_integer _eBLTIndex, modelica_metatype _eBLT_Equations);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_getEquationsFromEBLT(threadData_t *threadData, modelica_metatype _eBLTIndex, modelica_metatype _eBLT_Equations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getEquationsFromEBLT,2,0) {(void*) boxptr_DataReconciliation_getEquationsFromEBLT,0}};
#define boxvar_DataReconciliation_getEquationsFromEBLT MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getEquationsFromEBLT)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _sBLT_Equations, modelica_metatype _eBLT_Equations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getEquationsFromSBLTAndEBLT,2,0) {(void*) boxptr_DataReconciliation_getEquationsFromSBLTAndEBLT,0}};
#define boxvar_DataReconciliation_getEquationsFromSBLTAndEBLT MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getEquationsFromSBLTAndEBLT)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getBoundaryConditionVariables(threadData_t *threadData, modelica_metatype _boundaryConditionEquations, modelica_metatype _solvedEqsVarInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getBoundaryConditionVariables,2,0) {(void*) boxptr_DataReconciliation_getBoundaryConditionVariables,0}};
#define boxvar_DataReconciliation_getBoundaryConditionVariables MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getBoundaryConditionVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getExactConstantVariables(threadData_t *threadData, modelica_metatype _constantEquations, modelica_metatype _solvedEqsVarInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getExactConstantVariables,2,0) {(void*) boxptr_DataReconciliation_getExactConstantVariables,0}};
#define boxvar_DataReconciliation_getExactConstantVariables MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getExactConstantVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getUncertainRefineVariablesBindedEquations(threadData_t *threadData, modelica_metatype _adjacencyMatrix, modelica_metatype _knowns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getUncertainRefineVariablesBindedEquations,2,0) {(void*) boxptr_DataReconciliation_getUncertainRefineVariablesBindedEquations,0}};
#define boxvar_DataReconciliation_getUncertainRefineVariablesBindedEquations MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getUncertainRefineVariablesBindedEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getBoundaryConditionsEquationIndex(threadData_t *threadData, modelica_metatype _adjacencyMatrix, modelica_metatype _boundaryConditions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getBoundaryConditionsEquationIndex,2,0) {(void*) boxptr_DataReconciliation_getBoundaryConditionsEquationIndex,0}};
#define boxvar_DataReconciliation_getBoundaryConditionsEquationIndex MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getBoundaryConditionsEquationIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_deleteEquationsFromEqSyst(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _eqIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_deleteEquationsFromEqSyst,2,0) {(void*) boxptr_DataReconciliation_deleteEquationsFromEqSyst,0}};
#define boxvar_DataReconciliation_deleteEquationsFromEqSyst MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_deleteEquationsFromEqSyst)
PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData_t *threadData, modelica_metatype _eqs, modelica_string _comment);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpExtractedEquationsToHTML,2,0) {(void*) boxptr_DataReconciliation_dumpExtractedEquationsToHTML,0}};
#define boxvar_DataReconciliation_dumpExtractedEquationsToHTML MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpExtractedEquationsToHTML)
PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpExtractedEquations(threadData_t *threadData, modelica_string _instring, modelica_metatype _eqs, modelica_string _comment);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpExtractedEquations,2,0) {(void*) boxptr_DataReconciliation_dumpExtractedEquations,0}};
#define boxvar_DataReconciliation_dumpExtractedEquations MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpExtractedEquations)
PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpExtractedVars(threadData_t *threadData, modelica_string _instring, modelica_metatype _invar, modelica_string _comment);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpExtractedVars,2,0) {(void*) boxptr_DataReconciliation_dumpExtractedVars,0}};
#define boxvar_DataReconciliation_dumpExtractedVars MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpExtractedVars)
PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpResidualVars(threadData_t *threadData, modelica_string _instring, modelica_metatype _invar, modelica_string _comment);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpResidualVars,2,0) {(void*) boxptr_DataReconciliation_dumpResidualVars,0}};
#define boxvar_DataReconciliation_dumpResidualVars MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpResidualVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getVariableFirstOccurrenceInEquation(threadData_t *threadData, modelica_metatype _m, modelica_integer _varIndex, modelica_metatype _minimalSetS);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_getVariableFirstOccurrenceInEquation(threadData_t *threadData, modelica_metatype _m, modelica_metatype _varIndex, modelica_metatype _minimalSetS);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getVariableFirstOccurrenceInEquation,2,0) {(void*) boxptr_DataReconciliation_getVariableFirstOccurrenceInEquation,0}};
#define boxvar_DataReconciliation_getVariableFirstOccurrenceInEquation MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getVariableFirstOccurrenceInEquation)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpMininimalExtraction(threadData_t *threadData, modelica_integer _varIndex, modelica_metatype _var, modelica_integer _firstMatchedEquation, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _minimalSetS, modelica_metatype _intermediateVars, modelica_metatype _rest, modelica_metatype _V_EQ, modelica_boolean _falseBlock, modelica_metatype _visitedVars);
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_dumpMininimalExtraction(threadData_t *threadData, modelica_metatype _varIndex, modelica_metatype _var, modelica_metatype _firstMatchedEquation, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _minimalSetS, modelica_metatype _intermediateVars, modelica_metatype _rest, modelica_metatype _V_EQ, modelica_metatype _falseBlock, modelica_metatype _visitedVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpMininimalExtraction,2,0) {(void*) boxptr_DataReconciliation_dumpMininimalExtraction,0}};
#define boxvar_DataReconciliation_dumpMininimalExtraction MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpMininimalExtraction)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_extractMinimalSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunknownsInSetC, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FminimalSetS, modelica_boolean _debug, modelica_metatype *out_minimalSetS);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_extractMinimalSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunknownsInSetC, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FminimalSetS, modelica_metatype _debug, modelica_metatype *out_minimalSetS);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_extractMinimalSetS,2,0) {(void*) boxptr_DataReconciliation_extractMinimalSetS,0}};
#define boxvar_DataReconciliation_extractMinimalSetS MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_extractMinimalSetS)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getSetSAdjacencyMatrix(threadData_t *threadData, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _setS);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getSetSAdjacencyMatrix,2,0) {(void*) boxptr_DataReconciliation_getSetSAdjacencyMatrix,0}};
#define boxvar_DataReconciliation_getSetSAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getSetSAdjacencyMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_extractNewMinimalSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunknownsInSetC, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FminimalSetS, modelica_metatype __omcQ_24in_5FvisitedVars, modelica_metatype _solvedEqsAndVarsInfo, modelica_boolean __omcQ_24in_5Fstatus, modelica_metatype _bindingEquations, modelica_boolean _extractSetCAndSetS, modelica_boolean _debug, modelica_metatype *out_minimalSetS, modelica_metatype *out_visitedVars, modelica_boolean *out_status, modelica_integer *out_boundaryConditionVarIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_extractNewMinimalSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunknownsInSetC, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FminimalSetS, modelica_metatype __omcQ_24in_5FvisitedVars, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype __omcQ_24in_5Fstatus, modelica_metatype _bindingEquations, modelica_metatype _extractSetCAndSetS, modelica_metatype _debug, modelica_metatype *out_minimalSetS, modelica_metatype *out_visitedVars, modelica_metatype *out_status, modelica_metatype *out_boundaryConditionVarIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_extractNewMinimalSetS,2,0) {(void*) boxptr_DataReconciliation_extractNewMinimalSetS,0}};
#define boxvar_DataReconciliation_extractNewMinimalSetS MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_extractNewMinimalSetS)
PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_boolSuccessOrFailed(threadData_t *threadData, modelica_boolean _status);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_boolSuccessOrFailed(threadData_t *threadData, modelica_metatype _status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_boolSuccessOrFailed,2,0) {(void*) boxptr_DataReconciliation_boolSuccessOrFailed,0}};
#define boxvar_DataReconciliation_boolSuccessOrFailed MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_boolSuccessOrFailed)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_boundaryConditionVarExist(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_integer _boundaryConditionVarIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_boundaryConditionVarExist(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _boundaryConditionVarIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_boundaryConditionVarExist,2,0) {(void*) boxptr_DataReconciliation_boundaryConditionVarExist,0}};
#define boxvar_DataReconciliation_boundaryConditionVarExist MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_boundaryConditionVarExist)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_ExtractSetSPrime(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _bindingEquations, modelica_boolean _debug, modelica_metatype *out_finalSetS, modelica_metatype *out_failedboundaryConditionEquations, modelica_metatype *out_failedboundaryConditionVars, modelica_boolean *out_outStatus);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_ExtractSetSPrime(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _bindingEquations, modelica_metatype _debug, modelica_metatype *out_finalSetS, modelica_metatype *out_failedboundaryConditionEquations, modelica_metatype *out_failedboundaryConditionVars, modelica_metatype *out_outStatus);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_ExtractSetSPrime,2,0) {(void*) boxptr_DataReconciliation_ExtractSetSPrime,0}};
#define boxvar_DataReconciliation_ExtractSetSPrime MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_ExtractSetSPrime)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_traverseEBLTAndExtractSetCAndSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _ebltEquations, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _solvedEqsAndVarsInfo, modelica_boolean _debug, modelica_metatype __omcQ_24in_5FsetBFailedBoundaryConditionEquations, modelica_metatype _bindingEquations, modelica_metatype *out_finalSetS, modelica_metatype *out_mappedEbltSetS, modelica_boolean *out_outStatus, modelica_metatype *out_setBFailedBoundaryConditionEquations);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_traverseEBLTAndExtractSetCAndSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _ebltEquations, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _debug, modelica_metatype __omcQ_24in_5FsetBFailedBoundaryConditionEquations, modelica_metatype _bindingEquations, modelica_metatype *out_finalSetS, modelica_metatype *out_mappedEbltSetS, modelica_metatype *out_outStatus, modelica_metatype *out_setBFailedBoundaryConditionEquations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_traverseEBLTAndExtractSetCAndSetS,2,0) {(void*) boxptr_DataReconciliation_traverseEBLTAndExtractSetCAndSetS,0}};
#define boxvar_DataReconciliation_traverseEBLTAndExtractSetCAndSetS MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_traverseEBLTAndExtractSetCAndSetS)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_swapComplexEquationsInSetC(threadData_t *threadData, modelica_metatype __omcQ_24in_5FebltEqsLst, modelica_metatype __omcQ_24in_5FtempSetS, modelica_metatype _mappedEbltSetS, modelica_metatype _currentSystem, modelica_metatype _mapIncRowEqn, modelica_metatype *out_tempSetS, modelica_metatype *out_complexEquationList, modelica_metatype *out_swappedEquationList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_swapComplexEquationsInSetC,2,0) {(void*) boxptr_DataReconciliation_swapComplexEquationsInSetC,0}};
#define boxvar_DataReconciliation_swapComplexEquationsInSetC MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_swapComplexEquationsInSetC)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getBindingEquation(threadData_t *threadData, modelica_metatype _currentSystem, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getBindingEquation,2,0) {(void*) boxptr_DataReconciliation_getBindingEquation,0}};
#define boxvar_DataReconciliation_getBindingEquation MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getBindingEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getEBLTEquations(threadData_t *threadData, modelica_metatype _knowns, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _mapIncRowEqn, modelica_metatype _currentSystem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_getEBLTEquations,2,0) {(void*) boxptr_DataReconciliation_getEBLTEquations,0}};
#define boxvar_DataReconciliation_getEBLTEquations MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_getEBLTEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_addUnmeasuredEquationtoBoundaryConditionEquationAndVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5FsetBFailedBoundaryConditionEquations, modelica_metatype _orderedVars, modelica_metatype _unMeasuredEqsLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_addUnmeasuredEquationtoBoundaryConditionEquationAndVars,2,0) {(void*) boxptr_DataReconciliation_addUnmeasuredEquationtoBoundaryConditionEquationAndVars,0}};
#define boxvar_DataReconciliation_addUnmeasuredEquationtoBoundaryConditionEquationAndVars MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_addUnmeasuredEquationtoBoundaryConditionEquationAndVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_prepareUnmeasuredVariablesEquations(threadData_t *threadData, modelica_metatype _unMeasuredEqsLst, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _orderedEqs, modelica_metatype _orderedVars, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FsetBFailedBoundaryConditionEquations, modelica_metatype *out_failedboundaryConditionEquationIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_prepareUnmeasuredVariablesEquations,2,0) {(void*) boxptr_DataReconciliation_prepareUnmeasuredVariablesEquations,0}};
#define boxvar_DataReconciliation_prepareUnmeasuredVariablesEquations MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_prepareUnmeasuredVariablesEquations)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _orderedVars, modelica_metatype _unmeasuredVariables, modelica_boolean _stateEstimation);
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _orderedVars, modelica_metatype _unmeasuredVariables, modelica_metatype _stateEstimation);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars,2,0) {(void*) boxptr_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars,0}};
#define boxvar_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isBoundaryConditionVars(threadData_t *threadData, modelica_metatype _setSVars, modelica_metatype _boundaryConditionsVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isBoundaryConditionVars(threadData_t *threadData, modelica_metatype _setSVars, modelica_metatype _boundaryConditionsVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_isBoundaryConditionVars,2,0) {(void*) boxptr_DataReconciliation_isBoundaryConditionVars,0}};
#define boxvar_DataReconciliation_isBoundaryConditionVars MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_isBoundaryConditionVars)
PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpRelatedBoundaryConditionsEquations(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_string _fileNamePrefix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpRelatedBoundaryConditionsEquations,2,0) {(void*) boxptr_DataReconciliation_dumpRelatedBoundaryConditionsEquations,0}};
#define boxvar_DataReconciliation_dumpRelatedBoundaryConditionsEquations MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_dumpRelatedBoundaryConditionsEquations)
PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_checkVarExistenceInMeasurementData(threadData_t *threadData, modelica_metatype _var, modelica_metatype _measurementData, modelica_boolean *out_exists);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_checkVarExistenceInMeasurementData(threadData_t *threadData, modelica_metatype _var, modelica_metatype _measurementData, modelica_metatype *out_exists);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_checkVarExistenceInMeasurementData,2,0) {(void*) boxptr_DataReconciliation_checkVarExistenceInMeasurementData,0}};
#define boxvar_DataReconciliation_checkVarExistenceInMeasurementData MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_checkVarExistenceInMeasurementData)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_setStartValuesToMeasurements(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _measurementData, modelica_string _csvFileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_setStartValuesToMeasurements,2,0) {(void*) boxptr_DataReconciliation_setStartValuesToMeasurements,0}};
#define boxvar_DataReconciliation_setStartValuesToMeasurements MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_setStartValuesToMeasurements)
PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_readMeasurementsFromCSV(threadData_t *threadData, modelica_metatype _shared, modelica_metatype *out_measurementData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DataReconciliation_readMeasurementsFromCSV,2,0) {(void*) boxptr_DataReconciliation_readMeasurementsFromCSV,0}};
#define boxvar_DataReconciliation_readMeasurementsFromCSV MMC_REFSTRUCTLIT(boxvar_lit_DataReconciliation_readMeasurementsFromCSV)

PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpEquationString(threadData_t *threadData, modelica_metatype _inEquation)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEquation;
    {
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      modelica_string _s3 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _start = NULL;
      modelica_metatype _stop = NULL;
      modelica_metatype _iter = NULL;
      modelica_metatype _expl = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _weqn = NULL;
      modelica_metatype _alg = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _eqnstrue = NULL;
      modelica_metatype _eqnsfalse = NULL;
      modelica_metatype _eqns = NULL;
      int tmp4;
      // _s1 has no default value.
      // _s2 has no default value.
      // _s3 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e has no default value.
      // _start has no default value.
      // _stop has no default value.
      // _iter has no default value.
      // _expl has no default value.
      // _cr has no default value.
      // _eqn has no default value.
      // _weqn has no default value.
      // _alg has no default value.
      // _source has no default value.
      // _eqnstrue has no default value.
      // _eqnsfalse has no default value.
      // _eqns has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _e1 = tmpMeta5;
          _e2 = tmpMeta6;
          /* Pattern matching succeeded */
          omc_string_store(&(_s1), omc_ExpressionDump_printExp2Str(threadData, _e1, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));

          omc_string_store(&(_s2), omc_ExpressionDump_printExp2Str(threadData, _e2, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));
          tmpMeta7 = mmc_mk_cons(_s1, mmc_mk_cons(_OMC_LIT1, mmc_mk_cons(_s2, MMC_REFSTRUCTLIT(mmc_nil))));
          tmp1 = stringAppendList(tmpMeta7);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 4);
          
          _e1 = tmpMeta8;
          _e2 = tmpMeta9;
          /* Pattern matching succeeded */
          omc_string_store(&(_s1), omc_ExpressionDump_printExp2Str(threadData, _e1, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));

          omc_string_store(&(_s2), omc_ExpressionDump_printExp2Str(threadData, _e2, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));
          tmpMeta10 = mmc_mk_cons(_s1, mmc_mk_cons(_OMC_LIT1, mmc_mk_cons(_s2, MMC_REFSTRUCTLIT(mmc_nil))));
          tmp1 = stringAppendList(tmpMeta10);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 4);
          
          _e1 = tmpMeta11;
          _e2 = tmpMeta12;
          /* Pattern matching succeeded */
          omc_string_store(&(_s1), omc_ExpressionDump_printExp2Str(threadData, _e1, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));

          omc_string_store(&(_s2), omc_ExpressionDump_printExp2Str(threadData, _e2, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));
          tmpMeta13 = mmc_mk_cons(_s1, mmc_mk_cons(_OMC_LIT1, mmc_mk_cons(_s2, MMC_REFSTRUCTLIT(mmc_nil))));
          tmp1 = stringAppendList(tmpMeta13);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta15 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _cr = tmpMeta14;
          _e2 = tmpMeta15;
          /* Pattern matching succeeded */
          omc_string_store(&(_s1), omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr));

          omc_string_store(&(_s1), omc_System_stringReplace(threadData, _s1, _OMC_LIT2, _OMC_LIT3));

          omc_string_store(&(_s1), omc_System_stringReplace(threadData, _s1, _OMC_LIT4, _OMC_LIT0));

          omc_string_store(&(_s2), omc_ExpressionDump_printExp2Str(threadData, _e2, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));
          tmpMeta16 = mmc_mk_cons(_s1, mmc_mk_cons(_OMC_LIT1, mmc_mk_cons(_s2, MMC_REFSTRUCTLIT(mmc_nil))));
          tmp1 = stringAppendList(tmpMeta16);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          tmpMeta17 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _weqn = tmpMeta17;
          /* Pattern matching succeeded */
          tmp1 = omc_BackendDump_whenEquationString(threadData, _weqn, 1 /* true */);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta18;
          modelica_string tmp19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta18 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _e = tmpMeta18;
          /* Pattern matching succeeded */
          omc_string_store(&(_s1), omc_ExpressionDump_printExp2Str(threadData, _e, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));
          tmp19 = stringAppend(_s1,_OMC_LIT5);
          tmp1 = tmp19;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta20 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta21 = OMC_BOX_FIELD(tmp4_1, 4);
          
          _alg = tmpMeta20;
          _source = tmpMeta21;
          /* Pattern matching succeeded */
          tmpMeta23 = omc_mk_box3(19, &DAE_Element_ALGORITHM__desc, _alg, _source);
          tmpMeta22 = mmc_mk_cons(tmpMeta23, MMC_REFSTRUCTLIT(mmc_nil));
          tmp1 = omc_DAEDump_dumpAlgorithmsStr(threadData, tmpMeta22);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          tmpMeta24 = OMC_BOX_FIELD(tmp4_1, 2);
          if (listEmpty(tmpMeta24)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          tmpMeta27 = OMC_BOX_FIELD(tmp4_1, 3);
          if (listEmpty(tmpMeta27)) goto tmp3_end;
          tmpMeta28 = MMC_CAR(tmpMeta27);
          tmpMeta29 = MMC_CDR(tmpMeta27);
          tmpMeta30 = OMC_BOX_FIELD(tmp4_1, 4);
          
          _e1 = tmpMeta25;
          _expl = tmpMeta26;
          _eqns = tmpMeta28;
          _eqnstrue = tmpMeta29;
          _eqnsfalse = tmpMeta30;
          /* Pattern matching succeeded */
          omc_string_store(&(_s1), omc_ExpressionDump_printExp2Str(threadData, _e1, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));

          omc_string_store(&(_s2), stringDelimitList(omc_List_map(threadData, _eqns, boxvar_DataReconciliation_dumpEquationString), _OMC_LIT6));

          tmpMeta31 = mmc_mk_cons(_OMC_LIT7, mmc_mk_cons(_s1, mmc_mk_cons(_OMC_LIT8, mmc_mk_cons(_s2, MMC_REFSTRUCTLIT(mmc_nil)))));
          omc_string_store(&(_s3), stringAppendList(tmpMeta31));
          tmp1 = omc_BackendDump_ifequationString(threadData, _expl, _eqnstrue, _eqnsfalse, _s3);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_string tmp36;
          modelica_string tmp37;
          modelica_string tmp38;
          modelica_string tmp39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,6) == 0) goto tmp3_end;
          tmpMeta32 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta33 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta34 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta35 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _iter = tmpMeta32;
          _start = tmpMeta33;
          _stop = tmpMeta34;
          _eqn = tmpMeta35;
          /* Pattern matching succeeded */
          tmp36 = stringAppend(omc_ExpressionDump_printExp2Str(threadData, _iter, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()),_OMC_LIT9);
          tmp37 = stringAppend(tmp36,omc_ExpressionDump_printExp2Str(threadData, _start, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));
          tmp38 = stringAppend(tmp37,_OMC_LIT10);
          tmp39 = stringAppend(tmp38,omc_ExpressionDump_printExp2Str(threadData, _stop, _OMC_LIT0, mmc_mk_none(), mmc_mk_none()));
          omc_string_store(&(_s1), tmp39);

          omc_string_store(&(_s2), omc_DataReconciliation_dumpEquationString(threadData, _eqn));
          tmpMeta40 = mmc_mk_cons(_OMC_LIT11, mmc_mk_cons(_s1, mmc_mk_cons(_OMC_LIT12, mmc_mk_cons(_s2, mmc_mk_cons(_OMC_LIT13, MMC_REFSTRUCTLIT(mmc_nil))))));
          tmp1 = stringAppendList(tmpMeta40);
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
  omc_string_store(&(_outString), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_DataReconciliation_dumpNonReconciledVars(threadData_t *threadData, modelica_metatype _invar)
{
  modelica_string _outstring = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outstring = _OMC_LIT0;
  // _cr has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta1 = _invar; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      _cr = omc_BackendVariable_varCref(threadData, _i);

      tmp2 = stringAppend(_outstring,omc_ComponentReference_crefStr(threadData, _cr));
      tmp3 = stringAppend(tmp2,_OMC_LIT14);
      omc_string_store(&(_outstring), tmp3);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_DataReconciliation_dumpCorrelationVarsToCsv(threadData_t *threadData, modelica_metatype _invar)
{
  modelica_string _outstring = NULL;
  modelica_metatype _cr = NULL;
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outstring = _OMC_LIT0;
  // _cr has no default value.
  _str = _OMC_LIT15;
  {
    modelica_metatype _i;
    for (tmpMeta1 = _invar; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      _cr = omc_BackendVariable_varCref(threadData, _i);

      tmp2 = stringAppend(_outstring,omc_ComponentReference_crefStr(threadData, _cr));
      tmp3 = stringAppend(tmp2,_OMC_LIT16);
      omc_string_store(&(_outstring), tmp3);
    }
  }

  tmp5 = stringAppend(_str,_outstring);
  omc_string_store(&(_outstring), tmp5);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_DataReconciliation_dumpToCsv(threadData_t *threadData, modelica_string _instring, modelica_metatype _invar)
{
  modelica_string _outstring = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outstring = _OMC_LIT0;
  // _cr has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta1 = _invar; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      _cr = omc_BackendVariable_varCref(threadData, _i);

      tmp2 = stringAppend(_outstring,omc_ComponentReference_crefStr(threadData, _cr));
      tmp3 = stringAppend(tmp2,_OMC_LIT14);
      omc_string_store(&(_outstring), tmp3);
    }
  }

  tmp5 = stringAppend(_instring,_outstring);
  omc_string_store(&(_outstring), tmp5);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getVariableOccurence(threadData_t *threadData, modelica_metatype _setCOrSetS, modelica_metatype _mext, modelica_metatype _knowns, modelica_metatype *out_unknownvariables)
{
  modelica_metatype _knownvariables = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _unknownvariables = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _vars = NULL;
  modelica_integer _eq;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _knownvariables = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _unknownvariables = tmpMeta2;
  // _vars has no default value.
  // _eq has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _setCOrSetS; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      {
        modelica_metatype _j;
        for (tmpMeta4 = _mext; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
        {
          _j = MMC_CAR(tmpMeta4);
          /* Pattern-matching assignment */
          tmpMeta5 = _j;
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta5, 2);
          _eq = tmp7  /* pattern as ty=Integer */;
          _vars = tmpMeta8;

          if((omc_unbox_integer(_i) == _eq))
          {
            {
              modelica_metatype _var;
              for (tmpMeta9 = _vars; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
              {
                _var = MMC_CAR(tmpMeta9);
                if(listMember(_var, _knowns))
                {
                  tmpMeta10 = mmc_mk_cons(_var, _knownvariables);
                  _knownvariables = tmpMeta10;
                }
                else
                {
                  tmpMeta11 = mmc_mk_cons(_var, _unknownvariables);
                  _unknownvariables = tmpMeta11;
                }
              }
            }
          }
        }
      }
    }
  }

  _knownvariables = omc_List_unique(threadData, _knownvariables);

  _unknownvariables = omc_List_unique(threadData, _unknownvariables);
  _return: OMC_LABEL_UNUSED
  if (out_unknownvariables) { *out_unknownvariables = _unknownvariables; }
  omc_ret_ = _knownvariables;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_generateCompileTimeHtmlReport(threadData_t *threadData, modelica_metatype _shared, modelica_string _conditions, modelica_string _auxilliaryConditions, modelica_string _varsToReconcile, modelica_metatype _condition1, modelica_metatype _condition2, modelica_string _condition3, modelica_metatype _condition4, modelica_string _condition5, modelica_boolean _boundaryCondition, modelica_boolean _stateEstimation, modelica_integer _setC, modelica_integer _numRelatedBoundaryConditions, modelica_integer _unMeasuredVariables)
{
  modelica_string _data = NULL;
  modelica_string _condition1_msg = NULL;
  modelica_string _condition4_msg = NULL;
  modelica_metatype _condition1_eqs = NULL;
  modelica_metatype _condition4_vars = NULL;
  modelica_string tmp1;
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
  modelica_string tmp52;
  modelica_string tmp53;
  modelica_string tmp54;
  modelica_string tmp55;
  modelica_metatype tmpMeta56;
  modelica_metatype tmpMeta57;
  modelica_metatype tmpMeta58;
  modelica_string tmp59;
  modelica_string tmp60;
  modelica_string tmp61;
  modelica_metatype tmpMeta62;
  modelica_string tmp63;
  modelica_string tmp64;
  modelica_string tmp65;
  modelica_string tmp66;
  modelica_metatype tmpMeta67;
  modelica_string tmp68;
  modelica_string tmp69;
  modelica_string tmp70;
  modelica_string tmp71;
  modelica_metatype tmpMeta72;
  modelica_metatype tmpMeta73;
  modelica_metatype tmpMeta74;
  modelica_string tmp75;
  modelica_string tmp76;
  modelica_string tmp77;
  modelica_metatype tmpMeta78;
  modelica_string tmp79;
  modelica_string tmp80;
  modelica_string tmp81;
  modelica_metatype tmpMeta82;
  modelica_string tmp83;
  modelica_string tmp84;
  modelica_string tmp85;
  modelica_string tmp86;
  modelica_string tmp87;
  modelica_string tmp88;
  modelica_string tmp89;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _data has no default value.
  // _condition1_msg has no default value.
  // _condition4_msg has no default value.
  // _condition1_eqs has no default value.
  // _condition4_vars has no default value.
  if(_boundaryCondition)
  {
    omc_string_store(&(_data), _OMC_LIT19);
  }
  else
  {
    omc_string_store(&(_data), _OMC_LIT18);
  }

  tmp1 = stringAppend(_data,_OMC_LIT20);
  omc_string_store(&(_data), tmp1);

  tmp2 = stringAppend(_data,_OMC_LIT21);
  tmp3 = stringAppend(tmp2,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
  tmp4 = stringAppend(tmp3,_OMC_LIT22);
  tmp5 = stringAppend(tmp4,_OMC_LIT23);
  omc_string_store(&(_data), tmp5);

  tmp6 = stringAppend(_data,_OMC_LIT24);
  omc_string_store(&(_data), tmp6);

  tmp7 = stringAppend(_data,_OMC_LIT21);
  tmp8 = stringAppend(tmp7,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
  tmp9 = stringAppend(tmp8,_OMC_LIT23);
  omc_string_store(&(_data), tmp9);

  tmp10 = stringAppend(_data,_OMC_LIT25);
  omc_string_store(&(_data), tmp10);

  tmp11 = stringAppend(_data,_OMC_LIT21);
  tmp12 = stringAppend(tmp11,omc_System_getCurrentTimeStr(threadData));
  tmp13 = stringAppend(tmp12,_OMC_LIT26);
  tmp14 = stringAppend(tmp13,omc_Settings_getVersionNr(threadData));
  tmp15 = stringAppend(tmp14,_OMC_LIT27);
  tmp16 = stringAppend(tmp15,_OMC_LIT28);
  omc_string_store(&(_data), tmp16);

  tmp17 = stringAppend(_data,_OMC_LIT29);
  omc_string_store(&(_data), tmp17);

  if(_boundaryCondition)
  {
    tmp18 = stringAppend(_data,_OMC_LIT35);
    tmp19 = stringAppend(tmp18,_auxilliaryConditions);
    tmp20 = stringAppend(tmp19,_OMC_LIT23);
    omc_string_store(&(_data), tmp20);

    tmp21 = stringAppend(_data,_OMC_LIT31);
    tmp22 = stringAppend(tmp21,_varsToReconcile);
    tmp23 = stringAppend(tmp22,_OMC_LIT34);
    omc_string_store(&(_data), tmp23);
  }
  else
  {
    tmp24 = stringAppend(_data,_OMC_LIT30);
    tmp25 = stringAppend(tmp24,intString(_setC));
    tmp26 = stringAppend(tmp25,_OMC_LIT23);
    omc_string_store(&(_data), tmp26);

    tmp27 = stringAppend(_data,_OMC_LIT31);
    tmp28 = stringAppend(tmp27,_varsToReconcile);
    tmp29 = stringAppend(tmp28,_OMC_LIT23);
    omc_string_store(&(_data), tmp29);

    tmp30 = stringAppend(_data,_OMC_LIT32);
    tmp31 = stringAppend(tmp30,intString(_unMeasuredVariables));
    tmp32 = stringAppend(tmp31,_OMC_LIT23);
    omc_string_store(&(_data), tmp32);

    tmp33 = stringAppend(_data,_OMC_LIT33);
    tmp34 = stringAppend(tmp33,intString(_numRelatedBoundaryConditions));
    tmp35 = stringAppend(tmp34,_OMC_LIT34);
    omc_string_store(&(_data), tmp35);
  }

  if(_boundaryCondition)
  {
    tmp36 = stringAppend(_data,_OMC_LIT36);
    tmp37 = stringAppend(tmp36,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
    tmp38 = stringAppend(tmp37,_OMC_LIT38);
    omc_string_store(&(_data), tmp38);

    tmp39 = stringAppend(_data,_OMC_LIT36);
    tmp40 = stringAppend(tmp39,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
    tmp41 = stringAppend(tmp40,_OMC_LIT40);
    omc_string_store(&(_data), tmp41);
  }
  else
  {
    tmp42 = stringAppend(_data,_OMC_LIT36);
    tmp43 = stringAppend(tmp42,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
    tmp44 = stringAppend(tmp43,_OMC_LIT37);
    omc_string_store(&(_data), tmp44);

    if((_numRelatedBoundaryConditions > ((modelica_integer) 0)))
    {
      tmp45 = stringAppend(_data,_OMC_LIT36);
      tmp46 = stringAppend(tmp45,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
      tmp47 = stringAppend(tmp46,_OMC_LIT38);
      omc_string_store(&(_data), tmp47);

      tmp48 = stringAppend(_data,_OMC_LIT36);
      tmp49 = stringAppend(tmp48,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
      tmp50 = stringAppend(tmp49,_OMC_LIT39);
      omc_string_store(&(_data), tmp50);
    }
  }

  tmp51 = stringAppend(_data,_OMC_LIT41);
  tmp52 = stringAppend(tmp51,_OMC_LIT42);
  tmp53 = stringAppend(tmp52,_conditions);
  tmp54 = stringAppend(tmp53,_OMC_LIT43);
  tmp55 = stringAppend(tmp54,_OMC_LIT14);
  omc_string_store(&(_data), tmp55);

  /* Pattern-matching assignment */
  tmpMeta56 = _condition1;
  tmpMeta57 = OMC_BOX_FIELD(tmpMeta56, 1);
  tmpMeta58 = OMC_BOX_FIELD(tmpMeta56, 2);
  _condition1_msg = tmpMeta57;
  _condition1_eqs = tmpMeta58;

  if((!listEmpty(_condition1_eqs)))
  {
    tmp59 = stringAppend(_data,_OMC_LIT44);
    tmp60 = stringAppend(tmp59,_condition1_msg);
    tmp61 = stringAppend(tmp60,_OMC_LIT45);
    omc_string_store(&(_data), tmp61);

    {
      modelica_metatype _eq;
      for (tmpMeta62 = _condition1_eqs; !listEmpty(tmpMeta62); tmpMeta62=MMC_CDR(tmpMeta62))
      {
        _eq = MMC_CAR(tmpMeta62);
        tmp63 = stringAppend(_data,_OMC_LIT14);
        tmp64 = stringAppend(tmp63,_OMC_LIT46);
        tmp65 = stringAppend(tmp64,omc_BackendDump_equationString(threadData, _eq));
        tmp66 = stringAppend(tmp65,_OMC_LIT47);
        omc_string_store(&(_data), tmp66);
      }
    }

    tmp68 = stringAppend(_data,_OMC_LIT48);
    omc_string_store(&(_data), tmp68);
  }

  if((!(stringLength(_condition3) == ((modelica_integer) 0))))
  {
    tmp69 = stringAppend(_data,_OMC_LIT44);
    tmp70 = stringAppend(tmp69,_condition3);
    tmp71 = stringAppend(tmp70,_OMC_LIT43);
    omc_string_store(&(_data), tmp71);
  }

  /* Pattern-matching assignment */
  tmpMeta72 = _condition4;
  tmpMeta73 = OMC_BOX_FIELD(tmpMeta72, 1);
  tmpMeta74 = OMC_BOX_FIELD(tmpMeta72, 2);
  _condition4_msg = tmpMeta73;
  _condition4_vars = tmpMeta74;

  if((!listEmpty(_condition4_vars)))
  {
    tmp75 = stringAppend(_data,_OMC_LIT44);
    tmp76 = stringAppend(tmp75,_condition4_msg);
    tmp77 = stringAppend(tmp76,_OMC_LIT45);
    omc_string_store(&(_data), tmp77);

    {
      modelica_metatype _var;
      for (tmpMeta78 = _condition4_vars; !listEmpty(tmpMeta78); tmpMeta78=MMC_CDR(tmpMeta78))
      {
        _var = MMC_CAR(tmpMeta78);
        tmp79 = stringAppend(_data,_OMC_LIT49);
        tmp80 = stringAppend(tmp79,omc_BackendDump_varStringShort(threadData, _var));
        tmp81 = stringAppend(tmp80,_OMC_LIT50);
        omc_string_store(&(_data), tmp81);
      }
    }

    tmp83 = stringAppend(_data,_OMC_LIT51);
    omc_string_store(&(_data), tmp83);
  }

  if((!(stringLength(_condition5) == ((modelica_integer) 0))))
  {
    tmp84 = stringAppend(_data,_OMC_LIT44);
    tmp85 = stringAppend(tmp84,_condition5);
    tmp86 = stringAppend(tmp85,_OMC_LIT43);
    omc_string_store(&(_data), tmp86);
  }

  tmp87 = stringAppend(_data,_OMC_LIT52);
  omc_string_store(&(_data), tmp87);

  if(_boundaryCondition)
  {
    tmp88 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT54);
    omc_System_writeFile(threadData, tmp88, _data);
  }
  else
  {
    tmp89 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT53);
    omc_System_writeFile(threadData, tmp89, _data);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_generateCompileTimeHtmlReport(threadData_t *threadData, modelica_metatype _shared, modelica_metatype _conditions, modelica_metatype _auxilliaryConditions, modelica_metatype _varsToReconcile, modelica_metatype _condition1, modelica_metatype _condition2, modelica_metatype _condition3, modelica_metatype _condition4, modelica_metatype _condition5, modelica_metatype _boundaryCondition, modelica_metatype _stateEstimation, modelica_metatype _setC, modelica_metatype _numRelatedBoundaryConditions, modelica_metatype _unMeasuredVariables)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  tmp1 = omc_unbox_integer(_boundaryCondition);
  tmp2 = omc_unbox_integer(_stateEstimation);
  tmp3 = omc_unbox_integer(_setC);
  tmp4 = omc_unbox_integer(_numRelatedBoundaryConditions);
  tmp5 = omc_unbox_integer(_unMeasuredVariables);
  omc_DataReconciliation_generateCompileTimeHtmlReport(threadData, _shared, _conditions, _auxilliaryConditions, _varsToReconcile, _condition1, _condition2, _condition3, _condition4, _condition5, tmp1, tmp2, tmp3, tmp4, tmp5);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_VerifyDataReconciliation(threadData_t *threadData, modelica_metatype _setc, modelica_metatype _sets, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _mExt, modelica_metatype _solvedvar, modelica_metatype _constantvars, modelica_metatype _approximatedEquations, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _outsetS_vars, modelica_metatype _outsetS_eq, modelica_metatype _shared, modelica_metatype _mappedSetC, modelica_metatype _mappedSetS, modelica_integer _unMeasuredVariablesOfInterest)
{
  modelica_metatype _matchedeq = NULL;
  modelica_metatype _matchedknownssetc = NULL;
  modelica_metatype _matchedunknownssetc = NULL;
  modelica_metatype _matchedknownssets = NULL;
  modelica_metatype _matchedunknownssets = NULL;
  modelica_metatype _tmplist1 = NULL;
  modelica_metatype _tmplist2 = NULL;
  modelica_metatype _tmplist3 = NULL;
  modelica_metatype _tmplist1sets = NULL;
  modelica_metatype _tmplistvar1 = NULL;
  modelica_metatype _tmplistvar2 = NULL;
  modelica_metatype _tmplistvar3 = NULL;
  modelica_string _str = NULL;
  modelica_string _resstr = NULL;
  modelica_string _condition1 = NULL;
  modelica_string _condition2 = NULL;
  modelica_string _condition3 = NULL;
  modelica_string _condition4 = NULL;
  modelica_string _condition5 = NULL;
  modelica_string _auxilliaryConditions = NULL;
  modelica_string _varsToReconcile = NULL;
  modelica_metatype _var = NULL;
  modelica_boolean _rule2;
  modelica_metatype _condition1_eqs = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
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
  modelica_string tmp32;
  modelica_string tmp33;
  modelica_string tmp34;
  modelica_string tmp35;
  modelica_string tmp36;
  modelica_string tmp37;
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
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
  modelica_string tmp52;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matchedeq has no default value.
  // _matchedknownssetc has no default value.
  // _matchedunknownssetc has no default value.
  // _matchedknownssets has no default value.
  // _matchedunknownssets has no default value.
  // _tmplist1 has no default value.
  // _tmplist2 has no default value.
  // _tmplist3 has no default value.
  // _tmplist1sets has no default value.
  // _tmplistvar1 has no default value.
  // _tmplistvar2 has no default value.
  // _tmplistvar3 has no default value.
  // _str has no default value.
  // _resstr has no default value.
  // _condition1 has no default value.
  // _condition2 has no default value.
  // _condition3 has no default value.
  // _condition4 has no default value.
  // _condition5 has no default value.
  // _auxilliaryConditions has no default value.
  // _varsToReconcile has no default value.
  // _var has no default value.
  _rule2 = 1 /* true */;
  // _condition1_eqs has no default value.
  fputs(omc_string_data(_OMC_LIT55),stdout);

  _var = omc_List_map1r(threadData, listReverse(_knowns), boxvar_BackendVariable_getVarAt, _allVars);

  tmp1 = stringAppend(_OMC_LIT56,omc_DataReconciliation_dumplistInteger(threadData, listReverse(_knowns)));
  omc_BackendDump_dumpVarList(threadData, _var, tmp1);

  tmp2 = stringAppend(_OMC_LIT57,omc_DataReconciliation_dumplistInteger(threadData, _mappedSetC));
  tmp3 = stringAppend(tmp2,_OMC_LIT14);
  tmp4 = stringAppend(tmp3,_OMC_LIT58);
  tmp5 = stringAppend(tmp4,omc_DataReconciliation_dumplistInteger(threadData, _mappedSetS));
  tmp6 = stringAppend(tmp5,_OMC_LIT59);
  fputs(omc_string_data(tmp6),stdout);

  omc_string_store(&(_auxilliaryConditions), intString(listLength(_mappedSetC)));

  omc_string_store(&(_varsToReconcile), intString(listLength(_knowns)));

  omc_string_store(&(_condition1), _OMC_LIT60);

  tmp7 = stringAppend(_condition1,_OMC_LIT14);
  tmp8 = stringAppend(tmp7,_OMC_LIT61);
  tmp9 = stringAppend(tmp8,_OMC_LIT14);
  fputs(omc_string_data(tmp9),stdout);

  _matchedeq = omc_List_intersectionOnTrue(threadData, _mappedSetC, _mappedSetS, boxvar_intEq);

  if(listEmpty(_matchedeq))
  {
    fputs(omc_string_data(_OMC_LIT71),stdout);
  }
  else
  {
    fputs(omc_string_data(_OMC_LIT62),stdout);

    _condition1_eqs = omc_List_map1r(threadData, _matchedeq, boxvar_BackendEquation_get, _allEqs);

    tmp10 = stringAppend(_OMC_LIT63,omc_DataReconciliation_dumplistInteger(threadData, _matchedeq));
    omc_BackendDump_dumpEquationList(threadData, _condition1_eqs, tmp10);

    omc_Error_addMessage(threadData, _OMC_LIT67, _OMC_LIT69);

    tmpMeta11 = omc_mk_box2(0, _OMC_LIT63, _condition1_eqs);
    omc_DataReconciliation_generateCompileTimeHtmlReport(threadData, _shared, _OMC_LIT70, _auxilliaryConditions, _varsToReconcile, tmpMeta11, _OMC_LIT17, _OMC_LIT0, _OMC_LIT17, _OMC_LIT0, 0 /* false */, 0 /* false */, ((modelica_integer) 0), ((modelica_integer) 0), _unMeasuredVariablesOfInterest);

    OMC_THROW_INTERNAL();
  }

  _matchedknownssetc = omc_DataReconciliation_getVariableOccurence(threadData, _setc, _mExt, _knowns ,&_matchedunknownssetc);

  _matchedknownssets = omc_DataReconciliation_getVariableOccurence(threadData, _sets, _mExt, _knowns ,&_matchedunknownssets);

  omc_string_store(&(_condition2), _OMC_LIT72);

  tmp12 = stringAppend(_condition2,_OMC_LIT14);
  tmp13 = stringAppend(tmp12,_OMC_LIT61);
  tmp14 = stringAppend(tmp13,_OMC_LIT14);
  fputs(omc_string_data(tmp14),stdout);

  _tmplist1 = omc_List_intersection1OnTrue(threadData, _matchedknownssetc, _knowns, boxvar_intEq ,&_tmplist2 ,&_tmplist3);

  if(listEmpty(_tmplist3))
  {
    fputs(omc_string_data(_OMC_LIT77),stdout);

    tmp15 = stringAppend(_OMC_LIT80,omc_DataReconciliation_dumplistInteger(threadData, _tmplist1));
    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplist1, boxvar_BackendVariable_getVarAt, _allVars), tmp15);
  }
  else
  {
    if((!listEmpty(_tmplist3)))
    {
      _tmplist1sets = omc_List_intersection1OnTrue(threadData, _tmplist3, _matchedknownssets, boxvar_intEq ,&_tmplist2 ,NULL);

      if((!listEmpty(_tmplist2)))
      {
        omc_string_store(&(_str), omc_DataReconciliation_dumplistInteger(threadData, _tmplist2));

        fputs(omc_string_data(_OMC_LIT62),stdout);

        tmp16 = stringAppend(_OMC_LIT73,omc_DataReconciliation_dumplistInteger(threadData, _tmplist2));
        omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplist2, boxvar_BackendVariable_getVarAt, _allVars), tmp16);

        omc_Error_addMessage(threadData, _OMC_LIT67, _OMC_LIT75);

        _rule2 = 0 /* false */;

        omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, _OMC_LIT0, omc_List_map1r(threadData, _tmplist2, boxvar_BackendVariable_getVarAt, _allVars)));

        tmp17 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT76);
        omc_System_writeFile(threadData, tmp17, _str);
      }

      if(_rule2)
      {
        fputs(omc_string_data(_OMC_LIT77),stdout);
      }

      tmp18 = stringAppend(_OMC_LIT78,omc_DataReconciliation_dumplistInteger(threadData, _tmplist1));
      omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplist1, boxvar_BackendVariable_getVarAt, _allVars), tmp18);

      tmp19 = stringAppend(_OMC_LIT79,omc_DataReconciliation_dumplistInteger(threadData, _tmplist1sets));
      omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplist1sets, boxvar_BackendVariable_getVarAt, _allVars), tmp19);
    }
  }

  omc_string_store(&(_condition3), _OMC_LIT81);

  tmp20 = stringAppend(_condition3,_OMC_LIT14);
  tmp21 = stringAppend(tmp20,_OMC_LIT61);
  tmp22 = stringAppend(tmp21,_OMC_LIT14);
  fputs(omc_string_data(tmp22),stdout);

  if(((listLength(_setc) < listLength(_knowns)) && (!listEmpty(_setc))))
  {
    tmp23 = stringAppend(_OMC_LIT90,intString(listLength(_setc)));
    tmp24 = stringAppend(tmp23,_OMC_LIT91);
    tmp25 = stringAppend(tmp24,intString(listLength(_knowns)));
    tmp26 = stringAppend(tmp25,_OMC_LIT92);
    fputs(omc_string_data(tmp26),stdout);
  }
  else
  {
    tmp27 = stringAppend(_OMC_LIT82,intString(listLength(_setc)));
    tmp28 = stringAppend(tmp27,_OMC_LIT83);
    tmp29 = stringAppend(tmp28,intString(listLength(_knowns)));
    tmp30 = stringAppend(tmp29,_OMC_LIT84);
    omc_string_store(&(_condition3), tmp30);

    tmp31 = stringAppend(_OMC_LIT85,_condition3);
    tmp32 = stringAppend(tmp31,_OMC_LIT59);
    omc_string_store(&(_resstr), tmp32);

    fputs(omc_string_data(_resstr),stdout);

    omc_Error_addMessage(threadData, _OMC_LIT67, _OMC_LIT87);

    if(listEmpty(_setc))
    {
      omc_string_store(&(_condition3), _OMC_LIT89);

      omc_DataReconciliation_generateCompileTimeHtmlReport(threadData, _shared, _OMC_LIT0, _auxilliaryConditions, _varsToReconcile, _OMC_LIT17, _OMC_LIT17, _condition3, _OMC_LIT17, _OMC_LIT0, 0 /* false */, 0 /* false */, ((modelica_integer) 0), ((modelica_integer) 0), _unMeasuredVariablesOfInterest);
    }
    else
    {
      omc_DataReconciliation_generateCompileTimeHtmlReport(threadData, _shared, _OMC_LIT88, _auxilliaryConditions, _varsToReconcile, _OMC_LIT17, _OMC_LIT17, _condition3, _OMC_LIT17, _OMC_LIT0, 0 /* false */, 0 /* false */, ((modelica_integer) 0), ((modelica_integer) 0), _unMeasuredVariablesOfInterest);
    }

    OMC_THROW_INTERNAL();
  }

  omc_string_store(&(_condition4), _OMC_LIT93);

  tmp33 = stringAppend(_condition4,_OMC_LIT14);
  tmp34 = stringAppend(tmp33,_OMC_LIT61);
  tmp35 = stringAppend(tmp34,_OMC_LIT14);
  fputs(omc_string_data(tmp35),stdout);

  _tmplistvar1 = omc_List_intersection1OnTrue(threadData, _matchedunknownssetc, _matchedunknownssets, boxvar_intEq ,&_tmplistvar2 ,&_tmplistvar3);

  if(listEmpty(_matchedunknownssetc))
  {
    fputs(omc_string_data(_OMC_LIT101),stdout);

    goto _return;
  }
  else
  {
    tmp36 = stringAppend(_OMC_LIT94,omc_DataReconciliation_dumplistInteger(threadData, _matchedunknownssetc));
    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _matchedunknownssetc, boxvar_BackendVariable_getVarAt, _allVars), tmp36);

    if(listEmpty(_tmplistvar2))
    {
      tmp37 = stringAppend(_OMC_LIT100,omc_DataReconciliation_dumplistInteger(threadData, _tmplistvar1));
      omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplistvar1, boxvar_BackendVariable_getVarAt, _allVars), tmp37);

      fputs(omc_string_data(_OMC_LIT71),stdout);
    }
    else
    {
      tmp38 = stringAppend(_OMC_LIT95,omc_DataReconciliation_dumplistInteger(threadData, _tmplistvar2));
      omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplistvar2, boxvar_BackendVariable_getVarAt, _allVars), tmp38);

      omc_Error_addMessage(threadData, _OMC_LIT67, _OMC_LIT97);

      tmpMeta39 = omc_mk_box2(0, _OMC_LIT99, omc_List_map1r(threadData, _tmplistvar2, boxvar_BackendVariable_getVarAt, _allVars));
      omc_DataReconciliation_generateCompileTimeHtmlReport(threadData, _shared, _OMC_LIT98, _auxilliaryConditions, _varsToReconcile, _OMC_LIT17, _OMC_LIT17, _OMC_LIT0, tmpMeta39, _OMC_LIT0, 0 /* false */, 0 /* false */, ((modelica_integer) 0), ((modelica_integer) 0), _unMeasuredVariablesOfInterest);

      OMC_THROW_INTERNAL();
    }
  }

  omc_string_store(&(_condition5), _OMC_LIT102);

  tmp40 = stringAppend(_condition5,_OMC_LIT14);
  tmp41 = stringAppend(tmp40,_OMC_LIT61);
  tmp42 = stringAppend(tmp41,_OMC_LIT14);
  fputs(omc_string_data(tmp42),stdout);

  if(listEmpty(_outsetS_eq))
  {
    fputs(omc_string_data(_OMC_LIT111),stdout);

    goto _return;
  }
  else
  {
    if((omc_BackendEquation_equationArraySize(threadData, omc_BackendEquation_listEquation(threadData, _outsetS_eq)) == listLength(omc_BackendVariable_varList(threadData, _outsetS_vars))))
    {
      tmp43 = stringAppend(_OMC_LIT109,intString(listLength(_sets)));
      tmp44 = stringAppend(tmp43,_OMC_LIT83);
      tmp45 = stringAppend(tmp44,intString(listLength(omc_BackendVariable_varList(threadData, _outsetS_vars))));
      tmp46 = stringAppend(tmp45,_OMC_LIT110);
      fputs(omc_string_data(tmp46),stdout);
    }
    else
    {
      tmp47 = stringAppend(_OMC_LIT103,intString(omc_BackendEquation_equationArraySize(threadData, omc_BackendEquation_listEquation(threadData, _outsetS_eq))));
      tmp48 = stringAppend(tmp47,_OMC_LIT83);
      tmp49 = stringAppend(tmp48,intString(listLength(omc_BackendVariable_varList(threadData, _outsetS_vars))));
      tmp50 = stringAppend(tmp49,_OMC_LIT104);
      omc_string_store(&(_condition5), tmp50);

      tmp51 = stringAppend(_OMC_LIT105,_condition5);
      tmp52 = stringAppend(tmp51,_OMC_LIT59);
      fputs(omc_string_data(tmp52),stdout);

      omc_Error_addMessage(threadData, _OMC_LIT67, _OMC_LIT107);

      omc_DataReconciliation_generateCompileTimeHtmlReport(threadData, _shared, _OMC_LIT108, _auxilliaryConditions, _varsToReconcile, _OMC_LIT17, _OMC_LIT17, _OMC_LIT0, _OMC_LIT17, _condition5, 0 /* false */, 0 /* false */, ((modelica_integer) 0), ((modelica_integer) 0), _unMeasuredVariablesOfInterest);

      OMC_THROW_INTERNAL();
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_VerifyDataReconciliation(threadData_t *threadData, modelica_metatype _setc, modelica_metatype _sets, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _mExt, modelica_metatype _solvedvar, modelica_metatype _constantvars, modelica_metatype _approximatedEquations, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _outsetS_vars, modelica_metatype _outsetS_eq, modelica_metatype _shared, modelica_metatype _mappedSetC, modelica_metatype _mappedSetS, modelica_metatype _unMeasuredVariablesOfInterest)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_unMeasuredVariablesOfInterest);
  omc_DataReconciliation_VerifyDataReconciliation(threadData, _setc, _sets, _knowns, _unknowns, _mExt, _solvedvar, _constantvars, _approximatedEquations, _allVars, _allEqs, _mapIncRowEqn, _outsetS_vars, _outsetS_eq, _shared, _mappedSetC, _mappedSetS, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_VerifySetSPrime(threadData_t *threadData, modelica_metatype _boundaryConditionsVars, modelica_metatype _intermediateVars, modelica_metatype _knownVars, modelica_metatype _extraVarsinSetSPrime, modelica_metatype _boundaryConditionsEquations, modelica_metatype _intermediateEquations, modelica_metatype _shared, modelica_integer _auxillaryEquations, modelica_integer _numRelatedBoundaryConditions, modelica_boolean _stateEstimation)
{
  modelica_integer _eqSize;
  modelica_integer _varSize;
  modelica_integer _count;
  modelica_integer _extraVarLength;
  modelica_string _condition5 = NULL;
  modelica_string _msg = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_string tmp19;
  modelica_string tmp20;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqSize has no default value.
  // _varSize has no default value.
  // _count has no default value.
  // _extraVarLength has no default value.
  // _condition5 has no default value.
  // _msg has no default value.
  _eqSize = omc_BackendEquation_equationArraySize(threadData, _boundaryConditionsEquations) + omc_BackendEquation_equationArraySize(threadData, _intermediateEquations);

  _varSize = listLength(omc_BackendVariable_varList(threadData, _boundaryConditionsVars)) + listLength(omc_BackendVariable_varList(threadData, _intermediateVars));

  if((!(_eqSize == _varSize)))
  {
    tmp1 = stringAppend(_OMC_LIT112,intString(_eqSize));
    tmp2 = stringAppend(tmp1,_OMC_LIT83);
    tmp3 = stringAppend(tmp2,intString(_varSize));
    tmp4 = stringAppend(tmp3,_OMC_LIT104);
    omc_string_store(&(_condition5), tmp4);

    omc_string_store(&(_msg), _OMC_LIT113);

    {
      modelica_metatype _var;
      for (tmpMeta5 = omc_BackendVariable_varList(threadData, _boundaryConditionsVars); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
      {
        _var = MMC_CAR(tmpMeta5);
        tmp6 = stringAppend(_msg,omc_BackendDump_varStringShort(threadData, _var));
        tmp7 = stringAppend(tmp6,_OMC_LIT16);
        omc_string_store(&(_msg), tmp7);
      }
    }

    tmp9 = stringAppend(_msg,_OMC_LIT114);
    omc_string_store(&(_msg), tmp9);

    _extraVarLength = listLength(_extraVarsinSetSPrime);

    _count = ((modelica_integer) 1);

    {
      modelica_metatype _var;
      for (tmpMeta10 = _extraVarsinSetSPrime; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
      {
        _var = MMC_CAR(tmpMeta10);
        if((_count == _extraVarLength))
        {
          tmp11 = stringAppend(_msg,omc_BackendDump_varStringShort(threadData, _var));
          tmp12 = stringAppend(tmp11,_OMC_LIT2);
          omc_string_store(&(_msg), tmp12);
        }
        else
        {
          tmp13 = stringAppend(_msg,omc_BackendDump_varStringShort(threadData, _var));
          tmp14 = stringAppend(tmp13,_OMC_LIT16);
          omc_string_store(&(_msg), tmp14);
        }

        _count = ((modelica_integer) 1) + _count;
      }
    }

    tmp17 = stringAppend(_OMC_LIT115,_msg);
    tmp18 = stringAppend(tmp17,_OMC_LIT116);
    tmpMeta16 = mmc_mk_cons(tmp18, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT67, tmpMeta16);

    if(_stateEstimation)
    {
      tmp19 = stringAppend(_msg,_OMC_LIT117);
      omc_DataReconciliation_generateCompileTimeHtmlReport(threadData, _shared, _OMC_LIT0, intString(omc_BackendEquation_equationArraySize(threadData, _boundaryConditionsEquations)), intString(listLength(omc_BackendVariable_varList(threadData, _knownVars))), _OMC_LIT17, _OMC_LIT17, _OMC_LIT0, _OMC_LIT17, tmp19, 0 /* false */, 1 /* true */, _auxillaryEquations, _numRelatedBoundaryConditions, ((modelica_integer) 0));
    }
    else
    {
      tmp20 = stringAppend(_msg,_OMC_LIT116);
      omc_DataReconciliation_generateCompileTimeHtmlReport(threadData, _shared, _OMC_LIT0, intString(omc_BackendEquation_equationArraySize(threadData, _boundaryConditionsEquations)), intString(listLength(omc_BackendVariable_varList(threadData, _knownVars))), _OMC_LIT17, _OMC_LIT17, _OMC_LIT0, _OMC_LIT17, tmp20, 1 /* true */, 0 /* false */, _auxillaryEquations, _numRelatedBoundaryConditions, ((modelica_integer) 0));
    }

    OMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_VerifySetSPrime(threadData_t *threadData, modelica_metatype _boundaryConditionsVars, modelica_metatype _intermediateVars, modelica_metatype _knownVars, modelica_metatype _extraVarsinSetSPrime, modelica_metatype _boundaryConditionsEquations, modelica_metatype _intermediateEquations, modelica_metatype _shared, modelica_metatype _auxillaryEquations, modelica_metatype _numRelatedBoundaryConditions, modelica_metatype _stateEstimation)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  tmp1 = omc_unbox_integer(_auxillaryEquations);
  tmp2 = omc_unbox_integer(_numRelatedBoundaryConditions);
  tmp3 = omc_unbox_integer(_stateEstimation);
  omc_DataReconciliation_VerifySetSPrime(threadData, _boundaryConditionsVars, _intermediateVars, _knownVars, _extraVarsinSetSPrime, _boundaryConditionsEquations, _intermediateEquations, _shared, tmp1, tmp2, tmp3);
  return;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getVariablesAfterExtraction(threadData_t *threadData, modelica_metatype _setc, modelica_metatype _sets, modelica_metatype _mext)
{
  modelica_metatype _finalvars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _fulleqs = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _eq;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _finalvars = tmpMeta1;
  // _fulleqs has no default value.
  // _vars has no default value.
  // _eq has no default value.
  _fulleqs = listAppend(_setc, _sets);

  {
    modelica_metatype _i;
    for (tmpMeta2 = _fulleqs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      {
        modelica_metatype _j;
        for (tmpMeta3 = _mext; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _j = MMC_CAR(tmpMeta3);
          /* Pattern-matching assignment */
          tmpMeta4 = _j;
          tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 1);
          tmp6 = omc_unbox_integer(tmpMeta5);
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta4, 2);
          _eq = tmp6  /* pattern as ty=Integer */;
          _vars = tmpMeta7;

          if((omc_unbox_integer(_i) == _eq))
          {
            {
              modelica_metatype _k;
              for (tmpMeta8 = _vars; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
              {
                _k = MMC_CAR(tmpMeta8);
                tmpMeta9 = mmc_mk_cons(_k, _finalvars);
                _finalvars = tmpMeta9;
              }
            }
          }
        }
      }
    }
  }

  _finalvars = omc_List_unique(threadData, _finalvars);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _finalvars;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getKnownOrExactEquationBlocksHelper(threadData_t *threadData, modelica_metatype _blocksVarList, modelica_metatype _targetBlocks, modelica_string _knownOrConstant)
{
  modelica_metatype _outBlocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _count;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outBlocks = tmpMeta1;
  _count = ((modelica_integer) 1);
  {
    modelica_metatype _j;
    for (tmpMeta2 = _blocksVarList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _j = MMC_CAR(tmpMeta2);
      if(valueEq(_j, _knownOrConstant))
      {
        tmpMeta3 = mmc_mk_cons(listGet(_targetBlocks, _count), _outBlocks);
        _outBlocks = tmpMeta3;

        goto _return;
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outBlocks;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_DataReconciliation_findSquareAndNonSquareBlocksHelper1(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype *out_foundknownblocks, modelica_metatype *out_constantBlocks, modelica_metatype *out_blockranks)
{
  modelica_boolean _exists;
  modelica_metatype _foundknownblocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _constantBlocks = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _blockranks = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _blocksvarlist = NULL;
  modelica_integer _count;
  modelica_integer _rank;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exists = 0 /* false */;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _foundknownblocks = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _constantBlocks = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _blockranks = tmpMeta3;
  // _blocksvarlist has no default value.
  _count = ((modelica_integer) 1);
  // _rank has no default value.
  // _targetblocks has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta4 = _inlist2; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _i = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _i;
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
      tmpMeta7 = OMC_BOX_FIELD(tmpMeta5, 2);
      tmp8 = omc_unbox_integer(tmpMeta7);
      _blocksvarlist = tmpMeta6;
      _rank = tmp8  /* pattern as ty=Integer */;

      if(((_rank > ((modelica_integer) 0)) && (_count == ((modelica_integer) 1))))
      {
        /* Pattern-matching assignment */
        tmpMeta9 = listGet(_inlist1, _count);
        tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 1);
        _targetblocks = tmpMeta10;

        if(listMember(_OMC_LIT119, _blocksvarlist))
        {
          _exists = 1 /* true */;

          tmpMeta11 = mmc_mk_cons(omc_mk_integer(_rank), _blockranks);
          _blockranks = tmpMeta11;

          _foundknownblocks = omc_DataReconciliation_getKnownOrExactEquationBlocksHelper(threadData, _blocksvarlist, _targetblocks, _OMC_LIT119);
        }
        else
        {
          if(listMember(_OMC_LIT118, _blocksvarlist))
          {
            _exists = 1 /* true */;

            tmpMeta12 = mmc_mk_cons(omc_mk_integer(_rank), _blockranks);
            _blockranks = tmpMeta12;

            _constantBlocks = omc_DataReconciliation_getKnownOrExactEquationBlocksHelper(threadData, _blocksvarlist, _targetblocks, _OMC_LIT118);
          }
        }
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _foundknownblocks = listReverse(_foundknownblocks);

  _blockranks = listReverse(_blockranks);
  _return: OMC_LABEL_UNUSED
  if (out_foundknownblocks) { *out_foundknownblocks = _foundknownblocks; }
  if (out_constantBlocks) { *out_constantBlocks = _constantBlocks; }
  if (out_blockranks) { *out_blockranks = _blockranks; }
  omc_ret_ = _exists;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_findSquareAndNonSquareBlocksHelper1(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype *out_foundknownblocks, modelica_metatype *out_constantBlocks, modelica_metatype *out_blockranks)
{
  modelica_boolean _exists;
  modelica_metatype out_exists;
  _exists = omc_DataReconciliation_findSquareAndNonSquareBlocksHelper1(threadData, _inlist1, _inlist2, out_foundknownblocks, out_constantBlocks, out_blockranks);
  out_exists = omc_mk_icon(_exists);
  /* skip box _foundknownblocks; list<#Integer> */
  /* skip box _constantBlocks; list<#Integer> */
  /* skip box _blockranks; list<#Integer> */
  return out_exists;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_findPredecessorBlocks(threadData_t *threadData, modelica_metatype _blockinfo)
{
  modelica_metatype _outblockinfo = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _dependencyequation = NULL;
  modelica_metatype _constantEquations = NULL;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype _tmptargetblocks = NULL;
  modelica_metatype _targetblocksvar = NULL;
  modelica_metatype _blockitems1 = NULL;
  modelica_metatype _foundblockranks = NULL;
  modelica_integer _count;
  modelica_integer _tmpcount;
  modelica_boolean _exist;
  modelica_boolean _targetexist;
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
  modelica_metatype tmpMeta13;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outblockinfo = tmpMeta1;
  // _dependencyequation has no default value.
  // _constantEquations has no default value.
  // _targetblocks has no default value.
  // _tmptargetblocks has no default value.
  // _targetblocksvar has no default value.
  // _blockitems1 has no default value.
  // _foundblockranks has no default value.
  _count = ((modelica_integer) 1);
  // _tmpcount has no default value.
  // _exist has no default value.
  // _targetexist has no default value.
  {
    modelica_metatype _blocks;
    for (tmpMeta2 = _blockinfo; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _blocks = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _blocks;
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta3, 2);
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta3, 3);
      _blockitems1 = tmpMeta4;
      _targetblocks = tmpMeta5;
      _targetblocksvar = tmpMeta6;

      _tmpcount = ((modelica_integer) 1);

      _targetexist = 0 /* false */;

      {
        modelica_metatype _tmpblocks;
        for (tmpMeta7 = _blockinfo; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
        {
          _tmpblocks = MMC_CAR(tmpMeta7);
          /* Pattern-matching assignment */
          tmpMeta8 = _tmpblocks;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 2);
          _tmptargetblocks = tmpMeta9;

          if((!(_count == _tmpcount)))
          {
            if(listMember(listHead(_targetblocks), _tmptargetblocks))
            {
              _targetexist = 1 /* true */;
            }
          }

          _tmpcount = ((modelica_integer) 1) + _tmpcount;
        }
      }

      if((!_targetexist))
      {
        _exist = omc_DataReconciliation_findSquareAndNonSquareBlocksHelper1(threadData, _targetblocks, _targetblocksvar ,&_dependencyequation ,&_constantEquations ,&_foundblockranks);

        tmpMeta12 = omc_mk_box6(0, _blockitems1, _targetblocks, _targetblocksvar, _dependencyequation, _constantEquations, _foundblockranks);
        tmpMeta11 = mmc_mk_cons(tmpMeta12, _outblockinfo);
        _outblockinfo = tmpMeta11;
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _outblockinfo = listReverse(_outblockinfo);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outblockinfo;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getActualBlocks(threadData_t *threadData, modelica_metatype _searchblock, modelica_metatype _inlist1, modelica_metatype _inlist2)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      if((!listEmpty(omc_List_intersectionOnTrue(threadData, _searchblock, _i, boxvar_intEq))))
      {
        tmpMeta3 = mmc_mk_cons(_i, _outlist);
        _outlist = tmpMeta3;
      }
    }
  }

  _outlist = listReverse(_outlist);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outlist;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getBlockVarList(threadData_t *threadData, modelica_metatype _blocktofind, modelica_metatype _inlist1, modelica_metatype _inlist2)
{
  modelica_metatype _outstringlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _count;
  modelica_boolean _blockFound;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outstringlist = tmpMeta1;
  _count = ((modelica_integer) 1);
  // _blockFound has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      _blockFound = omc_List_setEqualOnTrue(threadData, _i, _blocktofind, boxvar_intEq);

      if(_blockFound)
      {
        _outstringlist = listGet(_inlist2, _count);
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstringlist;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_sortBlocks(threadData_t *threadData, modelica_metatype _sortedranklist, modelica_metatype _inlist2)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _e1;
  modelica_metatype _blocks = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  // _e1 has no default value.
  // _blocks has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _sortedranklist; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      {
        modelica_metatype _j;
        for (tmpMeta3 = _inlist2; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _j = MMC_CAR(tmpMeta3);
          /* Pattern-matching assignment */
          tmpMeta4 = _j;
          tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 1);
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta4, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          _blocks = tmpMeta5;
          _e1 = tmp7  /* pattern as ty=Integer */;

          if(valueEq(_i, omc_mk_integer(_e1)))
          {
            tmpMeta9 = omc_mk_box2(0, _blocks, omc_mk_integer(_e1));
            tmpMeta8 = mmc_mk_cons(tmpMeta9, _outlist);
            _outlist = tmpMeta8;
          }
        }
      }
    }
  }

  _outlist = listReverse(_outlist);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outlist;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_findBlocksRanks(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype *out_ranklist)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ranklist = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _blocks = NULL;
  modelica_metatype _s_BLTRanks = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _e_BLTRanks = NULL;
  modelica_metatype tmpMeta4;
  modelica_integer _rank;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ranklist = tmpMeta2;
  // _blocks has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _s_BLTRanks = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _e_BLTRanks = tmpMeta4;
  // _rank has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta5 = _inlist2; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _i = MMC_CAR(tmpMeta5);
      {
        modelica_metatype _j;
        for (tmpMeta6 = _inlist1; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
        {
          _j = MMC_CAR(tmpMeta6);
          /* Pattern-matching assignment */
          tmpMeta7 = _j;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta7, 2);
          tmp10 = omc_unbox_integer(tmpMeta9);
          _blocks = tmpMeta8;
          _rank = tmp10  /* pattern as ty=Integer */;

          if(valueEq(_i, _blocks))
          {
            tmpMeta12 = omc_mk_box2(0, _i, omc_mk_integer(_rank));
            tmpMeta11 = mmc_mk_cons(tmpMeta12, _outlist);
            _outlist = tmpMeta11;

            if((_rank > ((modelica_integer) 0)))
            {
              tmpMeta13 = mmc_mk_cons(omc_mk_integer(_rank), _s_BLTRanks);
              _s_BLTRanks = tmpMeta13;
            }
            else
            {
              tmpMeta14 = mmc_mk_cons(omc_mk_integer(_rank), _e_BLTRanks);
              _e_BLTRanks = tmpMeta14;
            }
          }
        }
      }
    }
  }

  _outlist = listReverse(_outlist);

  _ranklist = listAppend(omc_List_sort(threadData, _s_BLTRanks, boxvar_intGt), listReverse(_e_BLTRanks));
  _return: OMC_LABEL_UNUSED
  if (out_ranklist) { *out_ranklist = _ranklist; }
  omc_ret_ = _outlist;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getdirectOccurrencesinEquation(threadData_t *threadData, modelica_metatype _m, modelica_integer _eqnumber, modelica_integer _varnumber, modelica_metatype *out_outEBLT)
{
  modelica_metatype _outSBLT = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outEBLT = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _vars = NULL;
  modelica_integer _eq;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outSBLT = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEBLT = tmpMeta2;
  // _vars has no default value.
  // _eq has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _m; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _i;
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 1);
      tmp6 = omc_unbox_integer(tmpMeta5);
      tmpMeta7 = OMC_BOX_FIELD(tmpMeta4, 2);
      _eq = tmp6  /* pattern as ty=Integer */;
      _vars = tmpMeta7;

      if((!(_eq == _eqnumber)))
      {
        if(listMember(omc_mk_integer(_varnumber), _vars))
        {
          if((_eq > ((modelica_integer) 0)))
          {
            tmpMeta8 = mmc_mk_cons(omc_mk_integer(_eq), _outSBLT);
            _outSBLT = tmpMeta8;
          }
          else
          {
            tmpMeta9 = mmc_mk_cons(omc_mk_integer(_eq), _outEBLT);
            _outEBLT = tmpMeta9;

            break;
          }
        }
      }
    }
  }

  _outSBLT = listReverse(_outSBLT);

  _outEBLT = listReverse(_outEBLT);
  _return: OMC_LABEL_UNUSED
  if (out_outEBLT) { *out_outEBLT = _outEBLT; }
  omc_ret_ = _outSBLT;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_getdirectOccurrencesinEquation(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqnumber, modelica_metatype _varnumber, modelica_metatype *out_outEBLT)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outSBLT = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = omc_unbox_integer(_eqnumber);
  tmp2 = omc_unbox_integer(_varnumber);
  _outSBLT = omc_DataReconciliation_getdirectOccurrencesinEquation(threadData, _m, tmp1, tmp2, out_outEBLT);
  /* skip box _outSBLT; list<#Integer> */
  /* skip box _outEBLT; list<#Integer> */
  return _outSBLT;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getDependencyequation(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _inlist1, modelica_metatype _solvedvariables, modelica_metatype _m, modelica_metatype *out_outEBLT)
{
  modelica_metatype _outSBLT = NULL;
  modelica_metatype _outEBLT = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _nonsq = NULL;
  modelica_integer _eqnumber;
  modelica_integer _varnumber;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSBLT has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEBLT = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _t = tmpMeta2;
  // _nonsq has no default value.
  // _eqnumber has no default value.
  // _varnumber has no default value.
  {
    modelica_metatype _eqnumber;
    for (tmpMeta3 = _inlist; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eqnumber = MMC_CAR(tmpMeta3);
      _varnumber = omc_DataReconciliation_getSolvedVariableNumber(threadData, omc_unbox_integer(_eqnumber), _solvedvariables);

      _nonsq = omc_DataReconciliation_getdirectOccurrencesinEquation(threadData, _m, omc_unbox_integer(_eqnumber), _varnumber ,&_outEBLT);

      {
        modelica_metatype _lst;
        for (tmpMeta4 = _nonsq; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
        {
          _lst = MMC_CAR(tmpMeta4);
          if((!listMember(_lst, _inlist)))
          {
            tmpMeta5 = mmc_mk_cons(_lst, _t);
            _t = tmpMeta5;
          }
        }
      }
    }
  }

  _outSBLT = listAppend(_t, _inlist1);
  _return: OMC_LABEL_UNUSED
  if (out_outEBLT) { *out_outEBLT = _outEBLT; }
  omc_ret_ = _outSBLT;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_findBlockTargetsHelper1(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _solvedvariables, modelica_metatype _mxt, modelica_metatype *out_outEBLT)
{
  modelica_metatype _outSBLT = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outEBLT = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _tmpSBLT = NULL;
  modelica_metatype _tmpEBLT = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outSBLT = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEBLT = tmpMeta2;
  // _tmpSBLT has no default value.
  // _tmpEBLT has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _inlist; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _tmpSBLT = omc_DataReconciliation_getDependencyequation(threadData, _i, tmpMeta4, _solvedvariables, _mxt ,&_tmpEBLT);

      _outSBLT = listAppend(_outSBLT, _tmpSBLT);

      _outEBLT = omc_List_appendElt(threadData, _tmpEBLT, _outEBLT);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outEBLT) { *out_outEBLT = _outEBLT; }
  omc_ret_ = _outSBLT;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_findBlockTargetsHelper(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype _solvedvariables, modelica_metatype _mxt, modelica_metatype _actualblocks, modelica_boolean _debug, modelica_metatype *out_outEBLT)
{
  modelica_metatype _outSBLT = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outEBLT = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outSBLT = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEBLT = tmpMeta2;
  
  
  { /* match expression */
    modelica_metatype tmp6_1;modelica_metatype tmp6_2;modelica_metatype tmp6_3;modelica_metatype tmp6_4;modelica_metatype tmp6_5;modelica_boolean tmp6_6;
    tmp6_1 = _inlist1;
    tmp6_2 = _inlist2;
    tmp6_3 = _solvedvariables;
    tmp6_4 = _mxt;
    tmp6_5 = _actualblocks;
    tmp6_6 = _debug;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _dependencyequation = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _targetblocks = NULL;
      modelica_metatype _targetblocks1 = NULL;
      modelica_metatype _originalblocks = NULL;
      modelica_metatype _eBLTList1 = NULL;
      modelica_metatype _eBLTList2 = NULL;
      modelica_metatype _restitem = NULL;
      modelica_metatype _firstitem = NULL;
      modelica_metatype _solvar = NULL;
      modelica_metatype _mxt1 = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _first has no default value.
      // _dependencyequation has no default value.
      // _rest has no default value.
      // _targetblocks has no default value.
      // _targetblocks1 has no default value.
      // _originalblocks has no default value.
      // _eBLTList1 has no default value.
      // _eBLTList2 has no default value.
      // _restitem has no default value.
      // _firstitem has no default value.
      // _solvar has no default value.
      // _mxt1 has no default value.
      // _b has no default value.
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp6_1)) goto tmp5_end;
          tmpMeta8 = MMC_CAR(tmp6_1);
          tmpMeta9 = MMC_CDR(tmp6_1);
          if (listEmpty(tmp6_2)) goto tmp5_end;
          tmpMeta10 = MMC_CAR(tmp6_2);
          tmpMeta11 = MMC_CDR(tmp6_2);
          
          _first = tmpMeta8;
          _rest = tmpMeta9;
          _firstitem = tmpMeta10;
          _restitem = tmpMeta11;
          _solvar = tmp6_3;
          _mxt1 = tmp6_4;
          _originalblocks = tmp6_5;
          _b = tmp6_6;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_cons(_first, _rest);
          _dependencyequation = omc_DataReconciliation_findBlockTargetsHelper1(threadData, tmpMeta12, _solvar, _mxt1 ,&_eBLTList1);

          if(_debug)
          {
            tmp13 = stringAppend(_OMC_LIT120,mmc_anyString(_dependencyequation));
            tmp14 = stringAppend(tmp13,_OMC_LIT121);
            tmp15 = stringAppend(tmp14,mmc_anyString(_eBLTList1));
            tmp16 = stringAppend(tmp15,_OMC_LIT14);
            fputs(omc_string_data(tmp16),stdout);
          }

          _targetblocks = omc_DataReconciliation_getActualBlocks(threadData, _dependencyequation, _originalblocks, _first);

          tmpMeta17 = mmc_mk_cons(_firstitem, _restitem);
          _targetblocks1 = omc_DataReconciliation_findBlockTargetsHelper(threadData, _targetblocks, tmpMeta17, _solvar, _mxt1, _originalblocks, _b ,&_eBLTList2);
          tmpMeta[0+0] = omc_List_unique(threadData, listAppend(_targetblocks, _targetblocks1));
          tmpMeta[0+1] = omc_List_unique(threadData, listAppend(_eBLTList1, _eBLTList2));
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta18;
          tmpMeta[0+1] = tmpMeta19;
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
  _outSBLT = tmpMeta[0+0];
  _outEBLT = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEBLT) { *out_outEBLT = _outEBLT; }
  omc_ret_ = _outSBLT;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_findBlockTargetsHelper(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype _solvedvariables, modelica_metatype _mxt, modelica_metatype _actualblocks, modelica_metatype _debug, modelica_metatype *out_outEBLT)
{
  modelica_integer tmp1;
  modelica_metatype _outSBLT = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_debug);
  _outSBLT = omc_DataReconciliation_findBlockTargetsHelper(threadData, _inlist1, _inlist2, _solvedvariables, _mxt, _actualblocks, tmp1, out_outEBLT);
  /* skip box _outSBLT; list<list<#Integer>> */
  /* skip box _outEBLT; list<list<#Integer>> */
  return _outSBLT;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_findBlockTargets(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype _solvedvariables, modelica_metatype _mxt, modelica_metatype _blockranks, modelica_boolean _debug)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype _eBLTBlocks = NULL;
  modelica_metatype _targetvarlist = NULL;
  modelica_metatype _blockvarlst = NULL;
  modelica_metatype _ranklist = NULL;
  modelica_metatype _blocks1 = NULL;
  modelica_integer _rank;
  modelica_metatype _updatedblocks = NULL;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  // _targetblocks has no default value.
  // _eBLTBlocks has no default value.
  // _targetvarlist has no default value.
  // _blockvarlst has no default value.
  // _ranklist has no default value.
  // _blocks1 has no default value.
  // _rank has no default value.
  // _updatedblocks has no default value.
  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT122),stdout);
  }

  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      if((omc_unbox_integer(listGet(_i, ((modelica_integer) 1))) > ((modelica_integer) 0)))
      {
        if(_debug)
        {
          tmp3 = stringAppend(_OMC_LIT123,mmc_anyString(_i));
          tmp4 = stringAppend(tmp3,_OMC_LIT124);
          fputs(omc_string_data(tmp4),stdout);
        }

        tmpMeta5 = mmc_mk_cons(_i, MMC_REFSTRUCTLIT(mmc_nil));
        _targetblocks = omc_DataReconciliation_findBlockTargetsHelper(threadData, tmpMeta5, _inlist2, _solvedvariables, _mxt, _inlist1, _debug ,&_eBLTBlocks);

        tmpMeta6 = mmc_mk_cons(_i, _targetblocks);
        _targetblocks = listAppend(tmpMeta6, _eBLTBlocks);

        _updatedblocks = omc_DataReconciliation_findBlocksRanks(threadData, _blockranks, _targetblocks ,&_ranklist);

        _updatedblocks = omc_DataReconciliation_sortBlocks(threadData, _ranklist, _updatedblocks);

        if(_debug)
        {
          tmp7 = stringAppend(_OMC_LIT125,mmc_anyString(_updatedblocks));
          tmp8 = stringAppend(tmp7,_OMC_LIT126);
          tmp9 = stringAppend(tmp8,mmc_anyString(_ranklist));
          tmp10 = stringAppend(tmp9,_OMC_LIT59);
          fputs(omc_string_data(tmp10),stdout);
        }

        tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
        _targetvarlist = tmpMeta11;

        {
          modelica_metatype _blocks;
          for (tmpMeta12 = _updatedblocks; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
          {
            _blocks = MMC_CAR(tmpMeta12);
            /* Pattern-matching assignment */
            tmpMeta13 = _blocks;
            tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 1);
            tmpMeta15 = OMC_BOX_FIELD(tmpMeta13, 2);
            tmp16 = omc_unbox_integer(tmpMeta15);
            _blocks1 = tmpMeta14;
            _rank = tmp16  /* pattern as ty=Integer */;

            _blockvarlst = omc_DataReconciliation_getBlockVarList(threadData, _blocks1, _inlist1, _inlist2);

            tmpMeta18 = omc_mk_box2(0, _blockvarlst, omc_mk_integer(_rank));
            tmpMeta17 = mmc_mk_cons(tmpMeta18, _targetvarlist);
            _targetvarlist = tmpMeta17;
          }
        }

        tmpMeta21 = omc_mk_box3(0, _i, _updatedblocks, listReverse(_targetvarlist));
        tmpMeta20 = mmc_mk_cons(tmpMeta21, _outlist);
        _outlist = tmpMeta20;
      }
    }
  }

  _outlist = listReverse(_outlist);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outlist;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_findBlockTargets(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype _solvedvariables, modelica_metatype _mxt, modelica_metatype _blockranks, modelica_metatype _debug)
{
  modelica_integer tmp1;
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_debug);
  _outlist = omc_DataReconciliation_findBlockTargets(threadData, _inlist1, _inlist2, _solvedvariables, _mxt, _blockranks, tmp1);
  /* skip box _outlist; list<tuple<list<#Integer>, list<tuple<list<#Integer>, #Integer>>, list<tuple<list<String>, #Integer>>>> */
  return _outlist;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getSBLTAdjacencyMatrix(threadData_t *threadData, modelica_metatype _adjacencyMatrix)
{
  modelica_metatype _extAdjacencyMatrix = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _count;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _extAdjacencyMatrix = tmpMeta1;
  _count = ((modelica_integer) 1);
  {
    modelica_metatype _vars;
    for (tmpMeta2 = _adjacencyMatrix, tmp7 = arrayLength(tmpMeta2), tmp6 = 1; tmp6 <= tmp7; tmp6++)
    {
      _vars = arrayGet(tmpMeta2,tmp6);
      tmpMeta4 = omc_mk_box2(0, omc_mk_integer(_count), _vars);
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _extAdjacencyMatrix);
      _extAdjacencyMatrix = tmpMeta3;

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _extAdjacencyMatrix = listReverse(_extAdjacencyMatrix);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _extAdjacencyMatrix;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedConstant(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _constantEquations;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _constantEquations has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _m;
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
          modelica_integer tmp11;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (36 != omc_string_len(tmpMeta6) || strcmp(omc_string_data(_OMC_LIT127), omc_string_data(tmpMeta6)) != 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,6) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 5);
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,1) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          if (1 /* true */ != tmp11) goto tmp3_end;
          
          /* Pattern matching succeeded */
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
  _constantEquations = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _constantEquations;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedConstant(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _constantEquations;
  modelica_metatype out_constantEquations;
  _constantEquations = omc_DataReconciliation_isEquationTaggedConstant(threadData, _m);
  out_constantEquations = omc_mk_icon(_constantEquations);
  return out_constantEquations;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedBoundaryCondition(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _boundaryCondition;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _boundaryCondition has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _m;
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
          modelica_integer tmp11;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (32 != omc_string_len(tmpMeta6) || strcmp(omc_string_data(_OMC_LIT128), omc_string_data(tmpMeta6)) != 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,6) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 5);
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,1) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          if (1 /* true */ != tmp11) goto tmp3_end;
          
          /* Pattern matching succeeded */
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
  _boundaryCondition = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _boundaryCondition;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedBoundaryCondition(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _boundaryCondition;
  modelica_metatype out_boundaryCondition;
  _boundaryCondition = omc_DataReconciliation_isEquationTaggedBoundaryCondition(threadData, _m);
  out_boundaryCondition = omc_mk_icon(_boundaryCondition);
  return out_boundaryCondition;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedApproximated(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _approximatedEquations;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _approximatedEquations has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _m;
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
          modelica_integer tmp11;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (35 != omc_string_len(tmpMeta6) || strcmp(omc_string_data(_OMC_LIT129), omc_string_data(tmpMeta6)) != 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,6) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 5);
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,1) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          if (1 /* true */ != tmp11) goto tmp3_end;
          
          /* Pattern matching succeeded */
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
  _approximatedEquations = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _approximatedEquations;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedApproximated(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _approximatedEquations;
  modelica_metatype out_approximatedEquations;
  _approximatedEquations = omc_DataReconciliation_isEquationTaggedApproximated(threadData, _m);
  out_approximatedEquations = omc_mk_icon(_approximatedEquations);
  return out_approximatedEquations;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData_t *threadData, modelica_metatype _commentIn, modelica_boolean *out_boundaryConditionEquations)
{
  modelica_boolean _approximatedEquations;
  modelica_boolean _boundaryConditionEquations;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_boolean omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _approximatedEquations has no default value.
  // _boundaryConditionEquations has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _commentIn;
    {
      modelica_metatype _t = NULL;
      modelica_boolean _isApproximatedEquation;
      modelica_boolean _isboundaryConditionEquation;
      modelica_metatype _subModLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _isApproximatedEquation has no default value.
      // _isboundaryConditionEquation has no default value.
      // _subModLst has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1_c0 = 0 /* false */;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 2);
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,6) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 4);
          
          _subModLst = tmpMeta11;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          _isApproximatedEquation = (omc_List_any(threadData, _subModLst, boxvar_DataReconciliation_isEquationTaggedApproximated) || omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData, _t, NULL));

          _isboundaryConditionEquation = (omc_List_any(threadData, _subModLst, boxvar_DataReconciliation_isEquationTaggedBoundaryCondition) || omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData, _t, NULL));
          tmp1_c0 = _isApproximatedEquation;
          tmp1_c1 = _isboundaryConditionEquation;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          _t = tmpMeta13;
          /* Pattern matching succeeded */
          tmp1_c0 = omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData, _t, &tmp1_c1);
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
  _approximatedEquations = tmp1_c0;
  _boundaryConditionEquations = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_boundaryConditionEquations) { *out_boundaryConditionEquations = _boundaryConditionEquations; }
  omc_ret_ = _approximatedEquations;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData_t *threadData, modelica_metatype _commentIn, modelica_metatype *out_boundaryConditionEquations)
{
  modelica_boolean _boundaryConditionEquations;
  modelica_boolean _approximatedEquations;
  modelica_metatype out_approximatedEquations;
  _approximatedEquations = omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData, _commentIn, &_boundaryConditionEquations);
  out_approximatedEquations = omc_mk_icon(_approximatedEquations);
  if (out_boundaryConditionEquations) { *out_boundaryConditionEquations = omc_mk_icon(_boundaryConditionEquations); }
  return out_approximatedEquations;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition(threadData_t *threadData, modelica_metatype _eqn, modelica_boolean *out_boundaryConditionEquations)
{
  modelica_boolean _approximatedEquations;
  modelica_boolean _boundaryConditionEquations;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_boolean omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _approximatedEquations has no default value.
  // _boundaryConditionEquations has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _comment = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comment has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 8);
          
          _comment = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1_c0 = omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryConditionHelper(threadData, _comment, &tmp1_c1);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1_c0 = 0 /* false */;
          tmp1_c1 = 0 /* false */;
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
  _approximatedEquations = tmp1_c0;
  _boundaryConditionEquations = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_boundaryConditionEquations) { *out_boundaryConditionEquations = _boundaryConditionEquations; }
  omc_ret_ = _approximatedEquations;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype *out_boundaryConditionEquations)
{
  modelica_boolean _boundaryConditionEquations;
  modelica_boolean _approximatedEquations;
  modelica_metatype out_approximatedEquations;
  _approximatedEquations = omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition(threadData, _eqn, &_boundaryConditionEquations);
  out_approximatedEquations = omc_mk_icon(_approximatedEquations);
  if (out_boundaryConditionEquations) { *out_boundaryConditionEquations = omc_mk_icon(_boundaryConditionEquations); }
  return out_approximatedEquations;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getEquationsTaggedApproximatedOrBoundaryCondition(threadData_t *threadData, modelica_metatype _eqs, modelica_integer _index, modelica_metatype *out_boundaryConditionEquations)
{
  modelica_metatype _approximatedEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _boundaryConditionEquations = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean _isApproximateEquations;
  modelica_boolean _isConstantEquations;
  modelica_integer _i;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _approximatedEquations = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _boundaryConditionEquations = tmpMeta2;
  // _isApproximateEquations has no default value.
  // _isConstantEquations has no default value.
  // _i has no default value.
  _i = _index;

  {
    modelica_metatype _eq;
    for (tmpMeta3 = _eqs; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eq = MMC_CAR(tmpMeta3);
      _isApproximateEquations = omc_DataReconciliation_isEquationTaggedApproximatedOrBoundaryCondition(threadData, _eq ,&_isConstantEquations);

      if(_isApproximateEquations)
      {
        tmpMeta4 = mmc_mk_cons(omc_mk_integer(_i), _approximatedEquations);
        _approximatedEquations = tmpMeta4;
      }
      else
      {
        if(_isConstantEquations)
        {
          tmpMeta5 = mmc_mk_cons(omc_mk_integer(_i), _boundaryConditionEquations);
          _boundaryConditionEquations = tmpMeta5;
        }
      }

      _i = ((modelica_integer) 1) + _i;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_boundaryConditionEquations) { *out_boundaryConditionEquations = _boundaryConditionEquations; }
  omc_ret_ = _approximatedEquations;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_getEquationsTaggedApproximatedOrBoundaryCondition(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _index, modelica_metatype *out_boundaryConditionEquations)
{
  modelica_integer tmp1;
  modelica_metatype _approximatedEquations = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_index);
  _approximatedEquations = omc_DataReconciliation_getEquationsTaggedApproximatedOrBoundaryCondition(threadData, _eqs, tmp1, out_boundaryConditionEquations);
  /* skip box _approximatedEquations; list<#Integer> */
  /* skip box _boundaryConditionEquations; list<#Integer> */
  return _approximatedEquations;
}

DLLModelDirection
void omc_DataReconciliation_dumpListList(threadData_t *threadData, modelica_metatype _lstLst, modelica_string _heading)
{
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = stringAppend(_OMC_LIT14,_heading);
  tmp2 = stringAppend(tmp1,_OMC_LIT130);
  tmp3 = stringAppend(tmp2,_OMC_LIT61);
  tmp4 = stringAppend(tmp3,_OMC_LIT14);
  tmp5 = stringAppend(tmp4,_OMC_LIT131);
  tmp6 = stringAppend(tmp5,stringDelimitList(omc_List_map(threadData, _lstLst, boxvar_DataReconciliation_dumplistInteger), _OMC_LIT16));
  tmp7 = stringAppend(tmp6,_OMC_LIT132);
  tmp8 = stringAppend(tmp7,_OMC_LIT59);
  fputs(omc_string_data(tmp8),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getUncertainRefineAndUnknownVariableIndexes(threadData_t *threadData, modelica_metatype _allVariables, modelica_metatype _variableIndexList, modelica_metatype *out_unknowns)
{
  modelica_metatype _knowns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _unknowns = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _knowns = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _unknowns = tmpMeta2;
  {
    modelica_metatype _index;
    for (tmpMeta3 = _variableIndexList; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _index = MMC_CAR(tmpMeta3);
      if(omc_BackendVariable_varHasUncertainValueRefine(threadData, omc_BackendVariable_getVarAt(threadData, _allVariables, omc_unbox_integer(_index))))
      {
        tmpMeta4 = mmc_mk_cons(_index, _knowns);
        _knowns = tmpMeta4;
      }
      else
      {
        tmpMeta5 = mmc_mk_cons(_index, _unknowns);
        _unknowns = tmpMeta5;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_unknowns) { *out_unknowns = _unknowns; }
  omc_ret_ = _knowns;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getVariablesBlockCategories(threadData_t *threadData, modelica_metatype _allVariables, modelica_metatype _variableIndexList, modelica_metatype *out_boundaryConditionVars, modelica_metatype *out_exactEquationVars, modelica_metatype *out_unMeasuredVariablesOfInterest)
{
  modelica_metatype _knowns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _boundaryConditionVars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _exactEquationVars = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _unMeasuredVariablesOfInterest = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _knowns = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _boundaryConditionVars = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _exactEquationVars = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _unMeasuredVariablesOfInterest = tmpMeta4;
  // _var has no default value.
  {
    modelica_metatype _index;
    for (tmpMeta5 = _variableIndexList; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _index = MMC_CAR(tmpMeta5);
      _var = omc_BackendVariable_getVarAt(threadData, _allVariables, omc_unbox_integer(_index));

      if(omc_BackendVariable_varHasUncertainValueRefine(threadData, omc_BackendVariable_getVarAt(threadData, _allVariables, omc_unbox_integer(_index))))
      {
        tmpMeta6 = mmc_mk_cons(_index, _knowns);
        _knowns = tmpMeta6;
      }
      else
      {
        if(omc_BackendVariable_hasOpenModelicaBoundaryConditionAnnotation(threadData, _var))
        {
          tmpMeta7 = mmc_mk_cons(_index, _boundaryConditionVars);
          _boundaryConditionVars = tmpMeta7;
        }
        else
        {
          tmpMeta8 = mmc_mk_cons(_index, _exactEquationVars);
          _exactEquationVars = tmpMeta8;
        }
      }

      if(omc_BackendVariable_varHasUncertainValuePropagate(threadData, omc_BackendVariable_getVarAt(threadData, _allVariables, omc_unbox_integer(_index))))
      {
        tmpMeta9 = mmc_mk_cons(_index, _unMeasuredVariablesOfInterest);
        _unMeasuredVariablesOfInterest = tmpMeta9;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_boundaryConditionVars) { *out_boundaryConditionVars = _boundaryConditionVars; }
  if (out_exactEquationVars) { *out_exactEquationVars = _exactEquationVars; }
  if (out_unMeasuredVariablesOfInterest) { *out_unMeasuredVariablesOfInterest = _unMeasuredVariablesOfInterest; }
  omc_ret_ = _knowns;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_getSolvedEquationAndVarsInfo(threadData_t *threadData, modelica_metatype _v, modelica_metatype *out_solvedEqLst)
{
  modelica_metatype _eqvarlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _solvedEqLst = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _count;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqvarlist = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _solvedEqLst = tmpMeta2;
  _count = ((modelica_integer) 1);
  {
    modelica_metatype _i;
    for (tmpMeta3 = _v, tmp9 = arrayLength(tmpMeta3), tmp8 = 1; tmp8 <= tmp9; tmp8++)
    {
      _i = arrayGet(tmpMeta3,tmp8);
      tmpMeta5 = omc_mk_box2(0, _i, omc_mk_integer(_count));
      tmpMeta4 = mmc_mk_cons(tmpMeta5, _eqvarlist);
      _eqvarlist = tmpMeta4;

      tmpMeta6 = mmc_mk_cons(_i, _solvedEqLst);
      _solvedEqLst = tmpMeta6;

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_solvedEqLst) { *out_solvedEqLst = _solvedEqLst; }
  omc_ret_ = _eqvarlist;
  return omc_ret_;
}

DLLModelDirection
modelica_integer omc_DataReconciliation_getSolvedEquationNumber(threadData_t *threadData, modelica_integer _varnumber, modelica_metatype _inlist)
{
  modelica_integer _solvedeq;
  modelica_integer _solvedvar;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _solvedeq has no default value.
  // _solvedvar has no default value.
  {
    modelica_metatype _var;
    for (tmpMeta1 = _inlist; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _var;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmp4 = omc_unbox_integer(tmpMeta3);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 2);
      tmp6 = omc_unbox_integer(tmpMeta5);
      _solvedeq = tmp4  /* pattern as ty=Integer */;
      _solvedvar = tmp6  /* pattern as ty=Integer */;

      if((_varnumber == _solvedvar))
      {
        goto _return;
      }
    }
  }

  OMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _solvedeq;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_getSolvedEquationNumber(threadData_t *threadData, modelica_metatype _varnumber, modelica_metatype _inlist)
{
  modelica_integer tmp1;
  modelica_integer _solvedeq;
  modelica_metatype out_solvedeq;
  tmp1 = omc_unbox_integer(_varnumber);
  _solvedeq = omc_DataReconciliation_getSolvedEquationNumber(threadData, tmp1, _inlist);
  out_solvedeq = omc_mk_icon(_solvedeq);
  return out_solvedeq;
}

DLLModelDirection
modelica_integer omc_DataReconciliation_getSolvedVariableNumber(threadData_t *threadData, modelica_integer _eqnumber, modelica_metatype _inlist)
{
  modelica_integer _solvedvar;
  modelica_integer _solvedeq;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _solvedvar has no default value.
  // _solvedeq has no default value.
  {
    modelica_metatype _var;
    for (tmpMeta1 = _inlist; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _var;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmp4 = omc_unbox_integer(tmpMeta3);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 2);
      tmp6 = omc_unbox_integer(tmpMeta5);
      _solvedeq = tmp4  /* pattern as ty=Integer */;
      _solvedvar = tmp6  /* pattern as ty=Integer */;

      if((_eqnumber == _solvedeq))
      {
        goto _return;
      }
    }
  }

  OMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _solvedvar;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_getSolvedVariableNumber(threadData_t *threadData, modelica_metatype _eqnumber, modelica_metatype _inlist)
{
  modelica_integer tmp1;
  modelica_integer _solvedvar;
  modelica_metatype out_solvedvar;
  tmp1 = omc_unbox_integer(_eqnumber);
  _solvedvar = omc_DataReconciliation_getSolvedVariableNumber(threadData, tmp1, _inlist);
  out_solvedvar = omc_mk_icon(_solvedvar);
  return out_solvedvar;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_checkBlueOrRedOrBrownBlocks(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _knowns, modelica_metatype _boundaryConditionVars, modelica_metatype _exactEquationVars, modelica_metatype _solvedVar, modelica_metatype *out_outStringList)
{
  modelica_metatype _outIntegerList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _varNumber;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIntegerList = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outStringList = tmpMeta2;
  // _varNumber has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _inlist; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      _varNumber = omc_DataReconciliation_getSolvedVariableNumber(threadData, omc_unbox_integer(_i), _solvedVar);

      if(listMember(omc_mk_integer(_varNumber), _knowns))
      {
        tmpMeta4 = mmc_mk_cons(_OMC_LIT119, _outStringList);
        _outStringList = tmpMeta4;

        tmpMeta5 = mmc_mk_cons(_i, _outIntegerList);
        _outIntegerList = tmpMeta5;
      }
      else
      {
        if(listMember(omc_mk_integer(_varNumber), _exactEquationVars))
        {
          tmpMeta6 = mmc_mk_cons(_OMC_LIT118, _outStringList);
          _outStringList = tmpMeta6;

          tmpMeta7 = mmc_mk_cons(_i, _outIntegerList);
          _outIntegerList = tmpMeta7;
        }
        else
        {
          tmpMeta8 = mmc_mk_cons(_OMC_LIT133, _outStringList);
          _outStringList = tmpMeta8;

          tmpMeta9 = mmc_mk_cons(_i, _outIntegerList);
          _outIntegerList = tmpMeta9;
        }
      }
    }
  }

  _outIntegerList = listReverse(_outIntegerList);

  _outStringList = listReverse(_outStringList);
  _return: OMC_LABEL_UNUSED
  if (out_outStringList) { *out_outStringList = _outStringList; }
  omc_ret_ = _outIntegerList;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_traverseBLTAndUpdateBlockStatus(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _knowns, modelica_metatype _boundaryConditionVars, modelica_metatype _exactEquationVars, modelica_metatype _solvedVariables, modelica_metatype *out_outstringlist)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outstringlist = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _blocks = NULL;
  modelica_metatype _blockinfo = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outstringlist = tmpMeta2;
  // _blocks has no default value.
  // _blockinfo has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _inlist; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      _blocks = omc_DataReconciliation_checkBlueOrRedOrBrownBlocks(threadData, _i, _knowns, _boundaryConditionVars, _exactEquationVars, _solvedVariables ,&_blockinfo);

      tmpMeta4 = mmc_mk_cons(_blocks, _outlist);
      _outlist = tmpMeta4;

      tmpMeta5 = mmc_mk_cons(_blockinfo, _outstringlist);
      _outstringlist = tmpMeta5;
    }
  }

  _outlist = listReverse(_outlist);

  _outstringlist = listReverse(_outstringlist);
  _return: OMC_LABEL_UNUSED
  if (out_outstringlist) { *out_outstringlist = _outstringlist; }
  omc_ret_ = _outlist;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_DataReconciliation_dumplistInteger(threadData_t *threadData, modelica_metatype _inlist)
{
  modelica_string _outstring = NULL;
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outstring has no default value.
  // _s has no default value.
  _s = omc_List_map(threadData, _inlist, boxvar_intString);

  omc_string_store(&(_outstring), stringDelimitList(_s, _OMC_LIT134));

  tmpMeta1 = mmc_mk_cons(_OMC_LIT131, mmc_mk_cons(_outstring, mmc_mk_cons(_OMC_LIT132, MMC_REFSTRUCTLIT(mmc_nil))));
  omc_string_store(&(_outstring), stringAppendList(tmpMeta1));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_inverseModelicaModel(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _knownVariablesWithEquationBinding)
{
  modelica_metatype _eqnlst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _variablesOfInterest = NULL;
  modelica_metatype _variablesOfInterestIndexes = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqnlst = tmpMeta1;
  // _variablesOfInterest has no default value.
  // _variablesOfInterestIndexes has no default value.
  // _eq has no default value.
  _variablesOfInterest = omc_List_filterOnTrue(threadData, omc_BackendVariable_varList(threadData, _inVar), boxvar_BackendVariable_varHasUncertainValueRefine);

  {
    modelica_metatype _var;
    for (tmpMeta2 = _variablesOfInterest; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      tmpMeta3 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
      _variablesOfInterestIndexes = omc_BackendVariable_getVarIndexFromVars(threadData, tmpMeta3, _inVar);

      if(listEmpty(omc_List_intersectionOnTrue(threadData, _variablesOfInterestIndexes, _knownVariablesWithEquationBinding, boxvar_intEq)))
      {
        tmpMeta4 = omc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, omc_Expression_crefExp(threadData, (OMC_BOX_FIELD(_var, 2))), _OMC_LIT136, _OMC_LIT139, _OMC_LIT142);
        _eq = tmpMeta4;

        tmpMeta5 = mmc_mk_cons(_eq, _eqnlst);
        _eqnlst = tmpMeta5;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqnlst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_setEBLTEquationsWithIndexAndRank(threadData_t *threadData, modelica_metatype _unMatchedEqList, modelica_metatype _unMatchedEqsLstCorrectIndex, modelica_metatype _inEqArray, modelica_metatype _adjacencyMatrix, modelica_metatype *out_e_BLTAdjacencyMatrix, modelica_metatype *out_e_BLTSolvedEqsAndVars, modelica_metatype *out_e_BLTBlocks, modelica_metatype *out_e_BLTBlockRanks)
{
  modelica_metatype _eBLT_Equation_WithIndex = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _e_BLTAdjacencyMatrix = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _e_BLTSolvedEqsAndVars = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _e_BLTBlocks = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _e_BLTBlockRanks = NULL;
  modelica_metatype tmpMeta5;
  modelica_integer _count;
  modelica_integer _actualIndex;
  modelica_integer _index;
  modelica_metatype _varsInfoList = NULL;
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
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eBLT_Equation_WithIndex = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _e_BLTAdjacencyMatrix = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _e_BLTSolvedEqsAndVars = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _e_BLTBlocks = tmpMeta4;
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _e_BLTBlockRanks = tmpMeta5;
  _count = ((modelica_integer) 1);
  // _actualIndex has no default value.
  _index = ((modelica_integer) -1);
  // _varsInfoList has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta6 = _unMatchedEqList; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _i = MMC_CAR(tmpMeta6);
      _actualIndex = omc_unbox_integer(listGet(_unMatchedEqsLstCorrectIndex, _count));

      tmpMeta8 = omc_mk_box2(0, omc_mk_integer(_index), omc_BackendEquation_get(threadData, _inEqArray, _actualIndex));
      tmpMeta7 = mmc_mk_cons(tmpMeta8, _eBLT_Equation_WithIndex);
      _eBLT_Equation_WithIndex = tmpMeta7;

      _varsInfoList = arrayGet(_adjacencyMatrix, omc_unbox_integer(_i));

      tmpMeta10 = omc_mk_box2(0, omc_mk_integer(_index), _varsInfoList);
      tmpMeta9 = mmc_mk_cons(tmpMeta10, _e_BLTAdjacencyMatrix);
      _e_BLTAdjacencyMatrix = tmpMeta9;

      tmpMeta12 = omc_mk_box2(0, omc_mk_integer(_index), listGet(omc_List_sort(threadData, _varsInfoList, boxvar_intLt), ((modelica_integer) 1)));
      tmpMeta11 = mmc_mk_cons(tmpMeta12, _e_BLTSolvedEqsAndVars);
      _e_BLTSolvedEqsAndVars = tmpMeta11;

      tmpMeta14 = mmc_mk_cons(omc_mk_integer(_index), MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta13 = mmc_mk_cons(tmpMeta14, _e_BLTBlocks);
      _e_BLTBlocks = tmpMeta13;

      tmpMeta16 = mmc_mk_cons(omc_mk_integer(_index), MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta17 = omc_mk_box2(0, tmpMeta16, omc_mk_integer(_index));
      tmpMeta15 = mmc_mk_cons(tmpMeta17, _e_BLTBlockRanks);
      _e_BLTBlockRanks = tmpMeta15;

      _index = ((modelica_integer) -1) + _index;

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _eBLT_Equation_WithIndex = listReverse(_eBLT_Equation_WithIndex);

  _e_BLTAdjacencyMatrix = listReverse(_e_BLTAdjacencyMatrix);

  _e_BLTSolvedEqsAndVars = listReverse(_e_BLTSolvedEqsAndVars);

  _e_BLTBlocks = listReverse(_e_BLTBlocks);

  _e_BLTBlockRanks = listReverse(_e_BLTBlockRanks);
  _return: OMC_LABEL_UNUSED
  if (out_e_BLTAdjacencyMatrix) { *out_e_BLTAdjacencyMatrix = _e_BLTAdjacencyMatrix; }
  if (out_e_BLTSolvedEqsAndVars) { *out_e_BLTSolvedEqsAndVars = _e_BLTSolvedEqsAndVars; }
  if (out_e_BLTBlocks) { *out_e_BLTBlocks = _e_BLTBlocks; }
  if (out_e_BLTBlockRanks) { *out_e_BLTBlockRanks = _e_BLTBlockRanks; }
  omc_ret_ = _eBLT_Equation_WithIndex;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_filterTargetBlocksWithoutRanks(threadData_t *threadData, modelica_metatype _targetBlocks, modelica_metatype _inBlocks)
{
  modelica_metatype _outBlocks = NULL;
  modelica_metatype _mainBlocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBlocks has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _mainBlocks = tmpMeta1;
  {
    modelica_metatype _blocks;
    for (tmpMeta2 = _targetBlocks; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _blocks = MMC_CAR(tmpMeta2);
      _mainBlocks = omc_List_append__reverse(threadData, omc_Util_tuple21(threadData, _blocks), _mainBlocks);
    }
  }

  _outBlocks = listAppend(_inBlocks, listReverse(_mainBlocks));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outBlocks;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_ExtractEquationsUsingSetOperations(threadData_t *threadData, modelica_metatype _predecessorBlockInfo, modelica_metatype _e_BLTBlockRanks, modelica_metatype _approximatedEquations, modelica_boolean _debug, modelica_metatype *out_setS)
{
  modelica_metatype _setC = NULL;
  modelica_metatype _setS = NULL;
  modelica_metatype _mainBlock = NULL;
  modelica_metatype _tmpSetC_1 = NULL;
  modelica_metatype _tmpSetC_2 = NULL;
  modelica_metatype _tmpSetS_1 = NULL;
  modelica_metatype _tmpSetS_2 = NULL;
  modelica_metatype _z1 = NULL;
  modelica_metatype _z2 = NULL;
  modelica_metatype _targetBlocks = NULL;
  modelica_metatype _knownBlocks = NULL;
  modelica_metatype _constantBlocks = NULL;
  modelica_metatype _e_BLTBlockRanksWithoutRanks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _targetBlocksWithKnowns = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _targetBlocksWithUnknowns = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _targetBlocksWithConstants = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
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
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _setC has no default value.
  // _setS has no default value.
  // _mainBlock has no default value.
  // _tmpSetC_1 has no default value.
  // _tmpSetC_2 has no default value.
  // _tmpSetS_1 has no default value.
  // _tmpSetS_2 has no default value.
  // _z1 has no default value.
  // _z2 has no default value.
  // _targetBlocks has no default value.
  // _knownBlocks has no default value.
  // _constantBlocks has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _e_BLTBlockRanksWithoutRanks = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _targetBlocksWithKnowns = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _targetBlocksWithUnknowns = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _targetBlocksWithConstants = tmpMeta4;
  {
    modelica_metatype _blocks;
    for (tmpMeta5 = _predecessorBlockInfo; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _blocks = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _blocks;
      tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
      tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 2);
      tmpMeta9 = OMC_BOX_FIELD(tmpMeta6, 4);
      tmpMeta10 = OMC_BOX_FIELD(tmpMeta6, 5);
      _mainBlock = tmpMeta7;
      _targetBlocks = tmpMeta8;
      _knownBlocks = tmpMeta9;
      _constantBlocks = tmpMeta10;

      if((!listEmpty(_knownBlocks)))
      {
        _targetBlocksWithKnowns = omc_DataReconciliation_filterTargetBlocksWithoutRanks(threadData, listRest(_targetBlocks), _targetBlocksWithKnowns);
      }
      else
      {
        if((!listEmpty(_constantBlocks)))
        {
          _targetBlocksWithConstants = omc_DataReconciliation_filterTargetBlocksWithoutRanks(threadData, _targetBlocks, _targetBlocksWithConstants);
        }
        else
        {
          _targetBlocksWithUnknowns = omc_DataReconciliation_filterTargetBlocksWithoutRanks(threadData, _targetBlocks, _targetBlocksWithUnknowns);
        }
      }
    }
  }

  _targetBlocksWithKnowns = omc_List_unique(threadData, _targetBlocksWithKnowns);

  _targetBlocksWithUnknowns = omc_List_unique(threadData, _targetBlocksWithUnknowns);

  _targetBlocksWithConstants = omc_List_unique(threadData, _targetBlocksWithConstants);

  _e_BLTBlockRanksWithoutRanks = omc_DataReconciliation_filterTargetBlocksWithoutRanks(threadData, _e_BLTBlockRanks, _e_BLTBlockRanksWithoutRanks);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT143),stdout);

    tmp12 = stringAppend(_OMC_LIT144,omc_DataReconciliation_dumplistInteger(threadData, _e_BLTBlockRanksWithoutRanks));
    fputs(omc_string_data(tmp12),stdout);

    tmp13 = stringAppend(_OMC_LIT145,omc_DataReconciliation_dumplistInteger(threadData, _targetBlocksWithKnowns));
    fputs(omc_string_data(tmp13),stdout);

    tmp14 = stringAppend(_OMC_LIT146,omc_DataReconciliation_dumplistInteger(threadData, _targetBlocksWithUnknowns));
    fputs(omc_string_data(tmp14),stdout);

    tmp15 = stringAppend(_OMC_LIT147,omc_DataReconciliation_dumplistInteger(threadData, _targetBlocksWithConstants));
    fputs(omc_string_data(tmp15),stdout);
  }

  _tmpSetC_1 = omc_List_intersectionOnTrue(threadData, _targetBlocksWithKnowns, _e_BLTBlockRanksWithoutRanks, boxvar_intEq);

  _tmpSetC_2 = omc_List_intersectionOnTrue(threadData, _targetBlocksWithUnknowns, _e_BLTBlockRanksWithoutRanks, boxvar_intEq);

  _setC = omc_List_setDifferenceOnTrue(threadData, _tmpSetC_1, _tmpSetC_2, boxvar_intEq);

  _setC = omc_List_setDifferenceOnTrue(threadData, _setC, _approximatedEquations, boxvar_intEq);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT148),stdout);

    tmp16 = stringAppend(_OMC_LIT149,omc_DataReconciliation_dumplistInteger(threadData, _tmpSetC_1));
    fputs(omc_string_data(tmp16),stdout);

    tmp17 = stringAppend(_OMC_LIT150,omc_DataReconciliation_dumplistInteger(threadData, _tmpSetC_2));
    fputs(omc_string_data(tmp17),stdout);

    tmp18 = stringAppend(_OMC_LIT151,omc_DataReconciliation_dumplistInteger(threadData, _setC));
    fputs(omc_string_data(tmp18),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }

  _tmpSetS_1 = omc_List_setDifferenceOnTrue(threadData, _targetBlocksWithKnowns, _targetBlocksWithUnknowns, boxvar_intEq);

  _tmpSetS_2 = omc_List_setDifferenceOnTrue(threadData, _tmpSetS_1, _e_BLTBlockRanksWithoutRanks, boxvar_intEq);

  _z1 = omc_List_setDifferenceOnTrue(threadData, _targetBlocksWithConstants, _targetBlocksWithUnknowns, boxvar_intEq);

  _z2 = omc_List_setDifferenceOnTrue(threadData, _z1, _e_BLTBlockRanksWithoutRanks, boxvar_intEq);

  _setS = omc_List_unique(threadData, omc_List_union(threadData, _tmpSetS_2, _z2));

  _setS = omc_List_setDifferenceOnTrue(threadData, _setS, _approximatedEquations, boxvar_intEq);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT152),stdout);

    tmp19 = stringAppend(_OMC_LIT153,omc_DataReconciliation_dumplistInteger(threadData, _tmpSetS_1));
    fputs(omc_string_data(tmp19),stdout);

    tmp20 = stringAppend(_OMC_LIT154,omc_DataReconciliation_dumplistInteger(threadData, _tmpSetS_2));
    fputs(omc_string_data(tmp20),stdout);

    tmp21 = stringAppend(_OMC_LIT155,omc_DataReconciliation_dumplistInteger(threadData, _z1));
    fputs(omc_string_data(tmp21),stdout);

    tmp22 = stringAppend(_OMC_LIT156,omc_DataReconciliation_dumplistInteger(threadData, _z2));
    fputs(omc_string_data(tmp22),stdout);

    tmp23 = stringAppend(_OMC_LIT157,omc_DataReconciliation_dumplistInteger(threadData, _setS));
    fputs(omc_string_data(tmp23),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_setS) { *out_setS = _setS; }
  omc_ret_ = _setC;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_ExtractEquationsUsingSetOperations(threadData_t *threadData, modelica_metatype _predecessorBlockInfo, modelica_metatype _e_BLTBlockRanks, modelica_metatype _approximatedEquations, modelica_metatype _debug, modelica_metatype *out_setS)
{
  modelica_integer tmp1;
  modelica_metatype _setC = NULL;
  tmp1 = omc_unbox_integer(_debug);
  _setC = omc_DataReconciliation_ExtractEquationsUsingSetOperations(threadData, _predecessorBlockInfo, _e_BLTBlockRanks, _approximatedEquations, tmp1, out_setS);
  /* skip box _setC; list<#Integer> */
  /* skip box _setS; list<#Integer> */
  return _setC;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpPredecessorBlocksHelper(threadData_t *threadData, modelica_metatype _predecessorBlockInfo, modelica_string _blockInfo, modelica_string _header)
{
  modelica_metatype _mainBlock = NULL;
  modelica_metatype _targetBlocks = NULL;
  modelica_metatype _knownBlocks = NULL;
  modelica_metatype _constantBlocks = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mainBlock has no default value.
  // _targetBlocks has no default value.
  // _knownBlocks has no default value.
  // _constantBlocks has no default value.
  tmp1 = stringAppend(_OMC_LIT14,_header);
  tmp2 = stringAppend(tmp1,_OMC_LIT158);
  tmp3 = stringAppend(tmp2,intString(listLength(_predecessorBlockInfo)));
  tmp4 = stringAppend(tmp3,_OMC_LIT159);
  tmp5 = stringAppend(tmp4,_OMC_LIT160);
  fputs(omc_string_data(tmp5),stdout);

  {
    modelica_metatype _blocks;
    for (tmpMeta6 = listReverse(_predecessorBlockInfo); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _blocks = MMC_CAR(tmpMeta6);
      /* Pattern-matching assignment */
      tmpMeta7 = _blocks;
      tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
      tmpMeta9 = OMC_BOX_FIELD(tmpMeta7, 2);
      tmpMeta10 = OMC_BOX_FIELD(tmpMeta7, 4);
      tmpMeta11 = OMC_BOX_FIELD(tmpMeta7, 5);
      _mainBlock = tmpMeta8;
      _targetBlocks = tmpMeta9;
      _knownBlocks = tmpMeta10;
      _constantBlocks = tmpMeta11;

      tmp12 = stringAppend(_OMC_LIT161,omc_DataReconciliation_dumplistInteger(threadData, _mainBlock));
      tmp13 = stringAppend(tmp12,_OMC_LIT162);
      tmp14 = stringAppend(tmp13,mmc_anyString(_targetBlocks));
      tmp15 = stringAppend(tmp14,_OMC_LIT163);
      tmp16 = stringAppend(tmp15,omc_DataReconciliation_dumplistInteger(threadData, _knownBlocks));
      tmp17 = stringAppend(tmp16,_OMC_LIT164);
      tmp18 = stringAppend(tmp17,omc_DataReconciliation_dumplistInteger(threadData, _constantBlocks));
      fputs(omc_string_data(tmp18),stdout);
    }
  }

  fputs(omc_string_data(_OMC_LIT59),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpPredecessorBlocks(threadData_t *threadData, modelica_metatype _predecessorBlockInfo)
{
  modelica_metatype _knownBlocks = NULL;
  modelica_metatype _constantBlocks = NULL;
  modelica_metatype _blueBlocksTargets = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _redBlocksTargets = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _constantBlocksTargets = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _knownBlocks has no default value.
  // _constantBlocks has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blueBlocksTargets = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _redBlocksTargets = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _constantBlocksTargets = tmpMeta3;
  fputs(omc_string_data(_OMC_LIT165),stdout);

  {
    modelica_metatype _blocks;
    for (tmpMeta4 = _predecessorBlockInfo; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _blocks = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _blocks;
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 4);
      tmpMeta7 = OMC_BOX_FIELD(tmpMeta5, 5);
      _knownBlocks = tmpMeta6;
      _constantBlocks = tmpMeta7;

      if((!listEmpty(_knownBlocks)))
      {
        tmpMeta8 = mmc_mk_cons(_blocks, _blueBlocksTargets);
        _blueBlocksTargets = tmpMeta8;
      }
      else
      {
        if((!listEmpty(_constantBlocks)))
        {
          tmpMeta9 = mmc_mk_cons(_blocks, _constantBlocksTargets);
          _constantBlocksTargets = tmpMeta9;
        }
        else
        {
          tmpMeta10 = mmc_mk_cons(_blocks, _redBlocksTargets);
          _redBlocksTargets = tmpMeta10;
        }
      }
    }
  }

  fputs(omc_string_data(_OMC_LIT14),stdout);

  omc_DataReconciliation_dumpPredecessorBlocksHelper(threadData, _blueBlocksTargets, _OMC_LIT119, _OMC_LIT166);

  omc_DataReconciliation_dumpPredecessorBlocksHelper(threadData, _redBlocksTargets, _OMC_LIT133, _OMC_LIT167);

  omc_DataReconciliation_dumpPredecessorBlocksHelper(threadData, _constantBlocksTargets, _OMC_LIT168, _OMC_LIT169);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpBlockTargets(threadData_t *threadData, modelica_metatype _s_BLTBlockTargetInfo)
{
  modelica_metatype _mainBlock = NULL;
  modelica_metatype _targetBlocks = NULL;
  modelica_metatype _targetBlocksStatusVarInfo = NULL;
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
  modelica_metatype tmpMeta11;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mainBlock has no default value.
  // _targetBlocks has no default value.
  // _targetBlocksStatusVarInfo has no default value.
  fputs(omc_string_data(_OMC_LIT170),stdout);

  {
    modelica_metatype _blocks;
    for (tmpMeta1 = _s_BLTBlockTargetInfo; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _blocks = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _blocks;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 3);
      _mainBlock = tmpMeta3;
      _targetBlocks = tmpMeta4;
      _targetBlocksStatusVarInfo = tmpMeta5;

      tmp6 = stringAppend(_OMC_LIT161,omc_DataReconciliation_dumplistInteger(threadData, _mainBlock));
      tmp7 = stringAppend(tmp6,_OMC_LIT162);
      tmp8 = stringAppend(tmp7,mmc_anyString(_targetBlocks));
      tmp9 = stringAppend(tmp8,_OMC_LIT171);
      tmp10 = stringAppend(tmp9,mmc_anyString(_targetBlocksStatusVarInfo));
      fputs(omc_string_data(tmp10),stdout);
    }
  }

  fputs(omc_string_data(_OMC_LIT14),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpBlockStatus(threadData_t *threadData, modelica_metatype _allBlocks, modelica_metatype _allBlocksStatusVarInfo)
{
  modelica_integer _count;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = ((modelica_integer) 1);
  fputs(omc_string_data(_OMC_LIT172),stdout);

  {
    modelica_metatype _blocks;
    for (tmpMeta1 = _allBlocks; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _blocks = MMC_CAR(tmpMeta1);
      tmp2 = stringAppend(_OMC_LIT161,omc_DataReconciliation_dumplistInteger(threadData, _blocks));
      tmp3 = stringAppend(tmp2,_OMC_LIT171);
      tmp4 = stringAppend(tmp3,mmc_anyString(listGet(_allBlocksStatusVarInfo, _count)));
      fputs(omc_string_data(tmp4),stdout);

      _count = ((modelica_integer) 1) + _count;
    }
  }

  fputs(omc_string_data(_OMC_LIT14),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpSetSVars(threadData_t *threadData, modelica_metatype _setSVars, modelica_string _heading)
{
  modelica_integer _count;
  modelica_metatype _var = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = ((modelica_integer) 1);
  // _var has no default value.
  tmp1 = stringAppend(_OMC_LIT14,_heading);
  tmp2 = stringAppend(tmp1,_OMC_LIT158);
  tmp3 = stringAppend(tmp2,intString(omc_BackendVariable_varsSize(threadData, _setSVars)));
  tmp4 = stringAppend(tmp3,_OMC_LIT173);
  tmp5 = stringAppend(tmp4,_OMC_LIT174);
  tmp6 = stringAppend(tmp5,_OMC_LIT14);
  fputs(omc_string_data(tmp6),stdout);

  {
    modelica_metatype _var;
    for (tmpMeta7 = omc_BackendVariable_varList(threadData, _setSVars); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _var = MMC_CAR(tmpMeta7);
      tmp8 = stringAppend(_OMC_LIT14,intString(_count));
      tmp9 = stringAppend(tmp8,_OMC_LIT115);
      tmp10 = stringAppend(tmp9,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
      tmp11 = stringAppend(tmp10,_OMC_LIT175);
      tmp12 = stringAppend(tmp11,omc_DAEDump_daeTypeStr(threadData, (OMC_BOX_FIELD(_var, 6))));
      fputs(omc_string_data(tmp12),stdout);

      _count = ((modelica_integer) 1) + _count;
    }
  }

  fputs(omc_string_data(_OMC_LIT59),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData_t *threadData, modelica_metatype _tempSetS, modelica_metatype _solvedEqsVarInfo, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _orderedVars, modelica_string _heading)
{
  modelica_integer _count;
  modelica_integer _varNumber;
  modelica_integer _mappedEq;
  modelica_metatype _var = NULL;
  modelica_metatype _tmpEq = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
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
  modelica_metatype tmpMeta21;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = ((modelica_integer) 1);
  // _varNumber has no default value.
  // _mappedEq has no default value.
  // _var has no default value.
  // _tmpEq has no default value.
  if((!(stringLength(_heading) == ((modelica_integer) 0))))
  {
    tmp1 = stringAppend(_OMC_LIT14,_heading);
    tmp2 = stringAppend(tmp1,_OMC_LIT176);
    tmp3 = stringAppend(tmp2,_OMC_LIT177);
    tmp4 = stringAppend(tmp3,intString(listLength(_tempSetS)));
    tmp5 = stringAppend(tmp4,_OMC_LIT159);
    tmp6 = stringAppend(tmp5,_OMC_LIT178);
    fputs(omc_string_data(tmp6),stdout);
  }

  {
    modelica_metatype _eq;
    for (tmpMeta7 = _tempSetS; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _eq = MMC_CAR(tmpMeta7);
      _varNumber = omc_DataReconciliation_getSolvedVariableNumber(threadData, omc_unbox_integer(_eq), _solvedEqsVarInfo);

      _var = omc_BackendVariable_getVarAt(threadData, _orderedVars, _varNumber);

      _mappedEq = omc_unbox_integer(arrayGet(_mapIncRowEqn,omc_unbox_integer(_eq)) /* DAE.ASUB */);

      _tmpEq = omc_BackendEquation_get(threadData, _orderedEqs, _mappedEq);

      tmp8 = stringAppend(_OMC_LIT14,intString(_varNumber));
      tmp9 = stringAppend(tmp8,_OMC_LIT115);
      tmp10 = stringAppend(tmp9,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
      tmp11 = stringAppend(tmp10,_OMC_LIT115);
      tmp12 = stringAppend(tmp11,_OMC_LIT177);
      tmp13 = stringAppend(tmp12,intString(_mappedEq));
      tmp14 = stringAppend(tmp13,_OMC_LIT179);
      tmp15 = stringAppend(tmp14,intString(omc_unbox_integer(_eq)));
      tmp16 = stringAppend(tmp15,_OMC_LIT180);
      tmp17 = stringAppend(tmp16,_OMC_LIT177);
      tmp18 = stringAppend(tmp17,intString(omc_BackendEquation_equationSize(threadData, _tmpEq)));
      tmp19 = stringAppend(tmp18,_OMC_LIT180);
      tmp20 = stringAppend(tmp19,omc_BackendDump_equationString(threadData, _tmpEq));
      fputs(omc_string_data(tmp20),stdout);

      _count = ((modelica_integer) 1) + _count;
    }
  }

  fputs(omc_string_data(_OMC_LIT59),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpSetSTargetEquations(threadData_t *threadData, modelica_integer _eq, modelica_metatype _solvedEqsVarInfo, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _orderedVars, modelica_string _heading)
{
  modelica_integer _count;
  modelica_integer _varNumber;
  modelica_integer _mappedEq;
  modelica_metatype _var = NULL;
  modelica_metatype _tmpEq = NULL;
  modelica_string tmp1;
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
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = ((modelica_integer) 1);
  // _varNumber has no default value.
  // _mappedEq has no default value.
  // _var has no default value.
  // _tmpEq has no default value.
  _varNumber = omc_DataReconciliation_getSolvedVariableNumber(threadData, _eq, _solvedEqsVarInfo);

  _var = omc_BackendVariable_getVarAt(threadData, _orderedVars, _varNumber);

  _mappedEq = omc_unbox_integer(arrayGet(_mapIncRowEqn,_eq) /* DAE.ASUB */);

  _tmpEq = omc_BackendEquation_get(threadData, _orderedEqs, _mappedEq);

  tmp1 = stringAppend(_OMC_LIT14,_heading);
  tmp2 = stringAppend(tmp1,intString(_varNumber));
  tmp3 = stringAppend(tmp2,_OMC_LIT115);
  tmp4 = stringAppend(tmp3,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
  tmp5 = stringAppend(tmp4,_OMC_LIT115);
  tmp6 = stringAppend(tmp5,_OMC_LIT177);
  tmp7 = stringAppend(tmp6,intString(_mappedEq));
  tmp8 = stringAppend(tmp7,_OMC_LIT179);
  tmp9 = stringAppend(tmp8,intString(_eq));
  tmp10 = stringAppend(tmp9,_OMC_LIT180);
  tmp11 = stringAppend(tmp10,_OMC_LIT177);
  tmp12 = stringAppend(tmp11,intString(omc_BackendEquation_equationSize(threadData, _tmpEq)));
  tmp13 = stringAppend(tmp12,_OMC_LIT180);
  tmp14 = stringAppend(tmp13,omc_BackendDump_equationString(threadData, _tmpEq));
  fputs(omc_string_data(tmp14),stdout);

  _count = ((modelica_integer) 1) + _count;
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_dumpSetSTargetEquations(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _solvedEqsVarInfo, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _orderedVars, modelica_metatype _heading)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_eq);
  omc_DataReconciliation_dumpSetSTargetEquations(threadData, tmp1, _solvedEqsVarInfo, _mapIncRowEqn, _orderedEqs, _orderedVars, _heading);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getAbsoluteIndexHelper(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outList = tmpMeta1;
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      if((omc_unbox_integer(_i) > ((modelica_integer) 0)))
      {
        tmpMeta3 = mmc_mk_cons(arrayGet(_mapIncRowEqn,omc_unbox_integer(_i)) /* DAE.ASUB */, _outList);
        _outList = tmpMeta3;
      }
      else
      {
        tmpMeta4 = mmc_mk_cons(_i, _outList);
        _outList = tmpMeta4;
      }
    }
  }

  _outList = listReverse(_outList);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outList;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getEquationsFromEBLT(threadData_t *threadData, modelica_integer _eBLTIndex, modelica_metatype _eBLT_Equations)
{
  modelica_metatype _outEquations = NULL;
  modelica_integer _index;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquations has no default value.
  // _index has no default value.
  // _eq has no default value.
  {
    modelica_metatype _eqs;
    for (tmpMeta1 = _eBLT_Equations; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eqs = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _eqs;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmp4 = omc_unbox_integer(tmpMeta3);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 2);
      _index = tmp4  /* pattern as ty=Integer */;
      _eq = tmpMeta5;

      if((_eBLTIndex == _index))
      {
        _outEquations = _eq;

        goto _return;
      }
    }
  }

  OMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outEquations;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_getEquationsFromEBLT(threadData_t *threadData, modelica_metatype _eBLTIndex, modelica_metatype _eBLT_Equations)
{
  modelica_integer tmp1;
  modelica_metatype _outEquations = NULL;
  tmp1 = omc_unbox_integer(_eBLTIndex);
  _outEquations = omc_DataReconciliation_getEquationsFromEBLT(threadData, tmp1, _eBLT_Equations);
  /* skip box _outEquations; BackendDAE.Equation */
  return _outEquations;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _sBLT_Equations, modelica_metatype _eBLT_Equations)
{
  modelica_metatype _outEquationsList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEquationsList = tmpMeta1;
  {
    modelica_metatype _eqIndex;
    for (tmpMeta2 = _inList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqIndex = MMC_CAR(tmpMeta2);
      if((omc_unbox_integer(_eqIndex) > ((modelica_integer) 0)))
      {
        tmpMeta3 = mmc_mk_cons(omc_BackendEquation_get(threadData, _sBLT_Equations, omc_unbox_integer(_eqIndex)), _outEquationsList);
        _outEquationsList = tmpMeta3;
      }
      else
      {
        tmpMeta4 = mmc_mk_cons(omc_DataReconciliation_getEquationsFromEBLT(threadData, omc_unbox_integer(_eqIndex), _eBLT_Equations), _outEquationsList);
        _outEquationsList = tmpMeta4;
      }
    }
  }

  _outEquationsList = listReverse(_outEquationsList);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outEquationsList;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getBoundaryConditionVariables(threadData_t *threadData, modelica_metatype _boundaryConditionEquations, modelica_metatype _solvedEqsVarInfo)
{
  modelica_metatype _boundaryConditionVariables = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _varNumber;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _boundaryConditionVariables = tmpMeta1;
  // _varNumber has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _boundaryConditionEquations; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      _varNumber = omc_DataReconciliation_getSolvedVariableNumber(threadData, omc_unbox_integer(_eq), _solvedEqsVarInfo);

      tmpMeta3 = mmc_mk_cons(omc_mk_integer(_varNumber), _boundaryConditionVariables);
      _boundaryConditionVariables = tmpMeta3;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _boundaryConditionVariables;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getExactConstantVariables(threadData_t *threadData, modelica_metatype _constantEquations, modelica_metatype _solvedEqsVarInfo)
{
  modelica_metatype _constantVariables = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _varNumber;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _constantVariables = tmpMeta1;
  // _varNumber has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _constantEquations; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      _varNumber = omc_DataReconciliation_getSolvedVariableNumber(threadData, omc_unbox_integer(_eq), _solvedEqsVarInfo);

      tmpMeta3 = mmc_mk_cons(omc_mk_integer(_varNumber), _constantVariables);
      _constantVariables = tmpMeta3;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _constantVariables;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getUncertainRefineVariablesBindedEquations(threadData_t *threadData, modelica_metatype _adjacencyMatrix, modelica_metatype _knowns)
{
  modelica_metatype _knownsWithBindedEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _knownsWithBindedEquations = tmpMeta1;
  {
    modelica_metatype _i;
    for (tmpMeta2 = _adjacencyMatrix, tmp9 = arrayLength(tmpMeta2), tmp8 = 1; tmp8 <= tmp9; tmp8++)
    {
      _i = arrayGet(tmpMeta2,tmp8);
      {
        modelica_metatype _j;
        for (tmpMeta3 = _knowns; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _j = MMC_CAR(tmpMeta3);
          tmpMeta4 = mmc_mk_cons(_j, MMC_REFSTRUCTLIT(mmc_nil));
          if(valueEq(_i, tmpMeta4))
          {
            tmpMeta5 = mmc_mk_cons(_j, _knownsWithBindedEquations);
            _knownsWithBindedEquations = tmpMeta5;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _knownsWithBindedEquations;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getBoundaryConditionsEquationIndex(threadData_t *threadData, modelica_metatype _adjacencyMatrix, modelica_metatype _boundaryConditions)
{
  modelica_metatype _boundaryConditionsEquationIndexes = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _count;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _boundaryConditionsEquationIndexes = tmpMeta1;
  _count = ((modelica_integer) 1);
  {
    modelica_metatype _i;
    for (tmpMeta2 = _adjacencyMatrix, tmp9 = arrayLength(tmpMeta2), tmp8 = 1; tmp8 <= tmp9; tmp8++)
    {
      _i = arrayGet(tmpMeta2,tmp8);
      {
        modelica_metatype _j;
        for (tmpMeta3 = _boundaryConditions; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _j = MMC_CAR(tmpMeta3);
          tmpMeta4 = mmc_mk_cons(_j, MMC_REFSTRUCTLIT(mmc_nil));
          if(valueEq(_i, tmpMeta4))
          {
            tmpMeta5 = mmc_mk_cons(omc_mk_integer(_count), _boundaryConditionsEquationIndexes);
            _boundaryConditionsEquationIndexes = tmpMeta5;

            break;
          }
        }
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _boundaryConditionsEquationIndexes;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_deleteEquationsFromEqSyst(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _eqIndex)
{
  modelica_metatype _currentSystem = NULL;
  modelica_metatype _newOrderedEquationArray = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _currentSystem = __omcQ_24in_5FcurrentSystem;
  // _newOrderedEquationArray has no default value.
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_currentSystem), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_BackendEquation_deleteList(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _eqIndex);
  _currentSystem = tmpMeta1;

  _newOrderedEquationArray = omc_BackendEquation_emptyEqns(threadData);

  omc_BackendEquation_addList(threadData, omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_currentSystem, 3))), _newOrderedEquationArray);

  _currentSystem = omc_BackendDAEUtil_setEqSystEqs(threadData, _currentSystem, _newOrderedEquationArray);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _currentSystem;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_setBoundaryConditionEquationsAndVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype __omcQ_24in_5Fshared, modelica_boolean _debug, modelica_metatype *out_shared)
{
  modelica_metatype _currentSystem = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _eqnLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _daeVarsLst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _updatedGlobalKnownVarsLst = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _currentSystem = __omcQ_24in_5FcurrentSystem;
  _shared = __omcQ_24in_5Fshared;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqnLst = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _daeVarsLst = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _updatedGlobalKnownVarsLst = tmpMeta3;
  // _lhs has no default value.
  // _rhs has no default value.
  // _eqn has no default value.
  {
    modelica_metatype _var;
    for (tmpMeta4 = omc_BackendVariable_varList(threadData, (OMC_BOX_FIELD(_shared, 2))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _var = MMC_CAR(tmpMeta4);
      if((omc_BackendVariable_isRealParam(threadData, _var) && ((omc_BackendVariable_hasOpenModelicaBoundaryConditionAnnotation(threadData, _var) || omc_BackendVariable_varHasUncertainValueRefine(threadData, _var)) || omc_BackendVariable_varHasUncertainValuePropagate(threadData, _var))))
      {
        _lhs = omc_BackendVariable_varExp(threadData, _var);

        _rhs = omc_BackendVariable_varBindExpStartValueNoFail(threadData, _var);

        tmpMeta5 = omc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs, _rhs, _OMC_LIT139, _OMC_LIT184);
        _eqn = tmpMeta5;

        tmpMeta6 = mmc_mk_cons(_eqn, _eqnLst);
        _eqnLst = tmpMeta6;

        _var = omc_BackendVariable_setVarKind(threadData, _var, _OMC_LIT185);

        _var = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_none());

        tmpMeta7 = mmc_mk_cons(_var, _daeVarsLst);
        _daeVarsLst = tmpMeta7;
      }
      else
      {
        if(((omc_BackendVariable_isIntParam(threadData, _var) || omc_BackendVariable_isBoolParam(threadData, _var)) && omc_BackendVariable_hasOpenModelicaBoundaryConditionAnnotation(threadData, _var)))
        {
          tmp9 = stringAppend(_OMC_LIT181,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
          tmp10 = stringAppend(tmp9,_OMC_LIT182);
          tmpMeta8 = mmc_mk_cons(tmp10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT67, tmpMeta8);

          OMC_THROW_INTERNAL();
        }
        else
        {
          tmpMeta11 = mmc_mk_cons(_var, _updatedGlobalKnownVarsLst);
          _updatedGlobalKnownVarsLst = tmpMeta11;
        }
      }
    }
  }

  if(_debug)
  {
    omc_BackendDump_dumpVarList(threadData, _daeVarsLst, _OMC_LIT186);
  }

  _currentSystem = omc_BackendVariable_addVarsDAE(threadData, _daeVarsLst, _currentSystem);

  tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_currentSystem), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = omc_BackendEquation_merge(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), omc_BackendEquation_listEquation(threadData, _eqnLst));
  _currentSystem = tmpMeta13;

  _shared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _shared, omc_BackendVariable_listVar(threadData, _updatedGlobalKnownVarsLst));
  _return: OMC_LABEL_UNUSED
  if (out_shared) { *out_shared = _shared; }
  omc_ret_ = _currentSystem;
  return omc_ret_;
}
modelica_metatype boxptr_DataReconciliation_setBoundaryConditionEquationsAndVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype _debug, modelica_metatype *out_shared)
{
  modelica_integer tmp1;
  modelica_metatype _currentSystem = NULL;
  tmp1 = omc_unbox_integer(_debug);
  _currentSystem = omc_DataReconciliation_setBoundaryConditionEquationsAndVars(threadData, __omcQ_24in_5FcurrentSystem, __omcQ_24in_5Fshared, tmp1, out_shared);
  /* skip box _currentSystem; BackendDAE.EqSystem */
  /* skip box _shared; BackendDAE.Shared */
  return _currentSystem;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData_t *threadData, modelica_metatype _eqs, modelica_string _comment)
{
  modelica_string _outstring = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  modelica_string tmp14;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outstring = _OMC_LIT0;
  if(listEmpty(omc_BackendEquation_equationList(threadData, _eqs)))
  {
    tmp1 = stringAppend(_OMC_LIT190,_comment);
    tmp2 = stringAppend(tmp1,_OMC_LIT191);
    omc_string_store(&(_outstring), tmp2);
  }
  else
  {
    tmp3 = stringAppend(_OMC_LIT187,_comment);
    tmp4 = stringAppend(tmp3,_OMC_LIT188);
    omc_string_store(&(_outstring), tmp4);

    {
      modelica_metatype _eq;
      for (tmpMeta5 = omc_BackendEquation_equationList(threadData, _eqs); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
      {
        _eq = MMC_CAR(tmpMeta5);
        tmp6 = stringAppend(_outstring,_OMC_LIT14);
        tmp7 = stringAppend(tmp6,_OMC_LIT46);
        tmp8 = stringAppend(tmp7,_OMC_LIT177);
        tmp9 = stringAppend(tmp8,intString(omc_BackendEquation_equationSize(threadData, _eq)));
        tmp10 = stringAppend(tmp9,_OMC_LIT180);
        tmp11 = stringAppend(tmp10,omc_BackendDump_equationString(threadData, _eq));
        tmp12 = stringAppend(tmp11,_OMC_LIT47);
        omc_string_store(&(_outstring), tmp12);
      }
    }

    tmp14 = stringAppend(_outstring,_OMC_LIT189);
    omc_string_store(&(_outstring), tmp14);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpExtractedEquations(threadData_t *threadData, modelica_string _instring, modelica_metatype _eqs, modelica_string _comment)
{
  modelica_string _outstring = NULL;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outstring = _OMC_LIT0;
  tmp1 = stringAppend(_OMC_LIT192,_comment);
  omc_string_store(&(_outstring), tmp1);

  {
    modelica_metatype _eq;
    for (tmpMeta2 = omc_BackendEquation_equationList(threadData, _eqs); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      tmp3 = stringAppend(_outstring,_OMC_LIT6);
      tmp4 = stringAppend(tmp3,omc_DataReconciliation_dumpEquationString(threadData, _eq));
      tmp5 = stringAppend(tmp4,_OMC_LIT193);
      omc_string_store(&(_outstring), tmp5);
    }
  }

  tmp7 = stringAppend(_instring,_outstring);
  omc_string_store(&(_outstring), tmp7);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpExtractedVars(threadData_t *threadData, modelica_string _instring, modelica_metatype _invar, modelica_string _comment)
{
  modelica_string _outstring = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _cr1 = NULL;
  modelica_metatype _creflast = NULL;
  modelica_boolean _isRec;
  modelica_metatype _path = NULL;
  modelica_metatype _recordvarlist = NULL;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
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
  modelica_string tmp25;
  modelica_string tmp26;
  modelica_metatype tmpMeta27;
  modelica_string tmp28;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outstring = _OMC_LIT0;
  // _cr has no default value.
  // _cr1 has no default value.
  // _creflast has no default value.
  // _isRec has no default value.
  // _path has no default value.
  // _recordvarlist has no default value.
  tmp1 = stringAppend(_OMC_LIT192,_comment);
  omc_string_store(&(_outstring), tmp1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _recordvarlist = tmpMeta2;

  {
    modelica_metatype _var;
    for (tmpMeta3 = _invar; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _var = MMC_CAR(tmpMeta3);
      _cr = omc_BackendVariable_varCref(threadData, _var);

      _cr1 = omc_ComponentReference_crefGetFirstRec(threadData, _cr ,&_isRec);

      if(omc_BackendVariable_varHasUncertainValueRefine(threadData, _var))
      {
        tmp4 = stringAppend(_outstring,_OMC_LIT195);
        tmp5 = stringAppend(tmp4,omc_DAEDump_daeTypeStr(threadData, (OMC_BOX_FIELD(_var, 6))));
        tmp6 = stringAppend(tmp5,_OMC_LIT194);
        tmp7 = stringAppend(tmp6,omc_System_stringReplace(threadData, omc_ComponentReference_crefStr(threadData, _cr), _OMC_LIT2, _OMC_LIT3));
        tmp8 = stringAppend(tmp7,_OMC_LIT193);
        omc_string_store(&(_outstring), tmp8);
      }
      else
      {
        if(omc_BackendVariable_isParam(threadData, _var))
        {
          tmp9 = stringAppend(_outstring,_OMC_LIT195);
          tmp10 = stringAppend(tmp9,omc_DAEDump_daeTypeStr(threadData, (OMC_BOX_FIELD(_var, 6))));
          tmp11 = stringAppend(tmp10,_OMC_LIT194);
          tmp12 = stringAppend(tmp11,omc_System_stringReplace(threadData, omc_ComponentReference_crefStr(threadData, _cr), _OMC_LIT2, _OMC_LIT3));
          tmp13 = stringAppend(tmp12,_OMC_LIT1);
          tmp14 = stringAppend(tmp13,omc_ExpressionDump_printOptExpStr(threadData, (OMC_BOX_FIELD(_var, 7))));
          tmp15 = stringAppend(tmp14,_OMC_LIT193);
          omc_string_store(&(_outstring), tmp15);
        }
        else
        {
          if((_isRec && (!listMember(omc_ComponentReference_crefStr(threadData, _cr1), _recordvarlist))))
          {
            _creflast = omc_ComponentReferenceBasics_crefLastCref(threadData, _cr1);

            _path = omc_Types_getRecordPath(threadData, omc_ComponentReference_crefType(threadData, _creflast));

            tmpMeta16 = mmc_mk_cons(omc_ComponentReference_crefStr(threadData, _cr1), _recordvarlist);
            _recordvarlist = tmpMeta16;

            tmp17 = stringAppend(_outstring,_OMC_LIT6);
            tmp18 = stringAppend(tmp17,omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT2, 1 /* true */, 0 /* false */));
            tmp19 = stringAppend(tmp18,_OMC_LIT194);
            tmp20 = stringAppend(tmp19,omc_System_stringReplace(threadData, omc_ComponentReference_crefStr(threadData, _cr1), _OMC_LIT2, _OMC_LIT3));
            tmp21 = stringAppend(tmp20,_OMC_LIT193);
            omc_string_store(&(_outstring), tmp21);
          }
          else
          {
            if((!_isRec))
            {
              tmp22 = stringAppend(_outstring,_OMC_LIT6);
              tmp23 = stringAppend(tmp22,omc_DAEDump_daeTypeStr(threadData, (OMC_BOX_FIELD(_var, 6))));
              tmp24 = stringAppend(tmp23,_OMC_LIT194);
              tmp25 = stringAppend(tmp24,omc_System_stringReplace(threadData, omc_ComponentReference_crefStr(threadData, _cr), _OMC_LIT2, _OMC_LIT3));
              tmp26 = stringAppend(tmp25,_OMC_LIT193);
              omc_string_store(&(_outstring), tmp26);
            }
          }
        }
      }
    }
  }

  tmp28 = stringAppend(_instring,_outstring);
  omc_string_store(&(_outstring), tmp28);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_dumpResidualVars(threadData_t *threadData, modelica_string _instring, modelica_metatype _invar, modelica_string _comment)
{
  modelica_string _outstring = NULL;
  modelica_metatype _cr = NULL;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_string tmp9;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outstring = _OMC_LIT0;
  // _cr has no default value.
  tmp1 = stringAppend(_OMC_LIT192,_comment);
  omc_string_store(&(_outstring), tmp1);

  {
    modelica_metatype _var;
    for (tmpMeta2 = _invar; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      _cr = omc_BackendVariable_varCref(threadData, _var);

      tmp3 = stringAppend(_outstring,_OMC_LIT6);
      tmp4 = stringAppend(tmp3,omc_DAEDump_daeTypeStr(threadData, (OMC_BOX_FIELD(_var, 6))));
      tmp5 = stringAppend(tmp4,_OMC_LIT194);
      tmp6 = stringAppend(tmp5,omc_System_stringReplace(threadData, omc_ComponentReference_crefStr(threadData, _cr), _OMC_LIT2, _OMC_LIT3));
      tmp7 = stringAppend(tmp6,_OMC_LIT193);
      omc_string_store(&(_outstring), tmp7);

      omc_string_store(&(_outstring), omc_System_stringReplace(threadData, _outstring, _OMC_LIT4, _OMC_LIT0));
    }
  }

  tmp9 = stringAppend(_instring,_outstring);
  omc_string_store(&(_outstring), tmp9);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getVariableFirstOccurrenceInEquation(threadData_t *threadData, modelica_metatype _m, modelica_integer _varIndex, modelica_metatype _minimalSetS)
{
  modelica_metatype _matchedEquation = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _eq;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _matchedEquation = _OMC_LIT196;
  // _vars has no default value.
  // _eq has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta1 = _m; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _i;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmp4 = omc_unbox_integer(tmpMeta3);
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 2);
      _eq = tmp4  /* pattern as ty=Integer */;
      _vars = tmpMeta5;

      if((_eq > ((modelica_integer) 0)))
      {
        if((!listMember(omc_mk_integer(_eq), _minimalSetS)))
        {
          if(listMember(omc_mk_integer(_varIndex), _vars))
          {
            _matchedEquation = _i;

            break;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _matchedEquation;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_getVariableFirstOccurrenceInEquation(threadData_t *threadData, modelica_metatype _m, modelica_metatype _varIndex, modelica_metatype _minimalSetS)
{
  modelica_integer tmp1;
  modelica_metatype _matchedEquation = NULL;
  tmp1 = omc_unbox_integer(_varIndex);
  _matchedEquation = omc_DataReconciliation_getVariableFirstOccurrenceInEquation(threadData, _m, tmp1, _minimalSetS);
  /* skip box _matchedEquation; tuple<#Integer, list<#Integer>> */
  return _matchedEquation;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpMininimalExtraction(threadData_t *threadData, modelica_integer _varIndex, modelica_metatype _var, modelica_integer _firstMatchedEquation, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _minimalSetS, modelica_metatype _intermediateVars, modelica_metatype _rest, modelica_metatype _V_EQ, modelica_boolean _falseBlock, modelica_metatype _visitedVars)
{
  modelica_integer _mappedEq;
  modelica_metatype _tmpEq = NULL;
  modelica_string tmp1;
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
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mappedEq has no default value.
  // _tmpEq has no default value.
  if(_falseBlock)
  {
    tmp1 = stringAppend(_OMC_LIT207,intString(_varIndex));
    fputs(omc_string_data(tmp1),stdout);

    tmp2 = stringAppend(_OMC_LIT208,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
    fputs(omc_string_data(tmp2),stdout);

    fputs(omc_string_data(_OMC_LIT209),stdout);

    tmp3 = stringAppend(_OMC_LIT210,omc_DataReconciliation_dumplistInteger(threadData, _rest));
    tmp4 = stringAppend(tmp3,_OMC_LIT14);
    fputs(omc_string_data(tmp4),stdout);
  }
  else
  {
    _mappedEq = omc_unbox_integer(arrayGet(_mapIncRowEqn,_firstMatchedEquation) /* DAE.ASUB */);

    _tmpEq = omc_BackendEquation_get(threadData, _orderedEqs, _mappedEq);

    tmp5 = stringAppend(_OMC_LIT197,intString(_varIndex));
    fputs(omc_string_data(tmp5),stdout);

    tmp6 = stringAppend(_OMC_LIT198,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
    fputs(omc_string_data(tmp6),stdout);

    tmp7 = stringAppend(_OMC_LIT199,intString(_firstMatchedEquation));
    fputs(omc_string_data(tmp7),stdout);

    tmp8 = stringAppend(_OMC_LIT200,intString(_mappedEq));
    fputs(omc_string_data(tmp8),stdout);

    tmp9 = stringAppend(_OMC_LIT201,omc_BackendDump_equationString(threadData, _tmpEq));
    fputs(omc_string_data(tmp9),stdout);

    tmp10 = stringAppend(_OMC_LIT202,omc_DataReconciliation_dumplistInteger(threadData, _minimalSetS));
    fputs(omc_string_data(tmp10),stdout);

    tmp11 = stringAppend(_OMC_LIT203,omc_DataReconciliation_dumplistInteger(threadData, _intermediateVars));
    fputs(omc_string_data(tmp11),stdout);

    tmp12 = stringAppend(_OMC_LIT204,omc_DataReconciliation_dumplistInteger(threadData, _visitedVars));
    fputs(omc_string_data(tmp12),stdout);

    tmp13 = stringAppend(_OMC_LIT205,omc_DataReconciliation_dumplistInteger(threadData, _rest));
    fputs(omc_string_data(tmp13),stdout);

    tmp14 = stringAppend(_OMC_LIT206,omc_DataReconciliation_dumplistInteger(threadData, _V_EQ));
    tmp15 = stringAppend(tmp14,_OMC_LIT14);
    fputs(omc_string_data(tmp15),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_dumpMininimalExtraction(threadData_t *threadData, modelica_metatype _varIndex, modelica_metatype _var, modelica_metatype _firstMatchedEquation, modelica_metatype _mapIncRowEqn, modelica_metatype _orderedEqs, modelica_metatype _minimalSetS, modelica_metatype _intermediateVars, modelica_metatype _rest, modelica_metatype _V_EQ, modelica_metatype _falseBlock, modelica_metatype _visitedVars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  tmp1 = omc_unbox_integer(_varIndex);
  tmp2 = omc_unbox_integer(_firstMatchedEquation);
  tmp3 = omc_unbox_integer(_falseBlock);
  omc_DataReconciliation_dumpMininimalExtraction(threadData, tmp1, _var, tmp2, _mapIncRowEqn, _orderedEqs, _minimalSetS, _intermediateVars, _rest, _V_EQ, tmp3, _visitedVars);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_extractMinimalSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunknownsInSetC, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FminimalSetS, modelica_boolean _debug, modelica_metatype *out_minimalSetS)
{
  modelica_metatype _unknownsInSetC = NULL;
  modelica_metatype _minimalSetS = NULL;
  modelica_integer _firstMatchedEquation;
  modelica_metatype _var = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _intermediateVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _V_EQ = NULL;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _unknownsInSetC = __omcQ_24in_5FunknownsInSetC;
  _minimalSetS = __omcQ_24in_5FminimalSetS;
  // _firstMatchedEquation has no default value.
  // _var has no default value.
  // _rest has no default value.
  // _vars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _intermediateVars = tmpMeta1;
  // _V_EQ has no default value.
  {
    modelica_metatype _varIndex;
    for (tmpMeta2 = _unknownsInSetC; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _varIndex = MMC_CAR(tmpMeta2);
      if(listEmpty(_unknownsInSetC))
      {
        break;
      }

      if(_debug)
      {
        tmp3 = stringAppend(_OMC_LIT211,omc_DataReconciliation_dumplistInteger(threadData, _unknownsInSetC));
        tmp4 = stringAppend(tmp3,_OMC_LIT14);
        tmp5 = stringAppend(tmp4,_OMC_LIT61);
        tmp6 = stringAppend(tmp5,_OMC_LIT14);
        fputs(omc_string_data(tmp6),stdout);
      }

      /* Pattern-matching assignment */
      tmpMeta7 = _unknownsInSetC;
      if (listEmpty(tmpMeta7)) OMC_THROW_INTERNAL();
      tmpMeta8 = MMC_CAR(tmpMeta7);
      tmpMeta9 = MMC_CDR(tmpMeta7);
      _rest = tmpMeta9;

      /* Pattern-matching assignment */
      tmpMeta10 = omc_DataReconciliation_getVariableFirstOccurrenceInEquation(threadData, _sBltAdjacencyMatrix, omc_unbox_integer(_varIndex), _minimalSetS);
      tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 1);
      tmp12 = omc_unbox_integer(tmpMeta11);
      tmpMeta13 = OMC_BOX_FIELD(tmpMeta10, 2);
      _firstMatchedEquation = tmp12  /* pattern as ty=Integer */;
      _vars = tmpMeta13;

      _var = omc_BackendVariable_getVarAt(threadData, _orderedVars, omc_unbox_integer(_varIndex));

      if((!(_firstMatchedEquation == ((modelica_integer) 0))))
      {
        tmpMeta14 = mmc_mk_cons(omc_mk_integer(_firstMatchedEquation), _minimalSetS);
        _minimalSetS = tmpMeta14;

        _minimalSetS = omc_List_unique(threadData, _minimalSetS);

        _intermediateVars = omc_List_setDifferenceOnTrue(threadData, _vars, _knownVars, boxvar_intEq);

        _V_EQ = omc_List_unique(threadData, listAppend(_intermediateVars, _rest));

        if(_debug)
        {
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_DataReconciliation_dumpMininimalExtraction(threadData, omc_unbox_integer(_varIndex), _var, _firstMatchedEquation, _mapIncRowEqn, _orderedEqs, _minimalSetS, _intermediateVars, _rest, _V_EQ, 0 /* false */, tmpMeta15);
        }

        _unknownsInSetC = omc_DataReconciliation_extractMinimalSetS(threadData, _V_EQ, _sBltAdjacencyMatrix, _knownVars, _orderedVars, _orderedEqs, _mapIncRowEqn, _minimalSetS, _debug ,&_minimalSetS);
      }
      else
      {
        if(_debug)
        {
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_DataReconciliation_dumpMininimalExtraction(threadData, omc_unbox_integer(_varIndex), _var, ((modelica_integer) 0), _mapIncRowEqn, _orderedEqs, tmpMeta16, tmpMeta17, _rest, tmpMeta18, 1 /* true */, tmpMeta19);
        }

        _unknownsInSetC = _rest;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_minimalSetS) { *out_minimalSetS = _minimalSetS; }
  omc_ret_ = _unknownsInSetC;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_extractMinimalSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunknownsInSetC, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FminimalSetS, modelica_metatype _debug, modelica_metatype *out_minimalSetS)
{
  modelica_integer tmp1;
  modelica_metatype _unknownsInSetC = NULL;
  tmp1 = omc_unbox_integer(_debug);
  _unknownsInSetC = omc_DataReconciliation_extractMinimalSetS(threadData, __omcQ_24in_5FunknownsInSetC, _sBltAdjacencyMatrix, _knownVars, _orderedVars, _orderedEqs, _mapIncRowEqn, __omcQ_24in_5FminimalSetS, tmp1, out_minimalSetS);
  /* skip box _unknownsInSetC; list<#Integer> */
  /* skip box _minimalSetS; list<#Integer> */
  return _unknownsInSetC;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getSetSAdjacencyMatrix(threadData_t *threadData, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _setS)
{
  modelica_metatype _setS_BltAdjacencyMatrix = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _eq;
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
  _setS_BltAdjacencyMatrix = tmpMeta1;
  // _eq has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _sBltAdjacencyMatrix; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _i;
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
      tmp5 = omc_unbox_integer(tmpMeta4);
      _eq = tmp5  /* pattern as ty=Integer */;

      if(listMember(omc_mk_integer(_eq), _setS))
      {
        tmpMeta6 = mmc_mk_cons(_i, _setS_BltAdjacencyMatrix);
        _setS_BltAdjacencyMatrix = tmpMeta6;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _setS_BltAdjacencyMatrix;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_extractionAlgorithm(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _currentSystem = NULL;
  modelica_metatype _outOtherEqns = NULL;
  modelica_metatype _outResidualEqns = NULL;
  modelica_metatype _newEqnsLst = NULL;
  modelica_metatype _setC_Eq = NULL;
  modelica_metatype _setS_Eq = NULL;
  modelica_metatype _residualEquations = NULL;
  modelica_metatype _adjacencyMatrix = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _match1 = NULL;
  modelica_metatype _match2 = NULL;
  modelica_metatype _solvedEqsAndVarsInfo = NULL;
  modelica_integer _varCount;
  modelica_integer _eqCount;
  modelica_metatype _matchedEqsLst = NULL;
  modelica_metatype _unMatchedEqsLst = NULL;
  modelica_metatype _unMatchedEqsLstCorrectIndex = NULL;
  modelica_metatype _approximatedEquations = NULL;
  modelica_metatype _tempSetC = NULL;
  modelica_metatype _setC = NULL;
  modelica_metatype _tempSetS = NULL;
  modelica_metatype _setS = NULL;
  modelica_metatype _boundaryConditionEquations = NULL;
  modelica_metatype _s_BLTBlocks = NULL;
  modelica_metatype _e_BLTBlocks = NULL;
  modelica_metatype _allBlocks = NULL;
  modelica_metatype _allBlocksStatusVarInfo = NULL;
  modelica_metatype _e_BLT_EquationsWithIndex = NULL;
  modelica_metatype _eBltAdjacencyMatrix = NULL;
  modelica_metatype _sBltAdjacencyMatrix = NULL;
  modelica_metatype _setS_BLTAdjacencyMatrix = NULL;
  modelica_metatype _e_BLTSolvedEqsAndVars = NULL;
  modelica_metatype _e_BLTBlockRanks = NULL;
  modelica_metatype _s_BLTBlockRanks = NULL;
  modelica_metatype _s_BLTBlockTargetInfo = NULL;
  modelica_metatype _predecessorBlockTargetInfo = NULL;
  modelica_metatype _paramVars = NULL;
  modelica_metatype _residualVars = NULL;
  modelica_metatype _simCodeJacobian = NULL;
  modelica_metatype _shared = NULL;
  modelica_string _str = NULL;
  modelica_string _modelicaOutput = NULL;
  modelica_string _modelicaFileName = NULL;
  modelica_string _modelName = NULL;
  modelica_string _auxillaryConditionsFilename = NULL;
  modelica_string _auxillaryEquations = NULL;
  modelica_string _intermediateEquationsFilename = NULL;
  modelica_string _intermediateEquations = NULL;
  modelica_metatype _allVarsList = NULL;
  modelica_metatype _knowns = NULL;
  modelica_metatype _boundaryConditionVars = NULL;
  modelica_metatype _exactEquationVars = NULL;
  modelica_metatype _extractedVarsfromSetS = NULL;
  modelica_metatype _knownVariablesWithEquationBinding = NULL;
  modelica_metatype _boundaryConditionTaggedEquationSolvedVars = NULL;
  modelica_metatype _unknownVarsInSetC = NULL;
  modelica_metatype _inputVars = NULL;
  modelica_metatype _outDiffVars = NULL;
  modelica_metatype _outOtherVars = NULL;
  modelica_metatype _outResidualVars = NULL;
  modelica_boolean _debug;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
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
  modelica_metatype tmpMeta15;
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
  modelica_metatype tmpMeta50;
  modelica_string tmp51;
  modelica_string tmp52;
  modelica_string tmp53;
  modelica_string tmp54;
  modelica_string tmp55;
  modelica_string tmp56;
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  modelica_string tmp59;
  modelica_string tmp60;
  modelica_metatype tmpMeta61;
  modelica_metatype tmpMeta62;
  modelica_metatype tmpMeta63;
  modelica_metatype tmpMeta64;
  modelica_metatype tmpMeta65;
  modelica_string tmp66;
  modelica_string tmp67;
  modelica_metatype tmpMeta68;
  modelica_metatype tmpMeta69;
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
  modelica_metatype tmpMeta81;
  modelica_metatype tmpMeta82;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _currentSystem has no default value.
  // _outOtherEqns has no default value.
  // _outResidualEqns has no default value.
  // _newEqnsLst has no default value.
  // _setC_Eq has no default value.
  // _setS_Eq has no default value.
  // _residualEquations has no default value.
  // _adjacencyMatrix has no default value.
  // _mapEqnIncRow has no default value.
  // _mapIncRowEqn has no default value.
  // _match1 has no default value.
  // _match2 has no default value.
  // _solvedEqsAndVarsInfo has no default value.
  // _varCount has no default value.
  // _eqCount has no default value.
  // _matchedEqsLst has no default value.
  // _unMatchedEqsLst has no default value.
  // _unMatchedEqsLstCorrectIndex has no default value.
  // _approximatedEquations has no default value.
  // _tempSetC has no default value.
  // _setC has no default value.
  // _tempSetS has no default value.
  // _setS has no default value.
  // _boundaryConditionEquations has no default value.
  // _s_BLTBlocks has no default value.
  // _e_BLTBlocks has no default value.
  // _allBlocks has no default value.
  // _allBlocksStatusVarInfo has no default value.
  // _e_BLT_EquationsWithIndex has no default value.
  // _eBltAdjacencyMatrix has no default value.
  // _sBltAdjacencyMatrix has no default value.
  // _setS_BLTAdjacencyMatrix has no default value.
  // _e_BLTSolvedEqsAndVars has no default value.
  // _e_BLTBlockRanks has no default value.
  // _s_BLTBlockRanks has no default value.
  // _s_BLTBlockTargetInfo has no default value.
  // _predecessorBlockTargetInfo has no default value.
  // _paramVars has no default value.
  // _residualVars has no default value.
  // _simCodeJacobian has no default value.
  // _shared has no default value.
  // _str has no default value.
  // _modelicaOutput has no default value.
  // _modelicaFileName has no default value.
  // _modelName has no default value.
  // _auxillaryConditionsFilename has no default value.
  // _auxillaryEquations has no default value.
  // _intermediateEquationsFilename has no default value.
  // _intermediateEquations has no default value.
  // _allVarsList has no default value.
  // _knowns has no default value.
  // _boundaryConditionVars has no default value.
  // _exactEquationVars has no default value.
  // _extractedVarsfromSetS has no default value.
  // _knownVariablesWithEquationBinding has no default value.
  // _boundaryConditionTaggedEquationSolvedVars has no default value.
  // _unknownVarsInSetC has no default value.
  // _inputVars has no default value.
  // _outDiffVars has no default value.
  // _outOtherVars has no default value.
  // _outResidualVars has no default value.
  _debug = 0 /* false */;
  if(omc_Flags_isSet(threadData, _OMC_LIT214))
  {
    _debug = 1 /* true */;
  }

  /* Pattern-matching assignment */
  tmpMeta1 = (OMC_BOX_FIELD(_inDAE, 2));
  if (listEmpty(tmpMeta1)) OMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (!listEmpty(tmpMeta3)) OMC_THROW_INTERNAL();
  _currentSystem = tmpMeta2;

  _shared = (OMC_BOX_FIELD(_inDAE, 3));

  tmp4 = stringAppend(_OMC_LIT215,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
  tmp5 = stringAppend(tmp4,_OMC_LIT14);
  tmp6 = stringAppend(tmp5,_OMC_LIT61);
  tmp7 = stringAppend(tmp6,_OMC_LIT59);
  fputs(omc_string_data(tmp7),stdout);

  omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT216);

  omc_BackendDump_dumpEquationArray(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _OMC_LIT217);

  _currentSystem = omc_DataReconciliation_setBoundaryConditionEquationsAndVars(threadData, _currentSystem, (OMC_BOX_FIELD(_inDAE, 3)), _debug ,&_shared);

  if(_debug)
  {
    omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT218);

    omc_BackendDump_dumpEquationArray(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _OMC_LIT219);

    omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_shared, 2)), _OMC_LIT220);
  }

  _allVarsList = omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, (OMC_BOX_FIELD(_currentSystem, 2))));

  _adjacencyMatrix = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT221, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared), NULL, NULL, NULL);

  _knowns = omc_DataReconciliation_getVariablesBlockCategories(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _allVarsList ,&_boundaryConditionVars ,&_exactEquationVars, NULL);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT222),stdout);

    tmp8 = stringAppend(_OMC_LIT223,omc_DataReconciliation_dumplistInteger(threadData, _knowns));
    fputs(omc_string_data(tmp8),stdout);

    tmp9 = stringAppend(_OMC_LIT224,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionVars));
    fputs(omc_string_data(tmp9),stdout);

    tmp10 = stringAppend(_OMC_LIT225,omc_DataReconciliation_dumplistInteger(threadData, _exactEquationVars));
    fputs(omc_string_data(tmp10),stdout);

    tmp11 = stringAppend(_OMC_LIT226,mmc_anyString(_adjacencyMatrix));
    fputs(omc_string_data(tmp11),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }

  _allVarsList = omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, (OMC_BOX_FIELD(_currentSystem, 2))));

  _knownVariablesWithEquationBinding = omc_DataReconciliation_getUncertainRefineVariablesBindedEquations(threadData, _adjacencyMatrix, _knowns);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT227),stdout);

    tmp12 = stringAppend(_OMC_LIT228,mmc_anyString(_adjacencyMatrix));
    fputs(omc_string_data(tmp12),stdout);

    tmp13 = stringAppend(_OMC_LIT229,intString(arrayLength(_adjacencyMatrix)));
    fputs(omc_string_data(tmp13),stdout);

    tmp14 = stringAppend(_OMC_LIT230,mmc_anyString(_knownVariablesWithEquationBinding));
    fputs(omc_string_data(tmp14),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }

  _newEqnsLst = omc_DataReconciliation_inverseModelicaModel(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _knownVariablesWithEquationBinding);

  tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_currentSystem), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = omc_BackendEquation_merge(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), omc_BackendEquation_listEquation(threadData, _newEqnsLst));
  _currentSystem = tmpMeta15;

  omc_BackendDump_dumpEquationArray(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _OMC_LIT231);

  _adjacencyMatrix = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT221, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

  _varCount = omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_currentSystem, 2)), 6)));

  _eqCount = omc_BackendEquation_equationArraySize(threadData, (OMC_BOX_FIELD(_currentSystem, 3)));

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT232),stdout);

    tmp16 = stringAppend(_OMC_LIT233,mmc_anyString(_adjacencyMatrix));
    fputs(omc_string_data(tmp16),stdout);

    tmp17 = stringAppend(_OMC_LIT234,intString(_varCount));
    fputs(omc_string_data(tmp17),stdout);

    tmp18 = stringAppend(_OMC_LIT235,intString(_eqCount));
    fputs(omc_string_data(tmp18),stdout);

    fputs(omc_string_data(_OMC_LIT59),stdout);
  }

  _match1 = omc_Matching_RegularMatching(threadData, _adjacencyMatrix, _varCount, _eqCount ,&_match2 ,NULL ,NULL ,NULL);

  omc_BackendDump_dumpMatching(threadData, _match1);

  _solvedEqsAndVarsInfo = omc_DataReconciliation_getSolvedEquationAndVarsInfo(threadData, _match1 ,&_matchedEqsLst);

  _unMatchedEqsLst = omc_List_setDifference(threadData, omc_List_intRange(threadData, _eqCount), _matchedEqsLst);

  _unMatchedEqsLstCorrectIndex = omc_List_unique(threadData, omc_List_map1r(threadData, _unMatchedEqsLst, boxvar_listGet, arrayList(_mapIncRowEqn)));

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT236),stdout);

    tmp19 = stringAppend(_OMC_LIT237,mmc_anyString(_solvedEqsAndVarsInfo));
    fputs(omc_string_data(tmp19),stdout);

    tmp20 = stringAppend(_OMC_LIT238,intString(omc_BackendEquation_getNumberOfEquations(threadData, (OMC_BOX_FIELD(_currentSystem, 3)))));
    fputs(omc_string_data(tmp20),stdout);

    tmp21 = stringAppend(_OMC_LIT239,mmc_anyString(omc_List_sort(threadData, _matchedEqsLst, boxvar_intGt)));
    fputs(omc_string_data(tmp21),stdout);

    tmp22 = stringAppend(_OMC_LIT240,intString(listLength(_matchedEqsLst)));
    fputs(omc_string_data(tmp22),stdout);

    tmp23 = stringAppend(_OMC_LIT241,mmc_anyString(_unMatchedEqsLst));
    fputs(omc_string_data(tmp23),stdout);

    tmp24 = stringAppend(_OMC_LIT242,mmc_anyString(_unMatchedEqsLstCorrectIndex));
    fputs(omc_string_data(tmp24),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }

  _e_BLT_EquationsWithIndex = omc_DataReconciliation_setEBLTEquationsWithIndexAndRank(threadData, _unMatchedEqsLst, _unMatchedEqsLstCorrectIndex, (OMC_BOX_FIELD(_currentSystem, 3)), _adjacencyMatrix ,&_eBltAdjacencyMatrix ,&_e_BLTSolvedEqsAndVars ,&_e_BLTBlocks ,&_e_BLTBlockRanks);

  tmp25 = stringAppend(_OMC_LIT243,omc_DataReconciliation_dumplistInteger(threadData, _unMatchedEqsLst));
  omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _unMatchedEqsLstCorrectIndex, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), tmp25);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT244),stdout);

    tmp26 = stringAppend(_OMC_LIT245,mmc_anyString(_e_BLTBlocks));
    fputs(omc_string_data(tmp26),stdout);

    tmp27 = stringAppend(_OMC_LIT246,mmc_anyString(_e_BLTBlockRanks));
    fputs(omc_string_data(tmp27),stdout);

    tmp28 = stringAppend(_OMC_LIT247,mmc_anyString(_eBltAdjacencyMatrix));
    fputs(omc_string_data(tmp28),stdout);

    tmp29 = stringAppend(_OMC_LIT248,mmc_anyString(_e_BLTSolvedEqsAndVars));
    fputs(omc_string_data(tmp29),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }

  _currentSystem = omc_DataReconciliation_deleteEquationsFromEqSyst(threadData, _currentSystem, _unMatchedEqsLstCorrectIndex);

  _varCount = omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_currentSystem, 2)), 6)));

  _eqCount = omc_BackendEquation_equationArraySize(threadData, (OMC_BOX_FIELD(_currentSystem, 3)));

  omc_BackendDump_dumpEquationArray(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _OMC_LIT249);

  omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT250);

  _adjacencyMatrix = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT221, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

  _match1 = omc_Matching_RegularMatching(threadData, _adjacencyMatrix, _varCount, _eqCount ,&_match2 ,NULL ,NULL ,NULL);

  omc_BackendDump_dumpMatching(threadData, _match1);

  _s_BLTBlocks = omc_Sorting_Tarjan(threadData, _adjacencyMatrix, _match1, arrayLength(_match1));

  _sBltAdjacencyMatrix = omc_DataReconciliation_getSBLTAdjacencyMatrix(threadData, _adjacencyMatrix);

  _solvedEqsAndVarsInfo = omc_DataReconciliation_getSolvedEquationAndVarsInfo(threadData, _match1, NULL);

  _s_BLTBlockRanks = omc_List_toListWithPositions(threadData, _s_BLTBlocks);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT251),stdout);

    tmp30 = stringAppend(_OMC_LIT252,intString(_varCount));
    fputs(omc_string_data(tmp30),stdout);

    tmp31 = stringAppend(_OMC_LIT253,intString(_eqCount));
    fputs(omc_string_data(tmp31),stdout);

    tmp32 = stringAppend(_OMC_LIT254,mmc_anyString(_s_BLTBlocks));
    fputs(omc_string_data(tmp32),stdout);

    tmp33 = stringAppend(_OMC_LIT255,mmc_anyString(_s_BLTBlockRanks));
    fputs(omc_string_data(tmp33),stdout);

    tmp34 = stringAppend(_OMC_LIT256,mmc_anyString(_sBltAdjacencyMatrix));
    fputs(omc_string_data(tmp34),stdout);

    tmp35 = stringAppend(_OMC_LIT257,mmc_anyString(_solvedEqsAndVarsInfo));
    fputs(omc_string_data(tmp35),stdout);

    fputs(omc_string_data(_OMC_LIT59),stdout);
  }

  _s_BLTBlocks = listAppend(_s_BLTBlocks, _e_BLTBlocks);

  _s_BLTBlockRanks = listAppend(_s_BLTBlockRanks, _e_BLTBlockRanks);

  _sBltAdjacencyMatrix = listAppend(_sBltAdjacencyMatrix, _eBltAdjacencyMatrix);

  _solvedEqsAndVarsInfo = listAppend(_solvedEqsAndVarsInfo, _e_BLTSolvedEqsAndVars);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT258),stdout);

    tmp36 = stringAppend(_OMC_LIT259,mmc_anyString(_s_BLTBlocks));
    fputs(omc_string_data(tmp36),stdout);

    tmp37 = stringAppend(_OMC_LIT260,mmc_anyString(_s_BLTBlockRanks));
    fputs(omc_string_data(tmp37),stdout);

    tmp38 = stringAppend(_OMC_LIT261,mmc_anyString(_sBltAdjacencyMatrix));
    fputs(omc_string_data(tmp38),stdout);

    tmp39 = stringAppend(_OMC_LIT262,mmc_anyString(_solvedEqsAndVarsInfo));
    fputs(omc_string_data(tmp39),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }

  omc_DataReconciliation_dumpListList(threadData, _s_BLTBlocks, _OMC_LIT263);

  _approximatedEquations = omc_DataReconciliation_getEquationsTaggedApproximatedOrBoundaryCondition(threadData, omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_currentSystem, 3))), ((modelica_integer) 1) ,&_boundaryConditionEquations);

  if(_debug)
  {
    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT264);

    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT265);
  }

  _approximatedEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

  _boundaryConditionEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT266),stdout);

    tmp40 = stringAppend(_OMC_LIT267,omc_DataReconciliation_dumplistInteger(threadData, _approximatedEquations));
    fputs(omc_string_data(tmp40),stdout);

    tmp41 = stringAppend(_OMC_LIT268,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionEquations));
    fputs(omc_string_data(tmp41),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }

  _boundaryConditionTaggedEquationSolvedVars = omc_DataReconciliation_getBoundaryConditionVariables(threadData, _boundaryConditionEquations, _solvedEqsAndVarsInfo);

  if(_debug)
  {
    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, listReverse(_boundaryConditionTaggedEquationSolvedVars), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), _OMC_LIT269);
  }

  _exactEquationVars = omc_List_setDifferenceOnTrue(threadData, _exactEquationVars, _boundaryConditionTaggedEquationSolvedVars, boxvar_intEq);

  _boundaryConditionVars = listAppend(_boundaryConditionVars, _boundaryConditionTaggedEquationSolvedVars);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT270),stdout);

    tmp42 = stringAppend(_OMC_LIT223,omc_DataReconciliation_dumplistInteger(threadData, _knowns));
    fputs(omc_string_data(tmp42),stdout);

    tmp43 = stringAppend(_OMC_LIT224,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionVars));
    fputs(omc_string_data(tmp43),stdout);

    tmp44 = stringAppend(_OMC_LIT225,omc_DataReconciliation_dumplistInteger(threadData, _exactEquationVars));
    fputs(omc_string_data(tmp44),stdout);

    fputs(omc_string_data(_OMC_LIT14),stdout);
  }

  _allBlocks = omc_DataReconciliation_traverseBLTAndUpdateBlockStatus(threadData, _s_BLTBlocks, _knowns, _boundaryConditionVars, _exactEquationVars, _solvedEqsAndVarsInfo ,&_allBlocksStatusVarInfo);

  if(_debug)
  {
    omc_DataReconciliation_dumpBlockStatus(threadData, _allBlocks, _allBlocksStatusVarInfo);
  }

  _s_BLTBlockTargetInfo = omc_DataReconciliation_findBlockTargets(threadData, _allBlocks, _allBlocksStatusVarInfo, _solvedEqsAndVarsInfo, _sBltAdjacencyMatrix, _s_BLTBlockRanks, _debug);

  if(_debug)
  {
    omc_DataReconciliation_dumpBlockTargets(threadData, _s_BLTBlockTargetInfo);
  }

  _predecessorBlockTargetInfo = omc_DataReconciliation_findPredecessorBlocks(threadData, _s_BLTBlockTargetInfo);

  omc_DataReconciliation_dumpPredecessorBlocks(threadData, _predecessorBlockTargetInfo);

  _tempSetC = omc_DataReconciliation_ExtractEquationsUsingSetOperations(threadData, _predecessorBlockTargetInfo, _e_BLTBlockRanks, _approximatedEquations, _debug ,&_tempSetS);

  tmp45 = stringAppend(_OMC_LIT271,omc_DataReconciliation_dumplistInteger(threadData, _tempSetC));
  tmp46 = stringAppend(tmp45,_OMC_LIT14);
  tmp47 = stringAppend(tmp46,_OMC_LIT272);
  tmp48 = stringAppend(tmp47,omc_DataReconciliation_dumplistInteger(threadData, _tempSetS));
  tmp49 = stringAppend(tmp48,_OMC_LIT59);
  fputs(omc_string_data(tmp49),stdout);

  if(_debug)
  {
    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _tempSetS, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT273);
  }

  _setC = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _tempSetC, _mapIncRowEqn));

  _setS = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _tempSetS, _mapIncRowEqn));

  _setC_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setC, (OMC_BOX_FIELD(_currentSystem, 3)), _e_BLT_EquationsWithIndex);

  _setS_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setS, (OMC_BOX_FIELD(_currentSystem, 3)), _e_BLT_EquationsWithIndex);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), _OMC_LIT274);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq), _OMC_LIT275);

  tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
  _unknownVarsInSetC = omc_DataReconciliation_getVariablesAfterExtraction(threadData, _tempSetC, tmpMeta50, _sBltAdjacencyMatrix);

  _unknownVarsInSetC = listReverse(omc_List_setDifferenceOnTrue(threadData, _unknownVarsInSetC, _knowns, boxvar_intEq));

  _setS_BLTAdjacencyMatrix = omc_DataReconciliation_getSetSAdjacencyMatrix(threadData, _sBltAdjacencyMatrix, _tempSetS);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT276),stdout);

    tmp51 = stringAppend(_OMC_LIT277,intString(listLength(_setS_BLTAdjacencyMatrix)));
    tmp52 = stringAppend(tmp51,_OMC_LIT14);
    tmp53 = stringAppend(tmp52,_OMC_LIT61);
    tmp54 = stringAppend(tmp53,_OMC_LIT14);
    tmp55 = stringAppend(tmp54,mmc_anyString(_setS_BLTAdjacencyMatrix));
    fputs(omc_string_data(tmp55),stdout);

    fputs(omc_string_data(_OMC_LIT278),stdout);

    tmp56 = stringAppend(_OMC_LIT279,omc_DataReconciliation_dumplistInteger(threadData, _unknownVarsInSetC));
    tmp57 = stringAppend(tmp56,_OMC_LIT14);
    fputs(omc_string_data(tmp57),stdout);
  }

  tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
  omc_DataReconciliation_extractMinimalSetS(threadData, _unknownVarsInSetC, _setS_BLTAdjacencyMatrix, _knowns, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, tmpMeta58, _debug ,&_tempSetS);

  if(_debug)
  {
    fputs(omc_string_data(_OMC_LIT280),stdout);

    tmp59 = stringAppend(_OMC_LIT281,omc_DataReconciliation_dumplistInteger(threadData, _tempSetS));
    tmp60 = stringAppend(tmp59,_OMC_LIT59);
    fputs(omc_string_data(tmp60),stdout);
  }

  tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
  _extractedVarsfromSetS = omc_DataReconciliation_getVariablesAfterExtraction(threadData, tmpMeta61, _tempSetS, _sBltAdjacencyMatrix);

  _extractedVarsfromSetS = omc_List_setDifferenceOnTrue(threadData, _extractedVarsfromSetS, _knowns, boxvar_intEq);

  _setC = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _tempSetC, _mapIncRowEqn));

  _setS = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _tempSetS, _mapIncRowEqn));

  _setC_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setC, (OMC_BOX_FIELD(_currentSystem, 3)), _e_BLT_EquationsWithIndex);

  _setS_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setS, (OMC_BOX_FIELD(_currentSystem, 3)), _e_BLT_EquationsWithIndex);

  if((!listEmpty(_tempSetS)))
  {
    omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq), _OMC_LIT283);
  }
  else
  {
    fputs(omc_string_data(_OMC_LIT282),stdout);
  }

  _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _knowns, boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))));

  _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarUnreplaceable, omc_mk_boolean(1 /* true */)));

  /* Pattern-matching assignment */
  tmpMeta62 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta63 = omc_mk_box2(0, (OMC_BOX_FIELD(_shared, 12)), tmpMeta62);
  tmpMeta64 = omc_BackendEquation_traverseEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), boxvar_BackendEquation_traverseEquationToScalarResidualForm, tmpMeta63);
  tmpMeta65 = OMC_BOX_FIELD(tmpMeta64, 2);
  _residualEquations = tmpMeta65;

  _residualEquations = omc_BackendEquation_convertResidualsIntoSolvedEquations(threadData, listReverse(_residualEquations), _OMC_LIT284, ((modelica_integer) 1), 0 /* false */ ,&_residualVars, NULL);

  _outResidualVars = omc_BackendVariable_listVar(threadData, listReverse(_residualVars));

  _outResidualEqns = omc_BackendEquation_listEquation(threadData, _residualEquations);

  _outOtherEqns = omc_BackendEquation_listEquation(threadData, _setS_Eq);

  _paramVars = omc_BackendEquation_equationsVars(threadData, _outOtherEqns, (OMC_BOX_FIELD(_shared, 2)));

  _outOtherVars = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _extractedVarsfromSetS, boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))));

  omc_DataReconciliation_dumpSetSVars(threadData, _outOtherVars, _OMC_LIT285);

  omc_BackendDump_dumpVariables(threadData, omc_BackendVariable_listVar(threadData, _paramVars), _OMC_LIT286);

  tmp66 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT287);
  omc_string_store(&(_auxillaryConditionsFilename), tmp66);

  omc_string_store(&(_auxillaryEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), _OMC_LIT288));

  omc_System_writeFile(threadData, _auxillaryConditionsFilename, _auxillaryEquations);

  tmp67 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT289);
  omc_string_store(&(_intermediateEquationsFilename), tmp67);

  omc_string_store(&(_intermediateEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq), _OMC_LIT290));

  omc_System_writeFile(threadData, _intermediateEquationsFilename, _intermediateEquations);

  omc_DataReconciliation_VerifyDataReconciliation(threadData, _tempSetC, _tempSetS, _knowns, _boundaryConditionVars, _sBltAdjacencyMatrix, _solvedEqsAndVarsInfo, _exactEquationVars, _approximatedEquations, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, _outOtherVars, _setS_Eq, _shared, _setC, _setS, ((modelica_integer) 0));

  if(_debug)
  {
    omc_BackendDump_dumpVariables(threadData, _outDiffVars, _OMC_LIT291);

    omc_BackendDump_dumpVariables(threadData, _outResidualVars, _OMC_LIT292);

    omc_BackendDump_dumpVariables(threadData, _outOtherVars, _OMC_LIT293);

    omc_BackendDump_dumpEquationArray(threadData, _outResidualEqns, _OMC_LIT294);

    omc_BackendDump_dumpEquationArray(threadData, _outOtherEqns, _OMC_LIT295);
  }

  _simCodeJacobian = omc_SymbolicJacobian_getSymbolicJacobian(threadData, _outDiffVars, _outResidualEqns, _outResidualVars, _outOtherEqns, _outOtherVars, _shared, _outOtherVars, _OMC_LIT296, 0 /* false */ ,&_shared);

  tmpMeta69 = omc_mk_box7(3, &BackendDAE_DataReconciliationData_DATA__RECON__desc, _simCodeJacobian, _outResidualVars, _outDiffVars, mmc_mk_none(), mmc_mk_none(), omc_mk_integer(((modelica_integer) 0)));
  tmpMeta68 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta68), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta68))[20] = mmc_mk_some(tmpMeta69);
  _shared = tmpMeta68;

  _currentSystem = omc_BackendDAEUtil_setEqSystVars(threadData, _currentSystem, omc_BackendVariable_mergeVariables(threadData, _outResidualVars, _outOtherVars, 1 /* true */));

  _currentSystem = omc_BackendDAEUtil_setEqSystEqs(threadData, _currentSystem, omc_BackendEquation_merge(threadData, _outResidualEqns, _outOtherEqns));

  _inputVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarDirection, _OMC_LIT297));

  _shared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _shared, omc_BackendVariable_mergeVariables(threadData, (OMC_BOX_FIELD(_shared, 2)), _inputVars, 1 /* true */));

  tmp70 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD((OMC_BOX_FIELD(_inDAE, 3)), 17)), 3)),_OMC_LIT299);
  if((!omc_System_regularFileExists(threadData, tmp70)))
  {
    omc_string_store(&(_str), _OMC_LIT298);

    omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, _str, omc_BackendVariable_varList(threadData, _outDiffVars)));

    tmp71 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT299);
    omc_System_writeFile(threadData, tmp71, _str);
  }

  tmp72 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT300);
  omc_string_store(&(_modelicaFileName), tmp72);

  tmp73 = stringAppend(_OMC_LIT301,omc_System_stringReplace(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)), _OMC_LIT2, _OMC_LIT3));
  omc_string_store(&(_modelName), tmp73);

  omc_string_store(&(_modelicaOutput), _OMC_LIT302);

  tmp74 = stringAppend(_modelicaOutput,_OMC_LIT303);
  tmp75 = stringAppend(tmp74,_modelName);
  omc_string_store(&(_modelicaOutput), tmp75);

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outDiffVars), _OMC_LIT304));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, _paramVars, _OMC_LIT305));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpResidualVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outResidualVars), _OMC_LIT306));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outOtherVars), _OMC_LIT307));

  tmp76 = stringAppend(_modelicaOutput,_OMC_LIT308);
  omc_string_store(&(_modelicaOutput), tmp76);

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedEquations(threadData, _modelicaOutput, _outResidualEqns, _OMC_LIT309));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedEquations(threadData, _modelicaOutput, _outOtherEqns, _OMC_LIT310));

  tmp77 = stringAppend(_modelicaOutput,_OMC_LIT311);
  tmp78 = stringAppend(tmp77,_modelName);
  tmp79 = stringAppend(tmp78,_OMC_LIT193);
  omc_string_store(&(_modelicaOutput), tmp79);

  tmp80 = stringAppend(_modelicaFileName,_OMC_LIT22);
  omc_System_writeFile(threadData, tmp80, _modelicaOutput);

  tmpMeta81 = mmc_mk_cons(_currentSystem, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta82 = omc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta81, _shared);
  _outDAE = tmpMeta82;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outDAE;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_extractNewMinimalSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunknownsInSetC, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FminimalSetS, modelica_metatype __omcQ_24in_5FvisitedVars, modelica_metatype _solvedEqsAndVarsInfo, modelica_boolean __omcQ_24in_5Fstatus, modelica_metatype _bindingEquations, modelica_boolean _extractSetCAndSetS, modelica_boolean _debug, modelica_metatype *out_minimalSetS, modelica_metatype *out_visitedVars, modelica_boolean *out_status, modelica_integer *out_boundaryConditionVarIndex)
{
  modelica_metatype _unknownsInSetC = NULL;
  modelica_metatype _minimalSetS = NULL;
  modelica_metatype _visitedVars = NULL;
  modelica_boolean _status;
  modelica_integer _boundaryConditionVarIndex;
  modelica_integer _mappedEq;
  modelica_integer _varIndex;
  modelica_metatype _var = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _intermediateVars = NULL;
  modelica_metatype _intermediateVarsInMatchedEquation = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _unknownsInSetC = __omcQ_24in_5FunknownsInSetC;
  _minimalSetS = __omcQ_24in_5FminimalSetS;
  _visitedVars = __omcQ_24in_5FvisitedVars;
  _status = __omcQ_24in_5Fstatus;
  _boundaryConditionVarIndex = ((modelica_integer) -1);
  // _mappedEq has no default value.
  // _varIndex has no default value.
  // _var has no default value.
  // _rest has no default value.
  // _vars has no default value.
  // _intermediateVars has no default value.
  // _intermediateVarsInMatchedEquation has no default value.
  while(1)
  {
    if(!(!listEmpty(_unknownsInSetC))) break;
    /* Pattern-matching assignment */
    tmpMeta1 = _unknownsInSetC;
    if (listEmpty(tmpMeta1)) OMC_THROW_INTERNAL();
    tmpMeta2 = MMC_CAR(tmpMeta1);
    tmpMeta3 = MMC_CDR(tmpMeta1);
    tmp4 = omc_unbox_integer(tmpMeta2);
    _varIndex = tmp4  /* pattern as ty=Integer */;
    _rest = tmpMeta3;

    tmpMeta5 = mmc_mk_cons(omc_mk_integer(_varIndex), _visitedVars);
    _visitedVars = tmpMeta5;

    _var = omc_BackendVariable_getVarAt(threadData, _orderedVars, _varIndex);

    if((listMember(omc_mk_integer(_varIndex), _boundaryConditionVars) && _extractSetCAndSetS))
    {
      tmp6 = stringAppend(_OMC_LIT14,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
      tmp7 = stringAppend(tmp6,_OMC_LIT312);
      fputs(omc_string_data(tmp7),stdout);

      _status = 0 /* false */;

      _boundaryConditionVarIndex = _varIndex;

      break;
    }

    _mappedEq = omc_DataReconciliation_getSolvedEquationNumber(threadData, _varIndex, _solvedEqsAndVarsInfo);

    if((!listMember(omc_mk_integer(_mappedEq), _bindingEquations)))
    {
      tmpMeta8 = mmc_mk_cons(omc_mk_integer(_mappedEq), _minimalSetS);
      _minimalSetS = tmpMeta8;

      omc_DataReconciliation_dumpSetSTargetEquations(threadData, _mappedEq, _solvedEqsAndVarsInfo, _mapIncRowEqn, _orderedEqs, _orderedVars, _OMC_LIT0);
    }

    tmpMeta9 = mmc_mk_cons(omc_mk_integer(_mappedEq), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    _vars = omc_DataReconciliation_getVariablesAfterExtraction(threadData, tmpMeta9, tmpMeta10, _sBltAdjacencyMatrix);

    _intermediateVarsInMatchedEquation = omc_List_setDifferenceOnTrue(threadData, _vars, _knownVars, boxvar_intEq);

    tmpMeta11 = mmc_mk_cons(omc_mk_integer(_varIndex), MMC_REFSTRUCTLIT(mmc_nil));
    _intermediateVars = omc_List_setDifferenceOnTrue(threadData, _intermediateVarsInMatchedEquation, tmpMeta11, boxvar_intEq);

    _intermediateVars = omc_List_setDifferenceOnTrue(threadData, _intermediateVars, _visitedVars, boxvar_intEq);

    _rest = omc_List_setDifferenceOnTrue(threadData, _rest, _visitedVars, boxvar_intEq);

    _unknownsInSetC = omc_List_unique(threadData, listAppend(_intermediateVars, _rest));

    if(_debug)
    {
      omc_DataReconciliation_dumpMininimalExtraction(threadData, _varIndex, _var, _mappedEq, _mapIncRowEqn, _orderedEqs, _minimalSetS, _intermediateVarsInMatchedEquation, _rest, _unknownsInSetC, 0 /* false */, _visitedVars);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_minimalSetS) { *out_minimalSetS = _minimalSetS; }
  if (out_visitedVars) { *out_visitedVars = _visitedVars; }
  if (out_status) { *out_status = _status; }
  if (out_boundaryConditionVarIndex) { *out_boundaryConditionVarIndex = _boundaryConditionVarIndex; }
  omc_ret_ = _unknownsInSetC;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_extractNewMinimalSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunknownsInSetC, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FminimalSetS, modelica_metatype __omcQ_24in_5FvisitedVars, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype __omcQ_24in_5Fstatus, modelica_metatype _bindingEquations, modelica_metatype _extractSetCAndSetS, modelica_metatype _debug, modelica_metatype *out_minimalSetS, modelica_metatype *out_visitedVars, modelica_metatype *out_status, modelica_metatype *out_boundaryConditionVarIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_boolean _status;
  modelica_integer _boundaryConditionVarIndex;
  modelica_metatype _unknownsInSetC = NULL;
  tmp1 = omc_unbox_integer(__omcQ_24in_5Fstatus);
  tmp2 = omc_unbox_integer(_extractSetCAndSetS);
  tmp3 = omc_unbox_integer(_debug);
  _unknownsInSetC = omc_DataReconciliation_extractNewMinimalSetS(threadData, __omcQ_24in_5FunknownsInSetC, _sBltAdjacencyMatrix, _knownVars, _boundaryConditionVars, _orderedVars, _orderedEqs, _mapIncRowEqn, __omcQ_24in_5FminimalSetS, __omcQ_24in_5FvisitedVars, _solvedEqsAndVarsInfo, tmp1, _bindingEquations, tmp2, tmp3, out_minimalSetS, out_visitedVars, &_status, &_boundaryConditionVarIndex);
  /* skip box _unknownsInSetC; list<#Integer> */
  /* skip box _minimalSetS; list<#Integer> */
  /* skip box _visitedVars; list<#Integer> */
  if (out_status) { *out_status = omc_mk_icon(_status); }
  if (out_boundaryConditionVarIndex) { *out_boundaryConditionVarIndex = omc_mk_icon(_boundaryConditionVarIndex); }
  return _unknownsInSetC;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_boolSuccessOrFailed(threadData_t *threadData, modelica_boolean _status)
{
  modelica_string _outString = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  omc_string_store(&(_outString), (_status?_OMC_LIT313:_OMC_LIT314));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_boolSuccessOrFailed(threadData_t *threadData, modelica_metatype _status)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = omc_unbox_integer(_status);
  _outString = omc_DataReconciliation_boolSuccessOrFailed(threadData, tmp1);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_boundaryConditionVarExist(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_integer _boundaryConditionVarIndex)
{
  modelica_boolean _status;
  modelica_integer _varIndex;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _status = 0 /* false */;
  // _varIndex has no default value.
  {
    modelica_metatype _item;
    for (tmpMeta1 = _setBFailedBoundaryConditionEquations; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _item = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _item;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmp4 = omc_unbox_integer(tmpMeta3);
      _varIndex = tmp4  /* pattern as ty=Integer */;

      if((_varIndex == _boundaryConditionVarIndex))
      {
        _status = 1 /* true */;

        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _status;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_boundaryConditionVarExist(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _boundaryConditionVarIndex)
{
  modelica_integer tmp1;
  modelica_boolean _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_boundaryConditionVarIndex);
  _status = omc_DataReconciliation_boundaryConditionVarExist(threadData, _setBFailedBoundaryConditionEquations, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_ExtractSetSPrime(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _bindingEquations, modelica_boolean _debug, modelica_metatype *out_finalSetS, modelica_metatype *out_failedboundaryConditionEquations, modelica_metatype *out_failedboundaryConditionVars, modelica_boolean *out_outStatus)
{
  modelica_metatype _currentSystem = NULL;
  modelica_metatype _finalSetS = NULL;
  modelica_metatype _failedboundaryConditionEquations = NULL;
  modelica_metatype _failedboundaryConditionVars = NULL;
  modelica_boolean _outStatus;
  modelica_metatype _intermediateVars = NULL;
  modelica_metatype _minimalSetS = NULL;
  modelica_metatype _visitedVars = NULL;
  modelica_boolean _status;
  modelica_integer _boundaryConditionVarIndex;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _currentSystem = __omcQ_24in_5FcurrentSystem;
  // _finalSetS has no default value.
  // _failedboundaryConditionEquations has no default value.
  // _failedboundaryConditionVars has no default value.
  _outStatus = 0 /* false */;
  // _intermediateVars has no default value.
  // _minimalSetS has no default value.
  // _visitedVars has no default value.
  // _status has no default value.
  // _boundaryConditionVarIndex has no default value.
  // _eq has no default value.
  fputs(omc_string_data(_OMC_LIT315),stdout);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _finalSetS = tmpMeta1;

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _failedboundaryConditionEquations = tmpMeta2;

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _failedboundaryConditionVars = tmpMeta3;

  {
    modelica_metatype _items;
    for (tmpMeta4 = listReverse(_setBFailedBoundaryConditionEquations); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _items = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _items;
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
      tmp7 = omc_unbox_integer(tmpMeta6);
      tmpMeta8 = OMC_BOX_FIELD(tmpMeta5, 2);
      tmpMeta9 = OMC_BOX_FIELD(tmpMeta5, 3);
      _boundaryConditionVarIndex = tmp7  /* pattern as ty=Integer */;
      _eq = tmpMeta8;
      _intermediateVars = tmpMeta9;

      tmpMeta10 = mmc_mk_cons(_eq, _failedboundaryConditionEquations);
      _failedboundaryConditionEquations = tmpMeta10;

      tmpMeta11 = mmc_mk_cons(omc_BackendVariable_getVarAt(threadData, _orderedVars, _boundaryConditionVarIndex), _failedboundaryConditionVars);
      _failedboundaryConditionVars = tmpMeta11;

      _intermediateVars = listReverse(omc_List_setDifferenceOnTrue(threadData, _intermediateVars, _knownVars, boxvar_intEq));

      tmp12 = stringAppend(_OMC_LIT316,omc_BackendDump_equationString(threadData, _eq));
      fputs(omc_string_data(tmp12),stdout);

      tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
      _minimalSetS = tmpMeta13;

      tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
      _visitedVars = tmpMeta14;

      _status = 1 /* true */;

      omc_DataReconciliation_extractNewMinimalSetS(threadData, _intermediateVars, _sBltAdjacencyMatrix, _knownVars, _boundaryConditionVars, _orderedVars, _orderedEqs, _mapIncRowEqn, _minimalSetS, _visitedVars, _solvedEqsAndVarsInfo, _status, _bindingEquations, 0 /* false */, _debug ,&_minimalSetS ,&_visitedVars ,&_status ,NULL);

      tmp15 = stringAppend(_OMC_LIT317,omc_DataReconciliation_boolSuccessOrFailed(threadData, _status));
      tmp16 = stringAppend(tmp15,_OMC_LIT14);
      fputs(omc_string_data(tmp16),stdout);

      {
        modelica_metatype _index;
        for (tmpMeta17 = _minimalSetS; !listEmpty(tmpMeta17); tmpMeta17=MMC_CDR(tmpMeta17))
        {
          _index = MMC_CAR(tmpMeta17);
          if((!listMember(_index, _finalSetS)))
          {
            tmpMeta18 = mmc_mk_cons(_index, _finalSetS);
            _finalSetS = tmpMeta18;
          }
        }
      }
    }
  }

  _failedboundaryConditionEquations = listReverse(_failedboundaryConditionEquations);

  _failedboundaryConditionVars = listReverse(_failedboundaryConditionVars);
  _return: OMC_LABEL_UNUSED
  if (out_finalSetS) { *out_finalSetS = _finalSetS; }
  if (out_failedboundaryConditionEquations) { *out_failedboundaryConditionEquations = _failedboundaryConditionEquations; }
  if (out_failedboundaryConditionVars) { *out_failedboundaryConditionVars = _failedboundaryConditionVars; }
  if (out_outStatus) { *out_outStatus = _outStatus; }
  omc_ret_ = _currentSystem;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_ExtractSetSPrime(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _bindingEquations, modelica_metatype _debug, modelica_metatype *out_finalSetS, modelica_metatype *out_failedboundaryConditionEquations, modelica_metatype *out_failedboundaryConditionVars, modelica_metatype *out_outStatus)
{
  modelica_integer tmp1;
  modelica_boolean _outStatus;
  modelica_metatype _currentSystem = NULL;
  tmp1 = omc_unbox_integer(_debug);
  _currentSystem = omc_DataReconciliation_ExtractSetSPrime(threadData, __omcQ_24in_5FcurrentSystem, _setBFailedBoundaryConditionEquations, _sBltAdjacencyMatrix, _knownVars, _boundaryConditionVars, _orderedVars, _orderedEqs, _mapIncRowEqn, _solvedEqsAndVarsInfo, _bindingEquations, tmp1, out_finalSetS, out_failedboundaryConditionEquations, out_failedboundaryConditionVars, &_outStatus);
  /* skip box _currentSystem; BackendDAE.EqSystem */
  /* skip box _finalSetS; list<#Integer> */
  /* skip box _failedboundaryConditionEquations; list<BackendDAE.Equation> */
  /* skip box _failedboundaryConditionVars; list<BackendDAE.Var> */
  if (out_outStatus) { *out_outStatus = omc_mk_icon(_outStatus); }
  return _currentSystem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_traverseEBLTAndExtractSetCAndSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _ebltEquations, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _solvedEqsAndVarsInfo, modelica_boolean _debug, modelica_metatype __omcQ_24in_5FsetBFailedBoundaryConditionEquations, modelica_metatype _bindingEquations, modelica_metatype *out_finalSetS, modelica_metatype *out_mappedEbltSetS, modelica_boolean *out_outStatus, modelica_metatype *out_setBFailedBoundaryConditionEquations)
{
  modelica_metatype _currentSystem = NULL;
  modelica_metatype _finalSetS = NULL;
  modelica_metatype _mappedEbltSetS = NULL;
  modelica_boolean _outStatus;
  modelica_metatype _setBFailedBoundaryConditionEquations = NULL;
  modelica_metatype _intermediateVars = NULL;
  modelica_metatype _minimalSetS = NULL;
  modelica_metatype _visitedVars = NULL;
  modelica_metatype _eqlistToRemove = NULL;
  modelica_metatype _intermediateVarsInBoundaryConditionEquation = NULL;
  modelica_boolean _status;
  modelica_metatype _setB = NULL;
  modelica_integer _varnumber;
  modelica_integer _eqnumber;
  modelica_integer _boundaryConditionVarIndex;
  modelica_metatype _var = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _failedboundaryConditionEquation = NULL;
  modelica_metatype _newEqnLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_string tmp10;
  modelica_string tmp11;
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
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_integer tmp30;
  modelica_metatype tmpMeta31;
  modelica_integer tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _currentSystem = __omcQ_24in_5FcurrentSystem;
  // _finalSetS has no default value.
  // _mappedEbltSetS has no default value.
  _outStatus = 0 /* false */;
  _setBFailedBoundaryConditionEquations = __omcQ_24in_5FsetBFailedBoundaryConditionEquations;
  // _intermediateVars has no default value.
  // _minimalSetS has no default value.
  // _visitedVars has no default value.
  // _eqlistToRemove has no default value.
  // _intermediateVarsInBoundaryConditionEquation has no default value.
  // _status has no default value.
  // _setB has no default value.
  // _varnumber has no default value.
  // _eqnumber has no default value.
  // _boundaryConditionVarIndex has no default value.
  // _var has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _eqn has no default value.
  // _failedboundaryConditionEquation has no default value.
  // _newEqnLst has no default value.
  fputs(omc_string_data(_OMC_LIT318),stdout);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _setB = tmpMeta1;

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqlistToRemove = tmpMeta2;

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _finalSetS = tmpMeta3;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _mappedEbltSetS = tmpMeta4;

  {
    modelica_metatype _eq;
    for (tmpMeta5 = _ebltEquations; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _eq = MMC_CAR(tmpMeta5);
      tmpMeta6 = mmc_mk_cons(_eq, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _intermediateVars = omc_DataReconciliation_getVariablesAfterExtraction(threadData, tmpMeta6, tmpMeta7, _sBltAdjacencyMatrix);

      _intermediateVars = listReverse(omc_List_setDifferenceOnTrue(threadData, _intermediateVars, _knownVars, boxvar_intEq));

      omc_DataReconciliation_dumpSetSTargetEquations(threadData, omc_unbox_integer(_eq), _solvedEqsAndVarsInfo, _mapIncRowEqn, _orderedEqs, _orderedVars, _OMC_LIT319);

      tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
      _minimalSetS = tmpMeta8;

      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      _visitedVars = tmpMeta9;

      _status = 1 /* true */;

      omc_DataReconciliation_extractNewMinimalSetS(threadData, _intermediateVars, _sBltAdjacencyMatrix, _knownVars, _boundaryConditionVars, _orderedVars, _orderedEqs, _mapIncRowEqn, _minimalSetS, _visitedVars, _solvedEqsAndVarsInfo, _status, _bindingEquations, 1 /* true */, _debug ,&_minimalSetS ,&_visitedVars ,&_status ,&_boundaryConditionVarIndex);

      tmp10 = stringAppend(_OMC_LIT317,omc_DataReconciliation_boolSuccessOrFailed(threadData, _status));
      tmp11 = stringAppend(tmp10,_OMC_LIT14);
      fputs(omc_string_data(tmp11),stdout);

      tmpMeta13 = omc_mk_box2(0, _eq, listReverse(_minimalSetS));
      tmpMeta12 = mmc_mk_cons(tmpMeta13, _mappedEbltSetS);
      _mappedEbltSetS = tmpMeta12;

      {
        modelica_metatype _index;
        for (tmpMeta14 = _minimalSetS; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
        {
          _index = MMC_CAR(tmpMeta14);
          if((!listMember(_index, _finalSetS)))
          {
            tmpMeta15 = mmc_mk_cons(_index, _finalSetS);
            _finalSetS = tmpMeta15;
          }
        }
      }

      if((!_status))
      {
        _varnumber = omc_DataReconciliation_getSolvedVariableNumber(threadData, omc_unbox_integer(_eq), _solvedEqsAndVarsInfo);

        if(listEmpty(_minimalSetS))
        {
          tmpMeta17 = mmc_mk_cons(_eq, MMC_REFSTRUCTLIT(mmc_nil));
          _minimalSetS = tmpMeta17;
        }

        if((!listMember(listHead(_minimalSetS), _eqlistToRemove)))
        {
          tmpMeta18 = mmc_mk_cons(listHead(_minimalSetS), _eqlistToRemove);
          _eqlistToRemove = tmpMeta18;

          tmpMeta20 = omc_mk_box2(0, omc_mk_integer(_varnumber), listHead(_minimalSetS));
          tmpMeta19 = mmc_mk_cons(tmpMeta20, _setB);
          _setB = tmpMeta19;

          if((!omc_DataReconciliation_boundaryConditionVarExist(threadData, _setBFailedBoundaryConditionEquations, _boundaryConditionVarIndex)))
          {
            tmpMeta21 = mmc_mk_cons(listHead(_minimalSetS), MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            _intermediateVarsInBoundaryConditionEquation = omc_DataReconciliation_getVariablesAfterExtraction(threadData, tmpMeta21, tmpMeta22, _sBltAdjacencyMatrix);

            _intermediateVarsInBoundaryConditionEquation = listReverse(omc_List_setDifferenceOnTrue(threadData, _intermediateVarsInBoundaryConditionEquation, _knownVars, boxvar_intEq));

            _failedboundaryConditionEquation = omc_BackendEquation_get(threadData, _orderedEqs, omc_unbox_integer(arrayGet(_mapIncRowEqn,omc_unbox_integer(listHead(_minimalSetS))) /* DAE.ASUB */));

            tmpMeta24 = omc_mk_box3(0, omc_mk_integer(_boundaryConditionVarIndex), _failedboundaryConditionEquation, _intermediateVarsInBoundaryConditionEquation);
            tmpMeta23 = mmc_mk_cons(tmpMeta24, _setBFailedBoundaryConditionEquations);
            _setBFailedBoundaryConditionEquations = tmpMeta23;
          }
        }
      }
    }
  }

  if((!listEmpty(_setB)))
  {
    tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
    _newEqnLst = tmpMeta26;

    {
      modelica_metatype _item;
      for (tmpMeta27 = listReverse(_setB); !listEmpty(tmpMeta27); tmpMeta27=MMC_CDR(tmpMeta27))
      {
        _item = MMC_CAR(tmpMeta27);
        /* Pattern-matching assignment */
        tmpMeta28 = _item;
        tmpMeta29 = OMC_BOX_FIELD(tmpMeta28, 1);
        tmp30 = omc_unbox_integer(tmpMeta29);
        tmpMeta31 = OMC_BOX_FIELD(tmpMeta28, 2);
        tmp32 = omc_unbox_integer(tmpMeta31);
        _varnumber = tmp30  /* pattern as ty=Integer */;
        _eqnumber = tmp32  /* pattern as ty=Integer */;

        _var = omc_BackendVariable_getVarAt(threadData, _orderedVars, _varnumber);

        _lhs = omc_BackendVariable_varExp(threadData, _var);

        _rhs = _OMC_LIT136;

        tmpMeta33 = omc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs, _rhs, _OMC_LIT139, _OMC_LIT184);
        _eqn = tmpMeta33;

        tmpMeta34 = mmc_mk_cons(_eqn, _newEqnLst);
        _newEqnLst = tmpMeta34;
      }
    }

    if(_debug)
    {
      fputs(omc_string_data(_OMC_LIT320),stdout);

      omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _eqlistToRemove, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT321);

      omc_BackendDump_dumpEquationList(threadData, _newEqnLst, _OMC_LIT322);
    }

    _eqlistToRemove = omc_List_unique(threadData, omc_List_map1r(threadData, _eqlistToRemove, boxvar_listGet, arrayList(_mapIncRowEqn)));

    _currentSystem = omc_DataReconciliation_deleteEquationsFromEqSyst(threadData, _currentSystem, _eqlistToRemove);

    tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_currentSystem), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[3] = omc_BackendEquation_merge(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), omc_BackendEquation_listEquation(threadData, listReverse(_newEqnLst)));
    _currentSystem = tmpMeta36;
  }
  else
  {
    _outStatus = 1 /* true */;

    _finalSetS = listReverse(_finalSetS);

    _mappedEbltSetS = listReverse(_mappedEbltSetS);
  }
  _return: OMC_LABEL_UNUSED
  if (out_finalSetS) { *out_finalSetS = _finalSetS; }
  if (out_mappedEbltSetS) { *out_mappedEbltSetS = _mappedEbltSetS; }
  if (out_outStatus) { *out_outStatus = _outStatus; }
  if (out_setBFailedBoundaryConditionEquations) { *out_setBFailedBoundaryConditionEquations = _setBFailedBoundaryConditionEquations; }
  omc_ret_ = _currentSystem;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_traverseEBLTAndExtractSetCAndSetS(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcurrentSystem, modelica_metatype _ebltEquations, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _boundaryConditionVars, modelica_metatype _orderedVars, modelica_metatype _orderedEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _debug, modelica_metatype __omcQ_24in_5FsetBFailedBoundaryConditionEquations, modelica_metatype _bindingEquations, modelica_metatype *out_finalSetS, modelica_metatype *out_mappedEbltSetS, modelica_metatype *out_outStatus, modelica_metatype *out_setBFailedBoundaryConditionEquations)
{
  modelica_integer tmp1;
  modelica_boolean _outStatus;
  modelica_metatype _currentSystem = NULL;
  tmp1 = omc_unbox_integer(_debug);
  _currentSystem = omc_DataReconciliation_traverseEBLTAndExtractSetCAndSetS(threadData, __omcQ_24in_5FcurrentSystem, _ebltEquations, _sBltAdjacencyMatrix, _knownVars, _boundaryConditionVars, _orderedVars, _orderedEqs, _mapIncRowEqn, _solvedEqsAndVarsInfo, tmp1, __omcQ_24in_5FsetBFailedBoundaryConditionEquations, _bindingEquations, out_finalSetS, out_mappedEbltSetS, &_outStatus, out_setBFailedBoundaryConditionEquations);
  /* skip box _currentSystem; BackendDAE.EqSystem */
  /* skip box _finalSetS; list<#Integer> */
  /* skip box _mappedEbltSetS; list<tuple<#Integer, list<#Integer>>> */
  if (out_outStatus) { *out_outStatus = omc_mk_icon(_outStatus); }
  /* skip box _setBFailedBoundaryConditionEquations; list<tuple<#Integer, BackendDAE.Equation, list<#Integer>>> */
  return _currentSystem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_swapComplexEquationsInSetC(threadData_t *threadData, modelica_metatype __omcQ_24in_5FebltEqsLst, modelica_metatype __omcQ_24in_5FtempSetS, modelica_metatype _mappedEbltSetS, modelica_metatype _currentSystem, modelica_metatype _mapIncRowEqn, modelica_metatype *out_tempSetS, modelica_metatype *out_complexEquationList, modelica_metatype *out_swappedEquationList)
{
  modelica_metatype _ebltEqsLst = NULL;
  modelica_metatype _tempSetS = NULL;
  modelica_metatype _complexEquationList = NULL;
  modelica_metatype _swappedEquationList = NULL;
  modelica_integer _eqIndex;
  modelica_metatype _matchedEqsLst = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _swapEq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ebltEqsLst = __omcQ_24in_5FebltEqsLst;
  _tempSetS = __omcQ_24in_5FtempSetS;
  // _complexEquationList has no default value.
  // _swappedEquationList has no default value.
  // _eqIndex has no default value.
  // _matchedEqsLst has no default value.
  // _eq has no default value.
  // _swapEq has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _complexEquationList = tmpMeta1;

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _swappedEquationList = tmpMeta2;

  {
    modelica_metatype _item;
    for (tmpMeta3 = _mappedEbltSetS; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _item = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _item;
      tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 1);
      tmp6 = omc_unbox_integer(tmpMeta5);
      tmpMeta7 = OMC_BOX_FIELD(tmpMeta4, 2);
      _eqIndex = tmp6  /* pattern as ty=Integer */;
      _matchedEqsLst = tmpMeta7;

      _eq = omc_BackendEquation_get(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), omc_unbox_integer(arrayGet(_mapIncRowEqn,_eqIndex) /* DAE.ASUB */));

      if(omc_BackendEquation_isComplexEquation(threadData, _eq))
      {
        tmpMeta8 = mmc_mk_cons(_eq, _complexEquationList);
        _complexEquationList = tmpMeta8;

        {
          modelica_metatype _index;
          for (tmpMeta9 = _matchedEqsLst; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
          {
            _index = MMC_CAR(tmpMeta9);
            _swapEq = omc_BackendEquation_get(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), omc_unbox_integer(arrayGet(_mapIncRowEqn,omc_unbox_integer(_index)) /* DAE.ASUB */));

            if((!omc_BackendEquation_isComplexEquation(threadData, _swapEq)))
            {
              _ebltEqsLst = omc_List_removeOnTrue(threadData, omc_mk_integer(_eqIndex), boxvar_intEq, _ebltEqsLst);

              _tempSetS = omc_List_removeOnTrue(threadData, _index, boxvar_intEq, _tempSetS);

              tmpMeta10 = mmc_mk_cons(omc_mk_integer(_eqIndex), _tempSetS);
              _tempSetS = tmpMeta10;

              tmpMeta11 = mmc_mk_cons(_index, _ebltEqsLst);
              _ebltEqsLst = tmpMeta11;

              tmpMeta12 = mmc_mk_cons(_swapEq, _swappedEquationList);
              _swappedEquationList = tmpMeta12;

              break;
            }
          }
        }
      }
    }
  }

  if((!listEmpty(_complexEquationList)))
  {
    omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, listReverse(_complexEquationList)), _OMC_LIT323);

    omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, listReverse(_swappedEquationList)), _OMC_LIT324);
  }
  _return: OMC_LABEL_UNUSED
  if (out_tempSetS) { *out_tempSetS = _tempSetS; }
  if (out_complexEquationList) { *out_complexEquationList = _complexEquationList; }
  if (out_swappedEquationList) { *out_swappedEquationList = _swappedEquationList; }
  omc_ret_ = _ebltEqsLst;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getBindingEquation(threadData_t *threadData, modelica_metatype _currentSystem, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _bindingEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _bindingEquations = tmpMeta1;
  _index = ((modelica_integer) 1);
  {
    modelica_metatype _eq;
    for (tmpMeta2 = omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_currentSystem, 3))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      if(omc_BackendEquation_isBindingEquation(threadData, _eq))
      {
        tmpMeta3 = mmc_mk_cons(omc_mk_integer(_index), _bindingEquations);
        _bindingEquations = tmpMeta3;
      }

      _index = ((modelica_integer) 1) + _index;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _bindingEquations;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_getEBLTEquations(threadData_t *threadData, modelica_metatype _knowns, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _mapIncRowEqn, modelica_metatype _currentSystem)
{
  modelica_metatype _ebltequations = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _eq;
  modelica_integer _var;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ebltequations = tmpMeta1;
  // _eq has no default value.
  // _var has no default value.
  {
    modelica_metatype _v;
    for (tmpMeta2 = _solvedEqsAndVarsInfo; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _v;
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
      tmp5 = omc_unbox_integer(tmpMeta4);
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta3, 2);
      tmp7 = omc_unbox_integer(tmpMeta6);
      _eq = tmp5  /* pattern as ty=Integer */;
      _var = tmp7  /* pattern as ty=Integer */;

      if(listMember(omc_mk_integer(_var), _knowns))
      {
        tmpMeta8 = mmc_mk_cons(omc_mk_integer(_eq), _ebltequations);
        _ebltequations = tmpMeta8;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _ebltequations;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_addUnmeasuredEquationtoBoundaryConditionEquationAndVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5FsetBFailedBoundaryConditionEquations, modelica_metatype _orderedVars, modelica_metatype _unMeasuredEqsLst)
{
  modelica_metatype _setBFailedBoundaryConditionEquations = NULL;
  modelica_metatype _failedboundaryConditionEquation = NULL;
  modelica_integer _count;
  modelica_integer _varIndex;
  modelica_metatype _varlist = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _setBFailedBoundaryConditionEquations = __omcQ_24in_5FsetBFailedBoundaryConditionEquations;
  // _failedboundaryConditionEquation has no default value.
  // _count has no default value.
  // _varIndex has no default value.
  // _varlist has no default value.
  tmp1 = stringAppend(_OMC_LIT325,intString(listLength(_setBFailedBoundaryConditionEquations)));
  tmp2 = stringAppend(tmp1,_OMC_LIT173);
  tmp3 = stringAppend(tmp2,_OMC_LIT61);
  fputs(omc_string_data(tmp3),stdout);

  _count = ((modelica_integer) 1);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _varlist = tmpMeta4;

  {
    modelica_metatype _item;
    for (tmpMeta5 = listReverse(_setBFailedBoundaryConditionEquations); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _item = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _item;
      tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
      tmp8 = omc_unbox_integer(tmpMeta7);
      tmpMeta9 = OMC_BOX_FIELD(tmpMeta6, 2);
      _varIndex = tmp8  /* pattern as ty=Integer */;
      _failedboundaryConditionEquation = tmpMeta9;

      tmpMeta10 = mmc_mk_cons(omc_BackendVariable_getVarAt(threadData, _orderedVars, _varIndex), _varlist);
      _varlist = tmpMeta10;
    }
  }

  fputs(omc_string_data(_OMC_LIT14),stdout);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _setBFailedBoundaryConditionEquations;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_prepareUnmeasuredVariablesEquations(threadData_t *threadData, modelica_metatype _unMeasuredEqsLst, modelica_metatype _sBltAdjacencyMatrix, modelica_metatype _knownVars, modelica_metatype _solvedEqsAndVarsInfo, modelica_metatype _orderedEqs, modelica_metatype _orderedVars, modelica_metatype _mapIncRowEqn, modelica_metatype __omcQ_24in_5FsetBFailedBoundaryConditionEquations, modelica_metatype *out_failedboundaryConditionEquationIndex)
{
  modelica_metatype _setBFailedBoundaryConditionEquations = NULL;
  modelica_metatype _failedboundaryConditionEquationIndex = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _varIndex;
  modelica_metatype _intermediateVars = NULL;
  modelica_metatype _unmeasuredEq = NULL;
  modelica_metatype _unMeasuredVariablesAndEquations = NULL;
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
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _setBFailedBoundaryConditionEquations = __omcQ_24in_5FsetBFailedBoundaryConditionEquations;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _failedboundaryConditionEquationIndex = tmpMeta1;
  // _varIndex has no default value.
  // _intermediateVars has no default value.
  // _unmeasuredEq has no default value.
  // _unMeasuredVariablesAndEquations has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _unMeasuredEqsLst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      _varIndex = omc_DataReconciliation_getSolvedVariableNumber(threadData, omc_unbox_integer(_eq), _solvedEqsAndVarsInfo);

      tmpMeta3 = mmc_mk_cons(_eq, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _intermediateVars = omc_DataReconciliation_getVariablesAfterExtraction(threadData, tmpMeta3, tmpMeta4, _sBltAdjacencyMatrix);

      _intermediateVars = listReverse(omc_List_setDifferenceOnTrue(threadData, _intermediateVars, _knownVars, boxvar_intEq));

      _unmeasuredEq = omc_BackendEquation_get(threadData, _orderedEqs, omc_unbox_integer(arrayGet(_mapIncRowEqn,omc_unbox_integer(_eq)) /* DAE.ASUB */));

      tmpMeta6 = omc_mk_box3(0, omc_mk_integer(_varIndex), _unmeasuredEq, _intermediateVars);
      tmpMeta5 = mmc_mk_cons(tmpMeta6, _setBFailedBoundaryConditionEquations);
      _setBFailedBoundaryConditionEquations = tmpMeta5;
    }
  }

  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _unMeasuredVariablesAndEquations = tmpMeta8;

  {
    modelica_metatype _item;
    for (tmpMeta9 = _setBFailedBoundaryConditionEquations; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _item = MMC_CAR(tmpMeta9);
      /* Pattern-matching assignment */
      tmpMeta10 = _item;
      tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 1);
      tmp12 = omc_unbox_integer(tmpMeta11);
      _varIndex = tmp12  /* pattern as ty=Integer */;

      if(omc_BackendVariable_varHasUncertainValuePropagate(threadData, omc_BackendVariable_getVarAt(threadData, _orderedVars, _varIndex)))
      {
        tmpMeta13 = mmc_mk_cons(_item, _unMeasuredVariablesAndEquations);
        _unMeasuredVariablesAndEquations = tmpMeta13;
      }
    }
  }

  _setBFailedBoundaryConditionEquations = omc_List_unique(threadData, _unMeasuredVariablesAndEquations);
  _return: OMC_LABEL_UNUSED
  if (out_failedboundaryConditionEquationIndex) { *out_failedboundaryConditionEquationIndex = _failedboundaryConditionEquationIndex; }
  omc_ret_ = _setBFailedBoundaryConditionEquations;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _orderedVars, modelica_metatype _unmeasuredVariables, modelica_boolean _stateEstimation)
{
  modelica_metatype _failedboundaryConditionEquation = NULL;
  modelica_integer _count;
  modelica_integer _varIndex;
  modelica_metatype _varlist = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_string tmp14;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_metatype tmpMeta17;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _failedboundaryConditionEquation has no default value.
  // _count has no default value.
  // _varIndex has no default value.
  // _varlist has no default value.
  if(_stateEstimation)
  {
    tmp1 = stringAppend(_OMC_LIT326,intString(listLength(_setBFailedBoundaryConditionEquations)));
    tmp2 = stringAppend(tmp1,_OMC_LIT173);
    tmp3 = stringAppend(tmp2,_OMC_LIT61);
    fputs(omc_string_data(tmp3),stdout);
  }
  else
  {
    tmp4 = stringAppend(_OMC_LIT325,intString(listLength(_setBFailedBoundaryConditionEquations)));
    tmp5 = stringAppend(tmp4,_OMC_LIT173);
    tmp6 = stringAppend(tmp5,_OMC_LIT61);
    fputs(omc_string_data(tmp6),stdout);
  }

  _count = ((modelica_integer) 1);

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _varlist = tmpMeta7;

  {
    modelica_metatype _item;
    for (tmpMeta8 = listReverse(_setBFailedBoundaryConditionEquations); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
    {
      _item = MMC_CAR(tmpMeta8);
      /* Pattern-matching assignment */
      tmpMeta9 = _item;
      tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 1);
      tmp11 = omc_unbox_integer(tmpMeta10);
      tmpMeta12 = OMC_BOX_FIELD(tmpMeta9, 2);
      _varIndex = tmp11  /* pattern as ty=Integer */;
      _failedboundaryConditionEquation = tmpMeta12;

      tmpMeta13 = mmc_mk_cons(omc_BackendVariable_getVarAt(threadData, _orderedVars, _varIndex), _varlist);
      _varlist = tmpMeta13;

      tmp14 = stringAppend(_OMC_LIT14,intString(_count));
      tmp15 = stringAppend(tmp14,_OMC_LIT115);
      tmp16 = stringAppend(tmp15,omc_BackendDump_equationString(threadData, _failedboundaryConditionEquation));
      fputs(omc_string_data(tmp16),stdout);

      _count = ((modelica_integer) 1) + _count;
    }
  }

  fputs(omc_string_data(_OMC_LIT14),stdout);

  if(_stateEstimation)
  {
    omc_BackendDump_dumpVarList(threadData, _unmeasuredVariables, _OMC_LIT328);
  }
  else
  {
    omc_BackendDump_dumpVarList(threadData, listReverse(_varlist), _OMC_LIT327);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_metatype _orderedVars, modelica_metatype _unmeasuredVariables, modelica_metatype _stateEstimation)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_stateEstimation);
  omc_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars(threadData, _setBFailedBoundaryConditionEquations, _orderedVars, _unmeasuredVariables, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DataReconciliation_isBoundaryConditionVars(threadData_t *threadData, modelica_metatype _setSVars, modelica_metatype _boundaryConditionsVars)
{
  modelica_boolean _result;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _result = 0 /* false */;
  if(listMember(_setSVars, _boundaryConditionsVars))
  {
    _result = 1 /* true */;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _result;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_isBoundaryConditionVars(threadData_t *threadData, modelica_metatype _setSVars, modelica_metatype _boundaryConditionsVars)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_DataReconciliation_isBoundaryConditionVars(threadData, _setSVars, _boundaryConditionsVars);
  out_result = omc_mk_icon(_result);
  return out_result;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_stateEstimation(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _currentSystem = NULL;
  modelica_metatype _outOtherEqns = NULL;
  modelica_metatype _outOtherEqnsSetSPrime = NULL;
  modelica_metatype _outResidualEqns = NULL;
  modelica_metatype _outBoundaryConditionEquations = NULL;
  modelica_metatype _setC_Eq = NULL;
  modelica_metatype _setS_Eq = NULL;
  modelica_metatype _setSPrime_Eq = NULL;
  modelica_metatype _residualEquations = NULL;
  modelica_metatype _failedboundaryConditionEquations = NULL;
  modelica_metatype _allDaeEqs = NULL;
  modelica_metatype _adjacencyMatrix = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _match1 = NULL;
  modelica_metatype _match2 = NULL;
  modelica_metatype _solvedEqsAndVarsInfo = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _varCount;
  modelica_integer _eqCount;
  modelica_metatype _ebltEqsLst = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _matchedEqsLst = NULL;
  modelica_metatype _approximatedEquations = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _setC = NULL;
  modelica_metatype _tempSetS = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _setS = NULL;
  modelica_metatype _boundaryConditionEquations = NULL;
  modelica_metatype _bindingEquations = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _setSPrime = NULL;
  modelica_metatype _unMeasuredEqsLst = NULL;
  modelica_metatype _sBltAdjacencyMatrix = NULL;
  modelica_metatype tmpMeta7;
  modelica_metatype _paramVars = NULL;
  modelica_metatype _setSVars = NULL;
  modelica_metatype _residualVars = NULL;
  modelica_metatype _knownVars = NULL;
  modelica_metatype _failedboundaryConditionVars = NULL;
  modelica_metatype _extraVarsinSetSPrime = NULL;
  modelica_metatype _unMeasuredVariables = NULL;
  modelica_metatype _simCodeJacobian = NULL;
  modelica_metatype _simCodeJacobianH = NULL;
  modelica_metatype _shared = NULL;
  modelica_string _str = NULL;
  modelica_string _modelicaOutput = NULL;
  modelica_string _modelicaFileName = NULL;
  modelica_string _modelName = NULL;
  modelica_string _auxillaryConditionsFilename = NULL;
  modelica_string _auxillaryEquations = NULL;
  modelica_string _intermediateEquationsFilename = NULL;
  modelica_string _intermediateEquations = NULL;
  modelica_string _csvfileName = NULL;
  modelica_metatype _mappedEbltSetS = NULL;
  modelica_metatype _setBFailedBoundaryConditionEquations = NULL;
  modelica_metatype _allVarsList = NULL;
  modelica_metatype _knowns = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype _unMeasuredVariablesOfInterest = NULL;
  modelica_metatype tmpMeta9;
  modelica_metatype _failedboundaryConditionEquationIndex = NULL;
  modelica_metatype _boundaryConditionVars = NULL;
  modelica_metatype tmpMeta10;
  modelica_metatype _exactEquationVars = NULL;
  modelica_metatype tmpMeta11;
  modelica_metatype _extractedVarsfromSetS = NULL;
  modelica_metatype _boundaryConditionTaggedEquationSolvedVars = NULL;
  modelica_metatype _inputVars = NULL;
  modelica_metatype _outDiffVars = NULL;
  modelica_metatype _outOtherVars = NULL;
  modelica_metatype _outResidualVars = NULL;
  modelica_metatype _outBoundaryConditionVars = NULL;
  modelica_metatype _outOtherVarsSetSPrime = NULL;
  modelica_integer _procedureCount;
  modelica_integer _numRelatedBoundaryConditions;
  modelica_metatype _measurementcsvData = NULL;
  modelica_boolean _debug;
  modelica_boolean _status;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
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
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_metatype tmpMeta38;
  modelica_string tmp39;
  modelica_string tmp40;
  modelica_string tmp41;
  modelica_string tmp42;
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_string tmp48;
  modelica_string tmp49;
  modelica_string tmp50;
  modelica_string tmp51;
  modelica_string tmp52;
  modelica_string tmp53;
  modelica_string tmp54;
  modelica_string tmp55;
  modelica_string tmp56;
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  modelica_string tmp59;
  modelica_string tmp60;
  modelica_string tmp61;
  modelica_string tmp62;
  modelica_string tmp63;
  modelica_string tmp64;
  modelica_string tmp65;
  modelica_string tmp66;
  modelica_string tmp67;
  modelica_string tmp68;
  modelica_metatype tmpMeta69;
  modelica_metatype tmpMeta70;
  modelica_metatype tmpMeta71;
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
  modelica_metatype tmpMeta87;
  modelica_metatype tmpMeta88;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _currentSystem has no default value.
  // _outOtherEqns has no default value.
  // _outOtherEqnsSetSPrime has no default value.
  // _outResidualEqns has no default value.
  // _outBoundaryConditionEquations has no default value.
  // _setC_Eq has no default value.
  // _setS_Eq has no default value.
  // _setSPrime_Eq has no default value.
  // _residualEquations has no default value.
  // _failedboundaryConditionEquations has no default value.
  // _allDaeEqs has no default value.
  // _adjacencyMatrix has no default value.
  // _mapEqnIncRow has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _mapIncRowEqn = listArray(tmpMeta1);
  // _match1 has no default value.
  // _match2 has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _solvedEqsAndVarsInfo = tmpMeta2;
  // _varCount has no default value.
  // _eqCount has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _ebltEqsLst = tmpMeta3;
  // _matchedEqsLst has no default value.
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _approximatedEquations = tmpMeta4;
  // _setC has no default value.
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _tempSetS = tmpMeta5;
  // _setS has no default value.
  // _boundaryConditionEquations has no default value.
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _bindingEquations = tmpMeta6;
  // _setSPrime has no default value.
  // _unMeasuredEqsLst has no default value.
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _sBltAdjacencyMatrix = tmpMeta7;
  // _paramVars has no default value.
  // _setSVars has no default value.
  // _residualVars has no default value.
  // _knownVars has no default value.
  // _failedboundaryConditionVars has no default value.
  // _extraVarsinSetSPrime has no default value.
  // _unMeasuredVariables has no default value.
  // _simCodeJacobian has no default value.
  // _simCodeJacobianH has no default value.
  // _shared has no default value.
  // _str has no default value.
  // _modelicaOutput has no default value.
  // _modelicaFileName has no default value.
  // _modelName has no default value.
  // _auxillaryConditionsFilename has no default value.
  // _auxillaryEquations has no default value.
  // _intermediateEquationsFilename has no default value.
  // _intermediateEquations has no default value.
  // _csvfileName has no default value.
  // _mappedEbltSetS has no default value.
  // _setBFailedBoundaryConditionEquations has no default value.
  // _allVarsList has no default value.
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _knowns = tmpMeta8;
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _unMeasuredVariablesOfInterest = tmpMeta9;
  // _failedboundaryConditionEquationIndex has no default value.
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _boundaryConditionVars = tmpMeta10;
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _exactEquationVars = tmpMeta11;
  // _extractedVarsfromSetS has no default value.
  // _boundaryConditionTaggedEquationSolvedVars has no default value.
  // _inputVars has no default value.
  // _outDiffVars has no default value.
  // _outOtherVars has no default value.
  // _outResidualVars has no default value.
  // _outBoundaryConditionVars has no default value.
  // _outOtherVarsSetSPrime has no default value.
  // _procedureCount has no default value.
  // _numRelatedBoundaryConditions has no default value.
  // _measurementcsvData has no default value.
  _debug = 0 /* false */;
  _status = 0 /* false */;
  if(omc_Flags_isSet(threadData, _OMC_LIT214))
  {
    _debug = 1 /* true */;
  }

  /* Pattern-matching assignment */
  tmpMeta12 = (OMC_BOX_FIELD(_inDAE, 2));
  if (listEmpty(tmpMeta12)) OMC_THROW_INTERNAL();
  tmpMeta13 = MMC_CAR(tmpMeta12);
  tmpMeta14 = MMC_CDR(tmpMeta12);
  if (!listEmpty(tmpMeta14)) OMC_THROW_INTERNAL();
  _currentSystem = tmpMeta13;

  _shared = (OMC_BOX_FIELD(_inDAE, 3));

  tmp15 = stringAppend(_OMC_LIT215,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
  tmp16 = stringAppend(tmp15,_OMC_LIT14);
  tmp17 = stringAppend(tmp16,_OMC_LIT61);
  tmp18 = stringAppend(tmp17,_OMC_LIT59);
  fputs(omc_string_data(tmp18),stdout);

  _currentSystem = omc_DataReconciliation_setBoundaryConditionEquationsAndVars(threadData, _currentSystem, (OMC_BOX_FIELD(_inDAE, 3)), _debug ,&_shared);

  _procedureCount = ((modelica_integer) 1);

  tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
  _setBFailedBoundaryConditionEquations = tmpMeta19;

  while(1)
  {
    if(!(!_status)) break;
    omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT216);

    omc_BackendDump_dumpEquationArray(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _OMC_LIT217);

    _allVarsList = omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, (OMC_BOX_FIELD(_currentSystem, 2))));

    _varCount = omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_currentSystem, 2)), 6)));

    _eqCount = omc_BackendEquation_equationArraySize(threadData, (OMC_BOX_FIELD(_currentSystem, 3)));

    _adjacencyMatrix = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT221, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

    _sBltAdjacencyMatrix = omc_DataReconciliation_getSBLTAdjacencyMatrix(threadData, _adjacencyMatrix);

    _match1 = omc_Matching_RegularMatching(threadData, _adjacencyMatrix, _varCount, _eqCount ,&_match2 ,NULL ,NULL ,NULL);

    omc_BackendDump_dumpMatching(threadData, _match1);

    _solvedEqsAndVarsInfo = omc_DataReconciliation_getSolvedEquationAndVarsInfo(threadData, _match1 ,&_matchedEqsLst);

    _bindingEquations = omc_DataReconciliation_getBindingEquation(threadData, _currentSystem, _mapIncRowEqn);

    _bindingEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _bindingEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _approximatedEquations = omc_DataReconciliation_getEquationsTaggedApproximatedOrBoundaryCondition(threadData, omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_currentSystem, 3))), ((modelica_integer) 1) ,&_boundaryConditionEquations);

    if(_debug)
    {
      omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT264);

      omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT265);
    }

    _approximatedEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _boundaryConditionEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _boundaryConditionTaggedEquationSolvedVars = omc_DataReconciliation_getBoundaryConditionVariables(threadData, _boundaryConditionEquations, _solvedEqsAndVarsInfo);

    if(_debug)
    {
      fputs(omc_string_data(_OMC_LIT266),stdout);

      tmp20 = stringAppend(_OMC_LIT267,omc_DataReconciliation_dumplistInteger(threadData, _approximatedEquations));
      fputs(omc_string_data(tmp20),stdout);

      tmp21 = stringAppend(_OMC_LIT268,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionEquations));
      fputs(omc_string_data(tmp21),stdout);

      fputs(omc_string_data(_OMC_LIT14),stdout);
    }

    _knowns = omc_DataReconciliation_getVariablesBlockCategories(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _allVarsList ,&_boundaryConditionVars ,&_exactEquationVars ,&_unMeasuredVariablesOfInterest);

    _boundaryConditionVars = listAppend(_boundaryConditionVars, _boundaryConditionTaggedEquationSolvedVars);

    if(_debug)
    {
      fputs(omc_string_data(_OMC_LIT222),stdout);

      tmp22 = stringAppend(_OMC_LIT223,omc_DataReconciliation_dumplistInteger(threadData, _knowns));
      fputs(omc_string_data(tmp22),stdout);

      tmp23 = stringAppend(_OMC_LIT329,omc_DataReconciliation_dumplistInteger(threadData, _unMeasuredVariablesOfInterest));
      fputs(omc_string_data(tmp23),stdout);

      tmp24 = stringAppend(_OMC_LIT224,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionVars));
      fputs(omc_string_data(tmp24),stdout);

      tmp25 = stringAppend(_OMC_LIT225,omc_DataReconciliation_dumplistInteger(threadData, _exactEquationVars));
      fputs(omc_string_data(tmp25),stdout);

      tmp26 = stringAppend(_OMC_LIT226,mmc_anyString(_adjacencyMatrix));
      tmp27 = stringAppend(tmp26,_OMC_LIT14);
      fputs(omc_string_data(tmp27),stdout);
    }

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _matchedEqsLst, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT330);

    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, listReverse(_knowns), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), _OMC_LIT331);

    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, listReverse(_unMeasuredVariablesOfInterest), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), _OMC_LIT332);

    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, listReverse(_boundaryConditionVars), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), _OMC_LIT333);

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _bindingEquations, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT334);

    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT335);

    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT336);

    _ebltEqsLst = omc_DataReconciliation_getEBLTEquations(threadData, _knowns, _solvedEqsAndVarsInfo, _mapIncRowEqn, _currentSystem);

    _ebltEqsLst = omc_List_setDifferenceOnTrue(threadData, _ebltEqsLst, _bindingEquations, boxvar_intEq);

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _ebltEqsLst, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT337);

    _currentSystem = omc_DataReconciliation_traverseEBLTAndExtractSetCAndSetS(threadData, _currentSystem, _ebltEqsLst, _sBltAdjacencyMatrix, _knowns, _boundaryConditionVars, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, _solvedEqsAndVarsInfo, _debug, _setBFailedBoundaryConditionEquations, _bindingEquations ,&_tempSetS ,&_mappedEbltSetS ,&_status ,&_setBFailedBoundaryConditionEquations);

    if((!_status))
    {
      tmp28 = stringAppend(_OMC_LIT338,intString(_procedureCount));
      tmp29 = stringAppend(tmp28,_OMC_LIT339);
      tmp30 = stringAppend(tmp29,_OMC_LIT61);
      tmp31 = stringAppend(tmp30,_OMC_LIT14);
      fputs(omc_string_data(tmp31),stdout);
    }

    _procedureCount = ((modelica_integer) 1) + _procedureCount;
  }

  tmp32 = stringAppend(_OMC_LIT340,intString(((modelica_integer) -1) + _procedureCount));
  tmp33 = stringAppend(tmp32,_OMC_LIT14);
  tmp34 = stringAppend(tmp33,_OMC_LIT61);
  tmp35 = stringAppend(tmp34,_OMC_LIT14);
  fputs(omc_string_data(tmp35),stdout);

  _ebltEqsLst = omc_List_setDifferenceOnTrue(threadData, _ebltEqsLst, _approximatedEquations, boxvar_intEq);

  _tempSetS = omc_List_setDifferenceOnTrue(threadData, _tempSetS, _approximatedEquations, boxvar_intEq);

  tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
  _extractedVarsfromSetS = omc_DataReconciliation_getVariablesAfterExtraction(threadData, tmpMeta36, _tempSetS, _sBltAdjacencyMatrix);

  _extractedVarsfromSetS = omc_List_setDifferenceOnTrue(threadData, _extractedVarsfromSetS, _knowns, boxvar_intEq);

  _setC = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _ebltEqsLst, _mapIncRowEqn));

  _setS = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _tempSetS, _mapIncRowEqn));

  tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
  _setC_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setC, (OMC_BOX_FIELD(_currentSystem, 3)), tmpMeta37);

  tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
  _setS_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setS, (OMC_BOX_FIELD(_currentSystem, 3)), tmpMeta38);

  tmp39 = stringAppend(_OMC_LIT341,omc_DataReconciliation_dumplistInteger(threadData, _setC));
  tmp40 = stringAppend(tmp39,_OMC_LIT14);
  tmp41 = stringAppend(tmp40,_OMC_LIT272);
  tmp42 = stringAppend(tmp41,omc_DataReconciliation_dumplistInteger(threadData, _setS));
  tmp43 = stringAppend(tmp42,_OMC_LIT59);
  fputs(omc_string_data(tmp43),stdout);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), _OMC_LIT274);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq), _OMC_LIT275);

  _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _knowns, boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))));

  _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarUnreplaceable, omc_mk_boolean(1 /* true */)));

  _csvfileName = omc_DataReconciliation_readMeasurementsFromCSV(threadData, _shared ,&_measurementcsvData);

  _outDiffVars = omc_DataReconciliation_setStartValuesToMeasurements(threadData, _outDiffVars, _measurementcsvData, _csvfileName);

  /* Pattern-matching assignment */
  tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta45 = omc_mk_box2(0, (OMC_BOX_FIELD(_shared, 12)), tmpMeta44);
  tmpMeta46 = omc_BackendEquation_traverseEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), boxvar_BackendEquation_traverseEquationToScalarResidualForm, tmpMeta45);
  tmpMeta47 = OMC_BOX_FIELD(tmpMeta46, 2);
  _residualEquations = tmpMeta47;

  _residualEquations = omc_BackendEquation_convertResidualsIntoSolvedEquations(threadData, listReverse(_residualEquations), _OMC_LIT284, ((modelica_integer) 1), 0 /* false */ ,&_residualVars, NULL);

  _outResidualVars = omc_BackendVariable_listVar(threadData, listReverse(_residualVars));

  _outResidualEqns = omc_BackendEquation_listEquation(threadData, _residualEquations);

  _outOtherEqns = omc_BackendEquation_listEquation(threadData, _setS_Eq);

  _paramVars = omc_BackendEquation_equationsVars(threadData, omc_BackendEquation_merge(threadData, _outOtherEqns, _outResidualEqns), (OMC_BOX_FIELD(_shared, 2)));

  _outOtherVars = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _extractedVarsfromSetS, boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))));

  omc_DataReconciliation_dumpSetSVars(threadData, _outOtherVars, _OMC_LIT342);

  omc_BackendDump_dumpVariables(threadData, omc_BackendVariable_listVar(threadData, _paramVars), _OMC_LIT286);

  tmp48 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT287);
  omc_string_store(&(_auxillaryConditionsFilename), tmp48);

  tmp49 = stringAppend(_OMC_LIT343,intString(omc_BackendEquation_getNumberOfEquations(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq))));
  tmp50 = stringAppend(tmp49,_OMC_LIT134);
  tmp51 = stringAppend(tmp50,intString(omc_BackendEquation_equationArraySize(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq))));
  tmp52 = stringAppend(tmp51,_OMC_LIT159);
  omc_string_store(&(_auxillaryEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), tmp52));

  omc_System_writeFile(threadData, _auxillaryConditionsFilename, _auxillaryEquations);

  tmp53 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT289);
  omc_string_store(&(_intermediateEquationsFilename), tmp53);

  tmp54 = stringAppend(_OMC_LIT344,intString(omc_BackendEquation_getNumberOfEquations(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq))));
  tmp55 = stringAppend(tmp54,_OMC_LIT134);
  tmp56 = stringAppend(tmp55,intString(omc_BackendEquation_equationArraySize(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq))));
  tmp57 = stringAppend(tmp56,_OMC_LIT159);
  omc_string_store(&(_intermediateEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq), tmp57));

  omc_System_writeFile(threadData, _intermediateEquationsFilename, _intermediateEquations);

  omc_DataReconciliation_dumpRelatedBoundaryConditionsEquations(threadData, _setBFailedBoundaryConditionEquations, (OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));

  _numRelatedBoundaryConditions = listLength(_setBFailedBoundaryConditionEquations);

  omc_DataReconciliation_VerifyDataReconciliation(threadData, _ebltEqsLst, _tempSetS, _knowns, _boundaryConditionVars, _sBltAdjacencyMatrix, _solvedEqsAndVarsInfo, _exactEquationVars, _approximatedEquations, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, _outOtherVars, _setS_Eq, _shared, _setC, _setS, listLength(_unMeasuredVariablesOfInterest));

  _unMeasuredEqsLst = omc_DataReconciliation_getEBLTEquations(threadData, _unMeasuredVariablesOfInterest, _solvedEqsAndVarsInfo, _mapIncRowEqn, _currentSystem);

  _unMeasuredEqsLst = omc_List_setDifferenceOnTrue(threadData, _unMeasuredEqsLst, _bindingEquations, boxvar_intEq);

  _unMeasuredVariables = omc_List_map1r(threadData, listReverse(_unMeasuredVariablesOfInterest), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2)));

  omc_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars(threadData, _setBFailedBoundaryConditionEquations, (OMC_BOX_FIELD(_currentSystem, 2)), _unMeasuredVariables, 1 /* true */);

  _setBFailedBoundaryConditionEquations = omc_DataReconciliation_prepareUnmeasuredVariablesEquations(threadData, _unMeasuredEqsLst, _sBltAdjacencyMatrix, _knowns, _solvedEqsAndVarsInfo, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _mapIncRowEqn, _setBFailedBoundaryConditionEquations ,&_failedboundaryConditionEquationIndex);

  omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _unMeasuredEqsLst, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT345);

  omc_DataReconciliation_ExtractSetSPrime(threadData, _currentSystem, _setBFailedBoundaryConditionEquations, _sBltAdjacencyMatrix, _knowns, _boundaryConditionVars, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, _solvedEqsAndVarsInfo, _bindingEquations, _debug ,&_setSPrime ,&_failedboundaryConditionEquations ,&_failedboundaryConditionVars ,&_status);

  _setSPrime = omc_List_unique(threadData, listAppend(_failedboundaryConditionEquationIndex, _setSPrime));

  _setSPrime = omc_List_setDifferenceOnTrue(threadData, _setSPrime, _approximatedEquations, boxvar_intEq);

  _setSPrime = omc_List_setDifferenceOnTrue(threadData, _setSPrime, _unMeasuredEqsLst, boxvar_intEq);

  if(_debug)
  {
    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _setSPrime, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT346);
  }

  _setSPrime = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _setSPrime, _mapIncRowEqn));

  tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
  _setSPrime_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setSPrime, (OMC_BOX_FIELD(_currentSystem, 3)), tmpMeta58);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _failedboundaryConditionEquations), _OMC_LIT347);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setSPrime_Eq), _OMC_LIT348);

  _paramVars = omc_BackendEquation_equationsVars(threadData, omc_BackendEquation_listEquation(threadData, _setSPrime_Eq), (OMC_BOX_FIELD(_shared, 2)));

  _setSVars = omc_BackendEquation_equationsVars(threadData, omc_BackendEquation_listEquation(threadData, _setSPrime_Eq), (OMC_BOX_FIELD(_currentSystem, 2)));

  _knownVars = omc_List_extractOnTrue(threadData, _setSVars, boxvar_BackendVariable_varHasUncertainValueRefine ,&_setSVars);

  omc_List_extract1OnTrue(threadData, _setSVars, boxvar_DataReconciliation_isBoundaryConditionVars, _failedboundaryConditionVars ,&_setSVars);

  _extraVarsinSetSPrime = omc_List_extract1OnTrue(threadData, _setSVars, boxvar_DataReconciliation_isBoundaryConditionVars, omc_List_map1r(threadData, listReverse(_boundaryConditionVars), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), NULL);

  if(_debug)
  {
    omc_BackendDump_dumpVarList(threadData, _unMeasuredVariables, _OMC_LIT349);

    omc_BackendDump_dumpVarList(threadData, _setSVars, _OMC_LIT350);

    omc_BackendDump_dumpVarList(threadData, _knownVars, _OMC_LIT351);

    omc_BackendDump_dumpVarList(threadData, _paramVars, _OMC_LIT352);

    omc_BackendDump_dumpVarList(threadData, _extraVarsinSetSPrime, _OMC_LIT353);
  }

  _outBoundaryConditionVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, listReverse(_unMeasuredVariables), boxvar_BackendVariable_setVarUnreplaceable, omc_mk_boolean(1 /* true */)));

  _outBoundaryConditionEquations = omc_BackendEquation_listEquation(threadData, _failedboundaryConditionEquations);

  _outOtherEqnsSetSPrime = omc_BackendEquation_listEquation(threadData, _setSPrime_Eq);

  _outOtherVarsSetSPrime = omc_BackendVariable_listVar(threadData, _setSVars);

  omc_DataReconciliation_dumpSetSVars(threadData, _outOtherVarsSetSPrime, _OMC_LIT354);

  tmp59 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT355);
  omc_string_store(&(_auxillaryConditionsFilename), tmp59);

  tmp60 = stringAppend(_OMC_LIT356,intString(omc_BackendEquation_getNumberOfEquations(threadData, _outBoundaryConditionEquations)));
  tmp61 = stringAppend(tmp60,_OMC_LIT134);
  tmp62 = stringAppend(tmp61,intString(omc_BackendEquation_equationArraySize(threadData, _outBoundaryConditionEquations)));
  tmp63 = stringAppend(tmp62,_OMC_LIT159);
  omc_string_store(&(_auxillaryEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, _outBoundaryConditionEquations, tmp63));

  omc_System_writeFile(threadData, _auxillaryConditionsFilename, _auxillaryEquations);

  tmp64 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT357);
  omc_string_store(&(_intermediateEquationsFilename), tmp64);

  tmp65 = stringAppend(_OMC_LIT358,intString(omc_BackendEquation_getNumberOfEquations(threadData, omc_BackendEquation_listEquation(threadData, listAppend(_failedboundaryConditionEquations, _setSPrime_Eq)))));
  tmp66 = stringAppend(tmp65,_OMC_LIT134);
  tmp67 = stringAppend(tmp66,intString(omc_BackendEquation_equationArraySize(threadData, omc_BackendEquation_listEquation(threadData, listAppend(_failedboundaryConditionEquations, _setSPrime_Eq)))));
  tmp68 = stringAppend(tmp67,_OMC_LIT159);
  omc_string_store(&(_intermediateEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, omc_BackendEquation_listEquation(threadData, listAppend(_failedboundaryConditionEquations, _setSPrime_Eq)), tmp68));

  omc_System_writeFile(threadData, _intermediateEquationsFilename, _intermediateEquations);

  omc_DataReconciliation_VerifySetSPrime(threadData, _outBoundaryConditionVars, _outOtherVarsSetSPrime, _outDiffVars, _extraVarsinSetSPrime, _outBoundaryConditionEquations, _outOtherEqnsSetSPrime, _shared, listLength(_setC), _numRelatedBoundaryConditions, 1 /* true */);

  if(_debug)
  {
    omc_BackendDump_dumpVariables(threadData, _outDiffVars, _OMC_LIT291);

    omc_BackendDump_dumpVariables(threadData, _outResidualVars, _OMC_LIT292);

    omc_BackendDump_dumpVariables(threadData, _outOtherVars, _OMC_LIT293);

    omc_BackendDump_dumpEquationArray(threadData, _outResidualEqns, _OMC_LIT294);

    omc_BackendDump_dumpEquationArray(threadData, _outOtherEqns, _OMC_LIT295);
  }

  if(_debug)
  {
    omc_BackendDump_dumpVariables(threadData, _outDiffVars, _OMC_LIT291);

    omc_BackendDump_dumpEquationArray(threadData, _outBoundaryConditionEquations, _OMC_LIT294);

    omc_BackendDump_dumpVariables(threadData, _outBoundaryConditionVars, _OMC_LIT292);

    omc_BackendDump_dumpEquationArray(threadData, _outOtherEqnsSetSPrime, _OMC_LIT359);

    omc_BackendDump_dumpVariables(threadData, _outOtherVarsSetSPrime, _OMC_LIT293);
  }

  _simCodeJacobian = omc_SymbolicJacobian_getSymbolicJacobian(threadData, _outDiffVars, _outResidualEqns, _outResidualVars, _outOtherEqns, _outOtherVars, _shared, _outOtherVars, _OMC_LIT296, 0 /* false */ ,&_shared);

  _simCodeJacobianH = omc_SymbolicJacobian_getSymbolicJacobian(threadData, _outDiffVars, _outBoundaryConditionEquations, _outBoundaryConditionVars, _outOtherEqnsSetSPrime, _outOtherVarsSetSPrime, _shared, _outOtherVarsSetSPrime, _OMC_LIT360, 0 /* false */ ,&_shared);

  tmpMeta70 = omc_mk_box7(3, &BackendDAE_DataReconciliationData_DATA__RECON__desc, _simCodeJacobian, _outResidualVars, _outDiffVars, mmc_mk_some(_outBoundaryConditionVars), mmc_mk_some(_simCodeJacobianH), omc_mk_integer(_numRelatedBoundaryConditions));
  tmpMeta69 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta69), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta69))[20] = mmc_mk_some(tmpMeta70);
  _shared = tmpMeta69;

  _setSPrime_Eq = omc_List_unique(threadData, listAppend(_setSPrime_Eq, _failedboundaryConditionEquations));

  _setSPrime_Eq = omc_List_unique(threadData, listAppend(_setSPrime_Eq, _setS_Eq));

  _allDaeEqs = omc_List_unique(threadData, listAppend(_setSPrime_Eq, _residualEquations));

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _allDaeEqs), _OMC_LIT361);

  _paramVars = omc_BackendEquation_equationsVars(threadData, omc_BackendEquation_listEquation(threadData, _allDaeEqs), (OMC_BOX_FIELD(_shared, 2)));

  _setSVars = omc_BackendEquation_equationsVars(threadData, omc_BackendEquation_listEquation(threadData, _allDaeEqs), (OMC_BOX_FIELD(_currentSystem, 2)));

  _knownVars = omc_List_extractOnTrue(threadData, _setSVars, boxvar_BackendVariable_varHasUncertainValueRefine ,&_setSVars);

  omc_List_extractOnTrue(threadData, _setSVars, boxvar_BackendVariable_varHasUncertainValuePropagate ,&_setSVars);

  _setSVars = listAppend(omc_BackendVariable_varList(threadData, _outBoundaryConditionVars), _setSVars);

  omc_BackendDump_dumpVarList(threadData, listAppend(_setSVars, _residualVars), _OMC_LIT362);

  omc_BackendDump_dumpVarList(threadData, _paramVars, _OMC_LIT363);

  _currentSystem = omc_BackendDAEUtil_setEqSystEqs(threadData, _currentSystem, omc_BackendEquation_listEquation(threadData, _allDaeEqs));

  _currentSystem = omc_BackendDAEUtil_setEqSystVars(threadData, _currentSystem, omc_BackendVariable_listVar(threadData, listAppend(_setSVars, _residualVars)));

  tmpMeta71 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta71), MMC_UNTAGPTR(_currentSystem), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta71))[10] = omc_BackendEquation_emptyEqns(threadData);
  _currentSystem = tmpMeta71;

  _inputVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarDirection, _OMC_LIT297));

  _shared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _shared, omc_BackendVariable_mergeVariables(threadData, omc_BackendVariable_listVar(threadData, _paramVars), _inputVars, 1 /* true */));

  if(_debug)
  {
    omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT364);

    omc_BackendDump_dumpEquationArray(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _OMC_LIT365);

    omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_shared, 2)), _OMC_LIT366);
  }

  tmp72 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD((OMC_BOX_FIELD(_inDAE, 3)), 17)), 3)),_OMC_LIT299);
  if((!omc_System_regularFileExists(threadData, tmp72)))
  {
    omc_string_store(&(_str), _OMC_LIT298);

    omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, _str, omc_BackendVariable_varList(threadData, _outDiffVars)));

    omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, _str, omc_BackendVariable_varList(threadData, _outBoundaryConditionVars)));

    tmp73 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT299);
    omc_System_writeFile(threadData, tmp73, _str);
  }

  tmp74 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD((OMC_BOX_FIELD(_inDAE, 3)), 17)), 3)),_OMC_LIT367);
  if((!omc_System_regularFileExists(threadData, tmp74)))
  {
    omc_string_store(&(_str), omc_DataReconciliation_dumpCorrelationVarsToCsv(threadData, omc_BackendVariable_varList(threadData, _outDiffVars)));

    tmp75 = stringAppend(_str,_OMC_LIT14);
    omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, tmp75, omc_BackendVariable_varList(threadData, _outDiffVars)));

    tmp76 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT367);
    omc_System_writeFile(threadData, tmp76, _str);
  }

  omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, _OMC_LIT0, omc_BackendVariable_varList(threadData, _outBoundaryConditionVars)));

  tmp77 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT368);
  omc_System_writeFile(threadData, tmp77, _str);

  tmp78 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT300);
  omc_string_store(&(_modelicaFileName), tmp78);

  tmp79 = stringAppend(_OMC_LIT301,omc_System_stringReplace(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)), _OMC_LIT2, _OMC_LIT3));
  omc_string_store(&(_modelName), tmp79);

  omc_string_store(&(_modelicaOutput), _OMC_LIT369);

  tmp80 = stringAppend(_modelicaOutput,_OMC_LIT303);
  tmp81 = stringAppend(tmp80,_modelName);
  omc_string_store(&(_modelicaOutput), tmp81);

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outDiffVars), _OMC_LIT304));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, _paramVars, _OMC_LIT370));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpResidualVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outResidualVars), _OMC_LIT306));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, _setSVars, _OMC_LIT371));

  tmp82 = stringAppend(_modelicaOutput,_OMC_LIT308);
  omc_string_store(&(_modelicaOutput), tmp82);

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedEquations(threadData, _modelicaOutput, omc_BackendEquation_listEquation(threadData, _residualEquations), _OMC_LIT372));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedEquations(threadData, _modelicaOutput, omc_BackendEquation_listEquation(threadData, _setSPrime_Eq), _OMC_LIT373));

  tmp83 = stringAppend(_modelicaOutput,_OMC_LIT311);
  tmp84 = stringAppend(tmp83,_modelName);
  tmp85 = stringAppend(tmp84,_OMC_LIT193);
  omc_string_store(&(_modelicaOutput), tmp85);

  tmp86 = stringAppend(_modelicaFileName,_OMC_LIT22);
  omc_System_writeFile(threadData, tmp86, _modelicaOutput);

  tmpMeta87 = mmc_mk_cons(_currentSystem, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta88 = omc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta87, _shared);
  _outDAE = tmpMeta88;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outDAE;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_extractBoundaryCondition(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _currentSystem = NULL;
  modelica_metatype _outOtherEqns = NULL;
  modelica_metatype _outBoundaryConditionEquations = NULL;
  modelica_metatype _setS_Eq = NULL;
  modelica_metatype _failedboundaryConditionEquations = NULL;
  modelica_metatype _adjacencyMatrix = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _match1 = NULL;
  modelica_metatype _match2 = NULL;
  modelica_metatype _solvedEqsAndVarsInfo = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _varCount;
  modelica_integer _eqCount;
  modelica_metatype _ebltEqsLst = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _matchedEqsLst = NULL;
  modelica_metatype _approximatedEquations = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _tempSetS = NULL;
  modelica_metatype _setS = NULL;
  modelica_metatype _boundaryConditionEquations = NULL;
  modelica_metatype _bindingEquations = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _setSPrime = NULL;
  modelica_metatype _sBltAdjacencyMatrix = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _paramVars = NULL;
  modelica_metatype _setSVars = NULL;
  modelica_metatype _knownVars = NULL;
  modelica_metatype _failedboundaryConditionVars = NULL;
  modelica_metatype _extraVarsinSetSPrime = NULL;
  modelica_metatype _unMeasuredVariables = NULL;
  modelica_metatype _simCodeJacobian = NULL;
  modelica_metatype _shared = NULL;
  modelica_string _str = NULL;
  modelica_string _modelicaOutput = NULL;
  modelica_string _modelicaFileName = NULL;
  modelica_string _modelName = NULL;
  modelica_string _auxillaryConditionsFilename = NULL;
  modelica_string _auxillaryEquations = NULL;
  modelica_string _intermediateEquationsFilename = NULL;
  modelica_string _intermediateEquations = NULL;
  modelica_string _csvfileName = NULL;
  modelica_metatype _mappedEbltSetS = NULL;
  modelica_metatype _setBFailedBoundaryConditionEquations = NULL;
  modelica_metatype _allVarsList = NULL;
  modelica_metatype _knowns = NULL;
  modelica_metatype tmpMeta7;
  modelica_metatype _boundaryConditionVars = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype _exactEquationVars = NULL;
  modelica_metatype _boundaryConditionTaggedEquationSolvedVars = NULL;
  modelica_metatype _unMeasuredVariablesOfInterest = NULL;
  modelica_metatype tmpMeta9;
  modelica_metatype _inputVars = NULL;
  modelica_metatype _outDiffVars = NULL;
  modelica_metatype _outOtherVars = NULL;
  modelica_metatype _outBoundaryConditionVars = NULL;
  modelica_integer _procedureCount;
  modelica_metatype _measurementcsvData = NULL;
  modelica_boolean _debug;
  modelica_boolean _status;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_metatype tmpMeta17;
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
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
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
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_string tmp48;
  modelica_string tmp49;
  modelica_string tmp50;
  modelica_string tmp51;
  modelica_string tmp52;
  modelica_string tmp53;
  modelica_string tmp54;
  modelica_string tmp55;
  modelica_string tmp56;
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _currentSystem has no default value.
  // _outOtherEqns has no default value.
  // _outBoundaryConditionEquations has no default value.
  // _setS_Eq has no default value.
  // _failedboundaryConditionEquations has no default value.
  // _adjacencyMatrix has no default value.
  // _mapEqnIncRow has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _mapIncRowEqn = listArray(tmpMeta1);
  // _match1 has no default value.
  // _match2 has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _solvedEqsAndVarsInfo = tmpMeta2;
  // _varCount has no default value.
  // _eqCount has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _ebltEqsLst = tmpMeta3;
  // _matchedEqsLst has no default value.
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _approximatedEquations = tmpMeta4;
  // _tempSetS has no default value.
  // _setS has no default value.
  // _boundaryConditionEquations has no default value.
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _bindingEquations = tmpMeta5;
  // _setSPrime has no default value.
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _sBltAdjacencyMatrix = tmpMeta6;
  // _paramVars has no default value.
  // _setSVars has no default value.
  // _knownVars has no default value.
  // _failedboundaryConditionVars has no default value.
  // _extraVarsinSetSPrime has no default value.
  // _unMeasuredVariables has no default value.
  // _simCodeJacobian has no default value.
  // _shared has no default value.
  // _str has no default value.
  // _modelicaOutput has no default value.
  // _modelicaFileName has no default value.
  // _modelName has no default value.
  // _auxillaryConditionsFilename has no default value.
  // _auxillaryEquations has no default value.
  // _intermediateEquationsFilename has no default value.
  // _intermediateEquations has no default value.
  // _csvfileName has no default value.
  // _mappedEbltSetS has no default value.
  // _setBFailedBoundaryConditionEquations has no default value.
  // _allVarsList has no default value.
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _knowns = tmpMeta7;
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _boundaryConditionVars = tmpMeta8;
  // _exactEquationVars has no default value.
  // _boundaryConditionTaggedEquationSolvedVars has no default value.
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _unMeasuredVariablesOfInterest = tmpMeta9;
  // _inputVars has no default value.
  // _outDiffVars has no default value.
  // _outOtherVars has no default value.
  // _outBoundaryConditionVars has no default value.
  // _procedureCount has no default value.
  // _measurementcsvData has no default value.
  _debug = 0 /* false */;
  _status = 0 /* false */;
  if(omc_Flags_isSet(threadData, _OMC_LIT214))
  {
    _debug = 1 /* true */;
  }

  /* Pattern-matching assignment */
  tmpMeta10 = (OMC_BOX_FIELD(_inDAE, 2));
  if (listEmpty(tmpMeta10)) OMC_THROW_INTERNAL();
  tmpMeta11 = MMC_CAR(tmpMeta10);
  tmpMeta12 = MMC_CDR(tmpMeta10);
  if (!listEmpty(tmpMeta12)) OMC_THROW_INTERNAL();
  _currentSystem = tmpMeta11;

  _shared = (OMC_BOX_FIELD(_inDAE, 3));

  tmp13 = stringAppend(_OMC_LIT215,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
  tmp14 = stringAppend(tmp13,_OMC_LIT14);
  tmp15 = stringAppend(tmp14,_OMC_LIT61);
  tmp16 = stringAppend(tmp15,_OMC_LIT59);
  fputs(omc_string_data(tmp16),stdout);

  _currentSystem = omc_DataReconciliation_setBoundaryConditionEquationsAndVars(threadData, _currentSystem, (OMC_BOX_FIELD(_inDAE, 3)), _debug ,&_shared);

  _procedureCount = ((modelica_integer) 1);

  tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
  _setBFailedBoundaryConditionEquations = tmpMeta17;

  while(1)
  {
    if(!(!_status)) break;
    omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT216);

    omc_BackendDump_dumpEquationArray(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _OMC_LIT217);

    _allVarsList = omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, (OMC_BOX_FIELD(_currentSystem, 2))));

    _varCount = omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_currentSystem, 2)), 6)));

    _eqCount = omc_BackendEquation_equationArraySize(threadData, (OMC_BOX_FIELD(_currentSystem, 3)));

    _adjacencyMatrix = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT221, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

    _sBltAdjacencyMatrix = omc_DataReconciliation_getSBLTAdjacencyMatrix(threadData, _adjacencyMatrix);

    _match1 = omc_Matching_RegularMatching(threadData, _adjacencyMatrix, _varCount, _eqCount ,&_match2 ,NULL ,NULL ,NULL);

    omc_BackendDump_dumpMatching(threadData, _match1);

    _solvedEqsAndVarsInfo = omc_DataReconciliation_getSolvedEquationAndVarsInfo(threadData, _match1 ,&_matchedEqsLst);

    _bindingEquations = omc_DataReconciliation_getBindingEquation(threadData, _currentSystem, _mapIncRowEqn);

    _bindingEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _bindingEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _approximatedEquations = omc_DataReconciliation_getEquationsTaggedApproximatedOrBoundaryCondition(threadData, omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_currentSystem, 3))), ((modelica_integer) 1) ,&_boundaryConditionEquations);

    if(_debug)
    {
      omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT264);

      omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT265);
    }

    _approximatedEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _boundaryConditionEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _boundaryConditionTaggedEquationSolvedVars = omc_DataReconciliation_getBoundaryConditionVariables(threadData, _boundaryConditionEquations, _solvedEqsAndVarsInfo);

    if(_debug)
    {
      fputs(omc_string_data(_OMC_LIT266),stdout);

      tmp18 = stringAppend(_OMC_LIT267,omc_DataReconciliation_dumplistInteger(threadData, _approximatedEquations));
      fputs(omc_string_data(tmp18),stdout);

      tmp19 = stringAppend(_OMC_LIT268,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionEquations));
      fputs(omc_string_data(tmp19),stdout);

      fputs(omc_string_data(_OMC_LIT14),stdout);
    }

    _knowns = omc_DataReconciliation_getVariablesBlockCategories(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _allVarsList ,&_boundaryConditionVars ,&_exactEquationVars ,&_unMeasuredVariablesOfInterest);

    _boundaryConditionVars = listAppend(_boundaryConditionVars, _boundaryConditionTaggedEquationSolvedVars);

    if(_debug)
    {
      fputs(omc_string_data(_OMC_LIT222),stdout);

      tmp20 = stringAppend(_OMC_LIT223,omc_DataReconciliation_dumplistInteger(threadData, _knowns));
      fputs(omc_string_data(tmp20),stdout);

      tmp21 = stringAppend(_OMC_LIT224,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionVars));
      fputs(omc_string_data(tmp21),stdout);

      tmp22 = stringAppend(_OMC_LIT225,omc_DataReconciliation_dumplistInteger(threadData, _exactEquationVars));
      fputs(omc_string_data(tmp22),stdout);

      tmp23 = stringAppend(_OMC_LIT226,mmc_anyString(_adjacencyMatrix));
      tmp24 = stringAppend(tmp23,_OMC_LIT14);
      fputs(omc_string_data(tmp24),stdout);
    }

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _matchedEqsLst, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT330);

    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, listReverse(_knowns), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), _OMC_LIT331);

    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, listReverse(_boundaryConditionVars), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), _OMC_LIT333);

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _bindingEquations, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT334);

    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT335);

    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT336);

    _ebltEqsLst = omc_DataReconciliation_getEBLTEquations(threadData, _knowns, _solvedEqsAndVarsInfo, _mapIncRowEqn, _currentSystem);

    _ebltEqsLst = omc_List_setDifferenceOnTrue(threadData, _ebltEqsLst, _bindingEquations, boxvar_intEq);

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _ebltEqsLst, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT337);

    _currentSystem = omc_DataReconciliation_traverseEBLTAndExtractSetCAndSetS(threadData, _currentSystem, _ebltEqsLst, _sBltAdjacencyMatrix, _knowns, _boundaryConditionVars, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, _solvedEqsAndVarsInfo, _debug, _setBFailedBoundaryConditionEquations, _bindingEquations ,&_tempSetS ,&_mappedEbltSetS ,&_status ,&_setBFailedBoundaryConditionEquations);

    if((!_status))
    {
      tmp25 = stringAppend(_OMC_LIT338,intString(_procedureCount));
      tmp26 = stringAppend(tmp25,_OMC_LIT339);
      tmp27 = stringAppend(tmp26,_OMC_LIT61);
      tmp28 = stringAppend(tmp27,_OMC_LIT14);
      fputs(omc_string_data(tmp28),stdout);
    }

    _procedureCount = ((modelica_integer) 1) + _procedureCount;
  }

  tmp29 = stringAppend(_OMC_LIT340,intString(((modelica_integer) -1) + _procedureCount));
  tmp30 = stringAppend(tmp29,_OMC_LIT14);
  tmp31 = stringAppend(tmp30,_OMC_LIT61);
  tmp32 = stringAppend(tmp31,_OMC_LIT14);
  fputs(omc_string_data(tmp32),stdout);

  tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
  omc_DataReconciliation_dumpFailedBoundaryConditionEquationAndVars(threadData, _setBFailedBoundaryConditionEquations, (OMC_BOX_FIELD(_currentSystem, 2)), tmpMeta33, 0 /* false */);

  omc_DataReconciliation_ExtractSetSPrime(threadData, _currentSystem, _setBFailedBoundaryConditionEquations, _sBltAdjacencyMatrix, _knowns, _boundaryConditionVars, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, _solvedEqsAndVarsInfo, _bindingEquations, _debug ,&_setSPrime ,&_failedboundaryConditionEquations ,&_failedboundaryConditionVars ,&_status);

  _setSPrime = omc_List_setDifferenceOnTrue(threadData, _setSPrime, _approximatedEquations, boxvar_intEq);

  if(_debug)
  {
    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _setSPrime, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT273);
  }

  _setS = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _setSPrime, _mapIncRowEqn));

  tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
  _setS_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setS, (OMC_BOX_FIELD(_currentSystem, 3)), tmpMeta34);

  fputs(omc_string_data(_OMC_LIT374),stdout);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _failedboundaryConditionEquations), _OMC_LIT347);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq), _OMC_LIT375);

  _paramVars = omc_BackendEquation_equationsVars(threadData, omc_BackendEquation_listEquation(threadData, listAppend(_failedboundaryConditionEquations, _setS_Eq)), (OMC_BOX_FIELD(_shared, 2)));

  _setSVars = omc_BackendEquation_equationsVars(threadData, omc_BackendEquation_listEquation(threadData, listAppend(_failedboundaryConditionEquations, _setS_Eq)), (OMC_BOX_FIELD(_currentSystem, 2)));

  _knownVars = omc_List_extractOnTrue(threadData, _setSVars, boxvar_BackendVariable_varHasUncertainValueRefine ,&_setSVars);

  omc_List_extract1OnTrue(threadData, _setSVars, boxvar_DataReconciliation_isBoundaryConditionVars, _failedboundaryConditionVars ,&_setSVars);

  _extraVarsinSetSPrime = omc_List_extract1OnTrue(threadData, _setSVars, boxvar_DataReconciliation_isBoundaryConditionVars, omc_List_map1r(threadData, listReverse(_boundaryConditionVars), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), NULL);

  omc_BackendDump_dumpVarList(threadData, _failedboundaryConditionVars, _OMC_LIT376);

  omc_BackendDump_dumpVarList(threadData, _setSVars, _OMC_LIT350);

  omc_BackendDump_dumpVarList(threadData, _knownVars, _OMC_LIT351);

  omc_BackendDump_dumpVarList(threadData, _paramVars, _OMC_LIT352);

  _unMeasuredVariables = omc_List_map1r(threadData, listReverse(_unMeasuredVariablesOfInterest), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2)));

  _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _knowns, boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))));

  _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarUnreplaceable, omc_mk_boolean(1 /* true */)));

  _csvfileName = omc_DataReconciliation_readMeasurementsFromCSV(threadData, _shared ,&_measurementcsvData);

  _outDiffVars = omc_DataReconciliation_setStartValuesToMeasurements(threadData, _outDiffVars, _measurementcsvData, _csvfileName);

  _outBoundaryConditionVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, listReverse(_failedboundaryConditionVars), boxvar_BackendVariable_setVarUnreplaceable, omc_mk_boolean(1 /* true */)));

  _outBoundaryConditionEquations = omc_BackendEquation_listEquation(threadData, _failedboundaryConditionEquations);

  _outOtherEqns = omc_BackendEquation_listEquation(threadData, _setS_Eq);

  _outOtherVars = omc_BackendVariable_listVar(threadData, _setSVars);

  tmp35 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT355);
  omc_string_store(&(_auxillaryConditionsFilename), tmp35);

  tmp36 = stringAppend(_OMC_LIT356,intString(omc_BackendEquation_getNumberOfEquations(threadData, _outBoundaryConditionEquations)));
  tmp37 = stringAppend(tmp36,_OMC_LIT134);
  tmp38 = stringAppend(tmp37,intString(omc_BackendEquation_equationArraySize(threadData, _outBoundaryConditionEquations)));
  tmp39 = stringAppend(tmp38,_OMC_LIT159);
  omc_string_store(&(_auxillaryEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, _outBoundaryConditionEquations, tmp39));

  omc_System_writeFile(threadData, _auxillaryConditionsFilename, _auxillaryEquations);

  tmp40 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT357);
  omc_string_store(&(_intermediateEquationsFilename), tmp40);

  tmp41 = stringAppend(_OMC_LIT377,intString(omc_BackendEquation_getNumberOfEquations(threadData, _outOtherEqns)));
  tmp42 = stringAppend(tmp41,_OMC_LIT134);
  tmp43 = stringAppend(tmp42,intString(omc_BackendEquation_equationArraySize(threadData, _outOtherEqns)));
  tmp44 = stringAppend(tmp43,_OMC_LIT159);
  omc_string_store(&(_intermediateEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, _outOtherEqns, tmp44));

  omc_System_writeFile(threadData, _intermediateEquationsFilename, _intermediateEquations);

  omc_DataReconciliation_VerifySetSPrime(threadData, _outBoundaryConditionVars, _outOtherVars, _outDiffVars, _extraVarsinSetSPrime, _outBoundaryConditionEquations, _outOtherEqns, _shared, listLength(_ebltEqsLst), listLength(_setBFailedBoundaryConditionEquations), 0 /* false */);

  if(_debug)
  {
    omc_BackendDump_dumpVariables(threadData, _outDiffVars, _OMC_LIT291);

    omc_BackendDump_dumpEquationArray(threadData, _outBoundaryConditionEquations, _OMC_LIT294);

    omc_BackendDump_dumpVariables(threadData, _outBoundaryConditionVars, _OMC_LIT292);

    omc_BackendDump_dumpEquationArray(threadData, _outOtherEqns, _OMC_LIT359);

    omc_BackendDump_dumpVariables(threadData, _outOtherVars, _OMC_LIT293);
  }

  _simCodeJacobian = omc_SymbolicJacobian_getSymbolicJacobian(threadData, _outDiffVars, _outBoundaryConditionEquations, _outBoundaryConditionVars, _outOtherEqns, _outOtherVars, _shared, _outOtherVars, _OMC_LIT296, 0 /* false */ ,&_shared);

  tmpMeta46 = omc_mk_box7(3, &BackendDAE_DataReconciliationData_DATA__RECON__desc, _simCodeJacobian, _outBoundaryConditionVars, _outDiffVars, mmc_mk_some(omc_BackendVariable_listVar(threadData, _unMeasuredVariables)), mmc_mk_none(), omc_mk_integer(listLength(_setBFailedBoundaryConditionEquations)));
  tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[20] = mmc_mk_some(tmpMeta46);
  _shared = tmpMeta45;

  _currentSystem = omc_BackendDAEUtil_setEqSystEqs(threadData, _currentSystem, omc_BackendEquation_merge(threadData, _outBoundaryConditionEquations, _outOtherEqns));

  _currentSystem = omc_BackendDAEUtil_setEqSystVars(threadData, _currentSystem, omc_BackendVariable_mergeVariables(threadData, _outBoundaryConditionVars, _outOtherVars, 1 /* true */));

  tmpMeta47 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta47), MMC_UNTAGPTR(_currentSystem), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta47))[10] = omc_BackendEquation_emptyEqns(threadData);
  _currentSystem = tmpMeta47;

  _inputVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarDirection, _OMC_LIT297));

  _shared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _shared, omc_BackendVariable_mergeVariables(threadData, omc_BackendVariable_listVar(threadData, _paramVars), _inputVars, 1 /* true */));

  omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, _OMC_LIT0, omc_BackendVariable_varList(threadData, _outBoundaryConditionVars)));

  tmp48 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT368);
  omc_System_writeFile(threadData, tmp48, _str);

  tmp49 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT300);
  omc_string_store(&(_modelicaFileName), tmp49);

  tmp50 = stringAppend(_OMC_LIT301,omc_System_stringReplace(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)), _OMC_LIT2, _OMC_LIT3));
  omc_string_store(&(_modelName), tmp50);

  omc_string_store(&(_modelicaOutput), _OMC_LIT378);

  tmp51 = stringAppend(_modelicaOutput,_OMC_LIT303);
  tmp52 = stringAppend(tmp51,_modelName);
  omc_string_store(&(_modelicaOutput), tmp52);

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outDiffVars), _OMC_LIT304));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, _paramVars, _OMC_LIT305));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, _failedboundaryConditionVars, _OMC_LIT379));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outOtherVars), _OMC_LIT307));

  tmp53 = stringAppend(_modelicaOutput,_OMC_LIT308);
  omc_string_store(&(_modelicaOutput), tmp53);

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedEquations(threadData, _modelicaOutput, omc_BackendEquation_listEquation(threadData, _failedboundaryConditionEquations), _OMC_LIT336));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedEquations(threadData, _modelicaOutput, _outOtherEqns, _OMC_LIT373));

  tmp54 = stringAppend(_modelicaOutput,_OMC_LIT311);
  tmp55 = stringAppend(tmp54,_modelName);
  tmp56 = stringAppend(tmp55,_OMC_LIT193);
  omc_string_store(&(_modelicaOutput), tmp56);

  tmp57 = stringAppend(_modelicaFileName,_OMC_LIT22);
  omc_System_writeFile(threadData, tmp57, _modelicaOutput);

  tmpMeta58 = mmc_mk_cons(_currentSystem, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta59 = omc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta58, _shared);
  _outDAE = tmpMeta59;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outDAE;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC void omc_DataReconciliation_dumpRelatedBoundaryConditionsEquations(threadData_t *threadData, modelica_metatype _setBFailedBoundaryConditionEquations, modelica_string _fileNamePrefix)
{
  modelica_metatype _eq = NULL;
  modelica_string _str = NULL;
  modelica_integer _count;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  modelica_string tmp15;
  modelica_string tmp16;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  // _str has no default value.
  // _count has no default value.
  _count = ((modelica_integer) 1);

  omc_string_store(&(_str), _OMC_LIT0);

  tmp1 = stringAppend(_OMC_LIT380,intString(listLength(_setBFailedBoundaryConditionEquations)));
  tmp2 = stringAppend(tmp1,_OMC_LIT381);
  tmp3 = stringAppend(tmp2,_OMC_LIT188);
  omc_string_store(&(_str), tmp3);

  if(listEmpty(_setBFailedBoundaryConditionEquations))
  {
    omc_string_store(&(_str), _OMC_LIT382);
  }
  else
  {
    {
      modelica_metatype _i;
      for (tmpMeta4 = _setBFailedBoundaryConditionEquations; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
      {
        _i = MMC_CAR(tmpMeta4);
        /* Pattern-matching assignment */
        tmpMeta5 = _i;
        tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 2);
        _eq = tmpMeta6;

        tmp7 = stringAppend(_str,_OMC_LIT14);
        tmp8 = stringAppend(tmp7,_OMC_LIT46);
        tmp9 = stringAppend(tmp8,_OMC_LIT177);
        tmp10 = stringAppend(tmp9,intString(omc_BackendEquation_equationSize(threadData, _eq)));
        tmp11 = stringAppend(tmp10,_OMC_LIT180);
        tmp12 = stringAppend(tmp11,omc_BackendDump_equationString(threadData, _eq));
        tmp13 = stringAppend(tmp12,_OMC_LIT47);
        omc_string_store(&(_str), tmp13);
      }
    }

    tmp15 = stringAppend(_str,_OMC_LIT189);
    omc_string_store(&(_str), tmp15);
  }

  tmp16 = stringAppend(_fileNamePrefix,_OMC_LIT383);
  omc_System_writeFile(threadData, tmp16, _str);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_checkVarExistenceInMeasurementData(threadData_t *threadData, modelica_metatype _var, modelica_metatype _measurementData, modelica_boolean *out_exists)
{
  modelica_string _valueStr = NULL;
  modelica_boolean _exists;
  modelica_string _varName = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _valueStr = _OMC_LIT0;
  _exists = 0 /* false */;
  // _varName has no default value.
  {
    modelica_metatype _measurement;
    for (tmpMeta1 = _measurementData; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _measurement = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _measurement;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
      _varName = tmpMeta3;
      _valueStr = tmpMeta4;

      if((stringEqual(_varName, omc_ComponentReference_crefStr(threadData, (OMC_BOX_FIELD(_var, 2))))))
      {
        _exists = 1 /* true */;

        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_exists) { *out_exists = _exists; }
  omc_ret_ = _valueStr;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DataReconciliation_checkVarExistenceInMeasurementData(threadData_t *threadData, modelica_metatype _var, modelica_metatype _measurementData, modelica_metatype *out_exists)
{
  modelica_boolean _exists;
  modelica_string _valueStr = NULL;
  _valueStr = omc_DataReconciliation_checkVarExistenceInMeasurementData(threadData, _var, _measurementData, &_exists);
  /* skip box _valueStr; String */
  if (out_exists) { *out_exists = omc_mk_icon(_exists); }
  return _valueStr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DataReconciliation_setStartValuesToMeasurements(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _measurementData, modelica_string _csvFileName)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype _varList = NULL;
  modelica_string _varName = NULL;
  modelica_string _valueStr = NULL;
  modelica_real _value;
  modelica_boolean _foundMeasurement;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _varList has no default value.
  // _varName has no default value.
  // _valueStr has no default value.
  // _value has no default value.
  // _foundMeasurement has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _varList = tmpMeta1;

  {
    modelica_metatype _var;
    for (tmpMeta2 = omc_BackendVariable_varList(threadData, _inVariables); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      _valueStr = omc_DataReconciliation_checkVarExistenceInMeasurementData(threadData, _var, _measurementData ,&_foundMeasurement);

      if((!_foundMeasurement))
      {
        tmp4 = stringAppend(_OMC_LIT384,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
        tmp5 = stringAppend(tmp4,_OMC_LIT385);
        tmp6 = stringAppend(tmp5,_csvFileName);
        tmpMeta3 = mmc_mk_cons(tmp6, MMC_REFSTRUCTLIT(mmc_nil));
        omc_Error_addMessage(threadData, _OMC_LIT67, tmpMeta3);

        OMC_THROW_INTERNAL();
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
              /* Pattern matching succeeded */
              _value = stringReal(_valueStr);
              goto tmp8_done;
            }
            case 1: {
              modelica_metatype tmpMeta11;
              modelica_string tmp12;
              modelica_string tmp13;
              modelica_string tmp14;
              modelica_string tmp15;
              modelica_string tmp16;
              modelica_string tmp17;
              /* Pattern matching succeeded */
              tmp12 = stringAppend(_OMC_LIT386,_valueStr);
              tmp13 = stringAppend(tmp12,_OMC_LIT387);
              tmp14 = stringAppend(tmp13,omc_ComponentReferenceBasics_printComponentRefStr(threadData, (OMC_BOX_FIELD(_var, 2))));
              tmp15 = stringAppend(tmp14,_OMC_LIT388);
              tmp16 = stringAppend(tmp15,_csvFileName);
              tmp17 = stringAppend(tmp16,_OMC_LIT389);
              tmpMeta11 = mmc_mk_cons(tmp17, MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addMessage(threadData, _OMC_LIT67, tmpMeta11);

              goto goto_7;
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

      tmpMeta18 = omc_mk_box2(4, &DAE_Exp_RCONST__desc, omc_mk_real(_value));
      _var = omc_BackendVariable_setVarStartValue(threadData, _var, tmpMeta18);

      tmpMeta19 = mmc_mk_cons(_var, _varList);
      _varList = tmpMeta19;
    }
  }

  _outVariables = omc_BackendVariable_listVar(threadData, listReverse(_varList));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outVariables;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DataReconciliation_readMeasurementsFromCSV(threadData_t *threadData, modelica_metatype _shared, modelica_metatype *out_measurementData)
{
  modelica_string _csvFileName = NULL;
  modelica_metatype _measurementData = NULL;
  modelica_metatype tmpMeta1;
  modelica_string _content = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _lines = NULL;
  modelica_metatype _p = NULL;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _csvFileName has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _measurementData = tmpMeta1;
  // _content has no default value.
  // _tokens has no default value.
  // _lines has no default value.
  // _p has no default value.
  if(isNone((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 4))))
  {
    omc_Error_addMessage(threadData, _OMC_LIT67, _OMC_LIT391);

    OMC_THROW_INTERNAL();
  }

  omc_string_store(&(_csvFileName), omc_DataReconciliation_extractSxPath(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 4)))));

  if((stringLength(_csvFileName) == ((modelica_integer) 0)))
  {
    omc_Error_addMessage(threadData, _OMC_LIT67, _OMC_LIT393);

    OMC_THROW_INTERNAL();
  }

  if((omc_StringUtil_startsWith(threadData, _csvFileName, _OMC_LIT394) || omc_StringUtil_startsWith(threadData, _csvFileName, _OMC_LIT395)))
  {
    _p = omc_SymbolTable_getAbsyn(threadData);

    omc_string_store(&(_csvFileName), omc_ProgramUtil_getFullPathFromUri(threadData, _p, _csvFileName, 1 /* true */));
  }

  omc_string_store(&(_content), omc_System_readFile(threadData, _csvFileName));

  if((stringLength(_content) == ((modelica_integer) 0)))
  {
    tmp3 = stringAppend(_OMC_LIT396,_csvFileName);
    tmp4 = stringAppend(tmp3,_OMC_LIT397);
    tmpMeta2 = mmc_mk_cons(tmp4, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT67, tmpMeta2);

    OMC_THROW_INTERNAL();
  }

  _lines = omc_System_strtok(threadData, _content, _OMC_LIT14);

  {
    modelica_metatype _line;
    for (tmpMeta5 = _lines; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _line = MMC_CAR(tmpMeta5);
      omc_string_store(&(_line), omc_System_stringReplace(threadData, _line, _OMC_LIT193, _OMC_LIT16));

      omc_string_store(&(_line), omc_System_trim(threadData, _line, _OMC_LIT398));

      _tokens = omc_Util_stringSplitAtChar(threadData, _line, _OMC_LIT16);

      if(((!listEmpty(_tokens)) && (listLength(_tokens) >= ((modelica_integer) 2))))
      {
        tmpMeta7 = omc_mk_box2(0, listGet(_tokens, ((modelica_integer) 1)), listGet(_tokens, ((modelica_integer) 2)));
        tmpMeta6 = mmc_mk_cons(tmpMeta7, _measurementData);
        _measurementData = tmpMeta6;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_measurementData) { *out_measurementData = _measurementData; }
  omc_ret_ = _csvFileName;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_DataReconciliation_extractSxPath(threadData_t *threadData, modelica_string _simflags)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_string _csvFilePath = NULL;
  modelica_integer _nummatches;
  modelica_string _filePath = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _csvFilePath has no default value.
  // _nummatches has no default value.
  _filePath = _OMC_LIT0;
  if((omc_System_stringFind(threadData, _simflags, _OMC_LIT401) < ((modelica_integer) 0)))
  {
    omc_Error_addMessage(threadData, _OMC_LIT67, _OMC_LIT400);

    OMC_THROW_INTERNAL();
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
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmp10 = omc_System_regex(threadData, _simflags, _OMC_LIT402, ((modelica_integer) 2), 1 /* true */, 0 /* false */, &tmpMeta5);
          _nummatches = tmp10;
          if (listEmpty(tmpMeta5)) goto goto_1;
          tmpMeta6 = MMC_CAR(tmpMeta5);
          tmpMeta7 = MMC_CDR(tmpMeta5);
          if (listEmpty(tmpMeta7)) goto goto_1;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (!listEmpty(tmpMeta9)) goto goto_1;
          _filePath = tmpMeta8;

          if((_nummatches == ((modelica_integer) 2)))
          {
            omc_string_store(&(_csvFilePath), omc_System_stringReplace(threadData, _filePath, _OMC_LIT194, _OMC_LIT0));

            omc_string_store(&(_csvFilePath), omc_System_stringReplace(threadData, _csvFilePath, _OMC_LIT403, _OMC_LIT0));

            goto _return;
          }
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
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  omc_ret_ = _csvFilePath;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_DataReconciliation_newExtractionAlgorithm(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _currentSystem = NULL;
  modelica_metatype _outOtherEqns = NULL;
  modelica_metatype _outResidualEqns = NULL;
  modelica_metatype _setC_Eq = NULL;
  modelica_metatype _setS_Eq = NULL;
  modelica_metatype _residualEquations = NULL;
  modelica_metatype _complexEquationList = NULL;
  modelica_metatype _swappedEquationList = NULL;
  modelica_metatype _adjacencyMatrix = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _match1 = NULL;
  modelica_metatype _match2 = NULL;
  modelica_metatype _solvedEqsAndVarsInfo = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _varCount;
  modelica_integer _eqCount;
  modelica_metatype _ebltEqsLst = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _matchedEqsLst = NULL;
  modelica_metatype _approximatedEquations = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _setC = NULL;
  modelica_metatype _tempSetS = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _setS = NULL;
  modelica_metatype _boundaryConditionEquations = NULL;
  modelica_metatype _bindingEquations = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _sBltAdjacencyMatrix = NULL;
  modelica_metatype tmpMeta7;
  modelica_metatype _paramVars = NULL;
  modelica_metatype _residualVars = NULL;
  modelica_metatype _unMeasuredVariables = NULL;
  modelica_metatype _simCodeJacobian = NULL;
  modelica_metatype _shared = NULL;
  modelica_string _str = NULL;
  modelica_string _modelicaOutput = NULL;
  modelica_string _modelicaFileName = NULL;
  modelica_string _modelName = NULL;
  modelica_string _auxillaryConditionsFilename = NULL;
  modelica_string _auxillaryEquations = NULL;
  modelica_string _intermediateEquationsFilename = NULL;
  modelica_string _intermediateEquations = NULL;
  modelica_string _csvfileName = NULL;
  modelica_metatype _mappedEbltSetS = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype _setBFailedBoundaryConditionEquations = NULL;
  modelica_metatype _allVarsList = NULL;
  modelica_metatype _knowns = NULL;
  modelica_metatype tmpMeta9;
  modelica_metatype _boundaryConditionVars = NULL;
  modelica_metatype tmpMeta10;
  modelica_metatype _exactEquationVars = NULL;
  modelica_metatype tmpMeta11;
  modelica_metatype _extractedVarsfromSetS = NULL;
  modelica_metatype _boundaryConditionTaggedEquationSolvedVars = NULL;
  modelica_metatype _unMeasuredVariablesOfInterest = NULL;
  modelica_metatype tmpMeta12;
  modelica_metatype _inputVars = NULL;
  modelica_metatype _outDiffVars = NULL;
  modelica_metatype _outOtherVars = NULL;
  modelica_metatype _outResidualVars = NULL;
  modelica_integer _procedureCount;
  modelica_metatype _measurementcsvData = NULL;
  modelica_boolean _debug;
  modelica_boolean _status;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_string tmp16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_string tmp19;
  modelica_metatype tmpMeta20;
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
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_metatype tmpMeta38;
  modelica_string tmp39;
  modelica_string tmp40;
  modelica_string tmp41;
  modelica_string tmp42;
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_string tmp48;
  modelica_string tmp49;
  modelica_string tmp50;
  modelica_string tmp51;
  modelica_string tmp52;
  modelica_string tmp53;
  modelica_string tmp54;
  modelica_string tmp55;
  modelica_string tmp56;
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  modelica_metatype tmpMeta60;
  modelica_string tmp61;
  modelica_string tmp62;
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
  modelica_string tmp73;
  modelica_string tmp74;
  modelica_metatype tmpMeta75;
  modelica_metatype tmpMeta76;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _currentSystem has no default value.
  // _outOtherEqns has no default value.
  // _outResidualEqns has no default value.
  // _setC_Eq has no default value.
  // _setS_Eq has no default value.
  // _residualEquations has no default value.
  // _complexEquationList has no default value.
  // _swappedEquationList has no default value.
  // _adjacencyMatrix has no default value.
  // _mapEqnIncRow has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _mapIncRowEqn = listArray(tmpMeta1);
  // _match1 has no default value.
  // _match2 has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _solvedEqsAndVarsInfo = tmpMeta2;
  // _varCount has no default value.
  // _eqCount has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _ebltEqsLst = tmpMeta3;
  // _matchedEqsLst has no default value.
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _approximatedEquations = tmpMeta4;
  // _setC has no default value.
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _tempSetS = tmpMeta5;
  // _setS has no default value.
  // _boundaryConditionEquations has no default value.
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _bindingEquations = tmpMeta6;
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _sBltAdjacencyMatrix = tmpMeta7;
  // _paramVars has no default value.
  // _residualVars has no default value.
  // _unMeasuredVariables has no default value.
  // _simCodeJacobian has no default value.
  // _shared has no default value.
  // _str has no default value.
  // _modelicaOutput has no default value.
  // _modelicaFileName has no default value.
  // _modelName has no default value.
  // _auxillaryConditionsFilename has no default value.
  // _auxillaryEquations has no default value.
  // _intermediateEquationsFilename has no default value.
  // _intermediateEquations has no default value.
  // _csvfileName has no default value.
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _mappedEbltSetS = tmpMeta8;
  // _setBFailedBoundaryConditionEquations has no default value.
  // _allVarsList has no default value.
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _knowns = tmpMeta9;
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _boundaryConditionVars = tmpMeta10;
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _exactEquationVars = tmpMeta11;
  // _extractedVarsfromSetS has no default value.
  // _boundaryConditionTaggedEquationSolvedVars has no default value.
  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  _unMeasuredVariablesOfInterest = tmpMeta12;
  // _inputVars has no default value.
  // _outDiffVars has no default value.
  // _outOtherVars has no default value.
  // _outResidualVars has no default value.
  // _procedureCount has no default value.
  // _measurementcsvData has no default value.
  _debug = 0 /* false */;
  _status = 0 /* false */;
  if(omc_Flags_isSet(threadData, _OMC_LIT214))
  {
    _debug = 1 /* true */;
  }

  /* Pattern-matching assignment */
  tmpMeta13 = (OMC_BOX_FIELD(_inDAE, 2));
  if (listEmpty(tmpMeta13)) OMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (!listEmpty(tmpMeta15)) OMC_THROW_INTERNAL();
  _currentSystem = tmpMeta14;

  _shared = (OMC_BOX_FIELD(_inDAE, 3));

  tmp16 = stringAppend(_OMC_LIT215,(OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));
  tmp17 = stringAppend(tmp16,_OMC_LIT14);
  tmp18 = stringAppend(tmp17,_OMC_LIT61);
  tmp19 = stringAppend(tmp18,_OMC_LIT59);
  fputs(omc_string_data(tmp19),stdout);

  _currentSystem = omc_DataReconciliation_setBoundaryConditionEquationsAndVars(threadData, _currentSystem, (OMC_BOX_FIELD(_inDAE, 3)), _debug ,&_shared);

  _procedureCount = ((modelica_integer) 1);

  tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
  _setBFailedBoundaryConditionEquations = tmpMeta20;

  while(1)
  {
    if(!(!_status)) break;
    omc_BackendDump_dumpVariables(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT216);

    omc_BackendDump_dumpEquationArray(threadData, (OMC_BOX_FIELD(_currentSystem, 3)), _OMC_LIT217);

    _allVarsList = omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, (OMC_BOX_FIELD(_currentSystem, 2))));

    _varCount = omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_currentSystem, 2)), 6)));

    _eqCount = omc_BackendEquation_equationArraySize(threadData, (OMC_BOX_FIELD(_currentSystem, 3)));

    _adjacencyMatrix = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT221, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

    _sBltAdjacencyMatrix = omc_DataReconciliation_getSBLTAdjacencyMatrix(threadData, _adjacencyMatrix);

    _match1 = omc_Matching_RegularMatching(threadData, _adjacencyMatrix, _varCount, _eqCount ,&_match2 ,NULL ,NULL ,NULL);

    omc_BackendDump_dumpMatching(threadData, _match1);

    _solvedEqsAndVarsInfo = omc_DataReconciliation_getSolvedEquationAndVarsInfo(threadData, _match1 ,&_matchedEqsLst);

    _bindingEquations = omc_DataReconciliation_getBindingEquation(threadData, _currentSystem, _mapIncRowEqn);

    _bindingEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _bindingEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _approximatedEquations = omc_DataReconciliation_getEquationsTaggedApproximatedOrBoundaryCondition(threadData, omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_currentSystem, 3))), ((modelica_integer) 1) ,&_boundaryConditionEquations);

    if(_debug)
    {
      omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT264);

      omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT265);
    }

    _approximatedEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _boundaryConditionEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_listGet, arrayList(_mapEqnIncRow)));

    _boundaryConditionTaggedEquationSolvedVars = omc_DataReconciliation_getBoundaryConditionVariables(threadData, _boundaryConditionEquations, _solvedEqsAndVarsInfo);

    if(_debug)
    {
      fputs(omc_string_data(_OMC_LIT266),stdout);

      tmp21 = stringAppend(_OMC_LIT267,omc_DataReconciliation_dumplistInteger(threadData, _approximatedEquations));
      fputs(omc_string_data(tmp21),stdout);

      tmp22 = stringAppend(_OMC_LIT268,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionEquations));
      fputs(omc_string_data(tmp22),stdout);

      fputs(omc_string_data(_OMC_LIT14),stdout);
    }

    _knowns = omc_DataReconciliation_getVariablesBlockCategories(threadData, (OMC_BOX_FIELD(_currentSystem, 2)), _allVarsList ,&_boundaryConditionVars ,&_exactEquationVars ,&_unMeasuredVariablesOfInterest);

    _boundaryConditionVars = listAppend(_boundaryConditionVars, _boundaryConditionTaggedEquationSolvedVars);

    if(_debug)
    {
      fputs(omc_string_data(_OMC_LIT222),stdout);

      tmp23 = stringAppend(_OMC_LIT223,omc_DataReconciliation_dumplistInteger(threadData, _knowns));
      fputs(omc_string_data(tmp23),stdout);

      tmp24 = stringAppend(_OMC_LIT224,omc_DataReconciliation_dumplistInteger(threadData, _boundaryConditionVars));
      fputs(omc_string_data(tmp24),stdout);

      tmp25 = stringAppend(_OMC_LIT225,omc_DataReconciliation_dumplistInteger(threadData, _exactEquationVars));
      fputs(omc_string_data(tmp25),stdout);

      tmp26 = stringAppend(_OMC_LIT226,mmc_anyString(_adjacencyMatrix));
      tmp27 = stringAppend(tmp26,_OMC_LIT14);
      fputs(omc_string_data(tmp27),stdout);
    }

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _matchedEqsLst, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT330);

    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, listReverse(_knowns), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), _OMC_LIT331);

    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, listReverse(_boundaryConditionVars), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))), _OMC_LIT333);

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _bindingEquations, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT334);

    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _approximatedEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT335);

    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _boundaryConditionEquations, boxvar_BackendEquation_get, (OMC_BOX_FIELD(_currentSystem, 3))), _OMC_LIT336);

    _ebltEqsLst = omc_DataReconciliation_getEBLTEquations(threadData, _knowns, _solvedEqsAndVarsInfo, _mapIncRowEqn, _currentSystem);

    _ebltEqsLst = omc_List_setDifferenceOnTrue(threadData, _ebltEqsLst, _bindingEquations, boxvar_intEq);

    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _ebltEqsLst, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT337);

    _currentSystem = omc_DataReconciliation_traverseEBLTAndExtractSetCAndSetS(threadData, _currentSystem, _ebltEqsLst, _sBltAdjacencyMatrix, _knowns, _boundaryConditionVars, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, _solvedEqsAndVarsInfo, _debug, _setBFailedBoundaryConditionEquations, _bindingEquations ,&_tempSetS ,&_mappedEbltSetS ,&_status ,&_setBFailedBoundaryConditionEquations);

    if((!_status))
    {
      tmp28 = stringAppend(_OMC_LIT338,intString(_procedureCount));
      tmp29 = stringAppend(tmp28,_OMC_LIT339);
      tmp30 = stringAppend(tmp29,_OMC_LIT61);
      tmp31 = stringAppend(tmp30,_OMC_LIT14);
      fputs(omc_string_data(tmp31),stdout);
    }

    _procedureCount = ((modelica_integer) 1) + _procedureCount;
  }

  tmp32 = stringAppend(_OMC_LIT340,intString(((modelica_integer) -1) + _procedureCount));
  tmp33 = stringAppend(tmp32,_OMC_LIT14);
  tmp34 = stringAppend(tmp33,_OMC_LIT61);
  tmp35 = stringAppend(tmp34,_OMC_LIT14);
  fputs(omc_string_data(tmp35),stdout);

  _ebltEqsLst = omc_List_setDifferenceOnTrue(threadData, _ebltEqsLst, _approximatedEquations, boxvar_intEq);

  _tempSetS = omc_List_setDifferenceOnTrue(threadData, _tempSetS, _approximatedEquations, boxvar_intEq);

  _ebltEqsLst = omc_DataReconciliation_swapComplexEquationsInSetC(threadData, _ebltEqsLst, _tempSetS, _mappedEbltSetS, _currentSystem, _mapIncRowEqn ,&_tempSetS ,&_complexEquationList ,&_swappedEquationList);

  if(_debug)
  {
    omc_DataReconciliation_dumpSetSVarsSolvedInfo(threadData, _tempSetS, _solvedEqsAndVarsInfo, _mapIncRowEqn, (OMC_BOX_FIELD(_currentSystem, 3)), (OMC_BOX_FIELD(_currentSystem, 2)), _OMC_LIT273);
  }

  tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
  _extractedVarsfromSetS = omc_DataReconciliation_getVariablesAfterExtraction(threadData, tmpMeta36, _tempSetS, _sBltAdjacencyMatrix);

  _extractedVarsfromSetS = omc_List_setDifferenceOnTrue(threadData, _extractedVarsfromSetS, _knowns, boxvar_intEq);

  _setC = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _ebltEqsLst, _mapIncRowEqn));

  _setS = omc_List_unique(threadData, omc_DataReconciliation_getAbsoluteIndexHelper(threadData, _tempSetS, _mapIncRowEqn));

  tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
  _setC_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setC, (OMC_BOX_FIELD(_currentSystem, 3)), tmpMeta37);

  tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
  _setS_Eq = omc_DataReconciliation_getEquationsFromSBLTAndEBLT(threadData, _setS, (OMC_BOX_FIELD(_currentSystem, 3)), tmpMeta38);

  tmp39 = stringAppend(_OMC_LIT341,omc_DataReconciliation_dumplistInteger(threadData, _setC));
  tmp40 = stringAppend(tmp39,_OMC_LIT14);
  tmp41 = stringAppend(tmp40,_OMC_LIT272);
  tmp42 = stringAppend(tmp41,omc_DataReconciliation_dumplistInteger(threadData, _setS));
  tmp43 = stringAppend(tmp42,_OMC_LIT59);
  fputs(omc_string_data(tmp43),stdout);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), _OMC_LIT274);

  omc_BackendDump_dumpEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq), _OMC_LIT275);

  _unMeasuredVariables = omc_List_map1r(threadData, listReverse(_unMeasuredVariablesOfInterest), boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2)));

  _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _knowns, boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))));

  _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarUnreplaceable, omc_mk_boolean(1 /* true */)));

  _csvfileName = omc_DataReconciliation_readMeasurementsFromCSV(threadData, _shared ,&_measurementcsvData);

  _outDiffVars = omc_DataReconciliation_setStartValuesToMeasurements(threadData, _outDiffVars, _measurementcsvData, _csvfileName);

  /* Pattern-matching assignment */
  tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta45 = omc_mk_box2(0, (OMC_BOX_FIELD(_shared, 12)), tmpMeta44);
  tmpMeta46 = omc_BackendEquation_traverseEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), boxvar_BackendEquation_traverseEquationToScalarResidualForm, tmpMeta45);
  tmpMeta47 = OMC_BOX_FIELD(tmpMeta46, 2);
  _residualEquations = tmpMeta47;

  _residualEquations = omc_BackendEquation_convertResidualsIntoSolvedEquations(threadData, listReverse(_residualEquations), _OMC_LIT284, ((modelica_integer) 1), 0 /* false */ ,&_residualVars, NULL);

  _outResidualVars = omc_BackendVariable_listVar(threadData, listReverse(_residualVars));

  _outResidualEqns = omc_BackendEquation_listEquation(threadData, _residualEquations);

  _outOtherEqns = omc_BackendEquation_listEquation(threadData, _setS_Eq);

  _paramVars = omc_BackendEquation_equationsVars(threadData, omc_BackendEquation_merge(threadData, _outOtherEqns, _outResidualEqns), (OMC_BOX_FIELD(_shared, 2)));

  _outOtherVars = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _extractedVarsfromSetS, boxvar_BackendVariable_getVarAt, (OMC_BOX_FIELD(_currentSystem, 2))));

  omc_DataReconciliation_dumpSetSVars(threadData, _outOtherVars, _OMC_LIT342);

  omc_BackendDump_dumpVariables(threadData, omc_BackendVariable_listVar(threadData, _paramVars), _OMC_LIT286);

  tmp48 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT287);
  omc_string_store(&(_auxillaryConditionsFilename), tmp48);

  tmp49 = stringAppend(_OMC_LIT343,intString(omc_BackendEquation_getNumberOfEquations(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq))));
  tmp50 = stringAppend(tmp49,_OMC_LIT134);
  tmp51 = stringAppend(tmp50,intString(omc_BackendEquation_equationArraySize(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq))));
  tmp52 = stringAppend(tmp51,_OMC_LIT159);
  omc_string_store(&(_auxillaryEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, omc_BackendEquation_listEquation(threadData, _setC_Eq), tmp52));

  omc_System_writeFile(threadData, _auxillaryConditionsFilename, _auxillaryEquations);

  tmp53 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT289);
  omc_string_store(&(_intermediateEquationsFilename), tmp53);

  tmp54 = stringAppend(_OMC_LIT344,intString(omc_BackendEquation_getNumberOfEquations(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq))));
  tmp55 = stringAppend(tmp54,_OMC_LIT134);
  tmp56 = stringAppend(tmp55,intString(omc_BackendEquation_equationArraySize(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq))));
  tmp57 = stringAppend(tmp56,_OMC_LIT159);
  omc_string_store(&(_intermediateEquations), omc_DataReconciliation_dumpExtractedEquationsToHTML(threadData, omc_BackendEquation_listEquation(threadData, _setS_Eq), tmp57));

  omc_System_writeFile(threadData, _intermediateEquationsFilename, _intermediateEquations);

  omc_DataReconciliation_dumpRelatedBoundaryConditionsEquations(threadData, _setBFailedBoundaryConditionEquations, (OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)));

  omc_DataReconciliation_VerifyDataReconciliation(threadData, _ebltEqsLst, _tempSetS, _knowns, _boundaryConditionVars, _sBltAdjacencyMatrix, _solvedEqsAndVarsInfo, _exactEquationVars, _approximatedEquations, (OMC_BOX_FIELD(_currentSystem, 2)), (OMC_BOX_FIELD(_currentSystem, 3)), _mapIncRowEqn, _outOtherVars, _setS_Eq, _shared, _setC, _setS, listLength(_unMeasuredVariablesOfInterest));

  if(_debug)
  {
    omc_BackendDump_dumpVariables(threadData, _outDiffVars, _OMC_LIT291);

    omc_BackendDump_dumpVariables(threadData, _outResidualVars, _OMC_LIT292);

    omc_BackendDump_dumpVariables(threadData, _outOtherVars, _OMC_LIT293);

    omc_BackendDump_dumpEquationArray(threadData, _outResidualEqns, _OMC_LIT294);

    omc_BackendDump_dumpEquationArray(threadData, _outOtherEqns, _OMC_LIT295);
  }

  _simCodeJacobian = omc_SymbolicJacobian_getSymbolicJacobian(threadData, _outDiffVars, _outResidualEqns, _outResidualVars, _outOtherEqns, _outOtherVars, _shared, _outOtherVars, _OMC_LIT296, 0 /* false */ ,&_shared);

  tmpMeta59 = omc_mk_box7(3, &BackendDAE_DataReconciliationData_DATA__RECON__desc, _simCodeJacobian, _outResidualVars, _outDiffVars, mmc_mk_some(omc_BackendVariable_listVar(threadData, _unMeasuredVariables)), mmc_mk_none(), omc_mk_integer(listLength(_setBFailedBoundaryConditionEquations)));
  tmpMeta58 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta58), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta58))[20] = mmc_mk_some(tmpMeta59);
  _shared = tmpMeta58;

  _currentSystem = omc_BackendDAEUtil_setEqSystVars(threadData, _currentSystem, omc_BackendVariable_mergeVariables(threadData, _outResidualVars, _outOtherVars, 1 /* true */));

  _currentSystem = omc_BackendDAEUtil_setEqSystEqs(threadData, _currentSystem, omc_BackendEquation_merge(threadData, _outResidualEqns, _outOtherEqns));

  tmpMeta60 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta60), MMC_UNTAGPTR(_currentSystem), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta60))[10] = omc_BackendEquation_emptyEqns(threadData);
  _currentSystem = tmpMeta60;

  _inputVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarDirection, _OMC_LIT297));

  _shared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _shared, omc_BackendVariable_mergeVariables(threadData, omc_BackendVariable_listVar(threadData, _paramVars), _inputVars, 1 /* true */));

  tmp61 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD((OMC_BOX_FIELD(_inDAE, 3)), 17)), 3)),_OMC_LIT299);
  if((!omc_System_regularFileExists(threadData, tmp61)))
  {
    omc_string_store(&(_str), _OMC_LIT298);

    omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, _str, omc_BackendVariable_varList(threadData, _outDiffVars)));

    tmp62 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT299);
    omc_System_writeFile(threadData, tmp62, _str);
  }

  tmp63 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD((OMC_BOX_FIELD(_inDAE, 3)), 17)), 3)),_OMC_LIT367);
  if((!omc_System_regularFileExists(threadData, tmp63)))
  {
    omc_string_store(&(_str), omc_DataReconciliation_dumpCorrelationVarsToCsv(threadData, omc_BackendVariable_varList(threadData, _outDiffVars)));

    tmp64 = stringAppend(_str,_OMC_LIT14);
    omc_string_store(&(_str), omc_DataReconciliation_dumpToCsv(threadData, tmp64, omc_BackendVariable_varList(threadData, _outDiffVars)));

    tmp65 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT367);
    omc_System_writeFile(threadData, tmp65, _str);
  }

  tmp66 = stringAppend((OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)),_OMC_LIT300);
  omc_string_store(&(_modelicaFileName), tmp66);

  tmp67 = stringAppend(_OMC_LIT301,omc_System_stringReplace(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_shared, 17)), 3)), _OMC_LIT2, _OMC_LIT3));
  omc_string_store(&(_modelName), tmp67);

  omc_string_store(&(_modelicaOutput), _OMC_LIT302);

  tmp68 = stringAppend(_modelicaOutput,_OMC_LIT303);
  tmp69 = stringAppend(tmp68,_modelName);
  omc_string_store(&(_modelicaOutput), tmp69);

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outDiffVars), _OMC_LIT304));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, _paramVars, _OMC_LIT305));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpResidualVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outResidualVars), _OMC_LIT306));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedVars(threadData, _modelicaOutput, omc_BackendVariable_varList(threadData, _outOtherVars), _OMC_LIT307));

  tmp70 = stringAppend(_modelicaOutput,_OMC_LIT308);
  omc_string_store(&(_modelicaOutput), tmp70);

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedEquations(threadData, _modelicaOutput, _outResidualEqns, _OMC_LIT309));

  omc_string_store(&(_modelicaOutput), omc_DataReconciliation_dumpExtractedEquations(threadData, _modelicaOutput, _outOtherEqns, _OMC_LIT310));

  tmp71 = stringAppend(_modelicaOutput,_OMC_LIT311);
  tmp72 = stringAppend(tmp71,_modelName);
  tmp73 = stringAppend(tmp72,_OMC_LIT193);
  omc_string_store(&(_modelicaOutput), tmp73);

  tmp74 = stringAppend(_modelicaFileName,_OMC_LIT22);
  omc_System_writeFile(threadData, tmp74, _modelicaOutput);

  tmpMeta75 = mmc_mk_cons(_currentSystem, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta76 = omc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta75, _shared);
  _outDAE = tmpMeta76;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outDAE;
  return omc_ret_;
}

