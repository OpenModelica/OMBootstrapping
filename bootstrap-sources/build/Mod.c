#ifdef OMC_BASE_FILE
#define OMC_FILE OMC_BASE_FILE
#else
#define OMC_FILE "Mod.c"
#endif
#include "omc_simulation_settings.h"
#include "Mod.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "final "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,6,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "each "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,5,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,10,3) {&SCodeDump_SCodeDumpOptions_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "redeclare "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,10,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,5) {&DAE_Mod_NOMOD__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10,0.0);
#define _OMC_LIT10 MMC_REFREALLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,3) {&SCode_Each_EACH__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Mod.addEachOneLevel failed on: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,31,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,1,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Mod.addEachIfNeeded failed on: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,31,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,2,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data " = (typed)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,10,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,1,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data ", value: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,9,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ", type:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,8,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data " =(untyped) "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,12,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "---Mod.printEqmodStr FAILED---"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,30,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "(redeclare "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,11,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data " redeclare("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,11,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "), class or component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,22,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data " failed prettyPrintMod\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,23,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,2,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data " {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,2,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "} "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,2,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data " failure in printModStr \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,25,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Trying to override final element %s with modifier '%s'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,55,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(222)),_OMC_LIT33,_OMC_LIT34,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Non-array modification '%s' for array component, possibly due to missing 'each'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,80,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(122)),_OMC_LIT33,_OMC_LIT38,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,9,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,41,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT42,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "- Mod.indexEqmod failed for mod:\n "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,34,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "\n indices: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,11,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,1,4) {&SCode_Final_NOT__FINAL__desc,}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "- Mod.lookupIdxModification("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,28,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data ") failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,8,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Multiple modifiers in same scope for element %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,48,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(516)),_OMC_LIT33,_OMC_LIT34,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "Duplicate modification of element %s on %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,43,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT33,_OMC_LIT34,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,1,3) {&DAE_Const_C__CONST__desc,}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "- Mod.lookupModificationP failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,33,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,3) {&Mod_ModScope_COMPONENT__desc,_OMC_LIT0}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,10,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "extends "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,8,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "inherited class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,16,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "- elab_untyped_mod "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,19,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data " failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,8,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "Updated mod: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,13,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "updmod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,6,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "Prints information about modification updates."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,46,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(62)),_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "- Mod.updateMod failed mod: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,28,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,1,5) {&SCode_Mod_NOMOD__desc,}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "Mod.elabUntypedMod failed: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,27,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,17,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT73}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT33,_OMC_LIT34,_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "Unhandled element redeclare (we keep it as it is!): "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,52,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#include "util/modelica.h"
#include "Mod_includes.h"
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_unparseBindingStr(threadData_t *threadData, modelica_metatype _inBinding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_unparseBindingStr,2,0) {(void*) boxptr_Mod_unparseBindingStr,0}};
#define boxvar_Mod_unparseBindingStr MMC_REFSTRUCTLIT(boxvar_lit_Mod_unparseBindingStr)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_unparseSubModStr(threadData_t *threadData, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_unparseSubModStr,2,0) {(void*) boxptr_Mod_unparseSubModStr,0}};
#define boxvar_Mod_unparseSubModStr MMC_REFSTRUCTLIT(boxvar_lit_Mod_unparseSubModStr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_filterRedeclaresSubMods(threadData_t *threadData, modelica_metatype _inSubMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_filterRedeclaresSubMods,2,0) {(void*) boxptr_Mod_filterRedeclaresSubMods,0}};
#define boxvar_Mod_filterRedeclaresSubMods MMC_REFSTRUCTLIT(boxvar_lit_Mod_filterRedeclaresSubMods)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_stripSubModBindings(threadData_t *threadData, modelica_metatype _inSubMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_stripSubModBindings,2,0) {(void*) boxptr_Mod_stripSubModBindings,0}};
#define boxvar_Mod_stripSubModBindings MMC_REFSTRUCTLIT(boxvar_lit_Mod_stripSubModBindings)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_setEqMod(threadData_t *threadData, modelica_metatype _inEqMod, modelica_metatype _inMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_setEqMod,2,0) {(void*) boxptr_Mod_setEqMod,0}};
#define boxvar_Mod_setEqMod MMC_REFSTRUCTLIT(boxvar_lit_Mod_setEqMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_subModInfo(threadData_t *threadData, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_subModInfo,2,0) {(void*) boxptr_Mod_subModInfo,0}};
#define boxvar_Mod_subModInfo MMC_REFSTRUCTLIT(boxvar_lit_Mod_subModInfo)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_subModIsNamed(threadData_t *threadData, modelica_string _inName, modelica_metatype _inSubMod);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_subModIsNamed(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_subModIsNamed,2,0) {(void*) boxptr_Mod_subModIsNamed,0}};
#define boxvar_Mod_subModIsNamed MMC_REFSTRUCTLIT(boxvar_lit_Mod_subModIsNamed)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_subModName(threadData_t *threadData, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_subModName,2,0) {(void*) boxptr_Mod_subModName,0}};
#define boxvar_Mod_subModName MMC_REFSTRUCTLIT(boxvar_lit_Mod_subModName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_subModValue(threadData_t *threadData, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_subModValue,2,0) {(void*) boxptr_Mod_subModValue,0}};
#define boxvar_Mod_subModValue MMC_REFSTRUCTLIT(boxvar_lit_Mod_subModValue)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_removeModInSubs(threadData_t *threadData, modelica_metatype _inSubs, modelica_string _componentName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_removeModInSubs,2,0) {(void*) boxptr_Mod_removeModInSubs,0}};
#define boxvar_Mod_removeModInSubs MMC_REFSTRUCTLIT(boxvar_lit_Mod_removeModInSubs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_removeRedecl(threadData_t *threadData, modelica_metatype _isubs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_removeRedecl,2,0) {(void*) boxptr_Mod_removeRedecl,0}};
#define boxvar_Mod_removeRedecl MMC_REFSTRUCTLIT(boxvar_lit_Mod_removeRedecl)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getUntypedCrefFromSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_metatype _inCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_getUntypedCrefFromSubMod,2,0) {(void*) boxptr_Mod_getUntypedCrefFromSubMod,0}};
#define boxvar_Mod_getUntypedCrefFromSubMod MMC_REFSTRUCTLIT(boxvar_lit_Mod_getUntypedCrefFromSubMod)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_isUntypedSubMod(threadData_t *threadData, modelica_metatype _inSubMod);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_isUntypedSubMod(threadData_t *threadData, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_isUntypedSubMod,2,0) {(void*) boxptr_Mod_isUntypedSubMod,0}};
#define boxvar_Mod_isUntypedSubMod MMC_REFSTRUCTLIT(boxvar_lit_Mod_isUntypedSubMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getUnelabedSubMod2(threadData_t *threadData, modelica_metatype _inSubMods, modelica_string _inIdent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_getUnelabedSubMod2,2,0) {(void*) boxptr_Mod_getUnelabedSubMod2,0}};
#define boxvar_Mod_getUnelabedSubMod2 MMC_REFSTRUCTLIT(boxvar_lit_Mod_getUnelabedSubMod2)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_prettyPrintFullMod(threadData_t *threadData, modelica_metatype _inFullMod, modelica_integer _inDepth);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_prettyPrintFullMod(threadData_t *threadData, modelica_metatype _inFullMod, modelica_metatype _inDepth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_prettyPrintFullMod,2,0) {(void*) boxptr_Mod_prettyPrintFullMod,0}};
#define boxvar_Mod_prettyPrintFullMod MMC_REFSTRUCTLIT(boxvar_lit_Mod_prettyPrintFullMod)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_fullModCrefsEqual(threadData_t *threadData, modelica_metatype _inFullMod1, modelica_metatype _inFullMod2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_fullModCrefsEqual(threadData_t *threadData, modelica_metatype _inFullMod1, modelica_metatype _inFullMod2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_fullModCrefsEqual,2,0) {(void*) boxptr_Mod_fullModCrefsEqual,0}};
#define boxvar_Mod_fullModCrefsEqual MMC_REFSTRUCTLIT(boxvar_lit_Mod_fullModCrefsEqual)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getFullModsFromSubMods(threadData_t *threadData, modelica_metatype _inTopCref, modelica_metatype _inSubMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_getFullModsFromSubMods,2,0) {(void*) boxptr_Mod_getFullModsFromSubMods,0}};
#define boxvar_Mod_getFullModsFromSubMods MMC_REFSTRUCTLIT(boxvar_lit_Mod_getFullModsFromSubMods)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getFullModFromModRedeclare(threadData_t *threadData, modelica_metatype _inTopCref, modelica_metatype _inRedeclare);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_getFullModFromModRedeclare,2,0) {(void*) boxptr_Mod_getFullModFromModRedeclare,0}};
#define boxvar_Mod_getFullModFromModRedeclare MMC_REFSTRUCTLIT(boxvar_lit_Mod_getFullModFromModRedeclare)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getFullModsFromMod(threadData_t *threadData, modelica_metatype _inTopCref, modelica_metatype _inMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_getFullModsFromMod,2,0) {(void*) boxptr_Mod_getFullModsFromMod,0}};
#define boxvar_Mod_getFullModsFromMod MMC_REFSTRUCTLIT(boxvar_lit_Mod_getFullModsFromMod)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_isPrefixOf(threadData_t *threadData, modelica_metatype _indexSubMod, modelica_string _idx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_isPrefixOf(threadData_t *threadData, modelica_metatype _indexSubMod, modelica_metatype _idx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_isPrefixOf,2,0) {(void*) boxptr_Mod_isPrefixOf,0}};
#define boxvar_Mod_isPrefixOf MMC_REFSTRUCTLIT(boxvar_lit_Mod_isPrefixOf)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_intStringDot(threadData_t *threadData, modelica_integer _i);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_intStringDot(threadData_t *threadData, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_intStringDot,2,0) {(void*) boxptr_Mod_intStringDot,0}};
#define boxvar_Mod_intStringDot MMC_REFSTRUCTLIT(boxvar_lit_Mod_intStringDot)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_printEqmodStr(threadData_t *threadData, modelica_metatype _inTypesEqModOption);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_printEqmodStr,2,0) {(void*) boxptr_Mod_printEqmodStr,0}};
#define boxvar_Mod_printEqmodStr MMC_REFSTRUCTLIT(boxvar_lit_Mod_printEqmodStr)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_printSubStr(threadData_t *threadData, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_printSubStr,2,0) {(void*) boxptr_Mod_printSubStr,0}};
#define boxvar_Mod_printSubStr MMC_REFSTRUCTLIT(boxvar_lit_Mod_printSubStr)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_prettyPrintSubs(threadData_t *threadData, modelica_metatype _inSubs, modelica_integer _depth);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_prettyPrintSubs(threadData_t *threadData, modelica_metatype _inSubs, modelica_metatype _depth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_prettyPrintSubs,2,0) {(void*) boxptr_Mod_prettyPrintSubs,0}};
#define boxvar_Mod_prettyPrintSubs MMC_REFSTRUCTLIT(boxvar_lit_Mod_prettyPrintSubs)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_eqModEqual(threadData_t *threadData, modelica_metatype _eqMod1, modelica_metatype _eqMod2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_eqModEqual(threadData_t *threadData, modelica_metatype _eqMod1, modelica_metatype _eqMod2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_eqModEqual,2,0) {(void*) boxptr_Mod_eqModEqual,0}};
#define boxvar_Mod_eqModEqual MMC_REFSTRUCTLIT(boxvar_lit_Mod_eqModEqual)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_valEqual(threadData_t *threadData, modelica_metatype _inV1, modelica_metatype _inV2, modelica_boolean _equal);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_valEqual(threadData_t *threadData, modelica_metatype _inV1, modelica_metatype _inV2, modelica_metatype _equal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_valEqual,2,0) {(void*) boxptr_Mod_valEqual,0}};
#define boxvar_Mod_valEqual MMC_REFSTRUCTLIT(boxvar_lit_Mod_valEqual)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_subModsEqual(threadData_t *threadData, modelica_metatype _inSubModLst1, modelica_metatype _inSubModLst2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_subModsEqual(threadData_t *threadData, modelica_metatype _inSubModLst1, modelica_metatype _inSubModLst2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_subModsEqual,2,0) {(void*) boxptr_Mod_subModsEqual,0}};
#define boxvar_Mod_subModsEqual MMC_REFSTRUCTLIT(boxvar_lit_Mod_subModsEqual)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_subModsSubsetOrEqual(threadData_t *threadData, modelica_metatype _subModLst1, modelica_metatype _subModLst2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_subModsSubsetOrEqual(threadData_t *threadData, modelica_metatype _subModLst1, modelica_metatype _subModLst2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_subModsSubsetOrEqual,2,0) {(void*) boxptr_Mod_subModsSubsetOrEqual,0}};
#define boxvar_Mod_subModsSubsetOrEqual MMC_REFSTRUCTLIT(boxvar_lit_Mod_subModsSubsetOrEqual)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_eqModSubsetOrEqual(threadData_t *threadData, modelica_metatype _eqMod1, modelica_metatype _eqMod2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_eqModSubsetOrEqual(threadData_t *threadData, modelica_metatype _eqMod1, modelica_metatype _eqMod2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_eqModSubsetOrEqual,2,0) {(void*) boxptr_Mod_eqModSubsetOrEqual,0}};
#define boxvar_Mod_eqModSubsetOrEqual MMC_REFSTRUCTLIT(boxvar_lit_Mod_eqModSubsetOrEqual)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_modSubsetOrEqualOrNonOverlap(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_modSubsetOrEqualOrNonOverlap(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_modSubsetOrEqualOrNonOverlap,2,0) {(void*) boxptr_Mod_modSubsetOrEqualOrNonOverlap,0}};
#define boxvar_Mod_modSubsetOrEqualOrNonOverlap MMC_REFSTRUCTLIT(boxvar_lit_Mod_modSubsetOrEqualOrNonOverlap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeEq(threadData_t *threadData, modelica_metatype _inOuterEq, modelica_metatype _inInnerEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_mergeEq,2,0) {(void*) boxptr_Mod_mergeEq,0}};
#define boxvar_Mod_mergeEq MMC_REFSTRUCTLIT(boxvar_lit_Mod_mergeEq)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeSubs(threadData_t *threadData, modelica_metatype _inSubMods1, modelica_metatype _inSubMods2, modelica_boolean _inCheckFinal);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_mergeSubs(threadData_t *threadData, modelica_metatype _inSubMods1, modelica_metatype _inSubMods2, modelica_metatype _inCheckFinal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_mergeSubs,2,0) {(void*) boxptr_Mod_mergeSubs,0}};
#define boxvar_Mod_mergeSubs MMC_REFSTRUCTLIT(boxvar_lit_Mod_mergeSubs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_doMerge(threadData_t *threadData, modelica_metatype _inModOuter, modelica_metatype _inModInner, modelica_boolean _inCheckFinal);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_doMerge(threadData_t *threadData, modelica_metatype _inModOuter, modelica_metatype _inModInner, modelica_metatype _inCheckFinal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_doMerge,2,0) {(void*) boxptr_Mod_doMerge,0}};
#define boxvar_Mod_doMerge MMC_REFSTRUCTLIT(boxvar_lit_Mod_doMerge)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_merge__isEqual(threadData_t *threadData, modelica_metatype _inMod1, modelica_metatype _inMod2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_merge__isEqual(threadData_t *threadData, modelica_metatype _inMod1, modelica_metatype _inMod2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_merge__isEqual,2,0) {(void*) boxptr_Mod_merge__isEqual,0}};
#define boxvar_Mod_merge__isEqual MMC_REFSTRUCTLIT(boxvar_lit_Mod_merge__isEqual)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_indexEqmod(threadData_t *threadData, modelica_metatype _inBinding, modelica_metatype _inIndices, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_indexEqmod,2,0) {(void*) boxptr_Mod_indexEqmod,0}};
#define boxvar_Mod_indexEqmod MMC_REFSTRUCTLIT(boxvar_lit_Mod_indexEqmod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupIdxModification3(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_lookupIdxModification3,2,0) {(void*) boxptr_Mod_lookupIdxModification3,0}};
#define boxvar_Mod_lookupIdxModification3 MMC_REFSTRUCTLIT(boxvar_lit_Mod_lookupIdxModification3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupIdxModification2(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _inIndex, modelica_metatype *out_outSubMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_lookupIdxModification2,2,0) {(void*) boxptr_Mod_lookupIdxModification2,0}};
#define boxvar_Mod_lookupIdxModification2 MMC_REFSTRUCTLIT(boxvar_lit_Mod_lookupIdxModification2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupCompModification2(threadData_t *threadData, modelica_metatype _inSubModLst, modelica_string _inIdent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_lookupCompModification2,2,0) {(void*) boxptr_Mod_lookupCompModification2,0}};
#define boxvar_Mod_lookupCompModification2 MMC_REFSTRUCTLIT(boxvar_lit_Mod_lookupCompModification2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_isSubModNamed(threadData_t *threadData, modelica_string _inIdent, modelica_metatype _inSubMod);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_isSubModNamed(threadData_t *threadData, modelica_metatype _inIdent, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_isSubModNamed,2,0) {(void*) boxptr_Mod_isSubModNamed,0}};
#define boxvar_Mod_isSubModNamed MMC_REFSTRUCTLIT(boxvar_lit_Mod_isSubModNamed)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupNamedSubMod(threadData_t *threadData, modelica_metatype _inSubMods, modelica_string _inIdent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_lookupNamedSubMod,2,0) {(void*) boxptr_Mod_lookupNamedSubMod,0}};
#define boxvar_Mod_lookupNamedSubMod MMC_REFSTRUCTLIT(boxvar_lit_Mod_lookupNamedSubMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_modEqualNoPrefix(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_boolean *out_equal);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_modEqualNoPrefix(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_metatype *out_equal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_modEqualNoPrefix,2,0) {(void*) boxptr_Mod_modEqualNoPrefix,0}};
#define boxvar_Mod_modEqualNoPrefix MMC_REFSTRUCTLIT(boxvar_lit_Mod_modEqualNoPrefix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeRedeclareWithBinding(threadData_t *threadData, modelica_metatype _inRedeclare, modelica_metatype _inBinding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_mergeRedeclareWithBinding,2,0) {(void*) boxptr_Mod_mergeRedeclareWithBinding,0}};
#define boxvar_Mod_mergeRedeclareWithBinding MMC_REFSTRUCTLIT(boxvar_lit_Mod_mergeRedeclareWithBinding)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_checkDuplicateModifications2(threadData_t *threadData, modelica_metatype _inSubMods1, modelica_metatype _inSubMods2, modelica_string _inName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_checkDuplicateModifications2,2,0) {(void*) boxptr_Mod_checkDuplicateModifications2,0}};
#define boxvar_Mod_checkDuplicateModifications2 MMC_REFSTRUCTLIT(boxvar_lit_Mod_checkDuplicateModifications2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_checkDuplicateModifications(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_string _n);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_checkDuplicateModifications,2,0) {(void*) boxptr_Mod_checkDuplicateModifications,0}};
#define boxvar_Mod_checkDuplicateModifications MMC_REFSTRUCTLIT(boxvar_lit_Mod_checkDuplicateModifications)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupComplexCompModification(threadData_t *threadData, modelica_metatype _inEqMod, modelica_string _inName, modelica_metatype _inFinal, modelica_metatype _inEach, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_lookupComplexCompModification,2,0) {(void*) boxptr_Mod_lookupComplexCompModification,0}};
#define boxvar_Mod_lookupComplexCompModification MMC_REFSTRUCTLIT(boxvar_lit_Mod_lookupComplexCompModification)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_selectEqMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _eqMod, modelica_string _n);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_selectEqMod,2,0) {(void*) boxptr_Mod_selectEqMod,0}};
#define boxvar_Mod_selectEqMod MMC_REFSTRUCTLIT(boxvar_lit_Mod_selectEqMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeSubMods(threadData_t *threadData, modelica_metatype _inMods, modelica_metatype _inMod, modelica_metatype _f, modelica_metatype _e, modelica_metatype _inSMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_mergeSubMods,2,0) {(void*) boxptr_Mod_mergeSubMods,0}};
#define boxvar_Mod_mergeSubMods MMC_REFSTRUCTLIT(boxvar_lit_Mod_mergeSubMods)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeModifiers(threadData_t *threadData, modelica_metatype _inMods, modelica_metatype _inMod, modelica_metatype _inSMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_mergeModifiers,2,0) {(void*) boxptr_Mod_mergeModifiers,0}};
#define boxvar_Mod_mergeModifiers MMC_REFSTRUCTLIT(boxvar_lit_Mod_mergeModifiers)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabUntypedSubmod(threadData_t *threadData, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_elabUntypedSubmod,2,0) {(void*) boxptr_Mod_elabUntypedSubmod,0}};
#define boxvar_Mod_elabUntypedSubmod MMC_REFSTRUCTLIT(boxvar_lit_Mod_elabUntypedSubmod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabUntypedSubmods(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _inModScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_elabUntypedSubmods,2,0) {(void*) boxptr_Mod_elabUntypedSubmods,0}};
#define boxvar_Mod_elabUntypedSubmods MMC_REFSTRUCTLIT(boxvar_lit_Mod_elabUntypedSubmods)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabSubmod(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSubMod, modelica_boolean _inBoolean, modelica_metatype _info, modelica_metatype *out_outSubMod);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabSubmod(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSubMod, modelica_metatype _inBoolean, modelica_metatype _info, modelica_metatype *out_outSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_elabSubmod,2,0) {(void*) boxptr_Mod_elabSubmod,0}};
#define boxvar_Mod_elabSubmod MMC_REFSTRUCTLIT(boxvar_lit_Mod_elabSubmod)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_printModScope(threadData_t *threadData, modelica_metatype _inModScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_printModScope,2,0) {(void*) boxptr_Mod_printModScope,0}};
#define boxvar_Mod_printModScope MMC_REFSTRUCTLIT(boxvar_lit_Mod_printModScope)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeSubModsInSameScope(threadData_t *threadData, modelica_metatype _inMod1, modelica_metatype _inMod2, modelica_metatype _inElementName, modelica_metatype _inModScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_mergeSubModsInSameScope,2,0) {(void*) boxptr_Mod_mergeSubModsInSameScope,0}};
#define boxvar_Mod_mergeSubModsInSameScope MMC_REFSTRUCTLIT(boxvar_lit_Mod_mergeSubModsInSameScope)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_compactSubMod2(threadData_t *threadData, modelica_metatype _inExistingMod, modelica_metatype _inNewMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_boolean *out_outFound);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_compactSubMod2(threadData_t *threadData, modelica_metatype _inExistingMod, modelica_metatype _inNewMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_metatype *out_outFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_compactSubMod2,2,0) {(void*) boxptr_Mod_compactSubMod2,0}};
#define boxvar_Mod_compactSubMod2 MMC_REFSTRUCTLIT(boxvar_lit_Mod_compactSubMod2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_compactSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_metatype _inAccumMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_compactSubMod,2,0) {(void*) boxptr_Mod_compactSubMod,0}};
#define boxvar_Mod_compactSubMod MMC_REFSTRUCTLIT(boxvar_lit_Mod_compactSubMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_compactSubMods(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _inModScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_compactSubMods,2,0) {(void*) boxptr_Mod_compactSubMods,0}};
#define boxvar_Mod_compactSubMods MMC_REFSTRUCTLIT(boxvar_lit_Mod_compactSubMods)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabSubmods2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSubMods, modelica_boolean _inImpl, modelica_metatype _inInfo, modelica_metatype _inAccumMods, modelica_metatype *out_outSubMods);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabSubmods2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSubMods, modelica_metatype _inImpl, modelica_metatype _inInfo, modelica_metatype _inAccumMods, modelica_metatype *out_outSubMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_elabSubmods2,2,0) {(void*) boxptr_Mod_elabSubmods2,0}};
#define boxvar_Mod_elabSubmods2 MMC_REFSTRUCTLIT(boxvar_lit_Mod_elabSubmods2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabSubmods(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSCodeSubModLst, modelica_boolean _inBoolean, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outTypesSubModLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabSubmods(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSCodeSubModLst, modelica_metatype _inBoolean, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outTypesSubModLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_elabSubmods,2,0) {(void*) boxptr_Mod_elabSubmods,0}};
#define boxvar_Mod_elabSubmods MMC_REFSTRUCTLIT(boxvar_lit_Mod_elabSubmods)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_updateSubmods(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inTypesSubModLst, modelica_boolean _inBoolean, modelica_metatype _info, modelica_metatype *out_outTypesSubModLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_updateSubmods(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inTypesSubModLst, modelica_metatype _inBoolean, modelica_metatype _info, modelica_metatype *out_outTypesSubModLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_updateSubmods,2,0) {(void*) boxptr_Mod_updateSubmods,0}};
#define boxvar_Mod_updateSubmods MMC_REFSTRUCTLIT(boxvar_lit_Mod_updateSubmods)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_unelabSubscript(threadData_t *threadData, modelica_metatype _inIntegerLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_unelabSubscript,2,0) {(void*) boxptr_Mod_unelabSubscript,0}};
#define boxvar_Mod_unelabSubscript MMC_REFSTRUCTLIT(boxvar_lit_Mod_unelabSubscript)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_unelabSubmods(threadData_t *threadData, modelica_metatype _inTypesSubModLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_unelabSubmods,2,0) {(void*) boxptr_Mod_unelabSubmods,0}};
#define boxvar_Mod_unelabSubmods MMC_REFSTRUCTLIT(boxvar_lit_Mod_unelabSubmods)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabModValue(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_metatype _inProp, modelica_boolean _inImpl, modelica_metatype _inInfo, modelica_metatype *out_outCache);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabModValue(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_metatype _inProp, modelica_metatype _inImpl, modelica_metatype _inInfo, modelica_metatype *out_outCache);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_elabModValue,2,0) {(void*) boxptr_Mod_elabModValue,0}};
#define boxvar_Mod_elabModValue MMC_REFSTRUCTLIT(boxvar_lit_Mod_elabModValue)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabModQualifyTypespec(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_boolean _impl, modelica_metatype _info, modelica_string _name, modelica_metatype _tp, modelica_metatype *out_outTp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabModQualifyTypespec(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _impl, modelica_metatype _info, modelica_metatype _name, modelica_metatype _tp, modelica_metatype *out_outTp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_elabModQualifyTypespec,2,0) {(void*) boxptr_Mod_elabModQualifyTypespec,0}};
#define boxvar_Mod_elabModQualifyTypespec MMC_REFSTRUCTLIT(boxvar_lit_Mod_elabModQualifyTypespec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabModRedeclareElement(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _finalPrefix, modelica_metatype _inElt, modelica_boolean _impl, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outMod);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabModRedeclareElement(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _finalPrefix, modelica_metatype _inElt, modelica_metatype _impl, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_elabModRedeclareElement,2,0) {(void*) boxptr_Mod_elabModRedeclareElement,0}};
#define boxvar_Mod_elabModRedeclareElement MMC_REFSTRUCTLIT(boxvar_lit_Mod_elabModRedeclareElement)
PROTECTED_FUNCTION_STATIC void omc_Mod_checkIfSubmodsAreBasicTypeMods(threadData_t *threadData, modelica_metatype _inSubs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_checkIfSubmodsAreBasicTypeMods,2,0) {(void*) boxptr_Mod_checkIfSubmodsAreBasicTypeMods,0}};
#define boxvar_Mod_checkIfSubmodsAreBasicTypeMods MMC_REFSTRUCTLIT(boxvar_lit_Mod_checkIfSubmodsAreBasicTypeMods)
PROTECTED_FUNCTION_STATIC void omc_Mod_checkIfModsAreBasicTypeMods(threadData_t *threadData, modelica_metatype _mod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Mod_checkIfModsAreBasicTypeMods,2,0) {(void*) boxptr_Mod_checkIfModsAreBasicTypeMods,0}};
#define boxvar_Mod_checkIfModsAreBasicTypeMods MMC_REFSTRUCTLIT(boxvar_lit_Mod_checkIfModsAreBasicTypeMods)
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_unparseBindingStr(threadData_t *threadData, modelica_metatype _inBinding)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inBinding;
{
modelica_metatype _exp = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!optionNone(tmp4_1)) goto tmp3_end;
tmp1 = _OMC_LIT0;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
_exp = tmpMeta7;
tmpMeta8 = stringAppend(_OMC_LIT1,omc_Dump_printExpStr(threadData, _exp));
tmp1 = tmpMeta8;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
_exp = tmpMeta10;
tmpMeta11 = stringAppend(_OMC_LIT1,omc_Dump_printExpStr(threadData, _exp));
tmp1 = tmpMeta11;
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
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_unparseSubModStr(threadData_t *threadData, modelica_metatype _inSubMod)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inSubMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 1; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
tmpMeta6 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSubMod), 2))),_OMC_LIT1);
tmpMeta7 = stringAppend(tmpMeta6,omc_Mod_unparseModStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSubMod), 3)))));
tmp1 = tmpMeta7;
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
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_string omc_Mod_unparseModStr(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_string _final_str = NULL;
modelica_string _each_str = NULL;
modelica_string _sub_str = NULL;
modelica_string _binding_str = NULL;
modelica_string _el_str = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
tmp1 = _OMC_LIT0;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
_final_str = (omc_SCodeUtil_finalBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 2))))?_OMC_LIT2:_OMC_LIT0);
_each_str = (omc_SCodeUtil_eachBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 3))))?_OMC_LIT3:_OMC_LIT0);
_sub_str = omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 4))), boxvar_Mod_unparseSubModStr, _OMC_LIT0, _OMC_LIT4, _OMC_LIT5, _OMC_LIT6, 0, ((modelica_integer) 0));
_binding_str = omc_Mod_unparseBindingStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 5))));
tmpMeta5 = stringAppend(_final_str,_each_str);
tmpMeta6 = stringAppend(tmpMeta5,_sub_str);
tmpMeta7 = stringAppend(tmpMeta6,_binding_str);
tmp1 = tmpMeta7;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
_final_str = (omc_SCodeUtil_finalBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 2))))?_OMC_LIT2:_OMC_LIT0);
_each_str = (omc_SCodeUtil_eachBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 3))))?_OMC_LIT3:_OMC_LIT0);
_el_str = omc_SCodeDump_unparseElementStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 4))), _OMC_LIT7);
tmpMeta8 = stringAppend(_final_str,_each_str);
tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT8);
tmpMeta10 = stringAppend(tmpMeta9,_el_str);
tmp1 = tmpMeta10;
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
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_filterRedeclaresSubMods(threadData_t *threadData, modelica_metatype _inSubMods)
{
modelica_metatype _outSubMods = NULL;
modelica_metatype tmpMeta1;
modelica_string _id = NULL;
modelica_metatype _mod = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outSubMods = tmpMeta1;
{
modelica_metatype _submod;
for (tmpMeta2 = _inSubMods; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_submod = MMC_CAR(tmpMeta2);
tmpMeta3 = _submod;
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
_id = tmpMeta4;
_mod = tmpMeta5;
_mod = omc_Mod_filterRedeclares(threadData, _mod);
if(omc_Mod_isRedeclareMod(threadData, _mod))
{
tmpMeta7 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _id, _mod);
tmpMeta6 = mmc_mk_cons(tmpMeta7, _outSubMods);
_outSubMods = tmpMeta6;
}
}
}
_outSubMods = listReverse(_outSubMods);
_return: OMC_LABEL_UNUSED
return _outSubMods;
}
DLLExport
modelica_metatype omc_Mod_filterRedeclares(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outMod = _inMod;
{
modelica_metatype tmp4_1;
tmp4_1 = _outMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_Mod_filterRedeclaresSubMods(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outMod), 4))));
_outMod = tmpMeta6;
tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = mmc_mk_none();
_outMod = tmpMeta7;
tmpMeta1 = (listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outMod), 4))))?_OMC_LIT9:_outMod);
goto tmp3_done;
}
case 1: {
tmpMeta1 = _outMod;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_stripSubModBindings(threadData_t *threadData, modelica_metatype _inSubMods)
{
modelica_metatype _outSubMods = NULL;
modelica_metatype tmpMeta1;
modelica_string _id = NULL;
modelica_metatype _mod = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outSubMods = tmpMeta1;
{
modelica_metatype _submod;
for (tmpMeta2 = _inSubMods; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_submod = MMC_CAR(tmpMeta2);
tmpMeta3 = _submod;
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
_id = tmpMeta4;
_mod = tmpMeta5;
_mod = omc_Mod_setEqMod(threadData, mmc_mk_none(), _mod);
if((!omc_Mod_isEmptyMod(threadData, _mod)))
{
tmpMeta7 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _id, _mod);
tmpMeta6 = mmc_mk_cons(tmpMeta7, _outSubMods);
_outSubMods = tmpMeta6;
}
}
}
_outSubMods = listReverse(_outSubMods);
_return: OMC_LABEL_UNUSED
return _outSubMods;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_setEqMod(threadData_t *threadData, modelica_metatype _inEqMod, modelica_metatype _inMod)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outMod = _inMod;
{
modelica_metatype tmp4_1;
tmp4_1 = _outMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = _inEqMod;
_outMod = tmpMeta6;
tmpMeta1 = _outMod;
goto tmp3_done;
}
case 1: {
tmpMeta1 = _outMod;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_subModInfo(threadData_t *threadData, modelica_metatype _inSubMod)
{
modelica_metatype _outInfo = NULL;
modelica_metatype _mod = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inSubMod;
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
_mod = tmpMeta2;
_outInfo = omc_Mod_getModInfo(threadData, _mod);
_return: OMC_LABEL_UNUSED
return _outInfo;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_subModIsNamed(threadData_t *threadData, modelica_string _inName, modelica_metatype _inSubMod)
{
modelica_boolean _outNameEq;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outNameEq = (stringEqual(_inName, omc_Mod_subModName(threadData, _inSubMod)));
_return: OMC_LABEL_UNUSED
return _outNameEq;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_subModIsNamed(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inSubMod)
{
modelica_boolean _outNameEq;
modelica_metatype out_outNameEq;
_outNameEq = omc_Mod_subModIsNamed(threadData, _inName, _inSubMod);
out_outNameEq = mmc_mk_icon(_outNameEq);
return out_outNameEq;
}
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_subModName(threadData_t *threadData, modelica_metatype _inSubMod)
{
modelica_string _outName = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inSubMod;
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
_outName = tmpMeta2;
_return: OMC_LABEL_UNUSED
return _outName;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_subModValue(threadData_t *threadData, modelica_metatype _inSubMod)
{
modelica_metatype _outValue = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inSubMod;
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,5) == 0) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,0,5) == 0) MMC_THROW_INTERNAL();
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
_outValue = tmpMeta6;
_return: OMC_LABEL_UNUSED
return _outValue;
}
DLLExport
modelica_metatype omc_Mod_getClassModifier(threadData_t *threadData, modelica_metatype _inEnv, modelica_string _inName)
{
modelica_metatype _outMod = NULL;
modelica_metatype _n = NULL;
modelica_metatype _mod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
_n = omc_FNode_fromRef(threadData, omc_FNode_child(threadData, omc_FGraph_lastScopeRef(threadData, _inEnv), _inName));
if((!omc_FNode_isInstance(threadData, omc_FNode_fromRef(threadData, omc_FGraph_lastScopeRef(threadData, _inEnv)))))
{
tmpMeta6 = _n;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,5) == 0) goto goto_2;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
_mod = tmpMeta8;
_mod = omc_Mod_removeMod(threadData, _mod, _inName);
}
else
{
_mod = _OMC_LIT9;
}
tmpMeta1 = _mod;
goto tmp3_done;
}
case 1: {
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_boolean omc_Mod_isRedeclareMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_boolean _yes;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
tmp1 = 0;
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
_yes = tmp1;
_return: OMC_LABEL_UNUSED
return _yes;
}
modelica_metatype boxptr_Mod_isRedeclareMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_boolean _yes;
modelica_metatype out_yes;
_yes = omc_Mod_isRedeclareMod(threadData, _inMod);
out_yes = mmc_mk_icon(_yes);
return out_yes;
}
DLLExport
modelica_metatype omc_Mod_getModInfo(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_metatype _outInfo = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _info = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 6)));
goto tmp3_done;
}
case 4: {
tmpMeta1 = omc_SCodeUtil_elementInfo(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 4))));
goto tmp3_done;
}
default:
tmp3_default: OMC_LABEL_UNUSED; {
tmpMeta1 = _OMC_LIT11;
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
_outInfo = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outInfo;
}
DLLExport
modelica_boolean omc_Mod_isNoMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_boolean _outIsNoMod;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
tmp1 = 0;
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
_outIsNoMod = tmp1;
_return: OMC_LABEL_UNUSED
return _outIsNoMod;
}
modelica_metatype boxptr_Mod_isNoMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_boolean _outIsNoMod;
modelica_metatype out_outIsNoMod;
_outIsNoMod = omc_Mod_isNoMod(threadData, _inMod);
out_outIsNoMod = mmc_mk_icon(_outIsNoMod);
return out_outIsNoMod;
}
DLLExport
modelica_boolean omc_Mod_isEmptyMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_boolean _isEmpty;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (!listEmpty(tmpMeta6)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta7)) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
tmp1 = 0;
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
_isEmpty = tmp1;
_return: OMC_LABEL_UNUSED
return _isEmpty;
}
modelica_metatype boxptr_Mod_isEmptyMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_boolean _isEmpty;
modelica_metatype out_isEmpty;
_isEmpty = omc_Mod_isEmptyMod(threadData, _inMod);
out_isEmpty = mmc_mk_icon(_isEmpty);
return out_isEmpty;
}
DLLExport
modelica_metatype omc_Mod_addEachToSubsIfNeeded(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _inDimensions)
{
modelica_metatype _outSubMods = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inSubMods;
tmp4_2 = _inDimensions;
{
modelica_metatype _rest = NULL;
modelica_metatype _m = NULL;
modelica_string _id = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = _inSubMods;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_1);
tmpMeta8 = MMC_CDR(tmp4_1);
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
_id = tmpMeta9;
_m = tmpMeta10;
_rest = tmpMeta8;
_m = omc_Mod_addEachOneLevel(threadData, _m);
_rest = omc_Mod_addEachToSubsIfNeeded(threadData, _rest, _inDimensions);
tmpMeta12 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _id, _m);
tmpMeta11 = mmc_mk_cons(tmpMeta12, _rest);
tmpMeta1 = tmpMeta11;
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
_outSubMods = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outSubMods;
}
DLLExport
modelica_metatype omc_Mod_addEachOneLevel(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _finalPrefix = NULL;
modelica_metatype _el = NULL;
modelica_metatype _mod = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _eq = NULL;
modelica_metatype _info = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp4 += 2;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
_finalPrefix = tmpMeta6;
_el = tmpMeta7;
_mod = tmpMeta8;
tmp4 += 1;
tmpMeta9 = mmc_mk_box5(4, &DAE_Mod_REDECL__desc, _finalPrefix, _OMC_LIT12, _el, _mod);
tmpMeta1 = tmpMeta9;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta10;
_subs = tmpMeta11;
_eq = tmpMeta12;
_info = tmpMeta13;
tmpMeta14 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _finalPrefix, _OMC_LIT12, _subs, _eq, _info);
tmpMeta1 = tmpMeta14;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
tmpMeta15 = stringAppend(_OMC_LIT13,omc_Mod_printModStr(threadData, _inMod));
tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT14);
fputs(MMC_STRINGDATA(tmpMeta16),stdout);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 4) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_addEachIfNeeded(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inDimensions)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _inMod;
tmp4_2 = _inDimensions;
{
modelica_metatype _finalPrefix = NULL;
modelica_metatype _el = NULL;
modelica_metatype _mod = NULL;
modelica_metatype _eachPrefix = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _eq = NULL;
modelica_metatype _info = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 6; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta1 = _inMod;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp4 += 3;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
_finalPrefix = tmpMeta6;
_el = tmpMeta7;
_mod = tmpMeta8;
tmp4 += 2;
tmpMeta9 = mmc_mk_box5(4, &DAE_Mod_REDECL__desc, _finalPrefix, _OMC_LIT12, _el, _mod);
tmpMeta1 = tmpMeta9;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,0) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta10;
_subs = tmpMeta12;
_eq = tmpMeta13;
_info = tmpMeta14;
tmpMeta15 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _finalPrefix, _OMC_LIT12, _subs, _eq, _info);
tmpMeta1 = tmpMeta15;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta16;
_eachPrefix = tmpMeta17;
_subs = tmpMeta18;
_eq = tmpMeta19;
_info = tmpMeta20;
_subs = omc_Mod_addEachToSubsIfNeeded(threadData, _subs, _inDimensions);
tmpMeta21 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _finalPrefix, _eachPrefix, _subs, _eq, _info);
tmpMeta1 = tmpMeta21;
goto tmp3_done;
}
case 5: {
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
tmpMeta22 = stringAppend(_OMC_LIT15,omc_Mod_printModStr(threadData, _inMod));
tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT14);
fputs(MMC_STRINGDATA(tmpMeta23),stdout);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 6) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_removeModInSubs(threadData_t *threadData, modelica_metatype _inSubs, modelica_string _componentName)
{
modelica_metatype _outsubs = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inSubs;
{
modelica_metatype _m1 = NULL;
modelica_metatype _subs1 = NULL;
modelica_metatype _subs2 = NULL;
modelica_metatype _subs = NULL;
modelica_string _s1 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_boolean tmp14;
modelica_metatype tmpMeta15;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_1);
tmpMeta8 = MMC_CDR(tmp4_1);
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
_s1 = tmpMeta9;
_m1 = tmpMeta10;
_subs = tmpMeta8;
tmp14 = (modelica_boolean)(stringEqual(_s1, _componentName));
if(tmp14)
{
tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta15 = tmpMeta11;
}
else
{
tmpMeta13 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _s1, _m1);
tmpMeta12 = mmc_mk_cons(tmpMeta13, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta15 = tmpMeta12;
}
_subs1 = tmpMeta15;
_subs2 = omc_Mod_removeModInSubs(threadData, _subs, _componentName);
tmpMeta1 = listAppend(_subs1, _subs2);
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
_outsubs = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outsubs;
}
DLLExport
modelica_metatype omc_Mod_removeMod(threadData_t *threadData, modelica_metatype _inMod, modelica_string _componentModified)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _f = NULL;
modelica_metatype _e = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _oem = NULL;
modelica_metatype _info = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 4: {
tmpMeta1 = ((stringEqual(omc_SCodeUtil_elementName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 4)))), _componentModified))?_OMC_LIT9:_inMod);
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_f = tmpMeta5;
_e = tmpMeta6;
_subs = tmpMeta7;
_oem = tmpMeta8;
_info = tmpMeta9;
_subs = omc_Mod_removeModInSubs(threadData, _subs, _componentModified);
tmpMeta10 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _f, _e, _subs, _oem, _info);
tmpMeta1 = tmpMeta10;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_removeModList(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _remStrings)
{
modelica_metatype _outMod = NULL;
modelica_string _s = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _remStrings;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta1 = _inMod;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
_s = tmpMeta6;
_inMod = omc_Mod_removeMod(threadData, _inMod, _s);
goto _tailrecursive;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_removeRedecl(threadData_t *threadData, modelica_metatype _isubs)
{
modelica_metatype _osubs = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _isubs;
{
modelica_metatype _sm = NULL;
modelica_metatype _subs = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_1);
tmpMeta8 = MMC_CDR(tmp4_1);
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,4) == 0) goto tmp3_end;
_subs = tmpMeta8;
_isubs = _subs;
goto _tailrecursive;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta10 = MMC_CAR(tmp4_1);
tmpMeta11 = MMC_CDR(tmp4_1);
_sm = tmpMeta10;
_subs = tmpMeta11;
_osubs = omc_Mod_removeRedecl(threadData, _subs);
tmpMeta12 = mmc_mk_cons(_sm, _osubs);
tmpMeta1 = tmpMeta12;
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
_osubs = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _osubs;
}
DLLExport
modelica_metatype omc_Mod_removeFirstSubsRedecl(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _f = NULL;
modelica_metatype _each_ = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _eq = NULL;
modelica_metatype _m = NULL;
modelica_metatype _info = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (!listEmpty(tmpMeta8)) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_f = tmpMeta6;
_each_ = tmpMeta7;
_eq = tmpMeta9;
_info = tmpMeta10;
tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta12 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _f, _each_, tmpMeta11, _eq, _info);
tmpMeta1 = tmpMeta12;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta14)) goto tmp3_end;
_subs = tmpMeta13;
tmpMeta15 = omc_Mod_removeRedecl(threadData, _subs);
if (!listEmpty(tmpMeta15)) goto goto_2;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_f = tmpMeta16;
_each_ = tmpMeta17;
_subs = tmpMeta18;
_eq = tmpMeta19;
_info = tmpMeta20;
_subs = omc_Mod_removeRedecl(threadData, _subs);
tmpMeta21 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _f, _each_, _subs, _eq, _info);
tmpMeta1 = tmpMeta21;
goto tmp3_done;
}
case 3: {
_m = tmp4_1;
tmpMeta1 = _m;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 4) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_stripSubmod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outMod = _inMod;
{
modelica_metatype tmp4_1;
tmp4_1 = _outMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = tmpMeta7;
_outMod = tmpMeta6;
tmpMeta1 = _outMod;
goto tmp3_done;
}
case 1: {
tmpMeta1 = _outMod;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getUntypedCrefFromSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_metatype _inCrefs)
{
modelica_metatype _outCrefs = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inSubMod;
{
modelica_metatype _mod = NULL;
modelica_metatype _crefs = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 1; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_mod = tmpMeta6;
_crefs = omc_Mod_getUntypedCrefs(threadData, _mod);
tmpMeta1 = listAppend(_crefs, _inCrefs);
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
_outCrefs = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outCrefs;
}
DLLExport
modelica_metatype omc_Mod_getUntypedCrefs(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_metatype _outCrefs = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _exp = NULL;
modelica_metatype _submods = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta6)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
_exp = tmpMeta8;
tmpMeta1 = omc_AbsynUtil_getCrefFromExp(threadData, _exp, 1, 1);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
_submods = tmpMeta9;
tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = omc_List_fold(threadData, _submods, boxvar_Mod_getUntypedCrefFromSubMod, tmpMeta10);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta11;
tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta11;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outCrefs = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outCrefs;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_isUntypedSubMod(threadData_t *threadData, modelica_metatype _inSubMod)
{
modelica_boolean _outIsUntyped;
modelica_metatype _mod = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inSubMod;
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
_mod = tmpMeta2;
_outIsUntyped = omc_Mod_isUntypedMod(threadData, _mod);
_return: OMC_LABEL_UNUSED
return _outIsUntyped;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_isUntypedSubMod(threadData_t *threadData, modelica_metatype _inSubMod)
{
modelica_boolean _outIsUntyped;
modelica_metatype out_outIsUntyped;
_outIsUntyped = omc_Mod_isUntypedSubMod(threadData, _inSubMod);
out_outIsUntyped = mmc_mk_icon(_outIsUntyped);
return out_outIsUntyped;
}
DLLExport
modelica_boolean omc_Mod_isUntypedMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_boolean _outIsUntyped;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _submods = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta6)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
_submods = tmpMeta8;
omc_List_find(threadData, _submods, boxvar_Mod_isUntypedSubMod);
tmp1 = 1;
goto tmp3_done;
}
case 2: {
tmp1 = 0;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outIsUntyped = tmp1;
_return: OMC_LABEL_UNUSED
return _outIsUntyped;
}
modelica_metatype boxptr_Mod_isUntypedMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_boolean _outIsUntyped;
modelica_metatype out_outIsUntyped;
_outIsUntyped = omc_Mod_isUntypedMod(threadData, _inMod);
out_outIsUntyped = mmc_mk_icon(_outIsUntyped);
return out_outIsUntyped;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getUnelabedSubMod2(threadData_t *threadData, modelica_metatype _inSubMods, modelica_string _inIdent)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inSubMods;
{
modelica_string _id = NULL;
modelica_metatype _m = NULL;
modelica_metatype _rest_mods = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_boolean tmp10;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
_id = tmpMeta8;
_m = tmpMeta9;
tmp10 = (stringEqual(_id, _inIdent));
if (1 != tmp10) goto goto_2;
tmpMeta1 = _m;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta11 = MMC_CAR(tmp4_1);
tmpMeta12 = MMC_CDR(tmp4_1);
_rest_mods = tmpMeta12;
tmpMeta1 = omc_Mod_getUnelabedSubMod2(threadData, _rest_mods, _inIdent);
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_getUnelabedSubMod(threadData_t *threadData, modelica_metatype _inMod, modelica_string _inIdent)
{
modelica_metatype _outSubMod = NULL;
modelica_metatype _submods = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inMod;
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,5) == 0) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
_submods = tmpMeta2;
_outSubMod = omc_Mod_getUnelabedSubMod2(threadData, _submods, _inIdent);
_return: OMC_LABEL_UNUSED
return _outSubMod;
}
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_prettyPrintFullMod(threadData_t *threadData, modelica_metatype _inFullMod, modelica_integer _inDepth)
{
modelica_string _outStr = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inFullMod;
{
modelica_metatype _mod = NULL;
modelica_metatype _subMod = NULL;
modelica_metatype _cr = NULL;
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_cr = tmpMeta6;
_mod = tmpMeta7;
tmpMeta8 = stringAppend(omc_ComponentReference_printComponentRefStr(threadData, _cr),_OMC_LIT16);
tmpMeta9 = stringAppend(tmpMeta8,omc_Mod_prettyPrintMod(threadData, _mod, _inDepth));
tmp1 = tmpMeta9;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_cr = tmpMeta10;
_subMod = tmpMeta11;
tmpMeta12 = stringAppend(omc_ComponentReference_printComponentRefStr(threadData, _cr),_OMC_LIT16);
tmpMeta13 = stringAppend(tmpMeta12,omc_Mod_prettyPrintSubmod(threadData, _subMod));
tmp1 = tmpMeta13;
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
_outStr = tmp1;
_return: OMC_LABEL_UNUSED
return _outStr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_prettyPrintFullMod(threadData_t *threadData, modelica_metatype _inFullMod, modelica_metatype _inDepth)
{
modelica_integer tmp1;
modelica_string _outStr = NULL;
tmp1 = mmc_unbox_integer(_inDepth);
_outStr = omc_Mod_prettyPrintFullMod(threadData, _inFullMod, tmp1);
return _outStr;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_fullModCrefsEqual(threadData_t *threadData, modelica_metatype _inFullMod1, modelica_metatype _inFullMod2)
{
modelica_boolean _isEqual;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inFullMod1;
tmp4_2 = _inFullMod2;
{
modelica_metatype _cr1 = NULL;
modelica_metatype _cr2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,2) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
_cr1 = tmpMeta6;
_cr2 = tmpMeta7;
tmp1 = omc_ComponentReference_crefEqualNoStringCompare(threadData, _cr1, _cr2);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,2) == 0) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
_cr1 = tmpMeta8;
_cr2 = tmpMeta9;
tmp1 = omc_ComponentReference_crefEqualNoStringCompare(threadData, _cr1, _cr2);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,2) == 0) goto tmp3_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
_cr1 = tmpMeta10;
_cr2 = tmpMeta11;
tmp1 = omc_ComponentReference_crefEqualNoStringCompare(threadData, _cr1, _cr2);
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,2) == 0) goto tmp3_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
_cr1 = tmpMeta12;
_cr2 = tmpMeta13;
tmp1 = omc_ComponentReference_crefEqualNoStringCompare(threadData, _cr1, _cr2);
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
_isEqual = tmp1;
_return: OMC_LABEL_UNUSED
return _isEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_fullModCrefsEqual(threadData_t *threadData, modelica_metatype _inFullMod1, modelica_metatype _inFullMod2)
{
modelica_boolean _isEqual;
modelica_metatype out_isEqual;
_isEqual = omc_Mod_fullModCrefsEqual(threadData, _inFullMod1, _inFullMod2);
out_isEqual = mmc_mk_icon(_isEqual);
return out_isEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getFullModsFromSubMods(threadData_t *threadData, modelica_metatype _inTopCref, modelica_metatype _inSubMods)
{
modelica_metatype _outFullMods = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inSubMods;
{
modelica_metatype _fullMods1 = NULL;
modelica_metatype _fullMods2 = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _subMod = NULL;
modelica_string _id = NULL;
modelica_metatype _mod = NULL;
modelica_metatype _cref = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_boolean tmp14;
modelica_metatype tmpMeta15;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_1);
tmpMeta8 = MMC_CDR(tmp4_1);
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
_subMod = tmpMeta7;
_id = tmpMeta9;
_mod = tmpMeta10;
_rest = tmpMeta8;
tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
_cref = omc_ComponentReference_joinCrefs(threadData, _inTopCref, omc_ComponentReference_makeCrefIdent(threadData, _id, _OMC_LIT17, tmpMeta11));
_fullMods1 = omc_Mod_getFullModsFromMod(threadData, _cref, _mod);
_fullMods2 = omc_Mod_getFullModsFromSubMods(threadData, _inTopCref, _rest);
tmp14 = (modelica_boolean)listEmpty(_fullMods1);
if(tmp14)
{
tmpMeta13 = mmc_mk_box3(4, &Mod_FullMod_SUB__MOD__desc, _cref, _subMod);
tmpMeta12 = mmc_mk_cons(tmpMeta13, _fullMods1);
tmpMeta15 = tmpMeta12;
}
else
{
tmpMeta15 = _fullMods1;
}
tmpMeta1 = listAppend(tmpMeta15, _fullMods2);
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
_outFullMods = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outFullMods;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getFullModFromModRedeclare(threadData_t *threadData, modelica_metatype _inTopCref, modelica_metatype _inRedeclare)
{
modelica_metatype _outFullMod = NULL;
modelica_metatype _el = NULL;
modelica_string _id = NULL;
modelica_metatype _cref = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inRedeclare;
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,4) == 0) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
_el = tmpMeta2;
_id = omc_SCodeUtil_elementName(threadData, _el);
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
_cref = omc_ComponentReference_makeCrefIdent(threadData, _id, _OMC_LIT17, tmpMeta3);
_cref = omc_ComponentReference_joinCrefs(threadData, _inTopCref, _cref);
tmpMeta4 = mmc_mk_box3(3, &Mod_FullMod_MOD__desc, _cref, _inRedeclare);
_outFullMod = tmpMeta4;
_return: OMC_LABEL_UNUSED
return _outFullMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_getFullModsFromMod(threadData_t *threadData, modelica_metatype _inTopCref, modelica_metatype _inMod)
{
modelica_metatype _outFullMods = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
modelica_metatype tmpMeta5;
tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta5;
goto tmp3_done;
}
case 3: {
tmpMeta1 = omc_Mod_getFullModsFromSubMods(threadData, _inTopCref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 4))));
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta6;
tmpMeta6 = mmc_mk_cons(omc_Mod_getFullModFromModRedeclare(threadData, _inTopCref, _inMod), MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta1 = tmpMeta6;
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
_outFullMods = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outFullMods;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_isPrefixOf(threadData_t *threadData, modelica_metatype _indexSubMod, modelica_string _idx)
{
modelica_boolean _isPrefix;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _indexSubMod;
{
modelica_string _i = NULL;
modelica_integer _len1;
modelica_integer _len2;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_boolean tmp7;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
_i = tmpMeta6;
_len1 = stringLength(_i);
_len2 = stringLength(_idx);
tmp7 = ((((modelica_integer) 0) == omc_System_strncmp(threadData, _i, _idx, _len1)) || (((modelica_integer) 0) == omc_System_strncmp(threadData, _idx, _i, _len2)));
if (1 != tmp7) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
tmp1 = 0;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_isPrefix = tmp1;
_return: OMC_LABEL_UNUSED
return _isPrefix;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_isPrefixOf(threadData_t *threadData, modelica_metatype _indexSubMod, modelica_metatype _idx)
{
modelica_boolean _isPrefix;
modelica_metatype out_isPrefix;
_isPrefix = omc_Mod_isPrefixOf(threadData, _indexSubMod, _idx);
out_isPrefix = mmc_mk_icon(_isPrefix);
return out_isPrefix;
}
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_intStringDot(threadData_t *threadData, modelica_integer _i)
{
modelica_string _str = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = stringAppend(intString(_i),_OMC_LIT18);
_str = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _str;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_intStringDot(threadData_t *threadData, modelica_metatype _i)
{
modelica_integer tmp1;
modelica_string _str = NULL;
tmp1 = mmc_unbox_integer(_i);
_str = omc_Mod_intStringDot(threadData, tmp1);
return _str;
}
DLLExport
modelica_boolean omc_Mod_emptyModOrEquality(threadData_t *threadData, modelica_metatype _mod)
{
modelica_boolean _b;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _mod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (!listEmpty(tmpMeta6)) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
tmp1 = 0;
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
modelica_metatype boxptr_Mod_emptyModOrEquality(threadData_t *threadData, modelica_metatype _mod)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_Mod_emptyModOrEquality(threadData, _mod);
out_b = mmc_mk_icon(_b);
return out_b;
}
DLLExport
modelica_metatype omc_Mod_renameNamedSubMod(threadData_t *threadData, modelica_metatype _submod, modelica_string _oldIdent, modelica_string _newIdent)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _submod;
{
modelica_metatype _mod = NULL;
modelica_string _id = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_id = tmpMeta6;
_mod = tmpMeta7;
if (!(stringEqual(_id, _oldIdent))) goto tmp3_end;
tmpMeta8 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _newIdent, _mod);
tmpMeta1 = tmpMeta8;
goto tmp3_done;
}
case 1: {
tmpMeta1 = _submod;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_renameTopLevelNamedSubMod(threadData_t *threadData, modelica_metatype _mod, modelica_string _oldIdent, modelica_string _newIdent)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outMod = _mod;
{
modelica_metatype tmp4_1;
tmp4_1 = _outMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
{
modelica_metatype __omcQ_24tmpVar1;
modelica_metatype* tmp8;
modelica_metatype tmpMeta9;
modelica_metatype __omcQ_24tmpVar0;
modelica_integer tmp10;
modelica_metatype _s_loopVar = 0;
modelica_metatype _s;
_s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outMod), 4)));
tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar1 = tmpMeta9;
tmp8 = &__omcQ_24tmpVar1;
while(1) {
tmp10 = 1;
if (!listEmpty(_s_loopVar)) {
_s = MMC_CAR(_s_loopVar);
_s_loopVar = MMC_CDR(_s_loopVar);
tmp10--;
}
if (tmp10 == 0) {
__omcQ_24tmpVar0 = omc_Mod_renameNamedSubMod(threadData, _s, _oldIdent, _newIdent);
*tmp8 = mmc_mk_cons(__omcQ_24tmpVar0,0);
tmp8 = &MMC_CDR(*tmp8);
} else if (tmp10 == 1) {
break;
} else {
goto goto_2;
}
}
*tmp8 = mmc_mk_nil();
tmpMeta7 = __omcQ_24tmpVar1;
}
tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = tmpMeta7;
_outMod = tmpMeta6;
tmpMeta1 = _outMod;
goto tmp3_done;
}
case 1: {
tmpMeta1 = _mod;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_printEqmodStr(threadData_t *threadData, modelica_metatype _inTypesEqModOption)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inTypesEqModOption;
{
modelica_string _str = NULL;
modelica_string _str2 = NULL;
modelica_string _e_val_str = NULL;
modelica_metatype _e = NULL;
modelica_metatype _e_val = NULL;
modelica_metatype _prop = NULL;
modelica_metatype _ae = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 5; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!optionNone(tmp4_1)) goto tmp3_end;
tmp4 += 3;
tmp1 = _OMC_LIT0;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
if (optionNone(tmpMeta8)) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
_e = tmpMeta7;
_e_val = tmpMeta9;
_prop = tmpMeta10;
tmp4 += 2;
_str = omc_ExpressionDump_printExpStr(threadData, _e);
_str2 = omc_Types_printPropStr(threadData, _prop);
_e_val_str = omc_ValuesUtil_valString(threadData, _e_val);
tmpMeta11 = mmc_mk_cons(_OMC_LIT19, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT20, mmc_mk_cons(_str2, mmc_mk_cons(_OMC_LIT21, mmc_mk_cons(_e_val_str, MMC_REFSTRUCTLIT(mmc_nil)))))));
tmp1 = stringAppendList(tmpMeta11);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,5) == 0) goto tmp3_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
if (!optionNone(tmpMeta14)) goto tmp3_end;
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 4));
_e = tmpMeta13;
_prop = tmpMeta15;
tmp4 += 1;
_str = omc_ExpressionDump_printExpStr(threadData, _e);
_str2 = omc_Types_printPropStr(threadData, _prop);
tmpMeta16 = mmc_mk_cons(_OMC_LIT19, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT22, mmc_mk_cons(_str2, MMC_REFSTRUCTLIT(mmc_nil)))));
tmp1 = stringAppendList(tmpMeta16);
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,1) == 0) goto tmp3_end;
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
_ae = tmpMeta18;
_str = omc_Dump_printExpStr(threadData, _ae);
tmpMeta19 = stringAppend(_OMC_LIT23,_str);
tmp1 = tmpMeta19;
goto tmp3_done;
}
case 4: {
tmp1 = _OMC_LIT24;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 5) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_printSubStr(threadData_t *threadData, modelica_metatype _inSubMod)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inSubMod;
{
modelica_string _mod_str = NULL;
modelica_string _n = NULL;
modelica_metatype _mod = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 1; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_n = tmpMeta6;
_mod = tmpMeta7;
_mod_str = omc_Mod_printModStr(threadData, _mod);
tmpMeta8 = stringAppend(_n,_OMC_LIT20);
tmpMeta9 = stringAppend(tmpMeta8,_mod_str);
tmp1 = tmpMeta9;
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
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
DLLExport
modelica_metatype omc_Mod_printSubs1Str(threadData_t *threadData, modelica_metatype _inTypesSubModLst)
{
modelica_metatype _outStringLst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inTypesSubModLst;
{
modelica_string _s1 = NULL;
modelica_metatype _res = NULL;
modelica_metatype _x = NULL;
modelica_metatype _xs = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta1 = tmpMeta6;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_CAR(tmp4_1);
tmpMeta8 = MMC_CDR(tmp4_1);
_x = tmpMeta7;
_xs = tmpMeta8;
_s1 = omc_Mod_printSubStr(threadData, _x);
_res = omc_Mod_printSubs1Str(threadData, _xs);
tmpMeta9 = mmc_mk_cons(_s1, _res);
tmpMeta1 = tmpMeta9;
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
_outStringLst = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outStringLst;
}
DLLExport
modelica_string omc_Mod_prettyPrintSubmod(threadData_t *threadData, modelica_metatype _inSub)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inSub;
{
modelica_string _s1 = NULL;
modelica_string _s2 = NULL;
modelica_string _id = NULL;
modelica_metatype _m = NULL;
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
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,4) == 0) goto tmp3_end;
_id = tmpMeta6;
_m = tmpMeta7;
_s1 = omc_SCodeDump_unparseElementStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 4))), _OMC_LIT7);
tmpMeta8 = stringAppend(_id,_OMC_LIT25);
tmpMeta9 = stringAppend(tmpMeta8,(omc_SCodeUtil_eachBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 3))))?_OMC_LIT3:_OMC_LIT0));
tmpMeta10 = stringAppend(tmpMeta9,(omc_SCodeUtil_finalBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 2))))?_OMC_LIT2:_OMC_LIT0));
tmpMeta11 = stringAppend(tmpMeta10,_s1);
tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT6);
tmp1 = tmpMeta12;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_id = tmpMeta13;
_m = tmpMeta14;
_s2 = omc_Mod_prettyPrintMod(threadData, _m, ((modelica_integer) 0));
tmpMeta15 = stringAppend(_id,_s2);
tmp1 = tmpMeta15;
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
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_prettyPrintSubs(threadData_t *threadData, modelica_metatype _inSubs, modelica_integer _depth)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inSubs;
{
modelica_string _s2 = NULL;
modelica_string _id = NULL;
modelica_metatype _m = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp1 = _OMC_LIT0;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,4) == 0) goto tmp3_end;
_id = tmpMeta8;
tmpMeta10 = stringAppend(_OMC_LIT26,_id);
tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT27);
tmpMeta12 = stringAppend(tmpMeta11,_id);
tmp1 = tmpMeta12;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta13 = MMC_CAR(tmp4_1);
tmpMeta14 = MMC_CDR(tmp4_1);
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
_id = tmpMeta15;
_m = tmpMeta16;
_s2 = omc_Mod_prettyPrintMod(threadData, _m, ((modelica_integer) 1) + _depth);
tmpMeta17 = stringAppend(_OMC_LIT4,_id);
tmpMeta18 = stringAppend(tmpMeta17,_s2);
tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT27);
tmpMeta20 = stringAppend(tmpMeta19,_id);
tmp1 = tmpMeta20;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_prettyPrintSubs(threadData_t *threadData, modelica_metatype _inSubs, modelica_metatype _depth)
{
modelica_integer tmp1;
modelica_string _str = NULL;
tmp1 = mmc_unbox_integer(_depth);
_str = omc_Mod_prettyPrintSubs(threadData, _inSubs, tmp1);
return _str;
}
DLLExport
modelica_string omc_Mod_prettyPrintMod(threadData_t *threadData, modelica_metatype _m, modelica_integer _depth)
{
modelica_string _str = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _m;
{
modelica_metatype _subs = NULL;
modelica_metatype _fp = NULL;
modelica_metatype _eq = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 5; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta7)) goto tmp3_end;
_subs = tmpMeta6;
tmp4 += 3;
tmp1 = omc_Mod_prettyPrintSubs(threadData, _subs, _depth);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta9)) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
_fp = tmpMeta8;
_eq = tmpMeta10;
tmp4 += 2;
tmpMeta11 = stringAppend((omc_SCodeUtil_finalBool(threadData, _fp)?_OMC_LIT2:_OMC_LIT0),_OMC_LIT1);
tmpMeta12 = stringAppend(tmpMeta11,omc_Types_unparseEqMod(threadData, _eq));
tmp1 = tmpMeta12;
goto tmp3_done;
}
case 2: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmp4 += 1;
tmp1 = omc_SCodeDump_unparseElementStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 4))), _OMC_LIT7);
goto tmp3_done;
}
case 3: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp1 = _OMC_LIT0;
goto tmp3_done;
}
case 4: {
fputs(MMC_STRINGDATA(_OMC_LIT28),stdout);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 5) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_str = tmp1;
_return: OMC_LABEL_UNUSED
return _str;
}
modelica_metatype boxptr_Mod_prettyPrintMod(threadData_t *threadData, modelica_metatype _m, modelica_metatype _depth)
{
modelica_integer tmp1;
modelica_string _str = NULL;
tmp1 = mmc_unbox_integer(_depth);
_str = omc_Mod_prettyPrintMod(threadData, _m, tmp1);
return _str;
}
DLLExport
void omc_Mod_printMod(threadData_t *threadData, modelica_metatype _m)
{
modelica_string _str = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_str = omc_Mod_printModStr(threadData, _m);
omc_Print_printBuf(threadData, _str);
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_string omc_Mod_printModStr(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_string _prefix = NULL;
modelica_string _str = NULL;
modelica_string _s1_1 = NULL;
modelica_string _s2 = NULL;
modelica_metatype _s1 = NULL;
modelica_metatype _finalPrefix = NULL;
modelica_metatype _eachPrefix = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _eq = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp4 += 2;
tmp1 = _OMC_LIT29;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_finalPrefix = tmpMeta6;
_eachPrefix = tmpMeta7;
tmp4 += 1;
tmpMeta8 = stringAppend(omc_SCodeDump_finalStr(threadData, _finalPrefix),omc_SCodeDump_eachStr(threadData, _eachPrefix));
_prefix = tmpMeta8;
_str = omc_SCodeDump_unparseElementStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 4))), _OMC_LIT7);
tmpMeta9 = mmc_mk_cons(_OMC_LIT4, mmc_mk_cons(_prefix, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT6, MMC_REFSTRUCTLIT(mmc_nil)))));
tmp1 = stringAppendList(tmpMeta9);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_boolean tmp17;
modelica_string tmp18;
modelica_metatype tmpMeta19;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
_finalPrefix = tmpMeta10;
_eachPrefix = tmpMeta11;
_subs = tmpMeta12;
_eq = tmpMeta13;
tmpMeta14 = stringAppend(omc_SCodeDump_finalStr(threadData, _finalPrefix),omc_SCodeDump_eachStr(threadData, _eachPrefix));
_prefix = tmpMeta14;
_s1 = omc_Mod_printSubs1Str(threadData, _subs);
_s1_1 = stringDelimitList(_s1, _OMC_LIT5);
tmp17 = (modelica_boolean)(!listEmpty(_subs));
if(tmp17)
{
tmpMeta15 = stringAppend(_OMC_LIT30,_s1_1);
tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT31);
tmp18 = tmpMeta16;
}
else
{
tmp18 = _s1_1;
}
_s1_1 = tmp18;
_s2 = omc_Mod_printEqmodStr(threadData, _eq);
tmpMeta19 = mmc_mk_cons(_prefix, mmc_mk_cons(_s1_1, mmc_mk_cons(_s2, MMC_REFSTRUCTLIT(mmc_nil))));
tmp1 = stringAppendList(tmpMeta19);
goto tmp3_done;
}
case 3: {
fputs(MMC_STRINGDATA(_OMC_LIT32),stdout);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 4) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_eqModEqual(threadData_t *threadData, modelica_metatype _eqMod1, modelica_metatype _eqMod2)
{
modelica_boolean _equal;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _eqMod1;
tmp4_2 = _eqMod2;
{
modelica_metatype _aexp1 = NULL;
modelica_metatype _aexp2 = NULL;
modelica_metatype _exp1 = NULL;
modelica_metatype _exp2 = NULL;
modelica_metatype _v1 = NULL;
modelica_metatype _v2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 6; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!optionNone(tmp4_1)) goto tmp3_end;
if (!optionNone(tmp4_2)) goto tmp3_end;
tmp4 += 4;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_boolean tmp12;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,5) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
_exp1 = tmpMeta7;
_v1 = tmpMeta8;
_exp2 = tmpMeta10;
_v2 = tmpMeta11;
tmp4 += 3;
_equal = omc_Expression_expEqual(threadData, _exp1, _exp2);
tmp12 = omc_Mod_valEqual(threadData, _v1, _v2, _equal);
if (1 != tmp12) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_boolean tmp17;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,5) == 0) goto tmp3_end;
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 5));
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,1,1) == 0) goto tmp3_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
_aexp1 = tmpMeta14;
_aexp2 = tmpMeta16;
tmp4 += 2;
tmp17 = omc_AbsynUtil_expEqual(threadData, _aexp1, _aexp2);
if (1 != tmp17) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_boolean tmp22;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,1) == 0) goto tmp3_end;
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,5) == 0) goto tmp3_end;
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 5));
_aexp1 = tmpMeta19;
_aexp2 = tmpMeta21;
tmp4 += 1;
tmp22 = omc_AbsynUtil_expEqual(threadData, _aexp1, _aexp2);
if (1 != tmp22) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_metatype tmpMeta26;
modelica_boolean tmp27;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,1,1) == 0) goto tmp3_end;
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,1,1) == 0) goto tmp3_end;
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
_aexp1 = tmpMeta24;
_aexp2 = tmpMeta26;
tmp27 = omc_AbsynUtil_expEqual(threadData, _aexp1, _aexp2);
if (1 != tmp27) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 5: {
tmp1 = 0;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 6) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_equal = tmp1;
_return: OMC_LABEL_UNUSED
return _equal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_eqModEqual(threadData_t *threadData, modelica_metatype _eqMod1, modelica_metatype _eqMod2)
{
modelica_boolean _equal;
modelica_metatype out_equal;
_equal = omc_Mod_eqModEqual(threadData, _eqMod1, _eqMod2);
out_equal = mmc_mk_icon(_equal);
return out_equal;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_valEqual(threadData_t *threadData, modelica_metatype _inV1, modelica_metatype _inV2, modelica_boolean _equal)
{
modelica_boolean _bEq;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_boolean tmp4_3;
tmp4_1 = _inV1;
tmp4_2 = _inV2;
tmp4_3 = _equal;
{
modelica_metatype _v1 = NULL;
modelica_metatype _v2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (1 != tmp4_3) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
if (!optionNone(tmp4_1)) goto tmp3_end;
if (!optionNone(tmp4_2)) goto tmp3_end;
tmp1 = _equal;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (0 != tmp4_3) goto tmp3_end;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
_v1 = tmpMeta6;
_v2 = tmpMeta7;
tmp1 = omc_Expression_expEqual(threadData, omc_ValuesUtil_valueExp(threadData, _v1, mmc_mk_none()), omc_ValuesUtil_valueExp(threadData, _v2, mmc_mk_none()));
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
_bEq = tmp1;
_return: OMC_LABEL_UNUSED
return _bEq;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_valEqual(threadData_t *threadData, modelica_metatype _inV1, modelica_metatype _inV2, modelica_metatype _equal)
{
modelica_integer tmp1;
modelica_boolean _bEq;
modelica_metatype out_bEq;
tmp1 = mmc_unbox_integer(_equal);
_bEq = omc_Mod_valEqual(threadData, _inV1, _inV2, tmp1);
out_bEq = mmc_mk_icon(_bEq);
return out_bEq;
}
DLLExport
modelica_boolean omc_Mod_subModEqual(threadData_t *threadData, modelica_metatype _subMod1, modelica_metatype _subMod2)
{
modelica_boolean _equal;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _subMod1;
tmp4_2 = _subMod2;
{
modelica_string _id1 = NULL;
modelica_string _id2 = NULL;
modelica_metatype _mod1 = NULL;
modelica_metatype _mod2 = NULL;
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
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
_id1 = tmpMeta6;
_mod1 = tmpMeta7;
_id2 = tmpMeta8;
_mod2 = tmpMeta9;
if (!((stringEqual(_id1, _id2)) && omc_Mod_modEqual(threadData, _mod1, _mod2))) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
tmp1 = 0;
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
_equal = tmp1;
_return: OMC_LABEL_UNUSED
return _equal;
}
modelica_metatype boxptr_Mod_subModEqual(threadData_t *threadData, modelica_metatype _subMod1, modelica_metatype _subMod2)
{
modelica_boolean _equal;
modelica_metatype out_equal;
_equal = omc_Mod_subModEqual(threadData, _subMod1, _subMod2);
out_equal = mmc_mk_icon(_equal);
return out_equal;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_subModsEqual(threadData_t *threadData, modelica_metatype _inSubModLst1, modelica_metatype _inSubModLst2)
{
modelica_boolean _equal;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _inSubModLst1;
tmp4_2 = _inSubModLst2;
{
modelica_string _id1 = NULL;
modelica_string _id2 = NULL;
modelica_metatype _mod1 = NULL;
modelica_metatype _mod2 = NULL;
modelica_metatype _subModLst1 = NULL;
modelica_metatype _subModLst2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmp4 += 1;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_boolean tmp14;
modelica_boolean tmp15;
modelica_boolean tmp16;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta10 = MMC_CAR(tmp4_2);
tmpMeta11 = MMC_CDR(tmp4_2);
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
_id1 = tmpMeta8;
_mod1 = tmpMeta9;
_subModLst1 = tmpMeta7;
_id2 = tmpMeta12;
_mod2 = tmpMeta13;
_subModLst2 = tmpMeta11;
tmp14 = (stringEqual(_id1, _id2));
if (1 != tmp14) goto goto_2;
tmp15 = omc_Mod_modEqual(threadData, _mod1, _mod2);
if (1 != tmp15) goto goto_2;
tmp16 = omc_Mod_subModsEqual(threadData, _subModLst1, _subModLst2);
if (1 != tmp16) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
tmp1 = 0;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_equal = tmp1;
_return: OMC_LABEL_UNUSED
return _equal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_subModsEqual(threadData_t *threadData, modelica_metatype _inSubModLst1, modelica_metatype _inSubModLst2)
{
modelica_boolean _equal;
modelica_metatype out_equal;
_equal = omc_Mod_subModsEqual(threadData, _inSubModLst1, _inSubModLst2);
out_equal = mmc_mk_icon(_equal);
return out_equal;
}
DLLExport
modelica_boolean omc_Mod_modEqual(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2)
{
modelica_boolean _equal;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _mod1;
tmp4_2 = _mod2;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmp1 = (((omc_SCodeUtil_finalEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 2)))) && omc_SCodeUtil_eachEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 3))))) && omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))), boxvar_Mod_subModEqual)) && omc_Mod_eqModEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 5)))));
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmp1 = ((omc_SCodeUtil_finalEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 2)))) && omc_SCodeUtil_eachEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 3))))) && omc_SCodeUtil_elementEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4)))));
goto tmp3_done;
}
case 2: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 3: {
tmp1 = 0;
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
_equal = tmp1;
_return: OMC_LABEL_UNUSED
return _equal;
}
modelica_metatype boxptr_Mod_modEqual(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2)
{
modelica_boolean _equal;
modelica_metatype out_equal;
_equal = omc_Mod_modEqual(threadData, _mod1, _mod2);
out_equal = mmc_mk_icon(_equal);
return out_equal;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_subModsSubsetOrEqual(threadData_t *threadData, modelica_metatype _subModLst1, modelica_metatype _subModLst2)
{
modelica_boolean _equal;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _subModLst1;
tmp4_2 = _subModLst2;
{
modelica_string _id1 = NULL;
modelica_string _id2 = NULL;
modelica_metatype _mod1 = NULL;
modelica_metatype _mod2 = NULL;
modelica_metatype _rest1 = NULL;
modelica_metatype _rest2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
if (!listEmpty(tmp4_2)) goto tmp3_end;
tmp4 += 1;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_boolean tmp14;
modelica_boolean tmp15;
modelica_boolean tmp16;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta10 = MMC_CAR(tmp4_2);
tmpMeta11 = MMC_CDR(tmp4_2);
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
_id1 = tmpMeta8;
_mod1 = tmpMeta9;
_rest1 = tmpMeta7;
_id2 = tmpMeta12;
_mod2 = tmpMeta13;
_rest2 = tmpMeta11;
tmp14 = (stringEqual(_id1, _id2));
if (1 != tmp14) goto goto_2;
tmp15 = omc_Mod_modEqual(threadData, _mod1, _mod2);
if (1 != tmp15) goto goto_2;
tmp16 = omc_Mod_subModsEqual(threadData, _rest1, _rest2);
if (1 != tmp16) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
tmp1 = 0;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_equal = tmp1;
_return: OMC_LABEL_UNUSED
return _equal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_subModsSubsetOrEqual(threadData_t *threadData, modelica_metatype _subModLst1, modelica_metatype _subModLst2)
{
modelica_boolean _equal;
modelica_metatype out_equal;
_equal = omc_Mod_subModsSubsetOrEqual(threadData, _subModLst1, _subModLst2);
out_equal = mmc_mk_icon(_equal);
return out_equal;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_eqModSubsetOrEqual(threadData_t *threadData, modelica_metatype _eqMod1, modelica_metatype _eqMod2)
{
modelica_boolean _equal;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _eqMod1;
tmp4_2 = _eqMod2;
{
modelica_metatype _aexp1 = NULL;
modelica_metatype _aexp2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 7; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!optionNone(tmp4_1)) goto tmp3_end;
if (!optionNone(tmp4_2)) goto tmp3_end;
tmp4 += 5;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
if (!optionNone(tmp4_1)) goto tmp3_end;
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
tmp4 += 4;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_boolean tmp9;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,5) == 0) goto tmp3_end;
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,5) == 0) goto tmp3_end;
tmp4 += 3;
tmp9 = omc_Mod_eqModEqual(threadData, _eqMod1, _eqMod2);
if (1 != tmp9) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_boolean tmp14;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,5) == 0) goto tmp3_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 5));
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,1) == 0) goto tmp3_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
_aexp1 = tmpMeta11;
_aexp2 = tmpMeta13;
tmp4 += 2;
tmp14 = omc_AbsynUtil_expEqual(threadData, _aexp1, _aexp2);
if (1 != tmp14) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_boolean tmp19;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,1,1) == 0) goto tmp3_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,5) == 0) goto tmp3_end;
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 5));
_aexp1 = tmpMeta16;
_aexp2 = tmpMeta18;
tmp4 += 1;
tmp19 = omc_AbsynUtil_expEqual(threadData, _aexp1, _aexp2);
if (1 != tmp19) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 5: {
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
modelica_boolean tmp24;
if (optionNone(tmp4_1)) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,1,1) == 0) goto tmp3_end;
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
if (optionNone(tmp4_2)) goto tmp3_end;
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,1,1) == 0) goto tmp3_end;
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
_aexp1 = tmpMeta21;
_aexp2 = tmpMeta23;
tmp24 = omc_AbsynUtil_expEqual(threadData, _aexp1, _aexp2);
if (1 != tmp24) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 6: {
tmp1 = 0;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 7) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_equal = tmp1;
_return: OMC_LABEL_UNUSED
return _equal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_eqModSubsetOrEqual(threadData_t *threadData, modelica_metatype _eqMod1, modelica_metatype _eqMod2)
{
modelica_boolean _equal;
modelica_metatype out_equal;
_equal = omc_Mod_eqModSubsetOrEqual(threadData, _eqMod1, _eqMod2);
out_equal = mmc_mk_icon(_equal);
return out_equal;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_modSubsetOrEqualOrNonOverlap(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2)
{
modelica_boolean _equal;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _mod1;
tmp4_2 = _mod2;
{
modelica_metatype _f1 = NULL;
modelica_metatype _f2 = NULL;
modelica_metatype _each1 = NULL;
modelica_metatype _each2 = NULL;
modelica_metatype _submods1 = NULL;
modelica_metatype _submods2 = NULL;
modelica_metatype _eqmod1 = NULL;
modelica_metatype _eqmod2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 6; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_boolean tmp13;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta7)) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,0) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (!listEmpty(tmpMeta10)) goto tmp3_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
if (optionNone(tmpMeta11)) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
_f1 = tmpMeta6;
_f2 = tmpMeta8;
tmp13 = omc_SCodeUtil_finalEqual(threadData, _f1, _f2);
if (1 != tmp13) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_boolean tmp18;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,1,0) == 0) goto tmp3_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (!listEmpty(tmpMeta16)) goto tmp3_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
_eqmod1 = tmpMeta14;
_eqmod2 = tmpMeta17;
tmp18 = omc_Mod_eqModSubsetOrEqual(threadData, _eqmod1, _eqmod2);
if (1 != tmp18) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_metatype tmpMeta26;
modelica_boolean tmp27;
modelica_boolean tmp28;
modelica_boolean tmp29;
modelica_boolean tmp30;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
_f1 = tmpMeta19;
_each1 = tmpMeta20;
_submods1 = tmpMeta21;
_eqmod1 = tmpMeta22;
_f2 = tmpMeta23;
_each2 = tmpMeta24;
_submods2 = tmpMeta25;
_eqmod2 = tmpMeta26;
tmp4 += 2;
tmp27 = omc_SCodeUtil_finalEqual(threadData, _f1, _f2);
if (1 != tmp27) goto goto_2;
tmp28 = omc_SCodeUtil_eachEqual(threadData, _each1, _each2);
if (1 != tmp28) goto goto_2;
tmp29 = omc_Mod_subModsEqual(threadData, _submods1, _submods2);
if (1 != tmp29) goto goto_2;
tmp30 = omc_Mod_eqModSubsetOrEqual(threadData, _eqmod1, _eqmod2);
if (1 != tmp30) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta31;
modelica_metatype tmpMeta32;
modelica_metatype tmpMeta33;
modelica_metatype tmpMeta34;
modelica_boolean tmp35;
modelica_boolean tmp36;
modelica_boolean tmp37;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
_f1 = tmpMeta31;
_each1 = tmpMeta32;
_f2 = tmpMeta33;
_each2 = tmpMeta34;
tmp4 += 1;
tmp35 = omc_SCodeUtil_finalEqual(threadData, _f1, _f2);
if (1 != tmp35) goto goto_2;
tmp36 = omc_SCodeUtil_eachEqual(threadData, _each1, _each2);
if (1 != tmp36) goto goto_2;
tmp37 = omc_SCodeUtil_elementEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))));
if (1 != tmp37) goto goto_2;
tmp1 = 1;
goto tmp3_done;
}
case 4: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 5: {
tmp1 = 0;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 6) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_equal = tmp1;
_return: OMC_LABEL_UNUSED
return _equal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_modSubsetOrEqualOrNonOverlap(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2)
{
modelica_boolean _equal;
modelica_metatype out_equal;
_equal = omc_Mod_modSubsetOrEqualOrNonOverlap(threadData, _mod1, _mod2);
out_equal = mmc_mk_icon(_equal);
return out_equal;
}
DLLExport
modelica_metatype omc_Mod_modEquation(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_metatype _outEqMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
tmpMeta1 = mmc_mk_none();
goto tmp3_done;
}
case 4: {
tmpMeta1 = mmc_mk_none();
goto tmp3_done;
}
case 3: {
tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 5)));
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
_outEqMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outEqMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeEq(threadData_t *threadData, modelica_metatype _inOuterEq, modelica_metatype _inInnerEq)
{
modelica_metatype _outEqMod = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outEqMod = (isSome(_inOuterEq)?_inOuterEq:_inInnerEq);
_return: OMC_LABEL_UNUSED
return _outEqMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeSubs(threadData_t *threadData, modelica_metatype _inSubMods1, modelica_metatype _inSubMods2, modelica_boolean _inCheckFinal)
{
modelica_metatype _outSubMods = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _submods2 = NULL;
modelica_string _name = NULL;
modelica_metatype _m1 = NULL;
modelica_metatype _m2 = NULL;
modelica_metatype _osm2 = NULL;
modelica_metatype _sm2 = NULL;
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
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outSubMods = tmpMeta1;
if(listEmpty(_inSubMods1))
{
_outSubMods = _inSubMods2;
}
else
{
if(listEmpty(_inSubMods2))
{
_outSubMods = _inSubMods1;
}
else
{
_submods2 = _inSubMods2;
{
modelica_metatype _sm1;
for (tmpMeta2 = _inSubMods1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_sm1 = MMC_CAR(tmpMeta2);
_submods2 = omc_List_deleteMemberOnTrue(threadData, omc_Mod_subModName(threadData, _sm1), _submods2, boxvar_Mod_subModIsNamed ,&_osm2);
if(isSome(_osm2))
{
tmpMeta3 = _osm2;
if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
_sm2 = tmpMeta4;
tmpMeta5 = _sm1;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
_name = tmpMeta6;
_m1 = tmpMeta7;
tmpMeta8 = _sm2;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
_m2 = tmpMeta9;
_m1 = omc_Mod_merge(threadData, _m1, _m2, _name, _inCheckFinal);
tmpMeta10 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _name, _m1);
_sm1 = tmpMeta10;
}
tmpMeta11 = mmc_mk_cons(_sm1, _outSubMods);
_outSubMods = tmpMeta11;
}
}
_outSubMods = omc_List_append__reverse(threadData, _outSubMods, _submods2);
}
}
_return: OMC_LABEL_UNUSED
return _outSubMods;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_mergeSubs(threadData_t *threadData, modelica_metatype _inSubMods1, modelica_metatype _inSubMods2, modelica_metatype _inCheckFinal)
{
modelica_integer tmp1;
modelica_metatype _outSubMods = NULL;
modelica_metatype tmpMeta2;
tmp1 = mmc_unbox_integer(_inCheckFinal);
_outSubMods = omc_Mod_mergeSubs(threadData, _inSubMods1, _inSubMods2, tmp1);
return _outSubMods;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_doMerge(threadData_t *threadData, modelica_metatype _inModOuter, modelica_metatype _inModInner, modelica_boolean _inCheckFinal)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outMod = _inModOuter;
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _outMod;
tmp4_2 = _inModInner;
{
modelica_metatype _el1 = NULL;
modelica_metatype _el2 = NULL;
modelica_metatype _smod1 = NULL;
modelica_metatype _smod2 = NULL;
modelica_metatype _emod1 = NULL;
modelica_metatype _emod2 = NULL;
modelica_metatype _emod = NULL;
modelica_metatype _dmod1 = NULL;
modelica_metatype _dmod2 = NULL;
modelica_metatype _dmod = NULL;
modelica_metatype _res = NULL;
modelica_metatype _info = NULL;
modelica_metatype _eqmod = NULL;
modelica_metatype _vals = NULL;
modelica_metatype _val = NULL;
modelica_metatype _names = NULL;
modelica_string _name = NULL;
modelica_metatype _submods = NULL;
modelica_metatype _submod = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 9; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,8) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,8) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,1) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
if (!optionNone(tmpMeta10)) goto tmp3_end;
tmpMeta1 = _inModOuter;
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
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,8) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,3,8) == 0) goto tmp3_end;
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
_el1 = tmpMeta11;
_emod1 = tmpMeta12;
_el2 = tmpMeta13;
_emod2 = tmpMeta14;
_smod1 = omc_SCodeUtil_getConstrainedByModifiers(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 3))));
_smod1 = omc_SCodeUtil_mergeModifiers(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 6))), _smod1);
tmpMeta15 = mmc_mk_box2(3, &Mod_ModScope_COMPONENT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 2))));
_dmod1 = omc_Mod_elabUntypedMod(threadData, _smod1, tmpMeta15);
_smod2 = omc_SCodeUtil_getConstrainedByModifiers(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 3))));
_smod2 = omc_SCodeUtil_mergeModifiers(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 6))), _smod2);
tmpMeta16 = mmc_mk_box2(3, &Mod_ModScope_COMPONENT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 2))));
_dmod2 = omc_Mod_elabUntypedMod(threadData, _smod2, tmpMeta16);
_dmod = omc_Mod_merge(threadData, _dmod1, _dmod2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 2))), _inCheckFinal);
_emod = omc_Mod_merge(threadData, _emod1, _emod2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 2))), _inCheckFinal);
tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(10));
memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_el1), 10*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[6] = omc_Mod_unelabMod(threadData, _dmod);
_el1 = tmpMeta17;
tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(10));
memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_el1), 10*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[3] = omc_SCodeUtil_propagatePrefixes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 3))));
_el1 = tmpMeta18;
tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(10));
memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_el1), 10*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[4] = omc_SCodeUtil_propagateAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 4))), 0);
_el1 = tmpMeta19;
tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_outMod), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[4] = _el1;
_outMod = tmpMeta20;
tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_outMod), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[5] = _emod;
_outMod = tmpMeta21;
tmpMeta1 = _outMod;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_metatype tmpMeta26;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,2,8) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,2,8) == 0) goto tmp3_end;
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 6));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,0,1) == 0) goto tmp3_end;
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
if (!optionNone(tmpMeta26)) goto tmp3_end;
tmpMeta1 = _inModOuter;
goto tmp3_done;
}
case 3: {
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,2,8) == 0) goto tmp3_end;
tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,2,8) == 0) goto tmp3_end;
tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
_el1 = tmpMeta27;
_emod1 = tmpMeta28;
_el2 = tmpMeta29;
_emod2 = tmpMeta30;
_smod1 = omc_SCodeUtil_getConstrainedByModifiers(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 3))));
tmpMeta31 = mmc_mk_box2(3, &Mod_ModScope_COMPONENT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 2))));
_dmod1 = omc_Mod_elabUntypedMod(threadData, _smod1, tmpMeta31);
_emod1 = omc_Mod_merge(threadData, _emod1, _dmod1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 2))), _inCheckFinal);
_smod2 = omc_SCodeUtil_getConstrainedByModifiers(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 3))));
tmpMeta32 = mmc_mk_box2(3, &Mod_ModScope_COMPONENT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 2))));
_dmod2 = omc_Mod_elabUntypedMod(threadData, _smod2, tmpMeta32);
_emod2 = omc_Mod_merge(threadData, _emod2, _dmod2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 2))), _inCheckFinal);
_emod = omc_Mod_merge(threadData, _emod1, _emod2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 2))), _inCheckFinal);
tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(10));
memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_el1), 10*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[3] = omc_SCodeUtil_propagatePrefixes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 3))));
_el1 = tmpMeta33;
_res = omc_SCodeUtil_checkSameRestriction(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el1), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_el2), 9))) ,&_info);
tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(10));
memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_el1), 10*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[6] = _res;
_el1 = tmpMeta34;
tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(10));
memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_el1), 10*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[9] = _info;
_el1 = tmpMeta35;
tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_outMod), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[4] = _el1;
_outMod = tmpMeta36;
tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_outMod), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[5] = _emod;
_outMod = tmpMeta37;
tmpMeta1 = _outMod;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta38;
modelica_metatype tmpMeta39;
modelica_metatype tmpMeta40;
modelica_metatype tmpMeta41;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
_el1 = tmpMeta38;
_emod = tmpMeta39;
_emod = omc_Mod_merge(threadData, _emod, _inModInner, _OMC_LIT0, _inCheckFinal);
tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_outMod), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[4] = _el1;
_outMod = tmpMeta40;
tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_outMod), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[5] = _emod;
_outMod = tmpMeta41;
tmpMeta1 = _outMod;
goto tmp3_done;
}
case 5: {
modelica_metatype tmpMeta42;
modelica_metatype tmpMeta43;
modelica_metatype tmpMeta44;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
_el2 = tmpMeta42;
_emod = tmpMeta43;
_emod = omc_Mod_merge(threadData, _inModOuter, _emod, _OMC_LIT0, _inCheckFinal);
tmpMeta44 = mmc_mk_box5(4, &DAE_Mod_REDECL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inModInner), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inModInner), 3))), _el2, _emod);
tmpMeta1 = tmpMeta44;
goto tmp3_done;
}
case 6: {
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
modelica_metatype tmpMeta66;
modelica_metatype tmpMeta67;
modelica_metatype tmpMeta68;
modelica_metatype tmpMeta69;
modelica_metatype tmpMeta70;
modelica_metatype tmpMeta71;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (listEmpty(tmpMeta45)) goto tmp3_end;
tmpMeta46 = MMC_CAR(tmpMeta45);
tmpMeta47 = MMC_CDR(tmpMeta45);
tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
if (!optionNone(tmpMeta48)) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (!listEmpty(tmpMeta49)) goto tmp3_end;
tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta50)) goto tmp3_end;
tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta51,0,5) == 0) goto tmp3_end;
tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 3));
if (optionNone(tmpMeta52)) goto tmp3_end;
tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,10,4) == 0) goto tmp3_end;
_submods = tmpMeta45;
_eqmod = tmpMeta51;
_val = tmpMeta53;
_names = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 4)));
tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
_vals = tmpMeta54;
{
modelica_metatype _v;
for (tmpMeta55 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 3))); !listEmpty(tmpMeta55); tmpMeta55=MMC_CDR(tmpMeta55))
{
_v = MMC_CAR(tmpMeta55);
tmpMeta56 = _names;
if (listEmpty(tmpMeta56)) goto goto_2;
tmpMeta57 = MMC_CAR(tmpMeta56);
tmpMeta58 = MMC_CDR(tmpMeta56);
_name = tmpMeta57;
_names = tmpMeta58;
if(omc_ValuesUtil_isEmpty(threadData, _v))
{
{
{
volatile mmc_switch_type tmp61;
int tmp62;
tmp61 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp60_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp61 < 2; tmp61++) {
switch (MMC_SWITCH_CAST(tmp61)) {
case 0: {
modelica_metatype tmpMeta63;
modelica_metatype tmpMeta64;
modelica_metatype tmpMeta65;
tmpMeta65 = omc_List_deleteMemberOnTrue(threadData, _name, _submods, boxvar_Mod_isSubModNamed, &tmpMeta63);
_submods = tmpMeta65;
if (optionNone(tmpMeta63)) goto goto_59;
tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 1));
_submod = tmpMeta64;
_v = omc_Mod_subModValue(threadData, _submod);
goto tmp60_done;
}
case 1: {
goto tmp60_done;
}
}
goto tmp60_end;
tmp60_end: ;
}
goto goto_59;
tmp60_done:
(void)tmp61;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp60_done2;
goto_59:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp61 < 2) {
goto tmp60_top;
}
goto goto_2;
tmp60_done2:;
}
}
;
}
tmpMeta66 = mmc_mk_cons(_v, _vals);
_vals = tmpMeta66;
}
}
tmpMeta68 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta68), MMC_UNTAGPTR(_val), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta68))[3] = listReverse(_vals);
_val = tmpMeta68;
tmpMeta69 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta69), MMC_UNTAGPTR(_eqmod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta69))[3] = mmc_mk_some(_val);
_eqmod = tmpMeta69;
tmpMeta70 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta70), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta70))[5] = mmc_mk_some(_eqmod);
_outMod = tmpMeta70;
tmpMeta71 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta71), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta71))[4] = omc_Mod_stripSubModBindings(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inModInner), 4))));
_outMod = tmpMeta71;
tmpMeta1 = _outMod;
goto tmp3_done;
}
case 7: {
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
modelica_metatype tmpMeta84;
modelica_metatype tmpMeta85;
modelica_metatype tmpMeta93;
modelica_metatype tmpMeta94;
modelica_metatype tmpMeta95;
modelica_metatype tmpMeta96;
modelica_metatype tmpMeta97;
modelica_metatype tmpMeta98;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (listEmpty(tmpMeta72)) goto tmp3_end;
tmpMeta73 = MMC_CAR(tmpMeta72);
tmpMeta74 = MMC_CDR(tmpMeta72);
tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta75)) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (!listEmpty(tmpMeta76)) goto tmp3_end;
tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
if (optionNone(tmpMeta77)) goto tmp3_end;
tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta78,0,5) == 0) goto tmp3_end;
tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta78), 3));
if (optionNone(tmpMeta79)) goto tmp3_end;
tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta79), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta80,10,4) == 0) goto tmp3_end;
_submods = tmpMeta72;
_eqmod = tmpMeta78;
_val = tmpMeta80;
_names = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 4)));
tmpMeta81 = MMC_REFSTRUCTLIT(mmc_nil);
_vals = tmpMeta81;
{
modelica_metatype _v;
for (tmpMeta82 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 3))); !listEmpty(tmpMeta82); tmpMeta82=MMC_CDR(tmpMeta82))
{
_v = MMC_CAR(tmpMeta82);
tmpMeta83 = _names;
if (listEmpty(tmpMeta83)) goto goto_2;
tmpMeta84 = MMC_CAR(tmpMeta83);
tmpMeta85 = MMC_CDR(tmpMeta83);
_name = tmpMeta84;
_names = tmpMeta85;
{
{
volatile mmc_switch_type tmp88;
int tmp89;
tmp88 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp87_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp88 < 2; tmp88++) {
switch (MMC_SWITCH_CAST(tmp88)) {
case 0: {
modelica_metatype tmpMeta90;
modelica_metatype tmpMeta91;
modelica_metatype tmpMeta92;
tmpMeta92 = omc_List_deleteMemberOnTrue(threadData, _name, _submods, boxvar_Mod_isSubModNamed, &tmpMeta90);
_submods = tmpMeta92;
if (optionNone(tmpMeta90)) goto goto_86;
tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta90), 1));
_submod = tmpMeta91;
_v = omc_Mod_subModValue(threadData, _submod);
goto tmp87_done;
}
case 1: {
goto tmp87_done;
}
}
goto tmp87_end;
tmp87_end: ;
}
goto goto_86;
tmp87_done:
(void)tmp88;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp87_done2;
goto_86:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp88 < 2) {
goto tmp87_top;
}
goto goto_2;
tmp87_done2:;
}
}
;
tmpMeta93 = mmc_mk_cons(_v, _vals);
_vals = tmpMeta93;
}
}
tmpMeta95 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta95), MMC_UNTAGPTR(_val), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta95))[3] = listReverse(_vals);
_val = tmpMeta95;
tmpMeta96 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta96), MMC_UNTAGPTR(_eqmod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta96))[3] = mmc_mk_some(_val);
_eqmod = tmpMeta96;
tmpMeta97 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta97), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta97))[5] = mmc_mk_some(_eqmod);
_outMod = tmpMeta97;
tmpMeta98 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta98), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta98))[4] = omc_Mod_stripSubModBindings(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outMod), 4))));
_outMod = tmpMeta98;
tmpMeta1 = _outMod;
goto tmp3_done;
}
case 8: {
modelica_metatype tmpMeta99;
modelica_metatype tmpMeta100;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta99 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta99), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta99))[4] = omc_Mod_mergeSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outMod), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inModInner), 4))), _inCheckFinal);
_outMod = tmpMeta99;
tmpMeta100 = MMC_TAGPTR(mmc_alloc_words(7));
memcpy(MMC_UNTAGPTR(tmpMeta100), MMC_UNTAGPTR(_outMod), 7*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta100))[5] = omc_Mod_mergeEq(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outMod), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inModInner), 5))));
_outMod = tmpMeta100;
tmpMeta1 = _outMod;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_doMerge(threadData_t *threadData, modelica_metatype _inModOuter, modelica_metatype _inModInner, modelica_metatype _inCheckFinal)
{
modelica_integer tmp1;
modelica_metatype _outMod = NULL;
tmp1 = mmc_unbox_integer(_inCheckFinal);
_outMod = omc_Mod_doMerge(threadData, _inModOuter, _inModInner, tmp1);
return _outMod;
}
DLLExport
modelica_boolean omc_Mod_isFinalMod(threadData_t *threadData, modelica_metatype _inMod1)
{
modelica_boolean _outMod;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod1;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,8) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 2: {
tmp1 = 0;
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
_outMod = tmp1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
modelica_metatype boxptr_Mod_isFinalMod(threadData_t *threadData, modelica_metatype _inMod1)
{
modelica_boolean _outMod;
modelica_metatype out_outMod;
_outMod = omc_Mod_isFinalMod(threadData, _inMod1);
out_outMod = mmc_mk_icon(_outMod);
return out_outMod;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_merge__isEqual(threadData_t *threadData, modelica_metatype _inMod1, modelica_metatype _inMod2)
{
modelica_boolean _outIsEqual;
modelica_metatype _info1 = NULL;
modelica_metatype _info2 = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if(referenceEq(_inMod1, _inMod2))
{
_outIsEqual = 1;
}
else
{
_info1 = omc_Mod_getModInfo(threadData, _inMod1);
_info2 = omc_Mod_getModInfo(threadData, _inMod2);
_outIsEqual = ((!(omc_Util_sourceInfoIsEmpty(threadData, _info1) || omc_Util_sourceInfoIsEmpty(threadData, _info2))) && omc_Util_sourceInfoIsEqual(threadData, _info1, _info2));
}
_return: OMC_LABEL_UNUSED
return _outIsEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_merge__isEqual(threadData_t *threadData, modelica_metatype _inMod1, modelica_metatype _inMod2)
{
modelica_boolean _outIsEqual;
modelica_metatype out_outIsEqual;
_outIsEqual = omc_Mod_merge__isEqual(threadData, _inMod1, _inMod2);
out_outIsEqual = mmc_mk_icon(_outIsEqual);
return out_outIsEqual;
}
DLLExport
modelica_metatype omc_Mod_merge(threadData_t *threadData, modelica_metatype _inModOuter, modelica_metatype _inModInner, modelica_string _inElementName, modelica_boolean _inCheckFinal)
{
modelica_metatype _outMod = NULL;
modelica_string _mod_str = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if(omc_Mod_isEmptyMod(threadData, _inModOuter))
{
_outMod = _inModInner;
}
else
{
if(omc_Mod_isEmptyMod(threadData, _inModInner))
{
_outMod = _inModOuter;
}
else
{
if((((_inCheckFinal && omc_Mod_isFinalMod(threadData, _inModInner)) && (!omc_Mod_merge__isEqual(threadData, _inModOuter, _inModInner))) && (!omc_Mod_isRedeclareMod(threadData, _inModOuter))))
{
_mod_str = omc_Mod_unparseModStr(threadData, _inModOuter);
tmpMeta1 = mmc_mk_cons(_inElementName, mmc_mk_cons(_mod_str, MMC_REFSTRUCTLIT(mmc_nil)));
tmpMeta2 = mmc_mk_cons(omc_Mod_getModInfo(threadData, _inModInner), mmc_mk_cons(omc_Mod_getModInfo(threadData, _inModOuter), MMC_REFSTRUCTLIT(mmc_nil)));
omc_Error_addMultiSourceMessage(threadData, _OMC_LIT37, tmpMeta1, tmpMeta2);
MMC_THROW_INTERNAL();
}
else
{
_outMod = omc_Mod_doMerge(threadData, _inModOuter, _inModInner, _inCheckFinal);
}
}
}
_return: OMC_LABEL_UNUSED
return _outMod;
}
modelica_metatype boxptr_Mod_merge(threadData_t *threadData, modelica_metatype _inModOuter, modelica_metatype _inModInner, modelica_metatype _inElementName, modelica_metatype _inCheckFinal)
{
modelica_integer tmp1;
modelica_metatype _outMod = NULL;
tmp1 = mmc_unbox_integer(_inCheckFinal);
_outMod = omc_Mod_merge(threadData, _inModOuter, _inModInner, _inElementName, tmp1);
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_indexEqmod(threadData_t *threadData, modelica_metatype _inBinding, modelica_metatype _inIndices, modelica_metatype _inInfo)
{
jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
modelica_metatype _outBinding = NULL;
modelica_metatype _exp = NULL;
modelica_metatype _oval = NULL;
modelica_metatype _val = NULL;
modelica_metatype _ty = NULL;
modelica_metatype _c = NULL;
modelica_metatype _aexp = NULL;
modelica_metatype _eq = NULL;
modelica_metatype _info = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outBinding = _inBinding;
if((isNone(_inBinding) || listEmpty(_inIndices)))
{
goto _return;
}
tmpMeta1 = _inBinding;
if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
_eq = tmpMeta2;
{
volatile modelica_metatype tmp6_1;
tmp6_1 = _eq;
{
volatile mmc_switch_type tmp6;
int tmp7;
tmp6 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp5_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp6 < 3; tmp6++) {
switch (MMC_SWITCH_CAST(tmp6)) {
case 0: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,5) == 0) goto tmp5_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
if (optionNone(tmpMeta8)) goto tmp5_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,5,2) == 0) goto tmp5_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
if (!listEmpty(tmpMeta10)) goto tmp5_end;
tmpMeta3 = mmc_mk_none();
goto tmp5_done;
}
case 1: {
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
if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,5) == 0) goto tmp5_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,2) == 0) goto tmp5_end;
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
_exp = tmpMeta11;
_oval = tmpMeta12;
_ty = tmpMeta14;
_c = tmpMeta15;
_aexp = tmpMeta16;
_info = tmpMeta17;
{
modelica_metatype _i;
for (tmpMeta18 = _inIndices; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
{
_i = MMC_CAR(tmpMeta18);
if((!omc_Types_isArray(threadData, _ty)))
{
tmpMeta19 = mmc_mk_cons(omc_ExpressionDump_printExpStr(threadData, _exp), MMC_REFSTRUCTLIT(mmc_nil));
omc_Error_addSourceMessage(threadData, _OMC_LIT41, tmpMeta19, _inInfo);
goto _return;
}
_ty = omc_Types_unliftArray(threadData, _ty);
tmpMeta20 = mmc_mk_cons(_i, MMC_REFSTRUCTLIT(mmc_nil));
_exp = omc_ExpressionSimplify_simplify1(threadData, omc_Expression_makeASUB(threadData, _exp, tmpMeta20), NULL);
}
}
if(isSome(_oval))
{
tmpMeta22 = _oval;
if (optionNone(tmpMeta22)) goto goto_4;
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 1));
_val = tmpMeta23;
{
modelica_metatype _i;
for (tmpMeta24 = _inIndices; !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
{
_i = MMC_CAR(tmpMeta24);
_val = omc_ValuesUtil_nthArrayelt(threadData, _val, omc_Expression_expArrayIndex(threadData, _i));
}
}
_oval = mmc_mk_some(_val);
}
tmpMeta26 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _ty, _c);
tmpMeta27 = mmc_mk_box6(3, &DAE_EqMod_TYPED__desc, _exp, _oval, tmpMeta26, _aexp, _info);
tmpMeta3 = mmc_mk_some(tmpMeta27);
goto tmp5_done;
}
case 2: {
modelica_boolean tmp28;
modelica_metatype tmpMeta29;
modelica_metatype tmpMeta30;
modelica_metatype tmpMeta31;
tmp28 = omc_Flags_isSet(threadData, _OMC_LIT45);
if (1 != tmp28) goto goto_4;
tmpMeta29 = stringAppend(_OMC_LIT46,omc_Types_unparseEqMod(threadData, _eq));
tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT47);
tmpMeta31 = stringAppend(tmpMeta30,omc_ExpressionDump_printExpListStr(threadData, _inIndices));
omc_Debug_traceln(threadData, tmpMeta31);
goto goto_4;
goto tmp5_done;
}
}
goto tmp5_end;
tmp5_end: ;
}
goto goto_4;
tmp5_done:
(void)tmp6;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp5_done2;
goto_4:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp6 < 3) {
goto tmp5_top;
}
MMC_THROW_INTERNAL();
tmp5_done2:;
}
}
_outBinding = tmpMeta3;
_return: OMC_LABEL_UNUSED
threadData->mmc_jumper = old_mmc_jumper;
return _outBinding;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupIdxModification3(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inIndex)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _subs = NULL;
modelica_metatype _eq = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta1 = _inMod;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
omc_Mod_lookupIdxModification2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 4))), _inIndex ,&_subs);
tmpMeta7 = mmc_mk_cons(_inIndex, MMC_REFSTRUCTLIT(mmc_nil));
_eq = omc_Mod_indexEqmod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 5))), tmpMeta7, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 6))));
tmpMeta8 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 3))), _subs, _eq, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 6))));
tmpMeta1 = tmpMeta8;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,0) == 0) goto tmp3_end;
tmpMeta1 = _inMod;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupIdxModification2(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _inIndex, modelica_metatype *out_outSubMods)
{
modelica_metatype _outMod = NULL;
modelica_metatype _outSubMods = NULL;
modelica_metatype tmpMeta1;
modelica_metatype _mod = NULL;
modelica_string _name = NULL;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outMod = _OMC_LIT9;
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outSubMods = tmpMeta1;
{
modelica_metatype _submod;
for (tmpMeta2 = _inSubMods; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_submod = MMC_CAR(tmpMeta2);
tmpMeta3 = _submod;
tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
_name = tmpMeta4;
_mod = tmpMeta5;
_mod = omc_Mod_lookupIdxModification3(threadData, _mod, _inIndex);
if((!omc_Mod_isNoMod(threadData, _mod)))
{
tmpMeta7 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _name, _mod);
tmpMeta6 = mmc_mk_cons(tmpMeta7, _outSubMods);
_outSubMods = tmpMeta6;
}
}
}
_outSubMods = listReverse(_outSubMods);
_return: OMC_LABEL_UNUSED
if (out_outSubMods) { *out_outSubMods = _outSubMods; }
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_lookupIdxModification(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inIndex)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _mod1 = NULL;
modelica_metatype _mod2 = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _eq = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp4 += 2;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmp4 += 1;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
_mod1 = omc_Mod_lookupIdxModification2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 4))), _inIndex ,&_subs);
tmpMeta6 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 3))), _subs, mmc_mk_none(), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 6))));
_mod2 = tmpMeta6;
_mod2 = omc_Mod_merge(threadData, _mod2, _mod1, _OMC_LIT0, 1);
tmpMeta7 = mmc_mk_cons(_inIndex, MMC_REFSTRUCTLIT(mmc_nil));
_eq = omc_Mod_indexEqmod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 5))), tmpMeta7, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 6))));
tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta9 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _OMC_LIT48, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 3))), tmpMeta8, _eq, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod), 6))));
_mod1 = tmpMeta9;
tmpMeta1 = omc_Mod_merge(threadData, _mod2, _mod1, _OMC_LIT0, 1);
goto tmp3_done;
}
case 3: {
modelica_boolean tmp10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
tmp10 = omc_Flags_isSet(threadData, _OMC_LIT45);
if (1 != tmp10) goto goto_2;
omc_Debug_trace(threadData, _OMC_LIT49);
omc_Debug_trace(threadData, omc_Mod_printModStr(threadData, _inMod));
tmpMeta11 = stringAppend(_OMC_LIT5,omc_ExpressionDump_printExpStr(threadData, _inIndex));
tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT50);
omc_Debug_traceln(threadData, tmpMeta12);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 4) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupCompModification2(threadData_t *threadData, modelica_metatype _inSubModLst, modelica_string _inIdent)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inSubModLst;
{
modelica_metatype _mod = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
tmpMeta6 = omc_Mod_lookupNamedSubMod(threadData, _inSubModLst, _inIdent);
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
_mod = tmpMeta7;
tmpMeta1 = _mod;
goto tmp3_done;
}
case 2: {
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_string omc_Mod_printSubsStr(threadData_t *threadData, modelica_metatype _inSubMods, modelica_boolean _addParan)
{
modelica_string _s = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_s = stringDelimitList(omc_List_map(threadData, _inSubMods, boxvar_Mod_prettyPrintSubmod), _OMC_LIT5);
tmpMeta1 = stringAppend((_addParan?_OMC_LIT4:_OMC_LIT0),_s);
tmpMeta2 = stringAppend(tmpMeta1,(_addParan?_OMC_LIT6:_OMC_LIT0));
_s = tmpMeta2;
_return: OMC_LABEL_UNUSED
return _s;
}
modelica_metatype boxptr_Mod_printSubsStr(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _addParan)
{
modelica_integer tmp1;
modelica_string _s = NULL;
tmp1 = mmc_unbox_integer(_addParan);
_s = omc_Mod_printSubsStr(threadData, _inSubMods, tmp1);
return _s;
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Mod_isSubModNamed(threadData_t *threadData, modelica_string _inIdent, modelica_metatype _inSubMod)
{
modelica_boolean _outIsNamed;
modelica_string _ident = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inSubMod;
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
_ident = tmpMeta2;
_outIsNamed = (stringEqual(_inIdent, _ident));
_return: OMC_LABEL_UNUSED
return _outIsNamed;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_isSubModNamed(threadData_t *threadData, modelica_metatype _inIdent, modelica_metatype _inSubMod)
{
modelica_boolean _outIsNamed;
modelica_metatype out_outIsNamed;
_outIsNamed = omc_Mod_isSubModNamed(threadData, _inIdent, _inSubMod);
out_outIsNamed = mmc_mk_icon(_outIsNamed);
return out_outIsNamed;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupNamedSubMod(threadData_t *threadData, modelica_metatype _inSubMods, modelica_string _inIdent)
{
modelica_metatype _outSubMod = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outSubMod = omc_List_getMemberOnTrue(threadData, _inIdent, _inSubMods, boxvar_Mod_isSubModNamed);
_return: OMC_LABEL_UNUSED
return _outSubMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_modEqualNoPrefix(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_boolean *out_equal)
{
modelica_metatype _outMod = NULL;
modelica_boolean _equal;
modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _mod1;
tmp4_2 = _mod2;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_boolean tmp6;
modelica_boolean tmp7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmp6 = omc_Mod_subModsEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))));
if (1 != tmp6) goto goto_2;
tmp7 = omc_Mod_eqModEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 5))));
if (1 != tmp7) goto goto_2;
tmpMeta[0+0] = _mod2;
tmp1_c1 = 1;
goto tmp3_done;
}
case 1: {
modelica_boolean tmp8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmp8 = omc_SCodeUtil_elementEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))));
if (1 != tmp8) goto goto_2;
tmpMeta[0+0] = _mod2;
tmp1_c1 = 1;
goto tmp3_done;
}
case 2: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
tmpMeta[0+0] = _OMC_LIT9;
tmp1_c1 = 1;
goto tmp3_done;
}
case 3: {
tmpMeta[0+0] = _mod2;
tmp1_c1 = 0;
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
_outMod = tmpMeta[0+0];
_equal = tmp1_c1;
_return: OMC_LABEL_UNUSED
if (out_equal) { *out_equal = _equal; }
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_modEqualNoPrefix(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_metatype *out_equal)
{
modelica_boolean _equal;
modelica_metatype _outMod = NULL;
_outMod = omc_Mod_modEqualNoPrefix(threadData, _mod1, _mod2, &_equal);
if (out_equal) { *out_equal = mmc_mk_icon(_equal); }
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeRedeclareWithBinding(threadData_t *threadData, modelica_metatype _inRedeclare, modelica_metatype _inBinding)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outMod = _inRedeclare;
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _outMod;
tmp4_2 = _inBinding;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 1; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
if (!listEmpty(tmpMeta6)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
if (optionNone(tmpMeta7)) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(6));
memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_outMod), 6*sizeof(modelica_metatype));
((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[5] = omc_Mod_merge(threadData, _inBinding, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outMod), 5))), _OMC_LIT0, 1);
_outMod = tmpMeta9;
tmpMeta1 = _outMod;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_checkDuplicateModifications2(threadData_t *threadData, modelica_metatype _inSubMods1, modelica_metatype _inSubMods2, modelica_string _inName)
{
modelica_metatype _outSubMods = NULL;
modelica_metatype _submods = NULL;
modelica_metatype _osubmod = NULL;
modelica_metatype _submod = NULL;
modelica_metatype _info1 = NULL;
modelica_metatype _info2 = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_submods = _inSubMods2;
{
modelica_metatype _s;
for (tmpMeta1 = _inSubMods1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
{
_s = MMC_CAR(tmpMeta1);
_submods = omc_List_deleteMemberOnTrue(threadData, omc_Mod_subModName(threadData, _s), _submods, boxvar_Mod_isSubModNamed ,&_osubmod);
if(isSome(_osubmod))
{
tmpMeta2 = _osubmod;
if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
_submod = tmpMeta3;
_info1 = omc_Mod_subModInfo(threadData, _s);
_info2 = omc_Mod_subModInfo(threadData, _submod);
tmpMeta4 = mmc_mk_cons(_inName, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta5 = mmc_mk_cons(_info1, mmc_mk_cons(_info2, MMC_REFSTRUCTLIT(mmc_nil)));
omc_Error_addMultiSourceMessage(threadData, _OMC_LIT53, tmpMeta4, tmpMeta5);
}
}
}
_outSubMods = listAppend(_inSubMods1, _inSubMods2);
_return: OMC_LABEL_UNUSED
return _outSubMods;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_checkDuplicateModifications(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_string _n)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _mod1;
tmp4_2 = _mod2;
{
modelica_metatype _submods = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 7; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmpMeta1 = _mod2;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
tmpMeta1 = _mod1;
goto tmp3_done;
}
case 2: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta1 = omc_Mod_mergeRedeclareWithBinding(threadData, _mod1, _mod2);
goto tmp3_done;
}
case 3: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
tmpMeta1 = omc_Mod_mergeRedeclareWithBinding(threadData, _mod2, _mod1);
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta6)) goto tmp3_end;
_submods = omc_Mod_checkDuplicateModifications2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))), _n);
tmpMeta7 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 3))), _submods, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 6))));
tmpMeta1 = tmpMeta7;
goto tmp3_done;
}
case 5: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
if (!optionNone(tmpMeta8)) goto tmp3_end;
_submods = omc_Mod_checkDuplicateModifications2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))), _n);
tmpMeta9 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 3))), _submods, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 6))));
tmpMeta1 = tmpMeta9;
goto tmp3_done;
}
case 6: {
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
tmpMeta10 = mmc_mk_cons(_n, mmc_mk_cons(_OMC_LIT0, MMC_REFSTRUCTLIT(mmc_nil)));
tmpMeta11 = mmc_mk_cons(omc_Mod_getModInfo(threadData, _mod1), mmc_mk_cons(omc_Mod_getModInfo(threadData, _mod2), MMC_REFSTRUCTLIT(mmc_nil)));
omc_Error_addMultiSourceMessage(threadData, _OMC_LIT56, tmpMeta10, tmpMeta11);
tmpMeta1 = _mod2;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_lookupComplexCompModification(threadData_t *threadData, modelica_metatype _inEqMod, modelica_string _inName, modelica_metatype _inFinal, modelica_metatype _inEach, modelica_metatype _inInfo)
{
modelica_metatype _outMod = NULL;
modelica_metatype _values = NULL;
modelica_metatype _names = NULL;
modelica_metatype _v = NULL;
modelica_string _name = NULL;
modelica_metatype _e = NULL;
modelica_metatype _ae = NULL;
modelica_metatype _ty = NULL;
modelica_metatype _eq_mod = NULL;
modelica_metatype _info = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outMod = _OMC_LIT9;
{
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
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_metatype tmpMeta22;
tmpMeta5 = _inEqMod;
if (optionNone(tmpMeta5)) goto goto_1;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto goto_1;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
if (optionNone(tmpMeta7)) goto goto_1;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,10,4) == 0) goto goto_1;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
tmp12 = mmc_unbox_integer(tmpMeta11);
if (-1 != tmp12) goto goto_1;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
_values = tmpMeta9;
_names = tmpMeta10;
_info = tmpMeta13;
{
modelica_metatype _name;
for (tmpMeta14 = _names; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
{
_name = MMC_CAR(tmpMeta14);
tmpMeta15 = _values;
if (listEmpty(tmpMeta15)) goto goto_1;
tmpMeta16 = MMC_CAR(tmpMeta15);
tmpMeta17 = MMC_CDR(tmpMeta15);
_v = tmpMeta16;
_values = tmpMeta17;
if((stringEqual(_name, _inName)))
{
_e = omc_ValuesUtil_valueExp(threadData, _v, mmc_mk_none());
_ae = omc_Expression_unelabExp(threadData, _e);
_ty = omc_Types_complicateType(threadData, omc_Expression_typeof(threadData, _e));
tmpMeta18 = mmc_mk_box3(3, &DAE_Properties_PROP__desc, _ty, _OMC_LIT57);
tmpMeta19 = mmc_mk_box6(3, &DAE_EqMod_TYPED__desc, _e, mmc_mk_some(_v), tmpMeta18, _ae, _info);
_eq_mod = tmpMeta19;
tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta21 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _inFinal, _inEach, tmpMeta20, mmc_mk_some(_eq_mod), _inInfo);
_outMod = tmpMeta21;
break;
}
}
}
goto tmp2_done;
}
case 1: {
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
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_selectEqMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _eqMod, modelica_string _n)
{
modelica_metatype _mod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _eqMod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmpMeta1 = _subMod;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta6)) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,5) == 0) goto tmp3_end;
tmpMeta1 = _eqMod;
goto tmp3_done;
}
case 2: {
tmpMeta1 = omc_Mod_checkDuplicateModifications(threadData, _subMod, _eqMod, _n);
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
_mod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _mod;
}
DLLExport
modelica_metatype omc_Mod_lookupCompModificationFromEqu(threadData_t *threadData, modelica_metatype _inMod, modelica_string _inIdent)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_string tmp4_2;
tmp4_1 = _inMod;
tmp4_2 = _inIdent;
{
modelica_metatype _mod1 = NULL;
modelica_metatype _mod2 = NULL;
modelica_metatype _subs = NULL;
modelica_string _n = NULL;
modelica_metatype _eqMod = NULL;
modelica_metatype _e = NULL;
modelica_metatype _f = NULL;
modelica_metatype _info = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 5: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 4: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_f = tmpMeta5;
_e = tmpMeta6;
_subs = tmpMeta7;
_eqMod = tmpMeta8;
_info = tmpMeta9;
_n = tmp4_2;
_mod1 = omc_Mod_lookupCompModification2(threadData, _subs, _n);
_mod2 = omc_Mod_lookupComplexCompModification(threadData, _eqMod, _n, _f, _e, _info);
tmpMeta1 = omc_Mod_selectEqMod(threadData, _mod1, _mod2, _n);
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeSubMods(threadData_t *threadData, modelica_metatype _inMods, modelica_metatype _inMod, modelica_metatype _f, modelica_metatype _e, modelica_metatype _inSMods)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inSMods;
{
modelica_metatype _m = NULL;
modelica_string _id = NULL;
modelica_string _n = NULL;
modelica_metatype _rest = NULL;
modelica_metatype _info = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 3; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (!listEmpty(tmp4_1)) goto tmp3_end;
tmp4 += 2;
tmpMeta1 = _inMod;
goto tmp3_done;
}
case 1: {
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
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_1);
tmpMeta7 = MMC_CDR(tmp4_1);
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,5) == 0) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 5));
if (optionNone(tmpMeta10)) goto tmp3_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,1) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,2,2) == 0) goto tmp3_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 6));
_n = tmpMeta8;
_id = tmpMeta13;
_info = tmpMeta14;
_rest = tmpMeta7;
_m = omc_Mod_lookupCompModification(threadData, _inMods, _id);
tmpMeta16 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _n, _m);
tmpMeta15 = mmc_mk_cons(tmpMeta16, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta17 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _f, _e, tmpMeta15, mmc_mk_none(), _info);
_m = tmpMeta17;
_m = omc_Mod_merge(threadData, _inMod, _m, _OMC_LIT0, 1);
tmpMeta1 = omc_Mod_mergeSubMods(threadData, _inMods, _m, _f, _e, _rest);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
if (listEmpty(tmp4_1)) goto tmp3_end;
tmpMeta18 = MMC_CAR(tmp4_1);
tmpMeta19 = MMC_CDR(tmp4_1);
_rest = tmpMeta19;
tmpMeta1 = omc_Mod_mergeSubMods(threadData, _inMods, _inMod, _f, _e, _rest);
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 3) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeModifiers(threadData_t *threadData, modelica_metatype _inMods, modelica_metatype _inMod, modelica_metatype _inSMod)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inSMod;
{
modelica_metatype _sl = NULL;
modelica_metatype _f = NULL;
modelica_metatype _e = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
_f = tmpMeta6;
_e = tmpMeta7;
_sl = tmpMeta8;
tmpMeta1 = omc_Mod_mergeSubMods(threadData, _inMods, _inMod, _f, _e, _sl);
goto tmp3_done;
}
case 1: {
tmpMeta1 = _inMod;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_getModifs(threadData_t *threadData, modelica_metatype _inMods, modelica_string _inName, modelica_metatype _inSMod)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
{
modelica_metatype _m = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
_m = omc_Mod_lookupCompModification(threadData, _inMods, _inName);
tmpMeta1 = omc_Mod_mergeModifiers(threadData, _inMods, _m, _inSMod);
goto tmp3_done;
}
case 1: {
tmpMeta1 = omc_Mod_mergeModifiers(threadData, _inMods, _OMC_LIT9, _inSMod);
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 2) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_lookupCompModification(threadData_t *threadData, modelica_metatype _inMod, modelica_string _inIdent)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_string tmp4_2;
tmp4_1 = _inMod;
tmp4_2 = _inIdent;
{
modelica_metatype _mod1 = NULL;
modelica_metatype _mod2 = NULL;
modelica_metatype _subs = NULL;
modelica_string _n = NULL;
modelica_metatype _eqMod = NULL;
modelica_metatype _e = NULL;
modelica_metatype _f = NULL;
modelica_metatype _info = NULL;
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
modelica_metatype tmpMeta10;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_f = tmpMeta6;
_e = tmpMeta7;
_subs = tmpMeta8;
_eqMod = tmpMeta9;
_info = tmpMeta10;
_n = tmp4_2;
_mod1 = omc_Mod_lookupCompModification2(threadData, _subs, _n);
_mod2 = omc_Mod_lookupComplexCompModification(threadData, _eqMod, _n, _f, _e, _info);
tmpMeta1 = omc_Mod_checkDuplicateModifications(threadData, _mod1, _mod2, _n);
goto tmp3_done;
}
case 1: {
tmpMeta1 = _OMC_LIT9;
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
DLLExport
modelica_metatype omc_Mod_lookupModificationP(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inPath)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
tmp4_1 = _inMod;
tmp4_2 = _inPath;
{
modelica_metatype _mod = NULL;
modelica_metatype _m = NULL;
modelica_string _n = NULL;
modelica_metatype _p = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
_n = tmpMeta6;
_m = tmp4_1;
tmp4 += 2;
tmpMeta1 = omc_Mod_lookupCompModification(threadData, _m, _n);
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta7;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
_p = tmpMeta7;
_m = tmp4_1;
tmp4 += 1;
tmpMeta1 = omc_Mod_lookupModificationP(threadData, _m, _p);
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,2) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
_n = tmpMeta8;
_p = tmpMeta9;
_m = tmp4_1;
_mod = omc_Mod_lookupCompModification(threadData, _m, _n);
tmpMeta1 = omc_Mod_lookupModificationP(threadData, _mod, _p);
goto tmp3_done;
}
case 3: {
omc_Print_printBuf(threadData, _OMC_LIT58);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 4) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabUntypedSubmod(threadData_t *threadData, modelica_metatype _inSubMod)
{
modelica_metatype _outTypesSubModLst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inSubMod;
{
modelica_metatype _m_1 = NULL;
modelica_string _i = NULL;
modelica_metatype _m = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 1; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
_i = tmpMeta6;
_m = tmpMeta7;
_m_1 = omc_Mod_elabUntypedMod(threadData, _m, _OMC_LIT59);
tmpMeta9 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _i, _m_1);
tmpMeta8 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
tmpMeta1 = tmpMeta8;
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
_outTypesSubModLst = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outTypesSubModLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabUntypedSubmods(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _inModScope)
{
modelica_metatype _outSubMods = NULL;
modelica_metatype _submods = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_submods = omc_Mod_compactSubMods(threadData, _inSubMods, _inModScope);
{
modelica_metatype __omcQ_24tmpVar3;
modelica_metatype tmpMeta2;
modelica_metatype __omcQ_24tmpVar2;
modelica_integer tmp3;
modelica_metatype _m_loopVar = 0;
modelica_metatype _m;
_m_loopVar = listReverse(_submods);
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar3 = tmpMeta2;
while(1) {
tmp3 = 1;
if (!listEmpty(_m_loopVar)) {
_m = MMC_CAR(_m_loopVar);
_m_loopVar = MMC_CDR(_m_loopVar);
tmp3--;
}
if (tmp3 == 0) {
__omcQ_24tmpVar2 = omc_Mod_elabUntypedSubmod(threadData, _m);
__omcQ_24tmpVar3 = listAppend(__omcQ_24tmpVar2, __omcQ_24tmpVar3);
} else if (tmp3 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
tmpMeta1 = __omcQ_24tmpVar3;
}
_outSubMods = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outSubMods;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabSubmod(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSubMod, modelica_boolean _inBoolean, modelica_metatype _info, modelica_metatype *out_outSubMod)
{
modelica_metatype _outCache = NULL;
modelica_metatype _outSubMod = NULL;
modelica_metatype _smod = NULL;
modelica_metatype _dmod = NULL;
modelica_string _i = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = _inSubMod;
tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
_i = tmpMeta2;
_smod = tmpMeta3;
tmpMeta4 = mmc_mk_box2(3, &Mod_ModScope_COMPONENT__desc, _i);
_outCache = omc_Mod_elabMod(threadData, _inCache, _inEnv, _inIH, _inPrefix, _smod, _inBoolean, tmpMeta4, _info ,&_dmod);
tmpMeta5 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _i, _dmod);
_outSubMod = tmpMeta5;
_return: OMC_LABEL_UNUSED
if (out_outSubMod) { *out_outSubMod = _outSubMod; }
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabSubmod(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSubMod, modelica_metatype _inBoolean, modelica_metatype _info, modelica_metatype *out_outSubMod)
{
modelica_integer tmp1;
modelica_metatype _outCache = NULL;
tmp1 = mmc_unbox_integer(_inBoolean);
_outCache = omc_Mod_elabSubmod(threadData, _inCache, _inEnv, _inIH, _inPrefix, _inSubMod, tmp1, _info, out_outSubMod);
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_string omc_Mod_printModScope(threadData_t *threadData, modelica_metatype _inModScope)
{
modelica_string _outString = NULL;
modelica_string tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _inModScope;
{
modelica_string _name = NULL;
modelica_metatype _path = NULL;
int tmp4;
{
switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
case 3: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_name = tmpMeta5;
tmpMeta6 = stringAppend(omc_System_gettext(threadData, _OMC_LIT60),_name);
tmp1 = tmpMeta6;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_path = tmpMeta7;
tmpMeta8 = stringAppend(omc_System_gettext(threadData, _OMC_LIT61),omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT18, 1, 0));
tmp1 = tmpMeta8;
goto tmp3_done;
}
case 5: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_path = tmpMeta9;
tmpMeta10 = stringAppend(omc_System_gettext(threadData, _OMC_LIT62),omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT18, 1, 0));
tmp1 = tmpMeta10;
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
_outString = tmp1;
_return: OMC_LABEL_UNUSED
return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_mergeSubModsInSameScope(threadData_t *threadData, modelica_metatype _inMod1, modelica_metatype _inMod2, modelica_metatype _inElementName, modelica_metatype _inModScope)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inMod1;
tmp4_2 = _inMod2;
{
modelica_string _id = NULL;
modelica_string _scope = NULL;
modelica_string _name = NULL;
modelica_metatype _fp = NULL;
modelica_metatype _ep = NULL;
modelica_metatype _submods1 = NULL;
modelica_metatype _submods2 = NULL;
modelica_metatype _binding = NULL;
modelica_metatype _info1 = NULL;
modelica_metatype _info2 = NULL;
modelica_metatype _mod1 = NULL;
modelica_metatype _mod2 = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
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
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,5) == 0) goto tmp3_end;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 6));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,5) == 0) goto tmp3_end;
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 5));
if (!optionNone(tmpMeta15)) goto tmp3_end;
_id = tmpMeta6;
_fp = tmpMeta8;
_ep = tmpMeta9;
_submods1 = tmpMeta10;
_binding = tmpMeta11;
_info1 = tmpMeta12;
_submods2 = tmpMeta14;
_submods1 = omc_List_fold2(threadData, _submods1, boxvar_Mod_compactSubMod, _inModScope, _inElementName, _submods2);
tmpMeta16 = mmc_mk_box6(3, &SCode_Mod_MOD__desc, _fp, _ep, _submods1, _binding, _info1);
tmpMeta17 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, _id, tmpMeta16);
tmpMeta1 = tmpMeta17;
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
modelica_metatype tmpMeta27;
modelica_metatype tmpMeta28;
modelica_metatype tmpMeta29;
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,5) == 0) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 4));
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 5));
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 6));
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,0,5) == 0) goto tmp3_end;
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 4));
tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 5));
if (!optionNone(tmpMeta27)) goto tmp3_end;
_id = tmpMeta18;
_fp = tmpMeta20;
_ep = tmpMeta21;
_submods2 = tmpMeta22;
_binding = tmpMeta23;
_info2 = tmpMeta24;
_submods1 = tmpMeta26;
_submods1 = omc_List_fold2(threadData, _submods1, boxvar_Mod_compactSubMod, _inModScope, _inElementName, _submods2);
tmpMeta28 = mmc_mk_box6(3, &SCode_Mod_MOD__desc, _fp, _ep, _submods1, _binding, _info2);
tmpMeta29 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, _id, tmpMeta28);
tmpMeta1 = tmpMeta29;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta30;
modelica_metatype tmpMeta31;
modelica_metatype tmpMeta32;
modelica_metatype tmpMeta33;
tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
_mod1 = tmpMeta30;
_mod2 = tmpMeta31;
_info1 = omc_SCodeUtil_getModifierInfo(threadData, _mod1);
_info2 = omc_SCodeUtil_getModifierInfo(threadData, _mod2);
_scope = omc_Mod_printModScope(threadData, _inModScope);
_name = stringDelimitList(listReverse(_inElementName), _OMC_LIT18);
tmpMeta32 = mmc_mk_cons(_name, mmc_mk_cons(_scope, MMC_REFSTRUCTLIT(mmc_nil)));
tmpMeta33 = mmc_mk_cons(_info2, mmc_mk_cons(_info1, MMC_REFSTRUCTLIT(mmc_nil)));
omc_Error_addMultiSourceMessage(threadData, _OMC_LIT56, tmpMeta32, tmpMeta33);
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
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_compactSubMod2(threadData_t *threadData, modelica_metatype _inExistingMod, modelica_metatype _inNewMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_boolean *out_outFound)
{
modelica_metatype _outMod = NULL;
modelica_boolean _outFound;
modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inExistingMod;
tmp4_2 = _inNewMod;
{
modelica_string _name1 = NULL;
modelica_string _name2 = NULL;
modelica_metatype _submod = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
_name1 = tmpMeta6;
_name2 = tmpMeta7;
if (!(!(stringEqual(_name1, _name2)))) goto tmp3_end;
tmpMeta[0+0] = _inExistingMod;
tmp1_c1 = 0;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
_name1 = tmpMeta8;
tmpMeta9 = mmc_mk_cons(_name1, _inName);
_submod = omc_Mod_mergeSubModsInSameScope(threadData, _inExistingMod, _inNewMod, tmpMeta9, _inModScope);
tmpMeta[0+0] = _submod;
tmp1_c1 = 1;
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
_outMod = tmpMeta[0+0];
_outFound = tmp1_c1;
_return: OMC_LABEL_UNUSED
if (out_outFound) { *out_outFound = _outFound; }
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_compactSubMod2(threadData_t *threadData, modelica_metatype _inExistingMod, modelica_metatype _inNewMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_metatype *out_outFound)
{
modelica_boolean _outFound;
modelica_metatype _outMod = NULL;
_outMod = omc_Mod_compactSubMod2(threadData, _inExistingMod, _inNewMod, _inModScope, _inName, &_outFound);
if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_compactSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_metatype _inAccumMods)
{
modelica_metatype _outSubMods = NULL;
modelica_metatype _submods = NULL;
modelica_boolean _found;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_submods = omc_List_findMap3(threadData, _inAccumMods, boxvar_Mod_compactSubMod2, _inSubMod, _inModScope, _inName ,&_found);
_outSubMods = omc_List_consOnTrue(threadData, (!_found), _inSubMod, _submods);
_return: OMC_LABEL_UNUSED
return _outSubMods;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_compactSubMods(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _inModScope)
{
modelica_metatype _outSubMods = NULL;
modelica_metatype _submods = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
_submods = omc_List_fold2(threadData, _inSubMods, boxvar_Mod_compactSubMod, _inModScope, tmpMeta1, tmpMeta2);
_outSubMods = listReverse(_submods);
_return: OMC_LABEL_UNUSED
return _outSubMods;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabSubmods2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSubMods, modelica_boolean _inImpl, modelica_metatype _inInfo, modelica_metatype _inAccumMods, modelica_metatype *out_outSubMods)
{
modelica_metatype _outCache = NULL;
modelica_metatype _outSubMods = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;
tmp4_1 = _inCache;
tmp4_2 = _inSubMods;
{
modelica_metatype _cache = NULL;
modelica_metatype _smod = NULL;
modelica_metatype _rest_smods = NULL;
modelica_metatype _dmod = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (listEmpty(tmp4_2)) goto tmp3_end;
tmpMeta6 = MMC_CAR(tmp4_2);
tmpMeta7 = MMC_CDR(tmp4_2);
_smod = tmpMeta6;
_rest_smods = tmpMeta7;
_cache = tmp4_1;
_cache = omc_Mod_elabSubmod(threadData, _cache, _inEnv, _inIH, _inPrefix, _smod, _inImpl, _inInfo ,&_dmod);
tmpMeta8 = mmc_mk_cons(_dmod, _inAccumMods);
_inCache = _cache;
_inSubMods = _rest_smods;
_inAccumMods = tmpMeta8;
goto _tailrecursive;
goto tmp3_done;
}
case 1: {
tmpMeta[0+0] = _inCache;
tmpMeta[0+1] = listReverse(_inAccumMods);
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
_outCache = tmpMeta[0+0];
_outSubMods = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outSubMods) { *out_outSubMods = _outSubMods; }
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabSubmods2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSubMods, modelica_metatype _inImpl, modelica_metatype _inInfo, modelica_metatype _inAccumMods, modelica_metatype *out_outSubMods)
{
modelica_integer tmp1;
modelica_metatype _outCache = NULL;
tmp1 = mmc_unbox_integer(_inImpl);
_outCache = omc_Mod_elabSubmods2(threadData, _inCache, _inEnv, _inIH, _inPrefix, _inSubMods, tmp1, _inInfo, _inAccumMods, out_outSubMods);
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabSubmods(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSCodeSubModLst, modelica_boolean _inBoolean, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outTypesSubModLst)
{
modelica_metatype _outCache = NULL;
modelica_metatype _outTypesSubModLst = NULL;
modelica_metatype _submods = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_submods = omc_Mod_compactSubMods(threadData, _inSCodeSubModLst, _inModScope);
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
_outCache = omc_Mod_elabSubmods2(threadData, _inCache, _inEnv, _inIH, _inPrefix, _submods, _inBoolean, _info, tmpMeta1 ,&_outTypesSubModLst);
_return: OMC_LABEL_UNUSED
if (out_outTypesSubModLst) { *out_outTypesSubModLst = _outTypesSubModLst; }
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabSubmods(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSCodeSubModLst, modelica_metatype _inBoolean, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outTypesSubModLst)
{
modelica_integer tmp1;
modelica_metatype _outCache = NULL;
tmp1 = mmc_unbox_integer(_inBoolean);
_outCache = omc_Mod_elabSubmods(threadData, _inCache, _inEnv, _inIH, _inPrefix, _inSCodeSubModLst, tmp1, _inModScope, _info, out_outTypesSubModLst);
return _outCache;
}
DLLExport
modelica_metatype omc_Mod_elabUntypedMod(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inModScope)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _subs_1 = NULL;
modelica_metatype _finalPrefix = NULL;
modelica_metatype _each_ = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _e = NULL;
modelica_metatype _elem = NULL;
modelica_string _s = NULL;
modelica_metatype _info = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 5; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp4 += 3;
tmpMeta1 = _OMC_LIT9;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta9)) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta6;
_each_ = tmpMeta7;
_subs = tmpMeta8;
_info = tmpMeta10;
tmp4 += 2;
_subs_1 = omc_Mod_elabUntypedSubmods(threadData, _subs, _inModScope);
tmpMeta11 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_none(), _info);
tmpMeta1 = tmpMeta11;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta15)) goto tmp3_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta12;
_each_ = tmpMeta13;
_subs = tmpMeta14;
_e = tmpMeta16;
_info = tmpMeta17;
tmp4 += 1;
_subs_1 = omc_Mod_elabUntypedSubmods(threadData, _subs, _inModScope);
tmpMeta18 = mmc_mk_box2(4, &DAE_EqMod_UNTYPED__desc, _e);
tmpMeta19 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_some(tmpMeta18), _info);
tmpMeta1 = tmpMeta19;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
_finalPrefix = tmpMeta20;
_each_ = tmpMeta21;
_elem = tmpMeta22;
tmpMeta23 = mmc_mk_box5(4, &DAE_Mod_REDECL__desc, _finalPrefix, _each_, _elem, _OMC_LIT9);
tmpMeta1 = tmpMeta23;
goto tmp3_done;
}
case 4: {
fputs(MMC_STRINGDATA(_OMC_LIT63),stdout);
_s = omc_SCodeDump_printModStr(threadData, _inMod, _OMC_LIT7);
fputs(MMC_STRINGDATA(_s),stdout);
fputs(MMC_STRINGDATA(_OMC_LIT64),stdout);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 5) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_updateSubmods(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inTypesSubModLst, modelica_boolean _inBoolean, modelica_metatype _info, modelica_metatype *out_outTypesSubModLst)
{
modelica_metatype _outCache = NULL;
modelica_metatype _outTypesSubModLst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outCache = _inCache;
{
modelica_metatype __omcQ_24tmpVar5;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar4;
modelica_integer tmp12;
modelica_metatype _x_loopVar = 0;
modelica_metatype _x;
_x_loopVar = _inTypesSubModLst;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar5 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar5;
while(1) {
tmp12 = 1;
if (!listEmpty(_x_loopVar)) {
_x = MMC_CAR(_x_loopVar);
_x_loopVar = MMC_CDR(_x_loopVar);
tmp12--;
}
if (tmp12 == 0) {
{
modelica_metatype tmp7_1;
tmp7_1 = _x;
{
modelica_metatype _m_1 = NULL;
modelica_metatype _m = NULL;
modelica_string _i = NULL;
volatile mmc_switch_type tmp7;
int tmp8;
tmp7 = 0;
for (; tmp7 < 1; tmp7++) {
switch (MMC_SWITCH_CAST(tmp7)) {
case 0: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
_i = tmpMeta9;
_m = tmpMeta10;
_outCache = omc_Mod_updateMod(threadData, _outCache, _inEnv, _inIH, _inPrefix, _m, _inBoolean, _info ,&_m_1);
tmpMeta11 = mmc_mk_box3(3, &DAE_SubMod_NAMEMOD__desc, _i, _m_1);
tmpMeta4 = tmpMeta11;
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
}__omcQ_24tmpVar4 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp12 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar5;
}
_outTypesSubModLst = tmpMeta1;
_return: OMC_LABEL_UNUSED
if (out_outTypesSubModLst) { *out_outTypesSubModLst = _outTypesSubModLst; }
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_updateSubmods(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inTypesSubModLst, modelica_metatype _inBoolean, modelica_metatype _info, modelica_metatype *out_outTypesSubModLst)
{
modelica_integer tmp1;
modelica_metatype _outCache = NULL;
tmp1 = mmc_unbox_integer(_inBoolean);
_outCache = omc_Mod_updateSubmods(threadData, _inCache, _inEnv, _inIH, _inPrefix, _inTypesSubModLst, tmp1, _info, out_outTypesSubModLst);
return _outCache;
}
DLLExport
modelica_metatype omc_Mod_updateMod(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inMod, modelica_boolean _inBoolean, modelica_metatype _inInfo, modelica_metatype *out_outMod)
{
modelica_metatype _outCache = NULL;
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;volatile modelica_boolean tmp4_6;
tmp4_1 = _inCache;
tmp4_2 = _inEnv;
tmp4_3 = _inIH;
tmp4_4 = _inPrefix;
tmp4_5 = _inMod;
tmp4_6 = _inBoolean;
{
modelica_boolean _impl;
modelica_metatype _f = NULL;
modelica_metatype _m = NULL;
modelica_metatype _subs_1 = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _e_1 = NULL;
modelica_metatype _e_2 = NULL;
modelica_metatype _prop = NULL;
modelica_metatype _p = NULL;
modelica_metatype _e_val = NULL;
modelica_metatype _env = NULL;
modelica_metatype _pre = NULL;
modelica_metatype _each_ = NULL;
modelica_metatype _e = NULL;
modelica_metatype _cache = NULL;
modelica_metatype _ih = NULL;
modelica_string _str = NULL;
modelica_metatype _info = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 6; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,2,0) == 0) goto tmp3_end;
_cache = tmp4_1;
tmp4 += 4;
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = _OMC_LIT9;
goto tmp3_done;
}
case 1: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,1,4) == 0) goto tmp3_end;
_m = tmp4_5;
_cache = tmp4_1;
tmp4 += 3;
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = _m;
goto tmp3_done;
}
case 2: {
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 5));
if (optionNone(tmpMeta9)) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,1) == 0) goto tmp3_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 6));
_f = tmpMeta6;
_each_ = tmpMeta7;
_subs = tmpMeta8;
_e = tmpMeta11;
_info = tmpMeta12;
_cache = tmp4_1;
_env = tmp4_2;
_ih = tmp4_3;
_pre = tmp4_4;
_impl = tmp4_6;
tmp4 += 2;
_cache = omc_Mod_updateSubmods(threadData, _cache, _env, _ih, _pre, _subs, _impl, _info ,&_subs_1);
_cache = omc_Static_elabExp(threadData, _cache, _env, _e, _impl, 1, _pre, _info ,&_e_1 ,&_prop);
_cache = omc_Ceval_cevalIfConstant(threadData, _cache, _env, _e_1, _prop, _impl, _info ,&_e_1 ,&_prop);
_e_val = omc_Mod_elabModValue(threadData, _cache, _env, _e_1, _prop, _impl, _info ,&_cache);
_cache = omc_PrefixUtil_prefixExp(threadData, _cache, _env, _ih, _e_1, _pre ,&_e_2);
if(omc_Flags_isSet(threadData, _OMC_LIT69))
{
omc_Debug_trace(threadData, _OMC_LIT65);
tmpMeta13 = mmc_mk_box6(3, &DAE_EqMod_TYPED__desc, _e_2, mmc_mk_none(), _prop, _e, _info);
tmpMeta14 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _f, _each_, _subs_1, mmc_mk_some(tmpMeta13), _info);
omc_Debug_traceln(threadData, omc_Mod_printModStr(threadData, tmpMeta14));
}
tmpMeta15 = mmc_mk_box6(3, &DAE_EqMod_TYPED__desc, _e_2, _e_val, _prop, _e, _info);
tmpMeta16 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _f, _each_, _subs_1, mmc_mk_some(tmpMeta15), _info);
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta16;
goto tmp3_done;
}
case 3: {
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,5) == 0) goto tmp3_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 5));
if (optionNone(tmpMeta20)) goto tmp3_end;
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,0,5) == 0) goto tmp3_end;
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 4));
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 5));
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 6));
_f = tmpMeta17;
_each_ = tmpMeta18;
_subs = tmpMeta19;
_e_1 = tmpMeta22;
_e_val = tmpMeta23;
_p = tmpMeta24;
_e = tmpMeta25;
_info = tmpMeta26;
_cache = tmp4_1;
_env = tmp4_2;
_ih = tmp4_3;
_pre = tmp4_4;
_impl = tmp4_6;
tmp4 += 1;
_cache = omc_Mod_updateSubmods(threadData, _cache, _env, _ih, _pre, _subs, _impl, _info ,&_subs_1);
tmpMeta27 = mmc_mk_box6(3, &DAE_EqMod_TYPED__desc, _e_1, _e_val, _p, _e, _info);
tmpMeta28 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _f, _each_, _subs_1, mmc_mk_some(tmpMeta27), _info);
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta28;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta29;
modelica_metatype tmpMeta30;
modelica_metatype tmpMeta31;
modelica_metatype tmpMeta32;
modelica_metatype tmpMeta33;
modelica_metatype tmpMeta34;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,5) == 0) goto tmp3_end;
tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 5));
if (!optionNone(tmpMeta32)) goto tmp3_end;
tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 6));
_f = tmpMeta29;
_each_ = tmpMeta30;
_subs = tmpMeta31;
_info = tmpMeta33;
_cache = tmp4_1;
_env = tmp4_2;
_ih = tmp4_3;
_pre = tmp4_4;
_impl = tmp4_6;
_cache = omc_Mod_updateSubmods(threadData, _cache, _env, _ih, _pre, _subs, _impl, _info ,&_subs_1);
tmpMeta34 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _f, _each_, _subs_1, mmc_mk_none(), _info);
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta34;
goto tmp3_done;
}
case 5: {
modelica_boolean tmp35;
modelica_metatype tmpMeta36;
_m = tmp4_5;
tmp35 = omc_Flags_isSet(threadData, _OMC_LIT45);
if (1 != tmp35) goto goto_2;
_str = omc_Mod_printModStr(threadData, _m);
tmpMeta36 = stringAppend(_OMC_LIT70,_str);
omc_Debug_traceln(threadData, tmpMeta36);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 6) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outCache = tmpMeta[0+0];
_outMod = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outMod) { *out_outMod = _outMod; }
return _outCache;
}
modelica_metatype boxptr_Mod_updateMod(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inMod, modelica_metatype _inBoolean, modelica_metatype _inInfo, modelica_metatype *out_outMod)
{
modelica_integer tmp1;
modelica_metatype _outCache = NULL;
tmp1 = mmc_unbox_integer(_inBoolean);
_outCache = omc_Mod_updateMod(threadData, _inCache, _inEnv, _inIH, _inPrefix, _inMod, tmp1, _inInfo, out_outMod);
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_unelabSubscript(threadData_t *threadData, modelica_metatype _inIntegerLst)
{
modelica_metatype _outSCodeSubscriptLst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar7;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype __omcQ_24tmpVar6;
modelica_integer tmp6;
modelica_metatype _i_loopVar = 0;
modelica_metatype _i;
_i_loopVar = _inIntegerLst;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar7 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar7;
while(1) {
tmp6 = 1;
if (!listEmpty(_i_loopVar)) {
_i = MMC_CAR(_i_loopVar);
_i_loopVar = MMC_CDR(_i_loopVar);
tmp6--;
}
if (tmp6 == 0) {
tmpMeta4 = mmc_mk_box2(3, &Absyn_Exp_INTEGER__desc, _i);
tmpMeta5 = mmc_mk_box2(4, &Absyn_Subscript_SUBSCRIPT__desc, tmpMeta4);
__omcQ_24tmpVar6 = tmpMeta5;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp6 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar7;
}
_outSCodeSubscriptLst = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outSCodeSubscriptLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_unelabSubmods(threadData_t *threadData, modelica_metatype _inTypesSubModLst)
{
modelica_metatype _outSCodeSubModLst = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype __omcQ_24tmpVar9;
modelica_metatype* tmp2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype __omcQ_24tmpVar8;
modelica_integer tmp12;
modelica_metatype _x_loopVar = 0;
modelica_metatype _x;
_x_loopVar = _inTypesSubModLst;
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
__omcQ_24tmpVar9 = tmpMeta3;
tmp2 = &__omcQ_24tmpVar9;
while(1) {
tmp12 = 1;
if (!listEmpty(_x_loopVar)) {
_x = MMC_CAR(_x_loopVar);
_x_loopVar = MMC_CDR(_x_loopVar);
tmp12--;
}
if (tmp12 == 0) {
{
modelica_metatype tmp7_1;
tmp7_1 = _x;
{
modelica_metatype _m_1 = NULL;
modelica_string _i = NULL;
modelica_metatype _m = NULL;
volatile mmc_switch_type tmp7;
int tmp8;
tmp7 = 0;
for (; tmp7 < 1; tmp7++) {
switch (MMC_SWITCH_CAST(tmp7)) {
case 0: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
_i = tmpMeta9;
_m = tmpMeta10;
_m_1 = omc_Mod_unelabMod(threadData, _m);
tmpMeta11 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, _i, _m_1);
tmpMeta4 = tmpMeta11;
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
}__omcQ_24tmpVar8 = tmpMeta4;
*tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
tmp2 = &MMC_CDR(*tmp2);
} else if (tmp12 == 1) {
break;
} else {
MMC_THROW_INTERNAL();
}
}
*tmp2 = mmc_mk_nil();
tmpMeta1 = __omcQ_24tmpVar9;
}
_outSCodeSubModLst = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outSCodeSubModLst;
}
DLLExport
modelica_metatype omc_Mod_unelabMod(threadData_t *threadData, modelica_metatype _inMod)
{
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inMod;
{
modelica_metatype _subs_1 = NULL;
modelica_metatype _mod = NULL;
modelica_metatype _finalPrefix = NULL;
modelica_metatype _each_ = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _e = NULL;
modelica_metatype _e_1 = NULL;
modelica_metatype _absynExp = NULL;
modelica_metatype _elem = NULL;
modelica_string _str = NULL;
modelica_metatype _info = NULL;
modelica_metatype _v = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 7; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp4 += 5;
tmpMeta1 = _OMC_LIT71;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta9)) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta6;
_each_ = tmpMeta7;
_subs = tmpMeta8;
_info = tmpMeta10;
tmp4 += 4;
_subs_1 = omc_Mod_unelabSubmods(threadData, _subs);
tmpMeta11 = mmc_mk_box6(3, &SCode_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_none(), _info);
tmpMeta1 = tmpMeta11;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta15)) goto tmp3_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp3_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta12;
_each_ = tmpMeta13;
_subs = tmpMeta14;
_e = tmpMeta17;
_info = tmpMeta18;
tmp4 += 3;
_subs_1 = omc_Mod_unelabSubmods(threadData, _subs);
tmpMeta19 = mmc_mk_box6(3, &SCode_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_some(_e), _info);
tmpMeta1 = tmpMeta19;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_metatype tmpMeta26;
modelica_metatype tmpMeta27;
modelica_metatype tmpMeta28;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta23)) goto tmp3_end;
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,0,5) == 0) goto tmp3_end;
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
if (optionNone(tmpMeta25)) goto tmp3_end;
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 1));
tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta20;
_each_ = tmpMeta21;
_subs = tmpMeta22;
_v = tmpMeta26;
_info = tmpMeta27;
_subs_1 = omc_Mod_unelabSubmods(threadData, _subs);
_e_1 = omc_Expression_unelabExp(threadData, omc_ValuesUtil_valueExp(threadData, _v, mmc_mk_none()));
tmpMeta28 = mmc_mk_box6(3, &SCode_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_some(_e_1), _info);
tmpMeta1 = tmpMeta28;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta29;
modelica_metatype tmpMeta30;
modelica_metatype tmpMeta31;
modelica_metatype tmpMeta32;
modelica_metatype tmpMeta33;
modelica_metatype tmpMeta34;
modelica_metatype tmpMeta35;
modelica_metatype tmpMeta36;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (optionNone(tmpMeta32)) goto tmp3_end;
tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,0,5) == 0) goto tmp3_end;
tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 5));
tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
_finalPrefix = tmpMeta29;
_each_ = tmpMeta30;
_subs = tmpMeta31;
_absynExp = tmpMeta34;
_info = tmpMeta35;
tmp4 += 1;
_subs_1 = omc_Mod_unelabSubmods(threadData, _subs);
_e_1 = _absynExp;
tmpMeta36 = mmc_mk_box6(3, &SCode_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_some(_e_1), _info);
tmpMeta1 = tmpMeta36;
goto tmp3_done;
}
case 5: {
modelica_metatype tmpMeta37;
modelica_metatype tmpMeta38;
modelica_metatype tmpMeta39;
modelica_metatype tmpMeta40;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
_finalPrefix = tmpMeta37;
_each_ = tmpMeta38;
_elem = tmpMeta39;
tmpMeta40 = mmc_mk_box4(4, &SCode_Mod_REDECL__desc, _finalPrefix, _each_, _elem);
tmpMeta1 = tmpMeta40;
goto tmp3_done;
}
case 6: {
modelica_metatype tmpMeta41;
modelica_metatype tmpMeta42;
modelica_metatype tmpMeta43;
_mod = tmp4_1;
tmpMeta41 = stringAppend(_OMC_LIT72,omc_Mod_printModStr(threadData, _mod));
tmpMeta42 = stringAppend(tmpMeta41,_OMC_LIT14);
_str = tmpMeta42;
tmpMeta43 = mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil));
omc_Error_addMessage(threadData, _OMC_LIT75, tmpMeta43);
goto goto_2;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 7) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outMod = tmpMeta1;
_return: OMC_LABEL_UNUSED
return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabModValue(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_metatype _inProp, modelica_boolean _inImpl, modelica_metatype _inInfo, modelica_metatype *out_outCache)
{
modelica_metatype _outValue = NULL;
modelica_metatype _outCache = NULL;
modelica_integer _err_count;
modelica_metatype _msg = NULL;
modelica_metatype _c = NULL;
modelica_metatype _v = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_outValue = mmc_mk_none();
_outCache = _inCache;
_c = omc_Types_propAllConst(threadData, _inProp);
if((!omc_Types_constIsVariable(threadData, _c)))
{
_msg = omc_AbsynUtil_optMsg(threadData, (omc_Types_constIsConst(threadData, _c) && (!_inImpl)), _inInfo);
_err_count = omc_Error_getNumErrorMessages(threadData);
{
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
omc_Ceval_ceval(threadData, _inCache, _inEnv, _inExp, 0, _msg, ((modelica_integer) 0) ,&_v);
if(omc_ValuesUtil_isRecord(threadData, _v))
{
_v = omc_ValuesUtil_typeConvertRecord(threadData, _v, omc_Expression_typeof(threadData, _inExp));
}
_outValue = mmc_mk_some(_v);
goto tmp2_done;
}
case 1: {
if(((_err_count != omc_Error_getNumErrorMessages(threadData)) && (!omc_Expression_containsAnyCall(threadData, _inExp))))
{
goto goto_1;
}
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
}
_return: OMC_LABEL_UNUSED
if (out_outCache) { *out_outCache = _outCache; }
return _outValue;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabModValue(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inExp, modelica_metatype _inProp, modelica_metatype _inImpl, modelica_metatype _inInfo, modelica_metatype *out_outCache)
{
modelica_integer tmp1;
modelica_metatype _outValue = NULL;
tmp1 = mmc_unbox_integer(_inImpl);
_outValue = omc_Mod_elabModValue(threadData, _inCache, _inEnv, _inExp, _inProp, tmp1, _inInfo, out_outCache);
return _outValue;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabModQualifyTypespec(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_boolean _impl, modelica_metatype _info, modelica_string _name, modelica_metatype _tp, modelica_metatype *out_outTp)
{
modelica_metatype _outCache = NULL;
modelica_metatype _outTp = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;
tmp4_1 = _inCache;
tmp4_2 = _inEnv;
tmp4_3 = _inIH;
tmp4_4 = _inPrefix;
tmp4_5 = _tp;
{
modelica_metatype _cache = NULL;
modelica_metatype _env = NULL;
modelica_metatype _dims = NULL;
modelica_metatype _p = NULL;
modelica_metatype _p1 = NULL;
modelica_metatype _cref = NULL;
modelica_metatype _edims = NULL;
modelica_metatype _ih = NULL;
modelica_metatype _pre = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 2; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,2) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
if (!optionNone(tmpMeta7)) goto tmp3_end;
_p = tmpMeta6;
_cache = tmp4_1;
_env = tmp4_2;
_cache = omc_Inst_makeFullyQualified(threadData, _cache, _env, _p ,&_p1);
tmpMeta8 = mmc_mk_box3(3, &Absyn_TypeSpec_TPATH__desc, _p1, mmc_mk_none());
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta8;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,2) == 0) goto tmp3_end;
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
if (optionNone(tmpMeta10)) goto tmp3_end;
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
_p = tmpMeta9;
_dims = tmpMeta11;
_cache = tmp4_1;
_env = tmp4_2;
_ih = tmp4_3;
_pre = tmp4_4;
tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta13 = mmc_mk_box3(5, &Absyn_ComponentRef_CREF__IDENT__desc, _name, tmpMeta12);
_cref = tmpMeta13;
tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
_cache = omc_InstUtil_elabArraydim(threadData, _cache, _env, _cref, _p, _dims, mmc_mk_none(), _impl, 1, 0, _pre, _info, tmpMeta14 ,&_edims);
_cache = omc_PrefixUtil_prefixDimensions(threadData, _cache, _env, _ih, _pre, _edims ,&_edims);
_dims = omc_List_map(threadData, _edims, boxvar_Expression_unelabDimension);
_cache = omc_Inst_makeFullyQualified(threadData, _cache, _env, _p ,&_p1);
tmpMeta15 = mmc_mk_box3(3, &Absyn_TypeSpec_TPATH__desc, _p1, mmc_mk_some(_dims));
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta15;
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
_outCache = tmpMeta[0+0];
_outTp = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outTp) { *out_outTp = _outTp; }
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabModQualifyTypespec(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _impl, modelica_metatype _info, modelica_metatype _name, modelica_metatype _tp, modelica_metatype *out_outTp)
{
modelica_integer tmp1;
modelica_metatype _outCache = NULL;
tmp1 = mmc_unbox_integer(_impl);
_outCache = omc_Mod_elabModQualifyTypespec(threadData, _inCache, _inEnv, _inIH, _inPrefix, tmp1, _info, _name, _tp, out_outTp);
return _outCache;
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Mod_elabModRedeclareElement(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _finalPrefix, modelica_metatype _inElt, modelica_boolean _impl, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outMod)
{
modelica_metatype _outElement = NULL;
modelica_metatype _outMod = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
volatile modelica_metatype tmp4_1;
tmp4_1 = _inElt;
{
modelica_metatype _cache = NULL;
modelica_metatype _fi = NULL;
modelica_metatype _repl = NULL;
modelica_metatype _p = NULL;
modelica_metatype _enc = NULL;
modelica_metatype _vis = NULL;
modelica_metatype _redecl = NULL;
modelica_metatype _io = NULL;
modelica_string _cn = NULL;
modelica_string _compname = NULL;
modelica_metatype _restr = NULL;
modelica_metatype _tp = NULL;
modelica_metatype _tp1 = NULL;
modelica_metatype _emod = NULL;
modelica_metatype _attr = NULL;
modelica_metatype _mod = NULL;
modelica_metatype _cond = NULL;
modelica_metatype _i = NULL;
modelica_metatype _attr1 = NULL;
modelica_metatype _cmt = NULL;
modelica_metatype _element = NULL;
modelica_metatype _prefixes = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
MMC_TRY_INTERNAL(mmc_jumper)
tmp3_top:
threadData->mmc_jumper = &new_mmc_jumper;
for (; tmp4 < 5; tmp4++) {
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 6));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,2,3) == 0) goto tmp3_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 4));
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
_cn = tmpMeta6;
_prefixes = tmpMeta7;
_vis = tmpMeta8;
_redecl = tmpMeta9;
_fi = tmpMeta10;
_io = tmpMeta11;
_repl = tmpMeta12;
_enc = tmpMeta13;
_p = tmpMeta14;
_restr = tmpMeta15;
_tp = tmpMeta17;
_mod = tmpMeta18;
_attr1 = tmpMeta19;
_cmt = tmpMeta20;
_i = tmpMeta21;
_mod = omc_SCodeUtil_mergeModifiers(threadData, _mod, omc_SCodeUtil_getConstrainedByModifiers(threadData, _prefixes));
_cache = omc_Mod_elabMod(threadData, _inCache, _inEnv, _inIH, _inPrefix, _mod, _impl, _inModScope, _info ,&_emod);
omc_Mod_elabModQualifyTypespec(threadData, _cache, _inEnv, _inIH, _inPrefix, _impl, _info, _cn, _tp ,&_tp1);
_mod = omc_Mod_unelabMod(threadData, _emod);
tmpMeta22 = mmc_mk_box6(3, &SCode_Prefixes_PREFIXES__desc, _vis, _redecl, _fi, _io, _repl);
tmpMeta23 = mmc_mk_box4(5, &SCode_ClassDef_DERIVED__desc, _tp1, _mod, _attr1);
tmpMeta24 = mmc_mk_box9(5, &SCode_Element_CLASS__desc, _cn, tmpMeta22, _enc, _p, _restr, tmpMeta23, _cmt, _i);
tmpMeta[0+0] = tmpMeta24;
tmpMeta[0+1] = _emod;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta25;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,10,0) == 0) goto tmp3_end;
tmpMeta[0+0] = _inElt;
tmpMeta[0+1] = _OMC_LIT9;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta26;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,3,1) == 0) goto tmp3_end;
tmp4 += 1;
tmpMeta[0+0] = _inElt;
tmpMeta[0+1] = _OMC_LIT9;
goto tmp3_done;
}
case 3: {
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
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 3));
tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 4));
tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 5));
tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 6));
tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
_compname = tmpMeta27;
_prefixes = tmpMeta28;
_vis = tmpMeta29;
_redecl = tmpMeta30;
_fi = tmpMeta31;
_io = tmpMeta32;
_repl = tmpMeta33;
_attr = tmpMeta34;
_tp = tmpMeta35;
_mod = tmpMeta36;
_cmt = tmpMeta37;
_cond = tmpMeta38;
_i = tmpMeta39;
_mod = omc_SCodeUtil_mergeModifiers(threadData, _mod, omc_SCodeUtil_getConstrainedByModifiers(threadData, _prefixes));
_cache = omc_Mod_elabMod(threadData, _inCache, _inEnv, _inIH, _inPrefix, _mod, _impl, _inModScope, _info ,&_emod);
omc_Mod_elabModQualifyTypespec(threadData, _cache, _inEnv, _inIH, _inPrefix, _impl, _info, _compname, _tp ,&_tp1);
_mod = omc_Mod_unelabMod(threadData, _emod);
tmpMeta40 = mmc_mk_box6(3, &SCode_Prefixes_PREFIXES__desc, _vis, _redecl, _fi, _io, _repl);
tmpMeta41 = mmc_mk_box9(6, &SCode_Element_COMPONENT__desc, _compname, tmpMeta40, _attr, _tp1, _mod, _cmt, _cond, _i);
tmpMeta[0+0] = tmpMeta41;
tmpMeta[0+1] = _emod;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta42;
modelica_metatype tmpMeta43;
_element = tmp4_1;
tmpMeta42 = stringAppend(_OMC_LIT76,omc_SCodeDump_unparseElementStr(threadData, _element, _OMC_LIT7));
tmpMeta43 = stringAppend(tmpMeta42,_OMC_LIT14);
fputs(MMC_STRINGDATA(tmpMeta43),stdout);
tmpMeta[0+0] = _element;
tmpMeta[0+1] = _OMC_LIT9;
goto tmp3_done;
}
}
goto tmp3_end;
tmp3_end: ;
}
goto goto_2;
tmp3_done:
(void)tmp4;
MMC_RESTORE_INTERNAL(mmc_jumper);
goto tmp3_done2;
goto_2:;
MMC_CATCH_INTERNAL(mmc_jumper);
if (++tmp4 < 5) {
goto tmp3_top;
}
MMC_THROW_INTERNAL();
tmp3_done2:;
}
}
_outElement = tmpMeta[0+0];
_outMod = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outMod) { *out_outMod = _outMod; }
return _outElement;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Mod_elabModRedeclareElement(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _finalPrefix, modelica_metatype _inElt, modelica_metatype _impl, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outMod)
{
modelica_integer tmp1;
modelica_metatype _outElement = NULL;
tmp1 = mmc_unbox_integer(_impl);
_outElement = omc_Mod_elabModRedeclareElement(threadData, _inCache, _inEnv, _inIH, _inPrefix, _finalPrefix, _inElt, tmp1, _inModScope, _info, out_outMod);
return _outElement;
}
PROTECTED_FUNCTION_STATIC void omc_Mod_checkIfSubmodsAreBasicTypeMods(threadData_t *threadData, modelica_metatype _inSubs)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp3_1;
tmp3_1 = _inSubs;
{
modelica_string _ident = NULL;
modelica_metatype _subs = NULL;
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
if (!listEmpty(tmp3_1)) goto tmp2_end;
goto tmp2_done;
}
case 1: {
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_boolean tmp8;
if (listEmpty(tmp3_1)) goto tmp2_end;
tmpMeta5 = MMC_CAR(tmp3_1);
tmpMeta6 = MMC_CDR(tmp3_1);
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
_ident = tmpMeta7;
_subs = tmpMeta6;
tmp8 = omc_ClassInf_isBasicTypeComponentName(threadData, _ident);
if (1 != tmp8) goto goto_1;
_inSubs = _subs;
goto _tailrecursive;
;
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
PROTECTED_FUNCTION_STATIC void omc_Mod_checkIfModsAreBasicTypeMods(threadData_t *threadData, modelica_metatype _mod)
{
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp3_1;
tmp3_1 = _mod;
{
modelica_metatype _subs = NULL;
volatile mmc_switch_type tmp3;
int tmp4;
tmp3 = 0;
for (; tmp3 < 2; tmp3++) {
switch (MMC_SWITCH_CAST(tmp3)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,0) == 0) goto tmp2_end;
goto tmp2_done;
}
case 1: {
modelica_metatype tmpMeta5;
if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,5) == 0) goto tmp2_end;
tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
_subs = tmpMeta5;
omc_Mod_checkIfSubmodsAreBasicTypeMods(threadData, _subs);
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
DLLExport
modelica_metatype omc_Mod_elabModForBasicType(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inMod, modelica_boolean _inBoolean, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outMod)
{
modelica_metatype _outCache = NULL;
modelica_metatype _outMod = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
omc_Mod_checkIfModsAreBasicTypeMods(threadData, _inMod);
_outCache = omc_Mod_elabMod(threadData, _inCache, _inEnv, _inIH, _inPrefix, _inMod, _inBoolean, _inModScope, _info ,&_outMod);
_return: OMC_LABEL_UNUSED
if (out_outMod) { *out_outMod = _outMod; }
return _outCache;
}
modelica_metatype boxptr_Mod_elabModForBasicType(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inMod, modelica_metatype _inBoolean, modelica_metatype _inModScope, modelica_metatype _info, modelica_metatype *out_outMod)
{
modelica_integer tmp1;
modelica_metatype _outCache = NULL;
tmp1 = mmc_unbox_integer(_inBoolean);
_outCache = omc_Mod_elabModForBasicType(threadData, _inCache, _inEnv, _inIH, _inPrefix, _inMod, tmp1, _inModScope, _info, out_outMod);
return _outCache;
}
DLLExport
modelica_boolean omc_Mod_isInvariantDAEMod(threadData_t *threadData, modelica_metatype _mod)
{
modelica_boolean _b;
modelica_metatype _e = NULL;
modelica_metatype _exp = NULL;
modelica_metatype _mods = NULL;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _mod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_boolean tmp7 = 0;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta6)) goto tmp3_end;
{
modelica_metatype tmp10_1;
tmp10_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5)));
{
volatile mmc_switch_type tmp10;
int tmp11;
tmp10 = 0;
for (; tmp10 < 3; tmp10++) {
switch (MMC_SWITCH_CAST(tmp10)) {
case 0: {
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_integer tmp15;
if (optionNone(tmp10_1)) goto tmp9_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,5) == 0) goto tmp9_end;
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
_e = tmpMeta13;
omc_Expression_traverseExpBottomUp(threadData, _e, boxvar_Expression_isInvariantExpNoTraverse, mmc_mk_boolean(1), &tmpMeta14);
tmp15 = mmc_unbox_integer(tmpMeta14);
_b = tmp15;
tmp7 = _b;
goto tmp9_done;
}
case 1: {
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_integer tmp19;
if (optionNone(tmp10_1)) goto tmp9_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 1));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp9_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
_exp = tmpMeta17;
omc_AbsynUtil_traverseExp(threadData, _exp, boxvar_AbsynUtil_isInvariantExpNoTraverse, mmc_mk_boolean(1), &tmpMeta18);
tmp19 = mmc_unbox_integer(tmpMeta18);
_b = tmp19;
tmp7 = _b;
goto tmp9_done;
}
case 2: {
tmp7 = 1;
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
_b = tmp7;
if((!_b))
{
goto _return;
}
{
modelica_metatype _sm;
for (tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
{
_sm = MMC_CAR(tmpMeta20);
if((!omc_Mod_isInvariantDAEMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sm), 3))))))
{
_b = 0;
goto _return;
}
}
}
tmp1 = 1;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_metatype tmpMeta26;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,3,8) == 0) goto tmp3_end;
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,2) == 0) goto tmp3_end;
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,2,1) == 0) goto tmp3_end;
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
if (!optionNone(tmpMeta25)) goto tmp3_end;
tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 6));
_mods = tmpMeta26;
tmp1 = omc_Mod_isInvariantMod(threadData, _mods);
goto tmp3_done;
}
case 3: {
tmp1 = 0;
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
modelica_metatype boxptr_Mod_isInvariantDAEMod(threadData_t *threadData, modelica_metatype _mod)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_Mod_isInvariantDAEMod(threadData, _mod);
out_b = mmc_mk_icon(_b);
return out_b;
}
DLLExport
modelica_boolean omc_Mod_isInvariantMod(threadData_t *threadData, modelica_metatype _mod)
{
modelica_boolean _b;
modelica_metatype _e = NULL;
modelica_metatype _mods = NULL;
modelica_boolean tmp1 = 0;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
{
modelica_metatype tmp4_1;
tmp4_1 = _mod;
{
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 4; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
tmp1 = 1;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_boolean tmp7 = 0;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
if (!optionNone(tmpMeta6)) goto tmp3_end;
{
modelica_metatype tmp10_1;
tmp10_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5)));
{
volatile mmc_switch_type tmp10;
int tmp11;
tmp10 = 0;
for (; tmp10 < 2; tmp10++) {
switch (MMC_SWITCH_CAST(tmp10)) {
case 0: {
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_integer tmp14;
if (optionNone(tmp10_1)) goto tmp9_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 1));
_e = tmpMeta12;
omc_AbsynUtil_traverseExp(threadData, _e, boxvar_AbsynUtil_isInvariantExpNoTraverse, mmc_mk_boolean(1), &tmpMeta13);
tmp14 = mmc_unbox_integer(tmpMeta13);
_b = tmp14;
tmp7 = _b;
goto tmp9_done;
}
case 1: {
tmp7 = 1;
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
_b = tmp7;
if((!_b))
{
goto _return;
}
{
modelica_metatype _sm;
for (tmpMeta15 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))); !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
{
_sm = MMC_CAR(tmpMeta15);
if((!omc_Mod_isInvariantMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sm), 3))))))
{
_b = 0;
goto _return;
}
}
}
tmp1 = 1;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,3,8) == 0) goto tmp3_end;
tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 5));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,2) == 0) goto tmp3_end;
tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,2,1) == 0) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
if (!optionNone(tmpMeta20)) goto tmp3_end;
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 6));
_mods = tmpMeta21;
_mod = _mods;
goto _tailrecursive;
goto tmp3_done;
}
case 3: {
tmp1 = 0;
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
modelica_metatype boxptr_Mod_isInvariantMod(threadData_t *threadData, modelica_metatype _mod)
{
modelica_boolean _b;
modelica_metatype out_b;
_b = omc_Mod_isInvariantMod(threadData, _mod);
out_b = mmc_mk_icon(_b);
return out_b;
}
DLLExport
modelica_metatype omc_Mod_elabMod(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inMod, modelica_boolean _inBoolean, modelica_metatype _inModScope, modelica_metatype _inInfo, modelica_metatype *out_outMod)
{
modelica_metatype _outCache = NULL;
modelica_metatype _outMod = NULL;
modelica_metatype _mod = NULL;
modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_mod = omc_SCodeInstUtil_expandEnumerationMod(threadData, _inMod);
{
modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;modelica_boolean tmp4_6;modelica_metatype tmp4_7;
tmp4_1 = _inCache;
tmp4_2 = _inEnv;
tmp4_3 = _inIH;
tmp4_4 = _inPrefix;
tmp4_5 = _mod;
tmp4_6 = _inBoolean;
tmp4_7 = _inInfo;
{
modelica_boolean _impl;
modelica_metatype _finalPrefix = NULL;
modelica_metatype _subs_1 = NULL;
modelica_metatype _env = NULL;
modelica_metatype _pre = NULL;
modelica_metatype _each_ = NULL;
modelica_metatype _subs = NULL;
modelica_metatype _e_1 = NULL;
modelica_metatype _e_2 = NULL;
modelica_metatype _prop = NULL;
modelica_metatype _e_val = NULL;
modelica_metatype _e = NULL;
modelica_metatype _elem = NULL;
modelica_metatype _dm = NULL;
modelica_metatype _cache = NULL;
modelica_metatype _ih = NULL;
modelica_metatype _info = NULL;
volatile mmc_switch_type tmp4;
int tmp5;
tmp4 = 0;
for (; tmp4 < 5; tmp4++) {
switch (MMC_SWITCH_CAST(tmp4)) {
case 0: {
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,2,0) == 0) goto tmp3_end;
_cache = tmp4_1;
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = _OMC_LIT9;
goto tmp3_done;
}
case 1: {
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,5) == 0) goto tmp3_end;
tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 5));
if (!optionNone(tmpMeta9)) goto tmp3_end;
tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 6));
_finalPrefix = tmpMeta6;
_each_ = tmpMeta7;
_subs = tmpMeta8;
_info = tmpMeta10;
_cache = tmp4_1;
_env = tmp4_2;
_ih = tmp4_3;
_pre = tmp4_4;
_impl = tmp4_6;
_cache = omc_Mod_elabSubmods(threadData, _cache, _env, _ih, _pre, _subs, _impl, _inModScope, _info ,&_subs_1);
tmpMeta11 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_none(), _info);
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta11;
goto tmp3_done;
}
case 2: {
modelica_metatype tmpMeta12;
modelica_metatype tmpMeta13;
modelica_metatype tmpMeta14;
modelica_metatype tmpMeta15;
modelica_metatype tmpMeta16;
modelica_metatype tmpMeta17;
modelica_metatype tmpMeta18;
modelica_metatype tmpMeta19;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,5) == 0) goto tmp3_end;
tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 5));
if (optionNone(tmpMeta15)) goto tmp3_end;
tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 6));
_finalPrefix = tmpMeta12;
_each_ = tmpMeta13;
_subs = tmpMeta14;
_e = tmpMeta16;
_info = tmpMeta17;
_cache = tmp4_1;
_env = tmp4_2;
_ih = tmp4_3;
_pre = tmp4_4;
_impl = tmp4_6;
_cache = omc_Mod_elabSubmods(threadData, _cache, _env, _ih, _pre, _subs, _impl, _inModScope, _info ,&_subs_1);
_cache = omc_Static_elabExp(threadData, _cache, _env, _e, _impl, omc_Config_splitArrays(threadData), _pre, _info ,&_e_1 ,&_prop);
_e_1 = omc_Expression_tupleHead(threadData, _e_1, _prop ,&_prop);
_cache = omc_Ceval_cevalIfConstant(threadData, _cache, _env, _e_1, _prop, _impl, _info ,&_e_1 ,&_prop);
_e_val = omc_Mod_elabModValue(threadData, _cache, _env, _e_1, _prop, _impl, _info ,&_cache);
_cache = omc_PrefixUtil_prefixExp(threadData, _cache, _env, _ih, _e_1, _pre ,&_e_2);
tmpMeta18 = mmc_mk_box6(3, &DAE_EqMod_TYPED__desc, _e_2, _e_val, _prop, _e, _info);
tmpMeta19 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_some(tmpMeta18), _info);
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta19;
goto tmp3_done;
}
case 3: {
modelica_metatype tmpMeta20;
modelica_metatype tmpMeta21;
modelica_metatype tmpMeta22;
modelica_metatype tmpMeta23;
modelica_metatype tmpMeta24;
modelica_metatype tmpMeta25;
modelica_metatype tmpMeta26;
modelica_metatype tmpMeta27;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,5) == 0) goto tmp3_end;
tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 5));
if (optionNone(tmpMeta23)) goto tmp3_end;
tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 6));
_finalPrefix = tmpMeta20;
_each_ = tmpMeta21;
_subs = tmpMeta22;
_e = tmpMeta24;
_info = tmpMeta25;
_cache = tmp4_1;
_env = tmp4_2;
_ih = tmp4_3;
_pre = tmp4_4;
_impl = tmp4_6;
_cache = omc_Mod_elabSubmods(threadData, _cache, _env, _ih, _pre, _subs, _impl, _inModScope, _info ,&_subs_1);
tmpMeta26 = mmc_mk_box2(4, &DAE_EqMod_UNTYPED__desc, _e);
tmpMeta27 = mmc_mk_box6(3, &DAE_Mod_MOD__desc, _finalPrefix, _each_, _subs_1, mmc_mk_some(tmpMeta26), _info);
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta27;
goto tmp3_done;
}
case 4: {
modelica_metatype tmpMeta28;
modelica_metatype tmpMeta29;
modelica_metatype tmpMeta30;
modelica_metatype tmpMeta31;
if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,1,3) == 0) goto tmp3_end;
tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
_finalPrefix = tmpMeta28;
_each_ = tmpMeta29;
_elem = tmpMeta30;
_cache = tmp4_1;
_env = tmp4_2;
_ih = tmp4_3;
_pre = tmp4_4;
_impl = tmp4_6;
_info = tmp4_7;
_elem = omc_Mod_elabModRedeclareElement(threadData, _cache, _env, _ih, _pre, _finalPrefix, _elem, _impl, _inModScope, _info ,&_dm);
tmpMeta31 = mmc_mk_box5(4, &DAE_Mod_REDECL__desc, _finalPrefix, _each_, _elem, _dm);
tmpMeta[0+0] = _cache;
tmpMeta[0+1] = tmpMeta31;
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
_outCache = tmpMeta[0+0];
_outMod = tmpMeta[0+1];
_return: OMC_LABEL_UNUSED
if (out_outMod) { *out_outMod = _outMod; }
return _outCache;
}
modelica_metatype boxptr_Mod_elabMod(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inMod, modelica_metatype _inBoolean, modelica_metatype _inModScope, modelica_metatype _inInfo, modelica_metatype *out_outMod)
{
modelica_integer tmp1;
modelica_metatype _outCache = NULL;
tmp1 = mmc_unbox_integer(_inBoolean);
_outCache = omc_Mod_elabMod(threadData, _inCache, _inEnv, _inIH, _inPrefix, _inMod, tmp1, _inModScope, _inInfo, out_outMod);
return _outCache;
}
