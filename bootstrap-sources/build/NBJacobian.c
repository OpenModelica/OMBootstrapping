#include "omc_simulation_settings.h"
#include "NBJacobian.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "NBJacobian.algorithmToSSA expects a MULTI_COMPONENT with an ALGORITHM equation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,79,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "//OpenModelica/OMCompiler/Compiler/NBackEnd/Modules/3_Post/NBJacobian.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,95,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8_6,1.786954567e9);
#define _OMC_LIT8_6 MMC_REFREALLIT(_OMC_LIT_STRUCT8_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1680)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1680)),MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT8_6}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,18) {&NFType_ANY__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,0,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT16,0.0);
#define _OMC_LIT16 MMC_REFREALLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT15,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,17,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,5,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,10,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT18,_OMC_LIT19,_OMC_LIT20,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,11,3) {&NFVariable_VARIABLE__desc,_OMC_LIT0,_OMC_LIT10,_OMC_LIT11,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT14,_OMC_LIT17,_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "makeLinearAlgebraicLoop: |vars| != |eqns|"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,41,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,2,1) {_OMC_LIT23,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,3,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data " -> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,4,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "{\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,4,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "\n}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,2,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT29_6,1.786954567e9);
#define _OMC_LIT29_6 MMC_REFREALLIT(_OMC_LIT_STRUCT29_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1594)),MMC_IMMEDIATE(MMC_TAGFIXNUM(41)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1595)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT29_6}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT30_6,1.786954567e9);
#define _OMC_LIT30_6 MMC_REFREALLIT(_OMC_LIT_STRUCT30_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1598)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1599)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),_OMC_LIT30_6}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "NBJacobian.getTmpFilterFunction failed because jacobian type is not known: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,75,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "NBJacobian.jacobianNumeric failed because strong components are missing."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,72,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,1) {_OMC_LIT32,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "_ADJ"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,4,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "NBJacobian.jacobianSymbolicAdjoint failed because no strong components were given!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,82,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,1) {_OMC_LIT35,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "NBJacobian.jacobianSymbolicAdjoint only supports SINGLE_COMPONENT, MULTI_COMPONENT, SLICED_COMPONENT, RESIZABLE_COMPONENT and ALGEBRAIC_LOOP in symbolic adjoint jacobian generation!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,181,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,1) {_OMC_LIT37,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Primal component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,18,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,1,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "debugAdjoint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,12,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "Dumps debug output for the adjoint differentiation process in the new backend."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,78,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(197)),_OMC_LIT41,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "Seed candidates before pDer creation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,38,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Seed Candidates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,15,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Partial candidates before pDer creation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,41,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "Partial Candidates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,18,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "seed vars after seed creation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,31,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "Seed Vars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,9,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "res vars after pDer creation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,30,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Res Vars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,8,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "tmp vars after pDer creation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,30,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "Tmp Vars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,8,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "Diff map before component generation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,38,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "[adjoint] generated component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,31,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "Final list of differentiated components:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,41,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT57_6,1.786954567e9);
#define _OMC_LIT57_6 MMC_REFREALLIT(_OMC_LIT_STRUCT57_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1280)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1280)),MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT57_6}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,33) {&NFExpression_EMPTY__desc,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "$TMP"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,4,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT61_6,1.786954567e9);
#define _OMC_LIT61_6 MMC_REFREALLIT(_OMC_LIT_STRUCT61_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(976)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(976)),MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),_OMC_LIT61_6}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT17,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT63,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "SSA algorithm for adjoint of component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,39,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data ":\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,2,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "NBJacobian.generateAdjointComponent unsupported component type: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,64,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT68_6,1.786954567e9);
#define _OMC_LIT68_6 MMC_REFREALLIT(_OMC_LIT_STRUCT68_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(763)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(763)),MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT68_6}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "NBJacobian.makeAdjointComponentFromRhs cannot create adjoint strong component for equation "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,91,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "NBJacobian.jacobianSymbolic failed because no strong components were given!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,75,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,1) {_OMC_LIT70,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "NBJacobian.jacobianSymbolic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,27,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "_LS_JAC_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,8,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "_NLS_JAC_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,9,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "symjacdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,10,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "Dumps information about symbolic Jacobians."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,43,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(45)),_OMC_LIT75,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT76}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "moo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,3,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "Generate code for dynamic optimization library MOO."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,51,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(163)),_OMC_LIT78,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT79,_OMC_LIT80,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "generateDynamicJacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,23,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "numeric"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,7,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,4,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "Does not generate Jacobian. For use with explicit solvers."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,58,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,2,0) {_OMC_LIT86,_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "Generates sparsity pattern for numeric Jacobian."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,48,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,0) {_OMC_LIT84,_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "symbolic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,8,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "Generates symbolic Jacobian. Used by dassl or ida solver with simulation flag '-jacobian'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,90,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,2,0) {_OMC_LIT91,_OMC_LIT92}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "symbolicadjoint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,15,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "Generates adjoint Jacobian symbolically."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,40,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,2,0) {_OMC_LIT94,_OMC_LIT95}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "bidirectional"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,13,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "Generates bidirectional Jacobian using star bicoloring (ColPack). Combines forward and adjoint modes."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,101,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,2,0) {_OMC_LIT97,_OMC_LIT98}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,2,1) {_OMC_LIT99,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,2,1) {_OMC_LIT96,_OMC_LIT100}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,2,1) {_OMC_LIT93,_OMC_LIT101}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,2,1) {_OMC_LIT90,_OMC_LIT102}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,2,1) {_OMC_LIT88,_OMC_LIT103}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT104}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,1,1) {_OMC_LIT105}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "Select how Jacobian matrix is generated, where der(x) is differentiated w.r.t. x."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,81,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(51)),_OMC_LIT83,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT79,_OMC_LIT85,_OMC_LIT106,_OMC_LIT107}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "[ODE]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,5,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "[DAE]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,5,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "[LS-]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,5,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "[NLS]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,5,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "[OPT-LFG]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,9,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "[OPT-MRF]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,9,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "[OPT-R0]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,8,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "[ERR]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,5,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "NBJacobian.getModule failed because of unknown jacobian type: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,62,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "NBJacobian.combine failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,30,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "ADJ"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,3,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "NLSanalyticJacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,19,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "Enables analytical jacobian for non-linear strong components without user-defined function calls, for that see forceNLSanalyticJacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,135,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),_OMC_LIT120,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT121}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "[symjacdump] Creating symbolic Jacobians:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,41,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "ODE_JAC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,7,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "DAE_JAC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,7,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "NBJacobian.main failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,28,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#include "util/modelica.h"

#include "NBJacobian_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_algorithmToSSA(threadData_t *threadData, modelica_metatype _comp, modelica_metatype *out_replacements, modelica_metatype *out_newVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_algorithmToSSA,2,0) {(void*) boxptr_NBJacobian_algorithmToSSA,0}};
#define boxvar_NBJacobian_algorithmToSSA MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_algorithmToSSA)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_makeSSAVar(threadData_t *threadData, modelica_metatype _baseCref, modelica_integer _idx, modelica_metatype *out_ssaCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_makeSSAVar(threadData_t *threadData, modelica_metatype _baseCref, modelica_metatype _idx, modelica_metatype *out_ssaCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_makeSSAVar,2,0) {(void*) boxptr_NBJacobian_makeSSAVar,0}};
#define boxvar_NBJacobian_makeSSAVar MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_makeSSAVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_makeLinearAlgebraicLoop(threadData_t *threadData, modelica_metatype _itVarPtrs, modelica_metatype _resEqnPtrs, modelica_metatype _jac, modelica_boolean _mixed, modelica_boolean _homotopy);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_makeLinearAlgebraicLoop(threadData_t *threadData, modelica_metatype _itVarPtrs, modelica_metatype _resEqnPtrs, modelica_metatype _jac, modelica_metatype _mixed, modelica_metatype _homotopy);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_makeLinearAlgebraicLoop,2,0) {(void*) boxptr_NBJacobian_makeLinearAlgebraicLoop,0}};
#define boxvar_NBJacobian_makeLinearAlgebraicLoop MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_makeLinearAlgebraicLoop)
PROTECTED_FUNCTION_STATIC modelica_string omc_NBJacobian_diffMapToString(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_diffMapToString,2,0) {(void*) boxptr_NBJacobian_diffMapToString,0}};
#define boxvar_NBJacobian_diffMapToString MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_diffMapToString)
PROTECTED_FUNCTION_STATIC void omc_NBJacobian_makeVarTraverse(threadData_t *threadData, modelica_metatype _var_ptr, modelica_string _name, modelica_metatype _vars_ptr, modelica_metatype _map, modelica_fnptr _makeVar, modelica_boolean _staticAsContinuous);
PROTECTED_FUNCTION_STATIC void boxptr_NBJacobian_makeVarTraverse(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _name, modelica_metatype _vars_ptr, modelica_metatype _map, modelica_fnptr _makeVar, modelica_metatype _staticAsContinuous);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_makeVarTraverse,2,0) {(void*) boxptr_NBJacobian_makeVarTraverse,0}};
#define boxvar_NBJacobian_makeVarTraverse MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_makeVarTraverse)
PROTECTED_FUNCTION_STATIC modelica_fnptr omc_NBJacobian_getTmpFilterFunction(threadData_t *threadData, modelica_integer _jacType);
PROTECTED_FUNCTION_STATIC modelica_fnptr boxptr_NBJacobian_getTmpFilterFunction(threadData_t *threadData, modelica_metatype _jacType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_getTmpFilterFunction,2,0) {(void*) boxptr_NBJacobian_getTmpFilterFunction,0}};
#define boxvar_NBJacobian_getTmpFilterFunction MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_getTmpFilterFunction)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianNone(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_boolean _staticAsContinuous);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianNone(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _staticAsContinuous);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianNone,2,0) {(void*) boxptr_NBJacobian_jacobianNone,0}};
#define boxvar_NBJacobian_jacobianNone MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianNone)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianNumeric(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_boolean _staticAsContinuous);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianNumeric(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _staticAsContinuous);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianNumeric,2,0) {(void*) boxptr_NBJacobian_jacobianNumeric,0}};
#define boxvar_NBJacobian_jacobianNumeric MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianNumeric)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianSymbolicAdjoint(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_boolean _staticAsContinuous);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianSymbolicAdjoint(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _staticAsContinuous);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianSymbolicAdjoint,2,0) {(void*) boxptr_NBJacobian_jacobianSymbolicAdjoint,0}};
#define boxvar_NBJacobian_jacobianSymbolicAdjoint MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianSymbolicAdjoint)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_collectAdjointVarSlices(threadData_t *threadData, modelica_metatype _stmts, modelica_metatype __omcQ_24in_5FvarSlices);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_collectAdjointVarSlices,2,0) {(void*) boxptr_NBJacobian_collectAdjointVarSlices,0}};
#define boxvar_NBJacobian_collectAdjointVarSlices MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_collectAdjointVarSlices)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_generateAdjointForComponent(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _originalComp, modelica_metatype _diff_map, modelica_metatype _funcMap, modelica_boolean _scalarized, modelica_boolean _init, modelica_metatype _idx, modelica_string _contextName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_generateAdjointForComponent(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _originalComp, modelica_metatype _diff_map, modelica_metatype _funcMap, modelica_metatype _scalarized, modelica_metatype _init, modelica_metatype _idx, modelica_metatype _contextName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_generateAdjointForComponent,2,0) {(void*) boxptr_NBJacobian_generateAdjointForComponent,0}};
#define boxvar_NBJacobian_generateAdjointForComponent MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_generateAdjointForComponent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_generateAdjointComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _diff_map, modelica_metatype _funcMap, modelica_boolean _scalarized, modelica_boolean _staticAsContinuous, modelica_metatype _idx, modelica_string _contextName, modelica_metatype _seedCandidates, modelica_metatype _tmpVarCandidates, modelica_metatype *out_newTmpVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_generateAdjointComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _diff_map, modelica_metatype _funcMap, modelica_metatype _scalarized, modelica_metatype _staticAsContinuous, modelica_metatype _idx, modelica_metatype _contextName, modelica_metatype _seedCandidates, modelica_metatype _tmpVarCandidates, modelica_metatype *out_newTmpVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_generateAdjointComponent,2,0) {(void*) boxptr_NBJacobian_generateAdjointComponent,0}};
#define boxvar_NBJacobian_generateAdjointComponent MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_generateAdjointComponent)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBJacobian_isSupportedAdjointStrongComponent(threadData_t *threadData, modelica_metatype _comp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_isSupportedAdjointStrongComponent(threadData_t *threadData, modelica_metatype _comp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_isSupportedAdjointStrongComponent,2,0) {(void*) boxptr_NBJacobian_isSupportedAdjointStrongComponent,0}};
#define boxvar_NBJacobian_isSupportedAdjointStrongComponent MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_isSupportedAdjointStrongComponent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_populateDiffMap(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _globalDiffMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_populateDiffMap,2,0) {(void*) boxptr_NBJacobian_populateDiffMap,0}};
#define boxvar_NBJacobian_populateDiffMap MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_populateDiffMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getBaseTmpVarCandidates(threadData_t *threadData, modelica_metatype _partialVars, modelica_metatype _tmpPDerVars, modelica_metatype _diff_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_getBaseTmpVarCandidates,2,0) {(void*) boxptr_NBJacobian_getBaseTmpVarCandidates,0}};
#define boxvar_NBJacobian_getBaseTmpVarCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_getBaseTmpVarCandidates)
PROTECTED_FUNCTION_STATIC void omc_NBJacobian_addEntryToLPAMap(threadData_t *threadData, modelica_metatype _vptr, modelica_metatype _diff_map, modelica_metatype _loop_product_adjoint_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_addEntryToLPAMap,2,0) {(void*) boxptr_NBJacobian_addEntryToLPAMap,0}};
#define boxvar_NBJacobian_addEntryToLPAMap MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_addEntryToLPAMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_makeAdjointComponentFromRhs(threadData_t *threadData, modelica_metatype _lhsKey, modelica_metatype _rhsExpr, modelica_string _contextName, modelica_integer _eqIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_makeAdjointComponentFromRhs(threadData_t *threadData, modelica_metatype _lhsKey, modelica_metatype _rhsExpr, modelica_metatype _contextName, modelica_metatype _eqIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_makeAdjointComponentFromRhs,2,0) {(void*) boxptr_NBJacobian_makeAdjointComponentFromRhs,0}};
#define boxvar_NBJacobian_makeAdjointComponentFromRhs MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_makeAdjointComponentFromRhs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_accumulateAdjointForResidual(threadData_t *threadData, modelica_metatype _residual, modelica_metatype _seed, modelica_metatype _diff_map, modelica_metatype _funcMapIn, modelica_boolean _scalarized, modelica_metatype _adjoint_map_in);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_accumulateAdjointForResidual(threadData_t *threadData, modelica_metatype _residual, modelica_metatype _seed, modelica_metatype _diff_map, modelica_metatype _funcMapIn, modelica_metatype _scalarized, modelica_metatype _adjoint_map_in);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_accumulateAdjointForResidual,2,0) {(void*) boxptr_NBJacobian_accumulateAdjointForResidual,0}};
#define boxvar_NBJacobian_accumulateAdjointForResidual MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_accumulateAdjointForResidual)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_buildAdjointRhs(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _terms);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_buildAdjointRhs,2,0) {(void*) boxptr_NBJacobian_buildAdjointRhs,0}};
#define boxvar_NBJacobian_buildAdjointRhs MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_buildAdjointRhs)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBJacobian_sizeClassificationFromType(threadData_t *threadData, modelica_metatype _ty);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_sizeClassificationFromType(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_sizeClassificationFromType,2,0) {(void*) boxptr_NBJacobian_sizeClassificationFromType,0}};
#define boxvar_NBJacobian_sizeClassificationFromType MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_sizeClassificationFromType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianSymbolic(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_boolean _staticAsContinuous);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianSymbolic(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _staticAsContinuous);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianSymbolic,2,0) {(void*) boxptr_NBJacobian_jacobianSymbolic,0}};
#define boxvar_NBJacobian_jacobianSymbolic MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianSymbolic)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_compJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _full, modelica_metatype _funcMap, modelica_integer _kind, modelica_boolean *out_updated);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_compJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _kind, modelica_metatype *out_updated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_compJacobian,2,0) {(void*) boxptr_NBJacobian_compJacobian,0}};
#define boxvar_NBJacobian_compJacobian MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_compJacobian)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_partJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _funcMap, modelica_metatype _knowns, modelica_string _name, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_partJacobian,2,0) {(void*) boxptr_NBJacobian_partJacobian,0}};
#define boxvar_NBJacobian_partJacobian MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_partJacobian)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_partJacobianDynamicOptimization(threadData_t *threadData, modelica_metatype _part, modelica_metatype _all_knowns, modelica_string _name, modelica_fnptr _func, modelica_metatype _funcMap, modelica_metatype *out_MRF_jacobian, modelica_metatype *out_R0_jacobian);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_partJacobianDynamicOptimization,2,0) {(void*) boxptr_NBJacobian_partJacobianDynamicOptimization,0}};
#define boxvar_NBJacobian_partJacobianDynamicOptimization MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_partJacobianDynamicOptimization)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getR0PartialCandidates(threadData_t *threadData, modelica_metatype _part);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_getR0PartialCandidates,2,0) {(void*) boxptr_NBJacobian_getR0PartialCandidates,0}};
#define boxvar_NBJacobian_getR0PartialCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_getR0PartialCandidates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getMrfPartialCandidates(threadData_t *threadData, modelica_metatype _part);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_getMrfPartialCandidates,2,0) {(void*) boxptr_NBJacobian_getMrfPartialCandidates,0}};
#define boxvar_NBJacobian_getMrfPartialCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_getMrfPartialCandidates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getLfgPartialCandidates(threadData_t *threadData, modelica_metatype _part);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_getLfgPartialCandidates,2,0) {(void*) boxptr_NBJacobian_getLfgPartialCandidates,0}};
#define boxvar_NBJacobian_getLfgPartialCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_getLfgPartialCandidates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getSeedCandidatesDynamicOptimization(threadData_t *threadData, modelica_metatype _part, modelica_metatype _all_knowns, modelica_fnptr _filter);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_getSeedCandidatesDynamicOptimization,2,0) {(void*) boxptr_NBJacobian_getSeedCandidatesDynamicOptimization,0}};
#define boxvar_NBJacobian_getSeedCandidatesDynamicOptimization MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_getSeedCandidatesDynamicOptimization)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getOptimizableVars(threadData_t *threadData, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_getOptimizableVars,2,0) {(void*) boxptr_NBJacobian_getOptimizableVars,0}};
#define boxvar_NBJacobian_getOptimizableVars MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_getOptimizableVars)

