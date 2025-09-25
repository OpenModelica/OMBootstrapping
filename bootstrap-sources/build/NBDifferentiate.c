#include "omc_simulation_settings.h"
#include "NBDifferentiate.h"
#define _OMC_LIT0_data "log"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,3,_OMC_LIT0_data);
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
#define _OMC_LIT23_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/NBackEnd/Util/NBDifferentiate.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,79,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT24_6,1.758197185e9);
#define _OMC_LIT24_6 MMC_REFREALLIT(_OMC_LIT_STRUCT24_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2142)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2142)),MMC_IMMEDIATE(MMC_TAGFIXNUM(138)),_OMC_LIT24_6}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT25,2.0);
#define _OMC_LIT25 MMC_REFREALLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,4) {&NFExpression_REAL__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,17,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT27,_OMC_LIT28,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "NBDifferentiate.differentiateMultary failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,49,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "NBDifferentiate.differentiateBinary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,35,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "NBDifferentiate.differentiateBinary failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,48,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "NBDifferentiate.differentiateStatement"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,38,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "NBDifferentiate.differentiateStatement failed for:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,50,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,5) {&NFFlatten_FunctionTreeImpl_Tree_EMPTY__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT38_6,1.758197185e9);
#define _OMC_LIT38_6 MMC_REFREALLIT(_OMC_LIT_STRUCT38_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1752)),MMC_IMMEDIATE(MMC_TAGFIXNUM(19)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1752)),MMC_IMMEDIATE(MMC_TAGFIXNUM(135)),_OMC_LIT38_6}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "\n[BEFORE] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,10,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,4,3) {&BaseModelica_OutputFormat_OUTPUT__FORMAT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,1,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n[AFTER ] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,10,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,2,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "debugDifferentiation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,20,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Dumps debug output for the differentiation process."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,51,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(133)),_OMC_LIT44,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT48_6,1.758197185e9);
#define _OMC_LIT48_6 MMC_REFREALLIT(_OMC_LIT_STRUCT48_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1623)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1623)),MMC_IMMEDIATE(MMC_TAGFIXNUM(70)),_OMC_LIT48_6}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "$fDER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,5,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,1,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "NBDifferentiate.differentiateFunction failed for class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,55,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "NBDifferentiate.differentiateFunction failed for uninstantiated function "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,73,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "floor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,5,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT57,1.0);
#define _OMC_LIT57 MMC_REFREALLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,4) {&NFExpression_REAL__desc,_OMC_LIT57}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "div"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,3,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,1) {_OMC_LIT15,_OMC_LIT16}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "NBDifferentiate.differentiateBuiltinCall2Arg failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,57,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "mod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,3,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "rem"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,3,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "atan2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,5,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,4) {&NFExpression_REAL__desc,_OMC_LIT10}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "sign"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,4,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT70,0.5);
#define _OMC_LIT70 MMC_REFREALLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,4) {&NFExpression_REAL__desc,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,1) {_OMC_LIT71,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "cos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,3,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT73}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "sin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,3,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,1) {_OMC_LIT58,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT78,-1.0);
#define _OMC_LIT78 MMC_REFREALLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,2,4) {&NFExpression_REAL__desc,_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,1) {_OMC_LIT79,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "cosh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,4,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "sinh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,4,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "tanh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,4,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT85}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "exp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,3,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT89,10.0);
#define _OMC_LIT89 MMC_REFREALLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,4) {&NFExpression_REAL__desc,_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,2,1) {_OMC_LIT90,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "NBDifferentiate.differentiateBuiltinCall1Arg failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,57,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "ceil"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,4,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,7,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "abs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,3,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "sqrt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,4,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "tan"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,3,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "asin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,4,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "acos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,4,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "atan"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,4,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "acosh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,5,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "asinh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,5,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "atanh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,5,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "log10"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,5,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "NBDifferentiate.differentiateBuiltinCall failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,53,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "NBDifferentiate.differentiateBuiltinCall"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,40,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "delay"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,5,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "smooth"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,6,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "noEvent"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,7,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "sum"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,3,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,3,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "scalar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,6,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "vector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,6,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "matrix"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,6,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "diagonal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,8,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "transpose"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,9,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "symmetric"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,9,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "skew"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,4,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,2,1) {_OMC_LIT120,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,2,1) {_OMC_LIT119,_OMC_LIT121}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT123,2,1) {_OMC_LIT118,_OMC_LIT122}};
#define _OMC_LIT123 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,2,1) {_OMC_LIT117,_OMC_LIT123}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT125,2,1) {_OMC_LIT116,_OMC_LIT124}};
#define _OMC_LIT125 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT125)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT126,2,1) {_OMC_LIT115,_OMC_LIT125}};
#define _OMC_LIT126 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT126)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT127,2,1) {_OMC_LIT114,_OMC_LIT126}};
#define _OMC_LIT127 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT127)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT128,2,1) {_OMC_LIT109,_OMC_LIT127}};
#define _OMC_LIT128 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT128)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT129,2,1) {_OMC_LIT113,_OMC_LIT128}};
#define _OMC_LIT129 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,2,1) {_OMC_LIT112,_OMC_LIT129}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "homotopy"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,8,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "$OMC$inStreamDiv"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,16,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT133,2,1) {_OMC_LIT132,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT133 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT133)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT134,2,1) {_OMC_LIT131,_OMC_LIT133}};
#define _OMC_LIT134 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "promote"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,7,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "identity"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,8,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "fill"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,4,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT137}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "semiLinear"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,10,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,3,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,3,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "argmin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,6,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT143,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT142}};
#define _OMC_LIT143 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,1,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT145,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT69,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT145 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT145)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT146,1,1) {_OMC_LIT145}};
#define _OMC_LIT146 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT146)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT147,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT144,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT146,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT147 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT147)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT148,2,1) {_OMC_LIT147,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT148 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "argmax"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,6,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT150,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT149}};
#define _OMC_LIT150 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT150)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT151,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT151 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,6,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "NBDifferentiate.differentiateBuiltinCall failed because of non-call expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,80,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "NBDifferentiate.differentiateReduction failed because of non-call expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,78,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "NBDifferentiate.differentiateCall failed because the function is not a builtin function and could not be found in the function tree: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,133,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "NBDifferentiate.differentiateCall failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,46,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT157,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT157 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT157)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT158,1,18) {&NFType_ANY__desc,}};
#define _OMC_LIT158 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT158)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT159,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT159 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT159)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT160,17,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT160 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT160)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT161,3,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT161 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT161)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT162,8,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT159,_OMC_LIT160,_OMC_LIT161,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT162 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT162)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT163,11,3) {&NFVariable_VARIABLE__desc,_OMC_LIT157,_OMC_LIT158,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT8,_OMC_LIT11,_OMC_LIT162}};
#define _OMC_LIT163 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT163)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT164_6,1.758197185e9);
#define _OMC_LIT164_6 MMC_REFREALLIT(_OMC_LIT_STRUCT164_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT164,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(805)),MMC_IMMEDIATE(MMC_TAGFIXNUM(30)),MMC_IMMEDIATE(MMC_TAGFIXNUM(806)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT164_6}};
#define _OMC_LIT164 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT164)
#define _OMC_LIT165_data "NBDifferentiate.differentiateVariablePointer failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT165,56,_OMC_LIT165_data);
#define _OMC_LIT165 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT165)
#define _OMC_LIT166_data " because the result is expected to be a variable but turned out to be "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT166,70,_OMC_LIT166_data);
#define _OMC_LIT166 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT166)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT167_6,1.758197185e9);
#define _OMC_LIT167_6 MMC_REFREALLIT(_OMC_LIT_STRUCT167_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT167,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(625)),MMC_IMMEDIATE(MMC_TAGFIXNUM(30)),MMC_IMMEDIATE(MMC_TAGFIXNUM(626)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT167_6}};
#define _OMC_LIT167 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT167)
#define _OMC_LIT168_data "NBDifferentiate.differentiateComponentRef failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT168,54,_OMC_LIT168_data);
#define _OMC_LIT168 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT168)
#define _OMC_LIT169_data "NBDifferentiate.differentiateExpression failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT169,52,_OMC_LIT169_data);
#define _OMC_LIT169 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT169)
#define _OMC_LIT170_data "### debugDifferentiation | "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT170,27,_OMC_LIT170_data);
#define _OMC_LIT170 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT170)
#define _OMC_LIT171_data " ###\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT171,5,_OMC_LIT171_data);
#define _OMC_LIT171 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT171)
#define _OMC_LIT172_data "[BEFORE] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT172,9,_OMC_LIT172_data);
#define _OMC_LIT172 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT172)
#define _OMC_LIT173_data "[AFTER ] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT173,9,_OMC_LIT173_data);
#define _OMC_LIT173 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT173)
#define _OMC_LIT174_data "NBDifferentiate.differentiateEquation failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT174,50,_OMC_LIT174_data);
#define _OMC_LIT174 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT174)
#define _OMC_LIT175_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT175,1,_OMC_LIT175_data);
#define _OMC_LIT175 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT175)
#define _OMC_LIT176_data "NBDifferentiate.differentiateStrongComponent not implemented for entwined equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT176,84,_OMC_LIT176_data);
#define _OMC_LIT176 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT176)
#define _OMC_LIT177_data "NBDifferentiate.differentiateStrongComponent not implemented for unknown strong component:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT177,91,_OMC_LIT177_data);
#define _OMC_LIT177 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT177)
#define _OMC_LIT178_data "TIME"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT178,4,_OMC_LIT178_data);
#define _OMC_LIT178 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT178)
#define _OMC_LIT179_data "SIMPLE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT179,6,_OMC_LIT179_data);
#define _OMC_LIT179 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT179)
#define _OMC_LIT180_data "FUNCTION"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT180,8,_OMC_LIT180_data);
#define _OMC_LIT180 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT180)
#define _OMC_LIT181_data "JACOBIAN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT181,8,_OMC_LIT181_data);
#define _OMC_LIT181 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT181)
#define _OMC_LIT182_data "FAIL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT182,4,_OMC_LIT182_data);
#define _OMC_LIT182 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT182)
#define _OMC_LIT183_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT183,1,_OMC_LIT183_data);
#define _OMC_LIT183 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT183)
#define _OMC_LIT184_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT184,1,_OMC_LIT184_data);
#define _OMC_LIT184 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT184)
#define _OMC_LIT185_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT185,1,_OMC_LIT185_data);
#define _OMC_LIT185 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT185)
#include "util/modelica.h"

