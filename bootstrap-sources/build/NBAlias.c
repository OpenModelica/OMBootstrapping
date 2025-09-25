#include "omc_simulation_settings.h"
#include "NBAlias.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&NFFlatten_FunctionTreeImpl_Tree_EMPTY__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,0,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Min map"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,7,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Max map"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,7,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Start map"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,9,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Fixed map"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,9,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Nominal map"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,11,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {_OMC_LIT5,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,1) {_OMC_LIT4,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,1) {_OMC_LIT3,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,1) {_OMC_LIT2,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data ":\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,3,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,2,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,2,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,1,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "StateSelect map"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,15,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "TearingSelect map"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,17,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Mean = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,7,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "There are different TearingSelect values. Use -d=dumprepl for more information.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,80,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "There are different TearingSelect values.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,42,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "\n	TearingSelect map after replacements:\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,41,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "dumprepl"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,8,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "Dump the found replacements for simple equation removal."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,56,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(38)),_OMC_LIT22,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,17,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT26,_OMC_LIT27,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "NBAlias.stateSelectAlways failed because multiple variables have StateSelect = always! Use -d=dumprepl for more information.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,125,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,1) {_OMC_LIT31,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "NBAlias.stateSelectAlways failed because multiple variables have StateSelect = always!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,87,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\n	StateSelect map after replacements:\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,39,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "NBAlias.checkNominalThresholdSingle: There are non literal nominal values in following alias set:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,98,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "\n	Nominal map after replacements (conflicting array index = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,60,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "):\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,4,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,9,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,41,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT38,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "NBAlias.checkNominalThresholdSingle: The quotient of the greatest and lowest nominal value is greater than the nominal threshold = 1000.0."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,138,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data " Use -d=dumprepl for more information.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,39,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "NBAlias.checkNominalThresholdSingle failed because zero values are not allowed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,79,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "\n	Nominal map after replacements (violating array index = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,58,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "NBAlias.checkNominalThreshold failed because array nominal values have different size. Use -d=dumprepl for more information.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,125,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/NBackEnd/Modules/2_Pre/NBAlias.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,80,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT48_6,1.758197185e9);
#define _OMC_LIT48_6 MMC_REFREALLIT(_OMC_LIT_STRUCT48_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1007)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1007)),MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT48_6}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "NBAlias.setStartFixed: Multiple variables are fixed and have identical start values. Use -d=dumprepl for more information.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,123,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "NBAlias.setStartFixed: Multiple variables are fixed and have identical start values.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,85,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "\n	Fixed start map after replacements:\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,39,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "NBAlias.setStartFixed failed because multiple variables are fixed with different start values! Use -d=dumprepl for more information.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,133,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,1) {_OMC_LIT52,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "NBAlias.setStartFixed failed because multiple variables are fixed with different start values!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,95,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "NBAlias.setStartFixed: Alias set with conflicting unfixed start values detected. Use -d=dumprepl for more information.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,119,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "NBAlias.setStartFixed: Alias set with conflicting unfixed start values detected.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,81,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "\n	Start map after replacements:\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,33,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,3,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,1,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT64,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT67,0.0);
#define _OMC_LIT67 MMC_REFREALLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT60,_OMC_LIT62,_OMC_LIT63,_OMC_LIT63,_OMC_LIT65,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,1,1) {_OMC_LIT69}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,1,9) {&NFInstNode_InstNodeType_NORMAL__COMP__desc,}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT61,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT70,_OMC_LIT60,_OMC_LIT71}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,1) {_OMC_LIT72,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,1) {_OMC_LIT72,_OMC_LIT73}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,7,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT75,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT76,_OMC_LIT77}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,1,18) {&NFType_ANY__desc,}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,17,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,3,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,8,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT83,_OMC_LIT84,_OMC_LIT85,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,11,3) {&NFVariable_VARIABLE__desc,_OMC_LIT81,_OMC_LIT82,_OMC_LIT63,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT65,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT66,_OMC_LIT68,_OMC_LIT86}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT88_6,1.758197185e9);
#define _OMC_LIT88_6 MMC_REFREALLIT(_OMC_LIT_STRUCT88_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(868)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(868)),MMC_IMMEDIATE(MMC_TAGFIXNUM(97)),_OMC_LIT88_6}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT91_6,1.758197185e9);
#define _OMC_LIT91_6 MMC_REFREALLIT(_OMC_LIT_STRUCT91_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(881)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(881)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),_OMC_LIT91_6}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT92_6,1.758197185e9);
#define _OMC_LIT92_6 MMC_REFREALLIT(_OMC_LIT_STRUCT92_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(796)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(796)),MMC_IMMEDIATE(MMC_TAGFIXNUM(128)),_OMC_LIT92_6}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT94_6,1.758197185e9);
#define _OMC_LIT94_6 MMC_REFREALLIT(_OMC_LIT_STRUCT94_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(806)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(806)),MMC_IMMEDIATE(MMC_TAGFIXNUM(149)),_OMC_LIT94_6}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "Variable to keep (values of attributes before replacements):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,60,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,2,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "debugAlias"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,10,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "Dumps some information about the process of removeSimpleEquations."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,66,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT98}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(43)),_OMC_LIT97,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT99}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "Attribute collector (before replacements): "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,43,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT102_6,1.758197185e9);
#define _OMC_LIT102_6 MMC_REFREALLIT(_OMC_LIT_STRUCT102_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(821)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(821)),MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),_OMC_LIT102_6}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "TMP"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,3,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Attribute collector (after replacements): "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,42,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "Variable to keep (values of attributes after replacements):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,59,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "NBAlias.getSimpleSets failed because the set for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,49,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data " was already added."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,19,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,5,3) {&NBAlias_CrefTpl_CREF__TPL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT109_6,1.758197185e9);
#define _OMC_LIT109_6 MMC_REFREALLIT(_OMC_LIT_STRUCT109_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(613)),MMC_IMMEDIATE(MMC_TAGFIXNUM(12)),MMC_IMMEDIATE(MMC_TAGFIXNUM(614)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),_OMC_LIT109_6}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT110_6,1.758197185e9);
#define _OMC_LIT110_6 MMC_REFREALLIT(_OMC_LIT_STRUCT110_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(618)),MMC_IMMEDIATE(MMC_TAGFIXNUM(12)),MMC_IMMEDIATE(MMC_TAGFIXNUM(619)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),_OMC_LIT110_6}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,5,3) {&NBAlias_CrefTpl_CREF__TPL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "NBAlias.findSimpleEquation failed to add Equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,51,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "\n because the set already contains a constant binding.\n              Overdetermined Set!:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,89,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT114,4,3) {&NBAlias_AliasSet_ALIAS__SET__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT114 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "NBAlias.findSimpleEquation failed to merge following sets because both have a constant binding. This would create an overdetermined Set!:\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,139,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "NBAlias.findSimpleEquation failed to merge following sets because they would create a loop. This would create an underdetermined Set!:\n\nTrying to merge: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,153,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "[dumprepl] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,11,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data " Alias Sets:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,12,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "Alias Set "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,10,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,1,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "<No "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,4,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data " Alias Sets>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,14,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "Clocked"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,7,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT124_6,1.758197185e9);
#define _OMC_LIT124_6 MMC_REFREALLIT(_OMC_LIT_STRUCT124_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(397)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(397)),MMC_IMMEDIATE(MMC_TAGFIXNUM(121)),_OMC_LIT124_6}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "NBAlias.aliasClocks failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,27,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT126,2,1) {_OMC_LIT125,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT126 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "[dumprepl] Found But Illegal Alias Replacements (added as equations):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,69,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,1,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,1,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,3,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "SIM"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,3,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "Simulation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,10,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT133_6,1.758197185e9);
#define _OMC_LIT133_6 MMC_REFREALLIT(_OMC_LIT_STRUCT133_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT133,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(240)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(240)),MMC_IMMEDIATE(MMC_TAGFIXNUM(121)),_OMC_LIT133_6}};
#define _OMC_LIT133 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT133)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT134,2,14) {&NFBackendExtension_VariableKind_PARAMETER__desc,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT134 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "NBAlias.aliasDefault failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,28,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,2,1) {_OMC_LIT135,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "	<No Constant/Parameter Binding>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,33,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "	Constant/Parameter Binding: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,29,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "	### Set Equations:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,20,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "	###<No Set Equations>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,23,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "default"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,7,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "NBAlias.main failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,20,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT143,2,1) {_OMC_LIT142,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT143 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT143)
#include "util/modelica.h"

#include "NBAlias_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBAlias_rateVar(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype __omcQ_24in_5Fattrcollector, modelica_metatype *out_attrcollector);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_rateVar(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype __omcQ_24in_5Fattrcollector, modelica_metatype *out_attrcollector);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_rateVar,2,0) {(void*) boxptr_NBAlias_rateVar,0}};
#define boxvar_NBAlias_rateVar MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_rateVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_optionStartFixed(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _attr_start, modelica_metatype _attr_fixed, modelica_metatype __omcQ_24in_5Fattrcollector);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_optionStartFixed,2,0) {(void*) boxptr_NBAlias_optionStartFixed,0}};
#define boxvar_NBAlias_optionStartFixed MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_optionStartFixed)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_optionMinMax(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _attr_min, modelica_metatype _attr_max, modelica_metatype __omcQ_24in_5Fattrcollector);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_optionMinMax,2,0) {(void*) boxptr_NBAlias_optionMinMax,0}};
#define boxvar_NBAlias_optionMinMax MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_optionMinMax)
PROTECTED_FUNCTION_STATIC modelica_real omc_NBAlias_mean(threadData_t *threadData, modelica_metatype _lst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_mean(threadData_t *threadData, modelica_metatype _lst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_mean,2,0) {(void*) boxptr_NBAlias_mean,0}};
#define boxvar_NBAlias_mean MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_mean)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_chooseTearingSelect(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_chooseTearingSelect,2,0) {(void*) boxptr_NBAlias_chooseTearingSelect,0}};
#define boxvar_NBAlias_chooseTearingSelect MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_chooseTearingSelect)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_chooseStateSelect(threadData_t *threadData, modelica_metatype _map, modelica_metatype *out_chosen_val);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_chooseStateSelect,2,0) {(void*) boxptr_NBAlias_chooseStateSelect,0}};
#define boxvar_NBAlias_chooseStateSelect MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_chooseStateSelect)
PROTECTED_FUNCTION_STATIC void omc_NBAlias_diffTearingSelect(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_diffTearingSelect,2,0) {(void*) boxptr_NBAlias_diffTearingSelect,0}};
#define boxvar_NBAlias_diffTearingSelect MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_diffTearingSelect)
PROTECTED_FUNCTION_STATIC void omc_NBAlias_stateSelectAlways(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_stateSelectAlways,2,0) {(void*) boxptr_NBAlias_stateSelectAlways,0}};
#define boxvar_NBAlias_stateSelectAlways MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_stateSelectAlways)
PROTECTED_FUNCTION_STATIC void omc_NBAlias_checkNominalThresholdSingle(threadData_t *threadData, modelica_metatype _lst_values, modelica_metatype _map, modelica_metatype _set, modelica_integer _index);
PROTECTED_FUNCTION_STATIC void boxptr_NBAlias_checkNominalThresholdSingle(threadData_t *threadData, modelica_metatype _lst_values, modelica_metatype _map, modelica_metatype _set, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_checkNominalThresholdSingle,2,0) {(void*) boxptr_NBAlias_checkNominalThresholdSingle,0}};
#define boxvar_NBAlias_checkNominalThresholdSingle MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_checkNominalThresholdSingle)
PROTECTED_FUNCTION_STATIC void omc_NBAlias_checkNominalThreshold(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_checkNominalThreshold,2,0) {(void*) boxptr_NBAlias_checkNominalThreshold,0}};
#define boxvar_NBAlias_checkNominalThreshold MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_checkNominalThreshold)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_setStartFixed(threadData_t *threadData, modelica_metatype _start_map, modelica_metatype _fixed_map, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_setStartFixed,2,0) {(void*) boxptr_NBAlias_setStartFixed,0}};
#define boxvar_NBAlias_setStartFixed MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_setStartFixed)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_getMinimum(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_getMinimum,2,0) {(void*) boxptr_NBAlias_getMinimum,0}};
#define boxvar_NBAlias_getMinimum MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_getMinimum)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_getMaximum(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_getMaximum,2,0) {(void*) boxptr_NBAlias_getMaximum,0}};
#define boxvar_NBAlias_getMaximum MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_getMaximum)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_chooseVariableToKeep(threadData_t *threadData, modelica_metatype _var_lst, modelica_metatype _var_to_keep, modelica_metatype *out_attrcollector);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_chooseVariableToKeep,2,0) {(void*) boxptr_NBAlias_chooseVariableToKeep,0}};
#define boxvar_NBAlias_chooseVariableToKeep MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_chooseVariableToKeep)
PROTECTED_FUNCTION_STATIC void omc_NBAlias_setNewAttributes(threadData_t *threadData, modelica_metatype _var_to_keep_ptr, modelica_metatype _attrcollector, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_setNewAttributes,2,0) {(void*) boxptr_NBAlias_setNewAttributes,0}};
#define boxvar_NBAlias_setNewAttributes MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_setNewAttributes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_createReplacementRules(threadData_t *threadData, modelica_metatype _set, modelica_metatype __omcQ_24in_5Freplacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_createReplacementRules,2,0) {(void*) boxptr_NBAlias_createReplacementRules,0}};
#define boxvar_NBAlias_createReplacementRules MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_createReplacementRules)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_getSimpleSets(threadData_t *threadData, modelica_metatype _map, modelica_integer _size);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_getSimpleSets(threadData_t *threadData, modelica_metatype _map, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_getSimpleSets,2,0) {(void*) boxptr_NBAlias_getSimpleSets,0}};
#define boxvar_NBAlias_getSimpleSets MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_getSimpleSets)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBAlias_checkOp(threadData_t *threadData, modelica_metatype _op, modelica_integer _cref_num);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_checkOp(threadData_t *threadData, modelica_metatype _op, modelica_metatype _cref_num);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_checkOp,2,0) {(void*) boxptr_NBAlias_checkOp,0}};
#define boxvar_NBAlias_checkOp MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_checkOp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBAlias_isSimpleExp(threadData_t *threadData, modelica_metatype _exp, modelica_boolean __omcQ_24in_5Fsimple, modelica_integer *out_num_cref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_isSimpleExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fsimple, modelica_metatype *out_num_cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_isSimpleExp,2,0) {(void*) boxptr_NBAlias_isSimpleExp,0}};
#define boxvar_NBAlias_isSimpleExp MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_isSimpleExp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBAlias_findCrefsFail(threadData_t *threadData, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_findCrefsFail(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_findCrefsFail,2,0) {(void*) boxptr_NBAlias_findCrefsFail,0}};
#define boxvar_NBAlias_findCrefsFail MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_findCrefsFail)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_findCrefs(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Ftpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_findCrefs,2,0) {(void*) boxptr_NBAlias_findCrefs,0}};
#define boxvar_NBAlias_findCrefs MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_findCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_findSimpleEquation(threadData_t *threadData, modelica_metatype _eq_ptr, modelica_metatype __omcQ_24in_5Fmap, modelica_boolean *out_delete);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_findSimpleEquation(threadData_t *threadData, modelica_metatype _eq_ptr, modelica_metatype __omcQ_24in_5Fmap, modelica_metatype *out_delete);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_findSimpleEquation,2,0) {(void*) boxptr_NBAlias_findSimpleEquation,0}};
#define boxvar_NBAlias_findSimpleEquation MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_findSimpleEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_aliasCausalize(threadData_t *threadData, modelica_metatype _variables, modelica_metatype _equations, modelica_string _context, modelica_metatype *out_newEquations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_aliasCausalize,2,0) {(void*) boxptr_NBAlias_aliasCausalize,0}};
#define boxvar_NBAlias_aliasCausalize MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_aliasCausalize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_aliasClocks(threadData_t *threadData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype *out_eqData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_aliasClocks,2,0) {(void*) boxptr_NBAlias_aliasClocks,0}};
#define boxvar_NBAlias_aliasClocks MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_aliasClocks)
PROTECTED_FUNCTION_STATIC void omc_NBAlias_dumpReplacements(threadData_t *threadData, modelica_metatype _replacements, modelica_metatype _auxEquations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_dumpReplacements,2,0) {(void*) boxptr_NBAlias_dumpReplacements,0}};
#define boxvar_NBAlias_dumpReplacements MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_dumpReplacements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_filterPre(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_filterPre,2,0) {(void*) boxptr_NBAlias_filterPre,0}};
#define boxvar_NBAlias_filterPre MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_filterPre)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBAlias_isValidReplacement(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _exp, modelica_metatype _exceptionSet);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_isValidReplacement(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _exp, modelica_metatype _exceptionSet);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_isValidReplacement,2,0) {(void*) boxptr_NBAlias_isValidReplacement,0}};
#define boxvar_NBAlias_isValidReplacement MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_isValidReplacement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_checkReplacements(threadData_t *threadData, modelica_metatype _replacements, modelica_metatype _eqData, modelica_metatype *out_auxEquations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_checkReplacements,2,0) {(void*) boxptr_NBAlias_checkReplacements,0}};
#define boxvar_NBAlias_checkReplacements MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_checkReplacements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_aliasDefault(threadData_t *threadData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype *out_eqData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBAlias_aliasDefault,2,0) {(void*) boxptr_NBAlias_aliasDefault,0}};
#define boxvar_NBAlias_aliasDefault MMC_REFSTRUCTLIT(boxvar_lit_NBAlias_aliasDefault)

