#include "omc_simulation_settings.h"
#include "VisualXML.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "Shape"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,5,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Vector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,6,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Surface"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,7,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Modelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,8,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Mechanics"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,9,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "MultiBody"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,9,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Visualizers"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,11,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Advanced"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,8,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "ModelicaServices"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,16,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Animation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,9,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "SHAPE "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,6,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data " '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,2,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "'\n r{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,5,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,1,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,1,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "\nlD{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,4,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data " wD{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,4,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "\ncolor("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,7,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data " w: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,4,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data " h: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,4,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data " l: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,4,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "\nT {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,4,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,2,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\nextra{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,7,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "-"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,1,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "R"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,1,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "T"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,1,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "r_0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,3,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "nu"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,2,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "nv"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,2,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "wireframe"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,9,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "multiColored"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,12,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "color"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,5,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "specularCoefficient"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,19,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "transparency"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,12,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,1,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "coordinates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,11,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "quantity"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,8,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "headAtOrigin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,12,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "twoHeadedArrow"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,14,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "shapeType"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,9,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "r_shape"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,7,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "lengthDirection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,15,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "widthDirection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,14,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "length"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,6,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "width"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,5,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "height"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,6,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "extra"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,5,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "file://"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,7,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "modelica://"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,11,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,1,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "DUMMY"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,5,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,5) {&DAE_Exp_SCONST__desc,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT56,-1.0);
#define _OMC_LIT56 MMC_REFREALLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,1) {_OMC_LIT57,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,1) {_OMC_LIT57,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,1) {_OMC_LIT57,_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(-1))}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "VisualXML.newVisualizer failed on "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,34,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,1,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "VisualXML.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,12,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT66_6,0.0);
#define _OMC_LIT66_6 MMC_REFREALLIT(_OMC_LIT_STRUCT66_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT65,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(478)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(479)),MMC_IMMEDIATE(MMC_TAGFIXNUM(47)),_OMC_LIT66_6}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "fillVisualizationObjects failed! - not yet supported type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,57,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,1,1) {_OMC_LIT61}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "The binding expression "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,23,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data " of the visualization type component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,37,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "  cannot be evaluated. Please specify a visualization type (CAD files are specified as modelica://packagename/filename.stl)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,123,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "VisualXMl.getConstCrefBinding failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,41,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT73_6,0.0);
#define _OMC_LIT73_6 MMC_REFREALLIT(_OMC_LIT_STRUCT73_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT65,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(312)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(312)),MMC_IMMEDIATE(MMC_TAGFIXNUM(122)),_OMC_LIT73_6}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "_visual.xml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,11,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#include "util/modelica.h"

#include "VisualXML_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_VisualXML_dumpVis(threadData_t *threadData, modelica_metatype _visIn, modelica_string _iFileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_dumpVis,2,0) {(void*) boxptr_VisualXML_dumpVis,0}};
#define boxvar_VisualXML_dumpVis MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_dumpVis)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_VisualXML_isVisualizerName(threadData_t *threadData, modelica_string _name);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_isVisualizerName(threadData_t *threadData, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_isVisualizerName,2,0) {(void*) boxptr_VisualXML_isVisualizerName,0}};
#define boxvar_VisualXML_isVisualizerName MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_isVisualizerName)
PROTECTED_FUNCTION_STATIC modelica_string omc_VisualXML_hasVisPath(threadData_t *threadData, modelica_metatype _pathsIn, modelica_integer _numIn, modelica_integer *out_numOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_hasVisPath(threadData_t *threadData, modelica_metatype _pathsIn, modelica_metatype _numIn, modelica_metatype *out_numOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_hasVisPath,2,0) {(void*) boxptr_VisualXML_hasVisPath,0}};
#define boxvar_VisualXML_hasVisPath MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_hasVisPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_isVisualizationVarFold(threadData_t *threadData, modelica_metatype _var, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_isVisualizationVarFold,2,0) {(void*) boxptr_VisualXML_isVisualizationVarFold,0}};
#define boxvar_VisualXML_isVisualizationVarFold MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_isVisualizationVarFold)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_VisualXML_isVisualizationVar(threadData_t *threadData, modelica_metatype _var);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_isVisualizationVar(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_isVisualizationVar,2,0) {(void*) boxptr_VisualXML_isVisualizationVar,0}};
#define boxvar_VisualXML_isVisualizationVar MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_isVisualizationVar)
PROTECTED_FUNCTION_STATIC modelica_string omc_VisualXML_printVisualization(threadData_t *threadData, modelica_metatype _vis);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_printVisualization,2,0) {(void*) boxptr_VisualXML_printVisualization,0}};
#define boxvar_VisualXML_printVisualization MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_printVisualization)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_getVariableBinding(threadData_t *threadData, modelica_metatype _var, modelica_boolean _storeProtectedCrefs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_getVariableBinding(threadData_t *threadData, modelica_metatype _var, modelica_metatype _storeProtectedCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_getVariableBinding,2,0) {(void*) boxptr_VisualXML_getVariableBinding,0}};
#define boxvar_VisualXML_getVariableBinding MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_getVariableBinding)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillSurfaceObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_boolean _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_fillSurfaceObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_metatype _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_fillSurfaceObject,2,0) {(void*) boxptr_VisualXML_fillSurfaceObject,0}};
#define boxvar_VisualXML_fillSurfaceObject MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_fillSurfaceObject)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillVectorObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_boolean _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_fillVectorObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_metatype _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_fillVectorObject,2,0) {(void*) boxptr_VisualXML_fillVectorObject,0}};
#define boxvar_VisualXML_fillVectorObject MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_fillVectorObject)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillShapeObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_boolean _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_fillShapeObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_metatype _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_fillShapeObject,2,0) {(void*) boxptr_VisualXML_fillShapeObject,0}};
#define boxvar_VisualXML_fillShapeObject MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_fillShapeObject)
PROTECTED_FUNCTION_STATIC modelica_string omc_VisualXML_getFullCADFilePath(threadData_t *threadData, modelica_string _sIn, modelica_metatype _program);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_getFullCADFilePath,2,0) {(void*) boxptr_VisualXML_getFullCADFilePath,0}};
#define boxvar_VisualXML_getFullCADFilePath MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_getFullCADFilePath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillVisualizationObjects1(threadData_t *threadData, modelica_metatype _varIn, modelica_boolean _storeProtectedCrefs, modelica_metatype _program, modelica_metatype _tplIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_fillVisualizationObjects1(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _storeProtectedCrefs, modelica_metatype _program, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_fillVisualizationObjects1,2,0) {(void*) boxptr_VisualXML_fillVisualizationObjects1,0}};
#define boxvar_VisualXML_fillVisualizationObjects1 MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_fillVisualizationObjects1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_splitCrefAfter(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _crefCut, modelica_boolean *out_wasCut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_splitCrefAfter(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _crefCut, modelica_metatype *out_wasCut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_splitCrefAfter,2,0) {(void*) boxptr_VisualXML_splitCrefAfter,0}};
#define boxvar_VisualXML_splitCrefAfter MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_splitCrefAfter)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_makeCrefQualFromString(threadData_t *threadData, modelica_string _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_makeCrefQualFromString,2,0) {(void*) boxptr_VisualXML_makeCrefQualFromString,0}};
#define boxvar_VisualXML_makeCrefQualFromString MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_makeCrefQualFromString)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_newVisualizer(threadData_t *threadData, modelica_metatype _cref, modelica_string _visualizerName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_newVisualizer,2,0) {(void*) boxptr_VisualXML_newVisualizer,0}};
#define boxvar_VisualXML_newVisualizer MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_newVisualizer)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillVisualizationObjects(threadData_t *threadData, modelica_metatype _visVar, modelica_metatype _allVarsIn, modelica_metatype _programIn, modelica_metatype *out_allVarsOut, modelica_metatype *out_programOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_fillVisualizationObjects,2,0) {(void*) boxptr_VisualXML_fillVisualizationObjects,0}};
#define boxvar_VisualXML_fillVisualizationObjects MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_fillVisualizationObjects)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_setBindingForProtectedVars1(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_setBindingForProtectedVars1,2,0) {(void*) boxptr_VisualXML_setBindingForProtectedVars1,0}};
#define boxvar_VisualXML_setBindingForProtectedVars1 MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_setBindingForProtectedVars1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_setBindingForProtectedVars(threadData_t *threadData, modelica_metatype _eqSysIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_setBindingForProtectedVars,2,0) {(void*) boxptr_VisualXML_setBindingForProtectedVars,0}};
#define boxvar_VisualXML_setBindingForProtectedVars MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_setBindingForProtectedVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_makeVarPublicHideResultFalse(threadData_t *threadData, modelica_metatype _inVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_makeVarPublicHideResultFalse,2,0) {(void*) boxptr_VisualXML_makeVarPublicHideResultFalse,0}};
#define boxvar_VisualXML_makeVarPublicHideResultFalse MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_makeVarPublicHideResultFalse)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_setVisVarsPublic(threadData_t *threadData, modelica_metatype _inVar, modelica_string _dummyArgIn, modelica_string *out_dummyArgOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_setVisVarsPublic,2,0) {(void*) boxptr_VisualXML_setVisVarsPublic,0}};
#define boxvar_VisualXML_setVisVarsPublic MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_setVisVarsPublic)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_getConstCrefBinding(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_getConstCrefBinding,2,0) {(void*) boxptr_VisualXML_getConstCrefBinding,0}};
#define boxvar_VisualXML_getConstCrefBinding MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_getConstCrefBinding)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_tryConstCrefValue(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_tryConstCrefValue,2,0) {(void*) boxptr_VisualXML_tryConstCrefValue,0}};
#define boxvar_VisualXML_tryConstCrefValue MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_tryConstCrefValue)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_inlineConstExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_inlineConstExp,2,0) {(void*) boxptr_VisualXML_inlineConstExp,0}};
#define boxvar_VisualXML_inlineConstExp MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_inlineConstExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_inlineConstExpList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexps, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_inlineConstExpList,2,0) {(void*) boxptr_VisualXML_inlineConstExpList,0}};
#define boxvar_VisualXML_inlineConstExpList MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_inlineConstExpList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_inlineConstVisAttributes(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvis, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_inlineConstVisAttributes,2,0) {(void*) boxptr_VisualXML_inlineConstVisAttributes,0}};
#define boxvar_VisualXML_inlineConstVisAttributes MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_inlineConstVisAttributes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_replaceVisualBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvis, modelica_metatype _varArray, modelica_metatype _program);
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_replaceVisualBinding,2,0) {(void*) boxptr_VisualXML_replaceVisualBinding,0}};
#define boxvar_VisualXML_replaceVisualBinding MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_replaceVisualBinding)

