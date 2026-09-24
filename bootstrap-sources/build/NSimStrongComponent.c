#include "omc_simulation_settings.h"
#include "NSimStrongComponent.h"
#define _OMC_LIT0_data "Nonlinear System (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,25,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ", homotopy = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,13,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,5,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ", mixed = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,10,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ", torn = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,9,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "--"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Iteration Vars:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,15,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,2,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,0,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Linear System (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,22,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ", jacobian = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,13,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,17,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT16,_OMC_LIT17,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "NSimStrongComponent.Block.getEntwinedEquationName failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,61,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "NSimStrongComponent.Block.getGenericEquationName failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,60,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "NSimStrongComponent.Block.getGenericAssignIndex failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,59,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "when "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,5,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "end when;\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,10,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "else"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,4,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "NSimStrongComponent.Block.fixIndex failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,46,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NSimStrongComponent.Block.convert failed because there is a\n                conditional branch after a non-conditional branch in:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,130,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "NSimStrongComponent.Block.convert failed because there is\n                  at least two non-conditional branches in:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,118,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "NSimStrongComponent.Block.convert failed because there is no non-conditional branch in:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,88,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "NSimStrongComponent.Block.convert failed for following alias block because the index has not been updated:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,107,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "NSimStrongComponent.Block.convert failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,45,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "NSimStrongComponent.Block.createAssignment failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,54,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "NSimStrongComponent.Block.createEquation failed with status "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,60,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data " for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,5,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "NSimStrongComponent.Block.createResidual does not support a part of a for equation with an array valued body:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,110,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "NSimStrongComponent.Block.createResidual failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,52,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,1,18) {&NFType_ANY__desc,}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT41,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT44,0.0);
#define _OMC_LIT44 MMC_REFREALLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT13,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,16,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,5,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,10,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT46,_OMC_LIT47,_OMC_LIT48,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,11,3) {&NFVariable_VARIABLE__desc,_OMC_LIT38,_OMC_LIT39,_OMC_LIT40,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT42,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT43,_OMC_LIT45,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "NSimStrongComponent.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,22,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT52_6,0.0);
#define _OMC_LIT52_6 MMC_REFREALLIT(_OMC_LIT_STRUCT52_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(790)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(790)),MMC_IMMEDIATE(MMC_TAGFIXNUM(125)),_OMC_LIT52_6}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT45,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT53,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "NSimStrongComponent.Block.fromStrongComponent failed because entwined equations have to be resolved beforehand in Solve.solve(). Failed for:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,141,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "NSimStrongComponent.Block.fromStrongComponent failed with unknown reason for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,77,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "NSimStrongComponent.Block.fromPartition failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,51,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT58_6,0.0);
#define _OMC_LIT58_6 MMC_REFREALLIT(_OMC_LIT_STRUCT58_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(591)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(593)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT58_6}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT59_6,0.0);
#define _OMC_LIT59_6 MMC_REFREALLIT(_OMC_LIT_STRUCT59_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(594)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(596)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT59_6}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT60_6,0.0);
#define _OMC_LIT60_6 MMC_REFREALLIT(_OMC_LIT_STRUCT60_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(597)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(599)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT60_6}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "NSimStrongComponent.Block.createNoReturnBlocks failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,58,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,3,3) {&Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,3,3) {&Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,4,4) {&NBPartitioning_BClock_SUB__CLOCK__desc,_OMC_LIT62,_OMC_LIT63,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT65_6,0.0);
#define _OMC_LIT65_6 MMC_REFREALLIT(_OMC_LIT_STRUCT65_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(565)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(565)),MMC_IMMEDIATE(MMC_TAGFIXNUM(128)),_OMC_LIT65_6}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "NSimStrongComponent.Block.getIndex failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,46,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "if "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,3,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data " then\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,8,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,2,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,1,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data ") 0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,6,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data ") For-Loop-Residual:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,21,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,4,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data " loop\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,6,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "  0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,6,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data ";\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,2,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "end for;\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,9,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data ") Generic For-Loop-Residual:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,29,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "slice"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,5,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data ") "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,2,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data " := "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,4,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "resizable call [index  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,23,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "]\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,2,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "single generic call [index  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,28,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,2,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "### entwined call ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,19,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data ") ###"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,5,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "\n    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,5,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,4,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data ") Alias of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,11,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data ") Algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,12,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data ") Inverse Algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,20,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "else "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,5,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "end if;\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,8,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data ") Hybrid\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,9,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "NSimStrongComponent.Block.toString failed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,43,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#include "util/modelica.h"

