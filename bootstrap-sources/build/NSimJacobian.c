#include "omc_simulation_settings.h"
#include "NSimJacobian.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "NSimJacobian.SimJacobian.convert failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,40,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,1) {_OMC_LIT4,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NSimJacobian.SimJacobian.getJacobianHT failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,46,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NSimJacobian.SimJacobian.getJacobianBlocks failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,50,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,1) {_OMC_LIT8,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,0,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,4) {&NSimJacobian_Sparsity_EMPTY__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,16,3) {&NSimJacobian_SimJacobian_SIM__JAC__desc,_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),_OMC_LIT10}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "NSimJacobian.SimJacobian.empty failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,38,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,1) {_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "OPT_LFG"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,7,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "OPT_MRF"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,7,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "OPT_R0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,6,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "A"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "ADJ"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,3,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "generateDynamicJacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,23,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "numeric"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,7,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,4,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Does not generate Jacobian. For use with explicit solvers."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,58,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,0) {_OMC_LIT24,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "Generates sparsity pattern for numeric Jacobian."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,48,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,0) {_OMC_LIT22,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "symbolic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,8,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Generates symbolic Jacobian. Used by dassl or ida solver with simulation flag '-jacobian'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,90,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,0) {_OMC_LIT29,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "symbolicadjoint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,15,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Generates adjoint Jacobian symbolically."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,40,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,0) {_OMC_LIT32,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "bidirectional"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,13,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Generates bidirectional Jacobian using star bicoloring (ColPack). Combines forward and adjoint modes."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,101,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,0) {_OMC_LIT35,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,1) {_OMC_LIT37,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,1) {_OMC_LIT34,_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,1) {_OMC_LIT31,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,1) {_OMC_LIT28,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,1) {_OMC_LIT26,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,1,1) {_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Select how Jacobian matrix is generated, where der(x) is differentiated w.r.t. x."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,81,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(49)),_OMC_LIT20,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT21,_OMC_LIT23,_OMC_LIT44,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "simCodeScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,16,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "Scalarizes variables during simcode phase."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,42,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(159)),_OMC_LIT47,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT21,_OMC_LIT48,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "NSimJacobian.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,15,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT52_6,0.0);
#define _OMC_LIT52_6 MMC_REFREALLIT(_OMC_LIT_STRUCT52_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(438)),MMC_IMMEDIATE(MMC_TAGFIXNUM(23)),MMC_IMMEDIATE(MMC_TAGFIXNUM(438)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT52_6}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT53_6,0.0);
#define _OMC_LIT53_6 MMC_REFREALLIT(_OMC_LIT_STRUCT53_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(461)),MMC_IMMEDIATE(MMC_TAGFIXNUM(19)),MMC_IMMEDIATE(MMC_TAGFIXNUM(461)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT53_6}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "NSimJacobian.SimJacobian.create failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,39,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,1) {_OMC_LIT54,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "SimCode Jacobian "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,17,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "(idx = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,7,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data ", partition = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,14,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,1,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,1,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "SeedVars (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,17,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,2,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "TmpVars (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,16,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "ResultVars (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,19,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "Column Equations (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,25,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "Constant Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,18,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "Generic Calls"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,13,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "[EMPTY] SimCode Jacobian "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,25,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "NSimJacobian.SimJacobian.toString failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,41,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,1) {_OMC_LIT69,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "Resizable Sparsity Pattern"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,26,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data " -- EMPTY -- \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,14,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,1,4) {&SimCode_Sparsity_EMPTY__desc,}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "NSimJacobian.Sparsity.create can only handle sparsity or empty matrices but got:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,81,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,1,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT76_6,0.0);
#define _OMC_LIT76_6 MMC_REFREALLIT(_OMC_LIT_STRUCT76_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(165)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(165)),MMC_IMMEDIATE(MMC_TAGFIXNUM(73)),_OMC_LIT76_6}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT77_6,0.0);
#define _OMC_LIT77_6 MMC_REFREALLIT(_OMC_LIT_STRUCT77_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(175)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(175)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT77_6}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,1,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,2,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,4,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,5,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data " ... "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,5,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#include "util/modelica.h"

#include "NSimJacobian_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_NSimJacobian_crefFlatOffset(threadData_t *threadData, modelica_metatype _cref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimJacobian_crefFlatOffset(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimJacobian_crefFlatOffset,2,0) {(void*) boxptr_NSimJacobian_crefFlatOffset,0}};
#define boxvar_NSimJacobian_crefFlatOffset MMC_REFSTRUCTLIT(boxvar_lit_NSimJacobian_crefFlatOffset)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimJacobian_crefSubDimPairsLeafToRoot(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimJacobian_crefSubDimPairsLeafToRoot,2,0) {(void*) boxptr_NSimJacobian_crefSubDimPairsLeafToRoot,0}};
#define boxvar_NSimJacobian_crefSubDimPairsLeafToRoot MMC_REFSTRUCTLIT(boxvar_lit_NSimJacobian_crefSubDimPairsLeafToRoot)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimJacobian_collectNodeSubDimPairsOuterFirst(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _dims);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimJacobian_collectNodeSubDimPairsOuterFirst,2,0) {(void*) boxptr_NSimJacobian_collectNodeSubDimPairsOuterFirst,0}};
#define boxvar_NSimJacobian_collectNodeSubDimPairsOuterFirst MMC_REFSTRUCTLIT(boxvar_lit_NSimJacobian_collectNodeSubDimPairsOuterFirst)