PROTECTED_FUNCTION_STATIC void omc_VisualXML_dumpVis(threadData_t *threadData, modelica_metatype _visIn, modelica_string _iFileName)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(omc_string_data(_OMC_LIT0),stdout);

  omc_Tpl_tplNoret2(threadData, boxvar_VisualXMLTpl_dumpVisXML, _visIn, _iFileName);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_VisualXML_isVisualizerName(threadData_t *threadData, modelica_string _name)
{
  modelica_boolean _isVisualizer;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isVisualizer has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _name;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (5 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT1), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (6 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT2), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (7 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT3), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
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
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _isVisualizer = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isVisualizer;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_isVisualizerName(threadData_t *threadData, modelica_metatype _name)
{
  modelica_boolean _isVisualizer;
  modelica_metatype out_isVisualizer;
  _isVisualizer = omc_VisualXML_isVisualizerName(threadData, _name);
  out_isVisualizer = omc_mk_icon(_isVisualizer);
  return out_isVisualizer;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_VisualXML_hasVisPath(threadData_t *threadData, modelica_metatype _pathsIn, modelica_integer _numIn, modelica_integer *out_numOut)
{
  modelica_string _visPath = NULL;
  modelica_integer _numOut;
  modelica_string tmp1_c0 __attribute__((unused)) = 0;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_string omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _visPath has no default value.
  // _numOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _pathsIn;
    {
      modelica_string _name = NULL;
      modelica_metatype _path = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _path has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1_c0 = _OMC_LIT0;
          tmp1_c1 = ((modelica_integer) -1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 2);
          _path = tmpMeta8;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(_path, _rest);
          /* Tail recursive call */
          _pathsIn = tmpMeta9;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,2) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta10, 2);
          if (8 != omc_string_len(tmpMeta12) || strcmp(omc_string_data(_OMC_LIT4), omc_string_data(tmpMeta12)) != 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta10, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,2) == 0) goto tmp3_end;
          tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 2);
          if (9 != omc_string_len(tmpMeta14) || strcmp(omc_string_data(_OMC_LIT5), omc_string_data(tmpMeta14)) != 0) goto tmp3_end;
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta13, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,2) == 0) goto tmp3_end;
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
          if (9 != omc_string_len(tmpMeta16) || strcmp(omc_string_data(_OMC_LIT6), omc_string_data(tmpMeta16)) != 0) goto tmp3_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta15, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,2) == 0) goto tmp3_end;
          tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 2);
          if (11 != omc_string_len(tmpMeta18) || strcmp(omc_string_data(_OMC_LIT7), omc_string_data(tmpMeta18)) != 0) goto tmp3_end;
          tmpMeta19 = OMC_BOX_FIELD(tmpMeta17, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,2) == 0) goto tmp3_end;
          tmpMeta20 = OMC_BOX_FIELD(tmpMeta19, 2);
          if (8 != omc_string_len(tmpMeta20) || strcmp(omc_string_data(_OMC_LIT8), omc_string_data(tmpMeta20)) != 0) goto tmp3_end;
          tmpMeta21 = OMC_BOX_FIELD(tmpMeta19, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,1) == 0) goto tmp3_end;
          tmpMeta22 = OMC_BOX_FIELD(tmpMeta21, 2);
          _name = tmpMeta22;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_VisualXML_isVisualizerName(threadData, _name)) goto tmp3_end;
          tmp1_c0 = _name;
          tmp1_c1 = _numIn;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmp4_1);
          tmpMeta24 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,2) == 0) goto tmp3_end;
          tmpMeta25 = OMC_BOX_FIELD(tmpMeta23, 2);
          if (16 != omc_string_len(tmpMeta25) || strcmp(omc_string_data(_OMC_LIT9), omc_string_data(tmpMeta25)) != 0) goto tmp3_end;
          tmpMeta26 = OMC_BOX_FIELD(tmpMeta23, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,2) == 0) goto tmp3_end;
          tmpMeta27 = OMC_BOX_FIELD(tmpMeta26, 2);
          if (9 != omc_string_len(tmpMeta27) || strcmp(omc_string_data(_OMC_LIT10), omc_string_data(tmpMeta27)) != 0) goto tmp3_end;
          tmpMeta28 = OMC_BOX_FIELD(tmpMeta26, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,1,1) == 0) goto tmp3_end;
          tmpMeta29 = OMC_BOX_FIELD(tmpMeta28, 2);
          _name = tmpMeta29;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_VisualXML_isVisualizerName(threadData, _name)) goto tmp3_end;
          tmp1_c0 = _name;
          tmp1_c1 = _numIn;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta30 = MMC_CAR(tmp4_1);
          tmpMeta31 = MMC_CDR(tmp4_1);
          _rest = tmpMeta31;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _pathsIn = _rest;
          _numIn = ((modelica_integer) 1) + _numIn;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _visPath = tmp1_c0;
  _numOut = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_numOut) { *out_numOut = _numOut; }
  omc_ret_ = _visPath;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_hasVisPath(threadData_t *threadData, modelica_metatype _pathsIn, modelica_metatype _numIn, modelica_metatype *out_numOut)
{
  modelica_integer tmp1;
  modelica_integer _numOut;
  modelica_string _visPath = NULL;
  tmp1 = omc_unbox_integer(_numIn);
  _visPath = omc_VisualXML_hasVisPath(threadData, _pathsIn, tmp1, &_numOut);
  /* skip box _visPath; String */
  if (out_numOut) { *out_numOut = omc_mk_icon(_numOut); }
  return _visPath;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_isVisualizationVarFold(threadData_t *threadData, modelica_metatype _var, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _var;
    tmp4_2 = _tplIn;
    {
      modelica_integer _idx;
      modelica_metatype _varName = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _varLst = NULL;
      modelica_string _obj = NULL;
      modelica_metatype _paths = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _idx has no default value.
      // _varName has no default value.
      // _cref has no default value.
      // _crefs has no default value.
      // _source has no default value.
      // _varLst has no default value.
      // _obj has no default value.
      // _paths has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
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
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 10);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_2, 2);
          _varName = tmpMeta6;
          _source = tmpMeta7;
          _varLst = tmpMeta8;
          _crefs = tmpMeta9;
          /* Pattern matching succeeded */
          _paths = omc_ElementSource_getElementSourceTypes(threadData, _source);

          _obj = omc_VisualXML_hasVisPath(threadData, _paths, ((modelica_integer) 1) ,&_idx);

          /* Pattern-matching assignment */
          tmp10 = omc_Util_stringNotEqual(threadData, _obj, _OMC_LIT0);
          if (1 /* true */ != tmp10) goto goto_2;

          _cref = omc_ComponentReference_firstNCrefs(threadData, _varName, ((modelica_integer) -1) + _idx);

          tmpMeta12 = omc_mk_box2(0, _cref, _obj);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _crefs);
          _crefs = omc_List_unique(threadData, tmpMeta11);
          tmpMeta13 = mmc_mk_cons(_var, _varLst);
          tmpMeta14 = omc_mk_box2(0, tmpMeta13, _crefs);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _tplIn;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _tplOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tplOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_VisualXML_isVisualizationVar(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _isVisVar;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isVisVar has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      modelica_metatype _source = NULL;
      modelica_string _obj = NULL;
      modelica_metatype _paths = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _source has no default value.
      // _obj has no default value.
      // _paths has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 10);
          
          _source = tmpMeta6;
          /* Pattern matching succeeded */
          _paths = omc_ElementSource_getElementSourceTypes(threadData, _source);

          omc_string_store(&(_obj), omc_VisualXML_hasVisPath(threadData, _paths, ((modelica_integer) 1), NULL));
          tmp1 = omc_Util_stringNotEqual(threadData, _obj, _OMC_LIT0);
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
  _isVisVar = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isVisVar;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_isVisualizationVar(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _isVisVar;
  modelica_metatype out_isVisVar;
  _isVisVar = omc_VisualXML_isVisualizationVar(threadData, _var);
  out_isVisVar = omc_mk_icon(_isVisVar);
  return out_isVisVar;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_VisualXML_printVisualization(threadData_t *threadData, modelica_metatype _vis)
{
  modelica_string _s = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _vis;
    {
      modelica_metatype _ident = NULL;
      modelica_metatype _length = NULL;
      modelica_metatype _width = NULL;
      modelica_metatype _height = NULL;
      modelica_metatype _extra = NULL;
      modelica_metatype _shapeType = NULL;
      modelica_metatype _color = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _widthDir = NULL;
      modelica_metatype _lengthDir = NULL;
      modelica_metatype _T = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ident has no default value.
      // _length has no default value.
      // _width has no default value.
      // _height has no default value.
      // _extra has no default value.
      // _shapeType has no default value.
      // _color has no default value.
      // _r has no default value.
      // _widthDir has no default value.
      // _lengthDir has no default value.
      // _T has no default value.
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
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_metatype tmpMeta21;
          modelica_string tmp26;
          modelica_string tmp27;
          modelica_string tmp28;
          modelica_string tmp29;
          modelica_string tmp30;
          modelica_string tmp31;
          modelica_string tmp32;
          modelica_string tmp33;
          modelica_string tmp34;
          modelica_string tmp35;
          modelica_string tmp36;
          modelica_string tmp37;
          modelica_string tmp38;
          modelica_string tmp39;
          modelica_string tmp40;
          modelica_string tmp41;
          modelica_string tmp42;
          modelica_string tmp43;
          modelica_string tmp44;
          modelica_string tmp45;
          modelica_string tmp46;
          modelica_string tmp47;
          modelica_string tmp48;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 4);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 5);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 7);
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 8);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 9);
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 10);
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 11);
          tmpMeta15 = OMC_BOX_FIELD(tmp4_1, 12);
          tmpMeta16 = OMC_BOX_FIELD(tmp4_1, 13);
          
          _ident = tmpMeta6;
          _shapeType = tmpMeta7;
          _T = tmpMeta8;
          _r = tmpMeta9;
          _lengthDir = tmpMeta10;
          _widthDir = tmpMeta11;
          _length = tmpMeta12;
          _width = tmpMeta13;
          _height = tmpMeta14;
          _extra = tmpMeta15;
          _color = tmpMeta16;
          /* Pattern matching succeeded */
          tmp17 = stringAppend(_OMC_LIT11,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _ident));
          tmp18 = stringAppend(tmp17,_OMC_LIT12);
          tmp19 = stringAppend(tmp18,omc_ExpressionBasics_printExpStr(threadData, _shapeType));
          tmp20 = stringAppend(tmp19,_OMC_LIT13);
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_string __omcQ_24tmpVar2;
            modelica_integer tmp24;
            modelica_metatype _e_loopVar = 0;
            modelica_integer tmp25;
            modelica_metatype _e;
            _e_loopVar = _r;
            tmp25 = 1;
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar3;
            while(1) {
              tmp24 = 1;
              if (tmp25 <= arrayLength(_e_loopVar)) {
                _e = arrayGet(_e_loopVar, tmp25++);
                tmp24--;
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar2 = omc_ExpressionDump_dumpExpStr(threadData, _e, ((modelica_integer) 0));
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar3;
          }
          tmp26 = stringAppend(tmp20,stringDelimitList(tmpMeta21, _OMC_LIT14));
          tmp27 = stringAppend(tmp26,_OMC_LIT15);
          tmp28 = stringAppend(tmp27,_OMC_LIT16);
          tmp29 = stringAppend(tmp28,stringDelimitList(omc_List_mapArray(threadData, _lengthDir, boxvar_ExpressionBasics_printExpStr), _OMC_LIT14));
          tmp30 = stringAppend(tmp29,_OMC_LIT15);
          tmp31 = stringAppend(tmp30,_OMC_LIT17);
          tmp32 = stringAppend(tmp31,stringDelimitList(omc_List_mapArray(threadData, _widthDir, boxvar_ExpressionBasics_printExpStr), _OMC_LIT14));
          tmp33 = stringAppend(tmp32,_OMC_LIT15);
          tmp34 = stringAppend(tmp33,_OMC_LIT18);
          tmp35 = stringAppend(tmp34,stringDelimitList(omc_List_mapArray(threadData, _color, boxvar_ExpressionBasics_printExpStr), _OMC_LIT14));
          tmp36 = stringAppend(tmp35,_OMC_LIT19);
          tmp37 = stringAppend(tmp36,_OMC_LIT20);
          tmp38 = stringAppend(tmp37,omc_ExpressionBasics_printExpStr(threadData, _width));
          tmp39 = stringAppend(tmp38,_OMC_LIT21);
          tmp40 = stringAppend(tmp39,omc_ExpressionBasics_printExpStr(threadData, _height));
          tmp41 = stringAppend(tmp40,_OMC_LIT22);
          tmp42 = stringAppend(tmp41,omc_ExpressionBasics_printExpStr(threadData, _length));
          tmp43 = stringAppend(tmp42,_OMC_LIT23);
          tmp44 = stringAppend(tmp43,stringDelimitList(omc_List_map(threadData, omc_List_flatten(threadData, arrayList(_T)), boxvar_ExpressionBasics_printExpStr), _OMC_LIT24));
          tmp45 = stringAppend(tmp44,_OMC_LIT15);
          tmp46 = stringAppend(tmp45,_OMC_LIT25);
          tmp47 = stringAppend(tmp46,omc_ExpressionBasics_printExpStr(threadData, _extra));
          tmp48 = stringAppend(tmp47,_OMC_LIT15);
          tmp1 = tmp48;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT26;
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
  omc_string_store(&(_s), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _s;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_getVariableBinding(threadData_t *threadData, modelica_metatype _var, modelica_boolean _storeProtectedCrefs)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _binding has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _var;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 7);
  _binding = tmpMeta2;

  if(isSome(_binding))
  {
    /* Pattern-matching assignment */
    tmpMeta3 = _binding;
    if (optionNone(tmpMeta3)) OMC_THROW_INTERNAL();
    tmpMeta4 = OMC_BOX_FIELD(tmpMeta3, 1);
    _exp = tmpMeta4;

    if(((!omc_Expression_isConstValue(threadData, _exp)) && _storeProtectedCrefs))
    {
      _exp = omc_BackendVariable_varExp(threadData, _var);
    }
  }
  else
  {
    _exp = omc_BackendVariable_varExp(threadData, _var);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_getVariableBinding(threadData_t *threadData, modelica_metatype _var, modelica_metatype _storeProtectedCrefs)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = omc_unbox_integer(_storeProtectedCrefs);
  _exp = omc_VisualXML_getVariableBinding(threadData, _var, tmp1);
  /* skip box _exp; DAE.Exp */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillSurfaceObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_boolean _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis)
{
  modelica_metatype _vis = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vis = __omcQ_24in_5Fvis;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _cref;
    tmp3_2 = _vis;
    {
      modelica_metatype _exp = NULL;
      modelica_integer _pos;
      modelica_integer _pos1;
      modelica_metatype _T0 = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _exp has no default value.
      // _pos has no default value.
      // _pos1 has no default value.
      // _T0 has no default value.
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 10; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,4) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          if (1 != omc_string_len(tmpMeta5) || strcmp(omc_string_data(_OMC_LIT27), omc_string_data(tmpMeta5)) != 0) goto tmp2_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp3_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp2_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 2);
          if (1 != omc_string_len(tmpMeta7) || strcmp(omc_string_data(_OMC_LIT28), omc_string_data(tmpMeta7)) != 0) goto tmp2_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 4);
          if (listEmpty(tmpMeta8)) goto tmp2_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,1) == 0) goto tmp2_end;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta9, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,1) == 0) goto tmp2_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 2);
          tmp13 = omc_unbox_integer(tmpMeta12);
          if (listEmpty(tmpMeta10)) goto tmp2_end;
          tmpMeta14 = MMC_CAR(tmpMeta10);
          tmpMeta15 = MMC_CDR(tmpMeta10);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,2,1) == 0) goto tmp2_end;
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta14, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,1) == 0) goto tmp2_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 2);
          tmp18 = omc_unbox_integer(tmpMeta17);
          if (!listEmpty(tmpMeta15)) goto tmp2_end;
          _pos = tmp13  /* pattern as ty=Integer */;
          _pos1 = tmp18  /* pattern as ty=Integer */;
          tmp3 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          _T0 = arrayGet((OMC_BOX_FIELD(_vis, 3)), _pos);

          _T0 = omc_List_replaceAt(threadData, _exp, _pos1, _T0);

          arrayUpdate((OMC_BOX_FIELD(_vis, 3)), _pos, _T0);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta19 = OMC_BOX_FIELD(tmp3_1, 2);
          if (3 != omc_string_len(tmpMeta19) || strcmp(omc_string_data(_OMC_LIT29), omc_string_data(tmpMeta19)) != 0) goto tmp2_end;
          tmpMeta20 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta20)) goto tmp2_end;
          tmpMeta21 = MMC_CAR(tmpMeta20);
          tmpMeta22 = MMC_CDR(tmpMeta20);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,2,1) == 0) goto tmp2_end;
          tmpMeta23 = OMC_BOX_FIELD(tmpMeta21, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,1) == 0) goto tmp2_end;
          tmpMeta24 = OMC_BOX_FIELD(tmpMeta23, 2);
          tmp25 = omc_unbox_integer(tmpMeta24);
          if (!listEmpty(tmpMeta22)) goto tmp2_end;
          _pos = tmp25  /* pattern as ty=Integer */;
          tmp3 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 4)), _pos, _exp);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta26 = OMC_BOX_FIELD(tmp3_1, 2);
          if (2 != omc_string_len(tmpMeta26) || strcmp(omc_string_data(_OMC_LIT30), omc_string_data(tmpMeta26)) != 0) goto tmp2_end;
          
          tmp3 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[5] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta27;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta28 = OMC_BOX_FIELD(tmp3_1, 2);
          if (2 != omc_string_len(tmpMeta28) || strcmp(omc_string_data(_OMC_LIT31), omc_string_data(tmpMeta28)) != 0) goto tmp2_end;
          
          tmp3 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[6] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta29;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta30 = OMC_BOX_FIELD(tmp3_1, 2);
          if (9 != omc_string_len(tmpMeta30) || strcmp(omc_string_data(_OMC_LIT32), omc_string_data(tmpMeta30)) != 0) goto tmp2_end;
          
          tmp3 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[7] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta31;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta32 = OMC_BOX_FIELD(tmp3_1, 2);
          if (12 != omc_string_len(tmpMeta32) || strcmp(omc_string_data(_OMC_LIT33), omc_string_data(tmpMeta32)) != 0) goto tmp2_end;
          
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[8] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta33;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_integer tmp40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta34 = OMC_BOX_FIELD(tmp3_1, 2);
          if (5 != omc_string_len(tmpMeta34) || strcmp(omc_string_data(_OMC_LIT34), omc_string_data(tmpMeta34)) != 0) goto tmp2_end;
          tmpMeta35 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta35)) goto tmp2_end;
          tmpMeta36 = MMC_CAR(tmpMeta35);
          tmpMeta37 = MMC_CDR(tmpMeta35);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,2,1) == 0) goto tmp2_end;
          tmpMeta38 = OMC_BOX_FIELD(tmpMeta36, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,0,1) == 0) goto tmp2_end;
          tmpMeta39 = OMC_BOX_FIELD(tmpMeta38, 2);
          tmp40 = omc_unbox_integer(tmpMeta39);
          if (!listEmpty(tmpMeta37)) goto tmp2_end;
          _pos = tmp40  /* pattern as ty=Integer */;
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 9)), _pos, _exp);
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta41 = OMC_BOX_FIELD(tmp3_1, 2);
          if (19 != omc_string_len(tmpMeta41) || strcmp(omc_string_data(_OMC_LIT35), omc_string_data(tmpMeta41)) != 0) goto tmp2_end;
          
          tmp3 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[10] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta42;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,10) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta43 = OMC_BOX_FIELD(tmp3_1, 2);
          if (12 != omc_string_len(tmpMeta43) || strcmp(omc_string_data(_OMC_LIT36), omc_string_data(tmpMeta43)) != 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta44 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta44), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta44))[11] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta44;
          goto tmp2_done;
        }
        case 9: {
          
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
      if (++tmp3 < 10) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _vis;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_fillSurfaceObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_metatype _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis)
{
  modelica_integer tmp1;
  modelica_metatype _vis = NULL;
  tmp1 = omc_unbox_integer(_storeProtectedCrefs);
  _vis = omc_VisualXML_fillSurfaceObject(threadData, _cref, _var, tmp1, _program, __omcQ_24in_5Fvis);
  /* skip box _vis; VisualXML.Visualization */
  return _vis;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillVectorObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_boolean _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis)
{
  modelica_metatype _vis = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vis = __omcQ_24in_5Fvis;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _cref;
    tmp3_2 = _vis;
    {
      modelica_metatype _exp = NULL;
      modelica_integer _pos;
      modelica_integer _pos1;
      modelica_metatype _T0 = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _exp has no default value.
      // _pos has no default value.
      // _pos1 has no default value.
      // _T0 has no default value.
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 9; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,1,9) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,4) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          if (1 != omc_string_len(tmpMeta5) || strcmp(omc_string_data(_OMC_LIT27), omc_string_data(tmpMeta5)) != 0) goto tmp2_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp3_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp2_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 2);
          if (1 != omc_string_len(tmpMeta7) || strcmp(omc_string_data(_OMC_LIT28), omc_string_data(tmpMeta7)) != 0) goto tmp2_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 4);
          if (listEmpty(tmpMeta8)) goto tmp2_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,1) == 0) goto tmp2_end;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta9, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,1) == 0) goto tmp2_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 2);
          tmp13 = omc_unbox_integer(tmpMeta12);
          if (listEmpty(tmpMeta10)) goto tmp2_end;
          tmpMeta14 = MMC_CAR(tmpMeta10);
          tmpMeta15 = MMC_CDR(tmpMeta10);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,2,1) == 0) goto tmp2_end;
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta14, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,1) == 0) goto tmp2_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 2);
          tmp18 = omc_unbox_integer(tmpMeta17);
          if (!listEmpty(tmpMeta15)) goto tmp2_end;
          _pos = tmp13  /* pattern as ty=Integer */;
          _pos1 = tmp18  /* pattern as ty=Integer */;
          tmp3 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          _T0 = arrayGet((OMC_BOX_FIELD(_vis, 3)), _pos);

          _T0 = omc_List_replaceAt(threadData, _exp, _pos1, _T0);

          arrayUpdate((OMC_BOX_FIELD(_vis, 3)), _pos, _T0);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,1,9) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta19 = OMC_BOX_FIELD(tmp3_1, 2);
          if (1 != omc_string_len(tmpMeta19) || strcmp(omc_string_data(_OMC_LIT37), omc_string_data(tmpMeta19)) != 0) goto tmp2_end;
          tmpMeta20 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta20)) goto tmp2_end;
          tmpMeta21 = MMC_CAR(tmpMeta20);
          tmpMeta22 = MMC_CDR(tmpMeta20);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,2,1) == 0) goto tmp2_end;
          tmpMeta23 = OMC_BOX_FIELD(tmpMeta21, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,1) == 0) goto tmp2_end;
          tmpMeta24 = OMC_BOX_FIELD(tmpMeta23, 2);
          tmp25 = omc_unbox_integer(tmpMeta24);
          if (!listEmpty(tmpMeta22)) goto tmp2_end;
          _pos = tmp25  /* pattern as ty=Integer */;
          tmp3 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 4)), _pos, _exp);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,1,9) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta26 = OMC_BOX_FIELD(tmp3_1, 2);
          if (11 != omc_string_len(tmpMeta26) || strcmp(omc_string_data(_OMC_LIT38), omc_string_data(tmpMeta26)) != 0) goto tmp2_end;
          tmpMeta27 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta27)) goto tmp2_end;
          tmpMeta28 = MMC_CAR(tmpMeta27);
          tmpMeta29 = MMC_CDR(tmpMeta27);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,2,1) == 0) goto tmp2_end;
          tmpMeta30 = OMC_BOX_FIELD(tmpMeta28, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,0,1) == 0) goto tmp2_end;
          tmpMeta31 = OMC_BOX_FIELD(tmpMeta30, 2);
          tmp32 = omc_unbox_integer(tmpMeta31);
          if (!listEmpty(tmpMeta29)) goto tmp2_end;
          _pos = tmp32  /* pattern as ty=Integer */;
          tmp3 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 5)), _pos, _exp);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_integer tmp39;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,1,9) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta33 = OMC_BOX_FIELD(tmp3_1, 2);
          if (5 != omc_string_len(tmpMeta33) || strcmp(omc_string_data(_OMC_LIT34), omc_string_data(tmpMeta33)) != 0) goto tmp2_end;
          tmpMeta34 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta34)) goto tmp2_end;
          tmpMeta35 = MMC_CAR(tmpMeta34);
          tmpMeta36 = MMC_CDR(tmpMeta34);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,2,1) == 0) goto tmp2_end;
          tmpMeta37 = OMC_BOX_FIELD(tmpMeta35, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,0,1) == 0) goto tmp2_end;
          tmpMeta38 = OMC_BOX_FIELD(tmpMeta37, 2);
          tmp39 = omc_unbox_integer(tmpMeta38);
          if (!listEmpty(tmpMeta36)) goto tmp2_end;
          _pos = tmp39  /* pattern as ty=Integer */;
          tmp3 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 6)), _pos, _exp);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,1,9) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta40 = OMC_BOX_FIELD(tmp3_1, 2);
          if (19 != omc_string_len(tmpMeta40) || strcmp(omc_string_data(_OMC_LIT35), omc_string_data(tmpMeta40)) != 0) goto tmp2_end;
          
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_vis), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[7] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta41;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,1,9) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta42 = OMC_BOX_FIELD(tmp3_1, 2);
          if (8 != omc_string_len(tmpMeta42) || strcmp(omc_string_data(_OMC_LIT39), omc_string_data(tmpMeta42)) != 0) goto tmp2_end;
          
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_vis), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[8] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta43;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,1,9) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta44 = OMC_BOX_FIELD(tmp3_1, 2);
          if (12 != omc_string_len(tmpMeta44) || strcmp(omc_string_data(_OMC_LIT40), omc_string_data(tmpMeta44)) != 0) goto tmp2_end;
          
          tmp3 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_vis), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[9] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta45;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,1,9) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta46 = OMC_BOX_FIELD(tmp3_1, 2);
          if (14 != omc_string_len(tmpMeta46) || strcmp(omc_string_data(_OMC_LIT41), omc_string_data(tmpMeta46)) != 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta47 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta47), MMC_UNTAGPTR(_vis), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta47))[10] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta47;
          goto tmp2_done;
        }
        case 8: {
          
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
      if (++tmp3 < 9) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _vis;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_fillVectorObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_metatype _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis)
{
  modelica_integer tmp1;
  modelica_metatype _vis = NULL;
  tmp1 = omc_unbox_integer(_storeProtectedCrefs);
  _vis = omc_VisualXML_fillVectorObject(threadData, _cref, _var, tmp1, _program, __omcQ_24in_5Fvis);
  /* skip box _vis; VisualXML.Visualization */
  return _vis;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillShapeObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_boolean _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis)
{
  modelica_metatype _vis = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vis = __omcQ_24in_5Fvis;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _cref;
    tmp3_2 = _vis;
    {
      modelica_metatype _bind = NULL;
      modelica_metatype _exp = NULL;
      modelica_integer _pos;
      modelica_integer _pos1;
      modelica_metatype _T0 = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _bind has no default value.
      // _exp has no default value.
      // _pos has no default value.
      // _pos1 has no default value.
      // _T0 has no default value.
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 13; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          if (9 != omc_string_len(tmpMeta5) || strcmp(omc_string_data(_OMC_LIT42), omc_string_data(tmpMeta5)) != 0) goto tmp2_end;
          
          tmp3 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmpMeta6 = _var;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 7);
          _bind = tmpMeta7;

          if(isSome(_bind))
          {
            tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(15));
            memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = omc_Util_getOption(threadData, _bind);
            _vis = tmpMeta8;
          }
          goto tmp2_done;
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
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,4) == 0) goto tmp2_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp3_1, 2);
          if (1 != omc_string_len(tmpMeta9) || strcmp(omc_string_data(_OMC_LIT27), omc_string_data(tmpMeta9)) != 0) goto tmp2_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp3_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,3) == 0) goto tmp2_end;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 2);
          if (1 != omc_string_len(tmpMeta11) || strcmp(omc_string_data(_OMC_LIT28), omc_string_data(tmpMeta11)) != 0) goto tmp2_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta10, 4);
          if (listEmpty(tmpMeta12)) goto tmp2_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,2,1) == 0) goto tmp2_end;
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta13, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,1) == 0) goto tmp2_end;
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
          tmp17 = omc_unbox_integer(tmpMeta16);
          if (listEmpty(tmpMeta14)) goto tmp2_end;
          tmpMeta18 = MMC_CAR(tmpMeta14);
          tmpMeta19 = MMC_CDR(tmpMeta14);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,2,1) == 0) goto tmp2_end;
          tmpMeta20 = OMC_BOX_FIELD(tmpMeta18, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,1) == 0) goto tmp2_end;
          tmpMeta21 = OMC_BOX_FIELD(tmpMeta20, 2);
          tmp22 = omc_unbox_integer(tmpMeta21);
          if (!listEmpty(tmpMeta19)) goto tmp2_end;
          _pos = tmp17  /* pattern as ty=Integer */;
          _pos1 = tmp22  /* pattern as ty=Integer */;
          tmp3 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          _T0 = arrayGet((OMC_BOX_FIELD(_vis, 4)), _pos);

          _T0 = omc_List_replaceAt(threadData, _exp, _pos1, _T0);

          arrayUpdate((OMC_BOX_FIELD(_vis, 4)), _pos, _T0);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta23 = OMC_BOX_FIELD(tmp3_1, 2);
          if (1 != omc_string_len(tmpMeta23) || strcmp(omc_string_data(_OMC_LIT37), omc_string_data(tmpMeta23)) != 0) goto tmp2_end;
          tmpMeta24 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta24)) goto tmp2_end;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,2,1) == 0) goto tmp2_end;
          tmpMeta27 = OMC_BOX_FIELD(tmpMeta25, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,0,1) == 0) goto tmp2_end;
          tmpMeta28 = OMC_BOX_FIELD(tmpMeta27, 2);
          tmp29 = omc_unbox_integer(tmpMeta28);
          if (!listEmpty(tmpMeta26)) goto tmp2_end;
          _pos = tmp29  /* pattern as ty=Integer */;
          tmp3 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 5)), _pos, _exp);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta30 = OMC_BOX_FIELD(tmp3_1, 2);
          if (7 != omc_string_len(tmpMeta30) || strcmp(omc_string_data(_OMC_LIT43), omc_string_data(tmpMeta30)) != 0) goto tmp2_end;
          tmpMeta31 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta31)) goto tmp2_end;
          tmpMeta32 = MMC_CAR(tmpMeta31);
          tmpMeta33 = MMC_CDR(tmpMeta31);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,2,1) == 0) goto tmp2_end;
          tmpMeta34 = OMC_BOX_FIELD(tmpMeta32, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,0,1) == 0) goto tmp2_end;
          tmpMeta35 = OMC_BOX_FIELD(tmpMeta34, 2);
          tmp36 = omc_unbox_integer(tmpMeta35);
          if (!listEmpty(tmpMeta33)) goto tmp2_end;
          _pos = tmp36  /* pattern as ty=Integer */;
          tmp3 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 6)), _pos, _exp);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_integer tmp43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta37 = OMC_BOX_FIELD(tmp3_1, 2);
          if (15 != omc_string_len(tmpMeta37) || strcmp(omc_string_data(_OMC_LIT44), omc_string_data(tmpMeta37)) != 0) goto tmp2_end;
          tmpMeta38 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta38)) goto tmp2_end;
          tmpMeta39 = MMC_CAR(tmpMeta38);
          tmpMeta40 = MMC_CDR(tmpMeta38);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,2,1) == 0) goto tmp2_end;
          tmpMeta41 = OMC_BOX_FIELD(tmpMeta39, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,0,1) == 0) goto tmp2_end;
          tmpMeta42 = OMC_BOX_FIELD(tmpMeta41, 2);
          tmp43 = omc_unbox_integer(tmpMeta42);
          if (!listEmpty(tmpMeta40)) goto tmp2_end;
          _pos = tmp43  /* pattern as ty=Integer */;
          tmp3 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 7)), _pos, _exp);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_integer tmp50;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta44 = OMC_BOX_FIELD(tmp3_1, 2);
          if (14 != omc_string_len(tmpMeta44) || strcmp(omc_string_data(_OMC_LIT45), omc_string_data(tmpMeta44)) != 0) goto tmp2_end;
          tmpMeta45 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta45)) goto tmp2_end;
          tmpMeta46 = MMC_CAR(tmpMeta45);
          tmpMeta47 = MMC_CDR(tmpMeta45);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta46,2,1) == 0) goto tmp2_end;
          tmpMeta48 = OMC_BOX_FIELD(tmpMeta46, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta48,0,1) == 0) goto tmp2_end;
          tmpMeta49 = OMC_BOX_FIELD(tmpMeta48, 2);
          tmp50 = omc_unbox_integer(tmpMeta49);
          if (!listEmpty(tmpMeta47)) goto tmp2_end;
          _pos = tmp50  /* pattern as ty=Integer */;
          tmp3 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 8)), _pos, _exp);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta51 = OMC_BOX_FIELD(tmp3_1, 2);
          if (6 != omc_string_len(tmpMeta51) || strcmp(omc_string_data(_OMC_LIT46), omc_string_data(tmpMeta51)) != 0) goto tmp2_end;
          
          tmp3 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta52 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta52), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta52))[9] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta52;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta53 = OMC_BOX_FIELD(tmp3_1, 2);
          if (5 != omc_string_len(tmpMeta53) || strcmp(omc_string_data(_OMC_LIT47), omc_string_data(tmpMeta53)) != 0) goto tmp2_end;
          
          tmp3 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta54 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta54), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta54))[10] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta54;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta55 = OMC_BOX_FIELD(tmp3_1, 2);
          if (6 != omc_string_len(tmpMeta55) || strcmp(omc_string_data(_OMC_LIT48), omc_string_data(tmpMeta55)) != 0) goto tmp2_end;
          
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta56 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta56), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta56))[11] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta56;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta57 = OMC_BOX_FIELD(tmp3_1, 2);
          if (5 != omc_string_len(tmpMeta57) || strcmp(omc_string_data(_OMC_LIT49), omc_string_data(tmpMeta57)) != 0) goto tmp2_end;
          
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta58 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta58), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta58))[12] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta58;
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_integer tmp65;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta59 = OMC_BOX_FIELD(tmp3_1, 2);
          if (5 != omc_string_len(tmpMeta59) || strcmp(omc_string_data(_OMC_LIT34), omc_string_data(tmpMeta59)) != 0) goto tmp2_end;
          tmpMeta60 = OMC_BOX_FIELD(tmp3_1, 4);
          if (listEmpty(tmpMeta60)) goto tmp2_end;
          tmpMeta61 = MMC_CAR(tmpMeta60);
          tmpMeta62 = MMC_CDR(tmpMeta60);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,2,1) == 0) goto tmp2_end;
          tmpMeta63 = OMC_BOX_FIELD(tmpMeta61, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta63,0,1) == 0) goto tmp2_end;
          tmpMeta64 = OMC_BOX_FIELD(tmpMeta63, 2);
          tmp65 = omc_unbox_integer(tmpMeta64);
          if (!listEmpty(tmpMeta62)) goto tmp2_end;
          _pos = tmp65  /* pattern as ty=Integer */;
          tmp3 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);

          arrayUpdate((OMC_BOX_FIELD(_vis, 13)), _pos, _exp);
          goto tmp2_done;
        }
        case 11: {
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,13) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta66 = OMC_BOX_FIELD(tmp3_1, 2);
          if (19 != omc_string_len(tmpMeta66) || strcmp(omc_string_data(_OMC_LIT35), omc_string_data(tmpMeta66)) != 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta67 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta67), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta67))[14] = omc_VisualXML_getVariableBinding(threadData, _var, _storeProtectedCrefs);
          _vis = tmpMeta67;
          goto tmp2_done;
        }
        case 12: {
          
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
      if (++tmp3 < 13) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _vis;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_fillShapeObject(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var, modelica_metatype _storeProtectedCrefs, modelica_metatype _program, modelica_metatype __omcQ_24in_5Fvis)
{
  modelica_integer tmp1;
  modelica_metatype _vis = NULL;
  tmp1 = omc_unbox_integer(_storeProtectedCrefs);
  _vis = omc_VisualXML_fillShapeObject(threadData, _cref, _var, tmp1, _program, __omcQ_24in_5Fvis);
  /* skip box _vis; VisualXML.Visualization */
  return _vis;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_VisualXML_getFullCADFilePath(threadData_t *threadData, modelica_string _sIn, modelica_metatype _program)
{
  modelica_string _sOut = NULL;
  modelica_metatype _chars = NULL;
  modelica_string tmp1;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sOut = _sIn;
  // _chars has no default value.
  _chars = stringListStringChar(_sIn);

  if(((listLength(_chars) > ((modelica_integer) 11)) && (stringEqual(stringDelimitList(omc_List_firstN(threadData, _chars, ((modelica_integer) 11)), _OMC_LIT0), _OMC_LIT51))))
  {
    tmp1 = stringAppend(_OMC_LIT50,omc_ProgramUtil_getFullPathFromUri(threadData, _program, _sIn, 1 /* true */));
    omc_string_store(&(_sOut), tmp1);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _sOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillVisualizationObjects1(threadData_t *threadData, modelica_metatype _varIn, modelica_boolean _storeProtectedCrefs, modelica_metatype _program, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _varIn;
    tmp4_2 = _tplIn;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _cref1 = NULL;
      modelica_metatype _ident = NULL;
      modelica_metatype _vis = NULL;
      modelica_metatype _filled_vis = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _cref has no default value.
      // _cref1 has no default value.
      // _ident has no default value.
      // _vis has no default value.
      // _filled_vis has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,13) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 2);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _vars = tmpMeta6;
          _vis = tmpMeta7;
          _ident = tmpMeta8;
          _cref = tmpMeta9;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta11 = omc_VisualXML_splitCrefAfter(threadData, _cref, _ident, &tmp10);
          _cref1 = tmpMeta11;
          if (1 /* true */ != tmp10) goto goto_2;

          _filled_vis = omc_VisualXML_fillShapeObject(threadData, _cref1, _varIn, _storeProtectedCrefs, _program, _vis);
          tmpMeta12 = omc_mk_box2(0, _vars, _filled_vis);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          tmpMeta13 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta14 = OMC_BOX_FIELD(tmp4_2, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,9) == 0) goto tmp3_end;
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 2);
          tmpMeta16 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _vars = tmpMeta13;
          _vis = tmpMeta14;
          _ident = tmpMeta15;
          _cref = tmpMeta16;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta18 = omc_VisualXML_splitCrefAfter(threadData, _cref, _ident, &tmp17);
          _cref1 = tmpMeta18;
          if (1 /* true */ != tmp17) goto goto_2;

          _filled_vis = omc_VisualXML_fillVectorObject(threadData, _cref1, _varIn, _storeProtectedCrefs, _program, _vis);
          tmpMeta19 = omc_mk_box2(0, _vars, _filled_vis);
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_boolean tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          tmpMeta20 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta21 = OMC_BOX_FIELD(tmp4_2, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,2,10) == 0) goto tmp3_end;
          tmpMeta22 = OMC_BOX_FIELD(tmpMeta21, 2);
          tmpMeta23 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _vars = tmpMeta20;
          _vis = tmpMeta21;
          _ident = tmpMeta22;
          _cref = tmpMeta23;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta25 = omc_VisualXML_splitCrefAfter(threadData, _cref, _ident, &tmp24);
          _cref1 = tmpMeta25;
          if (1 /* true */ != tmp24) goto goto_2;

          _filled_vis = omc_VisualXML_fillSurfaceObject(threadData, _cref1, _varIn, _storeProtectedCrefs, _program, _vis);
          tmpMeta26 = omc_mk_box2(0, _vars, _filled_vis);
          tmpMeta1 = tmpMeta26;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta27 = _tplIn;
          tmpMeta28 = OMC_BOX_FIELD(tmpMeta27, 1);
          tmpMeta29 = OMC_BOX_FIELD(tmpMeta27, 2);
          _vars = tmpMeta28;
          _vis = tmpMeta29;
          tmpMeta30 = mmc_mk_cons(_varIn, _vars);
          tmpMeta31 = omc_mk_box2(0, tmpMeta30, _vis);
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _tplOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tplOut;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_fillVisualizationObjects1(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _storeProtectedCrefs, modelica_metatype _program, modelica_metatype _tplIn)
{
  modelica_integer tmp1;
  modelica_metatype _tplOut = NULL;
  tmp1 = omc_unbox_integer(_storeProtectedCrefs);
  _tplOut = omc_VisualXML_fillVisualizationObjects1(threadData, _varIn, tmp1, _program, _tplIn);
  /* skip box _tplOut; tuple<list<BackendDAE.Var>, VisualXML.Visualization> */
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_splitCrefAfter(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _crefCut, modelica_boolean *out_wasCut)
{
  modelica_metatype _crefOut = NULL;
  modelica_boolean _wasCut;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefOut has no default value.
  // _wasCut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _crefIn;
    tmp4_2 = _crefCut;
    {
      modelica_metatype _crefCut1 = NULL;
      modelica_metatype _crefIn1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _crefCut1 has no default value.
      // _crefIn1 has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 5);
          _crefIn1 = tmpMeta6;
          _crefCut1 = tmpMeta7;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp8 = omc_ComponentReferenceBasics_crefFirstCrefEqual(threadData, _crefIn, _crefCut);
          if (1 /* true */ != tmp8) goto goto_2;
          tmpMeta[0+0] = omc_VisualXML_splitCrefAfter(threadData, _crefIn1, _crefCut1, &tmp1_c1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          _crefIn1 = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_ComponentReferenceBasics_crefFirstCrefEqual(threadData, _crefIn, _crefCut);
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta[0+0] = _crefIn1;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          _crefIn1 = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (!omc_ComponentReferenceBasics_crefFirstCrefEqual(threadData, _crefIn, _crefCut));
          if (1 /* true */ != tmp12) goto goto_2;
          tmpMeta[0+0] = _crefIn1;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _crefCut;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _crefOut = tmpMeta[0+0];
  _wasCut = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_wasCut) { *out_wasCut = _wasCut; }
  omc_ret_ = _crefOut;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_VisualXML_splitCrefAfter(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _crefCut, modelica_metatype *out_wasCut)
{
  modelica_boolean _wasCut;
  modelica_metatype _crefOut = NULL;
  _crefOut = omc_VisualXML_splitCrefAfter(threadData, _crefIn, _crefCut, &_wasCut);
  /* skip box _crefOut; DAE.ComponentRef */
  if (out_wasCut) { *out_wasCut = omc_mk_icon(_wasCut); }
  return _crefOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_makeCrefQualFromString(threadData_t *threadData, modelica_string _s)
{
  modelica_metatype _crefOut = NULL;
  modelica_metatype _sLst = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefOut has no default value.
  // _sLst has no default value.
  // _cref has no default value.
  // _crefs has no default value.
  _sLst = omc_Util_stringSplitAtChar(threadData, _s, _OMC_LIT52);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _crefs = omc_List_map2(threadData, _sLst, boxvar_ComponentReferenceBasics_makeCrefIdent, _OMC_LIT53, tmpMeta1);

  /* Pattern-matching assignment */
  tmpMeta2 = _crefs;
  if (listEmpty(tmpMeta2)) OMC_THROW_INTERNAL();
  tmpMeta3 = MMC_CAR(tmpMeta2);
  tmpMeta4 = MMC_CDR(tmpMeta2);
  _cref = tmpMeta3;
  _crefs = tmpMeta4;

  _crefOut = omc_List_foldr(threadData, _crefs, boxvar_ComponentReference_joinCrefs, _cref);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _crefOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_newVisualizer(threadData_t *threadData, modelica_metatype _cref, modelica_string _visualizerName)
{
  modelica_metatype _vis = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vis has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _visualizerName;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (5 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT1), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box14(3, &VisualXML_Visualization_SHAPE__desc, _cref, _OMC_LIT55, arrayCreate(((modelica_integer) 3), _OMC_LIT60), arrayCreate(((modelica_integer) 3), _OMC_LIT57), arrayCreate(((modelica_integer) 3), _OMC_LIT57), arrayCreate(((modelica_integer) 3), _OMC_LIT57), arrayCreate(((modelica_integer) 3), _OMC_LIT57), _OMC_LIT57, _OMC_LIT57, _OMC_LIT57, _OMC_LIT57, arrayCreate(((modelica_integer) 3), _OMC_LIT57), _OMC_LIT57);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (6 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT2), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta7 = omc_mk_box10(4, &VisualXML_Visualization_VECTOR__desc, _cref, arrayCreate(((modelica_integer) 3), _OMC_LIT60), arrayCreate(((modelica_integer) 3), _OMC_LIT57), arrayCreate(((modelica_integer) 3), _OMC_LIT57), arrayCreate(((modelica_integer) 3), _OMC_LIT57), _OMC_LIT57, _OMC_LIT57, _OMC_LIT61, _OMC_LIT61);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (7 != omc_string_len(tmp4_1) || strcmp(omc_string_data(_OMC_LIT3), omc_string_data(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta8 = omc_mk_box11(5, &VisualXML_Visualization_SURFACE__desc, _cref, arrayCreate(((modelica_integer) 3), _OMC_LIT60), arrayCreate(((modelica_integer) 3), _OMC_LIT57), _OMC_LIT62, _OMC_LIT62, _OMC_LIT61, _OMC_LIT61, arrayCreate(((modelica_integer) 3), _OMC_LIT57), _OMC_LIT57, _OMC_LIT57);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 3: {
          modelica_string tmp9;
          modelica_string tmp10;
          
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_OMC_LIT63,_visualizerName);
          tmp10 = stringAppend(tmp9,_OMC_LIT64);
          omc_Error_addInternalError(threadData, tmp10, _OMC_LIT66);
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
  _vis = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _vis;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_fillVisualizationObjects(threadData_t *threadData, modelica_metatype _visVar, modelica_metatype _allVarsIn, modelica_metatype _programIn, modelica_metatype *out_allVarsOut, modelica_metatype *out_programOut)
{
  modelica_metatype _visOut = NULL;
  modelica_metatype _allVarsOut = NULL;
  modelica_metatype _programOut = NULL;
  modelica_metatype _cref = NULL;
  modelica_string _vis_name = NULL;
  modelica_metatype _vis = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _visOut has no default value.
  _allVarsOut = _allVarsIn;
  _programOut = _programIn;
  // _cref has no default value.
  // _vis_name has no default value.
  // _vis has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _visVar;
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 1);
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta5, 2);
          _cref = tmpMeta6;
          _vis_name = tmpMeta7;

          _vis = omc_VisualXML_newVisualizer(threadData, _cref, _vis_name);

          /* Pattern-matching assignment */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = omc_mk_box2(0, tmpMeta8, _vis);
          tmpMeta10 = omc_List_fold2(threadData, _allVarsIn, boxvar_VisualXML_fillVisualizationObjects1, omc_mk_boolean(1 /* true */), _programIn, tmpMeta9);
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 2);
          _visOut = tmpMeta11;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          fputs(omc_string_data(_OMC_LIT67),stdout);

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
  if (out_allVarsOut) { *out_allVarsOut = _allVarsOut; }
  if (out_programOut) { *out_programOut = _programOut; }
  omc_ret_ = _visOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_setBindingForProtectedVars1(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut)
{
  modelica_metatype _varOut = NULL;
  modelica_metatype _tplOut = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varOut has no default value.
  // _tplOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _varIn;
    tmp4_2 = _tplIn;
    {
      modelica_integer _idx;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _idx has no default value.
      // _ass1 has no default value.
      // _eqs has no default value.
      // _eq has no default value.
      // _var has no default value.
      // _exp1 has no default value.
      // _exp2 has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 7);
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_2, 1);
          tmp10 = omc_unbox_integer(tmpMeta9);
          tmpMeta11 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_2, 3);
          _idx = tmp10  /* pattern as ty=Integer */;
          _ass1 = tmpMeta11;
          _eqs = tmpMeta12;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_BackendVariable_isProtectedVar(threadData, _varIn) && omc_VisualXML_isVisualizationVar(threadData, _varIn))) goto tmp3_end;
          _eq = omc_BackendEquation_get(threadData, _eqs, omc_unbox_integer(arrayGet(_ass1, _idx)));

          /* Pattern-matching assignment */
          tmpMeta13 = _eq;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,4) == 0) goto goto_2;
          tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 2);
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta13, 3);
          _exp1 = tmpMeta14;
          _exp2 = tmpMeta15;

          _exp1 = omc_ExpressionSolve_solve(threadData, _exp1, _exp2, omc_BackendVariable_varExp(threadData, _varIn), mmc_mk_none(), NULL);

          _var = omc_BackendVariable_setBindExp(threadData, _varIn, mmc_mk_some(_exp1));

          _var = omc_VisualXML_makeVarPublicHideResultFalse(threadData, _var);
          tmpMeta16 = omc_mk_box3(0, omc_mk_integer(((modelica_integer) 1) + _idx), _ass1, _eqs);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = tmpMeta16;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          tmpMeta17 = OMC_BOX_FIELD(tmp4_2, 1);
          tmp18 = omc_unbox_integer(tmpMeta17);
          tmpMeta19 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta20 = OMC_BOX_FIELD(tmp4_2, 3);
          _idx = tmp18  /* pattern as ty=Integer */;
          _ass1 = tmpMeta19;
          _eqs = tmpMeta20;
          /* Pattern matching succeeded */
          if((omc_BackendVariable_isProtectedVar(threadData, _varIn) && omc_VisualXML_isVisualizationVar(threadData, _varIn)))
          {
            _var = omc_VisualXML_makeVarPublicHideResultFalse(threadData, _varIn);
          }
          else
          {
            _var = _varIn;
          }
          tmpMeta21 = omc_mk_box3(0, omc_mk_integer(((modelica_integer) 1) + _idx), _ass1, _eqs);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = tmpMeta21;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _varOut = tmpMeta[0+0];
  _tplOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tplOut) { *out_tplOut = _tplOut; }
  omc_ret_ = _varOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_setBindingForProtectedVars(threadData_t *threadData, modelica_metatype _eqSysIn)
{
  modelica_metatype _eqSysOut = NULL;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqSysOut has no default value.
  // _ass1 has no default value.
  // _vars has no default value.
  // _eqs has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _eqSysIn;
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta5, 3);
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta5, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,3) == 0) goto goto_1;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 2);
          _vars = tmpMeta6;
          _eqs = tmpMeta7;
          _ass1 = tmpMeta9;

          tmpMeta10 = omc_mk_box3(0, omc_mk_integer(((modelica_integer) 1)), _ass1, _eqs);
          omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _vars, boxvar_VisualXML_setBindingForProtectedVars1, tmpMeta10, NULL);
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

  _eqSysOut = _eqSysIn;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _eqSysOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_makeVarPublicHideResultFalse(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _vals = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _vals has no default value.
  _vals = (OMC_BOX_FIELD(_inVar, 11));

  _vals = omc_DAEUtil_setProtectedAttr(threadData, _vals, 0 /* false */);

  _outVar = omc_BackendVariable_setVarAttributes(threadData, _inVar, _vals);

  _outVar = omc_BackendVariable_setHideResult(threadData, _outVar, _OMC_LIT68);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outVar;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_setVisVarsPublic(threadData_t *threadData, modelica_metatype _inVar, modelica_string _dummyArgIn, modelica_string *out_dummyArgOut)
{
  modelica_metatype _outVar = NULL;
  modelica_string _dummyArgOut = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  _dummyArgOut = _dummyArgIn;
  if(omc_VisualXML_isVisualizationVar(threadData, _inVar))
  {
    _outVar = omc_VisualXML_makeVarPublicHideResultFalse(threadData, _inVar);
  }
  _return: OMC_LABEL_UNUSED
  if (out_dummyArgOut) { *out_dummyArgOut = _dummyArgOut; }
  omc_ret_ = _outVar;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_getConstCrefBinding(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars)
{
  modelica_metatype _eOut = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eOut has no default value.
  // _e has no default value.
  // _var has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta5 = omc_BackendVariable_getVar(threadData, _cr, _vars, NULL);
          if (listEmpty(tmpMeta5)) goto goto_1;
          tmpMeta6 = MMC_CAR(tmpMeta5);
          tmpMeta7 = MMC_CDR(tmpMeta5);
          if (!listEmpty(tmpMeta7)) goto goto_1;
          _var = tmpMeta6;

          _e = omc_BackendVariable_varBindExp(threadData, _var);

          { /* matchcontinue expression */
            volatile modelica_metatype tmp11_1;
            tmp11_1 = _e;
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              OMC_TRY_INTERNAL(mmc_jumper)
              tmp10_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp11 < 3; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!omc_Expression_isConst(threadData, _e)) goto tmp10_end;
                  tmpMeta8 = _e;
                  goto tmp10_done;
                }
                case 1: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,6,2) == 0) goto tmp10_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = omc_VisualXML_getConstCrefBinding(threadData, omc_Expression_expCref(threadData, _e), _vars);
                  goto tmp10_done;
                }
                case 2: {
                  modelica_string tmp13;
                  modelica_string tmp14;
                  modelica_string tmp15;
                  modelica_string tmp16;
                  
                  /* Pattern matching succeeded */
                  tmp13 = stringAppend(_OMC_LIT69,omc_ExpressionBasics_printExpStr(threadData, _e));
                  tmp14 = stringAppend(tmp13,_OMC_LIT70);
                  tmp15 = stringAppend(tmp14,omc_ComponentReference_crefStr(threadData, _cr));
                  tmp16 = stringAppend(tmp15,_OMC_LIT71);
                  omc_Error_addCompilerWarning(threadData, tmp16);
                  tmpMeta8 = _e;
                  goto tmp10_done;
                }
                }
                goto tmp10_end;
                tmp10_end: ;
              }
              goto goto_9;
              tmp10_done:
              (void)tmp11;
              OMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp10_done2;
              goto_9:;
              OMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp11 < 3) {
                goto tmp10_top;
              }
              goto goto_1;
              tmp10_done2:;
            }
          }
          _eOut = tmpMeta8;
          goto tmp2_done;
        }
        case 1: {
          modelica_string tmp17;
          modelica_string tmp18;
          /* Pattern matching succeeded */
          tmp17 = stringAppend(_OMC_LIT72,omc_ComponentReference_crefStr(threadData, _cr));
          tmp18 = stringAppend(tmp17,_OMC_LIT64);
          omc_Error_addInternalError(threadData, tmp18, _OMC_LIT73);

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
  omc_ret_ = _eOut;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_tryConstCrefValue(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _bind = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_boolean tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _var has no default value.
  // _bind has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta1 = omc_BackendVariable_getVar(threadData, _cr, _vars, NULL);
  if (listEmpty(tmpMeta1)) OMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (!listEmpty(tmpMeta3)) OMC_THROW_INTERNAL();
  _var = tmpMeta2;

  /* Pattern-matching assignment */
  tmp4 = omc_BackendVariable_isParam(threadData, _var);
  if (0 /* false */ != tmp4) OMC_THROW_INTERNAL();

  _bind = omc_BackendVariable_varBindExp(threadData, _var);

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _bind;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_isConst(threadData, _bind)) goto tmp7_end;
          tmpMeta5 = _bind;
          goto tmp7_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,6,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _cr = omc_Expression_expCref(threadData, _bind);
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _exp = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_inlineConstExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _vars)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_VisualXML_tryConstCrefValue(threadData, _cr, _vars);
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
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exp;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_inlineConstExpList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexps, modelica_metatype _vars)
{
  modelica_metatype _exps = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exps = __omcQ_24in_5Fexps;
  _exps = omc_List_map1(threadData, _exps, boxvar_VisualXML_inlineConstExp, _vars);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _exps;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_inlineConstVisAttributes(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvis, modelica_metatype _vars)
{
  modelica_metatype _vis = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vis = __omcQ_24in_5Fvis;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _vis;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
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
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[4] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 4)), boxvar_VisualXML_inlineConstExpList, _vars);
          _vis = tmpMeta4;

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 5)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[6] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 6)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[7] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 7)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[8] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 8)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[9] = omc_VisualXML_inlineConstExp(threadData, (OMC_BOX_FIELD(_vis, 9)), _vars);
          _vis = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[10] = omc_VisualXML_inlineConstExp(threadData, (OMC_BOX_FIELD(_vis, 10)), _vars);
          _vis = tmpMeta10;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[11] = omc_VisualXML_inlineConstExp(threadData, (OMC_BOX_FIELD(_vis, 11)), _vars);
          _vis = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[12] = omc_VisualXML_inlineConstExp(threadData, (OMC_BOX_FIELD(_vis, 12)), _vars);
          _vis = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[13] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 13)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[14] = omc_VisualXML_inlineConstExp(threadData, (OMC_BOX_FIELD(_vis, 14)), _vars);
          _vis = tmpMeta14;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_vis), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 3)), boxvar_VisualXML_inlineConstExpList, _vars);
          _vis = tmpMeta15;

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_vis), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[4] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 4)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta16;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_vis), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[5] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 5)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_vis), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[6] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 6)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta18;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[3] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 3)), boxvar_VisualXML_inlineConstExpList, _vars);
          _vis = tmpMeta19;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[4] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 4)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta20;

          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_vis), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[9] = omc_Array_map1(threadData, (OMC_BOX_FIELD(_vis, 9)), boxvar_VisualXML_inlineConstExp, _vars);
          _vis = tmpMeta21;
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
  omc_ret_ = _vis;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_VisualXML_replaceVisualBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvis, modelica_metatype _varArray, modelica_metatype _program)
{
  modelica_metatype _vis = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vis = __omcQ_24in_5Fvis;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _vis;
    {
      modelica_metatype _cr = NULL;
      modelica_string _s = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cr has no default value.
      // _s has no default value.
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,13) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,6,2) == 0) goto tmp2_end;
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 2);
          
          _cr = tmpMeta6;
          tmp3 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = omc_VisualXML_getConstCrefBinding(threadData, _cr, _varArray);
          _vis = tmpMeta7;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,13) == 0) goto tmp2_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,1) == 0) goto tmp2_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 2);
          
          _s = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta11 = omc_mk_box2(5, &DAE_Exp_SCONST__desc, omc_VisualXML_getFullCADFilePath(threadData, _s, _program));
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_vis), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = tmpMeta11;
          _vis = tmpMeta10;
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
      tmp2_done:
      (void)tmp3;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 3) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _vis;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_VisualXML_visualizationInfoXML(threadData_t *threadData, modelica_metatype _daeIn, modelica_string _fileName, modelica_metatype _program)
{
  modelica_metatype _daeOut = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _eqs0 = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _aliasVars = NULL;
  modelica_metatype _constVars = NULL;
  modelica_metatype _globalKnownVarLst = NULL;
  modelica_metatype _allVarLst = NULL;
  modelica_metatype _aliasVarLst = NULL;
  modelica_metatype _visuals = NULL;
  modelica_metatype _allVisuals = NULL;
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
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_string tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeOut has no default value.
  // _eqs has no default value.
  // _eqs0 has no default value.
  // _shared has no default value.
  // _globalKnownVars has no default value.
  // _aliasVars has no default value.
  // _constVars has no default value.
  // _globalKnownVarLst has no default value.
  // _allVarLst has no default value.
  // _aliasVarLst has no default value.
  // _visuals has no default value.
  // _allVisuals has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _daeIn;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  _eqs0 = tmpMeta2;
  _shared = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _shared;
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 2);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta4, 5);
  _globalKnownVars = tmpMeta5;
  _aliasVars = tmpMeta6;

  _eqs = omc_List_map(threadData, _eqs0, boxvar_BackendDAEUtil_copyEqSystem);

  _eqs = omc_List_map(threadData, _eqs, boxvar_VisualXML_setBindingForProtectedVars);

  _globalKnownVarLst = omc_BackendVariable_varList(threadData, _globalKnownVars);

  _aliasVarLst = omc_BackendVariable_varList(threadData, _aliasVars);

  _allVarLst = omc_List_flatten(threadData, omc_List_mapMap(threadData, _eqs, boxvar_BackendVariable_daeVars, boxvar_BackendVariable_varList));

  /* Pattern-matching assignment */
  tmpMeta7 = omc_List_fold(threadData, _globalKnownVarLst, boxvar_VisualXML_isVisualizationVarFold, _OMC_LIT74);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
  tmpMeta9 = OMC_BOX_FIELD(tmpMeta7, 2);
  _globalKnownVarLst = tmpMeta8;
  _allVisuals = tmpMeta9;

  /* Pattern-matching assignment */
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta11 = omc_mk_box2(0, tmpMeta10, _allVisuals);
  tmpMeta12 = omc_List_fold(threadData, _allVarLst, boxvar_VisualXML_isVisualizationVarFold, tmpMeta11);
  tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 1);
  tmpMeta14 = OMC_BOX_FIELD(tmpMeta12, 2);
  _allVarLst = tmpMeta13;
  _allVisuals = tmpMeta14;

  /* Pattern-matching assignment */
  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta16 = omc_mk_box2(0, tmpMeta15, _allVisuals);
  tmpMeta17 = omc_List_fold(threadData, _aliasVarLst, boxvar_VisualXML_isVisualizationVarFold, tmpMeta16);
  tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 1);
  tmpMeta19 = OMC_BOX_FIELD(tmpMeta17, 2);
  _aliasVarLst = tmpMeta18;
  _allVisuals = tmpMeta19;

  _allVarLst = listAppend(_globalKnownVarLst, listAppend(_allVarLst, _aliasVarLst));

  _visuals = omc_List_mapFold2(threadData, _allVisuals, boxvar_VisualXML_fillVisualizationObjects, _allVarLst, _program, NULL, NULL);

  _visuals = omc_List_map2(threadData, _visuals, boxvar_VisualXML_replaceVisualBinding, _globalKnownVars, _program);

  _constVars = omc_BackendVariable_mergeVariables(threadData, _globalKnownVars, _aliasVars, 1 /* true */);

  _visuals = omc_List_map1(threadData, _visuals, boxvar_VisualXML_inlineConstVisAttributes, _constVars);

  tmp20 = stringAppend(_fileName,_OMC_LIT75);
  omc_VisualXML_dumpVis(threadData, listArray(_visuals), tmp20);

  _globalKnownVars = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _globalKnownVars, boxvar_VisualXML_setVisVarsPublic, _OMC_LIT0, NULL);

  _aliasVars = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _aliasVars, boxvar_VisualXML_setVisVarsPublic, _OMC_LIT0, NULL);

  tmpMeta21 = omc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _eqs, _shared);
  _daeOut = tmpMeta21;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _daeOut;
  return omc_ret_;
}

