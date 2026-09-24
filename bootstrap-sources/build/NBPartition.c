#include "omc_simulation_settings.h"
#include "NBPartition.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "NBPartition.Partition.merge failed. Should not merge partitions with adjacency matrix."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,86,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,1) {_OMC_LIT4,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NBPartition.Partition.merge failed. Should not merge matched partitions."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,72,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NBPartition.Partition.merge failed. Should not merge sorted partitions."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,71,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,1) {_OMC_LIT8,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "NBPartition.Partition.merge failed. Cannot merge DAE-Mode partitions."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,69,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,1) {_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NBPartition.Partition.kindToInteger failed. Unknown partition kind in match."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,76,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,1) {_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,0,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "ODE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,3,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "ALG"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,3,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "ODE_EVT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,7,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "ALG_EVT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,7,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "INI"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,3,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "INI_0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,5,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "DAE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,3,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "JAC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,3,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "CLK"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,3,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "NBPartition.Partition.kindToString failed. Unknown partition kind in match."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,75,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,1) {_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "NBPartition.Partition.getClockDependencies failed. Cannot get clock dependencies for continuous partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,107,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "NBPartition.Partition.setClocks failed. Cannot set clocks for continuous partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,84,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NBPartition.Partition.getClocks failed. Cannot get clocks for continuous partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,84,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "NBPartition.Partition.setKind failed. Cannot set kind for non-continuous partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,84,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,1,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,1,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data ") "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,2,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data " Partition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,10,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Unknown"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,7,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "NBPartition.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,14,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT36_6,0.0);
#define _OMC_LIT36_6 MMC_REFREALLIT(_OMC_LIT_STRUCT36_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(341)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(341)),MMC_IMMEDIATE(MMC_TAGFIXNUM(76)),_OMC_LIT36_6}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT37_6,0.0);
#define _OMC_LIT37_6 MMC_REFREALLIT(_OMC_LIT_STRUCT37_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(342)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(342)),MMC_IMMEDIATE(MMC_TAGFIXNUM(82)),_OMC_LIT37_6}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT38_6,0.0);
#define _OMC_LIT38_6 MMC_REFREALLIT(_OMC_LIT_STRUCT38_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(345)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(345)),MMC_IMMEDIATE(MMC_TAGFIXNUM(90)),_OMC_LIT38_6}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT39_6,0.0);
#define _OMC_LIT39_6 MMC_REFREALLIT(_OMC_LIT_STRUCT39_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(273)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(273)),MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),_OMC_LIT39_6}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT40_6,0.0);
#define _OMC_LIT40_6 MMC_REFREALLIT(_OMC_LIT_STRUCT40_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(271)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(271)),MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),_OMC_LIT40_6}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT41_6,0.0);
#define _OMC_LIT41_6 MMC_REFREALLIT(_OMC_LIT_STRUCT41_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(269)),MMC_IMMEDIATE(MMC_TAGFIXNUM(14)),MMC_IMMEDIATE(MMC_TAGFIXNUM(269)),MMC_IMMEDIATE(MMC_TAGFIXNUM(32)),_OMC_LIT41_6}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT42_6,0.0);
#define _OMC_LIT42_6 MMC_REFREALLIT(_OMC_LIT_STRUCT42_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(320)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(320)),MMC_IMMEDIATE(MMC_TAGFIXNUM(98)),_OMC_LIT42_6}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,3,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,1,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "NBPartition.Association.merge failed. Cannot merge\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,51,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data " and\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,5,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,1,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "NBPartition.Association.create failed because there are non-identical clocks in the same partition:\n### First clock found:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,123,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "\n### Conflicting clocks:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,25,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT50_6,0.0);
#define _OMC_LIT50_6 MMC_REFREALLIT(_OMC_LIT_STRUCT50_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(184)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(184)),MMC_IMMEDIATE(MMC_TAGFIXNUM(80)),_OMC_LIT50_6}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT51_6,0.0);
#define _OMC_LIT51_6 MMC_REFREALLIT(_OMC_LIT_STRUCT51_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(185)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(185)),MMC_IMMEDIATE(MMC_TAGFIXNUM(129)),_OMC_LIT51_6}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT52,1.0);
#define _OMC_LIT52 MMC_REFREALLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,4) {&NFExpression_REAL__desc,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,5) {&NFClockKind_REAL__CLOCK__desc,_OMC_LIT53}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,3) {&NBPartitioning_BClock_BASE__CLOCK__desc,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "No Jacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,11,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "moo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,3,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "Generate code for dynamic optimization library MOO."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,51,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(161)),_OMC_LIT57,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT58,_OMC_LIT59,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT60}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data " Adjoint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,8,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "Base clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,12,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "Sub clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,11,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data " of base clock "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,15,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "NBPartition.Association.toString failed. Unknown partition association in match."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,80,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,1) {_OMC_LIT66,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "Continuous "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,11,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "Clocked"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,7,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#include "util/modelica.h"

#include "NBPartition_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBPartition_Partition_categorize_isAlgebraicContinuous(threadData_t *threadData, modelica_metatype _part, modelica_boolean *out_con);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartition_Partition_categorize_isAlgebraicContinuous(threadData_t *threadData, modelica_metatype _part, modelica_metatype *out_con);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartition_Partition_categorize_isAlgebraicContinuous,2,0) {(void*) boxptr_NBPartition_Partition_categorize_isAlgebraicContinuous,0}};
#define boxvar_NBPartition_Partition_categorize_isAlgebraicContinuous MMC_REFSTRUCTLIT(boxvar_lit_NBPartition_Partition_categorize_isAlgebraicContinuous)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBPartition_Partition_isEmpty_isEmptyArr(threadData_t *threadData, modelica_metatype _arr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartition_Partition_isEmpty_isEmptyArr(threadData_t *threadData, modelica_metatype _arr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartition_Partition_isEmpty_isEmptyArr,2,0) {(void*) boxptr_NBPartition_Partition_isEmpty_isEmptyArr,0}};
#define boxvar_NBPartition_Partition_isEmpty_isEmptyArr MMC_REFSTRUCTLIT(boxvar_lit_NBPartition_Partition_isEmpty_isEmptyArr)
PROTECTED_FUNCTION_STATIC void omc_NBPartition_Association_removeInferredClock(threadData_t *threadData, modelica_metatype _name, modelica_metatype _new_name, modelica_metatype _info, modelica_metatype _infer_del);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartition_Association_removeInferredClock,2,0) {(void*) boxptr_NBPartition_Association_removeInferredClock,0}};
#define boxvar_NBPartition_Association_removeInferredClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartition_Association_removeInferredClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartition_Association_expClocked(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _info, modelica_metatype _clock_ptr, modelica_metatype _infer_ptr, modelica_metatype _failed_set, modelica_metatype _clock_deps, modelica_metatype _infer_del);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartition_Association_expClocked,2,0) {(void*) boxptr_NBPartition_Association_expClocked,0}};
#define boxvar_NBPartition_Association_expClocked MMC_REFSTRUCTLIT(boxvar_lit_NBPartition_Association_expClocked)

