#include "omc_simulation_settings.h"
#include "NFInstanceAPI.h"
#define _OMC_LIT0_data "dummy"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,5,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "<internal>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,10,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&SCode_Final_NOT__FINAL__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&SCode_Each_NOT__EACH__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,0,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT5,0.0);
#define _OMC_LIT5 MMC_REFREALLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT4,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "choice"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,6,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "baseClass"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,9,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "dims"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,4,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "$kind"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,5,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "extends"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,7,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,7) {&JSON_STRING__desc,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "elements"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,8,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "class"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,5,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,7) {&JSON_STRING__desc,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "name"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,4,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "restriction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,11,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "prefixes"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,8,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "Dialog"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,6,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "choices"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,7,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "choicesAllMatching"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,18,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,1) {_OMC_LIT22,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,2,1) {_OMC_LIT21,_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,1) {_OMC_LIT20,_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,4,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "component"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,9,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,7) {&JSON_STRING__desc,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "condition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,9,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "$type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,5,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "final"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,5,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "each"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,4,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "comment"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,7,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "$value"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,6,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "modifiers"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,9,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "arguments"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,9,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "lhs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,3,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "rhs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,3,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "initialState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,12,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "transition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,10,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "connections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,11,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "initialStates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,13,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "transitions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,11,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "path"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,4,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "shortName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,9,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "imports"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,7,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "args"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,4,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "namedArgs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,9,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,4,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,7) {&JSON_STRING__desc,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "NFInstanceAPI.dumpJSONAnnotationExp2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,36,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "$error"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,6,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "value"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,5,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "annotation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,10,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "constrainedby"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,13,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "partial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,7,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "encapsulated"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,12,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "public"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,6,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "inner"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,5,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "outer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,5,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "replaceable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,11,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "redeclare"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,9,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,9,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "variability"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,11,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "direction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,9,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "output"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,6,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,7) {&JSON_STRING__desc,_OMC_LIT66}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "input"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,5,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,7) {&JSON_STRING__desc,_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "absyn"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,5,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "typed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,5,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "binding"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,7,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "NFInstanceAPI.dumpJSONBinding"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,29,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "source"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,6,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "missing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,7,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "generated"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,9,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "NFInstanceAPI.dumpJSONComponent got unknown component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,54,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "NFInstanceAPI.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,16,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT79_6,0.0);
#define _OMC_LIT79_6 MMC_REFREALLIT(_OMC_LIT_STRUCT79_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT78,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1183)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1184)),MMC_IMMEDIATE(MMC_TAGFIXNUM(45)),_OMC_LIT79_6}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,1,7) {&SCode_Mod_NOMOD__desc,}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,1,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "Placement"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,9,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,1) {_OMC_LIT82,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "Icon"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,4,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,1) {_OMC_LIT84,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "NFInstanceAPI.dumpJSONInstanceAnnotation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,40,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,1,5) {&NFModifier_Modifier_NOMOD__desc,}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,1,5) {&NFSections_EMPTY__desc,}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,3,3) {&NFInst_InstSettings_SETTINGS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,1,6) {&NFInstanceAPI_InstanceTree_EMPTY__desc,}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "enumeration"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,11,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,2,5) {&NFInstanceAPI_InstanceTree_BUILTIN__BASE__CLASS__desc,_OMC_LIT91}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,2,1) {_OMC_LIT92,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "NFInstanceAPI.buildInstanceTree got unknown class tree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,54,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT95_6,0.0);
#define _OMC_LIT95_6 MMC_REFREALLIT(_OMC_LIT_STRUCT95_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT78,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(663)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(663)),MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT95_6}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,2,3) {&NFModifier_ModifierScope_COMPONENT__desc,_OMC_LIT4}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "Line"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,4,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,2,1) {_OMC_LIT97,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "Diagram"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,7,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,2,1) {_OMC_LIT99,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "components"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,10,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,3,3) {&NFInst_InstSettings_SETTINGS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "__NoContext"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,11,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Inst.instantiateRootClass"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,25,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "NFInstanceAPI.buildInstanceTree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,31,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "evaluateAllParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,21,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "Evaluates all parameters if set, except the ones that have annotation(Evaluate = false)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,88,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(26)),_OMC_LIT106,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT107}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "Inst.instExpressions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,20,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "Typing.typeComponents"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,21,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "Typing.typeBinding"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,18,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "NFInstanceAPI.dumpJSONInstanceTree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,34,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "NFInstanceAPI.mkTop("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,20,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,1,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "execstat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,8,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "Prints out execution statistics for the compiler."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,49,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(31)),_OMC_LIT116,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT117}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "/lib/omc/AnnotationsBuiltin_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,28,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,1,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data ".mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,3,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "UTF-8"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,5,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "std"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,3,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "1.x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,3,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT126,2,0) {_OMC_LIT125,MMC_IMMEDIATE(MMC_TAGFIXNUM(10))}};
#define _OMC_LIT126 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "2.x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,3,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT128,2,0) {_OMC_LIT127,MMC_IMMEDIATE(MMC_TAGFIXNUM(20))}};
#define _OMC_LIT128 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "3.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,3,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,2,0) {_OMC_LIT129,MMC_IMMEDIATE(MMC_TAGFIXNUM(30))}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "3.1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,3,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,2,0) {_OMC_LIT131,MMC_IMMEDIATE(MMC_TAGFIXNUM(31))}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "3.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,3,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT134,2,0) {_OMC_LIT133,MMC_IMMEDIATE(MMC_TAGFIXNUM(32))}};
#define _OMC_LIT134 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "3.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,3,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,2,0) {_OMC_LIT135,MMC_IMMEDIATE(MMC_TAGFIXNUM(33))}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "3.4"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,3,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,2,0) {_OMC_LIT137,MMC_IMMEDIATE(MMC_TAGFIXNUM(34))}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "3.5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,3,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT140,2,0) {_OMC_LIT139,MMC_IMMEDIATE(MMC_TAGFIXNUM(35))}};
#define _OMC_LIT140 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "3.6"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,3,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT142,2,0) {_OMC_LIT141,MMC_IMMEDIATE(MMC_TAGFIXNUM(36))}};
#define _OMC_LIT142 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "latest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,6,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT144,2,0) {_OMC_LIT143,MMC_IMMEDIATE(MMC_TAGFIXNUM(1000))}};
#define _OMC_LIT144 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "experimental"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,12,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT146,2,0) {_OMC_LIT145,MMC_IMMEDIATE(MMC_TAGFIXNUM(9999))}};
#define _OMC_LIT146 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT146)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT147,2,1) {_OMC_LIT146,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT147 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT147)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT148,2,1) {_OMC_LIT144,_OMC_LIT147}};
#define _OMC_LIT148 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT148)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT149,2,1) {_OMC_LIT142,_OMC_LIT148}};
#define _OMC_LIT149 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT149)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT150,2,1) {_OMC_LIT140,_OMC_LIT149}};
#define _OMC_LIT150 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT150)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT151,2,1) {_OMC_LIT138,_OMC_LIT150}};
#define _OMC_LIT151 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT151)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT152,2,1) {_OMC_LIT136,_OMC_LIT151}};
#define _OMC_LIT152 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT152)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT153,2,1) {_OMC_LIT134,_OMC_LIT152}};
#define _OMC_LIT153 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT153)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT154,2,1) {_OMC_LIT132,_OMC_LIT153}};
#define _OMC_LIT154 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT154)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT155,2,1) {_OMC_LIT130,_OMC_LIT154}};
#define _OMC_LIT155 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT155)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT156,2,1) {_OMC_LIT128,_OMC_LIT155}};
#define _OMC_LIT156 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT156)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT157,2,1) {_OMC_LIT126,_OMC_LIT156}};
#define _OMC_LIT157 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT157)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT158,3,10) {&Flags_FlagData_ENUM__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1000)),_OMC_LIT157}};
#define _OMC_LIT158 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "Sets the language standard that should be used."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,47,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT160,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(8)),_OMC_LIT123,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT124,_OMC_LIT158,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT159}};
#define _OMC_LIT160 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "strict"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,6,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT162,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT162 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "Enables stricter enforcement of Modelica language rules."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,56,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT164,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(43)),_OMC_LIT161,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT124,_OMC_LIT162,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT163}};
#define _OMC_LIT164 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT164)
#include "util/modelica.h"

#include "NFInstanceAPI_includes.h"