PROTECTED_FUNCTION_STATIC modelica_integer omc_NSimJacobian_crefFlatOffset(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _offset;
  modelica_metatype _pairs = NULL;
  modelica_integer _inner_prod;
  modelica_integer _sub_val;
  modelica_integer _dim_sz;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _offset = ((modelica_integer) 0);
  // _pairs has no default value.
  _inner_prod = ((modelica_integer) 1);
  // _sub_val has no default value.
  // _dim_sz has no default value.
  _pairs = omc_NSimJacobian_crefSubDimPairsLeafToRoot(threadData, _cref);

  {
    modelica_metatype _pair;
    for (tmpMeta1 = _pairs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _pair = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _pair;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      _sub_val = tmp4  /* pattern as ty=Integer */;
      _dim_sz = tmp6  /* pattern as ty=Integer */;

      _offset = _offset + ((((modelica_integer) -1) + _sub_val) * (_inner_prod));

      _inner_prod = (_inner_prod) * (_dim_sz);
    }
  }
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return _offset;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimJacobian_crefFlatOffset(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _offset;
  modelica_metatype out_offset;
  _offset = omc_NSimJacobian_crefFlatOffset(threadData, _cref);
  out_offset = mmc_mk_icon(_offset);
  return out_offset;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimJacobian_crefSubDimPairsLeafToRoot(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_metatype _pairs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _pairs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cref;
    {
      modelica_metatype _subs = NULL;
      modelica_metatype _node_ty = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _rest_pairs = NULL;
      modelica_metatype _node_pairs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _subs has no default value.
      // _node_ty has no default value.
      // _rest has no default value.
      // _rest_pairs has no default value.
      // _node_pairs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _subs = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _rest_pairs = omc_NSimJacobian_crefSubDimPairsLeafToRoot(threadData, _rest);

          _node_ty = omc_NFInstNode_InstNode_getType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))));

          _node_pairs = listReverse(omc_NSimJacobian_collectNodeSubDimPairsOuterFirst(threadData, _subs, omc_NFType_arrayDims(threadData, _node_ty)));
          tmpMeta1 = listAppend(_node_pairs, _rest_pairs);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
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
  _pairs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _pairs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimJacobian_collectNodeSubDimPairsOuterFirst(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _dims)
{
  modelica_metatype _pairs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _pairs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _subs;
    tmp4_2 = _dims;
    {
      modelica_metatype _s = NULL;
      modelica_metatype _rest_subs = NULL;
      modelica_metatype _d = NULL;
      modelica_metatype _rest_dims = NULL;
      modelica_metatype _rest_pairs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s has no default value.
      // _rest_subs has no default value.
      // _d has no default value.
      // _rest_dims has no default value.
      // _rest_pairs has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          _s = tmpMeta8;
          _rest_subs = tmpMeta9;
          _d = tmpMeta10;
          _rest_dims = tmpMeta11;
          /* Pattern matching succeeded */
          _rest_pairs = omc_NSimJacobian_collectNodeSubDimPairsOuterFirst(threadData, _rest_subs, _rest_dims);
          { /* match expression */
            modelica_metatype tmp15_1;
            tmp15_1 = _s;
            {
              modelica_integer _v2;
              volatile mmc_switch_type tmp15;
              int tmp16;
              // _v2 has no default value.
              tmp15 = 0;
              for (; tmp15 < 2; tmp15++) {
                switch (MMC_SWITCH_CAST(tmp15)) {
                case 0: {
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  modelica_integer tmp19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,2,1) == 0) goto tmp14_end;
                  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp15_1), 2));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,1) == 0) goto tmp14_end;
                  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
                  tmp19 = mmc_unbox_integer(tmpMeta18);
                  _v2 = tmp19  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  tmpMeta21 = mmc_mk_box2(0, mmc_mk_integer(_v2), mmc_mk_integer(omc_NFDimension_size(threadData, _d, 0 /* false */)));
                  tmpMeta20 = mmc_mk_cons(tmpMeta21, _rest_pairs);
                  tmpMeta12 = tmpMeta20;
                  goto tmp14_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta12 = _rest_pairs;
                  goto tmp14_done;
                }
                }
                goto tmp14_end;
                tmp14_end: ;
              }
              goto goto_13;
              goto_13:;
              goto goto_2;
              goto tmp14_done;
              tmp14_done:;
            }
          }tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta22;
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
  _pairs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _pairs;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_convert(threadData_t *threadData, modelica_metatype _simJac)
{
  modelica_metatype _oldJac = NULL;
  modelica_metatype _oldJacCol = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldJac has no default value.
  // _oldJacCol has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _simJac;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,15) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp9;
            modelica_metatype _blck_loopVar = 0;
            modelica_metatype _blck;
            _blck_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 6)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar3;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_blck_loopVar)) {
                _blck = MMC_CAR(_blck_loopVar);
                _blck_loopVar = MMC_CDR(_blck_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar2 = omc_NSimStrongComponent_Block_convert(threadData, _blck);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar3;
          }
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp13;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 8)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar5;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar4 = omc_NSimVar_SimVar_convert(threadData, _var);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar5;
          }
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp17;
            modelica_metatype _blck_loopVar = 0;
            modelica_metatype _blck;
            _blck_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 7)));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar7;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_blck_loopVar)) {
                _blck = MMC_CAR(_blck_loopVar);
                _blck_loopVar = MMC_CDR(_blck_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar6 = omc_NSimStrongComponent_Block_convert(threadData, _blck);
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar7;
          }
          tmpMeta18 = mmc_mk_box5(3, &SimCode_JacobianColumn_JAC__COLUMN__desc, tmpMeta6, tmpMeta10, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 5))), tmpMeta14);
          _oldJacCol = tmpMeta18;
          tmpMeta19 = mmc_mk_cons(_oldJacCol, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp29;
            modelica_metatype _gc_loopVar = 0;
            modelica_metatype _gc;
            _gc_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 11)));
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta28; /* defaultValue */
            tmp27 = &__omcQ_24tmpVar9;
            while(1) {
              tmp29 = 1;
              if (!listEmpty(_gc_loopVar)) {
                _gc = MMC_CAR(_gc_loopVar);
                _gc_loopVar = MMC_CDR(_gc_loopVar);
                tmp29--;
              }
              if (tmp29 == 0) {
                __omcQ_24tmpVar8 = omc_NSimGenericCall_convert(threadData, _gc);
                *tmp27 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp27 = &MMC_CDR(*tmp27);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp27 = mmc_mk_nil();
            tmpMeta26 = __omcQ_24tmpVar9;
          }
          tmpMeta30 = mmc_mk_box20(3, &SimCode_JacobianMatrix_JAC__MATRIX__desc, tmpMeta19, omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 9)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 2))), omc_NSimJacobian_Sparsity_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 10)))), tmpMeta20, tmpMeta21, tmpMeta22, tmpMeta23, tmpMeta24, tmpMeta25, mmc_mk_integer(((modelica_integer) 0)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 4))), tmpMeta26, omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 12))), boxvar_NSimCodeUtil_convertSimCodeMap), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 13))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 14))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 15))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 16))));
          tmpMeta1 = tmpMeta30;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT5);
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
  _oldJac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldJac;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_getJacobianHT(threadData_t *threadData, modelica_metatype _jacobian)
{
  modelica_metatype _jac_map = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jac_map has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _jacobian;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,15) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 12)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT7);
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
  _jac_map = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _jac_map;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_getJacobiansBlocks(threadData_t *threadData, modelica_metatype _jacobians)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  {
    modelica_metatype _jacobian;
    for (tmpMeta2 = _jacobians; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _jacobian = MMC_CAR(tmpMeta2);
      _blcks = listAppend(omc_NSimJacobian_SimJacobian_getJacobianBlocks(threadData, _jacobian), _blcks);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_getJacobianBlocks(threadData_t *threadData, modelica_metatype _jacobian)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blcks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _jacobian;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,15) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 6))));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT9);
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
  _blcks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_empty(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Findices, modelica_metatype *out_indices)
{
  modelica_metatype _emptyJac = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _emptyJac = _OMC_LIT12;
  _indices = __omcQ_24in_5Findices;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _emptyJac;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,15) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(17));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_emptyJac), 17*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = _name;
          _emptyJac = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(17));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_emptyJac), 17*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 21)));
          _emptyJac = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[21] = mmc_mk_integer(((modelica_integer) 1) + (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 21))))));
          _indices = tmpMeta8;
          tmpMeta1 = _emptyJac;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT14);
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
  _emptyJac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  return _emptyJac;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_createOptimizationJacobian(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype *out_simJacMrf, modelica_metatype *out_simJacR0, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _simJacLfg = NULL;
  modelica_metatype _simJacMrf = NULL;
  modelica_metatype _simJacR0 = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _jacobiansLfg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _jacobiansMrf = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _jacobiansR0 = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _simJacobianLfg = NULL;
  modelica_metatype _simJacobianMrf = NULL;
  modelica_metatype _simJacobianR0 = NULL;
  modelica_metatype _simJacLfg_opt = NULL;
  modelica_metatype _simJacMrf_opt = NULL;
  modelica_metatype _simJacR0_opt = NULL;
  modelica_metatype _jacobianLfg = NULL;
  modelica_metatype _jacobianMrf = NULL;
  modelica_metatype _jacobianR0 = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simJacLfg has no default value.
  // _simJacMrf has no default value.
  // _simJacR0 has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobiansLfg = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobiansMrf = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobiansR0 = tmpMeta3;
  // _simJacobianLfg has no default value.
  // _simJacobianMrf has no default value.
  // _simJacobianR0 has no default value.
  // _simJacLfg_opt has no default value.
  // _simJacMrf_opt has no default value.
  // _simJacR0_opt has no default value.
  // _jacobianLfg has no default value.
  // _jacobianMrf has no default value.
  // _jacobianR0 has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta4 = _partitions; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _partition = MMC_CAR(tmpMeta4);
      _jacobianLfg = omc_NBPartition_Partition_getJacobianLfg(threadData, _partition);

      if(isSome(_jacobianLfg))
      {
        tmpMeta5 = mmc_mk_cons(omc_Util_getOption(threadData, _jacobianLfg), _jacobiansLfg);
        _jacobiansLfg = tmpMeta5;
      }

      _jacobianMrf = omc_NBPartition_Partition_getJacobianMrf(threadData, _partition);

      if(isSome(_jacobianMrf))
      {
        tmpMeta6 = mmc_mk_cons(omc_Util_getOption(threadData, _jacobianMrf), _jacobiansMrf);
        _jacobiansMrf = tmpMeta6;
      }

      _jacobianR0 = omc_NBPartition_Partition_getJacobianR0(threadData, _partition);

      if(isSome(_jacobianR0))
      {
        tmpMeta7 = mmc_mk_cons(omc_Util_getOption(threadData, _jacobianR0), _jacobiansR0);
        _jacobiansR0 = tmpMeta7;
      }
    }
  }

  if(listEmpty(_jacobiansLfg))
  {
    _simJacLfg = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT15, _simCodeIndices ,&_simCodeIndices);
  }
  else
  {
    _simJacobianLfg = omc_NBJacobian_combine(threadData, _jacobiansLfg, _OMC_LIT15);

    _simJacLfg_opt = omc_NSimJacobian_SimJacobian_create(threadData, _simJacobianLfg, _simCodeIndices, _simcode_map ,&_simCodeIndices);

    if(isSome(_simJacLfg_opt))
    {
      _simJacLfg = omc_Util_getOption(threadData, _simJacLfg_opt);
    }
    else
    {
      _simJacLfg = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT15, _simCodeIndices ,&_simCodeIndices);
    }
  }

  if(listEmpty(_jacobiansMrf))
  {
    _simJacMrf = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT16, _simCodeIndices ,&_simCodeIndices);
  }
  else
  {
    _simJacobianMrf = omc_NBJacobian_combine(threadData, _jacobiansMrf, _OMC_LIT16);

    _simJacMrf_opt = omc_NSimJacobian_SimJacobian_create(threadData, _simJacobianMrf, _simCodeIndices, _simcode_map ,&_simCodeIndices);

    if(isSome(_simJacMrf_opt))
    {
      _simJacMrf = omc_Util_getOption(threadData, _simJacMrf_opt);
    }
    else
    {
      _simJacMrf = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT16, _simCodeIndices ,&_simCodeIndices);
    }
  }

  if(listEmpty(_jacobiansR0))
  {
    _simJacR0 = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT17, _simCodeIndices ,&_simCodeIndices);
  }
  else
  {
    _simJacobianR0 = omc_NBJacobian_combine(threadData, _jacobiansR0, _OMC_LIT17);

    _simJacR0_opt = omc_NSimJacobian_SimJacobian_create(threadData, _simJacobianR0, _simCodeIndices, _simcode_map ,&_simCodeIndices);

    if(isSome(_simJacR0_opt))
    {
      _simJacR0 = omc_Util_getOption(threadData, _simJacR0_opt);
    }
    else
    {
      _simJacR0 = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT17, _simCodeIndices ,&_simCodeIndices);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_simJacMrf) { *out_simJacMrf = _simJacMrf; }
  if (out_simJacR0) { *out_simJacR0 = _simJacR0; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _simJacLfg;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_createSimulationJacobian(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype *out_simJacAdjoint, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _simJac = NULL;
  modelica_metatype _simJacAdjoint = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _jacobians = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _jacobiansAdjoint = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _simJacobian = NULL;
  modelica_metatype _simJacobianAdjoint = NULL;
  modelica_metatype _simJac_opt = NULL;
  modelica_metatype _simJacAdj_opt = NULL;
  modelica_metatype _jacobian = NULL;
  modelica_metatype _jacobianAdjoint = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simJac has no default value.
  // _simJacAdjoint has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobians = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobiansAdjoint = tmpMeta2;
  // _simJacobian has no default value.
  // _simJacobianAdjoint has no default value.
  // _simJac_opt has no default value.
  // _simJacAdj_opt has no default value.
  // _jacobian has no default value.
  // _jacobianAdjoint has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta3 = _partitions; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _partition = MMC_CAR(tmpMeta3);
      _jacobian = omc_NBPartition_Partition_getJacobian(threadData, _partition);

      if(isSome(_jacobian))
      {
        tmpMeta4 = mmc_mk_cons(omc_Util_getOption(threadData, _jacobian), _jacobians);
        _jacobians = tmpMeta4;
      }

      _jacobianAdjoint = omc_NBPartition_Partition_getJacobianAdjoint(threadData, _partition);

      if(isSome(_jacobianAdjoint))
      {
        tmpMeta5 = mmc_mk_cons(omc_Util_getOption(threadData, _jacobianAdjoint), _jacobiansAdjoint);
        _jacobiansAdjoint = tmpMeta5;
      }
    }
  }

  if(listEmpty(_jacobians))
  {
    _simJac = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT18, _simCodeIndices ,&_simCodeIndices);
  }
  else
  {
    _simJacobian = omc_NBJacobian_combine(threadData, _jacobians, _OMC_LIT18);

    _simJac_opt = omc_NSimJacobian_SimJacobian_create(threadData, _simJacobian, _simCodeIndices, _simcode_map ,&_simCodeIndices);

    if(isSome(_simJac_opt))
    {
      _simJac = omc_Util_getOption(threadData, _simJac_opt);
    }
    else
    {
      _simJac = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT18, _simCodeIndices ,&_simCodeIndices);
    }
  }

  if(listEmpty(_jacobiansAdjoint))
  {
    _simJacAdjoint = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT19, _simCodeIndices ,&_simCodeIndices);
  }
  else
  {
    _simJacobianAdjoint = omc_NBJacobian_combine(threadData, _jacobiansAdjoint, _OMC_LIT19);

    _simJacAdj_opt = omc_NSimJacobian_SimJacobian_create(threadData, _simJacobianAdjoint, _simCodeIndices, _simcode_map ,&_simCodeIndices);

    if(isSome(_simJacAdj_opt))
    {
      _simJacAdjoint = omc_Util_getOption(threadData, _simJacAdj_opt);
    }
    else
    {
      _simJacAdjoint = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT19, _simCodeIndices ,&_simCodeIndices);
    }
  }

  if((stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT46), _OMC_LIT35)))
  {
    { /* match expression */
      modelica_metatype tmp10_1;
      tmp10_1 = _simJac;
      {
        volatile mmc_switch_type tmp10;
        int tmp11;
        tmp10 = 0;
        for (; tmp10 < 2; tmp10++) {
          switch (MMC_SWITCH_CAST(tmp10)) {
          case 0: {
            modelica_metatype tmpMeta12;
            modelica_metatype tmpMeta13;
            modelica_metatype tmpMeta14;
            modelica_metatype tmpMeta19;
            modelica_string tmp20 = 0;
            if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,15) == 0) goto tmp9_end;
            
            /* Pattern matching succeeded */
            tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(17));
            memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_simJac), 17*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[14] = mmc_mk_boolean(1 /* true */);
            _simJac = tmpMeta12;

            { /* match expression */
              modelica_metatype tmp17_1;
              tmp17_1 = _simJacAdjoint;
              {
                volatile mmc_switch_type tmp17;
                int tmp18;
                tmp17 = 0;
                for (; tmp17 < 2; tmp17++) {
                  switch (MMC_SWITCH_CAST(tmp17)) {
                  case 0: {
                    if (mmc__uniontype__metarecord__typedef__equal(tmp17_1,0,15) == 0) goto tmp16_end;
                    
                    /* Pattern matching succeeded */
                    tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJacAdjoint), 3)));
                    goto tmp16_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    tmpMeta14 = mmc_mk_integer(((modelica_integer) -1));
                    goto tmp16_done;
                  }
                  }
                  goto tmp16_end;
                  tmp16_end: ;
                }
                goto goto_15;
                goto_15:;
                goto goto_8;
                goto tmp16_done;
                tmp16_done:;
              }
            }
            tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(17));
            memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_simJac), 17*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[15] = tmpMeta14;
            _simJac = tmpMeta13;

            { /* match expression */
              modelica_metatype tmp23_1;
              tmp23_1 = _simJacAdjoint;
              {
                volatile mmc_switch_type tmp23;
                int tmp24;
                tmp23 = 0;
                for (; tmp23 < 2; tmp23++) {
                  switch (MMC_SWITCH_CAST(tmp23)) {
                  case 0: {
                    if (mmc__uniontype__metarecord__typedef__equal(tmp23_1,0,15) == 0) goto tmp22_end;
                    
                    /* Pattern matching succeeded */
                    tmp20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJacAdjoint), 2)));
                    goto tmp22_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    tmp20 = _OMC_LIT10;
                    goto tmp22_done;
                  }
                  }
                  goto tmp22_end;
                  tmp22_end: ;
                }
                goto goto_21;
                goto_21:;
                goto goto_8;
                goto tmp22_done;
                tmp22_done:;
              }
            }
            tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(17));
            memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_simJac), 17*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[16] = tmp20;
            _simJac = tmpMeta19;
            tmpMeta7 = _simJac;
            goto tmp9_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmpMeta7 = _simJac;
            goto tmp9_done;
          }
          }
          goto tmp9_end;
          tmp9_end: ;
        }
        goto goto_8;
        goto_8:;
        MMC_THROW_INTERNAL();
        goto tmp9_done;
        tmp9_done:;
      }
    }
    _simJac = tmpMeta7;
  }
  _return: OMC_LABEL_UNUSED
  if (out_simJacAdjoint) { *out_simJacAdjoint = _simJacAdjoint; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _simJac;
}