#include "NSimStrongComponent_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimStrongComponent_Block_getEntwinedEquationName(threadData_t *threadData, modelica_metatype _comp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getEntwinedEquationName,2,0) {(void*) boxptr_NSimStrongComponent_Block_getEntwinedEquationName,0}};
#define boxvar_NSimStrongComponent_Block_getEntwinedEquationName MMC_REFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getEntwinedEquationName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimStrongComponent_Block_getGenericEquationName(threadData_t *threadData, modelica_metatype _comp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getGenericEquationName,2,0) {(void*) boxptr_NSimStrongComponent_Block_getGenericEquationName,0}};
#define boxvar_NSimStrongComponent_Block_getGenericEquationName MMC_REFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getGenericEquationName)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NSimStrongComponent_Block_getGenericAssignIndex(threadData_t *threadData, modelica_metatype _blck);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimStrongComponent_Block_getGenericAssignIndex(threadData_t *threadData, modelica_metatype _blck);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getGenericAssignIndex,2,0) {(void*) boxptr_NSimStrongComponent_Block_getGenericAssignIndex,0}};
#define boxvar_NSimStrongComponent_Block_getGenericAssignIndex MMC_REFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getGenericAssignIndex)
PROTECTED_FUNCTION_STATIC modelica_string omc_NSimStrongComponent_Block_whenString(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _when_stmts, modelica_metatype _else_when, modelica_string __omcQ_24in_5Fstr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_whenString,2,0) {(void*) boxptr_NSimStrongComponent_Block_whenString,0}};
#define boxvar_NSimStrongComponent_Block_whenString MMC_REFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_whenString)

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_NonlinearSystem_convert(threadData_t *threadData, modelica_metatype _system)
{
  modelica_metatype _oldSystem = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldSystem has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _crefs = tmpMeta1;
  {
    modelica_metatype _cref;
    for (tmpMeta2 = (OMC_BOX_FIELD(_system, 4)); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _cref = MMC_CAR(tmpMeta2);
      tmpMeta3 = mmc_mk_cons(omc_NFComponentRef_toDAE(threadData, _cref), _crefs);
      _crefs = tmpMeta3;
    }
  }

  tmpMeta5 = omc_mk_box11(3, &SimCode_NonlinearSystem_NONLINEARSYSTEM__desc, (OMC_BOX_FIELD(_system, 2)), omc_NSimStrongComponent_Block_convertList(threadData, (OMC_BOX_FIELD(_system, 3))), listReverse(_crefs), (OMC_BOX_FIELD(_system, 5)), (OMC_BOX_FIELD(_system, 6)), omc_Util_applyOption(threadData, omc_Pointer_access(threadData, (OMC_BOX_FIELD(_system, 7))), boxvar_NSimJacobian_SimJacobian_convert), (OMC_BOX_FIELD(_system, 8)), (OMC_BOX_FIELD(_system, 9)), (OMC_BOX_FIELD(_system, 10)), mmc_mk_none());
  _oldSystem = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oldSystem;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NSimStrongComponent_NonlinearSystem_toString(threadData_t *threadData, modelica_metatype _system, modelica_string __omcQ_24in_5Fstr)
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
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string tmp12;
  modelica_string tmp13;
  modelica_string tmp14;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  tmp1 = stringAppend(_OMC_LIT0,intString(omc_unbox_integer((OMC_BOX_FIELD(_system, 6)))));
  tmp2 = stringAppend(tmp1,_OMC_LIT1);
  tmp3 = stringAppend(tmp2,(omc_unbox_boolean((OMC_BOX_FIELD(_system, 8)))?_OMC_LIT2:_OMC_LIT3));
  tmp4 = stringAppend(tmp3,_OMC_LIT4);
  tmp5 = stringAppend(tmp4,(omc_unbox_boolean((OMC_BOX_FIELD(_system, 9)))?_OMC_LIT2:_OMC_LIT3));
  tmp6 = stringAppend(tmp5,_OMC_LIT5);
  tmp7 = stringAppend(tmp6,(omc_unbox_boolean((OMC_BOX_FIELD(_system, 10)))?_OMC_LIT2:_OMC_LIT3));
  tmp8 = stringAppend(tmp7,_OMC_LIT6);
  tmp9 = stringAppend(tmp8,_str);
  tmp10 = stringAppend(tmp9,_OMC_LIT7);
  tmp11 = stringAppend(tmp10,omc_List_toStringCustom(threadData, (OMC_BOX_FIELD(_system, 4)), boxvar_NFComponentRef_toString, _OMC_LIT8, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 10)));
  tmp12 = stringAppend(tmp11,_OMC_LIT12);
  tmp13 = stringAppend(_str,_OMC_LIT7);
  tmp14 = stringAppend(tmp12,omc_NSimStrongComponent_Block_listToString(threadData, (OMC_BOX_FIELD(_system, 3)), tmp13, _OMC_LIT13));
  omc_string_store(&(_str), tmp14);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_NonlinearSystem_setJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsyst, modelica_metatype _jacobian)
{
  modelica_metatype _syst = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _syst = __omcQ_24in_5Fsyst;
  omc_Pointer_update(threadData, (OMC_BOX_FIELD(_syst, 7)), _jacobian);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _syst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_NonlinearSystem_getJacobian(threadData_t *threadData, modelica_metatype _syst)
{
  modelica_metatype _jacobian = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _jacobian = omc_Pointer_access(threadData, (OMC_BOX_FIELD(_syst, 7)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _jacobian;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_LinearSystem_convert(threadData_t *threadData, modelica_metatype _system)
{
  modelica_metatype _oldSystem = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldSystem has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = omc_mk_box13(3, &SimCode_LinearSystem_LINEARSYSTEM__desc, (OMC_BOX_FIELD(_system, 2)), (OMC_BOX_FIELD(_system, 3)), (OMC_BOX_FIELD(_system, 4)), omc_NSimVar_SimVar_convertList(threadData, (OMC_BOX_FIELD(_system, 5))), tmpMeta1, tmpMeta2, omc_NSimStrongComponent_Block_convertList(threadData, (OMC_BOX_FIELD(_system, 8))), omc_Util_applyOption(threadData, (OMC_BOX_FIELD(_system, 9)), boxvar_NSimJacobian_SimJacobian_convert), (OMC_BOX_FIELD(_system, 10)), (OMC_BOX_FIELD(_system, 11)), (OMC_BOX_FIELD(_system, 12)), (OMC_BOX_FIELD(_system, 13)));
  _oldSystem = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oldSystem;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NSimStrongComponent_LinearSystem_toString(threadData_t *threadData, modelica_metatype _system, modelica_string __omcQ_24in_5Fstr)
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
  modelica_string tmp10;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  tmp1 = stringAppend(_OMC_LIT14,intString(omc_unbox_integer((OMC_BOX_FIELD(_system, 12)))));
  tmp2 = stringAppend(tmp1,_OMC_LIT15);
  tmp3 = stringAppend(tmp2,(omc_unbox_boolean((OMC_BOX_FIELD(_system, 13)))?_OMC_LIT2:_OMC_LIT3));
  tmp4 = stringAppend(tmp3,_OMC_LIT4);
  tmp5 = stringAppend(tmp4,(omc_unbox_boolean((OMC_BOX_FIELD(_system, 3)))?_OMC_LIT2:_OMC_LIT3));
  tmp6 = stringAppend(tmp5,_OMC_LIT5);
  tmp7 = stringAppend(tmp6,(omc_unbox_boolean((OMC_BOX_FIELD(_system, 4)))?_OMC_LIT2:_OMC_LIT3));
  tmp8 = stringAppend(tmp7,_OMC_LIT6);
  tmp9 = stringAppend(_str,_OMC_LIT7);
  tmp10 = stringAppend(tmp8,omc_NSimStrongComponent_Block_listToString(threadData, (OMC_BOX_FIELD(_system, 8)), tmp9, _OMC_LIT13));
  omc_string_store(&(_str), tmp10);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimStrongComponent_Block_getEntwinedEquationName(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_getEqnName(threadData, (OMC_BOX_FIELD(_comp, 3)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_string tmp6;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT20,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta5 = mmc_mk_cons(tmp6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta5);
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
  _name = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _name;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimStrongComponent_Block_getGenericEquationName(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_string tmp7;
          
          /* Pattern matching succeeded */
          tmp7 = stringAppend(_OMC_LIT21,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta6 = mmc_mk_cons(tmp7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta6);
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
  _name = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _name;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NSimStrongComponent_Block_getGenericAssignIndex(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_integer _index;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 3)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 3)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_string tmp6;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT22,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta5 = mmc_mk_cons(tmp6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta5);
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
  _index = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _index;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimStrongComponent_Block_getGenericAssignIndex(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_integer _index;
  modelica_metatype out_index;
  _index = omc_NSimStrongComponent_Block_getGenericAssignIndex(threadData, _blck);
  out_index = omc_mk_icon(_index);
  return out_index;
}

static modelica_metatype closure0_NBEquation_WhenStatement_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype stmt)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_WhenStatement_toString(thData, stmt, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_string omc_NSimStrongComponent_Block_whenString(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _when_stmts, modelica_metatype _else_when, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_string _indent = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  modelica_string tmp11;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  _indent = _str;
  tmp1 = stringAppend(_OMC_LIT23,omc_List_toString(threadData, _conditions, boxvar_NFComponentRef_toString, 4));
  tmp2 = stringAppend(tmp1,_OMC_LIT12);
  tmp4 = stringAppend(_indent,_OMC_LIT24);
  tmpMeta3 = omc_mk_box1(0, tmp4);
  tmp5 = stringAppend(tmp2,omc_List_toString(threadData, _when_stmts, (modelica_fnptr) omc_mk_box2(0,closure0_NBEquation_WhenStatement_toString,tmpMeta3), 6));
  tmp6 = stringAppend(tmp5,_OMC_LIT12);
  omc_string_store(&(_str), tmp6);

  if(isSome(_else_when))
  {
    tmp7 = stringAppend(_str,_indent);
    tmp8 = stringAppend(tmp7,_OMC_LIT26);
    tmp9 = stringAppend(tmp8,omc_NSimStrongComponent_Block_toString(threadData, omc_Util_getOption(threadData, _else_when), _OMC_LIT13));
    omc_string_store(&(_str), tmp9);
  }
  else
  {
    tmp10 = stringAppend(_str,_indent);
    tmp11 = stringAppend(tmp10,_OMC_LIT25);
    omc_string_store(&(_str), tmp11);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_collectEntwinedEquations(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 4));
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _lst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_fixIndex(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fblck, modelica_metatype __omcQ_24in_5Findices, modelica_metatype *out_indices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _blck = __omcQ_24in_5Fblck;
  _indices = __omcQ_24in_5Findices;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      modelica_metatype _tmp = NULL;
      modelica_metatype _tmp_lst = NULL;
      int tmp4;
      // _tmp has no default value.
      // _tmp_lst has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta6;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta8;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta10;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta12;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta14;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta15;

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta16;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_blck), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta18;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_blck), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta19;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta20;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta21;

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta22;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_blck), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta23;

          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta24;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_blck), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[2] = (OMC_BOX_FIELD(_indices, 18));
          _blck = tmpMeta25;

          tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
          _indices = tmpMeta26;

          if(isSome((OMC_BOX_FIELD(_blck, 6))))
          {
            _tmp = omc_NSimStrongComponent_Block_fixIndex(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_blck, 6))), _indices ,&_indices);

            tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(9));
            memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_blck), 9*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[6] = mmc_mk_some(_tmp);
            _blck = tmpMeta27;
          }
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_fixIndex(threadData, (OMC_BOX_FIELD(_blck, 3)), _indices ,&_indices);

          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmp_lst = omc_NSimStrongComponent_Block_fixIndices(threadData, (OMC_BOX_FIELD(_blck, 5)), tmpMeta28, _indices ,&_indices);

          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[3] = _tmp;
          _blck = tmpMeta29;

          tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[5] = _tmp_lst;
          _blck = tmpMeta30;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta31;
          modelica_string tmp32;
          
          /* Pattern matching succeeded */
          tmp32 = stringAppend(_OMC_LIT27,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta31 = mmc_mk_cons(tmp32, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta31);
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
  _blck = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  omc_ret_ = _blck;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_fixIndices(threadData_t *threadData, modelica_metatype _blcks, modelica_metatype __omcQ_24in_5Facc, modelica_metatype __omcQ_24in_5Findices, modelica_metatype *out_indices)
{
  modelica_metatype _acc = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _acc = __omcQ_24in_5Facc;
  _indices = __omcQ_24in_5Findices;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blcks;
    {
      modelica_metatype _blck = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _blck has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _blck = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _blck = omc_NSimStrongComponent_Block_fixIndex(threadData, _blck, _indices ,&_indices);
          tmpMeta8 = mmc_mk_cons(_blck, _acc);
          /* Tail recursive call */
          _blcks = _rest;
          __omcQ_24in_5Facc = tmpMeta8;
          __omcQ_24in_5Findices = _indices;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _acc;
          tmpMeta[0+1] = _indices;
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
  _acc = tmpMeta[0+0];
  _indices = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  omc_ret_ = _acc;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_convertListList(threadData_t *threadData, modelica_metatype _blck_lst_lst)
{
  modelica_metatype _oldBlck_lst_lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp4;
    modelica_metatype _blck_lst_loopVar = 0;
    modelica_metatype _blck_lst;
    _blck_lst_loopVar = _blck_lst_lst;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar5;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_blck_lst_loopVar)) {
        _blck_lst = MMC_CAR(_blck_lst_loopVar);
        _blck_lst_loopVar = MMC_CDR(_blck_lst_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar4 = omc_NSimStrongComponent_Block_convertList(threadData, _blck_lst);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar5;
  }
  _oldBlck_lst_lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oldBlck_lst_lst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_convertList(threadData_t *threadData, modelica_metatype _blck_lst)
{
  modelica_metatype _oldBlck_lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp4;
    modelica_metatype _blck_loopVar = 0;
    modelica_metatype _blck;
    _blck_loopVar = _blck_lst;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar7;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_blck_loopVar)) {
        _blck = MMC_CAR(_blck_loopVar);
        _blck_loopVar = MMC_CDR(_blck_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar6 = omc_NSimStrongComponent_Block_convert(threadData, _blck);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar7;
  }
  _oldBlck_lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oldBlck_lst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_convert(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_metatype _oldBlck = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldBlck has no default value.
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _blck;
    {
      modelica_metatype _exp = NULL;
      modelica_metatype _blcks = NULL;
      modelica_metatype _oldBranches = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _else_branch = NULL;
      modelica_metatype tmpMeta4;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _exp has no default value.
      // _blcks has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _oldBranches = tmpMeta3;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _else_branch = tmpMeta4;
      tmp6 = 0;
      for (; tmp6 < 17; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = omc_mk_box6(3, &SimCode_SimEqSystem_SES__RESIDUAL__desc, (OMC_BOX_FIELD(_blck, 2)), (OMC_BOX_FIELD(_blck, 3)), omc_NFExpression_toDAE(threadData, (OMC_BOX_FIELD(_blck, 4)), 0 /* false */), (OMC_BOX_FIELD(_blck, 5)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 6))));
          tmpMeta1 = tmpMeta8;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,1,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = omc_mk_box6(3, &SimCode_SimEqSystem_SES__RESIDUAL__desc, (OMC_BOX_FIELD(_blck, 2)), (OMC_BOX_FIELD(_blck, 3)), omc_NFExpression_toDAE(threadData, (OMC_BOX_FIELD(_blck, 4)), 0 /* false */), (OMC_BOX_FIELD(_blck, 5)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 6))));
          tmpMeta1 = tmpMeta9;
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp13;
            modelica_metatype _it_loopVar = 0;
            modelica_metatype _it;
            _it_loopVar = (OMC_BOX_FIELD(_blck, 4));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar9;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_it_loopVar)) {
                _it = MMC_CAR(_it_loopVar);
                _it_loopVar = MMC_CDR(_it_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar8 = omc_NSimGenericCall_SimIterator_convert(threadData, _it);
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
          tmpMeta14 = omc_mk_box7(4, &SimCode_SimEqSystem_SES__FOR__RESIDUAL__desc, (OMC_BOX_FIELD(_blck, 2)), (OMC_BOX_FIELD(_blck, 3)), tmpMeta10, omc_NFExpression_toDAE(threadData, (OMC_BOX_FIELD(_blck, 5)), 0 /* false */), (OMC_BOX_FIELD(_blck, 6)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 7))));
          tmpMeta1 = tmpMeta14;
          goto tmp5_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,3,7) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp18;
            modelica_metatype _it_loopVar = 0;
            modelica_metatype _it;
            _it_loopVar = (OMC_BOX_FIELD(_blck, 5));
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar11;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_it_loopVar)) {
                _it = MMC_CAR(_it_loopVar);
                _it_loopVar = MMC_CDR(_it_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                __omcQ_24tmpVar10 = omc_NSimGenericCall_SimIterator_convert(threadData, _it);
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar11;
          }
          tmpMeta19 = omc_mk_box8(5, &SimCode_SimEqSystem_SES__GENERIC__RESIDUAL__desc, (OMC_BOX_FIELD(_blck, 2)), (OMC_BOX_FIELD(_blck, 3)), (OMC_BOX_FIELD(_blck, 4)), tmpMeta15, omc_NFExpression_toDAE(threadData, (OMC_BOX_FIELD(_blck, 6)), 0 /* false */), (OMC_BOX_FIELD(_blck, 7)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 8))));
          tmpMeta1 = tmpMeta19;
          goto tmp5_done;
        }
        case 4: {
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,4,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta20 = omc_mk_box6(6, &SimCode_SimEqSystem_SES__SIMPLE__ASSIGN__desc, (OMC_BOX_FIELD(_blck, 2)), omc_NFComponentRef_toDAE(threadData, (OMC_BOX_FIELD(_blck, 3))), omc_NFExpression_toDAE(threadData, (OMC_BOX_FIELD(_blck, 4)), 0 /* false */), (OMC_BOX_FIELD(_blck, 5)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 6))));
          tmpMeta1 = tmpMeta20;
          goto tmp5_done;
        }
        case 5: {
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,5,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta21 = omc_mk_box6(8, &SimCode_SimEqSystem_SES__ARRAY__CALL__ASSIGN__desc, (OMC_BOX_FIELD(_blck, 2)), omc_NFExpression_toDAE(threadData, (OMC_BOX_FIELD(_blck, 3)), 0 /* false */), omc_NFExpression_toDAE(threadData, (OMC_BOX_FIELD(_blck, 4)), 0 /* false */), (OMC_BOX_FIELD(_blck, 5)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 6))));
          tmpMeta1 = tmpMeta21;
          goto tmp5_done;
        }
        case 6: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,6,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp23;
            modelica_metatype tmpMeta24;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp25;
            modelica_metatype _it_loopVar = 0;
            modelica_metatype _it;
            _it_loopVar = (OMC_BOX_FIELD(_blck, 4));
            tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta24; /* defaultValue */
            tmp23 = &__omcQ_24tmpVar13;
            while(1) {
              tmp25 = 1;
              if (!listEmpty(_it_loopVar)) {
                _it = MMC_CAR(_it_loopVar);
                _it_loopVar = MMC_CDR(_it_loopVar);
                tmp25--;
              }
              if (tmp25 == 0) {
                __omcQ_24tmpVar12 = omc_NSimGenericCall_SimIterator_convert(threadData, _it);
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
          tmpMeta26 = omc_mk_box6(9, &SimCode_SimEqSystem_SES__RESIZABLE__ASSIGN__desc, (OMC_BOX_FIELD(_blck, 2)), (OMC_BOX_FIELD(_blck, 3)), tmpMeta22, (OMC_BOX_FIELD(_blck, 5)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 6))));
          tmpMeta1 = tmpMeta26;
          goto tmp5_done;
        }
        case 7: {
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,7,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta27 = omc_mk_box6(10, &SimCode_SimEqSystem_SES__GENERIC__ASSIGN__desc, (OMC_BOX_FIELD(_blck, 2)), (OMC_BOX_FIELD(_blck, 3)), (OMC_BOX_FIELD(_blck, 4)), (OMC_BOX_FIELD(_blck, 5)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 6))));
          tmpMeta1 = tmpMeta27;
          goto tmp5_done;
        }
        case 8: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,8,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp29;
            modelica_metatype tmpMeta30;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp31;
            modelica_metatype _single_call_loopVar = 0;
            modelica_metatype _single_call;
            _single_call_loopVar = (OMC_BOX_FIELD(_blck, 4));
            tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta30; /* defaultValue */
            tmp29 = &__omcQ_24tmpVar15;
            while(1) {
              tmp31 = 1;
              if (!listEmpty(_single_call_loopVar)) {
                _single_call = MMC_CAR(_single_call_loopVar);
                _single_call_loopVar = MMC_CDR(_single_call_loopVar);
                tmp31--;
              }
              if (tmp31 == 0) {
                __omcQ_24tmpVar14 = omc_NSimStrongComponent_Block_convert(threadData, _single_call);
                *tmp29 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp29 = &MMC_CDR(*tmp29);
              } else if (tmp31 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp29 = mmc_mk_nil();
            tmpMeta28 = __omcQ_24tmpVar15;
          }
          tmpMeta32 = omc_mk_box6(11, &SimCode_SimEqSystem_SES__ENTWINED__ASSIGN__desc, (OMC_BOX_FIELD(_blck, 2)), (OMC_BOX_FIELD(_blck, 3)), tmpMeta28, (OMC_BOX_FIELD(_blck, 5)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 6))));
          tmpMeta1 = tmpMeta32;
          goto tmp5_done;
        }
        case 9: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta41;
          modelica_string tmp42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_string tmp50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_string tmp53;
          modelica_metatype tmpMeta54;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,12,4) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta33 = (OMC_BOX_FIELD(_blck, 3)); !listEmpty(tmpMeta33); tmpMeta33=MMC_CDR(tmpMeta33))
            {
              _branch = MMC_CAR(tmpMeta33);
              /* Pattern-matching assignment */
              tmpMeta34 = _branch;
              tmpMeta35 = OMC_BOX_FIELD(tmpMeta34, 1);
              tmpMeta36 = OMC_BOX_FIELD(tmpMeta34, 2);
              _exp = tmpMeta35;
              _blcks = tmpMeta36;

              if(omc_NFExpression_isEnd(threadData, _exp))
              {
                if(listEmpty(_else_branch))
                {
                  {
                    modelica_metatype __omcQ_24tmpVar17;
                    modelica_metatype* tmp38;
                    modelica_metatype tmpMeta39;
                    modelica_metatype __omcQ_24tmpVar16;
                    modelica_integer tmp40;
                    modelica_metatype _blck__loopVar = 0;
                    modelica_metatype _blck_;
                    _blck__loopVar = _blcks;
                    tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar17 = tmpMeta39; /* defaultValue */
                    tmp38 = &__omcQ_24tmpVar17;
                    while(1) {
                      tmp40 = 1;
                      if (!listEmpty(_blck__loopVar)) {
                        _blck_ = MMC_CAR(_blck__loopVar);
                        _blck__loopVar = MMC_CDR(_blck__loopVar);
                        tmp40--;
                      }
                      if (tmp40 == 0) {
                        __omcQ_24tmpVar16 = omc_NSimStrongComponent_Block_convert(threadData, _blck_);
                        *tmp38 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                        tmp38 = &MMC_CDR(*tmp38);
                      } else if (tmp40 == 1) {
                        break;
                      } else {
                        goto goto_2;
                      }
                    }
                    *tmp38 = mmc_mk_nil();
                    tmpMeta37 = __omcQ_24tmpVar17;
                  }
                  _else_branch = tmpMeta37;
                }
                else
                {
                  tmp42 = stringAppend(_OMC_LIT29,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
                  tmpMeta41 = mmc_mk_cons(tmp42, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta41);

                  goto goto_2;
                }
              }
              else
              {
                if(listEmpty(_else_branch))
                {
                  {
                    modelica_metatype __omcQ_24tmpVar19;
                    modelica_metatype* tmp45;
                    modelica_metatype tmpMeta46;
                    modelica_metatype __omcQ_24tmpVar18;
                    modelica_integer tmp47;
                    modelica_metatype _blck__loopVar = 0;
                    modelica_metatype _blck_;
                    _blck__loopVar = _blcks;
                    tmpMeta46 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar19 = tmpMeta46; /* defaultValue */
                    tmp45 = &__omcQ_24tmpVar19;
                    while(1) {
                      tmp47 = 1;
                      if (!listEmpty(_blck__loopVar)) {
                        _blck_ = MMC_CAR(_blck__loopVar);
                        _blck__loopVar = MMC_CDR(_blck__loopVar);
                        tmp47--;
                      }
                      if (tmp47 == 0) {
                        __omcQ_24tmpVar18 = omc_NSimStrongComponent_Block_convert(threadData, _blck_);
                        *tmp45 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                        tmp45 = &MMC_CDR(*tmp45);
                      } else if (tmp47 == 1) {
                        break;
                      } else {
                        goto goto_2;
                      }
                    }
                    *tmp45 = mmc_mk_nil();
                    tmpMeta44 = __omcQ_24tmpVar19;
                  }
                  tmpMeta48 = omc_mk_box2(0, omc_NFExpression_toDAE(threadData, _exp, 0 /* false */), tmpMeta44);
                  tmpMeta43 = mmc_mk_cons(tmpMeta48, _oldBranches);
                  _oldBranches = tmpMeta43;
                }
                else
                {
                  tmp50 = stringAppend(_OMC_LIT28,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
                  tmpMeta49 = mmc_mk_cons(tmp50, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta49);

                  goto goto_2;
                }
              }
            }
          }

          if(listEmpty(_else_branch))
          {
            tmp53 = stringAppend(_OMC_LIT30,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
            tmpMeta52 = mmc_mk_cons(tmp53, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta52);

            goto goto_2;
          }
          tmpMeta54 = omc_mk_box6(12, &SimCode_SimEqSystem_SES__IFEQUATION__desc, (OMC_BOX_FIELD(_blck, 2)), listReverse(_oldBranches), _else_branch, (OMC_BOX_FIELD(_blck, 4)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 5))));
          tmpMeta1 = tmpMeta54;
          goto tmp5_done;
        }
        case 10: {
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta63;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,7) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp56;
            modelica_metatype tmpMeta57;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp58;
            modelica_metatype _cr_loopVar = 0;
            modelica_metatype _cr;
            _cr_loopVar = (OMC_BOX_FIELD(_blck, 4));
            tmpMeta57 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta57; /* defaultValue */
            tmp56 = &__omcQ_24tmpVar21;
            while(1) {
              tmp58 = 1;
              if (!listEmpty(_cr_loopVar)) {
                _cr = MMC_CAR(_cr_loopVar);
                _cr_loopVar = MMC_CDR(_cr_loopVar);
                tmp58--;
              }
              if (tmp58 == 0) {
                __omcQ_24tmpVar20 = omc_NFComponentRef_toDAE(threadData, _cr);
                *tmp56 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp56 = &MMC_CDR(*tmp56);
              } else if (tmp58 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp56 = mmc_mk_nil();
            tmpMeta55 = __omcQ_24tmpVar21;
          }
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp60;
            modelica_metatype tmpMeta61;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp62;
            modelica_metatype _stmt_loopVar = 0;
            modelica_metatype _stmt;
            _stmt_loopVar = (OMC_BOX_FIELD(_blck, 5));
            tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta61; /* defaultValue */
            tmp60 = &__omcQ_24tmpVar23;
            while(1) {
              tmp62 = 1;
              if (!listEmpty(_stmt_loopVar)) {
                _stmt = MMC_CAR(_stmt_loopVar);
                _stmt_loopVar = MMC_CDR(_stmt_loopVar);
                tmp62--;
              }
              if (tmp62 == 0) {
                __omcQ_24tmpVar22 = omc_NBEquation_WhenStatement_convert(threadData, _stmt);
                *tmp60 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp60 = &MMC_CDR(*tmp60);
              } else if (tmp62 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp60 = mmc_mk_nil();
            tmpMeta59 = __omcQ_24tmpVar23;
          }
          tmpMeta63 = omc_mk_box8(18, &SimCode_SimEqSystem_SES__WHEN__desc, (OMC_BOX_FIELD(_blck, 2)), tmpMeta55, (OMC_BOX_FIELD(_blck, 3)), tmpMeta59, omc_Util_applyOption(threadData, (OMC_BOX_FIELD(_blck, 6)), boxvar_NSimStrongComponent_Block_convert), (OMC_BOX_FIELD(_blck, 7)), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 8))));
          tmpMeta1 = tmpMeta63;
          goto tmp5_done;
        }
        case 11: {
          modelica_metatype tmpMeta64;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,14,2) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta64 = omc_mk_box4(15, &SimCode_SimEqSystem_SES__LINEAR__desc, omc_NSimStrongComponent_LinearSystem_convert(threadData, (OMC_BOX_FIELD(_blck, 2))), mmc_mk_none(), omc_NBEquation_EquationAttributes_convert(threadData, omc_NBEquation_default(threadData, 1, 0 /* false */, mmc_mk_none(), mmc_mk_none())));
          tmpMeta1 = tmpMeta64;
          goto tmp5_done;
        }
        case 12: {
          modelica_metatype tmpMeta65;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,15,2) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta65 = omc_mk_box4(16, &SimCode_SimEqSystem_SES__NONLINEAR__desc, omc_NSimStrongComponent_NonlinearSystem_convert(threadData, (OMC_BOX_FIELD(_blck, 2))), mmc_mk_none(), omc_NBEquation_EquationAttributes_convert(threadData, omc_NBEquation_default(threadData, 1, 0 /* false */, mmc_mk_none(), mmc_mk_none())));
          tmpMeta1 = tmpMeta65;
          goto tmp5_done;
        }
        case 13: {
          modelica_metatype tmpMeta66;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,10,3) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta66 = omc_mk_box4(13, &SimCode_SimEqSystem_SES__ALGORITHM__desc, (OMC_BOX_FIELD(_blck, 2)), omc_NFConvertDAE_convertStatements(threadData, (OMC_BOX_FIELD(_blck, 3))), omc_NBEquation_EquationAttributes_convert(threadData, (OMC_BOX_FIELD(_blck, 4))));
          tmpMeta1 = tmpMeta66;
          goto tmp5_done;
        }
        case 14: {
          modelica_metatype tmpMeta67;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,9,4) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_unbox_integer((OMC_BOX_FIELD(_blck, 4))) > ((modelica_integer) 0))) goto tmp5_end;
          tmpMeta67 = omc_mk_box3(21, &SimCode_SimEqSystem_SES__ALIAS__desc, (OMC_BOX_FIELD(_blck, 2)), (OMC_BOX_FIELD(_blck, 4)));
          tmpMeta1 = tmpMeta67;
          goto tmp5_done;
        }
        case 15: {
          modelica_metatype tmpMeta68;
          modelica_string tmp69;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,9,4) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_unbox_integer((OMC_BOX_FIELD(_blck, 4))) == ((modelica_integer) -1))) goto tmp5_end;
          tmp69 = stringAppend(_OMC_LIT31,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta68 = mmc_mk_cons(tmp69, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta68);
          goto goto_2;
          goto tmp5_done;
        }
        case 16: {
          modelica_metatype tmpMeta70;
          modelica_string tmp71;
          
          /* Pattern matching succeeded */
          tmp71 = stringAppend(_OMC_LIT32,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta70 = mmc_mk_cons(tmp71, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta70);
          goto goto_2;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp5_done;
      tmp5_done:;
    }
  }
  _oldBlck = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oldBlck;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_collectAlgebraicLoopsSingle(threadData_t *threadData, modelica_metatype _blck_lst, modelica_metatype __omcQ_24in_5FlinearLoops, modelica_metatype __omcQ_24in_5FnonlinearLoops, modelica_metatype __omcQ_24in_5Fjacobians, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype *out_nonlinearLoops, modelica_metatype *out_jacobians, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _linearLoops = NULL;
  modelica_metatype _nonlinearLoops = NULL;
  modelica_metatype _jacobians = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _linearLoops = __omcQ_24in_5FlinearLoops;
  _nonlinearLoops = __omcQ_24in_5FnonlinearLoops;
  _jacobians = __omcQ_24in_5Fjacobians;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  {
    modelica_metatype _blck;
    for (tmpMeta1 = _blck_lst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _blck = MMC_CAR(tmpMeta1);
      
      
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _blck;
        {
          modelica_metatype _opt_jacobian = NULL;
          modelica_metatype _jacobian = NULL;
          int tmp5;
          // _opt_jacobian has no default value.
          // _jacobian has no default value.
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp5_1))) {
            case 17: {
              modelica_metatype tmpMeta6;
              modelica_metatype tmpMeta7;
              
              /* Pattern matching succeeded */
              if(isSome((OMC_BOX_FIELD((OMC_BOX_FIELD(_blck, 2)), 9))))
              {
                tmpMeta6 = mmc_mk_cons(omc_Util_getOption(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_blck, 2)), 9))), _jacobians);
                _jacobians = tmpMeta6;
              }
              tmpMeta7 = mmc_mk_cons(_blck, _linearLoops);
              tmpMeta[0+0] = tmpMeta7;
              tmpMeta[0+1] = _nonlinearLoops;
              goto tmp4_done;
            }
            case 18: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              
              /* Pattern matching succeeded */
              _opt_jacobian = omc_NSimStrongComponent_NonlinearSystem_getJacobian(threadData, (OMC_BOX_FIELD(_blck, 2)));

              if(isSome(_opt_jacobian))
              {
                _jacobian = omc_Util_getOption(threadData, _opt_jacobian);

                tmpMeta8 = mmc_mk_cons(_jacobian, _jacobians);
                _jacobians = tmpMeta8;
              }

              tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(4));
              memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_blck), 4*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = omc_NSimStrongComponent_NonlinearSystem_setJacobian(threadData, (OMC_BOX_FIELD(_blck, 2)), _opt_jacobian);
              _blck = tmpMeta9;
              tmpMeta10 = mmc_mk_cons(_blck, _nonlinearLoops);
              tmpMeta[0+0] = _linearLoops;
              tmpMeta[0+1] = tmpMeta10;
              goto tmp4_done;
            }
            default:
            tmp4_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
              tmpMeta[0+0] = _linearLoops;
              tmpMeta[0+1] = _nonlinearLoops;
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
      _linearLoops = tmpMeta[0+0];
      _nonlinearLoops = tmpMeta[0+1];
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_nonlinearLoops) { *out_nonlinearLoops = _nonlinearLoops; }
  if (out_jacobians) { *out_jacobians = _jacobians; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _linearLoops;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_collectAlgebraicLoops(threadData_t *threadData, modelica_metatype _blcks, modelica_metatype __omcQ_24in_5FlinearLoops, modelica_metatype __omcQ_24in_5FnonlinearLoops, modelica_metatype __omcQ_24in_5Fjacobians, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype *out_nonlinearLoops, modelica_metatype *out_jacobians, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _linearLoops = NULL;
  modelica_metatype _nonlinearLoops = NULL;
  modelica_metatype _jacobians = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _linearLoops = __omcQ_24in_5FlinearLoops;
  _nonlinearLoops = __omcQ_24in_5FnonlinearLoops;
  _jacobians = __omcQ_24in_5Fjacobians;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  {
    modelica_metatype _blck_lst;
    for (tmpMeta1 = _blcks; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _blck_lst = MMC_CAR(tmpMeta1);
      _linearLoops = omc_NSimStrongComponent_Block_collectAlgebraicLoopsSingle(threadData, _blck_lst, _linearLoops, _nonlinearLoops, _jacobians, _simCodeIndices, _simcode_map ,&_nonlinearLoops ,&_jacobians ,&_simCodeIndices);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_nonlinearLoops) { *out_nonlinearLoops = _nonlinearLoops; }
  if (out_jacobians) { *out_jacobians = _jacobians; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _linearLoops;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createAssignment(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _qual = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _tmp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _qual has no default value.
      // _cref has no default value.
      // _tmp has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 3);
          
          _qual = tmp4_1;
          _cref = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = omc_mk_box6(7, &NSimStrongComponent_Block_SIMPLE__ASSIGN__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), _cref, (OMC_BOX_FIELD(_qual, 4)), (OMC_BOX_FIELD(_qual, 5)), (OMC_BOX_FIELD(_qual, 6)));
          _tmp = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta9;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 3);
          
          _qual = tmp4_1;
          _cref = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = omc_mk_box6(7, &NSimStrongComponent_Block_SIMPLE__ASSIGN__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), _cref, (OMC_BOX_FIELD(_qual, 4)), (OMC_BOX_FIELD(_qual, 5)), (OMC_BOX_FIELD(_qual, 6)));
          _tmp = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta13;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_string tmp15;
          
          /* Pattern matching succeeded */
          tmp15 = stringAppend(_OMC_LIT33,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT13));
          tmpMeta14 = mmc_mk_cons(tmp15, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta14);
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
  _blck = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blck;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createAlgorithm(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5Findices, modelica_metatype _equation_map, modelica_metatype *out_indices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _indices = __omcQ_24in_5Findices;
  // _stmts has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD((OMC_BOX_FIELD(_eqn, 3)), 2));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_toStatement(threadData, _eqn);
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

  tmpMeta6 = omc_mk_box4(13, &NSimStrongComponent_Block_ALGORITHM__desc, (OMC_BOX_FIELD(_indices, 18)), _stmts, omc_NBEquation_Equation_getAttributes(threadData, _eqn));
  _blck = tmpMeta6;

  tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(27));
  memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
  _indices = tmpMeta7;

  omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_Pointer_create(threadData, _eqn)), _blck, _equation_map);
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  omc_ret_ = _blck;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createIfBody(threadData_t *threadData, modelica_metatype _body, modelica_metatype __omcQ_24in_5Fbranches, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _branches = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _blck = NULL;
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _branches = __omcQ_24in_5Fbranches;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _comps has no default value.
  // _blck has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  {
    modelica_metatype __omcQ_24tmpVar25;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar24;
    modelica_integer tmp7;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = (OMC_BOX_FIELD(_body, 3));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar25 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar25;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta6 = omc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, tmpMeta5);
        __omcQ_24tmpVar24 = omc_NBStrongComponent_fromSolvedEquationSlice(threadData, tmpMeta6);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar24,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp7 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar25;
  }
  _comps = tmpMeta2;

  {
    modelica_metatype _comp;
    for (tmpMeta8 = listReverse(_comps); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
    {
      _comp = MMC_CAR(tmpMeta8);
      _blck = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _comp, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices ,NULL);

      tmpMeta9 = mmc_mk_cons(_blck, _blcks);
      _blcks = tmpMeta9;
    }
  }

  tmpMeta12 = omc_mk_box2(0, (OMC_BOX_FIELD(_body, 2)), _blcks);
  tmpMeta11 = mmc_mk_cons(tmpMeta12, _branches);
  _branches = tmpMeta11;

  if(isSome((OMC_BOX_FIELD(_body, 4))))
  {
    /* Tail recursive call */
    _body = omc_Util_getOption(threadData, (OMC_BOX_FIELD(_body, 4)));
    __omcQ_24in_5Fbranches = _branches;
    __omcQ_24in_5FsimCodeIndices = _simCodeIndices;
    _kind = (modelica_integer)_kind;
    goto _tailrecursive;
    /* TODO: Make sure any eventual dead code below is never generated */
    ;
  }
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _branches;
  return omc_ret_;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createIfBody(threadData_t *threadData, modelica_metatype _body, modelica_metatype __omcQ_24in_5Fbranches, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_metatype _branches = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _branches = omc_NSimStrongComponent_Block_createIfBody(threadData, _body, __omcQ_24in_5Fbranches, __omcQ_24in_5FsimCodeIndices, tmp1, _simcode_map, _equation_map, out_simCodeIndices);
  /* skip box _branches; list<tuple<NFExpression, list<NSimStrongComponent.Block>>> */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _branches;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createWhenBody(threadData_t *threadData, modelica_metatype _body, modelica_metatype _source, modelica_metatype _attr, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _conditions = NULL;
  modelica_metatype _when_stmts = NULL;
  modelica_metatype _else_when = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _else_when_block = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _conditions has no default value.
  // _when_stmts has no default value.
  // _else_when has no default value.
  // _tmp has no default value.
  // _else_when_block has no default value.
  _index = omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)));
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(27));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
  _simCodeIndices = tmpMeta1;

  _conditions = omc_NBEquation_WhenEquationBody_getBodyAttributes(threadData, _body ,&_when_stmts ,&_else_when);

  if(isSome(_else_when))
  {
    _tmp = omc_NSimStrongComponent_Block_createWhenBody(threadData, omc_Util_getOption(threadData, _else_when), _source, _attr, _simCodeIndices ,&_simCodeIndices);

    _else_when_block = mmc_mk_some(_tmp);
  }
  else
  {
    _else_when_block = mmc_mk_none();
  }

  tmpMeta2 = omc_mk_box8(16, &NSimStrongComponent_Block_WHEN__desc, omc_mk_integer(_index), omc_mk_boolean(0 /* false */), _conditions, _when_stmts, _else_when_block, _source, _attr);
  _blck = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blck;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createImplicitEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _comp = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _comp has no default value.
  // _index has no default value.
  tmpMeta1 = omc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_Pointer_create(threadData, _var), omc_Pointer_create(threadData, _eqn), omc_mk_integer(3));
  _comp = omc_NBTearing_implicit(threadData, tmpMeta1, omc_UnorderedMap_new(threadData, boxvar_AbsynUtil_pathHash, boxvar_AbsynUtil_pathEqual, ((modelica_integer) 1)), omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 23))), (modelica_integer)_kind ,&_index);

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(27));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[23] = omc_mk_integer(_index);
  _simCodeIndices = tmpMeta2;

  _blck = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _comp, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices, NULL);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blck;
  return omc_ret_;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createImplicitEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_metatype _blck = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _blck = omc_NSimStrongComponent_Block_createImplicitEquation(threadData, _var, _eqn, __omcQ_24in_5FsimCodeIndices, tmp1, _simcode_map, _equation_map, out_simCodeIndices);
  /* skip box _blck; NSimStrongComponent.Block */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _blck;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn, modelica_integer _status, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = (modelica_integer)_status;
    {
      modelica_metatype _rhs = NULL;
      modelica_metatype _tmp = NULL;
      modelica_metatype _branches = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rhs has no default value.
      // _tmp has no default value.
      // _branches has no default value.
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box6(7, &NSimStrongComponent_Block_SIMPLE__ASSIGN__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), (OMC_BOX_FIELD(_var, 2)), (OMC_BOX_FIELD(_eqn, 4)), (OMC_BOX_FIELD(_eqn, 5)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta7;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _rhs = (omc_NFType_isArray(threadData, omc_NFExpression_typeOf(threadData, (OMC_BOX_FIELD(_eqn, 4))))?(OMC_BOX_FIELD(_eqn, 4)):omc_NFExpression_fillType(threadData, (OMC_BOX_FIELD(_eqn, 2)), (OMC_BOX_FIELD(_eqn, 4))));

          tmpMeta8 = omc_mk_box6(8, &NSimStrongComponent_Block_ARRAY__ASSIGN__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), (OMC_BOX_FIELD(_eqn, 3)), _rhs, (OMC_BOX_FIELD(_eqn, 5)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta9;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createAlgorithm(threadData, _eqn, _simCodeIndices, _equation_map ,&_simCodeIndices);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createAlgorithm(threadData, _eqn, _simCodeIndices, _equation_map ,&_simCodeIndices);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createWhenBody(threadData, (OMC_BOX_FIELD(_eqn, 3)), (OMC_BOX_FIELD(_eqn, 4)), (OMC_BOX_FIELD(_eqn, 5)), _simCodeIndices ,&_simCodeIndices);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,4) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _branches = omc_NSimStrongComponent_Block_createIfBody(threadData, (OMC_BOX_FIELD(_eqn, 3)), tmpMeta10, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);

          tmpMeta11 = omc_mk_box5(15, &NSimStrongComponent_Block_IF__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), listReverse(_branches), (OMC_BOX_FIELD(_eqn, 4)), (OMC_BOX_FIELD(_eqn, 5)));
          _tmp = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta12;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta13 = omc_mk_box4(13, &NSimStrongComponent_Block_ALGORITHM__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), (OMC_BOX_FIELD((OMC_BOX_FIELD(_eqn, 3)), 2)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta14;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 7: {
          if (3 != tmp4_2) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createImplicitEquation(threadData, _var, _eqn, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          
          /* Pattern matching succeeded */
          tmp16 = stringAppend(_OMC_LIT34,omc_NBSolve_statusString(threadData, (modelica_integer)_status));
          tmp17 = stringAppend(tmp16,_OMC_LIT35);
          tmp18 = stringAppend(tmp17,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT13));
          tmpMeta15 = mmc_mk_cons(tmp18, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta15);
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
  _blck = tmpMeta1;

  omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_Pointer_create(threadData, _eqn)), _blck, _equation_map);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blck;
  return omc_ret_;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn, modelica_metatype _status, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _blck = NULL;
  tmp1 = omc_unbox_integer(_status);
  tmp2 = omc_unbox_integer(_kind);
  _blck = omc_NSimStrongComponent_Block_createEquation(threadData, _var, _eqn, tmp1, __omcQ_24in_5FsimCodeIndices, tmp2, _simcode_map, _equation_map, out_simCodeIndices);
  /* skip box _blck; NSimStrongComponent.Block */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _blck;
}