DLLModelDirection
modelica_metatype omc_NFInstanceAPI_modifierJSON(threadData_t *threadData, modelica_string _modifier)
{
  modelica_metatype _json = NULL;
  modelica_metatype _amod = NULL;
  modelica_metatype _smod = NULL;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _amod has no default value.
  // _smod has no default value.
  /* Pattern-matching assignment */
  tmp1 = stringAppend(_OMC_LIT0,_modifier);
  tmpMeta2 = omc_Parser_stringMod(threadData, tmp1, _OMC_LIT1);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,6) == 0) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 5);
  if (optionNone(tmpMeta3)) OMC_THROW_INTERNAL();
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
  _amod = tmpMeta4;

  _smod = omc_AbsynToSCode_translateMod(threadData, mmc_mk_some(_amod), _OMC_LIT2, _OMC_LIT3, mmc_mk_none(), _OMC_LIT6, 0 /* false */);

  _json = omc_NFInstanceAPI_dumpJSONSCodeMod__impl(threadData, _smod, _OMC_LIT7, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONChoicesAnnotation(threadData_t *threadData, modelica_metatype _mods, modelica_metatype _scope, modelica_metatype _info, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype _choices = NULL;
  modelica_metatype _others = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _smod has no default value.
  // _choices has no default value.
  // _others has no default value.
  // _j has no default value.
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _m_loopVar = 0;
    modelica_metatype _m;
    _m_loopVar = _mods;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_m_loopVar)) {
        _m = MMC_CAR(_m_loopVar);
        _m_loopVar = MMC_CDR(_m_loopVar);
        if ((stringEqual((OMC_BOX_FIELD(_m, 2)), _OMC_LIT8))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = _m;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _choices = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp8;
    modelica_metatype _m_loopVar = 0;
    modelica_metatype _m;
    _m_loopVar = _mods;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar5;
    while(1) {
      tmp8 = 1;
      while (!listEmpty(_m_loopVar)) {
        _m = MMC_CAR(_m_loopVar);
        _m_loopVar = MMC_CDR(_m_loopVar);
        if ((!stringEqual((OMC_BOX_FIELD(_m, 2)), _OMC_LIT8))) {
          tmp8--;
          break;
        }
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar4 = _m;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar5;
  }
  _others = tmpMeta5;

  if((!listEmpty(_choices)))
  {
    _j = omc_JSON_emptyArray(threadData, listLength(_choices));

    {
      modelica_metatype _m;
      for (tmpMeta9 = _choices; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
      {
        _m = MMC_CAR(tmpMeta9);
        { /* match expression */
          modelica_metatype tmp13_1;
          tmp13_1 = (OMC_BOX_FIELD(_m, 3));
          {
            volatile mmc_switch_type tmp13;
            int tmp14;
            tmp13 = 0;
            for (; tmp13 < 2; tmp13++) {
              switch (MMC_SWITCH_CAST(tmp13)) {
              case 0: {
                modelica_metatype tmpMeta15;
                modelica_metatype tmpMeta16;
                modelica_metatype tmpMeta17;
                modelica_metatype tmpMeta18;
                if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,0,6) == 0) goto tmp12_end;
                tmpMeta15 = OMC_BOX_FIELD(tmp13_1, 4);
                if (listEmpty(tmpMeta15)) goto tmp12_end;
                tmpMeta16 = MMC_CAR(tmpMeta15);
                tmpMeta17 = MMC_CDR(tmpMeta15);
                if (!listEmpty(tmpMeta17)) goto tmp12_end;
                tmpMeta18 = OMC_BOX_FIELD(tmp13_1, 5);
                if (!optionNone(tmpMeta18)) goto tmp12_end;
                
                _smod = tmpMeta16;
                /* Pattern matching succeeded */
                tmpMeta10 = _smod;
                goto tmp12_done;
              }
              case 1: {
                
                /* Pattern matching succeeded */
                tmpMeta10 = _m;
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
        _m = tmpMeta10;

        _j = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONSCodeMod__impl(threadData, (OMC_BOX_FIELD(_m, 3)), _scope, 1 /* true */), _j);
      }
    }

    _json = omc_JSON_addPair(threadData, _OMC_LIT8, _j, _json);
  }

  {
    modelica_metatype _m;
    for (tmpMeta20 = _others; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
    {
      _m = MMC_CAR(tmpMeta20);
      _json = omc_NFInstanceAPI_dumpJSONAnnotationSubMod(threadData, _m, _scope, _failOnError, _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONChoicesAnnotation(threadData_t *threadData, modelica_metatype _mods, modelica_metatype _scope, modelica_metatype _info, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONChoicesAnnotation(threadData, _mods, _scope, _info, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodeClassDef(threadData_t *threadData, modelica_metatype _classDef, modelica_metatype _scope, modelica_boolean _qualifyPath, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _odims = NULL;
  modelica_metatype _derivedNode = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _path has no default value.
  // _odims has no default value.
  // _derivedNode has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _classDef;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,3) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,2) == 0) goto tmp2_end;
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta5, 3);
          
          _path = tmpMeta6;
          _odims = tmpMeta7;
          /* Pattern matching succeeded */
          if(_qualifyPath)
          {
            { /* matchcontinue expression */
              {
                volatile mmc_switch_type tmp10;
                int tmp11;
                tmp10 = 0;
                OMC_TRY_INTERNAL(mmc_jumper)
                tmp9_top:
                threadData->mmc_jumper = &new_mmc_jumper;
                for (; tmp10 < 2; tmp10++) {
                  switch (MMC_SWITCH_CAST(tmp10)) {
                  case 0: {
                    /* Pattern matching succeeded */
                    _derivedNode = omc_NFLookup_lookupName(threadData, _path, _scope, ((modelica_integer) 1), 0 /* false */, NULL, NULL);

                    _json = omc_JSON_addPair(threadData, _OMC_LIT9, omc_NFInstanceAPI_dumpJSONNodeEnclosingPath(threadData, _derivedNode), _json);
                    goto tmp9_done;
                  }
                  case 1: {
                    /* Pattern matching succeeded */
                    goto tmp9_done;
                  }
                  }
                  goto tmp9_end;
                  tmp9_end: ;
                }
                goto goto_8;
                tmp9_done:
                (void)tmp10;
                OMC_RESTORE_INTERNAL(mmc_jumper);
                goto tmp9_done2;
                goto_8:;
                OMC_CATCH_INTERNAL(mmc_jumper);
                if (++tmp10 < 2) {
                  goto tmp9_top;
                }
                goto goto_1;
                tmp9_done2:;
              }
            }
            ;
          }
          else
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT9, omc_NFInstanceAPI_dumpJSONPath(threadData, _path), _json);
          }

          if(isSome(_odims))
          {
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT10, omc_NFInstanceAPI_dumpJSONDims(threadData, omc_Util_getOption(threadData, _odims), tmpMeta12), _json);
          }

          _json = omc_NFInstanceAPI_dumpJSONSCodeMod(threadData, (OMC_BOX_FIELD(_classDef, 3)), _scope, _json);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_NFInstanceAPI_dumpJSONSCodeMod(threadData, (OMC_BOX_FIELD(_classDef, 2)), _scope, _json);
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
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONSCodeClassDef(threadData_t *threadData, modelica_metatype _classDef, modelica_metatype _scope, modelica_metatype _qualifyPath, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_qualifyPath);
  _json = omc_NFInstanceAPI_dumpJSONSCodeClassDef(threadData, _classDef, _scope, tmp1, __omcQ_24in_5Fjson);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodeTypeExtends(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _json = NULL;
  modelica_metatype _expanded_node = NULL;
  modelica_metatype _exts = NULL;
  modelica_metatype _json_elements = NULL;
  modelica_metatype _json_ext = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _expanded_node has no default value.
  // _exts has no default value.
  // _json_elements has no default value.
  // _json_ext has no default value.
  if(omc_NFInstNode_InstNode_isEmpty(threadData, _node))
  {
    goto _return;
  }

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
          modelica_integer tmp7;
          modelica_integer tmp8;
          /* Pattern matching succeeded */
          _expanded_node = omc_NFInst_expand(threadData, _node, ((modelica_integer) 1));

          _exts = omc_NFClassTree_ClassTree_getExtends(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _expanded_node)));

          if((!(arrayLength(_exts) == ((modelica_integer) 0))))
          {
            _json_elements = omc_JSON_makeNull(threadData);

            {
              modelica_metatype _ext;
              for (tmpMeta5 = _exts, tmp8 = arrayLength(tmpMeta5), tmp7 = 1; tmp7 <= tmp8; tmp7++)
              {
                _ext = arrayGet(tmpMeta5,tmp7);
                _json_ext = omc_JSON_makeNull(threadData);

                _json_ext = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT13, _json_ext);

                _json_ext = omc_JSON_addPair(threadData, _OMC_LIT9, omc_NFInstanceAPI_dumpJSONSCodeClass(threadData, omc_NFInstNode_InstNode_definition(threadData, _ext), _ext, _scope, 0 /* false */, omc_JSON_makeNull(threadData)), _json_ext);

                _json_elements = omc_JSON_addElement(threadData, _json_ext, _json_elements);
              }
            }

            _json = omc_JSON_addPair(threadData, _OMC_LIT14, _json_elements, _json);
          }
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
  threadData->mmc_jumper = old_mmc_jumper;
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodeClass(threadData_t *threadData, modelica_metatype _element, modelica_metatype _node, modelica_metatype _scope, modelica_boolean _isRedeclare, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT16, _json);

          if((omc_NFInstNode_InstNode_isEmpty(threadData, _node) || _isRedeclare))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_JSON_makeString(threadData, (OMC_BOX_FIELD(_element, 2))), _json);
          }
          else
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_NFInstanceAPI_dumpJSONNodeEnclosingPath(threadData, _node), _json);
          }

          _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, omc_SCodeDump_restrictionStringPP(threadData, (OMC_BOX_FIELD(_element, 6)))), _json);

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT19, omc_NFInstanceAPI_dumpJSONClassPrefixes(threadData, _element, _scope), _json);

          _json = omc_NFInstanceAPI_dumpJSONSCodeClassDef(threadData, (OMC_BOX_FIELD(_element, 7)), _scope, _isRedeclare, _json);

          _json = omc_NFInstanceAPI_dumpJSONComment(threadData, (OMC_BOX_FIELD(_element, 8)), _scope, _json, 1 /* true */, (!_isRedeclare), 0 /* false */);

          if(_isRedeclare)
          {
            _json = omc_NFInstanceAPI_dumpJSONCommentAnnotation(threadData, mmc_mk_some((OMC_BOX_FIELD(_element, 8))), _scope, _json, _OMC_LIT25, 0 /* false */);
          }

          if((!_isRedeclare))
          {
            _json = omc_NFInstanceAPI_dumpJSONSCodeTypeExtends(threadData, _node, _scope, _json);
          }
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
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONSCodeClass(threadData_t *threadData, modelica_metatype _element, modelica_metatype _node, modelica_metatype _scope, modelica_metatype _isRedeclare, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_isRedeclare);
  _json = omc_NFInstanceAPI_dumpJSONSCodeClass(threadData, _element, _node, _scope, tmp1, __omcQ_24in_5Fjson);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodeType(threadData_t *threadData, modelica_metatype _path, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _ty_node = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _ty_node has no default value.
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
          _ty_node = omc_NFLookup_lookupName(threadData, _path, _scope, omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 4)), 0 /* false */, NULL, NULL);

          _json = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONSCodeClass(threadData, omc_NFInstNode_InstNode_definition(threadData, _ty_node), _ty_node, _scope, 0 /* false */, omc_JSON_makeNull(threadData)), _json);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONPath(threadData, _path), _json);
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
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodeElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT28, _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_JSON_makeString(threadData, (OMC_BOX_FIELD(_element, 2))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONPath(threadData, omc_AbsynUtil_typeSpecPath(threadData, (OMC_BOX_FIELD(_element, 5)))), _json);

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT10, omc_NFInstanceAPI_dumpJSONDims(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_element, 4)), 2)), tmpMeta5), _json);

          _json = omc_NFInstanceAPI_dumpJSONSCodeMod(threadData, (OMC_BOX_FIELD(_element, 6)), _scope, _json);

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT19, omc_NFInstanceAPI_dumpJSONAttributes(threadData, (OMC_BOX_FIELD(_element, 4)), (OMC_BOX_FIELD(_element, 3)), _scope), _json);

          if(isSome((OMC_BOX_FIELD(_element, 8))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT29, omc_NFInstanceAPI_dumpJSONAbsynExpression(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_element, 8)))), _json);
          }
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONComment(threadData, (OMC_BOX_FIELD(_element, 7)), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONSCodeClass(threadData, _element, _OMC_LIT7, _scope, 0 /* false */, _json);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _json;
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONRedeclareType(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _path = NULL;
  modelica_integer _context;
  modelica_metatype _cls = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _path has no default value.
  // _context has no default value.
  // _cls has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _element;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _path = omc_AbsynUtil_typeSpecPath(threadData, (OMC_BOX_FIELD(_element, 5)));

          _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 4));

          _cls = omc_NFLookup_lookupName(threadData, _path, _scope, _context, 0 /* false */, NULL, NULL);

          _json = omc_JSON_addPair(threadData, _OMC_LIT30, omc_NFInstanceAPI_dumpJSONNodePath(threadData, _cls, 0 /* false */), _json);
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
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodeMod__impl(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_boolean _isChoices)
{
  modelica_metatype _json = NULL;
  modelica_metatype _binding_json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _binding_json has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _m;
            for (tmpMeta4 = (OMC_BOX_FIELD(_mod, 4)); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _m = MMC_CAR(tmpMeta4);
              _json = omc_JSON_addPair(threadData, (OMC_BOX_FIELD(_m, 2)), omc_NFInstanceAPI_dumpJSONSCodeMod__impl(threadData, (OMC_BOX_FIELD(_m, 3)), _scope, 0 /* false */), _json);
            }
          }

          if(omc_SCodeUtil_finalBool(threadData, (OMC_BOX_FIELD(_mod, 2))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT31, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          if(omc_SCodeUtil_eachBool(threadData, (OMC_BOX_FIELD(_mod, 3))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT32, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          if((_isChoices && isSome((OMC_BOX_FIELD(_mod, 6)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT33, omc_JSON_makeString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_mod, 6)))), _json);
          }

          if(isSome((OMC_BOX_FIELD(_mod, 5))))
          {
            _binding_json = omc_JSON_makeString(threadData, omc_Dump_printExpStr(threadData, omc_AbsynUtil_stripCommentExpressions(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_mod, 5))), 1 /* true */)));

            if(omc_JSON_isNull(threadData, _json))
            {
              _json = _binding_json;
            }
            else
            {
              _json = omc_JSON_addPair(threadData, _OMC_LIT34, _binding_json, _json);
            }
          }
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          if(omc_SCodeUtil_finalBool(threadData, (OMC_BOX_FIELD(_mod, 2))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT31, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          if(omc_SCodeUtil_eachBool(threadData, (OMC_BOX_FIELD(_mod, 3))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT32, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          _json = omc_JSON_addPair(threadData, _OMC_LIT34, omc_NFInstanceAPI_dumpJSONSCodeElement(threadData, (OMC_BOX_FIELD(_mod, 4)), _scope, omc_JSON_makeNull(threadData)), _json);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONSCodeMod__impl(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_metatype _isChoices)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_isChoices);
  _json = omc_NFInstanceAPI_dumpJSONSCodeMod__impl(threadData, _mod, _scope, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodeMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _j has no default value.
  _j = omc_NFInstanceAPI_dumpJSONSCodeMod__impl(threadData, _mod, _scope, 0 /* false */);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT35, _j, _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONReplaceableElements(threadData_t *threadData, modelica_metatype _clsNode)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cls_tree = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _cls_tree has no default value.
  // _j has no default value.
  _cls_tree = omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _clsNode));

  {
    modelica_metatype _c;
    for (tmpMeta1 = omc_NFClassTree_ClassTree_getComponents(threadData, _cls_tree), tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _c = arrayGet(tmpMeta1,tmp3);
      if(omc_NFInstNode_InstNode_isReplaceable(threadData, _c))
      {
        _j = omc_JSON_makeNull(threadData);

        _j = omc_JSON_addPair(threadData, _OMC_LIT17, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _c)), _j);

        _j = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONTypeName(threadData, omc_NFInstNode_InstNode_getType(threadData, _c)), _j);

        _json = omc_JSON_addElement(threadData, _j, _json);
      }
    }
  }

  {
    modelica_metatype _c;
    for (tmpMeta5 = omc_NFClassTree_ClassTree_getClasses(threadData, _cls_tree), tmp8 = arrayLength(tmpMeta5), tmp7 = 1; tmp7 <= tmp8; tmp7++)
    {
      _c = arrayGet(tmpMeta5,tmp7);
      if(omc_NFInstNode_InstNode_isReplaceable(threadData, _c))
      {
        _json = omc_JSON_addElement(threadData, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _c)), _json);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONStateCall(threadData_t *threadData, modelica_metatype _callEq, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _call has no default value.
  // _args has no default value.
  // _src has no default value.
  // _j has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _callEq;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,8,3) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,1) == 0) goto tmp2_end;
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp2_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 6);
          tmpMeta8 = OMC_BOX_FIELD(tmp3_1, 4);
          _call = tmpMeta6;
          _args = tmpMeta7;
          _src = tmpMeta8;
          /* Pattern matching succeeded */
          _j = omc_JSON_emptyArray(threadData, listLength(_args));

          {
            modelica_metatype _arg;
            for (tmpMeta9 = _args; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _arg = MMC_CAR(tmpMeta9);
              _j = omc_JSON_addElement(threadData, omc_NFExpression_toJSON(threadData, _arg), _j);
            }
          }

          _json = omc_JSON_addPair(threadData, _OMC_LIT36, _j, _json);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _json = omc_NFInstanceAPI_dumpJSONCommentAnnotation(threadData, omc_ElementSource_getOptComment(threadData, _src), _scope, _json, tmpMeta11, 0 /* false */);
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONStateCalls(threadData_t *threadData, modelica_metatype _callEqs, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _callEqs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      _json = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONStateCall(threadData, _eq, _scope), _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONConnection(threadData_t *threadData, modelica_metatype _connEq, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _lhs has no default value.
  // _rhs has no default value.
  // _src has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _connEq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,4) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 5);
  _lhs = tmpMeta2;
  _rhs = tmpMeta3;
  _src = tmpMeta4;

  _json = omc_JSON_addPair(threadData, _OMC_LIT37, omc_NFExpression_toJSON(threadData, _lhs), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT38, omc_NFExpression_toJSON(threadData, _rhs), _json);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _json = omc_NFInstanceAPI_dumpJSONCommentAnnotation(threadData, omc_ElementSource_getOptComment(threadData, _src), _scope, _json, tmpMeta5, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONConnections(threadData_t *threadData, modelica_metatype _connections, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  {
    modelica_metatype _conn;
    for (tmpMeta1 = _connections; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _conn = MMC_CAR(tmpMeta1);
      _json = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONConnection(threadData, _conn, _scope), _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_sortEquations(threadData_t *threadData, modelica_metatype _equations, modelica_metatype __omcQ_24in_5Fconnections, modelica_metatype __omcQ_24in_5Ftransitions, modelica_metatype __omcQ_24in_5FinitialStates, modelica_metatype *out_transitions, modelica_metatype *out_initialStates)
{
  modelica_metatype _connections = NULL;
  modelica_metatype _transitions = NULL;
  modelica_metatype _initialStates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta14;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _connections = __omcQ_24in_5Fconnections;
  _transitions = __omcQ_24in_5Ftransitions;
  _initialStates = __omcQ_24in_5FinitialStates;
  {
    modelica_metatype _eq;
    for (tmpMeta1 = listReverse(_equations); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _eq;
        {
          int tmp4;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
            case 4: {
              modelica_metatype tmpMeta5;
              
              /* Pattern matching succeeded */
              tmpMeta5 = mmc_mk_cons(_eq, _connections);
              _connections = tmpMeta5;
              goto tmp3_done;
            }
            case 5: {
              
              /* Pattern matching succeeded */
              _connections = omc_NFInstanceAPI_sortEquations(threadData, (OMC_BOX_FIELD(_eq, 4)), _connections, _transitions, _initialStates ,&_transitions ,&_initialStates);
              goto tmp3_done;
            }
            case 6: {
              modelica_metatype tmpMeta6;
              modelica_metatype tmpMeta11;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _b;
                for (tmpMeta6 = (OMC_BOX_FIELD(_eq, 2)); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
                {
                  _b = MMC_CAR(tmpMeta6);
                  { /* match expression */
                    modelica_metatype tmp9_1;
                    tmp9_1 = _b;
                    {
                      volatile mmc_switch_type tmp9;
                      int tmp10;
                      tmp9 = 0;
                      for (; tmp9 < 2; tmp9++) {
                        switch (MMC_SWITCH_CAST(tmp9)) {
                        case 0: {
                          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,3) == 0) goto tmp8_end;
                          
                          /* Pattern matching succeeded */
                          _connections = omc_NFInstanceAPI_sortEquations(threadData, (OMC_BOX_FIELD(_b, 4)), _connections, _transitions, _initialStates ,&_transitions ,&_initialStates);
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
                      goto goto_2;
                      goto tmp8_done;
                      tmp8_done:;
                    }
                  }
                  ;
                }
              }
              goto tmp3_done;
            }
            case 11: {
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              
              /* Pattern matching succeeded */
              if(omc_NFExpression_isCallNamed(threadData, (OMC_BOX_FIELD(_eq, 2)), _OMC_LIT40))
              {
                tmpMeta12 = mmc_mk_cons(_eq, _transitions);
                _transitions = tmpMeta12;
              }
              else
              {
                if(omc_NFExpression_isCallNamed(threadData, (OMC_BOX_FIELD(_eq, 2)), _OMC_LIT39))
                {
                  tmpMeta13 = mmc_mk_cons(_eq, _initialStates);
                  _initialStates = tmpMeta13;
                }
              }
              goto tmp3_done;
            }
            default:
            tmp3_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
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
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_transitions) { *out_transitions = _transitions; }
  if (out_initialStates) { *out_initialStates = _initialStates; }
  omc_ret_ = _connections;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONEquations(threadData_t *threadData, modelica_metatype _sections, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _connections = NULL;
  modelica_metatype _transitions = NULL;
  modelica_metatype _initial_states = NULL;
  modelica_metatype _j = NULL;
  modelica_integer _context;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _connections has no default value.
  // _transitions has no default value.
  // _initial_states has no default value.
  // _j has no default value.
  // _context has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _connections = omc_NFInstanceAPI_sortEquations(threadData, omc_NFSections_equations(threadData, _sections), tmpMeta1, tmpMeta2, tmpMeta3 ,&_transitions ,&_initial_states);

  _context = omc_NFInstContext_set(threadData, ((modelica_integer) 8), ((modelica_integer) 1));

  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp7;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _transitions;
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta6; /* defaultValue */
    tmp5 = &__omcQ_24tmpVar7;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        __omcQ_24tmpVar6 = omc_NFTyping_typeEquation(threadData, _e, _context);
        *tmp5 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp5 = &MMC_CDR(*tmp5);
      } else if (tmp7 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp5 = mmc_mk_nil();
    tmpMeta4 = __omcQ_24tmpVar7;
  }
  _transitions = tmpMeta4;

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp9;
    modelica_metatype tmpMeta10;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp11;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _initial_states;
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta10; /* defaultValue */
    tmp9 = &__omcQ_24tmpVar9;
    while(1) {
      tmp11 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp11--;
      }
      if (tmp11 == 0) {
        __omcQ_24tmpVar8 = omc_NFTyping_typeEquation(threadData, _e, _context);
        *tmp9 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp9 = &MMC_CDR(*tmp9);
      } else if (tmp11 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    *tmp9 = mmc_mk_nil();
    tmpMeta8 = __omcQ_24tmpVar9;
  }
  _initial_states = tmpMeta8;

  _j = omc_NFInstanceAPI_dumpJSONConnections(threadData, _connections, _scope);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT41, _j, _json);

  _j = omc_NFInstanceAPI_dumpJSONStateCalls(threadData, _initial_states, _scope);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT42, _j, _json);

  _j = omc_NFInstanceAPI_dumpJSONStateCalls(threadData, _transitions, _scope);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT43, _j, _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONImports(threadData_t *threadData, modelica_metatype _node, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _imps = NULL;
  modelica_metatype _resolved_imps = NULL;
  modelica_metatype _json_imp = NULL;
  modelica_metatype _json_imp_array = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  _n = _node;
  // _imps has no default value.
  // _resolved_imps has no default value.
  // _json_imp has no default value.
  // _json_imp_array has no default value.
  _json_imp_array = omc_JSON_makeNull(threadData);

  while(1)
  {
    if(!(!omc_NFInstNode_InstNode_isEmpty(threadData, _n))) break;
    _imps = omc_NFClassTree_ClassTree_getImports(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _n)));

    if((!(arrayLength(_imps) == ((modelica_integer) 0))))
    {
      _resolved_imps = omc_NFImport_resolveList(threadData, _imps);

      _resolved_imps = listReverseInPlace(_resolved_imps);

      {
        modelica_metatype _imp;
        for (tmpMeta1 = _resolved_imps; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
        {
          _imp = MMC_CAR(tmpMeta1);
          { /* match expression */
            modelica_metatype tmp4_1;
            tmp4_1 = _imp;
            {
              volatile mmc_switch_type tmp4;
              int tmp5;
              tmp4 = 0;
              for (; tmp4 < 2; tmp4++) {
                switch (MMC_SWITCH_CAST(tmp4)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
                  
                  /* Pattern matching succeeded */
                  _json_imp = omc_JSON_makeNull(threadData);

                  _json_imp = omc_JSON_addPair(threadData, _OMC_LIT44, omc_NFInstanceAPI_dumpJSONPath(threadData, omc_NFInstNode_InstNode_fullPath(threadData, omc_NFInstNode_InstNode_borrow(threadData, (OMC_BOX_FIELD(_imp, 2))), 0 /* false */)), _json_imp);

                  if((!(stringLength((OMC_BOX_FIELD(_imp, 3))) == ((modelica_integer) 0))))
                  {
                    _json_imp = omc_JSON_addPair(threadData, _OMC_LIT45, omc_JSON_makeString(threadData, (OMC_BOX_FIELD(_imp, 3))), _json_imp);
                  }

                  _json_imp_array = omc_JSON_addElement(threadData, _json_imp, _json_imp_array);
                  goto tmp3_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
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
          ;
        }
      }
    }

    _n = omc_NFInstNode_InstNode_parent(threadData, _n);
  }

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT46, _json_imp_array, _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAbsynFunctionArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _json_args = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _json_args has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _args;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          if((!listEmpty((OMC_BOX_FIELD(_args, 2)))))
          {
            _json_args = omc_JSON_makeNull(threadData);

            {
              modelica_metatype _arg;
              for (tmpMeta5 = (OMC_BOX_FIELD(_args, 2)); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
              {
                _arg = MMC_CAR(tmpMeta5);
                _json_args = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONAbsynExpression(threadData, _arg), _json_args);
              }
            }

            _json = omc_JSON_addPair(threadData, _OMC_LIT47, _json_args, _json);
          }

          if((!listEmpty((OMC_BOX_FIELD(_args, 3)))))
          {
            _json_args = omc_JSON_makeNull(threadData);

            {
              modelica_metatype _arg;
              for (tmpMeta7 = (OMC_BOX_FIELD(_args, 3)); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
              {
                _arg = MMC_CAR(tmpMeta7);
                _json_args = omc_JSON_addPair(threadData, (OMC_BOX_FIELD(_arg, 2)), omc_NFInstanceAPI_dumpJSONAbsynExpression(threadData, (OMC_BOX_FIELD(_arg, 3))), _json_args);
              }
            }

            _json = omc_JSON_addPair(threadData, _OMC_LIT48, _json_args, _json);
          }
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAbsynCref(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  _json = omc_JSON_makeString(threadData, omc_Dump_printComponentRefStr(threadData, _cref));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAbsynExpression(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_metatype _json = NULL;
  modelica_integer _i;
  modelica_string _r = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _i has no default value.
  // _r has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeInteger(threadData, omc_unbox_integer((OMC_BOX_FIELD(_exp, 2))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNumber(threadData, stringReal((OMC_BOX_FIELD(_exp, 2))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONAbsynCref(threadData, (OMC_BOX_FIELD(_exp, 2)));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeString(threadData, (OMC_BOX_FIELD(_exp, 2)));
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeBoolean(threadData, omc_unbox_boolean((OMC_BOX_FIELD(_exp, 2))));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,0) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 2);
          tmp9 = omc_unbox_integer(tmpMeta8);
          _i = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeInteger(threadData, (-_i));
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,0) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,1) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 2);
          _r = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNumber(threadData, (-stringReal(_r)));
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_makeNull(threadData);

          _json = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT50, _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_NFInstanceAPI_dumpJSONAbsynCref(threadData, (OMC_BOX_FIELD(_exp, 2))), _json);
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONAbsynFunctionArgs(threadData, (OMC_BOX_FIELD(_exp, 3)), _json);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_emptyArray(threadData, listLength((OMC_BOX_FIELD(_exp, 2))));

          {
            modelica_metatype _e;
            for (tmpMeta13 = (OMC_BOX_FIELD(_exp, 2)); !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _e = MMC_CAR(tmpMeta13);
              _json = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONAbsynExpression(threadData, _e), _json);
            }
          }
          tmpMeta1 = _json;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeString(threadData, omc_Dump_printExpStr(threadData, omc_AbsynUtil_stripCommentExpressions(threadData, _exp, 1 /* true */)));
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAnnotationExp2(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _info, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _exp has no default value.
  omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT51);

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
          _exp = omc_NFInst_instExp(threadData, _absynExp, _scope, ((modelica_integer) 67108867), _info);

          _exp = omc_NFTyping_typeExp(threadData, _exp, ((modelica_integer) 67108867), _info, 0 /* false */, NULL, NULL, NULL);

          _exp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);

          _json = omc_NFExpression_toJSON(threadData, _exp);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          if(_failOnError)
          {
            goto goto_1;
          }

          _json = omc_JSON_makeNull(threadData);

          _json = omc_JSON_addPair(threadData, _OMC_LIT52, omc_JSON_makeString(threadData, omc_ErrorExt_printCheckpointMessagesStr(threadData, 0 /* false */)), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT53, omc_NFInstanceAPI_dumpJSONAbsynExpression(threadData, _absynExp), _json);
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

  omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT51);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONAnnotationExp2(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _info, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONAnnotationExp2(threadData, _absynExp, _scope, _info, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAnnotationExp(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _info, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _j has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _absynExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeInteger(threadData, omc_unbox_integer((OMC_BOX_FIELD(_absynExp, 2))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNumber(threadData, stringReal((OMC_BOX_FIELD(_absynExp, 2))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeString(threadData, (OMC_BOX_FIELD(_absynExp, 2)));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeBoolean(threadData, omc_unbox_boolean((OMC_BOX_FIELD(_absynExp, 2))));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_AbsynUtil_isLiteralExp(threadData, _absynExp))) goto tmp3_end;
          _json = omc_JSON_emptyArray(threadData, listLength((OMC_BOX_FIELD(_absynExp, 2))));

          {
            modelica_metatype _e;
            for (tmpMeta6 = (OMC_BOX_FIELD(_absynExp, 2)); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _e = MMC_CAR(tmpMeta6);
              _j = omc_NFInstanceAPI_dumpJSONAnnotationExp(threadData, _e, _scope, _info, _failOnError);

              _json = omc_JSON_addElement(threadData, _j, _json);
            }
          }
          tmpMeta1 = _json;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONAnnotationExp2(threadData, _absynExp, _scope, _info, _failOnError);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONAnnotationExp(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _info, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONAnnotationExp(threadData, _absynExp, _scope, _info, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAnnotationSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _scope, modelica_boolean _failOnError, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_string _name = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _absyn_binding = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _name has no default value.
  // _mod has no default value.
  // _absyn_binding has no default value.
  // _j has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _subMod;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  _name = tmpMeta2;
  _mod = tmpMeta3;

  { /* match expression */
    modelica_string tmp6_1;modelica_metatype tmp6_2;
    tmp6_1 = _name;
    tmp6_2 = _mod;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 5; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          if (7 != omc_string_len(tmp6_1) || strcmp(omc_string_data(_OMC_LIT21), omc_string_data(tmp6_1)) != 0) goto tmp5_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,0,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _j = omc_NFInstanceAPI_dumpJSONChoicesAnnotation(threadData, (OMC_BOX_FIELD(_mod, 4)), _scope, (OMC_BOX_FIELD(_mod, 7)), _failOnError);

          _json = omc_JSON_addPairNotNull(threadData, _name, _j, _json);
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,0,6) == 0) goto tmp5_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp6_2, 5);
          if (optionNone(tmpMeta8)) goto tmp5_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
          
          _absyn_binding = tmpMeta9;
          /* Pattern matching succeeded */
          _j = omc_NFInstanceAPI_dumpJSONAnnotationExp(threadData, _absyn_binding, _scope, (OMC_BOX_FIELD(_mod, 7)), _failOnError);

          _json = omc_JSON_addPair(threadData, _name, _j, _json);
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,0,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _json = omc_JSON_addPair(threadData, _name, omc_NFInstanceAPI_dumpJSONAnnotationSubMods(threadData, (OMC_BOX_FIELD(_mod, 4)), _scope, tmpMeta10, _failOnError), _json);
          goto tmp5_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,4,0) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _name, omc_JSON_emptyListObject(threadData), _json);
          goto tmp5_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
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
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONAnnotationSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _scope, modelica_metatype _failOnError, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONAnnotationSubMod(threadData, _subMod, _scope, tmp1, __omcQ_24in_5Fjson);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAnnotationSubMods(threadData_t *threadData, modelica_metatype _subMods, modelica_metatype _scope, modelica_metatype _filter, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  {
    modelica_metatype _m;
    for (tmpMeta1 = _subMods; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _m = MMC_CAR(tmpMeta1);
      if((listEmpty(_filter) || omc_List_contains(threadData, _filter, (OMC_BOX_FIELD(_m, 2)), boxvar_stringEq)))
      {
        _json = omc_NFInstanceAPI_dumpJSONAnnotationSubMod(threadData, _m, _scope, _failOnError, _json);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONAnnotationSubMods(threadData_t *threadData, modelica_metatype _subMods, modelica_metatype _scope, modelica_metatype _filter, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONAnnotationSubMods(threadData, _subMods, _scope, _filter, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAnnotationMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_metatype _filter, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONAnnotationSubMods(threadData, (OMC_BOX_FIELD(_mod, 4)), _scope, _filter, _failOnError);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNull(threadData);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONAnnotationMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_metatype _filter, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONAnnotationMod(threadData, _mod, _scope, _filter, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAnnotationOpt(threadData_t *threadData, modelica_metatype _annOpt, modelica_metatype _scope, modelica_metatype _filter, modelica_boolean _failOnError, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _ann = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _ann has no default value.
  if(isSome(_annOpt))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _annOpt;
    if (optionNone(tmpMeta1)) OMC_THROW_INTERNAL();
    tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
    _ann = tmpMeta2;

    _json = omc_JSON_addPair(threadData, _OMC_LIT54, omc_NFInstanceAPI_dumpJSONAnnotationMod(threadData, (OMC_BOX_FIELD(_ann, 2)), _scope, _filter, _failOnError), _json);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONAnnotationOpt(threadData_t *threadData, modelica_metatype _annOpt, modelica_metatype _scope, modelica_metatype _filter, modelica_metatype _failOnError, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONAnnotationOpt(threadData, _annOpt, _scope, _filter, tmp1, __omcQ_24in_5Fjson);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONCommentAnnotation(threadData_t *threadData, modelica_metatype _cmtOpt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype _filter, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _cmt has no default value.
  if(isSome(_cmtOpt))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _cmtOpt;
    if (optionNone(tmpMeta1)) OMC_THROW_INTERNAL();
    tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
    _cmt = tmpMeta2;

    _json = omc_NFInstanceAPI_dumpJSONAnnotationOpt(threadData, (OMC_BOX_FIELD(_cmt, 2)), _scope, _filter, _failOnError, _json);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONCommentAnnotation(threadData_t *threadData, modelica_metatype _cmtOpt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype _filter, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONCommentAnnotation(threadData, _cmtOpt, _scope, __omcQ_24in_5Fjson, _filter, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONComment(threadData_t *threadData, modelica_metatype _cmt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_boolean _dumpComment, modelica_boolean _dumpAnnotation, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  if((isSome((OMC_BOX_FIELD(_cmt, 3))) && _dumpComment))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT33, omc_JSON_makeString(threadData, omc_Util_getOption(threadData, (OMC_BOX_FIELD(_cmt, 3)))), _json);
  }

  if(_dumpAnnotation)
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _json = omc_NFInstanceAPI_dumpJSONAnnotationOpt(threadData, (OMC_BOX_FIELD(_cmt, 2)), _scope, tmpMeta1, _failOnError, _json);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONComment(threadData_t *threadData, modelica_metatype _cmt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype _dumpComment, modelica_metatype _dumpAnnotation, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_dumpComment);
  tmp2 = omc_unbox_integer(_dumpAnnotation);
  tmp3 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONComment(threadData, _cmt, _scope, __omcQ_24in_5Fjson, tmp1, tmp2, tmp3);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONCommentOpt(threadData_t *threadData, modelica_metatype _cmtOpt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_boolean _dumpComment, modelica_boolean _dumpAnnotation, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  if(isSome(_cmtOpt))
  {
    _json = omc_NFInstanceAPI_dumpJSONComment(threadData, omc_Util_getOption(threadData, _cmtOpt), _scope, _json, _dumpComment, _dumpAnnotation, _failOnError);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONCommentOpt(threadData_t *threadData, modelica_metatype _cmtOpt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype _dumpComment, modelica_metatype _dumpAnnotation, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_dumpComment);
  tmp2 = omc_unbox_integer(_dumpAnnotation);
  tmp3 = omc_unbox_integer(_failOnError);
  _json = omc_NFInstanceAPI_dumpJSONCommentOpt(threadData, _cmtOpt, _scope, __omcQ_24in_5Fjson, tmp1, tmp2, tmp3);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONReplaceable(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _cc has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _repl;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
          _cc = tmpMeta7;
          /* Pattern matching succeeded */
          _json = omc_JSON_makeNull(threadData);

          _json = omc_JSON_addPair(threadData, _OMC_LIT55, omc_NFInstanceAPI_dumpJSONPath(threadData, (OMC_BOX_FIELD(_cc, 2))), _json);

          _json = omc_NFInstanceAPI_dumpJSONSCodeMod(threadData, (OMC_BOX_FIELD(_cc, 3)), _scope, _json);
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONCommentOpt(threadData, mmc_mk_some((OMC_BOX_FIELD(_cc, 4))), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeBoolean(threadData, 1 /* true */);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNull(threadData);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONClassPrefixes(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cdef = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _cdef has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 7);
          
          _cdef = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = _cdef;
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,2,3) == 0) goto tmp9_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NFInstanceAPI_dumpJSONAttributes(threadData, (OMC_BOX_FIELD(_cdef, 4)), (OMC_BOX_FIELD(_element, 3)), _scope);
                  goto tmp9_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NFInstanceAPI_dumpJSONSCodePrefixes(threadData, (OMC_BOX_FIELD(_element, 3)), _scope);
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
          }
          _json = tmpMeta7;

          if(omc_SCodeUtil_partialBool(threadData, (OMC_BOX_FIELD(_element, 5))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT56, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          if(omc_SCodeUtil_encapsulatedBool(threadData, (OMC_BOX_FIELD(_element, 4))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT57, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }
          tmpMeta1 = _json;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNull(threadData);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodePrefixes(threadData_t *threadData, modelica_metatype _prefixes, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  if((!omc_SCodeUtil_visibilityBool(threadData, (OMC_BOX_FIELD(_prefixes, 2)))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT58, omc_JSON_makeBoolean(threadData, 0 /* false */), _json);
  }

  if(omc_SCodeUtil_finalBool(threadData, (OMC_BOX_FIELD(_prefixes, 4))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT31, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }

  if(omc_AbsynUtil_isInner(threadData, (OMC_BOX_FIELD(_prefixes, 5))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT59, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }

  if(omc_AbsynUtil_isOuter(threadData, (OMC_BOX_FIELD(_prefixes, 5))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT60, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT61, omc_NFInstanceAPI_dumpJSONReplaceable(threadData, (OMC_BOX_FIELD(_prefixes, 6)), _scope), _json);

  if(omc_SCodeUtil_redeclareBool(threadData, (OMC_BOX_FIELD(_prefixes, 3))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT62, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAttributes(threadData_t *threadData, modelica_metatype _attrs, modelica_metatype _prefs, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_string _s = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _s has no default value.
  _json = omc_NFInstanceAPI_dumpJSONSCodePrefixes(threadData, _prefs, _scope);

  omc_string_store(&(_s), omc_SCodeDump_connectorTypeStr(threadData, (OMC_BOX_FIELD(_attrs, 3))));

  if((!(stringLength(_s) == ((modelica_integer) 0))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT63, omc_JSON_makeString(threadData, _s), _json);
  }

  omc_string_store(&(_s), omc_SCodeDump_unparseVariability(threadData, (OMC_BOX_FIELD(_attrs, 5))));

  if((!(stringLength(_s) == ((modelica_integer) 0))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT64, omc_JSON_makeString(threadData, _s), _json);
  }

  if(omc_AbsynUtil_isInput(threadData, (OMC_BOX_FIELD(_attrs, 6))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT65, _OMC_LIT69, _json);
  }
  else
  {
    if(omc_AbsynUtil_isOutput(threadData, (OMC_BOX_FIELD(_attrs, 6))))
    {
      _json = omc_JSON_addPair(threadData, _OMC_LIT65, _OMC_LIT67, _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONAbsynDims(threadData_t *threadData, modelica_metatype _dims)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  {
    modelica_metatype _d;
    for (tmpMeta1 = _dims; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      _json = omc_JSON_addElement(threadData, omc_JSON_makeString(threadData, omc_Dump_printSubscriptStr(threadData, _d)), _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONDims(threadData_t *threadData, modelica_metatype _absynDims, modelica_metatype _typedDims)
{
  modelica_metatype _json = NULL;
  modelica_metatype _ty_json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _ty_json has no default value.
  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT70, omc_NFInstanceAPI_dumpJSONAbsynDims(threadData, _absynDims), _json);

  _ty_json = omc_JSON_makeNull(threadData);

  {
    modelica_metatype _d;
    for (tmpMeta1 = _typedDims; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      _ty_json = omc_JSON_addElement(threadData, omc_JSON_makeString(threadData, omc_NFDimension_toString(threadData, _d)), _ty_json);
    }
  }

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT71, _ty_json, _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONClassDims(threadData_t *threadData, modelica_metatype _node, modelica_metatype _element)
{
  modelica_metatype _json = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _absyn_dims = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _ty has no default value.
  // _absyn_dims has no default value.
  _ty = omc_NFInstNode_InstNode_getType(threadData, _node);

  if(omc_NFType_isArray(threadData, _ty))
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _element;
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
            modelica_metatype tmpMeta9;
            if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
            tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 7);
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp3_end;
            tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 2);
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
            tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 3);
            if (optionNone(tmpMeta8)) goto tmp3_end;
            tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
            
            _absyn_dims = tmpMeta9;
            /* Pattern matching succeeded */
            tmpMeta1 = _absyn_dims;
            goto tmp3_done;
          }
          case 1: {
            modelica_metatype tmpMeta10;
            
            /* Pattern matching succeeded */
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
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
    _absyn_dims = tmpMeta1;

    _json = omc_NFInstanceAPI_dumpJSONDims(threadData, _absyn_dims, omc_NFType_arrayDims(threadData, _ty));
  }
  else
  {
    _json = omc_JSON_makeNull(threadData);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _originalBinding, modelica_boolean _evaluate)
{
  modelica_metatype _json = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _bind = NULL;
  modelica_integer _context;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _exp has no default value.
  _bind = _binding;
  // _context has no default value.
  if((isSome(_originalBinding) && omc_NFBinding_isEvaluated(threadData, _binding)))
  {
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
            _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 2));

            _bind = omc_NFInst_instBinding(threadData, omc_Util_getOption(threadData, _originalBinding), _context);

            _bind = omc_NFTyping_typeBinding(threadData, _bind, _context);
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
  }

  _exp = omc_NFBinding_getExp(threadData, _bind);

  _exp = omc_NFExpression_map(threadData, _exp, boxvar_NFExpression_expandSplitIndices);

  _json = omc_JSON_addPair(threadData, _OMC_LIT72, omc_NFExpression_toJSON(threadData, _exp), _json);

  if((_evaluate && (!omc_NFExpression_isLiteral(threadData, _exp))))
  {
    omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT73);

    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp7;
        int tmp8;
        tmp7 = 0;
        OMC_TRY_INTERNAL(mmc_jumper)
        tmp6_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp7 < 2; tmp7++) {
          switch (MMC_SWITCH_CAST(tmp7)) {
          case 0: {
            /* Pattern matching succeeded */
            _exp = omc_NFCeval_evalExp(threadData, _exp, omc_NFCeval_EvalTarget_new(threadData, _OMC_LIT6, ((modelica_integer) 2), mmc_mk_none()));

            _exp = omc_NFExpression_map(threadData, _exp, boxvar_NFExpression_expandSplitIndices);

            _json = omc_JSON_addPair(threadData, _OMC_LIT53, omc_NFExpression_toJSON(threadData, _exp), _json);
            goto tmp6_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            goto tmp6_done;
          }
          }
          goto tmp6_end;
          tmp6_end: ;
        }
        goto goto_5;
        tmp6_done:
        (void)tmp7;
        OMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp6_done2;
        goto_5:;
        OMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp7 < 2) {
          goto tmp6_top;
        }
        OMC_THROW_INTERNAL();
        tmp6_done2:;
      }
    }
    ;

    omc_ErrorExt_rollBack(threadData, _OMC_LIT73);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _originalBinding, modelica_metatype _evaluate)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_evaluate);
  _json = omc_NFInstanceAPI_dumpJSONBinding(threadData, _binding, _originalBinding, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONTypeName(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  _json = omc_JSON_makeString(threadData, omc_NFType_toString(threadData, omc_NFType_arrayElementType(threadData, _ty)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONEnumTypeLiteral(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  _json = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT28, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _node)), _json);

  _json = omc_NFInstanceAPI_dumpJSONComment(threadData, omc_NFComponent_comment(threadData, omc_NFInstNode_InstNode_component(threadData, _node)), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONEnumTypeLiterals(threadData_t *threadData, modelica_metatype _literals, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  tmp1 = ((modelica_integer) 6); tmp2 = 1; tmp3 = arrayLength(_literals);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 6); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {

      _json = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONEnumTypeLiteral(threadData, arrayGet(_literals,_i) /* DAE.ASUB */, _scope), _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONEnumType(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _enumNode)
{
  modelica_metatype _json = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _def = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _json_elems = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  _node = omc_NFInstNode_InstNode_resolveInner(threadData, omc_NFInstNode_InstNode_classScope(threadData, _enumNode));
  // _def has no default value.
  // _comps has no default value.
  // _json_elems has no default value.
  // _elems has no default value.
  _def = omc_NFInstNode_InstNode_definition(threadData, _node);

  _json = omc_JSON_makeNull(threadData);

  _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_NFInstanceAPI_dumpJSONNodePath(threadData, _node, 0 /* false */), _json);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT10, omc_NFInstanceAPI_dumpJSONClassDims(threadData, _node, _def), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, omc_SCodeDump_restrictionStringPP(threadData, omc_SCodeUtil_getClassRestriction(threadData, _def))), _json);

  _json = omc_NFInstanceAPI_dumpJSONCommentOpt(threadData, omc_SCodeUtil_getElementComment(threadData, _def), _node, _json, 1 /* true */, 1 /* true */, 0 /* false */);

  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 3);
  _elems = tmpMeta2;

  _json_elems = omc_NFInstanceAPI_dumpJSONElements(threadData, _elems, _node, 0 /* false */);

  _comps = omc_NFClassTree_ClassTree_getComponents(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _node)));

  _json_elems = omc_NFInstanceAPI_dumpJSONEnumTypeLiterals(threadData, _comps, omc_NFInstNode_InstNode_parent(threadData, _node), _json_elems);

  _json = omc_JSON_addPair(threadData, _OMC_LIT14, _json_elems, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT74, omc_JSON_dumpJSONSourceInfo(threadData, omc_NFInstNode_InstNode_info(threadData, _node), 1 /* true */), _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONSCodeElementType(threadData_t *threadData, modelica_metatype _elem)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _elem;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_NFInstanceAPI_dumpJSONPath(threadData, omc_AbsynUtil_typeSpecPath(threadData, (OMC_BOX_FIELD(_elem, 5)))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT75, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
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
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONComponentType(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _node, modelica_metatype _ty, modelica_boolean _isDeleted)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _cls;
    tmp4_2 = omc_NFType_arrayElementType(threadData, _ty);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONEnumType(threadData, _cls, _node);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,10,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONSCodeElementType(threadData, omc_NFInstNode_InstNode_definition(threadData, _node));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONInstanceTree(threadData, _cls, _node, 1 /* true */, _isDeleted, 0 /* false */);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstanceAPI_dumpJSONTypeName(threadData, _ty);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONComponentType(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _node, modelica_metatype _ty, modelica_metatype _isDeleted)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_isDeleted);
  _json = omc_NFInstanceAPI_dumpJSONComponentType(threadData, _cls, _node, _ty, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _originalBinding, modelica_metatype _cls)
{
  modelica_metatype _json = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _scope = NULL;
  modelica_metatype _ty_node = NULL;
  modelica_metatype _comp = NULL;
  modelica_metatype _elem = NULL;
  modelica_boolean _is_constant;
  modelica_metatype _path = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _node has no default value.
  // _scope has no default value.
  // _ty_node has no default value.
  // _comp has no default value.
  // _elem has no default value.
  // _is_constant has no default value.
  // _path has no default value.
  _node = omc_NFInstNode_InstNode_resolveOuter(threadData, _component);

  _comp = omc_NFInstNode_InstNode_component(threadData, _node);

  _elem = omc_NFInstNode_InstNode_definition(threadData, _node);

  _scope = omc_NFInstNode_InstNode_parent(threadData, _node);

  _json = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT28, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _node)), _json);

  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _comp;
    tmp3_2 = _elem;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponent_isDeleted(threadData, _comp)) goto tmp2_end;
          _json = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONComponentType(threadData, _cls, _node, (OMC_BOX_FIELD(_comp, 3)), 1 /* true */), _json);

          _json = omc_NFInstanceAPI_dumpJSONSCodeMod(threadData, (OMC_BOX_FIELD(_elem, 6)), _scope, _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT29, omc_JSON_makeBoolean(threadData, 0 /* false */), _json);

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT19, omc_NFInstanceAPI_dumpJSONAttributes(threadData, (OMC_BOX_FIELD(_elem, 4)), (OMC_BOX_FIELD(_elem, 3)), _scope), _json);

          _json = omc_NFInstanceAPI_dumpJSONComment(threadData, (OMC_BOX_FIELD(_elem, 7)), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,2) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONComponentType(threadData, _cls, _node, omc_NFComponent_getType(threadData, _comp), 0 /* false */), _json);

          _json = omc_NFInstanceAPI_dumpJSONSCodeMod(threadData, (OMC_BOX_FIELD(_elem, 6)), _scope, _json);

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT19, omc_NFInstanceAPI_dumpJSONAttributes(threadData, (OMC_BOX_FIELD(_elem, 4)), (OMC_BOX_FIELD(_elem, 3)), _scope), _json);

          _json = omc_NFInstanceAPI_dumpJSONComment(threadData, (OMC_BOX_FIELD(_elem, 7)), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);

          _json = omc_JSON_addPair(threadData, _OMC_LIT52, omc_JSON_makeString(threadData, (OMC_BOX_FIELD(_comp, 3))), _json);
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONComponentType(threadData, _cls, _node, (OMC_BOX_FIELD(_comp, 3)), 0 /* false */), _json);

          if(omc_NFType_isArray(threadData, (OMC_BOX_FIELD(_comp, 3))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT10, omc_NFInstanceAPI_dumpJSONDims(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_elem, 4)), 2)), omc_NFType_arrayDims(threadData, (OMC_BOX_FIELD(_comp, 3)))), _json);
          }

          _json = omc_NFInstanceAPI_dumpJSONSCodeMod(threadData, (OMC_BOX_FIELD(_elem, 6)), _scope, _json);

          _is_constant = ((omc_unbox_integer((OMC_BOX_FIELD((OMC_BOX_FIELD(_comp, 6)), 4))) <= 3) && (omc_NFBinding_purity(threadData, (OMC_BOX_FIELD(_comp, 4))) == 1));

          if(omc_NFBinding_isExplicitlyBound(threadData, (OMC_BOX_FIELD(_comp, 4))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT53, omc_NFInstanceAPI_dumpJSONBinding(threadData, (OMC_BOX_FIELD(_comp, 4)), _originalBinding, _is_constant), _json);
          }

          if(omc_NFBinding_isBound(threadData, (OMC_BOX_FIELD(_comp, 5))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT29, omc_NFInstanceAPI_dumpJSONBinding(threadData, (OMC_BOX_FIELD(_comp, 5)), mmc_mk_none(), 1 /* true */), _json);
          }

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT19, omc_NFInstanceAPI_dumpJSONAttributes(threadData, (OMC_BOX_FIELD(_elem, 4)), (OMC_BOX_FIELD(_elem, 3)), _scope), _json);

          _json = omc_NFInstanceAPI_dumpJSONComment(threadData, (OMC_BOX_FIELD(_comp, 7)), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);

          if(omc_NFInstNode_InstNode_isGeneratedInner(threadData, _node))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT76, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_AbsynUtil_isOnlyOuter(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_elem, 3)), 5)))) goto tmp2_end;
          _path = omc_AbsynUtil_typeSpecPath(threadData, (OMC_BOX_FIELD(_elem, 5)));

          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp7;
              int tmp8;
              tmp7 = 0;
              OMC_TRY_INTERNAL(mmc_jumper)
              tmp6_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp7 < 2; tmp7++) {
                switch (MMC_SWITCH_CAST(tmp7)) {
                case 0: {
                  /* Pattern matching succeeded */
                  _ty_node = omc_NFLookup_lookupName(threadData, _path, _scope, omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 4)), 0 /* false */, NULL, NULL);

                  _json = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONSCodeClass(threadData, omc_NFInstNode_InstNode_definition(threadData, _ty_node), _ty_node, omc_NFInstNode_InstNode_resolveInner(threadData, _component), 0 /* false */, omc_JSON_makeNull(threadData)), _json);
                  goto tmp6_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  _json = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONPath(threadData, _path), _json);
                  goto tmp6_done;
                }
                }
                goto tmp6_end;
                tmp6_end: ;
              }
              goto goto_5;
              tmp6_done:
              (void)tmp7;
              OMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp6_done2;
              goto_5:;
              OMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp7 < 2) {
                goto tmp6_top;
              }
              goto goto_1;
              tmp6_done2:;
            }
          }
          ;

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT19, omc_NFInstanceAPI_dumpJSONAttributes(threadData, (OMC_BOX_FIELD(_elem, 4)), (OMC_BOX_FIELD(_elem, 3)), _scope), _json);

          _json = omc_NFInstanceAPI_dumpJSONComment(threadData, (OMC_BOX_FIELD(_elem, 7)), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
          goto tmp2_done;
        }
        case 4: {
          modelica_string tmp9;
          
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_OMC_LIT77,omc_NFInstNode_InstNode_name(threadData, _node));
          omc_Error_terminate(threadData, tmp9, _OMC_LIT79);
          goto goto_1;
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
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONReplaceableClass(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _elem = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _elem has no default value.
  // _node has no default value.
  _node = omc_NFInstNode_InstNode_getRedeclaredNode(threadData, _cls);

  _elem = omc_NFInstNode_InstNode_definition(threadData, _node);

  _json = omc_NFInstanceAPI_dumpJSONSCodeClass(threadData, _elem, _scope, _node, 1 /* true */, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT74, omc_JSON_dumpJSONSourceInfo(threadData, omc_NFInstNode_InstNode_info(threadData, _node), 1 /* true */), _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_getExtendsModifier(threadData_t *threadData, modelica_metatype _definition, modelica_metatype _node)
{
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _definition;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_definition, 4));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_SCodeUtil_elementMod(threadData, omc_NFInstNode_InstNode_definition(threadData, omc_NFInstNode_InstNode_getDerivedNode(threadData, _node, 0 /* false */)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT80;
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mod;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONBuiltinBaseClass(threadData_t *threadData, modelica_string _name)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  _json = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT13, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT9, omc_JSON_makeString(threadData, _name), _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONExtends(threadData_t *threadData, modelica_metatype _ext, modelica_boolean _isDeleted)
{
  modelica_metatype _json = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _cls_def = NULL;
  modelica_metatype _ext_def = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _node has no default value.
  // _cls has no default value.
  // _cls_def has no default value.
  // _ext_def has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _ext;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _node = tmpMeta2;

  _cls_def = omc_NFInstNode_InstNode_definition(threadData, _node);

  /* Pattern-matching assignment */
  tmpMeta3 = omc_NFInstNode_InstNode_extendsDefinition(threadData, _node);
  if (optionNone(tmpMeta3)) OMC_THROW_INTERNAL();
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
  _ext_def = tmpMeta4;

  _json = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT13, _json);

  _json = omc_NFInstanceAPI_dumpJSONSCodeMod(threadData, omc_NFInstanceAPI_getExtendsModifier(threadData, _ext_def, _node), _node, _json);

  _json = omc_NFInstanceAPI_dumpJSONCommentOpt(threadData, omc_SCodeUtil_getElementComment(threadData, _ext_def), _node, _json, 1 /* true */, 1 /* true */, 0 /* false */);

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _node);

  if((omc_NFClass_isOnlyBuiltin(threadData, _cls) && (!omc_NFClass_isEnumeration(threadData, _cls))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT9, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _node)), _json);
  }
  else
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT9, omc_NFInstanceAPI_dumpJSONInstanceTree(threadData, _ext, _node, 0 /* false */, _isDeleted, 1 /* true */), _json);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONExtends(threadData_t *threadData, modelica_metatype _ext, modelica_metatype _isDeleted)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_isDeleted);
  _json = omc_NFInstanceAPI_dumpJSONExtends(threadData, _ext, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _scope, modelica_boolean _isDeleted)
{
  modelica_metatype _json = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta18;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _j has no default value.
  if(_isDeleted)
  {
    {
      modelica_metatype _e;
      for (tmpMeta1 = _elements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _e = MMC_CAR(tmpMeta1);
        { /* match expression */
          modelica_metatype tmp5_1;
          tmp5_1 = _e;
          {
            volatile mmc_switch_type tmp5;
            int tmp6;
            tmp5 = 0;
            for (; tmp5 < 2; tmp5++) {
              switch (MMC_SWITCH_CAST(tmp5)) {
              case 0: {
                modelica_metatype tmpMeta7;
                modelica_integer tmp8;
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,3) == 0) goto tmp4_end;
                tmpMeta7 = OMC_BOX_FIELD(tmp5_1, 4);
                tmp8 = omc_unbox_integer(tmpMeta7);
                if (1 /* true */ != tmp8) goto tmp4_end;
                /* Pattern matching succeeded */
                tmpMeta2 = omc_NFInstanceAPI_dumpJSONExtends(threadData, _e, _isDeleted);
                goto tmp4_done;
              }
              case 1: {
                
                /* Pattern matching succeeded */
                tmpMeta2 = omc_JSON_makeNull(threadData);
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
        _j = tmpMeta2;

        _json = omc_JSON_addElementNotNull(threadData, _j, _json);
      }
    }
  }
  else
  {
    {
      modelica_metatype _e;
      for (tmpMeta10 = _elements; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
      {
        _e = MMC_CAR(tmpMeta10);
        { /* match expression */
          modelica_metatype tmp14_1;
          tmp14_1 = _e;
          {
            volatile mmc_switch_type tmp14;
            int tmp15;
            tmp14 = 0;
            for (; tmp14 < 5; tmp14++) {
              switch (MMC_SWITCH_CAST(tmp14)) {
              case 0: {
                modelica_metatype tmpMeta16;
                modelica_integer tmp17;
                if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,1,3) == 0) goto tmp13_end;
                tmpMeta16 = OMC_BOX_FIELD(tmp14_1, 4);
                tmp17 = omc_unbox_integer(tmpMeta16);
                if (1 /* true */ != tmp17) goto tmp13_end;
                /* Pattern matching succeeded */
                tmpMeta11 = omc_NFInstanceAPI_dumpJSONExtends(threadData, _e, _isDeleted);
                goto tmp13_done;
              }
              case 1: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,1,3) == 0) goto tmp13_end;
                
                /* Pattern matching succeeded */
                tmpMeta11 = omc_NFInstanceAPI_dumpJSONReplaceableClass(threadData, (OMC_BOX_FIELD(_e, 2)), _scope);
                goto tmp13_done;
              }
              case 2: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,0,3) == 0) goto tmp13_end;
                
                /* Pattern matching succeeded */
                tmpMeta11 = omc_NFInstanceAPI_dumpJSONComponent(threadData, (OMC_BOX_FIELD(_e, 2)), (OMC_BOX_FIELD(_e, 3)), (OMC_BOX_FIELD(_e, 4)));
                goto tmp13_done;
              }
              case 3: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,2,1) == 0) goto tmp13_end;
                
                /* Pattern matching succeeded */
                tmpMeta11 = omc_NFInstanceAPI_dumpJSONBuiltinBaseClass(threadData, (OMC_BOX_FIELD(_e, 2)));
                goto tmp13_done;
              }
              case 4: {
                
                /* Pattern matching succeeded */
                tmpMeta11 = omc_JSON_makeNull(threadData);
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
        _j = tmpMeta11;

        _json = omc_JSON_addElementNotNull(threadData, _j, _json);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _scope, modelica_metatype _isDeleted)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_isDeleted);
  _json = omc_NFInstanceAPI_dumpJSONElements(threadData, _elements, _scope, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONPath(threadData_t *threadData, modelica_metatype _path)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeString(threadData, omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT81, 1 /* true */, 0 /* false */));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONNodeEnclosingPath(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_NFInstanceAPI_dumpJSONPath(threadData, omc_NFInstNode_InstNode_enclosingScopePath(threadData, _node, 1 /* true */, 0 /* false */));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONNodePath(threadData_t *threadData, modelica_metatype _node, modelica_boolean _ignoreBaseClass)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_NFInstanceAPI_dumpJSONPath(threadData, omc_NFInstNode_InstNode_enclosingScopePath(threadData, _node, 0 /* false */, _ignoreBaseClass));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONNodePath(threadData_t *threadData, modelica_metatype _node, modelica_metatype _ignoreBaseClass)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_ignoreBaseClass);
  _json = omc_NFInstanceAPI_dumpJSONNodePath(threadData, _node, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONInstanceAnnotationExtends(threadData_t *threadData, modelica_metatype _ext, modelica_metatype _filter, modelica_boolean _dumpDerivedBase)
{
  modelica_metatype _json = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  _json = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT13, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT9, omc_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData, _ext, _filter, 0 /* false */, _dumpDerivedBase), _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONInstanceAnnotationExtends(threadData_t *threadData, modelica_metatype _ext, modelica_metatype _filter, modelica_metatype _dumpDerivedBase)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_dumpDerivedBase);
  _json = omc_NFInstanceAPI_dumpJSONInstanceAnnotationExtends(threadData, _ext, _filter, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONInstanceAnnotationConnectors(threadData_t *threadData, modelica_metatype _node, modelica_metatype __omcQ_24in_5Fjson, modelica_boolean __omcQ_24in_5Fany, modelica_boolean *out_any)
{
  modelica_metatype _json = NULL;
  modelica_boolean _any;
  modelica_integer _context;
  modelica_metatype _ty_node = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta10;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  _any = __omcQ_24in_5Fany;
  _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 8));
  // _ty_node has no default value.
  // _e has no default value.
  {
    modelica_metatype _el;
    for (tmpMeta1 = omc_SCodeUtil_getClassElements(threadData, omc_NFInstNode_InstNode_definition(threadData, _node)); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _el = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _el;
        {
          volatile mmc_switch_type tmp4;
          int tmp5;
          tmp4 = 0;
          for (; tmp4 < 2; tmp4++) {
            switch (MMC_SWITCH_CAST(tmp4)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
              
              /* Pattern matching succeeded */
              { /* matchcontinue expression */
                {
                  volatile mmc_switch_type tmp8;
                  int tmp9;
                  tmp8 = 0;
                  OMC_TRY_INTERNAL(mmc_jumper)
                  tmp7_top:
                  threadData->mmc_jumper = &new_mmc_jumper;
                  for (; tmp8 < 2; tmp8++) {
                    switch (MMC_SWITCH_CAST(tmp8)) {
                    case 0: {
                      /* Pattern matching succeeded */
                      _ty_node = omc_NFLookup_lookupClassName(threadData, omc_AbsynUtil_typeSpecPath(threadData, (OMC_BOX_FIELD(_el, 5))), _node, _context, (OMC_BOX_FIELD(_el, 9)), 1 /* true */, NULL);

                      if(omc_SCodeUtil_isConnector(threadData, omc_SCodeUtil_getClassRestriction(threadData, omc_NFInstNode_InstNode_definition(threadData, _ty_node))))
                      {
                        _ty_node = omc_NFInst_expand(threadData, _ty_node, _context);

                        _e = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT28, omc_JSON_makeNull(threadData));

                        _e = omc_JSON_addPair(threadData, _OMC_LIT17, omc_JSON_makeString(threadData, (OMC_BOX_FIELD(_el, 2))), _e);

                        _e = omc_NFInstanceAPI_dumpJSONAnnotationOpt(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_el, 7)), 2)), _node, _OMC_LIT83, 0 /* false */, _e);

                        _e = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData, _ty_node, _OMC_LIT85, 0 /* false */, 1 /* true */), _e);

                        _json = omc_JSON_addElement(threadData, _e, _json);

                        _any = 1 /* true */;
                      }
                      goto tmp7_done;
                    }
                    case 1: {
                      /* Pattern matching succeeded */
                      goto tmp7_done;
                    }
                    }
                    goto tmp7_end;
                    tmp7_end: ;
                  }
                  goto goto_6;
                  tmp7_done:
                  (void)tmp8;
                  OMC_RESTORE_INTERNAL(mmc_jumper);
                  goto tmp7_done2;
                  goto_6:;
                  OMC_CATCH_INTERNAL(mmc_jumper);
                  if (++tmp8 < 2) {
                    goto tmp7_top;
                  }
                  goto goto_2;
                  tmp7_done2:;
                }
              }
              ;
              goto tmp3_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
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
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_any) { *out_any = _any; }
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONInstanceAnnotationConnectors(threadData_t *threadData, modelica_metatype _node, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype __omcQ_24in_5Fany, modelica_metatype *out_any)
{
  modelica_integer tmp1;
  modelica_boolean _any;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(__omcQ_24in_5Fany);
  _json = omc_NFInstanceAPI_dumpJSONInstanceAnnotationConnectors(threadData, _node, __omcQ_24in_5Fjson, tmp1, &_any);
  /* skip box _json; JSON */
  if (out_any) { *out_any = omc_mk_icon(_any); }
  return _json;
}