#include "NBDifferentiate_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBDifferentiate_expLog(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBDifferentiate_expLog,2,0) {(void*) boxptr_NBDifferentiate_expLog,0}};
#define boxvar_NBDifferentiate_expLog MMC_REFSTRUCTLIT(boxvar_lit_NBDifferentiate_expLog)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBDifferentiate_minusOne(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBDifferentiate_minusOne,2,0) {(void*) boxptr_NBDifferentiate_minusOne,0}};
#define boxvar_NBDifferentiate_minusOne MMC_REFSTRUCTLIT(boxvar_lit_NBDifferentiate_minusOne)
PROTECTED_FUNCTION_STATIC void omc_NBDifferentiate_createInterfaceDerivatives_addCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _diff_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBDifferentiate_createInterfaceDerivatives_addCref,2,0) {(void*) boxptr_NBDifferentiate_createInterfaceDerivatives_addCref,0}};
#define boxvar_NBDifferentiate_createInterfaceDerivatives_addCref MMC_REFSTRUCTLIT(boxvar_lit_NBDifferentiate_createInterfaceDerivatives_addCref)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBDifferentiate_expLog(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
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
      modelica_real _r;
      modelica_integer _i;
      int tmp4;
      // _r has no default value.
      // _i has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_real tmp6;
          modelica_real tmp7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp6 = mmc_unbox_real(tmpMeta5);
          _r = tmp6  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmp7 = _r;
          if(!(tmp7 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert(threadData, info, "Model error: Argument of log(r) was %g should be > 0", tmp7);
          }tmpMeta8 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(log(tmp7)));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_real tmp11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          _i = tmp10  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp11 = ((modelica_real)_i);
          if(!(tmp11 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert(threadData, info, "Model error: Argument of log(/*Real*/(i)) was %g should be > 0", tmp11);
          }tmpMeta12 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(log(tmp11)));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
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
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta13, tmpMeta14, _OMC_LIT4, _OMC_LIT20, tmpMeta15, tmpMeta16, listArray(tmpMeta17), _OMC_LIT21, _OMC_LIT22);
          tmpMeta19 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta25 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta20, tmpMeta21, _OMC_LIT4, _OMC_LIT20, tmpMeta22, tmpMeta23, listArray(tmpMeta24), _OMC_LIT21, _OMC_LIT22);
          tmpMeta26 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta18, tmpMeta19, omc_NFExpression_variability(threadData, _exp), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 8)))));
          tmpMeta1 = tmpMeta26;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBDifferentiate_minusOne(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _op)
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
      modelica_real _r;
      modelica_integer _i;
      int tmp4;
      // _r has no default value.
      // _i has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_real tmp6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp6 = mmc_unbox_real(tmpMeta5);
          _r = tmp6  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(-1.0 + _r));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _i = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(((modelica_integer) -1) + _i));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta12 = mmc_mk_cons(omc_NFExpression_makeOne(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta13 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta11, tmpMeta12, _op);
          tmpMeta1 = tmpMeta13;
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
modelica_metatype omc_NBDifferentiate_differentiateBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype __omcQ_24in_5FdiffArgs, modelica_metatype *out_diffArgs)
{
  modelica_metatype _binding = NULL;
  modelica_metatype _diffArgs = NULL;
  modelica_metatype _opt_exp = NULL;
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _binding = __omcQ_24in_5Fbinding;
  _diffArgs = __omcQ_24in_5FdiffArgs;
  // _opt_exp has no default value.
  // _exp has no default value.
  _opt_exp = omc_NFBinding_getExpOpt(threadData, _binding);

  if(isSome(_opt_exp))
  {
    _exp = omc_NBDifferentiate_differentiateExpression(threadData, omc_Util_getOption(threadData, _opt_exp), _diffArgs ,&_diffArgs);

    _binding = omc_NFBinding_setExp(threadData, _exp, _binding);
  }
  _return: OMC_LABEL_UNUSED
  if (out_diffArgs) { *out_diffArgs = _diffArgs; }
  return _binding;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateEquationAttributes(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattr, modelica_metatype _diffArguments)
{
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _attr = __omcQ_24in_5Fattr;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _attr;
    tmp4_2 = _diffArguments;
    {
      modelica_metatype _residualVar = NULL;
      modelica_metatype _diffedResidualVar = NULL;
      modelica_metatype _diff_map = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _residualVar has no default value.
      // _diffedResidualVar has no default value.
      // _diff_map has no default value.
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
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (4 != tmp11) goto tmp3_end;
          
          _residualVar = tmpMeta7;
          _diff_map = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_UnorderedMap_contains(threadData, omc_NBVariable_getVarName(threadData, _residualVar), _diff_map)) goto tmp3_end;
          _diffedResidualVar = omc_NBVariable_getVarPointer(threadData, omc_UnorderedMap_getOrFail(threadData, omc_NBVariable_getVarName(threadData, _residualVar), _diff_map), _OMC_LIT24);

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_attr), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = mmc_mk_some(_diffedResidualVar);
          _attr = tmpMeta12;
          tmpMeta1 = _attr;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _attr;
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
  _attr = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _attr;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateMultaryMultiplicationArgs(threadData_t *threadData, modelica_metatype _arguments, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype _operator, modelica_metatype *out_diffArguments)
{
  modelica_metatype _new_arguments = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _diff_arg = NULL;
  modelica_metatype _diff_lists = NULL;
  modelica_integer _idx;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_boolean tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_arguments = tmpMeta1;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  // _diff_arg has no default value.
  // _diff_lists has no default value.
  _idx = ((modelica_integer) 1);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _diff_lists = arrayCreate(listLength(_arguments), tmpMeta2);

  {
    modelica_metatype _arg;
    for (tmpMeta3 = _arguments; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _arg = MMC_CAR(tmpMeta3);
      _diff_arg = omc_NBDifferentiate_differentiateExpression(threadData, _arg, _diffArguments ,&_diffArguments);

      tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = arrayLength(_diff_lists);
      if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
        {
          tmp6 = (modelica_boolean)(_i == _idx);
          if(tmp6)
          {
            tmpMeta4 = mmc_mk_cons(_diff_arg, arrayGet(_diff_lists,_i) /* DAE.ASUB */);
            tmpMeta7 = tmpMeta4;
          }
          else
          {
            tmpMeta5 = mmc_mk_cons(_arg, arrayGet(_diff_lists,_i) /* DAE.ASUB */);
            tmpMeta7 = tmpMeta5;
          }
          arrayUpdate(_diff_lists,_i,tmpMeta7);
        }
      }

      _idx = ((modelica_integer) 1) + _idx;
    }
  }

  tmp15 = arrayLength(_diff_lists); tmp16 = ((modelica_integer) -1); tmp17 = ((modelica_integer) 1);
  if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_diff_lists); in_range_integer(_i, tmp15, tmp17); _i += tmp16)
    {
      tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta14 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, listReverse(arrayGet(_diff_lists,_i) /* DAE.ASUB */), tmpMeta13, _operator);
      tmpMeta12 = mmc_mk_cons(tmpMeta14, _new_arguments);
      _new_arguments = tmpMeta12;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _new_arguments;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateMultary(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _exp;
    {
      modelica_metatype _diff_arg = NULL;
      modelica_metatype _divisor = NULL;
      modelica_metatype _diff_enumerator = NULL;
      modelica_metatype _diff_divisor = NULL;
      modelica_metatype _arguments = NULL;
      modelica_metatype _new_arguments = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _inv_arguments = NULL;
      modelica_metatype _new_inv_arguments = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _diff_arguments = NULL;
      modelica_metatype _diff_inv_arguments = NULL;
      modelica_metatype _operator = NULL;
      modelica_metatype _addOp = NULL;
      modelica_metatype _powOp = NULL;
      modelica_integer _sizeClass;
      modelica_integer _powSizeClass;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _diff_arg has no default value.
      // _divisor has no default value.
      // _diff_enumerator has no default value.
      // _diff_divisor has no default value.
      // _arguments has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _new_arguments = tmpMeta3;
      // _inv_arguments has no default value.
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _new_inv_arguments = tmpMeta4;
      // _diff_arguments has no default value.
      // _diff_inv_arguments has no default value.
      // _operator has no default value.
      // _addOp has no default value.
      // _powOp has no default value.
      // _sizeClass has no default value.
      // _powSizeClass has no default value.
      tmp6 = 0;
      for (; tmp6 < 4; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,21,3) == 0) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
          _arguments = tmpMeta8;
          _inv_arguments = tmpMeta9;
          _operator = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_getMathClassification(threadData, _operator) == 1)) goto tmp5_end;
          {
            modelica_metatype _arg;
            for (tmpMeta11 = listReverse(_arguments); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _arg = MMC_CAR(tmpMeta11);
              _diff_arg = omc_NBDifferentiate_differentiateExpression(threadData, _arg, _diffArguments ,&_diffArguments);

              tmpMeta12 = mmc_mk_cons(_diff_arg, _new_arguments);
              _new_arguments = tmpMeta12;
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta14 = listReverse(_inv_arguments); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _arg = MMC_CAR(tmpMeta14);
              _diff_arg = omc_NBDifferentiate_differentiateExpression(threadData, _arg, _diffArguments ,&_diffArguments);

              tmpMeta15 = mmc_mk_cons(_diff_arg, _new_inv_arguments);
              _new_inv_arguments = tmpMeta15;
            }
          }
          tmpMeta17 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _new_arguments, _new_inv_arguments, _operator);
          tmpMeta1 = tmpMeta17;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,21,3) == 0) goto tmp5_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          if (!listEmpty(tmpMeta19)) goto tmp5_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
          _arguments = tmpMeta18;
          _operator = tmpMeta20;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_getMathClassification(threadData, _operator) == 3)) goto tmp5_end;
          /* Pattern-matching assignment */
          tmpMeta21 = omc_NFOperator_classify(threadData, _operator);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          _sizeClass = tmp23  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;

          tmpMeta24 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
          _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta24, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));

          _new_arguments = omc_NBDifferentiate_differentiateMultaryMultiplicationArgs(threadData, _arguments, _diffArguments, _operator ,&_diffArguments);
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _new_arguments, tmpMeta25, _addOp);
          tmpMeta1 = tmpMeta26;
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,21,3) == 0) goto tmp5_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
          _arguments = tmpMeta27;
          _inv_arguments = tmpMeta28;
          _operator = tmpMeta29;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_getMathClassification(threadData, _operator) == 3)) goto tmp5_end;
          /* Pattern-matching assignment */
          tmpMeta30 = omc_NFOperator_classify(threadData, _operator);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          _sizeClass = tmp32  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;

          _powSizeClass = (omc_NFType_isArray(threadData, omc_NFExpression_typeOf(threadData, listHead(_inv_arguments)))?3:1);

          tmpMeta33 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
          _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta33, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));

          tmpMeta34 = mmc_mk_box2(0, mmc_mk_integer(5), mmc_mk_integer((modelica_integer)_powSizeClass));
          _powOp = omc_NFOperator_fromClassification(threadData, tmpMeta34, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));

          _diff_arguments = omc_NBDifferentiate_differentiateMultaryMultiplicationArgs(threadData, _arguments, _diffArguments, _operator ,&_diffArguments);

          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta36 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _diff_arguments, tmpMeta35, _addOp);
          _diff_enumerator = tmpMeta36;

          _diff_inv_arguments = omc_NBDifferentiate_differentiateMultaryMultiplicationArgs(threadData, _inv_arguments, _diffArguments, _operator ,&_diffArguments);

          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta38 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _diff_inv_arguments, tmpMeta37, _addOp);
          _diff_divisor = tmpMeta38;

          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta40 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _inv_arguments, tmpMeta39, _operator);
          _divisor = tmpMeta40;
          tmpMeta43 = mmc_mk_cons(_diff_enumerator, _inv_arguments);
          tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta45 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta43, tmpMeta44, _operator);
          tmpMeta42 = mmc_mk_cons(tmpMeta45, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta47 = mmc_mk_cons(_diff_divisor, _arguments);
          tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta49 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta47, tmpMeta48, _operator);
          tmpMeta46 = mmc_mk_cons(tmpMeta49, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta50 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta42, tmpMeta46, _addOp);
          tmpMeta41 = mmc_mk_cons(tmpMeta50, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta52 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _divisor, _powOp, _OMC_LIT26);
          tmpMeta51 = mmc_mk_cons(tmpMeta52, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta53 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta41, tmpMeta51, _operator);
          tmpMeta1 = tmpMeta53;
          goto tmp5_done;
        }
        case 3: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          
          /* Pattern matching succeeded */
          tmpMeta55 = stringAppend(_OMC_LIT32,omc_NFExpression_toString(threadData, _exp));
          tmpMeta54 = mmc_mk_cons(tmpMeta55, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta54);
          goto goto_2;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp5_done;
      tmp5_done:;
    }
  }
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateBinary(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _diffExp1 = NULL;
      modelica_metatype _diffExp2 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _res = NULL;
      modelica_metatype _operator = NULL;
      modelica_metatype _addOp = NULL;
      modelica_metatype _mulOp = NULL;
      modelica_metatype _powOp = NULL;
      modelica_integer _sizeClass;
      modelica_integer _powSizeClass;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _diffExp1 has no default value.
      // _diffExp2 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _res has no default value.
      // _operator has no default value.
      // _addOp has no default value.
      // _mulOp has no default value.
      // _powOp has no default value.
      // _sizeClass has no default value.
      // _powSizeClass has no default value.
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta6;
          _operator = tmpMeta7;
          _exp2 = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_getMathClassification(threadData, _operator) == 1)) goto tmp3_end;
          _diffExp1 = omc_NBDifferentiate_differentiateExpression(threadData, _exp1, _diffArguments ,&_diffArguments);

          _diffExp2 = omc_NBDifferentiate_differentiateExpression(threadData, _exp2, _diffArguments ,&_diffArguments);
          tmpMeta9 = mmc_mk_cons(_diffExp1, mmc_mk_cons(_diffExp2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta9, tmpMeta10, _operator);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _diffArguments;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta12;
          _operator = tmpMeta13;
          _exp2 = tmpMeta14;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_getMathClassification(threadData, _operator) == 2)) goto tmp3_end;
          _diffExp1 = omc_NBDifferentiate_differentiateExpression(threadData, _exp1, _diffArguments ,&_diffArguments);

          _diffExp2 = omc_NBDifferentiate_differentiateExpression(threadData, _exp2, _diffArguments ,&_diffArguments);

          /* Pattern-matching assignment */
          tmpMeta15 = omc_NFOperator_classify(threadData, _operator);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          _sizeClass = tmp17  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;

          tmpMeta18 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
          _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta18, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));
          tmpMeta19 = mmc_mk_cons(_diffExp1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta20 = mmc_mk_cons(_diffExp2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta21 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta19, tmpMeta20, _addOp);
          tmpMeta[0+0] = tmpMeta21;
          tmpMeta[0+1] = _diffArguments;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta22;
          _operator = tmpMeta23;
          _exp2 = tmpMeta24;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_getMathClassification(threadData, _operator) == 3)) goto tmp3_end;
          _diffExp1 = omc_NBDifferentiate_differentiateExpression(threadData, _exp1, _diffArguments ,&_diffArguments);

          _diffExp2 = omc_NBDifferentiate_differentiateExpression(threadData, _exp2, _diffArguments ,&_diffArguments);

          _sizeClass = omc_NFOperator_classifyAddition(threadData, _operator);

          tmpMeta25 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
          _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta25, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));
          tmpMeta27 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _operator, _diffExp2);
          tmpMeta28 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _diffExp1, _operator, _exp2);
          tmpMeta26 = mmc_mk_cons(tmpMeta27, mmc_mk_cons(tmpMeta28, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta26, tmpMeta29, _addOp);
          tmpMeta[0+0] = tmpMeta30;
          tmpMeta[0+1] = _diffArguments;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta31;
          _operator = tmpMeta32;
          _exp2 = tmpMeta33;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_getMathClassification(threadData, _operator) == 4)) goto tmp3_end;
          _diffExp1 = omc_NBDifferentiate_differentiateExpression(threadData, _exp1, _diffArguments ,&_diffArguments);

          _diffExp2 = omc_NBDifferentiate_differentiateExpression(threadData, _exp2, _diffArguments ,&_diffArguments);

          /* Pattern-matching assignment */
          tmpMeta34 = omc_NFOperator_classify(threadData, _operator);
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          _sizeClass = tmp36  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;

          _powSizeClass = (omc_NFType_isArray(threadData, omc_NFExpression_typeOf(threadData, _exp2))?3:1);

          tmpMeta37 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
          _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta37, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));

          tmpMeta38 = mmc_mk_box2(0, mmc_mk_integer(3), mmc_mk_integer((modelica_integer)_sizeClass));
          _mulOp = omc_NFOperator_fromClassification(threadData, tmpMeta38, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));

          tmpMeta39 = mmc_mk_box2(0, mmc_mk_integer(5), mmc_mk_integer((modelica_integer)_powSizeClass));
          _powOp = omc_NFOperator_fromClassification(threadData, tmpMeta39, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));
          tmpMeta42 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _mulOp, _diffExp2);
          tmpMeta41 = mmc_mk_cons(tmpMeta42, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta44 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _diffExp1, _mulOp, _exp2);
          tmpMeta43 = mmc_mk_cons(tmpMeta44, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta45 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta41, tmpMeta43, _addOp);
          tmpMeta40 = mmc_mk_cons(tmpMeta45, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta47 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp2, _powOp, _OMC_LIT26);
          tmpMeta46 = mmc_mk_cons(tmpMeta47, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta48 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta40, tmpMeta46, _mulOp);
          tmpMeta[0+0] = tmpMeta48;
          tmpMeta[0+1] = _diffArguments;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _exp1 = tmpMeta49;
          _operator = tmpMeta50;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_NFOperator_getMathClassification(threadData, _operator) == 5) && omc_NFExpression_isZero(threadData, _exp1))) goto tmp3_end;
          tmpMeta[0+0] = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));
          tmpMeta[0+1] = _diffArguments;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_integer tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta51;
          _operator = tmpMeta52;
          _exp2 = tmpMeta53;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_getMathClassification(threadData, _operator) == 5)) goto tmp3_end;
          _diffExp1 = omc_NBDifferentiate_differentiateExpression(threadData, _exp1, _diffArguments ,&_diffArguments);

          _diffExp2 = omc_NBDifferentiate_differentiateExpression(threadData, _exp2, _diffArguments ,&_diffArguments);

          _diffExp1 = omc_NFSimplifyExp_simplifyDump(threadData, _diffExp1, 1 /* true */, _OMC_LIT33, _OMC_LIT9);

          _diffExp2 = omc_NFSimplifyExp_simplifyDump(threadData, _diffExp2, 1 /* true */, _OMC_LIT33, _OMC_LIT9);

          /* Pattern-matching assignment */
          tmpMeta54 = omc_NFOperator_classify(threadData, _operator);
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 2));
          tmp56 = mmc_unbox_integer(tmpMeta55);
          _sizeClass = tmp56  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;

          tmpMeta57 = mmc_mk_box2(0, mmc_mk_integer(3), mmc_mk_integer((modelica_integer)_sizeClass));
          _mulOp = omc_NFOperator_fromClassification(threadData, tmpMeta57, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));

          tmpMeta58 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
          _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta58, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));

          { /* match expression */
            modelica_boolean tmp62_1;modelica_boolean tmp62_2;
            tmp62_1 = omc_NFExpression_isZero(threadData, _diffExp1);
            tmp62_2 = omc_NFExpression_isZero(threadData, _diffExp2);
            {
              volatile mmc_switch_type tmp62;
              int tmp63;
              tmp62 = 0;
              for (; tmp62 < 4; tmp62++) {
                switch (MMC_SWITCH_CAST(tmp62)) {
                case 0: {
                  if (1 /* true */ != tmp62_1) goto tmp61_end;
                  if (1 /* true */ != tmp62_2) goto tmp61_end;
                  /* Pattern matching succeeded */
                  tmpMeta59 = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));
                  goto tmp61_done;
                }
                case 1: {
                  modelica_metatype tmpMeta64;
                  modelica_metatype tmpMeta65;
                  modelica_metatype tmpMeta66;
                  modelica_metatype tmpMeta67;
                  if (0 /* false */ != tmp62_1) goto tmp61_end;
                  if (1 /* true */ != tmp62_2) goto tmp61_end;
                  /* Pattern matching succeeded */
                  tmpMeta65 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _operator, omc_NBDifferentiate_minusOne(threadData, _exp2, _addOp));
                  tmpMeta64 = mmc_mk_cons(_exp2, mmc_mk_cons(tmpMeta65, mmc_mk_cons(_diffExp1, MMC_REFSTRUCTLIT(mmc_nil))));
                  tmpMeta66 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta67 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta64, tmpMeta66, _mulOp);
                  tmpMeta59 = tmpMeta67;
                  goto tmp61_done;
                }
                case 2: {
                  modelica_metatype tmpMeta68;
                  modelica_metatype tmpMeta69;
                  modelica_metatype tmpMeta70;
                  if (1 /* true */ != tmp62_1) goto tmp61_end;
                  if (0 /* false */ != tmp62_2) goto tmp61_end;
                  /* Pattern matching succeeded */
                  tmpMeta68 = mmc_mk_cons(_exp, mmc_mk_cons(omc_NBDifferentiate_expLog(threadData, _exp1), mmc_mk_cons(_diffExp2, MMC_REFSTRUCTLIT(mmc_nil))));
                  tmpMeta69 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta70 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta68, tmpMeta69, _mulOp);
                  tmpMeta59 = tmpMeta70;
                  goto tmp61_done;
                }
                case 3: {
                  modelica_metatype tmpMeta71;
                  modelica_metatype tmpMeta72;
                  modelica_metatype tmpMeta73;
                  modelica_metatype tmpMeta74;
                  modelica_metatype tmpMeta75;
                  modelica_metatype tmpMeta76;
                  modelica_metatype tmpMeta77;
                  modelica_metatype tmpMeta78;
                  modelica_metatype tmpMeta79;
                  modelica_metatype tmpMeta80;
                  modelica_metatype tmpMeta81;
                  modelica_metatype tmpMeta82;
                  modelica_metatype tmpMeta83;
                  
                  /* Pattern matching succeeded */
                  tmpMeta71 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _operator, omc_NBDifferentiate_minusOne(threadData, _exp2, _addOp));
                  _e1 = tmpMeta71;

                  tmpMeta72 = mmc_mk_cons(_exp1, mmc_mk_cons(omc_NBDifferentiate_expLog(threadData, _exp1), mmc_mk_cons(_diffExp2, MMC_REFSTRUCTLIT(mmc_nil))));
                  tmpMeta73 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta74 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta72, tmpMeta73, _mulOp);
                  _e2 = tmpMeta74;

                  tmpMeta75 = mmc_mk_cons(_exp2, mmc_mk_cons(_diffExp1, MMC_REFSTRUCTLIT(mmc_nil)));
                  tmpMeta76 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta77 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta75, tmpMeta76, _mulOp);
                  _e3 = tmpMeta77;
                  tmpMeta79 = mmc_mk_cons(_e2, mmc_mk_cons(_e3, MMC_REFSTRUCTLIT(mmc_nil)));
                  tmpMeta80 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta81 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta79, tmpMeta80, _addOp);
                  tmpMeta78 = mmc_mk_cons(_e1, mmc_mk_cons(tmpMeta81, MMC_REFSTRUCTLIT(mmc_nil)));
                  tmpMeta82 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta83 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta78, tmpMeta82, _mulOp);
                  tmpMeta59 = tmpMeta83;
                  goto tmp61_done;
                }
                }
                goto tmp61_end;
                tmp61_end: ;
              }
              goto goto_60;
              goto_60:;
              goto goto_2;
              goto tmp61_done;
              tmp61_done:;
            }
          }
          _res = tmpMeta59;
          tmpMeta[0+0] = _res;
          tmpMeta[0+1] = _diffArguments;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta84;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _operator = tmpMeta84;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_NFOperator_getMathClassification(threadData, _operator) == 6) || (omc_NFOperator_getMathClassification(threadData, _operator) == 7))) goto tmp3_end;
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          
          /* Pattern matching succeeded */
          tmpMeta86 = stringAppend(_OMC_LIT34,omc_NFExpression_toString(threadData, _exp));
          tmpMeta85 = mmc_mk_cons(tmpMeta86, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta85);
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
  _exp = tmpMeta[0+0];
  _diffArguments = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _diff_stmts = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _diff_stmts has no default value.
  _diffArguments = __omcQ_24in_5FdiffArguments;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _stmt;
    {
      modelica_metatype _diff_stmt = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _branch_stmts_flat = NULL;
      modelica_metatype _branch_stmts = NULL;
      modelica_metatype _branches = NULL;
      modelica_metatype tmpMeta3;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _diff_stmt has no default value.
      // _exp has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _branch_stmts_flat has no default value.
      // _branch_stmts has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _branches = tmpMeta3;
      tmp5 = 0;
      for (; tmp5 < 14; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,4) == 0) goto tmp4_end;
          
          _diff_stmt = tmp5_1;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isReal(threadData, omc_NFType_arrayElementType(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diff_stmt), 2))))))) goto tmp4_end;
          _lhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diff_stmt), 2))), _diffArguments ,&_diffArguments);

          _rhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diff_stmt), 3))), _diffArguments ,&_diffArguments);

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_diff_stmt), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = _lhs;
          _diff_stmt = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_diff_stmt), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = omc_NFSimplifyExp_simplifyDump(threadData, _rhs, 1 /* true */, _OMC_LIT35, _OMC_LIT9);
          _diff_stmt = tmpMeta8;
          tmpMeta9 = mmc_mk_cons(_diff_stmt, mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta9;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,2,5) == 0) goto tmp4_end;
          
          _diff_stmt = tmp5_1;
          /* Pattern matching succeeded */
          _branch_stmts = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diff_stmt), 4))), boxvar_NBDifferentiate_differentiateStatement, _diffArguments ,&_diffArguments);

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_diff_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = omc_List_flatten(threadData, _branch_stmts);
          _diff_stmt = tmpMeta10;
          tmpMeta11 = mmc_mk_cons(_diff_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta11;
          goto tmp4_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,9,3) == 0) goto tmp4_end;
          
          _diff_stmt = tmp5_1;
          /* Pattern matching succeeded */
          _branch_stmts = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diff_stmt), 3))), boxvar_NBDifferentiate_differentiateStatement, _diffArguments ,&_diffArguments);

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_diff_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = omc_List_flatten(threadData, _branch_stmts);
          _diff_stmt = tmpMeta12;
          tmpMeta13 = mmc_mk_cons(_diff_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta13;
          goto tmp4_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,12,2) == 0) goto tmp4_end;
          
          _diff_stmt = tmp5_1;
          /* Pattern matching succeeded */
          _branch_stmts = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diff_stmt), 2))), boxvar_NBDifferentiate_differentiateStatement, _diffArguments ,&_diffArguments);

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_diff_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = omc_List_flatten(threadData, _branch_stmts);
          _diff_stmt = tmpMeta14;
          tmpMeta15 = mmc_mk_cons(_diff_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta15;
          goto tmp4_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,3,2) == 0) goto tmp4_end;
          
          _diff_stmt = tmp5_1;
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diff_stmt), 2))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _branch = MMC_CAR(tmpMeta16);
              /* Pattern-matching assignment */
              tmpMeta17 = _branch;
              tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
              tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
              _exp = tmpMeta18;
              _branch_stmts_flat = tmpMeta19;

              _branch_stmts = omc_List_mapFold(threadData, _branch_stmts_flat, boxvar_NBDifferentiate_differentiateStatement, _diffArguments ,&_diffArguments);

              tmpMeta21 = mmc_mk_box2(0, _exp, omc_List_flatten(threadData, _branch_stmts));
              tmpMeta20 = mmc_mk_cons(tmpMeta21, _branches);
              _branches = tmpMeta20;
            }
          }

          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_diff_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[2] = listReverse(_branches);
          _diff_stmt = tmpMeta23;
          tmpMeta24 = mmc_mk_cons(_diff_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta24;
          goto tmp4_done;
        }
        case 5: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,4,2) == 0) goto tmp4_end;
          
          _diff_stmt = tmp5_1;
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta25 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diff_stmt), 2))); !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
            {
              _branch = MMC_CAR(tmpMeta25);
              /* Pattern-matching assignment */
              tmpMeta26 = _branch;
              tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 1));
              tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
              _exp = tmpMeta27;
              _branch_stmts_flat = tmpMeta28;

              _branch_stmts = omc_List_mapFold(threadData, _branch_stmts_flat, boxvar_NBDifferentiate_differentiateStatement, _diffArguments ,&_diffArguments);

              tmpMeta30 = mmc_mk_box2(0, _exp, omc_List_flatten(threadData, _branch_stmts));
              tmpMeta29 = mmc_mk_cons(tmpMeta30, _branches);
              _branches = tmpMeta29;
            }
          }

          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_diff_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[2] = listReverse(_branches);
          _diff_stmt = tmpMeta32;
          tmpMeta33 = mmc_mk_cons(_diff_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta33;
          goto tmp4_done;
        }
        case 6: {
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,4) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta34 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta34;
          goto tmp4_done;
        }
        case 7: {
          modelica_metatype tmpMeta35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,3) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta35 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta35;
          goto tmp4_done;
        }
        case 8: {
          modelica_metatype tmpMeta36;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,5,4) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta36 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta36;
          goto tmp4_done;
        }
        case 9: {
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,6,2) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta37 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta37;
          goto tmp4_done;
        }
        case 10: {
          modelica_metatype tmpMeta38;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,8,2) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta38 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta38;
          goto tmp4_done;
        }
        case 11: {
          modelica_metatype tmpMeta39;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,10,1) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta39 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta39;
          goto tmp4_done;
        }
        case 12: {
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,11,1) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta40 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta40;
          goto tmp4_done;
        }
        case 13: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          
          /* Pattern matching succeeded */
          tmpMeta42 = stringAppend(_OMC_LIT36,omc_NFStatement_toString(threadData, _stmt, _OMC_LIT9));
          tmpMeta41 = mmc_mk_cons(tmpMeta42, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta41);
          goto goto_2;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _diff_stmts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _diff_stmts;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _alg = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _statements = NULL;
  modelica_metatype _statements_flat = NULL;
  modelica_metatype _inputs = NULL;
  modelica_metatype _outputs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  // _statements has no default value.
  // _statements_flat has no default value.
  // _inputs has no default value.
  // _outputs has no default value.
  _statements = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), boxvar_NBDifferentiate_differentiateStatement, _diffArguments ,&_diffArguments);

  _statements_flat = omc_List_flatten(threadData, _statements);

  _inputs = omc_NFAlgorithm_getInputsOutputs(threadData, _statements_flat ,&_outputs);

  tmpMeta1 = mmc_mk_box6(3, &NFAlgorithm_ALGORITHM__desc, _statements_flat, _inputs, _outputs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 6))));
  _alg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _alg;
}