static modelica_metatype closure1_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure2_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createResidual(threadData_t *threadData, modelica_metatype _slice, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer __omcQ_24in_5Fres_5Fidx, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices, modelica_integer *out_res_idx)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_integer _res_idx;
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  _res_idx = __omcQ_24in_5Fres_5Fidx;
  _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _slice));
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = (OMC_BOX_FIELD(_slice, 3));
    {
      modelica_metatype _tmp = NULL;
      modelica_integer _i;
      modelica_metatype _subs = NULL;
      modelica_metatype _body_eqn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tmp has no default value.
      // _i has no default value.
      // _subs has no default value.
      // _body_eqn has no default value.
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box6(3, &NSimStrongComponent_Block_RESIDUAL__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), omc_mk_integer(_res_idx), (OMC_BOX_FIELD(_eqn, 4)), (OMC_BOX_FIELD(_eqn, 5)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta7;

          _res_idx = ((modelica_integer) 1) + _res_idx;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = omc_mk_box3(3, &NBSlice_SLICE__desc, omc_Pointer_create(threadData, omc_NBEquation_IfEquationBody_inline(threadData, (OMC_BOX_FIELD(_eqn, 3)), _eqn)), (OMC_BOX_FIELD(_slice, 3)));
          _tmp = omc_NSimStrongComponent_Block_createResidual(threadData, tmpMeta8, _simCodeIndices, _res_idx, _equation_map ,&_simCodeIndices ,&_res_idx);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta9 = omc_mk_box6(4, &NSimStrongComponent_Block_ARRAY__RESIDUAL__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), omc_mk_integer(_res_idx), (OMC_BOX_FIELD(_eqn, 4)), (OMC_BOX_FIELD(_eqn, 5)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta10;

          _res_idx = _res_idx + omc_NBEquation_Equation_size(threadData, omc_NBSlice_getT(threadData, _slice), 0 /* false */);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_2);
          tmpMeta12 = MMC_CDR(tmp4_2);
          tmp13 = omc_unbox_integer(tmpMeta11);
          if (!listEmpty(tmpMeta12)) goto tmp3_end;
          _i = tmp13  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp18;
            modelica_metatype _s_loopVar = 0;
            modelica_metatype _s;
            _s_loopVar = omc_NBSlice_indexToLocation(threadData, _i, omc_NBEquation_Equation_sizes(threadData, omc_NBSlice_getT(threadData, _slice), 0 /* false */));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar27;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_s_loopVar)) {
                _s = MMC_CAR(_s_loopVar);
                _s_loopVar = MMC_CDR(_s_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                tmpMeta17 = omc_mk_box2(3, &NFExpression_INTEGER__desc, _s);
                __omcQ_24tmpVar26 = omc_NFSubscript_fromExp(threadData, tmpMeta17);
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar27;
          }
          _subs = tmpMeta14;

          tmpMeta19 = omc_mk_box6(4, &NSimStrongComponent_Block_ARRAY__RESIDUAL__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), omc_mk_integer(_res_idx), omc_NFExpression_applySubscripts(threadData, _subs, (OMC_BOX_FIELD(_eqn, 4)), 0 /* false */), (OMC_BOX_FIELD(_eqn, 5)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta19;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta20;

          _res_idx = _res_idx + listLength((OMC_BOX_FIELD(_slice, 3)));
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta21 = omc_mk_box6(4, &NSimStrongComponent_Block_ARRAY__RESIDUAL__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), omc_mk_integer(_res_idx), (OMC_BOX_FIELD(_eqn, 4)), (OMC_BOX_FIELD(_eqn, 5)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta21;

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta22;

          _res_idx = _res_idx + omc_NBEquation_Equation_size(threadData, omc_NBSlice_getT(threadData, _slice), 0 /* false */);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta23 = OMC_BOX_FIELD(tmp4_1, 4);
          if (listEmpty(tmpMeta23)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmpMeta23);
          tmpMeta25 = MMC_CDR(tmpMeta23);
          if (!listEmpty(tmpMeta25)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta26 = omc_mk_box7(5, &NSimStrongComponent_Block_FOR__RESIDUAL__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), omc_mk_integer(_res_idx), omc_NSimGenericCall_SimIterator_fromIterator(threadData, (OMC_BOX_FIELD(_eqn, 3))), omc_Util_getOption(threadData, omc_NBEquation_Equation_getRHS(threadData, _eqn)), (OMC_BOX_FIELD(_eqn, 5)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta26;

          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta27;

          _res_idx = _res_idx + omc_NBEquation_Equation_size(threadData, omc_NBSlice_getT(threadData, _slice), 0 /* false */);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_string tmp33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta28 = OMC_BOX_FIELD(tmp4_1, 4);
          if (listEmpty(tmpMeta28)) goto tmp3_end;
          tmpMeta29 = MMC_CAR(tmpMeta28);
          tmpMeta30 = MMC_CDR(tmpMeta28);
          if (!listEmpty(tmpMeta30)) goto tmp3_end;
          
          _body_eqn = tmpMeta29;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NBEquation_Equation_size(threadData, omc_Pointer_create(threadData, _body_eqn), 0 /* false */) > ((modelica_integer) 1))) goto tmp3_end;
          tmpMeta32 = omc_mk_box1(0, _OMC_LIT13);
          tmp33 = stringAppend(_OMC_LIT36,omc_NBSlice_toString(threadData, _slice, (modelica_fnptr) omc_mk_box2(0,closure1_NBEquation_Equation_pointerToString,tmpMeta32), ((modelica_integer) 10)));
          tmpMeta31 = mmc_mk_cons(tmp33, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta31);
          goto goto_2;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta34 = OMC_BOX_FIELD(tmp4_1, 4);
          if (listEmpty(tmpMeta34)) goto tmp3_end;
          tmpMeta35 = MMC_CAR(tmpMeta34);
          tmpMeta36 = MMC_CDR(tmpMeta34);
          if (!listEmpty(tmpMeta36)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta37 = omc_mk_box8(6, &NSimStrongComponent_Block_GENERIC__RESIDUAL__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), omc_mk_integer(_res_idx), (OMC_BOX_FIELD(_slice, 3)), omc_NSimGenericCall_SimIterator_fromIterator(threadData, (OMC_BOX_FIELD(_eqn, 3))), omc_Util_getOption(threadData, omc_NBEquation_Equation_getRHS(threadData, _eqn)), (OMC_BOX_FIELD(_eqn, 5)), (OMC_BOX_FIELD(_eqn, 6)));
          _tmp = tmpMeta37;

          tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta38;

          _res_idx = _res_idx + listLength((OMC_BOX_FIELD(_slice, 3)));
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createWhenBody(threadData, (OMC_BOX_FIELD(_eqn, 3)), (OMC_BOX_FIELD(_eqn, 4)), (OMC_BOX_FIELD(_eqn, 5)), _simCodeIndices ,&_simCodeIndices);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_string tmp41;
          
          /* Pattern matching succeeded */
          tmpMeta40 = omc_mk_box1(0, _OMC_LIT13);
          tmp41 = stringAppend(_OMC_LIT37,omc_NBSlice_toString(threadData, _slice, (modelica_fnptr) omc_mk_box2(0,closure2_NBEquation_Equation_pointerToString,tmpMeta40), ((modelica_integer) 10)));
          tmpMeta39 = mmc_mk_cons(tmp41, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta39);
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
  _blck = tmpMeta1;

  omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_Pointer_create(threadData, _eqn)), _blck, _equation_map);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  if (out_res_idx) { *out_res_idx = _res_idx; }
  omc_ret_ = _blck;
  return omc_ret_;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createResidual(threadData_t *threadData, modelica_metatype _slice, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype __omcQ_24in_5Fres_5Fidx, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices, modelica_metatype *out_res_idx)
{
  modelica_integer tmp1;
  modelica_integer _res_idx;
  modelica_metatype _blck = NULL;
  tmp1 = omc_unbox_integer(__omcQ_24in_5Fres_5Fidx);
  _blck = omc_NSimStrongComponent_Block_createResidual(threadData, _slice, __omcQ_24in_5FsimCodeIndices, tmp1, _equation_map, out_simCodeIndices, &_res_idx);
  /* skip box _blck; NSimStrongComponent.Block */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  if (out_res_idx) { *out_res_idx = omc_mk_icon(_res_idx); }
  return _blck;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_fromStrongComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices, modelica_integer *out_index)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_integer _index;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _index has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _comp;
    {
      modelica_metatype _strict = NULL;
      modelica_metatype _system = NULL;
      modelica_metatype _linSystem = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _crefs = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _linVars = NULL;
      modelica_metatype tmpMeta5;
      modelica_integer _sysIndex;
      modelica_boolean _allLinVarsFound;
      modelica_metatype _osimvar = NULL;
      modelica_metatype _tmp = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _jacobian = NULL;
      modelica_metatype _eqn_ptr = NULL;
      modelica_metatype _eqn = NULL;
      modelica_integer _aliasOf;
      modelica_integer _generic_call_index;
      modelica_integer _residual_index;
      modelica_metatype _single_call = NULL;
      modelica_metatype _single_calls = NULL;
      modelica_metatype tmpMeta6;
      modelica_metatype _entwined_index_map = NULL;
      modelica_metatype _call_order = NULL;
      modelica_metatype tmpMeta7;
      modelica_metatype _ident = NULL;
      modelica_metatype _iters = NULL;
      volatile mmc_switch_type tmp9;
      int tmp10;
      // _strict has no default value.
      // _system has no default value.
      // _linSystem has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _eqns = tmpMeta3;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _crefs = tmpMeta4;
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _linVars = tmpMeta5;
      // _sysIndex has no default value.
      // _allLinVarsFound has no default value.
      // _osimvar has no default value.
      // _tmp has no default value.
      // _var has no default value.
      // _jacobian has no default value.
      // _eqn_ptr has no default value.
      // _eqn has no default value.
      // _aliasOf has no default value.
      // _generic_call_index has no default value.
      _residual_index = ((modelica_integer) 0);
      // _single_call has no default value.
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _single_calls = tmpMeta6;
      // _entwined_index_map has no default value.
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _call_order = tmpMeta7;
      // _ident has no default value.
      // _iters has no default value.
      tmp9 = 0;
      for (; tmp9 < 11; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,3) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createEquation(threadData, omc_Pointer_access(threadData, (OMC_BOX_FIELD(_comp, 2))), omc_Pointer_access(threadData, (OMC_BOX_FIELD(_comp, 3))), omc_unbox_integer((OMC_BOX_FIELD(_comp, 4))), _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp8_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,1,3) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createEquation(threadData, _OMC_LIT50, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 3)))), omc_unbox_integer((OMC_BOX_FIELD(_comp, 4))), _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp8_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,2,4) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))))) goto tmp8_end;
          _tmp = omc_NSimStrongComponent_Block_createAlgorithm(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4)))), _simCodeIndices, _equation_map ,&_simCodeIndices);
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp8_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,2,4) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))));

          _tmp = omc_NSimStrongComponent_Block_createEquation(threadData, omc_NFVariable_fromCref(threadData, (OMC_BOX_FIELD(_comp, 2))), _eqn, omc_unbox_integer((OMC_BOX_FIELD(_comp, 5))), _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp8_done;
        }
        case 4: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,3,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4))))) goto tmp8_end;
          _eqn_ptr = omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4)));

          _eqn = omc_Pointer_access(threadData, _eqn_ptr);

          tmpMeta11 = omc_mk_box4(3, &NSimCode_Identifier_IDENTIFIER__desc, _eqn_ptr, (OMC_BOX_FIELD(_comp, 2)), omc_mk_boolean(1 /* true */));
          _ident = tmpMeta11;

          _iters = omc_NSimGenericCall_SimIterator_fromIterator(threadData, omc_NBEquation_Equation_getForIterator(threadData, _eqn));

          _generic_call_index = omc_unbox_integer(omc_UnorderedMap_tryAdd(threadData, _ident, omc_mk_integer(omc_UnorderedMap_size(threadData, (OMC_BOX_FIELD(_simCodeIndices, 26)))), (OMC_BOX_FIELD(_simCodeIndices, 26))));

          tmpMeta12 = omc_mk_box6(9, &NSimStrongComponent_Block_RESIZABLE__ASSIGN__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), omc_mk_integer(_generic_call_index), _iters, omc_NBEquation_Equation_getSource(threadData, _eqn), omc_NBEquation_Equation_getAttributes(threadData, _eqn));
          _tmp = tmpMeta12;

          omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, _eqn_ptr), _tmp, _equation_map);

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta13;
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp8_done;
        }
        case 5: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,4,3) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _eqn_ptr = omc_NBSlice_getT(threadData, (OMC_BOX_FIELD(_comp, 4)));

          _eqn = omc_Pointer_access(threadData, _eqn_ptr);

          tmpMeta14 = omc_mk_box4(3, &NSimCode_Identifier_IDENTIFIER__desc, _eqn_ptr, (OMC_BOX_FIELD(_comp, 2)), omc_mk_boolean(0 /* false */));
          _ident = tmpMeta14;

          _generic_call_index = omc_unbox_integer(omc_UnorderedMap_tryAdd(threadData, _ident, omc_mk_integer(omc_UnorderedMap_size(threadData, (OMC_BOX_FIELD(_simCodeIndices, 26)))), (OMC_BOX_FIELD(_simCodeIndices, 26))));

          tmpMeta15 = omc_mk_box6(10, &NSimStrongComponent_Block_GENERIC__ASSIGN__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), omc_mk_integer(_generic_call_index), (OMC_BOX_FIELD((OMC_BOX_FIELD(_comp, 4)), 3)), omc_NBEquation_Equation_getSource(threadData, _eqn), omc_NBEquation_Equation_getAttributes(threadData, _eqn));
          _tmp = tmpMeta15;

          omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, _eqn_ptr), _tmp, _equation_map);

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta16;
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp8_done;
        }
        case 6: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,5,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _entwined_index_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

          {
            modelica_metatype _slice;
            for (tmpMeta17 = (OMC_BOX_FIELD(_comp, 2)); !listEmpty(tmpMeta17); tmpMeta17=MMC_CDR(tmpMeta17))
            {
              _slice = MMC_CAR(tmpMeta17);
              _single_call = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _slice, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices ,NULL);

              omc_UnorderedMap_add(threadData, omc_NSimStrongComponent_Block_getEntwinedEquationName(threadData, _slice), omc_mk_integer(listLength(_single_calls)), _entwined_index_map);

              tmpMeta18 = mmc_mk_cons(_single_call, _single_calls);
              _single_calls = tmpMeta18;
            }
          }

          _single_calls = listReverse(_single_calls);

          {
            modelica_metatype _tpl;
            for (tmpMeta20 = listReverse((OMC_BOX_FIELD(_comp, 3))); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _tpl = MMC_CAR(tmpMeta20);
              /* Pattern-matching assignment */
              tmpMeta21 = _tpl;
              tmpMeta22 = OMC_BOX_FIELD(tmpMeta21, 1);
              _eqn_ptr = tmpMeta22;

              tmpMeta23 = mmc_mk_cons(omc_UnorderedMap_getSafe(threadData, omc_NBEquation_Equation_getEqnName(threadData, _eqn_ptr), _entwined_index_map, _OMC_LIT52), _call_order);
              _call_order = tmpMeta23;
            }
          }

          tmpMeta25 = omc_mk_box6(11, &NSimStrongComponent_Block_ENTWINED__ASSIGN__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), _call_order, _single_calls, _OMC_LIT54, omc_NBEquation_default(threadData, 1, 0 /* false */, mmc_mk_none(), mmc_mk_none()));
          _tmp = tmpMeta25;

          tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta26;
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp8_done;
        }
        case 7: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_integer tmp30;
          modelica_integer tmp31;
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
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,6,8) == 0) goto tmp8_end;
          tmpMeta27 = OMC_BOX_FIELD(tmp9_1, 3);
          
          _strict = tmpMeta27;
          /* Pattern matching succeeded */
          tmp29 = ((modelica_integer) 1); tmp30 = 1; tmp31 = arrayLength((OMC_BOX_FIELD(_strict, 4)));
          if(!(((tmp30 > 0) && (tmp29 > tmp31)) || ((tmp30 < 0) && (tmp29 < tmp31))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp29, tmp31); _i += tmp30)
            {

              _tmp = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, arrayGet((OMC_BOX_FIELD(_strict, 4)),_i) /* DAE.ASUB */, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices ,NULL);

              tmpMeta28 = mmc_mk_cons(_tmp, _eqns);
              _eqns = tmpMeta28;
            }
          }

          {
            modelica_metatype _slice;
            for (tmpMeta32 = (OMC_BOX_FIELD(_strict, 3)); !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
            {
              _slice = MMC_CAR(tmpMeta32);
              _tmp = omc_NSimStrongComponent_Block_createResidual(threadData, _slice, _simCodeIndices, _residual_index, _equation_map ,&_simCodeIndices ,&_residual_index);

              tmpMeta33 = mmc_mk_cons(_tmp, _eqns);
              _eqns = tmpMeta33;
            }
          }

          _allLinVarsFound = 1 /* true */;

          {
            modelica_metatype _slice;
            for (tmpMeta35 = (OMC_BOX_FIELD(_strict, 2)); !listEmpty(tmpMeta35); tmpMeta35=MMC_CDR(tmpMeta35))
            {
              _slice = MMC_CAR(tmpMeta35);
              _var = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _slice));

              if((omc_NFVariable_size(threadData, _var, 0 /* false */) > ((modelica_integer) 1)))
              {
                {
                  modelica_metatype _scal_var;
                  for (tmpMeta36 = omc_NFScalarize_scalarizeBackendVariable(threadData, _var, (OMC_BOX_FIELD(_slice, 3))); !listEmpty(tmpMeta36); tmpMeta36=MMC_CDR(tmpMeta36))
                  {
                    _scal_var = MMC_CAR(tmpMeta36);
                    tmpMeta37 = mmc_mk_cons((OMC_BOX_FIELD(_scal_var, 2)), _crefs);
                    _crefs = tmpMeta37;

                    _osimvar = omc_UnorderedMap_get(threadData, (OMC_BOX_FIELD(_scal_var, 2)), _simcode_map);

                    if(isSome(_osimvar))
                    {
                      tmpMeta38 = mmc_mk_cons(omc_Util_getOption(threadData, _osimvar), _linVars);
                      _linVars = tmpMeta38;
                    }
                    else
                    {
                      _allLinVarsFound = 0 /* false */;
                    }
                  }
                }
              }
              else
              {
                tmpMeta40 = mmc_mk_cons((OMC_BOX_FIELD(_var, 2)), _crefs);
                _crefs = tmpMeta40;

                _osimvar = omc_UnorderedMap_get(threadData, (OMC_BOX_FIELD(_var, 2)), _simcode_map);

                if(isSome(_osimvar))
                {
                  tmpMeta41 = mmc_mk_cons(omc_Util_getOption(threadData, _osimvar), _linVars);
                  _linVars = tmpMeta41;
                }
                else
                {
                  _allLinVarsFound = 0 /* false */;
                }
              }
            }
          }

          if(isSome((OMC_BOX_FIELD(_strict, 5))))
          {
            _jacobian = omc_NSimJacobian_SimJacobian_create(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_strict, 5))), _simCodeIndices, _simcode_map ,&_simCodeIndices);
          }
          else
          {
            _jacobian = mmc_mk_none();
          }

          if(((((((omc_unbox_boolean((OMC_BOX_FIELD(_comp, 5))) && isSome(_jacobian)) && (!omc_unbox_boolean((OMC_BOX_FIELD(_comp, 7))))) && (!omc_unbox_boolean((OMC_BOX_FIELD(_comp, 6))))) && (!omc_List_any(threadData, _eqns, boxvar_NSimStrongComponent_Block_isForOrGenericResidual))) && (!omc_NSimStrongComponent_Block_jacobianHasGenericLoopCalls(threadData, omc_Util_getOption(threadData, _jacobian)))) && _allLinVarsFound))
          {
            tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
            {
              modelica_metatype __omcQ_24tmpVar29;
              modelica_metatype* tmp46;
              modelica_metatype tmpMeta47;
              modelica_metatype __omcQ_24tmpVar28;
              modelica_integer tmp48;
              modelica_metatype _b_loopVar = 0;
              modelica_metatype _b;
              _b_loopVar = listReverse(_eqns);
              tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar29 = tmpMeta47; /* defaultValue */
              tmp46 = &__omcQ_24tmpVar29;
              while(1) {
                tmp48 = 1;
                if (!listEmpty(_b_loopVar)) {
                  _b = MMC_CAR(_b_loopVar);
                  _b_loopVar = MMC_CDR(_b_loopVar);
                  tmp48--;
                }
                if (tmp48 == 0) {
                  __omcQ_24tmpVar28 = omc_NSimStrongComponent_Block_blockSource(threadData, _b);
                  *tmp46 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                  tmp46 = &MMC_CDR(*tmp46);
                } else if (tmp48 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp46 = mmc_mk_nil();
              tmpMeta45 = __omcQ_24tmpVar29;
            }
            tmpMeta49 = omc_mk_box13(3, &NSimStrongComponent_LinearSystem_LINEAR__SYSTEM__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), (OMC_BOX_FIELD(_comp, 6)), omc_mk_boolean(1 /* true */), listReverse(_linVars), tmpMeta43, tmpMeta44, listReverse(_eqns), _jacobian, tmpMeta45, (OMC_BOX_FIELD(_simCodeIndices, 19)), omc_mk_integer(listLength(_crefs)), omc_mk_boolean(0 /* false */));
            _linSystem = tmpMeta49;

            tmpMeta50 = MMC_TAGPTR(mmc_alloc_words(27));
            memcpy(MMC_UNTAGPTR(tmpMeta50), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta50))[19] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 19)))));
            _simCodeIndices = tmpMeta50;

            tmpMeta51 = MMC_TAGPTR(mmc_alloc_words(27));
            memcpy(MMC_UNTAGPTR(tmpMeta51), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta51))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
            _simCodeIndices = tmpMeta51;

            tmpMeta52 = omc_mk_box3(17, &NSimStrongComponent_Block_LINEAR__desc, _linSystem, mmc_mk_none());
            _tmp = tmpMeta52;

            _sysIndex = omc_unbox_integer((OMC_BOX_FIELD(_linSystem, 2)));
          }
          else
          {
            tmpMeta53 = omc_mk_box10(3, &NSimStrongComponent_NonlinearSystem_NONLINEAR__SYSTEM__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), listReverse(_eqns), listReverse(_crefs), (OMC_BOX_FIELD(_simCodeIndices, 20)), omc_mk_integer(listLength(_crefs)), omc_Pointer_create(threadData, _jacobian), (OMC_BOX_FIELD(_comp, 7)), (OMC_BOX_FIELD(_comp, 6)), omc_mk_boolean(1 /* true */));
            _system = tmpMeta53;

            tmpMeta54 = MMC_TAGPTR(mmc_alloc_words(27));
            memcpy(MMC_UNTAGPTR(tmpMeta54), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta54))[20] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 20)))));
            _simCodeIndices = tmpMeta54;

            tmpMeta55 = MMC_TAGPTR(mmc_alloc_words(27));
            memcpy(MMC_UNTAGPTR(tmpMeta55), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta55))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
            _simCodeIndices = tmpMeta55;

            tmpMeta56 = omc_mk_box3(18, &NSimStrongComponent_Block_NONLINEAR__desc, _system, mmc_mk_none());
            _tmp = tmpMeta56;

            _sysIndex = omc_unbox_integer((OMC_BOX_FIELD(_system, 2)));
          }
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = _sysIndex;
          goto tmp8_done;
        }
        case 8: {
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,7,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _aliasOf = omc_unbox_integer(omc_UnorderedMap_getOrDefault(threadData, (OMC_BOX_FIELD(_comp, 2)), (OMC_BOX_FIELD(_simCodeIndices, 25)), omc_mk_integer(((modelica_integer) -1))));

          tmpMeta57 = omc_mk_box5(12, &NSimStrongComponent_Block_ALIAS__desc, (OMC_BOX_FIELD(_simCodeIndices, 18)), (OMC_BOX_FIELD(_comp, 2)), omc_mk_integer(_aliasOf), omc_mk_boolean((omc_NBStrongComponent_isDiscrete(threadData, _comp) && (!omc_NBStrongComponent_isAlgebraicLoop(threadData, (OMC_BOX_FIELD(_comp, 3)))))));
          _tmp = tmpMeta57;

          tmpMeta58 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta58), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta58))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_simCodeIndices, 18)))));
          _simCodeIndices = tmpMeta58;
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp8_done;
        }
        case 9: {
          modelica_metatype tmpMeta59;
          modelica_string tmp60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,5,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmp60 = stringAppend(_OMC_LIT55,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta59 = mmc_mk_cons(tmp60, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta59);
          goto goto_2;
          goto tmp8_done;
        }
        case 10: {
          modelica_metatype tmpMeta61;
          modelica_string tmp62;
          
          /* Pattern matching succeeded */
          tmp62 = stringAppend(_OMC_LIT56,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta61 = mmc_mk_cons(tmp62, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta61);
          goto goto_2;
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _blck = tmpMeta[0+0];
  _index = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  if (out_index) { *out_index = _index; }
  omc_ret_ = _blck;
  return omc_ret_;
}
modelica_metatype boxptr_NSimStrongComponent_Block_fromStrongComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer _index;
  modelica_metatype _blck = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _blck = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _comp, __omcQ_24in_5FsimCodeIndices, tmp1, _simcode_map, _equation_map, out_simCodeIndices, &_index);
  /* skip box _blck; NSimStrongComponent.Block */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  if (out_index) { *out_index = omc_mk_icon(_index); }
  return _blck;
}

