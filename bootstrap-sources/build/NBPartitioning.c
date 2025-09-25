#include "omc_simulation_settings.h"
#include "NBPartitioning.h"
#define _OMC_LIT0_data "$getPart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,8,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT0}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT6,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,0,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10,0.0);
#define _OMC_LIT10 MMC_REFREALLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT4,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,1) {_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,9) {&NFInstNode_InstNodeType_NORMAL__COMP__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT3,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT13,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,7,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT17,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT18,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,1,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT24,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,1) {_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT23,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT26,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,1) {_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "b"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,1,6) {&NFType_BOOLEAN__desc,}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT30,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,1) {_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT29,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT32,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,1) {_OMC_LIT33,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,17,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT35,_OMC_LIT36,_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "NBPartitioning.replaceClockedFunctionExp failed. "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,49,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data " is not of correct type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,24,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,1,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "NBPartitioning.replaceClockedFunctions failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,51,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,6,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "hold"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,4,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/NBackEnd/Modules/1_Main/NBPartitioning.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,88,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT47_6,1.758197185e9);
#define _OMC_LIT47_6 MMC_REFREALLIT(_OMC_LIT_STRUCT47_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(843)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(843)),MMC_IMMEDIATE(MMC_TAGFIXNUM(76)),_OMC_LIT47_6}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,33) {&NFExpression_EMPTY__desc,_OMC_LIT24}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "NBPartitioning.collectPartitioningCrefs failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,52,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,8,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT51_6,1.758197185e9);
#define _OMC_LIT51_6 MMC_REFREALLIT(_OMC_LIT_STRUCT51_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(818)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(824)),MMC_IMMEDIATE(MMC_TAGFIXNUM(18)),_OMC_LIT51_6}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT52_6,1.758197185e9);
#define _OMC_LIT52_6 MMC_REFREALLIT(_OMC_LIT_STRUCT52_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(829)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(831)),MMC_IMMEDIATE(MMC_TAGFIXNUM(17)),_OMC_LIT52_6}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT53_6,1.758197185e9);
#define _OMC_LIT53_6 MMC_REFREALLIT(_OMC_LIT_STRUCT53_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(816)),MMC_IMMEDIATE(MMC_TAGFIXNUM(12)),MMC_IMMEDIATE(MMC_TAGFIXNUM(816)),MMC_IMMEDIATE(MMC_TAGFIXNUM(30)),_OMC_LIT53_6}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "NBPartitioning.partitioningClocked ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,36,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data ") failed because the following variables could not be assigned to a partition:\n  {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,82,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,1,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,1,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "[dumpSynchronous] Partitioning result:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,38,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "dumpSynchronous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,15,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "Dumps information of the clock partitioning."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,44,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT60}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(104)),_OMC_LIT59,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT63_6,1.758197185e9);
#define _OMC_LIT63_6 MMC_REFREALLIT(_OMC_LIT_STRUCT63_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(562)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(562)),MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT63_6}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,1,13) {&NFBackendExtension_VariableKind_CLOCKED__desc,}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "### Cluster Variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,23,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "### Cluster Equation Identifiers:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,34,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT67_6,1.758197185e9);
#define _OMC_LIT67_6 MMC_REFREALLIT(_OMC_LIT_STRUCT67_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(488)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(488)),MMC_IMMEDIATE(MMC_TAGFIXNUM(77)),_OMC_LIT67_6}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "NBPartitioning.categorize failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,33,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,1) {_OMC_LIT68,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "clocked"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,7,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "default"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,7,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,4,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "NBPartitioning.main failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,27,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,1) {_OMC_LIT73,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT75_6,1.758197185e9);
#define _OMC_LIT75_6 MMC_REFREALLIT(_OMC_LIT_STRUCT75_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(377)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(377)),MMC_IMMEDIATE(MMC_TAGFIXNUM(95)),_OMC_LIT75_6}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT76_6,1.758197185e9);
#define _OMC_LIT76_6 MMC_REFREALLIT(_OMC_LIT_STRUCT76_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(357)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(357)),MMC_IMMEDIATE(MMC_TAGFIXNUM(97)),_OMC_LIT76_6}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT77_6,1.758197185e9);
#define _OMC_LIT77_6 MMC_REFREALLIT(_OMC_LIT_STRUCT77_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(364)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(364)),MMC_IMMEDIATE(MMC_TAGFIXNUM(82)),_OMC_LIT77_6}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT78_6,1.758197185e9);
#define _OMC_LIT78_6 MMC_REFREALLIT(_OMC_LIT_STRUCT78_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(365)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(365)),MMC_IMMEDIATE(MMC_TAGFIXNUM(80)),_OMC_LIT78_6}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "Clocked Info"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,12,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "Base Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,11,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,2,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,2,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "Sub Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,10,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "Sub to Base Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,18,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "Base to Sub Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,18,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "NBPartitioning.BClock.updateSubClock failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,48,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data " and "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,5,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data " because of incorrect clock types."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,34,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,3,3) {&NBBackendUtil_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,3,3) {&NBBackendUtil_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,4,4) {&NBPartitioning_BClock_SUB__CLOCK__desc,_OMC_LIT89,_OMC_LIT90,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "NBPartitioning.BClock.fromExp failed for exp with unhandled call: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,66,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "subSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,9,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "superSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,11,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "shiftSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,11,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "backSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,10,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "NBPartitioning.BClock.fromExp failed for exp with unhandled expression kind: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,77,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "NBPartitioning.BClock.create failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,40,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "NBPartitioning.BClock.toExp failed for non-base clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,55,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "NBPartitioning.BClock.convertSub failed for non-sub clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,59,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "NBPartitioning.BClock.convertBase failed for non-base clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,61,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "NBPartitioning.BClock.add failed for:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,38,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "SUB_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,10,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,1,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "UNKNOWN_CLOCK()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,15,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#include "util/modelica.h"

