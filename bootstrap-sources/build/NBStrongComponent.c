#include "omc_simulation_settings.h"
#include "NBStrongComponent.h"
#define _OMC_LIT0_data "NBStrongComponent.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,20,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1_6,0.0);
#define _OMC_LIT1_6 MMC_REFREALLIT(_OMC_LIT_STRUCT1_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1373)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1375)),MMC_IMMEDIATE(MMC_TAGFIXNUM(16)),_OMC_LIT1_6}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,0.0);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1370)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1376)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,17,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT3,_OMC_LIT4,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NBStrongComponent.createPseudoScalar failed because single indices did not turn out to be single components."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,108,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "NBStrongComponent.createPseudoScalar failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,44,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,1) {_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "NBStrongComponent.isDiscrete failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,64,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NBStrongComponent.getSolveStatus failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,68,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "NBStrongComponent.getEquations failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,66,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "NBStrongComponent.getVarCref failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,64,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "NBStrongComponent.getVariableCrefs failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,70,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "NBStrongComponent.getVariables failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,66,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "NBStrongComponent.addLoopJacobian failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,69,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "NBStrongComponent.addForLoopDependencies failed because the for-loop had more than one body equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,102,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,0,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "NBStrongComponent.toSolvedEquation failed because strong component could not be\n        solved explicitly:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,107,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT21_6,0.0);
#define _OMC_LIT21_6 MMC_REFREALLIT(_OMC_LIT_STRUCT21_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(699)),MMC_IMMEDIATE(MMC_TAGFIXNUM(45)),MMC_IMMEDIATE(MMC_TAGFIXNUM(700)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),_OMC_LIT21_6}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT22_6,0.0);
#define _OMC_LIT22_6 MMC_REFREALLIT(_OMC_LIT_STRUCT22_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(722)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(722)),MMC_IMMEDIATE(MMC_TAGFIXNUM(167)),_OMC_LIT22_6}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,18) {&NFType_ANY__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT29,0.0);
#define _OMC_LIT29 MMC_REFREALLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT19,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,16,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,5,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,10,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT31,_OMC_LIT32,_OMC_LIT33,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,11,3) {&NFVariable_VARIABLE__desc,_OMC_LIT23,_OMC_LIT24,_OMC_LIT25,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT28,_OMC_LIT30,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "NBStrongComponent.fromSolvedEquationSlice failed for:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,54,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT37_6,0.0);
#define _OMC_LIT37_6 MMC_REFREALLIT(_OMC_LIT_STRUCT37_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(714)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(714)),MMC_IMMEDIATE(MMC_TAGFIXNUM(143)),_OMC_LIT37_6}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT39_6,0.0);
#define _OMC_LIT39_6 MMC_REFREALLIT(_OMC_LIT_STRUCT39_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(460)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(460)),MMC_IMMEDIATE(MMC_TAGFIXNUM(190)),_OMC_LIT39_6}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT40_6,0.0);
#define _OMC_LIT40_6 MMC_REFREALLIT(_OMC_LIT_STRUCT40_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(396)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(396)),MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT40_6}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "NBStrongComponent.size failed. Cannot determine size of strong component:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,74,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,1,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "NBStrongComponent.hash failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,30,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,1) {_OMC_LIT43,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Cannot classify strong component:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,34,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,1,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "BLOCK"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,5,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data ": Single Strong Component (status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,36,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data ", size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,9,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,1,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "### Variable:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,14,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,1,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "### Equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,14,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data ": Multi Strong Component (status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,35,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "### Variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,15,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "\n### Equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,15,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data ": Sliced Component (status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,29,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "### Variable:\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,15,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data ": Resizable Component (status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,32,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data ": Entwined Component (status = Solve.EXPLICIT, size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,54,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "call order: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,12,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data ": Generic Component (status = Solve.EXPLICIT, size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,53,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data ": Algebraic Loop (Linear = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,27,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,4,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,5,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data ", Mixed = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,10,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data ", Homotopy = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,13,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "Strict Tearing Set"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,18,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "Casual Tearing Set"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,18,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "--- Alias of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,13,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data " ---\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,5,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "NBStrongComponent.toString failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,34,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,1) {_OMC_LIT72,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,1,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data " | "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,3,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,1,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#include "util/modelica.h"

#include "NBStrongComponent_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *threadData, modelica_metatype _dep, modelica_metatype _map, modelica_fnptr _checkFn, modelica_metatype __omcQ_24in_5Fset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_prepareDependencies_addSubDependencies,2,0) {(void*) boxptr_NBStrongComponent_prepareDependencies_addSubDependencies,0}};
#define boxvar_NBStrongComponent_prepareDependencies_addSubDependencies MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_prepareDependencies_addSubDependencies)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_prepareDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdependencies, modelica_metatype _map, modelica_integer _jacType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBStrongComponent_prepareDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdependencies, modelica_metatype _map, modelica_metatype _jacType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_prepareDependencies,2,0) {(void*) boxptr_NBStrongComponent_prepareDependencies,0}};
#define boxvar_NBStrongComponent_prepareDependencies MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_prepareDependencies)
PROTECTED_FUNCTION_STATIC void omc_NBStrongComponent_updateDependencyMap(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _dependencies, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_updateDependencyMap,2,0) {(void*) boxptr_NBStrongComponent_updateDependencyMap,0}};
#define boxvar_NBStrongComponent_updateDependencyMap MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_updateDependencyMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_sortAscending(threadData_t *threadData, modelica_metatype _lst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_sortAscending,2,0) {(void*) boxptr_NBStrongComponent_sortAscending,0}};
#define boxvar_NBStrongComponent_sortAscending MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_sortAscending)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_getLoopVarsAndEqns(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _eqn_to_var, modelica_metatype _mapping, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype *out_acc_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_getLoopVarsAndEqns,2,0) {(void*) boxptr_NBStrongComponent_getLoopVarsAndEqns,0}};
#define boxvar_NBStrongComponent_getLoopVarsAndEqns MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_getLoopVarsAndEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _eqn_ptr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation,2,0) {(void*) boxptr_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation,0}};
#define boxvar_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *threadData, modelica_metatype _dep, modelica_metatype _map, modelica_fnptr _checkFn, modelica_metatype __omcQ_24in_5Fset)
{
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = __omcQ_24in_5Fset;
  if(omc_NBVariable_checkCref(threadData, _dep, ((modelica_fnptr) _checkFn), _OMC_LIT2))
  {
    omc_UnorderedSet_add(threadData, _dep, _set);
  }
  else
  {
    {
      modelica_metatype _tmp;
      for (tmpMeta1 = omc_UnorderedMap_getSafe(threadData, _dep, _map, _OMC_LIT1); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _tmp = MMC_CAR(tmpMeta1);
        omc_UnorderedSet_add(threadData, _tmp, _set);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _set;
  return omc_ret_;
}

static modelica_metatype closure0_NFComponentRef_mapExp(threadData_t *thData, modelica_metatype closure, modelica_metatype cref)
{
  modelica_fnptr func = OMC_BOX_FIELD(closure, 1);
  return boxptr_NFComponentRef_mapExp(thData, cref, func);
}static modelica_metatype closure1_NFComponentRef_simplifySubscripts(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref)
{
  modelica_metatype trim = OMC_BOX_FIELD(closure, 1);
  return boxptr_NFComponentRef_simplifySubscripts(thData, $in_cref, trim);
}static modelica_metatype closure2_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *thData, modelica_metatype closure, modelica_metatype dep, modelica_metatype $in_set)
{
  modelica_metatype map = OMC_BOX_FIELD(closure, 1);
  modelica_fnptr checkFn = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBStrongComponent_prepareDependencies_addSubDependencies(thData, dep, map, checkFn, $in_set);
}static modelica_metatype closure3_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *thData, modelica_metatype closure, modelica_metatype dep, modelica_metatype $in_set)
{
  modelica_metatype map = OMC_BOX_FIELD(closure, 1);
  modelica_fnptr checkFn = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBStrongComponent_prepareDependencies_addSubDependencies(thData, dep, map, checkFn, $in_set);
}static modelica_metatype closure4_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *thData, modelica_metatype closure, modelica_metatype dep, modelica_metatype $in_set)
{
  modelica_metatype map = OMC_BOX_FIELD(closure, 1);
  modelica_fnptr checkFn = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBStrongComponent_prepareDependencies_addSubDependencies(thData, dep, map, checkFn, $in_set);
}static modelica_metatype closure5_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *thData, modelica_metatype closure, modelica_metatype dep, modelica_metatype $in_set)
{
  modelica_metatype map = OMC_BOX_FIELD(closure, 1);
  modelica_fnptr checkFn = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBStrongComponent_prepareDependencies_addSubDependencies(thData, dep, map, checkFn, $in_set);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_prepareDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdependencies, modelica_metatype _map, modelica_integer _jacType)
{
  modelica_metatype _dependencies = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dependencies = __omcQ_24in_5Fdependencies;
  tmpMeta1 = omc_mk_box1(0, boxvar_NFExpression_replaceResizableParameter);
  _dependencies = omc_UnorderedSet_selfMap(threadData, _dependencies, (modelica_fnptr) omc_mk_box2(0,closure0_NFComponentRef_mapExp,tmpMeta1));

  tmpMeta2 = omc_mk_box1(0, omc_mk_boolean(0 /* false */));
  _dependencies = omc_UnorderedSet_selfMap(threadData, _dependencies, (modelica_fnptr) omc_mk_box2(0,closure1_NFComponentRef_simplifySubscripts,tmpMeta2));

  { /* match expression */
    modelica_integer tmp6_1;
    tmp6_1 = (modelica_integer)_jacType;
    {
      int tmp6;
      {
        switch (MMC_SWITCH_CAST(tmp6_1)) {
        case 1: {
          modelica_metatype tmpMeta7;
          if (1 != tmp6_1) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta7 = omc_mk_box2(0, _map, boxvar_NBVariable_isState);
          tmpMeta3 = omc_UnorderedSet_fold(threadData, _dependencies, (modelica_fnptr) omc_mk_box2(0,closure2_NBStrongComponent_prepareDependencies_addSubDependencies,tmpMeta7), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          goto tmp5_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          if (5 != tmp6_1) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta8 = omc_mk_box2(0, _map, boxvar_NBVariable_isStateOrOptimizable);
          tmpMeta3 = omc_UnorderedSet_fold(threadData, _dependencies, (modelica_fnptr) omc_mk_box2(0,closure3_NBStrongComponent_prepareDependencies_addSubDependencies,tmpMeta8), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          goto tmp5_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          if (6 != tmp6_1) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta9 = omc_mk_box2(0, _map, boxvar_NBVariable_isStateOrOptimizable);
          tmpMeta3 = omc_UnorderedSet_fold(threadData, _dependencies, (modelica_fnptr) omc_mk_box2(0,closure4_NBStrongComponent_prepareDependencies_addSubDependencies,tmpMeta9), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          goto tmp5_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          if (7 != tmp6_1) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta10 = omc_mk_box2(0, _map, boxvar_NBVariable_isStateOrOptimizable);
          tmpMeta3 = omc_UnorderedSet_fold(threadData, _dependencies, (modelica_fnptr) omc_mk_box2(0,closure5_NBStrongComponent_prepareDependencies_addSubDependencies,tmpMeta10), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          goto tmp5_done;
        }
        default:
        tmp5_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta3 = _dependencies;
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
  _dependencies = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _dependencies;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBStrongComponent_prepareDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdependencies, modelica_metatype _map, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_metatype _dependencies = NULL;
  tmp1 = omc_unbox_integer(_jacType);
  _dependencies = omc_NBStrongComponent_prepareDependencies(threadData, __omcQ_24in_5Fdependencies, _map, tmp1);
  /* skip box _dependencies; UnorderedSet<NFComponentRef> */
  return _dependencies;
}

PROTECTED_FUNCTION_STATIC void omc_NBStrongComponent_updateDependencyMap(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _dependencies, modelica_metatype _map)
{
  modelica_boolean _removed;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _removed has no default value.
  _removed = omc_UnorderedSet_remove(threadData, _cref, _dependencies);

  omc_UnorderedMap_add(threadData, _cref, omc_UnorderedSet_toList(threadData, _dependencies), _map);

  if(_removed)
  {
    omc_UnorderedSet_addNew(threadData, _cref, _dependencies);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_sortAscending(threadData_t *threadData, modelica_metatype _lst)
{
  modelica_metatype _sorted = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sorted has no default value.
  if((listEmpty(_lst) || listEmpty(listRest(_lst))))
  {
    _sorted = _lst;
  }
  else
  {
    _sorted = arrayList(omc_Array_heapSort(threadData, listArray(_lst)));
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sorted;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_getLoopVarsAndEqns(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _eqn_to_var, modelica_metatype _mapping, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype *out_acc_eqns)
{
  modelica_metatype _acc_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _acc_eqns = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _var_idx;
  modelica_integer _var_arr_idx;
  modelica_integer _var_scal_idx;
  modelica_integer _eqn_arr_idx;
  modelica_integer _eqn_scal_idx;
  modelica_metatype _idx_lst = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _eqn = NULL;
  modelica_integer _len_comps;
  modelica_metatype _var_map = NULL;
  modelica_metatype _eqn_map = NULL;
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
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_boolean tmp22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_integer tmp30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_integer tmp34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_boolean tmp40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc_vars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc_eqns = tmpMeta2;
  // _var_idx has no default value.
  // _var_arr_idx has no default value.
  // _var_scal_idx has no default value.
  // _eqn_arr_idx has no default value.
  // _eqn_scal_idx has no default value.
  // _idx_lst has no default value.
  // _var has no default value.
  // _eqn has no default value.
  _len_comps = listLength(_comp_indices);
  _var_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, _len_comps);
  _eqn_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, _len_comps);
  {
    modelica_metatype _eqn_idx;
    for (tmpMeta3 = _comp_indices; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eqn_idx = MMC_CAR(tmpMeta3);
      _var_idx = omc_unbox_integer(arrayGet(_eqn_to_var,omc_unbox_integer(_eqn_idx)) /* DAE.ASUB */);

      _var_arr_idx = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 3)),_var_idx) /* DAE.ASUB */);

      _eqn_arr_idx = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(_eqn_idx)) /* DAE.ASUB */);

      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _idx_lst = omc_UnorderedMap_getOrDefault(threadData, omc_mk_integer(_var_arr_idx), _var_map, tmpMeta4);

      tmpMeta5 = mmc_mk_cons(omc_mk_integer(_var_idx), _idx_lst);
      omc_UnorderedMap_add(threadData, omc_mk_integer(_var_arr_idx), tmpMeta5, _var_map);

      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _idx_lst = omc_UnorderedMap_getOrDefault(threadData, omc_mk_integer(_eqn_arr_idx), _eqn_map, tmpMeta6);

      tmpMeta7 = mmc_mk_cons(_eqn_idx, _idx_lst);
      omc_UnorderedMap_add(threadData, omc_mk_integer(_eqn_arr_idx), tmpMeta7, _eqn_map);
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta9 = omc_UnorderedMap_toList(threadData, _var_map); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _tpl = MMC_CAR(tmpMeta9);
      /* Pattern-matching assignment */
      tmpMeta10 = _tpl;
      tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 1);
      tmp12 = omc_unbox_integer(tmpMeta11);
      tmpMeta13 = OMC_BOX_FIELD(tmpMeta10, 2);
      _var_arr_idx = tmp12  /* pattern as ty=Integer */;
      _idx_lst = tmpMeta13;

      /* Pattern-matching assignment */
      tmpMeta14 = arrayGet((OMC_BOX_FIELD(_mapping, 5)),_var_arr_idx) /* DAE.ASUB */;
      tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 1);
      tmp16 = omc_unbox_integer(tmpMeta15);
      _var_scal_idx = tmp16  /* pattern as ty=Integer */;

      _var = omc_NBVariable_VariablePointers_getVarAt(threadData, _vars, _var_arr_idx);

      tmp22 = (modelica_boolean)(listLength(_idx_lst) == omc_NBVariable_size(threadData, _var, 0 /* false */));
      if(tmp22)
      {
        tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta23 = tmpMeta17;
      }
      else
      {
        {
          modelica_metatype __omcQ_24tmpVar3;
          modelica_metatype* tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype __omcQ_24tmpVar2;
          modelica_integer tmp21;
          modelica_metatype _i_loopVar = 0;
          modelica_metatype _i;
          _i_loopVar = _idx_lst;
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar3 = tmpMeta20; /* defaultValue */
          tmp19 = &__omcQ_24tmpVar3;
          while(1) {
            tmp21 = 1;
            if (!listEmpty(_i_loopVar)) {
              _i = MMC_CAR(_i_loopVar);
              _i_loopVar = MMC_CDR(_i_loopVar);
              tmp21--;
            }
            if (tmp21 == 0) {
              __omcQ_24tmpVar2 = omc_mk_integer(omc_unbox_integer(_i) - _var_scal_idx);
              *tmp19 = mmc_mk_cons(__omcQ_24tmpVar2,0);
              tmp19 = &MMC_CDR(*tmp19);
            } else if (tmp21 == 1) {
              break;
            } else {
              OMC_THROW_INTERNAL();
            }
          }
          *tmp19 = mmc_mk_nil();
          tmpMeta18 = __omcQ_24tmpVar3;
        }
        tmpMeta23 = tmpMeta18;
      }
      _idx_lst = tmpMeta23;

      tmpMeta25 = omc_mk_box3(3, &NBSlice_SLICE__desc, _var, omc_NBStrongComponent_sortAscending(threadData, _idx_lst));
      tmpMeta24 = mmc_mk_cons(tmpMeta25, _acc_vars);
      _acc_vars = tmpMeta24;
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta27 = omc_UnorderedMap_toList(threadData, _eqn_map); !listEmpty(tmpMeta27); tmpMeta27=MMC_CDR(tmpMeta27))
    {
      _tpl = MMC_CAR(tmpMeta27);
      /* Pattern-matching assignment */
      tmpMeta28 = _tpl;
      tmpMeta29 = OMC_BOX_FIELD(tmpMeta28, 1);
      tmp30 = omc_unbox_integer(tmpMeta29);
      tmpMeta31 = OMC_BOX_FIELD(tmpMeta28, 2);
      _eqn_arr_idx = tmp30  /* pattern as ty=Integer */;
      _idx_lst = tmpMeta31;

      /* Pattern-matching assignment */
      tmpMeta32 = arrayGet((OMC_BOX_FIELD(_mapping, 4)),_eqn_arr_idx) /* DAE.ASUB */;
      tmpMeta33 = OMC_BOX_FIELD(tmpMeta32, 1);
      tmp34 = omc_unbox_integer(tmpMeta33);
      _eqn_scal_idx = tmp34  /* pattern as ty=Integer */;

      _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, _eqn_arr_idx);

      tmp40 = (modelica_boolean)(listLength(_idx_lst) == omc_NBEquation_Equation_size(threadData, _eqn, 0 /* false */));
      if(tmp40)
      {
        tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta41 = tmpMeta35;
      }
      else
      {
        {
          modelica_metatype __omcQ_24tmpVar5;
          modelica_metatype* tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype __omcQ_24tmpVar4;
          modelica_integer tmp39;
          modelica_metatype _i_loopVar = 0;
          modelica_metatype _i;
          _i_loopVar = _idx_lst;
          tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar5 = tmpMeta38; /* defaultValue */
          tmp37 = &__omcQ_24tmpVar5;
          while(1) {
            tmp39 = 1;
            if (!listEmpty(_i_loopVar)) {
              _i = MMC_CAR(_i_loopVar);
              _i_loopVar = MMC_CDR(_i_loopVar);
              tmp39--;
            }
            if (tmp39 == 0) {
              __omcQ_24tmpVar4 = omc_mk_integer(omc_unbox_integer(_i) - _eqn_scal_idx);
              *tmp37 = mmc_mk_cons(__omcQ_24tmpVar4,0);
              tmp37 = &MMC_CDR(*tmp37);
            } else if (tmp39 == 1) {
              break;
            } else {
              OMC_THROW_INTERNAL();
            }
          }
          *tmp37 = mmc_mk_nil();
          tmpMeta36 = __omcQ_24tmpVar5;
        }
        tmpMeta41 = tmpMeta36;
      }
      _idx_lst = tmpMeta41;

      tmpMeta43 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, omc_NBStrongComponent_sortAscending(threadData, _idx_lst));
      tmpMeta42 = mmc_mk_cons(tmpMeta43, _acc_eqns);
      _acc_eqns = tmpMeta42;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_acc_eqns) { *out_acc_eqns = _acc_eqns; }
  omc_ret_ = _acc_vars;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_createSliceOrSingle(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var_slice, modelica_metatype _eqn_slice)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  if(((omc_NBSlice_isFull(threadData, _var_slice) && omc_NBSlice_isFull(threadData, _eqn_slice)) && (!omc_NFComponentRef_hasSubscripts(threadData, _cref))))
  {
    tmpMeta1 = omc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBSlice_getT(threadData, _var_slice), omc_NBSlice_getT(threadData, _eqn_slice), omc_mk_integer(1));
    _comp = tmpMeta1;
  }
  else
  {
    tmpMeta2 = omc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, _cref, _var_slice, _eqn_slice, omc_mk_integer(1));
    _comp = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}