static modelica_metatype closure0_NBReplacements_single(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype old = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype new = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBReplacements_single(thData, $in_exp, old, new);
}
DLLDirection
modelica_metatype omc_NBDifferentiate_resolvePartialDerivatives(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ffunc, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype *out_funcTree)
{
  modelica_metatype _func = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_metatype _der_func = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _tmp_cls = NULL;
  modelica_metatype _new_cls = NULL;
  modelica_metatype _wrap_cls = NULL;
  modelica_metatype _sections = NULL;
  modelica_metatype _diff_map = NULL;
  modelica_metatype _interface_map = NULL;
  modelica_metatype _diffArgs = NULL;
  modelica_metatype _algorithms = NULL;
  modelica_metatype _cachedData = NULL;
  modelica_metatype _diffVar = NULL;
  modelica_metatype _diffCref = NULL;
  modelica_metatype _locals = NULL;
  modelica_metatype _outputs = NULL;
  modelica_metatype _local_outputs = NULL;
  modelica_boolean _changed;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _func = __omcQ_24in_5Ffunc;
  _funcTree = __omcQ_24in_5FfuncTree;
  // _der_func has no default value.
  // _node has no default value.
  // _cls has no default value.
  // _tmp_cls has no default value.
  // _new_cls has no default value.
  // _wrap_cls has no default value.
  // _sections has no default value.
  _diff_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  // _interface_map has no default value.
  _diffArgs = omc_NBDifferentiate_DifferentiationArguments_default(threadData, 1, _OMC_LIT37);
  // _algorithms has no default value.
  // _cachedData has no default value.
  // _diffVar has no default value.
  // _diffCref has no default value.
  // _locals has no default value.
  // _outputs has no default value.
  // _local_outputs has no default value.
  _changed = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _func;
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
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,7) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          
          _der_func = tmp4_1;
          _cls = tmpMeta7;
          /* Pattern matching succeeded */
          _wrap_cls = omc_Pointer_access(threadData, _cls);

          { /* match expression */
            modelica_metatype tmp11_1;
            tmp11_1 = _wrap_cls;
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              for (; tmp11 < 2; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,7,3) == 0) goto tmp10_end;
                  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,7) == 0) goto tmp10_end;
                  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 5));
                  
                  _wrap_cls = tmp11_1;
                  _node = tmpMeta13;
                  _tmp_cls = tmpMeta14;
                  /* Pattern matching succeeded */
                  { /* match expression */
                    modelica_metatype tmp18_1;
                    tmp18_1 = omc_Pointer_access(threadData, _tmp_cls);
                    {
                      volatile mmc_switch_type tmp18;
                      int tmp19;
                      tmp18 = 0;
                      for (; tmp18 < 2; tmp18++) {
                        switch (MMC_SWITCH_CAST(tmp18)) {
                        case 0: {
                          modelica_metatype tmpMeta20;
                          modelica_metatype tmpMeta21;
                          modelica_metatype tmpMeta22;
                          modelica_metatype tmpMeta23;
                          modelica_metatype tmpMeta24;
                          modelica_metatype tmpMeta28;
                          modelica_metatype tmpMeta29;
                          modelica_metatype tmpMeta33;
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
                          if (mmc__uniontype__metarecord__typedef__equal(tmp18_1,5,5) == 0) goto tmp17_end;
                          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp18_1), 4));
                          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,4) == 0) goto tmp17_end;
                          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 4));
                          
                          _new_cls = tmp18_1;
                          _sections = tmpMeta20;
                          _algorithms = tmpMeta21;
                          /* Pattern matching succeeded */
                          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(8));
                          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_diffArgs), 8*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[5] = mmc_mk_integer(3);
                          _diffArgs = tmpMeta22;

                          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(8));
                          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_diffArgs), 8*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[6] = _funcTree;
                          _diffArgs = tmpMeta23;

                          {
                            modelica_metatype __omcQ_24tmpVar1;
                            modelica_metatype* tmp25;
                            modelica_metatype tmpMeta26;
                            modelica_string __omcQ_24tmpVar0;
                            modelica_integer tmp27;
                            modelica_metatype _var_loopVar = 0;
                            modelica_metatype _var;
                            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 4)));
                            tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
                            __omcQ_24tmpVar1 = tmpMeta26; /* defaultValue */
                            tmp25 = &__omcQ_24tmpVar1;
                            while(1) {
                              tmp27 = 1;
                              if (!listEmpty(_var_loopVar)) {
                                _var = MMC_CAR(_var_loopVar);
                                _var_loopVar = MMC_CDR(_var_loopVar);
                                tmp27--;
                              }
                              if (tmp27 == 0) {
                                __omcQ_24tmpVar0 = omc_NFInstNode_InstNode_name(threadData, _var);
                                *tmp25 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                                tmp25 = &MMC_CDR(*tmp25);
                              } else if (tmp27 == 1) {
                                break;
                              } else {
                                goto goto_16;
                              }
                            }
                            *tmp25 = mmc_mk_nil();
                            tmpMeta24 = __omcQ_24tmpVar1;
                          }
                          _interface_map = omc_UnorderedMap_fromLists(threadData, tmpMeta24, omc_List_fill(threadData, mmc_mk_boolean(0 /* false */), listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 4))))), boxvar_stringHashDjb2, boxvar_stringEqual);

                          {
                            modelica_metatype _var;
                            for (tmpMeta28 = omc_List_getAtIndexLst(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 11))), 0 /* false */); !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
                            {
                              _var = MMC_CAR(tmpMeta28);
                              omc_UnorderedMap_remove(threadData, omc_NFInstNode_InstNode_name(threadData, _var), _interface_map);

                              {
                                modelica_metatype __omcQ_24tmpVar3;
                                modelica_metatype* tmp30;
                                modelica_metatype tmpMeta31;
                                modelica_metatype __omcQ_24tmpVar2;
                                modelica_integer tmp32;
                                modelica_metatype _node_loopVar = 0;
                                modelica_metatype _node;
                                _node_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 5)));
                                tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
                                __omcQ_24tmpVar3 = tmpMeta31; /* defaultValue */
                                tmp30 = &__omcQ_24tmpVar3;
                                while(1) {
                                  tmp32 = 1;
                                  if (!listEmpty(_node_loopVar)) {
                                    _node = MMC_CAR(_node_loopVar);
                                    _node_loopVar = MMC_CDR(_node_loopVar);
                                    tmp32--;
                                  }
                                  if (tmp32 == 0) {
                                    __omcQ_24tmpVar2 = omc_NFInstNode_InstNode_setComponentDirection(threadData, 1, _node);
                                    *tmp30 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                                    tmp30 = &MMC_CDR(*tmp30);
                                  } else if (tmp32 == 1) {
                                    break;
                                  } else {
                                    goto goto_16;
                                  }
                                }
                                *tmp30 = mmc_mk_nil();
                                tmpMeta29 = __omcQ_24tmpVar3;
                              }
                              _local_outputs = tmpMeta29;

                              {
                                modelica_metatype __omcQ_24tmpVar5;
                                modelica_metatype* tmp34;
                                modelica_metatype tmpMeta35;
                                modelica_metatype __omcQ_24tmpVar4;
                                modelica_integer tmp36;
                                modelica_metatype _node_loopVar = 0;
                                modelica_metatype _node;
                                _node_loopVar = _local_outputs;
                                tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
                                __omcQ_24tmpVar5 = tmpMeta35; /* defaultValue */
                                tmp34 = &__omcQ_24tmpVar5;
                                while(1) {
                                  tmp36 = 1;
                                  if (!listEmpty(_node_loopVar)) {
                                    _node = MMC_CAR(_node_loopVar);
                                    _node_loopVar = MMC_CDR(_node_loopVar);
                                    tmp36--;
                                  }
                                  if (tmp36 == 0) {
                                    __omcQ_24tmpVar4 = omc_NFInstNode_InstNode_protect(threadData, _node);
                                    *tmp34 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                                    tmp34 = &MMC_CDR(*tmp34);
                                  } else if (tmp36 == 1) {
                                    break;
                                  } else {
                                    goto goto_16;
                                  }
                                }
                                *tmp34 = mmc_mk_nil();
                                tmpMeta33 = __omcQ_24tmpVar5;
                              }
                              _local_outputs = tmpMeta33;

                              tmpMeta37 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
                              omc_NBDifferentiate_createInterfaceDerivatives(threadData, tmpMeta37, _interface_map, _diff_map);

                              omc_NBDifferentiate_createInterfaceDerivatives(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 6))), _interface_map, _diff_map);

                              omc_NBDifferentiate_createInterfaceDerivatives(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 5))), _interface_map, _diff_map);

                              tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(8));
                              memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_diffArgs), 8*sizeof(modelica_metatype));
                              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[4] = mmc_mk_some(_diff_map);
                              _diffArgs = tmpMeta38;

                              _locals = omc_NBDifferentiate_differentiateFunctionInterfaceNodes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 6))), _interface_map, _diff_map, _diffArgs, 1 /* true */ ,&_diffArgs);

                              _outputs = omc_NBDifferentiate_differentiateFunctionInterfaceNodes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 5))), _interface_map, _diff_map, _diffArgs, 0 /* false */ ,&_diffArgs);

                              tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
                              _diffCref = omc_UnorderedMap_getSafe(threadData, omc_NFComponentRef_fromNode(threadData, _var, omc_NFInstNode_InstNode_getType(threadData, _var), tmpMeta39, 1), _diff_map, _OMC_LIT38);

                              tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(15));
                              memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[6] = listAppend(_locals, _local_outputs);
                              _der_func = tmpMeta40;

                              tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(15));
                              memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[5] = _outputs;
                              _der_func = tmpMeta41;

                              _algorithms = omc_List_mapFold(threadData, _algorithms, boxvar_NBDifferentiate_differentiateAlgorithm, _diffArgs ,&_diffArgs);

                              tmpMeta42 = mmc_mk_box2(0, omc_NFExpression_fromCref(threadData, _diffCref, 0 /* false */), omc_NFExpression_makeOne(threadData, omc_NFComponentRef_getSubscriptedType(threadData, _diffCref, 0 /* false */)));
                              _algorithms = omc_NFAlgorithm_mapExpList(threadData, _algorithms, (modelica_fnptr) mmc_mk_box2(0,closure0_NBReplacements_single,tmpMeta42));

                              omc_UnorderedMap_add(threadData, omc_NFInstNode_InstNode_name(threadData, _var), mmc_mk_boolean(0 /* false */), _interface_map);
                            }
                          }

                          tmpMeta44 = MMC_TAGPTR(mmc_alloc_words(6));
                          memcpy(MMC_UNTAGPTR(tmpMeta44), MMC_UNTAGPTR(_sections), 6*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta44))[4] = _algorithms;
                          _sections = tmpMeta44;

                          tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(7));
                          memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_new_cls), 7*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[4] = _sections;
                          _new_cls = tmpMeta45;

                          tmpMeta46 = MMC_TAGPTR(mmc_alloc_words(7));
                          memcpy(MMC_UNTAGPTR(tmpMeta46), MMC_UNTAGPTR(_new_cls), 7*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta46))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_wrap_cls), 2)));
                          _new_cls = tmpMeta46;

                          tmpMeta47 = MMC_TAGPTR(mmc_alloc_words(7));
                          memcpy(MMC_UNTAGPTR(tmpMeta47), MMC_UNTAGPTR(_new_cls), 7*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta47))[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_wrap_cls), 4)));
                          _new_cls = tmpMeta47;

                          tmpMeta48 = MMC_TAGPTR(mmc_alloc_words(9));
                          memcpy(MMC_UNTAGPTR(tmpMeta48), MMC_UNTAGPTR(_node), 9*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta48))[5] = omc_Pointer_create(threadData, _new_cls);
                          _node = tmpMeta48;

                          tmpMeta49 = mmc_mk_cons(_der_func, MMC_REFSTRUCTLIT(mmc_nil));
                          tmpMeta50 = mmc_mk_box4(5, &NFInstNode_CachedData_FUNCTION__desc, tmpMeta49, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */));
                          _cachedData = tmpMeta50;

                          tmpMeta51 = MMC_TAGPTR(mmc_alloc_words(15));
                          memcpy(MMC_UNTAGPTR(tmpMeta51), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta51))[3] = omc_NFInstNode_InstNode_setFuncCache(threadData, _node, _cachedData);
                          _der_func = tmpMeta51;

                          tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
                          tmpMeta52 = MMC_TAGPTR(mmc_alloc_words(15));
                          memcpy(MMC_UNTAGPTR(tmpMeta52), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta52))[10] = tmpMeta53;
                          _der_func = tmpMeta52;

                          tmpMeta55 = MMC_REFSTRUCTLIT(mmc_nil);
                          tmpMeta54 = MMC_TAGPTR(mmc_alloc_words(15));
                          memcpy(MMC_UNTAGPTR(tmpMeta54), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta54))[11] = tmpMeta55;
                          _der_func = tmpMeta54;

                          _changed = 1 /* true */;
                          tmpMeta15 = _new_cls;
                          goto tmp17_done;
                        }
                        case 1: {
                          
                          /* Pattern matching succeeded */
                          tmpMeta15 = _wrap_cls;
                          goto tmp17_done;
                        }
                        }
                        goto tmp17_end;
                        tmp17_end: ;
                      }
                      goto goto_16;
                      goto_16:;
                      goto goto_9;
                      goto tmp17_done;
                      tmp17_done:;
                    }
                  }tmpMeta8 = tmpMeta15;
                  goto tmp10_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = _wrap_cls;
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
          _new_cls = tmpMeta8;

          if(_changed)
          {
            if(omc_Flags_isSet(threadData, _OMC_LIT47))
            {
              tmpMeta56 = stringAppend(_OMC_LIT39,omc_NFFunction_Function_toFlatString(threadData, _func, _OMC_LIT40, _OMC_LIT9));
              tmpMeta57 = stringAppend(tmpMeta56,_OMC_LIT41);
              fputs(MMC_STRINGDATA(tmpMeta57),stdout);

              tmpMeta58 = stringAppend(_OMC_LIT42,omc_NFFunction_Function_toFlatString(threadData, _der_func, _OMC_LIT40, _OMC_LIT9));
              tmpMeta59 = stringAppend(tmpMeta58,_OMC_LIT43);
              fputs(MMC_STRINGDATA(tmpMeta59),stdout);
            }

            _funcTree = omc_NFFlatten_FunctionTreeImpl_add(threadData, _funcTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 2))), _der_func, boxvar_NFFlatten_FunctionTreeImpl_addConflictReplace);
          }
          tmpMeta1 = _der_func;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _func;
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
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  return _func;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_createSlotDerivatives(threadData_t *threadData, modelica_metatype _slots, modelica_metatype _interface_map, modelica_metatype _diff_map, modelica_metatype __omcQ_24in_5FdiffArgs, modelica_metatype *out_diffArgs)
{
  modelica_metatype _new_slots = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _diffArgs = NULL;
  modelica_metatype _d_node = NULL;
  modelica_integer _local_index;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_slots = tmpMeta1;
  _diffArgs = __omcQ_24in_5FdiffArgs;
  // _d_node has no default value.
  _local_index = ((modelica_integer) 1) + listLength(_slots);
  {
    modelica_metatype _slot;
    for (tmpMeta2 = _slots; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _slot = MMC_CAR(tmpMeta2);
      if((!omc_UnorderedMap_contains(threadData, omc_NFInstNode_InstNode_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slot), 2)))), _interface_map)))
      {
        _d_node = omc_NBDifferentiate_differentiateFunctionInterfaceNode(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slot), 2))), _diff_map, _diffArgs ,&_diffArgs);

        tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(8));
        memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_slot), 8*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[2] = _d_node;
        _slot = tmpMeta3;

        tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(8));
        memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_slot), 8*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[6] = mmc_mk_integer(_local_index);
        _slot = tmpMeta4;

        tmpMeta5 = mmc_mk_cons(_slot, _new_slots);
        _new_slots = tmpMeta5;

        _local_index = ((modelica_integer) 1) + _local_index;
      }
    }
  }

  _new_slots = listReverse(_new_slots);
  _return: OMC_LABEL_UNUSED
  if (out_diffArgs) { *out_diffArgs = _diffArgs; }
  return _new_slots;
}

