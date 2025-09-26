#include "omc_simulation_settings.h"
#include "DAEMode.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,22) {&BackendDAE_VarKind_ALG__STATE__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&BackendDAE_IndexType_NORMAL__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "causalizeDaeMode"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,16,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "The system is partially causalized and simple assignments are generated for equations that can be solved explicitly. Only works with --daeMode."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,143,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(160)),_OMC_LIT3,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT4,_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,25) {&BackendDAE_VarKind_DAE__AUX__VAR__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,8) {&BackendDAE_EquationKind_AUX__EQUATION__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT10,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,7) {&BackendDAE_EquationKind_DISCRETE__EQUATION__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT13,_OMC_LIT11}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "$DAEres"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,7,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,4) {&BackendDAE_EquationKind_DYNAMIC__EQUATION__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT16,_OMC_LIT11}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "DAEMode.traverserStrongComponents failed on equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,54,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,0,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "\nVariables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,12,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,1,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/BackEnd/DAEMode.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,65,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT23_6,1.758917908e9);
#define _OMC_LIT23_6 MMC_REFREALLIT(_OMC_LIT_STRUCT23_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT22,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(521)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(523)),MMC_IMMEDIATE(MMC_TAGFIXNUM(90)),_OMC_LIT23_6}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "debugDAEmode"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,12,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Dump debug output for the DAEmode."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,34,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(167)),_OMC_LIT24,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "indexReductionMethod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,20,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "dynamicStateSelection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,21,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,4,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Skip index reduction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,20,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,0) {_OMC_LIT31,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "uode"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,4,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Use the underlying ODE without the constraints."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,47,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,0) {_OMC_LIT35,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Simple index reduction method, select (dynamic) dummy states based on analysis of the system."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,93,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,0) {_OMC_LIT29,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "dummyDerivatives"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,16,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Simple index reduction method, select (static) dummy states based on heuristic."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,79,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,0) {_OMC_LIT42,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {_OMC_LIT45,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT41,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT38,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT34,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,1) {_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Sets the index reduction method to use. See --help=optmodules for more info."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,76,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),_OMC_LIT28,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT4,_OMC_LIT30,_OMC_LIT51,_OMC_LIT53}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "dumpdaelow"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,10,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "graphvizDump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,12,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "Activates additional graphviz dumps (as .dot files). It can be used in addition to one of the following flags: {dumpdaelow|dumpinitialsystems|dumpindxdae}."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,155,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT57}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT56,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "Dumps the equation system at the beginning of the back end."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,59,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT60}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(53)),_OMC_LIT55,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "pre-optimization done (n="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,25,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,1,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "matching and sorting (n="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,24,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,7,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "Dumps .graphml files for the bipartite graph after Index Reduction and a task graph for the SCCs. Can be displayed with yEd. "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,125,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(116)),_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "evaluateOutputsOnly (n="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,23,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data " -> n="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,6,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "evalOutputOnly"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,14,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "Generates equations to calculate top level outputs only."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,56,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT73}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(130)),_OMC_LIT72,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "bltdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,7,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "Dumps information from index reduction."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,39,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT77}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(51)),_OMC_LIT76,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "dumpindxdae"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,11,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "Dumps the equation system after index reduction and optimization."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,65,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(54)),_OMC_LIT80,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "Stack overflow in DAEMode.getEqSystemDAEmode...\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,48,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT85_6,1.758917908e9);
#define _OMC_LIT85_6 MMC_REFREALLIT(_OMC_LIT_STRUCT85_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT22,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(161)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(161)),MMC_IMMEDIATE(MMC_TAGFIXNUM(157)),_OMC_LIT85_6}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#include "util/modelica.h"