#include "NBPartitioning_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedWhen(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedWhen,2,0) {(void*) boxptr_NBPartitioning_replaceClockedWhen,0}};
#define boxvar_NBPartitioning_replaceClockedWhen MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedWhen)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctionExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedFunctionExp,2,0) {(void*) boxptr_NBPartitioning_replaceClockedFunctionExp,0}};
#define boxvar_NBPartitioning_replaceClockedFunctionExp MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedFunctionExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _held_crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedFunctions,2,0) {(void*) boxptr_NBPartitioning_replaceClockedFunctions,0}};
#define boxvar_NBPartitioning_replaceClockedFunctions MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedFunctions)
PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_addCrefToSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_addCrefToSet,2,0) {(void*) boxptr_NBPartitioning_addCrefToSet,0}};
#define boxvar_NBPartitioning_addCrefToSet MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_addCrefToSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_collectPartitioningCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _var_crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_collectPartitioningCrefs,2,0) {(void*) boxptr_NBPartitioning_collectPartitioningCrefs,0}};
#define boxvar_NBPartitioning_collectPartitioningCrefs MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_collectPartitioningCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningClocked,2,0) {(void*) boxptr_NBPartitioning_partitioningClocked,0}};
#define boxvar_NBPartitioning_partitioningClocked MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningClocked)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningNone,2,0) {(void*) boxptr_NBPartitioning_partitioningNone,0}};
#define boxvar_NBPartitioning_partitioningNone MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningNone)
PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_ClockedInfo_addSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_addSubClock,2,0) {(void*) boxptr_NBPartitioning_ClockedInfo_addSubClock,0}};
#define boxvar_NBPartitioning_ClockedInfo_addSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_addSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveSubClock,2,0) {(void*) boxptr_NBPartitioning_ClockedInfo_resolveSubClock,0}};
#define boxvar_NBPartitioning_ClockedInfo_resolveSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_updateSubClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdest, modelica_metatype _src);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_updateSubClock,2,0) {(void*) boxptr_NBPartitioning_BClock_updateSubClock,0}};
#define boxvar_NBPartitioning_BClock_updateSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_updateSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_baseClock);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_fromExp,2,0) {(void*) boxptr_NBPartitioning_BClock_fromExp,0}};
#define boxvar_NBPartitioning_BClock_fromExp MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_fromExp)
PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_BClock_create(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _exp, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_create,2,0) {(void*) boxptr_NBPartitioning_BClock_create,0}};
#define boxvar_NBPartitioning_BClock_create MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_create)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedWhen(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _cond = NULL;
      modelica_metatype _stmt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cond has no default value.
      // _stmt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          if (!optionNone(tmpMeta11)) goto tmp3_end;
          
          _cond = tmpMeta7;
          _stmt = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isClock(threadData, omc_NFExpression_typeOf(threadData, _cond))) goto tmp3_end;
          tmpMeta1 = omc_NBEquation_WhenStatement_toEquation(threadData, _stmt, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _eqn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctionExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _func = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _func has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFExpression_typeOf(threadData, _exp);
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta5, tmpMeta6, _OMC_LIT4, _OMC_LIT20, tmpMeta7, tmpMeta8, listArray(tmpMeta9), _OMC_LIT21, _OMC_LIT22);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT28, _OMC_LIT28, tmpMeta11, tmpMeta12, _OMC_LIT24, _OMC_LIT20, tmpMeta13, tmpMeta14, listArray(tmpMeta15), _OMC_LIT21, _OMC_LIT22);
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT34, _OMC_LIT34, tmpMeta17, tmpMeta18, _OMC_LIT30, _OMC_LIT20, tmpMeta19, tmpMeta20, listArray(tmpMeta21), _OMC_LIT21, _OMC_LIT22);
          tmpMeta1 = tmpMeta22;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          tmpMeta24 = stringAppend(_OMC_LIT40,omc_NFExpression_toString(threadData, _exp));
          tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT41);
          tmpMeta23 = mmc_mk_cons(tmpMeta25, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta23);
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
  _func = tmpMeta1;

  tmpMeta26 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta27 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, _func, tmpMeta26, omc_NFExpression_variability(threadData, _exp), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 8)))));
  _exp = tmpMeta27;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _held_crefs)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _arg = NULL;
      modelica_metatype _arg2 = NULL;
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _arg has no default value.
      // _arg2 has no default value.
      // _call has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp10_1;
            tmp10_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT42, 1 /* true */, 0 /* false */);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 3; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta32;
                  modelica_metatype tmpMeta33;
                  modelica_metatype tmpMeta34;
                  modelica_metatype tmpMeta35;
                  modelica_metatype tmpMeta36;
                  if (6 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT44), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  /* Pattern-matching assignment */
                  { /* match expression */
                    modelica_metatype tmp15_1;
                    tmp15_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
                    {
                      volatile mmc_switch_type tmp15;
                      int tmp16;
                      tmp15 = 0;
                      for (; tmp15 < 3; tmp15++) {
                        switch (MMC_SWITCH_CAST(tmp15)) {
                        case 0: {
                          modelica_metatype tmpMeta17;
                          modelica_metatype tmpMeta18;
                          modelica_metatype tmpMeta19;
                          modelica_metatype tmpMeta20;
                          modelica_metatype tmpMeta21;
                          if (listEmpty(tmp15_1)) goto tmp14_end;
                          tmpMeta17 = MMC_CAR(tmp15_1);
                          tmpMeta18 = MMC_CDR(tmp15_1);
                          if (listEmpty(tmpMeta18)) goto tmp14_end;
                          tmpMeta19 = MMC_CAR(tmpMeta18);
                          tmpMeta20 = MMC_CDR(tmpMeta18);
                          if (!listEmpty(tmpMeta20)) goto tmp14_end;
                          _arg = tmpMeta17;
                          _arg2 = tmpMeta19;
                          /* Pattern matching succeeded */
                          tmpMeta21 = mmc_mk_cons(_arg, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
                          tmpMeta12 = tmpMeta21;
                          goto tmp14_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta22;
                          modelica_metatype tmpMeta23;
                          modelica_metatype tmpMeta24;
                          modelica_metatype tmpMeta25;
                          modelica_metatype tmpMeta26;
                          modelica_metatype tmpMeta27;
                          modelica_metatype tmpMeta28;
                          if (listEmpty(tmp15_1)) goto tmp14_end;
                          tmpMeta22 = MMC_CAR(tmp15_1);
                          tmpMeta23 = MMC_CDR(tmp15_1);
                          if (listEmpty(tmpMeta23)) goto tmp14_end;
                          tmpMeta24 = MMC_CAR(tmpMeta23);
                          tmpMeta25 = MMC_CDR(tmpMeta23);
                          if (listEmpty(tmpMeta25)) goto tmp14_end;
                          tmpMeta26 = MMC_CAR(tmpMeta25);
                          tmpMeta27 = MMC_CDR(tmpMeta25);
                          if (!listEmpty(tmpMeta27)) goto tmp14_end;
                          _arg = tmpMeta24;
                          _arg2 = tmpMeta26;
                          /* Pattern matching succeeded */
                          tmpMeta28 = mmc_mk_cons(_arg, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
                          tmpMeta12 = tmpMeta28;
                          goto tmp14_done;
                        }
                        case 2: {
                          modelica_metatype tmpMeta29;
                          modelica_metatype tmpMeta30;
                          modelica_metatype tmpMeta31;
                          
                          /* Pattern matching succeeded */
                          tmpMeta30 = stringAppend(_OMC_LIT43,omc_NFExpression_toString(threadData, _exp));
                          tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT42);
                          tmpMeta29 = mmc_mk_cons(tmpMeta31, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta29);
                          goto goto_13;
                          goto tmp14_done;
                        }
                        }
                        goto tmp14_end;
                        tmp14_end: ;
                      }
                      goto goto_13;
                      goto_13:;
                      goto goto_8;
                      goto tmp14_done;
                      tmp14_done:;
                    }
                  }
                  tmpMeta32 = tmpMeta12;
                  if (listEmpty(tmpMeta32)) goto goto_8;
                  tmpMeta33 = MMC_CAR(tmpMeta32);
                  tmpMeta34 = MMC_CDR(tmpMeta32);
                  if (listEmpty(tmpMeta34)) goto goto_8;
                  tmpMeta35 = MMC_CAR(tmpMeta34);
                  tmpMeta36 = MMC_CDR(tmpMeta34);
                  if (!listEmpty(tmpMeta36)) goto goto_8;
                  _arg = tmpMeta33;
                  _arg2 = tmpMeta35;
                  tmpMeta7 = (omc_NFType_isClock(threadData, omc_NFExpression_typeOf(threadData, _arg2))?omc_NBPartitioning_replaceClockedFunctionExp(threadData, _arg):_exp);
                  goto tmp9_done;
                }
                case 1: {
                  modelica_metatype tmpMeta37;
                  if (4 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT45), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  { /* match expression */
                    modelica_metatype tmp40_1;
                    tmp40_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
                    {
                      volatile mmc_switch_type tmp40;
                      int tmp41;
                      tmp40 = 0;
                      for (; tmp40 < 2; tmp40++) {
                        switch (MMC_SWITCH_CAST(tmp40)) {
                        case 0: {
                          modelica_metatype tmpMeta42;
                          modelica_metatype tmpMeta43;
                          if (listEmpty(tmp40_1)) goto tmp39_end;
                          tmpMeta42 = MMC_CAR(tmp40_1);
                          tmpMeta43 = MMC_CDR(tmp40_1);
                          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,6,2) == 0) goto tmp39_end;
                          if (!listEmpty(tmpMeta43)) goto tmp39_end;
                          _arg = tmpMeta42;
                          /* Pattern matching succeeded */
                          omc_UnorderedSet_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), _held_crefs);
                          tmpMeta37 = _arg;
                          goto tmp39_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta44;
                          modelica_metatype tmpMeta45;
                          modelica_metatype tmpMeta46;
                          
                          /* Pattern matching succeeded */
                          tmpMeta45 = stringAppend(_OMC_LIT43,omc_NFExpression_toString(threadData, _exp));
                          tmpMeta46 = stringAppend(tmpMeta45,_OMC_LIT42);
                          tmpMeta44 = mmc_mk_cons(tmpMeta46, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta44);
                          goto goto_38;
                          goto tmp39_done;
                        }
                        }
                        goto tmp39_end;
                        tmp39_end: ;
                      }
                      goto goto_38;
                      goto_38:;
                      goto goto_8;
                      goto tmp39_done;
                      tmp39_done:;
                    }
                  }
                  _arg = tmpMeta37;
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctionExp(threadData, _arg);
                  goto tmp9_done;
                }
                case 2: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_2;
              goto tmp9_done;
              tmp9_done:;
            }
          }tmpMeta1 = tmpMeta7;
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_addCrefToSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _set)
{
  modelica_metatype _var_ptr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_ptr = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT47);
  if(omc_NBVariable_isState(threadData, _var_ptr))
  {
    omc_UnorderedSet_add(threadData, omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarDer, 0 /* false */), _set);
  }
  else
  {
    if(omc_NBVariable_isPrevious(threadData, _var_ptr))
    {
      omc_UnorderedSet_add(threadData, omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarPre, 0 /* false */), _set);
    }
    else
    {
      omc_UnorderedSet_add(threadData, _cref, _set);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_collectPartitioningCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _var_crefs)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _call = NULL;
      modelica_metatype _arg = NULL;
      modelica_metatype _children = NULL;
      modelica_metatype _stripped = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      // _arg has no default value.
      // _children has no default value.
      // _stripped has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp10_1;
            tmp10_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT42, 1 /* true */, 0 /* false */);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 4; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (8 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _OMC_LIT48;
                  goto tmp9_done;
                }
                case 1: {
                  if (4 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT45), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _OMC_LIT48;
                  goto tmp9_done;
                }
                case 2: {
                  modelica_metatype tmpMeta12;
                  if (6 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT44), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  { /* match expression */
                    modelica_metatype tmp15_1;
                    tmp15_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
                    {
                      volatile mmc_switch_type tmp15;
                      int tmp16;
                      tmp15 = 0;
                      for (; tmp15 < 3; tmp15++) {
                        switch (MMC_SWITCH_CAST(tmp15)) {
                        case 0: {
                          modelica_metatype tmpMeta17;
                          modelica_metatype tmpMeta18;
                          modelica_metatype tmpMeta19;
                          modelica_metatype tmpMeta20;
                          if (listEmpty(tmp15_1)) goto tmp14_end;
                          tmpMeta17 = MMC_CAR(tmp15_1);
                          tmpMeta18 = MMC_CDR(tmp15_1);
                          if (listEmpty(tmpMeta18)) goto tmp14_end;
                          tmpMeta19 = MMC_CAR(tmpMeta18);
                          tmpMeta20 = MMC_CDR(tmpMeta18);
                          if (!listEmpty(tmpMeta20)) goto tmp14_end;
                          _arg = tmpMeta19;
                          /* Pattern matching succeeded */
                          tmpMeta12 = _arg;
                          goto tmp14_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta21;
                          modelica_metatype tmpMeta22;
                          modelica_metatype tmpMeta23;
                          modelica_metatype tmpMeta24;
                          modelica_metatype tmpMeta25;
                          modelica_metatype tmpMeta26;
                          if (listEmpty(tmp15_1)) goto tmp14_end;
                          tmpMeta21 = MMC_CAR(tmp15_1);
                          tmpMeta22 = MMC_CDR(tmp15_1);
                          if (listEmpty(tmpMeta22)) goto tmp14_end;
                          tmpMeta23 = MMC_CAR(tmpMeta22);
                          tmpMeta24 = MMC_CDR(tmpMeta22);
                          if (listEmpty(tmpMeta24)) goto tmp14_end;
                          tmpMeta25 = MMC_CAR(tmpMeta24);
                          tmpMeta26 = MMC_CDR(tmpMeta24);
                          if (!listEmpty(tmpMeta26)) goto tmp14_end;
                          _arg = tmpMeta25;
                          /* Pattern matching succeeded */
                          tmpMeta12 = _arg;
                          goto tmp14_done;
                        }
                        case 2: {
                          modelica_metatype tmpMeta27;
                          modelica_metatype tmpMeta28;
                          modelica_metatype tmpMeta29;
                          
                          /* Pattern matching succeeded */
                          tmpMeta28 = stringAppend(_OMC_LIT49,omc_NFExpression_toString(threadData, _exp));
                          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT42);
                          tmpMeta27 = mmc_mk_cons(tmpMeta29, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta27);
                          goto goto_13;
                          goto tmp14_done;
                        }
                        }
                        goto tmp14_end;
                        tmp14_end: ;
                      }
                      goto goto_13;
                      goto_13:;
                      goto goto_8;
                      goto tmp14_done;
                      tmp14_done:;
                    }
                  }
                  _arg = tmpMeta12;

                  omc_NBPartitioning_collectPartitioningCrefs(threadData, _arg, _var_crefs);
                  tmpMeta7 = _OMC_LIT48;
                  goto tmp9_done;
                }
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_2;
              goto tmp9_done;
              tmp9_done:;
            }
          }tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NBVariable_isClock(threadData, omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT53)))) goto tmp3_end;
          { /* match expression */
            modelica_metatype tmp33_1;
            tmp33_1 = omc_NBVariable_getVar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT51);
            {
              modelica_metatype _children_vars = NULL;
              volatile mmc_switch_type tmp33;
              int tmp34;
              // _children_vars has no default value.
              tmp33 = 0;
              for (; tmp33 < 2; tmp33++) {
                switch (MMC_SWITCH_CAST(tmp33)) {
                case 0: {
                  modelica_metatype tmpMeta35;
                  modelica_metatype tmpMeta36;
                  modelica_metatype tmpMeta37;
                  modelica_metatype tmpMeta38;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp33_1,0,10) == 0) goto tmp32_end;
                  tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp33_1), 11));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,0,7) == 0) goto tmp32_end;
                  tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,14,3) == 0) goto tmp32_end;
                  tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 2));
                  
                  _children_vars = tmpMeta37;
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype __omcQ_24tmpVar23;
                    modelica_metatype* tmp39;
                    modelica_metatype tmpMeta40;
                    modelica_metatype __omcQ_24tmpVar22;
                    modelica_integer tmp41;
                    modelica_metatype _var_loopVar = 0;
                    modelica_metatype _var;
                    _var_loopVar = _children_vars;
                    tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar23 = tmpMeta40; /* defaultValue */
                    tmp39 = &__omcQ_24tmpVar23;
                    while(1) {
                      tmp41 = 1;
                      if (!listEmpty(_var_loopVar)) {
                        _var = MMC_CAR(_var_loopVar);
                        _var_loopVar = MMC_CDR(_var_loopVar);
                        tmp41--;
                      }
                      if (tmp41 == 0) {
                        __omcQ_24tmpVar22 = omc_NBVariable_getVarName(threadData, _var);
                        *tmp39 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                        tmp39 = &MMC_CDR(*tmp39);
                      } else if (tmp41 == 1) {
                        break;
                      } else {
                        goto goto_31;
                      }
                    }
                    *tmp39 = mmc_mk_nil();
                    tmpMeta38 = __omcQ_24tmpVar23;
                  }
                  tmpMeta30 = tmpMeta38;
                  goto tmp32_done;
                }
                case 1: {
                  modelica_metatype tmpMeta42;
                  
                  /* Pattern matching succeeded */
                  tmpMeta42 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta30 = tmpMeta42;
                  goto tmp32_done;
                }
                }
                goto tmp32_end;
                tmp32_end: ;
              }
              goto goto_31;
              goto_31:;
              goto goto_2;
              goto tmp32_done;
              tmp32_done:;
            }
          }
          _children = tmpMeta30;

          {
            modelica_metatype _child;
            for (tmpMeta43 = _children; !listEmpty(tmpMeta43); tmpMeta43=MMC_CDR(tmpMeta43))
            {
              _child = MMC_CAR(tmpMeta43);
              _stripped = omc_NFComponentRef_stripSubscriptsAll(threadData, _child);

              if((!omc_NBVariable_checkCref(threadData, _stripped, boxvar_NBVariable_isParamOrConst, _OMC_LIT52)))
              {
                omc_NBPartitioning_addCrefToSet(threadData, _stripped, _var_crefs);
              }
            }
          }
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure0_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}static modelica_metatype closure1_NBPartitioning_Cluster_addElement(threadData_t *thData, modelica_metatype closure, modelica_metatype cluster_opt)
{
  modelica_metatype cref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype ty = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBPartitioning_Cluster_addElement(thData, cluster_opt, cref, ty);
}static modelica_metatype closure2_NBPartitioning_Cluster_addElement(threadData_t *thData, modelica_metatype closure, modelica_metatype cluster_opt)
{
  modelica_metatype cref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype ty = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBPartitioning_Cluster_addElement(thData, cluster_opt, cref, ty);
}static modelica_metatype closure3_NBPartition_Partition_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype partition)
{
  modelica_metatype level = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartition_Partition_toString(thData, partition, level);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_metatype _partitions = NULL;
  modelica_metatype _eqn_dsf = NULL;
  modelica_metatype _var_map = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _var_crefs = NULL;
  modelica_metatype _var_indices = NULL;
  modelica_integer _part_idx;
  modelica_metatype _cluster_map = NULL;
  modelica_metatype _name_cref = NULL;
  modelica_metatype _index = NULL;
  modelica_metatype _marked_vars = NULL;
  modelica_metatype _single_vars = NULL;
  modelica_metatype _clocked_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _held_crefs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta54;
  modelica_metatype tmpMeta55;
  modelica_metatype tmpMeta56;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partitions has no default value.
  _eqn_dsf = omc_NBPartitioning_DisjointSetForest_new(threadData, omc_ExpandableArray_getLastUsedIndex(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 3)))));
  _var_map = arrayCreate(omc_ExpandableArray_getLastUsedIndex(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 3)))), mmc_mk_integer(((modelica_integer) -1)));
  // _eqn has no default value.
  // _var has no default value.
  // _var_crefs has no default value.
  // _var_indices has no default value.
  // _part_idx has no default value.
  _cluster_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 1));
  // _name_cref has no default value.
  _index = omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 1)));
  // _marked_vars has no default value.
  // _single_vars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _clocked_eqns = tmpMeta1;
  _held_crefs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  {
    modelica_metatype _eq_idx;
    for (tmpMeta2 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clocked), 2)))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq_idx = MMC_CAR(tmpMeta2);
      if((mmc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _clocked, mmc_unbox_integer(_eq_idx));

        omc_NBPartitioning_BClock_add(threadData, omc_Pointer_access(threadData, _eqn), _info);

        tmpMeta3 = mmc_mk_cons(_eqn, _clocked_eqns);
        _clocked_eqns = tmpMeta3;
      }
    }
  }

  omc_NBPartitioning_ClockedInfo_resolveSubClocks(threadData, _info);

  {
    modelica_metatype _eq_idx;
    for (tmpMeta5 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2)))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _eq_idx = MMC_CAR(tmpMeta5);
      if((mmc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _equations, mmc_unbox_integer(_eq_idx));

        _var_crefs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

        tmpMeta6 = mmc_mk_box1(0, _var_crefs);
        omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, _eqn), (modelica_fnptr) mmc_mk_box2(0,closure0_NBPartitioning_collectPartitioningCrefs,tmpMeta6), mmc_mk_none(), boxvar_NFExpression_mapReverse);

        {
          modelica_metatype __omcQ_24tmpVar25;
          modelica_metatype* tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype __omcQ_24tmpVar24;
          modelica_integer tmp10;
          modelica_metatype _cref_loopVar = 0;
          modelica_metatype _cref;
          _cref_loopVar = omc_UnorderedSet_toList(threadData, _var_crefs);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar25 = tmpMeta9; /* defaultValue */
          tmp8 = &__omcQ_24tmpVar25;
          while(1) {
            tmp10 = 1;
            if (!listEmpty(_cref_loopVar)) {
              _cref = MMC_CAR(_cref_loopVar);
              _cref_loopVar = MMC_CDR(_cref_loopVar);
              tmp10--;
            }
            if (tmp10 == 0) {
              __omcQ_24tmpVar24 = mmc_mk_integer(omc_NBVariable_VariablePointers_getVarIndex(threadData, _variables, _cref));
              *tmp8 = mmc_mk_cons(__omcQ_24tmpVar24,0);
              tmp8 = &MMC_CDR(*tmp8);
            } else if (tmp10 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp8 = mmc_mk_nil();
          tmpMeta7 = __omcQ_24tmpVar25;
        }
        _var_indices = tmpMeta7;

        {
          modelica_metatype __omcQ_24tmpVar27;
          modelica_metatype* tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype __omcQ_24tmpVar26;
          modelica_integer tmp14;
          modelica_metatype _i_loopVar = 0;
          modelica_metatype _i;
          _i_loopVar = _var_indices;
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar27 = tmpMeta13; /* defaultValue */
          tmp12 = &__omcQ_24tmpVar27;
          while(1) {
            tmp14 = 1;
            while (!listEmpty(_i_loopVar)) {
              _i = MMC_CAR(_i_loopVar);
              _i_loopVar = MMC_CDR(_i_loopVar);
              if ((mmc_unbox_integer(_i) > ((modelica_integer) 0))) {
                tmp14--;
                break;
              }
            }
            if (tmp14 == 0) {
              __omcQ_24tmpVar26 = _i;
              *tmp12 = mmc_mk_cons(__omcQ_24tmpVar26,0);
              tmp12 = &MMC_CDR(*tmp12);
            } else if (tmp14 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp12 = mmc_mk_nil();
          tmpMeta11 = __omcQ_24tmpVar27;
        }
        _var_indices = tmpMeta11;

        {
          modelica_metatype __omcQ_24tmpVar29;
          modelica_metatype* tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype __omcQ_24tmpVar28;
          modelica_integer tmp19;
          modelica_metatype _j_loopVar = 0;
          modelica_metatype _j;
          _j_loopVar = _var_indices;
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar29 = tmpMeta18; /* defaultValue */
          tmp17 = &__omcQ_24tmpVar29;
          while(1) {
            tmp19 = 1;
            while (!listEmpty(_j_loopVar)) {
              _j = MMC_CAR(_j_loopVar);
              _j_loopVar = MMC_CDR(_j_loopVar);
              if ((mmc_unbox_integer(arrayGet(_var_map,mmc_unbox_integer(_j)) /* DAE.ASUB */) > ((modelica_integer) 0))) {
                tmp19--;
                break;
              }
            }
            if (tmp19 == 0) {
              __omcQ_24tmpVar28 = arrayGet(_var_map,mmc_unbox_integer(_j)) /* DAE.ASUB */;
              *tmp17 = mmc_mk_cons(__omcQ_24tmpVar28,0);
              tmp17 = &MMC_CDR(*tmp17);
            } else if (tmp19 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp17 = mmc_mk_nil();
          tmpMeta16 = __omcQ_24tmpVar29;
        }
        tmpMeta15 = mmc_mk_cons(_eq_idx, tmpMeta16);
        _part_idx = omc_NBPartitioning_DisjointSetForest_unite(threadData, _eqn_dsf, tmpMeta15);

        {
          modelica_metatype _i;
          for (tmpMeta20 = _var_indices; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
          {
            _i = MMC_CAR(tmpMeta20);
            arrayUpdate(_var_map,mmc_unbox_integer(_i),mmc_mk_integer(_part_idx));
          }
        }
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp24;
    modelica_metatype tmpMeta25;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp26;
    modelica_metatype _var_idx_loopVar = 0;
    modelica_metatype _var_idx;
    _var_idx_loopVar = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 2))));
    tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta25; /* defaultValue */
    tmp24 = &__omcQ_24tmpVar31;
    while(1) {
      tmp26 = 1;
      if (!listEmpty(_var_idx_loopVar)) {
        _var_idx = MMC_CAR(_var_idx_loopVar);
        _var_idx_loopVar = MMC_CDR(_var_idx_loopVar);
        tmp26--;
      }
      if (tmp26 == 0) {
        __omcQ_24tmpVar30 = mmc_mk_boolean((mmc_unbox_integer(arrayGet(_var_map,mmc_unbox_integer(_var_idx)) /* DAE.ASUB */) < ((modelica_integer) 0)));
        *tmp24 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp24 = &MMC_CDR(*tmp24);
      } else if (tmp26 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp24 = mmc_mk_nil();
    tmpMeta23 = __omcQ_24tmpVar31;
  }
  _marked_vars = listArray(tmpMeta23);

  {
    modelica_metatype __omcQ_24tmpVar33;
    modelica_metatype* tmp28;
    modelica_metatype tmpMeta29;
    modelica_metatype __omcQ_24tmpVar32;
    modelica_integer tmp30;
    modelica_metatype _var_ptr_loopVar = 0;
    modelica_metatype _var_ptr;
    _var_ptr_loopVar = omc_NBVariable_VariablePointers_getMarkedVars(threadData, _variables, _marked_vars);
    tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar33 = tmpMeta29; /* defaultValue */
    tmp28 = &__omcQ_24tmpVar33;
    while(1) {
      tmp30 = 1;
      if (!listEmpty(_var_ptr_loopVar)) {
        _var_ptr = MMC_CAR(_var_ptr_loopVar);
        _var_ptr_loopVar = MMC_CDR(_var_ptr_loopVar);
        tmp30--;
      }
      if (tmp30 == 0) {
        __omcQ_24tmpVar32 = _var_ptr;
        *tmp28 = mmc_mk_cons(__omcQ_24tmpVar32,0);
        tmp28 = &MMC_CDR(*tmp28);
      } else if (tmp30 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp28 = mmc_mk_nil();
    tmpMeta27 = __omcQ_24tmpVar33;
  }
  _single_vars = tmpMeta27;

  if((!listEmpty(_single_vars)))
  {
    tmpMeta32 = stringAppend(_OMC_LIT54,omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind));
    tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT55);
    {
      modelica_metatype __omcQ_24tmpVar37;
      modelica_metatype* tmp35;
      modelica_metatype tmpMeta36;
      modelica_string __omcQ_24tmpVar36;
      modelica_integer tmp37;
      modelica_metatype _var_ptr_loopVar = 0;
      modelica_metatype _var_ptr;
      _var_ptr_loopVar = _single_vars;
      tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar37 = tmpMeta36; /* defaultValue */
      tmp35 = &__omcQ_24tmpVar37;
      while(1) {
        tmp37 = 1;
        if (!listEmpty(_var_ptr_loopVar)) {
          _var_ptr = MMC_CAR(_var_ptr_loopVar);
          _var_ptr_loopVar = MMC_CDR(_var_ptr_loopVar);
          tmp37--;
        }
        if (tmp37 == 0) {
          __omcQ_24tmpVar36 = omc_NBVariable_toString(threadData, omc_Pointer_access(threadData, _var_ptr), _OMC_LIT9);
          *tmp35 = mmc_mk_cons(__omcQ_24tmpVar36,0);
          tmp35 = &MMC_CDR(*tmp35);
        } else if (tmp37 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp35 = mmc_mk_nil();
      tmpMeta34 = __omcQ_24tmpVar37;
    }
    tmpMeta38 = stringAppend(tmpMeta33,stringDelimitList(tmpMeta34, _OMC_LIT56));
    tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT57);
    tmpMeta31 = mmc_mk_cons(tmpMeta39, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta31);

    MMC_THROW_INTERNAL();
  }

  {
    modelica_metatype _eq_idx;
    for (tmpMeta40 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2)))); !listEmpty(tmpMeta40); tmpMeta40=MMC_CDR(tmpMeta40))
    {
      _eq_idx = MMC_CAR(tmpMeta40);
      if((mmc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _equations, mmc_unbox_integer(_eq_idx));

        _name_cref = omc_NBEquation_Equation_getEqnName(threadData, _eqn);

        tmpMeta41 = mmc_mk_box2(0, _name_cref, mmc_mk_integer(1));
        omc_UnorderedMap_addUpdate(threadData, mmc_mk_integer(omc_NBPartitioning_DisjointSetForest_find(threadData, _eqn_dsf, mmc_unbox_integer(_eq_idx))), (modelica_fnptr) mmc_mk_box2(0,closure1_NBPartitioning_Cluster_addElement,tmpMeta41), _cluster_map);
      }
    }
  }

  {
    modelica_metatype _var_idx;
    for (tmpMeta43 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 2)))); !listEmpty(tmpMeta43); tmpMeta43=MMC_CDR(tmpMeta43))
    {
      _var_idx = MMC_CAR(tmpMeta43);
      if((mmc_unbox_integer(_var_idx) > ((modelica_integer) 0)))
      {
        _var = omc_NBVariable_VariablePointers_getVarAt(threadData, _variables, mmc_unbox_integer(_var_idx));

        _name_cref = omc_NBVariable_getVarName(threadData, _var);

        tmpMeta44 = mmc_mk_box2(0, _name_cref, mmc_mk_integer(2));
        omc_UnorderedMap_addUpdate(threadData, mmc_mk_integer(omc_NBPartitioning_DisjointSetForest_find(threadData, _eqn_dsf, mmc_unbox_integer(arrayGet(_var_map,mmc_unbox_integer(_var_idx)) /* DAE.ASUB */))), (modelica_fnptr) mmc_mk_box2(0,closure2_NBPartitioning_Cluster_addElement,tmpMeta44), _cluster_map);
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar39;
    modelica_metatype* tmp47;
    modelica_metatype tmpMeta48;
    modelica_metatype __omcQ_24tmpVar38;
    modelica_integer tmp49;
    modelica_metatype _cl_loopVar = 0;
    modelica_metatype _cl;
    _cl_loopVar = omc_UnorderedMap_valueList(threadData, _cluster_map);
    tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar39 = tmpMeta48; /* defaultValue */
    tmp47 = &__omcQ_24tmpVar39;
    while(1) {
      tmp49 = 1;
      if (!listEmpty(_cl_loopVar)) {
        _cl = MMC_CAR(_cl_loopVar);
        _cl_loopVar = MMC_CDR(_cl_loopVar);
        tmp49--;
      }
      if (tmp49 == 0) {
        __omcQ_24tmpVar38 = omc_NBPartitioning_Cluster_toPartition(threadData, _cl, _variables, _equations, (modelica_integer)_kind, _info, _held_crefs, _index);
        *tmp47 = mmc_mk_cons(__omcQ_24tmpVar38,0);
        tmp47 = &MMC_CDR(*tmp47);
      } else if (tmp49 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp47 = mmc_mk_nil();
    tmpMeta46 = __omcQ_24tmpVar39;
  }
  _partitions = tmpMeta46;

  {
    modelica_metatype __omcQ_24tmpVar41;
    modelica_metatype* tmp51;
    modelica_metatype tmpMeta52;
    modelica_metatype __omcQ_24tmpVar40;
    modelica_integer tmp53;
    modelica_metatype _part_loopVar = 0;
    modelica_metatype _part;
    _part_loopVar = _partitions;
    tmpMeta52 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar41 = tmpMeta52; /* defaultValue */
    tmp51 = &__omcQ_24tmpVar41;
    while(1) {
      tmp53 = 1;
      if (!listEmpty(_part_loopVar)) {
        _part = MMC_CAR(_part_loopVar);
        _part_loopVar = MMC_CDR(_part_loopVar);
        tmp53--;
      }
      if (tmp53 == 0) {
        __omcQ_24tmpVar40 = omc_NBPartition_Partition_updateHeldVars(threadData, _part, _held_crefs);
        *tmp51 = mmc_mk_cons(__omcQ_24tmpVar40,0);
        tmp51 = &MMC_CDR(*tmp51);
      } else if (tmp53 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp51 = mmc_mk_nil();
    tmpMeta50 = __omcQ_24tmpVar41;
  }
  _partitions = tmpMeta50;

  if(omc_Flags_isSet(threadData, _OMC_LIT62))
  {
    tmpMeta54 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT58),_OMC_LIT56);
    tmpMeta55 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) 0)));
    tmpMeta56 = stringAppend(tmpMeta54,omc_List_toString(threadData, _partitions, (modelica_fnptr) mmc_mk_box2(0,closure3_NBPartition_Partition_toString,tmpMeta55), _OMC_LIT9, _OMC_LIT9, _OMC_LIT56, _OMC_LIT56, 1 /* true */, ((modelica_integer) 0)));
    fputs(MMC_STRINGDATA(tmpMeta56),stdout);

    fputs(MMC_STRINGDATA(omc_NBPartitioning_ClockedInfo_toString(threadData, _info)),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return _partitions;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _partitions = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _partitions = omc_NBPartitioning_partitioningClocked(threadData, tmp1, _variables, _equations, _clocks, _clocked, _info);
  /* skip box _partitions; list<NBPartition.Partition> */
  return _partitions;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_metatype _partitions = NULL;
  modelica_boolean _isInit;
  modelica_metatype _clone_vars = NULL;
  modelica_metatype _clone_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partitions has no default value.
  _isInit = ((modelica_integer)_kind == 5);
  // _clone_vars has no default value.
  // _clone_eqns has no default value.
  _clone_vars = omc_NBVariable_VariablePointers_clone(threadData, _variables, 1 /* true */);

  _clone_eqns = omc_NBEquation_EquationPointers_clone(threadData, _equations, 1 /* true */);

  tmpMeta2 = mmc_mk_box3(3, &NBPartition_Association_CONTINUOUS__desc, mmc_mk_integer((modelica_integer)_kind), mmc_mk_none());
  tmpMeta3 = mmc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, mmc_mk_integer(((modelica_integer) 1)), tmpMeta2, _clone_vars, mmc_mk_none(), _clone_eqns, mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
  tmpMeta1 = mmc_mk_cons(tmpMeta3, MMC_REFSTRUCTLIT(mmc_nil));
  _partitions = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _partitions;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _partitions = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _partitions = omc_NBPartitioning_partitioningNone(threadData, tmp1, _variables, _equations, _clocks, _clocked, _info);
  /* skip box _partitions; list<NBPartition.Partition> */
  return _partitions;
}