PROTECTED_FUNCTION_STATIC void omc_NBDifferentiate_createInterfaceDerivatives_addCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _diff_map)
{
  modelica_metatype _diff_cref = NULL;
  modelica_metatype _children = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _diff_cref has no default value.
  // _children has no default value.
  _diff_cref = omc_NBVariable_makeFDerVar(threadData, _cref);

  omc_UnorderedMap_add(threadData, _cref, _diff_cref, _diff_map);

  _children = omc_NFComponentRef_getRecordChildren(threadData, _cref);

  {
    modelica_metatype _child;
    for (tmpMeta1 = _children; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _child = MMC_CAR(tmpMeta1);
      omc_NBDifferentiate_createInterfaceDerivatives_addCref(threadData, _child, _diff_map);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NBDifferentiate_createInterfaceDerivatives(threadData_t *threadData, modelica_metatype _interface_nodes, modelica_metatype _interface_map, modelica_metatype _diff_map)
{
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  {
    modelica_metatype _node;
    for (tmpMeta1 = _interface_nodes; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _node = MMC_CAR(tmpMeta1);
      if((!omc_UnorderedMap_contains(threadData, omc_NFInstNode_InstNode_name(threadData, _node), _interface_map)))
      {
        tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
        _cref = omc_NFComponentRef_fromNode(threadData, _node, omc_NFInstNode_InstNode_getType(threadData, _node), tmpMeta2, 1);

        omc_NBDifferentiate_createInterfaceDerivatives_addCref(threadData, _cref, _diff_map);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateFunctionInterfaceNode(threadData_t *threadData, modelica_metatype _node, modelica_metatype _diff_map, modelica_metatype __omcQ_24in_5FdiffArgs, modelica_metatype *out_diffArgs)
{
  modelica_metatype _d_node = NULL;
  modelica_metatype _diffArgs = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _diff_cref = NULL;
  modelica_metatype _comp = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _func = NULL;
  modelica_metatype _d_func = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _d_node has no default value.
  _diffArgs = __omcQ_24in_5FdiffArgs;
  // _cref has no default value.
  // _diff_cref has no default value.
  // _comp has no default value.
  // _binding has no default value.
  // _func has no default value.
  // _d_func has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cref = omc_NFComponentRef_fromNode(threadData, _node, omc_NFInstNode_InstNode_getType(threadData, _node), tmpMeta1, 1);

  _diff_cref = omc_UnorderedMap_getSafe(threadData, _cref, _diff_map, _OMC_LIT48);

  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _diff_cref;
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,5) == 0) goto tmp4_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,6) == 0) goto tmp4_end;
          
          _d_node = tmpMeta7;
          /* Pattern matching succeeded */
          _comp = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_d_node), 5))));

          { /* match expression */
            modelica_metatype tmp11_1;
            tmp11_1 = _comp;
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              for (; tmp11 < 2; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  modelica_metatype tmpMeta13;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,1,8) == 0) goto tmp10_end;
                  
                  _comp = tmp11_1;
                  /* Pattern matching succeeded */
                  _binding = omc_NBDifferentiate_differentiateBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), _diffArgs ,&_diffArgs);

                  tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(10));
                  memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_comp), 10*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[4] = _binding;
                  _comp = tmpMeta13;
                  tmpMeta8 = _comp;
                  goto tmp10_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = _comp;
                  goto tmp10_done;
                }
                }
                goto tmp10_end;
                tmp10_end: ;
              }
              goto goto_9;
              goto_9:;
              goto goto_3;
              goto tmp10_done;
              tmp10_done:;
            }
          }
          _comp = tmpMeta8;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_d_node), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[5] = omc_Pointer_create(threadData, _comp);
          _d_node = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_diff_cref), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = _d_node;
          _diff_cref = tmpMeta15;
          tmpMeta2 = _diff_cref;
          goto tmp4_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta2 = _diff_cref;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      goto_3:;
      MMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _diff_cref = tmpMeta2;

  if(omc_NFInstNode_InstNode_isFunction(threadData, _node))
  {
    _func = listHead(omc_NFFunction_Function_getCachedFuncs(threadData, _node));

    _d_func = omc_NBDifferentiate_differentiateFunction(threadData, _func, omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEqual, ((modelica_integer) 1)), _diffArgs ,&_diffArgs);
  }

  _d_node = omc_NFComponentRef_node(threadData, _diff_cref);
  _return: OMC_LABEL_UNUSED
  if (out_diffArgs) { *out_diffArgs = _diffArgs; }
  return _d_node;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateFunctionInterfaceNodes(threadData_t *threadData, modelica_metatype __omcQ_24in_5Finterface_5Fnodes, modelica_metatype _interface_map, modelica_metatype _diff_map, modelica_metatype __omcQ_24in_5FdiffArgs, modelica_boolean _keepOld, modelica_metatype *out_diffArgs)
{
  modelica_metatype _interface_nodes = NULL;
  modelica_metatype _diffArgs = NULL;
  modelica_metatype _new_nodes = NULL;
  modelica_metatype _d_node = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _interface_nodes = __omcQ_24in_5Finterface_5Fnodes;
  _diffArgs = __omcQ_24in_5FdiffArgs;
  // _new_nodes has no default value.
  // _d_node has no default value.
  tmp2 = (modelica_boolean)_keepOld;
  if(tmp2)
  {
    tmpMeta3 = listReverse(_interface_nodes);
  }
  else
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta3 = tmpMeta1;
  }
  _new_nodes = tmpMeta3;

  {
    modelica_metatype _node;
    for (tmpMeta4 = _interface_nodes; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _node = MMC_CAR(tmpMeta4);
      if((!omc_UnorderedMap_contains(threadData, omc_NFInstNode_InstNode_name(threadData, _node), _interface_map)))
      {
        _d_node = omc_NBDifferentiate_differentiateFunctionInterfaceNode(threadData, _node, _diff_map, _diffArgs ,&_diffArgs);

        tmpMeta5 = mmc_mk_cons(_d_node, _new_nodes);
        _new_nodes = tmpMeta5;
      }
    }
  }

  _interface_nodes = listReverse(_new_nodes);
  _return: OMC_LABEL_UNUSED
  if (out_diffArgs) { *out_diffArgs = _diffArgs; }
  return _interface_nodes;
}
modelica_metatype boxptr_NBDifferentiate_differentiateFunctionInterfaceNodes(threadData_t *threadData, modelica_metatype __omcQ_24in_5Finterface_5Fnodes, modelica_metatype _interface_map, modelica_metatype _diff_map, modelica_metatype __omcQ_24in_5FdiffArgs, modelica_metatype _keepOld, modelica_metatype *out_diffArgs)
{
  modelica_integer tmp1;
  modelica_metatype _interface_nodes = NULL;
  tmp1 = mmc_unbox_integer(_keepOld);
  _interface_nodes = omc_NBDifferentiate_differentiateFunctionInterfaceNodes(threadData, __omcQ_24in_5Finterface_5Fnodes, _interface_map, _diff_map, __omcQ_24in_5FdiffArgs, tmp1, out_diffArgs);
  /* skip box _interface_nodes; list<NFInstNode.InstNode> */
  /* skip box _diffArgs; NBDifferentiate.DifferentiationArguments */
  return _interface_nodes;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateFunction(threadData_t *threadData, modelica_metatype _func, modelica_metatype _interface_map, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _der_func = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta72;
  modelica_metatype tmpMeta73;
  modelica_metatype tmpMeta74;
  modelica_metatype tmpMeta75;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _der_func has no default value.
  _diffArguments = __omcQ_24in_5FdiffArguments;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _func;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _cls = NULL;
      modelica_metatype _new_cls = NULL;
      modelica_metatype _funcDiffArgs = NULL;
      modelica_metatype _diff_map = NULL;
      modelica_metatype _algorithms = NULL;
      modelica_metatype _funcDer = NULL;
      modelica_metatype _dummy_func = NULL;
      modelica_metatype _cachedData = NULL;
      modelica_string _der_func_name = NULL;
      modelica_metatype _inputs = NULL;
      modelica_metatype _locals = NULL;
      modelica_metatype _outputs = NULL;
      modelica_metatype _local_outputs = NULL;
      modelica_metatype _slots = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _cls has no default value.
      // _new_cls has no default value.
      // _funcDiffArgs has no default value.
      _diff_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
      // _algorithms has no default value.
      // _funcDer has no default value.
      // _dummy_func has no default value.
      // _cachedData has no default value.
      // _der_func_name has no default value.
      // _inputs has no default value.
      // _locals has no default value.
      // _outputs has no default value.
      // _local_outputs has no default value.
      // _slots has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,7) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          
          _der_func = tmp4_1;
          _node = tmpMeta6;
          _cls = tmpMeta7;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp11_1;
            tmp11_1 = omc_Pointer_access(threadData, _cls);
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              for (; tmp11 < 2; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta21;
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
                  modelica_metatype tmpMeta53;
                  modelica_metatype tmpMeta54;
                  modelica_metatype tmpMeta55;
                  modelica_metatype tmpMeta56;
                  modelica_metatype tmpMeta57;
                  modelica_metatype tmpMeta58;
                  modelica_metatype tmpMeta59;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,5,5) == 0) goto tmp10_end;
                  
                  _new_cls = tmp11_1;
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype __omcQ_24tmpVar7;
                    modelica_metatype* tmp14;
                    modelica_metatype tmpMeta15;
                    modelica_metatype __omcQ_24tmpVar6;
                    modelica_integer tmp16;
                    modelica_metatype _lout_loopVar = 0;
                    modelica_metatype _lout;
                    _lout_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 5)));
                    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar7 = tmpMeta15; /* defaultValue */
                    tmp14 = &__omcQ_24tmpVar7;
                    while(1) {
                      tmp16 = 1;
                      if (!listEmpty(_lout_loopVar)) {
                        _lout = MMC_CAR(_lout_loopVar);
                        _lout_loopVar = MMC_CDR(_lout_loopVar);
                        tmp16--;
                      }
                      if (tmp16 == 0) {
                        __omcQ_24tmpVar6 = omc_NFInstNode_InstNode_setComponentDirection(threadData, 1, _lout);
                        *tmp14 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                        tmp14 = &MMC_CDR(*tmp14);
                      } else if (tmp16 == 1) {
                        break;
                      } else {
                        goto goto_9;
                      }
                    }
                    *tmp14 = mmc_mk_nil();
                    tmpMeta13 = __omcQ_24tmpVar7;
                  }
                  _local_outputs = tmpMeta13;

                  {
                    modelica_metatype __omcQ_24tmpVar9;
                    modelica_metatype* tmp18;
                    modelica_metatype tmpMeta19;
                    modelica_metatype __omcQ_24tmpVar8;
                    modelica_integer tmp20;
                    modelica_metatype _lout_loopVar = 0;
                    modelica_metatype _lout;
                    _lout_loopVar = _local_outputs;
                    tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar9 = tmpMeta19; /* defaultValue */
                    tmp18 = &__omcQ_24tmpVar9;
                    while(1) {
                      tmp20 = 1;
                      if (!listEmpty(_lout_loopVar)) {
                        _lout = MMC_CAR(_lout_loopVar);
                        _lout_loopVar = MMC_CDR(_lout_loopVar);
                        tmp20--;
                      }
                      if (tmp20 == 0) {
                        __omcQ_24tmpVar8 = omc_NFInstNode_InstNode_protect(threadData, _lout);
                        *tmp18 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                        tmp18 = &MMC_CDR(*tmp18);
                      } else if (tmp20 == 1) {
                        break;
                      } else {
                        goto goto_9;
                      }
                    }
                    *tmp18 = mmc_mk_nil();
                    tmpMeta17 = __omcQ_24tmpVar9;
                  }
                  _local_outputs = tmpMeta17;

                  _funcDiffArgs = omc_NBDifferentiate_DifferentiationArguments_default(threadData, 1, _OMC_LIT37);

                  tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_funcDiffArgs), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[5] = mmc_mk_integer(3);
                  _funcDiffArgs = tmpMeta21;

                  tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_funcDiffArgs), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 6)));
                  _funcDiffArgs = tmpMeta22;

                  omc_NBDifferentiate_createInterfaceDerivatives(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 4))), _interface_map, _diff_map);

                  omc_NBDifferentiate_createInterfaceDerivatives(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 6))), _interface_map, _diff_map);

                  omc_NBDifferentiate_createInterfaceDerivatives(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 5))), _interface_map, _diff_map);

                  tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_funcDiffArgs), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[4] = mmc_mk_some(_diff_map);
                  _funcDiffArgs = tmpMeta23;

                  _inputs = omc_NBDifferentiate_differentiateFunctionInterfaceNodes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 4))), _interface_map, _diff_map, _funcDiffArgs, 1 /* true */ ,&_funcDiffArgs);

                  _locals = omc_NBDifferentiate_differentiateFunctionInterfaceNodes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 6))), _interface_map, _diff_map, _funcDiffArgs, 0 /* false */ ,&_funcDiffArgs);

                  _outputs = omc_NBDifferentiate_differentiateFunctionInterfaceNodes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 5))), _interface_map, _diff_map, _funcDiffArgs, 0 /* false */ ,&_funcDiffArgs);

                  tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[4] = _inputs;
                  _der_func = tmpMeta24;

                  tmpMeta26 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 6))), mmc_mk_cons(_locals, mmc_mk_cons(_local_outputs, MMC_REFSTRUCTLIT(mmc_nil))));
                  tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[6] = omc_List_flatten(threadData, tmpMeta26);
                  _der_func = tmpMeta25;

                  tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[5] = _outputs;
                  _der_func = tmpMeta27;

                  tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(7));
                  memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_new_cls), 7*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[3] = omc_NFClassTree_ClassTree_appendComponentsToFlatTree(threadData, _locals, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_new_cls), 3))));
                  _new_cls = tmpMeta28;

                  _slots = omc_NBDifferentiate_createSlotDerivatives(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 7))), _interface_map, _diff_map, _funcDiffArgs ,&_funcDiffArgs);

                  tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[7] = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 7))), _slots);
                  _der_func = tmpMeta29;

                  _dummy_func = _func;

                  tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(9));
                  memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_node), 9*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[5] = omc_Pointer_create(threadData, _new_cls);
                  _node = tmpMeta30;

                  tmpMeta31 = stringAppend(_OMC_LIT49,intString(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 10))))));
                  _der_func_name = tmpMeta31;

                  tmpMeta33 = stringAppend(_der_func_name,_OMC_LIT50);
                  tmpMeta34 = stringAppend(tmpMeta33,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))));
                  tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(9));
                  memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_node), 9*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[2] = tmpMeta34;
                  _node = tmpMeta32;

                  tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(9));
                  memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_node), 9*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[3] = omc_SCodeUtil_setElementName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))));
                  _node = tmpMeta35;

                  tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[2] = omc_AbsynUtil_prefixPath(threadData, _der_func_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 2))));
                  _der_func = tmpMeta36;

                  tmpMeta37 = mmc_mk_cons(_der_func, MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta38 = mmc_mk_box4(5, &NFInstNode_CachedData_FUNCTION__desc, tmpMeta37, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */));
                  _cachedData = tmpMeta38;

                  tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[3] = omc_NFInstNode_InstNode_setFuncCache(threadData, _node, _cachedData);
                  _der_func = tmpMeta39;

                  tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta42 = mmc_mk_box6(3, &NFFunctionDerivative_FUNCTION__DER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dummy_func), 3))), _OMC_LIT51, tmpMeta40, tmpMeta41);
                  _funcDer = tmpMeta42;

                  tmpMeta44 = mmc_mk_cons(_funcDer, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dummy_func), 10))));
                  tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_dummy_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[10] = tmpMeta44;
                  _dummy_func = tmpMeta43;

                  tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_funcDiffArgs), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[6] = omc_NFFlatten_FunctionTreeImpl_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_funcDiffArgs), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dummy_func), 2))), _dummy_func, boxvar_NFFlatten_FunctionTreeImpl_addConflictReplace);
                  _funcDiffArgs = tmpMeta45;

                  { /* match expression */
                    modelica_metatype tmp49_1;
                    tmp49_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_new_cls), 4)));
                    {
                      modelica_metatype _sections = NULL;
                      volatile mmc_switch_type tmp49;
                      int tmp50;
                      // _sections has no default value.
                      tmp49 = 0;
                      for (; tmp49 < 2; tmp49++) {
                        switch (MMC_SWITCH_CAST(tmp49)) {
                        case 0: {
                          modelica_metatype tmpMeta51;
                          modelica_metatype tmpMeta52;
                          if (mmc__uniontype__metarecord__typedef__equal(tmp49_1,0,4) == 0) goto tmp48_end;
                          
                          _sections = tmp49_1;
                          /* Pattern matching succeeded */
                          _algorithms = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sections), 4))), boxvar_NBDifferentiate_differentiateAlgorithm, _funcDiffArgs ,&_funcDiffArgs);

                          tmpMeta51 = MMC_TAGPTR(mmc_alloc_words(6));
                          memcpy(MMC_UNTAGPTR(tmpMeta51), MMC_UNTAGPTR(_sections), 6*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta51))[4] = _algorithms;
                          _sections = tmpMeta51;

                          tmpMeta52 = MMC_TAGPTR(mmc_alloc_words(7));
                          memcpy(MMC_UNTAGPTR(tmpMeta52), MMC_UNTAGPTR(_new_cls), 7*sizeof(modelica_metatype));
                          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta52))[4] = _sections;
                          _new_cls = tmpMeta52;
                          tmpMeta46 = _funcDiffArgs;
                          goto tmp48_done;
                        }
                        case 1: {
                          
                          /* Pattern matching succeeded */
                          tmpMeta46 = _funcDiffArgs;
                          goto tmp48_done;
                        }
                        }
                        goto tmp48_end;
                        tmp48_end: ;
                      }
                      goto goto_47;
                      goto_47:;
                      goto goto_9;
                      goto tmp48_done;
                      tmp48_done:;
                    }
                  }
                  _funcDiffArgs = tmpMeta46;

                  tmpMeta53 = MMC_TAGPTR(mmc_alloc_words(9));
                  memcpy(MMC_UNTAGPTR(tmpMeta53), MMC_UNTAGPTR(_node), 9*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta53))[5] = omc_Pointer_create(threadData, _new_cls);
                  _node = tmpMeta53;

                  tmpMeta54 = mmc_mk_cons(_der_func, MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta55 = mmc_mk_box4(5, &NFInstNode_CachedData_FUNCTION__desc, tmpMeta54, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */));
                  _cachedData = tmpMeta55;

                  tmpMeta56 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta56), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta56))[3] = omc_NFInstNode_InstNode_setFuncCache(threadData, _node, _cachedData);
                  _der_func = tmpMeta56;

                  tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta57 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta57), MMC_UNTAGPTR(_der_func), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta57))[10] = tmpMeta58;
                  _der_func = tmpMeta57;

                  tmpMeta59 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta59), MMC_UNTAGPTR(_diffArguments), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta59))[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_funcDiffArgs), 6)));
                  _diffArguments = tmpMeta59;
                  tmpMeta8 = _new_cls;
                  goto tmp10_done;
                }
                case 1: {
                  modelica_metatype tmpMeta60;
                  modelica_metatype tmpMeta61;
                  modelica_metatype tmpMeta62;
                  
                  /* Pattern matching succeeded */
                  tmpMeta61 = stringAppend(_OMC_LIT52,omc_NFClass_toFlatString(threadData, omc_Pointer_access(threadData, _cls), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))), _OMC_LIT40, _OMC_LIT9));
                  tmpMeta62 = stringAppend(tmpMeta61,_OMC_LIT50);
                  tmpMeta60 = mmc_mk_cons(tmpMeta62, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta60);
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
          _new_cls = tmpMeta8;

          tmpMeta63 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta63), MMC_UNTAGPTR(_diffArguments), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta63))[6] = omc_NFFlatten_FunctionTreeImpl_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 2))), _der_func, boxvar_NFFlatten_FunctionTreeImpl_addConflictDefault);
          _diffArguments = tmpMeta63;

          tmpMeta64 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta65 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta66 = mmc_mk_box6(3, &NFFunctionDerivative_FUNCTION__DER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))), _OMC_LIT51, tmpMeta64, tmpMeta65);
          _funcDer = tmpMeta66;

          tmpMeta67 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta67), MMC_UNTAGPTR(_func), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta67))[10] = omc_List_appendElt(threadData, _funcDer, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 10))));
          _func = tmpMeta67;

          tmpMeta68 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta68), MMC_UNTAGPTR(_diffArguments), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta68))[6] = omc_NFFlatten_FunctionTreeImpl_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _func, boxvar_NFFlatten_FunctionTreeImpl_addConflictReplace);
          _diffArguments = tmpMeta68;
          tmpMeta1 = _der_func;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          
          /* Pattern matching succeeded */
          tmpMeta70 = stringAppend(_OMC_LIT53,omc_NFFunction_Function_signatureString(threadData, _func, 1 /* true */));
          tmpMeta71 = stringAppend(tmpMeta70,_OMC_LIT50);
          tmpMeta69 = mmc_mk_cons(tmpMeta71, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta69);
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
  _der_func = tmpMeta1;

  if(omc_Flags_isSet(threadData, _OMC_LIT47))
  {
    tmpMeta72 = stringAppend(_OMC_LIT39,omc_NFFunction_Function_toFlatString(threadData, _func, _OMC_LIT40, _OMC_LIT9));
    tmpMeta73 = stringAppend(tmpMeta72,_OMC_LIT41);
    fputs(MMC_STRINGDATA(tmpMeta73),stdout);

    tmpMeta74 = stringAppend(_OMC_LIT42,omc_NFFunction_Function_toFlatString(threadData, _der_func, _OMC_LIT40, _OMC_LIT9));
    tmpMeta75 = stringAppend(tmpMeta74,_OMC_LIT43);
    fputs(MMC_STRINGDATA(tmpMeta75),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _der_func;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateBuiltinCall2Arg(threadData_t *threadData, modelica_string _name, modelica_metatype _arg1, modelica_metatype _arg2, modelica_metatype *out_derFuncCall2)
{
  modelica_metatype _derFuncCall1 = NULL;
  modelica_metatype _derFuncCall2 = NULL;
  modelica_integer _sizeClass;
  modelica_metatype _powOp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _addOp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _mulOp = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _derFuncCall1 has no default value.
  // _derFuncCall2 has no default value.
  _sizeClass = 1;
  tmpMeta1 = mmc_mk_box2(0, mmc_mk_integer(5), mmc_mk_integer((modelica_integer)_sizeClass));
  _powOp = omc_NFOperator_fromClassification(threadData, tmpMeta1, _OMC_LIT4);
  tmpMeta2 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
  _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta2, _OMC_LIT4);
  tmpMeta3 = mmc_mk_box2(0, mmc_mk_integer(3), mmc_mk_integer((modelica_integer)_sizeClass));
  _mulOp = omc_NFOperator_fromClassification(threadData, tmpMeta3, _OMC_LIT4);
  
  
  { /* match expression */
    modelica_string tmp7_1;
    tmp7_1 = _name;
    {
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _ret1 = NULL;
      modelica_metatype _ret2 = NULL;
      volatile mmc_switch_type tmp7;
      int tmp8;
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _ret1 has no default value.
      // _ret2 has no default value.
      tmp7 = 0;
      for (; tmp7 < 5; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT54;
          tmpMeta[0+1] = _OMC_LIT54;
          goto tmp6_done;
        }
        case 1: {
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
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT63), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT56, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta9, tmpMeta10, _OMC_LIT4, _OMC_LIT20, tmpMeta11, tmpMeta12, listArray(tmpMeta13), _OMC_LIT21, _OMC_LIT22);
          tmpMeta16 = mmc_mk_cons(_arg1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta17 = mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta18 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta16, tmpMeta17, _mulOp);
          tmpMeta15 = mmc_mk_cons(tmpMeta18, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT56, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta19, tmpMeta20, _OMC_LIT4, _OMC_LIT20, tmpMeta21, tmpMeta22, listArray(tmpMeta23), _OMC_LIT21, _OMC_LIT22);
          tmpMeta25 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta14, tmpMeta15, omc_NFPrefixes_variabilityMax(threadData, omc_NFExpression_variability(threadData, _arg1), omc_NFExpression_variability(threadData, _arg2)), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 8)))));
          _exp2 = tmpMeta25;

          _ret2 = omc_NFExpression_negate(threadData, _exp2);
          tmpMeta[0+0] = _OMC_LIT58;
          tmpMeta[0+1] = _ret2;
          goto tmp6_done;
        }
        case 2: {
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
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT64), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT60, _OMC_LIT2, _OMC_LIT61, _OMC_LIT16, tmpMeta26, tmpMeta27, _OMC_LIT4, _OMC_LIT20, tmpMeta28, tmpMeta29, listArray(tmpMeta30), _OMC_LIT21, _OMC_LIT22);
          tmpMeta32 = mmc_mk_cons(_arg1, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta38 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT60, _OMC_LIT2, _OMC_LIT61, _OMC_LIT16, tmpMeta33, tmpMeta34, _OMC_LIT4, _OMC_LIT20, tmpMeta35, tmpMeta36, listArray(tmpMeta37), _OMC_LIT21, _OMC_LIT22);
          tmpMeta39 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta31, tmpMeta32, omc_NFPrefixes_variabilityMax(threadData, omc_NFExpression_variability(threadData, _arg1), omc_NFExpression_variability(threadData, _arg2)), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 8)))));
          _exp2 = tmpMeta39;

          _ret2 = omc_NFExpression_negate(threadData, _exp2);
          tmpMeta[0+0] = _OMC_LIT58;
          tmpMeta[0+1] = _ret2;
          goto tmp6_done;
        }
        case 3: {
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
          if (5 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT65), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta40 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg1, _powOp, _OMC_LIT26);
          _exp1 = tmpMeta40;

          tmpMeta41 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg2, _powOp, _OMC_LIT26);
          _exp2 = tmpMeta41;

          tmpMeta42 = mmc_mk_cons(_exp1, mmc_mk_cons(_exp2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta44 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta42, tmpMeta43, _addOp);
          _exp1 = tmpMeta44;

          tmpMeta45 = mmc_mk_cons(omc_NFExpression_negate(threadData, _arg2), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta46 = mmc_mk_cons(_exp1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta47 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta45, tmpMeta46, _mulOp);
          _ret1 = tmpMeta47;

          tmpMeta48 = mmc_mk_cons(_arg1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta49 = mmc_mk_cons(_exp1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta50 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta48, tmpMeta49, _mulOp);
          _ret2 = tmpMeta50;
          tmpMeta[0+0] = _ret1;
          tmpMeta[0+1] = _ret2;
          goto tmp6_done;
        }
        case 4: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          
          /* Pattern matching succeeded */
          tmpMeta52 = stringAppend(_OMC_LIT62,_name);
          tmpMeta51 = mmc_mk_cons(tmpMeta52, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta51);
          goto goto_5;
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
  _derFuncCall1 = tmpMeta[0+0];
  _derFuncCall2 = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_derFuncCall2) { *out_derFuncCall2 = _derFuncCall2; }
  return _derFuncCall1;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateBuiltinCall1Arg(threadData_t *threadData, modelica_string _name, modelica_metatype _arg)
{
  modelica_metatype _derFuncCall = NULL;
  modelica_integer _sizeClass;
  modelica_metatype _powOp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _addOp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _mulOp = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _derFuncCall has no default value.
  _sizeClass = 1;
  tmpMeta1 = mmc_mk_box2(0, mmc_mk_integer(5), mmc_mk_integer((modelica_integer)_sizeClass));
  _powOp = omc_NFOperator_fromClassification(threadData, tmpMeta1, _OMC_LIT4);
  tmpMeta2 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
  _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta2, _OMC_LIT4);
  tmpMeta3 = mmc_mk_box2(0, mmc_mk_integer(3), mmc_mk_integer((modelica_integer)_sizeClass));
  _mulOp = omc_NFOperator_fromClassification(threadData, tmpMeta3, _OMC_LIT4);
  { /* match expression */
    modelica_string tmp7_1;
    tmp7_1 = _name;
    {
      modelica_metatype _ret = NULL;
      int tmp7;
      // _ret has no default value.
      {
        switch (MMC_SWITCH_CAST(stringHashDjb2Mod(tmp7_1,8192))) {
        case 2934 /* sign */: {
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT67), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta4 = _OMC_LIT54;
          goto tmp6_done;
        }
        case 5282 /* ceil */: {
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT93), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta4 = _OMC_LIT66;
          goto tmp6_done;
        }
        case 871 /* floor */: {
          if (5 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta4 = _OMC_LIT66;
          goto tmp6_done;
        }
        case 7699 /* integer */: {
          if (7 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT94), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta4 = _OMC_LIT54;
          goto tmp6_done;
        }
        case 7323 /* abs */: {
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
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT95), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT68, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta8, tmpMeta9, _OMC_LIT69, _OMC_LIT20, tmpMeta10, tmpMeta11, listArray(tmpMeta12), _OMC_LIT21, _OMC_LIT22);
          tmpMeta14 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT68, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta15, tmpMeta16, _OMC_LIT69, _OMC_LIT20, tmpMeta17, tmpMeta18, listArray(tmpMeta19), _OMC_LIT21, _OMC_LIT22);
          tmpMeta21 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta13, tmpMeta14, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 8)))));
          tmpMeta22 = mmc_mk_box3(26, &NFExpression_CAST__desc, omc_NFExpression_typeOf(threadData, _arg), tmpMeta21);
          tmpMeta4 = tmpMeta22;
          goto tmp6_done;
        }
        case 3823 /* sqrt */: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT96), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta23 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg, _powOp, _OMC_LIT71);
          _ret = tmpMeta23;
          tmpMeta24 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta25 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT72, tmpMeta24, _mulOp);
          tmpMeta4 = tmpMeta25;
          goto tmp6_done;
        }
        case 2575 /* sin */: {
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
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT75), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT74, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta26, tmpMeta27, _OMC_LIT4, _OMC_LIT20, tmpMeta28, tmpMeta29, listArray(tmpMeta30), _OMC_LIT21, _OMC_LIT22);
          tmpMeta32 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta38 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT74, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta33, tmpMeta34, _OMC_LIT4, _OMC_LIT20, tmpMeta35, tmpMeta36, listArray(tmpMeta37), _OMC_LIT21, _OMC_LIT22);
          tmpMeta39 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta31, tmpMeta32, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 8)))));
          tmpMeta4 = tmpMeta39;
          goto tmp6_done;
        }
        case 1738 /* cos */: {
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
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT73), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta45 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT76, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta40, tmpMeta41, _OMC_LIT4, _OMC_LIT20, tmpMeta42, tmpMeta43, listArray(tmpMeta44), _OMC_LIT21, _OMC_LIT22);
          tmpMeta46 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta52 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT76, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta47, tmpMeta48, _OMC_LIT4, _OMC_LIT20, tmpMeta49, tmpMeta50, listArray(tmpMeta51), _OMC_LIT21, _OMC_LIT22);
          tmpMeta53 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta45, tmpMeta46, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 8)))));
          tmpMeta4 = omc_NFExpression_negate(threadData, tmpMeta53);
          goto tmp6_done;
        }
        case 3400 /* tan */: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT97), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta55 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta57 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta59 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT74, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta54, tmpMeta55, _OMC_LIT4, _OMC_LIT20, tmpMeta56, tmpMeta57, listArray(tmpMeta58), _OMC_LIT21, _OMC_LIT22);
          tmpMeta60 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta62 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta64 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta65 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta66 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT74, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta61, tmpMeta62, _OMC_LIT4, _OMC_LIT20, tmpMeta63, tmpMeta64, listArray(tmpMeta65), _OMC_LIT21, _OMC_LIT22);
          tmpMeta67 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta59, tmpMeta60, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta66), 8)))));
          _ret = tmpMeta67;

          tmpMeta68 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _ret, _powOp, _OMC_LIT26);
          _ret = tmpMeta68;
          tmpMeta69 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta70 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta69, _mulOp);
          tmpMeta4 = tmpMeta70;
          goto tmp6_done;
        }
        case 6000 /* asin */: {
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT98), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta71 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg, _powOp, _OMC_LIT26);
          _ret = tmpMeta71;

          tmpMeta72 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta73 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta72, _addOp);
          _ret = tmpMeta73;

          tmpMeta74 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _ret, _powOp, _OMC_LIT71);
          _ret = tmpMeta74;
          tmpMeta75 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta76 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta75, _mulOp);
          tmpMeta4 = tmpMeta76;
          goto tmp6_done;
        }
        case 5163 /* acos */: {
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT99), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta77 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg, _powOp, _OMC_LIT26);
          _ret = tmpMeta77;

          tmpMeta78 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta79 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta78, _addOp);
          _ret = tmpMeta79;

          tmpMeta80 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _ret, _powOp, _OMC_LIT71);
          _ret = tmpMeta80;
          tmpMeta81 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta82 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT80, tmpMeta81, _mulOp);
          tmpMeta4 = tmpMeta82;
          goto tmp6_done;
        }
        case 6825 /* atan */: {
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT100), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta83 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg, _powOp, _OMC_LIT26);
          _ret = tmpMeta83;

          tmpMeta84 = mmc_mk_cons(_OMC_LIT58, mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta85 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta86 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta84, tmpMeta85, _addOp);
          _ret = tmpMeta86;
          tmpMeta87 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta88 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta87, _mulOp);
          tmpMeta4 = tmpMeta88;
          goto tmp6_done;
        }
        case 3159 /* sinh */: {
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT83), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta89 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta90 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta91 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta92 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta93 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta94 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT82, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta89, tmpMeta90, _OMC_LIT4, _OMC_LIT20, tmpMeta91, tmpMeta92, listArray(tmpMeta93), _OMC_LIT21, _OMC_LIT22);
          tmpMeta95 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta96 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta97 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta98 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta99 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta100 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta101 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT82, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta96, tmpMeta97, _OMC_LIT4, _OMC_LIT20, tmpMeta98, tmpMeta99, listArray(tmpMeta100), _OMC_LIT21, _OMC_LIT22);
          tmpMeta102 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta94, tmpMeta95, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta101), 8)))));
          tmpMeta4 = tmpMeta102;
          goto tmp6_done;
        }
        case 114 /* cosh */: {
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT81), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta103 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta104 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta105 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta106 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta107 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta108 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT84, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta103, tmpMeta104, _OMC_LIT4, _OMC_LIT20, tmpMeta105, tmpMeta106, listArray(tmpMeta107), _OMC_LIT21, _OMC_LIT22);
          tmpMeta109 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta110 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta111 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta112 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta113 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta114 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta115 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT84, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta110, tmpMeta111, _OMC_LIT4, _OMC_LIT20, tmpMeta112, tmpMeta113, listArray(tmpMeta114), _OMC_LIT21, _OMC_LIT22);
          tmpMeta116 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta108, tmpMeta109, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta115), 8)))));
          tmpMeta4 = tmpMeta116;
          goto tmp6_done;
        }
        case 5808 /* tanh */: {
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
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
          modelica_metatype tmpMeta133;
          if (4 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT85), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta117 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta118 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta119 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta120 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta121 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta122 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT86, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta117, tmpMeta118, _OMC_LIT4, _OMC_LIT20, tmpMeta119, tmpMeta120, listArray(tmpMeta121), _OMC_LIT21, _OMC_LIT22);
          tmpMeta123 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta124 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta125 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta126 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta127 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta128 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta129 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT86, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta124, tmpMeta125, _OMC_LIT4, _OMC_LIT20, tmpMeta126, tmpMeta127, listArray(tmpMeta128), _OMC_LIT21, _OMC_LIT22);
          tmpMeta130 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta122, tmpMeta123, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta129), 8)))));
          _ret = tmpMeta130;

          tmpMeta131 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _ret, _powOp, _OMC_LIT26);
          _ret = tmpMeta131;
          tmpMeta132 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta133 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta132, _addOp);
          tmpMeta4 = tmpMeta133;
          goto tmp6_done;
        }
        case 6643 /* acosh */: {
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          if (5 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT101), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta134 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg, _powOp, _OMC_LIT26);
          _ret = tmpMeta134;

          tmpMeta135 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta136 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta135, _OMC_LIT77, _addOp);
          _ret = tmpMeta136;

          tmpMeta137 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _ret, _powOp, _OMC_LIT71);
          _ret = tmpMeta137;
          tmpMeta138 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta139 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta138, _mulOp);
          tmpMeta4 = tmpMeta139;
          goto tmp6_done;
        }
        case 1496 /* asinh */: {
          modelica_metatype tmpMeta140;
          modelica_metatype tmpMeta141;
          modelica_metatype tmpMeta142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          if (5 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT102), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta140 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg, _powOp, _OMC_LIT26);
          _ret = tmpMeta140;

          tmpMeta141 = mmc_mk_cons(_ret, mmc_mk_cons(_OMC_LIT58, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta142 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta143 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta141, tmpMeta142, _addOp);
          _ret = tmpMeta143;

          tmpMeta144 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _ret, _powOp, _OMC_LIT71);
          _ret = tmpMeta144;
          tmpMeta145 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta146 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta145, _mulOp);
          tmpMeta4 = tmpMeta146;
          goto tmp6_done;
        }
        case 4145 /* atanh */: {
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_metatype tmpMeta150;
          modelica_metatype tmpMeta151;
          if (5 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT103), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta147 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _arg, _powOp, _OMC_LIT26);
          _ret = tmpMeta147;

          tmpMeta148 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta149 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta148, _addOp);
          _ret = tmpMeta149;
          tmpMeta150 = mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta151 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta150, _mulOp);
          tmpMeta4 = tmpMeta151;
          goto tmp6_done;
        }
        case 4210 /* exp */: {
          modelica_metatype tmpMeta152;
          modelica_metatype tmpMeta153;
          modelica_metatype tmpMeta154;
          modelica_metatype tmpMeta155;
          modelica_metatype tmpMeta156;
          modelica_metatype tmpMeta157;
          modelica_metatype tmpMeta158;
          modelica_metatype tmpMeta159;
          modelica_metatype tmpMeta160;
          modelica_metatype tmpMeta161;
          modelica_metatype tmpMeta162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          modelica_metatype tmpMeta165;
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT87), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta152 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta153 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta154 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta155 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta156 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta157 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT88, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta152, tmpMeta153, _OMC_LIT4, _OMC_LIT20, tmpMeta154, tmpMeta155, listArray(tmpMeta156), _OMC_LIT21, _OMC_LIT22);
          tmpMeta158 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta159 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta160 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta161 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta162 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta163 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta164 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT88, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta159, tmpMeta160, _OMC_LIT4, _OMC_LIT20, tmpMeta161, tmpMeta162, listArray(tmpMeta163), _OMC_LIT21, _OMC_LIT22);
          tmpMeta165 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta157, tmpMeta158, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta164), 8)))));
          tmpMeta4 = tmpMeta165;
          goto tmp6_done;
        }
        case 3335 /* log */: {
          modelica_metatype tmpMeta166;
          modelica_metatype tmpMeta167;
          if (3 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta166 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta167 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta166, _mulOp);
          tmpMeta4 = tmpMeta167;
          goto tmp6_done;
        }
        case 4424 /* log10 */: {
          modelica_metatype tmpMeta168;
          modelica_metatype tmpMeta169;
          modelica_metatype tmpMeta170;
          modelica_metatype tmpMeta171;
          modelica_metatype tmpMeta172;
          modelica_metatype tmpMeta173;
          modelica_metatype tmpMeta174;
          modelica_metatype tmpMeta175;
          modelica_metatype tmpMeta176;
          modelica_metatype tmpMeta177;
          modelica_metatype tmpMeta178;
          modelica_metatype tmpMeta179;
          modelica_metatype tmpMeta180;
          modelica_metatype tmpMeta181;
          modelica_metatype tmpMeta182;
          if (5 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT104), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_default;
          /* Pattern matching succeeded */
          tmpMeta168 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta169 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta170 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta171 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta172 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta173 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta168, tmpMeta169, _OMC_LIT4, _OMC_LIT20, tmpMeta170, tmpMeta171, listArray(tmpMeta172), _OMC_LIT21, _OMC_LIT22);
          tmpMeta174 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta175 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta176 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta177 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta178 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta179 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta174, tmpMeta175, _OMC_LIT4, _OMC_LIT20, tmpMeta176, tmpMeta177, listArray(tmpMeta178), _OMC_LIT21, _OMC_LIT22);
          tmpMeta180 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta173, _OMC_LIT91, 1, 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta179), 8)))));
          _ret = tmpMeta180;
          tmpMeta181 = mmc_mk_cons(_arg, mmc_mk_cons(_ret, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta182 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _OMC_LIT77, tmpMeta181, _mulOp);
          tmpMeta4 = tmpMeta182;
          goto tmp6_done;
        }
        default:
        tmp6_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta183;
          modelica_metatype tmpMeta184;
          
          /* Pattern matching succeeded */
          tmpMeta184 = stringAppend(_OMC_LIT92,_name);
          tmpMeta183 = mmc_mk_cons(tmpMeta184, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta183);
          goto goto_5;
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
  _derFuncCall = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _derFuncCall;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateBuiltinCall(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_integer _sizeClass;
  modelica_metatype _addOp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _mulOp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  _sizeClass = 1;
  tmpMeta1 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sizeClass));
  _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta1, _OMC_LIT4);
  tmpMeta2 = mmc_mk_box2(0, mmc_mk_integer(3), mmc_mk_integer((modelica_integer)_sizeClass));
  _mulOp = omc_NFOperator_fromClassification(threadData, tmpMeta2, _OMC_LIT4);
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _exp;
    {
      modelica_integer _i;
      modelica_metatype _ret = NULL;
      modelica_metatype _ret1 = NULL;
      modelica_metatype _ret2 = NULL;
      modelica_metatype _arg1 = NULL;
      modelica_metatype _arg2 = NULL;
      modelica_metatype _arg3 = NULL;
      modelica_metatype _diffArg1 = NULL;
      modelica_metatype _diffArg2 = NULL;
      modelica_metatype _diffArg3 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _ty = NULL;
      modelica_integer _diffType;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _i has no default value.
      // _ret has no default value.
      // _ret1 has no default value.
      // _ret2 has no default value.
      // _arg1 has no default value.
      // _arg2 has no default value.
      // _arg3 has no default value.
      // _diffArg1 has no default value.
      // _diffArg2 has no default value.
      // _diffArg3 has no default value.
      // _rest has no default value.
      // _ty has no default value.
      // _diffType has no default value.
      tmp6 = 0;
      for (; tmp6 < 13; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_name, _OMC_LIT107))) goto tmp5_end;
          
          
          
          { /* match expression */
            modelica_metatype tmp11_1;
            tmp11_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              for (; tmp11 < 2; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  if (listEmpty(tmp11_1)) goto tmp10_end;
                  tmpMeta13 = MMC_CAR(tmp11_1);
                  tmpMeta14 = MMC_CDR(tmp11_1);
                  if (listEmpty(tmpMeta14)) goto tmp10_end;
                  tmpMeta15 = MMC_CAR(tmpMeta14);
                  tmpMeta16 = MMC_CDR(tmpMeta14);
                  if (listEmpty(tmpMeta16)) goto tmp10_end;
                  tmpMeta17 = MMC_CAR(tmpMeta16);
                  tmpMeta18 = MMC_CDR(tmpMeta16);
                  if (!listEmpty(tmpMeta18)) goto tmp10_end;
                  _arg1 = tmpMeta13;
                  _arg2 = tmpMeta15;
                  _arg3 = tmpMeta17;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = _arg1;
                  tmpMeta[0+1] = _arg2;
                  tmpMeta[0+2] = _arg3;
                  goto tmp10_done;
                }
                case 1: {
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  
                  /* Pattern matching succeeded */
                  tmpMeta20 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT50);
                  tmpMeta19 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta19);
                  goto goto_9;
                  goto tmp10_done;
                }
                }
                goto tmp10_end;
                tmp10_end: ;
              }
              goto goto_9;
              goto_9:;
              goto goto_4;
              goto tmp10_done;
              tmp10_done:;
            }
          }
          _arg1 = tmpMeta[0+0];
          _arg2 = tmpMeta[0+1];
          _arg3 = tmpMeta[0+2];

          tmpMeta22 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 5)))) == 1)?1.0:0.0)));
          _ret1 = tmpMeta22;

          _ret2 = omc_NBDifferentiate_differentiateExpression(threadData, _arg2, _diffArguments ,&_diffArguments);

          tmpMeta23 = mmc_mk_cons(_ret1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta24 = mmc_mk_cons(_ret2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta25 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta23, tmpMeta24, _addOp);
          _ret2 = omc_NFSimplifyExp_simplifyDump(threadData, tmpMeta25, 1 /* true */, _OMC_LIT106, _OMC_LIT9);

          if(omc_NFExpression_isZero(threadData, _ret2))
          {
            _ret = omc_NFExpression_makeZero(threadData, omc_NFExpression_typeOf(threadData, _arg1));
          }
          else
          {
            _diffType = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 5))));

            tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_diffArguments), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[5] = mmc_mk_integer(1);
            _diffArguments = tmpMeta26;

            _ret1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

            tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_diffArguments), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[5] = mmc_mk_integer((modelica_integer)_diffType);
            _diffArguments = tmpMeta27;

            tmpMeta29 = mmc_mk_cons(_ret1, mmc_mk_cons(_arg2, mmc_mk_cons(_arg3, MMC_REFSTRUCTLIT(mmc_nil))));
            tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(3));
            memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[2] = omc_NFCall_setArguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), tmpMeta29);
            _exp = tmpMeta28;

            tmpMeta30 = mmc_mk_cons(_ret2, mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta32 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta30, tmpMeta31, _mulOp);
            _ret = tmpMeta32;
          }
          tmpMeta3 = _ret;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_name, _OMC_LIT108))) goto tmp5_end;
          { /* match expression */
            modelica_metatype tmp36_1;
            tmp36_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
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
                  modelica_integer tmp41;
                  modelica_metatype tmpMeta42;
                  modelica_metatype tmpMeta43;
                  modelica_metatype tmpMeta44;
                  modelica_metatype tmpMeta45;
                  modelica_metatype tmpMeta46;
                  if (listEmpty(tmp36_1)) goto tmp35_end;
                  tmpMeta38 = MMC_CAR(tmp36_1);
                  tmpMeta39 = MMC_CDR(tmp36_1);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,0,1) == 0) goto tmp35_end;
                  tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
                  tmp41 = mmc_unbox_integer(tmpMeta40);
                  if (listEmpty(tmpMeta39)) goto tmp35_end;
                  tmpMeta42 = MMC_CAR(tmpMeta39);
                  tmpMeta43 = MMC_CDR(tmpMeta39);
                  if (!listEmpty(tmpMeta43)) goto tmp35_end;
                  _arg1 = tmpMeta38;
                  _i = tmp41  /* pattern as ty=Integer */;
                  _arg2 = tmpMeta42;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(_i > ((modelica_integer) 0))) goto tmp35_end;
                  _ret2 = omc_NBDifferentiate_differentiateExpression(threadData, _arg2, _diffArguments ,&_diffArguments);

                  tmpMeta46 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(((modelica_integer) -1) + _i));
                  tmpMeta45 = mmc_mk_cons(tmpMeta46, mmc_mk_cons(_ret2, MMC_REFSTRUCTLIT(mmc_nil)));
                  tmpMeta44 = MMC_TAGPTR(mmc_alloc_words(3));
                  memcpy(MMC_UNTAGPTR(tmpMeta44), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta44))[2] = omc_NFCall_setArguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), tmpMeta45);
                  _exp = tmpMeta44;
                  tmpMeta33 = _exp;
                  goto tmp35_done;
                }
                case 1: {
                  modelica_metatype tmpMeta47;
                  modelica_metatype tmpMeta48;
                  modelica_metatype tmpMeta49;
                  modelica_integer tmp50;
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
                  modelica_metatype tmpMeta61;
                  modelica_metatype tmpMeta62;
                  modelica_metatype tmpMeta63;
                  modelica_metatype tmpMeta64;
                  modelica_metatype tmpMeta65;
                  modelica_metatype tmpMeta66;
                  modelica_metatype tmpMeta67;
                  modelica_metatype tmpMeta68;
                  modelica_metatype tmpMeta69;
                  modelica_metatype tmpMeta70;
                  if (listEmpty(tmp36_1)) goto tmp35_end;
                  tmpMeta47 = MMC_CAR(tmp36_1);
                  tmpMeta48 = MMC_CDR(tmp36_1);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,0,1) == 0) goto tmp35_end;
                  tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
                  tmp50 = mmc_unbox_integer(tmpMeta49);
                  if (listEmpty(tmpMeta48)) goto tmp35_end;
                  tmpMeta51 = MMC_CAR(tmpMeta48);
                  tmpMeta52 = MMC_CDR(tmpMeta48);
                  if (!listEmpty(tmpMeta52)) goto tmp35_end;
                  _arg1 = tmpMeta47;
                  _i = tmp50  /* pattern as ty=Integer */;
                  _arg2 = tmpMeta51;
                  /* Pattern matching succeeded */
                  _ret2 = omc_NBDifferentiate_differentiateExpression(threadData, _arg2, _diffArguments ,&_diffArguments);
                  tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta55 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta57 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta59 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta60 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT110, _OMC_LIT2, tmpMeta53, tmpMeta54, tmpMeta55, tmpMeta56, _OMC_LIT111, _OMC_LIT20, tmpMeta57, tmpMeta58, listArray(tmpMeta59), _OMC_LIT21, _OMC_LIT22);
                  tmpMeta61 = mmc_mk_cons(_ret2, MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta62 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta64 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta65 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta66 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta67 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta68 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta69 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT110, _OMC_LIT2, tmpMeta62, tmpMeta63, tmpMeta64, tmpMeta65, _OMC_LIT111, _OMC_LIT20, tmpMeta66, tmpMeta67, listArray(tmpMeta68), _OMC_LIT21, _OMC_LIT22);
                  tmpMeta70 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta60, tmpMeta61, omc_NFExpression_variability(threadData, _ret2), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta69), 8)))));
                  tmpMeta33 = tmpMeta70;
                  goto tmp35_done;
                }
                case 2: {
                  modelica_metatype tmpMeta71;
                  modelica_metatype tmpMeta72;
                  modelica_metatype tmpMeta73;
                  
                  /* Pattern matching succeeded */
                  tmpMeta72 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta73 = stringAppend(tmpMeta72,_OMC_LIT50);
                  tmpMeta71 = mmc_mk_cons(tmpMeta73, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta71);
                  goto goto_34;
                  goto tmp35_done;
                }
                }
                goto tmp35_end;
                tmp35_end: ;
              }
              goto goto_34;
              goto_34:;
              goto goto_4;
              goto tmp35_done;
              tmp35_done:;
            }
          }tmpMeta3 = tmpMeta33;
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_List_contains(threadData, _OMC_LIT130, _name, boxvar_stringEqual)) goto tmp5_end;
          { /* match expression */
            modelica_metatype tmp77_1;
            tmp77_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp77;
              int tmp78;
              tmp77 = 0;
              for (; tmp77 < 2; tmp77++) {
                switch (MMC_SWITCH_CAST(tmp77)) {
                case 0: {
                  modelica_metatype tmpMeta79;
                  modelica_metatype tmpMeta80;
                  if (listEmpty(tmp77_1)) goto tmp76_end;
                  tmpMeta79 = MMC_CAR(tmp77_1);
                  tmpMeta80 = MMC_CDR(tmp77_1);
                  if (!listEmpty(tmpMeta80)) goto tmp76_end;
                  _arg1 = tmpMeta79;
                  /* Pattern matching succeeded */
                  tmpMeta74 = _arg1;
                  goto tmp76_done;
                }
                case 1: {
                  modelica_metatype tmpMeta81;
                  modelica_metatype tmpMeta82;
                  modelica_metatype tmpMeta83;
                  
                  /* Pattern matching succeeded */
                  tmpMeta82 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta83 = stringAppend(tmpMeta82,_OMC_LIT50);
                  tmpMeta81 = mmc_mk_cons(tmpMeta83, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta81);
                  goto goto_75;
                  goto tmp76_done;
                }
                }
                goto tmp76_end;
                tmp76_end: ;
              }
              goto goto_75;
              goto_75:;
              goto goto_4;
              goto tmp76_done;
              tmp76_done:;
            }
          }
          _arg1 = tmpMeta74;

          _ret1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

          tmpMeta85 = mmc_mk_cons(_ret1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta84 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta84), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta84))[2] = omc_NFCall_setArguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), tmpMeta85);
          _exp = tmpMeta84;
          tmpMeta3 = _exp;
          goto tmp5_done;
        }
        case 3: {
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_List_contains(threadData, _OMC_LIT134, _name, boxvar_stringEqual)) goto tmp5_end;
          
          
          { /* match expression */
            modelica_metatype tmp89_1;
            tmp89_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp89;
              int tmp90;
              tmp89 = 0;
              for (; tmp89 < 2; tmp89++) {
                switch (MMC_SWITCH_CAST(tmp89)) {
                case 0: {
                  modelica_metatype tmpMeta91;
                  modelica_metatype tmpMeta92;
                  modelica_metatype tmpMeta93;
                  modelica_metatype tmpMeta94;
                  if (listEmpty(tmp89_1)) goto tmp88_end;
                  tmpMeta91 = MMC_CAR(tmp89_1);
                  tmpMeta92 = MMC_CDR(tmp89_1);
                  if (listEmpty(tmpMeta92)) goto tmp88_end;
                  tmpMeta93 = MMC_CAR(tmpMeta92);
                  tmpMeta94 = MMC_CDR(tmpMeta92);
                  if (!listEmpty(tmpMeta94)) goto tmp88_end;
                  _arg1 = tmpMeta91;
                  _arg2 = tmpMeta93;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = _arg1;
                  tmpMeta[0+1] = _arg2;
                  goto tmp88_done;
                }
                case 1: {
                  modelica_metatype tmpMeta95;
                  modelica_metatype tmpMeta96;
                  modelica_metatype tmpMeta97;
                  
                  /* Pattern matching succeeded */
                  tmpMeta96 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta97 = stringAppend(tmpMeta96,_OMC_LIT50);
                  tmpMeta95 = mmc_mk_cons(tmpMeta97, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta95);
                  goto goto_87;
                  goto tmp88_done;
                }
                }
                goto tmp88_end;
                tmp88_end: ;
              }
              goto goto_87;
              goto_87:;
              goto goto_4;
              goto tmp88_done;
              tmp88_done:;
            }
          }
          _arg1 = tmpMeta[0+0];
          _arg2 = tmpMeta[0+1];

          _ret1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

          _ret2 = omc_NBDifferentiate_differentiateExpression(threadData, _arg2, _diffArguments ,&_diffArguments);

          tmpMeta99 = mmc_mk_cons(_ret1, mmc_mk_cons(_ret2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta98 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta98), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta98))[2] = omc_NFCall_setArguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), tmpMeta99);
          _exp = tmpMeta98;
          tmpMeta3 = _exp;
          goto tmp5_done;
        }
        case 4: {
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_name, _OMC_LIT135))) goto tmp5_end;
          
          
          { /* match expression */
            modelica_metatype tmp103_1;
            tmp103_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp103;
              int tmp104;
              tmp103 = 0;
              for (; tmp103 < 2; tmp103++) {
                switch (MMC_SWITCH_CAST(tmp103)) {
                case 0: {
                  modelica_metatype tmpMeta105;
                  modelica_metatype tmpMeta106;
                  modelica_metatype tmpMeta107;
                  modelica_metatype tmpMeta108;
                  if (listEmpty(tmp103_1)) goto tmp102_end;
                  tmpMeta105 = MMC_CAR(tmp103_1);
                  tmpMeta106 = MMC_CDR(tmp103_1);
                  if (listEmpty(tmpMeta106)) goto tmp102_end;
                  tmpMeta107 = MMC_CAR(tmpMeta106);
                  tmpMeta108 = MMC_CDR(tmpMeta106);
                  if (!listEmpty(tmpMeta108)) goto tmp102_end;
                  _arg1 = tmpMeta105;
                  _arg2 = tmpMeta107;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = _arg1;
                  tmpMeta[0+1] = _arg2;
                  goto tmp102_done;
                }
                case 1: {
                  modelica_metatype tmpMeta109;
                  modelica_metatype tmpMeta110;
                  modelica_metatype tmpMeta111;
                  
                  /* Pattern matching succeeded */
                  tmpMeta110 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta111 = stringAppend(tmpMeta110,_OMC_LIT50);
                  tmpMeta109 = mmc_mk_cons(tmpMeta111, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta109);
                  goto goto_101;
                  goto tmp102_done;
                }
                }
                goto tmp102_end;
                tmp102_end: ;
              }
              goto goto_101;
              goto_101:;
              goto goto_4;
              goto tmp102_done;
              tmp102_done:;
            }
          }
          _arg1 = tmpMeta[0+0];
          _arg2 = tmpMeta[0+1];

          _ret1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

          tmpMeta113 = mmc_mk_cons(_ret1, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta112 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta112), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta112))[2] = omc_NFCall_setArguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), tmpMeta113);
          _exp = tmpMeta112;
          tmpMeta3 = _exp;
          goto tmp5_done;
        }
        case 5: {
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          modelica_metatype tmpMeta141;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_name, _OMC_LIT136))) goto tmp5_end;
          { /* match expression */
            modelica_metatype tmp117_1;
            tmp117_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp117;
              int tmp118;
              tmp117 = 0;
              for (; tmp117 < 2; tmp117++) {
                switch (MMC_SWITCH_CAST(tmp117)) {
                case 0: {
                  modelica_metatype tmpMeta119;
                  modelica_metatype tmpMeta120;
                  if (listEmpty(tmp117_1)) goto tmp116_end;
                  tmpMeta119 = MMC_CAR(tmp117_1);
                  tmpMeta120 = MMC_CDR(tmp117_1);
                  if (!listEmpty(tmpMeta120)) goto tmp116_end;
                  _arg1 = tmpMeta119;
                  /* Pattern matching succeeded */
                  tmpMeta114 = _arg1;
                  goto tmp116_done;
                }
                case 1: {
                  modelica_metatype tmpMeta121;
                  modelica_metatype tmpMeta122;
                  modelica_metatype tmpMeta123;
                  
                  /* Pattern matching succeeded */
                  tmpMeta122 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta123 = stringAppend(tmpMeta122,_OMC_LIT50);
                  tmpMeta121 = mmc_mk_cons(tmpMeta123, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta121);
                  goto goto_115;
                  goto tmp116_done;
                }
                }
                goto tmp116_end;
                tmp116_end: ;
              }
              goto goto_115;
              goto_115:;
              goto goto_4;
              goto tmp116_done;
              tmp116_done:;
            }
          }
          _arg1 = tmpMeta114;
          tmpMeta124 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta125 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta126 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta127 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta128 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta129 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta130 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta131 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT138, _OMC_LIT2, tmpMeta124, tmpMeta125, tmpMeta126, tmpMeta127, _OMC_LIT111, _OMC_LIT20, tmpMeta128, tmpMeta129, listArray(tmpMeta130), _OMC_LIT21, _OMC_LIT22);
          tmpMeta132 = mmc_mk_cons(_OMC_LIT54, mmc_mk_cons(_arg1, mmc_mk_cons(_arg1, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta133 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta134 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta135 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta136 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta137 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta138 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta139 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta140 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT138, _OMC_LIT2, tmpMeta133, tmpMeta134, tmpMeta135, tmpMeta136, _OMC_LIT111, _OMC_LIT20, tmpMeta137, tmpMeta138, listArray(tmpMeta139), _OMC_LIT21, _OMC_LIT22);
          tmpMeta141 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta131, tmpMeta132, 1, 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta140), 8)))));
          tmpMeta3 = tmpMeta141;
          goto tmp5_done;
        }
        case 6: {
          modelica_metatype tmpMeta142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_name, _OMC_LIT137))) goto tmp5_end;
          /* Pattern-matching assignment */
          tmpMeta142 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          if (listEmpty(tmpMeta142)) goto goto_4;
          tmpMeta143 = MMC_CAR(tmpMeta142);
          tmpMeta144 = MMC_CDR(tmpMeta142);
          _arg1 = tmpMeta143;
          _rest = tmpMeta144;

          _ret1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

          tmpMeta146 = mmc_mk_cons(_ret1, _rest);
          tmpMeta145 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta145), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta145))[2] = omc_NFCall_setArguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), tmpMeta146);
          _exp = tmpMeta145;
          tmpMeta3 = _exp;
          goto tmp5_done;
        }
        case 7: {
          modelica_metatype tmpMeta161;
          modelica_metatype tmpMeta162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          modelica_metatype tmpMeta165;
          modelica_metatype tmpMeta166;
          modelica_metatype tmpMeta167;
          modelica_metatype tmpMeta168;
          modelica_metatype tmpMeta169;
          modelica_metatype tmpMeta170;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_name, _OMC_LIT139))) goto tmp5_end;
          
          
          
          { /* match expression */
            modelica_metatype tmp150_1;
            tmp150_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp150;
              int tmp151;
              tmp150 = 0;
              for (; tmp150 < 2; tmp150++) {
                switch (MMC_SWITCH_CAST(tmp150)) {
                case 0: {
                  modelica_metatype tmpMeta152;
                  modelica_metatype tmpMeta153;
                  modelica_metatype tmpMeta154;
                  modelica_metatype tmpMeta155;
                  modelica_metatype tmpMeta156;
                  modelica_metatype tmpMeta157;
                  if (listEmpty(tmp150_1)) goto tmp149_end;
                  tmpMeta152 = MMC_CAR(tmp150_1);
                  tmpMeta153 = MMC_CDR(tmp150_1);
                  if (listEmpty(tmpMeta153)) goto tmp149_end;
                  tmpMeta154 = MMC_CAR(tmpMeta153);
                  tmpMeta155 = MMC_CDR(tmpMeta153);
                  if (listEmpty(tmpMeta155)) goto tmp149_end;
                  tmpMeta156 = MMC_CAR(tmpMeta155);
                  tmpMeta157 = MMC_CDR(tmpMeta155);
                  if (!listEmpty(tmpMeta157)) goto tmp149_end;
                  _arg1 = tmpMeta152;
                  _arg2 = tmpMeta154;
                  _arg3 = tmpMeta156;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = _arg1;
                  tmpMeta[0+1] = _arg2;
                  tmpMeta[0+2] = _arg3;
                  goto tmp149_done;
                }
                case 1: {
                  modelica_metatype tmpMeta158;
                  modelica_metatype tmpMeta159;
                  modelica_metatype tmpMeta160;
                  
                  /* Pattern matching succeeded */
                  tmpMeta159 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta160 = stringAppend(tmpMeta159,_OMC_LIT50);
                  tmpMeta158 = mmc_mk_cons(tmpMeta160, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta158);
                  goto goto_148;
                  goto tmp149_done;
                }
                }
                goto tmp149_end;
                tmp149_end: ;
              }
              goto goto_148;
              goto_148:;
              goto goto_4;
              goto tmp149_done;
              tmp149_done:;
            }
          }
          _arg1 = tmpMeta[0+0];
          _arg2 = tmpMeta[0+1];
          _arg3 = tmpMeta[0+2];

          _diffArg1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

          _diffArg2 = omc_NBDifferentiate_differentiateExpression(threadData, _arg2, _diffArguments ,&_diffArguments);

          _diffArg3 = omc_NBDifferentiate_differentiateExpression(threadData, _arg3, _diffArguments ,&_diffArguments);

          tmpMeta162 = mmc_mk_cons(_arg1, mmc_mk_cons(_diffArg2, mmc_mk_cons(_diffArg3, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta161 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta161), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta161))[2] = omc_NFCall_setArguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), tmpMeta162);
          _exp = tmpMeta161;

          _ret = _exp;

          if((!omc_NFExpression_isZero(threadData, _diffArg1)))
          {
            _ty = omc_NFExpression_typeOf(threadData, _diffArg1);

            tmpMeta163 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _arg1, omc_NFOperator_makeGreaterEq(threadData, _ty), omc_NFExpression_makeZero(threadData, _ty), mmc_mk_integer(((modelica_integer) -1)));
            _ret1 = tmpMeta163;

            tmpMeta164 = mmc_mk_box5(25, &NFExpression_IF__desc, _ty, _ret1, _arg2, _arg3);
            _ret1 = tmpMeta164;

            tmpMeta165 = mmc_mk_cons(_diffArg1, mmc_mk_cons(_ret1, MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta166 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta167 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta165, tmpMeta166, _mulOp);
            _ret2 = tmpMeta167;

            tmpMeta168 = mmc_mk_cons(_ret, mmc_mk_cons(_ret2, MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta169 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta170 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta168, tmpMeta169, _addOp);
            _ret = tmpMeta170;
          }
          tmpMeta3 = _ret;
          goto tmp5_done;
        }
        case 8: {
          modelica_metatype tmpMeta171;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((stringEqual(_name, _OMC_LIT140)) || (stringEqual(_name, _OMC_LIT141)))) goto tmp5_end;
          { /* match expression */
            modelica_metatype tmp174_1;
            tmp174_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp174;
              int tmp175;
              tmp174 = 0;
              for (; tmp174 < 3; tmp174++) {
                switch (MMC_SWITCH_CAST(tmp174)) {
                case 0: {
                  modelica_metatype tmpMeta176;
                  modelica_metatype tmpMeta177;
                  modelica_metatype tmpMeta178;
                  modelica_metatype tmpMeta179;
                  modelica_metatype tmpMeta180;
                  modelica_metatype tmpMeta181;
                  modelica_metatype tmpMeta182;
                  modelica_metatype tmpMeta183;
                  modelica_metatype tmpMeta184;
                  modelica_metatype tmpMeta185;
                  modelica_metatype tmpMeta186;
                  modelica_metatype tmpMeta187;
                  modelica_metatype tmpMeta188;
                  modelica_metatype tmpMeta189;
                  modelica_boolean tmp190;
                  modelica_metatype tmpMeta191;
                  modelica_metatype tmpMeta192;
                  modelica_metatype tmpMeta193;
                  modelica_metatype tmpMeta194;
                  modelica_metatype tmpMeta195;
                  modelica_metatype tmpMeta196;
                  modelica_metatype tmpMeta197;
                  modelica_metatype tmpMeta198;
                  modelica_metatype tmpMeta199;
                  modelica_metatype tmpMeta200;
                  modelica_metatype tmpMeta201;
                  modelica_metatype tmpMeta202;
                  modelica_metatype tmpMeta203;
                  modelica_metatype tmpMeta204;
                  modelica_boolean tmp205;
                  modelica_metatype tmpMeta206;
                  modelica_metatype tmpMeta207;
                  modelica_metatype tmpMeta208;
                  modelica_metatype tmpMeta209;
                  if (listEmpty(tmp174_1)) goto tmp173_end;
                  tmpMeta176 = MMC_CAR(tmp174_1);
                  tmpMeta177 = MMC_CDR(tmp174_1);
                  if (!listEmpty(tmpMeta177)) goto tmp173_end;
                  _arg1 = tmpMeta176;
                  /* Pattern matching succeeded */
                  _diffArg1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

                  _ty = omc_NFExpression_typeOf(threadData, _diffArg1);

                  if(omc_NFExpression_isZero(threadData, _diffArg1))
                  {
                    _ret = omc_NFExpression_makeZero(threadData, omc_NFType_arrayElementType(threadData, _ty));
                  }
                  else
                  {
                    tmp190 = (modelica_boolean)(stringEqual(_name, _OMC_LIT140));
                    if(tmp190)
                    {
                      tmpMeta178 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta179 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta180 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta181 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta182 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta183 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT143, _OMC_LIT2, _OMC_LIT16, _OMC_LIT148, tmpMeta178, tmpMeta179, _OMC_LIT4, _OMC_LIT20, tmpMeta180, tmpMeta181, listArray(tmpMeta182), _OMC_LIT21, _OMC_LIT22);
                      tmpMeta191 = tmpMeta183;
                    }
                    else
                    {
                      tmpMeta184 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta185 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta186 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta187 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta188 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta189 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT150, _OMC_LIT2, _OMC_LIT16, _OMC_LIT148, tmpMeta184, tmpMeta185, _OMC_LIT4, _OMC_LIT20, tmpMeta186, tmpMeta187, listArray(tmpMeta188), _OMC_LIT21, _OMC_LIT22);
                      tmpMeta191 = tmpMeta189;
                    }
                    tmpMeta192 = mmc_mk_cons(_arg1, MMC_REFSTRUCTLIT(mmc_nil));
                    tmp205 = (modelica_boolean)(stringEqual(_name, _OMC_LIT140));
                    if(tmp205)
                    {
                      tmpMeta193 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta194 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta195 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta196 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta197 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta198 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT143, _OMC_LIT2, _OMC_LIT16, _OMC_LIT148, tmpMeta193, tmpMeta194, _OMC_LIT4, _OMC_LIT20, tmpMeta195, tmpMeta196, listArray(tmpMeta197), _OMC_LIT21, _OMC_LIT22);
                      tmpMeta206 = tmpMeta198;
                    }
                    else
                    {
                      tmpMeta199 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta200 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta201 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta202 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta203 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta204 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT150, _OMC_LIT2, _OMC_LIT16, _OMC_LIT148, tmpMeta199, tmpMeta200, _OMC_LIT4, _OMC_LIT20, tmpMeta201, tmpMeta202, listArray(tmpMeta203), _OMC_LIT21, _OMC_LIT22);
                      tmpMeta206 = tmpMeta204;
                    }
                    tmpMeta207 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta191, tmpMeta192, omc_NFExpression_variability(threadData, _arg1), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta206), 8)))));
                    _ret1 = tmpMeta207;

                    tmpMeta209 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, _ret1);
                    tmpMeta208 = mmc_mk_cons(tmpMeta209, MMC_REFSTRUCTLIT(mmc_nil));
                    _ret = omc_NFExpression_applySubscripts(threadData, tmpMeta208, _diffArg1, 1 /* true */);
                  }
                  tmpMeta171 = _ret;
                  goto tmp173_done;
                }
                case 1: {
                  modelica_metatype tmpMeta210;
                  modelica_metatype tmpMeta211;
                  modelica_metatype tmpMeta212;
                  modelica_metatype tmpMeta213;
                  modelica_metatype tmpMeta214;
                  modelica_metatype tmpMeta215;
                  if (listEmpty(tmp174_1)) goto tmp173_end;
                  tmpMeta210 = MMC_CAR(tmp174_1);
                  tmpMeta211 = MMC_CDR(tmp174_1);
                  if (listEmpty(tmpMeta211)) goto tmp173_end;
                  tmpMeta212 = MMC_CAR(tmpMeta211);
                  tmpMeta213 = MMC_CDR(tmpMeta211);
                  if (!listEmpty(tmpMeta213)) goto tmp173_end;
                  _arg1 = tmpMeta210;
                  _arg2 = tmpMeta212;
                  /* Pattern matching succeeded */
                  _diffArg1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

                  _diffArg2 = omc_NBDifferentiate_differentiateExpression(threadData, _arg2, _diffArguments ,&_diffArguments);

                  _ty = omc_NFExpression_typeOf(threadData, _diffArg1);

                  if((omc_NFExpression_isZero(threadData, _diffArg1) && omc_NFExpression_isZero(threadData, _diffArg2)))
                  {
                    _ret = omc_NFExpression_makeZero(threadData, _ty);
                  }
                  else
                  {
                    tmpMeta214 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _arg1, ((stringEqual(_name, _OMC_LIT140))?omc_NFOperator_makeLess(threadData, _ty):omc_NFOperator_makeGreater(threadData, _ty)), _arg2, mmc_mk_integer(((modelica_integer) -1)));
                    _ret1 = tmpMeta214;

                    tmpMeta215 = mmc_mk_box5(25, &NFExpression_IF__desc, _ty, _ret1, _diffArg1, _diffArg2);
                    _ret = tmpMeta215;
                  }
                  tmpMeta171 = _ret;
                  goto tmp173_done;
                }
                case 2: {
                  modelica_metatype tmpMeta216;
                  modelica_metatype tmpMeta217;
                  modelica_metatype tmpMeta218;
                  
                  /* Pattern matching succeeded */
                  tmpMeta217 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta218 = stringAppend(tmpMeta217,_OMC_LIT50);
                  tmpMeta216 = mmc_mk_cons(tmpMeta218, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta216);
                  goto goto_172;
                  goto tmp173_done;
                }
                }
                goto tmp173_end;
                tmp173_end: ;
              }
              goto goto_172;
              goto_172:;
              goto goto_4;
              goto tmp173_done;
              tmp173_done:;
            }
          }tmpMeta3 = tmpMeta171;
          goto tmp5_done;
        }
        case 9: {
          modelica_metatype tmpMeta219;
          modelica_metatype tmpMeta229;
          modelica_metatype tmpMeta230;
          modelica_metatype tmpMeta231;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_List_hasOneElement(threadData, omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))))) goto tmp5_end;
          { /* match expression */
            modelica_metatype tmp222_1;
            tmp222_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp222;
              int tmp223;
              tmp222 = 0;
              for (; tmp222 < 2; tmp222++) {
                switch (MMC_SWITCH_CAST(tmp222)) {
                case 0: {
                  modelica_metatype tmpMeta224;
                  modelica_metatype tmpMeta225;
                  if (listEmpty(tmp222_1)) goto tmp221_end;
                  tmpMeta224 = MMC_CAR(tmp222_1);
                  tmpMeta225 = MMC_CDR(tmp222_1);
                  if (!listEmpty(tmpMeta225)) goto tmp221_end;
                  _arg1 = tmpMeta224;
                  /* Pattern matching succeeded */
                  tmpMeta219 = _arg1;
                  goto tmp221_done;
                }
                case 1: {
                  modelica_metatype tmpMeta226;
                  modelica_metatype tmpMeta227;
                  modelica_metatype tmpMeta228;
                  
                  /* Pattern matching succeeded */
                  tmpMeta227 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta228 = stringAppend(tmpMeta227,_OMC_LIT50);
                  tmpMeta226 = mmc_mk_cons(tmpMeta228, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta226);
                  goto goto_220;
                  goto tmp221_done;
                }
                }
                goto tmp221_end;
                tmp221_end: ;
              }
              goto goto_220;
              goto_220:;
              goto goto_4;
              goto tmp221_done;
              tmp221_done:;
            }
          }
          _arg1 = tmpMeta219;

          _ret = omc_NBDifferentiate_differentiateBuiltinCall1Arg(threadData, _name, _arg1);

          if((!omc_NFExpression_isZero(threadData, _ret)))
          {
            _diffArg1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

            tmpMeta229 = mmc_mk_cons(_ret, mmc_mk_cons(_diffArg1, MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta230 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta231 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta229, tmpMeta230, _mulOp);
            _ret = tmpMeta231;
          }
          tmpMeta3 = _ret;
          goto tmp5_done;
        }
        case 10: {
          modelica_metatype tmpMeta244;
          modelica_metatype tmpMeta245;
          modelica_metatype tmpMeta246;
          modelica_metatype tmpMeta247;
          modelica_metatype tmpMeta248;
          modelica_metatype tmpMeta249;
          modelica_metatype tmpMeta250;
          modelica_metatype tmpMeta251;
          modelica_metatype tmpMeta252;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(listLength(omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))))) == ((modelica_integer) 2))) goto tmp5_end;
          
          
          { /* match expression */
            modelica_metatype tmp235_1;
            tmp235_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp235;
              int tmp236;
              tmp235 = 0;
              for (; tmp235 < 2; tmp235++) {
                switch (MMC_SWITCH_CAST(tmp235)) {
                case 0: {
                  modelica_metatype tmpMeta237;
                  modelica_metatype tmpMeta238;
                  modelica_metatype tmpMeta239;
                  modelica_metatype tmpMeta240;
                  if (listEmpty(tmp235_1)) goto tmp234_end;
                  tmpMeta237 = MMC_CAR(tmp235_1);
                  tmpMeta238 = MMC_CDR(tmp235_1);
                  if (listEmpty(tmpMeta238)) goto tmp234_end;
                  tmpMeta239 = MMC_CAR(tmpMeta238);
                  tmpMeta240 = MMC_CDR(tmpMeta238);
                  if (!listEmpty(tmpMeta240)) goto tmp234_end;
                  _arg1 = tmpMeta237;
                  _arg2 = tmpMeta239;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = _arg1;
                  tmpMeta[0+1] = _arg2;
                  goto tmp234_done;
                }
                case 1: {
                  modelica_metatype tmpMeta241;
                  modelica_metatype tmpMeta242;
                  modelica_metatype tmpMeta243;
                  
                  /* Pattern matching succeeded */
                  tmpMeta242 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta243 = stringAppend(tmpMeta242,_OMC_LIT50);
                  tmpMeta241 = mmc_mk_cons(tmpMeta243, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta241);
                  goto goto_233;
                  goto tmp234_done;
                }
                }
                goto tmp234_end;
                tmp234_end: ;
              }
              goto goto_233;
              goto_233:;
              goto goto_4;
              goto tmp234_done;
              tmp234_done:;
            }
          }
          _arg1 = tmpMeta[0+0];
          _arg2 = tmpMeta[0+1];

          _ret1 = omc_NBDifferentiate_differentiateBuiltinCall2Arg(threadData, _name, _arg1, _arg2 ,&_ret2);

          _diffArg1 = omc_NBDifferentiate_differentiateExpression(threadData, _arg1, _diffArguments ,&_diffArguments);

          _diffArg2 = omc_NBDifferentiate_differentiateExpression(threadData, _arg2, _diffArguments ,&_diffArguments);

          tmpMeta244 = mmc_mk_cons(_ret1, mmc_mk_cons(_diffArg1, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta245 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta246 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta244, tmpMeta245, _mulOp);
          _ret1 = tmpMeta246;

          tmpMeta247 = mmc_mk_cons(_ret2, mmc_mk_cons(_diffArg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta248 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta249 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta247, tmpMeta248, _mulOp);
          _ret2 = tmpMeta249;
          tmpMeta250 = mmc_mk_cons(_ret1, mmc_mk_cons(_ret2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta251 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta252 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta250, tmpMeta251, _addOp);
          tmpMeta3 = tmpMeta252;
          goto tmp5_done;
        }
        case 11: {
          modelica_metatype tmpMeta253;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,1) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp256_1;
            tmp256_1 = omc_NFCall_functionNameLast(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
            {
              volatile mmc_switch_type tmp256;
              int tmp257;
              tmp256 = 0;
              for (; tmp256 < 2; tmp256++) {
                switch (MMC_SWITCH_CAST(tmp256)) {
                case 0: {
                  if (6 != MMC_STRLEN(tmp256_1) || strcmp(MMC_STRINGDATA(_OMC_LIT152), MMC_STRINGDATA(tmp256_1)) != 0) goto tmp255_end;
                  /* Pattern matching succeeded */
                  tmpMeta253 = _OMC_LIT151;
                  goto tmp255_done;
                }
                case 1: {
                  modelica_metatype tmpMeta258;
                  modelica_metatype tmpMeta259;
                  
                  /* Pattern matching succeeded */
                  tmpMeta259 = stringAppend(_OMC_LIT105,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta258 = mmc_mk_cons(tmpMeta259, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta258);
                  goto goto_254;
                  goto tmp255_done;
                }
                }
                goto tmp255_end;
                tmp255_end: ;
              }
              goto goto_254;
              goto_254:;
              goto goto_4;
              goto tmp255_done;
              tmp255_done:;
            }
          }tmpMeta3 = tmpMeta253;
          goto tmp5_done;
        }
        case 12: {
          modelica_metatype tmpMeta260;
          modelica_metatype tmpMeta261;
          
          /* Pattern matching succeeded */
          tmpMeta261 = stringAppend(_OMC_LIT153,omc_NFExpression_toString(threadData, _exp));
          tmpMeta260 = mmc_mk_cons(tmpMeta261, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta260);
          goto goto_4;
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
  _exp = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateReduction(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _call = NULL;
      modelica_metatype _arg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      // _arg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,8) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_name, _OMC_LIT112))) goto tmp3_end;
          _arg = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _diffArguments ,&_diffArguments);

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_call), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = _arg;
          _call = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = _call;
          _exp = tmpMeta8;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT154,omc_NFExpression_toString(threadData, _exp));
          tmpMeta9 = mmc_mk_cons(tmpMeta10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta9);
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
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_boolean _debug;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  _debug = 0 /* false */;
  
  
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _exp;
    {
      modelica_metatype _ret = NULL;
      modelica_metatype _arg = NULL;
      modelica_metatype _call = NULL;
      modelica_metatype _func_opt = NULL;
      modelica_metatype _der_func_opt = NULL;
      modelica_metatype _func = NULL;
      modelica_metatype _der_func = NULL;
      modelica_metatype _arguments = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _arguments_inputs = NULL;
      modelica_metatype _inp = NULL;
      modelica_boolean _isCont;
      modelica_boolean _isReal;
      modelica_boolean _isFunc;
      modelica_metatype _interface_map = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _ret has no default value.
      // _arg has no default value.
      // _call has no default value.
      // _func_opt has no default value.
      // _der_func_opt has no default value.
      // _func has no default value.
      // _der_func has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _arguments = tmpMeta3;
      // _arguments_inputs has no default value.
      // _inp has no default value.
      // _isCont has no default value.
      // _isReal has no default value.
      // _isFunc has no default value.
      // _interface_map has no default value.
      tmp5 = 0;
      for (; tmp5 < 5; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,13,1) == 0) goto tmp4_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,4,5) == 0) goto tmp4_end;
          
          _ret = tmp5_1;
          _call = tmpMeta7;
          /* Pattern matching succeeded */
          _arg = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _diffArguments ,&_diffArguments);

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_call), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[5] = _arg;
          _call = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_ret), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = _call;
          _ret = tmpMeta9;
          tmpMeta[0+0] = _ret;
          tmpMeta[0+1] = _diffArguments;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,13,1) == 0) goto tmp4_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,8) == 0) goto tmp4_end;
          
          _call = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBDifferentiate_differentiateReduction(threadData, omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT50, 1 /* true */, 0 /* false */), _exp, _diffArguments, &tmpMeta[0+1]);
          goto tmp4_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,13,1) == 0) goto tmp4_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,6) == 0) goto tmp4_end;
          
          _call = tmpMeta11;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))) goto tmp4_end;
          tmpMeta[0+0] = omc_NBDifferentiate_differentiateBuiltinCall(threadData, omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT50, 1 /* true */, 0 /* false */), _exp, _diffArguments, &tmpMeta[0+1]);
          goto tmp4_done;
        }
        case 3: {
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
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,13,1) == 0) goto tmp4_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,2,6) == 0) goto tmp4_end;
          
          _call = tmpMeta12;
          /* Pattern matching succeeded */
          _func_opt = omc_NFFlatten_FunctionTreeImpl_getOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), 2))));

          if(isSome(_func_opt))
          {
            /* Pattern-matching assignment */
            tmpMeta13 = _func_opt;
            if (optionNone(tmpMeta13)) goto goto_2;
            tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
            _func = tmpMeta14;

            _interface_map = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEqual, ((modelica_integer) 1));

            _arguments_inputs = omc_List_zip(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 4))));

            {
              modelica_metatype _tpl;
              for (tmpMeta15 = _arguments_inputs; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
              {
                _tpl = MMC_CAR(tmpMeta15);
                /* Pattern-matching assignment */
                tmpMeta16 = _tpl;
                tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
                tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
                _arg = tmpMeta17;
                _inp = tmpMeta18;

                _isCont = ((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 5)))) == 3) || omc_NBBackendUtil_isContinuous(threadData, _arg, 0 /* false */));

                _isReal = omc_NFType_isReal(threadData, omc_NFType_arrayElementType(threadData, omc_NFExpression_typeOf(threadData, _arg)));

                _isFunc = omc_NFInstNode_InstNode_isFunction(threadData, _inp);

                if((!(_isFunc || (_isCont && _isReal))))
                {
                  omc_UnorderedMap_add(threadData, omc_NFInstNode_InstNode_name(threadData, _inp), mmc_mk_boolean((!(_isFunc || _isReal))), _interface_map);
                }
              }
            }

            _der_func_opt = omc_NFFunction_Function_getDerivative(threadData, _func, _interface_map);

            if(isSome(_der_func_opt))
            {
              /* Pattern-matching assignment */
              tmpMeta20 = _der_func_opt;
              if (optionNone(tmpMeta20)) goto goto_2;
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
              _der_func = tmpMeta21;
            }
            else
            {
              _der_func = omc_NBDifferentiate_differentiateFunction(threadData, _func, _interface_map, _diffArguments ,&_diffArguments);
            }

            {
              modelica_metatype _tpl;
              for (tmpMeta22 = listReverse(_arguments_inputs); !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
              {
                _tpl = MMC_CAR(tmpMeta22);
                /* Pattern-matching assignment */
                tmpMeta23 = _tpl;
                tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
                tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
                _arg = tmpMeta24;
                _inp = tmpMeta25;

                if((!mmc_unbox_boolean(omc_UnorderedMap_getOrDefault(threadData, omc_NFInstNode_InstNode_name(threadData, _inp), _interface_map, mmc_mk_boolean(0 /* false */)))))
                {
                  tmpMeta26 = mmc_mk_cons(_arg, _arguments);
                  _arguments = tmpMeta26;
                }
              }
            }

            _arguments = omc_List_mapFold(threadData, _arguments, boxvar_NBDifferentiate_differentiateExpression, _diffArguments ,&_diffArguments);

            _arguments = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _arguments);

            tmpMeta28 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, _der_func, _arguments, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_der_func), 8)))));
            _ret = tmpMeta28;
          }
          else
          {
            tmpMeta30 = stringAppend(_OMC_LIT155,omc_NFExpression_toString(threadData, _exp));
            tmpMeta29 = mmc_mk_cons(tmpMeta30, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta29);

            goto goto_2;
          }
          tmpMeta[0+0] = _ret;
          tmpMeta[0+1] = _diffArguments;
          goto tmp4_done;
        }
        case 4: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          
          /* Pattern matching succeeded */
          tmpMeta32 = stringAppend(_OMC_LIT156,omc_NFExpression_toString(threadData, _exp));
          tmpMeta31 = mmc_mk_cons(tmpMeta32, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta31);
          goto goto_2;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _exp = tmpMeta[0+0];
  _diffArguments = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateVariablePointer(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _diffArguments_ptr)
{
  modelica_metatype _diff_ptr = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _crefExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _diff_ptr has no default value.
  _diffArguments = omc_Pointer_access(threadData, _diffArguments_ptr);
  _var = omc_Pointer_access(threadData, _var_ptr);
  // _crefExp has no default value.
  _crefExp = omc_NBDifferentiate_differentiateComponentRef(threadData, omc_NFExpression_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), 0 /* false */), _diffArguments ,&_diffArguments);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _crefExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Pointer_create(threadData, _OMC_LIT163);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Pointer_create(threadData, _OMC_LIT163);
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_crefExp), 3))), _OMC_LIT164);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT165,omc_NFVariable_toString(threadData, _var, _OMC_LIT9, 0 /* false */));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT166);
          tmpMeta11 = stringAppend(tmpMeta10,omc_NFExpression_toString(threadData, _crefExp));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT50);
          tmpMeta8 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta8);
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
  _diff_ptr = tmpMeta1;

  omc_Pointer_update(threadData, _diffArguments_ptr, _diffArguments);
  _return: OMC_LABEL_UNUSED
  return _diff_ptr;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateComponentRef(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _der_ptr = NULL;
  modelica_metatype _derCref = NULL;
  modelica_metatype _strippedCref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  // _var_ptr has no default value.
  // _der_ptr has no default value.
  // _derCref has no default value.
  // _strippedCref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 5)))) == 3)) goto tmp3_end;
          tmpMeta1 = omc_Pointer_create(threadData, _OMC_LIT163);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Pointer_create(threadData, _OMC_LIT163);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Pointer_create(threadData, _OMC_LIT163);
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT167);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT168,omc_NFExpression_toString(threadData, _exp));
          tmpMeta8 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta8);
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
  _var_ptr = tmpMeta1;

  
  
  { /* match expression */
    modelica_metatype tmp13_1;modelica_metatype tmp13_2;modelica_metatype tmp13_3;
    tmp13_1 = _exp;
    tmp13_2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 5)));
    tmp13_3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 4)));
    {
      modelica_metatype _res = NULL;
      modelica_metatype _diff_map = NULL;
      volatile mmc_switch_type tmp13;
      int tmp14;
      // _res has no default value.
      // _diff_map has no default value.
      tmp13 = 0;
      for (; tmp13 < 17; tmp13++) {
        switch (MMC_SWITCH_CAST(tmp13)) {
        case 0: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,1,0) == 0) goto tmp12_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,2,0) == 0) goto tmp12_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 2: {
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp17 = mmc_unbox_integer(tmp13_2);
          if (3 != tmp17) goto tmp12_end;
          if (optionNone(tmp13_3)) goto tmp12_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_3), 1));
          _diff_map = tmpMeta18;
          /* Pattern matching succeeded */
          _strippedCref = omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));

          if(omc_UnorderedMap_contains(threadData, _strippedCref, _diff_map))
          {
            _derCref = omc_UnorderedMap_getOrFail(threadData, _strippedCref, _diff_map);

            _derCref = omc_NFComponentRef_copySubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _derCref);

            _res = omc_NFExpression_fromCref(threadData, _derCref, 0 /* false */);
          }
          else
          {
            _res = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          }
          tmpMeta[0+0] = _res;
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 3: {
          modelica_integer tmp19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp19 = mmc_unbox_integer(tmp13_2);
          if (1 != tmp19) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isTime(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))) goto tmp12_end;
          tmpMeta[0+0] = omc_NFExpression_makeOne(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isTime(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))) goto tmp12_end;
          tmpMeta[0+0] = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isStart(threadData, _var_ptr)) goto tmp12_end;
          tmpMeta[0+0] = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 6: {
          modelica_integer tmp20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp20 = mmc_unbox_integer(tmp13_2);
          if (2 != tmp20) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 2))))) goto tmp12_end;
          tmpMeta[0+0] = omc_NFExpression_makeOne(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 7: {
          modelica_integer tmp21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp21 = mmc_unbox_integer(tmp13_2);
          if (2 != tmp21) goto tmp12_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NBVariable_isParamOrConst(threadData, _var_ptr) && (!(omc_NFComponentRef_isTopLevel(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))) && omc_NBVariable_isInput(threadData, _var_ptr))))) goto tmp12_end;
          tmpMeta[0+0] = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 9: {
          modelica_integer tmp22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp22 = mmc_unbox_integer(tmp13_2);
          if (1 != tmp22) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NBVariable_isDiscrete(threadData, _var_ptr) || omc_NBVariable_isDiscreteState(threadData, _var_ptr))) goto tmp12_end;
          tmpMeta[0+0] = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 10: {
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp23 = mmc_unbox_integer(tmp13_2);
          if (1 != tmp23) goto tmp12_end;
          if (optionNone(tmp13_3)) goto tmp12_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_3), 1));
          _diff_map = tmpMeta24;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_UnorderedMap_contains(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), _diff_map)) goto tmp12_end;
          _derCref = omc_UnorderedMap_getOrFail(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), _diff_map);

          _derCref = omc_NFComponentRef_copySubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _derCref);

          _res = omc_NFExpression_fromCref(threadData, _derCref, 0 /* false */);
          tmpMeta[0+0] = _res;
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 11: {
          modelica_integer tmp25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp25 = mmc_unbox_integer(tmp13_2);
          if (1 != tmp25) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isDummyState(threadData, _var_ptr)) goto tmp12_end;
          tmpMeta[0+0] = omc_NFExpression_fromCref(threadData, omc_NBVariable_getPartnerCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), boxvar_NBVariable_getVarDummyDer, 0 /* false */), 0 /* false */);
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 12: {
          modelica_integer tmp26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp26 = mmc_unbox_integer(tmp13_2);
          if (1 != tmp26) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isState(threadData, _var_ptr)) goto tmp12_end;
          tmpMeta[0+0] = omc_NFExpression_fromCref(threadData, omc_NBVariable_getPartnerCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), boxvar_NBVariable_getVarDer, 0 /* false */), 0 /* false */);
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 13: {
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp27 = mmc_unbox_integer(tmp13_2);
          if (1 != tmp27) goto tmp12_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isContinuous(threadData, _var_ptr, 0 /* false */)) goto tmp12_end;
          _derCref = omc_NBVariable_makeDerVar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), 0 /* false */ ,&_der_ptr);

          tmpMeta29 = mmc_mk_cons(_der_ptr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))));
          tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_diffArguments), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[3] = tmpMeta29;
          _diffArguments = tmpMeta28;

          omc_NBVariable_setStateDerivativeVar(threadData, _var_ptr, _der_ptr);
          tmpMeta[0+0] = omc_NFExpression_fromCref(threadData, _derCref, 0 /* false */);
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 14: {
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp30 = mmc_unbox_integer(tmp13_2);
          if (4 != tmp30) goto tmp12_end;
          if (optionNone(tmp13_3)) goto tmp12_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_3), 1));
          _diff_map = tmpMeta31;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 7))))) goto tmp12_end;
          if(omc_UnorderedMap_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _diff_map))
          {
            _res = omc_NFExpression_fromCref(threadData, omc_UnorderedMap_getOrFail(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _diff_map), 0 /* false */);
          }
          else
          {
            _res = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          }
          tmpMeta[0+0] = _res;
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 15: {
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,6,2) == 0) goto tmp12_end;
          tmp32 = mmc_unbox_integer(tmp13_2);
          if (4 != tmp32) goto tmp12_end;
          if (optionNone(tmp13_3)) goto tmp12_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_3), 1));
          _diff_map = tmpMeta33;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 7)))))) goto tmp12_end;
          _strippedCref = omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));

          if(omc_UnorderedMap_contains(threadData, _strippedCref, _diff_map))
          {
            _derCref = omc_UnorderedMap_getOrFail(threadData, _strippedCref, _diff_map);

            _derCref = omc_NFComponentRef_copySubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _derCref);

            _res = omc_NFExpression_fromCref(threadData, _derCref, 0 /* false */);
          }
          else
          {
            _res = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          }
          tmpMeta[0+0] = _res;
          tmpMeta[0+1] = _diffArguments;
          goto tmp12_done;
        }
        case 16: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          tmpMeta35 = stringAppend(_OMC_LIT168,omc_NFExpression_toString(threadData, _exp));
          tmpMeta34 = mmc_mk_cons(tmpMeta35, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta34);
          goto goto_11;
          goto tmp12_done;
        }
        }
        goto tmp12_end;
        tmp12_end: ;
      }
      goto goto_11;
      goto_11:;
      MMC_THROW_INTERNAL();
      goto tmp12_done;
      tmp12_done:;
    }
  }
  _exp = tmpMeta[0+0];
  _diffArguments = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateExpression(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  
  
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _exp;
    {
      modelica_metatype _elem1 = NULL;
      modelica_metatype _elem2 = NULL;
      modelica_metatype _new_elements = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _new_matrix_elements = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _arr = NULL;
      modelica_metatype _d_fn = NULL;
      int tmp6;
      // _elem1 has no default value.
      // _elem2 has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _new_elements = tmpMeta3;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _new_matrix_elements = tmpMeta4;
      // _arr has no default value.
      // _d_fn has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp6_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT54;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT66;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBDifferentiate_differentiateComponentRef(threadData, _exp, _diffArguments, &tmpMeta[0+1]);
          goto tmp5_done;
        }
        case 11: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _arr = omc_Array_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), boxvar_NBDifferentiate_differentiateExpression, _diffArguments ,&_diffArguments);

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = _arr;
          _exp = tmpMeta7;
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 12: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _element_lst;
            for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _element_lst = MMC_CAR(tmpMeta8);
              tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
              _new_elements = tmpMeta9;

              {
                modelica_metatype _element;
                for (tmpMeta10 = _element_lst; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
                {
                  _element = MMC_CAR(tmpMeta10);
                  _element = omc_NBDifferentiate_differentiateExpression(threadData, _element, _diffArguments ,&_diffArguments);

                  tmpMeta11 = mmc_mk_cons(_element, _new_elements);
                  _new_elements = tmpMeta11;
                }
              }

              tmpMeta13 = mmc_mk_cons(listReverse(_new_elements), _new_matrix_elements);
              _new_matrix_elements = tmpMeta13;
            }
          }
          tmpMeta15 = mmc_mk_box2(12, &NFExpression_MATRIX__desc, listReverse(_new_matrix_elements));
          tmpMeta[0+0] = tmpMeta15;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 14: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _element;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _element = MMC_CAR(tmpMeta16);
              _element = omc_NBDifferentiate_differentiateExpression(threadData, _element, _diffArguments ,&_diffArguments);

              tmpMeta17 = mmc_mk_cons(_element, _new_elements);
              _new_elements = tmpMeta17;
            }
          }
          tmpMeta19 = mmc_mk_box3(14, &NFExpression_TUPLE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), listReverse(_new_elements));
          tmpMeta[0+0] = tmpMeta19;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 15: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _element;
            for (tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _element = MMC_CAR(tmpMeta20);
              _element = omc_NBDifferentiate_differentiateExpression(threadData, _element, _diffArguments ,&_diffArguments);

              tmpMeta21 = mmc_mk_cons(_element, _new_elements);
              _new_elements = tmpMeta21;
            }
          }
          tmpMeta23 = mmc_mk_box4(15, &NFExpression_RECORD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), listReverse(_new_elements));
          tmpMeta[0+0] = tmpMeta23;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBDifferentiate_differentiateCall(threadData, _exp, _diffArguments, &tmpMeta[0+1]);
          goto tmp5_done;
        }
        case 25: {
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          _elem1 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _diffArguments ,&_diffArguments);

          _elem2 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))), _diffArguments ,&_diffArguments);
          tmpMeta24 = mmc_mk_box5(25, &NFExpression_IF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _elem1, _elem2);
          tmpMeta[0+0] = tmpMeta24;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBDifferentiate_differentiateBinary(threadData, _exp, _diffArguments, &tmpMeta[0+1]);
          goto tmp5_done;
        }
        case 24: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBDifferentiate_differentiateMultary(threadData, _exp, _diffArguments, &tmpMeta[0+1]);
          goto tmp5_done;
        }
        case 20: {
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          _elem1 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _diffArguments ,&_diffArguments);
          tmpMeta25 = mmc_mk_box3(20, &NFExpression_UNARY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _elem1);
          tmpMeta[0+0] = tmpMeta25;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 26: {
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          _elem1 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _diffArguments ,&_diffArguments);
          tmpMeta26 = mmc_mk_box3(26, &NFExpression_CAST__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _elem1);
          tmpMeta[0+0] = tmpMeta26;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 27: {
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          _elem1 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _diffArguments ,&_diffArguments);
          tmpMeta27 = mmc_mk_box2(27, &NFExpression_BOX__desc, _elem1);
          tmpMeta[0+0] = tmpMeta27;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 28: {
          modelica_metatype tmpMeta28;
          
          /* Pattern matching succeeded */
          _elem1 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _diffArguments ,&_diffArguments);
          tmpMeta28 = mmc_mk_box3(28, &NFExpression_UNBOX__desc, _elem1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
          tmpMeta[0+0] = tmpMeta28;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 29: {
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          _elem1 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _diffArguments ,&_diffArguments);
          tmpMeta29 = mmc_mk_box5(29, &NFExpression_SUBSCRIPTED__EXP__desc, _elem1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))));
          tmpMeta[0+0] = tmpMeta29;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 30: {
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          _elem1 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _diffArguments ,&_diffArguments);
          tmpMeta30 = mmc_mk_box4(30, &NFExpression_TUPLE__ELEMENT__desc, _elem1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))));
          tmpMeta[0+0] = tmpMeta30;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 31: {
          modelica_metatype tmpMeta31;
          
          /* Pattern matching succeeded */
          _elem1 = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _diffArguments ,&_diffArguments);
          tmpMeta31 = mmc_mk_box5(31, &NFExpression_RECORD__ELEMENT__desc, _elem1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))));
          tmpMeta[0+0] = tmpMeta31;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 34: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta39;
          
          /* Pattern matching succeeded */
          _d_fn = omc_NBVariable_makeFDerVar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));

          {
            modelica_metatype _element;
            for (tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))); !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
            {
              _element = MMC_CAR(tmpMeta32);
              _element = omc_NBDifferentiate_differentiateExpression(threadData, _element, _diffArguments ,&_diffArguments);

              tmpMeta33 = mmc_mk_cons(_element, _new_elements);
              _new_elements = tmpMeta33;
            }
          }
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp36;
            modelica_metatype tmpMeta37;
            modelica_string __omcQ_24tmpVar10;
            modelica_integer tmp38;
            modelica_metatype _name_loopVar = 0;
            modelica_metatype _name;
            _name_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)));
            tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta37; /* defaultValue */
            tmp36 = &__omcQ_24tmpVar11;
            while(1) {
              tmp38 = 1;
              if (!listEmpty(_name_loopVar)) {
                _name = MMC_CAR(_name_loopVar);
                _name_loopVar = MMC_CDR(_name_loopVar);
                tmp38--;
              }
              if (tmp38 == 0) {
                __omcQ_24tmpVar10 = omc_NBBackendUtil_makeFDerString(threadData, _name, mmc_mk_none());
                *tmp36 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp36 = &MMC_CDR(*tmp36);
              } else if (tmp38 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp36 = mmc_mk_nil();
            tmpMeta35 = __omcQ_24tmpVar11;
          }
          tmpMeta39 = mmc_mk_box5(34, &NFExpression_PARTIAL__FUNCTION__APPLICATION__desc, _d_fn, listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), listReverse(_new_elements)), listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), tmpMeta35), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))));
          tmpMeta[0+0] = tmpMeta39;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 21: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 22: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 23: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 33: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _diffArguments;
          goto tmp5_done;
        }
        default:
        tmp5_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          
          /* Pattern matching succeeded */
          tmpMeta41 = stringAppend(_OMC_LIT169,omc_NFExpression_toString(threadData, _exp));
          tmpMeta40 = mmc_mk_cons(tmpMeta41, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta40);
          goto goto_2;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp5_done;
      tmp5_done:;
    }
  }
  _exp = tmpMeta[0+0];
  _diffArguments = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateExpressionDump(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_string _name, modelica_string _indent, modelica_metatype *out_diffArguments)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  if(omc_Flags_isSet(threadData, _OMC_LIT47))
  {
    tmpMeta1 = stringAppend(_indent,_OMC_LIT170);
    tmpMeta2 = stringAppend(tmpMeta1,_name);
    tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT171);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);

    tmpMeta4 = stringAppend(_indent,_OMC_LIT172);
    tmpMeta5 = stringAppend(tmpMeta4,omc_NFExpression_toString(threadData, _exp));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT41);
    fputs(MMC_STRINGDATA(tmpMeta6),stdout);

    _exp = omc_NBDifferentiate_differentiateExpression(threadData, _exp, _diffArguments ,&_diffArguments);

    tmpMeta7 = stringAppend(_indent,_OMC_LIT173);
    tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, _exp));
    tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT43);
    fputs(MMC_STRINGDATA(tmpMeta9),stdout);
  }
  else
  {
    _exp = omc_NBDifferentiate_differentiateExpression(threadData, _exp, _diffArguments ,&_diffArguments);
  }
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateWhenStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lhs has no default value.
      // _rhs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _diffArguments ,&_diffArguments);

          _rhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _diffArguments ,&_diffArguments);
          tmpMeta6 = mmc_mk_box4(3, &NBEquation_WhenStatement_ASSIGN__desc, _lhs, _rhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _diffArguments;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _stmt;
          tmpMeta[0+1] = _diffArguments;
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
  _stmt = tmpMeta[0+0];
  _diffArguments = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _stmt;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateWhenEquationBody(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype *out_diffArguments)
{
  modelica_metatype _body = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _when_stmts = NULL;
  modelica_metatype _else_when = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _body = __omcQ_24in_5Fbody;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  // _when_stmts has no default value.
  // _else_when has no default value.
  _when_stmts = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 3))), boxvar_NBDifferentiate_differentiateWhenStatement, _diffArguments ,&_diffArguments);

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4)))))
  {
    _else_when = omc_NBDifferentiate_differentiateWhenEquationBody(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4)))), _diffArguments ,&_diffArguments);

    tmpMeta1 = mmc_mk_box4(3, &NBEquation_WhenEquationBody_WHEN__EQUATION__BODY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 2))), _when_stmts, mmc_mk_some(_else_when));
    _body = tmpMeta1;
  }
  else
  {
    tmpMeta2 = mmc_mk_box4(3, &NBEquation_WhenEquationBody_WHEN__EQUATION__BODY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 2))), _when_stmts, mmc_mk_none());
    _body = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _body;
}