static modelica_metatype closure0_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}static modelica_metatype closure1_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}static modelica_metatype closure2_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}static modelica_metatype closure3_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}
DLLDirection
modelica_metatype omc_NBAlias_AttributeCollector_fixValues(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattrcollector, modelica_metatype _var_cref, modelica_metatype _solved_eq)
{
  modelica_metatype _attrcollector = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _new_rhs = NULL;
  modelica_metatype _diff_rhs = NULL;
  modelica_metatype _args = NULL;
  modelica_boolean _swap_min_max;
  modelica_metatype _min_val_opt = NULL;
  modelica_metatype _max_val_opt = NULL;
  modelica_metatype _start_opt = NULL;
  modelica_metatype _nominal_opt = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _attrcollector = __omcQ_24in_5Fattrcollector;
  _repl = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  // _rhs has no default value.
  // _new_rhs has no default value.
  // _diff_rhs has no default value.
  // _args has no default value.
  // _swap_min_max has no default value.
  _min_val_opt = omc_UnorderedMap_get(threadData, _var_cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 2))));
  _max_val_opt = omc_UnorderedMap_get(threadData, _var_cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 3))));
  _start_opt = omc_UnorderedMap_get(threadData, _var_cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 4))));
  _nominal_opt = omc_UnorderedMap_get(threadData, _var_cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 6))));
  // _ty has no default value.
  _rhs = omc_NBEquation_Equation_getRHS(threadData, _solved_eq);

  if(isSome(_min_val_opt))
  {
    omc_UnorderedMap_add(threadData, _var_cref, omc_Util_getOption(threadData, _min_val_opt), _repl);

    tmpMeta1 = mmc_mk_box1(0, _repl);
    _new_rhs = omc_NFExpression_map(threadData, _rhs, (modelica_fnptr) mmc_mk_box2(0,closure0_NBReplacements_applySimpleExp,tmpMeta1));

    _new_rhs = omc_NFSimplifyExp_simplify(threadData, _new_rhs, 0 /* false */);

    omc_UnorderedMap_add(threadData, _var_cref, _new_rhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 2))));

    _min_val_opt = omc_UnorderedMap_get(threadData, _var_cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 2))));
  }

  if(isSome(_max_val_opt))
  {
    omc_UnorderedMap_add(threadData, _var_cref, omc_Util_getOption(threadData, _max_val_opt), _repl);

    tmpMeta2 = mmc_mk_box1(0, _repl);
    _new_rhs = omc_NFExpression_map(threadData, _rhs, (modelica_fnptr) mmc_mk_box2(0,closure1_NBReplacements_applySimpleExp,tmpMeta2));

    _new_rhs = omc_NFSimplifyExp_simplify(threadData, _new_rhs, 0 /* false */);

    omc_UnorderedMap_add(threadData, _var_cref, _new_rhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 3))));

    _max_val_opt = omc_UnorderedMap_get(threadData, _var_cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 3))));
  }

  _ty = omc_NFExpression_typeOf(threadData, _rhs);

  if((omc_NFType_isContinuous(threadData, _ty) || omc_NFType_isInteger(threadData, omc_NFType_elementType(threadData, _ty))))
  {
    _args = omc_NBDifferentiate_DifferentiationArguments_default(threadData, 2, _OMC_LIT0);

    tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(8));
    memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_args), 8*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[2] = _var_cref;
    _args = tmpMeta3;

    _diff_rhs = omc_NBDifferentiate_differentiateExpression(threadData, _rhs, _args, NULL);

    _diff_rhs = omc_NFSimplifyExp_simplify(threadData, _diff_rhs, 0 /* false */);

    _swap_min_max = omc_NFExpression_isNegative(threadData, _diff_rhs);
  }
  else
  {
    _swap_min_max = 0 /* false */;
  }

  if(((_swap_min_max && isSome(_min_val_opt)) && isSome(_max_val_opt)))
  {
    omc_UnorderedMap_add(threadData, _var_cref, omc_Util_getOption(threadData, _max_val_opt), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 2))));

    omc_UnorderedMap_add(threadData, _var_cref, omc_Util_getOption(threadData, _min_val_opt), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 3))));
  }

  if(isSome(_start_opt))
  {
    omc_UnorderedMap_add(threadData, _var_cref, omc_Util_getOption(threadData, _start_opt), _repl);

    tmpMeta4 = mmc_mk_box1(0, _repl);
    _new_rhs = omc_NFExpression_map(threadData, _rhs, (modelica_fnptr) mmc_mk_box2(0,closure2_NBReplacements_applySimpleExp,tmpMeta4));

    _new_rhs = omc_NFSimplifyExp_simplify(threadData, _new_rhs, 0 /* false */);

    omc_UnorderedMap_add(threadData, _var_cref, _new_rhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 4))));
  }

  if(isSome(_nominal_opt))
  {
    omc_UnorderedMap_add(threadData, _var_cref, omc_Util_getOption(threadData, _nominal_opt), _repl);

    tmpMeta5 = mmc_mk_box1(0, _repl);
    _new_rhs = omc_NFExpression_map(threadData, _rhs, (modelica_fnptr) mmc_mk_box2(0,closure3_NBReplacements_applySimpleExp,tmpMeta5));

    _new_rhs = omc_NFExpression_getNominal(threadData, _new_rhs);

    omc_UnorderedMap_add(threadData, _var_cref, _new_rhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 6))));
  }
  _return: OMC_LABEL_UNUSED
  return _attrcollector;
}

