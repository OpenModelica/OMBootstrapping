#include "omc_simulation_settings.h"
#include "NBResolveSingularities.h"
#define _OMC_LIT0_data "Stage "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,6,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " underdetermined.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,18,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ") Unmatched variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,22,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Not underdetermined."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,20,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data " overdetermined.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,17,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ") Unmatched equations:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,22,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Not overdetermined."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,19,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "	  DYNAMIC STATE SELECTION\n	(some unmatched equations)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,54,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ") Remaining State Candidates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,28,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data ") Remaining Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,21,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Index Reduction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,15,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ") Sorted State Candidates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,25,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ") Constraint Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,22,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "$DER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,4,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "NBResolveSingularities.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,25,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT19_6,0.0);
#define _OMC_LIT19_6 MMC_REFREALLIT(_OMC_LIT_STRUCT19_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(888)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(888)),MMC_IMMEDIATE(MMC_TAGFIXNUM(109)),_OMC_LIT19_6}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT20_6,0.0);
#define _OMC_LIT20_6 MMC_REFREALLIT(_OMC_LIT_STRUCT20_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(871)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(872)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT20_6}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "$DUM"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,4,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "DUM"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,3,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT23_6,0.0);
#define _OMC_LIT23_6 MMC_REFREALLIT(_OMC_LIT_STRUCT23_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(747)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(747)),MMC_IMMEDIATE(MMC_TAGFIXNUM(73)),_OMC_LIT23_6}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT24_6,0.0);
#define _OMC_LIT24_6 MMC_REFREALLIT(_OMC_LIT_STRUCT24_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(762)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(762)),MMC_IMMEDIATE(MMC_TAGFIXNUM(71)),_OMC_LIT24_6}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,17,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT25,_OMC_LIT26,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "NBResolveSingularities.resolveSlicedDummyStates failed because the partially matched array variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,100,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data " could not be fully accounted for during index reduction ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,58,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data " of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,4,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data " elements matched as state or dummy state) -- the remainder belongs to a different, currently unresolved part of the system.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,125,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT33_6,0.0);
#define _OMC_LIT33_6 MMC_REFREALLIT(_OMC_LIT_STRUCT33_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(678)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(678)),MMC_IMMEDIATE(MMC_TAGFIXNUM(55)),_OMC_LIT33_6}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT34_6,0.0);
#define _OMC_LIT34_6 MMC_REFREALLIT(_OMC_LIT_STRUCT34_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(659)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(659)),MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT34_6}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "initialization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,14,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Shows additional information from the initialization process."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,61,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,2,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT25,_OMC_LIT38,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "NBResolveSingularities.balanceInitialization reports an overdetermined initialization!\nChecking for consistency is not yet supported, following equations had to be removed:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,173,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "NBResolveSingularities.balanceInitialization failed because following non-fixable variables could not be solved:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,113,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "\nUse -d=initialization for more debug output."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,45,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "\nFollowing equations were created by fixing variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,55,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,1,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "\nUse -d=bltdump for more verbose debug output."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,46,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "All"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,3,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "bltdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,7,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "Dumps information from index reduction."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,39,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(50)),_OMC_LIT48,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Created Start Equations for balancing the Initialization ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,58,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,2,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,2,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,2,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "NBResolveSingularities.indexReduction failed because no mapping was provided."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,77,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,1) {_OMC_LIT55,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "NBResolveSingularities.indexReduction expected final matrix as adj input but got :\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,83,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "NBResolveSingularities.indexReduction failed because there was not enough state candidates to balance out the constraint equations.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,132,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "Constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,10,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "State Candidate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,15,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "dummyselect"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,11,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "Dumps information from dummy state selection heuristic."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,55,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(51)),_OMC_LIT61,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,3) {&NBAdjacency_Matrix_EMPTY__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "1. StateSelect.NEVER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,20,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "2. StateSelect.AVOID"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,20,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "3. Artificial Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,23,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "4. StateSelect.DEFAULT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,22,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "5. StateSelect.PREFER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,21,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT70_6,0.0);
#define _OMC_LIT70_6 MMC_REFREALLIT(_OMC_LIT_STRUCT70_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(232)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(232)),MMC_IMMEDIATE(MMC_TAGFIXNUM(76)),_OMC_LIT70_6}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data ") Index Reduction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,17,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "Finished with perfect matching in stage "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,40,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,1,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "Nothing done for ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,18,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "[dummyselect] 1. Differentiate the constraint equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,55,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT76_6,0.0);
#define _OMC_LIT76_6 MMC_REFREALLIT(_OMC_LIT_STRUCT76_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(292)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(292)),MMC_IMMEDIATE(MMC_TAGFIXNUM(188)),_OMC_LIT76_6}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "[dummyselect] constraint eqn:		"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,31,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "[dummyselect] differentiated eqn:	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,34,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "NBResolveSingularities.indexReduction failed because slicing during index reduction is not yet supported.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,106,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "[dummyselect] ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,15,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data ") Selected States"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,17,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "[stateselection] ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,18,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data ") State Derivatives Created by Differentiation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,46,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data ") Selected Dummy States"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,23,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "stateselection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,14,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "Enables dumping of selected states. Extends -d=backenddaeinfo."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,62,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(69)),_OMC_LIT85,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT86}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "NBResolveSingularities.indexReduction failed because dynamic state selection is not yet supported."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,98,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,2,1) {_OMC_LIT88,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "	 STATIC STATE SELECTION\n	(no unmatched equations)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,50,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT91_6,0.0);
#define _OMC_LIT91_6 MMC_REFREALLIT(_OMC_LIT_STRUCT91_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(377)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(377)),MMC_IMMEDIATE(MMC_TAGFIXNUM(125)),_OMC_LIT91_6}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#include "util/modelica.h"

#include "NBResolveSingularities_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringUnmatched(threadData_t *threadData, modelica_metatype _unmatched_vars, modelica_metatype _unmatched_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringUnmatched,2,0) {(void*) boxptr_NBResolveSingularities_toStringUnmatched,0}};
#define boxvar_NBResolveSingularities_toStringUnmatched MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringUnmatched)
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringDynamicSelect(threadData_t *threadData, modelica_metatype _dummy_states, modelica_metatype _unmatched_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringDynamicSelect,2,0) {(void*) boxptr_NBResolveSingularities_toStringDynamicSelect,0}};
#define boxvar_NBResolveSingularities_toStringDynamicSelect MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringDynamicSelect)
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringCandidatesConstraints(threadData_t *threadData, modelica_metatype _state_candidates, modelica_metatype _constraint_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringCandidatesConstraints,2,0) {(void*) boxptr_NBResolveSingularities_toStringCandidatesConstraints,0}};
#define boxvar_NBResolveSingularities_toStringCandidatesConstraints MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringCandidatesConstraints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _iter, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals,2,0) {(void*) boxptr_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals,0}};
#define boxvar_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivateEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivateEqn,2,0) {(void*) boxptr_NBResolveSingularities_removeSlicedDerivateEqn,0}};
#define boxvar_NBResolveSingularities_removeSlicedDerivateEqn MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivateEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivatives(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fderivative, modelica_metatype _slice_set, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivatives,2,0) {(void*) boxptr_NBResolveSingularities_removeSlicedDerivatives,0}};
#define boxvar_NBResolveSingularities_removeSlicedDerivatives MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivatives)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedUnmatched(threadData_t *threadData, modelica_metatype _old_unmatched, modelica_metatype _slice_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedUnmatched,2,0) {(void*) boxptr_NBResolveSingularities_resolveSlicedUnmatched,0}};
#define boxvar_NBResolveSingularities_resolveSlicedUnmatched MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedUnmatched)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_substituteSlicedDummyExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _subst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_substituteSlicedDummyExp,2,0) {(void*) boxptr_NBResolveSingularities_substituteSlicedDummyExp,0}};
#define boxvar_NBResolveSingularities_substituteSlicedDummyExp MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_substituteSlicedDummyExp)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_substituteSlicedDummyEqn(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _subst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_substituteSlicedDummyEqn,2,0) {(void*) boxptr_NBResolveSingularities_substituteSlicedDummyEqn,0}};
#define boxvar_NBResolveSingularities_substituteSlicedDummyEqn MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_substituteSlicedDummyEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedDummy(threadData_t *threadData, modelica_metatype _dummy, modelica_metatype _subst, modelica_metatype _aux_index, modelica_metatype _eq_index, modelica_metatype *out_alias_eqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedDummy,2,0) {(void*) boxptr_NBResolveSingularities_resolveSlicedDummy,0}};
#define boxvar_NBResolveSingularities_resolveSlicedDummy MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedDummy)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedCandidates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcandidates, modelica_metatype _subst, modelica_metatype _aux_index, modelica_metatype _eq_index, modelica_metatype *out_alias_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedCandidates,2,0) {(void*) boxptr_NBResolveSingularities_resolveSlicedCandidates,0}};
#define boxvar_NBResolveSingularities_resolveSlicedCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedCandidates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedDummyStates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdummy_5Fstates, modelica_metatype _states);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedDummyStates,2,0) {(void*) boxptr_NBResolveSingularities_resolveSlicedDummyStates,0}};
#define boxvar_NBResolveSingularities_resolveSlicedDummyStates MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedDummyStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_sortCandidates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcandidates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_sortCandidates,2,0) {(void*) boxptr_NBResolveSingularities_sortCandidates,0}};
#define boxvar_NBResolveSingularities_sortCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_sortCandidates)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBResolveSingularities_candidatePriority(threadData_t *threadData, modelica_metatype _candidate);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBResolveSingularities_candidatePriority(threadData_t *threadData, modelica_metatype _candidate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_candidatePriority,2,0) {(void*) boxptr_NBResolveSingularities_candidatePriority,0}};
#define boxvar_NBResolveSingularities_candidatePriority MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_candidatePriority)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_getStateCandidate_getStateCandidateVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getStateCandidate_getStateCandidateVar,2,0) {(void*) boxptr_NBResolveSingularities_getStateCandidate_getStateCandidateVar,0}};
#define boxvar_NBResolveSingularities_getStateCandidate_getStateCandidateVar MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getStateCandidate_getStateCandidateVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getStateCandidate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getStateCandidate,2,0) {(void*) boxptr_NBResolveSingularities_getStateCandidate,0}};
#define boxvar_NBResolveSingularities_getStateCandidate MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getStateCandidate)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getConstraintsAndCandidates(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _marked_eqns, modelica_metatype _mapping, modelica_metatype *out_states, modelica_metatype *out_sliced_constr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getConstraintsAndCandidates,2,0) {(void*) boxptr_NBResolveSingularities_getConstraintsAndCandidates,0}};
#define boxvar_NBResolveSingularities_getConstraintsAndCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getConstraintsAndCandidates)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_resolveClustering(threadData_t *threadData, modelica_metatype _color_clustering);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveClustering,2,0) {(void*) boxptr_NBResolveSingularities_resolveClustering,0}};
#define boxvar_NBResolveSingularities_resolveClustering MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveClustering)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_colorClustering(threadData_t *threadData, modelica_integer _old_color, modelica_integer _new_color, modelica_metatype _color_clustering);
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_colorClustering(threadData_t *threadData, modelica_metatype _old_color, modelica_metatype _new_color, modelica_metatype _color_clustering);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_colorClustering,2,0) {(void*) boxptr_NBResolveSingularities_colorClustering,0}};
#define boxvar_NBResolveSingularities_colorClustering MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_colorClustering)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_integer _var, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping);
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorVar,2,0) {(void*) boxptr_NBResolveSingularities_fillColorVar,0}};
#define boxvar_NBResolveSingularities_fillColorVar MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorVar)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_integer _eqn, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping);
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorEqn,2,0) {(void*) boxptr_NBResolveSingularities_fillColorEqn,0}};
#define boxvar_NBResolveSingularities_fillColorEqn MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getMSSS(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _excluded_eqns, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getMSSS,2,0) {(void*) boxptr_NBResolveSingularities_getMSSS,0}};
#define boxvar_NBResolveSingularities_getMSSS MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getMSSS)