static modelica_metatype closure1_NBDifferentiate_differentiateEquationPointer(threadData_t *thData, modelica_metatype closure, modelica_metatype eq_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBDifferentiate_differentiateEquationPointer(thData, eq_ptr, diffArguments_ptr, name);
}
DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateIfEquationBody(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody, modelica_metatype __omcQ_24in_5FdiffArguments_5Fptr, modelica_metatype *out_diffArguments_ptr)
{
  modelica_metatype _body = NULL;
  modelica_metatype _diffArguments_ptr = NULL;
  modelica_metatype _then_eqns = NULL;
  modelica_metatype _else_if = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _body = __omcQ_24in_5Fbody;
  _diffArguments_ptr = __omcQ_24in_5FdiffArguments_5Fptr;
  // _then_eqns has no default value.
  // _else_if has no default value.
  tmpMeta1 = mmc_mk_box2(0, _diffArguments_ptr, _OMC_LIT9);
  _then_eqns = omc_List_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 3))), (modelica_fnptr) mmc_mk_box2(0,closure1_NBDifferentiate_differentiateEquationPointer,tmpMeta1));

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4)))))
  {
    _else_if = omc_NBDifferentiate_differentiateIfEquationBody(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4)))), _diffArguments_ptr ,&_diffArguments_ptr);

    tmpMeta2 = mmc_mk_box4(3, &NBEquation_IfEquationBody_IF__EQUATION__BODY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 2))), _then_eqns, mmc_mk_some(_else_if));
    _body = tmpMeta2;
  }
  else
  {
    tmpMeta3 = mmc_mk_box4(3, &NBEquation_IfEquationBody_IF__EQUATION__BODY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 2))), _then_eqns, mmc_mk_none());
    _body = tmpMeta3;
  }
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments_ptr) { *out_diffArguments_ptr = _diffArguments_ptr; }
  return _body;
}