static modelica_metatype closure0_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_algorithmToSSA(threadData_t *threadData, modelica_metatype _comp, modelica_metatype *out_replacements, modelica_metatype *out_newVars)
{
  modelica_metatype _ssaComp = NULL;
  modelica_metatype _replacements = NULL;
  modelica_metatype _newVars = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _alg = NULL;
  modelica_metatype _stmt = NULL;
  modelica_metatype _lhsCref = NULL;
  modelica_metatype _baseCref = NULL;
  modelica_metatype _ssaCref = NULL;
  modelica_integer _cnt;
  modelica_integer _idx;
  modelica_integer _lineIdx;
  modelica_metatype _ssaVarPtr = NULL;
  modelica_metatype _lhsExp = NULL;
  modelica_metatype _rhsExp = NULL;
  modelica_metatype _assignCount = NULL;
  modelica_metatype _ssaIdx = NULL;
  modelica_metatype _activeRepl = NULL;
  modelica_metatype _ssaStmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _replAcc = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _newVarsAcc = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _ssaEqnPtr = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ssaComp has no default value.
  // _replacements has no default value.
  // _newVars has no default value.
  // _eqn has no default value.
  // _alg has no default value.
  // _stmt has no default value.
  // _lhsCref has no default value.
  // _baseCref has no default value.
  // _ssaCref has no default value.
  // _cnt has no default value.
  // _idx has no default value.
  // _lineIdx has no default value.
  // _ssaVarPtr has no default value.
  // _lhsExp has no default value.
  // _rhsExp has no default value.
  _assignCount = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  _ssaIdx = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  _activeRepl = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ssaStmts = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _replAcc = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _newVarsAcc = tmpMeta3;
  // _ssaEqnPtr has no default value.



  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _comp;
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      for (; tmp7 < 2; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,1,3) == 0) goto tmp6_end;

          /* Pattern matching succeeded */
          _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))));

          /* Pattern-matching assignment */
          tmpMeta9 = _eqn;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,5) == 0) goto goto_5;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          _alg = tmpMeta10;

          {
            modelica_metatype _origStmt;
            for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _origStmt = MMC_CAR(tmpMeta11);
              { /* match expression */
                modelica_metatype tmp14_1;
                tmp14_1 = _origStmt;
                {
                  volatile mmc_switch_type tmp14;
                  int tmp15;
                  tmp14 = 0;
                  for (; tmp14 < 2; tmp14++) {
                    switch (MMC_SWITCH_CAST(tmp14)) {
                    case 0: {
                      modelica_metatype tmpMeta16;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,0,4) == 0) goto tmp13_end;

                      /* Pattern matching succeeded */
                      { /* match expression */
                        modelica_metatype tmp19_1;
                        tmp19_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origStmt), 2)));
                        {
                          volatile mmc_switch_type tmp19;
                          int tmp20;
                          tmp19 = 0;
                          for (; tmp19 < 2; tmp19++) {
                            switch (MMC_SWITCH_CAST(tmp19)) {
                            case 0: {
                              modelica_metatype tmpMeta21;
                              if (mmc__uniontype__metarecord__typedef__equal(tmp19_1,6,2) == 0) goto tmp18_end;
                              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp19_1), 3));
                              _lhsCref = tmpMeta21;
                              /* Pattern matching succeeded */
                              tmpMeta16 = _lhsCref;
                              goto tmp18_done;
                            }
                            case 1: {

                              /* Pattern matching succeeded */
                              tmpMeta16 = _OMC_LIT0;
                              goto tmp18_done;
                            }
                            }
                            goto tmp18_end;
                            tmp18_end: ;
                          }
                          goto goto_17;
                          goto_17:;
                          goto goto_12;
                          goto tmp18_done;
                          tmp18_done:;
                        }
                      }
                      _lhsCref = tmpMeta16;

                      if((!omc_NFComponentRef_isEmpty(threadData, _lhsCref)))
                      {
                        _baseCref = omc_NFComponentRef_stripSubscriptsAll(threadData, _lhsCref);

                        _cnt = mmc_unbox_integer(omc_UnorderedMap_getOrDefault(threadData, _baseCref, _assignCount, mmc_mk_integer(((modelica_integer) 0))));

                        omc_UnorderedMap_add(threadData, _baseCref, mmc_mk_integer(((modelica_integer) 1) + _cnt), _assignCount);
                      }
                      goto tmp13_done;
                    }
                    case 1: {

                      /* Pattern matching succeeded */
                      goto tmp13_done;
                    }
                    }
                    goto tmp13_end;
                    tmp13_end: ;
                  }
                  goto goto_12;
                  goto_12:;
                  goto goto_5;
                  goto tmp13_done;
                  tmp13_done:;
                }
              }
              ;
            }
          }

          _lineIdx = ((modelica_integer) 1);

          {
            modelica_metatype _origStmt;
            for (tmpMeta23 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))); !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
            {
              _origStmt = MMC_CAR(tmpMeta23);
              { /* match expression */
                modelica_metatype tmp27_1;
                tmp27_1 = _origStmt;
                {
                  volatile mmc_switch_type tmp27;
                  int tmp28;
                  tmp27 = 0;
                  for (; tmp27 < 2; tmp27++) {
                    switch (MMC_SWITCH_CAST(tmp27)) {
                    case 0: {
                      modelica_metatype tmpMeta29;
                      modelica_metatype tmpMeta30;
                      modelica_metatype tmpMeta36;
                      modelica_metatype tmpMeta37;
                      modelica_metatype tmpMeta38;
                      modelica_metatype tmpMeta39;
                      modelica_metatype tmpMeta40;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp27_1,0,4) == 0) goto tmp26_end;

                      /* Pattern matching succeeded */
                      tmpMeta29 = mmc_mk_box1(0, _activeRepl);
                      _rhsExp = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origStmt), 3))), (modelica_fnptr) mmc_mk_box2(0,closure0_NBReplacements_applySimpleExp,tmpMeta29));

                      _lhsExp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origStmt), 2)));

                      { /* match expression */
                        modelica_metatype tmp33_1;
                        tmp33_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origStmt), 2)));
                        {
                          volatile mmc_switch_type tmp33;
                          int tmp34;
                          tmp33 = 0;
                          for (; tmp33 < 2; tmp33++) {
                            switch (MMC_SWITCH_CAST(tmp33)) {
                            case 0: {
                              modelica_metatype tmpMeta35;
                              if (mmc__uniontype__metarecord__typedef__equal(tmp33_1,6,2) == 0) goto tmp32_end;
                              tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp33_1), 3));
                              _lhsCref = tmpMeta35;
                              /* Pattern matching succeeded */
                              tmpMeta30 = _lhsCref;
                              goto tmp32_done;
                            }
                            case 1: {

                              /* Pattern matching succeeded */
                              tmpMeta30 = _OMC_LIT0;
                              goto tmp32_done;
                            }
                            }
                            goto tmp32_end;
                            tmp32_end: ;
                          }
                          goto goto_31;
                          goto_31:;
                          goto goto_25;
                          goto tmp32_done;
                          tmp32_done:;
                        }
                      }
                      _lhsCref = tmpMeta30;

                      if((!omc_NFComponentRef_isEmpty(threadData, _lhsCref)))
                      {
                        _baseCref = omc_NFComponentRef_stripSubscriptsAll(threadData, _lhsCref);

                        if((mmc_unbox_integer(omc_UnorderedMap_getOrDefault(threadData, _baseCref, _assignCount, mmc_mk_integer(((modelica_integer) 1)))) > ((modelica_integer) 1)))
                        {
                          _idx = ((modelica_integer) 1) + mmc_unbox_integer(omc_UnorderedMap_getOrDefault(threadData, _baseCref, _ssaIdx, mmc_mk_integer(((modelica_integer) 0))));

                          omc_UnorderedMap_add(threadData, _baseCref, mmc_mk_integer(_idx), _ssaIdx);

                          _ssaVarPtr = omc_NBJacobian_makeSSAVar(threadData, _baseCref, _idx ,&_ssaCref);

                          tmpMeta36 = mmc_mk_cons(_ssaVarPtr, _newVarsAcc);
                          _newVarsAcc = tmpMeta36;

                          _ssaCref = omc_NFComponentRef_copySubscripts(threadData, _lhsCref, _ssaCref);

                          omc_UnorderedMap_add(threadData, _baseCref, omc_NFExpression_fromCref(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, _ssaCref), 0 /* false */), _activeRepl);

                          tmpMeta38 = mmc_mk_box2(0, omc_NFComponentRef_stripSubscriptsAll(threadData, _ssaCref), mmc_mk_integer(_lineIdx));
                          tmpMeta39 = mmc_mk_box2(0, _baseCref, tmpMeta38);
                          tmpMeta37 = mmc_mk_cons(tmpMeta39, _replAcc);
                          _replAcc = tmpMeta37;

                          _lhsExp = omc_NFExpression_fromCref(threadData, _ssaCref, 0 /* false */);
                        }
                      }
                      tmpMeta40 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, _lhsExp, _rhsExp, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origStmt), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origStmt), 5))));
                      tmpMeta24 = tmpMeta40;
                      goto tmp26_done;
                    }
                    case 1: {

                      /* Pattern matching succeeded */
                      tmpMeta24 = _origStmt;
                      goto tmp26_done;
                    }
                    }
                    goto tmp26_end;
                    tmp26_end: ;
                  }
                  goto goto_25;
                  goto_25:;
                  goto goto_5;
                  goto tmp26_done;
                  tmp26_done:;
                }
              }
              _stmt = tmpMeta24;

              tmpMeta41 = mmc_mk_cons(_stmt, _ssaStmts);
              _ssaStmts = tmpMeta41;

              _lineIdx = ((modelica_integer) 1) + _lineIdx;
            }
          }

          tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_alg), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[2] = listReverse(_ssaStmts);
          _alg = tmpMeta43;

          { /* match expression */
            modelica_metatype tmp47_1;
            tmp47_1 = _eqn;
            {
              volatile mmc_switch_type tmp47;
              int tmp48;
              tmp47 = 0;
              for (; tmp47 < 2; tmp47++) {
                switch (MMC_SWITCH_CAST(tmp47)) {
                case 0: {
                  modelica_metatype tmpMeta49;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp47_1,3,5) == 0) goto tmp46_end;

                  /* Pattern matching succeeded */
                  tmpMeta49 = MMC_TAGPTR(mmc_alloc_words(7));
                  memcpy(MMC_UNTAGPTR(tmpMeta49), MMC_UNTAGPTR(_eqn), 7*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta49))[3] = _alg;
                  _eqn = tmpMeta49;
                  tmpMeta44 = _eqn;
                  goto tmp46_done;
                }
                case 1: {

                  /* Pattern matching succeeded */
                  tmpMeta44 = _eqn;
                  goto tmp46_done;
                }
                }
                goto tmp46_end;
                tmp46_end: ;
              }
              goto goto_45;
              goto_45:;
              goto goto_5;
              goto tmp46_done;
              tmp46_done:;
            }
          }
          _eqn = tmpMeta44;

          _ssaEqnPtr = omc_Pointer_create(threadData, _eqn);
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp51;
            modelica_metatype tmpMeta52;
            modelica_metatype tmpMeta53;
            modelica_metatype tmpMeta54;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp55;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = listReverse(_newVarsAcc);
            tmpMeta52 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta52; /* defaultValue */
            tmp51 = &__omcQ_24tmpVar11;
            while(1) {
              tmp55 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp55--;
              }
              if (tmp55 == 0) {
                tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
                tmpMeta54 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _v, tmpMeta53);
                __omcQ_24tmpVar10 = tmpMeta54;
                *tmp51 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp51 = &MMC_CDR(*tmp51);
              } else if (tmp55 == 1) {
                break;
              } else {
                goto goto_5;
              }
            }
            *tmp51 = mmc_mk_nil();
            tmpMeta50 = __omcQ_24tmpVar11;
          }
          tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta57 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _ssaEqnPtr, tmpMeta56);
          tmpMeta58 = mmc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), tmpMeta50), tmpMeta57, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));
          tmpMeta[0+0] = tmpMeta58;
          tmpMeta[0+1] = listReverse(_replAcc);
          tmpMeta[0+2] = listReverse(_newVarsAcc);
          goto tmp6_done;
        }
        case 1: {

          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT6);
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
  _ssaComp = tmpMeta[0+0];
  _replacements = tmpMeta[0+1];
  _newVars = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_replacements) { *out_replacements = _replacements; }
  if (out_newVars) { *out_newVars = _newVars; }
  return _ssaComp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_makeSSAVar(threadData_t *threadData, modelica_metatype _baseCref, modelica_integer _idx, modelica_metatype *out_ssaCref)
{
  modelica_metatype _ssaVarPtr = NULL;
  modelica_metatype _ssaCref = NULL;
  modelica_metatype _origVarPtr = NULL;
  modelica_metatype _origVar = NULL;
  modelica_metatype _newNode = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ssaVarPtr has no default value.
  // _ssaCref has no default value.
  // _origVarPtr has no default value.
  // _origVar has no default value.
  // _newNode has no default value.
  // _ty has no default value.
  _origVarPtr = omc_NBVariable_getVarPointer(threadData, _baseCref, _OMC_LIT8);

  _origVar = omc_Pointer_access(threadData, _origVarPtr);

  _ty = omc_NFComponentRef_getSubscriptedType(threadData, _baseCref, 0 /* false */);

  tmpMeta1 = stringAppend(omc_NFComponentRef_firstName(threadData, _baseCref, 0 /* false */),_OMC_LIT9);
  tmpMeta2 = stringAppend(tmpMeta1,intString(_idx));
  tmpMeta3 = mmc_mk_box3(10, &NFInstNode_InstNode_VAR__NODE__desc, tmpMeta2, omc_Pointer_create(threadData, _OMC_LIT22));
  _newNode = tmpMeta3;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box6(3, &NFComponentRef_CREF__desc, _newNode, tmpMeta4, _ty, mmc_mk_integer(1), _OMC_LIT0);
  _ssaCref = tmpMeta5;

  tmpMeta7 = mmc_mk_box10(3, &NFBackendExtension_BackendInfo_BACKEND__INFO__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origVar), 11)))), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origVar), 11)))), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origVar), 11)))), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origVar), 11)))), 5))), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origVar), 11)))), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_origVar), 11)))), 10))));
  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_origVar), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[11] = tmpMeta7;
  _origVar = tmpMeta6;

  _ssaVarPtr = omc_NBVariable_makeVarPtrCyclic(threadData, _origVar, _ssaCref ,&_ssaCref);
  _return: OMC_LABEL_UNUSED
  if (out_ssaCref) { *out_ssaCref = _ssaCref; }
  return _ssaVarPtr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_makeSSAVar(threadData_t *threadData, modelica_metatype _baseCref, modelica_metatype _idx, modelica_metatype *out_ssaCref)
{
  modelica_integer tmp1;
  modelica_metatype _ssaVarPtr = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _ssaVarPtr = omc_NBJacobian_makeSSAVar(threadData, _baseCref, tmp1, out_ssaCref);
  /* skip box _ssaVarPtr; Pointer<NFVariable> */
  /* skip box _ssaCref; NFComponentRef */
  return _ssaVarPtr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_makeLinearAlgebraicLoop(threadData_t *threadData, modelica_metatype _itVarPtrs, modelica_metatype _resEqnPtrs, modelica_metatype _jac, modelica_boolean _mixed, modelica_boolean _homotopy)
{
  modelica_metatype _comp = NULL;
  modelica_integer _m1;
  modelica_integer _m2;
  modelica_metatype _itVars_s = NULL;
  modelica_metatype _res_s = NULL;
  modelica_metatype _tearingSet = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  _m1 = listLength(_itVarPtrs);
  _m2 = listLength(_resEqnPtrs);
  // _itVars_s has no default value.
  // _res_s has no default value.
  // _tearingSet has no default value.
  if((_m1 != _m2))
  {
    omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT24);

    MMC_THROW_INTERNAL();
  }

  {
    modelica_metatype __omcQ_24tmpVar13;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype __omcQ_24tmpVar12;
    modelica_integer tmp6;
    modelica_metatype _vp_loopVar = 0;
    modelica_metatype _vp;
    _vp_loopVar = _itVarPtrs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar13 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar13;
    while(1) {
      tmp6 = 1;
      if (!listEmpty(_vp_loopVar)) {
        _vp = MMC_CAR(_vp_loopVar);
        _vp_loopVar = MMC_CDR(_vp_loopVar);
        tmp6--;
      }
      if (tmp6 == 0) {
        tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta5 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _vp, tmpMeta4);
        __omcQ_24tmpVar12 = tmpMeta5;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar12,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp6 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar13;
  }
  _itVars_s = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar15;
    modelica_metatype* tmp8;
    modelica_metatype tmpMeta9;
    modelica_metatype tmpMeta10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar14;
    modelica_integer tmp12;
    modelica_metatype _ep_loopVar = 0;
    modelica_metatype _ep;
    _ep_loopVar = _resEqnPtrs;
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar15 = tmpMeta9; /* defaultValue */
    tmp8 = &__omcQ_24tmpVar15;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_ep_loopVar)) {
        _ep = MMC_CAR(_ep_loopVar);
        _ep_loopVar = MMC_CDR(_ep_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta11 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _ep, tmpMeta10);
        __omcQ_24tmpVar14 = tmpMeta11;
        *tmp8 = mmc_mk_cons(__omcQ_24tmpVar14,0);
        tmp8 = &MMC_CDR(*tmp8);
      } else if (tmp12 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp8 = mmc_mk_nil();
    tmpMeta7 = __omcQ_24tmpVar15;
  }
  _res_s = tmpMeta7;

  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta14 = mmc_mk_box5(3, &NBTearing_TEARING__SET__desc, _itVars_s, _res_s, listArray(tmpMeta13), _jac);
  _tearingSet = tmpMeta14;

  tmpMeta15 = mmc_mk_box8(9, &NBStrongComponent_ALGEBRAIC__LOOP__desc, mmc_mk_integer(((modelica_integer) -1)), _tearingSet, mmc_mk_none(), mmc_mk_boolean(1 /* true */), mmc_mk_boolean(_mixed), mmc_mk_boolean(_homotopy), mmc_mk_integer(3));
  _comp = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _comp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_makeLinearAlgebraicLoop(threadData_t *threadData, modelica_metatype _itVarPtrs, modelica_metatype _resEqnPtrs, modelica_metatype _jac, modelica_metatype _mixed, modelica_metatype _homotopy)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(_mixed);
  tmp2 = mmc_unbox_integer(_homotopy);
  _comp = omc_NBJacobian_makeLinearAlgebraicLoop(threadData, _itVarPtrs, _resEqnPtrs, _jac, tmp1, tmp2);
  /* skip box _comp; NBStrongComponent */
  return _comp;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NBJacobian_diffMapToString(threadData_t *threadData, modelica_metatype _map)
{
  modelica_string _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = omc_UnorderedMap_toString(threadData, _map, boxvar_NFComponentRef_toString, boxvar_NFComponentRef_toString, _OMC_LIT25, _OMC_LIT26);

  tmpMeta1 = stringAppend(_OMC_LIT27,_s);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  _s = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC void omc_NBJacobian_makeVarTraverse(threadData_t *threadData, modelica_metatype _var_ptr, modelica_string _name, modelica_metatype _vars_ptr, modelica_metatype _map, modelica_fnptr _makeVar, modelica_boolean _staticAsContinuous)
{
  modelica_metatype _var = NULL;
  modelica_metatype _diff = NULL;
  modelica_metatype _parent_name = NULL;
  modelica_metatype _diff_parent_name = NULL;
  modelica_metatype _diff_ptr = NULL;
  modelica_metatype _parent = NULL;
  modelica_metatype _diff_parent = NULL;
  modelica_metatype tmpMeta1;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = omc_Pointer_access(threadData, _var_ptr);
  // _diff has no default value.
  // _parent_name has no default value.
  // _diff_parent_name has no default value.
  // _diff_ptr has no default value.
  // _parent has no default value.
  // _diff_parent has no default value.
  if(omc_NBVariable_isContinuous(threadData, _var_ptr, _staticAsContinuous))
  {
    _diff = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _name ,&_diff_ptr) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _name ,&_diff_ptr);

    tmpMeta1 = mmc_mk_cons(_diff_ptr, omc_Pointer_access(threadData, _vars_ptr));
    omc_Pointer_update(threadData, _vars_ptr, tmpMeta1);

    omc_UnorderedMap_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _diff, _map);

    if((omc_NFComponentRef_hasSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))) && (!omc_UnorderedMap_contains(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))), _map))))
    {
      omc_UnorderedMap_add(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))), _diff, _map);
    }

    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = omc_NBVariable_getParent(threadData, _var_ptr);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            if (optionNone(tmp4_1)) goto tmp3_end;
            tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
            _parent = tmpMeta6;
            /* Pattern matching succeeded */
            _parent_name = omc_NBVariable_getVarName(threadData, _parent);

            { /* match expression */
              modelica_metatype tmp10_1;
              tmp10_1 = omc_UnorderedMap_get(threadData, _parent_name, _map);
              {
                volatile mmc_switch_type tmp10;
                int tmp11;
                tmp10 = 0;
                for (; tmp10 < 2; tmp10++) {
                  switch (MMC_SWITCH_CAST(tmp10)) {
                  case 0: {
                    modelica_metatype tmpMeta12;
                    if (optionNone(tmp10_1)) goto tmp9_end;
                    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 1));
                    _diff_parent_name = tmpMeta12;
                    /* Pattern matching succeeded */
                    tmpMeta7 = omc_NBVariable_getVarPointer(threadData, _diff_parent_name, _OMC_LIT29);
                    goto tmp9_done;
                  }
                  case 1: {

                    /* Pattern matching succeeded */
                    _diff_parent_name = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 2))), _parent_name, _name, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 1)))) (threadData, _parent_name, _name, NULL);

                    omc_UnorderedMap_add(threadData, _parent_name, _diff_parent_name, _map);
                    tmpMeta7 = omc_NBVariable_getVarPointer(threadData, _diff_parent_name, _OMC_LIT30);
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
            _diff_parent = tmpMeta7;

            omc_NBVariable_addRecordChild(threadData, _diff_parent, _diff_ptr);

            _diff_ptr = omc_NBVariable_setParent(threadData, _diff_ptr, _diff_parent);
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
        MMC_THROW_INTERNAL();
        goto tmp3_done;
        tmp3_done:;
      }
    }
    ;
  }
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBJacobian_makeVarTraverse(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _name, modelica_metatype _vars_ptr, modelica_metatype _map, modelica_fnptr _makeVar, modelica_metatype _staticAsContinuous)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_staticAsContinuous);
  omc_NBJacobian_makeVarTraverse(threadData, _var_ptr, _name, _vars_ptr, _map, _makeVar, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_fnptr omc_NBJacobian_getTmpFilterFunction(threadData_t *threadData, modelica_integer _jacType)
{
  modelica_fnptr _func;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_jacType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isStateDerivative;
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isResidual;
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isResidual;
          goto tmp3_done;
        }
        case 4: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isResidual;
          goto tmp3_done;
        }
        case 5: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isLfgFunction;
          goto tmp3_done;
        }
        case 6: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isMrfFunction;
          goto tmp3_done;
        }
        case 7: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isInitialConstraint;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;

          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT31,omc_NBJacobian_jacobianTypeString(threadData, (modelica_integer)_jacType));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta5);
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
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  return _func;
}
PROTECTED_FUNCTION_STATIC modelica_fnptr boxptr_NBJacobian_getTmpFilterFunction(threadData_t *threadData, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_fnptr _func;
  tmp1 = mmc_unbox_integer(_jacType);
  _func = omc_NBJacobian_getTmpFilterFunction(threadData, tmp1);
  return _func;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianNone(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_boolean _staticAsContinuous)
{
  modelica_metatype _jacobian = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  _jacobian = mmc_mk_none();
  _return: OMC_LABEL_UNUSED
  return _jacobian;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianNone(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _staticAsContinuous)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  tmp2 = mmc_unbox_integer(_staticAsContinuous);
  _jacobian = omc_NBJacobian_jacobianNone(threadData, _name, tmp1, _seedCandidates, _partialCandidates, _equations, _strongComponents, _full, _funcMap, tmp2);
  /* skip box _jacobian; Option<NBackendDAE> */
  return _jacobian;
}

static modelica_metatype closure1_NBVariable_isContinuous(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype staticAsContinuous = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isContinuous(thData, var_ptr, staticAsContinuous);
}static void closure2_NBJacobian_makeVarTraverse(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype vars_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_fnptr makeVar = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype staticAsContinuous = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  boxptr_NBJacobian_makeVarTraverse(thData, var_ptr, name, vars_ptr, map, makeVar, staticAsContinuous);
}static modelica_metatype closure3_NBVariable_makePDerVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_string name, modelica_metatype tmp8)
{
  modelica_metatype isTmp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_makePDerVar(thData, $in_cref, name, isTmp, tmp8);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianNumeric(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_boolean _staticAsContinuous)
{
  modelica_metatype _jacobian = NULL;
  modelica_metatype _varDataJac = NULL;
  modelica_metatype _adjacencyVars = NULL;
  modelica_metatype _sparsity = NULL;
  modelica_metatype _fullLocal = NULL;
  modelica_metatype _res_vars = NULL;
  modelica_metatype _tmp_vars = NULL;
  modelica_metatype _seed_vars_d = NULL;
  modelica_metatype _pDer_vars_d = NULL;
  modelica_fnptr _func;
  modelica_metatype _seed_vars_ptr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _pDer_vars_ptr = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _diff_map = NULL;
  modelica_metatype _seed_set = NULL;
  modelica_metatype _pder_set = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  // _varDataJac has no default value.
  // _adjacencyVars has no default value.
  // _sparsity has no default value.
  // _fullLocal has no default value.
  // _res_vars has no default value.
  // _tmp_vars has no default value.
  // _seed_vars_d has no default value.
  // _pDer_vars_d has no default value.
  _func = omc_NBJacobian_getTmpFilterFunction(threadData, (modelica_integer)_jacType);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _seed_vars_ptr = omc_Pointer_create(threadData, tmpMeta1);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _pDer_vars_ptr = omc_Pointer_create(threadData, tmpMeta2);
  _diff_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  _seed_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _pder_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _res_vars = omc_List_splitOnTrue(threadData, omc_NBVariable_VariablePointers_toList(threadData, _partialCandidates), ((modelica_fnptr) _func) ,&_tmp_vars);

  tmpMeta3 = mmc_mk_box1(0, mmc_mk_boolean(_staticAsContinuous));
  _tmp_vars = omc_List_splitOnTrue(threadData, _tmp_vars, (modelica_fnptr) mmc_mk_box2(0,closure1_NBVariable_isContinuous,tmpMeta3), NULL);

  tmpMeta4 = mmc_mk_box5(0, _name, _seed_vars_ptr, _diff_map, boxvar_NBVariable_makeSeedVar, mmc_mk_boolean(_staticAsContinuous));
  omc_NBVariable_VariablePointers_mapPtr(threadData, _seedCandidates, (modelica_fnptr) mmc_mk_box2(0,closure2_NBJacobian_makeVarTraverse,tmpMeta4));

  _seed_vars_d = omc_Pointer_access(threadData, _seed_vars_ptr);

  {
    modelica_metatype _v;
    for (tmpMeta5 = omc_NBVariable_VariablePointers_toList(threadData, _seedCandidates); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _v = MMC_CAR(tmpMeta5);
      if(omc_NBVariable_isContinuous(threadData, _v, _staticAsContinuous))
      {
        omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _v), _seed_set);

        omc_UnorderedSet_add(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, omc_NBVariable_getVarName(threadData, _v)), _seed_set);
      }
    }
  }

  {
    modelica_metatype _v;
    for (tmpMeta7 = _res_vars; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _v = MMC_CAR(tmpMeta7);
      omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _v), _pder_set);

      tmpMeta9 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
      omc_NBJacobian_makeVarTraverse(threadData, _v, _name, _pDer_vars_ptr, _diff_map, (modelica_fnptr) mmc_mk_box2(0,closure3_NBVariable_makePDerVar,tmpMeta9), _staticAsContinuous);
    }
  }

  _pDer_vars_d = omc_Pointer_access(threadData, _pDer_vars_ptr);

  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta14 = mmc_mk_box10(4, &NBVariable_VarData_VAR__DATA__JAC__desc, omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta11, 0 /* false */), _partialCandidates, omc_NBVariable_VariablePointers_fromList(threadData, _seed_vars_d, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta12, 0 /* false */), _partialCandidates, omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta13, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _pDer_vars_d, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _tmp_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _seed_vars_d, 0 /* false */));
  _varDataJac = tmpMeta14;

  if(isSome(_strongComponents))
  {
    _adjacencyVars = omc_NBVariable_VariablePointers_clone(threadData, _seedCandidates, 1 /* true */);

    _adjacencyVars = omc_NBVariable_VariablePointers_addList(threadData, _tmp_vars, _adjacencyVars);

    if(((modelica_integer)_jacType == 1))
    {
      _adjacencyVars = omc_NBVariable_VariablePointers_addList(threadData, _res_vars, _adjacencyVars);
    }

    {
      modelica_metatype __omcQ_24tmpVar17;
      modelica_metatype* tmp16;
      modelica_metatype tmpMeta17;
      modelica_metatype __omcQ_24tmpVar16;
      modelica_integer tmp18;
      modelica_metatype _comp_loopVar = 0;
      modelica_metatype _comp;
      _comp_loopVar = arrayList(omc_Util_getOption(threadData, _strongComponents));
      tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar17 = tmpMeta17; /* defaultValue */
      tmp16 = &__omcQ_24tmpVar17;
      while(1) {
        tmp18 = 1;
        if (!listEmpty(_comp_loopVar)) {
          _comp = MMC_CAR(_comp_loopVar);
          _comp_loopVar = MMC_CDR(_comp_loopVar);
          tmp18--;
        }
        if (tmp18 == 0) {
          __omcQ_24tmpVar16 = omc_NBStrongComponent_getEquations(threadData, _comp);
          *tmp16 = mmc_mk_cons(__omcQ_24tmpVar16,0);
          tmp16 = &MMC_CDR(*tmp16);
        } else if (tmp18 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp16 = mmc_mk_nil();
      tmpMeta15 = __omcQ_24tmpVar17;
    }
    _fullLocal = omc_NBAdjacency_Matrix_createFull(threadData, _adjacencyVars, omc_NBEquation_EquationPointers_fromList(threadData, omc_List_flatten(threadData, tmpMeta15)), 1);

    _sparsity = omc_NBAdjacency_Matrix_fullToSparsity(threadData, _fullLocal, arrayList(omc_Util_getOption(threadData, _strongComponents)), _seed_set, _pder_set, _diff_map, 0 /* false */);
  }
  else
  {
    omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT33);

    MMC_THROW_INTERNAL();
  }

  tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta20 = mmc_mk_box7(4, &NBackendDAE_JACOBIAN__desc, _name, mmc_mk_integer((modelica_integer)_jacType), _varDataJac, listArray(tmpMeta19), _sparsity, mmc_mk_boolean(0 /* false */));
  _jacobian = mmc_mk_some(tmpMeta20);
  _return: OMC_LABEL_UNUSED
  return _jacobian;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianNumeric(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _staticAsContinuous)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  tmp2 = mmc_unbox_integer(_staticAsContinuous);
  _jacobian = omc_NBJacobian_jacobianNumeric(threadData, _name, tmp1, _seedCandidates, _partialCandidates, _equations, _strongComponents, _full, _funcMap, tmp2);
  /* skip box _jacobian; Option<NBackendDAE> */
  return _jacobian;
}