DLLModelDirection
modelica_boolean omc_NBPartition_kindIsInitial(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (((modelica_integer)_kind == 5) || ((modelica_integer)_kind == 6));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_kindIsInitial(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = omc_unbox_integer(_kind);
  _b = omc_NBPartition_kindIsInitial(threadData, tmp1);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_merge(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart1, modelica_metatype _part2, modelica_boolean _strict)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype _part1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  _part1 = __omcQ_24in_5Fpart1;
  if((isSome((OMC_BOX_FIELD(_part1, 5))) || isSome((OMC_BOX_FIELD(_part2, 5)))))
  {
    omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT11);

    OMC_THROW_INTERNAL();
  }
  else
  {
    if((isSome((OMC_BOX_FIELD(_part1, 9))) || isSome((OMC_BOX_FIELD(_part2, 9)))))
    {
      omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT9);

      OMC_THROW_INTERNAL();
    }
    else
    {
      if((isSome((OMC_BOX_FIELD(_part1, 8))) || isSome((OMC_BOX_FIELD(_part2, 8)))))
      {
        omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT7);

        OMC_THROW_INTERNAL();
      }
      else
      {
        if((isSome((OMC_BOX_FIELD(_part1, 7))) || isSome((OMC_BOX_FIELD(_part2, 7)))))
        {
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT5);

          OMC_THROW_INTERNAL();
        }
      }
    }
  }

  __omcQ_24mrfa_5F0 = omc_NBPartition_Association_merge(threadData, (OMC_BOX_FIELD(_part1, 3)), (OMC_BOX_FIELD(_part2, 3)), _strict);

  __omcQ_24mrfa_5F1 = omc_NBVariable_VariablePointers_addList(threadData, omc_NBVariable_VariablePointers_toList(threadData, (OMC_BOX_FIELD(_part2, 4))), (OMC_BOX_FIELD(_part1, 4)));

  __omcQ_24mrfa_5F2 = omc_NBEquation_EquationPointers_addList(threadData, omc_NBEquation_EquationPointers_toList(threadData, (OMC_BOX_FIELD(_part2, 6))), (OMC_BOX_FIELD(_part1, 6)));

  tmpMeta1 = omc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, (OMC_BOX_FIELD(_part1, 2)), __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (OMC_BOX_FIELD(_part1, 5)), __omcQ_24mrfa_5F2, (OMC_BOX_FIELD(_part1, 7)), (OMC_BOX_FIELD(_part1, 8)), (OMC_BOX_FIELD(_part1, 9)));
  _part1 = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _part1;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_merge(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart1, modelica_metatype _part2, modelica_metatype _strict)
{
  modelica_integer tmp1;
  modelica_metatype _part1 = NULL;
  tmp1 = omc_unbox_integer(_strict);
  _part1 = omc_NBPartition_Partition_merge(threadData, __omcQ_24in_5Fpart1, _part2, tmp1);
  /* skip box _part1; NBPartition.Partition */
  return _part1;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_updateHeldVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpar, modelica_metatype _held_crefs)
{
  modelica_metatype _par = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _par = __omcQ_24in_5Fpar;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (OMC_BOX_FIELD(_par, 3));
    {
      modelica_metatype _association = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _association has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,4) == 0) goto tmp4_end;
          
          _association = tmp5_1;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_association), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_mk_boolean((!omc_UnorderedSet_isDisjoint(threadData, _held_crefs, omc_UnorderedMap_keySet(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_par, 4)), 2))))));
          _association = tmpMeta7;
          tmpMeta2 = _association;
          goto tmp4_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta2 = (OMC_BOX_FIELD(_par, 3));
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
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_par), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _par = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _par;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_removeAlias(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpar)
{
  modelica_metatype _par = NULL;
  modelica_metatype _comps = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _par = __omcQ_24in_5Fpar;
  // _comps has no default value.
  if(isSome((OMC_BOX_FIELD(_par, 9))))
  {
    _comps = omc_Util_getOption(threadData, (OMC_BOX_FIELD(_par, 9)));

    tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_comps);
    if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
      {

        arrayUpdate(_comps,_i,omc_NBStrongComponent_removeAlias(threadData, arrayGet(_comps,_i) /* DAE.ASUB */));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _par;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_clone(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpar, modelica_boolean _shallow)
{
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype __omcQ_24mrfa_5F4 = NULL;
  modelica_metatype __omcQ_24mrfa_5F5 = NULL;
  modelica_metatype __omcQ_24mrfa_5F6 = NULL;
  modelica_metatype _par = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F3 has no default value.
  // __omcQ_24mrfa_5F4 has no default value.
  // __omcQ_24mrfa_5F5 has no default value.
  // __omcQ_24mrfa_5F6 has no default value.
  _par = __omcQ_24in_5Fpar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_par), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = omc_NBEquation_EquationPointers_clone(threadData, (OMC_BOX_FIELD(_par, 6)), _shallow);
  _par = tmpMeta1;

  if((!_shallow))
  {
    __omcQ_24mrfa_5F3 = mmc_mk_none();

    __omcQ_24mrfa_5F4 = mmc_mk_none();

    __omcQ_24mrfa_5F5 = mmc_mk_none();

    { /* match expression */
      modelica_metatype tmp5_1;
      tmp5_1 = (OMC_BOX_FIELD(_par, 3));
      {
        modelica_metatype _association = NULL;
        volatile mmc_switch_type tmp5;
        int tmp6;
        // _association has no default value.
        tmp5 = 0;
        for (; tmp5 < 2; tmp5++) {
          switch (MMC_SWITCH_CAST(tmp5)) {
          case 0: {
            modelica_metatype tmpMeta7;
            if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,6) == 0) goto tmp4_end;
            
            _association = tmp5_1;
            /* Pattern matching succeeded */
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_association), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = mmc_mk_none();
            _association = tmpMeta7;
            tmpMeta2 = _association;
            goto tmp4_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmpMeta2 = (OMC_BOX_FIELD(_par, 3));
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
    __omcQ_24mrfa_5F6 = tmpMeta2;

    tmpMeta8 = omc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, (OMC_BOX_FIELD(_par, 2)), __omcQ_24mrfa_5F6, (OMC_BOX_FIELD(_par, 4)), (OMC_BOX_FIELD(_par, 5)), (OMC_BOX_FIELD(_par, 6)), __omcQ_24mrfa_5F3, __omcQ_24mrfa_5F4, __omcQ_24mrfa_5F5);
    _par = tmpMeta8;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _par;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_clone(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpar, modelica_metatype _shallow)
{
  modelica_integer tmp1;
  modelica_metatype _par = NULL;
  tmp1 = omc_unbox_integer(_shallow);
  _par = omc_NBPartition_Partition_clone(threadData, __omcQ_24in_5Fpar, tmp1);
  /* skip box _par; NBPartition.Partition */
  return _par;
}

DLLModelDirection
modelica_integer omc_NBPartition_Partition_kindToInteger(threadData_t *threadData, modelica_integer _kind)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_kind;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 4: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 3);
          goto tmp3_done;
        }
        case 5: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 4);
          goto tmp3_done;
        }
        case 6: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
          goto tmp3_done;
        }
        case 7: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 6);
          goto tmp3_done;
        }
        case 8: {
          if (8 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 7);
          goto tmp3_done;
        }
        case 9: {
          if (9 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 8);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT13);
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
modelica_metatype boxptr_NBPartition_Partition_kindToInteger(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_integer _i;
  modelica_metatype out_i;
  tmp1 = omc_unbox_integer(_kind);
  _i = omc_NBPartition_Partition_kindToInteger(threadData, tmp1);
  out_i = omc_mk_icon(_i);
  return out_i;
}