DLLDirection
modelica_string omc_NBAlias_AttributeCollector_toString(threadData_t *threadData, modelica_metatype _attrcollector, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_metatype _array_maps = NULL;
  modelica_metatype _array_names = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  // _array_maps has no default value.
  // _array_names has no default value.
  tmpMeta1 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 2))), mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 3))), mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 4))), mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 5))), mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 6))), MMC_REFSTRUCTLIT(mmc_nil))))));
  _array_maps = listArray(tmpMeta1);

  _array_names = listArray(_OMC_LIT11);

  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = arrayLength(_array_maps);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
    {
      if((!omc_UnorderedMap_isEmpty(threadData, arrayGet(_array_maps,_i) /* DAE.ASUB */) == !0 /* false */))
      {
        tmpMeta2 = stringAppend(_str,arrayGet(_array_names, _i));
        tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT12);
        tmpMeta4 = stringAppend(tmpMeta3,omc_UnorderedMap_toString(threadData, arrayGet(_array_maps,_i) /* DAE.ASUB */, boxvar_NFComponentRef_toString, boxvar_NFExpression_toString, _OMC_LIT13, _OMC_LIT14));
        tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT15);
        _str = tmpMeta5;
      }
    }
  }

  if((!omc_UnorderedMap_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 7)))) == !0 /* false */))
  {
    tmpMeta9 = stringAppend(_str,_OMC_LIT16);
    tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT12);
    tmpMeta11 = stringAppend(tmpMeta10,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 7))), boxvar_NFComponentRef_toString, boxvar_NFBackendExtension_VariableAttributes_stateSelectString, _OMC_LIT13, _OMC_LIT14));
    tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT15);
    _str = tmpMeta12;
  }

  if((!omc_UnorderedMap_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 8)))) == !0 /* false */))
  {
    tmpMeta13 = stringAppend(_str,_OMC_LIT17);
    tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT12);
    tmpMeta15 = stringAppend(tmpMeta14,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 8))), boxvar_NFComponentRef_toString, boxvar_NFBackendExtension_VariableAttributes_tearingSelectString, _OMC_LIT13, _OMC_LIT14));
    tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT15);
    _str = tmpMeta16;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBAlias_rateVar(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype __omcQ_24in_5Fattrcollector, modelica_metatype *out_attrcollector)
{
  modelica_integer _rating;
  modelica_metatype _attrcollector = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _nominal_val = NULL;
  modelica_integer _stateSelect_val;
  modelica_integer _tearingSelect_val;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rating has no default value.
  _attrcollector = __omcQ_24in_5Fattrcollector;
  // _name has no default value.
  // _nominal_val has no default value.
  // _stateSelect_val has no default value.
  // _tearingSelect_val has no default value.
  if((omc_NBVariable_isFunctionAlias(threadData, _var_ptr) || omc_NBVariable_isClockAlias(threadData, _var_ptr)))
  {
    _rating = ((modelica_integer) -10000);
  }
  else
  {
    _name = omc_NBVariable_getVarName(threadData, _var_ptr);

    _rating = (-omc_NFComponentRef_depth(threadData, _name));
  }

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = omc_Pointer_access(threadData, _var_ptr);
    {
      modelica_metatype _attr = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _attr has no default value.
      tmp3 = 0;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,7) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,16) == 0) goto tmp2_end;
          
          _attr = tmpMeta6;
          /* Pattern matching succeeded */
          _attrcollector = omc_NBAlias_optionMinMax(threadData, _var_ptr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 6))), _attrcollector);

          _attrcollector = omc_NBAlias_optionStartFixed(threadData, _var_ptr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8))), _attrcollector);

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 9)))))
          {
            _nominal_val = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 9))));

            omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), _nominal_val, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 6))));
          }

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 10)))))
          {
            _stateSelect_val = mmc_unbox_integer(omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 10)))));

            if(((modelica_integer)_stateSelect_val == 5))
            {
              _rating = ((modelica_integer) 100) + _rating;
            }

            omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), mmc_mk_integer((modelica_integer)_stateSelect_val), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 7))));
          }

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 11)))))
          {
            _tearingSelect_val = mmc_unbox_integer(omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 11)))));

            omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), mmc_mk_integer((modelica_integer)_tearingSelect_val), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 8))));
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,7) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,11) == 0) goto tmp2_end;
          
          _attr = tmpMeta8;
          /* Pattern matching succeeded */
          _attrcollector = omc_NBAlias_optionMinMax(threadData, _var_ptr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 4))), _attrcollector);

          _attrcollector = omc_NBAlias_optionStartFixed(threadData, _var_ptr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 6))), _attrcollector);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,7) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,7) == 0) goto tmp2_end;
          
          _attr = tmpMeta10;
          /* Pattern matching succeeded */
          _attrcollector = omc_NBAlias_optionStartFixed(threadData, _var_ptr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 4))), _attrcollector);
          goto tmp2_done;
        }
        case 3: {
          
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
  if (out_attrcollector) { *out_attrcollector = _attrcollector; }
  return _rating;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_rateVar(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype __omcQ_24in_5Fattrcollector, modelica_metatype *out_attrcollector)
{
  modelica_integer _rating;
  modelica_metatype out_rating;
  _rating = omc_NBAlias_rateVar(threadData, _var_ptr, __omcQ_24in_5Fattrcollector, out_attrcollector);
  out_rating = mmc_mk_icon(_rating);
  /* skip box _attrcollector; NBAlias.AttributeCollector */
  return out_rating;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_optionStartFixed(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _attr_start, modelica_metatype _attr_fixed, modelica_metatype __omcQ_24in_5Fattrcollector)
{
  modelica_metatype _attrcollector = NULL;
  modelica_metatype _start_val = NULL;
  modelica_metatype _fixed_val = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _attrcollector = __omcQ_24in_5Fattrcollector;
  // _start_val has no default value.
  // _fixed_val has no default value.
  if(isSome(_attr_start))
  {
    _start_val = omc_Util_getOption(threadData, _attr_start);

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), _start_val, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 4))));
  }

  if(isSome(_attr_fixed))
  {
    _fixed_val = omc_Util_getOption(threadData, _attr_fixed);

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), _fixed_val, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 5))));
  }
  _return: OMC_LABEL_UNUSED
  return _attrcollector;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_optionMinMax(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _attr_min, modelica_metatype _attr_max, modelica_metatype __omcQ_24in_5Fattrcollector)
{
  modelica_metatype _attrcollector = NULL;
  modelica_metatype _min_val = NULL;
  modelica_metatype _max_val = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _attrcollector = __omcQ_24in_5Fattrcollector;
  // _min_val has no default value.
  // _max_val has no default value.
  if(isSome(_attr_min))
  {
    _min_val = omc_Util_getOption(threadData, _attr_min);

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), _min_val, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 2))));
  }

  if(isSome(_attr_max))
  {
    _max_val = omc_Util_getOption(threadData, _attr_max);

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), _max_val, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 3))));
  }
  _return: OMC_LABEL_UNUSED
  return _attrcollector;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_NBAlias_mean(threadData_t *threadData, modelica_metatype _lst)
{
  modelica_real _mean_val;
  modelica_real _cur_sum;
  modelica_real tmp1;
  modelica_real tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mean_val has no default value.
  // _cur_sum has no default value.
  {
    modelica_real __omcQ_24tmpVar7;
    modelica_real __omcQ_24tmpVar6;
    modelica_integer tmp2;
    modelica_metatype _val_loopVar = 0;
    modelica_metatype _val;
    _val_loopVar = _lst;
    __omcQ_24tmpVar7 = 0.0; /* defaultValue */
    while(1) {
      tmp2 = 1;
      if (!listEmpty(_val_loopVar)) {
        _val = MMC_CAR(_val_loopVar);
        _val_loopVar = MMC_CDR(_val_loopVar);
        tmp2--;
      }
      if (tmp2 == 0) {
        __omcQ_24tmpVar6 = omc_NFExpression_realValue(threadData, _val);
        __omcQ_24tmpVar7 = __omcQ_24tmpVar7 + __omcQ_24tmpVar6;
      } else if (tmp2 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp1 = __omcQ_24tmpVar7;
  }
  _cur_sum = tmp1;

  tmp3 = ((modelica_real)listLength(_lst));
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
  _mean_val = (_cur_sum) / tmp3;

  tmp4 = modelica_real_to_modelica_string(_mean_val, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
  tmpMeta5 = stringAppend(_OMC_LIT18,tmp4);
  fputs(MMC_STRINGDATA(tmpMeta5),stdout);
  _return: OMC_LABEL_UNUSED
  return _mean_val;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_mean(threadData_t *threadData, modelica_metatype _lst)
{
  modelica_real _mean_val;
  modelica_metatype out_mean_val;
  _mean_val = omc_NBAlias_mean(threadData, _lst);
  out_mean_val = mmc_mk_rcon(_mean_val);
  return out_mean_val;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_chooseTearingSelect(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _chosen_val = NULL;
  modelica_metatype _lst_values = NULL;
  modelica_integer _tearing_select;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _chosen_val has no default value.
  _lst_values = omc_UnorderedMap_valueList(threadData, _map);
  // _tearing_select has no default value.
  if(listEmpty(_lst_values))
  {
    _chosen_val = mmc_mk_none();
  }
  else
  {
    if(omc_List_hasOneElement(threadData, _lst_values))
    {
      _chosen_val = mmc_mk_some(listHead(_lst_values));
    }
    else
    {
      _tearing_select = 1;

      {
        modelica_metatype _val;
        for (tmpMeta1 = _lst_values; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
        {
          _val = MMC_CAR(tmpMeta1);
          if((mmc_unbox_integer(_val) > (modelica_integer)_tearing_select))
          {
            _tearing_select = mmc_unbox_integer(_val);
          }
        }
      }

      _chosen_val = mmc_mk_some(mmc_mk_integer((modelica_integer)_tearing_select));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _chosen_val;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_chooseStateSelect(threadData_t *threadData, modelica_metatype _map, modelica_metatype *out_chosen_val)
{
  modelica_metatype _chosen_cref = NULL;
  modelica_metatype _chosen_val = NULL;
  modelica_metatype _lst_values = NULL;
  modelica_integer _sval;
  modelica_integer _state_select;
  modelica_metatype _compref = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _chosen_cref has no default value.
  // _chosen_val has no default value.
  _lst_values = omc_UnorderedMap_toList(threadData, _map);
  // _sval has no default value.
  _state_select = 1;
  // _compref has no default value.
  // _cref has no default value.
  if(listEmpty(_lst_values))
  {
    _chosen_val = mmc_mk_none();

    _chosen_cref = mmc_mk_none();
  }
  else
  {
    if(omc_List_hasOneElement(threadData, _lst_values))
    {
      /* Pattern-matching assignment */
      tmpMeta1 = listHead(_lst_values);
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      _compref = tmpMeta2;
      _sval = tmp4  /* pattern as ty=enumeration(NEVER, AVOID, DEFAULT, PREFER, ALWAYS) */;

      _chosen_val = mmc_mk_some(mmc_mk_integer((modelica_integer)_sval));

      _chosen_cref = mmc_mk_some(_compref);
    }
    else
    {
      {
        modelica_metatype _tpl;
        for (tmpMeta5 = _lst_values; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
        {
          _tpl = MMC_CAR(tmpMeta5);
          /* Pattern-matching assignment */
          tmpMeta6 = _tpl;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _cref = tmpMeta7;
          _sval = tmp9  /* pattern as ty=enumeration(NEVER, AVOID, DEFAULT, PREFER, ALWAYS) */;

          if(((modelica_integer)_sval > (modelica_integer)_state_select))
          {
            _state_select = (modelica_integer)_sval;

            _compref = _cref;
          }
        }
      }

      _chosen_val = mmc_mk_some(mmc_mk_integer((modelica_integer)_state_select));

      _chosen_cref = mmc_mk_some(_compref);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_chosen_val) { *out_chosen_val = _chosen_val; }
  return _chosen_cref;
}

PROTECTED_FUNCTION_STATIC void omc_NBAlias_diffTearingSelect(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set)
{
  modelica_metatype _lst_values = NULL;
  modelica_integer _first;
  modelica_metatype _rest = NULL;
  modelica_boolean _equal;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst_values = omc_UnorderedMap_valueList(threadData, _map);
  // _first has no default value.
  // _rest has no default value.
  _equal = 1 /* true */;
  if((!listEmpty(_lst_values)))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _lst_values;
    if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_CAR(tmpMeta1);
    tmpMeta3 = MMC_CDR(tmpMeta1);
    tmp4 = mmc_unbox_integer(tmpMeta2);
    _first = tmp4  /* pattern as ty=enumeration(NEVER, AVOID, DEFAULT, PREFER, ALWAYS) */;
    _rest = tmpMeta3;

    {
      modelica_metatype _val;
      for (tmpMeta5 = _rest; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
      {
        _val = MMC_CAR(tmpMeta5);
        if(((modelica_integer)_first != mmc_unbox_integer(_val)))
        {
          _equal = 0 /* false */;

          break;
        }
      }
    }

    if((!_equal))
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT25))
      {
        tmpMeta7 = stringAppend(_OMC_LIT20,omc_NBAlias_AliasSet_toString(threadData, _set));
        tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT21);
        tmpMeta9 = stringAppend(tmpMeta8,omc_UnorderedMap_toString(threadData, _map, boxvar_NFComponentRef_toString, boxvar_NFBackendExtension_VariableAttributes_tearingSelectString, _OMC_LIT13, _OMC_LIT14));
        omc_Error_addCompilerNotification(threadData, tmpMeta9);
      }
      else
      {
        omc_Error_addCompilerNotification(threadData, _OMC_LIT19);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBAlias_stateSelectAlways(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set)
{
  modelica_metatype _lst_values = NULL;
  modelica_integer _count;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst_values = omc_UnorderedMap_valueList(threadData, _map);
  _count = ((modelica_integer) 0);
  {
    modelica_metatype _val;
    for (tmpMeta1 = _lst_values; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _val = MMC_CAR(tmpMeta1);
      if((mmc_unbox_integer(_val) == 5))
      {
        _count = ((modelica_integer) 1) + _count;
      }
    }
  }

  if((_count > ((modelica_integer) 1)))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT25))
    {
      tmpMeta4 = stringAppend(_OMC_LIT33,omc_NBAlias_AliasSet_toString(threadData, _set));
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT34);
      tmpMeta6 = stringAppend(tmpMeta5,omc_UnorderedMap_toString(threadData, _map, boxvar_NFComponentRef_toString, boxvar_NFBackendExtension_VariableAttributes_stateSelectString, _OMC_LIT13, _OMC_LIT14));
      tmpMeta3 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT30, tmpMeta3);

      MMC_THROW_INTERNAL();
    }
    else
    {
      omc_Error_addMessage(threadData, _OMC_LIT30, _OMC_LIT32);

      MMC_THROW_INTERNAL();
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBAlias_checkNominalThresholdSingle(threadData_t *threadData, modelica_metatype _lst_values, modelica_metatype _map, modelica_metatype _set, modelica_integer _index)
{
  modelica_metatype _constants = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _zeroes = NULL;
  modelica_metatype _real_constants = NULL;
  modelica_real _nom_min;
  modelica_real _nom_max;
  modelica_real _nom_quotient;
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_real tmp10;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _constants has no default value.
  // _rest has no default value.
  // _zeroes has no default value.
  // _real_constants has no default value.
  // _nom_min has no default value.
  // _nom_max has no default value.
  // _nom_quotient has no default value.
  // _str has no default value.
  _constants = omc_List_splitOnTrue(threadData, _lst_values, boxvar_NFExpression_isConstNumber ,&_rest);

  _zeroes = omc_List_splitOnTrue(threadData, _constants, boxvar_NFExpression_isZero ,&_constants);

  if((omc_Flags_isSet(threadData, _OMC_LIT41) && (!listEmpty(_rest))))
  {
    tmpMeta1 = stringAppend(_OMC_LIT35,omc_NBAlias_AliasSet_toString(threadData, _set));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT36);
    tmpMeta3 = stringAppend(tmpMeta2,intString(_index));
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT37);
    tmpMeta5 = stringAppend(tmpMeta4,omc_UnorderedMap_toString(threadData, _map, boxvar_NFComponentRef_toString, boxvar_NFExpression_toString, _OMC_LIT13, _OMC_LIT14));
    _str = tmpMeta5;

    omc_Error_addCompilerWarning(threadData, _str);
  }

  if((!listEmpty(_constants)))
  {
    {
      modelica_metatype __omcQ_24tmpVar9;
      modelica_metatype* tmp7;
      modelica_metatype tmpMeta8;
      modelica_metatype __omcQ_24tmpVar8;
      modelica_integer tmp9;
      modelica_metatype _val_loopVar = 0;
      modelica_metatype _val;
      _val_loopVar = _constants;
      tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar9 = tmpMeta8; /* defaultValue */
      tmp7 = &__omcQ_24tmpVar9;
      while(1) {
        tmp9 = 1;
        if (!listEmpty(_val_loopVar)) {
          _val = MMC_CAR(_val_loopVar);
          _val_loopVar = MMC_CDR(_val_loopVar);
          tmp9--;
        }
        if (tmp9 == 0) {
          __omcQ_24tmpVar8 = mmc_mk_real(fabs(omc_NFExpression_realValue(threadData, _val)));
          *tmp7 = mmc_mk_cons(__omcQ_24tmpVar8,0);
          tmp7 = &MMC_CDR(*tmp7);
        } else if (tmp9 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp7 = mmc_mk_nil();
      tmpMeta6 = __omcQ_24tmpVar9;
    }
    _real_constants = tmpMeta6;

    _nom_min = mmc_unbox_real(omc_List_minElement(threadData, _real_constants, boxvar_realLt));

    _nom_max = mmc_unbox_real(omc_List_maxElement(threadData, _real_constants, boxvar_realLt));

    tmp10 = _nom_min;
    if (tmp10 == 0) {MMC_THROW_INTERNAL();}
    _nom_quotient = (_nom_max) / tmp10;

    if((_nom_quotient > 1000.0))
    {
      _str = _OMC_LIT42;

      if(omc_Flags_isSet(threadData, _OMC_LIT25))
      {
        tmpMeta11 = stringAppend(_str,_OMC_LIT15);
        tmpMeta12 = stringAppend(tmpMeta11,omc_NBAlias_AliasSet_toString(threadData, _set));
        tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT36);
        tmpMeta14 = stringAppend(tmpMeta13,intString(_index));
        tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT37);
        tmpMeta16 = stringAppend(tmpMeta15,omc_UnorderedMap_toString(threadData, _map, boxvar_NFComponentRef_toString, boxvar_NFExpression_toString, _OMC_LIT13, _OMC_LIT14));
        _str = tmpMeta16;
      }
      else
      {
        tmpMeta17 = stringAppend(_str,_OMC_LIT43);
        _str = tmpMeta17;
      }

      omc_Error_addCompilerWarning(threadData, _str);
    }
  }

  if((!listEmpty(_zeroes)))
  {
    _str = _OMC_LIT44;

    if(omc_Flags_isSet(threadData, _OMC_LIT25))
    {
      tmpMeta18 = stringAppend(_str,_OMC_LIT45);
      tmpMeta19 = stringAppend(tmpMeta18,intString(_index));
      tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT37);
      tmpMeta21 = stringAppend(tmpMeta20,omc_UnorderedMap_toString(threadData, _map, boxvar_NFComponentRef_toString, boxvar_NFExpression_toString, _OMC_LIT13, _OMC_LIT14));
      _str = tmpMeta21;
    }
    else
    {
      tmpMeta22 = stringAppend(_str,_OMC_LIT43);
      _str = tmpMeta22;
    }

    omc_Error_addCompilerError(threadData, _str);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBAlias_checkNominalThresholdSingle(threadData_t *threadData, modelica_metatype _lst_values, modelica_metatype _map, modelica_metatype _set, modelica_metatype _index)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_index);
  omc_NBAlias_checkNominalThresholdSingle(threadData, _lst_values, _map, _set, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBAlias_checkNominalThreshold(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set)
{
  modelica_metatype _current = NULL;
  modelica_metatype _lst_values = NULL;
  modelica_metatype _arr_iter = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _exp = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _current has no default value.
  _lst_values = omc_UnorderedMap_valueList(threadData, _map);
  // _arr_iter has no default value.
  // _iter has no default value.
  // _exp has no default value.
  _index = ((modelica_integer) 1);
  if(listEmpty(_lst_values))
  {
    goto _return;
  }

  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _lst_values;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar11;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar10 = mmc_mk_integer(omc_NFType_sizeOf(threadData, omc_NFExpression_typeOf(threadData, _e), 0 /* false */));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar11;
  }
  if((!omc_List_allEqual(threadData, tmpMeta1, boxvar_intEq)))
  {
    omc_Error_addCompilerWarning(threadData, _OMC_LIT46);

    MMC_THROW_INTERNAL();
  }

  {
    modelica_metatype __omcQ_24tmpVar13;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar12;
    modelica_integer tmp8;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _lst_values;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar13 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar13;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar12 = omc_NFExpressionIterator_fromExp(threadData, _e, 0 /* false */);
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar12,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar13;
  }
  _arr_iter = listArray(tmpMeta5);

  while(1)
  {
    if(!omc_NFExpressionIterator_hasNext(threadData, arrayGet(_arr_iter,((modelica_integer) 1)) /* DAE.ASUB */)) break;
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    _current = tmpMeta9;

    tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = arrayLength(_arr_iter);
    if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
      {
        _iter = omc_NFExpressionIterator_next(threadData, arrayGet(_arr_iter,_i) /* DAE.ASUB */ ,&_exp);

        arrayUpdate(_arr_iter, _i, _iter);

        tmpMeta10 = mmc_mk_cons(_exp, _current);
        _current = tmpMeta10;
      }
    }

    omc_NBAlias_checkNominalThresholdSingle(threadData, _current, _map, _set, _index);

    _index = ((modelica_integer) 1) + _index;
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_setStartFixed(threadData_t *threadData, modelica_metatype _start_map, modelica_metatype _fixed_map, modelica_metatype _set)
{
  modelica_metatype _fixed_start_map = NULL;
  modelica_metatype _fixed_lst = NULL;
  modelica_metatype _start_lst = NULL;
  modelica_metatype _fixed_start_lst = NULL;
  modelica_integer _count_fixed;
  modelica_metatype _cref = NULL;
  modelica_metatype _sval = NULL;
  modelica_metatype _fval = NULL;
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
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _fixed_start_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  _fixed_lst = omc_UnorderedMap_toList(threadData, _fixed_map);
  _start_lst = omc_UnorderedMap_valueList(threadData, _start_map);
  // _fixed_start_lst has no default value.
  _count_fixed = ((modelica_integer) 0);
  // _cref has no default value.
  // _sval has no default value.
  // _fval has no default value.
  {
    modelica_metatype _tpl;
    for (tmpMeta1 = _fixed_lst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _tpl = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _tpl;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _cref = tmpMeta3;
      _fval = tmpMeta4;

      if(omc_NFExpression_isTrue(threadData, _fval))
      {
        _count_fixed = ((modelica_integer) 1) + _count_fixed;

        _sval = omc_UnorderedMap_getSafe(threadData, _cref, _start_map, _OMC_LIT48);

        omc_UnorderedMap_add(threadData, _cref, _sval, _fixed_start_map);
      }
    }
  }

  if((_count_fixed == ((modelica_integer) 0)))
  {
    if((!omc_List_allEqual(threadData, _start_lst, boxvar_NFExpression_isEqual)))
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT25))
      {
        tmpMeta6 = stringAppend(_OMC_LIT56,omc_NBAlias_AliasSet_toString(threadData, _set));
        tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT57);
        tmpMeta8 = stringAppend(tmpMeta7,omc_UnorderedMap_toString(threadData, _start_map, boxvar_NFComponentRef_toString, boxvar_NFExpression_toString, _OMC_LIT13, _OMC_LIT14));
        omc_Error_addCompilerWarning(threadData, tmpMeta8);
      }
      else
      {
        omc_Error_addCompilerWarning(threadData, _OMC_LIT55);
      }
    }
  }
  else
  {
    if((_count_fixed > ((modelica_integer) 1)))
    {
      _fixed_start_lst = omc_UnorderedMap_valueList(threadData, _fixed_start_map);

      if((!omc_List_allEqual(threadData, _fixed_start_lst, boxvar_NFExpression_isEqual)))
      {
        if(omc_Flags_isSet(threadData, _OMC_LIT25))
        {
          tmpMeta10 = stringAppend(_OMC_LIT54,omc_NBAlias_AliasSet_toString(threadData, _set));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT51);
          tmpMeta12 = stringAppend(tmpMeta11,omc_UnorderedMap_toString(threadData, _fixed_start_map, boxvar_NFComponentRef_toString, boxvar_NFExpression_toString, _OMC_LIT13, _OMC_LIT14));
          tmpMeta9 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT30, tmpMeta9);

          MMC_THROW_INTERNAL();
        }
        else
        {
          omc_Error_addMessage(threadData, _OMC_LIT30, _OMC_LIT53);

          MMC_THROW_INTERNAL();
        }
      }
      else
      {
        if(omc_List_allEqual(threadData, _fixed_start_lst, boxvar_NFExpression_isEqual))
        {
          if(omc_Flags_isSet(threadData, _OMC_LIT25))
          {
            tmpMeta13 = stringAppend(_OMC_LIT50,omc_NBAlias_AliasSet_toString(threadData, _set));
            tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT51);
            tmpMeta15 = stringAppend(tmpMeta14,omc_UnorderedMap_toString(threadData, _fixed_start_map, boxvar_NFComponentRef_toString, boxvar_NFExpression_toString, _OMC_LIT13, _OMC_LIT14));
            omc_Error_addCompilerWarning(threadData, tmpMeta15);
          }
          else
          {
            omc_Error_addCompilerWarning(threadData, _OMC_LIT49);
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _fixed_start_map;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_getMinimum(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _min_exp = NULL;
  modelica_metatype _constants = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _lst_values = NULL;
  modelica_metatype _min_exp_val = NULL;
  modelica_real _min_val;
  modelica_metatype tmpMeta1;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _min_exp has no default value.
  // _constants has no default value.
  // _rest has no default value.
  _lst_values = omc_UnorderedMap_valueList(threadData, _map);
  // _min_exp_val has no default value.
  // _min_val has no default value.
  _constants = omc_List_splitOnTrue(threadData, _lst_values, boxvar_NFExpression_isConstNumber ,&_rest);

  if((!listEmpty(_constants)))
  {
    {
      modelica_metatype __omcQ_24tmpVar15;
      modelica_metatype* tmp2;
      modelica_metatype tmpMeta3;
      modelica_metatype __omcQ_24tmpVar14;
      modelica_integer tmp4;
      modelica_metatype _val_loopVar = 0;
      modelica_metatype _val;
      _val_loopVar = _constants;
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar15 = tmpMeta3; /* defaultValue */
      tmp2 = &__omcQ_24tmpVar15;
      while(1) {
        tmp4 = 1;
        if (!listEmpty(_val_loopVar)) {
          _val = MMC_CAR(_val_loopVar);
          _val_loopVar = MMC_CDR(_val_loopVar);
          tmp4--;
        }
        if (tmp4 == 0) {
          __omcQ_24tmpVar14 = mmc_mk_real(omc_NFExpression_realValue(threadData, _val));
          *tmp2 = mmc_mk_cons(__omcQ_24tmpVar14,0);
          tmp2 = &MMC_CDR(*tmp2);
        } else if (tmp4 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp2 = mmc_mk_nil();
      tmpMeta1 = __omcQ_24tmpVar15;
    }
    _min_val = mmc_unbox_real(omc_List_minElement(threadData, tmpMeta1, boxvar_realLt));

    tmpMeta6 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(_min_val));
    tmpMeta5 = mmc_mk_cons(tmpMeta6, _rest);
    _rest = tmpMeta5;
  }

  if(listEmpty(_rest))
  {
    _min_exp = mmc_mk_none();
  }
  else
  {
    if(omc_List_hasOneElement(threadData, _rest))
    {
      _min_exp = mmc_mk_some(listHead(_rest));
    }
    else
    {
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta12 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT59, _OMC_LIT60, _OMC_LIT74, _OMC_LIT73, tmpMeta7, tmpMeta8, _OMC_LIT62, _OMC_LIT78, tmpMeta9, tmpMeta10, listArray(tmpMeta11), _OMC_LIT79, _OMC_LIT80);
      tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta18 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT59, _OMC_LIT60, _OMC_LIT74, _OMC_LIT73, tmpMeta13, tmpMeta14, _OMC_LIT62, _OMC_LIT78, tmpMeta15, tmpMeta16, listArray(tmpMeta17), _OMC_LIT79, _OMC_LIT80);
      tmpMeta19 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta12, _rest, 3, 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 8)))));
      _min_exp_val = tmpMeta19;

      _min_exp = mmc_mk_some(_min_exp_val);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _min_exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_getMaximum(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _max_exp = NULL;
  modelica_metatype _constants = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _lst_values = NULL;
  modelica_metatype _max_exp_val = NULL;
  modelica_real _max_val;
  modelica_metatype tmpMeta1;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _max_exp has no default value.
  // _constants has no default value.
  // _rest has no default value.
  _lst_values = omc_UnorderedMap_valueList(threadData, _map);
  // _max_exp_val has no default value.
  // _max_val has no default value.
  _constants = omc_List_splitOnTrue(threadData, _lst_values, boxvar_NFExpression_isConstNumber ,&_rest);

  if((!listEmpty(_constants)))
  {
    {
      modelica_metatype __omcQ_24tmpVar17;
      modelica_metatype* tmp2;
      modelica_metatype tmpMeta3;
      modelica_metatype __omcQ_24tmpVar16;
      modelica_integer tmp4;
      modelica_metatype _val_loopVar = 0;
      modelica_metatype _val;
      _val_loopVar = _constants;
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar17 = tmpMeta3; /* defaultValue */
      tmp2 = &__omcQ_24tmpVar17;
      while(1) {
        tmp4 = 1;
        if (!listEmpty(_val_loopVar)) {
          _val = MMC_CAR(_val_loopVar);
          _val_loopVar = MMC_CDR(_val_loopVar);
          tmp4--;
        }
        if (tmp4 == 0) {
          __omcQ_24tmpVar16 = mmc_mk_real(omc_NFExpression_realValue(threadData, _val));
          *tmp2 = mmc_mk_cons(__omcQ_24tmpVar16,0);
          tmp2 = &MMC_CDR(*tmp2);
        } else if (tmp4 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp2 = mmc_mk_nil();
      tmpMeta1 = __omcQ_24tmpVar17;
    }
    _max_val = mmc_unbox_real(omc_List_maxElement(threadData, tmpMeta1, boxvar_realLt));

    tmpMeta6 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(_max_val));
    tmpMeta5 = mmc_mk_cons(tmpMeta6, _rest);
    _rest = tmpMeta5;
  }

  if(listEmpty(_rest))
  {
    _max_exp = mmc_mk_none();
  }
  else
  {
    if(omc_List_hasOneElement(threadData, _rest))
    {
      _max_exp = mmc_mk_some(listHead(_rest));
    }
    else
    {
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta12 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT59, _OMC_LIT60, _OMC_LIT74, _OMC_LIT73, tmpMeta7, tmpMeta8, _OMC_LIT62, _OMC_LIT78, tmpMeta9, tmpMeta10, listArray(tmpMeta11), _OMC_LIT79, _OMC_LIT80);
      tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta18 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT59, _OMC_LIT60, _OMC_LIT74, _OMC_LIT73, tmpMeta13, tmpMeta14, _OMC_LIT62, _OMC_LIT78, tmpMeta15, tmpMeta16, listArray(tmpMeta17), _OMC_LIT79, _OMC_LIT80);
      tmpMeta19 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta12, _rest, 3, 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 8)))));
      _max_exp_val = tmpMeta19;

      _max_exp = mmc_mk_some(_max_exp_val);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _max_exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_chooseVariableToKeep(threadData_t *threadData, modelica_metatype _var_lst, modelica_metatype _var_to_keep, modelica_metatype *out_attrcollector)
{
  modelica_metatype _acc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _attrcollector = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _var = NULL;
  modelica_metatype _cur_var = NULL;
  modelica_metatype _rest = NULL;
  modelica_integer _cur_rating;
  modelica_integer _max_rating;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc = tmpMeta1;
  tmpMeta2 = mmc_mk_box8(3, &NBAlias_AttributeCollector_ATTRIBUTE__COLLECTOR__desc, omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)));
  _attrcollector = tmpMeta2;
  // _var has no default value.
  // _cur_var has no default value.
  // _rest has no default value.
  // _cur_rating has no default value.
  // _max_rating has no default value.
  /* Pattern-matching assignment */
  tmpMeta3 = _var_lst;
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  _var = tmpMeta4;
  _rest = tmpMeta5;

  omc_Pointer_update(threadData, _var_to_keep, _var);

  _max_rating = omc_NBAlias_rateVar(threadData, _var, _attrcollector ,&_attrcollector);

  {
    modelica_metatype _var;
    for (tmpMeta6 = _rest; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _var = MMC_CAR(tmpMeta6);
      _cur_rating = omc_NBAlias_rateVar(threadData, _var, _attrcollector ,&_attrcollector);

      if((_cur_rating > _max_rating))
      {
        _max_rating = _cur_rating;

        tmpMeta7 = mmc_mk_cons(omc_Pointer_access(threadData, _var_to_keep), _acc);
        _acc = tmpMeta7;

        omc_Pointer_update(threadData, _var_to_keep, _var);
      }
      else
      {
        tmpMeta8 = mmc_mk_cons(_var, _acc);
        _acc = tmpMeta8;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_attrcollector) { *out_attrcollector = _attrcollector; }
  return _acc;
}

PROTECTED_FUNCTION_STATIC void omc_NBAlias_setNewAttributes(threadData_t *threadData, modelica_metatype _var_to_keep_ptr, modelica_metatype _attrcollector, modelica_metatype _set)
{
  modelica_metatype _lst = NULL;
  modelica_metatype _new_cref = NULL;
  modelica_metatype _new_min = NULL;
  modelica_metatype _new_max = NULL;
  modelica_metatype _new_start = NULL;
  modelica_metatype _new_stateSelect = NULL;
  modelica_metatype _new_tearingSelect = NULL;
  modelica_metatype _fixed_var = NULL;
  modelica_metatype _var_to_keep = NULL;
  modelica_metatype _fixed_start_map = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lst has no default value.
  // _new_cref has no default value.
  // _new_min has no default value.
  // _new_max has no default value.
  // _new_start has no default value.
  // _new_stateSelect has no default value.
  // _new_tearingSelect has no default value.
  // _fixed_var has no default value.
  _var_to_keep = omc_Pointer_access(threadData, _var_to_keep_ptr);
  // _fixed_start_map has no default value.
  _new_min = omc_NBAlias_getMaximum(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 2))));

  if(isSome(_new_min))
  {
    omc_Pointer_update(threadData, _var_to_keep, omc_NBVariable_setMin(threadData, omc_Pointer_access(threadData, _var_to_keep), _new_min, 1 /* true */));

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), omc_Util_getOption(threadData, _new_min), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 2))));
  }

  _new_max = omc_NBAlias_getMinimum(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 3))));

  if(isSome(_new_max))
  {
    omc_Pointer_update(threadData, _var_to_keep, omc_NBVariable_setMax(threadData, omc_Pointer_access(threadData, _var_to_keep), _new_max, 1 /* true */));

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), omc_Util_getOption(threadData, _new_max), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 3))));
  }

  _fixed_start_map = omc_NBAlias_setStartFixed(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 5))), _set);

  if((omc_UnorderedMap_size(threadData, _fixed_start_map) == ((modelica_integer) 1)))
  {
    _new_start = mmc_mk_some(listHead(omc_UnorderedMap_valueList(threadData, _fixed_start_map)));

    _fixed_var = omc_NBVariable_getVarPointer(threadData, omc_UnorderedMap_firstKey(threadData, _fixed_start_map), _OMC_LIT88);

    omc_NBVariable_setFixed(threadData, _fixed_var, 0 /* false */, 1 /* true */);

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _fixed_var), _OMC_LIT89, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 5))));

    omc_NBVariable_setFixed(threadData, _var_to_keep, 1 /* true */, 1 /* true */);

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), _OMC_LIT90, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 5))));

    omc_Pointer_update(threadData, _var_to_keep, omc_NBVariable_setStartAttribute(threadData, omc_Pointer_access(threadData, _var_to_keep), omc_Util_getOption(threadData, _new_start), 1 /* true */));

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), omc_Util_getOption(threadData, _new_start), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 4))));
  }

  _new_cref = omc_NBAlias_chooseStateSelect(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 7))) ,&_new_stateSelect);

  if((isSome(_new_stateSelect) && isSome(omc_UnorderedMap_get(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 7)))))))
  {
    omc_Pointer_update(threadData, _var_to_keep, omc_NBVariable_setStateSelect(threadData, omc_Pointer_access(threadData, _var_to_keep), mmc_unbox_integer(omc_Util_getOption(threadData, _new_stateSelect)), 1 /* true */));

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), omc_Util_getOption(threadData, _new_stateSelect), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 7))));

    if((mmc_unbox_integer(omc_Util_getOption(threadData, _new_stateSelect)) == 5))
    {
      _new_start = mmc_mk_some(omc_UnorderedMap_getSafe(threadData, omc_Util_getOption(threadData, _new_cref), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 4))), _OMC_LIT91));

      omc_Pointer_update(threadData, _var_to_keep, omc_NBVariable_setStartAttribute(threadData, omc_Pointer_access(threadData, _var_to_keep), omc_Util_getOption(threadData, _new_start), 1 /* true */));

      omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), omc_Util_getOption(threadData, _new_start), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 4))));
    }
  }

  _new_tearingSelect = omc_NBAlias_chooseTearingSelect(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 8))));

  if((isSome(_new_tearingSelect) && isSome(omc_UnorderedMap_get(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 8)))))))
  {
    omc_Pointer_update(threadData, _var_to_keep, omc_NBVariable_setTearingSelect(threadData, omc_Pointer_access(threadData, _var_to_keep), mmc_unbox_integer(omc_Util_getOption(threadData, _new_tearingSelect)), 1 /* true */));

    omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var_to_keep), omc_Util_getOption(threadData, _new_tearingSelect), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrcollector), 8))));
  }

  omc_Pointer_update(threadData, _var_to_keep_ptr, _var_to_keep);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_createReplacementRules(threadData_t *threadData, modelica_metatype _set, modelica_metatype __omcQ_24in_5Freplacements)
{
  modelica_metatype _replacements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _replacements = __omcQ_24in_5Freplacements;
  { /* match expression */
    modelica_metatype tmp18_1;
    tmp18_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 4)));
    {
      modelica_metatype _rhs = NULL;
      modelica_metatype _solved_eq = NULL;
      modelica_metatype _const_eq = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _alias_vars = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _var_lst = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _collector = NULL;
      modelica_metatype _var_to_keep = NULL;
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
      volatile mmc_switch_type tmp18;
      int tmp19;
      // _rhs has no default value.
      // _solved_eq has no default value.
      // _const_eq has no default value.
      // _eq has no default value.
      // _alias_vars has no default value.
      // _vars has no default value.
      // _var_lst has no default value.
      // _eqs has no default value.
      // _comps has no default value.
      // _collector has no default value.
      tmpMeta3 = mmc_mk_box1(4, &NFComponentRef_EMPTY__desc);
      tmpMeta4 = mmc_mk_box1(18, &NFType_ANY__desc);
      tmpMeta5 = mmc_mk_box1(3, &NFBinding_UNBOUND__desc);
      tmpMeta6 = mmc_mk_box1(4, &NFPrefixes_Replaceable_NOT__REPLACEABLE__desc);
      tmpMeta7 = mmc_mk_box10(3, &NFAttributes_ATTRIBUTES__desc, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(1), mmc_mk_integer(7), mmc_mk_integer(1), mmc_mk_integer(1), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), tmpMeta6, mmc_mk_boolean(0 /* false */));
      tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta10 = mmc_mk_box3(3, &SCode_Comment_COMMENT__desc, mmc_mk_none(), mmc_mk_none());
      tmpMeta11 = mmc_mk_box8(3, &SourceInfo_SOURCEINFO__desc, (modelica_string) mmc_emptystring, mmc_mk_boolean(0 /* false */), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_real(0.0));
      tmpMeta12 = mmc_mk_box1(35, &NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc);
      tmpMeta13 = mmc_mk_box17(3, &NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
      tmpMeta14 = mmc_mk_box3(3, &NFBackendExtension_Annotations_ANNOTATIONS__desc, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
      tmpMeta15 = mmc_mk_box8(3, &NFBackendExtension_BackendInfo_BACKEND__INFO__desc, tmpMeta12, tmpMeta13, tmpMeta14, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
      tmpMeta16 = mmc_mk_box11(3, &NFVariable_VARIABLE__desc, tmpMeta3, tmpMeta4, tmpMeta5, mmc_mk_integer(1), tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta15);
      _var_to_keep = omc_Pointer_create(threadData, omc_Pointer_create(threadData, tmpMeta16));
      tmp18 = 0;
      for (; tmp18 < 2; tmp18++) {
        switch (MMC_SWITCH_CAST(tmp18)) {
        case 0: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta25;
          if (optionNone(tmp18_1)) goto tmp17_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp18_1), 1));
          _const_eq = tmpMeta20;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp24;
            modelica_metatype _cr_loopVar = 0;
            modelica_metatype _cr;
            _cr_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2)));
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar19;
            while(1) {
              tmp24 = 1;
              if (!listEmpty(_cr_loopVar)) {
                _cr = MMC_CAR(_cr_loopVar);
                _cr_loopVar = MMC_CDR(_cr_loopVar);
                tmp24--;
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar18 = omc_NBVariable_getVarPointer(threadData, _cr, _OMC_LIT92);
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar19;
          }
          _vars = omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta21, 1 /* true */);

          tmpMeta25 = mmc_mk_cons(_const_eq, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))));
          _eqs = omc_NBEquation_EquationPointers_fromList(threadData, tmpMeta25);

          omc_NBCausalize_simple(threadData, _vars, _eqs, 2, _OMC_LIT93 ,&_comps);

          omc_NBReplacements_simple(threadData, _comps, _replacements);
          tmpMeta1 = _replacements;
          goto tmp17_done;
        }
        case 1: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp29;
            modelica_metatype _cr_loopVar = 0;
            modelica_metatype _cr;
            _cr_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2)));
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta28; /* defaultValue */
            tmp27 = &__omcQ_24tmpVar21;
            while(1) {
              tmp29 = 1;
              if (!listEmpty(_cr_loopVar)) {
                _cr = MMC_CAR(_cr_loopVar);
                _cr_loopVar = MMC_CDR(_cr_loopVar);
                tmp29--;
              }
              if (tmp29 == 0) {
                __omcQ_24tmpVar20 = omc_NBVariable_getVarPointer(threadData, _cr, _OMC_LIT94);
                *tmp27 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp27 = &MMC_CDR(*tmp27);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp27 = mmc_mk_nil();
            tmpMeta26 = __omcQ_24tmpVar21;
          }
          _alias_vars = omc_NBAlias_chooseVariableToKeep(threadData, tmpMeta26, _var_to_keep ,&_collector);

          _vars = omc_NBVariable_VariablePointers_fromList(threadData, _alias_vars, 0 /* false */);

          _eqs = omc_NBEquation_EquationPointers_fromList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))));

          omc_NBCausalize_simple(threadData, _vars, _eqs, 2, _OMC_LIT93 ,&_comps);

          if(omc_Flags_isSet(threadData, _OMC_LIT100))
          {
            tmpMeta30 = stringAppend(omc_StringUtil_headline__3(threadData, _OMC_LIT95),omc_NBVariable_pointerToString(threadData, omc_Pointer_access(threadData, _var_to_keep)));
            tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT96);
            fputs(MMC_STRINGDATA(tmpMeta31),stdout);
          }

          omc_NBReplacements_simple(threadData, _comps, _replacements);

          _var_lst = omc_NBVariable_VariablePointers_toList(threadData, _vars);

          if(omc_Flags_isSet(threadData, _OMC_LIT100))
          {
            tmpMeta32 = stringAppend(omc_StringUtil_headline__4(threadData, _OMC_LIT101),omc_NBAlias_AttributeCollector_toString(threadData, _collector, _OMC_LIT1));
            tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT15);
            fputs(MMC_STRINGDATA(tmpMeta33),stdout);
          }

          {
            modelica_metatype _var;
            for (tmpMeta34 = _var_lst; !listEmpty(tmpMeta34); tmpMeta34=MMC_CDR(tmpMeta34))
            {
              _var = MMC_CAR(tmpMeta34);
              _rhs = omc_UnorderedMap_getSafe(threadData, omc_NBVariable_getVarName(threadData, _var), _replacements, _OMC_LIT102);

              _eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NBVariable_toExpression(threadData, _var), _rhs, omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 0))), _OMC_LIT103, _OMC_LIT93, omc_NBEquation_default(threadData, 5, 0 /* false */, mmc_mk_none()));

              _solved_eq = omc_NBSolve_solveBody(threadData, omc_Pointer_access(threadData, _eq), omc_NBVariable_getVarName(threadData, omc_Pointer_access(threadData, _var_to_keep)), _OMC_LIT0, NULL, NULL, NULL);

              _collector = omc_NBAlias_AttributeCollector_fixValues(threadData, _collector, omc_NBVariable_getVarName(threadData, _var), _solved_eq);
            }
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT100))
          {
            tmpMeta36 = stringAppend(omc_StringUtil_headline__4(threadData, _OMC_LIT104),omc_NBAlias_AttributeCollector_toString(threadData, _collector, _OMC_LIT1));
            tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT15);
            fputs(MMC_STRINGDATA(tmpMeta37),stdout);
          }

          omc_NBAlias_diffTearingSelect(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 8))), _set);

          omc_NBAlias_stateSelectAlways(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 7))), _set);

          omc_NBAlias_checkNominalThreshold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 6))), _set);

          omc_NBAlias_setNewAttributes(threadData, _var_to_keep, _collector, _set);

          if(omc_Flags_isSet(threadData, _OMC_LIT100))
          {
            tmpMeta38 = stringAppend(omc_StringUtil_headline__3(threadData, _OMC_LIT105),omc_NBVariable_pointerToString(threadData, omc_Pointer_access(threadData, _var_to_keep)));
            tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT15);
            fputs(MMC_STRINGDATA(tmpMeta39),stdout);
          }
          tmpMeta1 = _replacements;
          goto tmp17_done;
        }
        }
        goto tmp17_end;
        tmp17_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp17_done;
      tmp17_done:;
    }
  }
  _replacements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _replacements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_getSimpleSets(threadData_t *threadData, modelica_metatype _map, modelica_integer _size)
{
  modelica_metatype _sets = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cref_marks = NULL;
  modelica_metatype _entry_lst = NULL;
  modelica_metatype _simple_cref = NULL;
  modelica_metatype _set_ptr = NULL;
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sets = tmpMeta1;
  _cref_marks = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, _size);
  // _entry_lst has no default value.
  // _simple_cref has no default value.
  // _set_ptr has no default value.
  // _set has no default value.
  _entry_lst = omc_UnorderedMap_toList(threadData, _map);

  {
    modelica_metatype _entry;
    for (tmpMeta2 = _entry_lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _entry = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _entry;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _simple_cref = tmpMeta4;
      _set_ptr = tmpMeta5;

      if((!omc_UnorderedSet_contains(threadData, _simple_cref, _cref_marks)))
      {
        _set = omc_Pointer_access(threadData, _set_ptr);

        tmpMeta6 = mmc_mk_cons(_set, _sets);
        _sets = tmpMeta6;

        {
          modelica_metatype _cr;
          for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
          {
            _cr = MMC_CAR(tmpMeta7);
            { /* matchcontinue expression */
              {
                volatile mmc_switch_type tmp10;
                int tmp11;
                tmp10 = 0;
                MMC_TRY_INTERNAL(mmc_jumper)
                tmp9_top:
                threadData->mmc_jumper = &new_mmc_jumper;
                for (; tmp10 < 2; tmp10++) {
                  switch (MMC_SWITCH_CAST(tmp10)) {
                  case 0: {
                    /* Pattern matching succeeded */
                    omc_UnorderedSet_addUnique(threadData, _cr, _cref_marks);
                    goto tmp9_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta12;
                    modelica_metatype tmpMeta13;
                    modelica_metatype tmpMeta14;
                    /* Pattern matching succeeded */
                    tmpMeta13 = stringAppend(_OMC_LIT106,omc_NFComponentRef_toString(threadData, _cr));
                    tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT107);
                    tmpMeta12 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
                    omc_Error_addMessage(threadData, _OMC_LIT30, tmpMeta12);
                    goto tmp9_done;
                  }
                  }
                  goto tmp9_end;
                  tmp9_end: ;
                }
                goto goto_8;
                tmp9_done:
                (void)tmp10;
                MMC_RESTORE_INTERNAL(mmc_jumper);
                goto tmp9_done2;
                goto_8:;
                MMC_CATCH_INTERNAL(mmc_jumper);
                if (++tmp10 < 2) {
                  goto tmp9_top;
                }
                MMC_THROW_INTERNAL();
                tmp9_done2:;
              }
            }
            ;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _sets;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_getSimpleSets(threadData_t *threadData, modelica_metatype _map, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _sets = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_size);
  _sets = omc_NBAlias_getSimpleSets(threadData, _map, tmp1);
  /* skip box _sets; list<NBAlias.AliasSet> */
  return _sets;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBAlias_checkOp(threadData_t *threadData, modelica_metatype _op, modelica_integer _cref_num)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _op;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (1 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (2 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (26 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (29 != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          if (3 != tmp15) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_cref_num < ((modelica_integer) 2));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          if (4 != tmp17) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_cref_num < ((modelica_integer) 2));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = (_cref_num == ((modelica_integer) 0));
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_checkOp(threadData_t *threadData, modelica_metatype _op, modelica_metatype _cref_num)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_cref_num);
  _b = omc_NBAlias_checkOp(threadData, _op, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBAlias_isSimpleExp(threadData_t *threadData, modelica_metatype _exp, modelica_boolean __omcQ_24in_5Fsimple, modelica_integer *out_num_cref)
{
  modelica_boolean _simple;
  modelica_integer _num_cref;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _simple = __omcQ_24in_5Fsimple;
  _num_cref = ((modelica_integer) 0);
  if((!_simple))
  {
    goto _return;
  }

  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_integer _num_cref_tmp;
      modelica_integer _op;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _num_cref_tmp has no default value.
      // _op has no default value.
      tmp4 = 0;
      for (; tmp4 < 12; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmp1_c1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmp1_c1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmp1_c1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmp1_c1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmp1_c1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,23,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
          __omcQ_24in_5Fsimple = 1 /* true */;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _simple = omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), 1 /* true */ ,&_num_cref);

          _simple = (_simple?omc_NBAlias_checkOp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _num_cref):0 /* false */);
          tmp1_c0 = _simple;
          tmp1_c1 = _num_cref;
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _simple = omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), 1 /* true */ ,&_num_cref);

          _simple = (_simple?omc_NBAlias_checkOp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _num_cref):0 /* false */);
          tmp1_c0 = _simple;
          tmp1_c1 = _num_cref;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _op = tmp8  /* pattern as ty=enumeration(ADD, SUB, MUL, DIV, POW, ADD_EW, SUB_EW, MUL_EW, DIV_EW, POW_EW, ADD_SCALAR_ARRAY, ADD_ARRAY_SCALAR, SUB_SCALAR_ARRAY, SUB_ARRAY_SCALAR, MUL_SCALAR_ARRAY, MUL_ARRAY_SCALAR, MUL_VECTOR_MATRIX, MUL_MATRIX_VECTOR, SCALAR_PRODUCT, MATRIX_PRODUCT, DIV_SCALAR_ARRAY, DIV_ARRAY_SCALAR, POW_SCALAR_ARRAY, POW_ARRAY_SCALAR, POW_MATRIX, UMINUS, AND, OR, NOT, LESS, LESSEQ, GREATER, GREATEREQ, EQUAL, NEQUAL, USERDEFINED) */;
          /* Pattern matching succeeded */
          _simple = omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), 1 /* true */ ,&_num_cref);

          if((((modelica_integer)_op == 4) && (_num_cref != ((modelica_integer) 0))))
          {
            _simple = 0 /* false */;

            goto _return;
          }

          _simple = omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _simple ,&_num_cref_tmp);

          _num_cref = _num_cref + _num_cref_tmp;

          _simple = (_simple?omc_NBAlias_checkOp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _num_cref):0 /* false */);
          tmp1_c0 = _simple;
          tmp1_c1 = _num_cref;
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _simple = omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), 1 /* true */ ,&_num_cref);

          _simple = omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _simple ,&_num_cref_tmp);

          _num_cref = _num_cref + _num_cref_tmp;

          _simple = (_simple?omc_NBAlias_checkOp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _num_cref):0 /* false */);
          tmp1_c0 = _simple;
          tmp1_c1 = _num_cref;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          _op = tmp11  /* pattern as ty=enumeration(ADD, SUB, MUL, DIV, POW, ADD_EW, SUB_EW, MUL_EW, DIV_EW, POW_EW, ADD_SCALAR_ARRAY, ADD_ARRAY_SCALAR, SUB_SCALAR_ARRAY, SUB_ARRAY_SCALAR, MUL_SCALAR_ARRAY, MUL_ARRAY_SCALAR, MUL_VECTOR_MATRIX, MUL_MATRIX_VECTOR, SCALAR_PRODUCT, MATRIX_PRODUCT, DIV_SCALAR_ARRAY, DIV_ARRAY_SCALAR, POW_SCALAR_ARRAY, POW_ARRAY_SCALAR, POW_MATRIX, UMINUS, AND, OR, NOT, LESS, LESSEQ, GREATER, GREATEREQ, EQUAL, NEQUAL, USERDEFINED) */;
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _arg = MMC_CAR(tmpMeta12);
              _simple = omc_NBAlias_isSimpleExp(threadData, _arg, _simple ,&_num_cref_tmp);

              if((!_simple))
              {
                goto _return;
              }

              _num_cref = _num_cref + _num_cref_tmp;
            }
          }

          if((((modelica_integer)_op == 3) && (_num_cref != ((modelica_integer) 0))))
          {
            _simple = 0 /* false */;

            goto _return;
          }

          {
            modelica_metatype _arg;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _arg = MMC_CAR(tmpMeta14);
              _simple = omc_NBAlias_isSimpleExp(threadData, _arg, _simple ,&_num_cref_tmp);

              if((!_simple))
              {
                goto _return;
              }

              _num_cref = _num_cref + _num_cref_tmp;
            }
          }

          _simple = (_simple?omc_NBAlias_checkOp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _num_cref):0 /* false */);
          tmp1_c0 = _simple;
          tmp1_c1 = _num_cref;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1_c0 = 0 /* false */;
          tmp1_c1 = _num_cref;
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
  _simple = tmp1_c0;
  _num_cref = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_num_cref) { *out_num_cref = _num_cref; }
  return _simple;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_isSimpleExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fsimple, modelica_metatype *out_num_cref)
{
  modelica_integer tmp1;
  modelica_integer _num_cref;
  modelica_boolean _simple;
  modelica_metatype out_simple;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fsimple);
  _simple = omc_NBAlias_isSimpleExp(threadData, _exp, tmp1, &_num_cref);
  out_simple = mmc_mk_icon(_simple);
  if (out_num_cref) { *out_num_cref = mmc_mk_icon(_num_cref); }
  return out_simple;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBAlias_findCrefsFail(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _cont;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cont has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 23: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 25: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 15: {
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _cont = tmp1;
  _return: OMC_LABEL_UNUSED
  return _cont;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_findCrefsFail(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _cont;
  modelica_metatype out_cont;
  _cont = omc_NBAlias_findCrefsFail(threadData, _exp);
  out_cont = mmc_mk_icon(_cont);
  return out_cont;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_findCrefs(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Ftpl)
{
  modelica_metatype _tpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tpl = __omcQ_24in_5Ftpl;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tpl), 2)))))) goto tmp3_end;
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NBVariable_isParamOrConst(threadData, omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT109)) || omc_NFComponentRef_isTime(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))))) goto tmp3_end;
          tmpMeta1 = _tpl;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!isSome(omc_NBVariable_getParent(threadData, omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT110)))) goto tmp3_end;
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tpl), 3)))) < ((modelica_integer) 2)) && (!omc_NFComponentRef_hasSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))))) goto tmp3_end;
          tmpMeta7 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tpl), 5))));
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tpl), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = tmpMeta7;
          _tpl = tmpMeta6;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tpl), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tpl), 3)))));
          _tpl = tmpMeta8;
          tmpMeta1 = _tpl;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBAlias_findCrefsFail(threadData, _exp)) goto tmp3_end;
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _tpl;
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
  _tpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_findSimpleEquation(threadData_t *threadData, modelica_metatype _eq_ptr, modelica_metatype __omcQ_24in_5Fmap, modelica_boolean *out_delete)
{
  modelica_metatype _map = NULL;
  modelica_boolean _delete;
  modelica_metatype _eq = NULL;
  modelica_metatype _crefTpl = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp6_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _map = __omcQ_24in_5Fmap;
  _delete = 0 /* false */;
  // _eq has no default value.
  _crefTpl = _OMC_LIT111;
  _eq = omc_Pointer_access(threadData, _eq_ptr);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 1 /* true */, NULL) && omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */, NULL))) goto tmp3_end;
          _crefTpl = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), boxvar_NBAlias_findCrefs, _crefTpl);
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_NBAlias_findCrefs, _crefTpl);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 1 /* true */, NULL) && omc_NBAlias_isSimpleExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */, NULL))) goto tmp3_end;
          _crefTpl = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), boxvar_NBAlias_findCrefs, _crefTpl);
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_NBAlias_findCrefs, _crefTpl);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _crefTpl;
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
  _crefTpl = tmpMeta1;

  
  
  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _crefTpl;
    {
      modelica_metatype _set_ptr = NULL;
      modelica_metatype _set1_ptr = NULL;
      modelica_metatype _set2_ptr = NULL;
      modelica_metatype _set = NULL;
      modelica_metatype _set1 = NULL;
      modelica_metatype _set2 = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _cr2 = NULL;
      volatile mmc_switch_type tmp9;
      int tmp10;
      // _set_ptr has no default value.
      // _set1_ptr has no default value.
      // _set2_ptr has no default value.
      // _set has no default value.
      // _set1 has no default value.
      // _set2 has no default value.
      // _cr1 has no default value.
      // _cr2 has no default value.
      tmp9 = 0;
      for (; tmp9 < 3; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
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
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 5));
          if (listEmpty(tmpMeta11)) goto tmp8_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (!listEmpty(tmpMeta13)) goto tmp8_end;
          _cr1 = tmpMeta12;
          /* Pattern matching succeeded */
          if((!omc_UnorderedMap_contains(threadData, _cr1, _map)))
          {
            _set = _OMC_LIT114;

            tmpMeta15 = mmc_mk_cons(_cr1, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = tmpMeta15;
            _set = tmpMeta14;

            tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[4] = mmc_mk_some(omc_Pointer_create(threadData, _eq));
            _set = tmpMeta16;

            omc_UnorderedMap_add(threadData, _cr1, omc_Pointer_create(threadData, _set), _map);
          }
          else
          {
            _set_ptr = omc_UnorderedMap_getOrFail(threadData, _cr1, _map);

            _set = omc_Pointer_access(threadData, _set_ptr);

            if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 4)))))
            {
              tmpMeta18 = stringAppend(_OMC_LIT112,omc_NBEquation_Equation_toString(threadData, _eq, _OMC_LIT1));
              tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT113);
              tmpMeta20 = stringAppend(tmpMeta19,omc_NBAlias_AliasSet_toString(threadData, _set));
              tmpMeta17 = mmc_mk_cons(tmpMeta20, MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addMessage(threadData, _OMC_LIT30, tmpMeta17);

              goto goto_7;
            }
            else
            {
              tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[4] = mmc_mk_some(omc_Pointer_create(threadData, _eq));
              _set = tmpMeta21;

              omc_Pointer_update(threadData, _set_ptr, _set);
            }
          }
          tmpMeta[0+0] = _map;
          tmp6_c1 = 1 /* true */;
          goto tmp8_done;
        }
        case 1: {
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
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 5));
          if (listEmpty(tmpMeta22)) goto tmp8_end;
          tmpMeta23 = MMC_CAR(tmpMeta22);
          tmpMeta24 = MMC_CDR(tmpMeta22);
          if (listEmpty(tmpMeta24)) goto tmp8_end;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          if (!listEmpty(tmpMeta26)) goto tmp8_end;
          _cr1 = tmpMeta23;
          _cr2 = tmpMeta25;
          /* Pattern matching succeeded */
          if((omc_UnorderedMap_contains(threadData, _cr1, _map) && omc_UnorderedMap_contains(threadData, _cr2, _map)))
          {
            _set1_ptr = omc_UnorderedMap_getOrFail(threadData, _cr1, _map);

            _set2_ptr = omc_UnorderedMap_getOrFail(threadData, _cr2, _map);

            _set1 = omc_Pointer_access(threadData, _set1_ptr);

            _set2 = omc_Pointer_access(threadData, _set2_ptr);

            _set = _OMC_LIT114;

            if(referenceEq(_set1_ptr, _set2_ptr))
            {
              tmpMeta28 = stringAppend(_OMC_LIT116,omc_NBEquation_Equation_toString(threadData, _eq, _OMC_LIT1));
              tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT96);
              tmpMeta30 = stringAppend(tmpMeta29,omc_NBAlias_AliasSet_toString(threadData, _set1));
              tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT15);
              tmpMeta32 = stringAppend(tmpMeta31,omc_NBAlias_AliasSet_toString(threadData, _set2));
              tmpMeta27 = mmc_mk_cons(tmpMeta32, MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addMessage(threadData, _OMC_LIT30, tmpMeta27);

              goto goto_7;
            }
            else
            {
              if((isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 4)))) && isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 4))))))
              {
                tmpMeta34 = stringAppend(_OMC_LIT115,omc_NBAlias_AliasSet_toString(threadData, _set1));
                tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT15);
                tmpMeta36 = stringAppend(tmpMeta35,omc_NBAlias_AliasSet_toString(threadData, _set2));
                tmpMeta33 = mmc_mk_cons(tmpMeta36, MMC_REFSTRUCTLIT(mmc_nil));
                omc_Error_addMessage(threadData, _OMC_LIT30, tmpMeta33);

                goto goto_7;
              }
              else
              {
                if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 4)))))
                {
                  tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(5));
                  memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 4)));
                  _set = tmpMeta37;
                }
                else
                {
                  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 4)))))
                  {
                    tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(5));
                    memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
                    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 4)));
                    _set = tmpMeta38;
                  }
                }
              }
            }

            if((omc_List_compareLength(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 3)))) > ((modelica_integer) 0)))
            {
              tmpMeta40 = mmc_mk_cons(omc_Pointer_create(threadData, _eq), listAppendDestroy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 3)))));
              tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[3] = tmpMeta40;
              _set = tmpMeta39;
            }
            else
            {
              tmpMeta42 = mmc_mk_cons(omc_Pointer_create(threadData, _eq), listAppendDestroy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 3)))));
              tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[3] = tmpMeta42;
              _set = tmpMeta41;
            }

            if((omc_List_compareLength(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2)))) > ((modelica_integer) 0)))
            {
              tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[2] = listAppendDestroy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))));
              _set = tmpMeta43;

              omc_Pointer_update(threadData, _set1_ptr, _set);

              {
                modelica_metatype _cr;
                for (tmpMeta44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2))); !listEmpty(tmpMeta44); tmpMeta44=MMC_CDR(tmpMeta44))
                {
                  _cr = MMC_CAR(tmpMeta44);
                  omc_UnorderedMap_add(threadData, _cr, _set1_ptr, _map);
                }
              }
            }
            else
            {
              tmpMeta46 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta46), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta46))[2] = listAppendDestroy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))));
              _set = tmpMeta46;

              omc_Pointer_update(threadData, _set2_ptr, _set);

              {
                modelica_metatype _cr;
                for (tmpMeta47 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))); !listEmpty(tmpMeta47); tmpMeta47=MMC_CDR(tmpMeta47))
                {
                  _cr = MMC_CAR(tmpMeta47);
                  omc_UnorderedMap_add(threadData, _cr, _set2_ptr, _map);
                }
              }
            }
          }
          else
          {
            if(omc_UnorderedMap_contains(threadData, _cr1, _map))
            {
              _set_ptr = omc_UnorderedMap_getOrFail(threadData, _cr1, _map);

              _set = omc_Pointer_access(threadData, _set_ptr);

              tmpMeta50 = mmc_mk_cons(_cr2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
              tmpMeta49 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta49), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta49))[2] = tmpMeta50;
              _set = tmpMeta49;

              tmpMeta52 = mmc_mk_cons(omc_Pointer_create(threadData, _eq), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))));
              tmpMeta51 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta51), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta51))[3] = tmpMeta52;
              _set = tmpMeta51;

              omc_Pointer_update(threadData, _set_ptr, _set);

              omc_UnorderedMap_add(threadData, _cr2, _set_ptr, _map);
            }
            else
            {
              if(omc_UnorderedMap_contains(threadData, _cr2, _map))
              {
                _set_ptr = omc_UnorderedMap_getOrFail(threadData, _cr2, _map);

                _set = omc_Pointer_access(threadData, _set_ptr);

                tmpMeta54 = mmc_mk_cons(_cr1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
                tmpMeta53 = MMC_TAGPTR(mmc_alloc_words(5));
                memcpy(MMC_UNTAGPTR(tmpMeta53), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta53))[2] = tmpMeta54;
                _set = tmpMeta53;

                tmpMeta56 = mmc_mk_cons(omc_Pointer_create(threadData, _eq), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))));
                tmpMeta55 = MMC_TAGPTR(mmc_alloc_words(5));
                memcpy(MMC_UNTAGPTR(tmpMeta55), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta55))[3] = tmpMeta56;
                _set = tmpMeta55;

                omc_Pointer_update(threadData, _set_ptr, _set);

                omc_UnorderedMap_add(threadData, _cr1, _set_ptr, _map);
              }
              else
              {
                _set = _OMC_LIT114;

                tmpMeta58 = mmc_mk_cons(_cr1, mmc_mk_cons(_cr2, MMC_REFSTRUCTLIT(mmc_nil)));
                tmpMeta57 = MMC_TAGPTR(mmc_alloc_words(5));
                memcpy(MMC_UNTAGPTR(tmpMeta57), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta57))[2] = tmpMeta58;
                _set = tmpMeta57;

                tmpMeta60 = mmc_mk_cons(omc_Pointer_create(threadData, _eq), MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta59 = MMC_TAGPTR(mmc_alloc_words(5));
                memcpy(MMC_UNTAGPTR(tmpMeta59), MMC_UNTAGPTR(_set), 5*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta59))[3] = tmpMeta60;
                _set = tmpMeta59;

                _set_ptr = omc_Pointer_create(threadData, _set);

                omc_UnorderedMap_add(threadData, _cr1, _set_ptr, _map);

                omc_UnorderedMap_add(threadData, _cr2, _set_ptr, _map);
              }
            }
          }
          tmpMeta[0+0] = _map;
          tmp6_c1 = 1 /* true */;
          goto tmp8_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _map;
          tmp6_c1 = 0 /* false */;
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _map = tmpMeta[0+0];
  _delete = tmp6_c1;
  _return: OMC_LABEL_UNUSED
  if (out_delete) { *out_delete = _delete; }
  return _map;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_findSimpleEquation(threadData_t *threadData, modelica_metatype _eq_ptr, modelica_metatype __omcQ_24in_5Fmap, modelica_metatype *out_delete)
{
  modelica_boolean _delete;
  modelica_metatype _map = NULL;
  _map = omc_NBAlias_findSimpleEquation(threadData, _eq_ptr, __omcQ_24in_5Fmap, &_delete);
  /* skip box _map; UnorderedMap<NFComponentRef,Pointer<NBAlias.AliasSet>> */
  if (out_delete) { *out_delete = mmc_mk_icon(_delete); }
  return _map;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_aliasCausalize(threadData_t *threadData, modelica_metatype _variables, modelica_metatype _equations, modelica_string _context, modelica_metatype *out_newEquations)
{
  modelica_metatype _replacements = NULL;
  modelica_metatype _newEquations = NULL;
  modelica_integer _size;
  modelica_integer _setIdx;
  modelica_metatype _map = NULL;
  modelica_metatype _sets = NULL;
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
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replacements has no default value.
  // _newEquations has no default value.
  // _size has no default value.
  _setIdx = ((modelica_integer) 1);
  // _map has no default value.
  // _sets has no default value.
  _size = omc_NBVariable_VariablePointers_size(threadData, _variables);

  _map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, _size);

  _newEquations = omc_NBEquation_EquationPointers_foldRemovePtr(threadData, _equations, boxvar_NBAlias_findSimpleEquation, _map ,&_map);

  _sets = omc_NBAlias_getSimpleSets(threadData, _map, _size);

  if(omc_Flags_isSet(threadData, _OMC_LIT25))
  {
    tmpMeta1 = stringAppend(_OMC_LIT117,_context);
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT118);
    tmpMeta3 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta2),_OMC_LIT15);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);

    if(listEmpty(_sets))
    {
      tmpMeta4 = stringAppend(_OMC_LIT121,_context);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT122);
      fputs(MMC_STRINGDATA(tmpMeta5),stdout);
    }
    else
    {
      {
        modelica_metatype _set;
        for (tmpMeta6 = _sets; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
        {
          _set = MMC_CAR(tmpMeta6);
          tmpMeta7 = stringAppend(_OMC_LIT119,intString(_setIdx));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT120);
          tmpMeta9 = stringAppend(omc_StringUtil_headline__4(threadData, tmpMeta8),omc_NBAlias_AliasSet_toString(threadData, _set));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT15);
          fputs(MMC_STRINGDATA(tmpMeta10),stdout);

          _setIdx = ((modelica_integer) 1) + _setIdx;
        }
      }
    }
  }

  _replacements = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, _size);

  {
    modelica_metatype _set;
    for (tmpMeta12 = _sets; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _set = MMC_CAR(tmpMeta12);
      _replacements = omc_NBAlias_createReplacementRules(threadData, _set, _replacements);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_newEquations) { *out_newEquations = _newEquations; }
  return _replacements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_aliasClocks(threadData_t *threadData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype *out_eqData)
{
  modelica_metatype _varData = NULL;
  modelica_metatype _eqData = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _varData = __omcQ_24in_5FvarData;
  _eqData = __omcQ_24in_5FeqData;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _varData;
    tmp4_2 = _eqData;
    {
      modelica_metatype _replacements = NULL;
      modelica_metatype _newEquations = NULL;
      modelica_metatype _alias_vars = NULL;
      modelica_metatype _auxEquations = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _replacements has no default value.
      // _newEquations has no default value.
      // _alias_vars has no default value.
      // _auxEquations has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,23) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,9) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _replacements = omc_NBAlias_aliasCausalize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 15))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 6))), _OMC_LIT123 ,&_newEquations);

          _replacements = omc_NBAlias_checkReplacements(threadData, _replacements, _eqData ,&_auxEquations);

          _eqData = omc_NBReplacements_applySimple(threadData, _eqData, _varData, _replacements ,&_varData);

          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp9;
            modelica_metatype _cref_loopVar = 0;
            modelica_metatype _cref;
            _cref_loopVar = omc_UnorderedMap_keyList(threadData, _replacements);
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar23;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_cref_loopVar)) {
                _cref = MMC_CAR(_cref_loopVar);
                _cref_loopVar = MMC_CDR(_cref_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar22 = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT124);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar23;
          }
          _alias_vars = tmpMeta6;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[6] = omc_NBEquation_EquationPointers_compress(threadData, _newEquations);
          _eqData = tmpMeta10;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[15] = omc_NBVariable_VariablePointers_removeList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 15))));
          _varData = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[7] = omc_NBVariable_VariablePointers_addList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 7))));
          _varData = tmpMeta12;
          tmpMeta[0+0] = _varData;
          tmpMeta[0+1] = omc_NBEquation_EqData_addUntypedList(threadData, _eqData, _auxEquations, 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT30, _OMC_LIT126);
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
  _varData = tmpMeta[0+0];
  _eqData = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_eqData) { *out_eqData = _eqData; }
  return _varData;
}

