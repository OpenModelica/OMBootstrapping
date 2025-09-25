#include "omc_simulation_settings.h"
#include "NBTearing.h"
#define _OMC_LIT0_data "/home/adrpo33/OpenModelica/OMCompiler/Compiler/NBackEnd/Modules/3_Post/NBTearing.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,83,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1_6,1.758197185e9);
#define _OMC_LIT1_6 MMC_REFREALLIT(_OMC_LIT_STRUCT1_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(442)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(442)),MMC_IMMEDIATE(MMC_TAGFIXNUM(145)),_OMC_LIT1_6}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,17,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NBTearing.checkLinearity expected type full, got type "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,54,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "NBTearing.minimal failed because number of discrete variables "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,62,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " differs from number of discrete equations: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,44,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ".\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,2,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "|"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,1,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ") Discrete Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,20,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,0,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,2,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data ") Discrete Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,20,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "_LS_JAC_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,8,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "_NLS_JAC_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,9,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "tearingdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,11,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "Dumps tearing information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,26,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(44)),_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "tearingMethod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,13,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "cellier"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,7,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "noTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,9,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Deprecated, use minimalTearing."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,31,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,0) {_OMC_LIT31,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "minimalTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,14,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Minimal tearing method to only tear discrete variables."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,55,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,0) {_OMC_LIT35,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "omcTearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,10,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Tearing method developed by TU Dresden: Frenkel, Schubert."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,58,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,0) {_OMC_LIT39,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Tearing based on Celliers method, revised by FH Bielefeld: Täuber, Patrick"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,75,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,0) {_OMC_LIT29,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {_OMC_LIT45,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT42,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT38,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT34,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,1) {_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Sets the tearing method to use. Select no tearing or choose tearing method."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,75,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(41)),_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT28,_OMC_LIT30,_OMC_LIT51,_OMC_LIT53}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,3) {&NBAdjacency_Matrix_EMPTY__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(4))}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,1,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "] Tearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,9,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "### Iteration Variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,25,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "\n### Residual Equations:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,25,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "\n### Inner Equations:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,22,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "NLS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,3,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#include "util/modelica.h"

#include "NBTearing_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBTearing_checkLinearity_eqnIsLinear(threadData_t *threadData, modelica_integer _i, modelica_metatype _occ, modelica_metatype _sol, modelica_metatype _v);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_checkLinearity_eqnIsLinear(threadData_t *threadData, modelica_metatype _i, modelica_metatype _occ, modelica_metatype _sol, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_checkLinearity_eqnIsLinear,2,0) {(void*) boxptr_NBTearing_checkLinearity_eqnIsLinear,0}};
#define boxvar_NBTearing_checkLinearity_eqnIsLinear MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_checkLinearity_eqnIsLinear)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBTearing_checkLinearity_varIsLinear(threadData_t *threadData, modelica_metatype _var, modelica_metatype _v, modelica_metatype _sol);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_checkLinearity_varIsLinear(threadData_t *threadData, modelica_metatype _var, modelica_metatype _v, modelica_metatype _sol);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_checkLinearity_varIsLinear,2,0) {(void*) boxptr_NBTearing_checkLinearity_varIsLinear,0}};
#define boxvar_NBTearing_checkLinearity_varIsLinear MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_checkLinearity_varIsLinear)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBTearing_checkLinearity(threadData_t *threadData, modelica_metatype _full, modelica_metatype _v, modelica_metatype _e);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_checkLinearity(threadData_t *threadData, modelica_metatype _full, modelica_metatype _v, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_checkLinearity,2,0) {(void*) boxptr_NBTearing_checkLinearity,0}};
#define boxvar_NBTearing_checkLinearity MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_checkLinearity)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_minimal(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_integer _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_integer *out_index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_minimal(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_minimal,2,0) {(void*) boxptr_NBTearing_minimal,0}};
#define boxvar_NBTearing_minimal MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_minimal)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_none(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_integer _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_integer *out_index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_none(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_none,2,0) {(void*) boxptr_NBTearing_none,0}};
#define boxvar_NBTearing_none MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_none)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_finalize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_integer _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_integer *out_index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_finalize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_finalize,2,0) {(void*) boxptr_NBTearing_finalize,0}};
#define boxvar_NBTearing_finalize MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_finalize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_initialize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_integer _kind, modelica_boolean _minimal, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_integer *out_index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_initialize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype _minimal, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_initialize,2,0) {(void*) boxptr_NBTearing_initialize,0}};
#define boxvar_NBTearing_initialize MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_initialize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_tearingTraverser(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype _funcs, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _eq_index, modelica_integer _kind, modelica_metatype *out_funcTree);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_tearingTraverser(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype _funcs, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype *out_funcTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_tearingTraverser,2,0) {(void*) boxptr_NBTearing_tearingTraverser,0}};
#define boxvar_NBTearing_tearingTraverser MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_tearingTraverser)

static modelica_metatype closure0_NBTearing_checkLinearity_varIsLinear(threadData_t *thData, modelica_metatype closure, modelica_metatype var)
{
  modelica_metatype v = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype sol = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBTearing_checkLinearity_varIsLinear(thData, var, v, sol);
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBTearing_checkLinearity_eqnIsLinear(threadData_t *threadData, modelica_integer _i, modelica_metatype _occ, modelica_metatype _sol, modelica_metatype _v)
{
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(0, _v, arrayGet(_sol,_i) /* DAE.ASUB */);
  _b = omc_UnorderedSet_all(threadData, arrayGet(_occ,_i) /* DAE.ASUB */, (modelica_fnptr) mmc_mk_box2(0,closure0_NBTearing_checkLinearity_varIsLinear,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_checkLinearity_eqnIsLinear(threadData_t *threadData, modelica_metatype _i, modelica_metatype _occ, modelica_metatype _sol, modelica_metatype _v)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype tmpMeta2;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_i);
  _b = omc_NBTearing_checkLinearity_eqnIsLinear(threadData, tmp1, _occ, _sol, _v);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBTearing_checkLinearity_varIsLinear(threadData_t *threadData, modelica_metatype _var, modelica_metatype _v, modelica_metatype _sol)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (!(omc_UnorderedMap_contains(threadData, _var, _v) && omc_NBAdjacency_Solvability_isNonlinearOrImplicit(threadData, omc_UnorderedMap_getSafe(threadData, _var, _sol, _OMC_LIT1))));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_checkLinearity_varIsLinear(threadData_t *threadData, modelica_metatype _var, modelica_metatype _v, modelica_metatype _sol)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBTearing_checkLinearity_varIsLinear(threadData, _var, _v, _sol);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

static modelica_metatype closure2_NBTearing_checkLinearity_eqnIsLinear(threadData_t *thData, modelica_metatype closure, modelica_metatype i)
{
  modelica_metatype occ = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype sol = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype v = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NBTearing_checkLinearity_eqnIsLinear(thData, i, occ, sol, v);
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBTearing_checkLinearity(threadData_t *threadData, modelica_metatype _full, modelica_metatype _v, modelica_metatype _e)
{
  modelica_boolean _linear;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _linear has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _full;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_full), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_full), 5))), _v);
          tmp1 = omc_UnorderedMap_all(threadData, _e, (modelica_fnptr) mmc_mk_box2(0,closure2_NBTearing_checkLinearity_eqnIsLinear,tmpMeta6));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT7,omc_NBAdjacency_strictnessString(threadData, omc_NBAdjacency_Matrix_getStrictness(threadData, _full)));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT8);
          tmpMeta7 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta7);
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
  _linear = tmp1;
  _return: OMC_LABEL_UNUSED
  return _linear;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_checkLinearity(threadData_t *threadData, modelica_metatype _full, modelica_metatype _v, modelica_metatype _e)
{
  modelica_boolean _linear;
  modelica_metatype out_linear;
  _linear = omc_NBTearing_checkLinearity(threadData, _full, _v, _e);
  out_linear = mmc_mk_icon(_linear);
  return out_linear;
}