DLLDirection
modelica_integer omc_NBPartitioning_DisjointSetForest_unite(threadData_t *threadData, modelica_metatype _dsf, modelica_metatype _indices)
{
  modelica_integer _root;
  modelica_metatype _roots = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _parent = NULL;
  modelica_metatype _rank = NULL;
  modelica_integer _maxRank;
  modelica_boolean _tied;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _root has no default value.
  {
    modelica_metatype __omcQ_24tmpVar43;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar42;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _indices;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar43 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar43;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar42 = mmc_mk_integer(omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, mmc_unbox_integer(_i)));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar42,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar43;
  }
  _roots = tmpMeta1;
  _parent = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 2))));
  _rank = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 3))));
  // _maxRank has no default value.
  _tied = 0 /* false */;
  _root = mmc_unbox_integer(listHead(_roots));

  _maxRank = mmc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */);

  {
    modelica_metatype _r;
    for (tmpMeta5 = listRest(_roots); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _r = MMC_CAR(tmpMeta5);
      if((mmc_unbox_integer(_r) != _root))
      {
        if((mmc_unbox_integer(arrayGet(_rank,mmc_unbox_integer(_r)) /* DAE.ASUB */) > _maxRank))
        {
          _root = mmc_unbox_integer(_r);

          _maxRank = mmc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */);

          _tied = 0 /* false */;
        }
        else
        {
          if((mmc_unbox_integer(arrayGet(_rank,mmc_unbox_integer(_r)) /* DAE.ASUB */) == _maxRank))
          {
            _tied = 1 /* true */;
          }
        }
      }
    }
  }

  {
    modelica_metatype _r;
    for (tmpMeta7 = _roots; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _r = MMC_CAR(tmpMeta7);
      arrayUpdate(_parent,omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, mmc_unbox_integer(_r)),mmc_mk_integer(_root));
    }
  }

  if(_tied)
  {
    arrayUpdate(_rank,_root,mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */)));
  }

  omc_Pointer_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 2))), _parent);

  omc_Pointer_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 3))), _rank);
  _return: OMC_LABEL_UNUSED
  return _root;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_unite(threadData_t *threadData, modelica_metatype _dsf, modelica_metatype _indices)
{
  modelica_integer _root;
  modelica_metatype out_root;
  _root = omc_NBPartitioning_DisjointSetForest_unite(threadData, _dsf, _indices);
  out_root = mmc_mk_icon(_root);
  return out_root;
}