PROTECTED_FUNCTION_STATIC void omc_NBAlias_dumpReplacements(threadData_t *threadData, modelica_metatype _replacements, modelica_metatype _auxEquations)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(omc_NBReplacements_simpleToString(threadData, _replacements),_OMC_LIT15);
  fputs(MMC_STRINGDATA(tmpMeta1),stdout);

  if((!listEmpty(_auxEquations)))
  {
    fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, _OMC_LIT127)),stdout);

    {
      modelica_metatype _eqPtr;
      for (tmpMeta2 = _auxEquations; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _eqPtr = MMC_CAR(tmpMeta2);
        tmpMeta3 = stringAppend(_OMC_LIT128,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, _eqPtr), _OMC_LIT1));
        tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT15);
        fputs(MMC_STRINGDATA(tmpMeta4),stdout);
      }
    }

    fputs(MMC_STRINGDATA(_OMC_LIT15),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_filterPre(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _acc)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      modelica_metatype _call = NULL;
      modelica_metatype _cref = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _call has no default value.
      // _cref has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,13,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,2,6) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 6));
          if (listEmpty(tmpMeta6)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (!listEmpty(tmpMeta8)) goto tmp2_end;
          
          _call = tmpMeta5;
          _cref = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT129, 1 /* true */, 0 /* false */), _OMC_LIT130))) goto tmp2_end;
          omc_UnorderedSet_add(threadData, _cref, _acc);
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
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBAlias_isValidReplacement(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _exp, modelica_metatype _exceptionSet)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 1 /* true */;
  if(omc_UnorderedSet_contains(threadData, _cref, _exceptionSet))
  {
    _b = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBAlias_isValidReplacement(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _exp, modelica_metatype _exceptionSet)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBAlias_isValidReplacement(threadData, _cref, _exp, _exceptionSet);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

static modelica_metatype closure4_NBAlias_filterPre(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBAlias_filterPre(thData, $in_exp, acc);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_checkReplacements(threadData_t *threadData, modelica_metatype _replacements, modelica_metatype _eqData, modelica_metatype *out_auxEquations)
{
  modelica_metatype _newReplacements = NULL;
  modelica_metatype _auxEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _exceptionSet = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _eqPtr = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _newReplacements = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _auxEquations = tmpMeta1;
  _exceptionSet = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  // _cref has no default value.
  // _exp has no default value.
  // _eqPtr has no default value.
  // _attr has no default value.
  tmpMeta2 = mmc_mk_box1(0, _exceptionSet);
  omc_NBEquation_EqData_mapExp(threadData, _eqData, (modelica_fnptr) mmc_mk_box2(0,closure4_NBAlias_filterPre,tmpMeta2));

  {
    modelica_metatype _keyValueTpl;
    for (tmpMeta3 = omc_UnorderedMap_toList(threadData, _replacements); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _keyValueTpl = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _keyValueTpl;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      _cref = tmpMeta5;
      _exp = tmpMeta6;

      if(omc_NBAlias_isValidReplacement(threadData, _cref, _exp, _exceptionSet))
      {
        omc_UnorderedMap_add(threadData, _cref, _exp, _newReplacements);
      }
      else
      {
        _attr = omc_NBackendDAE_lowerEquationAttributes(threadData, omc_NFComponentRef_getSubscriptedType(threadData, _cref, 0 /* false */), 0 /* false */);

        _eqPtr = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _cref, 0 /* false */), _exp, omc_NBEquation_EqData_getUniqueIndex(threadData, _eqData), _OMC_LIT131, _OMC_LIT93, _attr);

        tmpMeta7 = mmc_mk_cons(_eqPtr, _auxEquations);
        _auxEquations = tmpMeta7;
      }
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT25))
  {
    omc_NBAlias_dumpReplacements(threadData, _newReplacements, _auxEquations);
  }
  _return: OMC_LABEL_UNUSED
  if (out_auxEquations) { *out_auxEquations = _auxEquations; }
  return _newReplacements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBAlias_aliasDefault(threadData_t *threadData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype *out_eqData)
{
  modelica_metatype _varData = NULL;
  modelica_metatype _eqData = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _varData = __omcQ_24in_5FvarData;
  _eqData = __omcQ_24in_5FeqData;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _varData;
    tmp4_2 = _eqData;
    {
      modelica_metatype _replacements = NULL;
      modelica_metatype _new_iters = NULL;
      modelica_metatype _newEquations = NULL;
      modelica_metatype _alias_vars = NULL;
      modelica_metatype _const_vars = NULL;
      modelica_metatype _non_trivial_alias = NULL;
      modelica_metatype _non_trivial_eqs = NULL;
      modelica_metatype _auxEquations = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _replacements has no default value.
      _new_iters = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));
      // _newEquations has no default value.
      // _alias_vars has no default value.
      // _const_vars has no default value.
      // _non_trivial_alias has no default value.
      // _non_trivial_eqs has no default value.
      // _auxEquations has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
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
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,23) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,9) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _replacements = omc_NBAlias_aliasCausalize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 4))), _OMC_LIT132 ,&_newEquations);

          _replacements = omc_NBAlias_checkReplacements(threadData, _replacements, _eqData ,&_auxEquations);

          _eqData = omc_NBReplacements_applySimple(threadData, _eqData, _varData, _replacements ,&_varData);

          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp9;
            modelica_metatype _cref_loopVar = 0;
            modelica_metatype _cref;
            _cref_loopVar = omc_UnorderedMap_keyList(threadData, _replacements);
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar25;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_cref_loopVar)) {
                _cref = MMC_CAR(_cref_loopVar);
                _cref_loopVar = MMC_CDR(_cref_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar24 = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT133);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar25;
          }
          _alias_vars = tmpMeta6;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = omc_NBEquation_EquationPointers_compress(threadData, _newEquations);
          _eqData = tmpMeta10;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = omc_NBEquation_EquationPointers_compress(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 3))));
          _eqData = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[5] = omc_NBEquation_EquationPointers_compress(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 5))));
          _eqData = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[7] = omc_NBEquation_EquationPointers_compress(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 7))));
          _eqData = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = omc_NBVariable_VariablePointers_removeList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 3))));
          _varData = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[10] = omc_NBVariable_VariablePointers_removeList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 10))));
          _varData = tmpMeta15;

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[16] = omc_NBVariable_VariablePointers_removeList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 16))));
          _varData = tmpMeta16;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[11] = omc_NBVariable_VariablePointers_removeList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 11))));
          _varData = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[15] = omc_NBVariable_VariablePointers_removeList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 15))));
          _varData = tmpMeta18;

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[5] = omc_NBVariable_VariablePointers_removeList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 5))));
          _varData = tmpMeta19;

          _non_trivial_alias = omc_List_splitOnTrue(threadData, _alias_vars, boxvar_NBVariable_hasNonTrivialAliasBinding ,&_alias_vars);

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[2] = omc_NBVariable_VariablePointers_removeList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 2))));
          _varData = tmpMeta20;

          _const_vars = omc_List_splitOnTrue(threadData, _alias_vars, boxvar_NBVariable_hasConstOrParamAliasBinding ,&_alias_vars);

          {
            modelica_metatype _var;
            for (tmpMeta21 = _const_vars; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
            {
              _var = MMC_CAR(tmpMeta21);
              omc_NBVariable_setVarKind(threadData, _var, _OMC_LIT134);

              omc_NBVariable_setBindingAsStartAndFix(threadData, _var, 1 /* true */);
            }
          }

          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[19] = omc_NBVariable_VariablePointers_addList(threadData, _const_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 19))));
          _varData = tmpMeta23;

          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[4] = omc_NBVariable_VariablePointers_addList(threadData, _const_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 4))));
          _varData = tmpMeta24;

          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[7] = omc_NBVariable_VariablePointers_addList(threadData, _alias_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 7))));
          _varData = tmpMeta25;

          tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[8] = omc_NBVariable_VariablePointers_addList(threadData, _non_trivial_alias, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 8))));
          _varData = tmpMeta26;

          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp28;
            modelica_metatype tmpMeta29;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp30;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = _non_trivial_alias;
            tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta29; /* defaultValue */
            tmp28 = &__omcQ_24tmpVar27;
            while(1) {
              tmp30 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp30--;
              }
              if (tmp30 == 0) {
                __omcQ_24tmpVar26 = omc_NBEquation_Equation_generateBindingEquation(threadData, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), 0 /* false */, _new_iters);
                *tmp28 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp28 = &MMC_CDR(*tmp28);
              } else if (tmp30 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp28 = mmc_mk_nil();
            tmpMeta27 = __omcQ_24tmpVar27;
          }
          _non_trivial_eqs = tmpMeta27;

          tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[10] = omc_NBEquation_EquationPointers_addList(threadData, _non_trivial_eqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 10))));
          _eqData = tmpMeta31;
          tmpMeta[0+0] = omc_NBVariable_VarData_addTypedList(threadData, _varData, omc_UnorderedSet_toList(threadData, _new_iters), 9);
          tmpMeta[0+1] = omc_NBEquation_EqData_addUntypedList(threadData, _eqData, _auxEquations, 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT30, _OMC_LIT136);
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
  _varData = tmpMeta[0+0];
  _eqData = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_eqData) { *out_eqData = _eqData; }
  return _varData;
}