static modelica_metatype closure0_NSimVar_SimVar_traverseCreate(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_traverseCreate(thData, $in_var, acc, indices_ptr, varType);
}static modelica_metatype closure1_NSimVar_SimVar_traverseCreate(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_traverseCreate(thData, $in_var, acc, indices_ptr, varType);
}static modelica_metatype closure2_NSimVar_SimVar_traverseCreate(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_traverseCreate(thData, $in_var, acc, indices_ptr, varType);
}
DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_create(threadData_t *threadData, modelica_metatype _jacobian, modelica_metatype __omcQ_24in_5Findices, modelica_metatype _simcode_map, modelica_metatype *out_indices)
{
  modelica_metatype _simJacobian = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simJacobian has no default value.
  _indices = __omcQ_24in_5Findices;
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _jacobian;
    {
      modelica_metatype _dummy_sim_map = NULL;
      modelica_metatype _dummy_eqn_map = NULL;
      modelica_metatype _columnEqn = NULL;
      modelica_metatype _columnEqns = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _varData = NULL;
      modelica_metatype _seed_vec = NULL;
      modelica_metatype _res_vec = NULL;
      modelica_metatype _tmp_vec = NULL;
      modelica_metatype _seedVars_ptr = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _resVars_ptr = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _tmpVars_ptr = NULL;
      modelica_metatype tmpMeta6;
      modelica_metatype _seedVars = NULL;
      modelica_metatype _resVars = NULL;
      modelica_metatype _tmpVars = NULL;
      modelica_metatype _jac_map = NULL;
      modelica_metatype _jac = NULL;
      modelica_metatype _sim_map = NULL;
      modelica_metatype _generic_loop_calls = NULL;
      modelica_metatype _min_sub_map = NULL;
      modelica_metatype _min_sv_map = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      _dummy_sim_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
      _dummy_eqn_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
      // _columnEqn has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _columnEqns = tmpMeta3;
      // _varData has no default value.
      // _seed_vec has no default value.
      // _res_vec has no default value.
      // _tmp_vec has no default value.
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _seedVars_ptr = omc_Pointer_create(threadData, tmpMeta4);
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _resVars_ptr = omc_Pointer_create(threadData, tmpMeta5);
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _tmpVars_ptr = omc_Pointer_create(threadData, tmpMeta6);
      // _seedVars has no default value.
      // _resVars has no default value.
      // _tmpVars has no default value.
      // _jac_map has no default value.
      // _jac has no default value.
      // _sim_map has no default value.
      // _generic_loop_calls has no default value.
      // _min_sub_map has no default value.
      // _min_sv_map has no default value.
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,9) == 0) goto tmp7_end;
          
          _varData = tmpMeta10;
          /* Pattern matching succeeded */
          _sim_map = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 26)));

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[26] = omc_UnorderedMap_new(threadData, boxvar_NSimCode_Identifier_hash, boxvar_NSimCode_Identifier_isEqual, ((modelica_integer) 1));
          _indices = tmpMeta11;

          tmp13 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 5)))); tmp14 = ((modelica_integer) -1); tmp15 = ((modelica_integer) 1);
          if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
          {
            modelica_integer _i;
            for(_i = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 5)))); in_range_integer(_i, tmp13, tmp15); _i += tmp14)
            {

              _columnEqn = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 5))),_i) /* DAE.ASUB */, _indices, 8, _dummy_sim_map, _dummy_eqn_map ,&_indices ,NULL);

              tmpMeta12 = mmc_mk_cons(_columnEqn, _columnEqns);
              _columnEqns = tmpMeta12;
            }
          }

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp19;
            modelica_metatype _tpl_loopVar = 0;
            modelica_metatype _tpl;
            _tpl_loopVar = omc_UnorderedMap_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 26))));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar11;
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_tpl_loopVar)) {
                _tpl = MMC_CAR(_tpl_loopVar);
                _tpl_loopVar = MMC_CDR(_tpl_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar10 = omc_NSimGenericCall_fromIdentifier(threadData, _tpl);
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar11;
          }
          _generic_loop_calls = tmpMeta16;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[26] = _sim_map;
          _indices = tmpMeta20;

          if(omc_Flags_getConfigBool(threadData, _OMC_LIT50))
          {
            _seed_vec = omc_NBVariable_VariablePointers_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 10))));

            _res_vec = omc_NBVariable_VariablePointers_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 8))));

            _tmp_vec = omc_NBVariable_VariablePointers_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 9))));
          }
          else
          {
            _seed_vec = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 10)));

            _res_vec = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 8)));

            _tmp_vec = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 9)));
          }

          tmpMeta21 = mmc_mk_box3(0, _seedVars_ptr, omc_Pointer_create(threadData, omc_NSimCode_EMPTY__SIM__CODE__INDICES(threadData)), mmc_mk_integer(1));
          omc_NBVariable_VariablePointers_map(threadData, _seed_vec, (modelica_fnptr) mmc_mk_box2(0,closure0_NSimVar_SimVar_traverseCreate,tmpMeta21));

          tmpMeta22 = mmc_mk_box3(0, _resVars_ptr, omc_Pointer_create(threadData, omc_NSimCode_EMPTY__SIM__CODE__INDICES(threadData)), mmc_mk_integer(1));
          omc_NBVariable_VariablePointers_map(threadData, _res_vec, (modelica_fnptr) mmc_mk_box2(0,closure1_NSimVar_SimVar_traverseCreate,tmpMeta22));

          tmpMeta23 = mmc_mk_box3(0, _tmpVars_ptr, omc_Pointer_create(threadData, omc_NSimCode_EMPTY__SIM__CODE__INDICES(threadData)), mmc_mk_integer(1));
          omc_NBVariable_VariablePointers_map(threadData, _tmp_vec, (modelica_fnptr) mmc_mk_box2(0,closure2_NSimVar_SimVar_traverseCreate,tmpMeta23));

          _seedVars = listReverse(omc_Pointer_access(threadData, _seedVars_ptr));

          _resVars = listReverse(omc_Pointer_access(threadData, _resVars_ptr));

          _tmpVars = listReverse(omc_Pointer_access(threadData, _tmpVars_ptr));

          _jac_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, listLength(_seedVars) + (listLength(_resVars) + listLength(_tmpVars)));

          omc_NSimCodeUtil_addListSimCodeMap(threadData, _seedVars, _jac_map);

          omc_NSimCodeUtil_addListSimCodeMap(threadData, _resVars, _jac_map);

          omc_NSimCodeUtil_addListSimCodeMap(threadData, _tmpVars, _jac_map);

          _min_sub_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

          _min_sv_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

          {
            modelica_metatype _sv;
            for (tmpMeta24 = _seedVars; !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
            {
              _sv = MMC_CAR(tmpMeta24);
              if(omc_NFComponentRef_hasSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sv), 2)))))
              {
                { /* match expression */
                  modelica_integer tmp27_1;
                  tmp27_1 = omc_NFComponentRef_outermostIntegerSubscript(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sv), 2))));
                  {
                    modelica_metatype _base_cref = NULL;
                    modelica_integer _sub_val;
                    modelica_integer _cur_min;
                    volatile mmc_switch_type tmp27;
                    int tmp28;
                    // _base_cref has no default value.
                    // _sub_val has no default value.
                    // _cur_min has no default value.
                    tmp27 = 0;
                    for (; tmp27 < 2; tmp27++) {
                      switch (MMC_SWITCH_CAST(tmp27)) {
                      case 0: {
                        
                        _sub_val = tmp27_1;
                        /* Pattern matching succeeded */
                        /* Check guard condition after assignments */
                        if (!(_sub_val > ((modelica_integer) 1))) goto tmp26_end;
                        _base_cref = omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sv), 2))));

                        if(omc_UnorderedMap_contains(threadData, _base_cref, _min_sub_map))
                        {
                          _cur_min = mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, _base_cref, _min_sub_map, _OMC_LIT52));

                          if((_sub_val < _cur_min))
                          {
                            omc_UnorderedMap_add(threadData, _base_cref, mmc_mk_integer(_sub_val), _min_sub_map);

                            omc_UnorderedMap_add(threadData, _base_cref, _sv, _min_sv_map);
                          }
                        }
                        else
                        {
                          omc_UnorderedMap_add(threadData, _base_cref, mmc_mk_integer(_sub_val), _min_sub_map);

                          omc_UnorderedMap_add(threadData, _base_cref, _sv, _min_sv_map);
                        }
                        goto tmp26_done;
                      }
                      case 1: {
                        
                        /* Pattern matching succeeded */
                        goto tmp26_done;
                      }
                      }
                      goto tmp26_end;
                      tmp26_end: ;
                    }
                    goto goto_25;
                    goto_25:;
                    goto goto_2;
                    goto tmp26_done;
                    tmp26_done:;
                  }
                }
                ;
              }
            }
          }

          {
            modelica_metatype _tpl;
            for (tmpMeta30 = omc_UnorderedMap_toList(threadData, _min_sv_map); !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
            {
              _tpl = MMC_CAR(tmpMeta30);
              { /* match expression */
                modelica_metatype tmp33_1;
                tmp33_1 = _tpl;
                {
                  modelica_metatype _base_cref = NULL;
                  modelica_metatype _min_sv = NULL;
                  modelica_metatype _virtual_sv = NULL;
                  volatile mmc_switch_type tmp33;
                  int tmp34;
                  // _base_cref has no default value.
                  // _min_sv has no default value.
                  // _virtual_sv has no default value.
                  tmp33 = 0;
                  for (; tmp33 < 1; tmp33++) {
                    switch (MMC_SWITCH_CAST(tmp33)) {
                    case 0: {
                      modelica_metatype tmpMeta35;
                      modelica_metatype tmpMeta36;
                      modelica_metatype tmpMeta37;
                      modelica_metatype tmpMeta38;
                      modelica_metatype tmpMeta39;
                      tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp33_1), 1));
                      tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp33_1), 2));
                      _base_cref = tmpMeta35;
                      _min_sv = tmpMeta36;
                      /* Pattern matching succeeded */
                      mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, _base_cref, _min_sub_map, _OMC_LIT53));

                      if((!omc_UnorderedMap_contains(threadData, _base_cref, _jac_map)))
                      {
                        _virtual_sv = _min_sv;

                        tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(32));
                        memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_virtual_sv), 32*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[2] = _base_cref;
                        _virtual_sv = tmpMeta37;

                        tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(32));
                        memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_virtual_sv), 32*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[7] = mmc_mk_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_min_sv), 7)))) - omc_NSimJacobian_crefFlatOffset(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_min_sv), 2)))));
                        _virtual_sv = tmpMeta38;

                        tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(32));
                        memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_virtual_sv), 32*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[15] = mmc_mk_none();
                        _virtual_sv = tmpMeta39;

                        omc_UnorderedMap_add(threadData, _base_cref, _virtual_sv, _jac_map);
                      }
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
              ;
            }
          }

          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta42 = mmc_mk_box16(3, &NSimJacobian_SimJacobian_SIM__JAC__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 21))), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(omc_NSimVar_SimVars_numScalarElems(threadData, _resVars)), _columnEqns, tmpMeta41, _tmpVars, _seedVars, omc_NSimJacobian_Sparsity_create(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 6))), omc_NSimVar_SimVars_numScalarElems(threadData, _resVars)), _generic_loop_calls, mmc_mk_some(_jac_map), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 7))), mmc_mk_boolean(0 /* false */), mmc_mk_integer(((modelica_integer) -1)), _OMC_LIT10);
          _jac = tmpMeta42;

          tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[21] = mmc_mk_integer(((modelica_integer) 1) + (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 21))))));
          _indices = tmpMeta43;
          tmpMeta1 = mmc_mk_some(_jac);
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT55);
          goto goto_2;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _simJacobian = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  return _simJacobian;
}