DLLDirection
modelica_integer omc_NBPartitioning_DisjointSetForest_find(threadData_t *threadData, modelica_metatype _dsf, modelica_integer __omcQ_24in_5Findex)
{
  modelica_integer _index;
  modelica_metatype _parent = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _index = __omcQ_24in_5Findex;
  _parent = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 2))));
  while(1)
  {
    if(!(_index != mmc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */))) break;
    arrayUpdate(_parent,_index,arrayGet(_parent,mmc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */)) /* DAE.ASUB */);

    _index = mmc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */);
  }

  omc_Pointer_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 2))), _parent);
  _return: OMC_LABEL_UNUSED
  return _index;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_find(threadData_t *threadData, modelica_metatype _dsf, modelica_metatype __omcQ_24in_5Findex)
{
  modelica_integer tmp1;
  modelica_integer _index;
  modelica_metatype out_index;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Findex);
  _index = omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, tmp1);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

DLLDirection
modelica_metatype omc_NBPartitioning_DisjointSetForest_new(threadData_t *threadData, modelica_integer _n)
{
  modelica_metatype _dsf = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dsf has no default value.
  {
    modelica_metatype __omcQ_24tmpVar45;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar44;
    modelica_integer tmp4;
    modelica_integer tmp5;
    modelica_integer tmp6;
    modelica_integer _i;
    tmp5 = 1 /* Range step-value */;
    tmp6 = _n /* Range stop-value */;
    _i = ((modelica_integer) 1) /* Range start-value */;
    _i = (((modelica_integer) 1) /* Range start-value */)-tmp5;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar45 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar45;
    while(1) {
      tmp4 = 1;
      if (tmp5 > 0 ? _i+tmp5 <= tmp6 : _i+tmp5 >= tmp6) {
        _i += tmp5;
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar44 = mmc_mk_integer(_i);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar44,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar45;
  }
  tmpMeta7 = mmc_mk_box3(3, &NBPartitioning_DisjointSetForest_FOREST__desc, omc_Pointer_create(threadData, listArray(tmpMeta1)), omc_Pointer_create(threadData, arrayCreate(_n, mmc_mk_integer(((modelica_integer) 0)))));
  _dsf = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _dsf;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_new(threadData_t *threadData, modelica_metatype _n)
{
  modelica_integer tmp1;
  modelica_metatype _dsf = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _dsf = omc_NBPartitioning_DisjointSetForest_new(threadData, tmp1);
  /* skip box _dsf; NBPartitioning.DisjointSetForest */
  return _dsf;
}

static modelica_metatype closure4_NBPartitioning_replaceClockedFunctions(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype held_crefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartitioning_replaceClockedFunctions(thData, $in_exp, held_crefs);
}static modelica_metatype closure5_NBEquation_Equation_setKind(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype clock_idx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBEquation_Equation_setKind(thData, $in_eq, kind, clock_idx);
}static void closure6_NBVariable_setVarKind(threadData_t *thData, modelica_metatype closure, modelica_metatype varPointer)
{
  modelica_metatype varKind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_NBVariable_setVarKind(thData, varPointer, varKind);
}
DLLDirection
modelica_metatype omc_NBPartitioning_Cluster_toPartition(threadData_t *threadData, modelica_metatype _cluster, modelica_metatype _variables, modelica_metatype _equations, modelica_integer _kind, modelica_metatype _info, modelica_metatype _held_crefs, modelica_metatype _index)
{
  modelica_metatype _partition = NULL;
  modelica_metatype _cvars = NULL;
  modelica_metatype _cidnt = NULL;
  modelica_boolean _isInit;
  modelica_metatype _association = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _filtered_vars = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _partVariables = NULL;
  modelica_metatype _partEquations = NULL;
  modelica_integer _var_idx;
  modelica_integer _clock_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partition has no default value.
  _cvars = omc_UnorderedSet_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 2))));
  _cidnt = omc_UnorderedSet_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 3))));
  _isInit = ((modelica_integer)_kind == 5);
  // _association has no default value.
  // _var_lst has no default value.
  // _filtered_vars has no default value.
  // _eqn_lst has no default value.
  // _partVariables has no default value.
  // _partEquations has no default value.
  // _var_idx has no default value.
  _clock_idx = mmc_unbox_integer(omc_Pointer_access(threadData, _index));
  {
    modelica_metatype __omcQ_24tmpVar47;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar46;
    modelica_integer tmp4;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    _cref_loopVar = _cvars;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar47 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar47;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar46 = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT63);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar46,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar47;
  }
  _var_lst = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar49;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar48;
    modelica_integer tmp8;
    modelica_metatype _var_loopVar = 0;
    modelica_metatype _var;
    _var_loopVar = _var_lst;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar49 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar49;
    while(1) {
      tmp8 = 1;
      while (!listEmpty(_var_loopVar)) {
        _var = MMC_CAR(_var_loopVar);
        _var_loopVar = MMC_CDR(_var_loopVar);
        if (omc_NBVariable_VariablePointers_contains(threadData, _var, _variables)) {
          tmp8--;
          break;
        }
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar48 = _var;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar48,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar49;
  }
  _filtered_vars = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar51;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar50;
    modelica_integer tmp12;
    modelica_metatype _name_loopVar = 0;
    modelica_metatype _name;
    _name_loopVar = _cidnt;
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar51 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar51;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_name_loopVar)) {
        _name = MMC_CAR(_name_loopVar);
        _name_loopVar = MMC_CDR(_name_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        __omcQ_24tmpVar50 = omc_NBEquation_EquationPointers_getEqnByName(threadData, _equations, _name);
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar50,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp12 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar51;
  }
  _eqn_lst = tmpMeta9;

  _partVariables = omc_NBVariable_VariablePointers_fromList(threadData, _filtered_vars, 0 /* false */);

  _partEquations = omc_NBEquation_EquationPointers_fromList(threadData, _eqn_lst);

  _association = omc_NBPartition_Association_create(threadData, _partEquations, (modelica_integer)_kind, _info);

  tmpMeta13 = mmc_mk_box1(0, _held_crefs);
  _partEquations = omc_NBEquation_EquationPointers_mapExp(threadData, _partEquations, (modelica_fnptr) mmc_mk_box2(0,closure4_NBPartitioning_replaceClockedFunctions,tmpMeta13), mmc_mk_none());

  if(omc_NBPartition_Association_isClocked(threadData, _association))
  {
    _partEquations = omc_NBEquation_EquationPointers_map(threadData, _partEquations, boxvar_NBPartitioning_replaceClockedWhen);

    tmpMeta14 = mmc_mk_box2(0, mmc_mk_integer(3), mmc_mk_some(mmc_mk_integer(_clock_idx)));
    _partEquations = omc_NBEquation_EquationPointers_map(threadData, _partEquations, (modelica_fnptr) mmc_mk_box2(0,closure5_NBEquation_Equation_setKind,tmpMeta14));

    tmpMeta15 = mmc_mk_box1(0, _OMC_LIT64);
    _partVariables = omc_NBVariable_VariablePointers_mapPtr(threadData, _partVariables, (modelica_fnptr) mmc_mk_box2(0,closure6_NBVariable_setVarKind,tmpMeta15));
  }

  tmpMeta16 = mmc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, mmc_mk_integer(_clock_idx), _association, _partVariables, mmc_mk_none(), _partEquations, mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
  _partition = tmpMeta16;

  omc_Pointer_update(threadData, _index, mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(omc_Pointer_access(threadData, _index))));
  _return: OMC_LABEL_UNUSED
  return _partition;
}
modelica_metatype boxptr_NBPartitioning_Cluster_toPartition(threadData_t *threadData, modelica_metatype _cluster, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _kind, modelica_metatype _info, modelica_metatype _held_crefs, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_metatype _partition = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _partition = omc_NBPartitioning_Cluster_toPartition(threadData, _cluster, _variables, _equations, tmp1, _info, _held_crefs, _index);
  /* skip box _partition; NBPartition.Partition */
  return _partition;
}