static modelica_metatype closure6_NBVariable_size(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype resize = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBVariable_size(thData, var_ptr, resize);
}static modelica_metatype closure7_NBInitialization_containsHomotopyCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype b = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBInitialization_containsHomotopyCall(thData, $in_exp, b);
}
DLLModelDirection
modelica_metatype omc_NBStrongComponent_createPseudoScalar(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _eqn_to_var, modelica_metatype _mapping, modelica_metatype _vars, modelica_metatype _eqns)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp_indices;
    {
      modelica_integer _i;
      modelica_integer _var_scal_idx;
      modelica_integer _var_arr_idx;
      modelica_metatype _var = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _comp_vars = NULL;
      modelica_metatype _comp_eqns = NULL;
      modelica_metatype _tearingSet = NULL;
      modelica_metatype _var_slice = NULL;
      modelica_metatype _eqn_slice = NULL;
      modelica_metatype _homotopy = NULL;
      modelica_metatype _resolved_cref = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _var_scal_idx has no default value.
      // _var_arr_idx has no default value.
      // _var has no default value.
      // _eqn has no default value.
      // _comp_vars has no default value.
      // _comp_eqns has no default value.
      // _tearingSet has no default value.
      // _var_slice has no default value.
      // _eqn_slice has no default value.
      _homotopy = omc_Pointer_create(threadData, omc_mk_boolean(0 /* false */));
      // _resolved_cref has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = omc_unbox_integer(tmpMeta6);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _i = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _var_scal_idx = omc_unbox_integer(arrayGet(_eqn_to_var,_i) /* DAE.ASUB */);

          _var_arr_idx = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 3)),_var_scal_idx) /* DAE.ASUB */);

          _var = omc_NBVariable_VariablePointers_getVarAt(threadData, _vars, _var_arr_idx);

          _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 2)),_i) /* DAE.ASUB */));

          if(omc_NBEquation_Equation_isForEquation(threadData, _eqn))
          {
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
                    modelica_metatype tmpMeta16;
                    modelica_metatype tmpMeta17;
                    modelica_metatype tmpMeta18;
                    /* Pattern matching succeeded */
                    /* Pattern-matching tuple assignment */
                    tmpMeta16 = omc_NBStrongComponent_getLoopVarsAndEqns(threadData, _comp_indices, _eqn_to_var, _mapping, _vars, _eqns, &tmpMeta13);
                    if (listEmpty(tmpMeta16)) goto goto_9;
                    tmpMeta17 = MMC_CAR(tmpMeta16);
                    tmpMeta18 = MMC_CDR(tmpMeta16);
                    if (!listEmpty(tmpMeta18)) goto goto_9;
                    _var_slice = tmpMeta17;
                    if (listEmpty(tmpMeta13)) goto goto_9;
                    tmpMeta14 = MMC_CAR(tmpMeta13);
                    tmpMeta15 = MMC_CDR(tmpMeta13);
                    if (!listEmpty(tmpMeta15)) goto goto_9;
                    _eqn_slice = tmpMeta14;
                    goto tmp10_done;
                  }
                  case 1: {
                    /* Pattern matching succeeded */
                    omc_Error_addMessage(threadData, _OMC_LIT6, _OMC_LIT8);

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
                goto goto_2;
                tmp10_done2:;
              }
            }
            ;

            tmpMeta19 = omc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, omc_NBVariable_VariablePointers_varSlice(threadData, _vars, _var_scal_idx, omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 3)),_var_scal_idx) /* DAE.ASUB */), _mapping, 1 /* true */), _var_slice, _eqn_slice, omc_mk_integer(1));
            _comp = tmpMeta19;
          }
          else
          {
            if(omc_NBEquation_Equation_isCompound(threadData, _eqn))
            {
              tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta22 = omc_mk_box3(3, &NBSlice_SLICE__desc, _var, tmpMeta21);
              tmpMeta20 = mmc_mk_cons(tmpMeta22, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta24 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, tmpMeta23);
              tmpMeta25 = omc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, tmpMeta20, tmpMeta24, omc_mk_integer(1));
              _comp = tmpMeta25;
            }
            else
            {
              { /* matchcontinue expression */
                {
                  volatile mmc_switch_type tmp28;
                  int tmp29;
                  tmp28 = 0;
                  OMC_TRY_INTERNAL(mmc_jumper)
                  tmp27_top:
                  threadData->mmc_jumper = &new_mmc_jumper;
                  for (; tmp28 < 2; tmp28++) {
                    switch (MMC_SWITCH_CAST(tmp28)) {
                    case 0: {
                      modelica_metatype tmpMeta30;
                      modelica_metatype tmpMeta31;
                      modelica_metatype tmpMeta32;
                      modelica_metatype tmpMeta33;
                      modelica_metatype tmpMeta34;
                      modelica_metatype tmpMeta35;
                      /* Pattern matching succeeded */
                      /* Pattern-matching tuple assignment */
                      tmpMeta33 = omc_NBStrongComponent_getLoopVarsAndEqns(threadData, _comp_indices, _eqn_to_var, _mapping, _vars, _eqns, &tmpMeta30);
                      if (listEmpty(tmpMeta33)) goto goto_26;
                      tmpMeta34 = MMC_CAR(tmpMeta33);
                      tmpMeta35 = MMC_CDR(tmpMeta33);
                      if (!listEmpty(tmpMeta35)) goto goto_26;
                      _var_slice = tmpMeta34;
                      if (listEmpty(tmpMeta30)) goto goto_26;
                      tmpMeta31 = MMC_CAR(tmpMeta30);
                      tmpMeta32 = MMC_CDR(tmpMeta30);
                      if (!listEmpty(tmpMeta32)) goto goto_26;
                      _eqn_slice = tmpMeta31;
                      goto tmp27_done;
                    }
                    case 1: {
                      /* Pattern matching succeeded */
                      omc_Error_addMessage(threadData, _OMC_LIT6, _OMC_LIT8);

                      goto goto_26;
                      goto tmp27_done;
                    }
                    }
                    goto tmp27_end;
                    tmp27_end: ;
                  }
                  goto goto_26;
                  tmp27_done:
                  (void)tmp28;
                  OMC_RESTORE_INTERNAL(mmc_jumper);
                  goto tmp27_done2;
                  goto_26:;
                  OMC_CATCH_INTERNAL(mmc_jumper);
                  if (++tmp28 < 2) {
                    goto tmp27_top;
                  }
                  goto goto_2;
                  tmp27_done2:;
                }
              }
              ;

              _comp = omc_NBStrongComponent_createSliceOrSingle(threadData, omc_NBVariable_VariablePointers_varSlice(threadData, _vars, _var_scal_idx, omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 3)),_var_scal_idx) /* DAE.ASUB */), _mapping, 1 /* true */), _var_slice, _eqn_slice);
            }
          }
          tmpMeta1 = _comp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta36;
          
          /* Pattern matching succeeded */
          _comp_vars = omc_NBStrongComponent_getLoopVarsAndEqns(threadData, _comp_indices, _eqn_to_var, _mapping, _vars, _eqns ,&_comp_eqns);
          { /* match expression */
            modelica_metatype tmp39_1;modelica_metatype tmp39_2;
            tmp39_1 = _comp_vars;
            tmp39_2 = _comp_eqns;
            {
              volatile mmc_switch_type tmp39;
              int tmp40;
              tmp39 = 0;
              for (; tmp39 < 3; tmp39++) {
                switch (MMC_SWITCH_CAST(tmp39)) {
                case 0: {
                  modelica_metatype tmpMeta41;
                  modelica_metatype tmpMeta42;
                  modelica_metatype tmpMeta43;
                  modelica_metatype tmpMeta44;
                  modelica_metatype tmpMeta45;
                  modelica_boolean tmp46;
                  modelica_metatype tmpMeta47;
                  if (listEmpty(tmp39_1)) goto tmp38_end;
                  tmpMeta41 = MMC_CAR(tmp39_1);
                  tmpMeta42 = MMC_CDR(tmp39_1);
                  if (!listEmpty(tmpMeta42)) goto tmp38_end;
                  if (listEmpty(tmp39_2)) goto tmp38_end;
                  tmpMeta43 = MMC_CAR(tmp39_2);
                  tmpMeta44 = MMC_CDR(tmp39_2);
                  if (!listEmpty(tmpMeta44)) goto tmp38_end;
                  _var_slice = tmpMeta41;
                  _eqn_slice = tmpMeta43;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(!(omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, _eqn_slice)) || omc_NBEquation_Equation_isAlgorithm(threadData, omc_NBSlice_getT(threadData, _eqn_slice))))) goto tmp38_end;
                  tmp46 = (modelica_boolean)omc_NBSlice_isFull(threadData, _var_slice);
                  if(tmp46)
                  {
                    tmpMeta47 = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var_slice));
                  }
                  else
                  {
                    tmpMeta45 = omc_mk_box1(0, omc_mk_boolean(0 /* false */));
                    tmpMeta47 = omc_NBSlice_resolveSlicedCref(threadData, omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var_slice)), omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _eqn_slice)), omc_NBSlice_size(threadData, _var_slice, (modelica_fnptr) omc_mk_box2(0,closure6_NBVariable_size,tmpMeta45)));
                  }
                  _resolved_cref = tmpMeta47;
                  tmpMeta36 = omc_NBStrongComponent_createSliceOrSingle(threadData, _resolved_cref, _var_slice, _eqn_slice);
                  goto tmp38_done;
                }
                case 1: {
                  modelica_metatype tmpMeta48;
                  modelica_metatype tmpMeta49;
                  modelica_metatype tmpMeta50;
                  if (listEmpty(tmp39_2)) goto tmp38_end;
                  tmpMeta48 = MMC_CAR(tmp39_2);
                  tmpMeta49 = MMC_CDR(tmp39_2);
                  if (!listEmpty(tmpMeta49)) goto tmp38_end;
                  
                  _eqn_slice = tmpMeta48;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!((!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, _eqn_slice))) || omc_NBEquation_Equation_isRecordOrTupleEquation(threadData, omc_NBSlice_getT(threadData, _eqn_slice)))) goto tmp38_end;
                  tmpMeta50 = omc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, _comp_vars, _eqn_slice, omc_mk_integer(1));
                  tmpMeta36 = tmpMeta50;
                  goto tmp38_done;
                }
                case 2: {
                  modelica_metatype tmpMeta51;
                  modelica_metatype tmpMeta52;
                  modelica_metatype tmpMeta53;
                  modelica_metatype tmpMeta54;
                  modelica_metatype tmpMeta55;
                  modelica_metatype tmpMeta56;
                  
                  /* Pattern matching succeeded */
                  tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta52 = omc_mk_box5(3, &NBTearing_TEARING__SET__desc, _comp_vars, _comp_eqns, listArray(tmpMeta51), mmc_mk_none());
                  _tearingSet = tmpMeta52;

                  {
                    modelica_metatype _eqn;
                    for (tmpMeta53 = _comp_eqns; !listEmpty(tmpMeta53); tmpMeta53=MMC_CDR(tmpMeta53))
                    {
                      _eqn = MMC_CAR(tmpMeta53);
                      tmpMeta54 = omc_mk_box1(0, _homotopy);
                      omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _eqn)), (modelica_fnptr) omc_mk_box2(0,closure7_NBInitialization_containsHomotopyCall,tmpMeta54), mmc_mk_none(), boxvar_NFExpression_map);
                    }
                  }
                  tmpMeta56 = omc_mk_box9(9, &NBStrongComponent_ALGEBRAIC__LOOP__desc, omc_mk_integer(((modelica_integer) -1)), _tearingSet, mmc_mk_none(), omc_mk_boolean(0 /* false */), omc_mk_boolean(0 /* false */), omc_Pointer_access(threadData, _homotopy), omc_mk_integer(3), omc_mk_boolean(0 /* false */));
                  tmpMeta36 = tmpMeta56;
                  goto tmp38_done;
                }
                }
                goto tmp38_end;
                tmp38_end: ;
              }
              goto goto_37;
              goto_37:;
              goto goto_2;
              goto tmp38_done;
              tmp38_done:;
            }
          }tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT6, _OMC_LIT10);
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_setHomotopy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_boolean _homotopy)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_comp), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[7] = omc_mk_boolean(_homotopy);
          _comp = tmpMeta6;
          tmpMeta1 = _comp;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _comp;
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_setHomotopy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _homotopy)
{
  modelica_integer tmp1;
  modelica_metatype _comp = NULL;
  tmp1 = omc_unbox_integer(_homotopy);
  _comp = omc_NBStrongComponent_setHomotopy(threadData, __omcQ_24in_5Fcomp, tmp1);
  /* skip box _comp; NBStrongComponent */
  return _comp;
}