static modelica_metatype closure4_NBVariable_makePDerVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_string name, modelica_metatype tmp19)
{
  modelica_metatype isTmp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_makePDerVar(thData, $in_cref, name, isTmp, tmp19);
}static modelica_metatype closure5_NBVariable_isContinuous(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype staticAsContinuous = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isContinuous(thData, var_ptr, staticAsContinuous);
}static modelica_metatype closure6_NBVariable_makePDerVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_string name, modelica_metatype tmp35)
{
  modelica_metatype isTmp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_makePDerVar(thData, $in_cref, name, isTmp, tmp35);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianSymbolicAdjoint(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_boolean _staticAsContinuous)
{
  modelica_metatype _jacobian = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _primalComps = NULL;
  modelica_metatype _diffed_comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _seed_vars_ptr = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _pDer_vars_ptr = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _diff_map = NULL;
  modelica_metatype _idx = NULL;
  modelica_metatype _all_vars = NULL;
  modelica_metatype _unknown_vars = NULL;
  modelica_metatype _aux_vars = NULL;
  modelica_metatype _alias_vars = NULL;
  modelica_metatype _depend_vars = NULL;
  modelica_metatype _res_vars = NULL;
  modelica_metatype _tmp_vars = NULL;
  modelica_metatype _seed_vars = NULL;
  modelica_metatype _old_res_vars = NULL;
  modelica_metatype _baseTmpVarCandidates = NULL;
  modelica_metatype _varDataJac = NULL;
  modelica_metatype _adjacencyVars = NULL;
  modelica_metatype _fullLocal = NULL;
  modelica_metatype _sparsity = NULL;
  modelica_metatype _seed_set = NULL;
  modelica_metatype _pder_set = NULL;
  modelica_string _newName = NULL;
  modelica_fnptr _func;
  modelica_metatype _compAdjComps = NULL;
  modelica_metatype _compNewVars = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
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
  modelica_metatype tmpMeta62;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  // _comps has no default value.
  // _primalComps has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _diffed_comps = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _seed_vars_ptr = omc_Pointer_create(threadData, tmpMeta2);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _pDer_vars_ptr = omc_Pointer_create(threadData, tmpMeta3);
  _diff_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  _idx = omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 0)));
  // _all_vars has no default value.
  // _unknown_vars has no default value.
  // _aux_vars has no default value.
  // _alias_vars has no default value.
  // _depend_vars has no default value.
  // _res_vars has no default value.
  // _tmp_vars has no default value.
  // _seed_vars has no default value.
  // _old_res_vars has no default value.
  // _baseTmpVarCandidates has no default value.
  // _varDataJac has no default value.
  // _adjacencyVars has no default value.
  // _fullLocal has no default value.
  // _sparsity has no default value.
  _seed_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _pder_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  // _newName has no default value.
  _func = omc_NBJacobian_getTmpFilterFunction(threadData, (modelica_integer)_jacType);
  // _compAdjComps has no default value.
  // _compNewVars has no default value.
  tmpMeta4 = stringAppend(_name,_OMC_LIT34);
  _newName = tmpMeta4;

  if(isSome(_strongComponents))
  {
    {
      modelica_metatype __omcQ_24tmpVar19;
      modelica_metatype* tmp6;
      modelica_metatype tmpMeta7;
      modelica_metatype __omcQ_24tmpVar18;
      modelica_integer tmp8;
      modelica_metatype _comp_loopVar = 0;
      modelica_integer tmp9;
      modelica_metatype _comp;
      _comp_loopVar = omc_Util_getOption(threadData, _strongComponents);
      tmp9 = 1;
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar19 = tmpMeta7; /* defaultValue */
      tmp6 = &__omcQ_24tmpVar19;
      while(1) {
        tmp8 = 1;
        while (tmp9 <= arrayLength(_comp_loopVar)) {
          _comp = arrayGet(_comp_loopVar, tmp9++);
          if ((!omc_NBStrongComponent_isDiscrete(threadData, _comp))) {
            tmp8--;
            break;
          }
        }
        if (tmp8 == 0) {
          __omcQ_24tmpVar18 = _comp;
          *tmp6 = mmc_mk_cons(__omcQ_24tmpVar18,0);
          tmp6 = &MMC_CDR(*tmp6);
        } else if (tmp8 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp6 = mmc_mk_nil();
      tmpMeta5 = __omcQ_24tmpVar19;
    }
    _comps = tmpMeta5;

    _primalComps = _comps;

    {
      modelica_metatype _c;
      for (tmpMeta10 = _comps; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
      {
        _c = MMC_CAR(tmpMeta10);
        if((!omc_NBJacobian_isSupportedAdjointStrongComponent(threadData, _c)))
        {
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT38);

          MMC_THROW_INTERNAL();
        }

        if(omc_Flags_isSet(threadData, _OMC_LIT43))
        {
          tmpMeta11 = stringAppend(_OMC_LIT39,omc_NBStrongComponent_toString(threadData, _c, ((modelica_integer) -1)));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT40);
          fputs(MMC_STRINGDATA(tmpMeta12),stdout);
        }
      }
    }
  }
  else
  {
    omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT36);

    MMC_THROW_INTERNAL();
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT43))
  {
    tmpMeta14 = stringAppend(_OMC_LIT44,omc_NBVariable_VariablePointers_toString(threadData, _seedCandidates, _OMC_LIT45, mmc_mk_none(), 1 /* true */));
    tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT40);
    fputs(MMC_STRINGDATA(tmpMeta15),stdout);

    tmpMeta16 = stringAppend(_OMC_LIT46,omc_NBVariable_VariablePointers_toString(threadData, _partialCandidates, _OMC_LIT47, mmc_mk_none(), 1 /* true */));
    tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT40);
    fputs(MMC_STRINGDATA(tmpMeta17),stdout);
  }

  {
    modelica_metatype _v;
    for (tmpMeta18 = omc_NBVariable_VariablePointers_toList(threadData, _seedCandidates); !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
    {
      _v = MMC_CAR(tmpMeta18);
      tmpMeta20 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
      omc_NBJacobian_makeVarTraverse(threadData, _v, _newName, _pDer_vars_ptr, _diff_map, (modelica_fnptr) mmc_mk_box2(0,closure4_NBVariable_makePDerVar,tmpMeta20), _staticAsContinuous);

      if(omc_NBVariable_isContinuous(threadData, _v, _staticAsContinuous))
      {
        omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _v), _seed_set);
      }
    }
  }

  _res_vars = listReverse(omc_Pointer_access(threadData, _pDer_vars_ptr));

  _old_res_vars = omc_List_splitOnTrue(threadData, omc_NBVariable_VariablePointers_toList(threadData, _partialCandidates), ((modelica_fnptr) _func) ,&_tmp_vars);

  tmpMeta22 = mmc_mk_box1(0, mmc_mk_boolean(_staticAsContinuous));
  _tmp_vars = omc_List_splitOnTrue(threadData, _tmp_vars, (modelica_fnptr) mmc_mk_box2(0,closure5_NBVariable_isContinuous,tmpMeta22), NULL);

  {
    modelica_metatype _v;
    for (tmpMeta23 = _old_res_vars; !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
    {
      _v = MMC_CAR(tmpMeta23);
      omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _v), _pder_set);
    }
  }

  {
    modelica_metatype _v;
    for (tmpMeta25 = _old_res_vars; !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
    {
      _v = MMC_CAR(tmpMeta25);
      omc_NBJacobian_makeVarTraverse(threadData, _v, _newName, _seed_vars_ptr, _diff_map, boxvar_NBVariable_makeSeedVar, _staticAsContinuous);
    }
  }

  _seed_vars = listReverse(omc_Pointer_access(threadData, _seed_vars_ptr));

  if(omc_Flags_isSet(threadData, _OMC_LIT43))
  {
    tmpMeta27 = stringAppend(_OMC_LIT48,omc_NBVariable_VariablePointers_toString(threadData, omc_NBVariable_VariablePointers_fromList(threadData, _seed_vars, 0 /* false */), _OMC_LIT49, mmc_mk_none(), 1 /* true */));
    tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT40);
    fputs(MMC_STRINGDATA(tmpMeta28),stdout);

    tmpMeta29 = stringAppend(_OMC_LIT50,omc_NBVariable_VariablePointers_toString(threadData, omc_NBVariable_VariablePointers_fromList(threadData, _res_vars, 0 /* false */), _OMC_LIT51, mmc_mk_none(), 1 /* true */));
    tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT40);
    fputs(MMC_STRINGDATA(tmpMeta30),stdout);

    tmpMeta31 = stringAppend(_OMC_LIT52,omc_NBVariable_VariablePointers_toString(threadData, omc_NBVariable_VariablePointers_fromList(threadData, _tmp_vars, 0 /* false */), _OMC_LIT53, mmc_mk_none(), 1 /* true */));
    tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT40);
    fputs(MMC_STRINGDATA(tmpMeta32),stdout);
  }

  tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
  _pDer_vars_ptr = omc_Pointer_create(threadData, tmpMeta33);

  {
    modelica_metatype _v;
    for (tmpMeta34 = _tmp_vars; !listEmpty(tmpMeta34); tmpMeta34=MMC_CDR(tmpMeta34))
    {
      _v = MMC_CAR(tmpMeta34);
      tmpMeta36 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
      omc_NBJacobian_makeVarTraverse(threadData, _v, _newName, _pDer_vars_ptr, _diff_map, (modelica_fnptr) mmc_mk_box2(0,closure6_NBVariable_makePDerVar,tmpMeta36), _staticAsContinuous);
    }
  }

  _tmp_vars = omc_Pointer_access(threadData, _pDer_vars_ptr);

  _baseTmpVarCandidates = omc_NBJacobian_getBaseTmpVarCandidates(threadData, omc_NBVariable_VariablePointers_toList(threadData, _partialCandidates), _tmp_vars, _diff_map);

  if(omc_Flags_isSet(threadData, _OMC_LIT43))
  {
    tmpMeta38 = stringAppend(_OMC_LIT54,omc_NBJacobian_diffMapToString(threadData, _diff_map));
    tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT40);
    fputs(MMC_STRINGDATA(tmpMeta39),stdout);
  }

  {
    modelica_metatype _comp;
    for (tmpMeta40 = _primalComps; !listEmpty(tmpMeta40); tmpMeta40=MMC_CDR(tmpMeta40))
    {
      _comp = MMC_CAR(tmpMeta40);
      _compAdjComps = omc_NBJacobian_generateAdjointComponent(threadData, _comp, _diff_map, _funcMap, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_seedCandidates), 4)))), _staticAsContinuous, _idx, _newName, _seedCandidates, _baseTmpVarCandidates ,&_compNewVars);

      {
        modelica_metatype _ac;
        for (tmpMeta41 = _compAdjComps; !listEmpty(tmpMeta41); tmpMeta41=MMC_CDR(tmpMeta41))
        {
          _ac = MMC_CAR(tmpMeta41);
          tmpMeta42 = mmc_mk_cons(_ac, _diffed_comps);
          _diffed_comps = tmpMeta42;
        }
      }

      {
        modelica_metatype _v;
        for (tmpMeta44 = _compNewVars; !listEmpty(tmpMeta44); tmpMeta44=MMC_CDR(tmpMeta44))
        {
          _v = MMC_CAR(tmpMeta44);
          tmpMeta45 = mmc_mk_cons(_v, _tmp_vars);
          _tmp_vars = tmpMeta45;
        }
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT43))
      {
        {
          modelica_metatype _ac;
          for (tmpMeta47 = _compAdjComps; !listEmpty(tmpMeta47); tmpMeta47=MMC_CDR(tmpMeta47))
          {
            _ac = MMC_CAR(tmpMeta47);
            tmpMeta48 = stringAppend(_OMC_LIT55,omc_NBStrongComponent_toString(threadData, _ac, ((modelica_integer) -1)));
            tmpMeta49 = stringAppend(tmpMeta48,_OMC_LIT40);
            fputs(MMC_STRINGDATA(tmpMeta49),stdout);
          }
        }
      }
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT43))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT56),stdout);

    {
      modelica_metatype _comp;
      for (tmpMeta52 = _diffed_comps; !listEmpty(tmpMeta52); tmpMeta52=MMC_CDR(tmpMeta52))
      {
        _comp = MMC_CAR(tmpMeta52);
        tmpMeta53 = stringAppend(omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)),_OMC_LIT40);
        fputs(MMC_STRINGDATA(tmpMeta53),stdout);
      }
    }
  }

  _unknown_vars = listAppend(_res_vars, _tmp_vars);

  _all_vars = _unknown_vars;

  _seed_vars = omc_Pointer_access(threadData, _seed_vars_ptr);

  _aux_vars = _seed_vars;

  tmpMeta55 = MMC_REFSTRUCTLIT(mmc_nil);
  _alias_vars = tmpMeta55;

  tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
  _depend_vars = tmpMeta56;

  tmpMeta57 = mmc_mk_box10(4, &NBVariable_VarData_VAR__DATA__JAC__desc, omc_NBVariable_VariablePointers_fromList(threadData, _all_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _unknown_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _aux_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _alias_vars, 0 /* false */), _partialCandidates, omc_NBVariable_VariablePointers_fromList(threadData, _depend_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _res_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _tmp_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _seed_vars, 0 /* false */));
  _varDataJac = tmpMeta57;

  _adjacencyVars = omc_NBVariable_VariablePointers_clone(threadData, _seedCandidates, 1 /* true */);

  _adjacencyVars = omc_NBVariable_VariablePointers_addList(threadData, _baseTmpVarCandidates, _adjacencyVars);

  if(((modelica_integer)_jacType == 1))
  {
    _adjacencyVars = omc_NBVariable_VariablePointers_addList(threadData, omc_NBVariable_VariablePointers_toList(threadData, _partialCandidates), _adjacencyVars);
  }

  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp59;
    modelica_metatype tmpMeta60;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp61;
    modelica_metatype _comp_loopVar = 0;
    modelica_metatype _comp;
    _comp_loopVar = _comps;
    tmpMeta60 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta60; /* defaultValue */
    tmp59 = &__omcQ_24tmpVar21;
    while(1) {
      tmp61 = 1;
      if (!listEmpty(_comp_loopVar)) {
        _comp = MMC_CAR(_comp_loopVar);
        _comp_loopVar = MMC_CDR(_comp_loopVar);
        tmp61--;
      }
      if (tmp61 == 0) {
        __omcQ_24tmpVar20 = omc_NBStrongComponent_getEquations(threadData, _comp);
        *tmp59 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp59 = &MMC_CDR(*tmp59);
      } else if (tmp61 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp59 = mmc_mk_nil();
    tmpMeta58 = __omcQ_24tmpVar21;
  }
  _fullLocal = omc_NBAdjacency_Matrix_createFull(threadData, _adjacencyVars, omc_NBEquation_EquationPointers_fromList(threadData, omc_List_flatten(threadData, tmpMeta58)), 1);

  _sparsity = omc_NBAdjacency_Matrix_fullToSparsity(threadData, _fullLocal, _comps, _seed_set, _pder_set, _diff_map, 1 /* true */);

  tmpMeta62 = mmc_mk_box7(4, &NBackendDAE_JACOBIAN__desc, _newName, mmc_mk_integer((modelica_integer)_jacType), _varDataJac, listArray(_diffed_comps), _sparsity, mmc_mk_boolean(1 /* true */));
  _jacobian = mmc_mk_some(tmpMeta62);
  _return: OMC_LABEL_UNUSED
  return _jacobian;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianSymbolicAdjoint(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _staticAsContinuous)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  tmp2 = mmc_unbox_integer(_staticAsContinuous);
  _jacobian = omc_NBJacobian_jacobianSymbolicAdjoint(threadData, _name, tmp1, _seedCandidates, _partialCandidates, _equations, _strongComponents, _full, _funcMap, tmp2);
  /* skip box _jacobian; Option<NBackendDAE> */
  return _jacobian;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_collectAdjointVarSlices(threadData_t *threadData, modelica_metatype _stmts, modelica_metatype __omcQ_24in_5FvarSlices)
{
  modelica_metatype _varSlices = NULL;
  modelica_metatype _vPtr = NULL;
  modelica_metatype _baseCref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _varSlices = __omcQ_24in_5FvarSlices;
  // _vPtr has no default value.
  // _baseCref has no default value.
  {
    modelica_metatype _s;
    for (tmpMeta1 = _stmts; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _s;
        {
          volatile mmc_switch_type tmp4;
          int tmp5;
          tmp4 = 0;
          for (; tmp4 < 4; tmp4++) {
            switch (MMC_SWITCH_CAST(tmp4)) {
            case 0: {
              modelica_metatype tmpMeta6;
              if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
              tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;

              /* Pattern matching succeeded */
              _baseCref = omc_NFComponentRef_stripSubscriptsAll(threadData, omc_NFExpression_toCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 2)))));

              { /* matchcontinue expression */
                {
                  volatile mmc_switch_type tmp9;
                  int tmp10;
                  tmp9 = 0;
                  MMC_TRY_INTERNAL(mmc_jumper)
                  tmp8_top:
                  threadData->mmc_jumper = &new_mmc_jumper;
                  for (; tmp9 < 2; tmp9++) {
                    switch (MMC_SWITCH_CAST(tmp9)) {
                    case 0: {
                      modelica_metatype tmpMeta11;
                      modelica_metatype tmpMeta12;
                      modelica_metatype tmpMeta13;
                      /* Pattern matching succeeded */
                      _vPtr = omc_NBVariable_getVarPointer(threadData, _baseCref, _OMC_LIT57);

                      tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta13 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _vPtr, tmpMeta12);
                      tmpMeta11 = mmc_mk_cons(tmpMeta13, _varSlices);
                      _varSlices = tmpMeta11;
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
                  tmp8_done:
                  (void)tmp9;
                  MMC_RESTORE_INTERNAL(mmc_jumper);
                  goto tmp8_done2;
                  goto_7:;
                  MMC_CATCH_INTERNAL(mmc_jumper);
                  if (++tmp9 < 2) {
                    goto tmp8_top;
                  }
                  goto goto_2;
                  tmp8_done2:;
                }
              }
              ;
              goto tmp3_done;
            }
            case 1: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;

              /* Pattern matching succeeded */
              _varSlices = omc_NBJacobian_collectAdjointVarSlices(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 4))), _varSlices);
              goto tmp3_done;
            }
            case 2: {
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;

              /* Pattern matching succeeded */
              {
                modelica_metatype _branch;
                for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 2))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
                {
                  _branch = MMC_CAR(tmpMeta14);
                  _varSlices = omc_NBJacobian_collectAdjointVarSlices(threadData, omc_Util_tuple22(threadData, _branch), _varSlices);
                }
              }
              goto tmp3_done;
            }
            case 3: {

              /* Pattern matching succeeded */
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
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _varSlices;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_generateAdjointForComponent(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _originalComp, modelica_metatype _diff_map, modelica_metatype _funcMap, modelica_boolean _scalarized, modelica_boolean _init, modelica_metatype _idx, modelica_string _contextName)
{
  modelica_metatype _adjointComps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _fresh_adjoint_map = NULL;
  modelica_metatype _diffArgs = NULL;
  modelica_metatype _adjStmts = NULL;
  modelica_metatype _eqPtr = NULL;
  modelica_metatype _adjVarSlices = NULL;
  modelica_metatype _adjVarCref = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _adjointComps = tmpMeta1;
  // _fresh_adjoint_map has no default value.
  // _diffArgs has no default value.
  // _adjStmts has no default value.
  // _eqPtr has no default value.
  // _adjVarSlices has no default value.
  // _adjVarCref has no default value.
  _fresh_adjoint_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 16));

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box10(3, &NBDifferentiate_DifferentiationArguments_DIFFERENTIATION__ARGUMENTS__desc, _OMC_LIT0, tmpMeta2, mmc_mk_some(_diff_map), mmc_mk_integer(4), _funcMap, mmc_mk_boolean(_scalarized), mmc_mk_some(_fresh_adjoint_map), _OMC_LIT59, mmc_mk_boolean(1 /* true */));
  _diffArgs = tmpMeta3;

  _diffArgs = omc_NBDifferentiate_differentiateEquationAdjoint(threadData, _eq, _diffArgs ,&_adjStmts);

  if((!listEmpty(_adjStmts)))
  {
    _eqPtr = omc_NBEquation_Equation_makeAlgorithm(threadData, _adjStmts, _init);

    omc_NBEquation_Equation_createName(threadData, _eqPtr, _idx, _contextName);

    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    _adjVarSlices = listReverse(omc_NBJacobian_collectAdjointVarSlices(threadData, _adjStmts, tmpMeta4));

    { /* match expression */
      modelica_metatype tmp8_1;
      tmp8_1 = _originalComp;
      {
        int tmp8;
        {
          switch (MMC_SWITCH_CAST(valueConstructor(tmp8_1))) {
          case 5: {

            /* Pattern matching succeeded */
            tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_originalComp), 2)));
            goto tmp7_done;
          }
          case 6: {

            /* Pattern matching succeeded */
            tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_originalComp), 2)));
            goto tmp7_done;
          }
          case 7: {

            /* Pattern matching succeeded */
            tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_originalComp), 2)));
            goto tmp7_done;
          }
          default:
          tmp7_default: OMC_LABEL_UNUSED; {

            /* Pattern matching succeeded */
            tmpMeta5 = _OMC_LIT0;
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
    _adjVarCref = tmpMeta5;

    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta11 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqPtr, tmpMeta10);
    tmpMeta12 = mmc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, _adjVarSlices, tmpMeta11, mmc_mk_integer(2));
    tmpMeta9 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
    _adjointComps = tmpMeta9;
  }
  _return: OMC_LABEL_UNUSED
  return _adjointComps;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_generateAdjointForComponent(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _originalComp, modelica_metatype _diff_map, modelica_metatype _funcMap, modelica_metatype _scalarized, modelica_metatype _init, modelica_metatype _idx, modelica_metatype _contextName)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _adjointComps = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_scalarized);
  tmp2 = mmc_unbox_integer(_init);
  _adjointComps = omc_NBJacobian_generateAdjointForComponent(threadData, _eq, _originalComp, _diff_map, _funcMap, tmp1, tmp2, _idx, _contextName);
  /* skip box _adjointComps; list<NBStrongComponent> */
  return _adjointComps;
}

