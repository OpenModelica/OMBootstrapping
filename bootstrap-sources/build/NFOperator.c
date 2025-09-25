#include "omc_simulation_settings.h"
#include "NFOperator.h"
#define _OMC_LIT0_data "ADD"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,3,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "SUB"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "MUL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,3,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "DIV"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,3,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "POW"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "ADD_EW"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,6,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "SUB_EW"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,6,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "MUL_EW"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,6,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "DIV_EW"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,6,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "POW_EW"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,6,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "ADD_SCALAR_ARRAY"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,16,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "ADD_ARRAY_SCALAR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,16,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "SUB_SCALAR_ARRAY"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,16,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "SUB_ARRAY_SCALAR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,16,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "MUL_SCALAR_ARRAY"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,16,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "MUL_ARRAY_SCALAR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,16,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "MUL_VECTOR_MATRIX"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,17,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "MUL_MATRIX_VECTOR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,17,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "SCALAR_PRODUCT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,14,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "MATRIX_PRODUCT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,14,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "DIV_SCALAR_ARRAY"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,16,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "DIV_ARRAY_SCALAR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,16,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "POW_SCALAR_ARRAY"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,16,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "POW_ARRAY_SCALAR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,16,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "POW_MATRIX"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,10,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "UMINUS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,6,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "AND"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,3,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "OR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,2,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NOT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,3,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "LESS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,4,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "LESSEQ"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,6,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "GREATER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,7,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "GREATEREQ"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,9,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "EQUAL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,5,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "NEQUAL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,6,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "USERDEFINED"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,11,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,17,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT36,_OMC_LIT37,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "NFOperator.opToStringfailed. Unhanded enumeration."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,50,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,1) {_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "OPERATOR("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,9,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,2,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,1,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "NFOperator.fromClassification: Don't know how to handle math class and size class combination: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,95,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFOperator.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,71,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT52_6,1.758197185e9);
#define _OMC_LIT52_6 MMC_REFREALLIT(_OMC_LIT_STRUCT52_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(842)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(842)),MMC_IMMEDIATE(MMC_TAGFIXNUM(162)),_OMC_LIT52_6}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3))}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(4))}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3))}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(4))}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3))}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(4))}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5))}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(6))}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7))}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3))}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),MMC_IMMEDIATE(MMC_TAGFIXNUM(4))}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3))}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(4))}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5))}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(6)),MMC_IMMEDIATE(MMC_TAGFIXNUM(8))}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9))}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "NFOperator.classify: Don't know how to handle "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,46,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT80_6,1.758197185e9);
#define _OMC_LIT80_6 MMC_REFREALLIT(_OMC_LIT_STRUCT80_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(788)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(788)),MMC_IMMEDIATE(MMC_TAGFIXNUM(112)),_OMC_LIT80_6}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "[SCALAR]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,8,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "[ELMWIS]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,8,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "[ARR-SC]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,8,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "[SC-ARR]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,8,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "[MATRIX]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,8,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "[VEC-MA]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,8,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "[MA-VEC]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,8,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "[LOGICL]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,8,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "[RELATN]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,8,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "[ADD]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,5,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "[SUB]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,5,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "[MUL]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,5,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "[DIV]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,5,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "[POW]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,5,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "[LOG]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,5,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "[REL]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,5,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "+"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,1,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "-"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,1,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "*"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,1,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,1,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "^"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,1,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "L"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,1,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "R"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,1,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,1,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data ".+"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,2,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data ".-"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,2,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data ".*"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,2,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "./"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,2,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data ".^"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,2,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "and"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,3,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "or"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,2,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "not"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,3,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "<"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,1,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "<="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,2,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data ">"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,1,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data ">="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,2,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "=="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,2,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "<>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,2,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "NFOperator.symbol got unknown type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,35,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT120_6,1.758197185e9);
#define _OMC_LIT120_6 MMC_REFREALLIT(_OMC_LIT_STRUCT120_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT120,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(452)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(452)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT120_6}};
#define _OMC_LIT120 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "NFOperator.toDAE got unknown type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,34,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT122_6,1.758197185e9);
#define _OMC_LIT122_6 MMC_REFREALLIT(_OMC_LIT_STRUCT122_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(378)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(378)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT122_6}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT123,1,10) {&Absyn_Operator_ADD__EW__desc,}};
#define _OMC_LIT123 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,1,3) {&Absyn_Operator_ADD__desc,}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT125,1,11) {&Absyn_Operator_SUB__EW__desc,}};
#define _OMC_LIT125 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT125)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT126,1,4) {&Absyn_Operator_SUB__desc,}};
#define _OMC_LIT126 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT126)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT127,1,12) {&Absyn_Operator_MUL__EW__desc,}};
#define _OMC_LIT127 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT127)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT128,1,5) {&Absyn_Operator_MUL__desc,}};
#define _OMC_LIT128 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT128)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT129,1,13) {&Absyn_Operator_DIV__EW__desc,}};
#define _OMC_LIT129 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,1,6) {&Absyn_Operator_DIV__desc,}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT131,1,14) {&Absyn_Operator_POW__EW__desc,}};
#define _OMC_LIT131 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,1,7) {&Absyn_Operator_POW__desc,}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT133,1,16) {&Absyn_Operator_UMINUS__EW__desc,}};
#define _OMC_LIT133 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT133)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT134,1,9) {&Absyn_Operator_UMINUS__desc,}};
#define _OMC_LIT134 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT134)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT135,1,17) {&Absyn_Operator_AND__desc,}};
#define _OMC_LIT135 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,1,18) {&Absyn_Operator_OR__desc,}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT137,1,19) {&Absyn_Operator_NOT__desc,}};
#define _OMC_LIT137 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,1,20) {&Absyn_Operator_LESS__desc,}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT139,1,21) {&Absyn_Operator_LESSEQ__desc,}};
#define _OMC_LIT139 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT139)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT140,1,22) {&Absyn_Operator_GREATER__desc,}};
#define _OMC_LIT140 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT140)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT141,1,24) {&Absyn_Operator_EQUAL__desc,}};
#define _OMC_LIT141 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT141)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT142,1,25) {&Absyn_Operator_NEQUAL__desc,}};
#define _OMC_LIT142 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "NFOperator.toAbsyn got unknown type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,36,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT144_6,1.758197185e9);
#define _OMC_LIT144_6 MMC_REFREALLIT(_OMC_LIT_STRUCT144_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT144,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(327)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(327)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT144_6}};
#define _OMC_LIT144 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT144)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT145,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT145 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "NFOperator.repairBinary failed because the binary arguments have incompatible sizes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,85,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT147_6,1.758197185e9);
#define _OMC_LIT147_6 MMC_REFREALLIT(_OMC_LIT_STRUCT147_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT147,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(207)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(208)),MMC_IMMEDIATE(MMC_TAGFIXNUM(74)),_OMC_LIT147_6}};
#define _OMC_LIT147 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "NFOperator.repairMultary failed because the multary arguments have incompatible sizes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,87,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,0,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,1,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,1,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT152_6,1.758197185e9);
#define _OMC_LIT152_6 MMC_REFREALLIT(_OMC_LIT_STRUCT152_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT152,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(181)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(182)),MMC_IMMEDIATE(MMC_TAGFIXNUM(61)),_OMC_LIT152_6}};
#define _OMC_LIT152 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "NFOperator.invertFailed! Don't know how to invert: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,51,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#include "util/modelica.h"

#include "NFOperator_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFOperator_repairMultary_tplLt(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFOperator_repairMultary_tplLt(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_repairMultary_tplLt,2,0) {(void*) boxptr_NFOperator_repairMultary_tplLt,0}};
#define boxvar_NFOperator_repairMultary_tplLt MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_repairMultary_tplLt)