DLLModelDirection
modelica_boolean omc_NBStrongComponent_isAlgebraicLoop(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBStrongComponent_removeAlias(threadData, _comp);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,8) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_isAlgebraicLoop(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isAlgebraicLoop(threadData, _comp);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBStrongComponent_isSingleComponent(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBStrongComponent_removeAlias(threadData, _comp);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_isSingleComponent(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isSingleComponent(threadData, _comp);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBStrongComponent_isAlias(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_isAlias(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isAlias(threadData, _comp);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBStrongComponent_isDummy(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDummy(threadData, omc_Pointer_access(threadData, (OMC_BOX_FIELD(_comp, 3))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDummy(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3)))));
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
modelica_metatype boxptr_NBStrongComponent_isDummy(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isDummy(threadData, _comp);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBStrongComponent_isDiscrete(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, (OMC_BOX_FIELD(_comp, 3)));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp8;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (OMC_BOX_FIELD(_comp, 2));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar7;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar6 = omc_NBSlice_getT(threadData, _v);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar7;
          }
          tmp1 = (omc_NBEquation_Equation_isDiscrete(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3)))) || omc_List_any(threadData, tmpMeta5, boxvar_NBVariable_isDiscrete));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_all(threadData, (OMC_BOX_FIELD(_comp, 2)), boxvar_NBStrongComponent_isDiscrete);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_boolean((OMC_BOX_FIELD(_comp, 6)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (OMC_BOX_FIELD(_comp, 3));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta9;
          modelica_string tmp10;
          
          /* Pattern matching succeeded */
          tmp10 = stringAppend(_OMC_LIT11,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta9 = mmc_mk_cons(tmp10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta9);
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_isDiscrete(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isDiscrete(threadData, _comp);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_integer omc_NBStrongComponent_getSolveStatus(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_integer _status;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _status has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_comp, 4)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_comp, 4)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_comp, 5)));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_comp, 6)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_comp, 8)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (OMC_BOX_FIELD(_comp, 3));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_string tmp6;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT12,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta5 = mmc_mk_cons(tmp6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta5);
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
  _status = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _status;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_getSolveStatus(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_NBStrongComponent_getSolveStatus(threadData, _comp);
  out_status = omc_mk_icon(_status);
  return out_status;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_getEquations(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqns has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 3)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp13;
            modelica_metatype _slice_loopVar = 0;
            modelica_metatype _slice;
            _slice_loopVar = (OMC_BOX_FIELD(_comp, 2));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar9;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_slice_loopVar)) {
                _slice = MMC_CAR(_slice_loopVar);
                _slice_loopVar = MMC_CDR(_slice_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar8 = omc_NBStrongComponent_getEquations(threadData, _slice);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar9;
          }
          tmpMeta1 = omc_List_flatten(threadData, tmpMeta10);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBTearing_getResidualEqns(threadData, (OMC_BOX_FIELD(_comp, 3)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (OMC_BOX_FIELD(_comp, 3));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta14;
          modelica_string tmp15;
          
          /* Pattern matching succeeded */
          tmp15 = stringAppend(_OMC_LIT13,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta14 = mmc_mk_cons(tmp15, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta14);
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
  _eqns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqns;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_getVarCref(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _var_cref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var_cref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_comp, 2));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_comp, 2));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_comp, 2));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (OMC_BOX_FIELD(_comp, 3));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_string tmp6;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT14,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta5 = mmc_mk_cons(tmp6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta5);
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
  _var_cref = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _var_cref;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_getVariableCrefs(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _var_crefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var_crefs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons(omc_NBVariable_getVarName(threadData, (OMC_BOX_FIELD(_comp, 2))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp9;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (OMC_BOX_FIELD(_comp, 2));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar11;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar10 = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _v));
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar11;
          }
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          if(omc_NFComponentRef_isEmpty(threadData, (OMC_BOX_FIELD(_comp, 2))))
          {
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
                    tmpMeta14 = mmc_mk_cons(omc_NBVariable_getVarName(threadData, omc_NBEquation_Equation_getResidualVar(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))))), MMC_REFSTRUCTLIT(mmc_nil));
                    _var_crefs = tmpMeta14;
                    goto tmp11_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta15;
                    /* Pattern matching succeeded */
                    tmpMeta15 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 2)), MMC_REFSTRUCTLIT(mmc_nil));
                    _var_crefs = tmpMeta15;
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
                goto goto_2;
                tmp11_done2:;
              }
            }
            ;
          }
          else
          {
            tmpMeta16 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 2)), MMC_REFSTRUCTLIT(mmc_nil));
            _var_crefs = tmpMeta16;
          }
          tmpMeta1 = _var_crefs;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 2)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 2)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp20;
            modelica_metatype tmpMeta21;
            modelica_metatype tmpMeta22;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp26;
            modelica_metatype _slice_loopVar = 0;
            modelica_metatype _slice;
            _slice_loopVar = (OMC_BOX_FIELD(_comp, 2));
            tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta21; /* defaultValue */
            tmp20 = &__omcQ_24tmpVar15;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_slice_loopVar)) {
                _slice = MMC_CAR(_slice_loopVar);
                _slice_loopVar = MMC_CDR(_slice_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                {
                  modelica_metatype __omcQ_24tmpVar13;
                  modelica_metatype* tmp23;
                  modelica_metatype tmpMeta24;
                  modelica_metatype __omcQ_24tmpVar12;
                  modelica_integer tmp25;
                  modelica_metatype _var_loopVar = 0;
                  modelica_metatype _var;
                  _var_loopVar = omc_NBStrongComponent_getVariables(threadData, _slice);
                  tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar13 = tmpMeta24; /* defaultValue */
                  tmp23 = &__omcQ_24tmpVar13;
                  while(1) {
                    tmp25 = 1;
                    if (!listEmpty(_var_loopVar)) {
                      _var = MMC_CAR(_var_loopVar);
                      _var_loopVar = MMC_CDR(_var_loopVar);
                      tmp25--;
                    }
                    if (tmp25 == 0) {
                      __omcQ_24tmpVar12 = omc_NBVariable_getVarName(threadData, _var);
                      *tmp23 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                      tmp23 = &MMC_CDR(*tmp23);
                    } else if (tmp25 == 1) {
                      break;
                    } else {
                      goto goto_2;
                    }
                  }
                  *tmp23 = mmc_mk_nil();
                  tmpMeta22 = __omcQ_24tmpVar13;
                }
                __omcQ_24tmpVar14 = tmpMeta22;
                *tmp20 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp20 = &MMC_CDR(*tmp20);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp20 = mmc_mk_nil();
            tmpMeta19 = __omcQ_24tmpVar15;
          }
          tmpMeta1 = omc_List_flatten(threadData, tmpMeta19);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp28;
            modelica_metatype tmpMeta29;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp30;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = omc_NBTearing_getVariables(threadData, (OMC_BOX_FIELD(_comp, 3)));
            tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta29; /* defaultValue */
            tmp28 = &__omcQ_24tmpVar17;
            while(1) {
              tmp30 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp30--;
              }
              if (tmp30 == 0) {
                __omcQ_24tmpVar16 = omc_NBVariable_getVarName(threadData, _var);
                *tmp28 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp28 = &MMC_CDR(*tmp28);
              } else if (tmp30 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp28 = mmc_mk_nil();
            tmpMeta27 = __omcQ_24tmpVar17;
          }
          tmpMeta1 = tmpMeta27;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (OMC_BOX_FIELD(_comp, 3));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta31;
          modelica_string tmp32;
          
          /* Pattern matching succeeded */
          tmp32 = stringAppend(_OMC_LIT15,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta31 = mmc_mk_cons(tmp32, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta31);
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
  _var_crefs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _var_crefs;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_getVariables(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vars has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 2)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp9;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (OMC_BOX_FIELD(_comp, 2));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar19;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar18 = omc_NBSlice_getT(threadData, _v);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar19;
          }
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_cons(omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp16;
            modelica_metatype _slice_loopVar = 0;
            modelica_metatype _slice;
            _slice_loopVar = (OMC_BOX_FIELD(_comp, 2));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar21;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_slice_loopVar)) {
                _slice = MMC_CAR(_slice_loopVar);
                _slice_loopVar = MMC_CDR(_slice_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar20 = omc_NBStrongComponent_getVariables(threadData, _slice);
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar21;
          }
          tmpMeta1 = omc_List_flatten(threadData, tmpMeta13);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBTearing_getVariables(threadData, (OMC_BOX_FIELD(_comp, 3)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (OMC_BOX_FIELD(_comp, 3));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta17;
          modelica_string tmp18;
          
          /* Pattern matching succeeded */
          tmp18 = stringAppend(_OMC_LIT16,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta17 = mmc_mk_cons(tmp18, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta17);
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
  _vars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _vars;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_getLoopResiduals(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _residuals = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _residuals has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBTearing_getResidualVars(threadData, (OMC_BOX_FIELD(_comp, 3)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
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
  _residuals = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _residuals;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_addLoopJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _jac)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      modelica_metatype _strict = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _strict has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,8) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _strict = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = _jac;
          _strict = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_comp), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _strict;
          _comp = tmpMeta8;
          tmpMeta1 = _comp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_string tmp10;
          
          /* Pattern matching succeeded */
          tmp10 = stringAppend(_OMC_LIT17,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta9 = mmc_mk_cons(tmp10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta9);
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}

static modelica_metatype closure8_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}
DLLModelDirection
void omc_NBStrongComponent_addForLoopDependencies(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _indices, modelica_metatype _var_cref, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _map, modelica_metatype _set, modelica_integer _jacType)
{
  modelica_metatype _iter = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype _dependencies = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _scalarized_dependencies = NULL;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iter has no default value.
  // _body has no default value.
  // _dependencies has no default value.
  // _cref has no default value.
  // _scalarized_dependencies has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _eqn;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,5,5) == 0) goto goto_1;
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 3);
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta5, 4);
          if (listEmpty(tmpMeta7)) goto goto_1;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (!listEmpty(tmpMeta9)) goto goto_1;
          _iter = tmpMeta6;
          _body = tmpMeta8;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_string tmp11;
          /* Pattern matching succeeded */
          tmp11 = stringAppend(_OMC_LIT18,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT19));
          tmpMeta10 = mmc_mk_cons(tmp11, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta10);

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

  tmpMeta12 = omc_mk_box1(0, _set);
  _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, _eqn, (modelica_fnptr) omc_mk_box2(0,closure8_NBSlice_getDependentCrefCausalized,tmpMeta12), boxvar_NFExpression_fakeMap);

  if(omc_NFComponentRef_isEmpty(threadData, _var_cref))
  {
    /* Pattern-matching assignment */
    tmpMeta13 = omc_NBEquation_Equation_getLHS(threadData, _body);
    if (optionNone(tmpMeta13)) OMC_THROW_INTERNAL();
    tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 1);
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,6,2) == 0) OMC_THROW_INTERNAL();
    tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 3);
    _cref = tmpMeta15;
  }
  else
  {
    _cref = _var_cref;
  }

  _scalarized_dependencies = omc_NBSlice_getDependentCrefsPseudoForCausalized(threadData, _cref, _dependencies, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _iter, omc_NBEquation_Equation_size(threadData, omc_Pointer_create(threadData, _eqn), 0 /* false */), _indices, 0 /* false */);

  omc_NBStrongComponent_addScalarizedDependencies(threadData, _scalarized_dependencies, _map, (modelica_integer)_jacType);
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBStrongComponent_addForLoopDependencies(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _indices, modelica_metatype _var_cref, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _map, modelica_metatype _set, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_jacType);
  omc_NBStrongComponent_addForLoopDependencies(threadData, _eqn, _indices, _var_cref, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, tmp1);
  return;
}

DLLModelDirection
void omc_NBStrongComponent_addScalarizedDependencies(threadData_t *threadData, modelica_metatype _scalarized_dependencies, modelica_metatype _map, modelica_integer _jacType)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _dependencies = NULL;
  modelica_metatype _deps_set = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  // _dependencies has no default value.
  // _deps_set has no default value.
  {
    modelica_metatype _tpl;
    for (tmpMeta1 = listReverse(_scalarized_dependencies); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _tpl = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _tpl;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
      _cref = tmpMeta3;
      _dependencies = tmpMeta4;

      _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, omc_UnorderedSet_fromList(threadData, _dependencies, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual), _map, (modelica_integer)_jacType);

      omc_NBStrongComponent_updateDependencyMap(threadData, _cref, _deps_set, _map);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBStrongComponent_addScalarizedDependencies(threadData_t *threadData, modelica_metatype _scalarized_dependencies, modelica_metatype _map, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_jacType);
  omc_NBStrongComponent_addScalarizedDependencies(threadData, _scalarized_dependencies, _map, tmp1);
  return;
}