DLLDirection
modelica_boolean omc_NSimJacobian_SimJacobian_isEmpty(threadData_t *threadData, modelica_metatype _simJac)
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
    modelica_metatype tmp4_1;
    tmp4_1 = _simJac;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,15) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 5)))) == ((modelica_integer) 0));
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
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return _b;
}
modelica_metatype boxptr_NSimJacobian_SimJacobian_isEmpty(threadData_t *threadData, modelica_metatype _simJac)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NSimJacobian_SimJacobian_isEmpty(threadData, _simJac);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_NSimJacobian_SimJacobian_toString(threadData_t *threadData, modelica_metatype _simJac)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT10;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _simJac;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,15) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_NSimJacobian_SimJacobian_isEmpty(threadData, _simJac))
          {
            tmpMeta6 = stringAppend(_OMC_LIT68,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 2))));
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT57);
            tmpMeta8 = stringAppend(tmpMeta7,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 3))))));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT58);
            tmpMeta10 = stringAppend(tmpMeta9,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 4))))));
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT59);
            tmpMeta12 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta11),_OMC_LIT60);
            _str = tmpMeta12;
          }
          else
          {
            tmpMeta13 = stringAppend(_OMC_LIT56,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 2))));
            tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT57);
            tmpMeta15 = stringAppend(tmpMeta14,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 3))))));
            tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT58);
            tmpMeta17 = stringAppend(tmpMeta16,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 3))))));
            tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT59);
            tmpMeta19 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta18),_OMC_LIT60);
            _str = tmpMeta19;

            tmpMeta20 = stringAppend(_OMC_LIT61,intString(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 9))))));
            tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT59);
            tmpMeta22 = stringAppend(_str,omc_StringUtil_headline__4(threadData, tmpMeta21));
            _str = tmpMeta22;

            {
              modelica_metatype _var;
              for (tmpMeta23 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 9))); !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
              {
                _var = MMC_CAR(tmpMeta23);
                tmpMeta24 = stringAppend(_str,omc_NSimVar_SimVar_toString(threadData, _var, _OMC_LIT62));
                tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT60);
                _str = tmpMeta25;
              }
            }

            tmpMeta27 = stringAppend(_str,_OMC_LIT60);
            tmpMeta28 = stringAppend(_OMC_LIT63,intString(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 8))))));
            tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT59);
            tmpMeta30 = stringAppend(tmpMeta27,omc_StringUtil_headline__4(threadData, tmpMeta29));
            _str = tmpMeta30;

            {
              modelica_metatype _var;
              for (tmpMeta31 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 8))); !listEmpty(tmpMeta31); tmpMeta31=MMC_CDR(tmpMeta31))
              {
                _var = MMC_CAR(tmpMeta31);
                tmpMeta32 = stringAppend(_str,omc_NSimVar_SimVar_toString(threadData, _var, _OMC_LIT62));
                tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT60);
                _str = tmpMeta33;
              }
            }

            tmpMeta35 = stringAppend(_str,_OMC_LIT60);
            tmpMeta36 = stringAppend(_OMC_LIT64,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 5))))));
            tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT59);
            tmpMeta38 = stringAppend(tmpMeta35,omc_StringUtil_headline__4(threadData, tmpMeta37));
            _str = tmpMeta38;

            tmpMeta39 = stringAppend(_str,_OMC_LIT60);
            tmpMeta40 = stringAppend(_OMC_LIT65,intString(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 6))))));
            tmpMeta41 = stringAppend(tmpMeta40,_OMC_LIT59);
            tmpMeta42 = stringAppend(tmpMeta39,omc_StringUtil_headline__3(threadData, tmpMeta41));
            _str = tmpMeta42;

            {
              modelica_metatype _eq;
              for (tmpMeta43 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 6))); !listEmpty(tmpMeta43); tmpMeta43=MMC_CDR(tmpMeta43))
              {
                _eq = MMC_CAR(tmpMeta43);
                tmpMeta44 = stringAppend(_str,omc_NSimStrongComponent_Block_toString(threadData, _eq, _OMC_LIT62));
                _str = tmpMeta44;
              }
            }

            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 7))))))
            {
              tmpMeta46 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT66));
              _str = tmpMeta46;

              {
                modelica_metatype _eq;
                for (tmpMeta47 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 7))); !listEmpty(tmpMeta47); tmpMeta47=MMC_CDR(tmpMeta47))
                {
                  _eq = MMC_CAR(tmpMeta47);
                  tmpMeta48 = stringAppend(_str,omc_NSimStrongComponent_Block_toString(threadData, _eq, _OMC_LIT62));
                  _str = tmpMeta48;
                }
              }
            }

            tmpMeta50 = stringAppend(_str,_OMC_LIT60);
            tmpMeta51 = stringAppend(tmpMeta50,omc_NSimJacobian_Sparsity_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 10)))));
            _str = tmpMeta51;

            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 11))))))
            {
              tmpMeta52 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT67));
              _str = tmpMeta52;

              tmpMeta53 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 11))), boxvar_NSimGenericCall_toString, 7));
              _str = tmpMeta53;
            }

            tmpMeta54 = stringAppend(_str,_OMC_LIT60);
            _str = tmpMeta54;
          }
          tmp1 = _str;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT70);
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