DLLDirection
modelica_string omc_NFOperator_opToString(threadData_t *threadData, modelica_integer _op)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_op;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 37; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT0;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT1;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT2;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT3;
          goto tmp3_done;
        }
        case 4: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT4;
          goto tmp3_done;
        }
        case 5: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT5;
          goto tmp3_done;
        }
        case 6: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT6;
          goto tmp3_done;
        }
        case 7: {
          if (8 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT7;
          goto tmp3_done;
        }
        case 8: {
          if (9 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT8;
          goto tmp3_done;
        }
        case 9: {
          if (10 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT9;
          goto tmp3_done;
        }
        case 10: {
          if (11 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT10;
          goto tmp3_done;
        }
        case 11: {
          if (12 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT11;
          goto tmp3_done;
        }
        case 12: {
          if (13 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT12;
          goto tmp3_done;
        }
        case 13: {
          if (14 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT13;
          goto tmp3_done;
        }
        case 14: {
          if (15 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 15: {
          if (16 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        case 16: {
          if (17 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
          goto tmp3_done;
        }
        case 17: {
          if (18 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT17;
          goto tmp3_done;
        }
        case 18: {
          if (19 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 19: {
          if (20 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT19;
          goto tmp3_done;
        }
        case 20: {
          if (21 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 21: {
          if (22 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT21;
          goto tmp3_done;
        }
        case 22: {
          if (23 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 23: {
          if (24 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT23;
          goto tmp3_done;
        }
        case 24: {
          if (25 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT24;
          goto tmp3_done;
        }
        case 25: {
          if (26 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT25;
          goto tmp3_done;
        }
        case 26: {
          if (27 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT26;
          goto tmp3_done;
        }
        case 27: {
          if (28 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT27;
          goto tmp3_done;
        }
        case 28: {
          if (29 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT28;
          goto tmp3_done;
        }
        case 29: {
          if (30 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT29;
          goto tmp3_done;
        }
        case 30: {
          if (31 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT30;
          goto tmp3_done;
        }
        case 31: {
          if (32 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT31;
          goto tmp3_done;
        }
        case 32: {
          if (33 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 33: {
          if (34 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT33;
          goto tmp3_done;
        }
        case 34: {
          if (35 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT34;
          goto tmp3_done;
        }
        case 35: {
          if (36 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT35;
          goto tmp3_done;
        }
        case 36: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT40, _OMC_LIT42);
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NFOperator_opToString(threadData_t *threadData, modelica_metatype _op)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_op);
  _str = omc_NFOperator_opToString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_NFOperator_toDebugString(threadData_t *threadData, modelica_metatype _op)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT43,omc_NFType_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2)))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT44);
  tmpMeta3 = stringAppend(tmpMeta2,omc_NFOperator_opToString(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3))))));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT45);
  _str = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_boolean omc_NFOperator_isCombineableSize(threadData_t *threadData, modelica_integer _scl1, modelica_integer _scl2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (omc_Util_intCompare(threadData, ((modelica_integer)((modelica_integer)_scl1)), ((modelica_integer)((modelica_integer)_scl2))) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFOperator_isCombineableSize(threadData_t *threadData, modelica_metatype _scl1, modelica_metatype _scl2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_scl1);
  tmp2 = mmc_unbox_integer(_scl2);
  _b = omc_NFOperator_isCombineableSize(threadData, tmp1, tmp2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFOperator_isCombineableMath(threadData_t *threadData, modelica_integer _mcl1, modelica_integer _mcl2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = ((omc_Util_intCompare(threadData, ((modelica_integer)((modelica_integer)_mcl1)), ((modelica_integer)((modelica_integer)_mcl2))) == ((modelica_integer) 0)) || (omc_NFOperator_isDashClassification(threadData, (modelica_integer)_mcl1) && omc_NFOperator_isDashClassification(threadData, (modelica_integer)_mcl2)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFOperator_isCombineableMath(threadData_t *threadData, modelica_metatype _mcl1, modelica_metatype _mcl2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_mcl1);
  tmp2 = mmc_unbox_integer(_mcl2);
  _b = omc_NFOperator_isCombineableMath(threadData, tmp1, tmp2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFOperator_isCombineable(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2)
{
  modelica_boolean _b;
  modelica_integer _mcl1;
  modelica_integer _mcl2;
  modelica_integer _scl1;
  modelica_integer _scl2;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _mcl1 has no default value.
  // _mcl2 has no default value.
  // _scl1 has no default value.
  // _scl2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_NFOperator_classify(threadData, _op1);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _mcl1 = tmp3  /* pattern as ty=enumeration(ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, POWER, LOGICAL, RELATION) */;
  _scl1 = tmp5  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;

  /* Pattern-matching assignment */
  tmpMeta6 = omc_NFOperator_classify(threadData, _op2);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  _mcl2 = tmp8  /* pattern as ty=enumeration(ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, POWER, LOGICAL, RELATION) */;
  _scl2 = tmp10  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;

  _b = (omc_NFOperator_isCombineableMath(threadData, (modelica_integer)_mcl1, (modelica_integer)_mcl2) && omc_NFOperator_isCombineableSize(threadData, (modelica_integer)_scl1, (modelica_integer)_scl2));

  if(_b)
  {
    _b = (!(omc_NFOperator_isScalarProduct(threadData, _op1) || omc_NFOperator_isScalarProduct(threadData, _op2)));
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFOperator_isCombineable(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFOperator_isCombineable(threadData, _op1, _op2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFOperator_reduction(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (18 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (17 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (20 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (19 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
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
modelica_metatype boxptr_NFOperator_reduction(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFOperator_reduction(threadData, _operator);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFOperator_repetition(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_metatype _b = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (11 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT46;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (12 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT47;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (15 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT46;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (16 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT47;
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (17 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT48;
          goto tmp3_done;
        }
        case 5: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp4_1);
          if (18 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT48;
          goto tmp3_done;
        }
        case 6: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp4_1);
          if (20 != tmp12) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT48;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT49;
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
  _b = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _b;
}

DLLDirection
modelica_boolean omc_NFOperator_isSoftCommutative(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (2 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (4 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (7 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (9 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (13 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp4_1);
          if (14 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp4_1);
          if (21 != tmp12) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_integer tmp13;
          tmp13 = mmc_unbox_integer(tmp4_1);
          if (22 != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFOperator_isSoftCommutative(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFOperator_isSoftCommutative(threadData, _operator);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFOperator_isCommutative(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean tmp5 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;

  if((!_b))
  {
    goto _return;
  }

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 9; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp8_1);
          if (1 != tmp10) goto tmp7_end;
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 1: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp8_1);
          if (3 != tmp11) goto tmp7_end;
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 2: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp8_1);
          if (6 != tmp12) goto tmp7_end;
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 3: {
          modelica_integer tmp13;
          tmp13 = mmc_unbox_integer(tmp8_1);
          if (8 != tmp13) goto tmp7_end;
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 4: {
          modelica_integer tmp14;
          tmp14 = mmc_unbox_integer(tmp8_1);
          if (11 != tmp14) goto tmp7_end;
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 5: {
          modelica_integer tmp15;
          tmp15 = mmc_unbox_integer(tmp8_1);
          if (12 != tmp15) goto tmp7_end;
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 6: {
          modelica_integer tmp16;
          tmp16 = mmc_unbox_integer(tmp8_1);
          if (15 != tmp16) goto tmp7_end;
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 7: {
          modelica_integer tmp17;
          tmp17 = mmc_unbox_integer(tmp8_1);
          if (16 != tmp17) goto tmp7_end;
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp5 = 0 /* false */;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _b = tmp5;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFOperator_isCommutative(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFOperator_isCommutative(threadData, _operator);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFOperator_isDashClassification(threadData_t *threadData, modelica_integer _mcl)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_mcl;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFOperator_isDashClassification(threadData_t *threadData, modelica_metatype _mcl)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_mcl);
  _b = omc_NFOperator_isDashClassification(threadData, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NFOperator_combineSizeClassification(threadData_t *threadData, modelica_integer _scl1, modelica_integer _scl2)
{
  modelica_integer _scl;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scl has no default value.
  { /* match expression */
    modelica_integer tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = (modelica_integer)_scl1;
    tmp4_2 = (modelica_integer)_scl2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (2 != tmp4_1) goto tmp3_end;
          if (1 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 3;
          goto tmp3_done;
        }
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 4;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = (modelica_integer)_scl1;
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
  _scl = tmp1;
  _return: OMC_LABEL_UNUSED
  return _scl;
}
modelica_metatype boxptr_NFOperator_combineSizeClassification(threadData_t *threadData, modelica_metatype _scl1, modelica_metatype _scl2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _scl;
  modelica_metatype out_scl;
  tmp1 = mmc_unbox_integer(_scl1);
  tmp2 = mmc_unbox_integer(_scl2);
  _scl = omc_NFOperator_combineSizeClassification(threadData, tmp1, tmp2);
  out_scl = mmc_mk_icon(_scl);
  return out_scl;
}

DLLDirection
modelica_integer omc_NFOperator_getSizeClassification(threadData_t *threadData, modelica_metatype _op)
{
  modelica_integer _scl;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scl has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_NFOperator_classify(threadData, _op);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _scl = tmp3  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;
  _return: OMC_LABEL_UNUSED
  return _scl;
}
modelica_metatype boxptr_NFOperator_getSizeClassification(threadData_t *threadData, modelica_metatype _op)
{
  modelica_integer _scl;
  modelica_metatype out_scl;
  _scl = omc_NFOperator_getSizeClassification(threadData, _op);
  out_scl = mmc_mk_icon(_scl);
  return out_scl;
}

DLLDirection
modelica_integer omc_NFOperator_getMathClassification(threadData_t *threadData, modelica_metatype _op)
{
  modelica_integer _mcl;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mcl has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_NFOperator_classify(threadData, _op);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _mcl = tmp3  /* pattern as ty=enumeration(ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, POWER, LOGICAL, RELATION) */;
  _return: OMC_LABEL_UNUSED
  return _mcl;
}
modelica_metatype boxptr_NFOperator_getMathClassification(threadData_t *threadData, modelica_metatype _op)
{
  modelica_integer _mcl;
  modelica_metatype out_mcl;
  _mcl = omc_NFOperator_getMathClassification(threadData, _op);
  out_mcl = mmc_mk_icon(_mcl);
  return out_mcl;
}

DLLDirection
modelica_metatype omc_NFOperator_fromClassification(threadData_t *threadData, modelica_metatype _cl, modelica_metatype _ty)
{
  modelica_metatype _result = NULL;
  modelica_integer _op;
  modelica_integer tmp1 = 0;
  modelica_metatype tmpMeta111;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _op has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cl;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 27; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (1 != tmp7) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (1 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (2 != tmp11) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (1 != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          if (3 != tmp15) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          if (1 != tmp17) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 3;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          if (4 != tmp19) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          if (1 != tmp21) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 4;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          if (5 != tmp23) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          if (1 != tmp25) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 5;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          if (1 != tmp27) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          if (2 != tmp29) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 6;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta30;
          modelica_integer tmp31;
          modelica_metatype tmpMeta32;
          modelica_integer tmp33;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp31 = mmc_unbox_integer(tmpMeta30);
          if (2 != tmp31) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp33 = mmc_unbox_integer(tmpMeta32);
          if (2 != tmp33) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 7;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          if (3 != tmp35) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          if (2 != tmp37) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 8;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta38;
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
          modelica_integer tmp41;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp39 = mmc_unbox_integer(tmpMeta38);
          if (4 != tmp39) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp41 = mmc_unbox_integer(tmpMeta40);
          if (2 != tmp41) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 9;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta42;
          modelica_integer tmp43;
          modelica_metatype tmpMeta44;
          modelica_integer tmp45;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp43 = mmc_unbox_integer(tmpMeta42);
          if (5 != tmp43) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp45 = mmc_unbox_integer(tmpMeta44);
          if (2 != tmp45) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 10;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta46;
          modelica_integer tmp47;
          modelica_metatype tmpMeta48;
          modelica_integer tmp49;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp47 = mmc_unbox_integer(tmpMeta46);
          if (1 != tmp47) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp49 = mmc_unbox_integer(tmpMeta48);
          if (3 != tmp49) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 12;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta50;
          modelica_integer tmp51;
          modelica_metatype tmpMeta52;
          modelica_integer tmp53;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp51 = mmc_unbox_integer(tmpMeta50);
          if (2 != tmp51) goto tmp3_end;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp53 = mmc_unbox_integer(tmpMeta52);
          if (3 != tmp53) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 14;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta54;
          modelica_integer tmp55;
          modelica_metatype tmpMeta56;
          modelica_integer tmp57;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp55 = mmc_unbox_integer(tmpMeta54);
          if (3 != tmp55) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp57 = mmc_unbox_integer(tmpMeta56);
          if (3 != tmp57) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 16;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta58;
          modelica_integer tmp59;
          modelica_metatype tmpMeta60;
          modelica_integer tmp61;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp59 = mmc_unbox_integer(tmpMeta58);
          if (4 != tmp59) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp61 = mmc_unbox_integer(tmpMeta60);
          if (3 != tmp61) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 22;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta62;
          modelica_integer tmp63;
          modelica_metatype tmpMeta64;
          modelica_integer tmp65;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp63 = mmc_unbox_integer(tmpMeta62);
          if (5 != tmp63) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp65 = mmc_unbox_integer(tmpMeta64);
          if (3 != tmp65) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 24;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta66;
          modelica_integer tmp67;
          modelica_metatype tmpMeta68;
          modelica_integer tmp69;
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp67 = mmc_unbox_integer(tmpMeta66);
          if (1 != tmp67) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp69 = mmc_unbox_integer(tmpMeta68);
          if (4 != tmp69) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 11;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta70;
          modelica_integer tmp71;
          modelica_metatype tmpMeta72;
          modelica_integer tmp73;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp71 = mmc_unbox_integer(tmpMeta70);
          if (2 != tmp71) goto tmp3_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp73 = mmc_unbox_integer(tmpMeta72);
          if (4 != tmp73) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 13;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta74;
          modelica_integer tmp75;
          modelica_metatype tmpMeta76;
          modelica_integer tmp77;
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp75 = mmc_unbox_integer(tmpMeta74);
          if (3 != tmp75) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp77 = mmc_unbox_integer(tmpMeta76);
          if (4 != tmp77) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 15;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta78;
          modelica_integer tmp79;
          modelica_metatype tmpMeta80;
          modelica_integer tmp81;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp79 = mmc_unbox_integer(tmpMeta78);
          if (4 != tmp79) goto tmp3_end;
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp81 = mmc_unbox_integer(tmpMeta80);
          if (4 != tmp81) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 21;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta82;
          modelica_integer tmp83;
          modelica_metatype tmpMeta84;
          modelica_integer tmp85;
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp83 = mmc_unbox_integer(tmpMeta82);
          if (5 != tmp83) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp85 = mmc_unbox_integer(tmpMeta84);
          if (4 != tmp85) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 23;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta86;
          modelica_integer tmp87;
          modelica_metatype tmpMeta88;
          modelica_integer tmp89;
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp87 = mmc_unbox_integer(tmpMeta86);
          if (1 != tmp87) goto tmp3_end;
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp89 = mmc_unbox_integer(tmpMeta88);
          if (5 != tmp89) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 6;
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta90;
          modelica_integer tmp91;
          modelica_metatype tmpMeta92;
          modelica_integer tmp93;
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp91 = mmc_unbox_integer(tmpMeta90);
          if (2 != tmp91) goto tmp3_end;
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp93 = mmc_unbox_integer(tmpMeta92);
          if (5 != tmp93) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 7;
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta94;
          modelica_integer tmp95;
          modelica_metatype tmpMeta96;
          modelica_integer tmp97;
          tmpMeta94 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp95 = mmc_unbox_integer(tmpMeta94);
          if (5 != tmp95) goto tmp3_end;
          tmpMeta96 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp97 = mmc_unbox_integer(tmpMeta96);
          if (5 != tmp97) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 25;
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta98;
          modelica_integer tmp99;
          modelica_metatype tmpMeta100;
          modelica_integer tmp101;
          tmpMeta98 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp99 = mmc_unbox_integer(tmpMeta98);
          if (3 != tmp99) goto tmp3_end;
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp101 = mmc_unbox_integer(tmpMeta100);
          if (5 != tmp101) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 20;
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta102;
          modelica_integer tmp103;
          modelica_metatype tmpMeta104;
          modelica_integer tmp105;
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp103 = mmc_unbox_integer(tmpMeta102);
          if (3 != tmp103) goto tmp3_end;
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp105 = mmc_unbox_integer(tmpMeta104);
          if (6 != tmp105) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 17;
          goto tmp3_done;
        }
        case 25: {
          modelica_metatype tmpMeta106;
          modelica_integer tmp107;
          modelica_metatype tmpMeta108;
          modelica_integer tmp109;
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp107 = mmc_unbox_integer(tmpMeta106);
          if (3 != tmp107) goto tmp3_end;
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp109 = mmc_unbox_integer(tmpMeta108);
          if (7 != tmp109) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 18;
          goto tmp3_done;
        }
        case 26: {
          modelica_metatype tmpMeta110;
          
          /* Pattern matching succeeded */
          tmpMeta110 = stringAppend(_OMC_LIT50,omc_NFOperator_classificationString(threadData, _cl));
          omc_Error_addInternalError(threadData, tmpMeta110, _OMC_LIT52);
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
  _op = tmp1;

  tmpMeta111 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer((modelica_integer)_op));
  _result = tmpMeta111;
  _return: OMC_LABEL_UNUSED
  return _result;
}

DLLDirection
modelica_integer omc_NFOperator_classifyAddition(threadData_t *threadData, modelica_metatype _op)
{
  modelica_integer _sz;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sz = (omc_NFType_isScalar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))))?1:2);
  _return: OMC_LABEL_UNUSED
  return _sz;
}
modelica_metatype boxptr_NFOperator_classifyAddition(threadData_t *threadData, modelica_metatype _op)
{
  modelica_integer _sz;
  modelica_metatype out_sz;
  _sz = omc_NFOperator_classifyAddition(threadData, _op);
  out_sz = mmc_mk_icon(_sz);
  return out_sz;
}

DLLDirection
modelica_metatype omc_NFOperator_classify(threadData_t *threadData, modelica_metatype _op)
{
  modelica_metatype _cl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cl has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 35; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (1 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT53;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (2 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT54;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (3 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT55;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (4 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT56;
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (5 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT57;
          goto tmp3_done;
        }
        case 5: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp4_1);
          if (6 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT58;
          goto tmp3_done;
        }
        case 6: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp4_1);
          if (7 != tmp12) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT59;
          goto tmp3_done;
        }
        case 7: {
          modelica_integer tmp13;
          tmp13 = mmc_unbox_integer(tmp4_1);
          if (8 != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT60;
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp14;
          tmp14 = mmc_unbox_integer(tmp4_1);
          if (9 != tmp14) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT61;
          goto tmp3_done;
        }
        case 9: {
          modelica_integer tmp15;
          tmp15 = mmc_unbox_integer(tmp4_1);
          if (10 != tmp15) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT62;
          goto tmp3_done;
        }
        case 10: {
          modelica_integer tmp16;
          tmp16 = mmc_unbox_integer(tmp4_1);
          if (16 != tmp16) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT63;
          goto tmp3_done;
        }
        case 11: {
          modelica_integer tmp17;
          tmp17 = mmc_unbox_integer(tmp4_1);
          if (15 != tmp17) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT64;
          goto tmp3_done;
        }
        case 12: {
          modelica_integer tmp18;
          tmp18 = mmc_unbox_integer(tmp4_1);
          if (12 != tmp18) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT65;
          goto tmp3_done;
        }
        case 13: {
          modelica_integer tmp19;
          tmp19 = mmc_unbox_integer(tmp4_1);
          if (11 != tmp19) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT66;
          goto tmp3_done;
        }
        case 14: {
          modelica_integer tmp20;
          tmp20 = mmc_unbox_integer(tmp4_1);
          if (14 != tmp20) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT67;
          goto tmp3_done;
        }
        case 15: {
          modelica_integer tmp21;
          tmp21 = mmc_unbox_integer(tmp4_1);
          if (13 != tmp21) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT68;
          goto tmp3_done;
        }
        case 16: {
          modelica_integer tmp22;
          tmp22 = mmc_unbox_integer(tmp4_1);
          if (19 != tmp22) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT55;
          goto tmp3_done;
        }
        case 17: {
          modelica_integer tmp23;
          tmp23 = mmc_unbox_integer(tmp4_1);
          if (20 != tmp23) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT69;
          goto tmp3_done;
        }
        case 18: {
          modelica_integer tmp24;
          tmp24 = mmc_unbox_integer(tmp4_1);
          if (17 != tmp24) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT70;
          goto tmp3_done;
        }
        case 19: {
          modelica_integer tmp25;
          tmp25 = mmc_unbox_integer(tmp4_1);
          if (18 != tmp25) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT71;
          goto tmp3_done;
        }
        case 20: {
          modelica_integer tmp26;
          tmp26 = mmc_unbox_integer(tmp4_1);
          if (22 != tmp26) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT72;
          goto tmp3_done;
        }
        case 21: {
          modelica_integer tmp27;
          tmp27 = mmc_unbox_integer(tmp4_1);
          if (21 != tmp27) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT73;
          goto tmp3_done;
        }
        case 22: {
          modelica_integer tmp28;
          tmp28 = mmc_unbox_integer(tmp4_1);
          if (24 != tmp28) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT74;
          goto tmp3_done;
        }
        case 23: {
          modelica_integer tmp29;
          tmp29 = mmc_unbox_integer(tmp4_1);
          if (23 != tmp29) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT75;
          goto tmp3_done;
        }
        case 24: {
          modelica_integer tmp30;
          tmp30 = mmc_unbox_integer(tmp4_1);
          if (25 != tmp30) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT76;
          goto tmp3_done;
        }
        case 25: {
          modelica_integer tmp31;
          tmp31 = mmc_unbox_integer(tmp4_1);
          if (27 != tmp31) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT77;
          goto tmp3_done;
        }
        case 26: {
          modelica_integer tmp32;
          tmp32 = mmc_unbox_integer(tmp4_1);
          if (28 != tmp32) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT77;
          goto tmp3_done;
        }
        case 27: {
          modelica_integer tmp33;
          tmp33 = mmc_unbox_integer(tmp4_1);
          if (29 != tmp33) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT77;
          goto tmp3_done;
        }
        case 28: {
          modelica_integer tmp34;
          tmp34 = mmc_unbox_integer(tmp4_1);
          if (30 != tmp34) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT78;
          goto tmp3_done;
        }
        case 29: {
          modelica_integer tmp35;
          tmp35 = mmc_unbox_integer(tmp4_1);
          if (31 != tmp35) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT78;
          goto tmp3_done;
        }
        case 30: {
          modelica_integer tmp36;
          tmp36 = mmc_unbox_integer(tmp4_1);
          if (32 != tmp36) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT78;
          goto tmp3_done;
        }
        case 31: {
          modelica_integer tmp37;
          tmp37 = mmc_unbox_integer(tmp4_1);
          if (33 != tmp37) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT78;
          goto tmp3_done;
        }
        case 32: {
          modelica_integer tmp38;
          tmp38 = mmc_unbox_integer(tmp4_1);
          if (34 != tmp38) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT78;
          goto tmp3_done;
        }
        case 33: {
          modelica_integer tmp39;
          tmp39 = mmc_unbox_integer(tmp4_1);
          if (35 != tmp39) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT78;
          goto tmp3_done;
        }
        case 34: {
          modelica_string tmp40;
          const char* tmp41[36] = {"ADD", "SUB", "MUL", "DIV", "POW", "ADD_EW", "SUB_EW", "MUL_EW", "DIV_EW", "POW_EW", "ADD_SCALAR_ARRAY", "ADD_ARRAY_SCALAR", "SUB_SCALAR_ARRAY", "SUB_ARRAY_SCALAR", "MUL_SCALAR_ARRAY", "MUL_ARRAY_SCALAR", "MUL_VECTOR_MATRIX", "MUL_MATRIX_VECTOR", "SCALAR_PRODUCT", "MATRIX_PRODUCT", "DIV_SCALAR_ARRAY", "DIV_ARRAY_SCALAR", "POW_SCALAR_ARRAY", "POW_ARRAY_SCALAR", "POW_MATRIX", "UMINUS", "AND", "OR", "NOT", "LESS", "LESSEQ", "GREATER", "GREATEREQ", "EQUAL", "NEQUAL", "USERDEFINED"};
          modelica_metatype tmpMeta42;
          
          /* Pattern matching succeeded */
          tmp40 = enum_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), tmp41, ((modelica_integer) 0), 1 /* true */);
          tmpMeta42 = stringAppend(_OMC_LIT79,tmp40);
          omc_Error_addInternalError(threadData, tmpMeta42, _OMC_LIT80);
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
  _cl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cl;
}

DLLDirection
modelica_string omc_NFOperator_sizeClassificationString(threadData_t *threadData, modelica_integer _scl)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_scl;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT81;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT82;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT83;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT84;
          goto tmp3_done;
        }
        case 4: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT85;
          goto tmp3_done;
        }
        case 5: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT86;
          goto tmp3_done;
        }
        case 6: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT87;
          goto tmp3_done;
        }
        case 7: {
          if (8 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT88;
          goto tmp3_done;
        }
        case 8: {
          if (9 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT89;
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
modelica_metatype boxptr_NFOperator_sizeClassificationString(threadData_t *threadData, modelica_metatype _scl)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_scl);
  _str = omc_NFOperator_sizeClassificationString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_NFOperator_mathClassificationString(threadData_t *threadData, modelica_integer _mcl)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_mcl;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT90;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT91;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT92;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT93;
          goto tmp3_done;
        }
        case 4: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT94;
          goto tmp3_done;
        }
        case 5: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT95;
          goto tmp3_done;
        }
        case 6: {
          if (7 != tmp4_1) goto tmp3_end;
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NFOperator_mathClassificationString(threadData_t *threadData, modelica_metatype _mcl)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_mcl);
  _str = omc_NFOperator_mathClassificationString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_NFOperator_classificationString(threadData_t *threadData, modelica_metatype _cla)
{
  modelica_string _str = NULL;
  modelica_integer _mcl;
  modelica_integer _scl;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _mcl has no default value.
  // _scl has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _cla;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _mcl = tmp3  /* pattern as ty=enumeration(ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, POWER, LOGICAL, RELATION) */;
  _scl = tmp5  /* pattern as ty=enumeration(SCALAR, ELEMENT_WISE, ARRAY_SCALAR, SCALAR_ARRAY, MATRIX, VECTOR_MATRIX, MATRIX_VECTOR, LOGICAL, RELATION) */;

  tmpMeta6 = stringAppend(omc_NFOperator_mathClassificationString(threadData, (modelica_integer)_mcl),omc_NFOperator_sizeClassificationString(threadData, (modelica_integer)_scl));
  _str = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFOperator_mathSymbol(threadData_t *threadData, modelica_integer _mcl)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_mcl;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT97;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT98;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT99;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT100;
          goto tmp3_done;
        }
        case 4: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT101;
          goto tmp3_done;
        }
        case 5: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT102;
          goto tmp3_done;
        }
        case 6: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT103;
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
modelica_metatype boxptr_NFOperator_mathSymbol(threadData_t *threadData, modelica_metatype _mcl)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_mcl);
  _str = omc_NFOperator_mathSymbol(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_boolean omc_NFOperator_isElementWise(threadData_t *threadData, modelica_metatype _op)
{
  modelica_boolean _ew;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ew has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (6 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (7 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (8 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (9 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (10 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          
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
  _ew = tmp1;
  _return: OMC_LABEL_UNUSED
  return _ew;
}
modelica_metatype boxptr_NFOperator_isElementWise(threadData_t *threadData, modelica_metatype _op)
{
  modelica_boolean _ew;
  modelica_metatype out_ew;
  _ew = omc_NFOperator_isElementWise(threadData, _op);
  out_ew = mmc_mk_icon(_ew);
  return out_ew;
}

DLLDirection
modelica_metatype omc_NFOperator_stripEW(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fop)
{
  modelica_metatype _op = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _op = __omcQ_24in_5Fop;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_integer tmp5;
          modelica_metatype tmpMeta6;
          tmp5 = mmc_unbox_integer(tmp3_1);
          if (6 != tmp5) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_op), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = mmc_mk_integer(1);
          _op = tmpMeta6;
          goto tmp2_done;
        }
        case 1: {
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          tmp7 = mmc_unbox_integer(tmp3_1);
          if (7 != tmp7) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_op), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = mmc_mk_integer(2);
          _op = tmpMeta8;
          goto tmp2_done;
        }
        case 2: {
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          tmp9 = mmc_unbox_integer(tmp3_1);
          if (8 != tmp9) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_op), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = mmc_mk_integer(3);
          _op = tmpMeta10;
          goto tmp2_done;
        }
        case 3: {
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          tmp11 = mmc_unbox_integer(tmp3_1);
          if (9 != tmp11) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_op), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = mmc_mk_integer(4);
          _op = tmpMeta12;
          goto tmp2_done;
        }
        case 4: {
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          tmp13 = mmc_unbox_integer(tmp3_1);
          if (10 != tmp13) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_op), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = mmc_mk_integer(5);
          _op = tmpMeta14;
          goto tmp2_done;
        }
        case 5: {
          
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
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeArrayScalar(threadData_t *threadData, modelica_metatype _ty, modelica_integer _op)
{
  modelica_metatype _outOp = NULL;
  modelica_integer _o;
  modelica_integer tmp1 = 0;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOp has no default value.
  // _o has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_op;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 12;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 14;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 16;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 22;
          goto tmp3_done;
        }
        case 4: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 24;
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
  _o = tmp1;

  tmpMeta6 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer((modelica_integer)_o));
  _outOp = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _outOp;
}
modelica_metatype boxptr_NFOperator_makeArrayScalar(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _op)
{
  modelica_integer tmp1;
  modelica_metatype _outOp = NULL;
  tmp1 = mmc_unbox_integer(_op);
  _outOp = omc_NFOperator_makeArrayScalar(threadData, _ty, tmp1);
  /* skip box _outOp; NFOperator */
  return _outOp;
}

DLLDirection
modelica_metatype omc_NFOperator_makeScalarArray(threadData_t *threadData, modelica_metatype _ty, modelica_integer _op)
{
  modelica_metatype _outOp = NULL;
  modelica_integer _o;
  modelica_integer tmp1 = 0;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOp has no default value.
  // _o has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_op;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 11;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 13;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 15;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 21;
          goto tmp3_done;
        }
        case 4: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 23;
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
  _o = tmp1;

  tmpMeta6 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer((modelica_integer)_o));
  _outOp = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _outOp;
}
modelica_metatype boxptr_NFOperator_makeScalarArray(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _op)
{
  modelica_integer tmp1;
  modelica_metatype _outOp = NULL;
  tmp1 = mmc_unbox_integer(_op);
  _outOp = omc_NFOperator_makeScalarArray(threadData, _ty, tmp1);
  /* skip box _outOp; NFOperator */
  return _outOp;
}

DLLDirection
modelica_metatype omc_NFOperator_makeNotEqual(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(35));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeEqual(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(34));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeGreaterEq(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(33));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeGreater(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(32));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeLessEq(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(31));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeLess(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(30));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeNot(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(29));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeOr(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(28));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeAnd(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(27));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeUMinus(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(26));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeDivEW(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(9));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeMulEW(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(8));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeSubEW(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(7));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeAddEW(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(6));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makePow(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(5));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeDiv(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(4));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeMul(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(3));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeSub(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(2));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_makeAdd(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(1));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_boolean omc_NFOperator_isNonAssociative(threadData_t *threadData, modelica_metatype _op)
{
  modelica_boolean _isNonAssociative;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isNonAssociative has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (5 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (10 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (23 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (24 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (25 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          
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
  _isNonAssociative = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isNonAssociative;
}
modelica_metatype boxptr_NFOperator_isNonAssociative(threadData_t *threadData, modelica_metatype _op)
{
  modelica_boolean _isNonAssociative;
  modelica_metatype out_isNonAssociative;
  _isNonAssociative = omc_NFOperator_isNonAssociative(threadData, _op);
  out_isNonAssociative = mmc_mk_icon(_isNonAssociative);
  return out_isNonAssociative;
}

DLLDirection
modelica_boolean omc_NFOperator_isAssociative(threadData_t *threadData, modelica_metatype _op)
{
  modelica_boolean _isAssociative;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isAssociative has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (1 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (6 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (8 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _isAssociative = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isAssociative;
}
modelica_metatype boxptr_NFOperator_isAssociative(threadData_t *threadData, modelica_metatype _op)
{
  modelica_boolean _isAssociative;
  modelica_metatype out_isAssociative;
  _isAssociative = omc_NFOperator_isAssociative(threadData, _op);
  out_isAssociative = mmc_mk_icon(_isAssociative);
  return out_isAssociative;
}

DLLDirection
modelica_integer omc_NFOperator_priority(threadData_t *threadData, modelica_metatype _op, modelica_boolean _lhs)
{
  modelica_integer _priority;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _priority has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 28; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (1 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 5):((modelica_integer) 6));
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (2 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (3 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (4 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (5 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 5: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp4_1);
          if (6 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 5):((modelica_integer) 6));
          goto tmp3_done;
        }
        case 6: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp4_1);
          if (7 != tmp12) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
          goto tmp3_done;
        }
        case 7: {
          modelica_integer tmp13;
          tmp13 = mmc_unbox_integer(tmp4_1);
          if (8 != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 2):((modelica_integer) 3));
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp14;
          tmp14 = mmc_unbox_integer(tmp4_1);
          if (9 != tmp14) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 9: {
          modelica_integer tmp15;
          tmp15 = mmc_unbox_integer(tmp4_1);
          if (10 != tmp15) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 10: {
          modelica_integer tmp16;
          tmp16 = mmc_unbox_integer(tmp4_1);
          if (11 != tmp16) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 5):((modelica_integer) 6));
          goto tmp3_done;
        }
        case 11: {
          modelica_integer tmp17;
          tmp17 = mmc_unbox_integer(tmp4_1);
          if (12 != tmp17) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 5):((modelica_integer) 6));
          goto tmp3_done;
        }
        case 12: {
          modelica_integer tmp18;
          tmp18 = mmc_unbox_integer(tmp4_1);
          if (13 != tmp18) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
          goto tmp3_done;
        }
        case 13: {
          modelica_integer tmp19;
          tmp19 = mmc_unbox_integer(tmp4_1);
          if (14 != tmp19) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
          goto tmp3_done;
        }
        case 14: {
          modelica_integer tmp20;
          tmp20 = mmc_unbox_integer(tmp4_1);
          if (15 != tmp20) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 2):((modelica_integer) 3));
          goto tmp3_done;
        }
        case 15: {
          modelica_integer tmp21;
          tmp21 = mmc_unbox_integer(tmp4_1);
          if (16 != tmp21) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 2):((modelica_integer) 3));
          goto tmp3_done;
        }
        case 16: {
          modelica_integer tmp22;
          tmp22 = mmc_unbox_integer(tmp4_1);
          if (17 != tmp22) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 2):((modelica_integer) 3));
          goto tmp3_done;
        }
        case 17: {
          modelica_integer tmp23;
          tmp23 = mmc_unbox_integer(tmp4_1);
          if (18 != tmp23) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 2):((modelica_integer) 3));
          goto tmp3_done;
        }
        case 18: {
          modelica_integer tmp24;
          tmp24 = mmc_unbox_integer(tmp4_1);
          if (19 != tmp24) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 2):((modelica_integer) 3));
          goto tmp3_done;
        }
        case 19: {
          modelica_integer tmp25;
          tmp25 = mmc_unbox_integer(tmp4_1);
          if (20 != tmp25) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (_lhs?((modelica_integer) 2):((modelica_integer) 3));
          goto tmp3_done;
        }
        case 20: {
          modelica_integer tmp26;
          tmp26 = mmc_unbox_integer(tmp4_1);
          if (21 != tmp26) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 21: {
          modelica_integer tmp27;
          tmp27 = mmc_unbox_integer(tmp4_1);
          if (22 != tmp27) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 22: {
          modelica_integer tmp28;
          tmp28 = mmc_unbox_integer(tmp4_1);
          if (23 != tmp28) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 23: {
          modelica_integer tmp29;
          tmp29 = mmc_unbox_integer(tmp4_1);
          if (24 != tmp29) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 24: {
          modelica_integer tmp30;
          tmp30 = mmc_unbox_integer(tmp4_1);
          if (25 != tmp30) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 25: {
          modelica_integer tmp31;
          tmp31 = mmc_unbox_integer(tmp4_1);
          if (27 != tmp31) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 8);
          goto tmp3_done;
        }
        case 26: {
          modelica_integer tmp32;
          tmp32 = mmc_unbox_integer(tmp4_1);
          if (28 != tmp32) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 9);
          goto tmp3_done;
        }
        case 27: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _priority = tmp1;
  _return: OMC_LABEL_UNUSED
  return _priority;
}
modelica_metatype boxptr_NFOperator_priority(threadData_t *threadData, modelica_metatype _op, modelica_metatype _lhs)
{
  modelica_integer tmp1;
  modelica_integer _priority;
  modelica_metatype out_priority;
  tmp1 = mmc_unbox_integer(_lhs);
  _priority = omc_NFOperator_priority(threadData, _op, tmp1);
  out_priority = mmc_mk_icon(_priority);
  return out_priority;
}

DLLDirection
modelica_string omc_NFOperator_symbol(threadData_t *threadData, modelica_metatype _op, modelica_string _spacing)
{
  modelica_string _symbol = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _symbol has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 36; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (1 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT97;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (2 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT98;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (3 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT99;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (4 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT100;
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (5 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT101;
          goto tmp3_done;
        }
        case 5: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp4_1);
          if (6 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT105;
          goto tmp3_done;
        }
        case 6: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp4_1);
          if (7 != tmp12) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT106;
          goto tmp3_done;
        }
        case 7: {
          modelica_integer tmp13;
          tmp13 = mmc_unbox_integer(tmp4_1);
          if (8 != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT107;
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp14;
          tmp14 = mmc_unbox_integer(tmp4_1);
          if (9 != tmp14) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 9: {
          modelica_integer tmp15;
          tmp15 = mmc_unbox_integer(tmp4_1);
          if (10 != tmp15) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 10: {
          modelica_integer tmp16;
          tmp16 = mmc_unbox_integer(tmp4_1);
          if (11 != tmp16) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT105;
          goto tmp3_done;
        }
        case 11: {
          modelica_integer tmp17;
          tmp17 = mmc_unbox_integer(tmp4_1);
          if (12 != tmp17) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT105;
          goto tmp3_done;
        }
        case 12: {
          modelica_integer tmp18;
          tmp18 = mmc_unbox_integer(tmp4_1);
          if (13 != tmp18) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT106;
          goto tmp3_done;
        }
        case 13: {
          modelica_integer tmp19;
          tmp19 = mmc_unbox_integer(tmp4_1);
          if (14 != tmp19) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT106;
          goto tmp3_done;
        }
        case 14: {
          modelica_integer tmp20;
          tmp20 = mmc_unbox_integer(tmp4_1);
          if (15 != tmp20) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT99;
          goto tmp3_done;
        }
        case 15: {
          modelica_integer tmp21;
          tmp21 = mmc_unbox_integer(tmp4_1);
          if (16 != tmp21) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT107;
          goto tmp3_done;
        }
        case 16: {
          modelica_integer tmp22;
          tmp22 = mmc_unbox_integer(tmp4_1);
          if (17 != tmp22) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT99;
          goto tmp3_done;
        }
        case 17: {
          modelica_integer tmp23;
          tmp23 = mmc_unbox_integer(tmp4_1);
          if (18 != tmp23) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT99;
          goto tmp3_done;
        }
        case 18: {
          modelica_integer tmp24;
          tmp24 = mmc_unbox_integer(tmp4_1);
          if (19 != tmp24) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT99;
          goto tmp3_done;
        }
        case 19: {
          modelica_integer tmp25;
          tmp25 = mmc_unbox_integer(tmp4_1);
          if (20 != tmp25) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT99;
          goto tmp3_done;
        }
        case 20: {
          modelica_integer tmp26;
          tmp26 = mmc_unbox_integer(tmp4_1);
          if (21 != tmp26) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 21: {
          modelica_integer tmp27;
          tmp27 = mmc_unbox_integer(tmp4_1);
          if (22 != tmp27) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT100;
          goto tmp3_done;
        }
        case 22: {
          modelica_integer tmp28;
          tmp28 = mmc_unbox_integer(tmp4_1);
          if (23 != tmp28) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 23: {
          modelica_integer tmp29;
          tmp29 = mmc_unbox_integer(tmp4_1);
          if (24 != tmp29) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 24: {
          modelica_integer tmp30;
          tmp30 = mmc_unbox_integer(tmp4_1);
          if (25 != tmp30) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT101;
          goto tmp3_done;
        }
        case 25: {
          modelica_integer tmp31;
          tmp31 = mmc_unbox_integer(tmp4_1);
          if (26 != tmp31) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT98;
          goto tmp3_done;
        }
        case 26: {
          modelica_integer tmp32;
          tmp32 = mmc_unbox_integer(tmp4_1);
          if (27 != tmp32) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT110;
          goto tmp3_done;
        }
        case 27: {
          modelica_integer tmp33;
          tmp33 = mmc_unbox_integer(tmp4_1);
          if (28 != tmp33) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT111;
          goto tmp3_done;
        }
        case 28: {
          modelica_integer tmp34;
          tmp34 = mmc_unbox_integer(tmp4_1);
          if (29 != tmp34) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT112;
          goto tmp3_done;
        }
        case 29: {
          modelica_integer tmp35;
          tmp35 = mmc_unbox_integer(tmp4_1);
          if (30 != tmp35) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT113;
          goto tmp3_done;
        }
        case 30: {
          modelica_integer tmp36;
          tmp36 = mmc_unbox_integer(tmp4_1);
          if (31 != tmp36) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT114;
          goto tmp3_done;
        }
        case 31: {
          modelica_integer tmp37;
          tmp37 = mmc_unbox_integer(tmp4_1);
          if (32 != tmp37) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT115;
          goto tmp3_done;
        }
        case 32: {
          modelica_integer tmp38;
          tmp38 = mmc_unbox_integer(tmp4_1);
          if (33 != tmp38) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT116;
          goto tmp3_done;
        }
        case 33: {
          modelica_integer tmp39;
          tmp39 = mmc_unbox_integer(tmp4_1);
          if (34 != tmp39) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT117;
          goto tmp3_done;
        }
        case 34: {
          modelica_integer tmp40;
          tmp40 = mmc_unbox_integer(tmp4_1);
          if (35 != tmp40) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT118;
          goto tmp3_done;
        }
        case 35: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT119, _OMC_LIT120);
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
  _symbol = tmp1;

  tmpMeta41 = stringAppend(_spacing,_symbol);
  tmpMeta42 = stringAppend(tmpMeta41,_spacing);
  _symbol = tmpMeta42;
  _return: OMC_LABEL_UNUSED
  return _symbol;
}

DLLDirection
modelica_metatype omc_NFOperator_unlift(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fop)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _op = __omcQ_24in_5Fop;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_op), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFType_unliftArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_scalarize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fop)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _op = __omcQ_24in_5Fop;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_op), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_setType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype __omcQ_24in_5Fop)
{
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _op = __omcQ_24in_5Fop;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_op), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = _ty;
  _op = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _op;
}

DLLDirection
modelica_metatype omc_NFOperator_typeOf(threadData_t *threadData, modelica_metatype _op)
{
  modelica_metatype _ty = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2)));
  _return: OMC_LABEL_UNUSED
  return _ty;
}

DLLDirection
modelica_metatype omc_NFOperator_toDAE(threadData_t *threadData, modelica_metatype _op, modelica_boolean *out_swapArguments, modelica_boolean *out_negate)
{
  modelica_metatype _daeOp = NULL;
  modelica_boolean _swapArguments;
  modelica_boolean _negate;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeOp has no default value.
  _swapArguments = 0 /* false */;
  _negate = 0 /* false */;
  // _ty has no default value.
  _ty = omc_NFType_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 1 /* true */);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 33; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (1 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp9 = (modelica_boolean)omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
          if(tmp9)
          {
            tmpMeta7 = mmc_mk_box2(10, &DAE_Operator_ADD__ARR__desc, _ty);
            tmpMeta10 = tmpMeta7;
          }
          else
          {
            tmpMeta8 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
            tmpMeta10 = tmpMeta8;
          }
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          tmp11 = mmc_unbox_integer(tmp4_1);
          if (2 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp14 = (modelica_boolean)omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
          if(tmp14)
          {
            tmpMeta12 = mmc_mk_box2(11, &DAE_Operator_SUB__ARR__desc, _ty);
            tmpMeta15 = tmpMeta12;
          }
          else
          {
            tmpMeta13 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
            tmpMeta15 = tmpMeta13;
          }
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          tmp16 = mmc_unbox_integer(tmp4_1);
          if (3 != tmp16) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp19 = (modelica_boolean)omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
          if(tmp19)
          {
            tmpMeta17 = mmc_mk_box2(12, &DAE_Operator_MUL__ARR__desc, _ty);
            tmpMeta20 = tmpMeta17;
          }
          else
          {
            tmpMeta18 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
            tmpMeta20 = tmpMeta18;
          }
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_boolean tmp24;
          modelica_metatype tmpMeta25;
          tmp21 = mmc_unbox_integer(tmp4_1);
          if (4 != tmp21) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp24 = (modelica_boolean)omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
          if(tmp24)
          {
            tmpMeta22 = mmc_mk_box2(13, &DAE_Operator_DIV__ARR__desc, _ty);
            tmpMeta25 = tmpMeta22;
          }
          else
          {
            tmpMeta23 = mmc_mk_box2(6, &DAE_Operator_DIV__desc, _ty);
            tmpMeta25 = tmpMeta23;
          }
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          modelica_metatype tmpMeta30;
          tmp26 = mmc_unbox_integer(tmp4_1);
          if (5 != tmp26) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp29 = (modelica_boolean)omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
          if(tmp29)
          {
            tmpMeta27 = mmc_mk_box2(24, &DAE_Operator_POW__ARR2__desc, _ty);
            tmpMeta30 = tmpMeta27;
          }
          else
          {
            tmpMeta28 = mmc_mk_box2(7, &DAE_Operator_POW__desc, _ty);
            tmpMeta30 = tmpMeta28;
          }
          tmpMeta1 = tmpMeta30;
          goto tmp3_done;
        }
        case 5: {
          modelica_integer tmp31;
          modelica_metatype tmpMeta32;
          tmp31 = mmc_unbox_integer(tmp4_1);
          if (11 != tmp31) goto tmp3_end;
          /* Pattern matching succeeded */
          _swapArguments = 1 /* true */;
          tmpMeta32 = mmc_mk_box2(15, &DAE_Operator_ADD__ARRAY__SCALAR__desc, _ty);
          tmpMeta1 = tmpMeta32;
          goto tmp3_done;
        }
        case 6: {
          modelica_integer tmp33;
          modelica_metatype tmpMeta34;
          tmp33 = mmc_unbox_integer(tmp4_1);
          if (12 != tmp33) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta34 = mmc_mk_box2(15, &DAE_Operator_ADD__ARRAY__SCALAR__desc, _ty);
          tmpMeta1 = tmpMeta34;
          goto tmp3_done;
        }
        case 7: {
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          tmp35 = mmc_unbox_integer(tmp4_1);
          if (13 != tmp35) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta36 = mmc_mk_box2(16, &DAE_Operator_SUB__SCALAR__ARRAY__desc, _ty);
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          tmp37 = mmc_unbox_integer(tmp4_1);
          if (14 != tmp37) goto tmp3_end;
          /* Pattern matching succeeded */
          _negate = 1 /* true */;
          tmpMeta38 = mmc_mk_box2(15, &DAE_Operator_ADD__ARRAY__SCALAR__desc, _ty);
          tmpMeta1 = tmpMeta38;
          goto tmp3_done;
        }
        case 9: {
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
          tmp39 = mmc_unbox_integer(tmp4_1);
          if (15 != tmp39) goto tmp3_end;
          /* Pattern matching succeeded */
          _swapArguments = 1 /* true */;
          tmpMeta40 = mmc_mk_box2(14, &DAE_Operator_MUL__ARRAY__SCALAR__desc, _ty);
          tmpMeta1 = tmpMeta40;
          goto tmp3_done;
        }
        case 10: {
          modelica_integer tmp41;
          modelica_metatype tmpMeta42;
          tmp41 = mmc_unbox_integer(tmp4_1);
          if (16 != tmp41) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta42 = mmc_mk_box2(14, &DAE_Operator_MUL__ARRAY__SCALAR__desc, _ty);
          tmpMeta1 = tmpMeta42;
          goto tmp3_done;
        }
        case 11: {
          modelica_integer tmp43;
          modelica_metatype tmpMeta44;
          tmp43 = mmc_unbox_integer(tmp4_1);
          if (17 != tmp43) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta44 = mmc_mk_box2(18, &DAE_Operator_MUL__MATRIX__PRODUCT__desc, _ty);
          tmpMeta1 = tmpMeta44;
          goto tmp3_done;
        }
        case 12: {
          modelica_integer tmp45;
          modelica_metatype tmpMeta46;
          tmp45 = mmc_unbox_integer(tmp4_1);
          if (18 != tmp45) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta46 = mmc_mk_box2(18, &DAE_Operator_MUL__MATRIX__PRODUCT__desc, _ty);
          tmpMeta1 = tmpMeta46;
          goto tmp3_done;
        }
        case 13: {
          modelica_integer tmp47;
          modelica_metatype tmpMeta48;
          tmp47 = mmc_unbox_integer(tmp4_1);
          if (19 != tmp47) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta48 = mmc_mk_box2(17, &DAE_Operator_MUL__SCALAR__PRODUCT__desc, _ty);
          tmpMeta1 = tmpMeta48;
          goto tmp3_done;
        }
        case 14: {
          modelica_integer tmp49;
          modelica_metatype tmpMeta50;
          tmp49 = mmc_unbox_integer(tmp4_1);
          if (6 != tmp49) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta50 = mmc_mk_box2(10, &DAE_Operator_ADD__ARR__desc, _ty);
          tmpMeta1 = tmpMeta50;
          goto tmp3_done;
        }
        case 15: {
          modelica_integer tmp51;
          modelica_metatype tmpMeta52;
          tmp51 = mmc_unbox_integer(tmp4_1);
          if (7 != tmp51) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta52 = mmc_mk_box2(11, &DAE_Operator_SUB__ARR__desc, _ty);
          tmpMeta1 = tmpMeta52;
          goto tmp3_done;
        }
        case 16: {
          modelica_integer tmp53;
          modelica_metatype tmpMeta54;
          tmp53 = mmc_unbox_integer(tmp4_1);
          if (20 != tmp53) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta54 = mmc_mk_box2(18, &DAE_Operator_MUL__MATRIX__PRODUCT__desc, _ty);
          tmpMeta1 = tmpMeta54;
          goto tmp3_done;
        }
        case 17: {
          modelica_integer tmp55;
          modelica_metatype tmpMeta56;
          tmp55 = mmc_unbox_integer(tmp4_1);
          if (21 != tmp55) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta56 = mmc_mk_box2(20, &DAE_Operator_DIV__SCALAR__ARRAY__desc, _ty);
          tmpMeta1 = tmpMeta56;
          goto tmp3_done;
        }
        case 18: {
          modelica_integer tmp57;
          modelica_metatype tmpMeta58;
          tmp57 = mmc_unbox_integer(tmp4_1);
          if (22 != tmp57) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta58 = mmc_mk_box2(19, &DAE_Operator_DIV__ARRAY__SCALAR__desc, _ty);
          tmpMeta1 = tmpMeta58;
          goto tmp3_done;
        }
        case 19: {
          modelica_integer tmp59;
          modelica_metatype tmpMeta60;
          tmp59 = mmc_unbox_integer(tmp4_1);
          if (23 != tmp59) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta60 = mmc_mk_box2(22, &DAE_Operator_POW__SCALAR__ARRAY__desc, _ty);
          tmpMeta1 = tmpMeta60;
          goto tmp3_done;
        }
        case 20: {
          modelica_integer tmp61;
          modelica_metatype tmpMeta62;
          tmp61 = mmc_unbox_integer(tmp4_1);
          if (24 != tmp61) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta62 = mmc_mk_box2(21, &DAE_Operator_POW__ARRAY__SCALAR__desc, _ty);
          tmpMeta1 = tmpMeta62;
          goto tmp3_done;
        }
        case 21: {
          modelica_integer tmp63;
          modelica_metatype tmpMeta64;
          tmp63 = mmc_unbox_integer(tmp4_1);
          if (25 != tmp63) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta64 = mmc_mk_box2(23, &DAE_Operator_POW__ARR__desc, _ty);
          tmpMeta1 = tmpMeta64;
          goto tmp3_done;
        }
        case 22: {
          modelica_integer tmp65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_boolean tmp68;
          modelica_metatype tmpMeta69;
          tmp65 = mmc_unbox_integer(tmp4_1);
          if (26 != tmp65) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp68 = (modelica_boolean)omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
          if(tmp68)
          {
            tmpMeta66 = mmc_mk_box2(9, &DAE_Operator_UMINUS__ARR__desc, _ty);
            tmpMeta69 = tmpMeta66;
          }
          else
          {
            tmpMeta67 = mmc_mk_box2(8, &DAE_Operator_UMINUS__desc, _ty);
            tmpMeta69 = tmpMeta67;
          }
          tmpMeta1 = tmpMeta69;
          goto tmp3_done;
        }
        case 23: {
          modelica_integer tmp70;
          modelica_metatype tmpMeta71;
          tmp70 = mmc_unbox_integer(tmp4_1);
          if (27 != tmp70) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta71 = mmc_mk_box2(25, &DAE_Operator_AND__desc, _ty);
          tmpMeta1 = tmpMeta71;
          goto tmp3_done;
        }
        case 24: {
          modelica_integer tmp72;
          modelica_metatype tmpMeta73;
          tmp72 = mmc_unbox_integer(tmp4_1);
          if (28 != tmp72) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta73 = mmc_mk_box2(26, &DAE_Operator_OR__desc, _ty);
          tmpMeta1 = tmpMeta73;
          goto tmp3_done;
        }
        case 25: {
          modelica_integer tmp74;
          modelica_metatype tmpMeta75;
          tmp74 = mmc_unbox_integer(tmp4_1);
          if (29 != tmp74) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta75 = mmc_mk_box2(27, &DAE_Operator_NOT__desc, _ty);
          tmpMeta1 = tmpMeta75;
          goto tmp3_done;
        }
        case 26: {
          modelica_integer tmp76;
          modelica_metatype tmpMeta77;
          tmp76 = mmc_unbox_integer(tmp4_1);
          if (30 != tmp76) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta77 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _ty);
          tmpMeta1 = tmpMeta77;
          goto tmp3_done;
        }
        case 27: {
          modelica_integer tmp78;
          modelica_metatype tmpMeta79;
          tmp78 = mmc_unbox_integer(tmp4_1);
          if (31 != tmp78) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta79 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _ty);
          tmpMeta1 = tmpMeta79;
          goto tmp3_done;
        }
        case 28: {
          modelica_integer tmp80;
          modelica_metatype tmpMeta81;
          tmp80 = mmc_unbox_integer(tmp4_1);
          if (32 != tmp80) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta81 = mmc_mk_box2(30, &DAE_Operator_GREATER__desc, _ty);
          tmpMeta1 = tmpMeta81;
          goto tmp3_done;
        }
        case 29: {
          modelica_integer tmp82;
          modelica_metatype tmpMeta83;
          tmp82 = mmc_unbox_integer(tmp4_1);
          if (33 != tmp82) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta83 = mmc_mk_box2(31, &DAE_Operator_GREATEREQ__desc, _ty);
          tmpMeta1 = tmpMeta83;
          goto tmp3_done;
        }
        case 30: {
          modelica_integer tmp84;
          modelica_metatype tmpMeta85;
          tmp84 = mmc_unbox_integer(tmp4_1);
          if (34 != tmp84) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta85 = mmc_mk_box2(32, &DAE_Operator_EQUAL__desc, _ty);
          tmpMeta1 = tmpMeta85;
          goto tmp3_done;
        }
        case 31: {
          modelica_integer tmp86;
          modelica_metatype tmpMeta87;
          tmp86 = mmc_unbox_integer(tmp4_1);
          if (35 != tmp86) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta87 = mmc_mk_box2(33, &DAE_Operator_NEQUAL__desc, _ty);
          tmpMeta1 = tmpMeta87;
          goto tmp3_done;
        }
        case 32: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT121, _OMC_LIT122);
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
  _daeOp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_swapArguments) { *out_swapArguments = _swapArguments; }
  if (out_negate) { *out_negate = _negate; }
  return _daeOp;
}
modelica_metatype boxptr_NFOperator_toDAE(threadData_t *threadData, modelica_metatype _op, modelica_metatype *out_swapArguments, modelica_metatype *out_negate)
{
  modelica_boolean _swapArguments;
  modelica_boolean _negate;
  modelica_metatype _daeOp = NULL;
  _daeOp = omc_NFOperator_toDAE(threadData, _op, &_swapArguments, &_negate);
  /* skip box _daeOp; DAE.Operator */
  if (out_swapArguments) { *out_swapArguments = mmc_mk_icon(_swapArguments); }
  if (out_negate) { *out_negate = mmc_mk_icon(_negate); }
  return _daeOp;
}

DLLDirection
modelica_metatype omc_NFOperator_toAbsyn(threadData_t *threadData, modelica_metatype _op)
{
  modelica_metatype _aop = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _aop has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 35; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (1 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))))?_OMC_LIT123:_OMC_LIT124);
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (2 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))))?_OMC_LIT125:_OMC_LIT126);
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (3 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))))?_OMC_LIT127:_OMC_LIT128);
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (4 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))))?_OMC_LIT129:_OMC_LIT130);
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (5 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))))?_OMC_LIT131:_OMC_LIT132);
          goto tmp3_done;
        }
        case 5: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp4_1);
          if (6 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT123;
          goto tmp3_done;
        }
        case 6: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp4_1);
          if (7 != tmp12) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT125;
          goto tmp3_done;
        }
        case 7: {
          modelica_integer tmp13;
          tmp13 = mmc_unbox_integer(tmp4_1);
          if (8 != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT127;
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp14;
          tmp14 = mmc_unbox_integer(tmp4_1);
          if (9 != tmp14) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT129;
          goto tmp3_done;
        }
        case 9: {
          modelica_integer tmp15;
          tmp15 = mmc_unbox_integer(tmp4_1);
          if (10 != tmp15) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT131;
          goto tmp3_done;
        }
        case 10: {
          modelica_integer tmp16;
          tmp16 = mmc_unbox_integer(tmp4_1);
          if (11 != tmp16) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT124;
          goto tmp3_done;
        }
        case 11: {
          modelica_integer tmp17;
          tmp17 = mmc_unbox_integer(tmp4_1);
          if (12 != tmp17) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT124;
          goto tmp3_done;
        }
        case 12: {
          modelica_integer tmp18;
          tmp18 = mmc_unbox_integer(tmp4_1);
          if (13 != tmp18) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT126;
          goto tmp3_done;
        }
        case 13: {
          modelica_integer tmp19;
          tmp19 = mmc_unbox_integer(tmp4_1);
          if (14 != tmp19) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT126;
          goto tmp3_done;
        }
        case 14: {
          modelica_integer tmp20;
          tmp20 = mmc_unbox_integer(tmp4_1);
          if (15 != tmp20) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT128;
          goto tmp3_done;
        }
        case 15: {
          modelica_integer tmp21;
          tmp21 = mmc_unbox_integer(tmp4_1);
          if (16 != tmp21) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT128;
          goto tmp3_done;
        }
        case 16: {
          modelica_integer tmp22;
          tmp22 = mmc_unbox_integer(tmp4_1);
          if (17 != tmp22) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT128;
          goto tmp3_done;
        }
        case 17: {
          modelica_integer tmp23;
          tmp23 = mmc_unbox_integer(tmp4_1);
          if (18 != tmp23) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT128;
          goto tmp3_done;
        }
        case 18: {
          modelica_integer tmp24;
          tmp24 = mmc_unbox_integer(tmp4_1);
          if (19 != tmp24) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT128;
          goto tmp3_done;
        }
        case 19: {
          modelica_integer tmp25;
          tmp25 = mmc_unbox_integer(tmp4_1);
          if (20 != tmp25) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT128;
          goto tmp3_done;
        }
        case 20: {
          modelica_integer tmp26;
          tmp26 = mmc_unbox_integer(tmp4_1);
          if (21 != tmp26) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT130;
          goto tmp3_done;
        }
        case 21: {
          modelica_integer tmp27;
          tmp27 = mmc_unbox_integer(tmp4_1);
          if (22 != tmp27) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT130;
          goto tmp3_done;
        }
        case 22: {
          modelica_integer tmp28;
          tmp28 = mmc_unbox_integer(tmp4_1);
          if (23 != tmp28) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT132;
          goto tmp3_done;
        }
        case 23: {
          modelica_integer tmp29;
          tmp29 = mmc_unbox_integer(tmp4_1);
          if (24 != tmp29) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT132;
          goto tmp3_done;
        }
        case 24: {
          modelica_integer tmp30;
          tmp30 = mmc_unbox_integer(tmp4_1);
          if (25 != tmp30) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT132;
          goto tmp3_done;
        }
        case 25: {
          modelica_integer tmp31;
          tmp31 = mmc_unbox_integer(tmp4_1);
          if (26 != tmp31) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))))?_OMC_LIT133:_OMC_LIT134);
          goto tmp3_done;
        }
        case 26: {
          modelica_integer tmp32;
          tmp32 = mmc_unbox_integer(tmp4_1);
          if (27 != tmp32) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT135;
          goto tmp3_done;
        }
        case 27: {
          modelica_integer tmp33;
          tmp33 = mmc_unbox_integer(tmp4_1);
          if (28 != tmp33) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT136;
          goto tmp3_done;
        }
        case 28: {
          modelica_integer tmp34;
          tmp34 = mmc_unbox_integer(tmp4_1);
          if (29 != tmp34) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT137;
          goto tmp3_done;
        }
        case 29: {
          modelica_integer tmp35;
          tmp35 = mmc_unbox_integer(tmp4_1);
          if (30 != tmp35) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT138;
          goto tmp3_done;
        }
        case 30: {
          modelica_integer tmp36;
          tmp36 = mmc_unbox_integer(tmp4_1);
          if (31 != tmp36) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT139;
          goto tmp3_done;
        }
        case 31: {
          modelica_integer tmp37;
          tmp37 = mmc_unbox_integer(tmp4_1);
          if (32 != tmp37) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT140;
          goto tmp3_done;
        }
        case 32: {
          modelica_integer tmp38;
          tmp38 = mmc_unbox_integer(tmp4_1);
          if (34 != tmp38) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT141;
          goto tmp3_done;
        }
        case 33: {
          modelica_integer tmp39;
          tmp39 = mmc_unbox_integer(tmp4_1);
          if (35 != tmp39) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT142;
          goto tmp3_done;
        }
        case 34: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT143, _OMC_LIT144);
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
  _aop = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _aop;
}

DLLDirection
modelica_metatype omc_NFOperator_fromAbsyn(threadData_t *threadData, modelica_metatype _inOperator)
{
  modelica_metatype _outOperator = NULL;
  modelica_integer _op;
  modelica_integer tmp1 = 0;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOperator has no default value.
  // _op has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOperator;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 3;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 4;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 5;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = 6;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1 = 7;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = 8;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmp1 = 9;
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmp1 = 10;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = 26;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmp1 = 26;
          goto tmp3_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          tmp1 = 27;
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmp1 = 28;
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmp1 = 29;
          goto tmp3_done;
        }
        case 20: {
          
          /* Pattern matching succeeded */
          tmp1 = 30;
          goto tmp3_done;
        }
        case 21: {
          
          /* Pattern matching succeeded */
          tmp1 = 31;
          goto tmp3_done;
        }
        case 22: {
          
          /* Pattern matching succeeded */
          tmp1 = 32;
          goto tmp3_done;
        }
        case 23: {
          
          /* Pattern matching succeeded */
          tmp1 = 33;
          goto tmp3_done;
        }
        case 24: {
          
          /* Pattern matching succeeded */
          tmp1 = 34;
          goto tmp3_done;
        }
        case 25: {
          
          /* Pattern matching succeeded */
          tmp1 = 35;
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
  _op = tmp1;

  tmpMeta5 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _OMC_LIT145, mmc_mk_integer((modelica_integer)_op));
  _outOperator = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outOperator;
}

DLLDirection
modelica_boolean omc_NFOperator_isScalarProduct(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (19 != tmp6) goto tmp3_end;
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
modelica_metatype boxptr_NFOperator_isScalarProduct(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFOperator_isScalarProduct(threadData, _operator);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFOperator_isRelational(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (30 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (31 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (32 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp4_1);
          if (33 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp4_1);
          if (34 != tmp10) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp4_1);
          if (35 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          
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
modelica_metatype boxptr_NFOperator_isRelational(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFOperator_isRelational(threadData, _operator);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFOperator_isLogical(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (27 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp4_1);
          if (28 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp4_1);
          if (29 != tmp8) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFOperator_isLogical(threadData_t *threadData, modelica_metatype _operator)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFOperator_isLogical(threadData, _operator);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFOperator_repairBinary(threadData_t *threadData, modelica_metatype __omcQ_24in_5Foperator, modelica_metatype _ty1, modelica_metatype _ty2)
{
  modelica_metatype _operator = NULL;
  modelica_integer _mc;
  modelica_integer _sc;
  modelica_metatype _ty = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _operator = __omcQ_24in_5Foperator;
  _mc = omc_NFOperator_getMathClassification(threadData, _operator);
  // _sc has no default value.
  // _ty has no default value.
  
  
  { /* match expression */
    modelica_integer tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = omc_NFOperator_typeRestriction(threadData, _ty1);
    tmp4_2 = omc_NFOperator_typeRestriction(threadData, _ty2);
    {
      modelica_integer _i1;
      modelica_integer _i2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          if (0 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1_c0 = 1;
          tmpMeta[0+1] = _ty1;
          goto tmp3_done;
        }
        case 1: {
          if (0 != tmp4_1) goto tmp3_end;
          
          _i2 = tmp4_2;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_i2 > ((modelica_integer) 0))) goto tmp3_end;
          tmp1_c0 = 4;
          tmpMeta[0+1] = _ty2;
          goto tmp3_done;
        }
        case 2: {
          if (0 != tmp4_2) goto tmp3_end;
          
          _i1 = tmp4_1;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_i1 > ((modelica_integer) 0))) goto tmp3_end;
          tmp1_c0 = 3;
          tmpMeta[0+1] = _ty1;
          goto tmp3_done;
        }
        case 3: {
          if (1 != tmp4_1) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1_c0 = 6;
          tmpMeta[0+1] = _ty2;
          goto tmp3_done;
        }
        case 4: {
          if (2 != tmp4_1) goto tmp3_end;
          if (1 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1_c0 = 7;
          tmpMeta[0+1] = _ty1;
          goto tmp3_done;
        }
        case 5: {
          
          _i1 = tmp4_1;
          _i2 = tmp4_2;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_i1 == _i2)) goto tmp3_end;
          tmp1_c0 = omc_NFOperator_getSizeClassification(threadData, _operator);
          tmpMeta[0+1] = _ty1;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT146,omc_NFType_toString(threadData, _ty1));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT44);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFType_toString(threadData, _ty2));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta8, _OMC_LIT147);
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
  _sc = tmp1_c0;
  _ty = tmpMeta[0+1];

  tmpMeta9 = mmc_mk_box2(0, mmc_mk_integer((modelica_integer)_mc), mmc_mk_integer((modelica_integer)_sc));
  _operator = omc_NFOperator_fromClassification(threadData, tmpMeta9, _ty);
  _return: OMC_LABEL_UNUSED
  return _operator;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFOperator_repairMultary_tplLt(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (mmc_unbox_integer(omc_Util_tuple21(threadData, _tpl1)) < mmc_unbox_integer(omc_Util_tuple21(threadData, _tpl2)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFOperator_repairMultary_tplLt(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFOperator_repairMultary_tplLt(threadData, _tpl1, _tpl2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFOperator_repairMultary(threadData_t *threadData, modelica_metatype __omcQ_24in_5Foperator, modelica_metatype _types)
{
  modelica_metatype _operator = NULL;
  modelica_integer _mc;
  modelica_integer _sc;
  modelica_metatype _lst = NULL;
  modelica_metatype _min_ = NULL;
  modelica_metatype _max_ = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp6_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _operator = __omcQ_24in_5Foperator;
  _mc = omc_NFOperator_getMathClassification(threadData, _operator);
  // _sc has no default value.
  // _lst has no default value.
  // _min_ has no default value.
  // _max_ has no default value.
  // _ty has no default value.
  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar0;
    modelica_integer tmp5;
    modelica_metatype _t_loopVar = 0;
    modelica_metatype _t;
    _t_loopVar = _types;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar1;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_t_loopVar)) {
        _t = MMC_CAR(_t_loopVar);
        _t_loopVar = MMC_CDR(_t_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = mmc_mk_box2(0, mmc_mk_integer(omc_NFOperator_typeRestriction(threadData, _t)), _t);
        __omcQ_24tmpVar0 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar1;
  }
  _lst = tmpMeta1;

  _min_ = omc_List_minElement(threadData, _lst, boxvar_NFOperator_repairMultary_tplLt);

  _max_ = omc_List_maxElement(threadData, _lst, boxvar_NFOperator_repairMultary_tplLt);

  
  
  { /* match expression */
    modelica_metatype tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = _min_;
    tmp9_2 = _max_;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 7; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 1));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          if (0 != tmp12) goto tmp8_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 1));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          if (0 != tmp14) goto tmp8_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 2));
          _ty = tmpMeta15;
          /* Pattern matching succeeded */
          tmp6_c0 = 1;
          tmpMeta[0+1] = _ty;
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 1));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          if (0 != tmp17) goto tmp8_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 2));
          _ty = tmpMeta18;
          /* Pattern matching succeeded */
          tmp6_c0 = 4;
          tmpMeta[0+1] = _ty;
          goto tmp8_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 1));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          if (1 != tmp20) goto tmp8_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 1));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          if (1 != tmp22) goto tmp8_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 2));
          _ty = tmpMeta23;
          /* Pattern matching succeeded */
          tmp6_c0 = 2;
          tmpMeta[0+1] = _ty;
          goto tmp8_done;
        }
        case 3: {
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 1));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          if (1 != tmp25) goto tmp8_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 1));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          if (2 != tmp27) goto tmp8_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 2));
          _ty = tmpMeta28;
          /* Pattern matching succeeded */
          tmp6_c0 = 6;
          tmpMeta[0+1] = _ty;
          goto tmp8_done;
        }
        case 4: {
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 1));
          tmp30 = mmc_unbox_integer(tmpMeta29);
          if (2 != tmp30) goto tmp8_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 1));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          if (2 != tmp32) goto tmp8_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 2));
          _ty = tmpMeta33;
          /* Pattern matching succeeded */
          tmp6_c0 = 2;
          tmpMeta[0+1] = _ty;
          goto tmp8_done;
        }
        case 5: {
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 1));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          if (3 != tmp35) goto tmp8_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 1));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          if (3 != tmp37) goto tmp8_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_2), 2));
          _ty = tmpMeta38;
          /* Pattern matching succeeded */
          tmp6_c0 = 2;
          tmpMeta[0+1] = _ty;
          goto tmp8_done;
        }
        case 6: {
          modelica_metatype tmpMeta39;
          
          /* Pattern matching succeeded */
          tmpMeta39 = stringAppend(_OMC_LIT148,omc_List_toString(threadData, _types, boxvar_NFType_toString, _OMC_LIT149, _OMC_LIT150, _OMC_LIT44, _OMC_LIT151, 1 /* true */, ((modelica_integer) 0)));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta39, _OMC_LIT152);
          goto goto_7;
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
  _sc = tmp6_c0;
  _ty = tmpMeta[0+1];

  tmpMeta40 = mmc_mk_box2(0, mmc_mk_integer((modelica_integer)_mc), mmc_mk_integer((modelica_integer)_sc));
  _operator = omc_NFOperator_fromClassification(threadData, tmpMeta40, _ty);
  _return: OMC_LABEL_UNUSED
  return _operator;
}