static modelica_metatype closure0_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringUnmatched(threadData_t *threadData, modelica_metatype _unmatched_vars, modelica_metatype _unmatched_eqns)
{
  modelica_string _str = NULL;
  modelica_string _s1 = NULL;
  modelica_string _s2 = NULL;
  modelica_string _s3 = NULL;
  modelica_string _s4 = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_string tmp14;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_string tmp19;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s1 has no default value.
  // _s2 has no default value.
  // _s3 has no default value.
  // _s4 has no default value.
  if(listEmpty(_unmatched_vars))
  {
    omc_string_store(&(_s1), omc_StringUtil_headline__4(threadData, _OMC_LIT6));

    omc_string_store(&(_s3), _OMC_LIT5);
  }
  else
  {
    tmp1 = stringAppend(_OMC_LIT0,intString(listLength(_unmatched_vars)));
    tmp2 = stringAppend(tmp1,_OMC_LIT1);
    omc_string_store(&(_s1), tmp2);

    tmp3 = stringAppend(_OMC_LIT3,intString(listLength(_unmatched_vars)));
    tmp4 = stringAppend(tmp3,_OMC_LIT4);
    tmp5 = stringAppend(_OMC_LIT2,omc_StringUtil_headline__4(threadData, tmp4));
    tmp6 = stringAppend(tmp5,omc_NBSlice_lstToString(threadData, _unmatched_vars, boxvar_NBVariable_pointerToString, _OMC_LIT5, ((modelica_integer) 10)));
    tmp7 = stringAppend(tmp6,_OMC_LIT2);
    omc_string_store(&(_s3), tmp7);
  }

  if(listEmpty(_unmatched_eqns))
  {
    omc_string_store(&(_s2), omc_StringUtil_headline__4(threadData, _OMC_LIT9));

    omc_string_store(&(_s4), _OMC_LIT5);
  }
  else
  {
    tmp8 = stringAppend(_OMC_LIT0,intString(listLength(_unmatched_eqns)));
    tmp9 = stringAppend(tmp8,_OMC_LIT7);
    omc_string_store(&(_s2), tmp9);

    tmp10 = stringAppend(_OMC_LIT3,intString(listLength(_unmatched_eqns)));
    tmp11 = stringAppend(tmp10,_OMC_LIT8);
    tmp12 = stringAppend(_OMC_LIT2,omc_StringUtil_headline__4(threadData, tmp11));
    tmpMeta13 = omc_mk_box1(0, _OMC_LIT5);
    tmp14 = stringAppend(tmp12,omc_NBSlice_lstToString(threadData, _unmatched_eqns, (modelica_fnptr) omc_mk_box2(0,closure0_NBEquation_Equation_pointerToString,tmpMeta13), _OMC_LIT5, ((modelica_integer) 10)));
    tmp15 = stringAppend(tmp14,_OMC_LIT2);
    omc_string_store(&(_s4), tmp15);
  }

  tmp16 = stringAppend(_s1,_s2);
  tmp17 = stringAppend(tmp16,_s3);
  tmp18 = stringAppend(tmp17,_s4);
  tmp19 = stringAppend(tmp18,_OMC_LIT2);
  omc_string_store(&(_str), tmp19);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

static modelica_metatype closure1_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringDynamicSelect(threadData_t *threadData, modelica_metatype _dummy_states, modelica_metatype _unmatched_eqns)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmp1 = stringAppend(_OMC_LIT3,intString(listLength(_dummy_states)));
  tmp2 = stringAppend(tmp1,_OMC_LIT11);
  tmp3 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT10),omc_StringUtil_headline__4(threadData, tmp2));
  tmp4 = stringAppend(tmp3,omc_NBSlice_lstToString(threadData, _dummy_states, boxvar_NBVariable_pointerToString, _OMC_LIT5, ((modelica_integer) 10)));
  tmp5 = stringAppend(tmp4,_OMC_LIT2);
  tmp6 = stringAppend(_OMC_LIT3,intString(listLength(_unmatched_eqns)));
  tmp7 = stringAppend(tmp6,_OMC_LIT12);
  tmp8 = stringAppend(tmp5,omc_StringUtil_headline__4(threadData, tmp7));
  tmpMeta9 = omc_mk_box1(0, _OMC_LIT5);
  tmp10 = stringAppend(tmp8,omc_NBSlice_lstToString(threadData, _unmatched_eqns, (modelica_fnptr) omc_mk_box2(0,closure1_NBEquation_Equation_pointerToString,tmpMeta9), _OMC_LIT5, ((modelica_integer) 10)));
  tmp11 = stringAppend(tmp10,_OMC_LIT2);
  omc_string_store(&(_str), tmp11);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