static modelica_metatype closure3_NBVariable_isContinuous(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype init = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isContinuous(thData, var_ptr, init);
}static modelica_metatype closure4_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_minimal(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_integer _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_integer *out_index)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_integer _index;
  modelica_metatype _strict = NULL;
  modelica_metatype _vars_lst = NULL;
  modelica_metatype _cont_vars = NULL;
  modelica_metatype _disc_vars = NULL;
  modelica_metatype _eqns_lst = NULL;
  modelica_metatype _cont_eqns = NULL;
  modelica_metatype _disc_eqns = NULL;
  modelica_integer _num_vars;
  modelica_integer _num_eqns;
  modelica_metatype _residual_lst = NULL;
  modelica_metatype _adj = NULL;
  modelica_metatype _matching = NULL;
  modelica_metatype _inner_comps = NULL;
  modelica_metatype _v = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  _full = __omcQ_24in_5Ffull;
  _funcTree = __omcQ_24in_5FfuncTree;
  _index = __omcQ_24in_5Findex;
  // _strict has no default value.
  // _vars_lst has no default value.
  // _cont_vars has no default value.
  // _disc_vars has no default value.
  // _eqns_lst has no default value.
  // _cont_eqns has no default value.
  // _disc_eqns has no default value.
  // _num_vars has no default value.
  // _num_eqns has no default value.
  // _residual_lst has no default value.
  // _adj has no default value.
  // _matching has no default value.
  // _inner_comps has no default value.
  // _v has no default value.
  // _e has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_integer tmp18;
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
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta67;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _strict = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp10;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 2)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar35;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar34 = omc_NBSlice_getT(threadData, _var);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar35;
          }
          _vars_lst = tmpMeta7;

          {
            modelica_metatype __omcQ_24tmpVar37;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar36;
            modelica_integer tmp14;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar37 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar37;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar36 = omc_NBSlice_getT(threadData, _eqn);
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar36,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar37;
          }
          _eqns_lst = tmpMeta11;

          tmpMeta15 = mmc_mk_box1(0, mmc_mk_boolean(((modelica_integer)_kind == 5)));
          _cont_vars = omc_List_splitOnTrue(threadData, _vars_lst, (modelica_fnptr) mmc_mk_box2(0,closure3_NBVariable_isContinuous,tmpMeta15) ,&_disc_vars);

          _cont_eqns = omc_List_splitOnTrue(threadData, _eqns_lst, boxvar_NBEquation_Equation_isContinuous ,&_disc_eqns);

          {
            modelica_integer __omcQ_24tmpVar39;
            modelica_integer __omcQ_24tmpVar38;
            modelica_integer tmp17;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = _disc_vars;
            __omcQ_24tmpVar39 = ((modelica_integer) 0); /* defaultValue */
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar38 = omc_NBVariable_size(threadData, _var, 0 /* false */);
                __omcQ_24tmpVar39 = __omcQ_24tmpVar39 + __omcQ_24tmpVar38;
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp16 = __omcQ_24tmpVar39;
          }
          _num_vars = tmp16;

          {
            modelica_integer __omcQ_24tmpVar41;
            modelica_integer __omcQ_24tmpVar40;
            modelica_integer tmp19;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = _disc_eqns;
            __omcQ_24tmpVar41 = ((modelica_integer) 0); /* defaultValue */
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar40 = omc_NBEquation_Equation_size(threadData, _eqn, 0 /* false */);
                __omcQ_24tmpVar41 = __omcQ_24tmpVar41 + __omcQ_24tmpVar40;
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp18 = __omcQ_24tmpVar41;
          }
          _num_eqns = tmp18;

          if((_num_vars != _num_eqns))
          {
            tmpMeta21 = stringAppend(_OMC_LIT9,intString(_num_vars));
            tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT10);
            tmpMeta23 = stringAppend(tmpMeta22,intString(_num_eqns));
            tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT11);
            tmpMeta25 = stringAppend(_OMC_LIT12,intString(listLength(_disc_vars)));
            tmpMeta26 = stringAppend(tmpMeta25,_OMC_LIT13);
            tmpMeta27 = stringAppend(tmpMeta26,intString(_num_vars));
            tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT14);
            tmpMeta29 = stringAppend(tmpMeta24,omc_StringUtil_headline__4(threadData, tmpMeta28));
            tmpMeta30 = stringAppend(tmpMeta29,omc_List_toString(threadData, _disc_vars, boxvar_NBVariable_pointerToString, _OMC_LIT15, _OMC_LIT16, _OMC_LIT17, _OMC_LIT18, 1 /* true */, ((modelica_integer) 0)));
            tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT18);
            tmpMeta32 = stringAppend(_OMC_LIT12,intString(listLength(_disc_eqns)));
            tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT13);
            tmpMeta34 = stringAppend(tmpMeta33,intString(_num_eqns));
            tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT19);
            tmpMeta36 = stringAppend(tmpMeta31,omc_StringUtil_headline__4(threadData, tmpMeta35));
            tmpMeta37 = mmc_mk_box1(0, _OMC_LIT15);
            tmpMeta38 = stringAppend(tmpMeta36,omc_List_toString(threadData, _disc_eqns, (modelica_fnptr) mmc_mk_box2(0,closure4_NBEquation_Equation_pointerToString,tmpMeta37), _OMC_LIT15, _OMC_LIT16, _OMC_LIT17, _OMC_LIT18, 1 /* true */, ((modelica_integer) 0)));
            tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT18);
            tmpMeta20 = mmc_mk_cons(tmpMeta39, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT6, tmpMeta20);

            goto goto_2;
          }

          if((!listEmpty(_disc_vars)))
          {
            tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(9));
            memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_comp), 9*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[6] = mmc_mk_boolean(1 /* true */);
            _comp = tmpMeta40;

            {
              modelica_metatype __omcQ_24tmpVar43;
              modelica_metatype* tmp42;
              modelica_metatype tmpMeta43;
              modelica_metatype __omcQ_24tmpVar42;
              modelica_integer tmp44;
              modelica_metatype _var_loopVar = 0;
              modelica_metatype _var;
              _var_loopVar = _disc_vars;
              tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar43 = tmpMeta43; /* defaultValue */
              tmp42 = &__omcQ_24tmpVar43;
              while(1) {
                tmp44 = 1;
                if (!listEmpty(_var_loopVar)) {
                  _var = MMC_CAR(_var_loopVar);
                  _var_loopVar = MMC_CDR(_var_loopVar);
                  tmp44--;
                }
                if (tmp44 == 0) {
                  __omcQ_24tmpVar42 = omc_NBVariable_getVarName(threadData, _var);
                  *tmp42 = mmc_mk_cons(__omcQ_24tmpVar42,0);
                  tmp42 = &MMC_CDR(*tmp42);
                } else if (tmp44 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp42 = mmc_mk_nil();
              tmpMeta41 = __omcQ_24tmpVar43;
            }
            _v = omc_UnorderedMap_subMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 2))), tmpMeta41);

            {
              modelica_metatype __omcQ_24tmpVar45;
              modelica_metatype* tmp46;
              modelica_metatype tmpMeta47;
              modelica_metatype __omcQ_24tmpVar44;
              modelica_integer tmp48;
              modelica_metatype _eqn_loopVar = 0;
              modelica_metatype _eqn;
              _eqn_loopVar = _disc_eqns;
              tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar45 = tmpMeta47; /* defaultValue */
              tmp46 = &__omcQ_24tmpVar45;
              while(1) {
                tmp48 = 1;
                if (!listEmpty(_eqn_loopVar)) {
                  _eqn = MMC_CAR(_eqn_loopVar);
                  _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                  tmp48--;
                }
                if (tmp48 == 0) {
                  __omcQ_24tmpVar44 = omc_NBEquation_Equation_getEqnName(threadData, _eqn);
                  *tmp46 = mmc_mk_cons(__omcQ_24tmpVar44,0);
                  tmp46 = &MMC_CDR(*tmp46);
                } else if (tmp48 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp46 = mmc_mk_nil();
              tmpMeta45 = __omcQ_24tmpVar45;
            }
            _e = omc_UnorderedMap_subMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2))), tmpMeta45);

            _adj = omc_NBAdjacency_Matrix_fromFull(threadData, _full, _v, _e, _equations, 2, _OMC_LIT20);

            tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta51 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, listArray(tmpMeta49), listArray(tmpMeta50));
            _matching = omc_NBMatching_regular(threadData, tmpMeta51, _adj, 1 /* true */, 1 /* true */, 1 /* true */);

            _adj = omc_NBAdjacency_Matrix_upgrade(threadData, _adj, _full, _v, _e, _equations, 3, _OMC_LIT20);

            _inner_comps = omc_NBSorting_tarjan(threadData, _adj, _matching, _variables, _equations);

            tmpMeta52 = MMC_TAGPTR(mmc_alloc_words(6));
            memcpy(MMC_UNTAGPTR(tmpMeta52), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta52))[4] = listArray(_inner_comps);
            _strict = tmpMeta52;

            {
              modelica_metatype __omcQ_24tmpVar47;
              modelica_metatype* tmp55;
              modelica_metatype tmpMeta56;
              modelica_metatype tmpMeta57;
              modelica_metatype tmpMeta58;
              modelica_metatype __omcQ_24tmpVar46;
              modelica_integer tmp59;
              modelica_metatype _eqn_loopVar = 0;
              modelica_metatype _eqn;
              _eqn_loopVar = _cont_eqns;
              tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar47 = tmpMeta56; /* defaultValue */
              tmp55 = &__omcQ_24tmpVar47;
              while(1) {
                tmp59 = 1;
                if (!listEmpty(_eqn_loopVar)) {
                  _eqn = MMC_CAR(_eqn_loopVar);
                  _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                  tmp59--;
                }
                if (tmp59 == 0) {
                  tmpMeta57 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta58 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, tmpMeta57);
                  __omcQ_24tmpVar46 = tmpMeta58;
                  *tmp55 = mmc_mk_cons(__omcQ_24tmpVar46,0);
                  tmp55 = &MMC_CDR(*tmp55);
                } else if (tmp59 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp55 = mmc_mk_nil();
              tmpMeta54 = __omcQ_24tmpVar47;
            }
            tmpMeta53 = MMC_TAGPTR(mmc_alloc_words(6));
            memcpy(MMC_UNTAGPTR(tmpMeta53), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta53))[3] = tmpMeta54;
            _strict = tmpMeta53;

            {
              modelica_metatype __omcQ_24tmpVar49;
              modelica_metatype* tmp62;
              modelica_metatype tmpMeta63;
              modelica_metatype tmpMeta64;
              modelica_metatype tmpMeta65;
              modelica_metatype __omcQ_24tmpVar48;
              modelica_integer tmp66;
              modelica_metatype _var_loopVar = 0;
              modelica_metatype _var;
              _var_loopVar = _cont_vars;
              tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar49 = tmpMeta63; /* defaultValue */
              tmp62 = &__omcQ_24tmpVar49;
              while(1) {
                tmp66 = 1;
                if (!listEmpty(_var_loopVar)) {
                  _var = MMC_CAR(_var_loopVar);
                  _var_loopVar = MMC_CDR(_var_loopVar);
                  tmp66--;
                }
                if (tmp66 == 0) {
                  tmpMeta64 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta65 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _var, tmpMeta64);
                  __omcQ_24tmpVar48 = tmpMeta65;
                  *tmp62 = mmc_mk_cons(__omcQ_24tmpVar48,0);
                  tmp62 = &MMC_CDR(*tmp62);
                } else if (tmp66 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp62 = mmc_mk_nil();
              tmpMeta61 = __omcQ_24tmpVar49;
            }
            tmpMeta60 = MMC_TAGPTR(mmc_alloc_words(6));
            memcpy(MMC_UNTAGPTR(tmpMeta60), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta60))[2] = tmpMeta61;
            _strict = tmpMeta60;

            tmpMeta67 = MMC_TAGPTR(mmc_alloc_words(9));
            memcpy(MMC_UNTAGPTR(tmpMeta67), MMC_UNTAGPTR(_comp), 9*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta67))[3] = _strict;
            _comp = tmpMeta67;
          }
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_full) { *out_full = _full; }
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_index) { *out_index = _index; }
  return _comp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_minimal(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Findex);
  tmp2 = mmc_unbox_integer(_kind);
  _comp = omc_NBTearing_minimal(threadData, __omcQ_24in_5Fcomp, __omcQ_24in_5Ffull, __omcQ_24in_5FfuncTree, tmp1, _variables, _equations, _eq_index, tmp2, out_full, out_funcTree, &_index);
  /* skip box _comp; NBStrongComponent */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return _comp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_none(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_integer _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_integer *out_index)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_integer _index;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  _full = __omcQ_24in_5Ffull;
  _funcTree = __omcQ_24in_5FfuncTree;
  _index = __omcQ_24in_5Findex;
  _return: OMC_LABEL_UNUSED
  if (out_full) { *out_full = _full; }
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_index) { *out_index = _index; }
  return _comp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_none(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Findex);
  tmp2 = mmc_unbox_integer(_kind);
  _comp = omc_NBTearing_none(threadData, __omcQ_24in_5Fcomp, __omcQ_24in_5Ffull, __omcQ_24in_5FfuncTree, tmp1, _variables, _equations, _eq_index, tmp2, out_full, out_funcTree, &_index);
  /* skip box _comp; NBStrongComponent */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return _comp;
}