DLLModelDirection
modelica_string omc_NBPartition_Partition_kindToString(threadData_t *threadData, modelica_integer _kind)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT14;
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_kind;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT17;
          goto tmp3_done;
        }
        case 4: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 5: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT19;
          goto tmp3_done;
        }
        case 6: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 7: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT21;
          goto tmp3_done;
        }
        case 8: {
          if (8 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 9: {
          if (9 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT23;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT25);
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_kindToString(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _str = omc_NBPartition_Partition_kindToString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_mapStrongComponents(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartition, modelica_fnptr _func)
{
  modelica_metatype _partition = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partition = __omcQ_24in_5Fpartition;
  // _comps has no default value.
  if(isSome((OMC_BOX_FIELD(_partition, 9))))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = (OMC_BOX_FIELD(_partition, 9));
    if (optionNone(tmpMeta1)) OMC_THROW_INTERNAL();
    tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
    _comps = tmpMeta2;

    tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_comps);
    if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
      {

        arrayUpdate(_comps,_i,(OMC_BOX_FIELD(_func, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_func, 2)), arrayGet(_comps,_i) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, arrayGet(_comps,_i) /* DAE.ASUB */));
      }
    }

    tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(10));
    memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[9] = mmc_mk_some(_comps);
    _partition = tmpMeta6;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _partition;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartition, modelica_fnptr _func)
{
  modelica_metatype _partition = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partition = __omcQ_24in_5Fpartition;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = omc_NBEquation_EquationPointers_mapExp(threadData, (OMC_BOX_FIELD(_partition, 6)), ((modelica_fnptr) _func), mmc_mk_none(), boxvar_NFExpression_map);
  _partition = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _partition;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_mapEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartition, modelica_fnptr _func)
{
  modelica_metatype _partition = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partition = __omcQ_24in_5Fpartition;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = omc_NBEquation_EquationPointers_map(threadData, (OMC_BOX_FIELD(_partition, 6)), ((modelica_fnptr) _func));
  _partition = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _partition;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_getLoopResiduals(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _residuals = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _residuals = tmpMeta1;
  if(isSome((OMC_BOX_FIELD(_part, 9))))
  {
    {
      modelica_metatype _comp;
      for (tmpMeta2 = omc_Util_getOption(threadData, (OMC_BOX_FIELD(_part, 9))), tmp5 = arrayLength(tmpMeta2), tmp4 = 1; tmp4 <= tmp5; tmp4++)
      {
        _comp = arrayGet(tmpMeta2,tmp4);
        _residuals = listAppend(omc_NBStrongComponent_getLoopResiduals(threadData, _comp), _residuals);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _residuals;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_getClockDependencies(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _clock_deps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clock_deps has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 4);
          
          _clock_deps = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _clock_deps;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_string tmp8;
          
          /* Pattern matching succeeded */
          tmp8 = stringAppend(_OMC_LIT26,omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 0)));
          tmpMeta7 = mmc_mk_cons(tmp8, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta7);
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
  _clock_deps = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _clock_deps;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_setClocks(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _clock, modelica_metatype _baseClock)
{
  modelica_metatype _part = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      modelica_metatype _association = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _association has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          
          _association = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_association), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = _clock;
          _association = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_association), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = _baseClock;
          _association = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _association;
          _part = tmpMeta8;
          tmpMeta1 = _part;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_string tmp10;
          
          /* Pattern matching succeeded */
          tmp10 = stringAppend(_OMC_LIT27,omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 0)));
          tmpMeta9 = mmc_mk_cons(tmp10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta9);
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
  _part = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _part;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_getClocks(threadData_t *threadData, modelica_metatype _part, modelica_metatype *out_baseClock, modelica_boolean *out_holdEvents)
{
  modelica_metatype _clock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_boolean _holdEvents;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clock has no default value.
  // _baseClock has no default value.
  // _holdEvents has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
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
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 5);
          tmp9 = omc_unbox_integer(tmpMeta8);
          _clock = tmpMeta6;
          _baseClock = tmpMeta7;
          _holdEvents = tmp9  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _clock;
          tmpMeta[0+1] = _baseClock;
          tmp1_c2 = _holdEvents;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_string tmp11;
          
          /* Pattern matching succeeded */
          tmp11 = stringAppend(_OMC_LIT28,omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 0)));
          tmpMeta10 = mmc_mk_cons(tmp11, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta10);
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
  _clock = tmpMeta[0+0];
  _baseClock = tmpMeta[0+1];
  _holdEvents = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_baseClock) { *out_baseClock = _baseClock; }
  if (out_holdEvents) { *out_holdEvents = _holdEvents; }
  omc_ret_ = _clock;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_getClocks(threadData_t *threadData, modelica_metatype _part, modelica_metatype *out_baseClock, modelica_metatype *out_holdEvents)
{
  modelica_boolean _holdEvents;
  modelica_metatype _clock = NULL;
  _clock = omc_NBPartition_Partition_getClocks(threadData, _part, out_baseClock, &_holdEvents);
  /* skip box _clock; NBPartitioning.BClock */
  /* skip box _baseClock; Option<NBPartitioning.BClock> */
  if (out_holdEvents) { *out_holdEvents = omc_mk_icon(_holdEvents); }
  return _clock;
}

DLLModelDirection
modelica_integer omc_NBPartition_Partition_getKind(threadData_t *threadData, modelica_metatype _part)
{
  modelica_integer _kind;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _kind has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          
          _kind = tmp7  /* pattern as ty=enumeration(ODE, ALG, ODE_EVT, ALG_EVT, INI, INI_0, DAE, JAC, CLK) */;
          /* Pattern matching succeeded */
          tmp1 = (modelica_integer)_kind;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 9;
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
  _kind = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _kind;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_getKind(threadData_t *threadData, modelica_metatype _part)
{
  modelica_integer _kind;
  modelica_metatype out_kind;
  _kind = omc_NBPartition_Partition_getKind(threadData, _part);
  out_kind = omc_mk_icon(_kind);
  return out_kind;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_getJacobianR0(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _jac = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jac has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 7);
          _jac = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _jac;
          goto tmp3_done;
        }
        case 1: {
          
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
  _jac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _jac;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_getJacobianMrf(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _jac = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jac has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 6);
          
          _jac = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _jac;
          goto tmp3_done;
        }
        case 1: {
          
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
  _jac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _jac;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_getJacobianLfg(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _jac = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jac has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _jac = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _jac;
          goto tmp3_done;
        }
        case 1: {
          
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
  _jac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _jac;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_getJacobianAdjoint(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _jac = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jac has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 4);
          
          _jac = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _jac;
          goto tmp3_done;
        }
        case 1: {
          
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
  _jac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _jac;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_getJacobian(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _jac = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jac has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _jac = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _jac;
          goto tmp3_done;
        }
        case 1: {
          
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
  _jac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _jac;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_setKind(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_integer _kind)
{
  modelica_metatype _part = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (OMC_BOX_FIELD(_part, 3));
    {
      modelica_metatype _ass = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _ass has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,6) == 0) goto tmp4_end;
          
          _ass = tmp5_1;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_ass), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_mk_integer((modelica_integer)_kind);
          _ass = tmpMeta7;
          tmpMeta2 = _ass;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_string tmp9;
          
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_OMC_LIT29,omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 0)));
          tmpMeta8 = mmc_mk_cons(tmp9, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta8);
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
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _part = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _part;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_setKind(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _part = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _part = omc_NBPartition_Partition_setKind(threadData, __omcQ_24in_5Fpart, tmp1);
  /* skip box _part; NBPartition.Partition */
  return _part;
}