static modelica_metatype closure7_NBVariable_makePDerVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_string name, modelica_metatype tmp69)
{
  modelica_metatype isTmp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_makePDerVar(thData, $in_cref, name, isTmp, tmp69);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_generateAdjointComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _diff_map, modelica_metatype _funcMap, modelica_boolean _scalarized, modelica_boolean _staticAsContinuous, modelica_metatype _idx, modelica_string _contextName, modelica_metatype _seedCandidates, modelica_metatype _tmpVarCandidates, modelica_metatype *out_newTmpVars)
{
  modelica_metatype _adjointComps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _newTmpVars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _c_noalias = NULL;
  modelica_metatype _fresh_adjoint_map = NULL;
  modelica_metatype _diffArgs = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _adjStmts = NULL;
  modelica_metatype _eqPtr = NULL;
  modelica_metatype _adjVarSlices = NULL;
  modelica_metatype _ssaPDerVarsPtr = NULL;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _adjointComps = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _newTmpVars = tmpMeta2;
  // _c_noalias has no default value.
  // _fresh_adjoint_map has no default value.
  // _diffArgs has no default value.
  // _eq has no default value.
  // _adjStmts has no default value.
  // _eqPtr has no default value.
  // _adjVarSlices has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _ssaPDerVarsPtr = omc_Pointer_create(threadData, tmpMeta3);
  _c_noalias = omc_NBStrongComponent_removeAlias(threadData, _comp);

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _c_noalias;
    {
      modelica_metatype _tearing = NULL;
      modelica_metatype _itVarPtrs = NULL;
      modelica_metatype _residuals = NULL;
      modelica_metatype _lambdaPtrs = NULL;
      modelica_metatype _lambdaCrefs = NULL;
      modelica_integer _iRes;
      modelica_metatype _lhsVarPtr = NULL;
      modelica_metatype _newC = NULL;
      modelica_metatype _diff_map_y = NULL;
      modelica_metatype _diff_map_x = NULL;
      modelica_metatype _diff_map_union = NULL;
      modelica_metatype _loop_product_adjoint_map = NULL;
      modelica_metatype _seedPtrListX = NULL;
      modelica_metatype _linResEqnPtrs = NULL;
      modelica_metatype _terms_j = NULL;
      modelica_metatype _terms_x = NULL;
      modelica_metatype _lhs_j = NULL;
      modelica_metatype _rhs_j = NULL;
      modelica_metatype _rhs_x = NULL;
      modelica_metatype _resid_j = NULL;
      modelica_metatype _o_ySeedCref = NULL;
      modelica_metatype _o_pDerX = NULL;
      modelica_metatype _ySeedCref = NULL;
      modelica_metatype _baseX = NULL;
      modelica_metatype _pDerX = NULL;
      modelica_metatype _loopComp = NULL;
      modelica_metatype _ssaAlg = NULL;
      modelica_metatype _replacements = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _newVars = NULL;
      modelica_metatype tmpMeta6;
      modelica_metatype _seenCrefs = NULL;
      modelica_metatype _origCref = NULL;
      modelica_metatype _finalSsaCref = NULL;
      modelica_metatype _pDerOrigCref = NULL;
      modelica_metatype _pDerSsaCref = NULL;
      modelica_metatype _vty = NULL;
      modelica_metatype _xbarStmts = NULL;
      modelica_integer _sc_x;
      modelica_metatype _addOp_x = NULL;
      modelica_metatype _accRhs = NULL;
      modelica_boolean _init;
      int tmp8;
      // _tearing has no default value.
      // _itVarPtrs has no default value.
      // _residuals has no default value.
      // _lambdaPtrs has no default value.
      // _lambdaCrefs has no default value.
      // _iRes has no default value.
      // _lhsVarPtr has no default value.
      // _newC has no default value.
      // _diff_map_y has no default value.
      // _diff_map_x has no default value.
      // _diff_map_union has no default value.
      // _loop_product_adjoint_map has no default value.
      // _seedPtrListX has no default value.
      // _linResEqnPtrs has no default value.
      // _terms_j has no default value.
      // _terms_x has no default value.
      // _lhs_j has no default value.
      // _rhs_j has no default value.
      // _rhs_x has no default value.
      // _resid_j has no default value.
      // _o_ySeedCref has no default value.
      // _o_pDerX has no default value.
      // _ySeedCref has no default value.
      // _baseX has no default value.
      // _pDerX has no default value.
      // _loopComp has no default value.
      // _ssaAlg has no default value.
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _replacements = tmpMeta5;
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _newVars = tmpMeta6;
      // _seenCrefs has no default value.
      // _origCref has no default value.
      // _finalSsaCref has no default value.
      // _pDerOrigCref has no default value.
      // _pDerSsaCref has no default value.
      // _vty has no default value.
      // _xbarStmts has no default value.
      // _sc_x has no default value.
      // _addOp_x has no default value.
      // _accRhs has no default value.
      _init = 0 /* false */;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp8_1))) {
        case 9: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_integer tmp19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,6,7) == 0) goto tmp7_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));

          _tearing = tmpMeta9;
          /* Pattern matching succeeded */
          _itVarPtrs = omc_NBTearing_getIterationVars(threadData, _tearing);

          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp13;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = omc_NBTearing_getResidualEqns(threadData, _tearing);
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar23;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar22 = omc_NBEquation_Equation_getResidualExp(threadData, omc_Pointer_access(threadData, _e), 1 /* true */);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_4;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar23;
          }
          _residuals = tmpMeta10;

          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _lambdaPtrs = tmpMeta14;

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          _lambdaCrefs = tmpMeta15;

          tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = listLength(_residuals);
          if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
          {
            modelica_integer _iIdx;
            for(_iIdx = ((modelica_integer) 1); in_range_integer(_iIdx, tmp18, tmp20); _iIdx += tmp19)
            {

              _lhsVarPtr = omc_NBVariable_makeAuxVar(threadData, _OMC_LIT60, ((modelica_integer) 1) + mmc_unbox_integer(omc_Pointer_access(threadData, _idx)), _OMC_LIT58, 0 /* false */ ,&_newC);

              omc_Pointer_update(threadData, _idx, mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(omc_Pointer_access(threadData, _idx))));

              _newC = omc_NBVariable_makePDerVar(threadData, _newC, _contextName, 1 /* true */ ,&_lhsVarPtr);

              tmpMeta16 = mmc_mk_cons(_lhsVarPtr, _lambdaPtrs);
              _lambdaPtrs = tmpMeta16;

              tmpMeta17 = mmc_mk_cons(_newC, _lambdaCrefs);
              _lambdaCrefs = tmpMeta17;
            }
          }

          _lambdaPtrs = listReverse(_lambdaPtrs);

          _lambdaCrefs = listReverse(_lambdaCrefs);

          _newTmpVars = _lambdaPtrs;

          _diff_map_y = omc_NBJacobian_populateDiffMap(threadData, _itVarPtrs, _diff_map);

          _seedPtrListX = listAppend(omc_NBVariable_VariablePointers_toList(threadData, _seedCandidates), _tmpVarCandidates);

          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp24;
            modelica_metatype _vp_loopVar = 0;
            modelica_metatype _vp;
            _vp_loopVar = _seedPtrListX;
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar25;
            while(1) {
              tmp24 = 1;
              while (!listEmpty(_vp_loopVar)) {
                _vp = MMC_CAR(_vp_loopVar);
                _vp_loopVar = MMC_CDR(_vp_loopVar);
                if ((!omc_UnorderedMap_contains(threadData, omc_NBVariable_getVarName(threadData, _vp), _diff_map_y))) {
                  tmp24--;
                  break;
                }
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar24 = _vp;
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_4;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar25;
          }
          _seedPtrListX = tmpMeta21;

          _diff_map_x = omc_NBJacobian_populateDiffMap(threadData, _seedPtrListX, _diff_map);

          _diff_map_union = omc_UnorderedMap_merge(threadData, _diff_map_y, _diff_map_x, _OMC_LIT61);

          _loop_product_adjoint_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, listLength(_itVarPtrs) + listLength(_seedPtrListX));

          {
            modelica_metatype _vp;
            for (tmpMeta25 = _itVarPtrs; !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
            {
              _vp = MMC_CAR(tmpMeta25);
              omc_NBJacobian_addEntryToLPAMap(threadData, _vp, _diff_map_y, _loop_product_adjoint_map);
            }
          }

          {
            modelica_metatype _vp;
            for (tmpMeta27 = _seedPtrListX; !listEmpty(tmpMeta27); tmpMeta27=MMC_CDR(tmpMeta27))
            {
              _vp = MMC_CAR(tmpMeta27);
              omc_NBJacobian_addEntryToLPAMap(threadData, _vp, _diff_map_x, _loop_product_adjoint_map);
            }
          }

          _iRes = ((modelica_integer) 1);

          {
            modelica_metatype _residual_i;
            for (tmpMeta29 = _residuals; !listEmpty(tmpMeta29); tmpMeta29=MMC_CDR(tmpMeta29))
            {
              _residual_i = MMC_CAR(tmpMeta29);
              if((_iRes > listLength(_lambdaCrefs)))
              {
                break;
              }

              _diffArgs = omc_NBJacobian_accumulateAdjointForResidual(threadData, _residual_i, omc_NFExpression_fromCref(threadData, listGet(_lambdaCrefs, _iRes), 0 /* false */), _diff_map_union, _funcMap, _scalarized, _loop_product_adjoint_map);

              _loop_product_adjoint_map = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArgs), 8))));

              _iRes = ((modelica_integer) 1) + _iRes;
            }
          }

          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          _linResEqnPtrs = tmpMeta31;

          {
            modelica_metatype _vp;
            for (tmpMeta32 = _itVarPtrs; !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
            {
              _vp = MMC_CAR(tmpMeta32);
              _o_ySeedCref = omc_UnorderedMap_get(threadData, omc_NBVariable_getVarName(threadData, _vp), _diff_map_y);

              if(isSome(_o_ySeedCref))
              {
                _ySeedCref = omc_Util_getOption(threadData, _o_ySeedCref);

                tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
                _terms_j = omc_UnorderedMap_getOrDefault(threadData, _ySeedCref, _loop_product_adjoint_map, tmpMeta33);

                _lhs_j = omc_NBJacobian_buildAdjointRhs(threadData, _ySeedCref, _terms_j);

                _rhs_j = omc_NFExpression_fromCref(threadData, _ySeedCref, 0 /* false */);

                _resid_j = omc_NBEquation_Equation_makeAssignment(threadData, _lhs_j, _rhs_j, _idx, _contextName, _OMC_LIT62, omc_NBEquation_default(threadData, 1, 0 /* false */, mmc_mk_none(), mmc_mk_none()));

                tmpMeta34 = mmc_mk_cons(omc_NBEquation_Equation_createResidual(threadData, _resid_j, mmc_mk_none(), 0 /* false */, 0 /* false */), _linResEqnPtrs);
                _linResEqnPtrs = tmpMeta34;
              }
            }
          }

          _linResEqnPtrs = listReverse(_linResEqnPtrs);

          if((!listEmpty(_linResEqnPtrs)))
          {
            _loopComp = omc_NBJacobian_makeLinearAlgebraicLoop(threadData, _lambdaPtrs, _linResEqnPtrs, mmc_mk_none(), 0 /* false */, 0 /* false */);

            tmpMeta36 = mmc_mk_cons(_loopComp, _adjointComps);
            _adjointComps = tmpMeta36;
          }

          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          _xbarStmts = tmpMeta37;

          {
            modelica_metatype _seedVarPtrX;
            for (tmpMeta38 = _seedPtrListX; !listEmpty(tmpMeta38); tmpMeta38=MMC_CDR(tmpMeta38))
            {
              _seedVarPtrX = MMC_CAR(tmpMeta38);
              _baseX = omc_NBVariable_getVarName(threadData, _seedVarPtrX);

              _o_pDerX = omc_UnorderedMap_get(threadData, _baseX, _diff_map_x);

              if(isSome(_o_pDerX))
              {
                _pDerX = omc_Util_getOption(threadData, _o_pDerX);

                tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
                _terms_x = omc_UnorderedMap_getOrDefault(threadData, _pDerX, _loop_product_adjoint_map, tmpMeta39);

                if((!listEmpty(_terms_x)))
                {
                  _rhs_x = omc_NFExpression_negate(threadData, omc_NBJacobian_buildAdjointRhs(threadData, _pDerX, _terms_x));

                  _vty = omc_NFComponentRef_getComponentType(threadData, _pDerX);

                  if(omc_NFExpression_containsCref(threadData, _rhs_x, _pDerX))
                  {
                    _accRhs = _rhs_x;
                  }
                  else
                  {
                    _sc_x = omc_NBJacobian_sizeClassificationFromType(threadData, _vty);

                    tmpMeta40 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sc_x));
                    _addOp_x = omc_NFOperator_fromClassification(threadData, tmpMeta40, _vty);

                    tmpMeta41 = mmc_mk_cons(omc_NFExpression_fromCref(threadData, _pDerX, 0 /* false */), mmc_mk_cons(_rhs_x, MMC_REFSTRUCTLIT(mmc_nil)));
                    tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
                    tmpMeta43 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta41, tmpMeta42, _addOp_x);
                    _accRhs = omc_NFSimplifyExp_simplify(threadData, tmpMeta43, 0 /* false */);
                  }

                  _accRhs = omc_NFExpression_map(threadData, _accRhs, boxvar_NFExpression_repairOperator);

                  tmpMeta45 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, omc_NFExpression_fromCref(threadData, _pDerX, 0 /* false */), _accRhs, _vty, _OMC_LIT64);
                  tmpMeta44 = mmc_mk_cons(tmpMeta45, _xbarStmts);
                  _xbarStmts = tmpMeta44;
                }
              }
            }
          }

          _xbarStmts = listReverse(_xbarStmts);

          if((!listEmpty(_xbarStmts)))
          {
            _eqPtr = omc_NBEquation_Equation_makeAlgorithm(threadData, _xbarStmts, _init);

            omc_NBEquation_Equation_createName(threadData, _eqPtr, _idx, _contextName);

            tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
            _adjVarSlices = listReverse(omc_NBJacobian_collectAdjointVarSlices(threadData, _xbarStmts, tmpMeta47));

            tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta50 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqPtr, tmpMeta49);
            tmpMeta51 = mmc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, _adjVarSlices, tmpMeta50, mmc_mk_integer(2));
            tmpMeta48 = mmc_mk_cons(tmpMeta51, _adjointComps);
            _adjointComps = tmpMeta48;
          }
          goto tmp7_done;
        }
        case 3: {
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;

          /* Pattern matching succeeded */
          _eq = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c_noalias), 3))));

          _fresh_adjoint_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 16));

          tmpMeta52 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta53 = mmc_mk_box10(3, &NBDifferentiate_DifferentiationArguments_DIFFERENTIATION__ARGUMENTS__desc, _OMC_LIT0, tmpMeta52, mmc_mk_some(_diff_map), mmc_mk_integer(4), _funcMap, mmc_mk_boolean(_scalarized), mmc_mk_some(_fresh_adjoint_map), _OMC_LIT59, mmc_mk_boolean(1 /* true */));
          _diffArgs = tmpMeta53;

          _diffArgs = omc_NBDifferentiate_differentiateEquationAdjoint(threadData, _eq, _diffArgs ,&_adjStmts);

          if((!listEmpty(_adjStmts)))
          {
            _eqPtr = omc_NBEquation_Equation_makeAlgorithm(threadData, _adjStmts, _init);

            omc_NBEquation_Equation_createName(threadData, _eqPtr, _idx, _contextName);

            tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
            _adjVarSlices = listReverse(omc_NBJacobian_collectAdjointVarSlices(threadData, _adjStmts, tmpMeta54));

            tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta57 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqPtr, tmpMeta56);
            tmpMeta58 = mmc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, _adjVarSlices, tmpMeta57, mmc_mk_integer(2));
            tmpMeta55 = mmc_mk_cons(tmpMeta58, MMC_REFSTRUCTLIT(mmc_nil));
            _adjointComps = tmpMeta55;
          }
          goto tmp7_done;
        }
        case 4: {
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;

          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp62_1;
            tmp62_1 = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c_noalias), 3)))));
            {
              volatile mmc_switch_type tmp62;
              int tmp63;
              tmp62 = 0;
              for (; tmp62 < 2; tmp62++) {
                switch (MMC_SWITCH_CAST(tmp62)) {
                case 0: {
                  modelica_metatype tmpMeta64;
                  modelica_metatype tmpMeta65;
                  modelica_metatype tmpMeta66;
                  modelica_metatype tmpMeta67;
                  modelica_metatype tmpMeta68;
                  modelica_metatype tmpMeta70;
                  modelica_metatype tmpMeta71;
                  modelica_metatype tmpMeta72;
                  modelica_metatype tmpMeta73;
                  modelica_metatype tmpMeta74;
                  modelica_metatype tmpMeta75;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp62_1,3,5) == 0) goto tmp61_end;

                  /* Pattern matching succeeded */
                  _ssaAlg = omc_NBJacobian_algorithmToSSA(threadData, _c_noalias ,&_replacements ,&_newVars);

                  if(omc_Flags_isSet(threadData, _OMC_LIT43))
                  {
                    tmpMeta64 = stringAppend(_OMC_LIT65,omc_NBStrongComponent_toString(threadData, _c_noalias, ((modelica_integer) -1)));
                    tmpMeta65 = stringAppend(tmpMeta64,_OMC_LIT66);
                    tmpMeta66 = stringAppend(tmpMeta65,omc_NBStrongComponent_toString(threadData, _ssaAlg, ((modelica_integer) -1)));
                    tmpMeta67 = stringAppend(tmpMeta66,_OMC_LIT40);
                    fputs(MMC_STRINGDATA(tmpMeta67),stdout);
                  }

                  {
                    modelica_metatype _ssaVarPtr;
                    for (tmpMeta68 = _newVars; !listEmpty(tmpMeta68); tmpMeta68=MMC_CDR(tmpMeta68))
                    {
                      _ssaVarPtr = MMC_CAR(tmpMeta68);
                      tmpMeta70 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
                      omc_NBJacobian_makeVarTraverse(threadData, _ssaVarPtr, _contextName, _ssaPDerVarsPtr, _diff_map, (modelica_fnptr) mmc_mk_box2(0,closure7_NBVariable_makePDerVar,tmpMeta70), _staticAsContinuous);
                    }
                  }

                  {
                    modelica_metatype _pDerVarPtr;
                    for (tmpMeta72 = omc_Pointer_access(threadData, _ssaPDerVarsPtr); !listEmpty(tmpMeta72); tmpMeta72=MMC_CDR(tmpMeta72))
                    {
                      _pDerVarPtr = MMC_CAR(tmpMeta72);
                      tmpMeta73 = mmc_mk_cons(_pDerVarPtr, _newTmpVars);
                      _newTmpVars = tmpMeta73;
                    }
                  }
                  { /* match expression */
                    modelica_metatype tmp78_1;
                    tmp78_1 = _ssaAlg;
                    {
                      volatile mmc_switch_type tmp78;
                      int tmp79;
                      tmp78 = 0;
                      for (; tmp78 < 2; tmp78++) {
                        switch (MMC_SWITCH_CAST(tmp78)) {
                        case 0: {
                          if (mmc__uniontype__metarecord__typedef__equal(tmp78_1,1,3) == 0) goto tmp77_end;

                          /* Pattern matching succeeded */
                          tmpMeta75 = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ssaAlg), 3)))));
                          goto tmp77_done;
                        }
                        case 1: {

                          /* Pattern matching succeeded */
                          tmpMeta75 = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c_noalias), 3)))));
                          goto tmp77_done;
                        }
                        }
                        goto tmp77_end;
                        tmp77_end: ;
                      }
                      goto goto_76;
                      goto_76:;
                      goto goto_60;
                      goto tmp77_done;
                      tmp77_done:;
                    }
                  }tmpMeta59 = tmpMeta75;
                  goto tmp61_done;
                }
                case 1: {

                  /* Pattern matching succeeded */
                  tmpMeta59 = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c_noalias), 3)))));
                  goto tmp61_done;
                }
                }
                goto tmp61_end;
                tmp61_end: ;
              }
              goto goto_60;
              goto_60:;
              goto goto_4;
              goto tmp61_done;
              tmp61_done:;
            }
          }
          _eq = tmpMeta59;

          _fresh_adjoint_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 16));

          tmpMeta80 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta81 = mmc_mk_box10(3, &NBDifferentiate_DifferentiationArguments_DIFFERENTIATION__ARGUMENTS__desc, _OMC_LIT0, tmpMeta80, mmc_mk_some(_diff_map), mmc_mk_integer(4), _funcMap, mmc_mk_boolean(_scalarized), mmc_mk_some(_fresh_adjoint_map), _OMC_LIT59, mmc_mk_boolean(1 /* true */));
          _diffArgs = tmpMeta81;

          _diffArgs = omc_NBDifferentiate_differentiateEquationAdjoint(threadData, _eq, _diffArgs ,&_adjStmts);

          if((!listEmpty(_newVars)))
          {
            _seenCrefs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 4));

            {
              modelica_metatype _replacement;
              for (tmpMeta82 = listReverse(_replacements); !listEmpty(tmpMeta82); tmpMeta82=MMC_CDR(tmpMeta82))
              {
                _replacement = MMC_CAR(tmpMeta82);
                /* Pattern-matching assignment */
                tmpMeta83 = _replacement;
                tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta83), 1));
                tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta83), 2));
                tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta85), 1));
                _origCref = tmpMeta84;
                _finalSsaCref = tmpMeta86;

                if((!omc_UnorderedSet_contains(threadData, _origCref, _seenCrefs)))
                {
                  omc_UnorderedSet_add(threadData, _origCref, _seenCrefs);

                  if((omc_UnorderedMap_contains(threadData, _origCref, _diff_map) && omc_UnorderedMap_contains(threadData, _finalSsaCref, _diff_map)))
                  {
                    _pDerOrigCref = omc_UnorderedMap_getOrFail(threadData, _origCref, _diff_map);

                    _pDerSsaCref = omc_UnorderedMap_getOrFail(threadData, _finalSsaCref, _diff_map);

                    _vty = omc_NFComponentRef_getSubscriptedType(threadData, _pDerSsaCref, 1 /* true */);

                    tmpMeta88 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, omc_NFExpression_fromCref(threadData, _pDerSsaCref, 0 /* false */), omc_NFExpression_fromCref(threadData, _pDerOrigCref, 0 /* false */), _vty, _OMC_LIT64);
                    tmpMeta87 = mmc_mk_cons(tmpMeta88, _adjStmts);
                    _adjStmts = tmpMeta87;
                  }
                }
              }
            }
          }

          if((!listEmpty(_adjStmts)))
          {
            _eqPtr = omc_NBEquation_Equation_makeAlgorithm(threadData, _adjStmts, _init);

            omc_NBEquation_Equation_createName(threadData, _eqPtr, _idx, _contextName);

            tmpMeta90 = MMC_REFSTRUCTLIT(mmc_nil);
            _adjVarSlices = listReverse(omc_NBJacobian_collectAdjointVarSlices(threadData, _adjStmts, tmpMeta90));

            tmpMeta92 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta93 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqPtr, tmpMeta92);
            tmpMeta94 = mmc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, _adjVarSlices, tmpMeta93, mmc_mk_integer(2));
            tmpMeta91 = mmc_mk_cons(tmpMeta94, MMC_REFSTRUCTLIT(mmc_nil));
            _adjointComps = tmpMeta91;
          }
          goto tmp7_done;
        }
        case 5: {

          /* Pattern matching succeeded */
          _eq = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c_noalias), 4)))));

          _adjointComps = omc_NBJacobian_generateAdjointForComponent(threadData, _eq, _c_noalias, _diff_map, _funcMap, _scalarized, _init, _idx, _contextName);
          goto tmp7_done;
        }
        case 6: {

          /* Pattern matching succeeded */
          _eq = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c_noalias), 4)))));

          _adjointComps = omc_NBJacobian_generateAdjointForComponent(threadData, _eq, _c_noalias, _diff_map, _funcMap, _scalarized, _init, _idx, _contextName);
          goto tmp7_done;
        }
        case 7: {

          /* Pattern matching succeeded */
          _eq = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c_noalias), 4)))));

          _adjointComps = omc_NBJacobian_generateAdjointForComponent(threadData, _eq, _c_noalias, _diff_map, _funcMap, _scalarized, _init, _idx, _contextName);
          goto tmp7_done;
        }
        default:
        tmp7_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;

          /* Pattern matching succeeded */
          tmpMeta96 = stringAppend(_OMC_LIT67,omc_NBStrongComponent_toString(threadData, _c_noalias, ((modelica_integer) -1)));
          tmpMeta95 = mmc_mk_cons(tmpMeta96, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta95);
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_4;
      goto_4:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_newTmpVars) { *out_newTmpVars = _newTmpVars; }
  return _adjointComps;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_generateAdjointComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _diff_map, modelica_metatype _funcMap, modelica_metatype _scalarized, modelica_metatype _staticAsContinuous, modelica_metatype _idx, modelica_metatype _contextName, modelica_metatype _seedCandidates, modelica_metatype _tmpVarCandidates, modelica_metatype *out_newTmpVars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _adjointComps = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_scalarized);
  tmp2 = mmc_unbox_integer(_staticAsContinuous);
  _adjointComps = omc_NBJacobian_generateAdjointComponent(threadData, _comp, _diff_map, _funcMap, tmp1, tmp2, _idx, _contextName, _seedCandidates, _tmpVarCandidates, out_newTmpVars);
  /* skip box _adjointComps; list<NBStrongComponent> */
  /* skip box _newTmpVars; list<Pointer<NFVariable>> */
  return _adjointComps;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NBJacobian_isSupportedAdjointStrongComponent(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _ok;
  modelica_boolean tmp1 = 0;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ok has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
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
        case 9: {

          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {

          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _ok = tmp1;
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return _ok;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_isSupportedAdjointStrongComponent(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _ok;
  modelica_metatype out_ok;
  _ok = omc_NBJacobian_isSupportedAdjointStrongComponent(threadData, _comp);
  out_ok = mmc_mk_icon(_ok);
  return out_ok;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_populateDiffMap(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _globalDiffMap)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype _baseCref = NULL;
  modelica_metatype _o_mappedCref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  // _baseCref has no default value.
  // _o_mappedCref has no default value.
  _outMap = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, omc_Util_nextPrime(threadData, listLength(_vars)));

  {
    modelica_metatype _vp;
    for (tmpMeta1 = _vars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _vp = MMC_CAR(tmpMeta1);
      _baseCref = omc_NBVariable_getVarName(threadData, _vp);

      _o_mappedCref = omc_UnorderedMap_get(threadData, _baseCref, _globalDiffMap);

      if(isSome(_o_mappedCref))
      {
        omc_UnorderedMap_add(threadData, _baseCref, omc_Util_getOption(threadData, _o_mappedCref), _outMap);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outMap;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getBaseTmpVarCandidates(threadData_t *threadData, modelica_metatype _partialVars, modelica_metatype _tmpPDerVars, modelica_metatype _diff_map)
{
  modelica_metatype _baseTmpVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _tmpPDerSet = NULL;
  modelica_metatype _baseCref = NULL;
  modelica_metatype _o_mapped = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _baseTmpVars = tmpMeta1;
  // _tmpPDerSet has no default value.
  // _baseCref has no default value.
  // _o_mapped has no default value.
  _tmpPDerSet = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, omc_Util_nextPrime(threadData, listLength(_tmpPDerVars)));

  {
    modelica_metatype _v;
    for (tmpMeta2 = _tmpPDerVars; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _v), _tmpPDerSet);
    }
  }

  {
    modelica_metatype _v;
    for (tmpMeta4 = _partialVars; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _v = MMC_CAR(tmpMeta4);
      _baseCref = omc_NBVariable_getVarName(threadData, _v);

      _o_mapped = omc_UnorderedMap_get(threadData, _baseCref, _diff_map);

      if((isSome(_o_mapped) && omc_UnorderedSet_contains(threadData, omc_Util_getOption(threadData, _o_mapped), _tmpPDerSet)))
      {
        tmpMeta5 = mmc_mk_cons(_v, _baseTmpVars);
        _baseTmpVars = tmpMeta5;
      }
    }
  }

  _baseTmpVars = listReverse(_baseTmpVars);
  _return: OMC_LABEL_UNUSED
  return _baseTmpVars;
}

PROTECTED_FUNCTION_STATIC void omc_NBJacobian_addEntryToLPAMap(threadData_t *threadData, modelica_metatype _vptr, modelica_metatype _diff_map, modelica_metatype _loop_product_adjoint_map)
{
  modelica_metatype _mappedSeed = NULL;
  modelica_metatype tmpMeta1;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mappedSeed has no default value.
  _mappedSeed = omc_UnorderedMap_get(threadData, omc_NBVariable_getVarName(threadData, _vptr), _diff_map);

  if(isSome(_mappedSeed))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    omc_UnorderedMap_tryAdd(threadData, omc_Util_getOption(threadData, _mappedSeed), tmpMeta1, _loop_product_adjoint_map);
  }
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_makeAdjointComponentFromRhs(threadData_t *threadData, modelica_metatype _lhsKey, modelica_metatype _rhsExpr, modelica_string _contextName, modelica_integer _eqIndex)
{
  modelica_metatype _diffed_comp = NULL;
  modelica_metatype _eqPtr = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _lhsVarPtr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _diffed_comp has no default value.
  // _eqPtr has no default value.
  // _eq has no default value.
  // _lhsVarPtr has no default value.
  _eqPtr = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _lhsKey, 0 /* false */), _rhsExpr, omc_Pointer_create(threadData, mmc_mk_integer(_eqIndex)), _contextName, _OMC_LIT62, omc_NBEquation_default(threadData, 1, 0 /* false */, mmc_mk_none(), mmc_mk_none()));

  _lhsVarPtr = omc_NBVariable_getVarPointer(threadData, _lhsKey, _OMC_LIT68);

  _eq = omc_Pointer_access(threadData, _eqPtr);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;

          /* Pattern matching succeeded */
          if((!listEmpty(omc_NFComponentRef_subscriptsAllFlat(threadData, _lhsKey))))
          {
            tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta6 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _lhsVarPtr, tmpMeta5);
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta8 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqPtr, tmpMeta7);
            tmpMeta9 = mmc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, _lhsKey, tmpMeta6, tmpMeta8, mmc_mk_integer(2));
            _diffed_comp = tmpMeta9;
          }
          else
          {
            tmpMeta10 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, _lhsVarPtr, _eqPtr, mmc_mk_integer(2));
            _diffed_comp = tmpMeta10;
          }
          tmpMeta1 = _diffed_comp;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta11;

          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, _lhsVarPtr, _eqPtr, mmc_mk_integer(2));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta12;

          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, _lhsVarPtr, _eqPtr, mmc_mk_integer(2));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;

          /* Pattern matching succeeded */
          tmpMeta14 = stringAppend(_OMC_LIT69,omc_NBEquation_Equation_toString(threadData, _eq, _OMC_LIT15));
          tmpMeta13 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta13);
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
  _diffed_comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _diffed_comp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_makeAdjointComponentFromRhs(threadData_t *threadData, modelica_metatype _lhsKey, modelica_metatype _rhsExpr, modelica_metatype _contextName, modelica_metatype _eqIndex)
{
  modelica_integer tmp1;
  modelica_metatype _diffed_comp = NULL;
  tmp1 = mmc_unbox_integer(_eqIndex);
  _diffed_comp = omc_NBJacobian_makeAdjointComponentFromRhs(threadData, _lhsKey, _rhsExpr, _contextName, tmp1);
  /* skip box _diffed_comp; NBStrongComponent */
  return _diffed_comp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_accumulateAdjointForResidual(threadData_t *threadData, modelica_metatype _residual, modelica_metatype _seed, modelica_metatype _diff_map, modelica_metatype _funcMapIn, modelica_boolean _scalarized, modelica_metatype _adjoint_map_in)
{
  modelica_metatype _diffArguments = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _diffArguments has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box10(3, &NBDifferentiate_DifferentiationArguments_DIFFERENTIATION__ARGUMENTS__desc, _OMC_LIT0, tmpMeta1, mmc_mk_some(_diff_map), mmc_mk_integer(4), _funcMapIn, mmc_mk_boolean(_scalarized), mmc_mk_some(_adjoint_map_in), _seed, mmc_mk_boolean(1 /* true */));
  _diffArguments = tmpMeta2;

  omc_NBDifferentiate_differentiateExpression(threadData, _residual, _diffArguments ,&_diffArguments);
  _return: OMC_LABEL_UNUSED
  return _diffArguments;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_accumulateAdjointForResidual(threadData_t *threadData, modelica_metatype _residual, modelica_metatype _seed, modelica_metatype _diff_map, modelica_metatype _funcMapIn, modelica_metatype _scalarized, modelica_metatype _adjoint_map_in)
{
  modelica_integer tmp1;
  modelica_metatype _diffArguments = NULL;
  tmp1 = mmc_unbox_integer(_scalarized);
  _diffArguments = omc_NBJacobian_accumulateAdjointForResidual(threadData, _residual, _seed, _diff_map, _funcMapIn, tmp1, _adjoint_map_in);
  /* skip box _diffArguments; NBDifferentiate.DifferentiationArguments */
  return _diffArguments;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_buildAdjointRhs(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _terms)
{
  modelica_metatype _rhs = NULL;
  modelica_metatype _vty = NULL;
  modelica_integer _sc;
  modelica_metatype _addOp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rhs has no default value.
  // _vty has no default value.
  // _sc has no default value.
  // _addOp has no default value.
  _vty = omc_NFComponentRef_getComponentType(threadData, _lhsCref);

  if(listEmpty(_terms))
  {
    _rhs = omc_NFExpression_makeZero(threadData, _vty);

    goto _return;
  }

  if(omc_List_hasOneElement(threadData, _terms))
  {
    _rhs = listHead(_terms);

    goto _return;
  }

  _sc = omc_NBJacobian_sizeClassificationFromType(threadData, _vty);

  tmpMeta1 = mmc_mk_box2(0, mmc_mk_integer(1), mmc_mk_integer((modelica_integer)_sc));
  _addOp = omc_NFOperator_fromClassification(threadData, tmpMeta1, _vty);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, _terms, tmpMeta2, _addOp);
  _rhs = omc_NFSimplifyExp_simplify(threadData, tmpMeta3, 0 /* false */);

  _rhs = omc_NFExpression_map(threadData, _rhs, boxvar_NFExpression_repairOperator);
  _return: OMC_LABEL_UNUSED
  return _rhs;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBJacobian_sizeClassificationFromType(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_integer _sc;
  modelica_integer tmp1 = 0;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sc has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = omc_NFType_dimensionCount(threadData, _ty);
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 5;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {

          /* Pattern matching succeeded */
          tmp1 = 2;
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
  _sc = tmp1;
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return _sc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_sizeClassificationFromType(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_integer _sc;
  modelica_metatype out_sc;
  _sc = omc_NBJacobian_sizeClassificationFromType(threadData, _ty);
  out_sc = mmc_mk_icon(_sc);
  return out_sc;
}

static void closure8_NBJacobian_makeVarTraverse(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype vars_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_fnptr makeVar = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype staticAsContinuous = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  boxptr_NBJacobian_makeVarTraverse(thData, var_ptr, name, vars_ptr, map, makeVar, staticAsContinuous);
}static modelica_metatype closure9_NBVariable_isContinuous(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype staticAsContinuous = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isContinuous(thData, var_ptr, staticAsContinuous);
}static modelica_metatype closure10_NBVariable_makePDerVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_string name, modelica_metatype tmp13)
{
  modelica_metatype isTmp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_makePDerVar(thData, $in_cref, name, isTmp, tmp13);
}static modelica_metatype closure11_NBVariable_makePDerVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_string name, modelica_metatype tmp20)
{
  modelica_metatype isTmp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_makePDerVar(thData, $in_cref, name, isTmp, tmp20);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianSymbolic(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_boolean _staticAsContinuous)
{
  modelica_metatype _jacobian = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _diffed_comps = NULL;
  modelica_metatype _seed_vars_ptr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _pDer_vars_ptr = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _diff_map = NULL;
  modelica_metatype _seed_diff_map = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _idx = NULL;
  modelica_metatype _adjacencyVars = NULL;
  modelica_metatype _all_vars = NULL;
  modelica_metatype _unknown_vars = NULL;
  modelica_metatype _aux_vars = NULL;
  modelica_metatype _alias_vars = NULL;
  modelica_metatype _depend_vars = NULL;
  modelica_metatype _res_vars = NULL;
  modelica_metatype _res_vars_d = NULL;
  modelica_metatype _tmp_vars = NULL;
  modelica_metatype _tmp_vars_d = NULL;
  modelica_metatype _seed_vars = NULL;
  modelica_metatype _seed_vars_d = NULL;
  modelica_metatype _varDataJac = NULL;
  modelica_metatype _fullLocal = NULL;
  modelica_metatype _sparsity = NULL;
  modelica_metatype _seed_set = NULL;
  modelica_metatype _pder_set = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta32;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  // _comps has no default value.
  // _diffed_comps has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _seed_vars_ptr = omc_Pointer_create(threadData, tmpMeta1);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _pDer_vars_ptr = omc_Pointer_create(threadData, tmpMeta2);
  _diff_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  // _seed_diff_map has no default value.
  // _diffArguments has no default value.
  _idx = omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 0)));
  // _adjacencyVars has no default value.
  // _all_vars has no default value.
  // _unknown_vars has no default value.
  // _aux_vars has no default value.
  // _alias_vars has no default value.
  // _depend_vars has no default value.
  // _res_vars has no default value.
  // _res_vars_d has no default value.
  // _tmp_vars has no default value.
  // _tmp_vars_d has no default value.
  // _seed_vars has no default value.
  // _seed_vars_d has no default value.
  // _varDataJac has no default value.
  // _fullLocal has no default value.
  // _sparsity has no default value.
  _seed_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _pder_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _func = omc_NBJacobian_getTmpFilterFunction(threadData, (modelica_integer)_jacType);
  if(isSome(_strongComponents))
  {
    {
      modelica_metatype __omcQ_24tmpVar27;
      modelica_metatype* tmp4;
      modelica_metatype tmpMeta5;
      modelica_metatype __omcQ_24tmpVar26;
      modelica_integer tmp6;
      modelica_metatype _comp_loopVar = 0;
      modelica_integer tmp7;
      modelica_metatype _comp;
      _comp_loopVar = omc_Util_getOption(threadData, _strongComponents);
      tmp7 = 1;
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar27 = tmpMeta5; /* defaultValue */
      tmp4 = &__omcQ_24tmpVar27;
      while(1) {
        tmp6 = 1;
        while (tmp7 <= arrayLength(_comp_loopVar)) {
          _comp = arrayGet(_comp_loopVar, tmp7++);
          if ((!omc_NBStrongComponent_isDiscrete(threadData, _comp))) {
            tmp6--;
            break;
          }
        }
        if (tmp6 == 0) {
          __omcQ_24tmpVar26 = _comp;
          *tmp4 = mmc_mk_cons(__omcQ_24tmpVar26,0);
          tmp4 = &MMC_CDR(*tmp4);
        } else if (tmp6 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp4 = mmc_mk_nil();
      tmpMeta3 = __omcQ_24tmpVar27;
    }
    _comps = tmpMeta3;
  }
  else
  {
    omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT71);

    MMC_THROW_INTERNAL();
  }

  tmpMeta8 = mmc_mk_box5(0, _name, _seed_vars_ptr, _diff_map, boxvar_NBVariable_makeSeedVar, mmc_mk_boolean(_staticAsContinuous));
  omc_NBVariable_VariablePointers_mapPtr(threadData, _seedCandidates, (modelica_fnptr) mmc_mk_box2(0,closure8_NBJacobian_makeVarTraverse,tmpMeta8));

  {
    modelica_metatype _v;
    for (tmpMeta9 = omc_NBVariable_VariablePointers_toList(threadData, _seedCandidates); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _v = MMC_CAR(tmpMeta9);
      if(omc_NBVariable_isContinuous(threadData, _v, _staticAsContinuous))
      {
        omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _v), _seed_set);

        omc_UnorderedSet_add(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, omc_NBVariable_getVarName(threadData, _v)), _seed_set);
      }
    }
  }

  _res_vars = omc_List_splitOnTrue(threadData, omc_NBVariable_VariablePointers_toList(threadData, _partialCandidates), ((modelica_fnptr) _func) ,&_tmp_vars);

  tmpMeta11 = mmc_mk_box1(0, mmc_mk_boolean(_staticAsContinuous));
  _tmp_vars = omc_List_splitOnTrue(threadData, _tmp_vars, (modelica_fnptr) mmc_mk_box2(0,closure9_NBVariable_isContinuous,tmpMeta11), NULL);

  {
    modelica_metatype _v;
    for (tmpMeta12 = _res_vars; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _v = MMC_CAR(tmpMeta12);
      tmpMeta14 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
      omc_NBJacobian_makeVarTraverse(threadData, _v, _name, _pDer_vars_ptr, _diff_map, (modelica_fnptr) mmc_mk_box2(0,closure10_NBVariable_makePDerVar,tmpMeta14), _staticAsContinuous);
    }
  }

  {
    modelica_metatype _v;
    for (tmpMeta16 = _res_vars; !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
    {
      _v = MMC_CAR(tmpMeta16);
      omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _v), _pder_set);
    }
  }

  _res_vars_d = listReverse(omc_Pointer_access(threadData, _pDer_vars_ptr));

  tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
  _pDer_vars_ptr = omc_Pointer_create(threadData, tmpMeta18);

  _seed_diff_map = omc_UnorderedMap_copy(threadData, _diff_map);

  {
    modelica_metatype _v;
    for (tmpMeta19 = _tmp_vars; !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
    {
      _v = MMC_CAR(tmpMeta19);
      tmpMeta21 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
      omc_NBJacobian_makeVarTraverse(threadData, _v, _name, _pDer_vars_ptr, _diff_map, (modelica_fnptr) mmc_mk_box2(0,closure11_NBVariable_makePDerVar,tmpMeta21), _staticAsContinuous);
    }
  }

  _tmp_vars_d = omc_Pointer_access(threadData, _pDer_vars_ptr);

  tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta24 = mmc_mk_box10(3, &NBDifferentiate_DifferentiationArguments_DIFFERENTIATION__ARGUMENTS__desc, _OMC_LIT0, tmpMeta23, mmc_mk_some(_diff_map), mmc_mk_integer(4), _funcMap, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_seedCandidates), 4))), mmc_mk_none(), _OMC_LIT59, mmc_mk_boolean(0 /* false */));
  _diffArguments = tmpMeta24;

  _diffed_comps = omc_NBDifferentiate_differentiateStrongComponentList(threadData, _comps, _diffArguments, _idx, _name, _OMC_LIT72 ,&_diffArguments);

  _unknown_vars = listAppend(_res_vars_d, _tmp_vars_d);

  _all_vars = _unknown_vars;

  _seed_vars_d = listReverse(omc_Pointer_access(threadData, _seed_vars_ptr));

  _aux_vars = _seed_vars_d;

  tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
  _alias_vars = tmpMeta25;

  tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
  _depend_vars = tmpMeta26;

  tmpMeta27 = mmc_mk_box10(4, &NBVariable_VarData_VAR__DATA__JAC__desc, omc_NBVariable_VariablePointers_fromList(threadData, _all_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _unknown_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _aux_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _alias_vars, 0 /* false */), _partialCandidates, omc_NBVariable_VariablePointers_fromList(threadData, _depend_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _res_vars_d, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _tmp_vars_d, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _seed_vars_d, 0 /* false */));
  _varDataJac = tmpMeta27;

  _adjacencyVars = omc_NBVariable_VariablePointers_clone(threadData, _seedCandidates, 1 /* true */);

  _adjacencyVars = omc_NBVariable_VariablePointers_addList(threadData, _tmp_vars, _adjacencyVars);

  if(((modelica_integer)_jacType == 1))
  {
    _adjacencyVars = omc_NBVariable_VariablePointers_addList(threadData, _res_vars, _adjacencyVars);
  }

  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype* tmp29;
    modelica_metatype tmpMeta30;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp31;
    modelica_metatype _comp_loopVar = 0;
    modelica_metatype _comp;
    _comp_loopVar = _comps;
    tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta30; /* defaultValue */
    tmp29 = &__omcQ_24tmpVar29;
    while(1) {
      tmp31 = 1;
      if (!listEmpty(_comp_loopVar)) {
        _comp = MMC_CAR(_comp_loopVar);
        _comp_loopVar = MMC_CDR(_comp_loopVar);
        tmp31--;
      }
      if (tmp31 == 0) {
        __omcQ_24tmpVar28 = omc_NBStrongComponent_getEquations(threadData, _comp);
        *tmp29 = mmc_mk_cons(__omcQ_24tmpVar28,0);
        tmp29 = &MMC_CDR(*tmp29);
      } else if (tmp31 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp29 = mmc_mk_nil();
    tmpMeta28 = __omcQ_24tmpVar29;
  }
  _fullLocal = omc_NBAdjacency_Matrix_createFull(threadData, _adjacencyVars, omc_NBEquation_EquationPointers_fromList(threadData, omc_List_flatten(threadData, tmpMeta28)), 1);

  _sparsity = omc_NBAdjacency_Matrix_fullToSparsity(threadData, _fullLocal, _comps, _seed_set, _pder_set, _seed_diff_map, 0 /* false */);

  tmpMeta32 = mmc_mk_box7(4, &NBackendDAE_JACOBIAN__desc, _name, mmc_mk_integer((modelica_integer)_jacType), _varDataJac, listArray(_diffed_comps), _sparsity, mmc_mk_boolean(0 /* false */));
  _jacobian = mmc_mk_some(tmpMeta32);
  _return: OMC_LABEL_UNUSED
  return _jacobian;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianSymbolic(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _strongComponents, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _staticAsContinuous)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  tmp2 = mmc_unbox_integer(_staticAsContinuous);
  _jacobian = omc_NBJacobian_jacobianSymbolic(threadData, _name, tmp1, _seedCandidates, _partialCandidates, _equations, _strongComponents, _full, _funcMap, tmp2);
  /* skip box _jacobian; Option<NBackendDAE> */
  return _jacobian;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_compJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _full, modelica_metatype _funcMap, modelica_integer _kind, modelica_boolean *out_updated)
{
  modelica_metatype _comp = NULL;
  modelica_boolean _updated;
  modelica_metatype _strict = NULL;
  modelica_metatype _residual_comps = NULL;
  modelica_metatype _seed_candidates = NULL;
  modelica_metatype _residual_vars = NULL;
  modelica_metatype _inner_vars = NULL;
  modelica_boolean _staticAsContinuous;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  // _updated has no default value.
  // _strict has no default value.
  // _residual_comps has no default value.
  // _seed_candidates has no default value.
  // _residual_vars has no default value.
  // _inner_vars has no default value.
  _staticAsContinuous = omc_NBPartition_kindIsInitial(threadData, (modelica_integer)_kind);


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
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));

          _strict = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar30;
            modelica_integer tmp10;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar31;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar30 = omc_NBStrongComponent_fromSolvedEquationSlice(threadData, _eqn);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar31;
          }
          _residual_comps = tmpMeta7;

          {
            modelica_metatype __omcQ_24tmpVar33;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar32;
            modelica_integer tmp14;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 2)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar33 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar33;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar32 = omc_NBSlice_getT(threadData, _var);
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar33;
          }
          _seed_candidates = tmpMeta11;

          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp18;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar35;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                __omcQ_24tmpVar34 = omc_NBEquation_Equation_getResidualVar(threadData, omc_NBSlice_getT(threadData, _eqn));
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar35;
          }
          _residual_vars = tmpMeta15;

          {
            modelica_metatype __omcQ_24tmpVar39;
            modelica_metatype tmpMeta20;
            modelica_metatype tmpMeta21;
            modelica_metatype __omcQ_24tmpVar38;
            modelica_integer tmp25;
            modelica_metatype _comp_loopVar = 0;
            modelica_integer tmp26;
            modelica_metatype _comp;
            _comp_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4)));
            tmp26 = 1;
            tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar39 = tmpMeta20; /* defaultValue */
            while(1) {
              tmp25 = 1;
              if (tmp26 <= arrayLength(_comp_loopVar)) {
                _comp = arrayGet(_comp_loopVar, tmp26++);
                tmp25--;
              }
              if (tmp25 == 0) {
                {
                  modelica_metatype __omcQ_24tmpVar37;
                  modelica_metatype* tmp22;
                  modelica_metatype tmpMeta23;
                  modelica_metatype __omcQ_24tmpVar36;
                  modelica_integer tmp24;
                  modelica_metatype _var_loopVar = 0;
                  modelica_metatype _var;
                  _var_loopVar = omc_NBStrongComponent_getVariables(threadData, _comp);
                  tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar37 = tmpMeta23; /* defaultValue */
                  tmp22 = &__omcQ_24tmpVar37;
                  while(1) {
                    tmp24 = 1;
                    while (!listEmpty(_var_loopVar)) {
                      _var = MMC_CAR(_var_loopVar);
                      _var_loopVar = MMC_CDR(_var_loopVar);
                      if (omc_NBVariable_isContinuous(threadData, _var, omc_NBPartition_kindIsInitial(threadData, (modelica_integer)_kind))) {
                        tmp24--;
                        break;
                      }
                    }
                    if (tmp24 == 0) {
                      __omcQ_24tmpVar36 = _var;
                      *tmp22 = mmc_mk_cons(__omcQ_24tmpVar36,0);
                      tmp22 = &MMC_CDR(*tmp22);
                    } else if (tmp24 == 1) {
                      break;
                    } else {
                      goto goto_2;
                    }
                  }
                  *tmp22 = mmc_mk_nil();
                  tmpMeta21 = __omcQ_24tmpVar37;
                }
                __omcQ_24tmpVar38 = tmpMeta21;
                __omcQ_24tmpVar39 = listAppend(__omcQ_24tmpVar38, __omcQ_24tmpVar39);
              } else if (tmp25 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmpMeta19 = __omcQ_24tmpVar39;
          }
          _inner_vars = tmpMeta19;

          {
            modelica_metatype __omcQ_24tmpVar41;
            modelica_metatype* tmp29;
            modelica_metatype tmpMeta30;
            modelica_metatype __omcQ_24tmpVar40;
            modelica_integer tmp31;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar41 = tmpMeta30; /* defaultValue */
            tmp29 = &__omcQ_24tmpVar41;
            while(1) {
              tmp31 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp31--;
              }
              if (tmp31 == 0) {
                __omcQ_24tmpVar40 = omc_NBSlice_getT(threadData, _eqn);
                *tmp29 = mmc_mk_cons(__omcQ_24tmpVar40,0);
                tmp29 = &MMC_CDR(*tmp29);
              } else if (tmp31 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp29 = mmc_mk_nil();
            tmpMeta28 = __omcQ_24tmpVar41;
          }
          tmpMeta32 = stringAppend(omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind),(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))))?_OMC_LIT73:_OMC_LIT74));
          tmpMeta33 = stringAppend(tmpMeta32,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))))));
          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[5] = omc_NBJacobian_nonlinear(threadData, omc_NBVariable_VariablePointers_fromList(threadData, _seed_candidates, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, listAppend(_residual_vars, _inner_vars), 0 /* false */), omc_NBEquation_EquationPointers_fromList(threadData, tmpMeta28), omc_Array_appendList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4))), _residual_comps), _full, _funcMap, tmpMeta33, omc_NBPartition_kindIsInitial(threadData, (modelica_integer)_kind));
          _strict = tmpMeta27;

          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_comp), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[3] = _strict;
          _comp = tmpMeta34;

          if(omc_Flags_isSet(threadData, _OMC_LIT77))
          {
            tmpMeta35 = stringAppend(omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)),_OMC_LIT40);
            fputs(MMC_STRINGDATA(tmpMeta35),stdout);
          }
          tmpMeta[0+0] = _comp;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {

          /* Pattern matching succeeded */
          tmpMeta[0+0] = _comp;
          tmp1_c1 = 0 /* false */;
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
  _updated = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_updated) { *out_updated = _updated; }
  return _comp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_compJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _kind, modelica_metatype *out_updated)
{
  modelica_integer tmp1;
  modelica_boolean _updated;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _comp = omc_NBJacobian_compJacobian(threadData, __omcQ_24in_5Fcomp, _full, _funcMap, tmp1, &_updated);
  /* skip box _comp; NBStrongComponent */
  if (out_updated) { *out_updated = mmc_mk_icon(_updated); }
  return _comp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_partJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _funcMap, modelica_metatype _knowns, modelica_string _name, modelica_fnptr _func)
{
  modelica_metatype _part = NULL;
  modelica_integer _jacType;
  modelica_metatype _unknowns = NULL;
  modelica_metatype _derivative_vars = NULL;
  modelica_metatype _state_vars = NULL;
  modelica_metatype _seedCandidates = NULL;
  modelica_metatype _partialCandidates = NULL;
  modelica_metatype _jacobian = NULL;
  modelica_metatype _LFG_jacobian = NULL;
  modelica_metatype _MRF_jacobian = NULL;
  modelica_metatype _R0_jacobian = NULL;
  modelica_metatype _adjointJac = NULL;
  modelica_integer _kind;
  modelica_boolean _updated;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  // _jacType has no default value.
  // _unknowns has no default value.
  // _derivative_vars has no default value.
  // _state_vars has no default value.
  // _seedCandidates has no default value.
  // _partialCandidates has no default value.
  // _jacobian has no default value.
  _LFG_jacobian = mmc_mk_none();
  _MRF_jacobian = mmc_mk_none();
  _R0_jacobian = mmc_mk_none();
  // _adjointJac has no default value.
  _kind = omc_NBPartition_Partition_getKind(threadData, _part);
  // _updated has no default value.
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)));
    {
      modelica_metatype _comps = NULL;
      modelica_metatype _tmp = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _comps has no default value.
      // _tmp has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_integer tmp9;
          modelica_integer tmp10;
          if (optionNone(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
          _comps = tmpMeta7;
          /* Pattern matching succeeded */
          tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = arrayLength(_comps);
          if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
            {

              _tmp = omc_NBJacobian_compJacobian(threadData, arrayGet(_comps,_i) /* DAE.ASUB */, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, (modelica_integer)_kind ,&_updated);

              if(_updated)
              {
                arrayUpdate(_comps, _i, _tmp);
              }
            }
          }
          tmpMeta2 = mmc_mk_some(_comps);
          goto tmp4_done;
        }
        case 1: {

          /* Pattern matching succeeded */
          tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)));
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
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[9] = tmpMeta2;
  _part = tmpMeta1;

  if(omc_NBPartition_Partition_isODEorDAE(threadData, _part))
  {
    _partialCandidates = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)));

    _unknowns = ((omc_NBPartition_Partition_getKind(threadData, _part) == 7)?omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 5)))):(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))));

    _jacType = ((omc_NBPartition_Partition_getKind(threadData, _part) == 7)?2:1);

    {
      modelica_metatype __omcQ_24tmpVar43;
      modelica_metatype* tmp12;
      modelica_metatype tmpMeta13;
      modelica_metatype __omcQ_24tmpVar42;
      modelica_integer tmp14;
      modelica_metatype _var_loopVar = 0;
      modelica_metatype _var;
      _var_loopVar = omc_NBVariable_VariablePointers_toList(threadData, _unknowns);
      tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar43 = tmpMeta13; /* defaultValue */
      tmp12 = &__omcQ_24tmpVar43;
      while(1) {
        tmp14 = 1;
        while (!listEmpty(_var_loopVar)) {
          _var = MMC_CAR(_var_loopVar);
          _var_loopVar = MMC_CDR(_var_loopVar);
          if (omc_NBVariable_isStateDerivative(threadData, _var)) {
            tmp14--;
            break;
          }
        }
        if (tmp14 == 0) {
          __omcQ_24tmpVar42 = _var;
          *tmp12 = mmc_mk_cons(__omcQ_24tmpVar42,0);
          tmp12 = &MMC_CDR(*tmp12);
        } else if (tmp14 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp12 = mmc_mk_nil();
      tmpMeta11 = __omcQ_24tmpVar43;
    }
    _derivative_vars = tmpMeta11;

    {
      modelica_metatype __omcQ_24tmpVar45;
      modelica_metatype* tmp16;
      modelica_metatype tmpMeta17;
      modelica_metatype __omcQ_24tmpVar44;
      modelica_integer tmp18;
      modelica_metatype _var_loopVar = 0;
      modelica_metatype _var;
      _var_loopVar = _derivative_vars;
      tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar45 = tmpMeta17; /* defaultValue */
      tmp16 = &__omcQ_24tmpVar45;
      while(1) {
        tmp18 = 1;
        if (!listEmpty(_var_loopVar)) {
          _var = MMC_CAR(_var_loopVar);
          _var_loopVar = MMC_CDR(_var_loopVar);
          tmp18--;
        }
        if (tmp18 == 0) {
          __omcQ_24tmpVar44 = omc_Util_getOption(threadData, omc_NBVariable_getVarState(threadData, _var, NULL));
          *tmp16 = mmc_mk_cons(__omcQ_24tmpVar44,0);
          tmp16 = &MMC_CDR(*tmp16);
        } else if (tmp18 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp16 = mmc_mk_nil();
      tmpMeta15 = __omcQ_24tmpVar45;
    }
    _state_vars = tmpMeta15;

    _seedCandidates = omc_NBVariable_VariablePointers_fromList(threadData, _state_vars, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partialCandidates), 4)))));

    _jacobian = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _name, mmc_mk_integer((modelica_integer)_jacType), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, mmc_mk_boolean(omc_NBPartition_kindIsInitial(threadData, (modelica_integer)_kind))) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _name, mmc_mk_integer((modelica_integer)_jacType), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, mmc_mk_boolean(omc_NBPartition_kindIsInitial(threadData, (modelica_integer)_kind)));

    if(omc_Flags_getConfigBool(threadData, _OMC_LIT82))
    {
      _LFG_jacobian = omc_NBJacobian_partJacobianDynamicOptimization(threadData, _part, _knowns, _name, ((modelica_fnptr) _func), _funcMap ,&_MRF_jacobian ,&_R0_jacobian);
    }

    if((((stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT108), _OMC_LIT97)) && isSome(_jacobian)) && (!omc_NBackendDAE_getIsAdjoint(threadData, omc_Util_getOption(threadData, _jacobian)))))
    {
      _adjointJac = omc_NBJacobian_jacobianSymbolicAdjoint(threadData, _name, (modelica_integer)_jacType, _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, ((modelica_integer)_kind == 5));

      tmpMeta20 = mmc_mk_box7(3, &NBPartition_Association_CONTINUOUS__desc, mmc_mk_integer((modelica_integer)_kind), _jacobian, _adjointJac, _LFG_jacobian, _MRF_jacobian, _R0_jacobian);
      tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(10));
      memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[3] = tmpMeta20;
      _part = tmpMeta19;
    }
    else
    {
      if(isSome(_jacobian))
      {
        if(omc_NBackendDAE_getIsAdjoint(threadData, omc_Util_getOption(threadData, _jacobian)))
        {
          tmpMeta22 = mmc_mk_box7(3, &NBPartition_Association_CONTINUOUS__desc, mmc_mk_integer((modelica_integer)_kind), mmc_mk_none(), _jacobian, _LFG_jacobian, _MRF_jacobian, _R0_jacobian);
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[3] = tmpMeta22;
          _part = tmpMeta21;
        }
        else
        {
          tmpMeta24 = mmc_mk_box7(3, &NBPartition_Association_CONTINUOUS__desc, mmc_mk_integer((modelica_integer)_kind), _jacobian, mmc_mk_none(), _LFG_jacobian, _MRF_jacobian, _R0_jacobian);
          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[3] = tmpMeta24;
          _part = tmpMeta23;
        }
      }
      else
      {
        tmpMeta26 = mmc_mk_box7(3, &NBPartition_Association_CONTINUOUS__desc, mmc_mk_integer((modelica_integer)_kind), mmc_mk_none(), mmc_mk_none(), _LFG_jacobian, _MRF_jacobian, _R0_jacobian);
        tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(10));
        memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[3] = tmpMeta26;
        _part = tmpMeta25;
      }
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT77))
    {
      fputs(MMC_STRINGDATA(omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 2))),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _part;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_partJacobianDynamicOptimization(threadData_t *threadData, modelica_metatype _part, modelica_metatype _all_knowns, modelica_string _name, modelica_fnptr _func, modelica_metatype _funcMap, modelica_metatype *out_MRF_jacobian, modelica_metatype *out_R0_jacobian)
{
  modelica_metatype _LFG_jacobian = NULL;
  modelica_metatype _MRF_jacobian = NULL;
  modelica_metatype _R0_jacobian = NULL;
  modelica_boolean _staticAsContinuous;
  modelica_metatype _seedCandidates = NULL;
  modelica_metatype _partialCandidates = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _LFG_jacobian has no default value.
  // _MRF_jacobian has no default value.
  // _R0_jacobian has no default value.
  _staticAsContinuous = 1 /* true */;
  // _seedCandidates has no default value.
  // _partialCandidates has no default value.
  _partialCandidates = omc_NBVariable_VariablePointers_fromList(threadData, listAppend(omc_NBJacobian_getLfgPartialCandidates(threadData, _part), omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))))), mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)))), 4)))));

  _seedCandidates = omc_NBVariable_VariablePointers_fromList(threadData, omc_NBJacobian_getSeedCandidatesDynamicOptimization(threadData, _part, _all_knowns, boxvar_NBVariable_isLfgVariable), mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partialCandidates), 4)))));

  _LFG_jacobian = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _name, mmc_mk_integer(5), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, mmc_mk_boolean(_staticAsContinuous)) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _name, mmc_mk_integer(5), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, mmc_mk_boolean(_staticAsContinuous));

  _partialCandidates = omc_NBVariable_VariablePointers_fromList(threadData, listAppend(omc_NBJacobian_getMrfPartialCandidates(threadData, _part), omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))))), mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)))), 4)))));

  _seedCandidates = omc_NBVariable_VariablePointers_fromList(threadData, omc_NBJacobian_getSeedCandidatesDynamicOptimization(threadData, _part, _all_knowns, boxvar_NBVariable_isMrfVariable), mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partialCandidates), 4)))));

  _MRF_jacobian = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _name, mmc_mk_integer(6), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, mmc_mk_boolean(_staticAsContinuous)) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _name, mmc_mk_integer(6), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, mmc_mk_boolean(_staticAsContinuous));

  _partialCandidates = omc_NBVariable_VariablePointers_fromList(threadData, listAppend(omc_NBJacobian_getR0PartialCandidates(threadData, _part), omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))))), mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)))), 4)))));

  _seedCandidates = omc_NBVariable_VariablePointers_fromList(threadData, omc_NBJacobian_getSeedCandidatesDynamicOptimization(threadData, _part, _all_knowns, boxvar_NBVariable_isR0Variable), mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partialCandidates), 4)))));

  _R0_jacobian = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _name, mmc_mk_integer(7), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, mmc_mk_boolean(_staticAsContinuous)) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _name, mmc_mk_integer(7), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 7))), _funcMap, mmc_mk_boolean(_staticAsContinuous));
  _return: OMC_LABEL_UNUSED
  if (out_MRF_jacobian) { *out_MRF_jacobian = _MRF_jacobian; }
  if (out_R0_jacobian) { *out_R0_jacobian = _R0_jacobian; }
  return _LFG_jacobian;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getR0PartialCandidates(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _partialCandidates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _partialCandidates = tmpMeta1;
  {
    modelica_metatype _var_ptr;
    for (tmpMeta2 = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var_ptr = MMC_CAR(tmpMeta2);
      if(omc_NBVariable_isInitialConstraint(threadData, _var_ptr))
      {
        tmpMeta3 = mmc_mk_cons(_var_ptr, _partialCandidates);
        _partialCandidates = tmpMeta3;
      }
    }
  }

  _partialCandidates = listReverse(_partialCandidates);
  _return: OMC_LABEL_UNUSED
  return _partialCandidates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getMrfPartialCandidates(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _partialCandidates = NULL;
  modelica_metatype _mayer_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _final_vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partialCandidates has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _mayer_vars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _final_vars = tmpMeta2;
  {
    modelica_metatype _var_ptr;
    for (tmpMeta3 = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _var_ptr = MMC_CAR(tmpMeta3);
      if(omc_NBVariable_isMayer(threadData, _var_ptr))
      {
        tmpMeta4 = mmc_mk_cons(_var_ptr, _mayer_vars);
        _mayer_vars = tmpMeta4;
      }
      else
      {
        if(omc_NBVariable_isFinalConstraint(threadData, _var_ptr))
        {
          tmpMeta5 = mmc_mk_cons(_var_ptr, _final_vars);
          _final_vars = tmpMeta5;
        }
      }
    }
  }

  _partialCandidates = listReverse(listAppend(_mayer_vars, _final_vars));
  _return: OMC_LABEL_UNUSED
  return _partialCandidates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getLfgPartialCandidates(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _partialCandidates = NULL;
  modelica_metatype _lagrange_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _derivative_vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _path_vars = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partialCandidates has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _lagrange_vars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _derivative_vars = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _path_vars = tmpMeta3;
  {
    modelica_metatype _var_ptr;
    for (tmpMeta4 = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _var_ptr = MMC_CAR(tmpMeta4);
      if(omc_NBVariable_isLagrange(threadData, _var_ptr))
      {
        tmpMeta5 = mmc_mk_cons(_var_ptr, _lagrange_vars);
        _lagrange_vars = tmpMeta5;
      }
      else
      {
        if(omc_NBVariable_isStateDerivative(threadData, _var_ptr))
        {
          tmpMeta6 = mmc_mk_cons(_var_ptr, _derivative_vars);
          _derivative_vars = tmpMeta6;
        }
        else
        {
          if(omc_NBVariable_isPathConstraint(threadData, _var_ptr))
          {
            tmpMeta7 = mmc_mk_cons(_var_ptr, _path_vars);
            _path_vars = tmpMeta7;
          }
        }
      }
    }
  }

  _partialCandidates = listReverse(listAppend(_lagrange_vars, listAppend(_derivative_vars, _path_vars)));
  _return: OMC_LABEL_UNUSED
  return _partialCandidates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getSeedCandidatesDynamicOptimization(threadData_t *threadData, modelica_metatype _part, modelica_metatype _all_knowns, modelica_fnptr _filter)
{
  modelica_metatype _unknowns = NULL;
  modelica_metatype _derivative_vars = NULL;
  modelica_metatype _unknown_states = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unknowns has no default value.
  // _derivative_vars has no default value.
  // _unknown_states has no default value.
  _unknowns = omc_NBJacobian_getOptimizableVars(threadData, _all_knowns);

  {
    modelica_metatype __omcQ_24tmpVar47;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar46;
    modelica_integer tmp4;
    modelica_metatype _var_loopVar = 0;
    modelica_metatype _var;
    _var_loopVar = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar47 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar47;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_var_loopVar)) {
        _var = MMC_CAR(_var_loopVar);
        _var_loopVar = MMC_CDR(_var_loopVar);
        if (omc_NBVariable_isStateDerivative(threadData, _var)) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar46 = _var;
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
  _derivative_vars = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar49;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar48;
    modelica_integer tmp8;
    modelica_metatype _var_loopVar = 0;
    modelica_metatype _var;
    _var_loopVar = _derivative_vars;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar49 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar49;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_var_loopVar)) {
        _var = MMC_CAR(_var_loopVar);
        _var_loopVar = MMC_CDR(_var_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar48 = omc_Util_getOption(threadData, omc_NBVariable_getVarState(threadData, _var, NULL));
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
  _unknown_states = tmpMeta5;

  _unknowns = listAppend(_unknown_states, _unknowns);

  _unknowns = omc_List_filterOnTrue(threadData, _unknowns, ((modelica_fnptr) _filter));
  _return: OMC_LABEL_UNUSED
  return _unknowns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_getOptimizableVars(threadData_t *threadData, modelica_metatype _variables)
{
  modelica_metatype _optimizable_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _optimizable_vars = tmpMeta1;
  {
    modelica_metatype _var_ptr;
    for (tmpMeta2 = omc_NBVariable_VariablePointers_toList(threadData, _variables); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var_ptr = MMC_CAR(tmpMeta2);
      if(omc_NBVariable_isOptimizable(threadData, _var_ptr))
      {
        tmpMeta3 = mmc_mk_cons(_var_ptr, _optimizable_vars);
        _optimizable_vars = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _optimizable_vars;
}

DLLDirection
modelica_string omc_NBJacobian_jacobianTypeString(threadData_t *threadData, modelica_integer _jacType)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_jacType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT110;
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT111;
          goto tmp3_done;
        }
        case 4: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT112;
          goto tmp3_done;
        }
        case 5: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT113;
          goto tmp3_done;
        }
        case 6: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT114;
          goto tmp3_done;
        }
        case 7: {
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT115;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {

          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT116;
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
modelica_metatype boxptr_NBJacobian_jacobianTypeString(threadData_t *threadData, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  _str = omc_NBJacobian_jacobianTypeString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_NBJacobian_toString(threadData_t *threadData, modelica_metatype _jacobian, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  _str = omc_NBackendDAE_toString(threadData, _jacobian, _str);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_fnptr omc_NBJacobian_getModule(threadData_t *threadData)
{
  modelica_fnptr _func;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = omc_Flags_getConfigString(threadData, _OMC_LIT108);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (8 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT91), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBJacobian_jacobianSymbolic;
          goto tmp3_done;
        }
        case 1: {
          if (15 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT94), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBJacobian_jacobianSymbolicAdjoint;
          goto tmp3_done;
        }
        case 2: {
          if (13 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT97), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBJacobian_jacobianSymbolic;
          goto tmp3_done;
        }
        case 3: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT84), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBJacobian_jacobianNumeric;
          goto tmp3_done;
        }
        case 4: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT86), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBJacobian_jacobianNone;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;

          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT117,omc_Flags_getConfigString(threadData, _OMC_LIT108));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta6);
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
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  return _func;
}

DLLDirection
modelica_metatype omc_NBJacobian_combine(threadData_t *threadData, modelica_metatype _jacobians, modelica_string _name)
{
  modelica_metatype _jacobian = NULL;
  modelica_integer _jacType;
  modelica_metatype _variables = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _unknowns = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _auxiliaryVars = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _aliasVars = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _diffVars = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _dependencies = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _resultVars = NULL;
  modelica_metatype tmpMeta7;
  modelica_metatype _tmpVars = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype _seedVars = NULL;
  modelica_metatype tmpMeta9;
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta10;
  modelica_metatype _sparsity_patterns = NULL;
  modelica_metatype tmpMeta11;
  modelica_metatype _varData = NULL;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  _jacType = 4;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _variables = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _unknowns = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _auxiliaryVars = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _aliasVars = tmpMeta4;
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _diffVars = tmpMeta5;
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _dependencies = tmpMeta6;
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _resultVars = tmpMeta7;
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpVars = tmpMeta8;
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _seedVars = tmpMeta9;
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _comps = tmpMeta10;
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _sparsity_patterns = tmpMeta11;
  // _varData has no default value.
  if(omc_List_hasOneElement(threadData, _jacobians))
  {
    _jacobian = listHead(_jacobians);

    { /* match expression */
      modelica_metatype tmp15_1;
      tmp15_1 = _jacobian;
      {
        volatile mmc_switch_type tmp15;
        int tmp16;
        tmp15 = 0;
        for (; tmp15 < 2; tmp15++) {
          switch (MMC_SWITCH_CAST(tmp15)) {
          case 0: {
            modelica_metatype tmpMeta17;
            if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,1,6) == 0) goto tmp14_end;

            /* Pattern matching succeeded */
            tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_jacobian), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = _name;
            _jacobian = tmpMeta17;
            tmpMeta12 = _jacobian;
            goto tmp14_done;
          }
          case 1: {
            modelica_metatype tmpMeta18;
            modelica_metatype tmpMeta19;

            /* Pattern matching succeeded */
            tmpMeta19 = stringAppend(_OMC_LIT118,omc_NBackendDAE_toString(threadData, _jacobian, _OMC_LIT15));
            tmpMeta18 = mmc_mk_cons(tmpMeta19, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta18);
            goto goto_13;
            goto tmp14_done;
          }
          }
          goto tmp14_end;
          tmp14_end: ;
        }
        goto goto_13;
        goto_13:;
        MMC_THROW_INTERNAL();
        goto tmp14_done;
        tmp14_done:;
      }
    }
    _jacobian = tmpMeta12;
  }
  else
  {
    {
      modelica_metatype _jac;
      for (tmpMeta20 = _jacobians; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
      {
        _jac = MMC_CAR(tmpMeta20);
        { /* match expression */
          modelica_metatype tmp23_1;
          tmp23_1 = _jac;
          {
            modelica_metatype _tmpVarData = NULL;
            volatile mmc_switch_type tmp23;
            int tmp24;
            // _tmpVarData has no default value.
            tmp23 = 0;
            for (; tmp23 < 2; tmp23++) {
              switch (MMC_SWITCH_CAST(tmp23)) {
              case 0: {
                modelica_metatype tmpMeta25;
                modelica_metatype tmpMeta26;
                if (mmc__uniontype__metarecord__typedef__equal(tmp23_1,1,6) == 0) goto tmp22_end;
                tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp23_1), 4));
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,1,9) == 0) goto tmp22_end;

                _tmpVarData = tmpMeta25;
                /* Pattern matching succeeded */
                _jacType = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 3))));

                _variables = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 2)))), _variables);

                _unknowns = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 3)))), _unknowns);

                _auxiliaryVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 4)))), _auxiliaryVars);

                _aliasVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 5)))), _aliasVars);

                _diffVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 6)))), _diffVars);

                _dependencies = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 7)))), _dependencies);

                _resultVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 8)))), _resultVars);

                _tmpVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 9)))), _tmpVars);

                _seedVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 10)))), _seedVars);

                _comps = listAppend(arrayList((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 5)))), _comps);

                tmpMeta26 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 6))), _sparsity_patterns);
                _sparsity_patterns = tmpMeta26;
                goto tmp22_done;
              }
              case 1: {
                modelica_metatype tmpMeta27;
                modelica_metatype tmpMeta28;

                /* Pattern matching succeeded */
                tmpMeta28 = stringAppend(_OMC_LIT118,omc_NBackendDAE_toString(threadData, _jac, _OMC_LIT15));
                tmpMeta27 = mmc_mk_cons(tmpMeta28, MMC_REFSTRUCTLIT(mmc_nil));
                omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta27);
                goto goto_21;
                goto tmp22_done;
              }
              }
              goto tmp22_end;
              tmp22_end: ;
            }
            goto goto_21;
            goto_21:;
            MMC_THROW_INTERNAL();
            goto tmp22_done;
            tmp22_done:;
          }
        }
        ;
      }
    }

    tmpMeta30 = mmc_mk_box10(4, &NBVariable_VarData_VAR__DATA__JAC__desc, omc_NBVariable_VariablePointers_fromList(threadData, _variables, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _unknowns, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _auxiliaryVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _aliasVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _diffVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _dependencies, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _resultVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _tmpVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _seedVars, 0 /* false */));
    _varData = tmpMeta30;

    tmpMeta31 = mmc_mk_box7(4, &NBackendDAE_JACOBIAN__desc, _name, mmc_mk_integer((modelica_integer)_jacType), _varData, listArray(_comps), omc_NBAdjacency_Matrix_combine(threadData, _sparsity_patterns), mmc_mk_boolean((stringEqual(_name, _OMC_LIT119))));
    _jacobian = tmpMeta31;
  }
  _return: OMC_LABEL_UNUSED
  return _jacobian;
}