static modelica_metatype closure2_NFSimplifyExp_simplifyDump(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_string indent = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NFSimplifyExp_simplifyDump(thData, exp, includeScope, name, indent);
}static modelica_metatype closure3_NFSimplifyExp_simplifyDump(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_string indent = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NFSimplifyExp_simplifyDump(thData, exp, includeScope, name, indent);
}
DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_string _name, modelica_metatype *out_diffArguments)
{
  modelica_metatype _eq = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  if((omc_Flags_isSet(threadData, _OMC_LIT47) && (!(stringEqual(_name, _OMC_LIT9)))))
  {
    tmpMeta1 = stringAppend(_OMC_LIT170,_name);
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT171);
    fputs(MMC_STRINGDATA(tmpMeta2),stdout);

    tmpMeta3 = stringAppend(_OMC_LIT172,omc_NBEquation_Equation_toString(threadData, _eq, _OMC_LIT9));
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT41);
    fputs(MMC_STRINGDATA(tmpMeta4),stdout);
  }

  
  
  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _eq;
    {
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _forBody = NULL;
      modelica_metatype tmpMeta7;
      modelica_metatype _ifBody = NULL;
      modelica_metatype _whenBody = NULL;
      modelica_metatype _diffArguments_ptr = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _alg = NULL;
      int tmp9;
      // _lhs has no default value.
      // _rhs has no default value.
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _forBody = tmpMeta7;
      // _ifBody has no default value.
      // _whenBody has no default value.
      // _diffArguments_ptr has no default value.
      // _attr has no default value.
      // _alg has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp9_1))) {
        case 3: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          _lhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _diffArguments ,&_diffArguments);

          _rhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _diffArguments ,&_diffArguments);

          _attr = omc_NBDifferentiate_differentiateEquationAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), _diffArguments);
          tmpMeta10 = mmc_mk_box6(3, &NBEquation_Equation_SCALAR__EQUATION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _lhs, _rhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _attr);
          tmpMeta[0+0] = tmpMeta10;
          tmpMeta[0+1] = _diffArguments;
          goto tmp8_done;
        }
        case 4: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _lhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _diffArguments ,&_diffArguments);

          _rhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _diffArguments ,&_diffArguments);

          _attr = omc_NBDifferentiate_differentiateEquationAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), _diffArguments);
          tmpMeta11 = mmc_mk_box7(4, &NBEquation_Equation_ARRAY__EQUATION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _lhs, _rhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _attr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))));
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _diffArguments;
          goto tmp8_done;
        }
        case 5: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          _lhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _diffArguments ,&_diffArguments);

          _rhs = omc_NBDifferentiate_differentiateExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _diffArguments ,&_diffArguments);

          _attr = omc_NBDifferentiate_differentiateEquationAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), _diffArguments);
          tmpMeta12 = mmc_mk_box7(5, &NBEquation_Equation_RECORD__EQUATION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _lhs, _rhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _attr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))));
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = _diffArguments;
          goto tmp8_done;
        }
        case 7: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _ifBody = omc_NBDifferentiate_differentiateIfEquationBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), omc_Pointer_create(threadData, _diffArguments) ,&_diffArguments_ptr);

          _attr = omc_NBDifferentiate_differentiateEquationAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _diffArguments);
          tmpMeta13 = mmc_mk_box5(7, &NBEquation_Equation_IF__EQUATION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _ifBody, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _attr);
          tmpMeta[0+0] = tmpMeta13;
          tmpMeta[0+1] = omc_Pointer_access(threadData, _diffArguments_ptr);
          goto tmp8_done;
        }
        case 8: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _body_eqn;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _body_eqn = MMC_CAR(tmpMeta14);
              _body_eqn = omc_NBDifferentiate_differentiateEquation(threadData, _body_eqn, _diffArguments, _OMC_LIT9 ,&_diffArguments);

              tmpMeta15 = mmc_mk_cons(_body_eqn, _forBody);
              _forBody = tmpMeta15;
            }
          }

          _attr = omc_NBDifferentiate_differentiateEquationAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), _diffArguments);
          tmpMeta17 = mmc_mk_box6(8, &NBEquation_Equation_FOR__EQUATION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), listReverse(_forBody), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _attr);
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = _diffArguments;
          goto tmp8_done;
        }
        case 9: {
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          _whenBody = omc_NBDifferentiate_differentiateWhenEquationBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _diffArguments ,&_diffArguments);

          _attr = omc_NBDifferentiate_differentiateEquationAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _diffArguments);
          tmpMeta18 = mmc_mk_box5(9, &NBEquation_Equation_WHEN__EQUATION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _whenBody, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _attr);
          tmpMeta[0+0] = tmpMeta18;
          tmpMeta[0+1] = _diffArguments;
          goto tmp8_done;
        }
        case 6: {
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          _alg = omc_NBDifferentiate_differentiateAlgorithm(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _diffArguments ,&_diffArguments);
          tmpMeta19 = mmc_mk_box6(6, &NBEquation_Equation_ALGORITHM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _alg, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
          tmpMeta[0+0] = tmpMeta19;
          tmpMeta[0+1] = _diffArguments;
          goto tmp8_done;
        }
        default:
        tmp8_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta21 = stringAppend(_OMC_LIT174,omc_NBEquation_Equation_toString(threadData, _eq, _OMC_LIT9));
          tmpMeta20 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta20);
          goto goto_6;
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _eq = tmpMeta[0+0];
  _diffArguments = tmpMeta[0+1];

  if((omc_Flags_isSet(threadData, _OMC_LIT47) && (!(stringEqual(_name, _OMC_LIT9)))))
  {
    tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta24 = mmc_mk_box3(0, mmc_mk_boolean(1 /* true */), _name, _OMC_LIT175);
    _eq = omc_NBEquation_Equation_simplify(threadData, _eq, _name, _OMC_LIT175, omc_Pointer_create(threadData, tmpMeta22), omc_Pointer_create(threadData, tmpMeta23), (modelica_fnptr) mmc_mk_box2(0,closure2_NFSimplifyExp_simplifyDump,tmpMeta24));

    tmpMeta25 = stringAppend(_OMC_LIT173,omc_NBEquation_Equation_toString(threadData, _eq, _OMC_LIT9));
    tmpMeta26 = stringAppend(tmpMeta25,_OMC_LIT43);
    fputs(MMC_STRINGDATA(tmpMeta26),stdout);
  }
  else
  {
    tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta29 = mmc_mk_box3(0, mmc_mk_boolean(1 /* true */), _name, _OMC_LIT9);
    _eq = omc_NBEquation_Equation_simplify(threadData, _eq, _name, _OMC_LIT9, omc_Pointer_create(threadData, tmpMeta27), omc_Pointer_create(threadData, tmpMeta28), (modelica_fnptr) mmc_mk_box2(0,closure3_NFSimplifyExp_simplifyDump,tmpMeta29));
  }
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _eq;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateEquationPointer(threadData_t *threadData, modelica_metatype _eq_ptr, modelica_metatype _diffArguments_ptr, modelica_string _name)
{
  modelica_metatype _derivative_ptr = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _diffedEq = NULL;
  modelica_metatype _old_diffArguments = NULL;
  modelica_metatype _new_diffArguments = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _derivative_ptr has no default value.
  // _eq has no default value.
  // _diffedEq has no default value.
  // _old_diffArguments has no default value.
  // _new_diffArguments has no default value.
  _eq = omc_Pointer_access(threadData, _eq_ptr);

  _old_diffArguments = omc_Pointer_access(threadData, _diffArguments_ptr);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBEquation_Equation_getAttributes(threadData, _eq);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _derivative_ptr = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_old_diffArguments), 5)))) == 1)) goto tmp3_end;
          tmpMeta1 = _derivative_ptr;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          _diffedEq = omc_NBDifferentiate_differentiateEquation(threadData, _eq, _old_diffArguments, _name ,&_new_diffArguments);

          _derivative_ptr = omc_Pointer_create(threadData, _diffedEq);

          if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_new_diffArguments), 5)))) == 1))
          {
            omc_Pointer_update(threadData, _eq_ptr, omc_NBEquation_Equation_setDerivative(threadData, _eq, _derivative_ptr));
          }

          if((!referenceEq(_new_diffArguments, _old_diffArguments)))
          {
            omc_Pointer_update(threadData, _diffArguments_ptr, _new_diffArguments);
          }
          tmpMeta1 = _derivative_ptr;
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
  _derivative_ptr = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _derivative_ptr;
}