static modelica_metatype closure0_NBEquation_Equation_setKind(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = OMC_BOX_FIELD(closure, 1);
  modelica_metatype clock_idx = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBEquation_Equation_setKind(thData, $in_eq, kind, clock_idx);
}
DLLModelDirection
modelica_metatype omc_NBPartition_Partition_setIndex(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _index)
{
  modelica_metatype _part = NULL;
  modelica_integer _clock_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  _clock_idx = omc_unbox_integer(omc_Pointer_access(threadData, _index));
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_mk_integer(_clock_idx);
  _part = tmpMeta1;

  if(omc_NBPartition_Partition_isClocked(threadData, _part))
  {
    tmpMeta3 = omc_mk_box2(0, omc_mk_integer(3), mmc_mk_some(omc_mk_integer(_clock_idx)));
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(10));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[6] = omc_NBEquation_EquationPointers_map(threadData, (OMC_BOX_FIELD(_part, 6)), (modelica_fnptr) omc_mk_box2(0,closure0_NBEquation_Equation_setKind,tmpMeta3));
    _part = tmpMeta2;
  }

  omc_Pointer_update(threadData, _index, omc_mk_integer(((modelica_integer) 1) + _clock_idx));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _part;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBPartition_Partition_categorize_isAlgebraicContinuous(threadData_t *threadData, modelica_metatype _part, modelica_boolean *out_con)
{
  modelica_boolean _alg;
  modelica_boolean _con;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = 1 /* true */;
  _con = 1 /* true */;
  {
    modelica_metatype _var;
    for (tmpMeta1 = omc_NBVariable_VariablePointers_toList(threadData, (OMC_BOX_FIELD(_part, 4))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      _alg = (_alg?(!omc_NBVariable_isStateDerivative(threadData, _var)):0 /* false */);

      _con = (_con?(!omc_NBVariable_isDiscrete(threadData, _var)):0 /* false */);

      if((!(_alg || _con)))
      {
        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_con) { *out_con = _con; }
  omc_ret_ = _alg;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartition_Partition_categorize_isAlgebraicContinuous(threadData_t *threadData, modelica_metatype _part, modelica_metatype *out_con)
{
  modelica_boolean _con;
  modelica_boolean _alg;
  modelica_metatype out_alg;
  _alg = omc_NBPartition_Partition_categorize_isAlgebraicContinuous(threadData, _part, &_con);
  out_alg = omc_mk_icon(_alg);
  if (out_con) { *out_con = omc_mk_icon(_con); }
  return out_alg;
}

DLLModelDirection
void omc_NBPartition_Partition_categorize(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _ode, modelica_metatype _alg, modelica_metatype _ode_evt, modelica_metatype _alg_evt, modelica_metatype _clocked)
{
  modelica_boolean _algebraic;
  modelica_boolean _continuous;
  modelica_integer _kind;
  modelica_metatype _association = NULL;
  modelica_integer tmp1 = 0;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _algebraic has no default value.
  // _continuous has no default value.
  // _kind has no default value.
  // _association has no default value.
  _algebraic = omc_NBPartition_Partition_categorize_isAlgebraicContinuous(threadData, _partition ,&_continuous);

  { /* match expression */
    modelica_boolean tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _algebraic;
    tmp4_2 = _continuous;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 1: {
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 2: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 4;
          goto tmp3_done;
        }
        case 3: {
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 3;
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
  _kind = tmp1;

  { /* match expression */
    modelica_integer tmp10_1;modelica_metatype tmp10_2;
    tmp10_1 = (modelica_integer)_kind;
    tmp10_2 = (OMC_BOX_FIELD(_partition, 3));
    {
      volatile mmc_switch_type tmp10;
      int tmp11;
      tmp10 = 0;
      for (; tmp10 < 5; tmp10++) {
        switch (MMC_SWITCH_CAST(tmp10)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,1,4) == 0) goto tmp9_end;
          
          /* Pattern matching succeeded */
          omc_DoubleEnded_push__back(threadData, _clocked, _partition);
          tmpMeta7 = (OMC_BOX_FIELD(_partition, 3));
          goto tmp9_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (2 != tmp10_1) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,0,6) == 0) goto tmp9_end;
          
          _association = tmp10_2;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_association), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = omc_mk_integer((modelica_integer)_kind);
          _association = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = _association;
          _partition = tmpMeta13;

          omc_DoubleEnded_push__back(threadData, _alg, _partition);
          tmpMeta7 = _association;
          goto tmp9_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (1 != tmp10_1) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,0,6) == 0) goto tmp9_end;
          
          _association = tmp10_2;
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_association), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = omc_mk_integer((modelica_integer)_kind);
          _association = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = _association;
          _partition = tmpMeta15;

          omc_DoubleEnded_push__back(threadData, _ode, _partition);
          tmpMeta7 = _association;
          goto tmp9_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (4 != tmp10_1) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,0,6) == 0) goto tmp9_end;
          
          _association = tmp10_2;
          /* Pattern matching succeeded */
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_association), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = omc_mk_integer((modelica_integer)_kind);
          _association = tmpMeta16;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = _association;
          _partition = tmpMeta17;

          omc_DoubleEnded_push__back(threadData, _alg_evt, _partition);
          tmpMeta7 = _association;
          goto tmp9_done;
        }
        case 4: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (3 != tmp10_1) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,0,6) == 0) goto tmp9_end;
          
          _association = tmp10_2;
          /* Pattern matching succeeded */
          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_association), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[2] = omc_mk_integer((modelica_integer)_kind);
          _association = tmpMeta18;

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[3] = _association;
          _partition = tmpMeta19;

          omc_DoubleEnded_push__back(threadData, _ode_evt, _partition);
          tmpMeta7 = _association;
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
  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_partition), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
  _partition = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_boolean omc_NBPartition_Partition_isClocked(threadData_t *threadData, modelica_metatype _part)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          
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
modelica_metatype boxptr_NBPartition_Partition_isClocked(threadData_t *threadData, modelica_metatype _part)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartition_Partition_isClocked(threadData, _part);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBPartition_Partition_isODEorDAE(threadData_t *threadData, modelica_metatype _part)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_part, 3));
    {
      modelica_integer _kind;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _kind has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          
          _kind = tmp7  /* pattern as ty=enumeration(ODE, ALG, ODE_EVT, ALG_EVT, INI, INI_0, DAE, JAC, CLK) */;
          /* Pattern matching succeeded */
          tmp1 = ((((modelica_integer)_kind == 1) || ((modelica_integer)_kind == 3)) || ((modelica_integer)_kind == 7));
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
modelica_metatype boxptr_NBPartition_Partition_isODEorDAE(threadData_t *threadData, modelica_metatype _part)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartition_Partition_isODEorDAE(threadData, _part);
  out_b = omc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBPartition_Partition_isEmpty_isEmptyArr(threadData_t *threadData, modelica_metatype _arr)
{
  modelica_boolean _isEmpty;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  _isEmpty = (arrayLength(_arr) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isEmpty;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartition_Partition_isEmpty_isEmptyArr(threadData_t *threadData, modelica_metatype _arr)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_NBPartition_Partition_isEmpty_isEmptyArr(threadData, _arr);
  out_isEmpty = omc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLModelDirection
modelica_boolean omc_NBPartition_Partition_isEmpty(threadData_t *threadData, modelica_metatype _partition)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = ((omc_NBEquation_EquationPointers_size(threadData, (OMC_BOX_FIELD(_partition, 6))) == ((modelica_integer) 0)) || omc_unbox_boolean(omc_Util_applyOptionOrDefault(threadData, (OMC_BOX_FIELD(_partition, 9)), boxvar_NBPartition_Partition_isEmpty_isEmptyArr, omc_mk_boolean(0 /* false */))));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_isEmpty(threadData_t *threadData, modelica_metatype _partition)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartition_Partition_isEmpty(threadData, _partition);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBPartition_Partition_hasIndex(threadData_t *threadData, modelica_metatype _partition, modelica_integer _index)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (omc_unbox_integer((OMC_BOX_FIELD(_partition, 2))) == _index);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_hasIndex(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = omc_unbox_integer(_index);
  _b = omc_NBPartition_Partition_hasIndex(threadData, _partition, tmp1);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Partition_sort(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartition)
{
  modelica_metatype __omcQ_24mrfa_5F7 = NULL;
  modelica_metatype __omcQ_24mrfa_5F8 = NULL;
  modelica_metatype _partition = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F7 has no default value.
  // __omcQ_24mrfa_5F8 has no default value.
  _partition = __omcQ_24in_5Fpartition;
  __omcQ_24mrfa_5F7 = omc_NBVariable_VariablePointers_sort(threadData, (OMC_BOX_FIELD(_partition, 4)));

  __omcQ_24mrfa_5F8 = omc_NBEquation_EquationPointers_sort(threadData, (OMC_BOX_FIELD(_partition, 6)));

  tmpMeta1 = omc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, (OMC_BOX_FIELD(_partition, 2)), (OMC_BOX_FIELD(_partition, 3)), __omcQ_24mrfa_5F7, (OMC_BOX_FIELD(_partition, 5)), __omcQ_24mrfa_5F8, (OMC_BOX_FIELD(_partition, 7)), (OMC_BOX_FIELD(_partition, 8)), (OMC_BOX_FIELD(_partition, 9)));
  _partition = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _partition;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NBPartition_Partition_toStringList(threadData_t *threadData, modelica_metatype _partitions, modelica_string _header)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT14;
  if((!listEmpty(_partitions)))
  {
    if((!stringEqual(_header, _OMC_LIT14)))
    {
      tmp1 = stringAppend(omc_StringUtil_headline__1(threadData, _header),_OMC_LIT30);
      omc_string_store(&(_str), tmp1);
    }

    {
      modelica_metatype _part;
      for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _part = MMC_CAR(tmpMeta2);
        tmp3 = stringAppend(_str,omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 0)));
        omc_string_store(&(_str), tmp3);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NBPartition_Partition_toString(threadData_t *threadData, modelica_metatype _partition, modelica_integer _level)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6 = 0;
  modelica_string tmp21;
  modelica_string tmp22;
  modelica_string tmp23;
  modelica_string tmp24;
  modelica_string tmp25;
  modelica_string tmp26;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmp1 = stringAppend(_OMC_LIT31,intString(omc_unbox_integer((OMC_BOX_FIELD(_partition, 2)))));
  tmp2 = stringAppend(tmp1,_OMC_LIT32);
  tmp3 = stringAppend(tmp2,omc_NBPartition_Association_toStringShort(threadData, (OMC_BOX_FIELD(_partition, 3))));
  tmp4 = stringAppend(tmp3,_OMC_LIT33);
  tmp5 = stringAppend(omc_StringUtil_headline__2(threadData, tmp4),_OMC_LIT30);
  omc_string_store(&(_str), tmp5);

  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = (OMC_BOX_FIELD(_partition, 9));
    {
      modelica_metatype _comps = NULL;
      volatile mmc_switch_type tmp9;
      int tmp10;
      // _comps has no default value.
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          modelica_metatype tmpMeta11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_integer tmp16;
          if (optionNone(tmp9_1)) goto tmp8_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp9_1, 1);
          _comps = tmpMeta11;
          /* Pattern matching succeeded */
          tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = arrayLength(_comps);
          if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
            {

              tmp12 = stringAppend(_str,omc_NBStrongComponent_toString(threadData, arrayGet(_comps,_i) /* DAE.ASUB */, _i));
              tmp13 = stringAppend(tmp12,_OMC_LIT30);
              omc_string_store(&(_str), tmp13);
            }
          }
          tmp6 = _str;
          goto tmp8_done;
        }
        case 1: {
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          
          /* Pattern matching succeeded */
          tmp17 = stringAppend(_str,omc_NBVariable_VariablePointers_toString(threadData, (OMC_BOX_FIELD(_partition, 4)), _OMC_LIT34, mmc_mk_none(), 1 /* true */));
          tmp18 = stringAppend(tmp17,_OMC_LIT30);
          tmp19 = stringAppend(tmp18,omc_NBEquation_EquationPointers_toString(threadData, (OMC_BOX_FIELD(_partition, 6)), _OMC_LIT14, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
          tmp20 = stringAppend(tmp19,_OMC_LIT30);
          tmp6 = tmp20;
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
  omc_string_store(&(_str), tmp6);

  if(((_level == ((modelica_integer) 1)) || (_level == ((modelica_integer) 3))))
  {
    if(isSome((OMC_BOX_FIELD(_partition, 7))))
    {
      tmp21 = stringAppend(_str,omc_NBAdjacency_Matrix_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_partition, 7))), _OMC_LIT14));
      tmp22 = stringAppend(tmp21,_OMC_LIT30);
      omc_string_store(&(_str), tmp22);
    }

    if(isSome((OMC_BOX_FIELD(_partition, 8))))
    {
      tmp23 = stringAppend(_str,omc_NBMatching_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_partition, 8))), _OMC_LIT14));
      tmp24 = stringAppend(tmp23,_OMC_LIT30);
      omc_string_store(&(_str), tmp24);
    }
  }

  if((_level == ((modelica_integer) 2)))
  {
    tmp25 = stringAppend(_str,omc_NBPartition_Association_toString(threadData, (OMC_BOX_FIELD(_partition, 3))));
    tmp26 = stringAppend(tmp25,_OMC_LIT30);
    omc_string_store(&(_str), tmp26);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Partition_toString(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _level)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = omc_unbox_integer(_level);
  _str = omc_NBPartition_Partition_toString(threadData, _partition, tmp1);
  /* skip box _str; String */
  return _str;
}