DLLDirection
modelica_integer omc_NFOperator_typeRestriction(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  if(omc_NFType_isScalar(threadData, _ty))
  {
    _i = ((modelica_integer) 0);
  }
  else
  {
    if(omc_NFType_isVector(threadData, _ty))
    {
      _i = ((modelica_integer) 1);
    }
    else
    {
      if(omc_NFType_isMatrix(threadData, _ty))
      {
        _i = ((modelica_integer) 2);
      }
      else
      {
        if(omc_NFType_isArray(threadData, _ty))
        {
          _i = ((modelica_integer) 3);
        }
        else
        {
          _i = ((modelica_integer) 4);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_NFOperator_typeRestriction(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NFOperator_typeRestriction(threadData, _ty);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_metatype omc_NFOperator_invert(threadData_t *threadData, modelica_metatype __omcQ_24in_5Foperator)
{
  modelica_metatype _operator = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _operator = __omcQ_24in_5Foperator;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      for (; tmp5 < 23; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_integer tmp7;
          tmp7 = mmc_unbox_integer(tmp5_1);
          if (1 != tmp7) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(2);
          goto tmp4_done;
        }
        case 1: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp5_1);
          if (2 != tmp8) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(1);
          goto tmp4_done;
        }
        case 2: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp5_1);
          if (3 != tmp9) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(4);
          goto tmp4_done;
        }
        case 3: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp5_1);
          if (4 != tmp10) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(3);
          goto tmp4_done;
        }
        case 4: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp5_1);
          if (6 != tmp11) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(7);
          goto tmp4_done;
        }
        case 5: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp5_1);
          if (7 != tmp12) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(6);
          goto tmp4_done;
        }
        case 6: {
          modelica_integer tmp13;
          tmp13 = mmc_unbox_integer(tmp5_1);
          if (8 != tmp13) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(9);
          goto tmp4_done;
        }
        case 7: {
          modelica_integer tmp14;
          tmp14 = mmc_unbox_integer(tmp5_1);
          if (9 != tmp14) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(8);
          goto tmp4_done;
        }
        case 8: {
          modelica_integer tmp15;
          tmp15 = mmc_unbox_integer(tmp5_1);
          if (11 != tmp15) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(13);
          goto tmp4_done;
        }
        case 9: {
          modelica_integer tmp16;
          tmp16 = mmc_unbox_integer(tmp5_1);
          if (12 != tmp16) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(14);
          goto tmp4_done;
        }
        case 10: {
          modelica_integer tmp17;
          tmp17 = mmc_unbox_integer(tmp5_1);
          if (13 != tmp17) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(11);
          goto tmp4_done;
        }
        case 11: {
          modelica_integer tmp18;
          tmp18 = mmc_unbox_integer(tmp5_1);
          if (14 != tmp18) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(12);
          goto tmp4_done;
        }
        case 12: {
          modelica_integer tmp19;
          tmp19 = mmc_unbox_integer(tmp5_1);
          if (15 != tmp19) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(21);
          goto tmp4_done;
        }
        case 13: {
          modelica_integer tmp20;
          tmp20 = mmc_unbox_integer(tmp5_1);
          if (16 != tmp20) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(22);
          goto tmp4_done;
        }
        case 14: {
          modelica_integer tmp21;
          tmp21 = mmc_unbox_integer(tmp5_1);
          if (21 != tmp21) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(15);
          goto tmp4_done;
        }
        case 15: {
          modelica_integer tmp22;
          tmp22 = mmc_unbox_integer(tmp5_1);
          if (22 != tmp22) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(16);
          goto tmp4_done;
        }
        case 16: {
          modelica_integer tmp23;
          tmp23 = mmc_unbox_integer(tmp5_1);
          if (30 != tmp23) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(33);
          goto tmp4_done;
        }
        case 17: {
          modelica_integer tmp24;
          tmp24 = mmc_unbox_integer(tmp5_1);
          if (31 != tmp24) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(32);
          goto tmp4_done;
        }
        case 18: {
          modelica_integer tmp25;
          tmp25 = mmc_unbox_integer(tmp5_1);
          if (32 != tmp25) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(31);
          goto tmp4_done;
        }
        case 19: {
          modelica_integer tmp26;
          tmp26 = mmc_unbox_integer(tmp5_1);
          if (33 != tmp26) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(30);
          goto tmp4_done;
        }
        case 20: {
          modelica_integer tmp27;
          tmp27 = mmc_unbox_integer(tmp5_1);
          if (34 != tmp27) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(34);
          goto tmp4_done;
        }
        case 21: {
          modelica_integer tmp28;
          tmp28 = mmc_unbox_integer(tmp5_1);
          if (35 != tmp28) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = mmc_mk_integer(35);
          goto tmp4_done;
        }
        case 22: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          tmpMeta30 = stringAppend(_OMC_LIT153,omc_NFOperator_symbol(threadData, _operator, _OMC_LIT104));
          tmpMeta29 = mmc_mk_cons(tmpMeta30, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT40, tmpMeta29);
          goto goto_3;
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
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_operator), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _operator = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _operator;
}

DLLDirection
modelica_integer omc_NFOperator_compare(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2)
{
  modelica_integer _comp;
  modelica_integer _o1;
  modelica_integer _o2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  _o1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op1), 3))));
  _o2 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op2), 3))));
  _comp = omc_Util_intCompare(threadData, ((modelica_integer)((modelica_integer)_o1)), ((modelica_integer)((modelica_integer)_o2)));
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_NFOperator_compare(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2)
{
  modelica_integer _comp;
  modelica_metatype out_comp;
  _comp = omc_NFOperator_compare(threadData, _op1, _op2);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