#include "DAEMode_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_setNonStateVarAlgState(threadData_t *threadData, modelica_metatype __omcQ_24in_5FvarList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEMode_setNonStateVarAlgState,2,0) {(void*) boxptr_DAEMode_setNonStateVarAlgState,0}};
#define boxvar_DAEMode_setNonStateVarAlgState MMC_REFSTRUCTLIT(boxvar_lit_DAEMode_setNonStateVarAlgState)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_addVarsGlobalData(threadData_t *threadData, modelica_metatype __omcQ_24in_5FglobalDAEData, modelica_metatype _inVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEMode_addVarsGlobalData,2,0) {(void*) boxptr_DAEMode_addVarsGlobalData,0}};
#define boxvar_DAEMode_addVarsGlobalData MMC_REFSTRUCTLIT(boxvar_lit_DAEMode_addVarsGlobalData)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_getDiscAndContEqns(threadData_t *threadData, modelica_metatype _inAllVars, modelica_metatype _inAllEqns, modelica_metatype _inDiscVars, modelica_metatype _inContVars, modelica_metatype _functionTree, modelica_boolean _isInitial, modelica_metatype *out_contEqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DAEMode_getDiscAndContEqns(threadData_t *threadData, modelica_metatype _inAllVars, modelica_metatype _inAllEqns, modelica_metatype _inDiscVars, modelica_metatype _inContVars, modelica_metatype _functionTree, modelica_metatype _isInitial, modelica_metatype *out_contEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEMode_getDiscAndContEqns,2,0) {(void*) boxptr_DAEMode_getDiscAndContEqns,0}};
#define boxvar_DAEMode_getDiscAndContEqns MMC_REFSTRUCTLIT(boxvar_lit_DAEMode_getDiscAndContEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_traverserStrongComponents(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _inVars, modelica_metatype _varIdxs, modelica_metatype _eqnIdxs, modelica_metatype __omcQ_24in_5FtraverserArgs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEMode_traverserStrongComponents,2,0) {(void*) boxptr_DAEMode_traverserStrongComponents,0}};
#define boxvar_DAEMode_traverserStrongComponents MMC_REFSTRUCTLIT(boxvar_lit_DAEMode_traverserStrongComponents)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_createDAEmodeEqSystem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsyst, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype *out_shared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEMode_createDAEmodeEqSystem,2,0) {(void*) boxptr_DAEMode_createDAEmodeEqSystem,0}};
#define boxvar_DAEMode_createDAEmodeEqSystem MMC_REFSTRUCTLIT(boxvar_lit_DAEMode_createDAEmodeEqSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_getPostOptModulesDAEString(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAEMode_getPostOptModulesDAEString,2,0) {(void*) boxptr_DAEMode_getPostOptModulesDAEString,0}};
#define boxvar_DAEMode_getPostOptModulesDAEString MMC_REFSTRUCTLIT(boxvar_lit_DAEMode_getPostOptModulesDAEString)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_setNonStateVarAlgState(threadData_t *threadData, modelica_metatype __omcQ_24in_5FvarList)
{
  modelica_metatype _varList = NULL;
  modelica_metatype _tmpVarList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _varList = __omcQ_24in_5FvarList;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpVarList = tmpMeta1;
  {
    modelica_metatype _v;
    for (tmpMeta2 = _varList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = _v;
        {
          volatile mmc_switch_type tmp6;
          int tmp7;
          tmp6 = 0;
          for (; tmp6 < 2; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,3) == 0) goto tmp5_end;
              
              /* Pattern matching succeeded */
              tmpMeta3 = _v;
              goto tmp5_done;
            }
            case 1: {
              modelica_metatype tmpMeta9;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,0) == 0) goto tmp5_end;
              
              /* Pattern matching succeeded */
              tmpMeta3 = omc_BackendVariable_setVarKind(threadData, _v, _OMC_LIT0);
              goto tmp5_done;
            }
            }
            goto tmp5_end;
            tmp5_end: ;
          }
          goto goto_4;
          goto_4:;
          MMC_THROW_INTERNAL();
          goto tmp5_done;
          tmp5_done:;
        }
      }
      _v = tmpMeta3;
    }
  }

  _varList = listReverse(_varList);
  _return: OMC_LABEL_UNUSED
  return _varList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_addVarsGlobalData(threadData_t *threadData, modelica_metatype __omcQ_24in_5FglobalDAEData, modelica_metatype _inVars)
{
  modelica_metatype _globalDAEData = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalDAEData = __omcQ_24in_5FglobalDAEData;
  // _vars has no default value.
  _vars = omc_List_filterOnTrue(threadData, _inVars, boxvar_BackendVariable_isNonStateVar);

  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar0;
    modelica_integer tmp4;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = _vars;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar1;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar0 = omc_BackendVariable_setVarKind(threadData, _v, _OMC_LIT0);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar1;
  }
  _vars = tmpMeta1;

  tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(6));
  memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_globalDAEData), 6*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = listAppend(_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_globalDAEData), 3))));
  _globalDAEData = tmpMeta5;

  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_globalDAEData), 6*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = listAppend(omc_List_filterOnTrue(threadData, _inVars, boxvar_BackendVariable_isStateVar), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_globalDAEData), 2))));
  _globalDAEData = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _globalDAEData;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_getDiscAndContEqns(threadData_t *threadData, modelica_metatype _inAllVars, modelica_metatype _inAllEqns, modelica_metatype _inDiscVars, modelica_metatype _inContVars, modelica_metatype _functionTree, modelica_boolean _isInitial, modelica_metatype *out_contEqns)
{
  modelica_metatype _discEqns = NULL;
  modelica_metatype _contEqns = NULL;
  modelica_metatype _syst = NULL;
  modelica_metatype _adjMatrix = NULL;
  modelica_metatype _varsIndex = NULL;
  modelica_metatype _eqnIndex = NULL;
  modelica_metatype _assignVarEqn = NULL;
  modelica_metatype _assignEqnVar = NULL;
  modelica_metatype _mapEqnScalarArray = NULL;
  modelica_boolean _debug;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _discEqns has no default value.
  // _contEqns has no default value.
  // _syst has no default value.
  // _adjMatrix has no default value.
  // _varsIndex has no default value.
  // _eqnIndex has no default value.
  // _assignVarEqn has no default value.
  // _assignEqnVar has no default value.
  // _mapEqnScalarArray has no default value.
  _debug = 0 /* false */;
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
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _syst = omc_BackendDAEUtil_createEqSystem(threadData, omc_BackendVariable_listVar1(threadData, _inAllVars), omc_BackendEquation_listEquation(threadData, _inAllEqns), tmpMeta5, _OMC_LIT1, omc_BackendEquation_emptyEqns(threadData));

          _adjMatrix = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _syst, _OMC_LIT2, mmc_mk_some(_functionTree), _isInitial ,NULL ,NULL ,&_mapEqnScalarArray);

          /* Pattern-matching tuple assignment */
          tmpMeta8 = omc_Matching_RegularMatching(threadData, _adjMatrix, omc_BackendDAEUtil_systemSize(threadData, _syst), omc_BackendDAEUtil_systemSize(threadData, _syst), &tmpMeta6, &tmp7, NULL, NULL);
          _assignVarEqn = tmpMeta8;
          if (1 /* true */ != tmp7) goto goto_1;
          _assignEqnVar = tmpMeta6;

          _varsIndex = omc_BackendVariable_getVarIndexFromVars(threadData, _inDiscVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))));

          _eqnIndex = omc_List_map1(threadData, _varsIndex, boxvar_Array_getIndexFirst, _assignVarEqn);

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp10;
            modelica_metatype tmpMeta11;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp12;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = _eqnIndex;
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta11; /* defaultValue */
            tmp10 = &__omcQ_24tmpVar3;
            while(1) {
              tmp12 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp12--;
              }
              if (tmp12 == 0) {
                __omcQ_24tmpVar2 = arrayGet(_mapEqnScalarArray,mmc_unbox_integer(_i)) /* DAE.ASUB */;
                *tmp10 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp10 = &MMC_CDR(*tmp10);
              } else if (tmp12 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp10 = mmc_mk_nil();
            tmpMeta9 = __omcQ_24tmpVar3;
          }
          _eqnIndex = omc_List_unique(threadData, tmpMeta9);

          _discEqns = omc_BackendEquation_getList(threadData, _eqnIndex, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))));

          _varsIndex = omc_BackendVariable_getVarIndexFromVars(threadData, _inContVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))));

          _eqnIndex = omc_List_map1(threadData, _varsIndex, boxvar_Array_getIndexFirst, _assignVarEqn);

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp16;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = _eqnIndex;
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar5;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar4 = arrayGet(_mapEqnScalarArray,mmc_unbox_integer(_i)) /* DAE.ASUB */;
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar5;
          }
          _eqnIndex = omc_List_unique(threadData, tmpMeta13);

          _contEqns = omc_BackendEquation_getList(threadData, _eqnIndex, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
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
  if (out_contEqns) { *out_contEqns = _contEqns; }
  return _discEqns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DAEMode_getDiscAndContEqns(threadData_t *threadData, modelica_metatype _inAllVars, modelica_metatype _inAllEqns, modelica_metatype _inDiscVars, modelica_metatype _inContVars, modelica_metatype _functionTree, modelica_metatype _isInitial, modelica_metatype *out_contEqns)
{
  modelica_integer tmp1;
  modelica_metatype _discEqns = NULL;
  tmp1 = mmc_unbox_integer(_isInitial);
  _discEqns = omc_DAEMode_getDiscAndContEqns(threadData, _inAllVars, _inAllEqns, _inDiscVars, _inContVars, _functionTree, tmp1, out_contEqns);
  /* skip box _discEqns; list<BackendDAE.Equation> */
  /* skip box _contEqns; list<BackendDAE.Equation> */
  return _discEqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_traverserStrongComponents(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _inVars, modelica_metatype _varIdxs, modelica_metatype _eqnIdxs, modelica_metatype __omcQ_24in_5FtraverserArgs)
{
  modelica_metatype _traverserArgs = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _varCrefLst = NULL;
  modelica_boolean _recursiveStrongComponentRun;
  modelica_boolean _isStateVarInvoled;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _traverserArgs = __omcQ_24in_5FtraverserArgs;
  _vars = _inVars;
  // _varCrefLst has no default value.
  // _recursiveStrongComponentRun has no default value.
  // _isStateVarInvoled has no default value.
  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp4;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = _inVars;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar7;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar7;
  }
  _varCrefLst = tmpMeta1;

  _isStateVarInvoled = ((!omc_Flags_getConfigBool(threadData, _OMC_LIT8)) || omc_List_any(threadData, _inVars, boxvar_BackendVariable_isStateVar));

  { /* matchcontinue expression */
    volatile modelica_metatype tmp8_1;volatile modelica_metatype tmp8_2;volatile modelica_boolean tmp8_3;
    tmp8_1 = _inEqns;
    tmp8_2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 7)));
    tmp8_3 = _isStateVarInvoled;
    {
      modelica_metatype _newResEqns = NULL;
      modelica_metatype _newResVars = NULL;
      modelica_metatype _newAuxVars = NULL;
      modelica_metatype _discVars = NULL;
      modelica_metatype _contVars = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _systemVars = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _new_eq = NULL;
      modelica_metatype _aux_eq = NULL;
      modelica_integer _size;
      modelica_integer _newnumResVars;
      modelica_metatype _exp = NULL;
      modelica_metatype _globalDAEData = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _newCref = NULL;
      modelica_metatype _crlst = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_metatype _discEqns = NULL;
      modelica_metatype _contEqns = NULL;
      modelica_metatype _alg = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _crefExpand = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _newResEqns has no default value.
      // _newResVars has no default value.
      // _newAuxVars has no default value.
      // _discVars has no default value.
      // _contVars has no default value.
      // _var has no default value.
      // _systemVars has no default value.
      // _eq has no default value.
      // _new_eq has no default value.
      // _aux_eq has no default value.
      // _size has no default value.
      // _newnumResVars has no default value.
      // _exp has no default value.
      // _globalDAEData has no default value.
      // _cref has no default value.
      // _newCref has no default value.
      // _crlst has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _discEqns has no default value.
      // _contEqns has no default value.
      // _alg has no default value.
      // _source has no default value.
      // _crefExpand has no default value.
      tmp8 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp7_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp8 < 11; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          tmp10 = mmc_unbox_integer(tmp8_2);
          if (0 /* false */ != tmp10) goto tmp7_end;
          if (0 /* false */ != tmp8_3) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta11 = MMC_CAR(tmp8_1);
          tmpMeta12 = MMC_CDR(tmp8_1);
          if (!listEmpty(tmpMeta12)) goto tmp7_end;
          _eq = tmpMeta11;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_List_all(threadData, _vars, boxvar_BackendVariable_isCSEVar)) goto tmp7_end;
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp16;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = _vars;
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar9;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar8 = omc_BackendVariable_setVarKind(threadData, _v, _OMC_LIT9);
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar9;
          }
          _newResVars = tmpMeta13;

          _new_eq = omc_BackendEquation_setEquationAttributes(threadData, _eq, _OMC_LIT12);

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = omc_BackendVariable_addNewVars(threadData, _newResVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta17;

          tmpMeta19 = mmc_mk_cons(_new_eq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[4] = omc_BackendEquation_addList(threadData, tmpMeta19, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta18;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[5] = omc_BackendVariable_removeCrefs(threadData, _varCrefLst, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 5))));
          _traverserArgs = tmpMeta20;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 1: {
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          tmp21 = mmc_unbox_integer(tmp8_2);
          if (0 /* false */ != tmp21) goto tmp7_end;
          if (0 /* false */ != tmp8_3) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta22 = MMC_CAR(tmp8_1);
          tmpMeta23 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,0,4) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta23)) goto tmp7_end;
          _eq = tmpMeta22;
          tmp8 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmpMeta24 = _vars;
          if (listEmpty(tmpMeta24)) goto goto_6;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          if (!listEmpty(tmpMeta26)) goto goto_6;
          _var = tmpMeta25;

          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[2] = omc_ExpressionSolve_solve(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), omc_Expression_crefExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))), mmc_mk_none(), NULL);
          _eq = tmpMeta27;

          tmpMeta28 = mmc_mk_box5(5, &BackendDAE_Equation_SOLVED__EQUATION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))));
          _new_eq = tmpMeta28;

          _new_eq = omc_BackendEquation_setEquationAttributes(threadData, _new_eq, _OMC_LIT12);

          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[3] = omc_BackendVariable_addNewVars(threadData, _vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta29;

          tmpMeta31 = mmc_mk_cons(_new_eq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[4] = omc_BackendEquation_addList(threadData, tmpMeta31, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta30;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 2: {
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          tmp32 = mmc_unbox_integer(tmp8_2);
          if (0 /* false */ != tmp32) goto tmp7_end;
          if (0 /* false */ != tmp8_3) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta33 = MMC_CAR(tmp8_1);
          tmpMeta34 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,6,5) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta34)) goto tmp7_end;
          _eq = tmpMeta33;
          tmp8 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _new_eq = omc_BackendEquation_setEquationAttributes(threadData, _eq, _OMC_LIT12);

          tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[3] = omc_BackendVariable_addNewVars(threadData, _vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta35;

          tmpMeta37 = mmc_mk_cons(_new_eq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[4] = omc_BackendEquation_addList(threadData, tmpMeta37, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta36;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 3: {
          modelica_integer tmp38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          tmp38 = mmc_unbox_integer(tmp8_2);
          if (0 /* false */ != tmp38) goto tmp7_end;
          if (0 /* false */ != tmp8_3) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta39 = MMC_CAR(tmp8_1);
          tmpMeta40 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,1,6) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta40)) goto tmp7_end;
          _eq = tmpMeta39;
          tmp8 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _new_eq = omc_BackendEquation_setEquationAttributes(threadData, _eq, _OMC_LIT12);

          tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[3] = omc_BackendVariable_addNewVars(threadData, _vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta41;

          tmpMeta43 = mmc_mk_cons(_new_eq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[4] = omc_BackendEquation_addList(threadData, tmpMeta43, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta42;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 4: {
          modelica_integer tmp44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          tmp44 = mmc_unbox_integer(tmp8_2);
          if (0 /* false */ != tmp44) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta45 = MMC_CAR(tmp8_1);
          tmpMeta46 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta45,5,4) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta46)) goto tmp7_end;
          
          _eq = tmpMeta45;
          tmp8 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _new_eq = omc_BackendEquation_setEquationAttributes(threadData, _eq, _OMC_LIT14);

          tmpMeta47 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta47), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta47))[3] = omc_BackendVariable_addNewVars(threadData, _vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta47;

          tmpMeta49 = mmc_mk_cons(_new_eq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta48 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta48), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta48))[4] = omc_BackendEquation_addList(threadData, tmpMeta49, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta48;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 5: {
          modelica_integer tmp50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_boolean tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          tmp50 = mmc_unbox_integer(tmp8_2);
          if (0 /* false */ != tmp50) goto tmp7_end;
          if (0 /* false */ != tmp8_3) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta51 = MMC_CAR(tmp8_1);
          tmpMeta52 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta51,4,5) == 0) goto tmp7_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 3));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 4));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 5));
          if (!listEmpty(tmpMeta52)) goto tmp7_end;
          _eq = tmpMeta51;
          _alg = tmpMeta53;
          _source = tmpMeta54;
          _crefExpand = tmpMeta55;
          tmp8 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp56 = omc_CheckModel_isCrefListAlgorithmOutput(threadData, _varCrefLst, _alg, _source, _crefExpand);
          if (1 /* true */ != tmp56) goto goto_6;

          _new_eq = omc_BackendEquation_setEquationAttributes(threadData, _eq, _OMC_LIT12);

          tmpMeta57 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta57), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta57))[3] = omc_BackendVariable_addNewVars(threadData, _vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta57;

          tmpMeta59 = mmc_mk_cons(_new_eq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta58 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta58), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta58))[4] = omc_BackendEquation_addList(threadData, tmpMeta59, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta58;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 6: {
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_integer tmp63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta60 = MMC_CAR(tmp8_1);
          tmpMeta61 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta60,1,6) == 0) goto tmp7_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 3));
          if (!listEmpty(tmpMeta61)) goto tmp7_end;
          tmp63 = mmc_unbox_integer(tmp8_2);
          
          _eq = tmpMeta60;
          _exp = tmpMeta62;
          _b1 = tmp63  /* pattern as ty=Boolean */;
          _b2 = tmp8_3;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_Expression_isCref(threadData, _exp) && (_b1 || _b2))) goto tmp7_end;
          _globalDAEData = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 2)));

          _cref = omc_Expression_expCref(threadData, _exp);

          _newAuxVars = omc_BackendVariable_getVar(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 5))), NULL);

          _crlst = omc_ComponentReference_expandCref(threadData, _cref, 1 /* true */);

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp65;
            modelica_metatype tmpMeta66;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp67;
            modelica_metatype _cr_loopVar = 0;
            modelica_metatype _cr;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _cr_loopVar = _crlst;
            _v_loopVar = _newAuxVars;
            tmpMeta66 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta66; /* defaultValue */
            tmp65 = &__omcQ_24tmpVar11;
            while(1) {
              tmp67 = 2;
              if (!listEmpty(_cr_loopVar)) {
                _cr = MMC_CAR(_cr_loopVar);
                _cr_loopVar = MMC_CDR(_cr_loopVar);
                tmp67--;
              }if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp67--;
              }
              if (tmp67 == 0) {
                __omcQ_24tmpVar10 = omc_BackendVariable_copyVarNewName(threadData, omc_ComponentReference_crefPrefixAux(threadData, _cr), _v);
                *tmp65 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp65 = &MMC_CDR(*tmp65);
              } else if (tmp67 == 2) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp65 = mmc_mk_nil();
            tmpMeta64 = __omcQ_24tmpVar11;
          }
          _newAuxVars = tmpMeta64;

          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp69;
            modelica_metatype tmpMeta70;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp71;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = _newAuxVars;
            tmpMeta70 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta70; /* defaultValue */
            tmp69 = &__omcQ_24tmpVar13;
            while(1) {
              tmp71 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp71--;
              }
              if (tmp71 == 0) {
                __omcQ_24tmpVar12 = omc_BackendVariable_setVarKind(threadData, _v, _OMC_LIT9);
                *tmp69 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp69 = &MMC_CDR(*tmp69);
              } else if (tmp71 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp69 = mmc_mk_nil();
            tmpMeta68 = __omcQ_24tmpVar13;
          }
          _newAuxVars = tmpMeta68;

          tmpMeta72 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta72), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta72))[3] = omc_BackendVariable_addNewVars(threadData, _newAuxVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta72;

          _newCref = omc_ComponentReference_crefPrefixAux(threadData, _cref);

          tmpMeta73 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta73), MMC_UNTAGPTR(_eq), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta73))[3] = omc_Expression_crefExp(threadData, _newCref);
          _eq = tmpMeta73;

          _aux_eq = _eq;

          _aux_eq = omc_BackendEquation_setEquationAttributes(threadData, _aux_eq, _OMC_LIT12);

          tmpMeta75 = mmc_mk_cons(_aux_eq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta74 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta74), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta74))[4] = omc_BackendEquation_addList(threadData, tmpMeta75, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta74;

          _globalDAEData = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 2)));

          tmpMeta76 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta76), MMC_UNTAGPTR(_eq), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta76))[4] = omc_Expression_crefToExp(threadData, _cref);
          _eq = tmpMeta76;

          _newResEqns = omc_BackendEquation_equationToScalarResidualForm(threadData, _eq, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 6))));

          _newResEqns = omc_BackendEquation_convertResidualsIntoSolvedEquations(threadData, _newResEqns, _OMC_LIT15, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_globalDAEData), 4)))), 1 /* true */ ,&_newResVars ,&_newnumResVars);

          tmpMeta77 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta77), MMC_UNTAGPTR(_globalDAEData), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta77))[4] = mmc_mk_integer(_newnumResVars);
          _globalDAEData = tmpMeta77;

          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp79;
            modelica_metatype tmpMeta80;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp81;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = _newResEqns;
            tmpMeta80 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta80; /* defaultValue */
            tmp79 = &__omcQ_24tmpVar15;
            while(1) {
              tmp81 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp81--;
              }
              if (tmp81 == 0) {
                __omcQ_24tmpVar14 = omc_BackendEquation_setEquationAttributes(threadData, _e, _OMC_LIT17);
                *tmp79 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp79 = &MMC_CDR(*tmp79);
              } else if (tmp81 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp79 = mmc_mk_nil();
            tmpMeta78 = __omcQ_24tmpVar15;
          }
          _newResEqns = tmpMeta78;

          tmpMeta82 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta82), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta82))[3] = omc_BackendVariable_addNewVars(threadData, _newResVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta82;

          tmpMeta83 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta83), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta83))[4] = omc_BackendEquation_addList(threadData, _newResEqns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta83;

          _globalDAEData = omc_DAEMode_addVarsGlobalData(threadData, _globalDAEData, _vars);

          tmpMeta84 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta84), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta84))[2] = _globalDAEData;
          _traverserArgs = tmpMeta84;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 7: {
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_integer tmp87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta85 = MMC_CAR(tmp8_1);
          tmpMeta86 = MMC_CDR(tmp8_1);
          if (!listEmpty(tmpMeta86)) goto tmp7_end;
          tmp87 = mmc_unbox_integer(tmp8_2);
          
          _eq = tmpMeta85;
          _b1 = tmp87  /* pattern as ty=Boolean */;
          _b2 = tmp8_3;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_b1 || _b2)) goto tmp7_end;
          _globalDAEData = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 2)));

          _newResEqns = omc_BackendEquation_equationToScalarResidualForm(threadData, _eq, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 6))));

          _newResEqns = omc_BackendEquation_convertResidualsIntoSolvedEquations(threadData, _newResEqns, _OMC_LIT15, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_globalDAEData), 4)))), 1 /* true */ ,&_newResVars ,&_newnumResVars);

          tmpMeta88 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta88), MMC_UNTAGPTR(_globalDAEData), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta88))[4] = mmc_mk_integer(_newnumResVars);
          _globalDAEData = tmpMeta88;

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp90;
            modelica_metatype tmpMeta91;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp92;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = _newResEqns;
            tmpMeta91 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta91; /* defaultValue */
            tmp90 = &__omcQ_24tmpVar17;
            while(1) {
              tmp92 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp92--;
              }
              if (tmp92 == 0) {
                __omcQ_24tmpVar16 = omc_BackendEquation_setEquationAttributes(threadData, _e, _OMC_LIT17);
                *tmp90 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp90 = &MMC_CDR(*tmp90);
              } else if (tmp92 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp90 = mmc_mk_nil();
            tmpMeta89 = __omcQ_24tmpVar17;
          }
          _newResEqns = tmpMeta89;

          tmpMeta93 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta93), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta93))[3] = omc_BackendVariable_addNewVars(threadData, _newResVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta93;

          tmpMeta94 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta94), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta94))[4] = omc_BackendEquation_addList(threadData, _newResEqns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta94;

          _globalDAEData = omc_DAEMode_addVarsGlobalData(threadData, _globalDAEData, _vars);

          tmpMeta95 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta95), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta95))[2] = _globalDAEData;
          _traverserArgs = tmpMeta95;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 8: {
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta96 = MMC_CAR(tmp8_1);
          tmpMeta97 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta96,6,5) == 0) goto tmp7_end;
          tmpMeta98 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta96), 3));
          if (!listEmpty(tmpMeta97)) goto tmp7_end;
          
          _eq = tmpMeta96;
          _exp = tmpMeta98;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_isCref(threadData, _exp)) goto tmp7_end;
          _cref = omc_Expression_expCref(threadData, _exp);

          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp100;
            modelica_metatype tmpMeta101;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp102;
            modelica_metatype _cr_loopVar = 0;
            modelica_metatype _cr;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _cr_loopVar = _varCrefLst;
            _v_loopVar = _vars;
            tmpMeta101 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta101; /* defaultValue */
            tmp100 = &__omcQ_24tmpVar19;
            while(1) {
              tmp102 = 2;
              if (!listEmpty(_cr_loopVar)) {
                _cr = MMC_CAR(_cr_loopVar);
                _cr_loopVar = MMC_CDR(_cr_loopVar);
                tmp102--;
              }if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp102--;
              }
              if (tmp102 == 0) {
                __omcQ_24tmpVar18 = omc_BackendVariable_copyVarNewName(threadData, omc_ComponentReference_crefPrefixAux(threadData, _cr), _v);
                *tmp100 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp100 = &MMC_CDR(*tmp100);
              } else if (tmp102 == 2) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp100 = mmc_mk_nil();
            tmpMeta99 = __omcQ_24tmpVar19;
          }
          _newAuxVars = tmpMeta99;

          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp104;
            modelica_metatype tmpMeta105;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp106;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = _newAuxVars;
            tmpMeta105 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta105; /* defaultValue */
            tmp104 = &__omcQ_24tmpVar21;
            while(1) {
              tmp106 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp106--;
              }
              if (tmp106 == 0) {
                __omcQ_24tmpVar20 = omc_BackendVariable_setVarKind(threadData, _v, _OMC_LIT9);
                *tmp104 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp104 = &MMC_CDR(*tmp104);
              } else if (tmp106 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp104 = mmc_mk_nil();
            tmpMeta103 = __omcQ_24tmpVar21;
          }
          _newAuxVars = tmpMeta103;

          tmpMeta107 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta107), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta107))[3] = omc_BackendVariable_addNewVars(threadData, _newAuxVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta107;

          _newCref = omc_ComponentReference_crefPrefixAux(threadData, _cref);

          tmpMeta108 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta108), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta108))[3] = omc_Expression_crefToExp(threadData, _newCref);
          _eq = tmpMeta108;

          _aux_eq = _eq;

          _aux_eq = omc_BackendEquation_setEquationAttributes(threadData, _aux_eq, _OMC_LIT12);

          tmpMeta110 = mmc_mk_cons(_aux_eq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta109 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta109), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta109))[4] = omc_BackendEquation_addList(threadData, tmpMeta110, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta109;

          _globalDAEData = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 2)));

          tmpMeta111 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta111), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta111))[4] = omc_Expression_crefToExp(threadData, _cref);
          _eq = tmpMeta111;

          _newResEqns = omc_BackendEquation_equationToScalarResidualForm(threadData, _eq, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 6))));

          _newResEqns = omc_BackendEquation_convertResidualsIntoSolvedEquations(threadData, _newResEqns, _OMC_LIT15, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_globalDAEData), 4)))), 1 /* true */ ,&_newResVars ,&_newnumResVars);

          tmpMeta112 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta112), MMC_UNTAGPTR(_globalDAEData), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta112))[4] = mmc_mk_integer(_newnumResVars);
          _globalDAEData = tmpMeta112;

          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp114;
            modelica_metatype tmpMeta115;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp116;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = _newResEqns;
            tmpMeta115 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta115; /* defaultValue */
            tmp114 = &__omcQ_24tmpVar23;
            while(1) {
              tmp116 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp116--;
              }
              if (tmp116 == 0) {
                __omcQ_24tmpVar22 = omc_BackendEquation_setEquationAttributes(threadData, _e, _OMC_LIT17);
                *tmp114 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp114 = &MMC_CDR(*tmp114);
              } else if (tmp116 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp114 = mmc_mk_nil();
            tmpMeta113 = __omcQ_24tmpVar23;
          }
          _newResEqns = tmpMeta113;

          tmpMeta117 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta117), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta117))[3] = omc_BackendVariable_addNewVars(threadData, _newResVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 3))));
          _traverserArgs = tmpMeta117;

          tmpMeta118 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta118), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta118))[4] = omc_BackendEquation_addList(threadData, _newResEqns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 4))));
          _traverserArgs = tmpMeta118;

          _globalDAEData = omc_DAEMode_addVarsGlobalData(threadData, _globalDAEData, _vars);

          tmpMeta119 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta119), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta119))[2] = _globalDAEData;
          _traverserArgs = tmpMeta119;
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 9: {
          modelica_integer tmp120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta132;
          tmp120 = mmc_unbox_integer(tmp8_2);
          if (0 /* false */ != tmp120) goto tmp7_end;
          
          /* Pattern matching succeeded */
          _discVars = omc_List_splitOnTrue(threadData, _inVars, boxvar_BackendVariable_isVarDiscrete ,&_contVars);

          _discEqns = omc_DAEMode_getDiscAndContEqns(threadData, _inVars, _inEqns, _discVars, _contVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 8)))), 12))), omc_BackendDAEUtil_isInitializationDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_traverserArgs), 8)))) ,&_contEqns);

          {
            modelica_metatype _e;
            for (tmpMeta121 = _discEqns; !listEmpty(tmpMeta121); tmpMeta121=MMC_CDR(tmpMeta121))
            {
              _e = MMC_CAR(tmpMeta121);
              _size = omc_BackendEquation_equationSize(threadData, _e);

              _newAuxVars = omc_List_firstN(threadData, _discVars, _size);

              tmpMeta122 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta123 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta124 = MMC_REFSTRUCTLIT(mmc_nil);
              _traverserArgs = omc_DAEMode_traverserStrongComponents(threadData, tmpMeta122, _newAuxVars, tmpMeta123, tmpMeta124, _traverserArgs);

              _discVars = omc_List_stripN(threadData, _discVars, _size);
            }
          }

          {
            modelica_metatype _e;
            for (tmpMeta126 = _contEqns; !listEmpty(tmpMeta126); tmpMeta126=MMC_CDR(tmpMeta126))
            {
              _e = MMC_CAR(tmpMeta126);
              _size = omc_BackendEquation_equationSize(threadData, _e);

              _newAuxVars = omc_List_firstN(threadData, _contVars, _size);

              tmpMeta127 = MMC_TAGPTR(mmc_alloc_words(9));
              memcpy(MMC_UNTAGPTR(tmpMeta127), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta127))[7] = mmc_mk_boolean(1 /* true */);
              _traverserArgs = tmpMeta127;

              tmpMeta128 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta129 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta130 = MMC_REFSTRUCTLIT(mmc_nil);
              _traverserArgs = omc_DAEMode_traverserStrongComponents(threadData, tmpMeta128, _newAuxVars, tmpMeta129, tmpMeta130, _traverserArgs);

              tmpMeta131 = MMC_TAGPTR(mmc_alloc_words(9));
              memcpy(MMC_UNTAGPTR(tmpMeta131), MMC_UNTAGPTR(_traverserArgs), 9*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta131))[7] = mmc_mk_boolean(0 /* false */);
              _traverserArgs = tmpMeta131;

              _contVars = omc_List_stripN(threadData, _contVars, _size);
            }
          }
          tmpMeta5 = _traverserArgs;
          goto tmp7_done;
        }
        case 10: {
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          
          /* Pattern matching succeeded */
          tmpMeta133 = stringAppend(_OMC_LIT18,omc_BackendDump_equationListString(threadData, _inEqns, _OMC_LIT19));
          tmpMeta134 = stringAppend(tmpMeta133,_OMC_LIT20);
          tmpMeta135 = stringAppend(tmpMeta134,omc_BackendDump_varListString(threadData, _inVars, _OMC_LIT19));
          tmpMeta136 = stringAppend(tmpMeta135,_OMC_LIT21);
          omc_Error_addInternalError(threadData, tmpMeta136, _OMC_LIT23);
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
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp7_done2;
      goto_6:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp8 < 11) {
        goto tmp7_top;
      }
      MMC_THROW_INTERNAL();
      tmp7_done2:;
    }
  }
  _traverserArgs = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _traverserArgs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_createDAEmodeEqSystem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsyst, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype *out_shared)
{
  modelica_metatype _syst = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _travArgs = NULL;
  modelica_metatype _globalDAEData = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _retSystem = NULL;
  modelica_metatype _newDAEVars = NULL;
  modelica_metatype _newDAEEquations = NULL;
  modelica_metatype _resEqns = NULL;
  modelica_integer _systemSize;
  modelica_boolean _debug;
  modelica_boolean _exec;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _syst = __omcQ_24in_5Fsyst;
  _shared = __omcQ_24in_5Fshared;
  // _travArgs has no default value.
  // _globalDAEData has no default value.
  // _tmp has no default value.
  // _vars has no default value.
  // _retSystem has no default value.
  // _newDAEVars has no default value.
  // _newDAEEquations has no default value.
  // _resEqns has no default value.
  // _systemSize has no default value.
  _debug = omc_Flags_isSet(threadData, _OMC_LIT27);
  _exec = 0 /* false */;
  _globalDAEData = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 19)));

  _systemSize = omc_BackendDAEUtil_systemSize(threadData, _syst);

  _newDAEVars = omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013));

  _newDAEEquations = omc_BackendEquation_emptyEqnsSized(threadData, _systemSize);

  tmpMeta1 = mmc_mk_box8(3, &DAEMode_TraverseEqnAryFold_TRAVERSER__CREATE__DAE__desc, _globalDAEData, _newDAEVars, _newDAEEquations, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 12))), mmc_mk_boolean(0 /* false */), _shared);
  _travArgs = tmpMeta1;

  if(_debug)
  {
    omc_BackendDump_printEqSystem(threadData, _syst);
  }

  _travArgs = omc_BackendDAEUtil_traverseEqSystemStrongComponents(threadData, _syst, boxvar_DAEMode_traverserStrongComponents, _travArgs);

  _globalDAEData = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_travArgs), 2)));

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_globalDAEData), 5)))))
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(6));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_globalDAEData), 6*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[5] = mmc_mk_some(omc_BackendVariable_addVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_travArgs), 5))), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_globalDAEData), 5))))));
    _globalDAEData = tmpMeta2;
  }
  else
  {
    tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(6));
    memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_globalDAEData), 6*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[5] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_travArgs), 5))));
    _globalDAEData = tmpMeta3;
  }

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _retSystem = omc_BackendDAEUtil_createEqSystem(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_travArgs), 3))), omc_BackendEquation_emptyEqns(threadData), tmpMeta4, _OMC_LIT1, omc_BackendEquation_emptyEqns(threadData));

  _retSystem = omc_BackendDAEUtil_setEqSystEqs(threadData, _retSystem, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_travArgs), 4))));

  _retSystem = omc_BackendDAEUtil_setEqSystRemovedEqns(threadData, _retSystem, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 10))));

  _retSystem = omc_BackendEquation_requationsAddDAE(threadData, omc_ExpandableArray_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 7)))), _retSystem);

  _syst = _retSystem;

  tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[19] = _globalDAEData;
  _shared = tmpMeta5;

  if(_debug)
  {
    omc_BackendDump_printEqSystem(threadData, _syst);
  }

  if(_debug)
  {
    omc_BackendDump_dumpBackendDAEModeData(threadData, _globalDAEData);
  }
  _return: OMC_LABEL_UNUSED
  if (out_shared) { *out_shared = _shared; }
  return _syst;
}