static modelica_metatype closure2_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringCandidatesConstraints(threadData_t *threadData, modelica_metatype _state_candidates, modelica_metatype _constraint_eqns)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmp1 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT13),_OMC_LIT2);
  tmp2 = stringAppend(_OMC_LIT3,intString(listLength(_state_candidates)));
  tmp3 = stringAppend(tmp2,_OMC_LIT14);
  tmp4 = stringAppend(tmp1,omc_StringUtil_headline__4(threadData, tmp3));
  tmp5 = stringAppend(tmp4,omc_NBSlice_lstToString(threadData, _state_candidates, boxvar_NBVariable_pointerToString, _OMC_LIT5, ((modelica_integer) 10)));
  tmp6 = stringAppend(tmp5,_OMC_LIT2);
  tmp7 = stringAppend(_OMC_LIT3,intString(listLength(_constraint_eqns)));
  tmp8 = stringAppend(tmp7,_OMC_LIT15);
  tmp9 = stringAppend(tmp6,omc_StringUtil_headline__4(threadData, tmp8));
  tmpMeta10 = omc_mk_box1(0, _OMC_LIT5);
  tmp11 = stringAppend(tmp9,omc_NBSlice_lstToString(threadData, _constraint_eqns, (modelica_fnptr) omc_mk_box2(0,closure2_NBEquation_Equation_pointerToString,tmpMeta10), _OMC_LIT5, ((modelica_integer) 10)));
  tmp12 = stringAppend(tmp11,_OMC_LIT2);
  omc_string_store(&(_str), tmp12);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _iter, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _aux = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _aux has no default value.
  if(omc_NFExpression_isLiteral(threadData, _exp))
  {
    _aux = omc_NBFunctionAlias_Call__Aux_createName(threadData, omc_NFExpression_typeOf(threadData, _exp), _iter, _aux_index, _OMC_LIT16, 0 /* false */);

    tmpMeta1 = omc_mk_box3(9, &NFExpression_CREF__desc, omc_NFComponentRef_getSubscriptedType(threadData, _aux, 0 /* false */), _aux);
    _exp = tmpMeta1;

    omc_UnorderedSet_add(threadData, _aux, _dummy_slice_set);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivateEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index)
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
      modelica_metatype _lhs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lhs has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp10;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (OMC_BOX_FIELD(_eqn, 4));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar21;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar20 = omc_NBResolveSingularities_removeSlicedDerivateEqn(threadData, _b, (OMC_BOX_FIELD(_eqn, 3)), _dummy_slice_set, _aux_index);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar21;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_eqn), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = tmpMeta7;
          _eqn = tmpMeta6;
          tmpMeta1 = _eqn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,11,2) == 0) goto tmp3_end;
          
          _lhs = tmpMeta11;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp16;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (OMC_BOX_FIELD(_lhs, 3));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar23;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar22 = omc_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals(threadData, _e, _iter, _dummy_slice_set, _aux_index);
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar23;
          }
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_lhs), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = tmpMeta13;
          _lhs = tmpMeta12;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_eqn), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = _lhs;
          _eqn = tmpMeta17;
          tmpMeta1 = _eqn;
          goto tmp3_done;
        }
        case 2: {
          
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivatives(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fderivative, modelica_metatype _slice_set, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index)
{
  modelica_metatype _derivative = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _derivative = __omcQ_24in_5Fderivative;
  // _eqn has no default value.
  if((!omc_UnorderedSet_isEmpty(threadData, _slice_set)))
  {
    _eqn = omc_NBResolveSingularities_removeSlicedDerivateEqn(threadData, omc_Pointer_access(threadData, _derivative), _OMC_LIT17, _dummy_slice_set, _aux_index);

    omc_Pointer_update(threadData, _derivative, _eqn);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _derivative;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBResolveSingularities_resolveSlicedUnmatched_resolveSlicedUnmatchedSingle(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Facc, modelica_metatype _slice_map)
{
  modelica_metatype _acc = NULL;
  modelica_metatype _relevant_indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _acc = __omcQ_24in_5Facc;
  // _relevant_indices has no default value.
  _relevant_indices = omc_UnorderedMap_getSafe(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, _eq)), _slice_map, _OMC_LIT19);

  if(omc_UnorderedSet_isEmpty(threadData, _relevant_indices))
  {
    tmpMeta1 = mmc_mk_cons(_eq, _acc);
    _acc = tmpMeta1;
  }
  else
  {
    {
      modelica_metatype __omcQ_24tmpVar25;
      modelica_metatype* tmp4;
      modelica_metatype tmpMeta5;
      modelica_metatype __omcQ_24tmpVar24;
      modelica_integer tmp6;
      modelica_metatype _ind_loopVar = 0;
      modelica_metatype _ind;
      _ind_loopVar = (OMC_BOX_FIELD(_eq, 3));
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar25 = tmpMeta5; /* defaultValue */
      tmp4 = &__omcQ_24tmpVar25;
      while(1) {
        tmp6 = 1;
        while (!listEmpty(_ind_loopVar)) {
          _ind = MMC_CAR(_ind_loopVar);
          _ind_loopVar = MMC_CDR(_ind_loopVar);
          if (omc_UnorderedSet_contains(threadData, _ind, _relevant_indices)) {
            tmp6--;
            break;
          }
        }
        if (tmp6 == 0) {
          __omcQ_24tmpVar24 = _ind;
          *tmp4 = mmc_mk_cons(__omcQ_24tmpVar24,0);
          tmp4 = &MMC_CDR(*tmp4);
        } else if (tmp6 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp4 = mmc_mk_nil();
      tmpMeta3 = __omcQ_24tmpVar25;
    }
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(4));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = tmpMeta3;
    _eq = tmpMeta2;

    if((!listEmpty((OMC_BOX_FIELD(_eq, 3)))))
    {
      tmpMeta7 = mmc_mk_cons(_eq, _acc);
      _acc = tmpMeta7;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _acc;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedUnmatched(threadData_t *threadData, modelica_metatype _old_unmatched, modelica_metatype _slice_map)
{
  modelica_metatype _filtered_unmatched = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _filtered_unmatched = tmpMeta1;
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _old_unmatched; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      _filtered_unmatched = omc_NBResolveSingularities_resolveSlicedUnmatched_resolveSlicedUnmatchedSingle(threadData, _eq, _filtered_unmatched, _slice_map);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _filtered_unmatched;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_substituteSlicedDummyExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _subst)
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_UnorderedMap_contains(threadData, (OMC_BOX_FIELD(_exp, 3)), _subst)) goto tmp3_end;
          tmpMeta1 = omc_UnorderedMap_getSafe(threadData, (OMC_BOX_FIELD(_exp, 3)), _subst, _OMC_LIT20);
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

static modelica_metatype closure3_NBResolveSingularities_substituteSlicedDummyExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype subst = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBResolveSingularities_substituteSlicedDummyExp(thData, $in_exp, subst);
}
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_substituteSlicedDummyEqn(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _subst)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = omc_Pointer_access(threadData, _eqn_ptr);
  tmpMeta1 = omc_mk_box1(0, _subst);
  _eqn = omc_NBEquation_Equation_map(threadData, _eqn, (modelica_fnptr) omc_mk_box2(0,closure3_NBResolveSingularities_substituteSlicedDummyExp,tmpMeta1), mmc_mk_none(), boxvar_NFExpression_map);

  omc_Pointer_update(threadData, _eqn_ptr, _eqn);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedDummy(threadData_t *threadData, modelica_metatype _dummy, modelica_metatype _subst, modelica_metatype _aux_index, modelica_metatype _eq_index, modelica_metatype *out_alias_eqn)
{
  modelica_metatype _alias_var = NULL;
  modelica_metatype _alias_eqn = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _orig_cref = NULL;
  modelica_metatype _elem_ty = NULL;
  modelica_metatype _sizes = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _n;
  modelica_metatype _alias_ty = NULL;
  modelica_metatype _alias_cref = NULL;
  modelica_metatype _elem_cref = NULL;
  modelica_metatype _alias_elem_cref = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _loc = NULL;
  modelica_metatype _subs = NULL;
  modelica_integer _i;
  modelica_metatype _rhs = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_boolean tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_boolean tmp21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _alias_var has no default value.
  // _alias_eqn has no default value.
  _var = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _dummy));
  _orig_cref = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _dummy));
  _elem_ty = omc_NFType_arrayElementType(threadData, omc_NFVariable_typeOf(threadData, _var));
  {
    modelica_metatype __omcQ_24tmpVar27;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar26;
    modelica_integer tmp4;
    modelica_metatype _d_loopVar = 0;
    modelica_metatype _d;
    _d_loopVar = omc_NFType_arrayDims(threadData, omc_NFVariable_typeOf(threadData, _var));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar27 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar27;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_d_loopVar)) {
        _d = MMC_CAR(_d_loopVar);
        _d_loopVar = MMC_CDR(_d_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar26 = omc_mk_integer(omc_NFDimension_size(threadData, _d, 0 /* false */));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar26,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar27;
  }
  _sizes = tmpMeta1;
  _n = listLength((OMC_BOX_FIELD(_dummy, 3)));
  // _alias_ty has no default value.
  // _alias_cref has no default value.
  // _elem_cref has no default value.
  // _alias_elem_cref has no default value.
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _elems = tmpMeta5;
  // _loc has no default value.
  // _subs has no default value.
  _i = ((modelica_integer) 1);
  // _rhs has no default value.
  tmp8 = (modelica_boolean)(_n == ((modelica_integer) 1));
  if(tmp8)
  {
    tmpMeta9 = _elem_ty;
  }
  else
  {
    tmpMeta6 = mmc_mk_cons(omc_NFDimension_fromInteger(threadData, _n, 1), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta7 = omc_mk_box3(10, &NFType_ARRAY__desc, _elem_ty, tmpMeta6);
    tmpMeta9 = tmpMeta7;
  }
  _alias_ty = tmpMeta9;

  _alias_var = omc_NBVariable_makeAuxVar(threadData, _OMC_LIT21, omc_unbox_integer(omc_Pointer_access(threadData, _aux_index)), _alias_ty, 0 /* false */ ,&_alias_cref);

  omc_Pointer_update(threadData, _aux_index, omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(omc_Pointer_access(threadData, _aux_index)))));

  {
    modelica_metatype _idx;
    for (tmpMeta10 = (OMC_BOX_FIELD(_dummy, 3)); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _idx = MMC_CAR(tmpMeta10);
      _loc = omc_NBSlice_indexToLocation(threadData, omc_unbox_integer(_idx), _sizes);

      {
        modelica_metatype __omcQ_24tmpVar29;
        modelica_metatype* tmp12;
        modelica_metatype tmpMeta13;
        modelica_metatype tmpMeta14;
        modelica_metatype tmpMeta15;
        modelica_metatype __omcQ_24tmpVar28;
        modelica_integer tmp16;
        modelica_metatype _l_loopVar = 0;
        modelica_metatype _l;
        _l_loopVar = _loc;
        tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar29 = tmpMeta13; /* defaultValue */
        tmp12 = &__omcQ_24tmpVar29;
        while(1) {
          tmp16 = 1;
          if (!listEmpty(_l_loopVar)) {
            _l = MMC_CAR(_l_loopVar);
            _l_loopVar = MMC_CDR(_l_loopVar);
            tmp16--;
          }
          if (tmp16 == 0) {
            tmpMeta14 = omc_mk_box2(3, &NFExpression_INTEGER__desc, omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(_l))));
            tmpMeta15 = omc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta14);
            __omcQ_24tmpVar28 = tmpMeta15;
            *tmp12 = mmc_mk_cons(__omcQ_24tmpVar28,0);
            tmp12 = &MMC_CDR(*tmp12);
          } else if (tmp16 == 1) {
            break;
          } else {
            OMC_THROW_INTERNAL();
          }
        }
        *tmp12 = mmc_mk_nil();
        tmpMeta11 = __omcQ_24tmpVar29;
      }
      _subs = tmpMeta11;

      _elem_cref = omc_NFComponentRef_setSubscripts(threadData, _subs, _orig_cref);

      tmpMeta17 = mmc_mk_cons(omc_NFExpression_fromCref(threadData, _elem_cref, 0 /* false */), _elems);
      _elems = tmpMeta17;

      tmp21 = (modelica_boolean)(_n == ((modelica_integer) 1));
      if(tmp21)
      {
        tmpMeta22 = _alias_cref;
      }
      else
      {
        tmpMeta19 = omc_mk_box2(3, &NFExpression_INTEGER__desc, omc_mk_integer(_i));
        tmpMeta20 = omc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta19);
        tmpMeta18 = mmc_mk_cons(tmpMeta20, MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta22 = omc_NFComponentRef_setSubscripts(threadData, tmpMeta18, _alias_cref);
      }
      _alias_elem_cref = tmpMeta22;

      omc_UnorderedMap_add(threadData, _elem_cref, omc_NFExpression_fromCref(threadData, _alias_elem_cref, 0 /* false */), _subst);

      _i = ((modelica_integer) 1) + _i;
    }
  }

  _elems = listReverse(_elems);

  _rhs = ((_n == ((modelica_integer) 1))?listHead(_elems):omc_NFExpression_makeArray(threadData, _alias_ty, listArray(_elems), 0 /* false */));

  _alias_eqn = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _alias_cref, 0 /* false */), _rhs, _eq_index, _OMC_LIT22, _OMC_LIT17, omc_NBEquation_default(threadData, 1, 0 /* false */, mmc_mk_none(), mmc_mk_none()));
  _return: OMC_LABEL_UNUSED
  if (out_alias_eqn) { *out_alias_eqn = _alias_eqn; }
  omc_ret_ = _alias_var;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedCandidates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcandidates, modelica_metatype _subst, modelica_metatype _aux_index, modelica_metatype _eq_index, modelica_metatype *out_alias_eqns)
{
  modelica_metatype _candidates = NULL;
  modelica_metatype _alias_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _resolved = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _alias_var = NULL;
  modelica_metatype _alias_eqn = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _candidates = __omcQ_24in_5Fcandidates;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _alias_eqns = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _resolved = tmpMeta2;
  // _alias_var has no default value.
  // _alias_eqn has no default value.
  {
    modelica_metatype _cand;
    for (tmpMeta3 = _candidates; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _cand = MMC_CAR(tmpMeta3);
      if(listEmpty((OMC_BOX_FIELD(_cand, 3))))
      {
        tmpMeta4 = mmc_mk_cons(_cand, _resolved);
        _resolved = tmpMeta4;
      }
      else
      {
        _alias_var = omc_NBResolveSingularities_resolveSlicedDummy(threadData, _cand, _subst, _aux_index, _eq_index ,&_alias_eqn);

        tmpMeta5 = mmc_mk_cons(_alias_eqn, _alias_eqns);
        _alias_eqns = tmpMeta5;

        tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta8 = omc_mk_box3(3, &NBSlice_SLICE__desc, _alias_var, tmpMeta7);
        tmpMeta6 = mmc_mk_cons(tmpMeta8, _resolved);
        _resolved = tmpMeta6;
      }
    }
  }

  _candidates = listReverse(_resolved);
  _return: OMC_LABEL_UNUSED
  if (out_alias_eqns) { *out_alias_eqns = _alias_eqns; }
  omc_ret_ = _candidates;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedDummyStates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdummy_5Fstates, modelica_metatype _states)
{
  modelica_metatype _dummy_states = NULL;
  modelica_metatype _covered = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _cover_set = NULL;
  modelica_integer _full_size;
  modelica_metatype _resolved = NULL;
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
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_string tmp15;
  modelica_string tmp16;
  modelica_string tmp17;
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dummy_states = __omcQ_24in_5Fdummy_5Fstates;
  _covered = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  // _cref has no default value.
  // _cover_set has no default value.
  // _full_size has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _resolved = tmpMeta1;
  {
    modelica_metatype _cand;
    for (tmpMeta2 = listAppend(_states, _dummy_states); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _cand = MMC_CAR(tmpMeta2);
      if((!listEmpty((OMC_BOX_FIELD(_cand, 3)))))
      {
        _cref = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _cand));

        if(omc_UnorderedMap_contains(threadData, _cref, _covered))
        {
          _cover_set = omc_UnorderedMap_getSafe(threadData, _cref, _covered, _OMC_LIT23);

          {
            modelica_metatype _idx;
            for (tmpMeta3 = (OMC_BOX_FIELD(_cand, 3)); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
            {
              _idx = MMC_CAR(tmpMeta3);
              omc_UnorderedSet_add(threadData, _idx, _cover_set);
            }
          }
        }
        else
        {
          omc_UnorderedMap_add(threadData, _cref, omc_UnorderedSet_fromList(threadData, (OMC_BOX_FIELD(_cand, 3)), boxvar_Util_id, boxvar_intEq), _covered);
        }
      }
    }
  }

  {
    modelica_metatype _dummy;
    for (tmpMeta6 = _dummy_states; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _dummy = MMC_CAR(tmpMeta6);
      if(listEmpty((OMC_BOX_FIELD(_dummy, 3))))
      {
        tmpMeta7 = mmc_mk_cons(_dummy, _resolved);
        _resolved = tmpMeta7;
      }
      else
      {
        _cref = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _dummy));

        _cover_set = omc_UnorderedMap_getSafe(threadData, _cref, _covered, _OMC_LIT24);

        _full_size = omc_NBVariable_size(threadData, omc_NBSlice_getT(threadData, _dummy), 0 /* false */);

        if((omc_UnorderedSet_size(threadData, _cover_set) == _full_size))
        {
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = omc_mk_box3(3, &NBSlice_SLICE__desc, omc_NBSlice_getT(threadData, _dummy), tmpMeta9);
          tmpMeta8 = mmc_mk_cons(tmpMeta10, _resolved);
          _resolved = tmpMeta8;
        }
        else
        {
          tmp12 = stringAppend(_OMC_LIT29,omc_NFComponentRef_toString(threadData, _cref));
          tmp13 = stringAppend(tmp12,_OMC_LIT30);
          tmp14 = stringAppend(tmp13,intString(omc_UnorderedSet_size(threadData, _cover_set)));
          tmp15 = stringAppend(tmp14,_OMC_LIT31);
          tmp16 = stringAppend(tmp15,intString(_full_size));
          tmp17 = stringAppend(tmp16,_OMC_LIT32);
          tmp18 = stringAppend(tmp17,omc_NBSlice_toString(threadData, _dummy, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)));
          tmpMeta11 = mmc_mk_cons(tmp18, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT28, tmpMeta11);

          OMC_THROW_INTERNAL();
        }
      }
    }
  }

  _dummy_states = listReverse(_resolved);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _dummy_states;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_sortCandidates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcandidates)
{
  modelica_metatype _candidates = NULL;
  modelica_metatype _priorities = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _candidates = __omcQ_24in_5Fcandidates;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _priorities = tmpMeta1;
  {
    modelica_metatype _candidate;
    for (tmpMeta2 = _candidates; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _candidate = MMC_CAR(tmpMeta2);
      tmpMeta4 = omc_mk_box2(0, omc_mk_integer(omc_NBResolveSingularities_candidatePriority(threadData, _candidate)), _candidate);
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _priorities);
      _priorities = tmpMeta3;
    }
  }

  _priorities = omc_List_sort(threadData, _priorities, boxvar_NBBackendUtil_indexTplGt);

  _candidates = omc_List_unzipSecond(threadData, _priorities);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _candidates;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBResolveSingularities_candidatePriority(threadData_t *threadData, modelica_metatype _candidate)
{
  modelica_integer _prio;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Pointer_access(threadData, _candidate);
    {
      modelica_metatype _attributes = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _attributes has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 3);
          
          _attributes = tmpMeta7;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_integer tmp11_1;
            tmp11_1 = omc_NFBackendExtension_VariableAttributes_getStateSelect(threadData, _attributes);
            {
              int tmp11;
              {
                switch (MMC_SWITCH_CAST(tmp11_1)) {
                case 1: {
                  if (1 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) -200);
                  goto tmp10_done;
                }
                case 2: {
                  if (2 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) -100);
                  goto tmp10_done;
                }
                case 3: {
                  if (3 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) 0);
                  goto tmp10_done;
                }
                case 4: {
                  if (4 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) 100);
                  goto tmp10_done;
                }
                case 5: {
                  if (5 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) 200);
                  goto tmp10_done;
                }
                default:
                tmp10_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) 0);
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
          }tmp1 = tmp8;
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
  _prio = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _prio;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBResolveSingularities_candidatePriority(threadData_t *threadData, modelica_metatype _candidate)
{
  modelica_integer _prio;
  modelica_metatype out_prio;
  _prio = omc_NBResolveSingularities_candidatePriority(threadData, _candidate);
  out_prio = omc_mk_icon(_prio);
  return out_prio;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_getStateCandidate_getStateCandidateVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _acc)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((omc_NBVariable_isContinuous(threadData, _var, 0 /* false */) && (!(((omc_NBVariable_isTime(threadData, _var) || omc_NBVariable_isDummyVariable(threadData, _var)) || omc_NBVariable_isDummyState(threadData, _var)) || (omc_NBVariable_isForcedState(threadData, _var) && (!omc_NBVariable_isStateSelect(threadData, _var, 4)))))))
  {
    omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _var), _acc);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getStateCandidate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _acc)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  // _var has no default value.
  _var = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT33);

  if(omc_NBVariable_isRecord(threadData, _var))
  {
    {
      modelica_metatype _child;
      for (tmpMeta1 = omc_NBVariable_getRecordChildrenCells(threadData, _var); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _child = MMC_CAR(tmpMeta1);
        omc_NBResolveSingularities_getStateCandidate_getStateCandidateVar(threadData, omc_PointerWeak_upgrade(threadData, _child), _acc);
      }
    }
  }
  else
  {
    omc_NBResolveSingularities_getStateCandidate_getStateCandidateVar(threadData, _var, _acc);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cref;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getConstraintsAndCandidates(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _marked_eqns, modelica_metatype _mapping, modelica_metatype *out_states, modelica_metatype *out_sliced_constr)
{
  modelica_metatype _constr = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype _sliced_constr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _eqn_indices = NULL;
  modelica_metatype _eqn_slices = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _state_candidates = NULL;
  modelica_metatype _eqn_ptr = NULL;
  modelica_metatype _var_ptr = NULL;
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
  _constr = omc_NBEquation_EquationPointers_empty(threadData, ((modelica_integer) 4013));
  _states = omc_NBVariable_VariablePointers_empty(threadData, ((modelica_integer) 4013), 0 /* false */);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sliced_constr = tmpMeta1;
  _eqn_indices = omc_UnorderedSet_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 13));
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqn_slices = arrayCreate(omc_NBEquation_EquationPointers_size(threadData, _equations), tmpMeta2);
  _state_candidates = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  // _eqn_ptr has no default value.
  // _var_ptr has no default value.
  {
    modelica_metatype _eqn;
    for (tmpMeta3 = _marked_eqns; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eqn = MMC_CAR(tmpMeta3);
      omc_UnorderedSet_add(threadData, arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(_eqn)) /* DAE.ASUB */, _eqn_indices);

      tmpMeta4 = mmc_mk_cons(_eqn, arrayGet(_eqn_slices,omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(_eqn)) /* DAE.ASUB */)) /* DAE.ASUB */);
      arrayUpdate(_eqn_slices,omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(_eqn)) /* DAE.ASUB */),tmpMeta4);
    }
  }

  {
    modelica_metatype _eqn;
    for (tmpMeta6 = omc_UnorderedSet_toList(threadData, _eqn_indices); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _eqn = MMC_CAR(tmpMeta6);
      _eqn_ptr = omc_NBEquation_EquationPointers_getEqnAt(threadData, _equations, omc_unbox_integer(_eqn));

      _constr = omc_NBEquation_EquationPointers_add(threadData, _eqn_ptr, _constr);

      tmpMeta8 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, arrayGet(_eqn_slices,omc_unbox_integer(_eqn)) /* DAE.ASUB */);
      tmpMeta7 = mmc_mk_cons(tmpMeta8, _sliced_constr);
      _sliced_constr = tmpMeta7;

      {
        modelica_metatype _candidate;
        for (tmpMeta9 = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, _eqn_ptr), boxvar_NBResolveSingularities_getStateCandidate, boxvar_NFExpression_map); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
        {
          _candidate = MMC_CAR(tmpMeta9);
          omc_UnorderedSet_add(threadData, _candidate, _state_candidates);
        }
      }
    }
  }

  {
    modelica_metatype _candidate;
    for (tmpMeta12 = omc_UnorderedSet_toList(threadData, _state_candidates); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _candidate = MMC_CAR(tmpMeta12);
      _var_ptr = omc_NBVariable_getVarPointer(threadData, _candidate, _OMC_LIT34);

      _states = omc_NBVariable_VariablePointers_add(threadData, _var_ptr, _states);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_states) { *out_states = _states; }
  if (out_sliced_constr) { *out_sliced_constr = _sliced_constr; }
  omc_ret_ = _constr;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_resolveClustering(threadData_t *threadData, modelica_metatype _color_clustering)
{
  modelica_integer _color;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _color has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_color_clustering);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {

      _color = _i;

      while(1)
      {
        if(!(omc_unbox_integer(arrayGet(_color_clustering,_color) /* DAE.ASUB */) != _color)) break;
        _color = omc_unbox_integer(arrayGet(_color_clustering,_color) /* DAE.ASUB */);
      }

      arrayUpdate(_color_clustering, _i, omc_mk_integer(_color));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_colorClustering(threadData_t *threadData, modelica_integer _old_color, modelica_integer _new_color, modelica_metatype _color_clustering)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((omc_unbox_integer(arrayGet(_color_clustering,_old_color) /* DAE.ASUB */) != _old_color))
  {
    omc_NBResolveSingularities_colorClustering(threadData, omc_unbox_integer(arrayGet(_color_clustering,_old_color) /* DAE.ASUB */), _new_color, _color_clustering);
  }

  arrayUpdate(_color_clustering, _old_color, omc_mk_integer(_new_color));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_colorClustering(threadData_t *threadData, modelica_metatype _old_color, modelica_metatype _new_color, modelica_metatype _color_clustering)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = omc_unbox_integer(_old_color);
  tmp2 = omc_unbox_integer(_new_color);
  omc_NBResolveSingularities_colorClustering(threadData, tmp1, tmp2, _color_clustering);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_integer _var, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping)
{
  modelica_integer _eqn;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_matching, 2)),_var) /* DAE.ASUB */);
  if((omc_unbox_integer(arrayGet(_var_coloring,_var) /* DAE.ASUB */) == ((modelica_integer) -1)))
  {
    arrayUpdate(_var_coloring, _var, omc_mk_integer(_color));

    if((_eqn != ((modelica_integer) -1)))
    {
      if((omc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        omc_NBResolveSingularities_fillColorEqn(threadData, _eqn, _color, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
      }
    }
  }
  else
  {
    omc_NBResolveSingularities_colorClustering(threadData, omc_unbox_integer(arrayGet(_var_coloring,_var) /* DAE.ASUB */), _color, _color_clustering);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = omc_unbox_integer(_var);
  tmp2 = omc_unbox_integer(_color);
  omc_NBResolveSingularities_fillColorVar(threadData, tmp1, tmp2, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_integer _eqn, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping)
{
  modelica_metatype _data = NULL;
  modelica_integer _first;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _data = omc_NBAdjacency_IntMatrix_entries(threadData, _m);
  _first = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 2)),_eqn) /* DAE.ASUB */);
  arrayUpdate(_eqn_coloring, _eqn, omc_mk_integer(_color));

  tmp1 = _first; tmp2 = 1; tmp3 = ((modelica_integer) -1) + (_first + (omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_m, 3)),_eqn) /* DAE.ASUB */)));
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _k;
    for(_k = _first; in_range_integer(_k, tmp1, tmp3); _k += tmp2)
    {

      omc_NBResolveSingularities_fillColorVar(threadData, omc_unbox_integer(arrayGet(_data,_k) /* DAE.ASUB */), _color, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = omc_unbox_integer(_eqn);
  tmp2 = omc_unbox_integer(_color);
  omc_NBResolveSingularities_fillColorEqn(threadData, tmp1, tmp2, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getMSSS(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _excluded_eqns, modelica_metatype _mapping)
{
  modelica_metatype _msss = NULL;
  modelica_metatype _eqn_candidates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _color_clustering = NULL;
  modelica_metatype _eqn_coloring = NULL;
  modelica_metatype _var_coloring = NULL;
  modelica_integer _color;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _msss has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqn_candidates = tmpMeta1;
  // _color_clustering has no default value.
  _eqn_coloring = arrayCreate(omc_NBAdjacency_IntMatrix_rows(threadData, _m), omc_mk_integer(((modelica_integer) -1)));
  _var_coloring = arrayCreate(omc_NBAdjacency_IntMatrix_rows(threadData, _mT), omc_mk_integer(((modelica_integer) -1)));
  _color = ((modelica_integer) 0);
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength((OMC_BOX_FIELD(_matching, 3)));
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _eqn;
    for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp3, tmp5); _eqn += tmp4)
    {

      if((omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_matching, 3)),_eqn) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        tmpMeta2 = mmc_mk_cons(omc_mk_integer(_eqn), _eqn_candidates);
        _eqn_candidates = tmpMeta2;
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp7;
    modelica_metatype tmpMeta8;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp9;
    modelica_integer tmp10;
    modelica_integer tmp11;
    modelica_integer _i;
    tmp10 = 1 /* Range step-value */;
    tmp11 = listLength(_eqn_candidates) /* Range stop-value */;
    _i = ((modelica_integer) 1) /* Range start-value */;
    _i = (((modelica_integer) 1) /* Range start-value */)-tmp10;
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta8; /* defaultValue */
    tmp7 = &__omcQ_24tmpVar31;
    while(1) {
      tmp9 = 1;
      if (tmp10 > 0 ? _i+tmp10 <= tmp11 : _i+tmp10 >= tmp11) {
        _i += tmp10;
        tmp9--;
      }
      if (tmp9 == 0) {
        __omcQ_24tmpVar30 = omc_mk_integer(_i);
        *tmp7 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp7 = &MMC_CDR(*tmp7);
      } else if (tmp9 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp7 = mmc_mk_nil();
    tmpMeta6 = __omcQ_24tmpVar31;
  }
  _color_clustering = listArray(tmpMeta6);

  {
    modelica_metatype _eqn;
    for (tmpMeta12 = _eqn_candidates; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _eqn = MMC_CAR(tmpMeta12);
      if((omc_unbox_integer(arrayGet(_eqn_coloring,omc_unbox_integer(_eqn)) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        _color = ((modelica_integer) 1) + _color;

        omc_NBResolveSingularities_fillColorEqn(threadData, omc_unbox_integer(_eqn), _color, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
      }
    }
  }

  omc_NBResolveSingularities_resolveClustering(threadData, _color_clustering);

  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  _msss = arrayCreate(_color, tmpMeta14);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = arrayLength(_eqn_coloring);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer _eqn;
    for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp16, tmp18); _eqn += tmp17)
    {

      if(((omc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */) != ((modelica_integer) -1)) && (!omc_unbox_boolean(arrayGet(_excluded_eqns,omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 2)),_eqn) /* DAE.ASUB */)) /* DAE.ASUB */))))
      {
        _color = omc_unbox_integer(arrayGet(_color_clustering,omc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */)) /* DAE.ASUB */);

        tmpMeta15 = mmc_mk_cons(omc_mk_integer(_eqn), arrayGet(_msss,_color) /* DAE.ASUB */);
        arrayUpdate(_msss,_color,tmpMeta15);
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar33;
    modelica_metatype* tmp20;
    modelica_metatype tmpMeta21;
    modelica_metatype __omcQ_24tmpVar32;
    modelica_integer tmp22;
    modelica_metatype _ms_loopVar = 0;
    modelica_metatype _ms;
    _ms_loopVar = arrayList(_msss);
    tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar33 = tmpMeta21; /* defaultValue */
    tmp20 = &__omcQ_24tmpVar33;
    while(1) {
      tmp22 = 1;
      while (!listEmpty(_ms_loopVar)) {
        _ms = MMC_CAR(_ms_loopVar);
        _ms_loopVar = MMC_CDR(_ms_loopVar);
        if ((!listEmpty(_ms))) {
          tmp22--;
          break;
        }
      }
      if (tmp22 == 0) {
        __omcQ_24tmpVar32 = _ms;
        *tmp20 = mmc_mk_cons(__omcQ_24tmpVar32,0);
        tmp20 = &MMC_CDR(*tmp20);
      } else if (tmp22 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp20 = mmc_mk_nil();
    tmpMeta19 = __omcQ_24tmpVar33;
  }
  _msss = listArray(tmpMeta19);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _msss;
  return omc_ret_;
}