static modelica_metatype closure0_SCodeUtil_filterGivenSubModNames(threadData_t *thData, modelica_metatype closure, modelica_metatype submod)
{
  modelica_metatype namesToKeep = OMC_BOX_FIELD(closure, 1);
  return boxptr_SCodeUtil_filterGivenSubModNames(thData, submod, namesToKeep);
}
DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData_t *threadData, modelica_metatype _node, modelica_metatype _filter, modelica_boolean _dumpConnectors, modelica_boolean _dumpDerivedBase)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype _ann = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype _scope = NULL;
  modelica_integer _context;
  modelica_boolean _annotation_is_literal;
  modelica_boolean _any_element;
  modelica_metatype _def = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _cmt has no default value.
  // _ann has no default value.
  // _j has no default value.
  _scope = _node;
  // _context has no default value.
  _annotation_is_literal = 1 /* true */;
  _any_element = 0 /* false */;
  // _def has no default value.
  // _cls has no default value.
  omc_NFInst_expand(threadData, _node, ((modelica_integer) 1));

  _def = omc_NFInstNode_InstNode_definition(threadData, _node);

  _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_NFInstanceAPI_dumpJSONNodePath(threadData, _node, 0 /* false */), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, omc_NFRestriction_toString(threadData, omc_NFInstNode_InstNode_restriction(threadData, _node))), _json);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT19, omc_NFInstanceAPI_dumpJSONClassPrefixes(threadData, _def, omc_NFInstNode_InstNode_parent(threadData, _node)), _json);

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _node);

  _j = omc_JSON_emptyArray(threadData, ((modelica_integer) 0));

  if(_dumpDerivedBase)
  {
    { /* match expression */
      modelica_metatype tmp3_1;
      tmp3_1 = _cls;
      {
        int tmp3;
        {
          switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
          case 7: {
            
            /* Pattern matching succeeded */
            _j = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONInstanceAnnotationExtends(threadData, (OMC_BOX_FIELD(_cls, 2)), _filter, 1 /* true */), _j);

            _any_element = 1 /* true */;
            goto tmp2_done;
          }
          case 10: {
            
            /* Pattern matching succeeded */
            _j = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONInstanceAnnotationExtends(threadData, (OMC_BOX_FIELD(_cls, 3)), _filter, 1 /* true */), _j);

            _any_element = 1 /* true */;
            goto tmp2_done;
          }
          default:
          tmp2_default: OMC_LABEL_UNUSED; {
            
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
  }

  if((!_any_element))
  {
    {
      modelica_metatype _ext;
      for (tmpMeta4 = omc_NFClassTree_ClassTree_getExtends(threadData, omc_NFClass_classTree(threadData, _cls)), tmp7 = arrayLength(tmpMeta4), tmp6 = 1; tmp6 <= tmp7; tmp6++)
      {
        _ext = arrayGet(tmpMeta4,tmp6);
        _j = omc_JSON_addElement(threadData, omc_NFInstanceAPI_dumpJSONInstanceAnnotationExtends(threadData, _ext, _filter, _dumpDerivedBase), _j);

        _any_element = 1 /* true */;
      }
    }
  }

  if(_dumpConnectors)
  {
    _j = omc_NFInstanceAPI_dumpJSONInstanceAnnotationConnectors(threadData, _node, _j, _any_element ,&_any_element);
  }

  if(_any_element)
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT14, _j, _json);
  }

  _cmt = omc_SCodeUtil_getElementComment(threadData, omc_NFInstNode_InstNode_definition(threadData, _node));

  { /* match expression */
    modelica_metatype tmp11_1;
    tmp11_1 = _cmt;
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
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          if (optionNone(tmp11_1)) goto tmp10_end;
          tmpMeta13 = OMC_BOX_FIELD(tmp11_1, 1);
          tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 2);
          if (optionNone(tmpMeta14)) goto tmp10_end;
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 1);
          
          _ann = tmpMeta15;
          /* Pattern matching succeeded */
          if((!listEmpty(_filter)))
          {
            tmpMeta17 = omc_mk_box1(0, _filter);
            tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(3));
            memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_ann), 3*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = omc_SCodeUtil_filterSubMods(threadData, (OMC_BOX_FIELD(_ann, 2)), (modelica_fnptr) omc_mk_box2(0,closure0_SCodeUtil_filterGivenSubModNames,tmpMeta17));
            _ann = tmpMeta16;
          }

          _annotation_is_literal = omc_SCodeUtil_onlyLiteralsInMod(threadData, (OMC_BOX_FIELD(_ann, 2)));
          tmp19 = (modelica_boolean)omc_SCodeUtil_isEmptyMod(threadData, (OMC_BOX_FIELD(_ann, 2)));
          if(tmp19)
          {
            tmpMeta20 = mmc_mk_none();
          }
          else
          {
            tmpMeta18 = omc_mk_box3(3, &SCode_Comment_COMMENT__desc, mmc_mk_some(_ann), mmc_mk_none());
            tmpMeta20 = mmc_mk_some(tmpMeta18);
          }
          tmpMeta8 = tmpMeta20;
          goto tmp10_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_none();
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
  _cmt = tmpMeta8;

  if((!_annotation_is_literal))
  {
    omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT86);

    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp23;
        int tmp24;
        tmp23 = 0;
        OMC_TRY_INTERNAL(mmc_jumper)
        tmp22_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp23 < 2; tmp23++) {
          switch (MMC_SWITCH_CAST(tmp23)) {
          case 0: {
            /* Pattern matching succeeded */
            _context = omc_NFInstContext_set(threadData, ((modelica_integer) 8), ((modelica_integer) 1));

            _scope = omc_NFInstNode_InstNode_makeRootClass(threadData, _scope, _OMC_LIT7, mmc_mk_none());

            _scope = omc_NFInst_instantiate(threadData, _scope, _OMC_LIT87, _OMC_LIT7, _context, 1 /* true */);

            omc_NFInst_insertGeneratedInners(threadData, _scope, omc_NFInstNode_InstNode_topScope(threadData, _scope), _context);

            omc_NFInst_instExpressions(threadData, _scope, _scope, _OMC_LIT88, omc_NFConnectBreakTree_new(threadData), _context, _OMC_LIT89);
            goto tmp22_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            goto tmp22_done;
          }
          }
          goto tmp22_end;
          tmp22_end: ;
        }
        goto goto_21;
        tmp22_done:
        (void)tmp23;
        OMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp22_done2;
        goto_21:;
        OMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp23 < 2) {
          goto tmp22_top;
        }
        OMC_THROW_INTERNAL();
        tmp22_done2:;
      }
    }
    ;

    omc_ErrorExt_rollBack(threadData, _OMC_LIT86);
  }

  _json = omc_NFInstanceAPI_dumpJSONCommentOpt(threadData, _cmt, _scope, _json, 1 /* true */, 1 /* true */, 1 /* true */);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData_t *threadData, modelica_metatype _node, modelica_metatype _filter, modelica_metatype _dumpConnectors, modelica_metatype _dumpDerivedBase)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_dumpConnectors);
  tmp2 = omc_unbox_integer(_dumpDerivedBase);
  _json = omc_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData, _node, _filter, tmp1, tmp2);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONInstanceTree(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _scope, modelica_boolean _root, modelica_boolean _isDeleted, modelica_boolean _isExtends)
{
  modelica_metatype _json = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype _sections = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype _def = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _node has no default value.
  // _elems has no default value.
  // _sections has no default value.
  // _cmt has no default value.
  // _def has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  _node = tmpMeta2;
  _elems = tmpMeta3;

  _node = omc_NFInstNode_InstNode_resolveOuter(threadData, _node);

  _def = omc_NFInstNode_InstNode_definition(threadData, _node);

  _cmt = omc_SCodeUtil_getElementComment(threadData, _def);

  _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_NFInstanceAPI_dumpJSONNodePath(threadData, _node, 0 /* false */), _json);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT10, omc_NFInstanceAPI_dumpJSONClassDims(threadData, _node, _def), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, omc_SCodeDump_restrictionStringPP(threadData, omc_SCodeUtil_getClassRestriction(threadData, _def))), _json);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT19, omc_NFInstanceAPI_dumpJSONClassPrefixes(threadData, _def, omc_NFInstNode_InstNode_parent(threadData, _node)), _json);

  _json = omc_NFInstanceAPI_dumpJSONCommentOpt(threadData, _cmt, _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT14, omc_NFInstanceAPI_dumpJSONElements(threadData, _elems, _node, _isDeleted), _json);

  if((!_isDeleted))
  {
    _json = omc_NFInstanceAPI_dumpJSONImports(threadData, _node, _json);

    _sections = omc_NFClass_getSections(threadData, omc_NFInstNode_InstNode_getClass(threadData, _node));

    _json = omc_NFInstanceAPI_dumpJSONEquations(threadData, _sections, _node, _json);
  }

  _json = omc_JSON_addPair(threadData, _OMC_LIT74, omc_JSON_dumpJSONSourceInfo(threadData, omc_NFInstNode_InstNode_info(threadData, _node), 1 /* true */), _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONInstanceTree(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _scope, modelica_metatype _root, modelica_metatype _isDeleted, modelica_metatype _isExtends)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _json = NULL;
  tmp1 = omc_unbox_integer(_root);
  tmp2 = omc_unbox_integer(_isDeleted);
  tmp3 = omc_unbox_integer(_isExtends);
  _json = omc_NFInstanceAPI_dumpJSONInstanceTree(threadData, _tree, _scope, tmp1, tmp2, tmp3);
  /* skip box _json; JSON */
  return _json;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_buildInstanceTreeComponent(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _inner_node = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _opt_binding = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tree has no default value.
  // _inner_node has no default value.
  // _cls_node has no default value.
  // _cls has no default value.
  // _binding has no default value.
  // _opt_binding has no default value.
  _inner_node = omc_NFInstNode_InstNode_resolveOuter(threadData, _node);

  _cls_node = omc_NFInstNode_InstNode_classScope(threadData, _inner_node);

  if(omc_NFInstNode_InstNode_isEmpty(threadData, _cls_node))
  {
    _cls = _OMC_LIT90;
  }
  else
  {
    _cls = omc_NFInstanceAPI_buildInstanceTree(threadData, _cls_node, 0 /* false */);
  }

  if(omc_NFInstNode_InstNode_isComponent(threadData, _inner_node))
  {
    _binding = omc_NFComponent_getBinding(threadData, omc_NFInstNode_InstNode_component(threadData, _inner_node));

    _opt_binding = (omc_NFBinding_isBound(threadData, _binding)?mmc_mk_some(_binding):mmc_mk_none());
  }
  else
  {
    _opt_binding = mmc_mk_none();
  }

  tmpMeta1 = omc_mk_box4(3, &NFInstanceAPI_InstanceTree_COMPONENT__desc, _node, _opt_binding, _cls);
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_buildInstanceTreeGeneratedInners(threadData_t *threadData, modelica_metatype _classTree, modelica_metatype _elements)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
  // _comps has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _elems = tmpMeta1;
  /* Pattern-matching assignment */
  tmpMeta2 = _classTree;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,2,7) == 0) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 4);
  _comps = tmpMeta3;

  tmp5 = arrayLength(_comps); tmp6 = ((modelica_integer) -1); tmp7 = ((modelica_integer) 1);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_comps); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
    {

      if(omc_NFInstNode_InstNode_isGeneratedInner(threadData, omc_Mutable_access(threadData, arrayGet(_comps,_i) /* DAE.ASUB */)))
      {
        tmpMeta4 = mmc_mk_cons(omc_NFInstanceAPI_buildInstanceTreeComponent(threadData, omc_Mutable_access(threadData, arrayGet(_comps,_i) /* DAE.ASUB */)), _elems);
        _elems = tmpMeta4;
      }
      else
      {
        break;
      }
    }
  }

  if(listEmpty(_elems))
  {
    _outElements = _elements;
  }
  else
  {
    _outElements = listAppend(_elements, _elems);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outElements;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_buildInstanceTreeElements(threadData_t *threadData, modelica_metatype _classDefinition, modelica_metatype _classTree)
{
  modelica_metatype _elements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _scode_elems = NULL;
  modelica_metatype _clss = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _exts = NULL;
  modelica_integer _cls_index;
  modelica_integer _comp_index;
  modelica_integer _ext_index;
  modelica_metatype _tree = NULL;
  modelica_metatype _local_comps = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta30;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _elements = tmpMeta1;
  // _scode_elems has no default value.
  // _clss has no default value.
  // _comps has no default value.
  // _exts has no default value.
  _cls_index = ((modelica_integer) 1);
  _comp_index = ((modelica_integer) 1);
  _ext_index = ((modelica_integer) 1);
  // _tree has no default value.
  // _local_comps has no default value.
  // _node has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _classTree;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,2,7) == 0) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 3);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 4);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta2, 5);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta2, 6);
  _clss = tmpMeta3;
  _comps = tmpMeta4;
  _local_comps = tmpMeta5;
  _exts = tmpMeta6;

  _scode_elems = omc_SCodeUtil_getClassElements(threadData, _classDefinition);

  if((!listEmpty(_local_comps)))
  {
    /* Pattern-matching assignment */
    tmpMeta7 = _local_comps;
    if (listEmpty(tmpMeta7)) OMC_THROW_INTERNAL();
    tmpMeta8 = MMC_CAR(tmpMeta7);
    tmpMeta9 = MMC_CDR(tmpMeta7);
    tmp10 = omc_unbox_integer(tmpMeta8);
    _comp_index = tmp10  /* pattern as ty=Integer */;
    _local_comps = tmpMeta9;
  }

  {
    modelica_metatype _e;
    for (tmpMeta11 = _scode_elems; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
    {
      _e = MMC_CAR(tmpMeta11);
      { /* match expression */
        modelica_metatype tmp15_1;
        tmp15_1 = _e;
        {
          volatile mmc_switch_type tmp15;
          int tmp16;
          tmp15 = 0;
          for (; tmp15 < 4; tmp15++) {
            switch (MMC_SWITCH_CAST(tmp15)) {
            case 0: {
              modelica_metatype tmpMeta17;
              if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,1,5) == 0) goto tmp14_end;
              
              /* Pattern matching succeeded */
              _tree = omc_NFInstanceAPI_buildInstanceTree(threadData, arrayGet(_exts,_ext_index) /* DAE.ASUB */, 1 /* true */);

              _ext_index = ((modelica_integer) 1) + _ext_index;
              tmpMeta17 = mmc_mk_cons(_tree, _elements);
              tmpMeta12 = tmpMeta17;
              goto tmp14_done;
            }
            case 1: {
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,2,8) == 0) goto tmp14_end;
              
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!omc_SCodeUtil_isElementReplaceable(threadData, _e)) goto tmp14_end;
              while(1)
              {
                if(!(!stringEqual(omc_NFInstNode_InstNode_name(threadData, omc_Mutable_access(threadData, arrayGet(_clss,_cls_index) /* DAE.ASUB */)), (OMC_BOX_FIELD(_e, 2))))) break;
                _cls_index = ((modelica_integer) 1) + _cls_index;
              }

              tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta19 = omc_mk_box4(4, &NFInstanceAPI_InstanceTree_CLASS__desc, omc_Mutable_access(threadData, arrayGet(_clss,_cls_index) /* DAE.ASUB */), tmpMeta18, omc_mk_boolean(0 /* false */));
              _tree = tmpMeta19;

              _cls_index = ((modelica_integer) 1) + _cls_index;
              tmpMeta20 = mmc_mk_cons(_tree, _elements);
              tmpMeta12 = tmpMeta20;
              goto tmp14_done;
            }
            case 2: {
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_integer tmp24;
              modelica_metatype tmpMeta25;
              modelica_metatype tmpMeta26;
              modelica_metatype tmpMeta27;
              modelica_metatype tmpMeta28;
              modelica_integer tmp29;
              if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,3,8) == 0) goto tmp14_end;
              
              /* Pattern matching succeeded */
              while(1)
              {
                if(!1 /* true */) break;
                _node = omc_Mutable_access(threadData, arrayGet(_comps,_comp_index) /* DAE.ASUB */);

                if(((stringEqual(omc_NFInstNode_InstNode_name(threadData, _node), (OMC_BOX_FIELD(_e, 2)))) && (!omc_NFInstNode_InstNode_isGeneratedInner(threadData, _node))))
                {
                  break;
                }

                /* Pattern-matching assignment */
                tmpMeta21 = _local_comps;
                if (listEmpty(tmpMeta21)) goto goto_13;
                tmpMeta22 = MMC_CAR(tmpMeta21);
                tmpMeta23 = MMC_CDR(tmpMeta21);
                tmp24 = omc_unbox_integer(tmpMeta22);
                _comp_index = tmp24  /* pattern as ty=Integer */;
                _local_comps = tmpMeta23;
              }

              _tree = omc_NFInstanceAPI_buildInstanceTreeComponent(threadData, _node);

              tmpMeta25 = mmc_mk_cons(_tree, _elements);
              _elements = tmpMeta25;

              if((!listEmpty(_local_comps)))
              {
                /* Pattern-matching assignment */
                tmpMeta26 = _local_comps;
                if (listEmpty(tmpMeta26)) goto goto_13;
                tmpMeta27 = MMC_CAR(tmpMeta26);
                tmpMeta28 = MMC_CDR(tmpMeta26);
                tmp29 = omc_unbox_integer(tmpMeta27);
                _comp_index = tmp29  /* pattern as ty=Integer */;
                _local_comps = tmpMeta28;
              }
              tmpMeta12 = _elements;
              goto tmp14_done;
            }
            case 3: {
              
              /* Pattern matching succeeded */
              tmpMeta12 = _elements;
              goto tmp14_done;
            }
            }
            goto tmp14_end;
            tmp14_end: ;
          }
          goto goto_13;
          goto_13:;
          OMC_THROW_INTERNAL();
          goto tmp14_done;
          tmp14_done:;
        }
      }
      _elements = tmpMeta12;
    }
  }

  _elements = listReverseInPlace(_elements);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _elements;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_buildInstanceTree(threadData_t *threadData, modelica_metatype _node, modelica_boolean _isDerived)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _cls_tree = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tree has no default value.
  // _cls_node has no default value.
  // _cls has no default value.
  // _cls_tree has no default value.
  // _elems has no default value.
  _cls_node = omc_NFInstNode_InstNode_resolveInner(threadData, _node);

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _cls_node);

  if((((!_isDerived) && omc_NFClass_isOnlyBuiltin(threadData, _cls)) && (!omc_NFClass_isEnumeration(threadData, _cls))))
  {
    _tree = _OMC_LIT90;

    goto _return;
  }

  _cls_tree = omc_NFClass_classTree(threadData, _cls);

  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _cls;
    tmp4_2 = _cls_tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(omc_NFInstanceAPI_buildInstanceTree(threadData, (OMC_BOX_FIELD(_cls, 2)), 1 /* true */), MMC_REFSTRUCTLIT(mmc_nil));
          _elems = tmpMeta6;
          tmpMeta7 = omc_mk_box4(4, &NFInstanceAPI_InstanceTree_CLASS__desc, _node, _elems, omc_mk_boolean(_isDerived));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _elems = omc_NFInstanceAPI_buildInstanceTreeElements(threadData, omc_NFInstNode_InstNode_definition(threadData, _cls_node), _cls_tree);

          if(omc_NFInstNode_InstNode_isRootClass(threadData, _node))
          {
            _elems = omc_NFInstanceAPI_buildInstanceTreeGeneratedInners(threadData, _cls_tree, _elems);
          }
          tmpMeta8 = omc_mk_box4(4, &NFInstanceAPI_InstanceTree_CLASS__desc, _node, _elems, omc_mk_boolean(_isDerived));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp10 = (modelica_boolean)omc_NFInstNode_InstNode_isEnumerationType(threadData, _cls_node);
          if(tmp10)
          {
            tmpMeta11 = _OMC_LIT93;
          }
          else
          {
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta11 = tmpMeta9;
          }
          tmpMeta12 = omc_mk_box4(4, &NFInstanceAPI_InstanceTree_CLASS__desc, _node, tmpMeta11, omc_mk_boolean(_isDerived));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_Error_terminate(threadData, _OMC_LIT94, _OMC_LIT95);
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_buildInstanceTree(threadData_t *threadData, modelica_metatype _node, modelica_metatype _isDerived)
{
  modelica_integer tmp1;
  modelica_metatype _tree = NULL;
  tmp1 = omc_unbox_integer(_isDerived);
  _tree = omc_NFInstanceAPI_buildInstanceTree(threadData, _node, tmp1);
  /* skip box _tree; NFInstanceAPI.InstanceTree */
  return _tree;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_parseModifier(threadData_t *threadData, modelica_string _modifierValue, modelica_metatype _scope)
{
  modelica_metatype _outMod = NULL;
  modelica_metatype _amod = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMod has no default value.
  // _amod has no default value.
  // _smod has no default value.
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
          modelica_string tmp5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = stringAppend(_OMC_LIT0,_modifierValue);
          tmpMeta6 = omc_Parser_stringMod(threadData, tmp5, _OMC_LIT1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,6) == 0) goto goto_1;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 5);
          if (optionNone(tmpMeta7)) goto goto_1;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
          _amod = tmpMeta8;

          _smod = omc_AbsynToSCode_translateMod(threadData, mmc_mk_some(_amod), _OMC_LIT2, _OMC_LIT3, mmc_mk_none(), _OMC_LIT6, 0 /* false */);

          _outMod = omc_NFModifier_Modifier_create(threadData, _smod, _OMC_LIT4, _OMC_LIT96, _scope, ((modelica_integer) 0));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outMod = _OMC_LIT87;
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
  omc_ret_ = _outMod;
  return omc_ret_;
}