static modelica_metatype closure5_NBEquation_Equation_createResidual(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn_ptr)
{
  modelica_metatype new = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_createResidual(thData, $in_eqn_ptr, new);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_finalize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_integer _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_integer *out_index)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_integer _index;
  modelica_metatype _residual_comps = NULL;
  modelica_metatype _jacobian = NULL;
  modelica_metatype _strict = NULL;
  modelica_metatype _acc = NULL;
  modelica_metatype _dummy_set = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  _full = __omcQ_24in_5Ffull;
  _funcTree = __omcQ_24in_5FfuncTree;
  _index = __omcQ_24in_5Findex;
  // _residual_comps has no default value.
  // _jacobian has no default value.
  // _strict has no default value.
  // _acc has no default value.
  _dummy_set = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _strict = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar51;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar50;
            modelica_integer tmp10;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar51 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar51;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar50 = omc_NBInline_inlineRecordSliceEquation(threadData, _eqn, _variables, _dummy_set, _eq_index, 1 /* true */);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar50,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar51;
          }
          _acc = tmpMeta7;

          {
            modelica_metatype __omcQ_24tmpVar53;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar52;
            modelica_integer tmp16;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = omc_List_flatten(threadData, _acc);
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar53 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar53;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                tmpMeta15 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
                __omcQ_24tmpVar52 = omc_NBSlice_apply(threadData, _eqn, (modelica_fnptr) mmc_mk_box2(0,closure5_NBEquation_Equation_createResidual,tmpMeta15));
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar52,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar53;
          }
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = tmpMeta12;
          _strict = tmpMeta11;

          {
            modelica_metatype __omcQ_24tmpVar55;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar54;
            modelica_integer tmp20;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar55 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar55;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar54 = omc_NBStrongComponent_fromSolvedEquationSlice(threadData, _eqn);
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar54,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar55;
          }
          _residual_comps = tmpMeta17;

          {
            modelica_metatype __omcQ_24tmpVar57;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_metatype __omcQ_24tmpVar56;
            modelica_integer tmp24;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 2)));
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar57 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar57;
            while(1) {
              tmp24 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp24--;
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar56 = omc_NBSlice_getT(threadData, _var);
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar56,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar57;
          }
          {
            modelica_metatype __omcQ_24tmpVar59;
            modelica_metatype* tmp26;
            modelica_metatype tmpMeta27;
            modelica_metatype __omcQ_24tmpVar58;
            modelica_integer tmp28;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar59 = tmpMeta27; /* defaultValue */
            tmp26 = &__omcQ_24tmpVar59;
            while(1) {
              tmp28 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp28--;
              }
              if (tmp28 == 0) {
                __omcQ_24tmpVar58 = omc_NBSlice_getT(threadData, _eqn);
                *tmp26 = mmc_mk_cons(__omcQ_24tmpVar58,0);
                tmp26 = &MMC_CDR(*tmp26);
              } else if (tmp28 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp26 = mmc_mk_nil();
            tmpMeta25 = __omcQ_24tmpVar59;
          }
          tmpMeta29 = stringAppend(omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind),(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))))?_OMC_LIT21:_OMC_LIT22));
          tmpMeta30 = stringAppend(tmpMeta29,intString(_index));
          _jacobian = omc_NBJacobian_nonlinear(threadData, omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta21, 0 /* false */), omc_NBEquation_EquationPointers_fromList(threadData, tmpMeta25), omc_Array_appendList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4))), _residual_comps), _funcTree, tmpMeta30, ((modelica_integer)_kind == 5) ,&_funcTree);

          tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[5] = _jacobian;
          _strict = tmpMeta31;

          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_comp), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[3] = _strict;
          _comp = tmpMeta32;

          if(omc_Flags_isSet(threadData, _OMC_LIT26))
          {
            tmpMeta33 = stringAppend(omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)),_OMC_LIT18);
            fputs(MMC_STRINGDATA(tmpMeta33),stdout);
          }
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
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_full) { *out_full = _full; }
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_index) { *out_index = _index; }
  return _comp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_finalize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Findex);
  tmp2 = mmc_unbox_integer(_kind);
  _comp = omc_NBTearing_finalize(threadData, __omcQ_24in_5Fcomp, __omcQ_24in_5Ffull, __omcQ_24in_5FfuncTree, tmp1, _variables, _equations, _eq_index, tmp2, out_full, out_funcTree, &_index);
  /* skip box _comp; NBStrongComponent */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return _comp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_initialize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_integer _kind, modelica_boolean _minimal, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_integer *out_index)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_integer _index;
  modelica_metatype _strict = NULL;
  modelica_metatype _vars_lst = NULL;
  modelica_metatype _eqns_lst = NULL;
  modelica_metatype _vars_set = NULL;
  modelica_metatype _v = NULL;
  modelica_metatype _e = NULL;
  modelica_boolean _init;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  _full = __omcQ_24in_5Ffull;
  _funcTree = __omcQ_24in_5FfuncTree;
  _index = __omcQ_24in_5Findex;
  // _strict has no default value.
  // _vars_lst has no default value.
  // _eqns_lst has no default value.
  // _vars_set has no default value.
  // _v has no default value.
  // _e has no default value.
  _init = ((modelica_integer)_kind == 5);
  
  
  
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _strict = tmpMeta6;
          /* Pattern matching succeeded */
          _index = ((modelica_integer) 1) + _index;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_comp), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = mmc_mk_integer(_index);
          _comp = tmpMeta7;

          if(_minimal)
          {
            {
              modelica_metatype __omcQ_24tmpVar61;
              modelica_metatype* tmp9;
              modelica_metatype tmpMeta10;
              modelica_metatype __omcQ_24tmpVar60;
              modelica_integer tmp11;
              modelica_metatype _var_loopVar = 0;
              modelica_metatype _var;
              _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 2)));
              tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar61 = tmpMeta10; /* defaultValue */
              tmp9 = &__omcQ_24tmpVar61;
              while(1) {
                tmp11 = 1;
                while (!listEmpty(_var_loopVar)) {
                  _var = MMC_CAR(_var_loopVar);
                  _var_loopVar = MMC_CDR(_var_loopVar);
                  if ((!omc_NBVariable_isContinuous(threadData, omc_NBSlice_getT(threadData, _var), ((modelica_integer)_kind == 5)))) {
                    tmp11--;
                    break;
                  }
                }
                if (tmp11 == 0) {
                  __omcQ_24tmpVar60 = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var));
                  *tmp9 = mmc_mk_cons(__omcQ_24tmpVar60,0);
                  tmp9 = &MMC_CDR(*tmp9);
                } else if (tmp11 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp9 = mmc_mk_nil();
              tmpMeta8 = __omcQ_24tmpVar61;
            }
            _vars_lst = tmpMeta8;

            {
              modelica_metatype __omcQ_24tmpVar63;
              modelica_metatype* tmp13;
              modelica_metatype tmpMeta14;
              modelica_metatype __omcQ_24tmpVar62;
              modelica_integer tmp15;
              modelica_metatype _eqn_loopVar = 0;
              modelica_metatype _eqn;
              _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
              tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar63 = tmpMeta14; /* defaultValue */
              tmp13 = &__omcQ_24tmpVar63;
              while(1) {
                tmp15 = 1;
                while (!listEmpty(_eqn_loopVar)) {
                  _eqn = MMC_CAR(_eqn_loopVar);
                  _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                  if ((!omc_NBEquation_Equation_isContinuous(threadData, omc_NBSlice_getT(threadData, _eqn)))) {
                    tmp15--;
                    break;
                  }
                }
                if (tmp15 == 0) {
                  __omcQ_24tmpVar62 = omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, _eqn));
                  *tmp13 = mmc_mk_cons(__omcQ_24tmpVar62,0);
                  tmp13 = &MMC_CDR(*tmp13);
                } else if (tmp15 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp13 = mmc_mk_nil();
              tmpMeta12 = __omcQ_24tmpVar63;
            }
            _eqns_lst = tmpMeta12;
          }
          else
          {
            {
              modelica_metatype __omcQ_24tmpVar65;
              modelica_metatype* tmp17;
              modelica_metatype tmpMeta18;
              modelica_metatype __omcQ_24tmpVar64;
              modelica_integer tmp19;
              modelica_metatype _var_loopVar = 0;
              modelica_metatype _var;
              _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 2)));
              tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar65 = tmpMeta18; /* defaultValue */
              tmp17 = &__omcQ_24tmpVar65;
              while(1) {
                tmp19 = 1;
                if (!listEmpty(_var_loopVar)) {
                  _var = MMC_CAR(_var_loopVar);
                  _var_loopVar = MMC_CDR(_var_loopVar);
                  tmp19--;
                }
                if (tmp19 == 0) {
                  __omcQ_24tmpVar64 = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var));
                  *tmp17 = mmc_mk_cons(__omcQ_24tmpVar64,0);
                  tmp17 = &MMC_CDR(*tmp17);
                } else if (tmp19 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp17 = mmc_mk_nil();
              tmpMeta16 = __omcQ_24tmpVar65;
            }
            _vars_lst = tmpMeta16;

            {
              modelica_metatype __omcQ_24tmpVar67;
              modelica_metatype* tmp21;
              modelica_metatype tmpMeta22;
              modelica_metatype __omcQ_24tmpVar66;
              modelica_integer tmp23;
              modelica_metatype _eqn_loopVar = 0;
              modelica_metatype _eqn;
              _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
              tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar67 = tmpMeta22; /* defaultValue */
              tmp21 = &__omcQ_24tmpVar67;
              while(1) {
                tmp23 = 1;
                if (!listEmpty(_eqn_loopVar)) {
                  _eqn = MMC_CAR(_eqn_loopVar);
                  _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                  tmp23--;
                }
                if (tmp23 == 0) {
                  __omcQ_24tmpVar66 = omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, _eqn));
                  *tmp21 = mmc_mk_cons(__omcQ_24tmpVar66,0);
                  tmp21 = &MMC_CDR(*tmp21);
                } else if (tmp23 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp21 = mmc_mk_nil();
              tmpMeta20 = __omcQ_24tmpVar67;
            }
            _eqns_lst = tmpMeta20;
          }

          _vars_set = omc_UnorderedSet_fromList(threadData, _vars_lst, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual);

          _v = omc_UnorderedMap_subMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 2))), _vars_lst);

          _e = omc_UnorderedMap_subMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2))), _eqns_lst);

          _full = omc_NBAdjacency_Matrix_refine(threadData, _full, _funcTree, _v, _e, _variables, _equations, _vars_set, ((modelica_integer)_kind == 5) ,&_funcTree);

          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_comp), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[5] = mmc_mk_boolean(omc_NBTearing_checkLinearity(threadData, _full, _v, _e));
          _comp = tmpMeta24;
          tmpMeta[0+0] = _comp;
          tmpMeta[0+1] = _full;
          tmp1_c2 = _index;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _comp;
          tmpMeta[0+1] = _full;
          tmp1_c2 = _index;
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
  _comp = tmpMeta[0+0];
  _full = tmpMeta[0+1];
  _index = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_full) { *out_full = _full; }
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_index) { *out_index = _index; }
  return _comp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_initialize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype _minimal, modelica_metatype *out_full, modelica_metatype *out_funcTree, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _index;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Findex);
  tmp2 = mmc_unbox_integer(_kind);
  tmp3 = mmc_unbox_integer(_minimal);
  _comp = omc_NBTearing_initialize(threadData, __omcQ_24in_5Fcomp, __omcQ_24in_5Ffull, __omcQ_24in_5FfuncTree, tmp1, _variables, _equations, _eq_index, tmp2, tmp3, out_full, out_funcTree, &_index);
  /* skip box _comp; NBStrongComponent */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return _comp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBTearing_tearingTraverser(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype _funcs, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _eq_index, modelica_integer _kind, modelica_metatype *out_funcTree)
{
  modelica_metatype _new_partitions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _funcTree = NULL;
  modelica_metatype _strongComponents = NULL;
  modelica_metatype _tmp = NULL;
  modelica_integer _idx;
  modelica_metatype _full = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_partitions = tmpMeta1;
  _funcTree = __omcQ_24in_5FfuncTree;
  // _strongComponents has no default value.
  // _tmp has no default value.
  _idx = ((modelica_integer) 0);
  // _full has no default value.
  {
    modelica_metatype _part;
    for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _part = MMC_CAR(tmpMeta2);
      if((isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)))) && isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))))))
      {
        /* Pattern-matching assignment */
        tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)));
        if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
        tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
        _strongComponents = tmpMeta4;

        /* Pattern-matching assignment */
        tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7)));
        if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
        _full = tmpMeta6;

        tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = arrayLength(_strongComponents);
        if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
          {
            _tmp = arrayGet(_strongComponents,_i) /* DAE.ASUB */;

            {
              modelica_metatype _func;
              for (tmpMeta7 = _funcs; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
              {
                _func = MMC_CAR(tmpMeta7);
                /* Pattern-matching tuple assignment */
                tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _tmp, _full, _funcTree, mmc_mk_integer(_idx), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), _eq_index, mmc_mk_integer((modelica_integer)_kind), &tmpMeta8, &tmpMeta9, &tmpMeta10) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _tmp, _full, _funcTree, mmc_mk_integer(_idx), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), _eq_index, mmc_mk_integer((modelica_integer)_kind), &tmpMeta8, &tmpMeta9, &tmpMeta10);
                _tmp = tmpMeta12;
                tmp11 = mmc_unbox_integer(tmpMeta10);
                _full = tmpMeta8;
                _funcTree = tmpMeta9;
                _idx = tmp11  /* pattern as ty=Integer */;
              }
            }

            if((!referenceEq(_tmp, arrayGet(_strongComponents,_i) /* DAE.ASUB */)))
            {
              arrayUpdate(_strongComponents, _i, _tmp);
            }
          }
        }

        tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(10));
        memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[9] = mmc_mk_some(_strongComponents);
        _part = tmpMeta17;

        tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(10));
        memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[7] = mmc_mk_some(_full);
        _part = tmpMeta18;
      }

      tmpMeta19 = mmc_mk_cons(_part, _new_partitions);
      _new_partitions = tmpMeta19;
    }
  }

  _new_partitions = listReverse(_new_partitions);
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  return _new_partitions;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBTearing_tearingTraverser(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype _funcs, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _eq_index, modelica_metatype _kind, modelica_metatype *out_funcTree)
{
  modelica_integer tmp1;
  modelica_metatype _new_partitions = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_kind);
  _new_partitions = omc_NBTearing_tearingTraverser(threadData, _partitions, _funcs, __omcQ_24in_5FfuncTree, _eq_index, tmp1, out_funcTree);
  /* skip box _new_partitions; list<NBPartition.Partition> */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  return _new_partitions;
}