DLLDirection
modelica_metatype omc_NBJacobian_nonlinear(threadData_t *threadData, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _comps, modelica_metatype _full, modelica_metatype _funcMap, modelica_string _name, modelica_boolean _staticAsContinuous)
{
  modelica_metatype _jacobian = NULL;
  modelica_fnptr _func;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  _func = (omc_Flags_isSet(threadData, _OMC_LIT122)?boxvar_NBJacobian_jacobianSymbolic:boxvar_NBJacobian_jacobianNumeric);
  _jacobian = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _name, mmc_mk_integer(4), _seedCandidates, _partialCandidates, _equations, mmc_mk_some(_comps), _full, _funcMap, mmc_mk_boolean(_staticAsContinuous)) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _name, mmc_mk_integer(4), _seedCandidates, _partialCandidates, _equations, mmc_mk_some(_comps), _full, _funcMap, mmc_mk_boolean(_staticAsContinuous));
  _return: OMC_LABEL_UNUSED
  return _jacobian;
}
modelica_metatype boxptr_NBJacobian_nonlinear(threadData_t *threadData, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _comps, modelica_metatype _full, modelica_metatype _funcMap, modelica_metatype _name, modelica_metatype _staticAsContinuous)
{
  modelica_integer tmp1;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_staticAsContinuous);
  _jacobian = omc_NBJacobian_nonlinear(threadData, _seedCandidates, _partialCandidates, _equations, _comps, _full, _funcMap, _name, tmp1);
  /* skip box _jacobian; Option<NBackendDAE> */
  return _jacobian;
}