DLLDirection
modelica_metatype omc_NBPartitioning_Cluster_addElement(threadData_t *threadData, modelica_metatype _cluster_opt, modelica_metatype _cref, modelica_integer _ty)
{
  modelica_metatype _cluster = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cluster has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cluster_opt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _cluster = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _cluster;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(3, &NBPartitioning_Cluster_CLUSTER__desc, omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          tmpMeta1 = tmpMeta7;
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
  _cluster = tmpMeta1;

  { /* match expression */
    modelica_integer tmp11_1;
    tmp11_1 = (modelica_integer)_ty;
    {
      volatile mmc_switch_type tmp11;
      int tmp12;
      tmp11 = 0;
      for (; tmp11 < 2; tmp11++) {
        switch (MMC_SWITCH_CAST(tmp11)) {
        case 0: {
          if (2 != tmp11_1) goto tmp10_end;
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 2))));
          tmpMeta8 = _cluster;
          goto tmp10_done;
        }
        case 1: {
          if (1 != tmp11_1) goto tmp10_end;
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 3))));
          tmpMeta8 = _cluster;
          goto tmp10_done;
        }
        }
        goto tmp10_end;
        tmp10_end: ;
      }
      goto goto_9;
      goto_9:;
      MMC_THROW_INTERNAL();
      goto tmp10_done;
      tmp10_done:;
    }
  }
  _cluster = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _cluster;
}
modelica_metatype boxptr_NBPartitioning_Cluster_addElement(threadData_t *threadData, modelica_metatype _cluster_opt, modelica_metatype _cref, modelica_metatype _ty)
{
  modelica_integer tmp1;
  modelica_metatype _cluster = NULL;
  tmp1 = mmc_unbox_integer(_ty);
  _cluster = omc_NBPartitioning_Cluster_addElement(threadData, _cluster_opt, _cref, tmp1);
  /* skip box _cluster; NBPartitioning.Cluster */
  return _cluster;
}