DLLDirection
modelica_metatype omc_NBTearing_setResidualEqns(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftearing, modelica_metatype _residuals)
{
  modelica_metatype _tearing = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tearing = __omcQ_24in_5Ftearing;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(6));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_tearing), 6*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = _residuals;
  _tearing = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tearing;
}

DLLDirection
modelica_metatype omc_NBTearing_getResidualVars(threadData_t *threadData, modelica_metatype _tearing)
{
  modelica_metatype _residuals = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _residuals has no default value.
  {
    modelica_metatype __omcQ_24tmpVar69;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar68;
    modelica_integer tmp4;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tearing), 3)));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar69 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar69;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar68 = omc_NBEquation_Equation_getResidualVar(threadData, omc_NBSlice_getT(threadData, _eqn));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar68,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar69;
  }
  _residuals = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _residuals;
}

static modelica_metatype closure6_NBTearing_initialize(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp, modelica_metatype $in_full, modelica_metatype $in_funcTree, modelica_metatype $in_index, modelica_metatype variables, modelica_metatype equations, modelica_metatype eq_index, modelica_metatype kind, modelica_metatype tmp7, modelica_metatype tmp8, modelica_metatype tmp9)
{
  modelica_metatype minimal = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBTearing_initialize(thData, $in_comp, $in_full, $in_funcTree, $in_index, variables, equations, eq_index, kind, minimal, tmp7, tmp8, tmp9);
}static modelica_metatype closure7_NBTearing_initialize(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp, modelica_metatype $in_full, modelica_metatype $in_funcTree, modelica_metatype $in_index, modelica_metatype variables, modelica_metatype equations, modelica_metatype eq_index, modelica_metatype kind, modelica_metatype tmp12, modelica_metatype tmp13, modelica_metatype tmp14)
{
  modelica_metatype minimal = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBTearing_initialize(thData, $in_comp, $in_full, $in_funcTree, $in_index, variables, equations, eq_index, kind, minimal, tmp12, tmp13, tmp14);
}static modelica_metatype closure8_NBTearing_initialize(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp, modelica_metatype $in_full, modelica_metatype $in_funcTree, modelica_metatype $in_index, modelica_metatype variables, modelica_metatype equations, modelica_metatype eq_index, modelica_metatype kind, modelica_metatype tmp17, modelica_metatype tmp18, modelica_metatype tmp19)
{
  modelica_metatype minimal = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBTearing_initialize(thData, $in_comp, $in_full, $in_funcTree, $in_index, variables, equations, eq_index, kind, minimal, tmp17, tmp18, tmp19);
}static modelica_metatype closure9_NBTearing_initialize(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp, modelica_metatype $in_full, modelica_metatype $in_funcTree, modelica_metatype $in_index, modelica_metatype variables, modelica_metatype equations, modelica_metatype eq_index, modelica_metatype kind, modelica_metatype tmp22, modelica_metatype tmp23, modelica_metatype tmp24)
{
  modelica_metatype minimal = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBTearing_initialize(thData, $in_comp, $in_full, $in_funcTree, $in_index, variables, equations, eq_index, kind, minimal, tmp22, tmp23, tmp24);
}
DLLDirection
modelica_metatype omc_NBTearing_getModule(threadData_t *threadData)
{
  modelica_metatype _funcs = NULL;
  modelica_string _flag = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _funcs has no default value.
  _flag = omc_Flags_getConfigString(threadData, _OMC_LIT54);
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _flag;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
          tmpMeta6 = mmc_mk_cons((modelica_fnptr) mmc_mk_box2(0,closure6_NBTearing_initialize,tmpMeta10), mmc_mk_cons(boxvar_NBTearing_minimal, mmc_mk_cons(boxvar_NBTearing_finalize, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta15;
          if (9 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          tmpMeta11 = mmc_mk_cons((modelica_fnptr) mmc_mk_box2(0,closure7_NBTearing_initialize,tmpMeta15), mmc_mk_cons(boxvar_NBTearing_minimal, mmc_mk_cons(boxvar_NBTearing_finalize, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta20;
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT39), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta20 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
          tmpMeta16 = mmc_mk_cons((modelica_fnptr) mmc_mk_box2(0,closure8_NBTearing_initialize,tmpMeta20), mmc_mk_cons(boxvar_NBTearing_minimal, mmc_mk_cons(boxvar_NBTearing_finalize, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta25;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT35), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta25 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          tmpMeta21 = mmc_mk_cons((modelica_fnptr) mmc_mk_box2(0,closure9_NBTearing_initialize,tmpMeta25), mmc_mk_cons(boxvar_NBTearing_minimal, mmc_mk_cons(boxvar_NBTearing_finalize, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta1 = tmpMeta21;
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
  _funcs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _funcs;
}

DLLDirection
modelica_metatype omc_NBTearing_singleImplicit(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn)
{
  modelica_metatype _tearingSet = NULL;
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
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _var, tmpMeta2);
  tmpMeta1 = mmc_mk_cons(tmpMeta3, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, tmpMeta5);
  tmpMeta4 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = mmc_mk_box5(3, &NBTearing_TEARING__SET__desc, tmpMeta1, tmpMeta4, listArray(tmpMeta7), mmc_mk_none());
  _tearingSet = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _tearingSet;
}

static modelica_metatype closure10_NBInitialization_containsHomotopyCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype b = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_containsHomotopyCall(thData, $in_exp, b);
}static modelica_metatype closure11_NBInitialization_containsHomotopyCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype b = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_containsHomotopyCall(thData, $in_exp, b);
}static modelica_metatype closure12_NBInitialization_containsHomotopyCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype b = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_containsHomotopyCall(thData, $in_exp, b);
}
DLLDirection
modelica_metatype omc_NBTearing_implicit(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_integer _kind, modelica_metatype *out_funcTree, modelica_integer *out_index)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_integer _index;
  modelica_metatype _dummy = NULL;
  modelica_metatype _new_comp = NULL;
  modelica_metatype _homotopy = NULL;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  _funcTree = __omcQ_24in_5FfuncTree;
  _index = __omcQ_24in_5Findex;
  _dummy = _OMC_LIT55;
  // _new_comp has no default value.
  _homotopy = omc_Pointer_create(threadData, mmc_mk_boolean(0 /* false */));
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box1(0, _homotopy);
          omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), (modelica_fnptr) mmc_mk_box2(0,closure10_NBInitialization_containsHomotopyCall,tmpMeta5), mmc_mk_none(), boxvar_NFExpression_map);

          tmpMeta6 = mmc_mk_box8(9, &NBStrongComponent_ALGEBRAIC__LOOP__desc, mmc_mk_integer(_index), omc_NBTearing_singleImplicit(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), mmc_mk_none(), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), omc_Pointer_access(threadData, _homotopy), mmc_mk_integer(3));
          _new_comp = tmpMeta6;
          tmpMeta[0+0] = omc_NBTearing_finalize(threadData, _new_comp, _dummy, _funcTree, _index, omc_NBVariable_VariablePointers_empty(threadData, ((modelica_integer) 4013), 0 /* false */), omc_NBEquation_EquationPointers_empty(threadData, ((modelica_integer) 4013)), omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 0))), (modelica_integer)_kind, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box1(0, _homotopy);
          omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))), (modelica_fnptr) mmc_mk_box2(0,closure11_NBInitialization_containsHomotopyCall,tmpMeta7), mmc_mk_none(), boxvar_NFExpression_map);

          tmpMeta8 = mmc_mk_box8(9, &NBStrongComponent_ALGEBRAIC__LOOP__desc, mmc_mk_integer(_index), omc_NBTearing_singleImplicit(threadData, omc_NBSlice_getT(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))))), omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))), mmc_mk_none(), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), omc_Pointer_access(threadData, _homotopy), mmc_mk_integer(3));
          _new_comp = tmpMeta8;
          tmpMeta[0+0] = omc_NBTearing_finalize(threadData, _new_comp, _dummy, _funcTree, _index, omc_NBVariable_VariablePointers_empty(threadData, ((modelica_integer) 4013), 0 /* false */), omc_NBEquation_EquationPointers_empty(threadData, ((modelica_integer) 4013)), omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 0))), (modelica_integer)_kind, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box1(0, _homotopy);
          omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))), (modelica_fnptr) mmc_mk_box2(0,closure12_NBInitialization_containsHomotopyCall,tmpMeta9), mmc_mk_none(), boxvar_NFExpression_map);

          tmpMeta10 = mmc_mk_box8(9, &NBStrongComponent_ALGEBRAIC__LOOP__desc, mmc_mk_integer(_index), omc_NBTearing_singleImplicit(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))), mmc_mk_none(), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), omc_Pointer_access(threadData, _homotopy), mmc_mk_integer(3));
          _new_comp = tmpMeta10;
          tmpMeta[0+0] = omc_NBTearing_finalize(threadData, _new_comp, _dummy, _funcTree, _index, omc_NBVariable_VariablePointers_empty(threadData, ((modelica_integer) 4013), 0 /* false */), omc_NBEquation_EquationPointers_empty(threadData, ((modelica_integer) 4013)), omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 0))), (modelica_integer)_kind, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _comp;
          tmpMeta[0+1] = _dummy;
          tmpMeta[0+2] = _funcTree;
          tmp1_c3 = _index;
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
  _comp = tmpMeta[0+0];
  _dummy = tmpMeta[0+1];
  _funcTree = tmpMeta[0+2];
  _index = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_index) { *out_index = _index; }
  return _comp;
}
modelica_metatype boxptr_NBTearing_implicit(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _kind, modelica_metatype *out_funcTree, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Findex);
  tmp2 = mmc_unbox_integer(_kind);
  _comp = omc_NBTearing_implicit(threadData, __omcQ_24in_5Fcomp, __omcQ_24in_5FfuncTree, tmp1, tmp2, out_funcTree, &_index);
  /* skip box _comp; NBStrongComponent */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return _comp;
}