static modelica_metatype closure4_NBDifferentiate_differentiateEquationPointer(threadData_t *thData, modelica_metatype closure, modelica_metatype eq_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBDifferentiate_differentiateEquationPointer(thData, eq_ptr, diffArguments_ptr, name);
}
DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateEquationPointerList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype _idx, modelica_string _context, modelica_string _name, modelica_metatype *out_diffArguments)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _diffArguments_ptr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  _diffArguments_ptr = omc_Pointer_create(threadData, _diffArguments);
  tmpMeta1 = mmc_mk_box2(0, _diffArguments_ptr, _name);
  _equations = omc_List_map(threadData, _equations, (modelica_fnptr) mmc_mk_box2(0,closure4_NBDifferentiate_differentiateEquationPointer,tmpMeta1));

  {
    modelica_metatype _eqn;
    for (tmpMeta2 = _equations; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqn = MMC_CAR(tmpMeta2);
      omc_NBEquation_Equation_createName(threadData, _eqn, _idx, _context);
    }
  }

  _diffArguments = omc_Pointer_access(threadData, _diffArguments_ptr);
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _equations;
}

static modelica_metatype closure5_NBDifferentiate_differentiateVariablePointer(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBDifferentiate_differentiateVariablePointer(thData, var_ptr, diffArguments_ptr);
}static modelica_metatype closure6_NBDifferentiate_differentiateEquationPointer(threadData_t *thData, modelica_metatype closure, modelica_metatype eq_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBDifferentiate_differentiateEquationPointer(thData, eq_ptr, diffArguments_ptr, name);
}
DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateTearing(threadData_t *threadData, modelica_metatype _tearing, modelica_metatype _diffArguments_ptr, modelica_metatype _idx, modelica_string _context, modelica_string _name)
{
  modelica_metatype _diff_tearing = NULL;
  modelica_metatype _ite_vars = NULL;
  modelica_metatype _res_eqns = NULL;
  modelica_metatype _inner_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _diff_tearing has no default value.
  // _ite_vars has no default value.
  // _res_eqns has no default value.
  // _inner_eqns has no default value.
  {
    modelica_metatype __omcQ_24tmpVar13;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar12;
    modelica_integer tmp5;
    modelica_metatype _var_loopVar = 0;
    modelica_metatype _var;
    _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tearing), 2)));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar13 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar13;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_var_loopVar)) {
        _var = MMC_CAR(_var_loopVar);
        _var_loopVar = MMC_CDR(_var_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = mmc_mk_box1(0, _diffArguments_ptr);
        __omcQ_24tmpVar12 = omc_NBSlice_apply(threadData, _var, (modelica_fnptr) mmc_mk_box2(0,closure5_NBDifferentiate_differentiateVariablePointer,tmpMeta4));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar12,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar13;
  }
  _ite_vars = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar15;
    modelica_metatype* tmp7;
    modelica_metatype tmpMeta8;
    modelica_metatype tmpMeta9;
    modelica_metatype __omcQ_24tmpVar14;
    modelica_integer tmp10;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tearing), 3)));
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar15 = tmpMeta8; /* defaultValue */
    tmp7 = &__omcQ_24tmpVar15;
    while(1) {
      tmp10 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp10--;
      }
      if (tmp10 == 0) {
        tmpMeta9 = mmc_mk_box2(0, _diffArguments_ptr, _name);
        __omcQ_24tmpVar14 = omc_NBSlice_apply(threadData, _eqn, (modelica_fnptr) mmc_mk_box2(0,closure6_NBDifferentiate_differentiateEquationPointer,tmpMeta9));
        *tmp7 = mmc_mk_cons(__omcQ_24tmpVar14,0);
        tmp7 = &MMC_CDR(*tmp7);
      } else if (tmp10 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp7 = mmc_mk_nil();
    tmpMeta6 = __omcQ_24tmpVar15;
  }
  _res_eqns = tmpMeta6;

  {
    modelica_metatype __omcQ_24tmpVar17;
    modelica_metatype* tmp12;
    modelica_metatype tmpMeta13;
    modelica_metatype __omcQ_24tmpVar16;
    modelica_integer tmp14;
    modelica_metatype _ie_loopVar = 0;
    modelica_integer tmp15;
    modelica_metatype _ie;
    _ie_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tearing), 4)));
    tmp15 = 1;
    tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar17 = tmpMeta13; /* defaultValue */
    tmp12 = &__omcQ_24tmpVar17;
    while(1) {
      tmp14 = 1;
      if (tmp15 <= arrayLength(_ie_loopVar)) {
        _ie = arrayGet(_ie_loopVar, tmp15++);
        tmp14--;
      }
      if (tmp14 == 0) {
        __omcQ_24tmpVar16 = omc_NBDifferentiate_differentiateStrongComponent(threadData, _ie, _diffArguments_ptr, _idx, _context, _name);
        *tmp12 = mmc_mk_cons(__omcQ_24tmpVar16,0);
        tmp12 = &MMC_CDR(*tmp12);
      } else if (tmp14 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp12 = mmc_mk_nil();
    tmpMeta11 = __omcQ_24tmpVar17;
  }
  _inner_eqns = listArray(tmpMeta11);

  tmpMeta16 = mmc_mk_box5(3, &NBTearing_TEARING__SET__desc, _ite_vars, _res_eqns, _inner_eqns, mmc_mk_none());
  _diff_tearing = tmpMeta16;
  _return: OMC_LABEL_UNUSED
  return _diff_tearing;
}