DLLModelDirection
modelica_boolean omc_NSimStrongComponent_Block_isForOrGenericResidual(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          
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
modelica_metatype boxptr_NSimStrongComponent_Block_isForOrGenericResidual(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NSimStrongComponent_Block_isForOrGenericResidual(threadData, _blck);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NSimStrongComponent_Block_jacobianHasGenericLoopCalls(threadData_t *threadData, modelica_metatype _jac)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _jac;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,15) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (!listEmpty((OMC_BOX_FIELD(_jac, 11))));
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
modelica_metatype boxptr_NSimStrongComponent_Block_jacobianHasGenericLoopCalls(threadData_t *threadData, modelica_metatype _jac)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NSimStrongComponent_Block_jacobianHasGenericLoopCalls(threadData, _jac);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_blockSource(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_metatype _source = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _source has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 5));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 5));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 6));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 7));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 5));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 5));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 5));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 5));
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 5));
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 4));
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_blck, 7));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT54;
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
  _source = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _source;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_fromPartition(threadData_t *threadData, modelica_metatype _partition, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blcks has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (OMC_BOX_FIELD(_partition, 9));
    {
      modelica_metatype _comps = NULL;
      modelica_integer _kind;
      modelica_metatype _tmp = NULL;
      modelica_metatype _result = NULL;
      modelica_metatype tmpMeta3;
      modelica_integer _index;
      modelica_integer _alias_index;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _comps has no default value.
      // _kind has no default value.
      // _tmp has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _result = tmpMeta3;
      // _index has no default value.
      // _alias_index has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_integer tmp8 = 0;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_integer tmp17;
          modelica_integer tmp18;
          if (optionNone(tmp5_1)) goto tmp4_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp5_1, 1);
          _comps = tmpMeta7;
          /* Pattern matching succeeded */
          _kind = omc_NBPartition_Partition_getKind(threadData, _partition);

          tmp16 = arrayLength(_comps); tmp17 = ((modelica_integer) -1); tmp18 = ((modelica_integer) 1);
          if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
          {
            modelica_integer _i;
            for(_i = arrayLength(_comps); in_range_integer(_i, tmp16, tmp18); _i += tmp17)
            {

              _tmp = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, arrayGet(_comps,_i) /* DAE.ASUB */, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices ,&_index);

              { /* match expression */
                modelica_metatype tmp11_1;
                tmp11_1 = arrayGet(_comps,_i) /* DAE.ASUB */;
                {
                  modelica_metatype _aliasInfo = NULL;
                  volatile mmc_switch_type tmp11;
                  int tmp12;
                  // _aliasInfo has no default value.
                  tmp11 = 0;
                  for (; tmp11 < 2; tmp11++) {
                    switch (MMC_SWITCH_CAST(tmp11)) {
                    case 0: {
                      modelica_metatype tmpMeta13;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,7,2) == 0) goto tmp10_end;
                      tmpMeta13 = OMC_BOX_FIELD(tmp11_1, 2);
                      
                      _aliasInfo = tmpMeta13;
                      /* Pattern matching succeeded */
                      tmp8 = omc_unbox_integer(omc_UnorderedMap_getOrDefault(threadData, _aliasInfo, (OMC_BOX_FIELD(_simCodeIndices, 25)), omc_mk_integer(((modelica_integer) -1))));
                      goto tmp10_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      tmp8 = _index;
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
              _alias_index = tmp8;

              tmpMeta14 = omc_mk_box4(3, &NBStrongComponent_AliasInfo_ALIAS__INFO__desc, omc_mk_integer((modelica_integer)_kind), (OMC_BOX_FIELD(_partition, 2)), omc_mk_integer(_i));
              omc_UnorderedMap_add(threadData, tmpMeta14, omc_mk_integer(_alias_index), (OMC_BOX_FIELD(_simCodeIndices, 25)));

              tmpMeta15 = mmc_mk_cons(_tmp, _result);
              _result = tmpMeta15;
            }
          }
          tmpMeta1 = _result;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_string tmp20;
          
          /* Pattern matching succeeded */
          tmp20 = stringAppend(_OMC_LIT57,omc_NBPartition_Partition_toString(threadData, _partition, ((modelica_integer) 0)));
          tmpMeta19 = mmc_mk_cons(tmp20, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta19);
          goto goto_2;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _blcks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blcks;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createNoReturnBlocks(threadData_t *threadData, modelica_metatype _equations, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _eqn has no default value.
  // _tmp has no default value.
  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = omc_ExpandableArray_getLastUsedIndex(threadData, (OMC_BOX_FIELD(_equations, 3)));
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp16, tmp18); _i += tmp17)
    {

      if(omc_ExpandableArray_occupied(threadData, _i, (OMC_BOX_FIELD(_equations, 3))))
      {
        _eqn = omc_Pointer_access(threadData, omc_ExpandableArray_get(threadData, _i, (OMC_BOX_FIELD(_equations, 3))));

        
        
        { /* match expression */
          modelica_metatype tmp5_1;
          tmp5_1 = _eqn;
          {
            modelica_metatype _cref = NULL;
            volatile mmc_switch_type tmp5;
            int tmp6;
            // _cref has no default value.
            tmp5 = 0;
            for (; tmp5 < 7; tmp5++) {
              switch (MMC_SWITCH_CAST(tmp5)) {
              case 0: {
                modelica_metatype tmpMeta7;
                modelica_metatype tmpMeta8;
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,5) == 0) goto tmp4_end;
                tmpMeta7 = OMC_BOX_FIELD(tmp5_1, 3);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto tmp4_end;
                tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 3);
                
                _cref = tmpMeta8;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createEquation(threadData, omc_NBVariable_getVar(threadData, _cref, _OMC_LIT58), _eqn, 2, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 1: {
                modelica_metatype tmpMeta9;
                modelica_metatype tmpMeta10;
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,6) == 0) goto tmp4_end;
                tmpMeta9 = OMC_BOX_FIELD(tmp5_1, 3);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp4_end;
                tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 3);
                
                _cref = tmpMeta10;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createEquation(threadData, omc_NBVariable_getVar(threadData, _cref, _OMC_LIT59), _eqn, 2, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 2: {
                modelica_metatype tmpMeta11;
                modelica_metatype tmpMeta12;
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,2,6) == 0) goto tmp4_end;
                tmpMeta11 = OMC_BOX_FIELD(tmp5_1, 3);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto tmp4_end;
                tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 3);
                
                _cref = tmpMeta12;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createEquation(threadData, omc_NBVariable_getVar(threadData, _cref, _OMC_LIT60), _eqn, 2, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 3: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,6,4) == 0) goto tmp4_end;
                
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createEquation(threadData, _OMC_LIT50, _eqn, 2, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 4: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,3,5) == 0) goto tmp4_end;
                
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createAlgorithm(threadData, _eqn, _simCodeIndices, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 5: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,5,5) == 0) goto tmp4_end;
                
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createAlgorithm(threadData, _eqn, _simCodeIndices, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 6: {
                modelica_metatype tmpMeta13;
                modelica_string tmp14;
                
                /* Pattern matching succeeded */
                tmp14 = stringAppend(_OMC_LIT61,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT13));
                tmpMeta13 = mmc_mk_cons(tmp14, MMC_REFSTRUCTLIT(mmc_nil));
                omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta13);
                goto goto_3;
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
        _tmp = tmpMeta[0+0];
        _simCodeIndices = tmpMeta[0+1];

        tmpMeta15 = mmc_mk_cons(_tmp, _blcks);
        _blcks = tmpMeta15;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blcks;
  return omc_ret_;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createNoReturnBlocks(threadData_t *threadData, modelica_metatype _equations, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = omc_unbox_integer(_kind);
  _blcks = omc_NSimStrongComponent_Block_createNoReturnBlocks(threadData, _equations, __omcQ_24in_5FsimCodeIndices, tmp1, _simcode_map, _equation_map, out_simCodeIndices);
  /* skip box _blcks; list<NSimStrongComponent.Block> */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _blcks;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createClockedBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype _info, modelica_metatype *out_eventClocks, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _baseParts = NULL;
  modelica_metatype _eventClocks = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _clock_collector = NULL;
  modelica_metatype _blcks = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _clock = NULL;
  modelica_metatype _subClock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_boolean _holdEvents;
  modelica_metatype _baseClock_opt = NULL;
  modelica_metatype _subPart = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _baseParts has no default value.
  // _eventClocks has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  _clock_collector = omc_UnorderedMap_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 1));
  // _blcks has no default value.
  // _vars has no default value.
  // _clock has no default value.
  // _subClock has no default value.
  // _baseClock has no default value.
  // _holdEvents has no default value.
  // _baseClock_opt has no default value.
  // _subPart has no default value.
  {
    modelica_metatype _c;
    for (tmpMeta1 = omc_UnorderedMap_valueList(threadData, (OMC_BOX_FIELD(_info, 2))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _c = MMC_CAR(tmpMeta1);
      tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
      omc_UnorderedMap_add(threadData, _c, tmpMeta2, _clock_collector);
    }
  }

  {
    modelica_metatype _partition;
    for (tmpMeta4 = listReverse(_partitions); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _partition = MMC_CAR(tmpMeta4);
      _blcks = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, _simCodeIndices, _simcode_map, _equation_map ,&_simCodeIndices);

      _vars = omc_NSimVar_SimVars_getPartitionVars(threadData, _partition, _simcode_map);

      _clock = omc_NBPartition_Partition_getClocks(threadData, _partition ,&_baseClock_opt ,&_holdEvents);

      if(isSome(_baseClock_opt))
      {
        /* Pattern-matching assignment */
        tmpMeta5 = _baseClock_opt;
        if (optionNone(tmpMeta5)) OMC_THROW_INTERNAL();
        tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
        _baseClock = tmpMeta6;

        _subClock = _clock;
      }
      else
      {
        _baseClock = _clock;

        _subClock = _OMC_LIT64;
      }

      _subPart = omc_NSimPartition_createSubPartition(threadData, _subClock, _blcks, _vars, _holdEvents);

      tmpMeta7 = mmc_mk_cons(_subPart, omc_UnorderedMap_getSafe(threadData, _baseClock, _clock_collector, _OMC_LIT65));
      omc_UnorderedMap_add(threadData, _baseClock, tmpMeta7, _clock_collector);
    }
  }

  _baseParts = omc_NSimPartition_createBasePartitions(threadData, _clock_collector, _simCodeIndices ,&_eventClocks ,&_simCodeIndices);
  _return: OMC_LABEL_UNUSED
  if (out_eventClocks) { *out_eventClocks = _eventClocks; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _baseParts;
  return omc_ret_;
}

static modelica_metatype closure3_NSimVar_SimVar_createFromResidualComponent(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp)
{
  modelica_metatype acc = OMC_BOX_FIELD(closure, 1);
  modelica_metatype indices_ptr = OMC_BOX_FIELD(closure, 2);
  modelica_metatype varType = OMC_BOX_FIELD(closure, 3);
  return boxptr_NSimVar_SimVar_createFromResidualComponent(thData, $in_comp, acc, indices_ptr, varType);
}
DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createDAEModeBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_vars, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _indices_ptr = NULL;
  modelica_metatype _vars_ptr = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _tmp = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars = tmpMeta2;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _indices_ptr has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars_ptr = omc_Pointer_create(threadData, tmpMeta3);
  // _tmp has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta4 = listReverse(_partitions); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _partition = MMC_CAR(tmpMeta4);
      _indices_ptr = omc_Pointer_create(threadData, _simCodeIndices);

      tmpMeta5 = omc_mk_box3(0, _vars_ptr, _indices_ptr, omc_mk_integer(4));
      omc_NBPartition_Partition_mapStrongComponents(threadData, _partition, (modelica_fnptr) omc_mk_box2(0,closure3_NSimVar_SimVar_createFromResidualComponent,tmpMeta5));

      _tmp = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, omc_Pointer_access(threadData, _indices_ptr), _simcode_map, _equation_map ,&_simCodeIndices);

      tmpMeta6 = mmc_mk_cons(_tmp, _blcks);
      _blcks = tmpMeta6;
    }
  }

  _vars = listReverse(omc_Pointer_access(threadData, _vars_ptr));
  _return: OMC_LABEL_UNUSED
  if (out_vars) { *out_vars = _vars; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blcks;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createParameterBlocks(threadData_t *threadData, modelica_metatype _comps, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _tmp = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _tmp has no default value.
  // _index has no default value.
  {
    modelica_metatype _comp;
    for (tmpMeta2 = _comps; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _comp = MMC_CAR(tmpMeta2);
      _tmp = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _comp, _simCodeIndices, 5, _simcode_map, _equation_map ,&_simCodeIndices ,&_index);

      tmpMeta3 = mmc_mk_cons(_tmp, _blcks);
      _blcks = tmpMeta3;
    }
  }

  _blcks = listReverse(_blcks);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blcks;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createInitialBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _tmp_lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blcks has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _tmp has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmp_lst = tmpMeta1;
  {
    modelica_metatype _partition;
    for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _partition = MMC_CAR(tmpMeta2);
      _tmp = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, _simCodeIndices, _simcode_map, _equation_map ,&_simCodeIndices);

      tmpMeta3 = mmc_mk_cons(_tmp, _tmp_lst);
      _tmp_lst = tmpMeta3;
    }
  }

  _blcks = omc_List_flatten(threadData, _tmp_lst);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blcks;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createDiscreteBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5Fblcks, modelica_metatype __omcQ_24in_5Fall_5Fblcks, modelica_metatype __omcQ_24in_5Fevent_5Fdependencies, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_all_blcks, modelica_metatype *out_event_dependencies, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype _all_blcks = NULL;
  modelica_metatype _event_dependencies = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _new_blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _blcks = __omcQ_24in_5Fblcks;
  _all_blcks = __omcQ_24in_5Fall_5Fblcks;
  _event_dependencies = __omcQ_24in_5Fevent_5Fdependencies;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _tmp has no default value.
  // _new_blcks has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta1 = _partitions; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _partition = MMC_CAR(tmpMeta1);
      _tmp = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, _simCodeIndices, _simcode_map, _equation_map ,&_simCodeIndices);

      _all_blcks = listAppend(_tmp, _all_blcks);

      tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _tmp = omc_NSimStrongComponent_Block_filterWhen(threadData, listReverse(_tmp), tmpMeta2, tmpMeta3, _simCodeIndices ,&_new_blcks ,&_simCodeIndices);

      _all_blcks = listAppend(_new_blcks, _all_blcks);

      tmpMeta4 = mmc_mk_cons(_tmp, _blcks);
      _blcks = tmpMeta4;

      {
        modelica_metatype __omcQ_24tmpVar31;
        modelica_metatype* tmp6;
        modelica_metatype tmpMeta7;
        modelica_metatype __omcQ_24tmpVar30;
        modelica_integer tmp8;
        modelica_metatype _blck_loopVar = 0;
        modelica_metatype _blck;
        _blck_loopVar = _tmp;
        tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar31 = tmpMeta7; /* defaultValue */
        tmp6 = &__omcQ_24tmpVar31;
        while(1) {
          tmp8 = 1;
          while (!listEmpty(_blck_loopVar)) {
            _blck = MMC_CAR(_blck_loopVar);
            _blck_loopVar = MMC_CDR(_blck_loopVar);
            if ((!omc_NSimStrongComponent_Block_isDiscrete(threadData, _blck))) {
              tmp8--;
              break;
            }
          }
          if (tmp8 == 0) {
            __omcQ_24tmpVar30 = _blck;
            *tmp6 = mmc_mk_cons(__omcQ_24tmpVar30,0);
            tmp6 = &MMC_CDR(*tmp6);
          } else if (tmp8 == 1) {
            break;
          } else {
            OMC_THROW_INTERNAL();
          }
        }
        *tmp6 = mmc_mk_nil();
        tmpMeta5 = __omcQ_24tmpVar31;
      }
      _tmp = tmpMeta5;

      _event_dependencies = listAppend(_tmp, _event_dependencies);
    }
  }

  _blcks = listReverse(_blcks);
  _return: OMC_LABEL_UNUSED
  if (out_all_blcks) { *out_all_blcks = _all_blcks; }
  if (out_event_dependencies) { *out_event_dependencies = _event_dependencies; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blcks;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_createBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5Fall_5Fblcks, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_all_blcks, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _all_blcks = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  _all_blcks = __omcQ_24in_5Fall_5Fblcks;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _tmp has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _partition = MMC_CAR(tmpMeta2);
      _tmp = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, _simCodeIndices, _simcode_map, _equation_map ,&_simCodeIndices);

      tmpMeta3 = mmc_mk_cons(_tmp, _blcks);
      _blcks = tmpMeta3;

      _all_blcks = listAppend(_tmp, _all_blcks);
    }
  }

  _blcks = listReverse(_blcks);
  _return: OMC_LABEL_UNUSED
  if (out_all_blcks) { *out_all_blcks = _all_blcks; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  omc_ret_ = _blcks;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NSimStrongComponent_Block_listToString(threadData_t *threadData, modelica_metatype _blcks, modelica_string __omcQ_24in_5Fstr, modelica_string _header)
{
  modelica_string _str = NULL;
  modelica_string _indent = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  _indent = _str;
  omc_string_store(&(_str), ((!stringEqual(_header, _OMC_LIT13))?omc_StringUtil_headline__3(threadData, _header):_OMC_LIT13));

  {
    modelica_metatype _blck;
    for (tmpMeta1 = _blcks; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _blck = MMC_CAR(tmpMeta1);
      tmp2 = stringAppend(_str,omc_NSimStrongComponent_Block_toString(threadData, _blck, _indent));
      omc_string_store(&(_str), tmp2);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fblck, modelica_fnptr _func)
{
  modelica_metatype _blck = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _blck = __omcQ_24in_5Fblck;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = omc_NFExpression_map(threadData, (OMC_BOX_FIELD(_blck, 4)), ((modelica_fnptr) _func));
          _blck = tmpMeta5;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_NFExpression_map(threadData, (OMC_BOX_FIELD(_blck, 4)), ((modelica_fnptr) _func));
          _blck = tmpMeta6;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _blck;
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
  _blck = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _blck;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NSimStrongComponent_Block_filterWhen(threadData_t *threadData, modelica_metatype _blcks, modelica_metatype __omcQ_24in_5Fout_5Fblcks, modelica_metatype __omcQ_24in_5Fnew_5Fblcks, modelica_metatype __omcQ_24in_5Findices, modelica_metatype *out_new_blcks, modelica_metatype *out_indices)
{
  modelica_metatype _out_blcks = NULL;
  modelica_metatype _new_blcks = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype _blck = NULL;
  modelica_metatype _new_blck = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _out_blcks = __omcQ_24in_5Fout_5Fblcks;
  _new_blcks = __omcQ_24in_5Fnew_5Fblcks;
  _indices = __omcQ_24in_5Findices;
  // _blck has no default value.
  // _new_blck has no default value.
  // _rest has no default value.
  // _stmts has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blcks;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,7) == 0) goto tmp3_end;
          
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _blcks = _rest;
          __omcQ_24in_5Fout_5Fblcks = _out_blcks;
          __omcQ_24in_5Fnew_5Fblcks = _new_blcks;
          __omcQ_24in_5Findices = _indices;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,10,3) == 0) goto tmp3_end;
          
          _blck = tmpMeta8;
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmts = omc_NFStatement_filterDiscrete(threadData, (OMC_BOX_FIELD(_blck, 3)), tmpMeta10);

          if(listEmpty(_stmts))
          {
            _out_blcks = omc_NSimStrongComponent_Block_filterWhen(threadData, _rest, _out_blcks, _new_blcks, _indices ,&_new_blcks ,&_indices);
          }
          else
          {
            if((omc_List_compareLength(threadData, _stmts, (OMC_BOX_FIELD(_blck, 3))) != ((modelica_integer) 0)))
            {
              tmpMeta11 = omc_mk_box4(13, &NSimStrongComponent_Block_ALGORITHM__desc, (OMC_BOX_FIELD(_indices, 18)), _stmts, (OMC_BOX_FIELD(_blck, 4)));
              _new_blck = tmpMeta11;

              tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
              memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[18] = omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer((OMC_BOX_FIELD(_indices, 18)))));
              _indices = tmpMeta12;

              tmpMeta13 = mmc_mk_cons(_new_blck, _out_blcks);
              tmpMeta14 = mmc_mk_cons(_new_blck, _new_blcks);
              _out_blcks = omc_NSimStrongComponent_Block_filterWhen(threadData, _rest, tmpMeta13, tmpMeta14, _indices ,&_new_blcks ,&_indices);
            }
            else
            {
              tmpMeta15 = mmc_mk_cons(_blck, _out_blcks);
              _out_blcks = omc_NSimStrongComponent_Block_filterWhen(threadData, _rest, tmpMeta15, _new_blcks, _indices ,&_new_blcks ,&_indices);
            }
          }
          tmpMeta[0+0] = _out_blcks;
          tmpMeta[0+1] = _new_blcks;
          tmpMeta[0+2] = _indices;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          _blck = tmpMeta16;
          _rest = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_cons(_blck, _out_blcks);
          /* Tail recursive call */
          _blcks = _rest;
          __omcQ_24in_5Fout_5Fblcks = tmpMeta18;
          __omcQ_24in_5Fnew_5Fblcks = _new_blcks;
          __omcQ_24in_5Findices = _indices;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _out_blcks;
          tmpMeta[0+1] = _new_blcks;
          tmpMeta[0+2] = _indices;
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
  _out_blcks = tmpMeta[0+0];
  _new_blcks = tmpMeta[0+1];
  _indices = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_new_blcks) { *out_new_blcks = _new_blcks; }
  if (out_indices) { *out_indices = _indices; }
  omc_ret_ = _out_blcks;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NSimStrongComponent_Block_isDiscrete(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      modelica_metatype _attr = NULL;
      int tmp4;
      // _attr has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 6);
          _attr = tmpMeta5;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 6);
          _attr = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 7);
          _attr = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 6);
          _attr = tmpMeta8;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 6);
          _attr = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 6);
          _attr = tmpMeta10;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 6);
          _attr = tmpMeta11;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,5) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 6);
          _attr = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_boolean((OMC_BOX_FIELD(_blck, 5)));
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,3) == 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 4);
          _attr = tmpMeta13;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,5) == 0) goto tmp3_end;
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 6);
          _attr = tmpMeta14;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,4) == 0) goto tmp3_end;
          tmpMeta15 = OMC_BOX_FIELD(tmp4_1, 5);
          _attr = tmpMeta15;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,7) == 0) goto tmp3_end;
          tmpMeta16 = OMC_BOX_FIELD(tmp4_1, 8);
          _attr = tmpMeta16;
          /* Pattern matching succeeded */
          tmp1 = (omc_unbox_integer((OMC_BOX_FIELD(_attr, 8))) == 2);
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
modelica_metatype boxptr_NSimStrongComponent_Block_isDiscrete(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NSimStrongComponent_Block_isDiscrete(threadData, _blck);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_integer omc_NSimStrongComponent_Block_getIndex(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_integer _index;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_blck, 2)), 2)));
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_blck, 2)), 2)));
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_string tmp6;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT66,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta5 = mmc_mk_cons(tmp6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT19, tmpMeta5);
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
  _index = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _index;
  return omc_ret_;
}
modelica_metatype boxptr_NSimStrongComponent_Block_getIndex(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_integer _index;
  modelica_metatype out_index;
  _index = omc_NSimStrongComponent_Block_getIndex(threadData, _blck);
  out_index = omc_mk_icon(_index);
  return out_index;
}