static modelica_metatype closure9_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure10_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure11_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure12_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure13_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure14_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}
DLLModelDirection
void omc_NBStrongComponent_collectCrefs(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _map, modelica_metatype _set, modelica_integer _jacType)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comp;
    {
      modelica_metatype _eqn_ptr = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _dependencies = NULL;
      modelica_metatype _loop_vars = NULL;
      modelica_metatype _tmp = NULL;
      modelica_metatype _scalarized_dependencies = NULL;
      modelica_metatype _strict = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _iter = NULL;
      modelica_metatype _deps_set = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _eqn_ptr has no default value.
      // _cref has no default value.
      // _dependencies has no default value.
      // _loop_vars has no default value.
      // _tmp has no default value.
      // _scalarized_dependencies has no default value.
      // _strict has no default value.
      // _eqn has no default value.
      // _iter has no default value.
      // _deps_set has no default value.
      tmp3 = 0;
      for (; tmp3 < 11; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isArrayEquation(threadData, (OMC_BOX_FIELD(_comp, 3)))) goto tmp2_end;
          tmpMeta5 = omc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, (OMC_BOX_FIELD(_comp, 3))), (modelica_fnptr) omc_mk_box2(0,closure9_NBSlice_getDependentCrefCausalized,tmpMeta5), boxvar_NFExpression_fakeMap);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _scalarized_dependencies = omc_NBSlice_getDependentCrefsPseudoArrayCausalized(threadData, omc_NBVariable_getVarName(threadData, (OMC_BOX_FIELD(_comp, 2))), _dependencies, tmpMeta6);

          omc_NBStrongComponent_addScalarizedDependencies(threadData, _scalarized_dependencies, _map, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = omc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, (OMC_BOX_FIELD(_comp, 3))), (modelica_fnptr) omc_mk_box2(0,closure10_NBSlice_getDependentCrefCausalized,tmpMeta7), boxvar_NFExpression_fakeMap);

          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp9;
            modelica_metatype tmpMeta10;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp11;
            modelica_metatype _dep_loopVar = 0;
            modelica_metatype _dep;
            _dep_loopVar = _dependencies;
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta10; /* defaultValue */
            tmp9 = &__omcQ_24tmpVar23;
            while(1) {
              tmp11 = 1;
              if (!listEmpty(_dep_loopVar)) {
                _dep = MMC_CAR(_dep_loopVar);
                _dep_loopVar = MMC_CDR(_dep_loopVar);
                tmp11--;
              }
              if (tmp11 == 0) {
                __omcQ_24tmpVar22 = omc_NFComponentRef_scalarizeAll(threadData, _dep, 1 /* true */);
                *tmp9 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp9 = &MMC_CDR(*tmp9);
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp9 = mmc_mk_nil();
            tmpMeta8 = __omcQ_24tmpVar23;
          }
          _dependencies = omc_List_flatten(threadData, tmpMeta8);

          _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, omc_UnorderedSet_fromList(threadData, _dependencies, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual), _map, (modelica_integer)_jacType);

          omc_NBStrongComponent_updateDependencyMap(threadData, omc_NBVariable_getVarName(threadData, (OMC_BOX_FIELD(_comp, 2))), _deps_set, _map);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta12 = omc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3)))), (modelica_fnptr) omc_mk_box2(0,closure11_NBSlice_getDependentCrefCausalized,tmpMeta12), boxvar_NFExpression_fakeMap);

          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp16;
            modelica_metatype _dep_loopVar = 0;
            modelica_metatype _dep;
            _dep_loopVar = _dependencies;
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar25;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_dep_loopVar)) {
                _dep = MMC_CAR(_dep_loopVar);
                _dep_loopVar = MMC_CDR(_dep_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar24 = omc_NFComponentRef_stripIteratorSubscripts(threadData, _dep);
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar25;
          }
          _dependencies = tmpMeta13;

          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp20;
            modelica_metatype _dep_loopVar = 0;
            modelica_metatype _dep;
            _dep_loopVar = _dependencies;
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar27;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_dep_loopVar)) {
                _dep = MMC_CAR(_dep_loopVar);
                _dep_loopVar = MMC_CDR(_dep_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar26 = omc_NFComponentRef_scalarizeAll(threadData, _dep, 1 /* true */);
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
          _dependencies = omc_List_flatten(threadData, tmpMeta17);

          _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, omc_UnorderedSet_fromList(threadData, _dependencies, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual), _map, (modelica_integer)_jacType);

          {
            modelica_metatype _var;
            for (tmpMeta21 = (OMC_BOX_FIELD(_comp, 2)); !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
            {
              _var = MMC_CAR(tmpMeta21);
              {
                modelica_metatype _cref;
                for (tmpMeta22 = omc_NFComponentRef_scalarizeAll(threadData, omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var)), 1 /* true */); !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
                {
                  _cref = MMC_CAR(tmpMeta22);
                  omc_NBStrongComponent_updateDependencyMap(threadData, _cref, _deps_set, _map);
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))))) goto tmp2_end;
          omc_NBStrongComponent_addForLoopDependencies(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4)))), (OMC_BOX_FIELD((OMC_BOX_FIELD(_comp, 4)), 3)), (OMC_BOX_FIELD(_comp, 2)), _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))))) goto tmp2_end;
          omc_NBStrongComponent_addForLoopDependencies(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4)))), (OMC_BOX_FIELD((OMC_BOX_FIELD(_comp, 4)), 3)), (OMC_BOX_FIELD(_comp, 2)), _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isArrayEquation(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))))) goto tmp2_end;
          _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));

          tmpMeta25 = omc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, _eqn, (modelica_fnptr) omc_mk_box2(0,closure12_NBSlice_getDependentCrefCausalized,tmpMeta25), boxvar_NFExpression_fakeMap);

          _scalarized_dependencies = omc_NBSlice_getDependentCrefsPseudoArrayCausalized(threadData, (OMC_BOX_FIELD(_comp, 2)), _dependencies, (OMC_BOX_FIELD((OMC_BOX_FIELD(_comp, 4)), 3)));

          omc_NBStrongComponent_addScalarizedDependencies(threadData, _scalarized_dependencies, _map, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));

          tmpMeta26 = omc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, _eqn, (modelica_fnptr) omc_mk_box2(0,closure13_NBSlice_getDependentCrefCausalized,tmpMeta26), boxvar_NFExpression_fakeMap);

          {
            modelica_metatype __omcQ_24tmpVar29;
            modelica_metatype* tmp28;
            modelica_metatype tmpMeta29;
            modelica_metatype __omcQ_24tmpVar28;
            modelica_integer tmp30;
            modelica_metatype _dep_loopVar = 0;
            modelica_metatype _dep;
            _dep_loopVar = _dependencies;
            tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar29 = tmpMeta29; /* defaultValue */
            tmp28 = &__omcQ_24tmpVar29;
            while(1) {
              tmp30 = 1;
              if (!listEmpty(_dep_loopVar)) {
                _dep = MMC_CAR(_dep_loopVar);
                _dep_loopVar = MMC_CDR(_dep_loopVar);
                tmp30--;
              }
              if (tmp30 == 0) {
                __omcQ_24tmpVar28 = omc_NFComponentRef_scalarizeAll(threadData, _dep, 1 /* true */);
                *tmp28 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                tmp28 = &MMC_CDR(*tmp28);
              } else if (tmp30 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp28 = mmc_mk_nil();
            tmpMeta27 = __omcQ_24tmpVar29;
          }
          _dependencies = omc_List_flatten(threadData, tmpMeta27);

          _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, omc_UnorderedSet_fromList(threadData, _dependencies, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual), _map, (modelica_integer)_jacType);

          omc_NBStrongComponent_updateDependencyMap(threadData, (OMC_BOX_FIELD(_comp, 2)), _deps_set, _map);
          goto tmp2_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))))) goto tmp2_end;
          omc_NBStrongComponent_addForLoopDependencies(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4)))), (OMC_BOX_FIELD((OMC_BOX_FIELD(_comp, 4)), 3)), (OMC_BOX_FIELD(_comp, 2)), _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta52;
          modelica_integer tmp56;
          modelica_integer tmp57;
          modelica_integer tmp58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,8) == 0) goto tmp2_end;
          tmpMeta31 = OMC_BOX_FIELD(tmp3_1, 3);
          
          _strict = tmpMeta31;
          /* Pattern matching succeeded */
          _deps_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

          {
            modelica_metatype _slice;
            for (tmpMeta32 = (OMC_BOX_FIELD(_strict, 3)); !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
            {
              _slice = MMC_CAR(tmpMeta32);
              tmpMeta33 = omc_mk_box1(0, _set);
              _tmp = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _slice)), (modelica_fnptr) omc_mk_box2(0,closure14_NBSlice_getDependentCrefCausalized,tmpMeta33), boxvar_NFExpression_fakeMap);

              _eqn_ptr = omc_NBSlice_getT(threadData, _slice);

              if(omc_NBEquation_Equation_isForEquation(threadData, _eqn_ptr))
              {
                /* Pattern-matching assignment */
                tmpMeta34 = omc_Pointer_access(threadData, _eqn_ptr);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,5,5) == 0) goto goto_1;
                tmpMeta35 = OMC_BOX_FIELD(tmpMeta34, 3);
                tmpMeta36 = OMC_BOX_FIELD(tmpMeta34, 4);
                if (listEmpty(tmpMeta36)) goto goto_1;
                tmpMeta37 = MMC_CAR(tmpMeta36);
                tmpMeta38 = MMC_CDR(tmpMeta36);
                if (!listEmpty(tmpMeta38)) goto goto_1;
                _iter = tmpMeta35;

                _cref = omc_NBEquation_Equation_getEqnName(threadData, _eqn_ptr);

                _scalarized_dependencies = omc_NBSlice_getDependentCrefsPseudoForCausalized(threadData, _cref, _tmp, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _iter, omc_NBEquation_Equation_size(threadData, _eqn_ptr, 0 /* false */), (OMC_BOX_FIELD(_slice, 3)), 1 /* true */);

                {
                  modelica_metatype __omcQ_24tmpVar31;
                  modelica_metatype* tmp40;
                  modelica_metatype tmpMeta41;
                  modelica_metatype __omcQ_24tmpVar30;
                  modelica_integer tmp42;
                  modelica_metatype _tpl_loopVar = 0;
                  modelica_metatype _tpl;
                  _tpl_loopVar = _scalarized_dependencies;
                  tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar31 = tmpMeta41; /* defaultValue */
                  tmp40 = &__omcQ_24tmpVar31;
                  while(1) {
                    tmp42 = 1;
                    if (!listEmpty(_tpl_loopVar)) {
                      _tpl = MMC_CAR(_tpl_loopVar);
                      _tpl_loopVar = MMC_CDR(_tpl_loopVar);
                      tmp42--;
                    }
                    if (tmp42 == 0) {
                      __omcQ_24tmpVar30 = omc_Util_tuple22(threadData, _tpl);
                      *tmp40 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                      tmp40 = &MMC_CDR(*tmp40);
                    } else if (tmp42 == 1) {
                      break;
                    } else {
                      goto goto_1;
                    }
                  }
                  *tmp40 = mmc_mk_nil();
                  tmpMeta39 = __omcQ_24tmpVar31;
                }
                _tmp = omc_List_flatten(threadData, tmpMeta39);
              }

              {
                modelica_metatype _dep;
                for (tmpMeta43 = _tmp; !listEmpty(tmpMeta43); tmpMeta43=MMC_CDR(tmpMeta43))
                {
                  _dep = MMC_CAR(tmpMeta43);
                  {
                    modelica_metatype _scal;
                    for (tmpMeta44 = omc_NFComponentRef_scalarizeAll(threadData, _dep, 1 /* true */); !listEmpty(tmpMeta44); tmpMeta44=MMC_CDR(tmpMeta44))
                    {
                      _scal = MMC_CAR(tmpMeta44);
                      omc_UnorderedSet_add(threadData, _scal, _deps_set);
                    }
                  }
                }
              }
            }
          }

          _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, _deps_set, _map, (modelica_integer)_jacType);

          {
            modelica_metatype __omcQ_24tmpVar33;
            modelica_metatype* tmp49;
            modelica_metatype tmpMeta50;
            modelica_metatype __omcQ_24tmpVar32;
            modelica_integer tmp51;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (OMC_BOX_FIELD(_strict, 2));
            tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar33 = tmpMeta50; /* defaultValue */
            tmp49 = &__omcQ_24tmpVar33;
            while(1) {
              tmp51 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp51--;
              }
              if (tmp51 == 0) {
                __omcQ_24tmpVar32 = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var));
                *tmp49 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                tmp49 = &MMC_CDR(*tmp49);
              } else if (tmp51 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp49 = mmc_mk_nil();
            tmpMeta48 = __omcQ_24tmpVar33;
          }
          _loop_vars = tmpMeta48;

          tmp56 = ((modelica_integer) 1); tmp57 = 1; tmp58 = arrayLength((OMC_BOX_FIELD(_strict, 4)));
          if(!(((tmp57 > 0) && (tmp56 > tmp58)) || ((tmp57 < 0) && (tmp56 < tmp58))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp56, tmp58); _i += tmp57)
            {

              omc_NBStrongComponent_collectCrefs(threadData, arrayGet((OMC_BOX_FIELD(_strict, 4)),_i) /* DAE.ASUB */, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, (modelica_integer)_jacType);

              {
                modelica_metatype __omcQ_24tmpVar35;
                modelica_metatype* tmp53;
                modelica_metatype tmpMeta54;
                modelica_metatype __omcQ_24tmpVar34;
                modelica_integer tmp55;
                modelica_metatype _var_loopVar = 0;
                modelica_metatype _var;
                _var_loopVar = omc_NBStrongComponent_getVariables(threadData, arrayGet((OMC_BOX_FIELD(_strict, 4)),_i) /* DAE.ASUB */);
                tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar35 = tmpMeta54; /* defaultValue */
                tmp53 = &__omcQ_24tmpVar35;
                while(1) {
                  tmp55 = 1;
                  if (!listEmpty(_var_loopVar)) {
                    _var = MMC_CAR(_var_loopVar);
                    _var_loopVar = MMC_CDR(_var_loopVar);
                    tmp55--;
                  }
                  if (tmp55 == 0) {
                    __omcQ_24tmpVar34 = omc_NBVariable_getVarName(threadData, _var);
                    *tmp53 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                    tmp53 = &MMC_CDR(*tmp53);
                  } else if (tmp55 == 1) {
                    break;
                  } else {
                    goto goto_1;
                  }
                }
                *tmp53 = mmc_mk_nil();
                tmpMeta52 = __omcQ_24tmpVar35;
              }
              _loop_vars = listAppend(tmpMeta52, _loop_vars);
            }
          }

          {
            modelica_metatype _cref;
            for (tmpMeta59 = _loop_vars; !listEmpty(tmpMeta59); tmpMeta59=MMC_CDR(tmpMeta59))
            {
              _cref = MMC_CAR(tmpMeta59);
              omc_NBStrongComponent_updateDependencyMap(threadData, _cref, _deps_set, _map);
            }
          }
          goto tmp2_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (OMC_BOX_FIELD(_comp, 3));
          _jacType = (modelica_integer)_jacType;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 10: {
          
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
void boxptr_NBStrongComponent_collectCrefs(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _map, modelica_metatype _set, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_jacType);
  omc_NBStrongComponent_collectCrefs(threadData, _comp, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, tmp1);
  return;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_toSolvedEquation(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqn has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 4);
          tmp7 = omc_unbox_integer(tmpMeta6);
          if (2 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_comp, 3));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          tmp9 = omc_unbox_integer(tmpMeta8);
          if (2 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3)));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 5);
          tmp11 = omc_unbox_integer(tmpMeta10);
          if (2 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4)));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4)));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_string tmp13;
          
          /* Pattern matching succeeded */
          tmp13 = stringAppend(_OMC_LIT20,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta12 = mmc_mk_cons(tmp13, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta12);
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
  _eqn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqn;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _eqn_ptr)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBEquation_Equation_getLHS(threadData, _eqn);
    {
      modelica_metatype _lhs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lhs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          
          _lhs = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = omc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBVariable_getVarPointer(threadData, omc_NFExpression_toCref(threadData, _lhs), _OMC_LIT21), _eqn_ptr, omc_mk_integer(2));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, tmpMeta8);
          tmpMeta10 = omc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, omc_NBEquation_Equation_getLHSVars(threadData, _eqn), tmpMeta9, omc_mk_integer(2));
          tmpMeta1 = tmpMeta10;
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}