PROTECTED_FUNCTION_STATIC void omc_NBPartition_Association_removeInferredClock(threadData_t *threadData, modelica_metatype _name, modelica_metatype _new_name, modelica_metatype _info, modelica_metatype _infer_del)
{
  modelica_metatype _base = NULL;
  modelica_metatype _base_name = NULL;
  modelica_metatype _sub_clock_names1 = NULL;
  modelica_metatype _sub_clock_names2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _base has no default value.
  // _base_name has no default value.
  // _sub_clock_names1 has no default value.
  // _sub_clock_names2 has no default value.
  _base_name = omc_UnorderedMap_getSafe(threadData, _name, (OMC_BOX_FIELD(_info, 4)), _OMC_LIT36);

  _base = omc_UnorderedMap_getSafe(threadData, _base_name, (OMC_BOX_FIELD(_info, 2)), _OMC_LIT37);

  if(omc_NBPartitioning_BClock_isInferredClock(threadData, _base))
  {
    _sub_clock_names1 = omc_UnorderedMap_getSafe(threadData, _base_name, (OMC_BOX_FIELD(_info, 5)), _OMC_LIT38);

    {
      modelica_metatype _s_name;
      for (tmpMeta1 = _sub_clock_names1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _s_name = MMC_CAR(tmpMeta1);
        omc_UnorderedMap_add(threadData, _s_name, _new_name, (OMC_BOX_FIELD(_info, 4)));
      }
    }

    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    _sub_clock_names2 = omc_UnorderedMap_getOrDefault(threadData, _new_name, (OMC_BOX_FIELD(_info, 5)), tmpMeta3);

    omc_UnorderedMap_add(threadData, _new_name, listAppend(_sub_clock_names1, _sub_clock_names2), (OMC_BOX_FIELD(_info, 5)));

    omc_UnorderedSet_add(threadData, _base_name, _infer_del);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static modelica_metatype closure1_NBPartition_Association_expClocked(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype info = OMC_BOX_FIELD(closure, 1);
  modelica_metatype clock_ptr = OMC_BOX_FIELD(closure, 2);
  modelica_metatype infer_ptr = OMC_BOX_FIELD(closure, 3);
  modelica_metatype failed_set = OMC_BOX_FIELD(closure, 4);
  modelica_metatype clock_deps = OMC_BOX_FIELD(closure, 5);
  modelica_metatype infer_del = OMC_BOX_FIELD(closure, 6);
  return boxptr_NBPartition_Association_expClocked(thData, $in_exp, info, clock_ptr, infer_ptr, failed_set, clock_deps, infer_del);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartition_Association_expClocked(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _info, modelica_metatype _clock_ptr, modelica_metatype _infer_ptr, modelica_metatype _failed_set, modelica_metatype _clock_deps, modelica_metatype _infer_del)
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
      modelica_metatype _clock_opt = NULL;
      modelica_metatype _arg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _clock_opt has no default value.
      // _arg has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isClockOrClocked(threadData, omc_NBVariable_getVarPointer(threadData, (OMC_BOX_FIELD(_exp, 3)), _OMC_LIT41))) goto tmp3_end;
          if(omc_UnorderedMap_contains(threadData, (OMC_BOX_FIELD(_exp, 3)), (OMC_BOX_FIELD(_info, 2))))
          {
            _clock_opt = mmc_mk_some(omc_UnorderedMap_getSafe(threadData, (OMC_BOX_FIELD(_exp, 3)), (OMC_BOX_FIELD(_info, 2)), _OMC_LIT40));
          }
          else
          {
            if(omc_UnorderedMap_contains(threadData, (OMC_BOX_FIELD(_exp, 3)), (OMC_BOX_FIELD(_info, 3))))
            {
              _clock_opt = mmc_mk_some(omc_UnorderedMap_getSafe(threadData, (OMC_BOX_FIELD(_exp, 3)), (OMC_BOX_FIELD(_info, 3)), _OMC_LIT39));
            }
            else
            {
              _clock_opt = mmc_mk_none();
            }
          }

          { /* match expression */
            modelica_metatype tmp8_1;modelica_metatype tmp8_2;
            tmp8_1 = _clock_opt;
            tmp8_2 = omc_Pointer_access(threadData, _clock_ptr);
            {
              modelica_metatype _new = NULL;
              modelica_metatype _old = NULL;
              modelica_metatype _name = NULL;
              volatile mmc_switch_type tmp8;
              int tmp9;
              // _new has no default value.
              // _old has no default value.
              // _name has no default value.
              tmp8 = 0;
              for (; tmp8 < 6; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta13;
                  if (optionNone(tmp8_1)) goto tmp7_end;
                  tmpMeta10 = OMC_BOX_FIELD(tmp8_1, 1);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto tmp7_end;
                  if (optionNone(tmp8_2)) goto tmp7_end;
                  tmpMeta11 = OMC_BOX_FIELD(tmp8_2, 1);
                  tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 1);
                  tmpMeta13 = OMC_BOX_FIELD(tmpMeta11, 2);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,3) == 0) goto tmp7_end;
                  
                  _name = tmpMeta12;
                  /* Pattern matching succeeded */
                  omc_NBPartition_Association_removeInferredClock(threadData, _name, (OMC_BOX_FIELD(_exp, 3)), _info, _infer_del);
                  goto tmp7_done;
                }
                case 1: {
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  if (optionNone(tmp8_1)) goto tmp7_end;
                  tmpMeta14 = OMC_BOX_FIELD(tmp8_1, 1);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,3) == 0) goto tmp7_end;
                  if (optionNone(tmp8_2)) goto tmp7_end;
                  tmpMeta15 = OMC_BOX_FIELD(tmp8_2, 1);
                  tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,1) == 0) goto tmp7_end;
                  
                  _new = tmpMeta14;
                  /* Pattern matching succeeded */
                  tmpMeta17 = omc_mk_box2(0, (OMC_BOX_FIELD(_exp, 3)), _new);
                  omc_Pointer_update(threadData, _clock_ptr, mmc_mk_some(tmpMeta17));
                  goto tmp7_done;
                }
                case 2: {
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  modelica_metatype tmpMeta22;
                  if (optionNone(tmp8_1)) goto tmp7_end;
                  tmpMeta18 = OMC_BOX_FIELD(tmp8_1, 1);
                  if (optionNone(tmp8_2)) goto tmp7_end;
                  tmpMeta19 = OMC_BOX_FIELD(tmp8_2, 1);
                  tmpMeta20 = OMC_BOX_FIELD(tmpMeta19, 2);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,1) == 0) goto tmp7_end;
                  tmpMeta21 = OMC_BOX_FIELD(tmpMeta20, 2);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,0,1) == 0) goto tmp7_end;
                  
                  _new = tmpMeta18;
                  /* Pattern matching succeeded */
                  tmpMeta22 = omc_mk_box2(0, (OMC_BOX_FIELD(_exp, 3)), _new);
                  omc_Pointer_update(threadData, _clock_ptr, mmc_mk_some(tmpMeta22));
                  goto tmp7_done;
                }
                case 3: {
                  modelica_metatype tmpMeta23;
                  modelica_metatype tmpMeta24;
                  modelica_metatype tmpMeta25;
                  modelica_metatype tmpMeta26;
                  modelica_metatype tmpMeta27;
                  if (optionNone(tmp8_1)) goto tmp7_end;
                  tmpMeta23 = OMC_BOX_FIELD(tmp8_1, 1);
                  if (optionNone(tmp8_2)) goto tmp7_end;
                  tmpMeta24 = OMC_BOX_FIELD(tmp8_2, 1);
                  tmpMeta25 = OMC_BOX_FIELD(tmpMeta24, 2);
                  _new = tmpMeta23;
                  _old = tmpMeta25;
                  /* Pattern matching succeeded */
                  if(omc_NBPartitioning_BClock_isInferredClock(threadData, _old))
                  {
                    tmpMeta26 = omc_mk_box2(0, (OMC_BOX_FIELD(_exp, 3)), _new);
                    omc_Pointer_update(threadData, _clock_ptr, mmc_mk_some(tmpMeta26));
                  }
                  else
                  {
                    if((!(omc_NBPartitioning_BClock_isInferredClock(threadData, _new) || omc_NBPartitioning_BClock_isEqual(threadData, _new, _old))))
                    {
                      tmpMeta27 = omc_mk_box2(0, (OMC_BOX_FIELD(_exp, 3)), _new);
                      omc_UnorderedSet_add(threadData, tmpMeta27, _failed_set);
                    }
                  }
                  goto tmp7_done;
                }
                case 4: {
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  if (optionNone(tmp8_1)) goto tmp7_end;
                  tmpMeta28 = OMC_BOX_FIELD(tmp8_1, 1);
                  if (!optionNone(tmp8_2)) goto tmp7_end;
                  _new = tmpMeta28;
                  /* Pattern matching succeeded */
                  tmpMeta29 = omc_mk_box2(0, (OMC_BOX_FIELD(_exp, 3)), _new);
                  omc_Pointer_update(threadData, _clock_ptr, mmc_mk_some(tmpMeta29));
                  goto tmp7_done;
                }
                case 5: {
                  
                  /* Pattern matching succeeded */
                  goto tmp7_done;
                }
                }
                goto tmp7_end;
                tmp7_end: ;
              }
              goto goto_6;
              goto_6:;
              goto goto_2;
              goto tmp7_done;
              tmp7_done:;
            }
          }
          ;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta30 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,2,6) == 0) goto tmp3_end;
          tmpMeta31 = OMC_BOX_FIELD(tmpMeta30, 6);
          if (listEmpty(tmpMeta31)) goto tmp3_end;
          tmpMeta32 = MMC_CAR(tmpMeta31);
          tmpMeta33 = MMC_CDR(tmpMeta31);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,6,2) == 0) goto tmp3_end;
          tmpMeta34 = OMC_BOX_FIELD(tmpMeta32, 3);
          
          _arg = tmpMeta34;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isClockOrSampleFunction(threadData, _exp)) goto tmp3_end;
          if(omc_UnorderedMap_contains(threadData, _arg, (OMC_BOX_FIELD(_info, 3))))
          {
            omc_UnorderedSet_add(threadData, omc_UnorderedMap_getSafe(threadData, _arg, (OMC_BOX_FIELD(_info, 3)), _OMC_LIT42), _clock_deps);

            omc_Pointer_update(threadData, _infer_ptr, mmc_mk_some(_arg));
          }
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          tmpMeta35 = omc_mk_box6(0, _info, _clock_ptr, _infer_ptr, _failed_set, _clock_deps, _infer_del);
          tmpMeta1 = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) omc_mk_box2(0,closure1_NBPartition_Association_expClocked,tmpMeta35));
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
modelica_boolean omc_NBPartition_Association_isEqualClockTpl(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (omc_NFComponentRef_isEqual(threadData, omc_Util_tuple21(threadData, _tpl1), omc_Util_tuple21(threadData, _tpl2)) && omc_NBPartitioning_BClock_isEqual(threadData, omc_Util_tuple22(threadData, _tpl1), omc_Util_tuple22(threadData, _tpl2)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Association_isEqualClockTpl(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartition_Association_isEqualClockTpl(threadData, _tpl1, _tpl2);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_integer omc_NBPartition_Association_hashClockTpl(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_integer _hash;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hash has no default value.
  _hash = omc_NFComponentRef_hash(threadData, omc_Util_tuple21(threadData, _tpl));

  _hash = stringHashDjb2Continue(omc_NBPartitioning_BClock_toString(threadData, omc_Util_tuple22(threadData, _tpl)), _hash);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hash;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Association_hashClockTpl(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_NBPartition_Association_hashClockTpl(threadData, _tpl);
  out_hash = omc_mk_icon(_hash);
  return out_hash;
}

DLLModelDirection
modelica_string omc_NBPartition_Association_clockTplString(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = stringAppend(_OMC_LIT31,omc_NFComponentRef_toString(threadData, omc_Util_tuple21(threadData, _tpl)));
  tmp2 = stringAppend(tmp1,_OMC_LIT43);
  tmp3 = stringAppend(tmp2,omc_NBPartitioning_BClock_toString(threadData, omc_Util_tuple22(threadData, _tpl)));
  tmp4 = stringAppend(tmp3,_OMC_LIT44);
  _str = tmp4;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NBPartition_Association_isClocked(threadData_t *threadData, modelica_metatype _association)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _association;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          
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
modelica_metatype boxptr_NBPartition_Association_isClocked(threadData_t *threadData, modelica_metatype _association)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartition_Association_isClocked(threadData, _association);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_metatype omc_NBPartition_Association_merge(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fass1, modelica_metatype _ass2, modelica_boolean _strict)
{
  modelica_metatype _ass1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ass1 = __omcQ_24in_5Fass1;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _ass1;
    tmp4_2 = _ass2;
    {
      modelica_metatype _jac1 = NULL;
      modelica_metatype _jac2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _jac1 has no default value.
      // _jac2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 3);
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,6) == 0) goto tmp3_end;
          
          _jac2 = tmpMeta7;
          _jac1 = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_unbox_integer((OMC_BOX_FIELD(_ass1, 2))) == omc_unbox_integer((OMC_BOX_FIELD(_ass2, 2)))) || (!_strict))) goto tmp3_end;
          tmpMeta11 = mmc_mk_cons(_jac1, mmc_mk_cons(_jac2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_ass1), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = mmc_mk_some(omc_NBJacobian_combine(threadData, tmpMeta11, (OMC_BOX_FIELD(_jac1, 2))));
          _ass1 = tmpMeta10;
          tmpMeta1 = _ass1;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_unbox_integer((OMC_BOX_FIELD(_ass1, 2))) == omc_unbox_integer((OMC_BOX_FIELD(_ass2, 2)))) || (!_strict))) goto tmp3_end;
          tmpMeta1 = _ass1;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((!_strict) || (omc_NBPartitioning_BClock_isEqual(threadData, (OMC_BOX_FIELD(_ass1, 2)), (OMC_BOX_FIELD(_ass2, 2))) && omc_Util_optionEqual(threadData, (OMC_BOX_FIELD(_ass1, 3)), (OMC_BOX_FIELD(_ass2, 3)), boxvar_NBPartitioning_BClock_isEqual)))) goto tmp3_end;
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_ass1), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[4] = omc_UnorderedSet_union(threadData, (OMC_BOX_FIELD(_ass1, 4)), (OMC_BOX_FIELD(_ass2, 4)));
          _ass1 = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_ass1), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[5] = omc_mk_boolean((omc_unbox_boolean((OMC_BOX_FIELD(_ass1, 5))) || omc_unbox_boolean((OMC_BOX_FIELD(_ass2, 5)))));
          _ass1 = tmpMeta13;
          tmpMeta1 = _ass1;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_string tmp15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          
          /* Pattern matching succeeded */
          tmp15 = stringAppend(_OMC_LIT45,omc_NBPartition_Association_toString(threadData, _ass1));
          tmp16 = stringAppend(tmp15,_OMC_LIT46);
          tmp17 = stringAppend(tmp16,omc_NBPartition_Association_toString(threadData, _ass2));
          tmp18 = stringAppend(tmp17,_OMC_LIT47);
          tmpMeta14 = mmc_mk_cons(tmp18, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta14);
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
  _ass1 = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _ass1;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Association_merge(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fass1, modelica_metatype _ass2, modelica_metatype _strict)
{
  modelica_integer tmp1;
  modelica_metatype _ass1 = NULL;
  tmp1 = omc_unbox_integer(_strict);
  _ass1 = omc_NBPartition_Association_merge(threadData, __omcQ_24in_5Fass1, _ass2, tmp1);
  /* skip box _ass1; NBPartition.Association */
  return _ass1;
}