DLLDirection
modelica_metatype omc_DAEMode_createDAEmodeBDAE(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  _outDAE = omc_BackendDAEUtil_mapEqSystem(threadData, _inDAE, boxvar_DAEMode_createDAEmodeEqSystem);
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DAEMode_getPostOptModulesDAEString(threadData_t *threadData)
{
  modelica_metatype _strpostOptModules = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _strpostOptModules has no default value.
  _strpostOptModules = omc_Config_getPostOptModulesDAE(threadData);
  _return: OMC_LABEL_UNUSED
  return _strpostOptModules;
}

DLLDirection
modelica_metatype omc_DAEMode_getEqSystemDAEmode(threadData_t *threadData, modelica_metatype _inDAE, modelica_string _fileNamePrefix, modelica_metatype _strPreOptModules, modelica_metatype _strmatchingAlgorithm, modelica_metatype _strdaeHandler, modelica_metatype _strPostOptModules, modelica_metatype *out_outInitDAE, modelica_metatype *out_outInitDAE_lambda0_option, modelica_metatype *out_outRemovedInitialEquationLst)
{
  modelica_metatype _outDAEmode = NULL;
  modelica_metatype _outInitDAE = NULL;
  modelica_metatype _outInitDAE_lambda0_option = NULL;
  modelica_metatype _outRemovedInitialEquationLst = NULL;
  modelica_metatype _dae = NULL;
  modelica_metatype _simDAE = NULL;
  modelica_metatype _preOptModules = NULL;
  modelica_metatype _postOptModules = NULL;
  modelica_metatype _daeHandler = NULL;
  modelica_metatype _matchingAlgorithm = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_integer _numCheckpoints;
  modelica_integer _oldSize;
  modelica_metatype _eqSyst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAEmode has no default value.
  // _outInitDAE has no default value.
  // _outInitDAE_lambda0_option has no default value.
  // _outRemovedInitialEquationLst has no default value.
  // _dae has no default value.
  // _simDAE has no default value.
  // _preOptModules has no default value.
  // _postOptModules has no default value.
  // _daeHandler has no default value.
  // _matchingAlgorithm has no default value.
  // _globalKnownVars has no default value.
  // _numCheckpoints has no default value.
  // _oldSize has no default value.
  // _eqSyst has no default value.
  _numCheckpoints = omc_ErrorExt_getNumCheckpoints(threadData);

  { /* stack overflow check */
    {
      modelica_metatype tmpMeta4;
      modelica_string tmp9;
      modelica_metatype tmpMeta10;
      modelica_metatype tmpMeta11;
      modelica_string tmp12;
      modelica_metatype tmpMeta13;
      modelica_metatype tmpMeta14;
      modelica_metatype tmpMeta15;
      modelica_metatype tmpMeta16;
      modelica_metatype tmpMeta17;
      modelica_metatype tmpMeta18;
      modelica_metatype tmpMeta19;
      MMC_TRY_STACK()
      omc_StackOverflow_clearStacktraceMessages(threadData);

      _preOptModules = omc_BackendDAEUtil_getPreOptModules(threadData, _strPreOptModules);

      { /* match expression */
        modelica_metatype tmp7_1;
        tmp7_1 = _strPostOptModules;
        {
          volatile mmc_switch_type tmp7;
          int tmp8;
          tmp7 = 0;
          for (; tmp7 < 2; tmp7++) {
            switch (MMC_SWITCH_CAST(tmp7)) {
            case 0: {
              if (!optionNone(tmp7_1)) goto tmp6_end;
              /* Pattern matching succeeded */
              tmpMeta4 = mmc_mk_some(omc_DAEMode_getPostOptModulesDAEString(threadData));
              goto tmp6_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta4 = _strPostOptModules;
              goto tmp6_done;
            }
            }
            goto tmp6_end;
            tmp6_end: ;
          }
          goto goto_5;
          goto_5:;
          MMC_THROW_INTERNAL();
          goto tmp6_done;
          tmp6_done:;
        }
      }
      _postOptModules = omc_BackendDAEUtil_getPostOptModules(threadData, tmpMeta4);

      _matchingAlgorithm = omc_BackendDAEUtil_getMatchingAlgorithm(threadData, _strmatchingAlgorithm);

      omc_FlagsUtil_setConfigString(threadData, _OMC_LIT54, _OMC_LIT42);

      _daeHandler = omc_BackendDAEUtil_getIndexReductionMethod(threadData, _strdaeHandler);

      if(omc_Flags_isSet(threadData, _OMC_LIT62))
      {
        omc_BackendDump_dumpBackendDAE(threadData, _inDAE, _OMC_LIT55);

        if(omc_Flags_isSet(threadData, _OMC_LIT59))
        {
          omc_BackendDump_graphvizAdjacencyMatrix(threadData, _inDAE, _OMC_LIT55);
        }
      }

      _dae = omc_BackendDAEUtil_preOptimizeDAE(threadData, _inDAE, _preOptModules);

      tmp9 = modelica_integer_to_modelica_string(omc_BackendDAEUtil_daeSize(threadData, _dae), ((modelica_integer) 0), 1 /* true */);
      tmpMeta10 = stringAppend(_OMC_LIT63,tmp9);
      tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT64);
      omc_ExecStat_execStat(threadData, tmpMeta11);

      _dae = omc_BackendDAEUtil_causalizeDAE(threadData, _dae, mmc_mk_none(), _matchingAlgorithm, _daeHandler, 1 /* true */);

      tmp12 = modelica_integer_to_modelica_string(omc_BackendDAEUtil_daeSize(threadData, _dae), ((modelica_integer) 0), 1 /* true */);
      tmpMeta13 = stringAppend(_OMC_LIT65,tmp12);
      tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT64);
      omc_ExecStat_execStat(threadData, tmpMeta14);

      if(omc_Flags_isSet(threadData, _OMC_LIT69))
      {
        omc_BackendDump_dumpBipartiteGraphDAE(threadData, _dae, _fileNamePrefix);
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT75))
      {
        _oldSize = omc_BackendDAEUtil_daeSize(threadData, _dae);

        _dae = omc_BackendDAEOptimize_evaluateOutputsOnly(threadData, _dae);

        tmpMeta15 = stringAppend(_OMC_LIT70,intString(_oldSize));
        tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT71);
        tmpMeta17 = stringAppend(tmpMeta16,intString(omc_BackendDAEUtil_daeSize(threadData, _dae)));
        tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT64);
        omc_ExecStat_execStat(threadData, tmpMeta18);
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT79))
      {
        omc_BackendDump_bltdump(threadData, _OMC_LIT76, _dae);
      }

      _outInitDAE = omc_Initialization_solveInitialSystem(threadData, _dae ,&_outInitDAE_lambda0_option ,&_outRemovedInitialEquationLst ,&_globalKnownVars ,&_dae);

      _simDAE = omc_BackendDAEUtil_setFunctionTree(threadData, _dae, omc_BackendDAEUtil_getFunctions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outInitDAE), 3)))));

      _simDAE = omc_BackendDAEUtil_setDAEGlobalKnownVars(threadData, _simDAE, _globalKnownVars);

      _simDAE = omc_BackendDAEOptimize_addInitialStmtsToAlgorithms(threadData, _simDAE, 0 /* false */);

      _simDAE = omc_Initialization_removeInitializationStuff(threadData, _simDAE);

      _simDAE = omc_BackendDAEUtil_postOptimizeDAE(threadData, _simDAE, _postOptModules, _matchingAlgorithm, _daeHandler);

      _simDAE = omc_BackendDAEUtil_sortGlobalKnownVarsInDAE(threadData, _simDAE);

      if(omc_Flags_isSet(threadData, _OMC_LIT83))
      {
        omc_BackendDump_dumpBackendDAE(threadData, _simDAE, _OMC_LIT80);
      }

      _outDAEmode = _simDAE;

      goto _return;
      MMC_ELSE_STACK()
      setGlobalRoot(((modelica_integer) 20), mmc_mk_none());

      omc_ErrorExt_rollbackNumCheckpoints(threadData, omc_ErrorExt_getNumCheckpoints(threadData) - _numCheckpoints);

      tmpMeta19 = stringAppend(_OMC_LIT84,stringDelimitList(omc_StackOverflow_readableStacktraceMessages(threadData), _OMC_LIT21));
      omc_Error_addInternalError(threadData, tmpMeta19, _OMC_LIT85);

      omc_StackOverflow_clearStacktraceMessages(threadData);
      MMC_CATCH_STACK()
    }
  }
  ;

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  if (out_outInitDAE) { *out_outInitDAE = _outInitDAE; }
  if (out_outInitDAE_lambda0_option) { *out_outInitDAE_lambda0_option = _outInitDAE_lambda0_option; }
  if (out_outRemovedInitialEquationLst) { *out_outRemovedInitialEquationLst = _outRemovedInitialEquationLst; }
  return _outDAEmode;
}