DLLDirection
modelica_string omc_NSimJacobian_Sparsity_toString(threadData_t *threadData, modelica_metatype _sparsity)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = omc_StringUtil_headline__3(threadData, _OMC_LIT71);
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _sparsity;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsity), 2))), boxvar_NSimJacobian_SparsityRow_toString, 6));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT60);
          tmp1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_str,_OMC_LIT72);
          tmp1 = tmpMeta8;
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

DLLDirection
modelica_metatype omc_NSimJacobian_Sparsity_convert(threadData_t *threadData, modelica_metatype _sparsity)
{
  modelica_metatype _oldsparsity = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldsparsity has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _sparsity;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp9;
            modelica_metatype _row_loopVar = 0;
            modelica_metatype _row;
            _row_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsity), 2)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar13;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_row_loopVar)) {
                _row = MMC_CAR(_row_loopVar);
                _row_loopVar = MMC_CDR(_row_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar12 = omc_NSimJacobian_SparsityRow_convert(threadData, _row);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar13;
          }
          tmpMeta10 = mmc_mk_box2(3, &SimCode_Sparsity_SPARSITY__desc, tmpMeta6);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT73;
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
  _oldsparsity = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldsparsity;
}

DLLDirection
modelica_metatype omc_NSimJacobian_Sparsity_create(threadData_t *threadData, modelica_metatype _mat, modelica_integer _numberOfResultVars)
{
  modelica_metatype _sparsity = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sparsity has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mat;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp8;
            modelica_metatype _e_loopVar = 0;
            modelica_integer tmp9;
            modelica_metatype _e;
            modelica_metatype _i_loopVar = 0;
            modelica_integer tmp10;
            modelica_metatype _i;
            modelica_metatype _d_loopVar = 0;
            modelica_integer tmp11;
            modelica_metatype _d;
            modelica_metatype _r_loopVar = 0;
            modelica_integer tmp12;
            modelica_metatype _r;
            modelica_metatype _s_loopVar = 0;
            modelica_integer tmp13;
            modelica_metatype _s;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mat), 2)));
            tmp9 = 1;
            _i_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mat), 3)));
            tmp10 = 1;
            _d_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mat), 4)));
            tmp11 = 1;
            _r_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mat), 5)));
            tmp12 = 1;
            _s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mat), 6)));
            tmp13 = 1;
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar15;
            while(1) {
              tmp8 = 5;
              if (tmp9 <= arrayLength(_e_loopVar)) {
                _e = arrayGet(_e_loopVar, tmp9++);
                tmp8--;
              }if (tmp10 <= arrayLength(_i_loopVar)) {
                _i = arrayGet(_i_loopVar, tmp10++);
                tmp8--;
              }if (tmp11 <= arrayLength(_d_loopVar)) {
                _d = arrayGet(_d_loopVar, tmp11++);
                tmp8--;
              }if (tmp12 <= arrayLength(_r_loopVar)) {
                _r = arrayGet(_r_loopVar, tmp12++);
                tmp8--;
              }if (tmp13 <= arrayLength(_s_loopVar)) {
                _s = arrayGet(_s_loopVar, tmp13++);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar14 = omc_NSimJacobian_SparsityRow_create(threadData, _e, _i, _d, _r, _s);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 5) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar15;
          }
          tmpMeta14 = mmc_mk_box2(3, &NSimJacobian_Sparsity_SPARSITY__desc, omc_NSimJacobian_SparsityRow_mergeDuplicateRows(threadData, tmpMeta5, _numberOfResultVars));
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT11;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta16 = stringAppend(_OMC_LIT74,omc_NBAdjacency_Matrix_toString(threadData, _mat, _OMC_LIT10));
          tmpMeta15 = mmc_mk_cons(tmpMeta16, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta15);
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
  _sparsity = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sparsity;
}
modelica_metatype boxptr_NSimJacobian_Sparsity_create(threadData_t *threadData, modelica_metatype _mat, modelica_metatype _numberOfResultVars)
{
  modelica_integer tmp1;
  modelica_metatype _sparsity = NULL;
  tmp1 = mmc_unbox_integer(_numberOfResultVars);
  _sparsity = omc_NSimJacobian_Sparsity_create(threadData, _mat, tmp1);
  /* skip box _sparsity; NSimJacobian.Sparsity */
  return _sparsity;
}