static modelica_metatype closure15_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLModelDirection
modelica_metatype omc_NBStrongComponent_fromSolvedEquationSlice(threadData_t *threadData, modelica_metatype _eqn_slice)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _eqn_ptr = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype _subs = NULL;
  modelica_metatype _lhs_cref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  _eqn_ptr = omc_NBSlice_getT(threadData, _eqn_slice);
  _eqn = omc_Pointer_access(threadData, _eqn_ptr);
  // _body has no default value.
  // _subs has no default value.
  // _lhs_cref has no default value.
  if((((!listEmpty((OMC_BOX_FIELD(_eqn_slice, 3)))) && omc_NBEquation_Equation_isArrayEquation(threadData, _eqn_ptr)) && omc_List_hasOneElement(threadData, (OMC_BOX_FIELD(_eqn_slice, 3)))))
  {
    {
      modelica_metatype __omcQ_24tmpVar37;
      modelica_metatype* tmp2;
      modelica_metatype tmpMeta3;
      modelica_metatype tmpMeta4;
      modelica_metatype tmpMeta5;
      modelica_metatype __omcQ_24tmpVar36;
      modelica_integer tmp6;
      modelica_metatype _l_loopVar = 0;
      modelica_metatype _l;
      _l_loopVar = omc_NBSlice_indexToLocation(threadData, omc_unbox_integer(listHead((OMC_BOX_FIELD(_eqn_slice, 3)))), omc_NBEquation_Equation_sizes(threadData, _eqn_ptr, 0 /* false */));
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar37 = tmpMeta3; /* defaultValue */
      tmp2 = &__omcQ_24tmpVar37;
      while(1) {
        tmp6 = 1;
        if (!listEmpty(_l_loopVar)) {
          _l = MMC_CAR(_l_loopVar);
          _l_loopVar = MMC_CDR(_l_loopVar);
          tmp6--;
        }
        if (tmp6 == 0) {
          tmpMeta4 = omc_mk_box2(3, &NFExpression_INTEGER__desc, omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(_l))));
          tmpMeta5 = omc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta4);
          __omcQ_24tmpVar36 = tmpMeta5;
          *tmp2 = mmc_mk_cons(__omcQ_24tmpVar36,0);
          tmp2 = &MMC_CDR(*tmp2);
        } else if (tmp6 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp2 = mmc_mk_nil();
      tmpMeta1 = __omcQ_24tmpVar37;
    }
    _subs = tmpMeta1;

    _lhs_cref = omc_NFComponentRef_setSubscripts(threadData, _subs, omc_NFExpression_toCref(threadData, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, _eqn))));

    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta8 = omc_mk_box3(3, &NBSlice_SLICE__desc, omc_NBVariable_getVarPointer(threadData, _lhs_cref, _OMC_LIT37), tmpMeta7);
    tmpMeta9 = omc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, _lhs_cref, tmpMeta8, _eqn_slice, omc_mk_integer(2));
    _comp = tmpMeta9;
  }
  else
  {
    { /* match expression */
      modelica_metatype tmp13_1;
      tmp13_1 = _eqn;
      {
        int tmp13;
        {
          switch (MMC_SWITCH_CAST(valueConstructor(tmp13_1))) {
          case 3: {
            
            /* Pattern matching succeeded */
            tmpMeta10 = omc_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation(threadData, _eqn, _eqn_ptr);
            goto tmp12_done;
          }
          case 4: {
            
            /* Pattern matching succeeded */
            tmpMeta10 = omc_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation(threadData, _eqn, _eqn_ptr);
            goto tmp12_done;
          }
          case 5: {
            
            /* Pattern matching succeeded */
            tmpMeta10 = omc_NBStrongComponent_fromSolvedEquationSlice_simpleSolvedEquation(threadData, _eqn, _eqn_ptr);
            goto tmp12_done;
          }
          case 7: {
            modelica_metatype tmpMeta14;
            modelica_metatype tmpMeta15;
            modelica_metatype tmpMeta16;
            modelica_metatype tmpMeta17;
            modelica_metatype tmpMeta18;
            if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,4,4) == 0) goto tmp12_end;
            tmpMeta14 = OMC_BOX_FIELD(tmp13_1, 3);
            
            _body = tmpMeta14;
            /* Pattern matching succeeded */
            if(omc_NBEquation_IfEquationBody_isSplit(threadData, _body))
            {
              tmpMeta15 = omc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBVariable_getVarPointer(threadData, omc_NFExpression_toCref(threadData, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, _eqn))), _OMC_LIT22), _eqn_ptr, omc_mk_integer(2));
              _comp = tmpMeta15;
            }
            else
            {
              tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta17 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, tmpMeta16);
              tmpMeta18 = omc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, omc_NBEquation_Equation_getLHSVars(threadData, _eqn), tmpMeta17, omc_mk_integer(2));
              _comp = tmpMeta18;
            }
            tmpMeta10 = _comp;
            goto tmp12_done;
          }
          case 8: {
            modelica_metatype tmpMeta19;
            modelica_metatype tmpMeta20;
            modelica_metatype tmpMeta21;
            
            /* Pattern matching succeeded */
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta20 = omc_mk_box3(3, &NBSlice_SLICE__desc, omc_Pointer_create(threadData, _OMC_LIT35), tmpMeta19);
            tmpMeta21 = omc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, _OMC_LIT23, tmpMeta20, _eqn_slice, omc_mk_integer(2));
            tmpMeta10 = tmpMeta21;
            goto tmp12_done;
          }
          default:
          tmp12_default: OMC_LABEL_UNUSED; {
            modelica_metatype tmpMeta22;
            modelica_metatype tmpMeta23;
            modelica_string tmp24;
            
            /* Pattern matching succeeded */
            tmpMeta23 = omc_mk_box1(0, _OMC_LIT19);
            tmp24 = stringAppend(_OMC_LIT36,omc_NBSlice_toString(threadData, _eqn_slice, (modelica_fnptr) omc_mk_box2(0,closure15_NBEquation_Equation_pointerToString,tmpMeta23), ((modelica_integer) 10)));
            tmpMeta22 = mmc_mk_cons(tmp24, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta22);
            goto goto_11;
            goto tmp12_done;
          }
          }
          goto tmp12_end;
          tmp12_end: ;
        }
        goto goto_11;
        goto_11:;
        OMC_THROW_INTERNAL();
        goto tmp12_done;
        tmp12_done:;
      }
    }
    _comp = tmpMeta10;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_inlinedDAEModeComponent(threadData_t *threadData, modelica_metatype _eqns, modelica_integer *out_dae_type)
{
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _dae_type;
  modelica_metatype _new_eqn = NULL;
  modelica_metatype _new_comp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _comps = tmpMeta1;
  _dae_type = 1;
  // _new_eqn has no default value.
  // _new_comp has no default value.
  {
    modelica_metatype _eqn;
    for (tmpMeta2 = _eqns; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqn = MMC_CAR(tmpMeta2);
      if(omc_NBEquation_Equation_isDiscrete(threadData, _eqn))
      {
        if(((modelica_integer)_dae_type < 3))
        {
          _dae_type = 2;
        }
      }
      else
      {
        _new_eqn = omc_NBEquation_Equation_createResidual(threadData, _eqn, mmc_mk_none(), 0 /* false */, 1 /* true */);

        if(omc_NBEquation_Equation_isResidual(threadData, _new_eqn))
        {
          tmpMeta3 = omc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBEquation_Equation_getResidualVar(threadData, _new_eqn), _new_eqn, omc_mk_integer(1));
          _new_comp = tmpMeta3;

          tmpMeta4 = mmc_mk_cons(_new_comp, _comps);
          _comps = tmpMeta4;

          _dae_type = 4;
        }
        else
        {
          _dae_type = 3;

          break;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_dae_type) { *out_dae_type = _dae_type; }
  omc_ret_ = _comps;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_inlinedDAEModeComponent(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype *out_dae_type)
{
  modelica_integer _dae_type;
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  _comps = omc_NBStrongComponent_inlinedDAEModeComponent(threadData, _eqns, &_dae_type);
  /* skip box _comps; list<NBStrongComponent> */
  if (out_dae_type) { *out_dae_type = omc_mk_icon(_dae_type); }
  return _comps;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_singleDAEModeComponent(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_integer *out_dae_type)
{
  modelica_metatype _new_residuals = NULL;
  modelica_integer _dae_type;
  modelica_metatype _new_eqns = NULL;
  modelica_metatype _dummy_set = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _new_residuals has no default value.
  _dae_type = 4;
  // _new_eqns has no default value.
  // _dummy_set has no default value.
  // _eqn has no default value.
  // _eqns has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_eqns = omc_Pointer_create(threadData, tmpMeta1);

  _dummy_set = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));

  _eqn = omc_NBInline_inlineRecordTupleArrayEquation(threadData, omc_Pointer_access(threadData, _eqn_ptr), _OMC_LIT38, _variables, _new_eqns, _dummy_set, _uniqueIndex, 1 /* true */);

  _eqns = omc_Pointer_access(threadData, _new_eqns);

  tmp3 = (modelica_boolean)listEmpty(_eqns);
  if(tmp3)
  {
    tmpMeta2 = mmc_mk_cons(omc_Pointer_create(threadData, _eqn), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta4 = tmpMeta2;
  }
  else
  {
    tmpMeta4 = _eqns;
  }
  _eqns = tmpMeta4;

  _new_residuals = omc_NBStrongComponent_inlinedDAEModeComponent(threadData, _eqns ,&_dae_type);
  _return: OMC_LABEL_UNUSED
  if (out_dae_type) { *out_dae_type = _dae_type; }
  omc_ret_ = _new_residuals;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_singleDAEModeComponent(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_metatype *out_dae_type)
{
  modelica_integer _dae_type;
  modelica_metatype _new_residuals = NULL;
  _new_residuals = omc_NBStrongComponent_singleDAEModeComponent(threadData, _eqn_ptr, _variables, _uniqueIndex, &_dae_type);
  /* skip box _new_residuals; list<NBStrongComponent> */
  if (out_dae_type) { *out_dae_type = omc_mk_icon(_dae_type); }
  return _new_residuals;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_slicedDAEModeComponent(threadData_t *threadData, modelica_metatype _var_slices, modelica_metatype _eqn_slices, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_metatype _slice_set, modelica_integer *out_dae_type)
{
  modelica_metatype _new_residuals = NULL;
  modelica_integer _dae_type;
  modelica_metatype _eqn = NULL;
  modelica_metatype _eqn_name = NULL;
  modelica_metatype _acc_new_residuals = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _new_residuals has no default value.
  _dae_type = 4;
  // _eqn has no default value.
  // _eqn_name has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc_new_residuals = tmpMeta1;
  {
    modelica_metatype __omcQ_24tmpVar39;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar38;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = _var_slices;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar39 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar39;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar38 = (OMC_BOX_FIELD(_v, 3));
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar38,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar39;
  }
  if(omc_List_all(threadData, tmpMeta2, boxvar_listEmpty))
  {
    {
      modelica_metatype _eqn_slice;
      for (tmpMeta6 = _eqn_slices; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
      {
        _eqn_slice = MMC_CAR(tmpMeta6);
        _eqn = omc_NBSlice_getT(threadData, _eqn_slice);

        _eqn_name = omc_NBEquation_Equation_getEqnName(threadData, _eqn);

        if((listEmpty((OMC_BOX_FIELD(_eqn_slice, 3))) && (!omc_UnorderedSet_contains(threadData, _eqn_name, _slice_set))))
        {
          _new_residuals = omc_NBStrongComponent_singleDAEModeComponent(threadData, _eqn, _variables, _uniqueIndex ,&_dae_type);

          if(((modelica_integer)_dae_type == 4))
          {
            tmpMeta7 = mmc_mk_cons(_new_residuals, _acc_new_residuals);
            _acc_new_residuals = tmpMeta7;
          }
          else
          {
            if(((modelica_integer)_dae_type == 3))
            {
              break;
            }
          }
        }
        else
        {
          _dae_type = 3;

          break;
        }
      }
    }
  }
  else
  {
    _dae_type = 3;
  }

  if(((modelica_integer)_dae_type == 3))
  {
    {
      modelica_metatype _eqn_slice;
      for (tmpMeta9 = _eqn_slices; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
      {
        _eqn_slice = MMC_CAR(tmpMeta9);
        _eqn = omc_NBSlice_getT(threadData, _eqn_slice);

        _eqn_name = omc_NBEquation_Equation_getEqnName(threadData, _eqn);

        omc_UnorderedSet_add(threadData, _eqn_name, _slice_set);
      }
    }

    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    _new_residuals = tmpMeta11;
  }
  else
  {
    _new_residuals = omc_List_flatten(threadData, _acc_new_residuals);
  }
  _return: OMC_LABEL_UNUSED
  if (out_dae_type) { *out_dae_type = _dae_type; }
  omc_ret_ = _new_residuals;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_slicedDAEModeComponent(threadData_t *threadData, modelica_metatype _var_slices, modelica_metatype _eqn_slices, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_metatype _slice_set, modelica_metatype *out_dae_type)
{
  modelica_integer _dae_type;
  modelica_metatype _new_residuals = NULL;
  _new_residuals = omc_NBStrongComponent_slicedDAEModeComponent(threadData, _var_slices, _eqn_slices, _variables, _uniqueIndex, _slice_set, &_dae_type);
  /* skip box _new_residuals; list<NBStrongComponent> */
  if (out_dae_type) { *out_dae_type = omc_mk_icon(_dae_type); }
  return _new_residuals;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_sortDAEModeComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype __omcQ_24in_5Fresiduals, modelica_metatype __omcQ_24in_5Finners, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_metatype _slice_set, modelica_metatype *out_inners)
{
  modelica_metatype _residuals = NULL;
  modelica_metatype _inners = NULL;
  modelica_metatype _new_residuals = NULL;
  modelica_integer _dae_type;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta13;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _residuals = __omcQ_24in_5Fresiduals;
  _inners = __omcQ_24in_5Finners;
  // _new_residuals has no default value.
  // _dae_type has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBStrongComponent_singleDAEModeComponent(threadData, (OMC_BOX_FIELD(_comp, 3)), _variables, _uniqueIndex, &tmp1_c1);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 3)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, (OMC_BOX_FIELD(_comp, 2)), tmpMeta5, _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 3)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta7 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 4)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, tmpMeta6, tmpMeta7, _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 3)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta9 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 4)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, tmpMeta8, tmpMeta9, _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 3)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = mmc_mk_cons((OMC_BOX_FIELD(_comp, 4)), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, tmpMeta10, tmpMeta11, _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_comp, 3)), 2)), (OMC_BOX_FIELD((OMC_BOX_FIELD(_comp, 3)), 3)), _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta12;
          tmp1_c1 = (omc_NBStrongComponent_isDiscrete(threadData, _comp)?2:3);
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
  _new_residuals = tmpMeta[0+0];
  _dae_type = tmp1_c1;

  if(((modelica_integer)_dae_type == 4))
  {
    _residuals = listAppend(_new_residuals, _residuals);
  }
  else
  {
    if(((modelica_integer)_dae_type == 3))
    {
      tmpMeta13 = mmc_mk_cons(_comp, _inners);
      _inners = tmpMeta13;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_inners) { *out_inners = _inners; }
  omc_ret_ = _residuals;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_sortDAEModeComponents(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomps, modelica_metatype _variables, modelica_metatype _uniqueIndex)
{
  modelica_metatype _comps = NULL;
  modelica_metatype _residuals = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _inners = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _slice_set = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comps = __omcQ_24in_5Fcomps;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _residuals = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _inners = tmpMeta2;
  _slice_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _comps;
    {
      modelica_metatype _original = NULL;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _original has no default value.
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_integer tmp12;
          if (optionNone(tmp6_1)) goto tmp5_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp6_1, 1);
          _original = tmpMeta8;
          /* Pattern matching succeeded */
          {
            modelica_metatype _comp;
            for (tmpMeta9 = _original, tmp12 = arrayLength(tmpMeta9), tmp11 = 1; tmp11 <= tmp12; tmp11++)
            {
              _comp = arrayGet(tmpMeta9,tmp11);
              _residuals = omc_NBStrongComponent_sortDAEModeComponent(threadData, _comp, _residuals, _inners, _variables, _uniqueIndex, _slice_set ,&_inners);
            }
          }
          tmpMeta3 = mmc_mk_some(listArray(listAppend(listReverse(_inners), _residuals)));
          goto tmp5_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta3 = _comps;
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
  _comps = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comps;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_createPseudoEntwinedIndices(threadData_t *threadData, modelica_metatype _entwined_indices, modelica_metatype _eqns, modelica_metatype _mapping)
{
  modelica_metatype _flat_tpl_indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _arr_idx;
  modelica_integer _first_idx;
  modelica_metatype _eqn_StA = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _flat_tpl_indices = tmpMeta1;
  // _arr_idx has no default value.
  // _first_idx has no default value.
  // _eqn_StA has no default value.
  {
    modelica_metatype _tmp;
    for (tmpMeta2 = _entwined_indices, tmp12 = arrayLength(tmpMeta2), tmp11 = 1; tmp11 <= tmp12; tmp11++)
    {
      _tmp = arrayGet(tmpMeta2,tmp11);
      {
        modelica_metatype _scal_idx;
        for (tmpMeta3 = _tmp; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _scal_idx = MMC_CAR(tmpMeta3);
          _eqn_StA = (OMC_BOX_FIELD(_mapping, 2));

          _arr_idx = omc_unbox_integer(arrayGet(_eqn_StA,omc_unbox_integer(_scal_idx)) /* DAE.ASUB */);

          /* Pattern-matching assignment */
          tmpMeta4 = arrayGet((OMC_BOX_FIELD(_mapping, 4)),_arr_idx) /* DAE.ASUB */;
          tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 1);
          tmp6 = omc_unbox_integer(tmpMeta5);
          _first_idx = tmp6  /* pattern as ty=Integer */;

          tmpMeta8 = omc_mk_box2(0, omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, _arr_idx), omc_mk_integer(omc_unbox_integer(_scal_idx) - _first_idx));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _flat_tpl_indices);
          _flat_tpl_indices = tmpMeta7;
        }
      }
    }
  }

  _flat_tpl_indices = listReverse(_flat_tpl_indices);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _flat_tpl_indices;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_createAlias(threadData_t *threadData, modelica_integer _kind, modelica_integer _partitionIndex, modelica_metatype _index_ptr, modelica_metatype _orig_comp)
{
  modelica_metatype _alias_comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _alias_comp has no default value.
  tmpMeta1 = omc_mk_box4(3, &NBStrongComponent_AliasInfo_ALIAS__INFO__desc, omc_mk_integer((modelica_integer)_kind), omc_mk_integer(_partitionIndex), omc_Pointer_access(threadData, _index_ptr));
  tmpMeta2 = omc_mk_box3(10, &NBStrongComponent_ALIAS__desc, tmpMeta1, _orig_comp);
  _alias_comp = tmpMeta2;

  omc_Pointer_update(threadData, _index_ptr, omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(omc_Pointer_access(threadData, _index_ptr)))));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _alias_comp;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_createAlias(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _partitionIndex, modelica_metatype _index_ptr, modelica_metatype _orig_comp)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _alias_comp = NULL;
  tmp1 = omc_unbox_integer(_kind);
  tmp2 = omc_unbox_integer(_partitionIndex);
  _alias_comp = omc_NBStrongComponent_createAlias(threadData, tmp1, tmp2, _index_ptr, _orig_comp);
  /* skip box _alias_comp; NBStrongComponent */
  return _alias_comp;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_createPseudoEntwined(threadData_t *threadData, modelica_metatype _eqn_indices, modelica_metatype _eqn_to_var, modelica_metatype _mapping, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _nodes)
{
  modelica_metatype _entwined = NULL;
  modelica_metatype _elem_map = NULL;
  modelica_metatype _cref_map = NULL;
  modelica_integer _eqn_arr_idx;
  modelica_integer _var_arr_idx;
  modelica_metatype _scal_indices = NULL;
  modelica_metatype _entwined_slices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _entwined_tpl_lst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta25;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _entwined has no default value.
  _elem_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 1));
  _cref_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 1));
  // _eqn_arr_idx has no default value.
  // _var_arr_idx has no default value.
  // _scal_indices has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _entwined_slices = tmpMeta1;
  // _entwined_tpl_lst has no default value.
  {
    modelica_metatype _idx;
    for (tmpMeta2 = _eqn_indices; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _idx = MMC_CAR(tmpMeta2);
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta3 = mmc_mk_cons(_idx, omc_UnorderedMap_getOrDefault(threadData, arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(_idx)) /* DAE.ASUB */, _elem_map, tmpMeta4));
      omc_UnorderedMap_add(threadData, arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(_idx)) /* DAE.ASUB */, tmpMeta3, _elem_map);
    }
  }

  {
    modelica_metatype _node;
    for (tmpMeta6 = _nodes; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _node = MMC_CAR(tmpMeta6);
      { /* match expression */
        modelica_metatype tmp9_1;
        tmp9_1 = _node;
        {
          volatile mmc_switch_type tmp9;
          int tmp10;
          tmp9 = 0;
          for (; tmp9 < 2; tmp9++) {
            switch (MMC_SWITCH_CAST(tmp9)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,3,4) == 0) goto tmp8_end;
              
              /* Pattern matching succeeded */
              omc_UnorderedMap_add(threadData, (OMC_BOX_FIELD(_node, 5)), (OMC_BOX_FIELD(_node, 3)), _cref_map);
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
          goto_7:;
          OMC_THROW_INTERNAL();
          goto tmp8_done;
          tmp8_done:;
        }
      }
      ;
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta12 = omc_UnorderedMap_toList(threadData, _elem_map); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _tpl = MMC_CAR(tmpMeta12);
      /* Pattern-matching assignment */
      tmpMeta13 = _tpl;
      tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 1);
      tmp15 = omc_unbox_integer(tmpMeta14);
      tmpMeta16 = OMC_BOX_FIELD(tmpMeta13, 2);
      _eqn_arr_idx = tmp15  /* pattern as ty=Integer */;
      _scal_indices = tmpMeta16;

      if(omc_UnorderedMap_contains(threadData, omc_mk_integer(_eqn_arr_idx), _cref_map))
      {
        _var_arr_idx = omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 3)),omc_unbox_integer(arrayGet(_eqn_to_var,omc_unbox_integer(omc_Util_tuple21(threadData, arrayGet((OMC_BOX_FIELD(_mapping, 4)),_eqn_arr_idx) /* DAE.ASUB */))) /* DAE.ASUB */)) /* DAE.ASUB */);

        tmpMeta17 = mmc_mk_cons(omc_NBStrongComponent_createPseudoSlice(threadData, _var_arr_idx, _eqn_arr_idx, omc_UnorderedMap_getSafe(threadData, omc_mk_integer(_eqn_arr_idx), _cref_map, _OMC_LIT39), _scal_indices, _eqn_to_var, _eqns, _mapping, 0 /* false */), _entwined_slices);
        _entwined_slices = tmpMeta17;
      }
      else
      {
        tmpMeta18 = mmc_mk_cons(omc_NBStrongComponent_createPseudoScalar(threadData, _scal_indices, _eqn_to_var, _mapping, _vars, _eqns), _entwined_slices);
        _entwined_slices = tmpMeta18;
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar41;
    modelica_metatype* tmp21;
    modelica_metatype tmpMeta22;
    modelica_metatype tmpMeta23;
    modelica_metatype __omcQ_24tmpVar40;
    modelica_integer tmp24;
    modelica_metatype _idx_loopVar = 0;
    modelica_metatype _idx;
    _idx_loopVar = _eqn_indices;
    tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar41 = tmpMeta22; /* defaultValue */
    tmp21 = &__omcQ_24tmpVar41;
    while(1) {
      tmp24 = 1;
      if (!listEmpty(_idx_loopVar)) {
        _idx = MMC_CAR(_idx_loopVar);
        _idx_loopVar = MMC_CDR(_idx_loopVar);
        tmp24--;
      }
      if (tmp24 == 0) {
        tmpMeta23 = omc_mk_box2(0, omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, omc_unbox_integer(arrayGet((OMC_BOX_FIELD(_mapping, 2)),omc_unbox_integer(_idx)) /* DAE.ASUB */)), _idx);
        __omcQ_24tmpVar40 = tmpMeta23;
        *tmp21 = mmc_mk_cons(__omcQ_24tmpVar40,0);
        tmp21 = &MMC_CDR(*tmp21);
      } else if (tmp24 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp21 = mmc_mk_nil();
    tmpMeta20 = __omcQ_24tmpVar41;
  }
  _entwined_tpl_lst = tmpMeta20;

  tmpMeta25 = omc_mk_box3(8, &NBStrongComponent_ENTWINED__COMPONENT__desc, _entwined_slices, _entwined_tpl_lst);
  _entwined = tmpMeta25;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _entwined;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_createPseudoSlice(threadData_t *threadData, modelica_integer _var_arr_idx, modelica_integer _eqn_arr_idx, modelica_metatype _cref_to_solve, modelica_metatype _eqn_scal_indices, modelica_metatype _eqn_to_var, modelica_metatype _eqns, modelica_metatype _mapping, modelica_boolean _independent)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _eqn_ptr = NULL;
  modelica_integer _first_var;
  modelica_integer _var_size;
  modelica_integer _first_eqn;
  modelica_integer _eqn_size;
  modelica_metatype _var_slice = NULL;
  modelica_metatype _eqn_slice = NULL;
  modelica_metatype _var_scal_indices = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  // _var_ptr has no default value.
  // _eqn_ptr has no default value.
  // _first_var has no default value.
  // _var_size has no default value.
  // _first_eqn has no default value.
  // _eqn_size has no default value.
  // _var_slice has no default value.
  // _eqn_slice has no default value.
  // _var_scal_indices has no default value.
  // _order has no default value.
  _var_ptr = omc_NBVariable_getVarPointer(threadData, _cref_to_solve, _OMC_LIT40);

  _eqn_ptr = omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, _eqn_arr_idx);

  /* Pattern-matching assignment */
  tmpMeta1 = arrayGet((OMC_BOX_FIELD(_mapping, 5)),_var_arr_idx) /* DAE.ASUB */;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmp3 = omc_unbox_integer(tmpMeta2);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmp5 = omc_unbox_integer(tmpMeta4);
  _first_var = tmp3  /* pattern as ty=Integer */;
  _var_size = tmp5  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta6 = arrayGet((OMC_BOX_FIELD(_mapping, 4)),_eqn_arr_idx) /* DAE.ASUB */;
  tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
  tmp8 = omc_unbox_integer(tmpMeta7);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta6, 2);
  tmp10 = omc_unbox_integer(tmpMeta9);
  _first_eqn = tmp8  /* pattern as ty=Integer */;
  _eqn_size = tmp10  /* pattern as ty=Integer */;

  {
    modelica_metatype __omcQ_24tmpVar43;
    modelica_metatype* tmp12;
    modelica_metatype tmpMeta13;
    modelica_metatype __omcQ_24tmpVar42;
    modelica_integer tmp14;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _eqn_scal_indices;
    tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar43 = tmpMeta13; /* defaultValue */
    tmp12 = &__omcQ_24tmpVar43;
    while(1) {
      tmp14 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp14--;
      }
      if (tmp14 == 0) {
        __omcQ_24tmpVar42 = arrayGet(_eqn_to_var,omc_unbox_integer(_e)) /* DAE.ASUB */;
        *tmp12 = mmc_mk_cons(__omcQ_24tmpVar42,0);
        tmp12 = &MMC_CDR(*tmp12);
      } else if (tmp14 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp12 = mmc_mk_nil();
    tmpMeta11 = __omcQ_24tmpVar43;
  }
  _var_scal_indices = tmpMeta11;

  if((((_independent && omc_NBEquation_Equation_isArrayEquation(threadData, _eqn_ptr)) && (listLength(_eqn_scal_indices) == _eqn_size)) && (listLength(_var_scal_indices) == _var_size)))
  {
    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta16 = omc_mk_box3(3, &NBSlice_SLICE__desc, _var_ptr, tmpMeta15);
    _var_slice = tmpMeta16;

    tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta18 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, tmpMeta17);
    _eqn_slice = tmpMeta18;
  }
  else
  {
    {
      modelica_metatype __omcQ_24tmpVar45;
      modelica_metatype* tmp20;
      modelica_metatype tmpMeta21;
      modelica_metatype __omcQ_24tmpVar44;
      modelica_integer tmp22;
      modelica_metatype _idx_loopVar = 0;
      modelica_metatype _idx;
      _idx_loopVar = _var_scal_indices;
      tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar45 = tmpMeta21; /* defaultValue */
      tmp20 = &__omcQ_24tmpVar45;
      while(1) {
        tmp22 = 1;
        if (!listEmpty(_idx_loopVar)) {
          _idx = MMC_CAR(_idx_loopVar);
          _idx_loopVar = MMC_CDR(_idx_loopVar);
          tmp22--;
        }
        if (tmp22 == 0) {
          __omcQ_24tmpVar44 = omc_mk_integer(omc_unbox_integer(_idx) - _first_var);
          *tmp20 = mmc_mk_cons(__omcQ_24tmpVar44,0);
          tmp20 = &MMC_CDR(*tmp20);
        } else if (tmp22 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp20 = mmc_mk_nil();
      tmpMeta19 = __omcQ_24tmpVar45;
    }
    tmpMeta23 = omc_mk_box3(3, &NBSlice_SLICE__desc, _var_ptr, tmpMeta19);
    _var_slice = tmpMeta23;

    {
      modelica_metatype __omcQ_24tmpVar47;
      modelica_metatype* tmp25;
      modelica_metatype tmpMeta26;
      modelica_metatype __omcQ_24tmpVar46;
      modelica_integer tmp27;
      modelica_metatype _idx_loopVar = 0;
      modelica_metatype _idx;
      _idx_loopVar = _eqn_scal_indices;
      tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar47 = tmpMeta26; /* defaultValue */
      tmp25 = &__omcQ_24tmpVar47;
      while(1) {
        tmp27 = 1;
        if (!listEmpty(_idx_loopVar)) {
          _idx = MMC_CAR(_idx_loopVar);
          _idx_loopVar = MMC_CDR(_idx_loopVar);
          tmp27--;
        }
        if (tmp27 == 0) {
          __omcQ_24tmpVar46 = omc_mk_integer(omc_unbox_integer(_idx) - _first_eqn);
          *tmp25 = mmc_mk_cons(__omcQ_24tmpVar46,0);
          tmp25 = &MMC_CDR(*tmp25);
        } else if (tmp27 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp25 = mmc_mk_nil();
      tmpMeta24 = __omcQ_24tmpVar47;
    }
    tmpMeta28 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, tmpMeta24);
    _eqn_slice = tmpMeta28;
  }

  _order = omc_NBResizable_detect(threadData, omc_Pointer_access(threadData, _eqn_ptr), _cref_to_solve);

  if(((!omc_List_any(threadData, omc_UnorderedMap_valueList(threadData, _order), boxvar_NBResizable_orderFailed)) && (listLength(_eqn_scal_indices) == _eqn_size)))
  {
    tmpMeta29 = omc_mk_box6(6, &NBStrongComponent_RESIZABLE__COMPONENT__desc, _cref_to_solve, _var_slice, _eqn_slice, _order, omc_mk_integer(1));
    _comp = tmpMeta29;
  }
  else
  {
    _comp = omc_NBStrongComponent_createSliceOrSingle(threadData, _cref_to_solve, _var_slice, _eqn_slice);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_createPseudoSlice(threadData_t *threadData, modelica_metatype _var_arr_idx, modelica_metatype _eqn_arr_idx, modelica_metatype _cref_to_solve, modelica_metatype _eqn_scal_indices, modelica_metatype _eqn_to_var, modelica_metatype _eqns, modelica_metatype _mapping, modelica_metatype _independent)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _comp = NULL;
  tmp1 = omc_unbox_integer(_var_arr_idx);
  tmp2 = omc_unbox_integer(_eqn_arr_idx);
  tmp3 = omc_unbox_integer(_independent);
  _comp = omc_NBStrongComponent_createPseudoSlice(threadData, tmp1, tmp2, _cref_to_solve, _eqn_scal_indices, _eqn_to_var, _eqns, _mapping, tmp3);
  /* skip box _comp; NBStrongComponent */
  return _comp;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_removeAlias(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_comp, 3));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _comp;
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}

static modelica_metatype closure16_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure17_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure18_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure19_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}
DLLModelDirection
modelica_integer omc_NBStrongComponent_size(threadData_t *threadData, modelica_metatype _comp, modelica_boolean _resize)
{
  modelica_integer _s;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_size(threadData, (OMC_BOX_FIELD(_comp, 3)), _resize);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = omc_mk_box1(0, omc_mk_boolean(_resize));
          tmp1 = omc_NBSlice_size(threadData, (OMC_BOX_FIELD(_comp, 3)), (modelica_fnptr) omc_mk_box2(0,closure16_NBEquation_Equation_size,tmpMeta5));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box1(0, omc_mk_boolean(_resize));
          tmp1 = omc_NBSlice_size(threadData, (OMC_BOX_FIELD(_comp, 4)), (modelica_fnptr) omc_mk_box2(0,closure17_NBEquation_Equation_size,tmpMeta6));
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = omc_mk_box1(0, omc_mk_boolean(_resize));
          tmp1 = omc_NBSlice_size(threadData, (OMC_BOX_FIELD(_comp, 4)), (modelica_fnptr) omc_mk_box2(0,closure18_NBEquation_Equation_size,tmpMeta7));
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = omc_mk_box1(0, omc_mk_boolean(_resize));
          tmp1 = omc_NBSlice_size(threadData, (OMC_BOX_FIELD(_comp, 4)), (modelica_fnptr) omc_mk_box2(0,closure19_NBEquation_Equation_size,tmpMeta8));
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp9;
          
          /* Pattern matching succeeded */
          {
            modelica_integer __omcQ_24tmpVar49;
            modelica_integer __omcQ_24tmpVar48;
            modelica_integer tmp10;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype _c;
            _c_loopVar = (OMC_BOX_FIELD(_comp, 2));
            __omcQ_24tmpVar49 = ((modelica_integer) 0); /* defaultValue */
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar48 = omc_NBStrongComponent_size(threadData, _c, _resize);
                __omcQ_24tmpVar49 = __omcQ_24tmpVar49 + __omcQ_24tmpVar48;
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp9 = __omcQ_24tmpVar49;
          }
          tmp1 = tmp9;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBTearing_size(threadData, (OMC_BOX_FIELD(_comp, 3)), _resize);
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (OMC_BOX_FIELD(_comp, 3));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta11;
          modelica_string tmp12;
          modelica_string tmp13;
          
          /* Pattern matching succeeded */
          tmp12 = stringAppend(_OMC_LIT41,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmp13 = stringAppend(tmp12,_OMC_LIT42);
          tmpMeta11 = mmc_mk_cons(tmp13, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta11);
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
  _s = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _s;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_size(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _resize)
{
  modelica_integer tmp1;
  modelica_integer _s;
  modelica_metatype out_s;
  tmp1 = omc_unbox_integer(_resize);
  _s = omc_NBStrongComponent_size(threadData, _comp, tmp1);
  out_s = omc_mk_icon(_s);
  return out_s;
}

DLLModelDirection
modelica_boolean omc_NBStrongComponent_isEqual(threadData_t *threadData, modelica_metatype _comp1, modelica_metatype _comp2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _comp1;
    tmp4_2 = _comp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NBVariable_equalName(threadData, (OMC_BOX_FIELD(_comp1, 2)), (OMC_BOX_FIELD(_comp2, 2))) && omc_NBEquation_Equation_isEqualPtr(threadData, (OMC_BOX_FIELD(_comp1, 3)), (OMC_BOX_FIELD(_comp2, 3))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isEqualPtr(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp1, 3))), omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp2, 3))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFComponentRef_isEqual(threadData, (OMC_BOX_FIELD(_comp1, 2)), (OMC_BOX_FIELD(_comp2, 2))) && omc_NBSlice_isEqual(threadData, (OMC_BOX_FIELD(_comp1, 4)), (OMC_BOX_FIELD(_comp2, 4)), boxvar_NBEquation_Equation_isEqualPtr));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFComponentRef_isEqual(threadData, (OMC_BOX_FIELD(_comp1, 2)), (OMC_BOX_FIELD(_comp2, 2))) && omc_NBSlice_isEqual(threadData, (OMC_BOX_FIELD(_comp1, 4)), (OMC_BOX_FIELD(_comp2, 4)), boxvar_NBEquation_Equation_isEqualPtr));
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBSlice_isEqual(threadData, (OMC_BOX_FIELD(_comp1, 4)), (OMC_BOX_FIELD(_comp2, 4)), boxvar_NBEquation_Equation_isEqualPtr);
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_isEqualOnTrue(threadData, (OMC_BOX_FIELD(_comp1, 2)), (OMC_BOX_FIELD(_comp2, 2)), boxvar_NBStrongComponent_isEqual);
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,8) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBTearing_isEqual(threadData, (OMC_BOX_FIELD(_comp1, 3)), (OMC_BOX_FIELD(_comp2, 3)));
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBStrongComponent_AliasInfo_isEqual(threadData, (OMC_BOX_FIELD(_comp1, 2)), (OMC_BOX_FIELD(_comp2, 2)));
          goto tmp3_done;
        }
        case 8: {
          
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
modelica_metatype boxptr_NBStrongComponent_isEqual(threadData_t *threadData, modelica_metatype _comp1, modelica_metatype _comp2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isEqual(threadData, _comp1, _comp2);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_integer omc_NBStrongComponent_hash(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBVariable_hash(threadData, (OMC_BOX_FIELD(_comp, 2))) + omc_NBEquation_Equation_hash(threadData, (OMC_BOX_FIELD(_comp, 3)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_hash(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFComponentRef_hash(threadData, (OMC_BOX_FIELD(_comp, 2))) + omc_NBEquation_Equation_hash(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFComponentRef_hash(threadData, (OMC_BOX_FIELD(_comp, 2))) + omc_NBEquation_Equation_hash(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_hash(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp5;
          
          /* Pattern matching succeeded */
          {
            modelica_integer __omcQ_24tmpVar51;
            modelica_integer __omcQ_24tmpVar50;
            modelica_integer tmp6;
            modelica_metatype _sub_comp_loopVar = 0;
            modelica_metatype _sub_comp;
            _sub_comp_loopVar = (OMC_BOX_FIELD(_comp, 2));
            __omcQ_24tmpVar51 = ((modelica_integer) 0); /* defaultValue */
            while(1) {
              tmp6 = 1;
              if (!listEmpty(_sub_comp_loopVar)) {
                _sub_comp = MMC_CAR(_sub_comp_loopVar);
                _sub_comp_loopVar = MMC_CDR(_sub_comp_loopVar);
                tmp6--;
              }
              if (tmp6 == 0) {
                __omcQ_24tmpVar50 = omc_NBStrongComponent_hash(threadData, _sub_comp);
                __omcQ_24tmpVar51 = __omcQ_24tmpVar51 + __omcQ_24tmpVar50;
              } else if (tmp6 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp5 = __omcQ_24tmpVar51;
          }
          tmp1 = tmp5;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBTearing_hash(threadData, (OMC_BOX_FIELD(_comp, 3)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBStrongComponent_AliasInfo_hash(threadData, (OMC_BOX_FIELD(_comp, 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT6, _OMC_LIT44);
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
  _i = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _i;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_hash(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBStrongComponent_hash(threadData, _comp);
  out_i = omc_mk_icon(_i);
  return out_i;
}

DLLModelDirection
modelica_metatype omc_NBStrongComponent_strongComponentInfo(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _collector_ptr)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _collector = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  _collector = omc_Pointer_access(threadData, _collector_ptr);
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 10; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp7_1;
            tmp7_1 = omc_Pointer_access(threadData, (OMC_BOX_FIELD(_comp, 3)));
            {
              int tmp7;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp7_1))) {
                case 3: {
                  modelica_metatype tmpMeta8;
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 2)))));
                  _collector = tmpMeta8;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp6_done;
                }
                case 4: {
                  modelica_metatype tmpMeta9;
                  
                  /* Pattern matching succeeded */
                  tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 3)))));
                  _collector = tmpMeta9;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp6_done;
                }
                case 5: {
                  modelica_metatype tmpMeta10;
                  
                  /* Pattern matching succeeded */
                  tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 4)))));
                  _collector = tmpMeta10;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp6_done;
                }
                default:
                tmp6_default: OMC_LABEL_UNUSED; {
                  modelica_string tmp11;
                  modelica_string tmp12;
                  
                  /* Pattern matching succeeded */
                  tmp11 = stringAppend(_OMC_LIT45,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
                  tmp12 = stringAppend(tmp11,_OMC_LIT42);
                  omc_Error_addCompilerWarning(threadData, tmp12);
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
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp15_1;
            tmp15_1 = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3))));
            {
              int tmp15;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp15_1))) {
                case 6: {
                  modelica_metatype tmpMeta16;
                  
                  /* Pattern matching succeeded */
                  tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[5] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 5)))));
                  _collector = tmpMeta16;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp14_done;
                }
                case 9: {
                  modelica_metatype tmpMeta17;
                  
                  /* Pattern matching succeeded */
                  tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[6] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 6)))));
                  _collector = tmpMeta17;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp14_done;
                }
                case 7: {
                  modelica_metatype tmpMeta18;
                  
                  /* Pattern matching succeeded */
                  tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[7] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 7)))));
                  _collector = tmpMeta18;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp14_done;
                }
                case 5: {
                  modelica_metatype tmpMeta19;
                  
                  /* Pattern matching succeeded */
                  tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[8] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 8)))));
                  _collector = tmpMeta19;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp14_done;
                }
                default:
                tmp14_default: OMC_LABEL_UNUSED; {
                  modelica_string tmp20;
                  modelica_string tmp21;
                  
                  /* Pattern matching succeeded */
                  tmp20 = stringAppend(_OMC_LIT45,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
                  tmp21 = stringAppend(tmp20,_OMC_LIT42);
                  omc_Error_addCompilerWarning(threadData, tmp21);
                  goto tmp14_done;
                }
                }
                goto tmp14_end;
                tmp14_end: ;
              }
              goto goto_13;
              goto_13:;
              goto goto_1;
              goto tmp14_done;
              tmp14_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp24_1;
            tmp24_1 = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
            {
              int tmp24;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp24_1))) {
                case 3: {
                  modelica_metatype tmpMeta25;
                  
                  /* Pattern matching succeeded */
                  tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[2] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 2)))));
                  _collector = tmpMeta25;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp23_done;
                }
                case 4: {
                  modelica_metatype tmpMeta26;
                  
                  /* Pattern matching succeeded */
                  tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[3] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 3)))));
                  _collector = tmpMeta26;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp23_done;
                }
                case 5: {
                  modelica_metatype tmpMeta27;
                  
                  /* Pattern matching succeeded */
                  tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[4] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 4)))));
                  _collector = tmpMeta27;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp23_done;
                }
                default:
                tmp23_default: OMC_LABEL_UNUSED; {
                  modelica_string tmp28;
                  modelica_string tmp29;
                  
                  /* Pattern matching succeeded */
                  tmp28 = stringAppend(_OMC_LIT45,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
                  tmp29 = stringAppend(tmp28,_OMC_LIT42);
                  omc_Error_addCompilerWarning(threadData, tmp29);
                  goto tmp23_done;
                }
                }
                goto tmp23_end;
                tmp23_end: ;
              }
              goto goto_22;
              goto_22:;
              goto goto_1;
              goto tmp23_done;
              tmp23_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[9] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 9)))));
          _collector = tmpMeta30;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[10] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 10)))));
          _collector = tmpMeta31;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[11] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 11)))));
          _collector = tmpMeta32;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_unbox_boolean((OMC_BOX_FIELD(_comp, 5)))) goto tmp2_end;
          tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[12] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 12)))));
          _collector = tmpMeta33;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[13] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_collector, 13)))));
          _collector = tmpMeta34;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_NBStrongComponent_strongComponentInfo(threadData, (OMC_BOX_FIELD(_comp, 3)), _collector_ptr);
          goto tmp2_done;
        }
        case 9: {
          modelica_string tmp35;
          modelica_string tmp36;
          
          /* Pattern matching succeeded */
          tmp35 = stringAppend(_OMC_LIT45,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmp36 = stringAppend(tmp35,_OMC_LIT42);
          omc_Error_addCompilerWarning(threadData, tmp36);
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
  omc_ret_ = _comp;
  return omc_ret_;
}

static modelica_metatype closure20_NBSlice_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype slice)
{
  modelica_fnptr func = OMC_BOX_FIELD(closure, 1);
  modelica_metatype maxLength = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBSlice_toString(thData, slice, func, maxLength);
}static modelica_metatype closure21_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure22_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure23_NBStrongComponent_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype comp)
{
  modelica_metatype index = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBStrongComponent_toString(thData, comp, index);
}static modelica_metatype closure24_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLModelDirection
modelica_string omc_NBStrongComponent_toString(threadData_t *threadData, modelica_metatype _comp, modelica_integer _index)
{
  modelica_string _str = NULL;
  modelica_integer _s;
  modelica_string _indexStr = NULL;
  modelica_string tmp1;
  modelica_boolean tmp2;
  modelica_string tmp3;
  modelica_string tmp4 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _s = omc_NBStrongComponent_size(threadData, _comp, 1 /* true */);
  tmp2 = (modelica_boolean)(_index > ((modelica_integer) 0));
  if(tmp2)
  {
    tmp1 = stringAppend(_OMC_LIT46,intString(_index));
    tmp3 = tmp1;
  }
  else
  {
    tmp3 = _OMC_LIT19;
  }
  _indexStr = tmp3;
  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _comp;
    {
      int tmp7;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp7_1))) {
        case 3: {
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
          
          /* Pattern matching succeeded */
          tmp8 = stringAppend(_OMC_LIT47,_indexStr);
          tmp9 = stringAppend(tmp8,_OMC_LIT48);
          tmp10 = stringAppend(tmp9,omc_NBSolve_statusString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_comp, 4)))));
          tmp11 = stringAppend(tmp10,_OMC_LIT49);
          tmp12 = stringAppend(tmp11,intString(_s));
          tmp13 = stringAppend(tmp12,_OMC_LIT50);
          omc_string_store(&(_str), omc_StringUtil_headline__3(threadData, tmp13));

          tmp14 = stringAppend(_str,_OMC_LIT51);
          tmp15 = stringAppend(tmp14,omc_NFVariable_toString(threadData, omc_Pointer_access(threadData, (OMC_BOX_FIELD(_comp, 2))), _OMC_LIT52, 0 /* false */));
          tmp16 = stringAppend(tmp15,_OMC_LIT42);
          omc_string_store(&(_str), tmp16);
          tmp17 = stringAppend(_str,_OMC_LIT53);
          tmp18 = stringAppend(tmp17,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, (OMC_BOX_FIELD(_comp, 3))), _OMC_LIT52));
          tmp19 = stringAppend(tmp18,_OMC_LIT42);
          tmp4 = tmp19;
          goto tmp6_done;
        }
        case 4: {
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_string tmp24;
          modelica_string tmp25;
          modelica_string tmp26;
          modelica_metatype tmpMeta27;
          modelica_string tmp28;
          modelica_string tmp29;
          modelica_metatype tmpMeta30;
          modelica_string tmp31;
          modelica_string tmp32;
          
          /* Pattern matching succeeded */
          tmp20 = stringAppend(_OMC_LIT47,_indexStr);
          tmp21 = stringAppend(tmp20,_OMC_LIT54);
          tmp22 = stringAppend(tmp21,omc_NBSolve_statusString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_comp, 4)))));
          tmp23 = stringAppend(tmp22,_OMC_LIT49);
          tmp24 = stringAppend(tmp23,intString(_s));
          tmp25 = stringAppend(tmp24,_OMC_LIT50);
          omc_string_store(&(_str), omc_StringUtil_headline__3(threadData, tmp25));

          tmp26 = stringAppend(_str,_OMC_LIT55);
          omc_string_store(&(_str), tmp26);

          tmpMeta27 = omc_mk_box2(0, boxvar_NBVariable_pointerToString, omc_mk_integer(((modelica_integer) 10)));
          tmp28 = stringAppend(_str,omc_List_toString(threadData, (OMC_BOX_FIELD(_comp, 2)), (modelica_fnptr) omc_mk_box2(0,closure20_NBSlice_toString,tmpMeta27), 8));
          omc_string_store(&(_str), tmp28);
          tmp29 = stringAppend(_str,_OMC_LIT56);
          tmpMeta30 = omc_mk_box1(0, _OMC_LIT52);
          tmp31 = stringAppend(tmp29,omc_NBSlice_toString(threadData, (OMC_BOX_FIELD(_comp, 3)), (modelica_fnptr) omc_mk_box2(0,closure21_NBEquation_Equation_pointerToString,tmpMeta30), ((modelica_integer) 10)));
          tmp32 = stringAppend(tmp31,_OMC_LIT42);
          tmp4 = tmp32;
          goto tmp6_done;
        }
        case 5: {
          modelica_string tmp33;
          modelica_string tmp34;
          modelica_string tmp35;
          modelica_string tmp36;
          modelica_string tmp37;
          modelica_string tmp38;
          modelica_boolean tmp39;
          modelica_string tmp40;
          modelica_string tmp41;
          modelica_string tmp42;
          modelica_string tmp43;
          modelica_string tmp44;
          modelica_metatype tmpMeta45;
          modelica_string tmp46;
          modelica_string tmp47;
          
          /* Pattern matching succeeded */
          tmp39 = (modelica_boolean)(_index == ((modelica_integer) -2));
          if(tmp39)
          {
            tmp40 = _OMC_LIT19;
          }
          else
          {
            tmp33 = stringAppend(_OMC_LIT47,_indexStr);
            tmp34 = stringAppend(tmp33,_OMC_LIT57);
            tmp35 = stringAppend(tmp34,omc_NBSolve_statusString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_comp, 5)))));
            tmp36 = stringAppend(tmp35,_OMC_LIT49);
            tmp37 = stringAppend(tmp36,intString(_s));
            tmp38 = stringAppend(tmp37,_OMC_LIT50);
            tmp40 = omc_StringUtil_headline__3(threadData, tmp38);
          }
          omc_string_store(&(_str), tmp40);

          tmp41 = stringAppend(_str,_OMC_LIT58);
          tmp42 = stringAppend(tmp41,omc_NFComponentRef_toString(threadData, (OMC_BOX_FIELD(_comp, 2))));
          tmp43 = stringAppend(tmp42,_OMC_LIT42);
          omc_string_store(&(_str), tmp43);
          tmp44 = stringAppend(_str,_OMC_LIT53);
          tmpMeta45 = omc_mk_box1(0, _OMC_LIT52);
          tmp46 = stringAppend(tmp44,omc_NBSlice_toString(threadData, (OMC_BOX_FIELD(_comp, 4)), (modelica_fnptr) omc_mk_box2(0,closure22_NBEquation_Equation_pointerToString,tmpMeta45), ((modelica_integer) 10)));
          tmp47 = stringAppend(tmp46,_OMC_LIT42);
          tmp4 = tmp47;
          goto tmp6_done;
        }
        case 6: {
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
          modelica_string tmp58;
          modelica_string tmp59;
          
          /* Pattern matching succeeded */
          tmp48 = stringAppend(_OMC_LIT47,_indexStr);
          tmp49 = stringAppend(tmp48,_OMC_LIT59);
          tmp50 = stringAppend(tmp49,omc_NBSolve_statusString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_comp, 6)))));
          tmp51 = stringAppend(tmp50,_OMC_LIT49);
          tmp52 = stringAppend(tmp51,intString(_s));
          tmp53 = stringAppend(tmp52,_OMC_LIT50);
          omc_string_store(&(_str), omc_StringUtil_headline__3(threadData, tmp53));

          tmp54 = stringAppend(_str,_OMC_LIT58);
          tmp55 = stringAppend(tmp54,omc_NFComponentRef_toString(threadData, (OMC_BOX_FIELD(_comp, 2))));
          tmp56 = stringAppend(tmp55,_OMC_LIT42);
          omc_string_store(&(_str), tmp56);
          tmp57 = stringAppend(_str,_OMC_LIT53);
          tmp58 = stringAppend(tmp57,omc_NBEquation_Equation_pointerToString(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))), _OMC_LIT52));
          tmp59 = stringAppend(tmp58,_OMC_LIT42);
          tmp4 = tmp59;
          goto tmp6_done;
        }
        case 8: {
          modelica_string tmp60;
          modelica_string tmp61;
          modelica_string tmp62;
          modelica_string tmp63;
          modelica_string tmp64;
          modelica_metatype tmpMeta65;
          modelica_string tmp69;
          modelica_string tmp70;
          modelica_metatype tmpMeta71;
          modelica_string tmp72;
          
          /* Pattern matching succeeded */
          tmp60 = stringAppend(_OMC_LIT47,_indexStr);
          tmp61 = stringAppend(tmp60,_OMC_LIT60);
          tmp62 = stringAppend(tmp61,intString(_s));
          tmp63 = stringAppend(tmp62,_OMC_LIT50);
          omc_string_store(&(_str), omc_StringUtil_headline__3(threadData, tmp63));

          tmp64 = stringAppend(_str,_OMC_LIT61);
          {
            modelica_metatype __omcQ_24tmpVar53;
            modelica_metatype* tmp66;
            modelica_metatype tmpMeta67;
            modelica_metatype __omcQ_24tmpVar52;
            modelica_integer tmp68;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (OMC_BOX_FIELD(_comp, 3));
            tmpMeta67 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar53 = tmpMeta67; /* defaultValue */
            tmp66 = &__omcQ_24tmpVar53;
            while(1) {
              tmp68 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp68--;
              }
              if (tmp68 == 0) {
                __omcQ_24tmpVar52 = omc_NBEquation_Equation_getEqnName(threadData, omc_Util_tuple21(threadData, _e));
                *tmp66 = mmc_mk_cons(__omcQ_24tmpVar52,0);
                tmp66 = &MMC_CDR(*tmp66);
              } else if (tmp68 == 1) {
                break;
              } else {
                goto goto_5;
              }
            }
            *tmp66 = mmc_mk_nil();
            tmpMeta65 = __omcQ_24tmpVar53;
          }
          tmp69 = stringAppend(tmp64,omc_List_toString(threadData, tmpMeta65, boxvar_NFComponentRef_toString, 5));
          tmp70 = stringAppend(tmp69,_OMC_LIT42);
          omc_string_store(&(_str), tmp70);
          tmpMeta71 = omc_mk_box1(0, omc_mk_integer(((modelica_integer) -2)));
          tmp72 = stringAppend(_str,omc_List_toString(threadData, (OMC_BOX_FIELD(_comp, 2)), (modelica_fnptr) omc_mk_box2(0,closure23_NBStrongComponent_toString,tmpMeta71), 1));
          tmp4 = tmp72;
          goto tmp6_done;
        }
        case 7: {
          modelica_string tmp73;
          modelica_string tmp74;
          modelica_string tmp75;
          modelica_string tmp76;
          modelica_string tmp77;
          modelica_string tmp78;
          modelica_string tmp79;
          modelica_string tmp80;
          modelica_metatype tmpMeta81;
          modelica_string tmp82;
          modelica_string tmp83;
          
          /* Pattern matching succeeded */
          tmp73 = stringAppend(_OMC_LIT47,_indexStr);
          tmp74 = stringAppend(tmp73,_OMC_LIT62);
          tmp75 = stringAppend(tmp74,intString(_s));
          tmp76 = stringAppend(tmp75,_OMC_LIT50);
          omc_string_store(&(_str), omc_StringUtil_headline__3(threadData, tmp76));

          tmp77 = stringAppend(_str,_OMC_LIT58);
          tmp78 = stringAppend(tmp77,omc_NFComponentRef_toString(threadData, (OMC_BOX_FIELD(_comp, 2))));
          tmp79 = stringAppend(tmp78,_OMC_LIT42);
          omc_string_store(&(_str), tmp79);
          tmp80 = stringAppend(_str,_OMC_LIT53);
          tmpMeta81 = omc_mk_box1(0, _OMC_LIT52);
          tmp82 = stringAppend(tmp80,omc_NBSlice_toString(threadData, (OMC_BOX_FIELD(_comp, 4)), (modelica_fnptr) omc_mk_box2(0,closure24_NBEquation_Equation_pointerToString,tmpMeta81), ((modelica_integer) 10)));
          tmp83 = stringAppend(tmp82,_OMC_LIT42);
          tmp4 = tmp83;
          goto tmp6_done;
        }
        case 9: {
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
          
          /* Pattern matching succeeded */
          tmp84 = stringAppend(_OMC_LIT47,_indexStr);
          tmp85 = stringAppend(tmp84,_OMC_LIT63);
          tmp86 = stringAppend(tmp85,(omc_unbox_boolean((OMC_BOX_FIELD(_comp, 5)))?_OMC_LIT64:_OMC_LIT65));
          tmp87 = stringAppend(tmp86,_OMC_LIT66);
          tmp88 = stringAppend(tmp87,(omc_unbox_boolean((OMC_BOX_FIELD(_comp, 6)))?_OMC_LIT64:_OMC_LIT65));
          tmp89 = stringAppend(tmp88,_OMC_LIT67);
          tmp90 = stringAppend(tmp89,(omc_unbox_boolean((OMC_BOX_FIELD(_comp, 7)))?_OMC_LIT64:_OMC_LIT65));
          tmp91 = stringAppend(tmp90,_OMC_LIT49);
          tmp92 = stringAppend(tmp91,intString(_s));
          tmp93 = stringAppend(tmp92,_OMC_LIT50);
          omc_string_store(&(_str), omc_StringUtil_headline__3(threadData, tmp93));

          tmp94 = stringAppend(_str,omc_NBTearing_toString(threadData, (OMC_BOX_FIELD(_comp, 3)), _OMC_LIT68));
          omc_string_store(&(_str), tmp94);

          if(isSome((OMC_BOX_FIELD(_comp, 4))))
          {
            tmp95 = stringAppend(_str,omc_NBTearing_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_comp, 4))), _OMC_LIT69));
            omc_string_store(&(_str), tmp95);
          }
          tmp4 = _str;
          goto tmp6_done;
        }
        case 10: {
          modelica_string tmp96;
          modelica_string tmp97;
          modelica_string tmp98;
          
          /* Pattern matching succeeded */
          tmp96 = stringAppend(_OMC_LIT70,omc_NBStrongComponent_AliasInfo_toString(threadData, (OMC_BOX_FIELD(_comp, 2))));
          tmp97 = stringAppend(tmp96,_OMC_LIT71);
          tmp98 = stringAppend(tmp97,omc_NBStrongComponent_toString(threadData, (OMC_BOX_FIELD(_comp, 3)), _index));
          tmp4 = tmp98;
          goto tmp6_done;
        }
        default:
        tmp6_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT6, _OMC_LIT73);
          goto goto_5;
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
  }
  omc_string_store(&(_str), tmp4);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_toString(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = omc_unbox_integer(_index);
  _str = omc_NBStrongComponent_toString(threadData, _comp, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLModelDirection
modelica_boolean omc_NBStrongComponent_AliasInfo_isEqual(threadData_t *threadData, modelica_metatype _info1, modelica_metatype _info2)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (((omc_unbox_integer((OMC_BOX_FIELD(_info1, 4))) == omc_unbox_integer((OMC_BOX_FIELD(_info2, 4)))) && (omc_unbox_integer((OMC_BOX_FIELD(_info1, 3))) == omc_unbox_integer((OMC_BOX_FIELD(_info2, 3))))) && (omc_unbox_integer((OMC_BOX_FIELD(_info1, 2))) == omc_unbox_integer((OMC_BOX_FIELD(_info2, 2)))));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_AliasInfo_isEqual(threadData_t *threadData, modelica_metatype _info1, modelica_metatype _info2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_AliasInfo_isEqual(threadData, _info1, _info2);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_integer omc_NBStrongComponent_AliasInfo_hash(threadData_t *threadData, modelica_metatype _info)
{
  modelica_integer _i;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = stringHashDjb2(omc_NBStrongComponent_AliasInfo_toString(threadData, _info));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _i;
  return omc_ret_;
}
modelica_metatype boxptr_NBStrongComponent_AliasInfo_hash(threadData_t *threadData, modelica_metatype _info)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBStrongComponent_AliasInfo_hash(threadData, _info);
  out_i = omc_mk_icon(_i);
  return out_i;
}

DLLModelDirection
modelica_string omc_NBStrongComponent_AliasInfo_toString(threadData_t *threadData, modelica_metatype _info)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = stringAppend(omc_NBPartition_Partition_kindToString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_info, 2)))),_OMC_LIT74);
  tmp2 = stringAppend(tmp1,intString(omc_unbox_integer((OMC_BOX_FIELD(_info, 3)))));
  tmp3 = stringAppend(tmp2,_OMC_LIT75);
  tmp4 = stringAppend(tmp3,intString(omc_unbox_integer((OMC_BOX_FIELD(_info, 4)))));
  tmp5 = stringAppend(tmp4,_OMC_LIT76);
  _str = tmp5;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