static modelica_metatype closure2_NBPartition_Association_expClocked(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype info = OMC_BOX_FIELD(closure, 1);
  modelica_metatype clock_ptr = OMC_BOX_FIELD(closure, 2);
  modelica_metatype infer_ptr = OMC_BOX_FIELD(closure, 3);
  modelica_metatype failed_set = OMC_BOX_FIELD(closure, 4);
  modelica_metatype clock_deps = OMC_BOX_FIELD(closure, 5);
  modelica_metatype infer_del = OMC_BOX_FIELD(closure, 6);
  return boxptr_NBPartition_Association_expClocked(thData, $in_exp, info, clock_ptr, infer_ptr, failed_set, clock_deps, infer_del);
}
DLLModelDirection
modelica_metatype omc_NBPartition_Association_create(threadData_t *threadData, modelica_metatype _equations, modelica_integer _kind, modelica_metatype _info, modelica_metatype _infer_del)
{
  modelica_metatype _association = NULL;
  modelica_metatype _clock_ptr = NULL;
  modelica_metatype _infer_ptr = NULL;
  modelica_metatype _failed_set = NULL;
  modelica_metatype _clock_deps = NULL;
  modelica_metatype _clock_tpl = NULL;
  modelica_metatype _infer = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _base_name = NULL;
  modelica_metatype _clock = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _association has no default value.
  _clock_ptr = omc_Pointer_create(threadData, mmc_mk_none());
  _infer_ptr = omc_Pointer_create(threadData, mmc_mk_none());
  _failed_set = omc_UnorderedSet_new(threadData, boxvar_NBPartition_Association_hashClockTpl, boxvar_NBPartition_Association_isEqualClockTpl, ((modelica_integer) 13));
  _clock_deps = omc_UnorderedSet_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 13));
  // _clock_tpl has no default value.
  // _infer has no default value.
  // _name has no default value.
  // _base_name has no default value.
  // _clock has no default value.
  tmpMeta1 = omc_mk_box6(0, _info, _clock_ptr, _infer_ptr, _failed_set, _clock_deps, _infer_del);
  omc_NBEquation_EquationPointers_mapExp(threadData, _equations, (modelica_fnptr) omc_mk_box2(0,closure2_NBPartition_Association_expClocked,tmpMeta1), mmc_mk_none(), boxvar_NFExpression_fakeMap);

  _clock_tpl = omc_Pointer_access(threadData, _clock_ptr);

  _infer = omc_Pointer_access(threadData, _infer_ptr);

  if(isSome(_clock_tpl))
  {
    /* Pattern-matching assignment */
    tmpMeta2 = _clock_tpl;
    if (optionNone(tmpMeta2)) OMC_THROW_INTERNAL();
    tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
    tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
    tmpMeta5 = OMC_BOX_FIELD(tmpMeta3, 2);
    _name = tmpMeta4;
    _clock = tmpMeta5;

    if((!omc_UnorderedSet_isEmpty(threadData, _failed_set)))
    {
      tmpMeta7 = omc_mk_box2(0, _name, _clock);
      tmp8 = stringAppend(_OMC_LIT48,omc_NBPartition_Association_clockTplString(threadData, tmpMeta7));
      tmp9 = stringAppend(tmp8,_OMC_LIT49);
      tmp10 = stringAppend(tmp9,omc_UnorderedSet_toString(threadData, _failed_set, boxvar_NBPartition_Association_clockTplString, _OMC_LIT30));
      tmp11 = stringAppend(tmp10,_OMC_LIT47);
      tmpMeta6 = mmc_mk_cons(tmp11, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta6);

      OMC_THROW_INTERNAL();
    }

    if(omc_NBPartitioning_BClock_isBaseClock(threadData, _clock))
    {
      if(omc_NBPartitioning_BClock_isInferredClock(threadData, _clock))
      {
        if(isNone(_infer))
        {
          _clock = _OMC_LIT55;

          omc_UnorderedMap_add(threadData, _name, _clock, (OMC_BOX_FIELD(_info, 2)));
        }
        else
        {
          tmpMeta12 = omc_mk_box2(5, &NBPartitioning_BClock_INFERRED__CLOCK__desc, omc_Util_getOption(threadData, _infer));
          _clock = tmpMeta12;
        }
      }

      tmpMeta13 = omc_mk_box5(4, &NBPartition_Association_CLOCKED__desc, _clock, mmc_mk_none(), _clock_deps, omc_mk_boolean(0 /* false */));
      _association = tmpMeta13;
    }
    else
    {
      _base_name = omc_UnorderedMap_getSafe(threadData, _name, (OMC_BOX_FIELD(_info, 4)), _OMC_LIT50);

      tmpMeta14 = omc_mk_box5(4, &NBPartition_Association_CLOCKED__desc, _clock, mmc_mk_some(omc_UnorderedMap_getSafe(threadData, _base_name, (OMC_BOX_FIELD(_info, 2)), _OMC_LIT51)), _clock_deps, omc_mk_boolean(0 /* false */));
      _association = tmpMeta14;
    }
  }
  else
  {
    tmpMeta15 = omc_mk_box7(3, &NBPartition_Association_CONTINUOUS__desc, omc_mk_integer((modelica_integer)_kind), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
    _association = tmpMeta15;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _association;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartition_Association_create(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _kind, modelica_metatype _info, modelica_metatype _infer_del)
{
  modelica_integer tmp1;
  modelica_metatype _association = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _association = omc_NBPartition_Association_create(threadData, _equations, tmp1, _info, _infer_del);
  /* skip box _association; NBPartition.Association */
  return _association;
}

DLLModelDirection
modelica_string omc_NBPartition_Association_toString(threadData_t *threadData, modelica_metatype _association)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _association;
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
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          
          /* Pattern matching succeeded */
          if(isSome((OMC_BOX_FIELD(_association, 3))))
          {
            omc_string_store(&(_str), omc_NBJacobian_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_association, 3))), omc_NBPartition_Partition_kindToString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_association, 2))))));

            if(omc_Flags_getConfigBool(threadData, _OMC_LIT61))
            {
              tmp5 = stringAppend(_OMC_LIT30,_str);
              tmp6 = stringAppend(tmp5,omc_NBJacobian_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_association, 5))), omc_NBPartition_Partition_kindToString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_association, 2))))));
              omc_string_store(&(_str), tmp6);

              tmp7 = stringAppend(_OMC_LIT30,_str);
              tmp8 = stringAppend(tmp7,omc_NBJacobian_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_association, 6))), omc_NBPartition_Partition_kindToString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_association, 2))))));
              omc_string_store(&(_str), tmp8);

              tmp9 = stringAppend(_OMC_LIT30,_str);
              tmp10 = stringAppend(tmp9,omc_NBJacobian_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_association, 7))), omc_NBPartition_Partition_kindToString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_association, 2))))));
              omc_string_store(&(_str), tmp10);
            }
          }
          else
          {
            omc_string_store(&(_str), omc_StringUtil_headline__1(threadData, _OMC_LIT56));
          }

          if(isSome((OMC_BOX_FIELD(_association, 4))))
          {
            tmp11 = stringAppend(omc_NBPartition_Partition_kindToString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_association, 2)))),_OMC_LIT62);
            tmp12 = stringAppend(omc_NBJacobian_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_association, 4))), tmp11),_OMC_LIT30);
            omc_string_store(&(_str), tmp12);
          }
          tmp1 = _str;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          
          /* Pattern matching succeeded */
          omc_string_store(&(_str), omc_NBPartitioning_BClock_toString(threadData, (OMC_BOX_FIELD(_association, 2))));

          if(isSome((OMC_BOX_FIELD(_association, 3))))
          {
            tmp13 = stringAppend(_OMC_LIT64,_str);
            tmp14 = stringAppend(tmp13,_OMC_LIT65);
            tmp15 = stringAppend(tmp14,omc_NBPartitioning_BClock_toString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_association, 3)))));
            omc_string_store(&(_str), omc_StringUtil_headline__1(threadData, tmp15));
          }
          else
          {
            tmp16 = stringAppend(_OMC_LIT63,_str);
            omc_string_store(&(_str), omc_StringUtil_headline__1(threadData, tmp16));
          }
          tmp1 = _str;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT67);
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NBPartition_Association_toStringShort(threadData_t *threadData, modelica_metatype _association)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _association;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_string tmp5;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_OMC_LIT68,omc_NBPartition_Partition_kindToString(threadData, omc_unbox_integer((OMC_BOX_FIELD(_association, 2)))));
          tmp1 = tmp5;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT69;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT34;
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