static modelica_metatype closure7_NBDifferentiate_differentiateVariablePointer(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBDifferentiate_differentiateVariablePointer(thData, var_ptr, diffArguments_ptr);
}static modelica_metatype closure8_NBDifferentiate_differentiateEquationPointer(threadData_t *thData, modelica_metatype closure, modelica_metatype eq_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBDifferentiate_differentiateEquationPointer(thData, eq_ptr, diffArguments_ptr, name);
}static modelica_metatype closure9_NBDifferentiate_differentiateVariablePointer(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBDifferentiate_differentiateVariablePointer(thData, var_ptr, diffArguments_ptr);
}static modelica_metatype closure10_NBDifferentiate_differentiateEquationPointer(threadData_t *thData, modelica_metatype closure, modelica_metatype eq_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBDifferentiate_differentiateEquationPointer(thData, eq_ptr, diffArguments_ptr, name);
}static void closure11_NBEquation_Equation_createName(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype idx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string context = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_NBEquation_Equation_createName(thData, eqn_ptr, idx, context);
}static modelica_metatype closure12_NBDifferentiate_differentiateVariablePointer(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBDifferentiate_differentiateVariablePointer(thData, var_ptr, diffArguments_ptr);
}static modelica_metatype closure13_NBDifferentiate_differentiateEquationPointer(threadData_t *thData, modelica_metatype closure, modelica_metatype eq_ptr)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBDifferentiate_differentiateEquationPointer(thData, eq_ptr, diffArguments_ptr, name);
}static void closure14_NBEquation_Equation_createName(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype idx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string context = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_NBEquation_Equation_createName(thData, eqn_ptr, idx, context);
}static modelica_metatype closure15_NBDifferentiate_differentiateTearing(threadData_t *thData, modelica_metatype closure, modelica_metatype tearing)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype idx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_string context = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  return boxptr_NBDifferentiate_differentiateTearing(thData, tearing, diffArguments_ptr, idx, context, name);
}
DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateStrongComponent(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _diffArguments_ptr, modelica_metatype _idx, modelica_string _context, modelica_string _name)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      modelica_metatype _new_var = NULL;
      modelica_metatype _new_eqn = NULL;
      modelica_metatype _new_var_slices = NULL;
      modelica_metatype _new_cref = NULL;
      modelica_metatype _new_var_slice = NULL;
      modelica_metatype _new_eqn_slice = NULL;
      modelica_metatype _diffArguments = NULL;
      modelica_metatype _strict = NULL;
      modelica_metatype _casual = NULL;
      modelica_boolean _linear;
      int tmp4;
      // _new_var has no default value.
      // _new_eqn has no default value.
      // _new_var_slices has no default value.
      // _new_cref has no default value.
      // _new_var_slice has no default value.
      // _new_eqn_slice has no default value.
      // _diffArguments has no default value.
      // _strict has no default value.
      // _casual has no default value.
      // _linear has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          _new_var = omc_NBDifferentiate_differentiateVariablePointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _diffArguments_ptr);

          _new_eqn = omc_NBDifferentiate_differentiateEquationPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _diffArguments_ptr, _name);

          omc_NBEquation_Equation_createName(threadData, _new_eqn, _idx, _context);
          tmpMeta5 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, _new_var, _new_eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp10;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar19;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                tmpMeta9 = mmc_mk_box1(0, _diffArguments_ptr);
                __omcQ_24tmpVar18 = omc_NBSlice_apply(threadData, _var, (modelica_fnptr) mmc_mk_box2(0,closure7_NBDifferentiate_differentiateVariablePointer,tmpMeta9));
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar19;
          }
          _new_var_slices = tmpMeta6;

          tmpMeta11 = mmc_mk_box2(0, _diffArguments_ptr, _name);
          _new_eqn_slice = omc_NBSlice_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure8_NBDifferentiate_differentiateEquationPointer,tmpMeta11));

          omc_NBEquation_Equation_createName(threadData, omc_NBSlice_getT(threadData, _new_eqn_slice), _idx, _context);
          tmpMeta12 = mmc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, _new_var_slices, _new_eqn_slice, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta14 = omc_NBDifferentiate_differentiateComponentRef(threadData, omc_NFExpression_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), 0 /* false */), omc_Pointer_access(threadData, _diffArguments_ptr), &tmpMeta13);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,6,2) == 0) goto goto_2;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 3));
          _new_cref = tmpMeta15;
          _diffArguments = tmpMeta13;

          omc_Pointer_update(threadData, _diffArguments_ptr, _diffArguments);

          tmpMeta16 = mmc_mk_box1(0, _diffArguments_ptr);
          _new_var_slice = omc_NBSlice_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure9_NBDifferentiate_differentiateVariablePointer,tmpMeta16));

          tmpMeta17 = mmc_mk_box2(0, _diffArguments_ptr, _name);
          _new_eqn_slice = omc_NBSlice_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), (modelica_fnptr) mmc_mk_box2(0,closure10_NBDifferentiate_differentiateEquationPointer,tmpMeta17));

          tmpMeta18 = mmc_mk_box2(0, _idx, _context);
          omc_NBSlice_applyMutable(threadData, _new_eqn_slice, (modelica_fnptr) mmc_mk_box2(0,closure11_NBEquation_Equation_createName,tmpMeta18));
          tmpMeta19 = mmc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, _new_cref, _new_var_slice, _new_eqn_slice, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))));
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta21 = omc_NBDifferentiate_differentiateComponentRef(threadData, omc_NFExpression_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), 0 /* false */), omc_Pointer_access(threadData, _diffArguments_ptr), &tmpMeta20);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,6,2) == 0) goto goto_2;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
          _new_cref = tmpMeta22;
          _diffArguments = tmpMeta20;

          omc_Pointer_update(threadData, _diffArguments_ptr, _diffArguments);

          tmpMeta23 = mmc_mk_box1(0, _diffArguments_ptr);
          _new_var_slice = omc_NBSlice_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure12_NBDifferentiate_differentiateVariablePointer,tmpMeta23));

          tmpMeta24 = mmc_mk_box2(0, _diffArguments_ptr, _name);
          _new_eqn_slice = omc_NBSlice_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), (modelica_fnptr) mmc_mk_box2(0,closure13_NBDifferentiate_differentiateEquationPointer,tmpMeta24));

          tmpMeta25 = mmc_mk_box2(0, _idx, _context);
          omc_NBSlice_applyMutable(threadData, _new_eqn_slice, (modelica_fnptr) mmc_mk_box2(0,closure14_NBEquation_Equation_createName,tmpMeta25));
          tmpMeta26 = mmc_mk_box6(6, &NBStrongComponent_RESIZABLE__COMPONENT__desc, _new_cref, _new_var_slice, _new_eqn_slice, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 6))));
          tmpMeta1 = tmpMeta26;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta28 = omc_NBDifferentiate_differentiateComponentRef(threadData, omc_NFExpression_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), 0 /* false */), omc_Pointer_access(threadData, _diffArguments_ptr), &tmpMeta27);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,6,2) == 0) goto goto_2;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 3));
          _new_cref = tmpMeta29;
          _diffArguments = tmpMeta27;

          omc_Pointer_update(threadData, _diffArguments_ptr, _diffArguments);

          _new_eqn = omc_NBDifferentiate_differentiateEquationPointer(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), _diffArguments_ptr, _name);

          omc_NBEquation_Equation_createName(threadData, _new_eqn, _idx, _context);
          tmpMeta30 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _new_eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), 3))));
          tmpMeta31 = mmc_mk_box3(7, &NBStrongComponent_GENERIC__COMPONENT__desc, _new_cref, tmpMeta30);
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta32;
          modelica_boolean tmp33 = 0;
          modelica_metatype tmpMeta40;
          
          /* Pattern matching succeeded */
          _strict = omc_NBDifferentiate_differentiateTearing(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _diffArguments_ptr, _idx, _context, _name);

          tmpMeta32 = mmc_mk_box4(0, _diffArguments_ptr, _idx, _context, _name);
          _casual = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), (modelica_fnptr) mmc_mk_box2(0,closure15_NBDifferentiate_differentiateTearing,tmpMeta32));

          { /* match expression */
            modelica_metatype tmp36_1;
            tmp36_1 = omc_Pointer_access(threadData, _diffArguments_ptr);
            {
              volatile mmc_switch_type tmp36;
              int tmp37;
              tmp36 = 0;
              for (; tmp36 < 2; tmp36++) {
                switch (MMC_SWITCH_CAST(tmp36)) {
                case 0: {
                  modelica_metatype tmpMeta38;
                  modelica_integer tmp39;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp36_1,0,6) == 0) goto tmp35_end;
                  tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp36_1), 5));
                  tmp39 = mmc_unbox_integer(tmpMeta38);
                  if (4 != tmp39) goto tmp35_end;
                  
                  /* Pattern matching succeeded */
                  tmp33 = 1 /* true */;
                  goto tmp35_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmp33 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))));
                  goto tmp35_done;
                }
                }
                goto tmp35_end;
                tmp35_end: ;
              }
              goto goto_34;
              goto_34:;
              goto goto_2;
              goto tmp35_done;
              tmp35_done:;
            }
          }
          _linear = tmp33;
          tmpMeta40 = mmc_mk_box8(9, &NBStrongComponent_ALGEBRAIC__LOOP__desc, mmc_mk_integer(((modelica_integer) -1)), _strict, _casual, mmc_mk_boolean(_linear), mmc_mk_boolean(0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 8))));
          tmpMeta1 = tmpMeta40;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          
          /* Pattern matching succeeded */
          tmpMeta42 = stringAppend(_OMC_LIT176,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta41 = mmc_mk_cons(tmpMeta42, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta41);
          goto goto_2;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          __omcQ_24in_5Fcomp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          
          /* Pattern matching succeeded */
          tmpMeta44 = stringAppend(_OMC_LIT177,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta43 = mmc_mk_cons(tmpMeta44, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT31, tmpMeta43);
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _comp;
}

static modelica_metatype closure16_NBDifferentiate_differentiateStrongComponent(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp)
{
  modelica_metatype diffArguments_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype idx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_string context = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  return boxptr_NBDifferentiate_differentiateStrongComponent(thData, $in_comp, diffArguments_ptr, idx, context, name);
}
DLLDirection
modelica_metatype omc_NBDifferentiate_differentiateStrongComponentList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomps, modelica_metatype __omcQ_24in_5FdiffArguments, modelica_metatype _idx, modelica_string _context, modelica_string _name, modelica_metatype *out_diffArguments)
{
  modelica_metatype _comps = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _diffArguments_ptr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comps = __omcQ_24in_5Fcomps;
  _diffArguments = __omcQ_24in_5FdiffArguments;
  _diffArguments_ptr = omc_Pointer_create(threadData, _diffArguments);
  tmpMeta1 = mmc_mk_box4(0, _diffArguments_ptr, _idx, _context, _name);
  _comps = omc_List_map(threadData, _comps, (modelica_fnptr) mmc_mk_box2(0,closure16_NBDifferentiate_differentiateStrongComponent,tmpMeta1));

  _diffArguments = omc_Pointer_access(threadData, _diffArguments_ptr);
  _return: OMC_LABEL_UNUSED
  if (out_diffArguments) { *out_diffArguments = _diffArguments; }
  return _comps;
}

DLLDirection
modelica_string omc_NBDifferentiate_DifferentiationArguments_diffTypeStr(threadData_t *threadData, modelica_integer _diffType)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_diffType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT178;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT179;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT180;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT181;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT182;
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
modelica_metatype boxptr_NBDifferentiate_DifferentiationArguments_diffTypeStr(threadData_t *threadData, modelica_metatype _diffType)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_diffType);
  _str = omc_NBDifferentiate_DifferentiationArguments_diffTypeStr(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_NBDifferentiate_DifferentiationArguments_toString(threadData_t *threadData, modelica_metatype _diffArgs)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_OMC_LIT183,omc_NBDifferentiate_DifferentiationArguments_diffTypeStr(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArgs), 5))))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT184);
  _str = tmpMeta2;
  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArgs), 5)))) == 2))
  {
    tmpMeta3 = stringAppend(_str,_OMC_LIT185);
    tmpMeta4 = stringAppend(tmpMeta3,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArgs), 2)))));
    _str = tmpMeta4;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_DifferentiationArguments_simpleCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _funcTree)
{
  modelica_metatype _diffArgs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box7(3, &NBDifferentiate_DifferentiationArguments_DIFFERENTIATION__ARGUMENTS__desc, _cref, tmpMeta1, mmc_mk_none(), mmc_mk_integer(2), _funcTree, mmc_mk_boolean(0 /* false */));
  _diffArgs = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _diffArgs;
}

DLLDirection
modelica_metatype omc_NBDifferentiate_DifferentiationArguments_default(threadData_t *threadData, modelica_integer _ty, modelica_metatype _funcTree)
{
  modelica_metatype _diffArgs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box7(3, &NBDifferentiate_DifferentiationArguments_DIFFERENTIATION__ARGUMENTS__desc, _OMC_LIT157, tmpMeta1, mmc_mk_none(), mmc_mk_integer((modelica_integer)_ty), _funcTree, mmc_mk_boolean(0 /* false */));
  _diffArgs = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _diffArgs;
}
modelica_metatype boxptr_NBDifferentiate_DifferentiationArguments_default(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _funcTree)
{
  modelica_integer tmp1;
  modelica_metatype _diffArgs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_ty);
  _diffArgs = omc_NBDifferentiate_DifferentiationArguments_default(threadData, tmp1, _funcTree);
  /* skip box _diffArgs; NBDifferentiate.DifferentiationArguments */
  return _diffArgs;
}