modelica_boolean omc_NFInstanceAPI_releaseModelInstanceReferenceImpl(threadData_t *threadData, modelica_integer _handle)
{
  int _handle_ext;
  int _success_ext;
  modelica_boolean _success;
  // _success has no default value.
  _handle_ext = (int) _handle;
  _success_ext = ModelInstanceReference_release(_handle_ext);
  _success = (modelica_boolean)_success_ext;
  return _success;
}
modelica_metatype boxptr_NFInstanceAPI_releaseModelInstanceReferenceImpl(threadData_t *threadData, modelica_metatype _handle)
{
  modelica_integer tmp1;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = omc_unbox_integer(_handle);
  _success = omc_NFInstanceAPI_releaseModelInstanceReferenceImpl(threadData, tmp1);
  out_success = omc_mk_icon(_success);
  return out_success;
}

modelica_integer omc_NFInstanceAPI_storeModelInstanceReference(threadData_t *threadData, modelica_metatype _json)
{
  modelica_metatype _json_ext;
  int _handle_ext;
  modelica_integer _handle;
  // _handle has no default value.
  _json_ext = (modelica_metatype) _json;
  _handle_ext = ModelInstanceReference_store(_json_ext);
  _handle = (modelica_integer)_handle_ext;
  return _handle;
}
modelica_metatype boxptr_NFInstanceAPI_storeModelInstanceReference(threadData_t *threadData, modelica_metatype _json)
{
  modelica_integer _handle;
  modelica_metatype out_handle;
  _handle = omc_NFInstanceAPI_storeModelInstanceReference(threadData, _json);
  out_handle = omc_mk_icon(_handle);
  return out_handle;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_iconJSONFromTop(threadData_t *threadData, modelica_metatype _top, modelica_metatype _classPath)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_integer _context;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _cls_node has no default value.
  // _context has no default value.
  _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 8));

  _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 2));

  _cls_node = omc_NFInst_lookupRootClass(threadData, _classPath, _top, _context);

  _cls_node = omc_NFInstNode_InstNode_resolveInner(threadData, _cls_node);

  _json = omc_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData, _cls_node, _OMC_LIT85, 1 /* true */, 1 /* true */);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