static modelica_metatype closure4_NSimStrongComponent_Block_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype blck)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NSimStrongComponent_Block_toString(thData, blck, $in_str);
}
DLLModelDirection
modelica_string omc_NSimStrongComponent_Block_ifTplStr(threadData_t *threadData, modelica_metatype _tpl, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_metatype _condition = NULL;
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  // _condition has no default value.
  // _blcks has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 2);
  _condition = tmpMeta2;
  _blcks = tmpMeta3;

  tmp4 = stringAppend(_OMC_LIT67,omc_NFExpression_toString(threadData, _condition));
  tmp5 = stringAppend(tmp4,_OMC_LIT68);
  tmp7 = stringAppend(_str,_OMC_LIT69);
  tmpMeta6 = omc_mk_box1(0, tmp7);
  tmp8 = stringAppend(tmp5,omc_List_toString(threadData, _blcks, (modelica_fnptr) omc_mk_box2(0,closure4_NSimStrongComponent_Block_toString,tmpMeta6), 6));
  omc_string_store(&(_str), tmp8);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NSimStrongComponent_Block_forTplStr(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_string _str = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = omc_NSimGenericCall_SimIterator_toString(threadData, _iter);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

static modelica_metatype closure5_NSimStrongComponent_Block_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype blck)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NSimStrongComponent_Block_toString(thData, blck, $in_str);
}static modelica_metatype closure6_NSimStrongComponent_Block_ifTplStr(threadData_t *thData, modelica_metatype closure, modelica_metatype tpl)
{
  modelica_string $in_str = OMC_BOX_FIELD(closure, 1);
  return boxptr_NSimStrongComponent_Block_ifTplStr(thData, tpl, $in_str);
}
DLLModelDirection
modelica_string omc_NSimStrongComponent_Block_toString(threadData_t *threadData, modelica_metatype _blck, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_string tmp5;
          modelica_string tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_str,_OMC_LIT70);
          tmp6 = stringAppend(tmp5,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp7 = stringAppend(tmp6,_OMC_LIT71);
          tmp8 = stringAppend(tmp7,omc_NFExpression_toString(threadData, (OMC_BOX_FIELD(_blck, 4))));
          tmp9 = stringAppend(tmp8,_OMC_LIT12);
          tmp1 = tmp9;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          
          /* Pattern matching succeeded */
          tmp10 = stringAppend(_str,_OMC_LIT70);
          tmp11 = stringAppend(tmp10,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp12 = stringAppend(tmp11,_OMC_LIT71);
          tmp13 = stringAppend(tmp12,omc_NFExpression_toString(threadData, (OMC_BOX_FIELD(_blck, 4))));
          tmp14 = stringAppend(tmp13,_OMC_LIT12);
          tmp1 = tmp14;
          goto tmp3_done;
        }
        case 5: {
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
          
          /* Pattern matching succeeded */
          tmp15 = stringAppend(_str,_OMC_LIT70);
          tmp16 = stringAppend(tmp15,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp17 = stringAppend(tmp16,_OMC_LIT72);
          tmp18 = stringAppend(tmp17,_str);
          tmp19 = stringAppend(tmp18,_OMC_LIT73);
          tmp20 = stringAppend(tmp19,omc_List_toString(threadData, (OMC_BOX_FIELD(_blck, 4)), boxvar_NSimStrongComponent_Block_forTplStr, 4));
          tmp21 = stringAppend(tmp20,_OMC_LIT74);
          tmp22 = stringAppend(tmp21,_str);
          tmp23 = stringAppend(tmp22,_OMC_LIT75);
          tmp24 = stringAppend(tmp23,omc_NFExpression_toString(threadData, (OMC_BOX_FIELD(_blck, 5))));
          tmp25 = stringAppend(tmp24,_OMC_LIT76);
          tmp26 = stringAppend(tmp25,_str);
          tmp27 = stringAppend(tmp26,_OMC_LIT77);
          tmp1 = tmp27;
          goto tmp3_done;
        }
        case 6: {
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
          
          /* Pattern matching succeeded */
          tmp28 = stringAppend(_str,_OMC_LIT70);
          tmp29 = stringAppend(tmp28,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp30 = stringAppend(tmp29,_OMC_LIT78);
          tmp31 = stringAppend(tmp30,_str);
          tmp32 = stringAppend(tmp31,omc_List_toStringCustom(threadData, (OMC_BOX_FIELD(_blck, 4)), boxvar_intString, _OMC_LIT79, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 10)));
          tmp33 = stringAppend(tmp32,_OMC_LIT12);
          tmp34 = stringAppend(tmp33,_str);
          tmp35 = stringAppend(tmp34,_OMC_LIT73);
          tmp36 = stringAppend(tmp35,omc_List_toString(threadData, (OMC_BOX_FIELD(_blck, 5)), boxvar_NSimStrongComponent_Block_forTplStr, 4));
          tmp37 = stringAppend(tmp36,_OMC_LIT74);
          tmp38 = stringAppend(tmp37,_str);
          tmp39 = stringAppend(tmp38,_OMC_LIT75);
          tmp40 = stringAppend(tmp39,omc_NFExpression_toString(threadData, (OMC_BOX_FIELD(_blck, 6))));
          tmp41 = stringAppend(tmp40,_OMC_LIT76);
          tmp42 = stringAppend(tmp41,_str);
          tmp43 = stringAppend(tmp42,_OMC_LIT77);
          tmp1 = tmp43;
          goto tmp3_done;
        }
        case 7: {
          modelica_string tmp44;
          modelica_string tmp45;
          modelica_string tmp46;
          modelica_string tmp47;
          modelica_string tmp48;
          modelica_string tmp49;
          modelica_string tmp50;
          
          /* Pattern matching succeeded */
          tmp44 = stringAppend(_str,_OMC_LIT70);
          tmp45 = stringAppend(tmp44,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp46 = stringAppend(tmp45,_OMC_LIT80);
          tmp47 = stringAppend(tmp46,omc_NFComponentRef_toString(threadData, (OMC_BOX_FIELD(_blck, 3))));
          tmp48 = stringAppend(tmp47,_OMC_LIT81);
          tmp49 = stringAppend(tmp48,omc_NFExpression_toString(threadData, (OMC_BOX_FIELD(_blck, 4))));
          tmp50 = stringAppend(tmp49,_OMC_LIT12);
          tmp1 = tmp50;
          goto tmp3_done;
        }
        case 8: {
          modelica_string tmp51;
          modelica_string tmp52;
          modelica_string tmp53;
          modelica_string tmp54;
          modelica_string tmp55;
          modelica_string tmp56;
          modelica_string tmp57;
          
          /* Pattern matching succeeded */
          tmp51 = stringAppend(_str,_OMC_LIT70);
          tmp52 = stringAppend(tmp51,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp53 = stringAppend(tmp52,_OMC_LIT80);
          tmp54 = stringAppend(tmp53,omc_NFExpression_toString(threadData, (OMC_BOX_FIELD(_blck, 3))));
          tmp55 = stringAppend(tmp54,_OMC_LIT81);
          tmp56 = stringAppend(tmp55,omc_NFExpression_toString(threadData, (OMC_BOX_FIELD(_blck, 4))));
          tmp57 = stringAppend(tmp56,_OMC_LIT12);
          tmp1 = tmp57;
          goto tmp3_done;
        }
        case 9: {
          modelica_string tmp58;
          modelica_string tmp59;
          modelica_string tmp60;
          modelica_string tmp61;
          modelica_string tmp62;
          modelica_string tmp63;
          
          /* Pattern matching succeeded */
          tmp58 = stringAppend(_str,_OMC_LIT70);
          tmp59 = stringAppend(tmp58,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp60 = stringAppend(tmp59,_OMC_LIT80);
          tmp61 = stringAppend(tmp60,_OMC_LIT82);
          tmp62 = stringAppend(tmp61,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 3)))));
          tmp63 = stringAppend(tmp62,_OMC_LIT83);
          tmp1 = tmp63;
          goto tmp3_done;
        }
        case 10: {
          modelica_string tmp64;
          modelica_string tmp65;
          modelica_string tmp66;
          modelica_string tmp67;
          modelica_string tmp68;
          modelica_string tmp69;
          modelica_string tmp70;
          modelica_string tmp71;
          
          /* Pattern matching succeeded */
          tmp64 = stringAppend(_str,_OMC_LIT70);
          tmp65 = stringAppend(tmp64,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp66 = stringAppend(tmp65,_OMC_LIT80);
          tmp67 = stringAppend(tmp66,_OMC_LIT84);
          tmp68 = stringAppend(tmp67,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 3)))));
          tmp69 = stringAppend(tmp68,_OMC_LIT85);
          tmp70 = stringAppend(tmp69,omc_List_toStringCustom(threadData, (OMC_BOX_FIELD(_blck, 4)), boxvar_intString, _OMC_LIT13, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 10)));
          tmp71 = stringAppend(tmp70,_OMC_LIT12);
          tmp1 = tmp71;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta72;
          modelica_string tmp73;
          modelica_string tmp74;
          modelica_string tmp75;
          
          /* Pattern matching succeeded */
          tmpMeta72 = omc_mk_box1(0, _OMC_LIT13);
          tmp73 = stringAppend(_OMC_LIT86,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp74 = stringAppend(tmp73,_OMC_LIT87);
          tmp75 = stringAppend(_str,omc_List_toStringCustom(threadData, (OMC_BOX_FIELD(_blck, 4)), (modelica_fnptr) omc_mk_box2(0,closure5_NSimStrongComponent_Block_toString,tmpMeta72), tmp74, _OMC_LIT88, _OMC_LIT89, _OMC_LIT13, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmp75;
          goto tmp3_done;
        }
        case 12: {
          modelica_string tmp76;
          modelica_string tmp77;
          modelica_string tmp78;
          modelica_string tmp79;
          modelica_string tmp80;
          
          /* Pattern matching succeeded */
          tmp76 = stringAppend(_str,_OMC_LIT70);
          tmp77 = stringAppend(tmp76,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp78 = stringAppend(tmp77,_OMC_LIT90);
          tmp79 = stringAppend(tmp78,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 4)))));
          tmp80 = stringAppend(tmp79,_OMC_LIT12);
          tmp1 = tmp80;
          goto tmp3_done;
        }
        case 13: {
          modelica_string tmp81;
          modelica_string tmp82;
          modelica_string tmp83;
          modelica_string tmp84;
          
          /* Pattern matching succeeded */
          tmp81 = stringAppend(_str,_OMC_LIT70);
          tmp82 = stringAppend(tmp81,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp83 = stringAppend(tmp82,_OMC_LIT91);
          tmp84 = stringAppend(tmp83,omc_NFStatement_toStringList(threadData, (OMC_BOX_FIELD(_blck, 3)), _str));
          tmp1 = tmp84;
          goto tmp3_done;
        }
        case 14: {
          modelica_string tmp85;
          modelica_string tmp86;
          modelica_string tmp87;
          modelica_string tmp88;
          modelica_string tmp89;
          
          /* Pattern matching succeeded */
          tmp85 = stringAppend(_str,_OMC_LIT70);
          tmp86 = stringAppend(tmp85,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp87 = stringAppend(tmp86,_OMC_LIT92);
          tmp88 = stringAppend(tmp87,omc_NFStatement_toStringList(threadData, (OMC_BOX_FIELD(_blck, 3)), _str));
          tmp89 = stringAppend(tmp88,_OMC_LIT12);
          tmp1 = tmp89;
          goto tmp3_done;
        }
        case 15: {
          modelica_string tmp90;
          modelica_string tmp91;
          modelica_string tmp92;
          modelica_metatype tmpMeta93;
          modelica_string tmp94;
          modelica_string tmp95;
          modelica_string tmp96;
          
          /* Pattern matching succeeded */
          tmp90 = stringAppend(_str,_OMC_LIT70);
          tmp91 = stringAppend(tmp90,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp92 = stringAppend(tmp91,_OMC_LIT80);
          tmpMeta93 = omc_mk_box1(0, _str);
          tmp94 = stringAppend(_str,_OMC_LIT93);
          tmp95 = stringAppend(_str,_OMC_LIT94);
          tmp96 = stringAppend(tmp92,omc_List_toStringCustom(threadData, (OMC_BOX_FIELD(_blck, 3)), (modelica_fnptr) omc_mk_box2(0,closure6_NSimStrongComponent_Block_ifTplStr,tmpMeta93), _OMC_LIT13, _str, tmp94, tmp95, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmp96;
          goto tmp3_done;
        }
        case 16: {
          modelica_string tmp97;
          modelica_string tmp98;
          modelica_string tmp99;
          modelica_string tmp100;
          
          /* Pattern matching succeeded */
          tmp97 = stringAppend(_str,_OMC_LIT70);
          tmp98 = stringAppend(tmp97,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp99 = stringAppend(tmp98,_OMC_LIT80);
          tmp100 = stringAppend(tmp99,omc_NSimStrongComponent_Block_whenString(threadData, (OMC_BOX_FIELD(_blck, 4)), (OMC_BOX_FIELD(_blck, 5)), (OMC_BOX_FIELD(_blck, 6)), _str));
          tmp1 = tmp100;
          goto tmp3_done;
        }
        case 17: {
          modelica_string tmp101;
          modelica_string tmp102;
          modelica_string tmp103;
          modelica_string tmp104;
          
          /* Pattern matching succeeded */
          tmp101 = stringAppend(_str,_OMC_LIT70);
          tmp102 = stringAppend(tmp101,intString(omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_blck, 2)), 2)))));
          tmp103 = stringAppend(tmp102,_OMC_LIT80);
          tmp104 = stringAppend(tmp103,omc_NSimStrongComponent_LinearSystem_toString(threadData, (OMC_BOX_FIELD(_blck, 2)), _str));
          tmp1 = tmp104;
          goto tmp3_done;
        }
        case 18: {
          modelica_string tmp105;
          modelica_string tmp106;
          modelica_string tmp107;
          modelica_string tmp108;
          
          /* Pattern matching succeeded */
          tmp105 = stringAppend(_str,_OMC_LIT70);
          tmp106 = stringAppend(tmp105,intString(omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_blck, 2)), 2)))));
          tmp107 = stringAppend(tmp106,_OMC_LIT80);
          tmp108 = stringAppend(tmp107,omc_NSimStrongComponent_NonlinearSystem_toString(threadData, (OMC_BOX_FIELD(_blck, 2)), _str));
          tmp1 = tmp108;
          goto tmp3_done;
        }
        case 19: {
          modelica_string tmp109;
          modelica_string tmp110;
          modelica_string tmp111;
          
          /* Pattern matching succeeded */
          tmp109 = stringAppend(_str,_OMC_LIT70);
          tmp110 = stringAppend(tmp109,intString(omc_unbox_integer((OMC_BOX_FIELD(_blck, 2)))));
          tmp111 = stringAppend(tmp110,_OMC_LIT95);
          tmp1 = tmp111;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT96;
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