DLLDirection
modelica_string omc_NBAlias_AliasSet_toString(threadData_t *threadData, modelica_metatype _set)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 4)))))
  {
    tmpMeta1 = stringAppend(_OMC_LIT138,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 4))))), _OMC_LIT1));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT15);
    _str = tmpMeta2;
  }
  else
  {
    _str = _OMC_LIT137;
  }

  if(listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3)))))
  {
    tmpMeta3 = stringAppend(_str,_OMC_LIT140);
    _str = tmpMeta3;
  }
  else
  {
    tmpMeta4 = stringAppend(_str,_OMC_LIT139);
    _str = tmpMeta4;

    {
      modelica_metatype _eq;
      for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
      {
        _eq = MMC_CAR(tmpMeta5);
        tmpMeta6 = stringAppend(_str,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, _eq), _OMC_LIT128));
        tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT15);
        _str = tmpMeta7;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_fnptr omc_NBAlias_getModule(threadData_t *threadData)
{
  modelica_fnptr _func;
  modelica_string _flag = NULL;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flag = _OMC_LIT141;
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _flag;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT141), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBAlias_aliasDefault;
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
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  return _func;
}

DLLDirection
modelica_metatype omc_NBAlias_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  _func = (modelica_fnptr) omc_NBAlias_getModule(threadData);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bdae;
    {
      modelica_metatype _varData = NULL;
      modelica_metatype _eqData = NULL;
      int tmp4;
      // _varData has no default value.
      // _eqData has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          
          _varData = tmpMeta5;
          _eqData = tmpMeta6;
          /* Pattern matching succeeded */
          _varData = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _varData, _eqData ,&_eqData) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _varData, _eqData ,&_eqData);

          _varData = omc_NBAlias_aliasClocks(threadData, _varData, _eqData ,&_eqData);

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[10] = _varData;
          _bdae = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[11] = _eqData;
          _bdae = tmpMeta8;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _varData = tmpMeta9;
          _eqData = tmpMeta10;
          /* Pattern matching succeeded */
          _varData = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _varData, _eqData ,&_eqData) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _varData, _eqData ,&_eqData);

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_bdae), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = _varData;
          _bdae = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_bdae), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = _eqData;
          _bdae = tmpMeta12;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT30, _OMC_LIT143);
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}

