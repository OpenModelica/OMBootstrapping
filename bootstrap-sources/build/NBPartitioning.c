#include "omc_simulation_settings.h"
#include "NBPartitioning.h"
#define _OMC_LIT0_data "$getPart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,8,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT0}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,4) {&NFInstNode_NodeHandle_VALUE__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,0,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11,0.0);
#define _OMC_LIT11 MMC_REFREALLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT5,_OMC_LIT6,_OMC_LIT6,_OMC_LIT8,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,1) {_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,9) {&NFInstNode_InstNodeType_NORMAL__COMP__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT4,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT14,_OMC_LIT2,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,1) {_OMC_LIT16,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,4) {&NFInstNode_NodeHandle_VALUE__desc,_OMC_LIT16}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,1) {_OMC_LIT18,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,8,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT20,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT21,_OMC_LIT22,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,1,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT27,_OMC_LIT6,_OMC_LIT6,_OMC_LIT8,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT12}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,1) {_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT26,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT29,_OMC_LIT2,_OMC_LIT15}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,1) {_OMC_LIT30,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,4) {&NFInstNode_NodeHandle_VALUE__desc,_OMC_LIT30}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,1) {_OMC_LIT32,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "b"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,1,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,6) {&NFType_BOOLEAN__desc,}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT35,_OMC_LIT6,_OMC_LIT6,_OMC_LIT8,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT12}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,1) {_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT34,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT37,_OMC_LIT2,_OMC_LIT15}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,1) {_OMC_LIT38,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,4) {&NFInstNode_NodeHandle_VALUE__desc,_OMC_LIT38}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,1) {_OMC_LIT40,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,1,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,1,7) {&NFType_CLOCK__desc,}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT43,_OMC_LIT6,_OMC_LIT6,_OMC_LIT8,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT12}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,1,1) {_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT42,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT45,_OMC_LIT2,_OMC_LIT15}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT46,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,4) {&NFInstNode_NodeHandle_VALUE__desc,_OMC_LIT46}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT48,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,17,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT50,_OMC_LIT51,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "NBPartitioning.replaceClockedFunctionExp failed. "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,49,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data " is of type "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,12,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data ", only real, integer, boolean and clock are allowed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,52,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "NBPartitioning.replaceClockedFunctions.replaceSample failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,65,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,1,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "NBPartitioning.replaceClockedFunctions failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,51,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,6,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "subSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,9,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "superSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,11,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "shiftSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,11,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "backSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,10,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "hold"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,4,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "NBPartitioning.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,17,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT67_6,0.0);
#define _OMC_LIT67_6 MMC_REFREALLIT(_OMC_LIT_STRUCT67_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1314)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1314)),MMC_IMMEDIATE(MMC_TAGFIXNUM(76)),_OMC_LIT67_6}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "NBPartitioning.collectPartitioningCrefs failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,52,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,8,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT70_6,0.0);
#define _OMC_LIT70_6 MMC_REFREALLIT(_OMC_LIT_STRUCT70_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1289)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1295)),MMC_IMMEDIATE(MMC_TAGFIXNUM(18)),_OMC_LIT70_6}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT71_6,0.0);
#define _OMC_LIT71_6 MMC_REFREALLIT(_OMC_LIT_STRUCT71_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1300)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1302)),MMC_IMMEDIATE(MMC_TAGFIXNUM(17)),_OMC_LIT71_6}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT72_6,0.0);
#define _OMC_LIT72_6 MMC_REFREALLIT(_OMC_LIT_STRUCT72_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1143)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1143)),MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT72_6}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT74_6,0.0);
#define _OMC_LIT74_6 MMC_REFREALLIT(_OMC_LIT_STRUCT74_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1203)),MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1203)),MMC_IMMEDIATE(MMC_TAGFIXNUM(99)),_OMC_LIT74_6}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "NBPartitioning.sortClockedPartitions failed for sub-partitions with cyclic dependency that could not be resolved:\nThere are contradicting sub-clocks: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,150,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data " in strong component:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,22,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,3,3) {&Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,3,3) {&Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,4,4) {&NBPartitioning_BClock_SUB__CLOCK__desc,_OMC_LIT77,_OMC_LIT78,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT80_6,0.0);
#define _OMC_LIT80_6 MMC_REFREALLIT(_OMC_LIT_STRUCT80_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1100)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1100)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT80_6}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "NBPartitioning.partitioningClocked ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,36,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data ") failed because the following variables could not be assigned to a partition:\n  {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,82,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,1,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,1,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "[dumpSynchronous] Partitioning result:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,38,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "dumpSynchronous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,15,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "Dumps information of the clock partitioning."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,44,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT86,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT89_6,0.0);
#define _OMC_LIT89_6 MMC_REFREALLIT(_OMC_LIT_STRUCT89_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(782)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(782)),MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT89_6}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,1,13) {&NFBackendExtension_VariableKind_CLOCKED__desc,}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT91_6,0.0);
#define _OMC_LIT91_6 MMC_REFREALLIT(_OMC_LIT_STRUCT91_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(730)),MMC_IMMEDIATE(MMC_TAGFIXNUM(16)),MMC_IMMEDIATE(MMC_TAGFIXNUM(730)),MMC_IMMEDIATE(MMC_TAGFIXNUM(44)),_OMC_LIT91_6}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "NBPartitioning.Cluster.addElement failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,45,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data " because of unknown cluster element type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,41,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "### Cluster Variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,23,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "\n### Cluster Equation Identifiers:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,35,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT96_6,0.0);
#define _OMC_LIT96_6 MMC_REFREALLIT(_OMC_LIT_STRUCT96_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(647)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(647)),MMC_IMMEDIATE(MMC_TAGFIXNUM(77)),_OMC_LIT96_6}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT97_6,0.0);
#define _OMC_LIT97_6 MMC_REFREALLIT(_OMC_LIT_STRUCT97_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(645)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(645)),MMC_IMMEDIATE(MMC_TAGFIXNUM(77)),_OMC_LIT97_6}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "NBPartitioning.categorize failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,33,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,2,1) {_OMC_LIT98,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "clocked"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,7,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "default"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,7,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,4,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "NBPartitioning.main failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,27,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,2,1) {_OMC_LIT103,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT105_6,0.0);
#define _OMC_LIT105_6 MMC_REFREALLIT(_OMC_LIT_STRUCT105_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(490)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(490)),MMC_IMMEDIATE(MMC_TAGFIXNUM(95)),_OMC_LIT105_6}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT106_6,0.0);
#define _OMC_LIT106_6 MMC_REFREALLIT(_OMC_LIT_STRUCT106_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(454)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(454)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),_OMC_LIT106_6}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT107_6,0.0);
#define _OMC_LIT107_6 MMC_REFREALLIT(_OMC_LIT_STRUCT107_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(466)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(466)),MMC_IMMEDIATE(MMC_TAGFIXNUM(86)),_OMC_LIT107_6}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT108_6,0.0);
#define _OMC_LIT108_6 MMC_REFREALLIT(_OMC_LIT_STRUCT108_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(471)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(471)),MMC_IMMEDIATE(MMC_TAGFIXNUM(82)),_OMC_LIT108_6}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT109_6,0.0);
#define _OMC_LIT109_6 MMC_REFREALLIT(_OMC_LIT_STRUCT109_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(472)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(472)),MMC_IMMEDIATE(MMC_TAGFIXNUM(80)),_OMC_LIT109_6}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT110_6,0.0);
#define _OMC_LIT110_6 MMC_REFREALLIT(_OMC_LIT_STRUCT110_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(440)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(440)),MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT110_6}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "Clocked Info"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,12,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "Base Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,11,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,2,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,2,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "Sub Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,10,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "Sub to Base Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,18,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "Base to Sub Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,18,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "NBPartitioning.BClock.updateSubClock failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,48,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data " and "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,5,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data " because of incorrect clock types."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,34,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "NBPartitioning.BClock.fromExp failed for exp with unhandled call: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,66,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "NBPartitioning.BClock.fromExp failed for exp with unhandled expression kind: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,77,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT123_6,0.0);
#define _OMC_LIT123_6 MMC_REFREALLIT(_OMC_LIT_STRUCT123_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT123,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(254)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(254)),MMC_IMMEDIATE(MMC_TAGFIXNUM(71)),_OMC_LIT123_6}};
#define _OMC_LIT123 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "NBPartitioning.BClock.create failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,40,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "NBPartitioning.BClock.toExp failed for non-base clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,55,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "NBPartitioning.BClock.convertSub failed for non-sub clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,59,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "NBPartitioning.BClock.convertBase failed for non-base clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,61,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT128_6,0.0);
#define _OMC_LIT128_6 MMC_REFREALLIT(_OMC_LIT_STRUCT128_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT128,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(184)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(184)),MMC_IMMEDIATE(MMC_TAGFIXNUM(98)),_OMC_LIT128_6}};
#define _OMC_LIT128 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT128)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT129,1.0);
#define _OMC_LIT129 MMC_REFREALLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,2,4) {&NFExpression_REAL__desc,_OMC_LIT129}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT131,2,5) {&NFClockKind_REAL__CLOCK__desc,_OMC_LIT130}};
#define _OMC_LIT131 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,2,3) {&NBPartitioning_BClock_BASE__CLOCK__desc,_OMC_LIT131}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "SUB_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,10,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,1,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "INFERRED_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,15,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "UNKNOWN_CLOCK()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,15,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
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
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_sortClockedPartitions(threadData_t *threadData, modelica_metatype _unsorted);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_sortClockedPartitions,2,0) {(void*) boxptr_NBPartitioning_sortClockedPartitions,0}};
#define boxvar_NBPartitioning_sortClockedPartitions MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_sortClockedPartitions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_sortAndMergeClockedPartitions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_sortAndMergeClockedPartitions,2,0) {(void*) boxptr_NBPartitioning_sortAndMergeClockedPartitions,0}};
#define boxvar_NBPartitioning_sortAndMergeClockedPartitions MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_sortAndMergeClockedPartitions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningClocked,2,0) {(void*) boxptr_NBPartitioning_partitioningClocked,0}};
#define boxvar_NBPartitioning_partitioningClocked MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningClocked)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningNone,2,0) {(void*) boxptr_NBPartitioning_partitioningNone,0}};
#define boxvar_NBPartitioning_partitioningNone MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningNone)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBPartitioning_Cluster_removeInferredClock(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _inferred_clocks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_Cluster_removeInferredClock(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _inferred_clocks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_Cluster_removeInferredClock,2,0) {(void*) boxptr_NBPartitioning_Cluster_removeInferredClock,0}};
#define boxvar_NBPartitioning_Cluster_removeInferredClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_Cluster_removeInferredClock)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBPartitioning_Cluster_collectInferredClock(threadData_t *threadData, modelica_metatype _var, modelica_metatype _inferred_clocks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_Cluster_collectInferredClock(threadData_t *threadData, modelica_metatype _var, modelica_metatype _inferred_clocks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_Cluster_collectInferredClock,2,0) {(void*) boxptr_NBPartitioning_Cluster_collectInferredClock,0}};
#define boxvar_NBPartitioning_Cluster_collectInferredClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_Cluster_collectInferredClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_Cluster_addToClockMap_findClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _info, modelica_metatype _clock_ptr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_Cluster_addToClockMap_findClock,2,0) {(void*) boxptr_NBPartitioning_Cluster_addToClockMap_findClock,0}};
#define boxvar_NBPartitioning_Cluster_addToClockMap_findClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_Cluster_addToClockMap_findClock)
PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_ClockedInfo_addSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_addSubClock,2,0) {(void*) boxptr_NBPartitioning_ClockedInfo_addSubClock,0}};
#define boxvar_NBPartitioning_ClockedInfo_addSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_addSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info, modelica_metatype _clock_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveSubClock,2,0) {(void*) boxptr_NBPartitioning_ClockedInfo_resolveSubClock,0}};
#define boxvar_NBPartitioning_ClockedInfo_resolveSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveImplicitSubClock(threadData_t *threadData, modelica_metatype _key, modelica_metatype _info, modelica_metatype _clock_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveImplicitSubClock,2,0) {(void*) boxptr_NBPartitioning_ClockedInfo_resolveImplicitSubClock,0}};
#define boxvar_NBPartitioning_ClockedInfo_resolveImplicitSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveImplicitSubClock)
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
  modelica_metatype omc_ret_;
  OMC_SO();
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
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,3) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 2);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 3);
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta6, 4);
          if (!optionNone(tmpMeta11)) goto tmp3_end;
          
          _cond = tmpMeta7;
          _stmt = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isClock(threadData, omc_NFExpression_typeOf(threadData, _cond))) goto tmp3_end;
          tmpMeta1 = omc_NBEquation_WhenStatement_toEquation(threadData, _stmt, (OMC_BOX_FIELD(_eqn, 5)), 0 /* false */);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctionExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _func = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype omc_ret_;
  OMC_SO();
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
          tmpMeta10 = omc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT3, _OMC_LIT17, _OMC_LIT19, tmpMeta5, mmc_mk_none(), tmpMeta6, _OMC_LIT5, _OMC_LIT23, tmpMeta7, tmpMeta8, listArray(tmpMeta9), _OMC_LIT24, _OMC_LIT25);
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
          tmpMeta16 = omc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT3, _OMC_LIT31, _OMC_LIT33, tmpMeta11, mmc_mk_none(), tmpMeta12, _OMC_LIT27, _OMC_LIT23, tmpMeta13, tmpMeta14, listArray(tmpMeta15), _OMC_LIT24, _OMC_LIT25);
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
          tmpMeta22 = omc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT3, _OMC_LIT39, _OMC_LIT41, tmpMeta17, mmc_mk_none(), tmpMeta18, _OMC_LIT35, _OMC_LIT23, tmpMeta19, tmpMeta20, listArray(tmpMeta21), _OMC_LIT24, _OMC_LIT25);
          tmpMeta1 = tmpMeta22;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = omc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT3, _OMC_LIT47, _OMC_LIT49, tmpMeta23, mmc_mk_none(), tmpMeta24, _OMC_LIT35, _OMC_LIT23, tmpMeta25, tmpMeta26, listArray(tmpMeta27), _OMC_LIT24, _OMC_LIT25);
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta29;
          modelica_string tmp30;
          modelica_string tmp31;
          modelica_string tmp32;
          modelica_string tmp33;
          
          /* Pattern matching succeeded */
          tmp30 = stringAppend(_OMC_LIT54,omc_NFExpression_toString(threadData, _exp));
          tmp31 = stringAppend(tmp30,_OMC_LIT55);
          tmp32 = stringAppend(tmp31,omc_NFType_toString(threadData, omc_NFExpression_typeOf(threadData, _exp)));
          tmp33 = stringAppend(tmp32,_OMC_LIT56);
          tmpMeta29 = mmc_mk_cons(tmp33, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta29);
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
  _func = tmpMeta1;

  tmpMeta34 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta35 = omc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, _func, tmpMeta34, omc_NFExpression_variability(threadData, _exp), 1, (OMC_BOX_FIELD(_func, 9))));
  _exp = tmpMeta35;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _call, modelica_boolean _basic)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _arg1 = NULL;
  modelica_metatype _arg2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _arg1 has no default value.
  // _arg2 has no default value.
  /* Pattern-matching assignment */
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFCall_arguments(threadData, _call);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          _arg1 = tmpMeta6;
          _arg2 = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(_arg1, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (listEmpty(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          if (!listEmpty(tmpMeta16)) goto tmp3_end;
          _arg1 = tmpMeta13;
          _arg2 = tmpMeta15;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!_basic) goto tmp3_end;
          tmpMeta17 = mmc_mk_cons(_arg1, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta19)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          if (listEmpty(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmpMeta21);
          tmpMeta23 = MMC_CDR(tmpMeta21);
          if (!listEmpty(tmpMeta23)) goto tmp3_end;
          _arg1 = tmpMeta18;
          _arg2 = tmpMeta20;
          /* Pattern matching succeeded */
          tmpMeta24 = mmc_mk_cons(_arg1, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_string tmp26;
          modelica_string tmp27;
          
          /* Pattern matching succeeded */
          tmp26 = stringAppend(_OMC_LIT57,omc_NFExpression_toString(threadData, _exp));
          tmp27 = stringAppend(tmp26,_OMC_LIT58);
          tmpMeta25 = mmc_mk_cons(tmp27, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta25);
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
  tmpMeta28 = tmpMeta1;
  if (listEmpty(tmpMeta28)) OMC_THROW_INTERNAL();
  tmpMeta29 = MMC_CAR(tmpMeta28);
  tmpMeta30 = MMC_CDR(tmpMeta28);
  if (listEmpty(tmpMeta30)) OMC_THROW_INTERNAL();
  tmpMeta31 = MMC_CAR(tmpMeta30);
  tmpMeta32 = MMC_CDR(tmpMeta30);
  if (!listEmpty(tmpMeta32)) OMC_THROW_INTERNAL();
  _arg1 = tmpMeta29;
  _arg2 = tmpMeta31;

  if(_basic)
  {
    _exp = (omc_NFType_isClock(threadData, omc_NFExpression_typeOf(threadData, _arg2))?omc_NBPartitioning_replaceClockedFunctionExp(threadData, _arg1):_exp);
  }
  else
  {
    _exp = omc_NBPartitioning_replaceClockedFunctionExp(threadData, _arg1);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_replaceClockedFunctions_replaceSample(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _call, modelica_metatype _basic)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = omc_unbox_integer(_basic);
  _exp = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, __omcQ_24in_5Fexp, _call, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _held_crefs)
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
      modelica_metatype _arg = NULL;
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _arg has no default value.
      // _call has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp10_1;
            tmp10_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (OMC_BOX_FIELD(_call, 2))), _OMC_LIT58, 1 /* true */, 0 /* false */);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 7; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (6 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT60), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 1 /* true */);
                  goto tmp9_done;
                }
                case 1: {
                  if (9 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT61), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 0 /* false */);
                  goto tmp9_done;
                }
                case 2: {
                  if (11 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT62), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 0 /* false */);
                  goto tmp9_done;
                }
                case 3: {
                  if (11 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT63), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 0 /* false */);
                  goto tmp9_done;
                }
                case 4: {
                  if (10 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT64), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 0 /* false */);
                  goto tmp9_done;
                }
                case 5: {
                  modelica_metatype tmpMeta12;
                  if (4 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT65), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  { /* match expression */
                    modelica_metatype tmp15_1;
                    tmp15_1 = omc_NFCall_arguments(threadData, (OMC_BOX_FIELD(_exp, 2)));
                    {
                      volatile mmc_switch_type tmp15;
                      int tmp16;
                      tmp15 = 0;
                      for (; tmp15 < 2; tmp15++) {
                        switch (MMC_SWITCH_CAST(tmp15)) {
                        case 0: {
                          modelica_metatype tmpMeta17;
                          modelica_metatype tmpMeta18;
                          if (listEmpty(tmp15_1)) goto tmp14_end;
                          tmpMeta17 = MMC_CAR(tmp15_1);
                          tmpMeta18 = MMC_CDR(tmp15_1);
                          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,6,2) == 0) goto tmp14_end;
                          if (!listEmpty(tmpMeta18)) goto tmp14_end;
                          _arg = tmpMeta17;
                          /* Pattern matching succeeded */
                          omc_UnorderedSet_add(threadData, (OMC_BOX_FIELD(_arg, 3)), _held_crefs);
                          tmpMeta12 = _arg;
                          goto tmp14_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta19;
                          modelica_string tmp20;
                          modelica_string tmp21;
                          
                          /* Pattern matching succeeded */
                          tmp20 = stringAppend(_OMC_LIT59,omc_NFExpression_toString(threadData, _exp));
                          tmp21 = stringAppend(tmp20,_OMC_LIT58);
                          tmpMeta19 = mmc_mk_cons(tmp21, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta19);
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
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctionExp(threadData, _arg);
                  goto tmp9_done;
                }
                case 6: {
                  
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

PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_addCrefToSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _set)
{
  modelica_metatype _var_ptr = NULL;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_ptr = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT67);
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

static modelica_metatype closure0_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}static modelica_metatype closure1_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}static modelica_metatype closure2_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_collectPartitioningCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _var_crefs)
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
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp10_1;
            tmp10_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (OMC_BOX_FIELD(_call, 2))), _OMC_LIT58, 1 /* true */, 0 /* false */);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 8; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (9 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT61), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 1: {
                  if (11 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT62), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 2: {
                  if (11 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT63), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 3: {
                  if (10 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT64), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 4: {
                  if (8 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT69), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 5: {
                  if (4 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT65), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 6: {
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta30;
                  if (6 != omc_string_len(tmp10_1) || strcmp(omc_string_data(_OMC_LIT60), omc_string_data(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  { /* match expression */
                    modelica_metatype tmp15_1;
                    tmp15_1 = omc_NFCall_arguments(threadData, (OMC_BOX_FIELD(_exp, 2)));
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
                          modelica_string tmp28;
                          modelica_string tmp29;
                          
                          /* Pattern matching succeeded */
                          tmp28 = stringAppend(_OMC_LIT68,omc_NFExpression_toString(threadData, _exp));
                          tmp29 = stringAppend(tmp28,_OMC_LIT58);
                          tmpMeta27 = mmc_mk_cons(tmp29, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta27);
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
                  tmpMeta30 = omc_mk_box1(0, _var_crefs);
                  tmpMeta7 = omc_NFExpression_mapShallow(threadData, _arg, (modelica_fnptr) omc_mk_box2(0,closure0_NBPartitioning_collectPartitioningCrefs,tmpMeta30));
                  goto tmp9_done;
                }
                case 7: {
                  modelica_metatype tmpMeta31;
                  
                  /* Pattern matching succeeded */
                  tmpMeta31 = omc_mk_box1(0, _var_crefs);
                  tmpMeta7 = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) omc_mk_box2(0,closure1_NBPartitioning_collectPartitioningCrefs,tmpMeta31));
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
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp35_1;
            tmp35_1 = omc_NBVariable_getVar(threadData, (OMC_BOX_FIELD(_exp, 3)), _OMC_LIT70);
            {
              modelica_metatype _children_vars = NULL;
              volatile mmc_switch_type tmp35;
              int tmp36;
              // _children_vars has no default value.
              tmp35 = 0;
              for (; tmp35 < 2; tmp35++) {
                switch (MMC_SWITCH_CAST(tmp35)) {
                case 0: {
                  modelica_metatype tmpMeta37;
                  modelica_metatype tmpMeta38;
                  modelica_metatype tmpMeta39;
                  modelica_metatype tmpMeta40;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp35_1,0,10) == 0) goto tmp34_end;
                  tmpMeta37 = OMC_BOX_FIELD(tmp35_1, 11);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,0,9) == 0) goto tmp34_end;
                  tmpMeta38 = OMC_BOX_FIELD(tmpMeta37, 2);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,14,3) == 0) goto tmp34_end;
                  tmpMeta39 = OMC_BOX_FIELD(tmpMeta38, 2);
                  
                  _children_vars = tmpMeta39;
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype __omcQ_24tmpVar27;
                    modelica_metatype* tmp41;
                    modelica_metatype tmpMeta42;
                    modelica_metatype __omcQ_24tmpVar26;
                    modelica_integer tmp43;
                    modelica_metatype _var_loopVar = 0;
                    modelica_metatype _var;
                    _var_loopVar = _children_vars;
                    tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar27 = tmpMeta42; /* defaultValue */
                    tmp41 = &__omcQ_24tmpVar27;
                    while(1) {
                      tmp43 = 1;
                      if (!listEmpty(_var_loopVar)) {
                        _var = MMC_CAR(_var_loopVar);
                        _var_loopVar = MMC_CDR(_var_loopVar);
                        tmp43--;
                      }
                      if (tmp43 == 0) {
                        __omcQ_24tmpVar26 = omc_NBVariable_getVarName(threadData, omc_PointerWeak_upgrade(threadData, _var));
                        *tmp41 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                        tmp41 = &MMC_CDR(*tmp41);
                      } else if (tmp43 == 1) {
                        break;
                      } else {
                        goto goto_33;
                      }
                    }
                    *tmp41 = mmc_mk_nil();
                    tmpMeta40 = __omcQ_24tmpVar27;
                  }
                  tmpMeta32 = tmpMeta40;
                  goto tmp34_done;
                }
                case 1: {
                  modelica_metatype tmpMeta44;
                  
                  /* Pattern matching succeeded */
                  tmpMeta44 = mmc_mk_cons((OMC_BOX_FIELD(_exp, 3)), MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta32 = tmpMeta44;
                  goto tmp34_done;
                }
                }
                goto tmp34_end;
                tmp34_end: ;
              }
              goto goto_33;
              goto_33:;
              goto goto_2;
              goto tmp34_done;
              tmp34_done:;
            }
          }
          _children = tmpMeta32;

          {
            modelica_metatype _child;
            for (tmpMeta45 = _children; !listEmpty(tmpMeta45); tmpMeta45=MMC_CDR(tmpMeta45))
            {
              _child = MMC_CAR(tmpMeta45);
              _stripped = omc_NFComponentRef_stripSubscriptsAll(threadData, _child);

              if((!omc_NBVariable_checkCref(threadData, _stripped, boxvar_NBVariable_isParamOrConst, _OMC_LIT71)))
              {
                omc_NBPartitioning_addCrefToSet(threadData, _stripped, _var_crefs);
              }
            }
          }
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta47;
          
          /* Pattern matching succeeded */
          tmpMeta47 = omc_mk_box1(0, _var_crefs);
          tmpMeta1 = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) omc_mk_box2(0,closure2_NBPartitioning_collectPartitioningCrefs,tmpMeta47));
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_sortClockedPartitions(threadData_t *threadData, modelica_metatype _unsorted)
{
  modelica_metatype _sorted = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _n;
  modelica_metatype _partitions = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _matching = NULL;
  modelica_metatype _index_map = NULL;
  modelica_metatype _partition_order = NULL;
  modelica_integer _j;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta65;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sorted = tmpMeta1;
  _n = listLength(_unsorted);
  _partitions = listArray(listReverse(_unsorted));
  _m = omc_NBAdjacency_IntMatrix_newBuilder(threadData, _n, 0 /* false */);
  _matching = omc_NBMatching_trivial(threadData, _n);
  _index_map = omc_UnorderedMap_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 1));
  // _partition_order has no default value.
  // _j has no default value.
  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _n;
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {

      omc_UnorderedMap_add(threadData, omc_NBPartition_Partition_getClocks(threadData, arrayGet(_partitions,_i) /* DAE.ASUB */, NULL, NULL), omc_mk_integer(_i), _index_map);
    }
  }

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _n;
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
    {

      {
        modelica_metatype _clock;
        for (tmpMeta5 = omc_UnorderedSet_toList(threadData, omc_NBPartition_Partition_getClockDependencies(threadData, arrayGet(_partitions,_i) /* DAE.ASUB */)); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
        {
          _clock = MMC_CAR(tmpMeta5);
          _j = omc_unbox_integer(omc_UnorderedMap_getSafe(threadData, _clock, _index_map, _OMC_LIT72));

          omc_NBAdjacency_IntMatrix_builderAdd(threadData, _m, _i, _j);
        }
      }
    }
  }

  _partition_order = omc_NBSorting_tarjanScalar(threadData, omc_NBAdjacency_IntMatrix_fromBuilder(threadData, _m, _n), _matching);

  {
    modelica_metatype _comp;
    for (tmpMeta10 = listReverse(_partition_order); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _comp = MMC_CAR(tmpMeta10);
      { /* match expression */
        modelica_metatype tmp14_1;
        tmp14_1 = _comp;
        {
          modelica_metatype _var_clock_map = NULL;
          modelica_metatype _part = NULL;
          modelica_metatype _sub_comps = NULL;
          modelica_metatype _sub_comp_vars = NULL;
          modelica_metatype _sub_comp_eqns = NULL;
          modelica_metatype _collector = NULL;
          modelica_metatype _var_clocks = NULL;
          modelica_metatype _baseClock = NULL;
          modelica_metatype _vars = NULL;
          modelica_metatype _eqns = NULL;
          modelica_metatype _clock = NULL;
          modelica_metatype _new_clock = NULL;
          volatile mmc_switch_type tmp14;
          int tmp15;
          // _var_clock_map has no default value.
          // _part has no default value.
          // _sub_comps has no default value.
          // _sub_comp_vars has no default value.
          // _sub_comp_eqns has no default value.
          // _collector has no default value.
          // _var_clocks has no default value.
          // _baseClock has no default value.
          // _vars has no default value.
          // _eqns has no default value.
          // _clock has no default value.
          // _new_clock has no default value.
          tmp14 = 0;
          for (; tmp14 < 2; tmp14++) {
            switch (MMC_SWITCH_CAST(tmp14)) {
            case 0: {
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_integer tmp18;
              modelica_metatype tmpMeta19;
              if (listEmpty(tmp14_1)) goto tmp13_end;
              tmpMeta16 = MMC_CAR(tmp14_1);
              tmpMeta17 = MMC_CDR(tmp14_1);
              tmp18 = omc_unbox_integer(tmpMeta16);
              if (!listEmpty(tmpMeta17)) goto tmp13_end;
              _j = tmp18  /* pattern as ty=Integer */;
              /* Pattern matching succeeded */
              tmpMeta19 = mmc_mk_cons(arrayGet(_partitions,_j) /* DAE.ASUB */, _sorted);
              tmpMeta11 = tmpMeta19;
              goto tmp13_done;
            }
            case 1: {
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_metatype tmpMeta24;
              modelica_metatype tmpMeta25;
              modelica_metatype tmpMeta26;
              modelica_integer tmp27;
              modelica_metatype tmpMeta28;
              modelica_metatype tmpMeta29;
              modelica_metatype tmpMeta30;
              modelica_metatype tmpMeta31;
              modelica_metatype tmpMeta32;
              modelica_metatype tmpMeta33;
              modelica_metatype tmpMeta56;
              modelica_metatype tmpMeta57;
              modelica_metatype tmpMeta58;
              modelica_metatype tmpMeta59;
              modelica_metatype tmpMeta60;
              modelica_metatype tmpMeta61;
              modelica_metatype tmpMeta62;
              modelica_metatype tmpMeta63;
              modelica_metatype tmpMeta64;
              
              /* Pattern matching succeeded */
              _var_clock_map = omc_UnorderedMap_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 1));

              {
                modelica_metatype _i;
                for (tmpMeta20 = _comp; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
                {
                  _i = MMC_CAR(tmpMeta20);
                  _part = arrayGet(_partitions,omc_unbox_integer(_i)) /* DAE.ASUB */;

                  {
                    modelica_metatype _var;
                    for (tmpMeta21 = omc_NBVariable_VariablePointers_toList(threadData, (OMC_BOX_FIELD(_part, 4))); !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
                    {
                      _var = MMC_CAR(tmpMeta21);
                      omc_UnorderedMap_add(threadData, _var, omc_NBPartition_Partition_getClocks(threadData, _part, NULL, NULL), _var_clock_map);
                    }
                  }
                }
              }

              /* Pattern-matching assignment */
              tmpMeta24 = _comp;
              if (listEmpty(tmpMeta24)) goto goto_12;
              tmpMeta25 = MMC_CAR(tmpMeta24);
              tmpMeta26 = MMC_CDR(tmpMeta24);
              tmp27 = omc_unbox_integer(tmpMeta25);
              _j = tmp27  /* pattern as ty=Integer */;
              _comp = tmpMeta26;

              _part = arrayGet(_partitions,_j) /* DAE.ASUB */;

              {
                modelica_metatype _i;
                for (tmpMeta28 = _comp; !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
                {
                  _i = MMC_CAR(tmpMeta28);
                  _part = omc_NBPartition_Partition_merge(threadData, _part, arrayGet(_partitions,omc_unbox_integer(_i)) /* DAE.ASUB */, 0 /* false */);
                }
              }

              omc_NBPartition_Partition_getClocks(threadData, _part ,&_baseClock ,NULL);

              omc_NBCausalize_simple(threadData, (OMC_BOX_FIELD(_part, 4)), (OMC_BOX_FIELD(_part, 6)), omc_NBPartition_Partition_getKind(threadData, _part), 2, _OMC_LIT73 ,&_sub_comps);

              _collector = mmc_mk_none();

              {
                modelica_metatype _sub_comp;
                for (tmpMeta30 = listReverse(_sub_comps); !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
                {
                  _sub_comp = MMC_CAR(tmpMeta30);
                  _sub_comp_vars = omc_NBStrongComponent_getVariables(threadData, _sub_comp);

                  _sub_comp_eqns = omc_NBStrongComponent_getEquations(threadData, _sub_comp);

                  _var_clocks = omc_UnorderedSet_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 13));

                  {
                    modelica_metatype _var;
                    for (tmpMeta31 = _sub_comp_vars; !listEmpty(tmpMeta31); tmpMeta31=MMC_CDR(tmpMeta31))
                    {
                      _var = MMC_CAR(tmpMeta31);
                      omc_UnorderedSet_add(threadData, omc_UnorderedMap_getSafe(threadData, _var, _var_clock_map, _OMC_LIT74), _var_clocks);
                    }
                  }

                  { /* match expression */
                    modelica_metatype tmp36_1;modelica_metatype tmp36_2;
                    tmp36_1 = _collector;
                    tmp36_2 = omc_UnorderedSet_toList(threadData, _var_clocks);
                    {
                      volatile mmc_switch_type tmp36;
                      int tmp37;
                      tmp36 = 0;
                      for (; tmp36 < 3; tmp36++) {
                        switch (MMC_SWITCH_CAST(tmp36)) {
                        case 0: {
                          modelica_metatype tmpMeta38;
                          modelica_metatype tmpMeta39;
                          modelica_metatype tmpMeta40;
                          if (!optionNone(tmp36_1)) goto tmp35_end;
                          if (listEmpty(tmp36_2)) goto tmp35_end;
                          tmpMeta38 = MMC_CAR(tmp36_2);
                          tmpMeta39 = MMC_CDR(tmp36_2);
                          if (!listEmpty(tmpMeta39)) goto tmp35_end;
                          _new_clock = tmpMeta38;
                          /* Pattern matching succeeded */
                          tmpMeta40 = omc_mk_box3(0, _sub_comp_vars, _sub_comp_eqns, _new_clock);
                          tmpMeta33 = mmc_mk_some(tmpMeta40);
                          goto tmp35_done;
                        }
                        case 1: {
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
                          if (optionNone(tmp36_1)) goto tmp35_end;
                          tmpMeta41 = OMC_BOX_FIELD(tmp36_1, 1);
                          tmpMeta42 = OMC_BOX_FIELD(tmpMeta41, 1);
                          tmpMeta43 = OMC_BOX_FIELD(tmpMeta41, 2);
                          tmpMeta44 = OMC_BOX_FIELD(tmpMeta41, 3);
                          if (listEmpty(tmp36_2)) goto tmp35_end;
                          tmpMeta45 = MMC_CAR(tmp36_2);
                          tmpMeta46 = MMC_CDR(tmp36_2);
                          if (!listEmpty(tmpMeta46)) goto tmp35_end;
                          _vars = tmpMeta42;
                          _eqns = tmpMeta43;
                          _clock = tmpMeta44;
                          _new_clock = tmpMeta45;
                          /* Pattern matching succeeded */
                          if(omc_NBPartitioning_BClock_isEqual(threadData, _clock, _new_clock))
                          {
                            tmpMeta47 = omc_mk_box3(0, listAppend(_sub_comp_vars, _vars), listAppend(_sub_comp_eqns, _eqns), _clock);
                            _collector = mmc_mk_some(tmpMeta47);
                          }
                          else
                          {
                            tmpMeta48 = omc_mk_box5(4, &NBPartition_Association_CLOCKED__desc, _clock, _baseClock, omc_UnorderedSet_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 13)), omc_mk_boolean(0 /* false */));
                            tmpMeta49 = omc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, omc_mk_integer(((modelica_integer) 0)), tmpMeta48, omc_NBVariable_VariablePointers_fromList(threadData, _vars, 0 /* false */), mmc_mk_none(), omc_NBEquation_EquationPointers_fromList(threadData, _eqns), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
                            _part = tmpMeta49;

                            tmpMeta50 = mmc_mk_cons(_part, _sorted);
                            _sorted = tmpMeta50;

                            tmpMeta51 = omc_mk_box3(0, _sub_comp_vars, _sub_comp_eqns, _new_clock);
                            _collector = mmc_mk_some(tmpMeta51);
                          }
                          tmpMeta33 = _collector;
                          goto tmp35_done;
                        }
                        case 2: {
                          modelica_metatype tmpMeta52;
                          modelica_string tmp53;
                          modelica_string tmp54;
                          modelica_string tmp55;
                          
                          /* Pattern matching succeeded */
                          tmp53 = stringAppend(_OMC_LIT75,omc_List_toString(threadData, omc_UnorderedSet_toList(threadData, _var_clocks), boxvar_NBPartitioning_BClock_toString, 4));
                          tmp54 = stringAppend(tmp53,_OMC_LIT76);
                          tmp55 = stringAppend(tmp54,omc_NBStrongComponent_toString(threadData, _sub_comp, ((modelica_integer) -1)));
                          tmpMeta52 = mmc_mk_cons(tmp55, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta52);
                          goto goto_34;
                          goto tmp35_done;
                        }
                        }
                        goto tmp35_end;
                        tmp35_end: ;
                      }
                      goto goto_34;
                      goto_34:;
                      goto goto_12;
                      goto tmp35_done;
                      tmp35_done:;
                    }
                  }
                  _collector = tmpMeta33;
                }
              }

              if(isSome(_collector))
              {
                /* Pattern-matching assignment */
                tmpMeta57 = _collector;
                if (optionNone(tmpMeta57)) goto goto_12;
                tmpMeta58 = OMC_BOX_FIELD(tmpMeta57, 1);
                tmpMeta59 = OMC_BOX_FIELD(tmpMeta58, 1);
                tmpMeta60 = OMC_BOX_FIELD(tmpMeta58, 2);
                tmpMeta61 = OMC_BOX_FIELD(tmpMeta58, 3);
                _vars = tmpMeta59;
                _eqns = tmpMeta60;
                _clock = tmpMeta61;

                tmpMeta62 = omc_mk_box5(4, &NBPartition_Association_CLOCKED__desc, _clock, _baseClock, omc_UnorderedSet_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 13)), omc_mk_boolean(0 /* false */));
                tmpMeta63 = omc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, omc_mk_integer(((modelica_integer) 0)), tmpMeta62, omc_NBVariable_VariablePointers_fromList(threadData, _vars, 0 /* false */), mmc_mk_none(), omc_NBEquation_EquationPointers_fromList(threadData, _eqns), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
                _part = tmpMeta63;

                tmpMeta64 = mmc_mk_cons(_part, _sorted);
                _sorted = tmpMeta64;
              }
              tmpMeta11 = _sorted;
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
      _sorted = tmpMeta11;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sorted;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_sortAndMergeClockedPartitions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype _info)
{
  modelica_metatype _partitions = NULL;
  modelica_metatype _clocked_partitions = NULL;
  modelica_metatype _new_clocked = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _clock_collector = NULL;
  modelica_metatype _base_clock_inferrence = NULL;
  modelica_metatype _clock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype _subClock = NULL;
  modelica_metatype _baseClock_opt = NULL;
  modelica_metatype _subClockMap = NULL;
  modelica_metatype _new_part = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partitions = __omcQ_24in_5Fpartitions;
  // _clocked_partitions has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_clocked = tmpMeta1;
  _clock_collector = omc_UnorderedMap_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 1));
  _base_clock_inferrence = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  // _clock has no default value.
  // _baseClock has no default value.
  // _subClock has no default value.
  // _baseClock_opt has no default value.
  // _subClockMap has no default value.
  // _new_part has no default value.
  _clocked_partitions = omc_List_splitOnTrue(threadData, _partitions, boxvar_NBPartition_Partition_isClocked ,&_partitions);

  {
    modelica_metatype _baseClock;
    for (tmpMeta2 = omc_UnorderedMap_valueList(threadData, (OMC_BOX_FIELD(_info, 2))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _baseClock = MMC_CAR(tmpMeta2);
      omc_UnorderedMap_add(threadData, _baseClock, omc_UnorderedMap_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 1)), _clock_collector);
    }
  }

  {
    modelica_metatype _partition;
    for (tmpMeta4 = _clocked_partitions; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _partition = MMC_CAR(tmpMeta4);
      _clock = omc_NBPartition_Partition_getClocks(threadData, _partition ,&_baseClock_opt ,NULL);

      { /* match expression */
        modelica_metatype tmp8_1;
        tmp8_1 = _baseClock_opt;
        {
          volatile mmc_switch_type tmp8;
          int tmp9;
          tmp8 = 0;
          for (; tmp8 < 2; tmp8++) {
            switch (MMC_SWITCH_CAST(tmp8)) {
            case 0: {
              modelica_metatype tmpMeta10;
              if (optionNone(tmp8_1)) goto tmp7_end;
              tmpMeta10 = OMC_BOX_FIELD(tmp8_1, 1);
              _clock = tmpMeta10;
              /* Pattern matching succeeded */
              tmpMeta5 = _clock;
              goto tmp7_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta5 = _clock;
              goto tmp7_done;
            }
            }
            goto tmp7_end;
            tmp7_end: ;
          }
          goto goto_6;
          goto_6:;
          OMC_THROW_INTERNAL();
          goto tmp7_done;
          tmp7_done:;
        }
      }
      _clock = tmpMeta5;

      {
        modelica_metatype _var;
        for (tmpMeta11 = omc_NBVariable_VariablePointers_toList(threadData, (OMC_BOX_FIELD(_partition, 4))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
        {
          _var = MMC_CAR(tmpMeta11);
          omc_UnorderedMap_add(threadData, omc_NBVariable_getVarName(threadData, _var), _clock, _base_clock_inferrence);
        }
      }
    }
  }

  {
    modelica_metatype _partition;
    for (tmpMeta14 = _clocked_partitions; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
    {
      _partition = MMC_CAR(tmpMeta14);
      _clock = omc_NBPartition_Partition_getClocks(threadData, _partition ,&_baseClock_opt ,NULL);

      if(isSome(_baseClock_opt))
      {
        /* Pattern-matching assignment */
        tmpMeta15 = _baseClock_opt;
        if (optionNone(tmpMeta15)) OMC_THROW_INTERNAL();
        tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 1);
        _baseClock = tmpMeta16;

        _baseClock = omc_NBPartitioning_BClock_baseClockInferrence(threadData, _baseClock, _base_clock_inferrence);

        _subClock = _clock;
      }
      else
      {
        _baseClock = omc_NBPartitioning_BClock_baseClockInferrence(threadData, _clock, _base_clock_inferrence);

        _subClock = _OMC_LIT79;
      }

      _partition = omc_NBPartition_Partition_setClocks(threadData, _partition, _subClock, mmc_mk_some(_baseClock));

      _subClockMap = omc_UnorderedMap_getSafe(threadData, _baseClock, _clock_collector, _OMC_LIT80);

      { /* match expression */
        modelica_metatype tmp20_1;
        tmp20_1 = omc_UnorderedMap_get(threadData, _subClock, _subClockMap);
        {
          volatile mmc_switch_type tmp20;
          int tmp21;
          tmp20 = 0;
          for (; tmp20 < 2; tmp20++) {
            switch (MMC_SWITCH_CAST(tmp20)) {
            case 0: {
              modelica_metatype tmpMeta22;
              if (optionNone(tmp20_1)) goto tmp19_end;
              tmpMeta22 = OMC_BOX_FIELD(tmp20_1, 1);
              _new_part = tmpMeta22;
              /* Pattern matching succeeded */
              tmpMeta17 = omc_NBPartition_Partition_merge(threadData, _new_part, _partition, 1 /* true */);
              goto tmp19_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta17 = _partition;
              goto tmp19_done;
            }
            }
            goto tmp19_end;
            tmp19_end: ;
          }
          goto goto_18;
          goto_18:;
          OMC_THROW_INTERNAL();
          goto tmp19_done;
          tmp19_done:;
        }
      }
      _new_part = tmpMeta17;

      omc_UnorderedMap_add(threadData, _subClock, _new_part, _subClockMap);
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta24 = omc_UnorderedMap_toList(threadData, _clock_collector); !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
    {
      _tpl = MMC_CAR(tmpMeta24);
      /* Pattern-matching assignment */
      tmpMeta25 = _tpl;
      tmpMeta26 = OMC_BOX_FIELD(tmpMeta25, 1);
      tmpMeta27 = OMC_BOX_FIELD(tmpMeta25, 2);
      _baseClock = tmpMeta26;
      _subClockMap = tmpMeta27;

      tmpMeta28 = mmc_mk_cons(omc_NBPartitioning_sortClockedPartitions(threadData, omc_UnorderedMap_valueList(threadData, _subClockMap)), _new_clocked);
      _new_clocked = tmpMeta28;
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype tmpMeta31;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp32;
    modelica_metatype _partition_loopVar = 0;
    modelica_metatype tmpMeta33;
    modelica_metatype _partition;
    tmpMeta33 = mmc_mk_cons(_partitions, _new_clocked);
    _partition_loopVar = listReverse(tmpMeta33);
    tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta31; /* defaultValue */
    while(1) {
      tmp32 = 1;
      if (!listEmpty(_partition_loopVar)) {
        _partition = MMC_CAR(_partition_loopVar);
        _partition_loopVar = MMC_CDR(_partition_loopVar);
        tmp32--;
      }
      if (tmp32 == 0) {
        __omcQ_24tmpVar28 = _partition;
        __omcQ_24tmpVar29 = listAppend(__omcQ_24tmpVar28, __omcQ_24tmpVar29);
      } else if (tmp32 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    tmpMeta30 = __omcQ_24tmpVar29;
  }
  _partitions = tmpMeta30;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _partitions;
  return omc_ret_;
}

static modelica_metatype closure3_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}static modelica_metatype closure4_NBPartitioning_Cluster_addElement(threadData_t *thData, modelica_metatype closure, modelica_metatype cluster_opt)
{
  modelica_metatype cref = OMC_BOX_FIELD(closure, 1);
  modelica_metatype ty = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBPartitioning_Cluster_addElement(thData, cluster_opt, cref, ty);
}static modelica_metatype closure5_NBPartitioning_Cluster_addElement(threadData_t *thData, modelica_metatype closure, modelica_metatype cluster_opt)
{
  modelica_metatype cref = OMC_BOX_FIELD(closure, 1);
  modelica_metatype ty = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBPartitioning_Cluster_addElement(thData, cluster_opt, cref, ty);
}static modelica_metatype closure6_NBPartition_Partition_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype partition)
{
  modelica_metatype level = OMC_BOX_FIELD(closure, 1);
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
  modelica_metatype _marked_vars = NULL;
  modelica_metatype _single_vars = NULL;
  modelica_metatype _held_crefs = NULL;
  modelica_metatype _clock_map = NULL;
  modelica_metatype _infer_del = NULL;
  modelica_metatype _index = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta29;
  modelica_string tmp30;
  modelica_string tmp31;
  modelica_metatype tmpMeta32;
  modelica_string tmp36;
  modelica_string tmp37;
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
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  modelica_string tmp60;
  modelica_metatype tmpMeta61;
  modelica_string tmp62;
  modelica_string tmp63;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partitions has no default value.
  _eqn_dsf = omc_NBPartitioning_DisjointSetForest_new(threadData, omc_ExpandableArray_getLastUsedIndex(threadData, (OMC_BOX_FIELD(_equations, 3))));
  _var_map = arrayCreate(omc_ExpandableArray_getLastUsedIndex(threadData, (OMC_BOX_FIELD(_variables, 3))), omc_mk_integer(((modelica_integer) -1)));
  // _eqn has no default value.
  // _var has no default value.
  // _var_crefs has no default value.
  // _var_indices has no default value.
  // _part_idx has no default value.
  _cluster_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 1));
  // _name_cref has no default value.
  // _marked_vars has no default value.
  // _single_vars has no default value.
  _held_crefs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _clock_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  _infer_del = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _index = omc_Pointer_create(threadData, omc_mk_integer(((modelica_integer) 1)));
  {
    modelica_metatype _eq_idx;
    for (tmpMeta1 = omc_UnorderedMap_valueList(threadData, (OMC_BOX_FIELD(_clocked, 2))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq_idx = MMC_CAR(tmpMeta1);
      if((omc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _clocked, omc_unbox_integer(_eq_idx));

        omc_NBPartitioning_BClock_add(threadData, omc_Pointer_access(threadData, _eqn), _info);
      }
    }
  }

  {
    modelica_metatype _eq_idx;
    for (tmpMeta3 = omc_UnorderedMap_valueList(threadData, (OMC_BOX_FIELD(_equations, 2))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eq_idx = MMC_CAR(tmpMeta3);
      if((omc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _equations, omc_unbox_integer(_eq_idx));

        omc_NBPartitioning_BClock_add(threadData, omc_Pointer_access(threadData, _eqn), _info);

        _var_crefs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

        tmpMeta4 = omc_mk_box1(0, _var_crefs);
        omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, _eqn), (modelica_fnptr) omc_mk_box2(0,closure3_NBPartitioning_collectPartitioningCrefs,tmpMeta4), mmc_mk_none(), boxvar_NFExpression_fakeMap);

        {
          modelica_metatype __omcQ_24tmpVar31;
          modelica_metatype* tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype __omcQ_24tmpVar30;
          modelica_integer tmp8;
          modelica_metatype _cref_loopVar = 0;
          modelica_metatype _cref;
          _cref_loopVar = omc_UnorderedSet_toList(threadData, _var_crefs);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar31 = tmpMeta7; /* defaultValue */
          tmp6 = &__omcQ_24tmpVar31;
          while(1) {
            tmp8 = 1;
            if (!listEmpty(_cref_loopVar)) {
              _cref = MMC_CAR(_cref_loopVar);
              _cref_loopVar = MMC_CDR(_cref_loopVar);
              tmp8--;
            }
            if (tmp8 == 0) {
              __omcQ_24tmpVar30 = omc_mk_integer(omc_NBVariable_VariablePointers_getVarIndex(threadData, _variables, _cref));
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
        _var_indices = tmpMeta5;

        {
          modelica_metatype __omcQ_24tmpVar33;
          modelica_metatype* tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype __omcQ_24tmpVar32;
          modelica_integer tmp12;
          modelica_metatype _i_loopVar = 0;
          modelica_metatype _i;
          _i_loopVar = _var_indices;
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar33 = tmpMeta11; /* defaultValue */
          tmp10 = &__omcQ_24tmpVar33;
          while(1) {
            tmp12 = 1;
            while (!listEmpty(_i_loopVar)) {
              _i = MMC_CAR(_i_loopVar);
              _i_loopVar = MMC_CDR(_i_loopVar);
              if ((omc_unbox_integer(_i) > ((modelica_integer) 0))) {
                tmp12--;
                break;
              }
            }
            if (tmp12 == 0) {
              __omcQ_24tmpVar32 = _i;
              *tmp10 = mmc_mk_cons(__omcQ_24tmpVar32,0);
              tmp10 = &MMC_CDR(*tmp10);
            } else if (tmp12 == 1) {
              break;
            } else {
              OMC_THROW_INTERNAL();
            }
          }
          *tmp10 = mmc_mk_nil();
          tmpMeta9 = __omcQ_24tmpVar33;
        }
        _var_indices = tmpMeta9;

        {
          modelica_metatype __omcQ_24tmpVar35;
          modelica_metatype* tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype __omcQ_24tmpVar34;
          modelica_integer tmp17;
          modelica_metatype _j_loopVar = 0;
          modelica_metatype _j;
          _j_loopVar = _var_indices;
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar35 = tmpMeta16; /* defaultValue */
          tmp15 = &__omcQ_24tmpVar35;
          while(1) {
            tmp17 = 1;
            while (!listEmpty(_j_loopVar)) {
              _j = MMC_CAR(_j_loopVar);
              _j_loopVar = MMC_CDR(_j_loopVar);
              if ((omc_unbox_integer(arrayGet(_var_map,omc_unbox_integer(_j)) /* DAE.ASUB */) > ((modelica_integer) 0))) {
                tmp17--;
                break;
              }
            }
            if (tmp17 == 0) {
              __omcQ_24tmpVar34 = arrayGet(_var_map,omc_unbox_integer(_j)) /* DAE.ASUB */;
              *tmp15 = mmc_mk_cons(__omcQ_24tmpVar34,0);
              tmp15 = &MMC_CDR(*tmp15);
            } else if (tmp17 == 1) {
              break;
            } else {
              OMC_THROW_INTERNAL();
            }
          }
          *tmp15 = mmc_mk_nil();
          tmpMeta14 = __omcQ_24tmpVar35;
        }
        tmpMeta13 = mmc_mk_cons(_eq_idx, tmpMeta14);
        _part_idx = omc_NBPartitioning_DisjointSetForest_unite(threadData, _eqn_dsf, tmpMeta13);

        {
          modelica_metatype _i;
          for (tmpMeta18 = _var_indices; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
          {
            _i = MMC_CAR(tmpMeta18);
            arrayUpdate(_var_map,omc_unbox_integer(_i),omc_mk_integer(_part_idx));
          }
        }
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar37;
    modelica_metatype* tmp22;
    modelica_metatype tmpMeta23;
    modelica_metatype __omcQ_24tmpVar36;
    modelica_integer tmp24;
    modelica_metatype _var_idx_loopVar = 0;
    modelica_metatype _var_idx;
    _var_idx_loopVar = omc_UnorderedMap_valueList(threadData, (OMC_BOX_FIELD(_variables, 2)));
    tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar37 = tmpMeta23; /* defaultValue */
    tmp22 = &__omcQ_24tmpVar37;
    while(1) {
      tmp24 = 1;
      if (!listEmpty(_var_idx_loopVar)) {
        _var_idx = MMC_CAR(_var_idx_loopVar);
        _var_idx_loopVar = MMC_CDR(_var_idx_loopVar);
        tmp24--;
      }
      if (tmp24 == 0) {
        __omcQ_24tmpVar36 = omc_mk_boolean((omc_unbox_integer(arrayGet(_var_map,omc_unbox_integer(_var_idx)) /* DAE.ASUB */) < ((modelica_integer) 0)));
        *tmp22 = mmc_mk_cons(__omcQ_24tmpVar36,0);
        tmp22 = &MMC_CDR(*tmp22);
      } else if (tmp24 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp22 = mmc_mk_nil();
    tmpMeta21 = __omcQ_24tmpVar37;
  }
  _marked_vars = listArray(tmpMeta21);

  {
    modelica_metatype __omcQ_24tmpVar39;
    modelica_metatype* tmp26;
    modelica_metatype tmpMeta27;
    modelica_metatype __omcQ_24tmpVar38;
    modelica_integer tmp28;
    modelica_metatype _var_ptr_loopVar = 0;
    modelica_metatype _var_ptr;
    _var_ptr_loopVar = omc_NBVariable_VariablePointers_getMarkedVars(threadData, _variables, _marked_vars);
    tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar39 = tmpMeta27; /* defaultValue */
    tmp26 = &__omcQ_24tmpVar39;
    while(1) {
      tmp28 = 1;
      if (!listEmpty(_var_ptr_loopVar)) {
        _var_ptr = MMC_CAR(_var_ptr_loopVar);
        _var_ptr_loopVar = MMC_CDR(_var_ptr_loopVar);
        tmp28--;
      }
      if (tmp28 == 0) {
        __omcQ_24tmpVar38 = _var_ptr;
        *tmp26 = mmc_mk_cons(__omcQ_24tmpVar38,0);
        tmp26 = &MMC_CDR(*tmp26);
      } else if (tmp28 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp26 = mmc_mk_nil();
    tmpMeta25 = __omcQ_24tmpVar39;
  }
  _single_vars = tmpMeta25;

  if((!listEmpty(_single_vars)))
  {
    tmp30 = stringAppend(_OMC_LIT81,omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind));
    tmp31 = stringAppend(tmp30,_OMC_LIT82);
    {
      modelica_metatype __omcQ_24tmpVar43;
      modelica_metatype* tmp33;
      modelica_metatype tmpMeta34;
      modelica_string __omcQ_24tmpVar42;
      modelica_integer tmp35;
      modelica_metatype _var_ptr_loopVar = 0;
      modelica_metatype _var_ptr;
      _var_ptr_loopVar = _single_vars;
      tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar43 = tmpMeta34; /* defaultValue */
      tmp33 = &__omcQ_24tmpVar43;
      while(1) {
        tmp35 = 1;
        if (!listEmpty(_var_ptr_loopVar)) {
          _var_ptr = MMC_CAR(_var_ptr_loopVar);
          _var_ptr_loopVar = MMC_CDR(_var_ptr_loopVar);
          tmp35--;
        }
        if (tmp35 == 0) {
          __omcQ_24tmpVar42 = omc_NBVariable_toString(threadData, omc_Pointer_access(threadData, _var_ptr), _OMC_LIT10);
          *tmp33 = mmc_mk_cons(__omcQ_24tmpVar42,0);
          tmp33 = &MMC_CDR(*tmp33);
        } else if (tmp35 == 1) {
          break;
        } else {
          OMC_THROW_INTERNAL();
        }
      }
      *tmp33 = mmc_mk_nil();
      tmpMeta32 = __omcQ_24tmpVar43;
    }
    tmp36 = stringAppend(tmp31,stringDelimitList(tmpMeta32, _OMC_LIT83));
    tmp37 = stringAppend(tmp36,_OMC_LIT84);
    tmpMeta29 = mmc_mk_cons(tmp37, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta29);

    OMC_THROW_INTERNAL();
  }

  {
    modelica_metatype _eq_idx;
    for (tmpMeta38 = omc_UnorderedMap_valueList(threadData, (OMC_BOX_FIELD(_equations, 2))); !listEmpty(tmpMeta38); tmpMeta38=MMC_CDR(tmpMeta38))
    {
      _eq_idx = MMC_CAR(tmpMeta38);
      if((omc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _equations, omc_unbox_integer(_eq_idx));

        _name_cref = omc_NBEquation_Equation_getEqnName(threadData, _eqn);

        _part_idx = omc_NBPartitioning_DisjointSetForest_find(threadData, _eqn_dsf, omc_unbox_integer(_eq_idx));

        tmpMeta39 = omc_mk_box2(0, _name_cref, omc_mk_integer(1));
        omc_UnorderedMap_addUpdate(threadData, omc_mk_integer(_part_idx), (modelica_fnptr) omc_mk_box2(0,closure4_NBPartitioning_Cluster_addElement,tmpMeta39), _cluster_map);
      }
    }
  }

  {
    modelica_metatype _var_idx;
    for (tmpMeta41 = omc_UnorderedMap_valueList(threadData, (OMC_BOX_FIELD(_variables, 2))); !listEmpty(tmpMeta41); tmpMeta41=MMC_CDR(tmpMeta41))
    {
      _var_idx = MMC_CAR(tmpMeta41);
      if((omc_unbox_integer(_var_idx) > ((modelica_integer) 0)))
      {
        _var = omc_NBVariable_VariablePointers_getVarAt(threadData, _variables, omc_unbox_integer(_var_idx));

        _name_cref = omc_NBVariable_getVarName(threadData, _var);

        _part_idx = omc_NBPartitioning_DisjointSetForest_find(threadData, _eqn_dsf, omc_unbox_integer(arrayGet(_var_map,omc_unbox_integer(_var_idx)) /* DAE.ASUB */));

        tmpMeta42 = omc_mk_box2(0, _name_cref, omc_mk_integer(2));
        omc_UnorderedMap_addUpdate(threadData, omc_mk_integer(_part_idx), (modelica_fnptr) omc_mk_box2(0,closure5_NBPartitioning_Cluster_addElement,tmpMeta42), _cluster_map);
      }
    }
  }

  {
    modelica_metatype _cluster;
    for (tmpMeta44 = omc_UnorderedMap_valueList(threadData, _cluster_map); !listEmpty(tmpMeta44); tmpMeta44=MMC_CDR(tmpMeta44))
    {
      _cluster = MMC_CAR(tmpMeta44);
      omc_NBPartitioning_Cluster_addToClockMap(threadData, _cluster, _equations, _info, _clock_map);
    }
  }

  omc_NBPartitioning_ClockedInfo_resolveSubClocks(threadData, _info, _clock_map);

  {
    modelica_metatype __omcQ_24tmpVar45;
    modelica_metatype* tmp47;
    modelica_metatype tmpMeta48;
    modelica_metatype __omcQ_24tmpVar44;
    modelica_integer tmp49;
    modelica_metatype _cl_loopVar = 0;
    modelica_metatype _cl;
    _cl_loopVar = omc_UnorderedMap_valueList(threadData, _cluster_map);
    tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar45 = tmpMeta48; /* defaultValue */
    tmp47 = &__omcQ_24tmpVar45;
    while(1) {
      tmp49 = 1;
      if (!listEmpty(_cl_loopVar)) {
        _cl = MMC_CAR(_cl_loopVar);
        _cl_loopVar = MMC_CDR(_cl_loopVar);
        tmp49--;
      }
      if (tmp49 == 0) {
        __omcQ_24tmpVar44 = omc_NBPartitioning_Cluster_toPartition(threadData, _cl, _variables, _equations, (modelica_integer)_kind, _info, _held_crefs, _infer_del);
        *tmp47 = mmc_mk_cons(__omcQ_24tmpVar44,0);
        tmp47 = &MMC_CDR(*tmp47);
      } else if (tmp49 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp47 = mmc_mk_nil();
    tmpMeta46 = __omcQ_24tmpVar45;
  }
  _partitions = tmpMeta46;

  {
    modelica_metatype __omcQ_24tmpVar47;
    modelica_metatype* tmp51;
    modelica_metatype tmpMeta52;
    modelica_metatype __omcQ_24tmpVar46;
    modelica_integer tmp53;
    modelica_metatype _part_loopVar = 0;
    modelica_metatype _part;
    _part_loopVar = _partitions;
    tmpMeta52 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar47 = tmpMeta52; /* defaultValue */
    tmp51 = &__omcQ_24tmpVar47;
    while(1) {
      tmp53 = 1;
      if (!listEmpty(_part_loopVar)) {
        _part = MMC_CAR(_part_loopVar);
        _part_loopVar = MMC_CDR(_part_loopVar);
        tmp53--;
      }
      if (tmp53 == 0) {
        __omcQ_24tmpVar46 = omc_NBPartition_Partition_updateHeldVars(threadData, _part, _held_crefs);
        *tmp51 = mmc_mk_cons(__omcQ_24tmpVar46,0);
        tmp51 = &MMC_CDR(*tmp51);
      } else if (tmp53 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp51 = mmc_mk_nil();
    tmpMeta50 = __omcQ_24tmpVar47;
  }
  _partitions = tmpMeta50;

  {
    modelica_metatype __omcQ_24tmpVar49;
    modelica_metatype* tmp55;
    modelica_metatype tmpMeta56;
    modelica_metatype __omcQ_24tmpVar48;
    modelica_integer tmp57;
    modelica_metatype _partition_loopVar = 0;
    modelica_metatype _partition;
    _partition_loopVar = omc_NBPartitioning_sortAndMergeClockedPartitions(threadData, _partitions, _info);
    tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar49 = tmpMeta56; /* defaultValue */
    tmp55 = &__omcQ_24tmpVar49;
    while(1) {
      tmp57 = 1;
      while (!listEmpty(_partition_loopVar)) {
        _partition = MMC_CAR(_partition_loopVar);
        _partition_loopVar = MMC_CDR(_partition_loopVar);
        if ((!omc_NBPartition_Partition_isEmpty(threadData, _partition))) {
          tmp57--;
          break;
        }
      }
      if (tmp57 == 0) {
        __omcQ_24tmpVar48 = omc_NBPartition_Partition_setIndex(threadData, _partition, _index);
        *tmp55 = mmc_mk_cons(__omcQ_24tmpVar48,0);
        tmp55 = &MMC_CDR(*tmp55);
      } else if (tmp57 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp55 = mmc_mk_nil();
    tmpMeta54 = __omcQ_24tmpVar49;
  }
  _partitions = tmpMeta54;

  {
    modelica_metatype _unused_infer;
    for (tmpMeta58 = omc_UnorderedSet_toList(threadData, _infer_del); !listEmpty(tmpMeta58); tmpMeta58=MMC_CDR(tmpMeta58))
    {
      _unused_infer = MMC_CAR(tmpMeta58);
      omc_UnorderedMap_remove(threadData, _unused_infer, (OMC_BOX_FIELD(_info, 2)));

      omc_UnorderedMap_remove(threadData, _unused_infer, (OMC_BOX_FIELD(_info, 5)));
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT88))
  {
    tmp60 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT85),_OMC_LIT83);
    tmpMeta61 = omc_mk_box1(0, omc_mk_integer(((modelica_integer) 2)));
    tmp62 = stringAppend(tmp60,omc_List_toString(threadData, _partitions, (modelica_fnptr) omc_mk_box2(0,closure6_NBPartition_Partition_toString,tmpMeta61), 6));
    tmp63 = stringAppend(tmp62,_OMC_LIT83);
    fputs(omc_string_data(tmp63),stdout);

    fputs(omc_string_data(omc_NBPartitioning_ClockedInfo_toString(threadData, _info)),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _partitions;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _partitions = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _partitions = omc_NBPartitioning_partitioningClocked(threadData, tmp1, _variables, _equations, _clocks, _clocked, _info);
  /* skip box _partitions; list<NBPartition.Partition> */
  return _partitions;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_metatype _partitions = NULL;
  modelica_metatype _clone_vars = NULL;
  modelica_metatype _clone_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partitions has no default value.
  // _clone_vars has no default value.
  // _clone_eqns has no default value.
  _clone_vars = omc_NBVariable_VariablePointers_clone(threadData, _variables, 1 /* true */);

  _clone_eqns = omc_NBEquation_EquationPointers_clone(threadData, _equations, 1 /* true */);

  tmpMeta2 = omc_mk_box7(3, &NBPartition_Association_CONTINUOUS__desc, omc_mk_integer((modelica_integer)_kind), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
  tmpMeta3 = omc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, omc_mk_integer(((modelica_integer) 1)), tmpMeta2, _clone_vars, mmc_mk_none(), _clone_eqns, mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
  tmpMeta1 = mmc_mk_cons(tmpMeta3, MMC_REFSTRUCTLIT(mmc_nil));
  _partitions = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _partitions;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _partitions = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _partitions = omc_NBPartitioning_partitioningNone(threadData, tmp1, _variables, _equations, _clocks, _clocked, _info);
  /* skip box _partitions; list<NBPartition.Partition> */
  return _partitions;
}

DLLModelDirection
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
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _root has no default value.
  {
    modelica_metatype __omcQ_24tmpVar51;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar50;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _indices;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar51 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar51;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar50 = omc_mk_integer(omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, omc_unbox_integer(_i)));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar50,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar51;
  }
  _roots = tmpMeta1;
  _parent = omc_Pointer_access(threadData, (OMC_BOX_FIELD(_dsf, 2)));
  _rank = omc_Pointer_access(threadData, (OMC_BOX_FIELD(_dsf, 3)));
  // _maxRank has no default value.
  _tied = 0 /* false */;
  _root = omc_unbox_integer(listHead(_roots));

  _maxRank = omc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */);

  {
    modelica_metatype _r;
    for (tmpMeta5 = listRest(_roots); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _r = MMC_CAR(tmpMeta5);
      if((omc_unbox_integer(_r) != _root))
      {
        if((omc_unbox_integer(arrayGet(_rank,omc_unbox_integer(_r)) /* DAE.ASUB */) > _maxRank))
        {
          _root = omc_unbox_integer(_r);

          _maxRank = omc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */);

          _tied = 0 /* false */;
        }
        else
        {
          if((omc_unbox_integer(arrayGet(_rank,omc_unbox_integer(_r)) /* DAE.ASUB */) == _maxRank))
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
      arrayUpdate(_parent,omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, omc_unbox_integer(_r)),omc_mk_integer(_root));
    }
  }

  if(_tied)
  {
    arrayUpdate(_rank,_root,omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */))));
  }

  omc_Pointer_update(threadData, (OMC_BOX_FIELD(_dsf, 2)), _parent);

  omc_Pointer_update(threadData, (OMC_BOX_FIELD(_dsf, 3)), _rank);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _root;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_unite(threadData_t *threadData, modelica_metatype _dsf, modelica_metatype _indices)
{
  modelica_integer _root;
  modelica_metatype out_root;
  _root = omc_NBPartitioning_DisjointSetForest_unite(threadData, _dsf, _indices);
  out_root = omc_mk_icon(_root);
  return out_root;
}

DLLModelDirection
modelica_integer omc_NBPartitioning_DisjointSetForest_find(threadData_t *threadData, modelica_metatype _dsf, modelica_integer __omcQ_24in_5Findex)
{
  modelica_integer _index;
  modelica_metatype _parent = NULL;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _index = __omcQ_24in_5Findex;
  _parent = omc_Pointer_access(threadData, (OMC_BOX_FIELD(_dsf, 2)));
  while(1)
  {
    if(!(_index != omc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */))) break;
    arrayUpdate(_parent,_index,arrayGet(_parent,omc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */)) /* DAE.ASUB */);

    _index = omc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */);
  }

  omc_Pointer_update(threadData, (OMC_BOX_FIELD(_dsf, 2)), _parent);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _index;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_find(threadData_t *threadData, modelica_metatype _dsf, modelica_metatype __omcQ_24in_5Findex)
{
  modelica_integer tmp1;
  modelica_integer _index;
  modelica_metatype out_index;
  tmp1 = omc_unbox_integer(__omcQ_24in_5Findex);
  _index = omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, tmp1);
  out_index = omc_mk_icon(_index);
  return out_index;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_DisjointSetForest_new(threadData_t *threadData, modelica_integer _n)
{
  modelica_metatype _dsf = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dsf has no default value.
  {
    modelica_metatype __omcQ_24tmpVar53;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar52;
    modelica_integer tmp4;
    modelica_integer tmp5;
    modelica_integer tmp6;
    modelica_integer _i;
    tmp5 = 1 /* Range step-value */;
    tmp6 = _n /* Range stop-value */;
    _i = ((modelica_integer) 1) /* Range start-value */;
    _i = (((modelica_integer) 1) /* Range start-value */)-tmp5;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar53 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar53;
    while(1) {
      tmp4 = 1;
      if (tmp5 > 0 ? _i+tmp5 <= tmp6 : _i+tmp5 >= tmp6) {
        _i += tmp5;
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar52 = omc_mk_integer(_i);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar52,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar53;
  }
  tmpMeta7 = omc_mk_box3(3, &NBPartitioning_DisjointSetForest_FOREST__desc, omc_Pointer_create(threadData, listArray(tmpMeta1)), omc_Pointer_create(threadData, arrayCreate(_n, omc_mk_integer(((modelica_integer) 0)))));
  _dsf = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _dsf;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_new(threadData_t *threadData, modelica_metatype _n)
{
  modelica_integer tmp1;
  modelica_metatype _dsf = NULL;
  tmp1 = omc_unbox_integer(_n);
  _dsf = omc_NBPartitioning_DisjointSetForest_new(threadData, tmp1);
  /* skip box _dsf; NBPartitioning.DisjointSetForest */
  return _dsf;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBPartitioning_Cluster_removeInferredClock(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _inferred_clocks)
{
  modelica_boolean _delete;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _delete has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Pointer_access(threadData, _eqn);
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 3);
          
          _lhs = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_UnorderedSet_contains(threadData, _lhs, _inferred_clocks);
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
  _delete = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _delete;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_Cluster_removeInferredClock(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _inferred_clocks)
{
  modelica_boolean _delete;
  modelica_metatype out_delete;
  _delete = omc_NBPartitioning_Cluster_removeInferredClock(threadData, _eqn, _inferred_clocks);
  out_delete = omc_mk_icon(_delete);
  return out_delete;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBPartitioning_Cluster_collectInferredClock(threadData_t *threadData, modelica_metatype _var, modelica_metatype _inferred_clocks)
{
  modelica_boolean _delete;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _delete = omc_NBVariable_isClock(threadData, _var);
  if(_delete)
  {
    omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _var), _inferred_clocks);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _delete;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_Cluster_collectInferredClock(threadData_t *threadData, modelica_metatype _var, modelica_metatype _inferred_clocks)
{
  modelica_boolean _delete;
  modelica_metatype out_delete;
  _delete = omc_NBPartitioning_Cluster_collectInferredClock(threadData, _var, _inferred_clocks);
  out_delete = omc_mk_icon(_delete);
  return out_delete;
}

static modelica_metatype closure7_NBPartitioning_replaceClockedFunctions(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype held_crefs = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBPartitioning_replaceClockedFunctions(thData, $in_exp, held_crefs);
}static modelica_metatype closure8_NBPartitioning_Cluster_collectInferredClock(threadData_t *thData, modelica_metatype closure, modelica_metatype var)
{
  modelica_metatype inferred_clocks = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBPartitioning_Cluster_collectInferredClock(thData, var, inferred_clocks);
}static modelica_metatype closure9_NBPartitioning_Cluster_removeInferredClock(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn)
{
  modelica_metatype inferred_clocks = OMC_BOX_FIELD(closure, 1);
  return boxptr_NBPartitioning_Cluster_removeInferredClock(thData, eqn, inferred_clocks);
}static void closure10_NBVariable_setVarKind(threadData_t *thData, modelica_metatype closure, modelica_metatype varPointer)
{
  modelica_metatype varKind = OMC_BOX_FIELD(closure, 1);
  boxptr_NBVariable_setVarKind(thData, varPointer, varKind);
}
DLLModelDirection
modelica_metatype omc_NBPartitioning_Cluster_toPartition(threadData_t *threadData, modelica_metatype _cluster, modelica_metatype _variables, modelica_metatype _equations, modelica_integer _kind, modelica_metatype _info, modelica_metatype _held_crefs, modelica_metatype _infer_del)
{
  modelica_metatype _partition = NULL;
  modelica_metatype _cvars = NULL;
  modelica_metatype _cidnt = NULL;
  modelica_metatype _association = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _filtered_vars = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _partVariables = NULL;
  modelica_metatype _partEquations = NULL;
  modelica_metatype _inferred_clocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partition has no default value.
  _cvars = omc_UnorderedSet_toList(threadData, (OMC_BOX_FIELD(_cluster, 2)));
  _cidnt = omc_UnorderedSet_toList(threadData, (OMC_BOX_FIELD(_cluster, 3)));
  // _association has no default value.
  // _var_lst has no default value.
  // _filtered_vars has no default value.
  // _eqn_lst has no default value.
  // _partVariables has no default value.
  // _partEquations has no default value.
  _inferred_clocks = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  {
    modelica_metatype __omcQ_24tmpVar55;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar54;
    modelica_integer tmp4;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    _cref_loopVar = _cvars;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar55 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar55;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar54 = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT89);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar54,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar55;
  }
  _var_lst = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar57;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar56;
    modelica_integer tmp8;
    modelica_metatype _var_loopVar = 0;
    modelica_metatype _var;
    _var_loopVar = _var_lst;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar57 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar57;
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
        __omcQ_24tmpVar56 = _var;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar56,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar57;
  }
  _filtered_vars = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar59;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar58;
    modelica_integer tmp12;
    modelica_metatype _name_loopVar = 0;
    modelica_metatype _name;
    _name_loopVar = _cidnt;
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar59 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar59;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_name_loopVar)) {
        _name = MMC_CAR(_name_loopVar);
        _name_loopVar = MMC_CDR(_name_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        __omcQ_24tmpVar58 = omc_NBEquation_EquationPointers_getEqnByName(threadData, _equations, _name);
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar58,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp12 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar59;
  }
  _eqn_lst = tmpMeta9;

  _partVariables = omc_NBVariable_VariablePointers_fromList(threadData, _filtered_vars, 0 /* false */);

  _partEquations = omc_NBEquation_EquationPointers_fromList(threadData, _eqn_lst);

  _association = omc_NBPartition_Association_create(threadData, _partEquations, (modelica_integer)_kind, _info, _infer_del);

  tmpMeta13 = omc_mk_box1(0, _held_crefs);
  _partEquations = omc_NBEquation_EquationPointers_mapExp(threadData, _partEquations, (modelica_fnptr) omc_mk_box2(0,closure7_NBPartitioning_replaceClockedFunctions,tmpMeta13), mmc_mk_none(), boxvar_NFExpression_map);

  if(omc_NBPartition_Association_isClocked(threadData, _association))
  {
    tmpMeta14 = omc_mk_box1(0, _inferred_clocks);
    _partVariables = omc_NBVariable_VariablePointers_mapRemovePtr(threadData, _partVariables, (modelica_fnptr) omc_mk_box2(0,closure8_NBPartitioning_Cluster_collectInferredClock,tmpMeta14));

    tmpMeta15 = omc_mk_box1(0, _inferred_clocks);
    _partEquations = omc_NBEquation_EquationPointers_mapRemovePtr(threadData, _partEquations, (modelica_fnptr) omc_mk_box2(0,closure9_NBPartitioning_Cluster_removeInferredClock,tmpMeta15));

    _partEquations = omc_NBEquation_EquationPointers_map(threadData, _partEquations, boxvar_NBPartitioning_replaceClockedWhen);

    tmpMeta16 = omc_mk_box1(0, _OMC_LIT90);
    _partVariables = omc_NBVariable_VariablePointers_mapPtr(threadData, _partVariables, (modelica_fnptr) omc_mk_box2(0,closure10_NBVariable_setVarKind,tmpMeta16));

    if((omc_NBEquation_EquationPointers_size(threadData, _partEquations) == ((modelica_integer) 0)))
    {
      omc_UnorderedSet_merge(threadData, _infer_del, _inferred_clocks);
    }
  }

  tmpMeta17 = omc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, omc_mk_integer(((modelica_integer) 0)), _association, _partVariables, mmc_mk_none(), _partEquations, mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
  _partition = tmpMeta17;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _partition;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_Cluster_toPartition(threadData_t *threadData, modelica_metatype _cluster, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _kind, modelica_metatype _info, modelica_metatype _held_crefs, modelica_metatype _infer_del)
{
  modelica_integer tmp1;
  modelica_metatype _partition = NULL;
  tmp1 = omc_unbox_integer(_kind);
  _partition = omc_NBPartitioning_Cluster_toPartition(threadData, _cluster, _variables, _equations, tmp1, _info, _held_crefs, _infer_del);
  /* skip box _partition; NBPartition.Partition */
  return _partition;
}

static modelica_metatype closure11_NBPartitioning_Cluster_addToClockMap_findClock(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype info = OMC_BOX_FIELD(closure, 1);
  modelica_metatype clock_ptr = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBPartitioning_Cluster_addToClockMap_findClock(thData, $in_exp, info, clock_ptr);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_Cluster_addToClockMap_findClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _info, modelica_metatype _clock_ptr)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _clock_opt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _clock_opt = omc_Pointer_access(threadData, _clock_ptr);
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _exp;
    tmp4_2 = _clock_opt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 1);
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isClockOrClocked(threadData, omc_NBVariable_getVarPointer(threadData, (OMC_BOX_FIELD(_exp, 3)), _OMC_LIT91))) goto tmp3_end;
          omc_Pointer_update(threadData, _clock_ptr, mmc_mk_some((OMC_BOX_FIELD(_exp, 3))));
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isClockOrSampleFunction(threadData, _exp)) goto tmp3_end;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = omc_mk_box2(0, _info, _clock_ptr);
          tmpMeta1 = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) omc_mk_box2(0,closure11_NBPartitioning_Cluster_addToClockMap_findClock,tmpMeta7));
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

static modelica_metatype closure12_NBPartitioning_Cluster_addToClockMap_findClock(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype info = OMC_BOX_FIELD(closure, 1);
  modelica_metatype clock_ptr = OMC_BOX_FIELD(closure, 2);
  return boxptr_NBPartitioning_Cluster_addToClockMap_findClock(thData, $in_exp, info, clock_ptr);
}
DLLModelDirection
void omc_NBPartitioning_Cluster_addToClockMap(threadData_t *threadData, modelica_metatype _cluster, modelica_metatype _equations, modelica_metatype _info, modelica_metatype _clock_map)
{
  modelica_metatype _clock_ptr = NULL;
  modelica_metatype _clock_opt = NULL;
  modelica_metatype _clock = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _clock_ptr = omc_Pointer_create(threadData, mmc_mk_none());
  _clock_opt = mmc_mk_none();
  // _clock has no default value.
  {
    modelica_metatype _eqn_name;
    for (tmpMeta1 = omc_UnorderedSet_toList(threadData, (OMC_BOX_FIELD(_cluster, 3))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eqn_name = MMC_CAR(tmpMeta1);
      tmpMeta2 = omc_mk_box2(0, _info, _clock_ptr);
      omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, omc_NBEquation_EquationPointers_getEqnByName(threadData, _equations, _eqn_name)), (modelica_fnptr) omc_mk_box2(0,closure12_NBPartitioning_Cluster_addToClockMap_findClock,tmpMeta2), mmc_mk_none(), boxvar_NFExpression_fakeMap);

      _clock_opt = omc_Pointer_access(threadData, _clock_ptr);

      if(isSome(_clock_opt))
      {
        break;
      }
    }
  }

  if(isSome(_clock_opt))
  {
    /* Pattern-matching assignment */
    tmpMeta4 = _clock_opt;
    if (optionNone(tmpMeta4)) OMC_THROW_INTERNAL();
    tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 1);
    _clock = tmpMeta5;

    {
      modelica_metatype _var_name;
      for (tmpMeta6 = omc_UnorderedSet_toList(threadData, (OMC_BOX_FIELD(_cluster, 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
      {
        _var_name = MMC_CAR(tmpMeta6);
        omc_UnorderedMap_add(threadData, _var_name, _clock, _clock_map);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_Cluster_addElement(threadData_t *threadData, modelica_metatype _cluster_opt, modelica_metatype _cref, modelica_integer _ty)
{
  modelica_metatype _cluster = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
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
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          _cluster = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _cluster;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = omc_mk_box3(3, &NBPartitioning_Cluster_CLUSTER__desc, omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          tmpMeta1 = tmpMeta7;
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
  _cluster = tmpMeta1;

  { /* match expression */
    modelica_integer tmp11_1;
    tmp11_1 = (modelica_integer)_ty;
    {
      int tmp11;
      {
        switch (MMC_SWITCH_CAST(tmp11_1)) {
        case 2: {
          if (2 != tmp11_1) goto tmp10_end;
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, _cref, (OMC_BOX_FIELD(_cluster, 2)));
          tmpMeta8 = _cluster;
          goto tmp10_done;
        }
        case 1: {
          if (1 != tmp11_1) goto tmp10_end;
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, _cref, (OMC_BOX_FIELD(_cluster, 3)));
          tmpMeta8 = _cluster;
          goto tmp10_done;
        }
        default:
        tmp10_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta12;
          modelica_string tmp13;
          modelica_string tmp14;
          
          /* Pattern matching succeeded */
          tmp13 = stringAppend(_OMC_LIT92,omc_NFComponentRef_toString(threadData, _cref));
          tmp14 = stringAppend(tmp13,_OMC_LIT93);
          tmpMeta12 = mmc_mk_cons(tmp14, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta12);
          goto goto_9;
          goto tmp10_done;
        }
        }
        goto tmp10_end;
        tmp10_end: ;
      }
      goto goto_9;
      goto_9:;
      OMC_THROW_INTERNAL();
      goto tmp10_done;
      tmp10_done:;
    }
  }
  _cluster = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cluster;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_Cluster_addElement(threadData_t *threadData, modelica_metatype _cluster_opt, modelica_metatype _cref, modelica_metatype _ty)
{
  modelica_integer tmp1;
  modelica_metatype _cluster = NULL;
  tmp1 = omc_unbox_integer(_ty);
  _cluster = omc_NBPartitioning_Cluster_addElement(threadData, _cluster_opt, _cref, tmp1);
  /* skip box _cluster; NBPartitioning.Cluster */
  return _cluster;
}

DLLModelDirection
modelica_string omc_NBPartitioning_Cluster_toString(threadData_t *threadData, modelica_metatype _cluster)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmp1 = stringAppend(_OMC_LIT94,omc_UnorderedSet_toString(threadData, (OMC_BOX_FIELD(_cluster, 2)), boxvar_NFComponentRef_toString, _OMC_LIT83));
  tmp2 = stringAppend(tmp1,_OMC_LIT95);
  tmp3 = stringAppend(tmp2,omc_UnorderedSet_toString(threadData, (OMC_BOX_FIELD(_cluster, 3)), boxvar_NFComponentRef_toString, _OMC_LIT83));
  omc_string_store(&(_str), tmp3);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_extractClocks(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _clck_coll, modelica_metatype _infr_coll, modelica_metatype _new_clocks, modelica_metatype _new_infers, modelica_metatype _idx, modelica_boolean _when_cond)
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
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_when_cond || (!omc_NFClockKind_isInferred(threadData, (OMC_BOX_FIELD(_exp, 2)))))) goto tmp3_end;
          tmpMeta6 = omc_mk_box2(3, &NBPartitioning_BClock_BASE__CLOCK__desc, (OMC_BOX_FIELD(_exp, 2)));
          _clock = tmpMeta6;

          if(omc_UnorderedMap_contains(threadData, _clock, _clck_coll))
          {
            _clock_name = omc_UnorderedMap_getSafe(threadData, _clock, _clck_coll, _OMC_LIT97);
          }
          else
          {
            if(omc_UnorderedMap_contains(threadData, _clock, _infr_coll))
            {
              _clock_name = omc_UnorderedMap_getSafe(threadData, _clock, _infr_coll, _OMC_LIT96);
            }
            else
            {
              _clock_var = omc_NBVariable_makeClockVar(threadData, omc_unbox_integer(omc_Pointer_access(threadData, _idx)), omc_NFExpression_typeOf(threadData, _exp) ,&_clock_name);

              if(omc_NBPartitioning_BClock_isInferredClock(threadData, _clock))
              {
                omc_UnorderedMap_add(threadData, _clock, _clock_name, _infr_coll);

                tmpMeta7 = mmc_mk_cons(_clock_var, omc_Pointer_access(threadData, _new_infers));
                omc_Pointer_update(threadData, _new_infers, tmpMeta7);
              }
              else
              {
                omc_UnorderedMap_add(threadData, _clock, _clock_name, _clck_coll);

                tmpMeta8 = mmc_mk_cons(_clock_var, omc_Pointer_access(threadData, _new_clocks));
                omc_Pointer_update(threadData, _new_clocks, tmpMeta8);
              }

              omc_Pointer_update(threadData, _idx, omc_mk_integer(((modelica_integer) 1) + (omc_unbox_integer(omc_Pointer_access(threadData, _idx)))));
            }
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
modelica_metatype boxptr_NBPartitioning_extractClocks(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _clck_coll, modelica_metatype _infr_coll, modelica_metatype _new_clocks, modelica_metatype _new_infers, modelica_metatype _idx, modelica_metatype _when_cond)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = omc_unbox_integer(_when_cond);
  _exp = omc_NBPartitioning_extractClocks(threadData, __omcQ_24in_5Fexp, _clck_coll, _infr_coll, _new_clocks, _new_infers, _idx, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

static modelica_metatype closure13_NBPartitioning_extractClocks(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype clck_coll = OMC_BOX_FIELD(closure, 1);
  modelica_metatype infr_coll = OMC_BOX_FIELD(closure, 2);
  modelica_metatype new_clocks = OMC_BOX_FIELD(closure, 3);
  modelica_metatype new_infers = OMC_BOX_FIELD(closure, 4);
  modelica_metatype idx = OMC_BOX_FIELD(closure, 5);
  modelica_metatype when_cond = OMC_BOX_FIELD(closure, 6);
  return boxptr_NBPartitioning_extractClocks(thData, $in_exp, clck_coll, infr_coll, new_clocks, new_infers, idx, when_cond);
}
DLLModelDirection
modelica_metatype omc_NBPartitioning_extractClocksWhenCond(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody_5Fopt, modelica_metatype _clck_coll, modelica_metatype _infr_coll, modelica_metatype _new_clocks, modelica_metatype _new_infers, modelica_metatype _idx)
{
  modelica_metatype _body_opt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _body_opt = __omcQ_24in_5Fbody_5Fopt;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _body_opt;
    {
      modelica_metatype _body = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _body has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          _body = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = omc_mk_box6(0, _clck_coll, _infr_coll, _new_clocks, _new_infers, _idx, omc_mk_boolean(1 /* true */));
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_body), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_NFExpression_map(threadData, (OMC_BOX_FIELD(_body, 2)), (modelica_fnptr) omc_mk_box2(0,closure13_NBPartitioning_extractClocks,tmpMeta8));
          _body = tmpMeta7;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_body), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = omc_NBPartitioning_extractClocksWhenCond(threadData, (OMC_BOX_FIELD(_body, 4)), _clck_coll, _infr_coll, _new_clocks, _new_infers, _idx);
          _body = tmpMeta9;
          tmpMeta1 = mmc_mk_some(_body);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _body_opt;
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
  _body_opt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _body_opt;
  return omc_ret_;
}

static modelica_metatype closure14_NBPartitioning_extractClocks(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype clck_coll = OMC_BOX_FIELD(closure, 1);
  modelica_metatype infr_coll = OMC_BOX_FIELD(closure, 2);
  modelica_metatype new_clocks = OMC_BOX_FIELD(closure, 3);
  modelica_metatype new_infers = OMC_BOX_FIELD(closure, 4);
  modelica_metatype idx = OMC_BOX_FIELD(closure, 5);
  modelica_metatype when_cond = OMC_BOX_FIELD(closure, 6);
  return boxptr_NBPartitioning_extractClocks(thData, $in_exp, clck_coll, infr_coll, new_clocks, new_infers, idx, when_cond);
}
DLLModelDirection
modelica_metatype omc_NBPartitioning_extractClocksEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _clck_coll, modelica_metatype _infr_coll, modelica_metatype _new_clocks, modelica_metatype _new_infers, modelica_metatype _idx)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
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
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_eqn), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_Util_getOption(threadData, omc_NBPartitioning_extractClocksWhenCond(threadData, mmc_mk_some((OMC_BOX_FIELD(_eqn, 3))), _clck_coll, _infr_coll, _new_clocks, _new_infers, _idx));
          _eqn = tmpMeta6;
          tmpMeta1 = _eqn;
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
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _eqn = tmpMeta1;

  tmpMeta7 = omc_mk_box6(0, _clck_coll, _infr_coll, _new_clocks, _new_infers, _idx, omc_mk_boolean(0 /* false */));
  _eqn = omc_NBEquation_Equation_map(threadData, _eqn, (modelica_fnptr) omc_mk_box2(0,closure14_NBPartitioning_extractClocks,tmpMeta7), mmc_mk_none(), boxvar_NFExpression_map);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqn;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_categorize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,14) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _syst;
            for (tmpMeta11 = (OMC_BOX_FIELD(_bdae, 2)); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _syst = MMC_CAR(tmpMeta11);
              omc_NBPartition_Partition_categorize(threadData, _syst, _ode, _alg, _ode_evt, _alg_evt, _clocked);
            }
          }

          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_DoubleEnded_toListAndClear(threadData, _ode, tmpMeta14);
          _bdae = tmpMeta13;

          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = omc_DoubleEnded_toListAndClear(threadData, _alg, tmpMeta16);
          _bdae = tmpMeta15;

          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[4] = omc_DoubleEnded_toListAndClear(threadData, _ode_evt, tmpMeta18);
          _bdae = tmpMeta17;

          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[5] = omc_DoubleEnded_toListAndClear(threadData, _alg_evt, tmpMeta20);
          _bdae = tmpMeta19;

          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[6] = omc_DoubleEnded_toListAndClear(threadData, _clocked, tmpMeta22);
          _bdae = tmpMeta21;
          tmpMeta1 = _bdae;
          goto tmp8_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT53, _OMC_LIT99);
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _bdae;
  return omc_ret_;
}

DLLModelDirection
modelica_fnptr omc_NBPartitioning_getModule(threadData_t *threadData)
{
  modelica_fnptr _func;
  modelica_string _flag = NULL;
  modelica_fnptr tmp1 = 0;
  modelica_fnptr omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flag = _OMC_LIT100;
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
          if (7 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT101), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBPartitioning_partitioningClocked;
          goto tmp3_done;
        }
        case 1: {
          if (7 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT100), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBPartitioning_partitioningClocked;
          goto tmp3_done;
        }
        case 2: {
          if (4 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT102), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
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
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _func;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_integer _kind)
{
  modelica_metatype _bdae = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
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
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (1 != tmp4_1) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,14) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,24) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 4);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 16);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_2, 12);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,9) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 4);
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta9, 6);
          
          _variables = tmpMeta7;
          _clocks = tmpMeta8;
          _equations = tmpMeta10;
          _clocked = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = (OMC_BOX_FIELD(_func, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_func, 2)), omc_mk_integer((modelica_integer)_kind), _variables, _equations, _clocks, _clocked, (OMC_BOX_FIELD(_bdae, 14))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, omc_mk_integer((modelica_integer)_kind), _variables, _equations, _clocks, _clocked, (OMC_BOX_FIELD(_bdae, 14)));
          _bdae = tmpMeta12;

          {
            modelica_metatype __omcQ_24tmpVar61;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar60;
            modelica_integer tmp17;
            modelica_metatype _sys_loopVar = 0;
            modelica_metatype _sys;
            _sys_loopVar = (OMC_BOX_FIELD(_bdae, 2));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar61 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar61;
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
                __omcQ_24tmpVar60 = _sys;
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar60,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar61;
          }
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = tmpMeta14;
          _bdae = tmpMeta13;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[11] = omc_NBVariable_VarData_removeTypedCheck(threadData, (OMC_BOX_FIELD(_bdae, 11)), boxvar_NBVariable_isClock, 4);
          _bdae = tmpMeta18;

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[12] = omc_NBEquation_EqData_removeTypedCheck(threadData, (OMC_BOX_FIELD(_bdae, 12)), boxvar_NBEquation_Equation_isTypeClock, 2);
          _bdae = tmpMeta19;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,14) == 0) goto tmp3_end;
          tmpMeta20 = OMC_BOX_FIELD(tmp4_2, 11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,24) == 0) goto tmp3_end;
          tmpMeta21 = OMC_BOX_FIELD(tmpMeta20, 6);
          tmpMeta22 = OMC_BOX_FIELD(tmpMeta20, 16);
          tmpMeta23 = OMC_BOX_FIELD(tmp4_2, 12);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,9) == 0) goto tmp3_end;
          tmpMeta24 = OMC_BOX_FIELD(tmpMeta23, 6);
          tmpMeta25 = OMC_BOX_FIELD(tmpMeta23, 8);
          
          _variables = tmpMeta21;
          _clocks = tmpMeta22;
          _clocked = tmpMeta24;
          _equations = tmpMeta25;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBPartition_kindIsInitial(threadData, (modelica_integer)_kind)) goto tmp3_end;
          tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[7] = omc_NBPartitioning_partitioningNone(threadData, (modelica_integer)_kind, _variables, _equations, _clocks, _clocked, (OMC_BOX_FIELD(_bdae, 14)));
          _bdae = tmpMeta26;

          {
            modelica_metatype __omcQ_24tmpVar63;
            modelica_metatype* tmp29;
            modelica_metatype tmpMeta30;
            modelica_metatype __omcQ_24tmpVar62;
            modelica_integer tmp31;
            modelica_metatype _sys_loopVar = 0;
            modelica_metatype _sys;
            _sys_loopVar = (OMC_BOX_FIELD(_bdae, 7));
            tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar63 = tmpMeta30; /* defaultValue */
            tmp29 = &__omcQ_24tmpVar63;
            while(1) {
              tmp31 = 1;
              while (!listEmpty(_sys_loopVar)) {
                _sys = MMC_CAR(_sys_loopVar);
                _sys_loopVar = MMC_CDR(_sys_loopVar);
                if ((!omc_NBPartition_Partition_isEmpty(threadData, _sys))) {
                  tmp31--;
                  break;
                }
              }
              if (tmp31 == 0) {
                __omcQ_24tmpVar62 = _sys;
                *tmp29 = mmc_mk_cons(__omcQ_24tmpVar62,0);
                tmp29 = &MMC_CDR(*tmp29);
              } else if (tmp31 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp29 = mmc_mk_nil();
            tmpMeta28 = __omcQ_24tmpVar63;
          }
          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(16));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_bdae), 16*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[7] = tmpMeta28;
          _bdae = tmpMeta27;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT53, _OMC_LIT104);
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _bdae;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _bdae = NULL;
  tmp1 = omc_unbox_integer(_kind);
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
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _base_clock = omc_UnorderedMap_getSafe(threadData, _clock_name, (OMC_BOX_FIELD(_info, 4)), _OMC_LIT105);
  // _current_clocks has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _current_clocks = omc_UnorderedMap_getOrDefault(threadData, _base_clock, (OMC_BOX_FIELD(_info, 5)), tmpMeta1);

  tmpMeta2 = mmc_mk_cons(_clock_name, _current_clocks);
  omc_UnorderedMap_add(threadData, _base_clock, tmpMeta2, (OMC_BOX_FIELD(_info, 5)));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info, modelica_metatype _clock_map)
{
  modelica_metatype _base_clock = NULL;
  modelica_metatype _implicit_clock = NULL;
  modelica_metatype _parent_clock = NULL;
  modelica_metatype _implicit_clock_opt = NULL;
  modelica_metatype _dest = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _base_clock has no default value.
  // _implicit_clock has no default value.
  _parent_clock = omc_UnorderedMap_getSafe(threadData, _clock_name, (OMC_BOX_FIELD(_info, 4)), _OMC_LIT106);
  _implicit_clock_opt = mmc_mk_none();
  // _dest has no default value.
  // _src has no default value.
  if(omc_UnorderedMap_contains(threadData, _parent_clock, (OMC_BOX_FIELD(_info, 2))))
  {
    _base_clock = _parent_clock;
  }
  else
  {
    if((!omc_UnorderedMap_contains(threadData, _parent_clock, (OMC_BOX_FIELD(_info, 3)))))
    {
      _implicit_clock_opt = mmc_mk_some(_parent_clock);

      _parent_clock = omc_UnorderedMap_getSafe(threadData, _parent_clock, _clock_map, _OMC_LIT107);
    }

    _base_clock = omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData, _parent_clock, _info, _clock_map);

    _dest = omc_UnorderedMap_getSafe(threadData, _parent_clock, (OMC_BOX_FIELD(_info, 3)), _OMC_LIT108);

    _src = omc_UnorderedMap_getSafe(threadData, _clock_name, (OMC_BOX_FIELD(_info, 3)), _OMC_LIT109);

    omc_UnorderedMap_add(threadData, _clock_name, omc_NBPartitioning_BClock_updateSubClock(threadData, _dest, _src), (OMC_BOX_FIELD(_info, 3)));

    omc_UnorderedMap_add(threadData, _clock_name, _base_clock, (OMC_BOX_FIELD(_info, 4)));

    if(isSome(_implicit_clock_opt))
    {
      /* Pattern-matching assignment */
      tmpMeta1 = _implicit_clock_opt;
      if (optionNone(tmpMeta1)) OMC_THROW_INTERNAL();
      tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
      _implicit_clock = tmpMeta2;

      omc_UnorderedMap_add(threadData, _implicit_clock, _dest, (OMC_BOX_FIELD(_info, 3)));

      omc_UnorderedMap_add(threadData, _implicit_clock, _base_clock, (OMC_BOX_FIELD(_info, 4)));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _base_clock;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveImplicitSubClock(threadData_t *threadData, modelica_metatype _key, modelica_metatype _info, modelica_metatype _clock_map)
{
  modelica_metatype _clock = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _clock = _key;
  if(omc_UnorderedMap_contains(threadData, _key, _clock_map))
  {
    _clock = omc_UnorderedMap_getSafe(threadData, _key, _clock_map, _OMC_LIT110);

    if((!(omc_UnorderedMap_contains(threadData, _clock, (OMC_BOX_FIELD(_info, 3))) || omc_UnorderedMap_contains(threadData, _clock, (OMC_BOX_FIELD(_info, 2))))))
    {
      _clock = omc_NBPartitioning_ClockedInfo_resolveImplicitSubClock(threadData, _clock, _info, _clock_map);

      omc_UnorderedMap_add(threadData, _key, _clock, _clock_map);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _clock;
  return omc_ret_;
}

DLLModelDirection
modelica_integer omc_NBPartitioning_ClockedInfo_subClockCount(threadData_t *threadData, modelica_metatype _info)
{
  modelica_integer _count;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = omc_UnorderedMap_size(threadData, (OMC_BOX_FIELD(_info, 3)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _count;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_ClockedInfo_subClockCount(threadData_t *threadData, modelica_metatype _info)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_NBPartitioning_ClockedInfo_subClockCount(threadData, _info);
  out_count = omc_mk_icon(_count);
  return out_count;
}

DLLModelDirection
modelica_integer omc_NBPartitioning_ClockedInfo_baseClockCount(threadData_t *threadData, modelica_metatype _info, modelica_boolean _countInferred)
{
  modelica_integer _count;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = omc_UnorderedMap_size(threadData, (OMC_BOX_FIELD(_info, 2)));
  if((!_countInferred))
  {
    _count = _count - omc_List_count(threadData, omc_UnorderedMap_valueList(threadData, (OMC_BOX_FIELD(_info, 2))), boxvar_NBPartitioning_BClock_isInferredClock);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _count;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_ClockedInfo_baseClockCount(threadData_t *threadData, modelica_metatype _info, modelica_metatype _countInferred)
{
  modelica_integer tmp1;
  modelica_integer _count;
  modelica_metatype out_count;
  tmp1 = omc_unbox_integer(_countInferred);
  _count = omc_NBPartitioning_ClockedInfo_baseClockCount(threadData, _info, tmp1);
  out_count = omc_mk_icon(_count);
  return out_count;
}

DLLModelDirection
void omc_NBPartitioning_ClockedInfo_resolveSubClocks(threadData_t *threadData, modelica_metatype _info, modelica_metatype _clock_map)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _cref;
    for (tmpMeta1 = omc_UnorderedMap_keyList(threadData, _clock_map); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cref = MMC_CAR(tmpMeta1);
      omc_NBPartitioning_ClockedInfo_resolveImplicitSubClock(threadData, _cref, _info, _clock_map);
    }
  }

  {
    modelica_metatype _sub_clock;
    for (tmpMeta3 = omc_UnorderedMap_keyList(threadData, (OMC_BOX_FIELD(_info, 3))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _sub_clock = MMC_CAR(tmpMeta3);
      omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData, _sub_clock, _info, _clock_map);
    }
  }

  {
    modelica_metatype _sub_clock;
    for (tmpMeta5 = omc_UnorderedMap_keyList(threadData, (OMC_BOX_FIELD(_info, 3))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _sub_clock = MMC_CAR(tmpMeta5);
      omc_NBPartitioning_ClockedInfo_addSubClock(threadData, _sub_clock, _info);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_boolean omc_NBPartitioning_ClockedInfo_isEmpty(threadData_t *threadData, modelica_metatype _info)
{
  modelica_boolean _b;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = omc_UnorderedMap_isEmpty(threadData, (OMC_BOX_FIELD(_info, 2)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_ClockedInfo_isEmpty(threadData_t *threadData, modelica_metatype _info)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_ClockedInfo_isEmpty(threadData, _info);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_string omc_NBPartitioning_ClockedInfo_toString(threadData_t *threadData, modelica_metatype _info)
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
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT10;
  if((!omc_NBPartitioning_ClockedInfo_isEmpty(threadData, _info)))
  {
    tmp1 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT111),_OMC_LIT83);
    omc_string_store(&(_str), tmp1);

    tmp2 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT112));
    tmp3 = stringAppend(tmp2,omc_UnorderedMap_toString(threadData, (OMC_BOX_FIELD(_info, 2)), boxvar_NFComponentRef_toString, boxvar_NBPartitioning_BClock_toString, _OMC_LIT83, _OMC_LIT113));
    tmp4 = stringAppend(tmp3,_OMC_LIT114);
    omc_string_store(&(_str), tmp4);

    tmp5 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT115));
    tmp6 = stringAppend(tmp5,omc_UnorderedMap_toString(threadData, (OMC_BOX_FIELD(_info, 3)), boxvar_NFComponentRef_toString, boxvar_NBPartitioning_BClock_toString, _OMC_LIT83, _OMC_LIT113));
    tmp7 = stringAppend(tmp6,_OMC_LIT114);
    omc_string_store(&(_str), tmp7);

    tmp8 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT116));
    tmp9 = stringAppend(tmp8,omc_UnorderedMap_toString(threadData, (OMC_BOX_FIELD(_info, 4)), boxvar_NFComponentRef_toString, boxvar_NFComponentRef_toString, _OMC_LIT83, _OMC_LIT113));
    tmp10 = stringAppend(tmp9,_OMC_LIT114);
    omc_string_store(&(_str), tmp10);

    tmp11 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT117));
    tmp12 = stringAppend(tmp11,omc_UnorderedMap_toString(threadData, (OMC_BOX_FIELD(_info, 5)), boxvar_NFComponentRef_toString, boxvar_NFComponentRef_listToString, _OMC_LIT83, _OMC_LIT113));
    tmp13 = stringAppend(tmp12,_OMC_LIT83);
    omc_string_store(&(_str), tmp13);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_ClockedInfo_new(threadData_t *threadData)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = omc_mk_box5(3, &NBPartitioning_ClockedInfo_CLOCKED__INFO__desc, omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)));
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _info;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_BClock_updateSubClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdest, modelica_metatype _src)
{
  modelica_metatype _dest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
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
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_Rational_add(threadData, (OMC_BOX_FIELD(_dest, 3)), omc_Rational_mul(threadData, (OMC_BOX_FIELD(_src, 3)), (OMC_BOX_FIELD(_dest, 2))));
          _dest = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_dest), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_Rational_mul(threadData, (OMC_BOX_FIELD(_dest, 2)), (OMC_BOX_FIELD(_src, 2)));
          _dest = tmpMeta7;
          tmpMeta1 = _dest;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_string tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_OMC_LIT118,omc_NBPartitioning_BClock_toString(threadData, _dest));
          tmp10 = stringAppend(tmp9,_OMC_LIT119);
          tmp11 = stringAppend(tmp10,omc_NBPartitioning_BClock_toString(threadData, _src));
          tmp12 = stringAppend(tmp11,_OMC_LIT120);
          tmpMeta8 = mmc_mk_cons(tmp12, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta8);
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
  _dest = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _dest;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_baseClock)
{
  modelica_metatype _subClock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subClock has no default value.
  // _baseClock has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box2(3, &NBPartitioning_BClock_BASE__CLOCK__desc, (OMC_BOX_FIELD(_exp, 2)));
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT79;
          tmpMeta[0+1] = mmc_mk_some((OMC_BOX_FIELD(_exp, 3)));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta7;
          /* Pattern matching succeeded */
          
          
          { /* match expression */
            modelica_string tmp11_1;modelica_metatype tmp11_2;
            tmp11_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (OMC_BOX_FIELD(_call, 2))), _OMC_LIT58, 1 /* true */, 0 /* false */);
            tmp11_2 = omc_NFCall_arguments(threadData, _call);
            {
              modelica_metatype _e = NULL;
              modelica_integer _i1;
              modelica_integer _i2;
              volatile mmc_switch_type tmp11;
              int tmp12;
              // _e has no default value.
              // _i1 has no default value.
              // _i2 has no default value.
              tmp11 = 0;
              for (; tmp11 < 8; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  if (6 != omc_string_len(tmp11_1) || strcmp(omc_string_data(_OMC_LIT60), omc_string_data(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta13 = MMC_CAR(tmp11_2);
                  tmpMeta14 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta14)) goto tmp10_end;
                  tmpMeta15 = MMC_CAR(tmpMeta14);
                  tmpMeta16 = MMC_CDR(tmpMeta14);
                  if (!listEmpty(tmpMeta16)) goto tmp10_end;
                  _e = tmpMeta15;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 1: {
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  modelica_integer tmp22;
                  modelica_metatype tmpMeta23;
                  modelica_metatype tmpMeta24;
                  if (9 != omc_string_len(tmp11_1) || strcmp(omc_string_data(_OMC_LIT61), omc_string_data(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta17 = MMC_CAR(tmp11_2);
                  tmpMeta18 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta18)) goto tmp10_end;
                  tmpMeta19 = MMC_CAR(tmpMeta18);
                  tmpMeta20 = MMC_CDR(tmpMeta18);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,1) == 0) goto tmp10_end;
                  tmpMeta21 = OMC_BOX_FIELD(tmpMeta19, 2);
                  tmp22 = omc_unbox_integer(tmpMeta21);
                  if (!listEmpty(tmpMeta20)) goto tmp10_end;
                  _e = tmpMeta17;
                  _i1 = tmp22  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta23 = omc_mk_box3(3, &Rational_RATIONAL__desc, omc_mk_integer(_i1), omc_mk_integer(((modelica_integer) 1)));
                  tmpMeta24 = omc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, tmpMeta23, _OMC_LIT78, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta24);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 2: {
                  modelica_metatype tmpMeta25;
                  modelica_metatype tmpMeta26;
                  modelica_metatype tmpMeta27;
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  modelica_integer tmp30;
                  modelica_metatype tmpMeta31;
                  modelica_metatype tmpMeta32;
                  if (11 != omc_string_len(tmp11_1) || strcmp(omc_string_data(_OMC_LIT62), omc_string_data(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta25 = MMC_CAR(tmp11_2);
                  tmpMeta26 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta26)) goto tmp10_end;
                  tmpMeta27 = MMC_CAR(tmpMeta26);
                  tmpMeta28 = MMC_CDR(tmpMeta26);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,0,1) == 0) goto tmp10_end;
                  tmpMeta29 = OMC_BOX_FIELD(tmpMeta27, 2);
                  tmp30 = omc_unbox_integer(tmpMeta29);
                  if (!listEmpty(tmpMeta28)) goto tmp10_end;
                  _e = tmpMeta25;
                  _i1 = tmp30  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta31 = omc_mk_box3(3, &Rational_RATIONAL__desc, omc_mk_integer(((modelica_integer) 1)), omc_mk_integer(_i1));
                  tmpMeta32 = omc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, tmpMeta31, _OMC_LIT78, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta32);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 3: {
                  modelica_metatype tmpMeta33;
                  modelica_metatype tmpMeta34;
                  modelica_metatype tmpMeta35;
                  modelica_metatype tmpMeta36;
                  modelica_metatype tmpMeta37;
                  modelica_integer tmp38;
                  modelica_metatype tmpMeta39;
                  modelica_metatype tmpMeta40;
                  if (11 != omc_string_len(tmp11_1) || strcmp(omc_string_data(_OMC_LIT63), omc_string_data(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta33 = MMC_CAR(tmp11_2);
                  tmpMeta34 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta34)) goto tmp10_end;
                  tmpMeta35 = MMC_CAR(tmpMeta34);
                  tmpMeta36 = MMC_CDR(tmpMeta34);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,0,1) == 0) goto tmp10_end;
                  tmpMeta37 = OMC_BOX_FIELD(tmpMeta35, 2);
                  tmp38 = omc_unbox_integer(tmpMeta37);
                  if (!listEmpty(tmpMeta36)) goto tmp10_end;
                  _e = tmpMeta33;
                  _i1 = tmp38  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta39 = omc_mk_box3(3, &Rational_RATIONAL__desc, omc_mk_integer(_i1), omc_mk_integer(((modelica_integer) 1)));
                  tmpMeta40 = omc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT77, tmpMeta39, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta40);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 4: {
                  modelica_metatype tmpMeta41;
                  modelica_metatype tmpMeta42;
                  modelica_metatype tmpMeta43;
                  modelica_metatype tmpMeta44;
                  modelica_metatype tmpMeta45;
                  modelica_integer tmp46;
                  modelica_metatype tmpMeta47;
                  modelica_metatype tmpMeta48;
                  modelica_metatype tmpMeta49;
                  modelica_integer tmp50;
                  modelica_metatype tmpMeta51;
                  modelica_metatype tmpMeta52;
                  if (11 != omc_string_len(tmp11_1) || strcmp(omc_string_data(_OMC_LIT63), omc_string_data(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta41 = MMC_CAR(tmp11_2);
                  tmpMeta42 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta42)) goto tmp10_end;
                  tmpMeta43 = MMC_CAR(tmpMeta42);
                  tmpMeta44 = MMC_CDR(tmpMeta42);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,0,1) == 0) goto tmp10_end;
                  tmpMeta45 = OMC_BOX_FIELD(tmpMeta43, 2);
                  tmp46 = omc_unbox_integer(tmpMeta45);
                  if (listEmpty(tmpMeta44)) goto tmp10_end;
                  tmpMeta47 = MMC_CAR(tmpMeta44);
                  tmpMeta48 = MMC_CDR(tmpMeta44);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,0,1) == 0) goto tmp10_end;
                  tmpMeta49 = OMC_BOX_FIELD(tmpMeta47, 2);
                  tmp50 = omc_unbox_integer(tmpMeta49);
                  if (!listEmpty(tmpMeta48)) goto tmp10_end;
                  _e = tmpMeta41;
                  _i1 = tmp46  /* pattern as ty=Integer */;
                  _i2 = tmp50  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta51 = omc_mk_box3(3, &Rational_RATIONAL__desc, omc_mk_integer(_i1), omc_mk_integer(_i2));
                  tmpMeta52 = omc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT77, tmpMeta51, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta52);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 5: {
                  modelica_metatype tmpMeta53;
                  modelica_metatype tmpMeta54;
                  modelica_metatype tmpMeta55;
                  modelica_metatype tmpMeta56;
                  modelica_metatype tmpMeta57;
                  modelica_integer tmp58;
                  modelica_metatype tmpMeta59;
                  modelica_metatype tmpMeta60;
                  if (10 != omc_string_len(tmp11_1) || strcmp(omc_string_data(_OMC_LIT64), omc_string_data(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta53 = MMC_CAR(tmp11_2);
                  tmpMeta54 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta54)) goto tmp10_end;
                  tmpMeta55 = MMC_CAR(tmpMeta54);
                  tmpMeta56 = MMC_CDR(tmpMeta54);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta55,0,1) == 0) goto tmp10_end;
                  tmpMeta57 = OMC_BOX_FIELD(tmpMeta55, 2);
                  tmp58 = omc_unbox_integer(tmpMeta57);
                  if (!listEmpty(tmpMeta56)) goto tmp10_end;
                  _e = tmpMeta53;
                  _i1 = tmp58  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta59 = omc_mk_box3(3, &Rational_RATIONAL__desc, omc_mk_integer((-_i1)), omc_mk_integer(((modelica_integer) 1)));
                  tmpMeta60 = omc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT77, tmpMeta59, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta60);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 6: {
                  modelica_metatype tmpMeta61;
                  modelica_metatype tmpMeta62;
                  modelica_metatype tmpMeta63;
                  modelica_metatype tmpMeta64;
                  modelica_metatype tmpMeta65;
                  modelica_integer tmp66;
                  modelica_metatype tmpMeta67;
                  modelica_metatype tmpMeta68;
                  modelica_metatype tmpMeta69;
                  modelica_integer tmp70;
                  modelica_metatype tmpMeta71;
                  modelica_metatype tmpMeta72;
                  if (10 != omc_string_len(tmp11_1) || strcmp(omc_string_data(_OMC_LIT64), omc_string_data(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta61 = MMC_CAR(tmp11_2);
                  tmpMeta62 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta62)) goto tmp10_end;
                  tmpMeta63 = MMC_CAR(tmpMeta62);
                  tmpMeta64 = MMC_CDR(tmpMeta62);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta63,0,1) == 0) goto tmp10_end;
                  tmpMeta65 = OMC_BOX_FIELD(tmpMeta63, 2);
                  tmp66 = omc_unbox_integer(tmpMeta65);
                  if (listEmpty(tmpMeta64)) goto tmp10_end;
                  tmpMeta67 = MMC_CAR(tmpMeta64);
                  tmpMeta68 = MMC_CDR(tmpMeta64);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta67,0,1) == 0) goto tmp10_end;
                  tmpMeta69 = OMC_BOX_FIELD(tmpMeta67, 2);
                  tmp70 = omc_unbox_integer(tmpMeta69);
                  if (!listEmpty(tmpMeta68)) goto tmp10_end;
                  _e = tmpMeta61;
                  _i1 = tmp66  /* pattern as ty=Integer */;
                  _i2 = tmp70  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta71 = omc_mk_box3(3, &Rational_RATIONAL__desc, omc_mk_integer((-_i1)), omc_mk_integer(_i2));
                  tmpMeta72 = omc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT77, tmpMeta71, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta72);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 7: {
                  modelica_metatype tmpMeta73;
                  modelica_string tmp74;
                  modelica_string tmp75;
                  
                  /* Pattern matching succeeded */
                  tmp74 = stringAppend(_OMC_LIT121,omc_NFExpression_toString(threadData, _exp));
                  tmp75 = stringAppend(tmp74,_OMC_LIT58);
                  tmpMeta73 = mmc_mk_cons(tmp75, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta73);
                  goto goto_9;
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
          _baseClock = tmpMeta[2+0];
          _subClock = tmpMeta[2+1];
          tmpMeta[0+0] = _subClock;
          tmpMeta[0+1] = _baseClock;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta76;
          modelica_string tmp77;
          modelica_string tmp78;
          
          /* Pattern matching succeeded */
          tmp77 = stringAppend(_OMC_LIT122,omc_NFExpression_toString(threadData, _exp));
          tmp78 = stringAppend(tmp77,_OMC_LIT58);
          tmpMeta76 = mmc_mk_cons(tmp78, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta76);
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
  _subClock = tmpMeta[0+0];
  _baseClock = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_baseClock) { *out_baseClock = _baseClock; }
  omc_ret_ = _subClock;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_BClock_create(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _exp, modelica_metatype _info)
{
  modelica_metatype _clock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype _clock_var = NULL;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clock has no default value.
  // _baseClock has no default value.
  // _clock_var has no default value.
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
          _clock = omc_NBPartitioning_BClock_fromExp(threadData, _exp ,&_baseClock);

          if(isSome(_baseClock))
          {
            omc_UnorderedMap_add(threadData, _clock_name, _clock, (OMC_BOX_FIELD(_info, 3)));

            omc_UnorderedMap_add(threadData, _clock_name, omc_Util_getOption(threadData, _baseClock), (OMC_BOX_FIELD(_info, 4)));
          }
          else
          {
            omc_UnorderedMap_add(threadData, _clock_name, _clock, (OMC_BOX_FIELD(_info, 2)));
          }

          _clock_var = omc_NBVariable_getVarPointer(threadData, _clock_name, _OMC_LIT123);

          if((!omc_NBVariable_isClockOrClocked(threadData, _clock_var)))
          {
            omc_NBVariable_setVarKind(threadData, _clock_var, _OMC_LIT90);
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_string tmp6;
          modelica_string tmp7;
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT124,omc_NFComponentRef_toString(threadData, _clock_name));
          tmp7 = stringAppend(tmp6,_OMC_LIT58);
          tmpMeta5 = mmc_mk_cons(tmp7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta5);

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
  return;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_BClock_toExp(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
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
          tmpMeta6 = omc_mk_box2(8, &NFExpression_CLKCONST__desc, (OMC_BOX_FIELD(_clock, 2)));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_string tmp8;
          
          /* Pattern matching succeeded */
          tmp8 = stringAppend(_OMC_LIT125,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta7 = mmc_mk_cons(tmp8, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta7);
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_BClock_convertSub(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _oldClock = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
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
          tmpMeta6 = omc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, omc_NBBackendUtil_convertRational(threadData, (OMC_BOX_FIELD(_clock, 2))), omc_NBBackendUtil_convertRational(threadData, (OMC_BOX_FIELD(_clock, 3))), (OMC_BOX_FIELD(_clock, 4)));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_string tmp8;
          
          /* Pattern matching succeeded */
          tmp8 = stringAppend(_OMC_LIT126,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta7 = mmc_mk_cons(tmp8, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta7);
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
  _oldClock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oldClock;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_BClock_convertBase(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _oldClock = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
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
          tmpMeta1 = omc_NFClockKind_toDAE(threadData, (OMC_BOX_FIELD(_clock, 2)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_string tmp7;
          
          /* Pattern matching succeeded */
          tmp7 = stringAppend(_OMC_LIT127,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta6 = mmc_mk_cons(tmp7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta6);
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
  _oldClock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _oldClock;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NBPartitioning_BClock_baseClockInferrence(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fclock, modelica_metatype _base_clock_inferrence)
{
  modelica_metatype _clock = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _clock = __omcQ_24in_5Fclock;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      modelica_metatype _base_clock = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _base_clock has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _base_clock = omc_UnorderedMap_getSafe(threadData, (OMC_BOX_FIELD(_clock, 2)), _base_clock_inferrence, _OMC_LIT128);
          /* Tail recursive call */
          __omcQ_24in_5Fclock = _base_clock;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT132;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _clock;
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
  _clock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _clock;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NBPartitioning_BClock_isEventClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
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
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
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
modelica_metatype boxptr_NBPartitioning_BClock_isEventClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isEventClock(threadData, _clock);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBPartitioning_BClock_isInferredClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
modelica_metatype boxptr_NBPartitioning_BClock_isInferredClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isInferredClock(threadData, _clock);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_boolean omc_NBPartitioning_BClock_isBaseClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
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
modelica_metatype boxptr_NBPartitioning_BClock_isBaseClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isBaseClock(threadData, _clock);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
void omc_NBPartitioning_BClock_add(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _info)
{
  OMC_SO();
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp3_2)) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_2, 1);
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp3_1, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp2_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 3);
          _exp = tmpMeta5;
          _clock_name = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isClockOrSampleFunction(threadData, _exp)) goto tmp2_end;
          omc_NBPartitioning_BClock_create(threadData, _clock_name, _exp, _info);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp3_1, 1);
          if (optionNone(tmp3_2)) goto tmp2_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp3_2, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp2_end;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 3);
          _exp = tmpMeta8;
          _clock_name = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isClockOrSampleFunction(threadData, _exp)) goto tmp2_end;
          omc_NBPartitioning_BClock_create(threadData, _clock_name, _exp, _info);
          goto tmp2_done;
        }
        case 2: {
          
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

DLLModelDirection
modelica_boolean omc_NBPartitioning_BClock_isEqual(threadData_t *threadData, modelica_metatype _clock1, modelica_metatype _clock2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
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
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFClockKind_compare(threadData, (OMC_BOX_FIELD(_clock1, 2)), (OMC_BOX_FIELD(_clock2, 2))) == ((modelica_integer) 0));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((omc_Rational_isEqual(threadData, (OMC_BOX_FIELD(_clock1, 2)), (OMC_BOX_FIELD(_clock2, 2))) && omc_Rational_isEqual(threadData, (OMC_BOX_FIELD(_clock1, 3)), (OMC_BOX_FIELD(_clock2, 3)))) && omc_Util_optionEqual(threadData, (OMC_BOX_FIELD(_clock1, 4)), (OMC_BOX_FIELD(_clock2, 4)), boxvar_stringEq));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFComponentRef_isEqual(threadData, (OMC_BOX_FIELD(_clock1, 2)), (OMC_BOX_FIELD(_clock2, 2)));
          goto tmp3_done;
        }
        case 3: {
          
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
modelica_metatype boxptr_NBPartitioning_BClock_isEqual(threadData_t *threadData, modelica_metatype _clock1, modelica_metatype _clock2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isEqual(threadData, _clock1, _clock2);
  out_b = omc_mk_icon(_b);
  return out_b;
}

DLLModelDirection
modelica_integer omc_NBPartitioning_BClock_hash(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_integer _i;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = stringHashDjb2(omc_NBPartitioning_BClock_toString(threadData, _clock));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _i;
  return omc_ret_;
}
modelica_metatype boxptr_NBPartitioning_BClock_hash(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBPartitioning_BClock_hash(threadData, _clock);
  out_i = omc_mk_icon(_i);
  return out_i;
}

DLLModelDirection
modelica_string omc_NBPartitioning_BClock_toString(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
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
          tmp1 = omc_NFClockKind_toDebugString(threadData, (OMC_BOX_FIELD(_clock, 2)));
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp5;
          modelica_string tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_OMC_LIT133,omc_Rational_toString(threadData, (OMC_BOX_FIELD(_clock, 2))));
          tmp6 = stringAppend(tmp5,_OMC_LIT113);
          tmp7 = stringAppend(tmp6,omc_Rational_toString(threadData, (OMC_BOX_FIELD(_clock, 3))));
          tmp8 = stringAppend(tmp7,_OMC_LIT134);
          tmp1 = tmp8;
          goto tmp3_done;
        }
        case 5: {
          modelica_string tmp9;
          modelica_string tmp10;
          
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_OMC_LIT135,omc_NFComponentRef_toString(threadData, (OMC_BOX_FIELD(_clock, 2))));
          tmp10 = stringAppend(tmp9,_OMC_LIT134);
          tmp1 = tmp10;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT136;
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