DLLDirection
modelica_metatype omc_NBTearing_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_integer _kind)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  _funcs = omc_NBTearing_getModule(threadData);
  // _funcTree has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT26))
  {
    tmpMeta1 = stringAppend(_OMC_LIT56,omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT57);
    tmpMeta3 = stringAppend(omc_StringUtil_headline__1(threadData, tmpMeta2),_OMC_LIT18);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);
  }

  { /* match expression */
    modelica_integer tmp7_1;modelica_metatype tmp7_2;
    tmp7_1 = (modelica_integer)_kind;
    tmp7_2 = _bdae;
    {
      modelica_metatype _partitions = NULL;
      modelica_metatype _eq_index = NULL;
      volatile mmc_switch_type tmp7;
      int tmp8;
      // _partitions has no default value.
      // _eq_index has no default value.
      tmp7 = 0;
      for (; tmp7 < 3; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (1 != tmp7_1) goto tmp6_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_2,0,13) == 0) goto tmp6_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,9) == 0) goto tmp6_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 14));
          _partitions = tmpMeta9;
          _eq_index = tmpMeta11;
          _funcTree = tmpMeta12;
          /* Pattern matching succeeded */
          _partitions = omc_NBTearing_tearingTraverser(threadData, _partitions, omc_NBTearing_getModule(threadData), _funcTree, _eq_index, (modelica_integer)_kind ,&_funcTree);

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = _partitions;
          _bdae = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[14] = _funcTree;
          _bdae = tmpMeta14;
          tmpMeta4 = _bdae;
          goto tmp6_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (5 != tmp7_1) goto tmp6_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_2,0,13) == 0) goto tmp6_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 7));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,9) == 0) goto tmp6_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 14));
          _partitions = tmpMeta15;
          _eq_index = tmpMeta17;
          _funcTree = tmpMeta18;
          /* Pattern matching succeeded */
          _partitions = omc_NBTearing_tearingTraverser(threadData, _partitions, omc_NBTearing_getModule(threadData), _funcTree, _eq_index, (modelica_integer)_kind ,&_funcTree);

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[7] = _partitions;
          _bdae = tmpMeta19;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 8)))))
          {
            _partitions = omc_NBTearing_tearingTraverser(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 8)))), omc_NBTearing_getModule(threadData), _funcTree, _eq_index, (modelica_integer)_kind ,&_funcTree);

            tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(15));
            memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[8] = mmc_mk_some(_partitions);
            _bdae = tmpMeta20;
          }

          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[14] = _funcTree;
          _bdae = tmpMeta21;
          tmpMeta4 = _bdae;
          goto tmp6_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (6 != tmp7_1) goto tmp6_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_2,0,13) == 0) goto tmp6_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 9));
          if (optionNone(tmpMeta22)) goto tmp6_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 1));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,0,9) == 0) goto tmp6_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 14));
          _partitions = tmpMeta23;
          _eq_index = tmpMeta25;
          _funcTree = tmpMeta26;
          /* Pattern matching succeeded */
          _partitions = omc_NBTearing_tearingTraverser(threadData, _partitions, omc_NBTearing_getModule(threadData), _funcTree, _eq_index, (modelica_integer)_kind ,&_funcTree);

          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[9] = mmc_mk_some(_partitions);
          _bdae = tmpMeta27;

          tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[14] = _funcTree;
          _bdae = tmpMeta28;
          /* Tail recursive call */
          __omcQ_24in_5Fbdae = _bdae;
          _kind = 1;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _bdae = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}