DLLDirection
modelica_boolean omc_NSimJacobian_SparsityRow_dependencyCrefEqual(threadData_t *threadData, modelica_metatype _dep1, modelica_metatype _dep2)
{
  modelica_boolean _b;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = omc_NFComponentRef_isEqual(threadData, omc_Util_tuple31(threadData, _dep1), omc_Util_tuple31(threadData, _dep2));
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return _b;
}
modelica_metatype boxptr_NSimJacobian_SparsityRow_dependencyCrefEqual(threadData_t *threadData, modelica_metatype _dep1, modelica_metatype _dep2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NSimJacobian_SparsityRow_dependencyCrefEqual(threadData, _dep1, _dep2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SparsityRow_mergeDuplicateRows(threadData_t *threadData, modelica_metatype _rows_in, modelica_integer _numberOfResultVars)
{
  modelica_metatype _rows_out = NULL;
  modelica_metatype _row_map = NULL;
  modelica_metatype _order = NULL;
  modelica_string _key = NULL;
  modelica_metatype _existing = NULL;
  modelica_metatype _merged = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rows_out has no default value.
  // _row_map has no default value.
  // _order has no default value.
  // _key has no default value.
  // _existing has no default value.
  // _merged has no default value.
  if((listLength(_rows_in) <= _numberOfResultVars))
  {
    _rows_out = _rows_in;
  }
  else
  {
    _row_map = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1));

    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _order = tmpMeta1;

    {
      modelica_metatype _row;
      for (tmpMeta2 = _rows_in; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _row = MMC_CAR(tmpMeta2);
        {
          modelica_metatype __omcQ_24tmpVar17;
          modelica_metatype* tmp4;
          modelica_metatype tmpMeta5;
          modelica_string __omcQ_24tmpVar16;
          modelica_integer tmp6;
          modelica_metatype _c_loopVar = 0;
          modelica_metatype _c;
          _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 5)));
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar17 = tmpMeta5; /* defaultValue */
          tmp4 = &__omcQ_24tmpVar17;
          while(1) {
            tmp6 = 1;
            if (!listEmpty(_c_loopVar)) {
              _c = MMC_CAR(_c_loopVar);
              _c_loopVar = MMC_CDR(_c_loopVar);
              tmp6--;
            }
            if (tmp6 == 0) {
              __omcQ_24tmpVar16 = omc_NFComponentRef_toString(threadData, _c);
              *tmp4 = mmc_mk_cons(__omcQ_24tmpVar16,0);
              tmp4 = &MMC_CDR(*tmp4);
            } else if (tmp6 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp4 = mmc_mk_nil();
          tmpMeta3 = __omcQ_24tmpVar17;
        }
        _key = stringDelimitList(tmpMeta3, _OMC_LIT75);

        if(omc_UnorderedMap_contains(threadData, _key, _row_map))
        {
          _existing = omc_UnorderedMap_getSafe(threadData, _key, _row_map, _OMC_LIT76);

          _merged = _existing;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_merged), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = omc_List_unionOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_existing), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 4))), boxvar_NSimJacobian_SparsityRow_dependencyCrefEqual);
          _merged = tmpMeta7;

          omc_UnorderedMap_add(threadData, _key, _merged, _row_map);
        }
        else
        {
          omc_UnorderedMap_add(threadData, _key, _row, _row_map);

          tmpMeta8 = mmc_mk_cons(_key, _order);
          _order = tmpMeta8;
        }
      }
    }

    _order = listReverse(_order);

    {
      modelica_metatype __omcQ_24tmpVar19;
      modelica_metatype* tmp11;
      modelica_metatype tmpMeta12;
      modelica_metatype __omcQ_24tmpVar18;
      modelica_integer tmp13;
      modelica_metatype _k_loopVar = 0;
      modelica_metatype _k;
      _k_loopVar = _order;
      tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar19 = tmpMeta12; /* defaultValue */
      tmp11 = &__omcQ_24tmpVar19;
      while(1) {
        tmp13 = 1;
        if (!listEmpty(_k_loopVar)) {
          _k = MMC_CAR(_k_loopVar);
          _k_loopVar = MMC_CDR(_k_loopVar);
          tmp13--;
        }
        if (tmp13 == 0) {
          __omcQ_24tmpVar18 = omc_UnorderedMap_getSafe(threadData, _k, _row_map, _OMC_LIT77);
          *tmp11 = mmc_mk_cons(__omcQ_24tmpVar18,0);
          tmp11 = &MMC_CDR(*tmp11);
        } else if (tmp13 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp11 = mmc_mk_nil();
      tmpMeta10 = __omcQ_24tmpVar19;
    }
    _rows_out = tmpMeta10;
  }
  _return: OMC_LABEL_UNUSED
  return _rows_out;
}
modelica_metatype boxptr_NSimJacobian_SparsityRow_mergeDuplicateRows(threadData_t *threadData, modelica_metatype _rows_in, modelica_metatype _numberOfResultVars)
{
  modelica_integer tmp1;
  modelica_metatype _rows_out = NULL;
  tmp1 = mmc_unbox_integer(_numberOfResultVars);
  _rows_out = omc_NSimJacobian_SparsityRow_mergeDuplicateRows(threadData, _rows_in, tmp1);
  /* skip box _rows_out; list<NSimJacobian.SparsityRow> */
  return _rows_out;
}