void omc_NFInstanceAPI_clearTopScopeCache(threadData_t *threadData)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 11), tmpMeta1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  setGlobalRoot(((modelica_integer) 38), tmpMeta2);

  setGlobalRoot(((modelica_integer) 40), mmc_mk_none());

  omc_MutableWeak_clearRoots(threadData);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_resolveOne(threadData_t *threadData, modelica_metatype _reference, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _resolved = NULL;
  modelica_metatype _node = NULL;
  modelica_string _qualified = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _resolved has no default value.
  // _node has no default value.
  // _qualified has no default value.
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
          _node = omc_NFLookup_lookupClassName(threadData, _reference, _scope, _context, _info, 1 /* true */, NULL);

          _node = omc_NFInst_expand(threadData, _node, _context);

          omc_string_store(&(_qualified), omc_AbsynUtil_pathString(threadData, omc_NFInstNode_InstNode_fullPath(threadData, _node, 0 /* false */), _OMC_LIT81, 1 /* true */, 0 /* false */));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_string_store(&(_qualified), _OMC_LIT4);
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

  tmpMeta5 = omc_mk_box2(0, omc_AbsynUtil_pathString(threadData, _reference, _OMC_LIT81, 1 /* true */, 0 /* false */), _qualified);
  _resolved = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _resolved;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_resolveOne(threadData_t *threadData, modelica_metatype _reference, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _resolved = NULL;
  tmp1 = omc_unbox_integer(_context);
  _resolved = omc_NFInstanceAPI_resolveOne(threadData, _reference, _scope, tmp1, _info);
  /* skip box _resolved; tuple<String, String> */
  return _resolved;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_resolveNamesFromTop(threadData_t *threadData, modelica_metatype _top, modelica_metatype _classPath, modelica_metatype *out_componentTypes)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _bases = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _componentTypes = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _cls_node = NULL;
  modelica_integer _context;
  modelica_metatype _def = NULL;
  modelica_metatype _cdef = NULL;
  modelica_metatype _reference = NULL;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta19;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _bases = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _componentTypes = tmpMeta2;
  // _cls_node has no default value.
  // _context has no default value.
  // _def has no default value.
  // _cdef has no default value.
  // _reference has no default value.
  _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 8));

  _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 2));

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp4_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          /* Pattern matching succeeded */
          _cls_node = omc_NFInst_lookupRootClass(threadData, _classPath, _top, _context);

          _cls_node = omc_NFInstNode_InstNode_resolveInner(threadData, _cls_node);

          _cls_node = omc_NFInst_expand(threadData, _cls_node, _context);

          _def = omc_NFInstNode_InstNode_definition(threadData, _cls_node);
          goto tmp4_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      tmp4_done:
      (void)tmp5;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp4_done2;
      goto_3:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp5 < 2) {
        goto tmp4_top;
      }
      OMC_THROW_INTERNAL();
      tmp4_done2:;
    }
  }
  ;

  _cdef = omc_SCodeUtil_getClassDef(threadData, _def);

  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _cdef;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,2,3) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _reference = omc_AbsynUtil_typeSpecPath(threadData, (OMC_BOX_FIELD(_cdef, 2)));

          tmpMeta11 = mmc_mk_cons(omc_NFInstanceAPI_resolveOne(threadData, _reference, _cls_node, _context, omc_SCodeUtil_elementInfo(threadData, _def)), _bases);
          _bases = tmpMeta11;
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

  {
    modelica_metatype _el;
    for (tmpMeta12 = omc_SCodeUtil_getClassElements(threadData, _def); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _el = MMC_CAR(tmpMeta12);
      { /* match expression */
        modelica_metatype tmp15_1;
        tmp15_1 = _el;
        {
          int tmp15;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp15_1))) {
            case 4: {
              modelica_metatype tmpMeta16;
              
              /* Pattern matching succeeded */
              tmpMeta16 = mmc_mk_cons(omc_NFInstanceAPI_resolveOne(threadData, (OMC_BOX_FIELD(_el, 2)), _cls_node, _context, (OMC_BOX_FIELD(_el, 6))), _bases);
              _bases = tmpMeta16;
              goto tmp14_done;
            }
            case 6: {
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              
              /* Pattern matching succeeded */
              _reference = omc_AbsynUtil_typeSpecPath(threadData, (OMC_BOX_FIELD(_el, 5)));

              tmpMeta18 = omc_mk_box2(0, (OMC_BOX_FIELD(_el, 2)), omc_Util_tuple22(threadData, omc_NFInstanceAPI_resolveOne(threadData, _reference, _cls_node, _context, (OMC_BOX_FIELD(_el, 9)))));
              tmpMeta17 = mmc_mk_cons(tmpMeta18, _componentTypes);
              _componentTypes = tmpMeta17;
              goto tmp14_done;
            }
            default:
            tmp14_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
              goto tmp14_done;
            }
            }
            goto tmp14_end;
            tmp14_end: ;
          }
          goto goto_13;
          goto_13:;
          OMC_THROW_INTERNAL();
          goto tmp14_done;
          tmp14_done:;
        }
      }
      ;
    }
  }

  _bases = listReverseInPlace(_bases);

  _componentTypes = listReverseInPlace(_componentTypes);
  _return: OMC_LABEL_UNUSED
  if (out_componentTypes) { *out_componentTypes = _componentTypes; }
  threadData->mmc_jumper = old_mmc_jumper;
  omc_ret_ = _bases;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_diagramComponentIcon(threadData_t *threadData, modelica_metatype _ty_node)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cached = NULL;
  modelica_metatype _cache = NULL;
  modelica_string _key = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _cached has no default value.
  // _cache has no default value.
  // _key has no default value.
  _cached = getGlobalRoot(((modelica_integer) 40));

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cached;
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
          _cache = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _cache;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          _cache = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1));

          setGlobalRoot(((modelica_integer) 40), mmc_mk_some(_cache));
          tmpMeta1 = _cache;
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
  _cache = tmpMeta1;

  omc_string_store(&(_key), omc_AbsynUtil_pathString(threadData, omc_NFInstNode_InstNode_fullPath(threadData, _ty_node, 0 /* false */), _OMC_LIT81, 1 /* true */, 0 /* false */));

  { /* match expression */
    modelica_metatype tmp10_1;
    tmp10_1 = omc_UnorderedMap_get(threadData, _key, _cache);
    {
      volatile mmc_switch_type tmp10;
      int tmp11;
      tmp10 = 0;
      for (; tmp10 < 2; tmp10++) {
        switch (MMC_SWITCH_CAST(tmp10)) {
        case 0: {
          modelica_metatype tmpMeta12;
          if (optionNone(tmp10_1)) goto tmp9_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp10_1, 1);
          _json = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta7 = _json;
          goto tmp9_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          _json = omc_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData, _ty_node, _OMC_LIT85, 0 /* false */, 1 /* true */);

          omc_UnorderedMap_add(threadData, _key, _json, _cache);
          tmpMeta7 = _json;
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
  _json = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_topFromSCode(threadData_t *threadData, modelica_metatype _program)
{
  modelica_metatype _top = NULL;
  modelica_metatype _graphicProgramSCode = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _top has no default value.
  // _graphicProgramSCode has no default value.
  _graphicProgramSCode = omc_AbsynToSCode_translateAbsyn2SCode(threadData, omc_NFInstanceAPI_annotationProgram(threadData, omc_Config_getAnnotationVersion(threadData)));

  omc_NFInst_resetGlobalFlags(threadData);

  _top = omc_NFInst_makeTopNode(threadData, _program, _graphicProgramSCode);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _top;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_programSCode(threadData_t *threadData, modelica_metatype _absynProgram)
{
  modelica_metatype _program = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  _program = omc_AbsynToSCode_translateAbsyn2SCode(threadData, _absynProgram);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _program;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_builtinAbsyn(threadData_t *threadData)
{
  modelica_metatype _program = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  _program = omc_FBuiltin_getInitialFunctions(threadData, NULL);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _program;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_builtinSCode(threadData_t *threadData)
{
  modelica_metatype _program = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  omc_FBuiltin_getInitialFunctions(threadData ,&_program);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _program;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_dumpJSONDiagramParts(threadData_t *threadData, modelica_metatype _node, modelica_integer _context, modelica_metatype __omcQ_24in_5Fcomponents, modelica_metatype __omcQ_24in_5Fconnections, modelica_integer _depth, modelica_metatype *out_connections)
{
  modelica_metatype _components = NULL;
  modelica_metatype _connections = NULL;
  modelica_metatype _ty_node = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _def = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta28;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _components = __omcQ_24in_5Fcomponents;
  _connections = __omcQ_24in_5Fconnections;
  // _ty_node has no default value.
  // _e has no default value.
  // _def has no default value.
  // _eqs has no default value.
  if((_depth > ((modelica_integer) 16)))
  {
    goto _return;
  }

  {
    modelica_metatype _ext;
    for (tmpMeta1 = omc_NFClassTree_ClassTree_getExtends(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _node))), tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _ext = arrayGet(tmpMeta1,tmp3);
      _components = omc_NFInstanceAPI_dumpJSONDiagramParts(threadData, _ext, _context, _components, _connections, ((modelica_integer) 1) + _depth ,&_connections);
    }
  }

  _def = omc_NFInstNode_InstNode_definition(threadData, _node);

  {
    modelica_metatype _el;
    for (tmpMeta5 = omc_SCodeUtil_getClassElements(threadData, _def); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _el = MMC_CAR(tmpMeta5);
      { /* match expression */
        modelica_metatype tmp8_1;
        tmp8_1 = _el;
        {
          volatile mmc_switch_type tmp8;
          int tmp9;
          tmp8 = 0;
          for (; tmp8 < 2; tmp8++) {
            switch (MMC_SWITCH_CAST(tmp8)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,3,8) == 0) goto tmp7_end;
              
              /* Pattern matching succeeded */
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
                      /* Pattern matching succeeded */
                      _ty_node = omc_NFLookup_lookupClassName(threadData, omc_AbsynUtil_typeSpecPath(threadData, (OMC_BOX_FIELD(_el, 5))), _node, _context, (OMC_BOX_FIELD(_el, 9)), 1 /* true */, NULL);

                      _ty_node = omc_NFInst_expand(threadData, _ty_node, _context);

                      _e = omc_JSON_addPair(threadData, _OMC_LIT11, _OMC_LIT28, omc_JSON_makeNull(threadData));

                      _e = omc_JSON_addPair(threadData, _OMC_LIT17, omc_JSON_makeString(threadData, (OMC_BOX_FIELD(_el, 2))), _e);

                      _e = omc_NFInstanceAPI_dumpJSONAnnotationOpt(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_el, 7)), 2)), _node, _OMC_LIT83, 0 /* false */, _e);

                      _e = omc_JSON_addPair(threadData, _OMC_LIT26, omc_NFInstanceAPI_diagramComponentIcon(threadData, _ty_node), _e);

                      _components = omc_JSON_addElement(threadData, _e, _components);
                      goto tmp11_done;
                    }
                    case 1: {
                      /* Pattern matching succeeded */
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
                  goto goto_6;
                  tmp11_done2:;
                }
              }
              ;
              goto tmp7_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
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
      ;
    }
  }

  { /* match expression */
    modelica_metatype tmp18_1;
    tmp18_1 = _def;
    {
      volatile mmc_switch_type tmp18;
      int tmp19;
      tmp18 = 0;
      for (; tmp18 < 2; tmp18++) {
        switch (MMC_SWITCH_CAST(tmp18)) {
        case 0: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp18_1,2,8) == 0) goto tmp17_end;
          tmpMeta20 = OMC_BOX_FIELD(tmp18_1, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,8) == 0) goto tmp17_end;
          tmpMeta21 = OMC_BOX_FIELD(tmpMeta20, 3);
          
          _eqs = tmpMeta21;
          /* Pattern matching succeeded */
          tmpMeta15 = _eqs;
          goto tmp17_done;
        }
        case 1: {
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = tmpMeta22;
          goto tmp17_done;
        }
        }
        goto tmp17_end;
        tmp17_end: ;
      }
      goto goto_16;
      goto_16:;
      OMC_THROW_INTERNAL();
      goto tmp17_done;
      tmp17_done:;
    }
  }
  _eqs = tmpMeta15;

  {
    modelica_metatype _eq;
    for (tmpMeta23 = _eqs; !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
    {
      _eq = MMC_CAR(tmpMeta23);
      { /* match expression */
        modelica_metatype tmp26_1;
        tmp26_1 = _eq;
        {
          volatile mmc_switch_type tmp26;
          int tmp27;
          tmp26 = 0;
          for (; tmp26 < 2; tmp26++) {
            switch (MMC_SWITCH_CAST(tmp26)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp26_1,3,4) == 0) goto tmp25_end;
              
              /* Pattern matching succeeded */
              _e = omc_NFInstanceAPI_dumpJSONAnnotationOpt(threadData, (OMC_BOX_FIELD((OMC_BOX_FIELD(_eq, 4)), 2)), _node, _OMC_LIT98, 0 /* false */, omc_JSON_makeNull(threadData));

              if((!omc_JSON_isNull(threadData, _e)))
              {
                _connections = omc_JSON_addElement(threadData, _e, _connections);
              }
              goto tmp25_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              goto tmp25_done;
            }
            }
            goto tmp25_end;
            tmp25_end: ;
          }
          goto goto_24;
          goto_24:;
          OMC_THROW_INTERNAL();
          goto tmp25_done;
          tmp25_done:;
        }
      }
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_connections) { *out_connections = _connections; }
  omc_ret_ = _components;
  return omc_ret_;
}
modelica_metatype boxptr_NFInstanceAPI_dumpJSONDiagramParts(threadData_t *threadData, modelica_metatype _node, modelica_metatype _context, modelica_metatype __omcQ_24in_5Fcomponents, modelica_metatype __omcQ_24in_5Fconnections, modelica_metatype _depth, modelica_metatype *out_connections)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _components = NULL;
  tmp1 = omc_unbox_integer(_context);
  tmp2 = omc_unbox_integer(_depth);
  _components = omc_NFInstanceAPI_dumpJSONDiagramParts(threadData, _node, tmp1, __omcQ_24in_5Fcomponents, __omcQ_24in_5Fconnections, tmp2, out_connections);
  /* skip box _components; JSON */
  /* skip box _connections; JSON */
  return _components;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_diagramJSONFromTop(threadData_t *threadData, modelica_metatype _top, modelica_metatype _classPath)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_integer _context;
  modelica_metatype _components = NULL;
  modelica_metatype _connections = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _cls_node has no default value.
  // _context has no default value.
  _components = omc_JSON_emptyArray(threadData, ((modelica_integer) 0));
  _connections = omc_JSON_emptyArray(threadData, ((modelica_integer) 0));
  _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 8));

  _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 2));

  _cls_node = omc_NFInst_lookupRootClass(threadData, _classPath, _top, _context);

  _cls_node = omc_NFInstNode_InstNode_resolveInner(threadData, _cls_node);

  _json = omc_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData, _cls_node, _OMC_LIT100, 0 /* false */, 1 /* true */);

  _components = omc_NFInstanceAPI_dumpJSONDiagramParts(threadData, _cls_node, _context, _components, _connections, ((modelica_integer) 0) ,&_connections);

  _json = omc_JSON_addPair(threadData, _OMC_LIT101, _components, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT41, _connections, _json);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_buildModelInstanceIconJSON(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _scodeProgram, modelica_metatype _classPath)
{
  modelica_metatype _json = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _top has no default value.
  omc_NFInstanceAPI_mkTop(threadData, _absynProgram, _scodeProgram, omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT81, 1 /* true */, 0 /* false */) ,&_top);

  _json = omc_NFInstanceAPI_iconJSONFromTop(threadData, _top, _classPath);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_buildModelInstanceAnnotationJSON(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _scodeProgram, modelica_metatype _classPath, modelica_metatype _filter)
{
  modelica_metatype _json = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_integer _context;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _top has no default value.
  // _cls_node has no default value.
  // _context has no default value.
  _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 8));

  _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 2));

  omc_NFInstanceAPI_mkTop(threadData, _absynProgram, _scodeProgram, omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT81, 1 /* true */, 0 /* false */) ,&_top);

  _cls_node = omc_NFInst_lookupRootClass(threadData, _classPath, _top, _context);

  _cls_node = omc_NFInstNode_InstNode_resolveInner(threadData, _cls_node);

  _json = omc_NFInstanceAPI_dumpJSONInstanceAnnotation(threadData, _cls_node, _filter, 0 /* false */, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_buildModelInstanceJSON(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _scodeProgram, modelica_metatype _classPath, modelica_metatype _contextPath, modelica_string _modifier)
{
  modelica_metatype _json = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_integer _context;
  modelica_metatype _inst_tree = NULL;
  modelica_metatype _inst_settings = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _top has no default value.
  // _cls_node has no default value.
  // _context has no default value.
  // _inst_tree has no default value.
  // _inst_settings has no default value.
  // _mod has no default value.
  _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 8));

  _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 2));

  _inst_settings = _OMC_LIT102;

  omc_NFInstanceAPI_mkTop(threadData, _absynProgram, _scodeProgram, omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT81, 1 /* true */, 0 /* false */) ,&_top);

  _mod = omc_NFInstanceAPI_parseModifier(threadData, _modifier, _top);

  _cls_node = omc_NFInst_lookupRootClass(threadData, _classPath, _top, _context);

  if(omc_SCodeUtil_isFunction(threadData, omc_NFInstNode_InstNode_definition(threadData, _cls_node)))
  {
    _context = omc_NFInstContext_unset(threadData, _context, ((modelica_integer) 8));

    _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 16));
  }

  if((!stringEqual(omc_AbsynUtil_pathFirstIdent(threadData, _contextPath), _OMC_LIT103)))
  {
    tmpMeta1 = omc_mk_box3(8, &NFInstNode_InstNodeType_ROOT__CLASS__desc, _OMC_LIT7, mmc_mk_some(_contextPath));
    _cls_node = omc_NFInstNode_InstNode_setNodeType(threadData, tmpMeta1, _cls_node);
  }

  _cls_node = omc_NFInst_instantiateRootClass(threadData, _cls_node, _context, _mod);

  omc_ExecStat_execStat(threadData, _OMC_LIT104);

  _inst_tree = omc_NFInstanceAPI_buildInstanceTree(threadData, _cls_node, 0 /* false */);

  omc_ExecStat_execStat(threadData, _OMC_LIT105);

  omc_NFInst_instExpressions(threadData, _cls_node, _cls_node, _OMC_LIT88, omc_NFConnectBreakTree_new(threadData), _context, _inst_settings);

  omc_NFInst_updateImplicitVariability(threadData, _cls_node, omc_Flags_isSet(threadData, _OMC_LIT108), _context);

  omc_ExecStat_execStat(threadData, _OMC_LIT109);

  omc_NFTyping_typeClassType(threadData, _cls_node, _OMC_LIT110, _context, _cls_node);

  omc_NFTyping_typeComponents(threadData, _cls_node, _context, 0 /* false */);

  omc_ExecStat_execStat(threadData, _OMC_LIT111);

  omc_NFTyping_typeBindings(threadData, _cls_node, _context);

  omc_ExecStat_execStat(threadData, _OMC_LIT112);

  _json = omc_NFInstanceAPI_dumpJSONInstanceTree(threadData, _inst_tree, _cls_node, 1 /* true */, 0 /* false */, 0 /* false */);

  omc_ExecStat_execStat(threadData, _OMC_LIT113);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _json;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_mkTop(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _scodeProgram, modelica_string _name, modelica_metatype *out_top)
{
  modelica_metatype _program = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _scode_builtin = NULL;
  modelica_metatype _graphicProgramSCode = NULL;
  modelica_metatype _placementProgram = NULL;
  modelica_metatype _cache = NULL;
  modelica_boolean _reuse;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _top has no default value.
  // _scode_builtin has no default value.
  // _graphicProgramSCode has no default value.
  // _placementProgram has no default value.
  // _cache has no default value.
  // _reuse has no default value.
  _cache = getGlobalRoot(((modelica_integer) 11));

  _reuse = (listEmpty(_cache)?0 /* false */:referenceEq(_absynProgram, omc_Util_tuple21(threadData, listHead(_cache))));

  if(_reuse)
  {
    /* Pattern-matching assignment */
    tmpMeta1 = omc_Util_tuple22(threadData, listHead(_cache));
    tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
    tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 2);
    _program = tmpMeta2;
    _top = tmpMeta3;

    omc_NFInstNode_InstNode_clearGeneratedInners(threadData, _top);

    omc_MutableWeak_useRoots(threadData, omc_NFInstNode_InstNode_scopeRoots(threadData, _top));
  }
  else
  {
    if((!listEmpty(_cache)))
    {
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      setGlobalRoot(((modelica_integer) 11), tmpMeta4);
    }

    omc_FBuiltin_getInitialFunctions(threadData ,&_scode_builtin);

    if(isSome(_scodeProgram))
    {
      /* Pattern-matching assignment */
      tmpMeta5 = _scodeProgram;
      if (optionNone(tmpMeta5)) OMC_THROW_INTERNAL();
      tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
      _program = tmpMeta6;
    }
    else
    {
      _program = omc_AbsynToSCode_translateAbsyn2SCode(threadData, _absynProgram);
    }

    _program = listAppend(_scode_builtin, _program);

    _placementProgram = omc_NFInstanceAPI_annotationProgram(threadData, omc_Config_getAnnotationVersion(threadData));

    _graphicProgramSCode = omc_AbsynToSCode_translateAbsyn2SCode(threadData, _placementProgram);

    omc_NFInst_resetGlobalFlags(threadData);

    _top = omc_NFInst_makeTopNode(threadData, _program, _graphicProgramSCode);

    if(omc_Flags_isSet(threadData, _OMC_LIT118))
    {
      tmp7 = stringAppend(_OMC_LIT114,_name);
      tmp8 = stringAppend(tmp7,_OMC_LIT115);
      omc_ExecStat_execStat(threadData, tmp8);
    }

    tmpMeta10 = omc_mk_box2(0, _program, _top);
    tmpMeta11 = omc_mk_box2(0, _absynProgram, tmpMeta10);
    tmpMeta9 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
    setGlobalRoot(((modelica_integer) 11), tmpMeta9);
  }
  _return: OMC_LABEL_UNUSED
  if (out_top) { *out_top = _top; }
  omc_ret_ = _program;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFInstanceAPI_annotationProgram(threadData_t *threadData, modelica_string _annotationVersion)
{
  modelica_metatype _program = NULL;
  modelica_string _filename = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _filename has no default value.
  tmp1 = stringAppend(omc_Settings_getInstallationDirectoryPath(threadData),_OMC_LIT119);
  tmp2 = stringAppend(tmp1,omc_Util_stringReplaceChar(threadData, _annotationVersion, _OMC_LIT81, _OMC_LIT120));
  tmp3 = stringAppend(tmp2,_OMC_LIT121);
  omc_string_store(&(_filename), tmp3);

  _program = omc_Parser_parse(threadData, _filename, _OMC_LIT122, _OMC_LIT4, mmc_mk_none(), omc_Config_acceptedGrammar(threadData), omc_Flags_getConfigEnum(threadData, _OMC_LIT160), omc_Flags_getConfigBool(threadData, _OMC_LIT164));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _program;
  return omc_ret_;
}