modelica_metatype boxptr_NBTearing_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _bdae = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _bdae = omc_NBTearing_main(threadData, __omcQ_24in_5Fbdae, tmp1);
  /* skip box _bdae; NBackendDAE */
  return _bdae;
}

static modelica_metatype closure13_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure14_NBStrongComponent_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype comp)
{
  modelica_metatype index = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBStrongComponent_toString(thData, comp, index);
}
DLLDirection
modelica_string omc_NBTearing_toString(threadData_t *threadData, modelica_metatype _set, modelica_string __omcQ_24in_5Fstr)
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  _str = omc_StringUtil_headline__4(threadData, _str);

  tmpMeta1 = stringAppend(_str,_OMC_LIT58);
  tmpMeta2 = stringAppend(tmpMeta1,omc_NBSlice_lstToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))), boxvar_NBVariable_pointerToString, ((modelica_integer) 10)));
  _str = tmpMeta2;

  tmpMeta3 = stringAppend(_str,_OMC_LIT59);
  tmpMeta4 = mmc_mk_box1(0, _OMC_LIT15);
  tmpMeta5 = stringAppend(tmpMeta3,omc_NBSlice_lstToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))), (modelica_fnptr) mmc_mk_box2(0,closure13_NBEquation_Equation_pointerToString,tmpMeta4), ((modelica_integer) 10)));
  _str = tmpMeta5;

  tmpMeta6 = stringAppend(_str,_OMC_LIT60);
  tmpMeta7 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) -1)));
  tmpMeta8 = stringAppend(tmpMeta6,omc_Array_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 4))), (modelica_fnptr) mmc_mk_box2(0,closure14_NBStrongComponent_toString,tmpMeta7), _OMC_LIT15, _OMC_LIT16, _OMC_LIT17, _OMC_LIT15, 1 /* true */, ((modelica_integer) 0)));
  _str = tmpMeta8;

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 5)))))
  {
    tmpMeta9 = stringAppend(_str,_OMC_LIT18);
    tmpMeta10 = stringAppend(tmpMeta9,omc_NBJacobian_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 5)))), _OMC_LIT61));
    _str = tmpMeta10;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_boolean omc_NBTearing_isEqual(threadData_t *threadData, modelica_metatype _tearing1, modelica_metatype _tearing2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 0 /* false */;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBTearing_isEqual(threadData_t *threadData, modelica_metatype _tearing1, modelica_metatype _tearing2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBTearing_isEqual(threadData, _tearing1, _tearing2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NBTearing_hash(threadData_t *threadData, modelica_metatype _tearing)
{
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = ((modelica_integer) -1);
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_NBTearing_hash(threadData_t *threadData, modelica_metatype _tearing)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBTearing_hash(threadData, _tearing);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