DLLDirection
modelica_string omc_NSimJacobian_SparsityRow_toString_dependencyString(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_OMC_LIT78,omc_NFComponentRef_toString(threadData, omc_Util_tuple31(threadData, _tpl)));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT79);
  tmpMeta3 = stringAppend(tmpMeta2,omc_NBAdjacency_Dependency_toString(threadData, omc_Util_tuple32(threadData, _tpl)));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT79);
  tmpMeta5 = stringAppend(tmpMeta4,(mmc_unbox_boolean(omc_Util_tuple33(threadData, _tpl))?_OMC_LIT80:_OMC_LIT81));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT59);
  _str = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NSimJacobian_SparsityRow_toString(threadData_t *threadData, modelica_metatype _row)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 2)))),_OMC_LIT82);
  tmpMeta2 = stringAppend(tmpMeta1,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 5))), boxvar_NFComponentRef_toString, 4));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT82);
  tmpMeta4 = stringAppend(tmpMeta3,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 4))), boxvar_NSimJacobian_SparsityRow_toString_dependencyString, 4));
  _str = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SparsityRow_convert(threadData_t *threadData, modelica_metatype _row)
{
  modelica_metatype _oldrow = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldrow has no default value.
  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp4;
    modelica_metatype _iter_loopVar = 0;
    modelica_metatype _iter;
    _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 3)));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar21;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_iter_loopVar)) {
        _iter = MMC_CAR(_iter_loopVar);
        _iter_loopVar = MMC_CDR(_iter_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar20 = omc_NSimGenericCall_SimIterator_convert(threadData, _iter);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar21;
  }
  {
    modelica_metatype __omcQ_24tmpVar23;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype tmpMeta8;
    modelica_metatype __omcQ_24tmpVar22;
    modelica_integer tmp9;
    modelica_metatype _tpl_loopVar = 0;
    modelica_metatype _tpl;
    _tpl_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 4)));
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar23 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar23;
    while(1) {
      tmp9 = 1;
      if (!listEmpty(_tpl_loopVar)) {
        _tpl = MMC_CAR(_tpl_loopVar);
        _tpl_loopVar = MMC_CDR(_tpl_loopVar);
        tmp9--;
      }
      if (tmp9 == 0) {
        tmpMeta8 = mmc_mk_box3(0, omc_NFComponentRef_toDAE(threadData, omc_Util_tuple31(threadData, _tpl)), omc_NBAdjacency_Dependency_convert(threadData, omc_Util_tuple32(threadData, _tpl)), omc_Util_tuple33(threadData, _tpl));
        __omcQ_24tmpVar22 = tmpMeta8;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar22,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar23;
  }
  {
    modelica_metatype __omcQ_24tmpVar25;
    modelica_metatype* tmp11;
    modelica_metatype tmpMeta12;
    modelica_metatype __omcQ_24tmpVar24;
    modelica_integer tmp13;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    _cref_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 5)));
    tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar25 = tmpMeta12; /* defaultValue */
    tmp11 = &__omcQ_24tmpVar25;
    while(1) {
      tmp13 = 1;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp13--;
      }
      if (tmp13 == 0) {
        __omcQ_24tmpVar24 = omc_NFComponentRef_toDAE(threadData, _cref);
        *tmp11 = mmc_mk_cons(__omcQ_24tmpVar24,0);
        tmp11 = &MMC_CDR(*tmp11);
      } else if (tmp13 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp11 = mmc_mk_nil();
    tmpMeta10 = __omcQ_24tmpVar25;
  }
  tmpMeta14 = mmc_mk_box5(3, &SimCode_SparsityRow_SPARSITY__ROW__desc, omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_row), 2)))), tmpMeta1, tmpMeta5, tmpMeta10);
  _oldrow = tmpMeta14;
  _return: OMC_LABEL_UNUSED
  return _oldrow;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SparsityRow_create(threadData_t *threadData, modelica_metatype _equation_name, modelica_metatype _equation_iterator, modelica_metatype _dependencies, modelica_metatype _repetitions, modelica_metatype _solved_crefs)
{
  modelica_metatype _row = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype _deps = NULL;
  modelica_metatype _reps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta18;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _row has no default value.
  // _crefs has no default value.
  // _deps has no default value.
  // _reps has no default value.
  _crefs = omc_UnorderedMap_keyList(threadData, _dependencies);

  _deps = omc_UnorderedMap_valueList(threadData, _dependencies);

  {
    modelica_metatype __omcQ_24tmpVar27;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar26;
    modelica_integer tmp4;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    _cref_loopVar = _crefs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar27 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar27;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar26 = mmc_mk_boolean(omc_UnorderedSet_contains(threadData, _cref, _repetitions));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar26,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar27;
  }
  _reps = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp8;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    _cref_loopVar = _crefs;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar29;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar28 = omc_NFComponentRef_fillSubscripts(threadData, _cref);
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar28,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar29;
  }
  _crefs = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_metatype tmpMeta12;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp13;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    modelica_metatype _dep_loopVar = 0;
    modelica_metatype _dep;
    modelica_metatype _rep_loopVar = 0;
    modelica_metatype _rep;
    _cref_loopVar = _crefs;
    _dep_loopVar = _deps;
    _rep_loopVar = _reps;
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar31;
    while(1) {
      tmp13 = 3;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp13--;
      }if (!listEmpty(_dep_loopVar)) {
        _dep = MMC_CAR(_dep_loopVar);
        _dep_loopVar = MMC_CDR(_dep_loopVar);
        tmp13--;
      }if (!listEmpty(_rep_loopVar)) {
        _rep = MMC_CAR(_rep_loopVar);
        _rep_loopVar = MMC_CDR(_rep_loopVar);
        tmp13--;
      }
      if (tmp13 == 0) {
        tmpMeta12 = mmc_mk_box3(0, _cref, _dep, _rep);
        __omcQ_24tmpVar30 = tmpMeta12;
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp13 == 3) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar31;
  }
  {
    modelica_metatype __omcQ_24tmpVar33;
    modelica_metatype* tmp15;
    modelica_metatype tmpMeta16;
    modelica_metatype __omcQ_24tmpVar32;
    modelica_integer tmp17;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    _cref_loopVar = _solved_crefs;
    tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar33 = tmpMeta16; /* defaultValue */
    tmp15 = &__omcQ_24tmpVar33;
    while(1) {
      tmp17 = 1;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp17--;
      }
      if (tmp17 == 0) {
        __omcQ_24tmpVar32 = omc_NFComponentRef_fillSubscripts(threadData, _cref);
        *tmp15 = mmc_mk_cons(__omcQ_24tmpVar32,0);
        tmp15 = &MMC_CDR(*tmp15);
      } else if (tmp17 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp15 = mmc_mk_nil();
    tmpMeta14 = __omcQ_24tmpVar33;
  }
  tmpMeta18 = mmc_mk_box5(3, &NSimJacobian_SparsityRow_SPARSITY__ROW__desc, _equation_name, omc_NSimGenericCall_SimIterator_fromIterator(threadData, _equation_iterator), tmpMeta9, tmpMeta14);
  _row = tmpMeta18;
  _return: OMC_LABEL_UNUSED
  return _row;
}