static modelica_metatype closure4_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure5_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure6_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLModelDirection
modelica_metatype omc_NBResolveSingularities_balanceInitialization(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_integer _kind, modelica_metatype _funcMap, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype *out_full, modelica_metatype *out_variables, modelica_metatype *out_equations, modelica_metatype *out_varData, modelica_metatype *out_eqData, modelica_boolean *out_changed)
{
  modelica_metatype _adj = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _variables = NULL;
  modelica_metatype _equations = NULL;
  modelica_metatype _varData = NULL;
  modelica_metatype _eqData = NULL;
  modelica_boolean _changed;
  modelica_metatype _unmatched_vars = NULL;
  modelica_metatype _unmatched_eqns = NULL;
  modelica_metatype _start_vars = NULL;
  modelica_metatype _failed_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sliced_eqns = NULL;
  modelica_metatype _start_eqns = NULL;
  modelica_metatype _kept_eqns = NULL;
  modelica_metatype _remaining = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _ptr_start_vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _ptr_start_eqns = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _idx = NULL;
  modelica_string _error_msg = NULL;
  modelica_metatype _vo = NULL;
  modelica_metatype _vn = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype _en = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta27;
  modelica_string tmp28;
  modelica_string tmp29;
  modelica_string tmp30;
  modelica_string tmp31;
  modelica_string tmp32;
  modelica_string tmp33;
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
  modelica_string tmp45;
  modelica_metatype tmpMeta46;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _adj = __omcQ_24in_5Fadj;
  _full = __omcQ_24in_5Ffull;
  _variables = __omcQ_24in_5Fvariables;
  _equations = __omcQ_24in_5Fequations;
  _varData = __omcQ_24in_5FvarData;
  _eqData = __omcQ_24in_5FeqData;
  // _changed has no default value.
  // _unmatched_vars has no default value.
  // _unmatched_eqns has no default value.
  // _start_vars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _failed_vars = tmpMeta1;
  // _sliced_eqns has no default value.
  // _start_eqns has no default value.
  // _kept_eqns has no default value.
  // _remaining has no default value.
  // _var_ptr has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_vars = omc_Pointer_create(threadData, tmpMeta2);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_eqns = omc_Pointer_create(threadData, tmpMeta3);
  // _idx has no default value.
  // _error_msg has no default value.
  // _vo has no default value.
  // _vn has no default value.
  // _eo has no default value.
  // _en has no default value.
  omc_NBMatching_getMatches(threadData, _matching, _mapping_opt, _variables, _equations ,&_unmatched_vars ,NULL ,&_unmatched_eqns);

  if(omc_Flags_isSet(threadData, _OMC_LIT37))
  {
    fputs(omc_string_data(omc_NBResolveSingularities_toStringUnmatched(threadData, _unmatched_vars, _unmatched_eqns)),stdout);
  }

  if((!(listEmpty(_unmatched_vars) && listEmpty(_unmatched_eqns))))
  {
    _changed = 1 /* true */;

    if((!listEmpty(_unmatched_eqns)))
    {
      tmpMeta5 = omc_mk_box1(0, _OMC_LIT5);
      tmp6 = stringAppend(_OMC_LIT41,omc_NBSlice_lstToString(threadData, _unmatched_eqns, (modelica_fnptr) omc_mk_box2(0,closure4_NBEquation_Equation_pointerToString,tmpMeta5), _OMC_LIT5, ((modelica_integer) 10)));
      tmpMeta4 = mmc_mk_cons(tmp6, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT40, tmpMeta4);

      _eo = omc_UnorderedMap_copy(threadData, (OMC_BOX_FIELD(_equations, 2)));

      {
        modelica_metatype __omcQ_24tmpVar35;
        modelica_metatype* tmp8;
        modelica_metatype tmpMeta9;
        modelica_metatype __omcQ_24tmpVar34;
        modelica_integer tmp10;
        modelica_metatype _eqn_loopVar = 0;
        modelica_metatype _eqn;
        _eqn_loopVar = _unmatched_eqns;
        tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar35 = tmpMeta9; /* defaultValue */
        tmp8 = &__omcQ_24tmpVar35;
        while(1) {
          tmp10 = 1;
          if (!listEmpty(_eqn_loopVar)) {
            _eqn = MMC_CAR(_eqn_loopVar);
            _eqn_loopVar = MMC_CDR(_eqn_loopVar);
            tmp10--;
          }
          if (tmp10 == 0) {
            __omcQ_24tmpVar34 = omc_NBSlice_getT(threadData, _eqn);
            *tmp8 = mmc_mk_cons(__omcQ_24tmpVar34,0);
            tmp8 = &MMC_CDR(*tmp8);
          } else if (tmp10 == 1) {
            break;
          } else {
            OMC_THROW_INTERNAL();
          }
        }
        *tmp8 = mmc_mk_nil();
        tmpMeta7 = __omcQ_24tmpVar35;
      }
      _sliced_eqns = tmpMeta7;

      _equations = omc_NBEquation_EquationPointers_removeList(threadData, _sliced_eqns, _equations);

      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      _kept_eqns = tmpMeta11;

      {
        modelica_metatype _eqn_slice;
        for (tmpMeta12 = _unmatched_eqns; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
        {
          _eqn_slice = MMC_CAR(tmpMeta12);
          if(((!listEmpty((OMC_BOX_FIELD(_eqn_slice, 3)))) && omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, _eqn_slice))))
          {
            {
              modelica_metatype __omcQ_24tmpVar37;
              modelica_metatype* tmp14;
              modelica_metatype tmpMeta15;
              modelica_metatype __omcQ_24tmpVar36;
              modelica_integer tmp16;
              modelica_integer tmp17;
              modelica_integer tmp18;
              modelica_integer _i;
              tmp17 = 1 /* Range step-value */;
              tmp18 = ((modelica_integer) -1) + omc_NBEquation_Equation_size(threadData, omc_NBSlice_getT(threadData, _eqn_slice), 0 /* false */) /* Range stop-value */;
              _i = ((modelica_integer) 0) /* Range start-value */;
              _i = (((modelica_integer) 0) /* Range start-value */)-tmp17;
              tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar37 = tmpMeta15; /* defaultValue */
              tmp14 = &__omcQ_24tmpVar37;
              while(1) {
                tmp16 = 1;
                while (tmp17 > 0 ? _i+tmp17 <= tmp18 : _i+tmp17 >= tmp18) {
                  _i += tmp17;
                  if ((!omc_List_contains(threadData, (OMC_BOX_FIELD(_eqn_slice, 3)), omc_mk_integer(_i), boxvar_intEq))) {
                    tmp16--;
                    break;
                  }
                }
                if (tmp16 == 0) {
                  __omcQ_24tmpVar36 = omc_mk_integer(_i);
                  *tmp14 = mmc_mk_cons(__omcQ_24tmpVar36,0);
                  tmp14 = &MMC_CDR(*tmp14);
                } else if (tmp16 == 1) {
                  break;
                } else {
                  OMC_THROW_INTERNAL();
                }
              }
              *tmp14 = mmc_mk_nil();
              tmpMeta13 = __omcQ_24tmpVar37;
            }
            _remaining = tmpMeta13;

            _sliced_eqns = omc_NBEquation_Equation_slice(threadData, omc_NBSlice_getT(threadData, _eqn_slice), _remaining, NULL);

            _kept_eqns = listAppend(_sliced_eqns, _kept_eqns);
          }
        }
      }

      if(listEmpty(_kept_eqns))
      {
        _adj = omc_NBAdjacency_Matrix_compress(threadData, _adj, _full, _equations, _variables, _eo ,&_full);
      }
      else
      {
        _equations = omc_NBEquation_EquationPointers_addList(threadData, _kept_eqns, _equations);

        _full = omc_NBAdjacency_Matrix_createFull(threadData, _variables, _equations, (modelica_integer)_kind);

        _adj = omc_NBAdjacency_Matrix_fullToFinal(threadData, _full, (OMC_BOX_FIELD(_variables, 2)), (OMC_BOX_FIELD(_equations, 2)), _equations, 2, _OMC_LIT17);
      }
    }

    _idx = omc_NBEquation_EqData_getUniqueIndex(threadData, _eqData);

    {
      modelica_metatype _var;
      for (tmpMeta20 = _unmatched_vars; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
      {
        _var = MMC_CAR(tmpMeta20);
        _var_ptr = omc_NBSlice_getT(threadData, _var);

        if(omc_NBVariable_isFixable(threadData, _var_ptr))
        {
          omc_NBInitialization_createStartEquationSlice(threadData, _var, _ptr_start_vars, _ptr_start_eqns, _idx, 1 /* true */);
        }
        else
        {
          tmpMeta21 = mmc_mk_cons(_var_ptr, _failed_vars);
          _failed_vars = tmpMeta21;
        }
      }
    }

    if(listEmpty(_failed_vars))
    {
      _start_vars = omc_Pointer_access(threadData, _ptr_start_vars);

      _start_eqns = omc_Pointer_access(threadData, _ptr_start_eqns);

      _vo = (OMC_BOX_FIELD(_variables, 2));

      _eo = omc_UnorderedMap_copy(threadData, (OMC_BOX_FIELD(_equations, 2)));

      _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _start_vars, 7);

      _eqData = omc_NBEquation_EqData_addTypedList(threadData, _eqData, _start_eqns, 4, 1 /* true */);

      _equations = omc_NBEquation_EquationPointers_addList(threadData, _start_eqns, _equations);

      _vn = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

      {
        modelica_metatype __omcQ_24tmpVar39;
        modelica_metatype* tmp24;
        modelica_metatype tmpMeta25;
        modelica_metatype __omcQ_24tmpVar38;
        modelica_integer tmp26;
        modelica_metatype _eqn_loopVar = 0;
        modelica_metatype _eqn;
        _eqn_loopVar = _start_eqns;
        tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar39 = tmpMeta25; /* defaultValue */
        tmp24 = &__omcQ_24tmpVar39;
        while(1) {
          tmp26 = 1;
          if (!listEmpty(_eqn_loopVar)) {
            _eqn = MMC_CAR(_eqn_loopVar);
            _eqn_loopVar = MMC_CDR(_eqn_loopVar);
            tmp26--;
          }
          if (tmp26 == 0) {
            __omcQ_24tmpVar38 = omc_NBEquation_Equation_getEqnName(threadData, _eqn);
            *tmp24 = mmc_mk_cons(__omcQ_24tmpVar38,0);
            tmp24 = &MMC_CDR(*tmp24);
          } else if (tmp26 == 1) {
            break;
          } else {
            OMC_THROW_INTERNAL();
          }
        }
        *tmp24 = mmc_mk_nil();
        tmpMeta23 = __omcQ_24tmpVar39;
      }
      _en = omc_UnorderedMap_subMap(threadData, (OMC_BOX_FIELD(_equations, 2)), tmpMeta23);

      _adj = omc_NBAdjacency_Matrix_expand(threadData, _adj, _full, _vo, _vn, _eo, _en, _variables, _equations, (modelica_integer)_kind ,&_full);

      if(omc_Flags_isSet(threadData, _OMC_LIT37))
      {
        tmpMeta27 = omc_mk_box1(0, _OMC_LIT5);
        tmp28 = stringAppend(_OMC_LIT51,intString(listLength(_start_eqns)));
        tmp29 = stringAppend(tmp28,_OMC_LIT52);
        tmp30 = stringAppend(omc_List_toStringCustom(threadData, _start_eqns, (modelica_fnptr) omc_mk_box2(0,closure5_NBEquation_Equation_pointerToString,tmpMeta27), omc_StringUtil_headline__4(threadData, tmp29), _OMC_LIT45, _OMC_LIT53, _OMC_LIT5, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT54);
        fputs(omc_string_data(tmp30),stdout);
      }
    }
    else
    {
      tmp31 = stringAppend(_OMC_LIT42,omc_List_toString(threadData, _failed_vars, boxvar_NBVariable_pointerToString, 8));
      tmp32 = stringAppend(tmp31,_OMC_LIT2);
      omc_string_store(&(_error_msg), tmp32);

      if(omc_Flags_isSet(threadData, _OMC_LIT37))
      {
        tmp33 = stringAppend(_error_msg,_OMC_LIT44);
        tmpMeta34 = omc_mk_box1(0, _OMC_LIT45);
        tmp35 = stringAppend(tmp33,omc_List_toString(threadData, omc_Pointer_access(threadData, _ptr_start_eqns), (modelica_fnptr) omc_mk_box2(0,closure6_NBEquation_Equation_pointerToString,tmpMeta34), 8));
        tmp36 = stringAppend(tmp35,_OMC_LIT2);
        omc_string_store(&(_error_msg), tmp36);
      }
      else
      {
        tmp37 = stringAppend(_error_msg,_OMC_LIT43);
        omc_string_store(&(_error_msg), tmp37);
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT50))
      {
        tmp38 = stringAppend(_error_msg,_OMC_LIT2);
        tmp39 = stringAppend(tmp38,omc_NBVariable_VariablePointers_toString(threadData, _variables, _OMC_LIT47, mmc_mk_none(), 1 /* true */));
        tmp40 = stringAppend(tmp39,omc_NBEquation_EquationPointers_toString(threadData, _equations, _OMC_LIT47, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
        tmp41 = stringAppend(tmp40,omc_NBAdjacency_Mapping_toString(threadData, omc_Util_getOptionOrDefault(threadData, _mapping_opt, omc_NBAdjacency_Mapping_empty(threadData))));
        tmp42 = stringAppend(tmp41,omc_NBAdjacency_Matrix_toString(threadData, _adj, _OMC_LIT5));
        tmp43 = stringAppend(tmp42,_OMC_LIT2);
        tmp44 = stringAppend(tmp43,omc_NBMatching_toString(threadData, _matching, _OMC_LIT5));
        omc_string_store(&(_error_msg), tmp44);
      }
      else
      {
        tmp45 = stringAppend(_error_msg,_OMC_LIT46);
        omc_string_store(&(_error_msg), tmp45);
      }

      tmpMeta46 = mmc_mk_cons(_error_msg, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT28, tmpMeta46);

      OMC_THROW_INTERNAL();
    }
  }
  else
  {
    _changed = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  if (out_full) { *out_full = _full; }
  if (out_variables) { *out_variables = _variables; }
  if (out_equations) { *out_equations = _equations; }
  if (out_varData) { *out_varData = _varData; }
  if (out_eqData) { *out_eqData = _eqData; }
  if (out_changed) { *out_changed = _changed; }
  omc_ret_ = _adj;
  return omc_ret_;
}
modelica_metatype boxptr_NBResolveSingularities_balanceInitialization(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _kind, modelica_metatype _funcMap, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype *out_full, modelica_metatype *out_variables, modelica_metatype *out_equations, modelica_metatype *out_varData, modelica_metatype *out_eqData, modelica_metatype *out_changed)
{
  modelica_integer tmp1;
  modelica_boolean _changed;
  modelica_metatype _adj = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _adj = omc_NBResolveSingularities_balanceInitialization(threadData, __omcQ_24in_5Fadj, __omcQ_24in_5Ffull, __omcQ_24in_5Fvariables, __omcQ_24in_5Fequations, __omcQ_24in_5FvarData, __omcQ_24in_5FeqData, tmp1, _funcMap, _matching, _mapping_opt, out_full, out_variables, out_equations, out_varData, out_eqData, &_changed);
  /* skip box _adj; NBAdjacency.Matrix */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _variables; NBVariable.VariablePointers */
  /* skip box _equations; NBEquation.EquationPointers */
  /* skip box _varData; NBVariable.VarData */
  /* skip box _eqData; NBEquation.EqData */
  if (out_changed) { *out_changed = omc_mk_icon(_changed); }
  return _adj;
}

static modelica_metatype closure7_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure8_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
}static modelica_metatype closure9_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
}static modelica_metatype closure10_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
}static modelica_metatype closure11_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
}
DLLModelDirection
modelica_metatype omc_NBResolveSingularities_indexReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_integer _kind, modelica_metatype _funcMap, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype *out_full, modelica_metatype *out_variables, modelica_metatype *out_equations, modelica_metatype *out_varData, modelica_metatype *out_eqData, modelica_boolean *out_changed)
{
  modelica_metatype _adj = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _variables = NULL;
  modelica_metatype _equations = NULL;
  modelica_metatype _varData = NULL;
  modelica_metatype _eqData = NULL;
  modelica_boolean _changed;
  modelica_metatype _mapping = NULL;
  modelica_metatype _excluded_eqns = NULL;
  modelica_metatype _msss = NULL;
  modelica_metatype _marked_eqns = NULL;
  modelica_metatype _constraint = NULL;
  modelica_metatype _diffed_eqn = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype _dummy_states = NULL;
  modelica_metatype _sliced_states = NULL;
  modelica_metatype _sliced_dummy_states = NULL;
  modelica_metatype _state_derivatives = NULL;
  modelica_metatype _dummy_derivatives = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _dummy_slice_vars = NULL;
  modelica_metatype _current_candidates = NULL;
  modelica_metatype _rest_candidates = NULL;
  modelica_metatype _constraint_eqns = NULL;
  modelica_metatype _matched_eqns = NULL;
  modelica_metatype _unmatched_eqns = NULL;
  modelica_metatype _new_eqns = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _diffArguments_ptr = NULL;
  modelica_metatype _candidate_ptrs = NULL;
  modelica_metatype _constraint_ptrs = NULL;
  modelica_metatype _set_adj = NULL;
  modelica_metatype _full_local = NULL;
  modelica_metatype _set_matching = NULL;
  modelica_metatype _vo = NULL;
  modelica_metatype _vn = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype _en = NULL;
  modelica_metatype _stages = NULL;
  modelica_fnptr _stageFunc;
  modelica_string _stageStr = NULL;
  modelica_metatype _slice_map = NULL;
  modelica_metatype _dummy_slice_set = NULL;
  modelica_metatype _alias_subst = NULL;
  modelica_metatype _alias_eqns = NULL;
  modelica_boolean _debug;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_integer tmp22;
  modelica_metatype tmpMeta25;
  modelica_string tmp26;
  modelica_string tmp27;
  modelica_string tmp28;
  modelica_string tmp29;
  modelica_string tmp30;
  modelica_string tmp31;
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
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_string tmp49;
  modelica_string tmp50;
  modelica_string tmp51;
  modelica_metatype tmpMeta52;
  modelica_string tmp56;
  modelica_string tmp57;
  modelica_string tmp58;
  modelica_string tmp59;
  modelica_string tmp60;
  modelica_string tmp61;
  modelica_string tmp62;
  modelica_metatype tmpMeta63;
  modelica_metatype tmpMeta64;
  modelica_metatype tmpMeta65;
  modelica_metatype tmpMeta66;
  modelica_metatype tmpMeta67;
  modelica_metatype tmpMeta68;
  modelica_metatype tmpMeta69;
  modelica_metatype tmpMeta70;
  modelica_string tmp71;
  modelica_string tmp72;
  modelica_string tmp73;
  modelica_string tmp74;
  modelica_metatype tmpMeta75;
  modelica_metatype tmpMeta76;
  modelica_metatype tmpMeta77;
  modelica_metatype tmpMeta78;
  modelica_string tmp79;
  modelica_metatype tmpMeta80;
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
  modelica_metatype tmpMeta91;
  modelica_metatype tmpMeta95;
  modelica_metatype tmpMeta99;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _adj = __omcQ_24in_5Fadj;
  _full = __omcQ_24in_5Ffull;
  _variables = __omcQ_24in_5Fvariables;
  _equations = __omcQ_24in_5Fequations;
  _varData = __omcQ_24in_5FvarData;
  _eqData = __omcQ_24in_5FeqData;
  // _changed has no default value.
  // _mapping has no default value.
  // _excluded_eqns has no default value.
  // _msss has no default value.
  // _marked_eqns has no default value.
  // _constraint has no default value.
  // _diffed_eqn has no default value.
  // _states has no default value.
  // _dummy_states has no default value.
  // _sliced_states has no default value.
  // _sliced_dummy_states has no default value.
  // _state_derivatives has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _dummy_derivatives = tmpMeta1;
  // _dummy_slice_vars has no default value.
  // _current_candidates has no default value.
  // _rest_candidates has no default value.
  // _constraint_eqns has no default value.
  // _matched_eqns has no default value.
  // _unmatched_eqns has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_eqns = tmpMeta2;
  // _diffArguments has no default value.
  // _diffArguments_ptr has no default value.
  // _candidate_ptrs has no default value.
  // _constraint_ptrs has no default value.
  // _set_adj has no default value.
  // _full_local has no default value.
  // _set_matching has no default value.
  // _vo has no default value.
  // _vn has no default value.
  // _eo has no default value.
  // _en has no default value.
  // _stages has no default value.
  // _stageStr has no default value.
  _slice_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  _dummy_slice_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _alias_subst = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  // _alias_eqns has no default value.
  _debug = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _mapping_opt;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          if (optionNone(tmp6_1)) goto tmp5_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp6_1, 1);
          _mapping = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta3 = _mapping;
          goto tmp5_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT28, _OMC_LIT56);
          goto goto_4;
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
  _mapping = tmpMeta3;

  {
    modelica_metatype __omcQ_24tmpVar41;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar40;
    modelica_integer tmp12;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = omc_NBEquation_EquationPointers_toList(threadData, _equations);
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar41 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar41;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        __omcQ_24tmpVar40 = omc_mk_boolean((omc_NBEquation_Equation_isDiscrete(threadData, _eqn) || omc_NBEquation_Equation_hasDerivative(threadData, _eqn)));
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar40,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp12 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar41;
  }
  _excluded_eqns = listArray(tmpMeta9);

  { /* match expression */
    modelica_metatype tmp16_1;
    tmp16_1 = _adj;
    {
      volatile mmc_switch_type tmp16;
      int tmp17;
      tmp16 = 0;
      for (; tmp16 < 2; tmp16++) {
        switch (MMC_SWITCH_CAST(tmp16)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp16_1,2,5) == 0) goto tmp15_end;
          
          /* Pattern matching succeeded */
          tmpMeta13 = omc_NBResolveSingularities_getMSSS(threadData, (OMC_BOX_FIELD(_adj, 2)), (OMC_BOX_FIELD(_adj, 3)), _matching, _excluded_eqns, _mapping);
          goto tmp15_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          modelica_string tmp19;
          
          /* Pattern matching succeeded */
          tmp19 = stringAppend(_OMC_LIT57,omc_NBAdjacency_Matrix_toString(threadData, _adj, _OMC_LIT5));
          tmpMeta18 = mmc_mk_cons(tmp19, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT28, tmpMeta18);
          goto goto_14;
          goto tmp15_done;
        }
        }
        goto tmp15_end;
        tmp15_end: ;
      }
      goto goto_14;
      goto_14:;
      OMC_THROW_INTERNAL();
      goto tmp15_done;
      tmp15_done:;
    }
  }
  _msss = tmpMeta13;

  if((!(arrayLength(_msss) == ((modelica_integer) 0))))
  {
    _changed = 1 /* true */;

    _marked_eqns = omc_UnorderedSet_unique__list(threadData, omc_List_flatten(threadData, arrayList(_msss)), boxvar_Util_id, boxvar_intEq);

    _constraint_ptrs = omc_NBResolveSingularities_getConstraintsAndCandidates(threadData, _equations, _marked_eqns, _mapping ,&_candidate_ptrs ,&_constraint_eqns);

    {
      modelica_metatype _eq;
      for (tmpMeta20 = _constraint_eqns; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
      {
        _eq = MMC_CAR(tmpMeta20);
        omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, _eq)), omc_UnorderedSet_fromList(threadData, (OMC_BOX_FIELD(_eq, 3)), boxvar_Util_id, boxvar_intEq), _slice_map);
      }
    }

    {
      modelica_integer __omcQ_24tmpVar43;
      modelica_metatype tmpMeta23;
      modelica_integer __omcQ_24tmpVar42;
      modelica_integer tmp24;
      modelica_metatype _eq_loopVar = 0;
      modelica_metatype _eq;
      _eq_loopVar = _constraint_eqns;
      __omcQ_24tmpVar43 = ((modelica_integer) 0); /* defaultValue */
      while(1) {
        tmp24 = 1;
        if (!listEmpty(_eq_loopVar)) {
          _eq = MMC_CAR(_eq_loopVar);
          _eq_loopVar = MMC_CDR(_eq_loopVar);
          tmp24--;
        }
        if (tmp24 == 0) {
          tmpMeta23 = omc_mk_box1(0, omc_mk_boolean(1 /* true */));
          __omcQ_24tmpVar42 = omc_NBSlice_size(threadData, _eq, (modelica_fnptr) omc_mk_box2(0,closure7_NBEquation_Equation_size,tmpMeta23));
          __omcQ_24tmpVar43 = __omcQ_24tmpVar43 + __omcQ_24tmpVar42;
        } else if (tmp24 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      tmp22 = __omcQ_24tmpVar43;
    }
    if((omc_NBVariable_VariablePointers_scalarSize(threadData, _candidate_ptrs, 0 /* false */) < tmp22))
    {
      tmp26 = stringAppend(_OMC_LIT58,omc_NBEquation_EquationPointers_toString(threadData, _constraint_ptrs, _OMC_LIT59, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
      tmp27 = stringAppend(tmp26,_OMC_LIT2);
      tmp28 = stringAppend(tmp27,omc_NBVariable_VariablePointers_toString(threadData, _candidate_ptrs, _OMC_LIT60, mmc_mk_none(), 1 /* true */));
      tmpMeta25 = mmc_mk_cons(tmp28, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT28, tmpMeta25);

      OMC_THROW_INTERNAL();
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT63))
    {
      tmp29 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT13),_OMC_LIT2);
      tmp30 = stringAppend(tmp29,omc_NBVariable_VariablePointers_toString(threadData, _candidate_ptrs, _OMC_LIT60, mmc_mk_none(), 1 /* true */));
      tmp31 = stringAppend(tmp30,omc_NBEquation_EquationPointers_toString(threadData, _constraint_ptrs, _OMC_LIT59, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
      fputs(omc_string_data(tmp31),stdout);
    }

    _full_local = omc_NBAdjacency_Matrix_createFull(threadData, _candidate_ptrs, _constraint_ptrs, (modelica_integer)_kind);

    _set_adj = _OMC_LIT64;

    _rest_candidates = omc_NBVariable_VariablePointers_toList(threadData, _candidate_ptrs);

    _eo = (OMC_BOX_FIELD(_constraint_ptrs, 2));

    _en = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    _vo = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    _vn = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta34 = omc_mk_box3(3, &NBMatching_MATCHING__desc, listArray(tmpMeta32), listArray(tmpMeta33));
    _set_matching = tmpMeta34;

    tmpMeta36 = omc_mk_box1(0, omc_mk_integer(1));
    tmpMeta37 = omc_mk_box2(0, _OMC_LIT65, (modelica_fnptr) omc_mk_box2(0,closure8_NBVariable_isStateSelect,tmpMeta36));
    tmpMeta38 = omc_mk_box1(0, omc_mk_integer(2));
    tmpMeta39 = omc_mk_box2(0, _OMC_LIT66, (modelica_fnptr) omc_mk_box2(0,closure9_NBVariable_isStateSelect,tmpMeta38));
    tmpMeta40 = omc_mk_box2(0, _OMC_LIT67, boxvar_NBVariable_isArtificial);
    tmpMeta41 = omc_mk_box1(0, omc_mk_integer(3));
    tmpMeta42 = omc_mk_box2(0, _OMC_LIT68, (modelica_fnptr) omc_mk_box2(0,closure10_NBVariable_isStateSelect,tmpMeta41));
    tmpMeta43 = omc_mk_box1(0, omc_mk_integer(4));
    tmpMeta44 = omc_mk_box2(0, _OMC_LIT69, (modelica_fnptr) omc_mk_box2(0,closure11_NBVariable_isStateSelect,tmpMeta43));
    tmpMeta35 = mmc_mk_cons(tmpMeta37, mmc_mk_cons(tmpMeta39, mmc_mk_cons(tmpMeta40, mmc_mk_cons(tmpMeta42, mmc_mk_cons(tmpMeta44, MMC_REFSTRUCTLIT(mmc_nil))))));
    _stages = tmpMeta35;

    {
      modelica_metatype _stage;
      for (tmpMeta45 = _stages; !listEmpty(tmpMeta45); tmpMeta45=MMC_CDR(tmpMeta45))
      {
        _stage = MMC_CAR(tmpMeta45);
        /* Pattern-matching assignment */
        tmpMeta46 = _stage;
        tmpMeta47 = OMC_BOX_FIELD(tmpMeta46, 1);
        tmpMeta48 = OMC_BOX_FIELD(tmpMeta46, 2);
        _stageStr = tmpMeta47;
        _stageFunc = tmpMeta48;

        _current_candidates = omc_List_splitOnTrue(threadData, _rest_candidates, ((modelica_fnptr) _stageFunc) ,&_rest_candidates);

        if(listEmpty(_current_candidates))
        {
          if(_debug)
          {
            tmp49 = stringAppend(_OMC_LIT74,_stageStr);
            tmp50 = stringAppend(tmp49,_OMC_LIT71);
            tmp51 = stringAppend(omc_StringUtil_headline__2(threadData, tmp50),_OMC_LIT2);
            fputs(omc_string_data(tmp51),stdout);
          }
        }
        else
        {
          _vo = omc_UnorderedMap_merge(threadData, _vo, omc_UnorderedMap_copy(threadData, _vn), _OMC_LIT70);

          {
            modelica_metatype __omcQ_24tmpVar45;
            modelica_metatype* tmp53;
            modelica_metatype tmpMeta54;
            modelica_metatype __omcQ_24tmpVar44;
            modelica_integer tmp55;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = _current_candidates;
            tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar45 = tmpMeta54; /* defaultValue */
            tmp53 = &__omcQ_24tmpVar45;
            while(1) {
              tmp55 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp55--;
              }
              if (tmp55 == 0) {
                __omcQ_24tmpVar44 = omc_NBVariable_getVarName(threadData, _var);
                *tmp53 = mmc_mk_cons(__omcQ_24tmpVar44,0);
                tmp53 = &MMC_CDR(*tmp53);
              } else if (tmp55 == 1) {
                break;
              } else {
                OMC_THROW_INTERNAL();
              }
            }
            *tmp53 = mmc_mk_nil();
            tmpMeta52 = __omcQ_24tmpVar45;
          }
          _vn = omc_UnorderedMap_subMap(threadData, (OMC_BOX_FIELD(_candidate_ptrs, 2)), tmpMeta52);

          _set_adj = omc_NBAdjacency_Matrix_expand(threadData, _set_adj, _full_local, _vo, _vn, _eo, _en, _candidate_ptrs, _constraint_ptrs, (modelica_integer)_kind ,&_full_local);

          _set_matching = omc_NBMatching_regular(threadData, _set_matching, _set_adj, 0 /* false */, 1 /* true */, 0 /* false */);

          if(_debug)
          {
            tmp56 = stringAppend(_OMC_LIT3,_stageStr);
            tmp57 = stringAppend(tmp56,_OMC_LIT71);
            fputs(omc_string_data(omc_NBAdjacency_Matrix_toString(threadData, _set_adj, tmp57)),stdout);

            tmp58 = stringAppend(_OMC_LIT3,_stageStr);
            tmp59 = stringAppend(tmp58,_OMC_LIT71);
            fputs(omc_string_data(omc_NBMatching_toString(threadData, _set_matching, tmp59)),stdout);
          }

          if((omc_NBMatching_isEmpty(threadData, _set_matching) && omc_NBMatching_isPerfect(threadData, _set_matching)))
          {
            if(_debug)
            {
              tmp60 = stringAppend(_OMC_LIT72,_stageStr);
              tmp61 = stringAppend(tmp60,_OMC_LIT73);
              tmp62 = stringAppend(omc_StringUtil_headline__2(threadData, tmp61),_OMC_LIT2);
              fputs(omc_string_data(tmp62),stdout);
            }

            break;
          }
        }
      }
    }

    _dummy_states = omc_NBMatching_getMatches(threadData, _set_matching, omc_NBAdjacency_Matrix_getMappingOpt(threadData, _set_adj), _candidate_ptrs, _constraint_ptrs ,&_states ,&_matched_eqns ,&_unmatched_eqns);

    _unmatched_eqns = omc_NBResolveSingularities_resolveSlicedUnmatched(threadData, _unmatched_eqns, _slice_map);

    _dummy_states = omc_NBResolveSingularities_resolveSlicedDummyStates(threadData, _dummy_states, _states);

    _states = omc_NBResolveSingularities_resolveSlicedCandidates(threadData, _states, _alias_subst, omc_NBVariable_VarData_getUniqueIndex(threadData, _varData), omc_NBVariable_VarData_getUniqueIndex(threadData, _varData) ,&_alias_eqns);

    if((!omc_UnorderedMap_isEmpty(threadData, _alias_subst)))
    {
      {
        modelica_metatype _constraint;
        for (tmpMeta64 = omc_NBEquation_EquationPointers_toList(threadData, _constraint_ptrs); !listEmpty(tmpMeta64); tmpMeta64=MMC_CDR(tmpMeta64))
        {
          _constraint = MMC_CAR(tmpMeta64);
          omc_NBResolveSingularities_substituteSlicedDummyEqn(threadData, _constraint, _alias_subst);
        }
      }
    }

    _new_eqns = listAppend(_alias_eqns, _new_eqns);

    {
      modelica_metatype _eqn;
      for (tmpMeta66 = _alias_eqns; !listEmpty(tmpMeta66); tmpMeta66=MMC_CDR(tmpMeta66))
      {
        _eqn = MMC_CAR(tmpMeta66);
        omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, _eqn), omc_UnorderedSet_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 13)), _slice_map);
      }
    }

    _constraint_ptrs = omc_NBEquation_EquationPointers_addList(threadData, _alias_eqns, _constraint_ptrs);

    _diffArguments = omc_NBDifferentiate_DifferentiationArguments_default(threadData, 1, _funcMap);

    tmpMeta68 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta68), MMC_UNTAGPTR(_diffArguments), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta68))[4] = mmc_mk_some(omc_NBVariable_VarData_getStateOrder(threadData, _varData));
    _diffArguments = tmpMeta68;

    _diffArguments_ptr = omc_Pointer_create(threadData, _diffArguments);

    if(omc_Flags_isSet(threadData, _OMC_LIT63))
    {
      fputs(omc_string_data(omc_StringUtil_headline__3(threadData, _OMC_LIT75)),stdout);
    }

    {
      modelica_metatype _constraint;
      for (tmpMeta69 = omc_NBEquation_EquationPointers_toList(threadData, _constraint_ptrs); !listEmpty(tmpMeta69); tmpMeta69=MMC_CDR(tmpMeta69))
      {
        _constraint = MMC_CAR(tmpMeta69);
        _diffed_eqn = omc_NBDifferentiate_differentiateEquationPointer(threadData, _constraint, _diffArguments_ptr, _OMC_LIT5);

        _diffed_eqn = omc_NBResolveSingularities_removeSlicedDerivatives(threadData, _diffed_eqn, omc_UnorderedMap_getSafe(threadData, omc_NBEquation_Equation_getEqnName(threadData, _constraint), _slice_map, _OMC_LIT76), _dummy_slice_set, omc_NBVariable_VarData_getUniqueIndex(threadData, _varData));

        tmpMeta70 = mmc_mk_cons(_diffed_eqn, _new_eqns);
        _new_eqns = tmpMeta70;

        if(omc_Flags_isSet(threadData, _OMC_LIT63))
        {
          tmp71 = stringAppend(_OMC_LIT77,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, _constraint), _OMC_LIT5));
          tmp72 = stringAppend(tmp71,_OMC_LIT2);
          fputs(omc_string_data(tmp72),stdout);

          tmp73 = stringAppend(_OMC_LIT78,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, _diffed_eqn), _OMC_LIT5));
          tmp74 = stringAppend(tmp73,_OMC_LIT54);
          fputs(omc_string_data(tmp74),stdout);
        }
      }
    }

    _diffArguments = omc_Pointer_access(threadData, _diffArguments_ptr);

    {
      modelica_metatype _dummy;
      for (tmpMeta76 = _dummy_states; !listEmpty(tmpMeta76); tmpMeta76=MMC_CDR(tmpMeta76))
      {
        _dummy = MMC_CAR(tmpMeta76);
        if(listEmpty((OMC_BOX_FIELD(_dummy, 3))))
        {
          tmpMeta77 = mmc_mk_cons(omc_NBVariable_makeDummyState(threadData, omc_NBSlice_getT(threadData, _dummy)), _dummy_derivatives);
          _dummy_derivatives = tmpMeta77;
        }
        else
        {
          tmp79 = stringAppend(_OMC_LIT79,omc_NBSlice_toString(threadData, _dummy, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)));
          tmpMeta78 = mmc_mk_cons(tmp79, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT28, tmpMeta78);

          OMC_THROW_INTERNAL();
        }
      }
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT63))
    {
      tmp81 = stringAppend(_OMC_LIT80,intString(listLength(_states)));
      tmp82 = stringAppend(tmp81,_OMC_LIT81);
      fputs(omc_string_data(omc_StringUtil_headline__4(threadData, tmp82)),stdout);

      tmp83 = stringAppend(omc_NBSlice_lstToString(threadData, _states, boxvar_NBVariable_pointerToString, _OMC_LIT5, ((modelica_integer) 10)),_OMC_LIT54);
      fputs(omc_string_data(tmp83),stdout);
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT87))
    {
      tmp84 = stringAppend(_OMC_LIT82,intString(listLength((OMC_BOX_FIELD(_diffArguments, 3)))));
      tmp85 = stringAppend(tmp84,_OMC_LIT83);
      fputs(omc_string_data(omc_StringUtil_headline__4(threadData, tmp85)),stdout);

      tmp86 = stringAppend(omc_List_toString(threadData, (OMC_BOX_FIELD(_diffArguments, 3)), boxvar_NBVariable_pointerToString, 8),_OMC_LIT54);
      fputs(omc_string_data(tmp86),stdout);

      tmp87 = stringAppend(_OMC_LIT82,intString(listLength(_dummy_states)));
      tmp88 = stringAppend(tmp87,_OMC_LIT84);
      fputs(omc_string_data(omc_StringUtil_headline__4(threadData, tmp88)),stdout);

      tmp89 = stringAppend(omc_NBSlice_lstToString(threadData, _dummy_states, boxvar_NBVariable_pointerToString, _OMC_LIT5, ((modelica_integer) 10)),_OMC_LIT54);
      fputs(omc_string_data(tmp89),stdout);
    }

    if(listEmpty(_unmatched_eqns))
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT63))
      {
        tmp90 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT90),_OMC_LIT2);
        fputs(omc_string_data(tmp90),stdout);
      }
    }
    else
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT63))
      {
        fputs(omc_string_data(omc_NBResolveSingularities_toStringDynamicSelect(threadData, _dummy_states, _unmatched_eqns)),stdout);
      }

      omc_Error_addMessage(threadData, _OMC_LIT28, _OMC_LIT89);

      OMC_THROW_INTERNAL();
    }

    _state_derivatives = omc_List_extractOnTrue(threadData, (OMC_BOX_FIELD(_diffArguments, 3)), boxvar_NBVariable_isStateDerivative, NULL);

    {
      modelica_metatype __omcQ_24tmpVar47;
      modelica_metatype* tmp92;
      modelica_metatype tmpMeta93;
      modelica_metatype __omcQ_24tmpVar46;
      modelica_integer tmp94;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = _states;
      tmpMeta93 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar47 = tmpMeta93; /* defaultValue */
      tmp92 = &__omcQ_24tmpVar47;
      while(1) {
        tmp94 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp94--;
        }
        if (tmp94 == 0) {
          __omcQ_24tmpVar46 = omc_NBSlice_getT(threadData, _slice);
          *tmp92 = mmc_mk_cons(__omcQ_24tmpVar46,0);
          tmp92 = &MMC_CDR(*tmp92);
        } else if (tmp94 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp92 = mmc_mk_nil();
      tmpMeta91 = __omcQ_24tmpVar47;
    }
    _sliced_states = tmpMeta91;

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _sliced_states, 1);

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _state_derivatives, 2);

    {
      modelica_metatype __omcQ_24tmpVar49;
      modelica_metatype* tmp96;
      modelica_metatype tmpMeta97;
      modelica_metatype __omcQ_24tmpVar48;
      modelica_integer tmp98;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = _dummy_states;
      tmpMeta97 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar49 = tmpMeta97; /* defaultValue */
      tmp96 = &__omcQ_24tmpVar49;
      while(1) {
        tmp98 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp98--;
        }
        if (tmp98 == 0) {
          __omcQ_24tmpVar48 = omc_NBSlice_getT(threadData, _slice);
          *tmp96 = mmc_mk_cons(__omcQ_24tmpVar48,0);
          tmp96 = &MMC_CDR(*tmp96);
        } else if (tmp98 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp96 = mmc_mk_nil();
      tmpMeta95 = __omcQ_24tmpVar49;
    }
    _sliced_dummy_states = tmpMeta95;

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _sliced_dummy_states, 3);

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _dummy_derivatives, 3);

    _eqData = omc_NBEquation_EqData_addTypedList(threadData, _eqData, _new_eqns, 1, 1 /* true */);

    _variables = omc_NBVariable_VariablePointers_addList(threadData, (OMC_BOX_FIELD(_diffArguments, 3)), _variables);

    _variables = omc_NBVariable_VariablePointers_addList(threadData, _sliced_dummy_states, _variables);

    _variables = omc_NBVariable_VariablePointers_removeList(threadData, _sliced_states, _variables);

    _equations = omc_NBEquation_EquationPointers_addList(threadData, _new_eqns, _equations);

    {
      modelica_metatype __omcQ_24tmpVar51;
      modelica_metatype* tmp100;
      modelica_metatype tmpMeta101;
      modelica_metatype __omcQ_24tmpVar50;
      modelica_integer tmp102;
      modelica_metatype _cref_loopVar = 0;
      modelica_metatype _cref;
      _cref_loopVar = omc_UnorderedSet_toList(threadData, _dummy_slice_set);
      tmpMeta101 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar51 = tmpMeta101; /* defaultValue */
      tmp100 = &__omcQ_24tmpVar51;
      while(1) {
        tmp102 = 1;
        if (!listEmpty(_cref_loopVar)) {
          _cref = MMC_CAR(_cref_loopVar);
          _cref_loopVar = MMC_CDR(_cref_loopVar);
          tmp102--;
        }
        if (tmp102 == 0) {
          __omcQ_24tmpVar50 = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT91);
          *tmp100 = mmc_mk_cons(__omcQ_24tmpVar50,0);
          tmp100 = &MMC_CDR(*tmp100);
        } else if (tmp102 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp100 = mmc_mk_nil();
      tmpMeta99 = __omcQ_24tmpVar51;
    }
    _dummy_slice_vars = tmpMeta99;

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _dummy_slice_vars, 3);

    _variables = omc_NBVariable_VariablePointers_addList(threadData, _dummy_slice_vars, _variables);
  }
  else
  {
    _changed = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  if (out_full) { *out_full = _full; }
  if (out_variables) { *out_variables = _variables; }
  if (out_equations) { *out_equations = _equations; }
  if (out_varData) { *out_varData = _varData; }
  if (out_eqData) { *out_eqData = _eqData; }
  if (out_changed) { *out_changed = _changed; }
  omc_ret_ = _adj;
  return omc_ret_;
}
modelica_metatype boxptr_NBResolveSingularities_indexReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _kind, modelica_metatype _funcMap, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype *out_full, modelica_metatype *out_variables, modelica_metatype *out_equations, modelica_metatype *out_varData, modelica_metatype *out_eqData, modelica_metatype *out_changed)
{
  modelica_integer tmp1;
  modelica_boolean _changed;
  modelica_metatype _adj = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _adj = omc_NBResolveSingularities_indexReduction(threadData, __omcQ_24in_5Fadj, __omcQ_24in_5Ffull, __omcQ_24in_5Fvariables, __omcQ_24in_5Fequations, __omcQ_24in_5FvarData, __omcQ_24in_5FeqData, tmp1, _funcMap, _matching, _mapping_opt, out_full, out_variables, out_equations, out_varData, out_eqData, &_changed);
  /* skip box _adj; NBAdjacency.Matrix */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _variables; NBVariable.VariablePointers */
  /* skip box _equations; NBEquation.EquationPointers */
  /* skip box _varData; NBVariable.VarData */
  /* skip box _eqData; NBEquation.EqData */
  if (out_changed) { *out_changed = omc_mk_icon(_changed); }
  return _adj;
}