DLLDirection
modelica_metatype omc_NBJacobian_applyToPartitions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype __omcQ_24in_5FfuncMap, modelica_metatype _knowns, modelica_string _name, modelica_fnptr _func, modelica_metatype *out_funcMap)
{
  modelica_metatype _partitions = NULL;
  modelica_metatype _funcMap = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partitions = __omcQ_24in_5Fpartitions;
  _funcMap = __omcQ_24in_5FfuncMap;
  {
    modelica_metatype __omcQ_24tmpVar51;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar50;
    modelica_integer tmp4;
    modelica_metatype _part_loopVar = 0;
    modelica_metatype _part;
    _part_loopVar = _partitions;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar51 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar51;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_part_loopVar)) {
        _part = MMC_CAR(_part_loopVar);
        _part_loopVar = MMC_CDR(_part_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar50 = omc_NBJacobian_partJacobian(threadData, _part, _funcMap, _knowns, _name, ((modelica_fnptr) _func));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar50,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar51;
  }
  _partitions = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_funcMap) { *out_funcMap = _funcMap; }
  return _partitions;
}

DLLDirection
modelica_metatype omc_NBJacobian_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_integer _kind)
{
  modelica_metatype _bdae = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  _func = omc_NBJacobian_getModule(threadData);
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bdae;
    {
      modelica_string _name = NULL;
      modelica_metatype _knowns = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _knowns has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_string tmp9 = 0;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,24) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));

          _knowns = tmpMeta7;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT77))
          {
            tmpMeta8 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT123),_OMC_LIT40);
            fputs(MMC_STRINGDATA(tmpMeta8),stdout);
          }

          { /* match expression */
            modelica_integer tmp12_1;
            tmp12_1 = (modelica_integer)_kind;
            {
              int tmp12;
              {
                switch (MMC_SWITCH_CAST(tmp12_1)) {
                case 1: {
                  modelica_metatype tmpMeta13;
                  if (1 != tmp12_1) goto tmp11_end;
                  /* Pattern matching succeeded */
                  _name = _OMC_LIT124;

                  tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_NBJacobian_applyToPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 14))), _knowns, _name, omc_NBJacobian_getModule(threadData), NULL);
                  _bdae = tmpMeta13;
                  tmp9 = _name;
                  goto tmp11_done;
                }
                case 7: {
                  modelica_metatype tmpMeta14;
                  if (7 != tmp12_1) goto tmp11_end;
                  /* Pattern matching succeeded */
                  _name = _OMC_LIT125;

                  tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[9] = mmc_mk_some(omc_NBJacobian_applyToPartitions(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 9)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 14))), _knowns, _name, omc_NBJacobian_getModule(threadData), NULL));
                  _bdae = tmpMeta14;
                  tmp9 = _name;
                  goto tmp11_done;
                }
                default:
                tmp11_default: OMC_LABEL_UNUSED; {
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;

                  /* Pattern matching succeeded */
                  tmpMeta16 = stringAppend(_OMC_LIT126,omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind));
                  tmpMeta15 = mmc_mk_cons(tmpMeta16, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta15);
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
          _name = tmp9;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[4] = omc_NBJacobian_applyToPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 14))), _knowns, _name, omc_NBJacobian_getModule(threadData), NULL);
          _bdae = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[3] = omc_NBJacobian_applyToPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 14))), _knowns, _name, omc_NBJacobian_getModule(threadData), NULL);
          _bdae = tmpMeta18;

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[5] = omc_NBJacobian_applyToPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 14))), _knowns, _name, omc_NBJacobian_getModule(threadData), NULL);
          _bdae = tmpMeta19;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[7] = omc_NBJacobian_applyToPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 14))), _knowns, _name, omc_NBJacobian_getModule(threadData), NULL);
          _bdae = tmpMeta20;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 8)))))
          {
            tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(15));
            memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[8] = mmc_mk_some(omc_NBJacobian_applyToPartitions(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 8)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 14))), _knowns, _name, omc_NBJacobian_getModule(threadData), NULL));
            _bdae = tmpMeta21;
          }
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;

          /* Pattern matching succeeded */
          tmpMeta23 = stringAppend(_OMC_LIT126,omc_NBackendDAE_toString(threadData, _bdae, _OMC_LIT15));
          tmpMeta22 = mmc_mk_cons(tmpMeta23, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta22);
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
modelica_metatype boxptr_NBJacobian_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _bdae = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _bdae = omc_NBJacobian_main(threadData, __omcQ_24in_5Fbdae, tmp1);
  /* skip box _bdae; NBackendDAE */
  return _bdae;
}

DLLDirection
modelica_boolean omc_NBJacobian_isDynamic(threadData_t *threadData, modelica_integer _jacType)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_jacType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          if (7 != tmp4_1) goto tmp3_end;
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
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return _b;
}
modelica_metatype boxptr_NBJacobian_isDynamic(threadData_t *threadData, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_jacType);
  _b = omc_NBJacobian_isDynamic(threadData, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}