DLLDirection
modelica_string omc_NBPartitioning_Cluster_toString(threadData_t *threadData, modelica_metatype _cluster)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT65,omc_UnorderedSet_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 2))), boxvar_NFComponentRef_toString, _OMC_LIT56));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT66);
  tmpMeta3 = stringAppend(tmpMeta2,omc_UnorderedSet_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 3))), boxvar_NFComponentRef_toString, _OMC_LIT56));
  _str = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBPartitioning_extractClocks(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _collector, modelica_metatype _new_clocks, modelica_metatype _idx)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _clock = NULL;
      modelica_metatype _clock_var = NULL;
      modelica_metatype _clock_name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _clock has no default value.
      // _clock_var has no default value.
      // _clock_name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NFClockKind_isInferred(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))))) goto tmp3_end;
          tmpMeta6 = mmc_mk_box2(3, &NBPartitioning_BClock_BASE__CLOCK__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          _clock = tmpMeta6;

          if(omc_UnorderedMap_contains(threadData, _clock, _collector))
          {
            _clock_name = omc_UnorderedMap_getSafe(threadData, _clock, _collector, _OMC_LIT67);
          }
          else
          {
            _clock_var = omc_NBVariable_makeClockVar(threadData, mmc_unbox_integer(omc_Pointer_access(threadData, _idx)), omc_NFExpression_typeOf(threadData, _exp) ,&_clock_name);

            omc_UnorderedMap_add(threadData, _clock, _clock_name, _collector);

            tmpMeta7 = mmc_mk_cons(_clock_var, omc_Pointer_access(threadData, _new_clocks));
            omc_Pointer_update(threadData, _new_clocks, tmpMeta7);

            omc_Pointer_update(threadData, _idx, mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(omc_Pointer_access(threadData, _idx))));
          }
          tmpMeta1 = omc_NFExpression_fromCref(threadData, _clock_name, 0 /* false */);
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NBPartitioning_categorize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _bdae;
    {
      modelica_metatype _ode = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _alg = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _ode_evt = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _alg_evt = NULL;
      modelica_metatype tmpMeta6;
      modelica_metatype _clocked = NULL;
      modelica_metatype tmpMeta7;
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _ode = omc_DoubleEnded_fromList(threadData, tmpMeta3);
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _alg = omc_DoubleEnded_fromList(threadData, tmpMeta4);
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _ode_evt = omc_DoubleEnded_fromList(threadData, tmpMeta5);
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _alg_evt = omc_DoubleEnded_fromList(threadData, tmpMeta6);
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _clocked = omc_DoubleEnded_fromList(threadData, tmpMeta7);
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
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
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,13) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _syst;
            for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _syst = MMC_CAR(tmpMeta11);
              omc_NBPartition_Partition_categorize(threadData, _syst, _ode, _alg, _ode_evt, _alg_evt, _clocked);
            }
          }

          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_DoubleEnded_toListAndClear(threadData, _ode, tmpMeta14);
          _bdae = tmpMeta13;

          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = omc_DoubleEnded_toListAndClear(threadData, _alg, tmpMeta16);
          _bdae = tmpMeta15;

          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[4] = omc_DoubleEnded_toListAndClear(threadData, _ode_evt, tmpMeta18);
          _bdae = tmpMeta17;

          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[5] = omc_DoubleEnded_toListAndClear(threadData, _alg_evt, tmpMeta20);
          _bdae = tmpMeta19;

          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[6] = omc_DoubleEnded_toListAndClear(threadData, _clocked, tmpMeta22);
          _bdae = tmpMeta21;
          tmpMeta1 = _bdae;
          goto tmp8_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT39, _OMC_LIT69);
          goto goto_2;
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}

DLLDirection
modelica_fnptr omc_NBPartitioning_getModule(threadData_t *threadData)
{
  modelica_fnptr _func;
  modelica_string _flag = NULL;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flag = _OMC_LIT70;
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _flag;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT71), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBPartitioning_partitioningClocked;
          goto tmp3_done;
        }
        case 1: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT70), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBPartitioning_partitioningClocked;
          goto tmp3_done;
        }
        case 2: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT72), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBPartitioning_partitioningNone;
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
modelica_metatype omc_NBPartitioning_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_integer _kind)
{
  modelica_metatype _bdae = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  _func = (modelica_fnptr) omc_NBPartitioning_getModule(threadData);

  { /* match expression */
    modelica_integer tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = (modelica_integer)_kind;
    tmp4_2 = _bdae;
    {
      modelica_metatype _variables = NULL;
      modelica_metatype _clocks = NULL;
      modelica_metatype _equations = NULL;
      modelica_metatype _clocked = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _variables has no default value.
      // _clocks has no default value.
      // _equations has no default value.
      // _clocked has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (1 != tmp4_1) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,13) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,23) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 15));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,9) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 6));
          
          _variables = tmpMeta7;
          _clocks = tmpMeta8;
          _equations = tmpMeta10;
          _clocked = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), mmc_mk_integer((modelica_integer)_kind), _variables, _equations, _clocks, _clocked, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 13)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, mmc_mk_integer((modelica_integer)_kind), _variables, _equations, _clocks, _clocked, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 13))));
          _bdae = tmpMeta12;

          {
            modelica_metatype __omcQ_24tmpVar53;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar52;
            modelica_integer tmp17;
            modelica_metatype _sys_loopVar = 0;
            modelica_metatype _sys;
            _sys_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2)));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar53 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar53;
            while(1) {
              tmp17 = 1;
              while (!listEmpty(_sys_loopVar)) {
                _sys = MMC_CAR(_sys_loopVar);
                _sys_loopVar = MMC_CDR(_sys_loopVar);
                if ((!omc_NBPartition_Partition_isEmpty(threadData, _sys))) {
                  tmp17--;
                  break;
                }
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar52 = _sys;
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar52,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar53;
          }
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = tmpMeta14;
          _bdae = tmpMeta13;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (5 != tmp4_1) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,13) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,23) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 5));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 15));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,0,9) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 6));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 8));
          
          _variables = tmpMeta19;
          _clocks = tmpMeta20;
          _clocked = tmpMeta22;
          _equations = tmpMeta23;
          /* Pattern matching succeeded */
          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[7] = omc_NBPartitioning_partitioningNone(threadData, (modelica_integer)_kind, _variables, _equations, _clocks, _clocked, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 13))));
          _bdae = tmpMeta24;

          {
            modelica_metatype __omcQ_24tmpVar55;
            modelica_metatype* tmp27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar54;
            modelica_integer tmp29;
            modelica_metatype _sys_loopVar = 0;
            modelica_metatype _sys;
            _sys_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 7)));
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar55 = tmpMeta28; /* defaultValue */
            tmp27 = &__omcQ_24tmpVar55;
            while(1) {
              tmp29 = 1;
              while (!listEmpty(_sys_loopVar)) {
                _sys = MMC_CAR(_sys_loopVar);
                _sys_loopVar = MMC_CDR(_sys_loopVar);
                if ((!omc_NBPartition_Partition_isEmpty(threadData, _sys))) {
                  tmp29--;
                  break;
                }
              }
              if (tmp29 == 0) {
                __omcQ_24tmpVar54 = _sys;
                *tmp27 = mmc_mk_cons(__omcQ_24tmpVar54,0);
                tmp27 = &MMC_CDR(*tmp27);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp27 = mmc_mk_nil();
            tmpMeta26 = __omcQ_24tmpVar55;
          }
          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[7] = tmpMeta26;
          _bdae = tmpMeta25;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT39, _OMC_LIT74);
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
modelica_metatype boxptr_NBPartitioning_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _bdae = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _bdae = omc_NBPartitioning_main(threadData, __omcQ_24in_5Fbdae, tmp1);
  /* skip box _bdae; NBackendDAE */
  return _bdae;
}

PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_ClockedInfo_addSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info)
{
  modelica_metatype _base_clock = NULL;
  modelica_metatype _current_clocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _base_clock = omc_UnorderedMap_getSafe(threadData, _clock_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))), _OMC_LIT75);
  // _current_clocks has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _current_clocks = omc_UnorderedMap_getOrDefault(threadData, _base_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5))), tmpMeta1);

  tmpMeta2 = mmc_mk_cons(_clock_name, _current_clocks);
  omc_UnorderedMap_add(threadData, _base_clock, tmpMeta2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5))));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info)
{
  modelica_metatype _base_clock = NULL;
  modelica_metatype _parent_clock = NULL;
  modelica_metatype _dest = NULL;
  modelica_metatype _src = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _base_clock has no default value.
  _parent_clock = omc_UnorderedMap_getSafe(threadData, _clock_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))), _OMC_LIT76);
  // _dest has no default value.
  // _src has no default value.
  if((!omc_UnorderedMap_contains(threadData, _parent_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))))))
  {
    _base_clock = omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData, _parent_clock, _info);

    _dest = omc_UnorderedMap_getSafe(threadData, _parent_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))), _OMC_LIT77);

    _src = omc_UnorderedMap_getSafe(threadData, _clock_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))), _OMC_LIT78);

    omc_UnorderedMap_add(threadData, _clock_name, omc_NBPartitioning_BClock_updateSubClock(threadData, _dest, _src), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))));

    omc_UnorderedMap_add(threadData, _clock_name, _base_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))));
  }
  else
  {
    _base_clock = _parent_clock;
  }
  _return: OMC_LABEL_UNUSED
  return _base_clock;
}

DLLDirection
void omc_NBPartitioning_ClockedInfo_resolveSubClocks(threadData_t *threadData, modelica_metatype _info)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _sub_clock;
    for (tmpMeta1 = omc_UnorderedMap_keyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3)))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _sub_clock = MMC_CAR(tmpMeta1);
      omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData, _sub_clock, _info);
    }
  }

  {
    modelica_metatype _sub_clock;
    for (tmpMeta3 = omc_UnorderedMap_keyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3)))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _sub_clock = MMC_CAR(tmpMeta3);
      omc_NBPartitioning_ClockedInfo_addSubClock(threadData, _sub_clock, _info);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_NBPartitioning_ClockedInfo_isEmpty(threadData_t *threadData, modelica_metatype _info)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = omc_UnorderedMap_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_ClockedInfo_isEmpty(threadData_t *threadData, modelica_metatype _info)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_ClockedInfo_isEmpty(threadData, _info);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_NBPartitioning_ClockedInfo_toString(threadData_t *threadData, modelica_metatype _info)
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
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT9;
  if((!omc_NBPartitioning_ClockedInfo_isEmpty(threadData, _info)))
  {
    tmpMeta1 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT79),_OMC_LIT56);
    _str = tmpMeta1;

    tmpMeta2 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT80));
    tmpMeta3 = stringAppend(tmpMeta2,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))), boxvar_NFComponentRef_toString, boxvar_NBPartitioning_BClock_toString, _OMC_LIT56, _OMC_LIT81));
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT82);
    _str = tmpMeta4;

    tmpMeta5 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT83));
    tmpMeta6 = stringAppend(tmpMeta5,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))), boxvar_NFComponentRef_toString, boxvar_NBPartitioning_BClock_toString, _OMC_LIT56, _OMC_LIT81));
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT82);
    _str = tmpMeta7;

    tmpMeta8 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT84));
    tmpMeta9 = stringAppend(tmpMeta8,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))), boxvar_NFComponentRef_toString, boxvar_NFComponentRef_toString, _OMC_LIT56, _OMC_LIT81));
    tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT82);
    _str = tmpMeta10;

    tmpMeta11 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT85));
    tmpMeta12 = stringAppend(tmpMeta11,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5))), boxvar_NFComponentRef_toString, boxvar_NFComponentRef_listToString, _OMC_LIT56, _OMC_LIT81));
    tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT56);
    _str = tmpMeta13;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBPartitioning_ClockedInfo_new(threadData_t *threadData)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box5(3, &NBPartitioning_ClockedInfo_CLOCKED__INFO__desc, omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)));
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _info;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_updateSubClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdest, modelica_metatype _src)
{
  modelica_metatype _dest = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dest = __omcQ_24in_5Fdest;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _dest;
    tmp4_2 = _src;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_dest), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_NBBackendUtil_Rational_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dest), 3))), omc_NBBackendUtil_Rational_multiply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_src), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dest), 2)))));
          _dest = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_dest), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_NBBackendUtil_Rational_multiply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dest), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_src), 2))));
          _dest = tmpMeta7;
          tmpMeta1 = _dest;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT86,omc_NBPartitioning_BClock_toString(threadData, _dest));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT87);
          tmpMeta11 = stringAppend(tmpMeta10,omc_NBPartitioning_BClock_toString(threadData, _src));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT88);
          tmpMeta8 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta8);
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
  _dest = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dest;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_baseClock)
{
  modelica_metatype _subClock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subClock has no default value.
  // _baseClock has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _call has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(3, &NBPartitioning_BClock_BASE__CLOCK__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _cref = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT91;
          tmpMeta[0+1] = mmc_mk_some(_cref);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta8;
          /* Pattern matching succeeded */
          
          
          { /* match expression */
            modelica_string tmp12_1;modelica_metatype tmp12_2;
            tmp12_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT42, 1 /* true */, 0 /* false */);
            tmp12_2 = omc_NFCall_arguments(threadData, _call);
            {
              modelica_metatype _e = NULL;
              modelica_integer _i1;
              modelica_integer _i2;
              volatile mmc_switch_type tmp12;
              int tmp13;
              // _e has no default value.
              // _i1 has no default value.
              // _i2 has no default value.
              tmp12 = 0;
              for (; tmp12 < 7; tmp12++) {
                switch (MMC_SWITCH_CAST(tmp12)) {
                case 0: {
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  modelica_integer tmp19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  if (9 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT93), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  if (listEmpty(tmp12_2)) goto tmp11_end;
                  tmpMeta14 = MMC_CAR(tmp12_2);
                  tmpMeta15 = MMC_CDR(tmp12_2);
                  if (listEmpty(tmpMeta15)) goto tmp11_end;
                  tmpMeta16 = MMC_CAR(tmpMeta15);
                  tmpMeta17 = MMC_CDR(tmpMeta15);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,1) == 0) goto tmp11_end;
                  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
                  tmp19 = mmc_unbox_integer(tmpMeta18);
                  if (!listEmpty(tmpMeta17)) goto tmp11_end;
                  _e = tmpMeta14;
                  _i1 = tmp19  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta20 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer(_i1), mmc_mk_integer(((modelica_integer) 1)));
                  tmpMeta21 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, tmpMeta20, _OMC_LIT90, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta21);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp11_done;
                }
                case 1: {
                  modelica_metatype tmpMeta22;
                  modelica_metatype tmpMeta23;
                  modelica_metatype tmpMeta24;
                  modelica_metatype tmpMeta25;
                  modelica_metatype tmpMeta26;
                  modelica_integer tmp27;
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  if (11 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT94), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  if (listEmpty(tmp12_2)) goto tmp11_end;
                  tmpMeta22 = MMC_CAR(tmp12_2);
                  tmpMeta23 = MMC_CDR(tmp12_2);
                  if (listEmpty(tmpMeta23)) goto tmp11_end;
                  tmpMeta24 = MMC_CAR(tmpMeta23);
                  tmpMeta25 = MMC_CDR(tmpMeta23);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,0,1) == 0) goto tmp11_end;
                  tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
                  tmp27 = mmc_unbox_integer(tmpMeta26);
                  if (!listEmpty(tmpMeta25)) goto tmp11_end;
                  _e = tmpMeta22;
                  _i1 = tmp27  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta28 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_i1));
                  tmpMeta29 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, tmpMeta28, _OMC_LIT90, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta29);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp11_done;
                }
                case 2: {
                  modelica_metatype tmpMeta30;
                  modelica_metatype tmpMeta31;
                  modelica_metatype tmpMeta32;
                  modelica_metatype tmpMeta33;
                  modelica_metatype tmpMeta34;
                  modelica_integer tmp35;
                  modelica_metatype tmpMeta36;
                  modelica_metatype tmpMeta37;
                  if (11 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT95), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  if (listEmpty(tmp12_2)) goto tmp11_end;
                  tmpMeta30 = MMC_CAR(tmp12_2);
                  tmpMeta31 = MMC_CDR(tmp12_2);
                  if (listEmpty(tmpMeta31)) goto tmp11_end;
                  tmpMeta32 = MMC_CAR(tmpMeta31);
                  tmpMeta33 = MMC_CDR(tmpMeta31);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,0,1) == 0) goto tmp11_end;
                  tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
                  tmp35 = mmc_unbox_integer(tmpMeta34);
                  if (!listEmpty(tmpMeta33)) goto tmp11_end;
                  _e = tmpMeta30;
                  _i1 = tmp35  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta36 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer(_i1), mmc_mk_integer(((modelica_integer) 1)));
                  tmpMeta37 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT89, tmpMeta36, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta37);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp11_done;
                }
                case 3: {
                  modelica_metatype tmpMeta38;
                  modelica_metatype tmpMeta39;
                  modelica_metatype tmpMeta40;
                  modelica_metatype tmpMeta41;
                  modelica_metatype tmpMeta42;
                  modelica_integer tmp43;
                  modelica_metatype tmpMeta44;
                  modelica_metatype tmpMeta45;
                  modelica_metatype tmpMeta46;
                  modelica_integer tmp47;
                  modelica_metatype tmpMeta48;
                  modelica_metatype tmpMeta49;
                  if (11 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT95), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  if (listEmpty(tmp12_2)) goto tmp11_end;
                  tmpMeta38 = MMC_CAR(tmp12_2);
                  tmpMeta39 = MMC_CDR(tmp12_2);
                  if (listEmpty(tmpMeta39)) goto tmp11_end;
                  tmpMeta40 = MMC_CAR(tmpMeta39);
                  tmpMeta41 = MMC_CDR(tmpMeta39);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,0,1) == 0) goto tmp11_end;
                  tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
                  tmp43 = mmc_unbox_integer(tmpMeta42);
                  if (listEmpty(tmpMeta41)) goto tmp11_end;
                  tmpMeta44 = MMC_CAR(tmpMeta41);
                  tmpMeta45 = MMC_CDR(tmpMeta41);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,0,1) == 0) goto tmp11_end;
                  tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
                  tmp47 = mmc_unbox_integer(tmpMeta46);
                  if (!listEmpty(tmpMeta45)) goto tmp11_end;
                  _e = tmpMeta38;
                  _i1 = tmp43  /* pattern as ty=Integer */;
                  _i2 = tmp47  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta48 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer(_i1), mmc_mk_integer(_i2));
                  tmpMeta49 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT89, tmpMeta48, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta49);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp11_done;
                }
                case 4: {
                  modelica_metatype tmpMeta50;
                  modelica_metatype tmpMeta51;
                  modelica_metatype tmpMeta52;
                  modelica_metatype tmpMeta53;
                  modelica_metatype tmpMeta54;
                  modelica_integer tmp55;
                  modelica_metatype tmpMeta56;
                  modelica_metatype tmpMeta57;
                  if (10 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT96), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  if (listEmpty(tmp12_2)) goto tmp11_end;
                  tmpMeta50 = MMC_CAR(tmp12_2);
                  tmpMeta51 = MMC_CDR(tmp12_2);
                  if (listEmpty(tmpMeta51)) goto tmp11_end;
                  tmpMeta52 = MMC_CAR(tmpMeta51);
                  tmpMeta53 = MMC_CDR(tmpMeta51);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta52,0,1) == 0) goto tmp11_end;
                  tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 2));
                  tmp55 = mmc_unbox_integer(tmpMeta54);
                  if (!listEmpty(tmpMeta53)) goto tmp11_end;
                  _e = tmpMeta50;
                  _i1 = tmp55  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta56 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer((-_i1)), mmc_mk_integer(((modelica_integer) 1)));
                  tmpMeta57 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT89, tmpMeta56, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta57);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp11_done;
                }
                case 5: {
                  modelica_metatype tmpMeta58;
                  modelica_metatype tmpMeta59;
                  modelica_metatype tmpMeta60;
                  modelica_metatype tmpMeta61;
                  modelica_metatype tmpMeta62;
                  modelica_integer tmp63;
                  modelica_metatype tmpMeta64;
                  modelica_metatype tmpMeta65;
                  modelica_metatype tmpMeta66;
                  modelica_integer tmp67;
                  modelica_metatype tmpMeta68;
                  modelica_metatype tmpMeta69;
                  if (10 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT96), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  if (listEmpty(tmp12_2)) goto tmp11_end;
                  tmpMeta58 = MMC_CAR(tmp12_2);
                  tmpMeta59 = MMC_CDR(tmp12_2);
                  if (listEmpty(tmpMeta59)) goto tmp11_end;
                  tmpMeta60 = MMC_CAR(tmpMeta59);
                  tmpMeta61 = MMC_CDR(tmpMeta59);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta60,0,1) == 0) goto tmp11_end;
                  tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 2));
                  tmp63 = mmc_unbox_integer(tmpMeta62);
                  if (listEmpty(tmpMeta61)) goto tmp11_end;
                  tmpMeta64 = MMC_CAR(tmpMeta61);
                  tmpMeta65 = MMC_CDR(tmpMeta61);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta64,0,1) == 0) goto tmp11_end;
                  tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 2));
                  tmp67 = mmc_unbox_integer(tmpMeta66);
                  if (!listEmpty(tmpMeta65)) goto tmp11_end;
                  _e = tmpMeta58;
                  _i1 = tmp63  /* pattern as ty=Integer */;
                  _i2 = tmp67  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta68 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer((-_i1)), mmc_mk_integer(_i2));
                  tmpMeta69 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT89, tmpMeta68, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta69);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp11_done;
                }
                case 6: {
                  modelica_metatype tmpMeta70;
                  modelica_metatype tmpMeta71;
                  modelica_metatype tmpMeta72;
                  
                  /* Pattern matching succeeded */
                  tmpMeta71 = stringAppend(_OMC_LIT92,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta72 = stringAppend(tmpMeta71,_OMC_LIT42);
                  tmpMeta70 = mmc_mk_cons(tmpMeta72, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta70);
                  goto goto_10;
                  goto tmp11_done;
                }
                }
                goto tmp11_end;
                tmp11_end: ;
              }
              goto goto_10;
              goto_10:;
              goto goto_2;
              goto tmp11_done;
              tmp11_done:;
            }
          }
          _baseClock = tmpMeta[2+0];
          _subClock = tmpMeta[2+1];
          tmpMeta[0+0] = _subClock;
          tmpMeta[0+1] = _baseClock;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          
          /* Pattern matching succeeded */
          tmpMeta74 = stringAppend(_OMC_LIT97,omc_NFExpression_toString(threadData, _exp));
          tmpMeta75 = stringAppend(tmpMeta74,_OMC_LIT42);
          tmpMeta73 = mmc_mk_cons(tmpMeta75, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta73);
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
  _subClock = tmpMeta[0+0];
  _baseClock = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_baseClock) { *out_baseClock = _baseClock; }
  return _subClock;
}

PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_BClock_create(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _exp, modelica_metatype _info)
{
  modelica_metatype _clock = NULL;
  modelica_metatype _baseClock = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clock has no default value.
  // _baseClock has no default value.
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
          /* Pattern matching succeeded */
          _clock = omc_NBPartitioning_BClock_fromExp(threadData, _exp ,&_baseClock);

          if(isSome(_baseClock))
          {
            omc_UnorderedMap_add(threadData, _clock_name, _clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))));

            omc_UnorderedMap_add(threadData, _clock_name, omc_Util_getOption(threadData, _baseClock), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))));
          }
          else
          {
            omc_UnorderedMap_add(threadData, _clock_name, _clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))));
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT98,omc_NFComponentRef_toString(threadData, _clock_name));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT42);
          tmpMeta5 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta5);

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

DLLDirection
modelica_metatype omc_NBPartitioning_BClock_toExp(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(8, &NFExpression_CLKCONST__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT99,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta7);
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NBPartitioning_BClock_convertSub(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _oldClock = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldClock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, omc_NBBackendUtil_Rational_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2)))), omc_NBBackendUtil_Rational_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 3)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 4))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT100,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta7);
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
  _oldClock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldClock;
}

DLLDirection
modelica_metatype omc_NBPartitioning_BClock_convertBase(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _oldClock = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldClock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFClockKind_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT101,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta6);
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
  _oldClock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldClock;
}

DLLDirection
modelica_boolean omc_NBPartitioning_BClock_isEventClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,2) == 0) goto tmp3_end;
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_BClock_isEventClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isEventClock(threadData, _clock);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBPartitioning_BClock_isBaseClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_BClock_isBaseClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isBaseClock(threadData, _clock);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
void omc_NBPartitioning_BClock_add(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _info)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = omc_NBEquation_Equation_getLHS(threadData, _eqn);
    tmp3_2 = omc_NBEquation_Equation_getRHS(threadData, _eqn);
    {
      modelica_metatype _clock_name = NULL;
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _clock_name has no default value.
      // _exp has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _clock_name = tmpMeta5;
          _exp = tmp3_2;
          /* Pattern matching succeeded */
          omc_NBPartitioning_BClock_create(threadData, _clock_name, _exp, _info);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,6,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 3));
          
          _clock_name = tmpMeta6;
          _exp = tmp3_1;
          /* Pattern matching succeeded */
          omc_NBPartitioning_BClock_create(threadData, _clock_name, _exp, _info);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT102,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT9));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT39, tmpMeta7);

          goto goto_1;
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

DLLDirection
modelica_boolean omc_NBPartitioning_BClock_isEqual(threadData_t *threadData, modelica_metatype _clock1, modelica_metatype _clock2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _clock1;
    tmp4_2 = _clock2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFClockKind_compare(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock2), 2)))) == ((modelica_integer) 0));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((omc_NBBackendUtil_Rational_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock2), 2)))) && omc_NBBackendUtil_Rational_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock2), 3))))) && omc_Util_optionEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock2), 4))), boxvar_stringEq));
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_BClock_isEqual(threadData_t *threadData, modelica_metatype _clock1, modelica_metatype _clock2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isEqual(threadData, _clock1, _clock2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NBPartitioning_BClock_hash(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = stringHashDjb2(omc_NBPartitioning_BClock_toString(threadData, _clock));
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_NBPartitioning_BClock_hash(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBPartitioning_BClock_hash(threadData, _clock);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_string omc_NBPartitioning_BClock_toString(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFClockKind_toDebugString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2))));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT103,omc_NBBackendUtil_Rational_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2)))));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT81);
          tmpMeta7 = stringAppend(tmpMeta6,omc_NBBackendUtil_Rational_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 3)))));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT104);
          tmp1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT105;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

