#include "omc_simulation_settings.h"
#include "EvaluateParameter.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,4) {&Absyn_Msg_NO__MSG__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " has unevaluateable fixed attribute value \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,43,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\" use values from start attribute(s) \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,38,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT4,_OMC_LIT5,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Cannot evaluate Variable \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,26,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "evalParameterDump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,17,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Dumps information for evaluating parameters."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,44,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(155)),_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "\nBEGINNING of preOptModule 'evaluateParameters'\n********************************************************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,130,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "DAE before evaluating parameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,32,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "\n================================================================================\nThere is nothing to do. All parameters are already evaluated.\n================================================================================\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,226,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "evaluateFinalParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,23,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Evaluates all the final parameters in addition to parameters with annotation(Evaluate=true)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,92,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(97)),_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT16,_OMC_LIT17,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "evaluateProtectedParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,27,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "Evaluates all the protected parameters in addition to parameters with annotation(Evaluate=true)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,96,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(98)),_OMC_LIT20,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT16,_OMC_LIT17,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "\nStructural parameters and parameters with annotation(Evaluate=true) will be evaluated.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,88,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "\nStructural parameters, final parameters and parameters with annotation(Evaluate=true) will be evaluated.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,106,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\nStructural parameters, protected parameters and parameters with annotation(Evaluate=true) will be evaluated.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,110,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "\nStructural parameters, final parameters, protected parameters and parameters with annotation(Evaluate=true) will be evaluated.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,128,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "\nSTART evaluating parameters:\n================================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,111,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Number of parameters: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,22,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Number of parameters selected for evaluation: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,46,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Selected parameters for evaluation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,36,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,1,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "\n\nAfter evaluating the selected parameters:\n================================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,125,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\nAll replacements:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,18,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "\nReplacements that will be replaced in the DAE:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,47,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "globalKnownVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,15,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "\nmark: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,7,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "markarr: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,9,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "\n\nAfter sorting parameters:\n================================================================================\nOrder:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,116,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "\n\nAfter replacing the evaluated parameters in parameter bindings:\n================================================================================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,146,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "\n\nAfter replacing the evaluated parameters in variable bindings and start attributes:\n================================================================================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,166,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,2,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "replaceEvaluatedParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,26,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Replaces all the evaluated parameters in the DAE."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,49,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(99)),_OMC_LIT43,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT16,_OMC_LIT44,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "Evaluated parameters are not replaced in the DAE. Use --replaceEvaluatedParameters=true to replace them in the DAE."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,115,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "\nThere is no evaluated parameter.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,34,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "DAE after replacing the evaluated parameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,44,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "evaluateAllParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,21,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Evaluates all parameters if set, except the ones that have annotation(Evaluate = false)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,88,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(26)),_OMC_LIT50,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "\nEND of preOptModule 'evaluateParameters'\n********************************************************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,124,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#include "util/modelica.h"

#include "EvaluateParameter_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersSystemEqns(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inRepl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersSystemEqns,2,0) {(void*) boxptr_EvaluateParameter_replaceEvaluatedParametersSystemEqns,0}};
#define boxvar_EvaluateParameter_replaceEvaluatedParametersSystemEqns MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersSystemEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersEqns(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype _inRepl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersEqns,2,0) {(void*) boxptr_EvaluateParameter_replaceEvaluatedParametersEqns,0}};
#define boxvar_EvaluateParameter_replaceEvaluatedParametersEqns MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParameterTraverser(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParameterTraverser,2,0) {(void*) boxptr_EvaluateParameter_replaceEvaluatedParameterTraverser,0}};
#define boxvar_EvaluateParameter_replaceEvaluatedParameterTraverser MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParameterTraverser)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersSystem(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersSystem,2,0) {(void*) boxptr_EvaluateParameter_replaceEvaluatedParametersSystem,0}};
#define boxvar_EvaluateParameter_replaceEvaluatedParametersSystem MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_traverseExpVisitorWrapper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_traverseExpVisitorWrapper,2,0) {(void*) boxptr_EvaluateParameter_traverseExpVisitorWrapper,0}};
#define boxvar_EvaluateParameter_traverseExpVisitorWrapper MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_traverseExpVisitorWrapper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_addConstExpReplacement(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_replEvaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_addConstExpReplacement,2,0) {(void*) boxptr_EvaluateParameter_addConstExpReplacement,0}};
#define boxvar_EvaluateParameter_addConstExpReplacement MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_addConstExpReplacement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateParameterBindings(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _cache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateParameterBindings(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _cache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateParameterBindings,2,0) {(void*) boxptr_EvaluateParameter_evaluateParameterBindings,0}};
#define boxvar_EvaluateParameter_evaluateParameterBindings MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateParameterBindings)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_traverseParameterSorted(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _inGlobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype _iCache, modelica_metatype _graph, modelica_integer _iMark, modelica_metatype _markarr, modelica_metatype _repl, modelica_metatype _replEvaluate, modelica_boolean _isInitial, modelica_metatype *out_oRepl, modelica_metatype *out_oReplEvaluate, modelica_metatype *out_oCache, modelica_integer *out_oMark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_traverseParameterSorted(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _inGlobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype _iCache, modelica_metatype _graph, modelica_metatype _iMark, modelica_metatype _markarr, modelica_metatype _repl, modelica_metatype _replEvaluate, modelica_metatype _isInitial, modelica_metatype *out_oRepl, modelica_metatype *out_oReplEvaluate, modelica_metatype *out_oCache, modelica_metatype *out_oMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_traverseParameterSorted,2,0) {(void*) boxptr_EvaluateParameter_traverseParameterSorted,0}};
#define boxvar_EvaluateParameter_traverseParameterSorted MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_traverseParameterSorted)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceCrefWithBindStartExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceCrefWithBindStartExp,2,0) {(void*) boxptr_EvaluateParameter_replaceCrefWithBindStartExp,0}};
#define boxvar_EvaluateParameter_replaceCrefWithBindStartExp MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceCrefWithBindStartExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData_t *threadData, modelica_boolean _b, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _e1, modelica_metatype _source, modelica_metatype _globalKnownVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData_t *threadData, modelica_metatype _b, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _e1, modelica_metatype _source, modelica_metatype _globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttributeReportWarning,2,0) {(void*) boxptr_EvaluateParameter_evaluateFixedAttributeReportWarning,0}};
#define boxvar_EvaluateParameter_evaluateFixedAttributeReportWarning MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttributeReportWarning)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttribute1(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _attr, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttribute1(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _attr, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttribute1,2,0) {(void*) boxptr_EvaluateParameter_evaluateFixedAttribute1,0}};
#define boxvar_EvaluateParameter_evaluateFixedAttribute1 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttribute1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttribute,2,0) {(void*) boxptr_EvaluateParameter_evaluateFixedAttribute,0}};
#define boxvar_EvaluateParameter_evaluateFixedAttribute MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttribute)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateParameter(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateParameter(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateParameter,2,0) {(void*) boxptr_EvaluateParameter_evaluateParameter,0}};
#define boxvar_EvaluateParameter_evaluateParameter MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateParameter)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameter(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_cache);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameter(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_cache);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameter,2,0) {(void*) boxptr_EvaluateParameter_evaluateSelectedParameter,0}};
#define boxvar_EvaluateParameter_evaluateSelectedParameter MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameter)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters1(threadData_t *threadData, modelica_metatype _iUsed, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters1(threadData_t *threadData, modelica_metatype _iUsed, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters1,2,0) {(void*) boxptr_EvaluateParameter_evaluateSelectedParameters1,0}};
#define boxvar_EvaluateParameter_evaluateSelectedParameters1 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters0(threadData_t *threadData, modelica_integer _i, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_integer __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_integer *out_mark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters0(threadData_t *threadData, modelica_metatype _i, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_mark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters0,2,0) {(void*) boxptr_EvaluateParameter_evaluateSelectedParameters0,0}};
#define boxvar_EvaluateParameter_evaluateSelectedParameters0 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters(threadData_t *threadData, modelica_metatype _iSelected, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_integer __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_integer *out_mark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters(threadData_t *threadData, modelica_metatype _iSelected, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_mark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters,2,0) {(void*) boxptr_EvaluateParameter_evaluateSelectedParameters,0}};
#define boxvar_EvaluateParameter_evaluateSelectedParameters MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_getParameterAdjacencyMatrix(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_getParameterAdjacencyMatrix,2,0) {(void*) boxptr_EvaluateParameter_getParameterAdjacencyMatrix,0}};
#define boxvar_EvaluateParameter_getParameterAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_getParameterAdjacencyMatrix)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersSystemEqns(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inRepl)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _lsteqns = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _osyst = _isyst;
  // _lsteqns has no default value.
  // _b has no default value.
  _lsteqns = omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_osyst, 3)));

  _lsteqns = omc_BackendVarTransform_replaceEquations(threadData, _lsteqns, _inRepl, mmc_mk_none() ,&_b);

  if(_b)
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_osyst), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_BackendEquation_listEquation(threadData, _lsteqns);
    _osyst = tmpMeta1;

    _osyst = omc_BackendDAEUtil_clearEqSyst(threadData, _osyst);
  }

  _lsteqns = omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_osyst, 10)));

  _lsteqns = omc_BackendVarTransform_replaceEquations(threadData, _lsteqns, _inRepl, mmc_mk_none() ,&_b);

  if(_b)
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_osyst), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[10] = omc_BackendEquation_listEquation(threadData, _lsteqns);
    _osyst = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _osyst;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersEqns(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype _inRepl)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _lsteqns = NULL;
  modelica_metatype _systs = NULL;
  modelica_boolean _b;
  modelica_metatype _shared = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _lsteqns has no default value.
  // _systs has no default value.
  // _b has no default value.
  // _shared has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDAE;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta1, 3);
  _systs = tmpMeta2;
  _shared = tmpMeta3;

  _lsteqns = omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_shared, 6)));

  _lsteqns = omc_BackendVarTransform_replaceEquations(threadData, _lsteqns, _inRepl, mmc_mk_none() ,&_b);

  if(_b)
  {
    tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(22));
    memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[6] = omc_BackendEquation_listEquation(threadData, _lsteqns);
    _shared = tmpMeta4;
  }

  _lsteqns = omc_BackendEquation_equationList(threadData, (OMC_BOX_FIELD(_shared, 7)));

  _lsteqns = omc_BackendVarTransform_replaceEquations(threadData, _lsteqns, _inRepl, mmc_mk_none() ,&_b);

  if(_b)
  {
    tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(22));
    memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[7] = omc_BackendEquation_listEquation(threadData, _lsteqns);
    _shared = tmpMeta5;
  }

  _systs = omc_List_map1(threadData, _systs, boxvar_EvaluateParameter_replaceEvaluatedParametersSystemEqns, _inRepl);

  tmpMeta6 = omc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
  _outDAE = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outDAE;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParameterTraverser(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _ieqns = NULL;
      modelica_metatype _cache = NULL;
      modelica_metatype _graph = NULL;
      modelica_integer _mark;
      modelica_metatype _markarr = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _replEvaluate = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _attr = NULL;
      modelica_boolean _b;
      modelica_boolean _isInitial;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _globalKnownVars has no default value.
      // _m has no default value.
      // _ieqns has no default value.
      // _cache has no default value.
      // _graph has no default value.
      // _mark has no default value.
      // _markarr has no default value.
      // _repl has no default value.
      // _replEvaluate has no default value.
      // _v has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _attr has no default value.
      // _b has no default value.
      // _isInitial has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
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
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_boolean tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 7);
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 11);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta11 = OMC_BOX_FIELD(tmp4_2, 3);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_2, 4);
          tmpMeta13 = OMC_BOX_FIELD(tmp4_2, 5);
          tmpMeta14 = OMC_BOX_FIELD(tmp4_2, 6);
          tmp15 = omc_unbox_integer(tmpMeta14);
          tmpMeta16 = OMC_BOX_FIELD(tmp4_2, 7);
          tmpMeta17 = OMC_BOX_FIELD(tmp4_2, 8);
          tmp18 = omc_unbox_integer(tmpMeta17);
          tmpMeta19 = OMC_BOX_FIELD(tmp4_2, 9);
          tmpMeta20 = OMC_BOX_FIELD(tmp4_2, 10);
          _v = tmp4_1;
          _e = tmpMeta7;
          _attr = tmpMeta8;
          _globalKnownVars = tmpMeta9;
          _m = tmpMeta10;
          _ieqns = tmpMeta11;
          _cache = tmpMeta12;
          _graph = tmpMeta13;
          _mark = tmp15  /* pattern as ty=Integer */;
          _markarr = tmpMeta16;
          _isInitial = tmp18  /* pattern as ty=Boolean */;
          _repl = tmpMeta19;
          _replEvaluate = tmpMeta20;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta22 = omc_BackendVarTransform_replaceExp(threadData, _e, _replEvaluate, mmc_mk_none(), &tmp21);
          _e1 = tmpMeta22;
          if (1 /* true */ != tmp21) goto goto_2;

          _e1 = omc_ExpressionSimplify_simplify(threadData, _e1, NULL);

          _v = omc_BackendVariable_setBindExp(threadData, _v, mmc_mk_some(_e1));

          /* Pattern-matching tuple assignment */
          tmpMeta27 = omc_mk_box2(0, _replEvaluate, omc_mk_boolean(0 /* false */));
          tmpMeta28 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta27, &tmpMeta23);
          _attr = tmpMeta28;
          tmpMeta24 = OMC_BOX_FIELD(tmpMeta23, 1);
          tmpMeta25 = OMC_BOX_FIELD(tmpMeta23, 2);
          tmp26 = omc_unbox_integer(tmpMeta25);
          _replEvaluate = tmpMeta24;
          _b = tmp26  /* pattern as ty=Boolean */;

          _v = (_b?omc_BackendVariable_setVarAttributes(threadData, _v, _attr):_v);

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 0 /* false */, _globalKnownVars, _m, _ieqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);
          tmpMeta29 = omc_mk_box10(0, _globalKnownVars, _m, _ieqns, _cache, _graph, omc_mk_integer(_mark), _markarr, omc_mk_boolean(_isInitial), _repl, _replEvaluate);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta29;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_integer tmp40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_integer tmp46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          tmpMeta30 = OMC_BOX_FIELD(tmp4_1, 11);
          tmpMeta31 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta32 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta33 = OMC_BOX_FIELD(tmp4_2, 3);
          tmpMeta34 = OMC_BOX_FIELD(tmp4_2, 4);
          tmpMeta35 = OMC_BOX_FIELD(tmp4_2, 5);
          tmpMeta36 = OMC_BOX_FIELD(tmp4_2, 6);
          tmp37 = omc_unbox_integer(tmpMeta36);
          tmpMeta38 = OMC_BOX_FIELD(tmp4_2, 7);
          tmpMeta39 = OMC_BOX_FIELD(tmp4_2, 8);
          tmp40 = omc_unbox_integer(tmpMeta39);
          tmpMeta41 = OMC_BOX_FIELD(tmp4_2, 9);
          tmpMeta42 = OMC_BOX_FIELD(tmp4_2, 10);
          _v = tmp4_1;
          _attr = tmpMeta30;
          _globalKnownVars = tmpMeta31;
          _m = tmpMeta32;
          _ieqns = tmpMeta33;
          _cache = tmpMeta34;
          _graph = tmpMeta35;
          _mark = tmp37  /* pattern as ty=Integer */;
          _markarr = tmpMeta38;
          _isInitial = tmp40  /* pattern as ty=Boolean */;
          _repl = tmpMeta41;
          _replEvaluate = tmpMeta42;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta47 = omc_mk_box2(0, _replEvaluate, omc_mk_boolean(0 /* false */));
          tmpMeta48 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta47, &tmpMeta43);
          _attr = tmpMeta48;
          tmpMeta44 = OMC_BOX_FIELD(tmpMeta43, 1);
          tmpMeta45 = OMC_BOX_FIELD(tmpMeta43, 2);
          tmp46 = omc_unbox_integer(tmpMeta45);
          if (1 /* true */ != tmp46) goto goto_2;
          _replEvaluate = tmpMeta44;

          _v = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 0 /* false */, _globalKnownVars, _m, _ieqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);
          tmpMeta49 = omc_mk_box10(0, _globalKnownVars, _m, _ieqns, _cache, _graph, omc_mk_integer(_mark), _markarr, omc_mk_boolean(_isInitial), _repl, _replEvaluate);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta49;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_integer tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_integer tmp59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          tmpMeta50 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta51 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta52 = OMC_BOX_FIELD(tmp4_2, 3);
          tmpMeta53 = OMC_BOX_FIELD(tmp4_2, 4);
          tmpMeta54 = OMC_BOX_FIELD(tmp4_2, 5);
          tmpMeta55 = OMC_BOX_FIELD(tmp4_2, 6);
          tmp56 = omc_unbox_integer(tmpMeta55);
          tmpMeta57 = OMC_BOX_FIELD(tmp4_2, 7);
          tmpMeta58 = OMC_BOX_FIELD(tmp4_2, 8);
          tmp59 = omc_unbox_integer(tmpMeta58);
          tmpMeta60 = OMC_BOX_FIELD(tmp4_2, 9);
          tmpMeta61 = OMC_BOX_FIELD(tmp4_2, 10);
          _v = tmp4_1;
          _globalKnownVars = tmpMeta50;
          _m = tmpMeta51;
          _ieqns = tmpMeta52;
          _cache = tmpMeta53;
          _graph = tmpMeta54;
          _mark = tmp56  /* pattern as ty=Integer */;
          _markarr = tmpMeta57;
          _isInitial = tmp59  /* pattern as ty=Boolean */;
          _repl = tmpMeta60;
          _replEvaluate = tmpMeta61;
          /* Pattern matching succeeded */
          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 0 /* false */, _globalKnownVars, _m, _ieqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);
          tmpMeta62 = omc_mk_box10(0, _globalKnownVars, _m, _ieqns, _cache, _graph, omc_mk_integer(_mark), _markarr, omc_mk_boolean(_isInitial), _repl, _replEvaluate);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta62;
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outVar = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  omc_ret_ = _outVar;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersSystem(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _outTypeA = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _outTypeA has no default value.
  // _vars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _isyst;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _vars = tmpMeta2;

  _vars = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _vars, boxvar_EvaluateParameter_replaceEvaluatedParameterTraverser, _inTypeA ,&_outTypeA);

  _osyst = omc_BackendDAEUtil_setEqSystVars(threadData, _isyst, _vars);
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  omc_ret_ = _osyst;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_traverseExpVisitorWrapper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _exp = NULL;
      modelica_metatype _repl = NULL;
      modelica_boolean _b;
      modelica_boolean _b1;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      // _repl has no default value.
      // _b has no default value.
      // _b1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp8 = omc_unbox_integer(tmpMeta7);
          _exp = tmp4_1;
          _repl = tmpMeta6;
          _b = tmp8  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, mmc_mk_none() ,&_b1);
          tmpMeta9 = omc_mk_box2(0, _repl, omc_mk_boolean((_b || _b1)));
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
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
  _outExp = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  omc_ret_ = _outExp;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_addConstExpReplacement(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_replEvaluate)
{
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  if(omc_Expression_isConst(threadData, _inExp))
  {
    _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _inExp, mmc_mk_none());

    _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _inExp, mmc_mk_none());
  }
  _return: OMC_LABEL_UNUSED
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  omc_ret_ = _repl;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateParameterBindings(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _cache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _var;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _exps = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _hideResultExp = NULL;
      modelica_metatype _hideResultOpt = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _v has no default value.
      // _cr has no default value.
      // _e has no default value.
      // _exps has no default value.
      // _attr has no default value.
      // _value has no default value.
      // _hideResultExp has no default value.
      // _hideResultOpt has no default value.
      // _b has no default value.
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta6 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp2_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp3_1, 7);
          if (optionNone(tmpMeta7)) goto tmp2_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
          tmpMeta9 = OMC_BOX_FIELD(tmp3_1, 13);
          
          _v = tmp3_1;
          _cr = tmpMeta5;
          _e = tmpMeta8;
          _hideResultOpt = tmpMeta9;
          /* Pattern matching succeeded */
          if(((omc_Expression_isConst(threadData, _e) && omc_BackendVariable_isFinalVar(threadData, _v)) && omc_BackendVariable_varFixed(threadData, _v)))
          {
            _repl = omc_EvaluateParameter_addConstExpReplacement(threadData, _e, _cr, _repl, _replEvaluate ,&_replEvaluate);
          }
          else
          {
            _e = omc_BackendVarTransform_replaceExp(threadData, _e, _replEvaluate, mmc_mk_none() ,&_b);

            if(_b)
            {
              _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

              { /* match expression */
                modelica_metatype tmp13_1;
                tmp13_1 = _e;
                {
                  volatile mmc_switch_type tmp13;
                  int tmp14;
                  tmp13 = 0;
                  for (; tmp13 < 3; tmp13++) {
                    switch (MMC_SWITCH_CAST(tmp13)) {
                    case 0: {
                      modelica_metatype tmpMeta15;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,13,3) == 0) goto tmp12_end;
                      tmpMeta15 = OMC_BOX_FIELD(tmp13_1, 3);
                      
                      _exps = tmpMeta15;
                      /* Pattern matching succeeded */
                      /* Check guard condition after assignments */
                      if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp12_end;
                      omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                      tmpMeta10 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                      goto tmp12_done;
                    }
                    case 1: {
                      modelica_metatype tmpMeta16;
                      modelica_metatype tmpMeta17;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,21,2) == 0) goto tmp12_end;
                      tmpMeta16 = OMC_BOX_FIELD(tmp13_1, 2);
                      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,13,3) == 0) goto tmp12_end;
                      tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 3);
                      
                      _exps = tmpMeta17;
                      /* Pattern matching succeeded */
                      /* Check guard condition after assignments */
                      if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp12_end;
                      omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                      tmpMeta10 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                      goto tmp12_done;
                    }
                    case 2: {
                      
                      /* Pattern matching succeeded */
                      tmpMeta10 = _e;
                      goto tmp12_done;
                    }
                    }
                    goto tmp12_end;
                    tmp12_end: ;
                  }
                  goto goto_11;
                  goto_11:;
                  goto goto_1;
                  goto tmp12_done;
                  tmp12_done:;
                }
              }
              _e = tmpMeta10;

              _v = omc_BackendVariable_setBindExp(threadData, _v, mmc_mk_some(_e));

              if((!omc_BackendVariable_hasVarEvaluateAnnotationFalse(threadData, _v)))
              {
                _repl = omc_EvaluateParameter_addConstExpReplacement(threadData, _e, _cr, _repl, _replEvaluate ,&_replEvaluate);

                _v = (omc_Expression_isConst(threadData, _e)?omc_BackendVariable_setVarFinal(threadData, _v, 1 /* true */):_v);
              }
            }
          }

          /* Pattern-matching tuple assignment */
          tmpMeta20 = omc_mk_box2(0, _replEvaluate, omc_mk_boolean(0 /* false */));
          tmpMeta21 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, (OMC_BOX_FIELD(_v, 11)), boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta20, &tmpMeta18);
          _attr = tmpMeta21;
          tmpMeta19 = OMC_BOX_FIELD(tmpMeta18, 1);
          _replEvaluate = tmpMeta19;

          _v = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);

          { /* match expression */
            modelica_metatype tmp26_1;
            tmp26_1 = _hideResultOpt;
            {
              volatile mmc_switch_type tmp26;
              int tmp27;
              tmp26 = 0;
              for (; tmp26 < 2; tmp26++) {
                switch (MMC_SWITCH_CAST(tmp26)) {
                case 0: {
                  modelica_metatype tmpMeta28;
                  if (optionNone(tmp26_1)) goto tmp25_end;
                  tmpMeta28 = OMC_BOX_FIELD(tmp26_1, 1);
                  _hideResultExp = tmpMeta28;
                  /* Pattern matching succeeded */
                  _hideResultExp = omc_BackendVarTransform_replaceExp(threadData, _hideResultExp, _replEvaluate, mmc_mk_none() ,&_b);

                  if(_b)
                  {
                    _hideResultExp = omc_ExpressionSimplify_simplify(threadData, _hideResultExp, NULL);
                  }
                  tmpMeta23 = mmc_mk_some(_hideResultExp);
                  goto tmp25_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta23 = (OMC_BOX_FIELD(_v, 13));
                  goto tmp25_done;
                }
                }
                goto tmp25_end;
                tmp25_end: ;
              }
              goto goto_24;
              goto_24:;
              goto goto_1;
              goto tmp25_done;
              tmp25_done:;
            }
          }
          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_v), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[13] = tmpMeta23;
          _v = tmpMeta22;

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_boolean tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          tmpMeta29 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta30 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,7,0) == 0) goto tmp2_end;
          tmpMeta31 = OMC_BOX_FIELD(tmp3_1, 11);
          tmpMeta32 = OMC_BOX_FIELD(tmp3_1, 13);
          
          _v = tmp3_1;
          _cr = tmpMeta29;
          _attr = tmpMeta31;
          _hideResultOpt = tmpMeta32;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp33 = omc_BackendVariable_varFixed(threadData, _var);
          if (1 /* true */ != tmp33) goto goto_1;

          _e = omc_DAEUtil_getStartAttrFail(threadData, _attr);

          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _replEvaluate, mmc_mk_none() ,&_b);

          if(_b)
          {
            _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

            { /* match expression */
              modelica_metatype tmp37_1;
              tmp37_1 = _e;
              {
                volatile mmc_switch_type tmp37;
                int tmp38;
                tmp37 = 0;
                for (; tmp37 < 3; tmp37++) {
                  switch (MMC_SWITCH_CAST(tmp37)) {
                  case 0: {
                    modelica_metatype tmpMeta39;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp37_1,13,3) == 0) goto tmp36_end;
                    tmpMeta39 = OMC_BOX_FIELD(tmp37_1, 3);
                    
                    _exps = tmpMeta39;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp36_end;
                    omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                    tmpMeta34 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                    goto tmp36_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta40;
                    modelica_metatype tmpMeta41;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp37_1,21,2) == 0) goto tmp36_end;
                    tmpMeta40 = OMC_BOX_FIELD(tmp37_1, 2);
                    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,13,3) == 0) goto tmp36_end;
                    tmpMeta41 = OMC_BOX_FIELD(tmpMeta40, 3);
                    
                    _exps = tmpMeta41;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp36_end;
                    omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                    tmpMeta34 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                    goto tmp36_done;
                  }
                  case 2: {
                    
                    /* Pattern matching succeeded */
                    tmpMeta34 = _e;
                    goto tmp36_done;
                  }
                  }
                  goto tmp36_end;
                  tmp36_end: ;
                }
                goto goto_35;
                goto_35:;
                goto goto_1;
                goto tmp36_done;
                tmp36_done:;
              }
            }
            _e = tmpMeta34;

            _v = omc_BackendVariable_setVarStartValue(threadData, _var, _e);

            _repl = omc_EvaluateParameter_addConstExpReplacement(threadData, _e, _cr, _repl, _replEvaluate ,&_replEvaluate);

            _v = (omc_Expression_isConst(threadData, _e)?omc_BackendVariable_setVarFinal(threadData, _v, 1 /* true */):_v);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta44 = omc_mk_box2(0, _replEvaluate, omc_mk_boolean(0 /* false */));
          tmpMeta45 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta44, &tmpMeta42);
          _attr = tmpMeta45;
          tmpMeta43 = OMC_BOX_FIELD(tmpMeta42, 1);
          _replEvaluate = tmpMeta43;

          _v = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);

          { /* match expression */
            modelica_metatype tmp50_1;
            tmp50_1 = _hideResultOpt;
            {
              volatile mmc_switch_type tmp50;
              int tmp51;
              tmp50 = 0;
              for (; tmp50 < 2; tmp50++) {
                switch (MMC_SWITCH_CAST(tmp50)) {
                case 0: {
                  modelica_metatype tmpMeta52;
                  if (optionNone(tmp50_1)) goto tmp49_end;
                  tmpMeta52 = OMC_BOX_FIELD(tmp50_1, 1);
                  _hideResultExp = tmpMeta52;
                  /* Pattern matching succeeded */
                  _hideResultExp = omc_BackendVarTransform_replaceExp(threadData, _hideResultExp, _replEvaluate, mmc_mk_none() ,&_b);

                  if(_b)
                  {
                    _hideResultExp = omc_ExpressionSimplify_simplify(threadData, _hideResultExp, NULL);
                  }
                  tmpMeta47 = mmc_mk_some(_hideResultExp);
                  goto tmp49_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta47 = (OMC_BOX_FIELD(_v, 13));
                  goto tmp49_done;
                }
                }
                goto tmp49_end;
                tmp49_end: ;
              }
              goto goto_48;
              goto_48:;
              goto goto_1;
              goto tmp49_done;
              tmp49_done:;
            }
          }
          tmpMeta46 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta46), MMC_UNTAGPTR(_v), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta46))[13] = tmpMeta47;
          _v = tmpMeta46;

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          tmpMeta53 = OMC_BOX_FIELD(tmp3_1, 7);
          if (optionNone(tmpMeta53)) goto tmp2_end;
          tmpMeta54 = OMC_BOX_FIELD(tmpMeta53, 1);
          tmpMeta55 = OMC_BOX_FIELD(tmp3_1, 13);
          
          _v = tmp3_1;
          _e = tmpMeta54;
          _hideResultOpt = tmpMeta55;
          /* Pattern matching succeeded */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _replEvaluate, mmc_mk_none() ,&_b);

          if(_b)
          {
            _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

            { /* match expression */
              modelica_metatype tmp59_1;
              tmp59_1 = _e;
              {
                volatile mmc_switch_type tmp59;
                int tmp60;
                tmp59 = 0;
                for (; tmp59 < 3; tmp59++) {
                  switch (MMC_SWITCH_CAST(tmp59)) {
                  case 0: {
                    modelica_metatype tmpMeta61;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp59_1,13,3) == 0) goto tmp58_end;
                    tmpMeta61 = OMC_BOX_FIELD(tmp59_1, 3);
                    
                    _exps = tmpMeta61;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp58_end;
                    omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                    tmpMeta56 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                    goto tmp58_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta62;
                    modelica_metatype tmpMeta63;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp59_1,21,2) == 0) goto tmp58_end;
                    tmpMeta62 = OMC_BOX_FIELD(tmp59_1, 2);
                    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta62,13,3) == 0) goto tmp58_end;
                    tmpMeta63 = OMC_BOX_FIELD(tmpMeta62, 3);
                    
                    _exps = tmpMeta63;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp58_end;
                    omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                    tmpMeta56 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                    goto tmp58_done;
                  }
                  case 2: {
                    
                    /* Pattern matching succeeded */
                    tmpMeta56 = _e;
                    goto tmp58_done;
                  }
                  }
                  goto tmp58_end;
                  tmp58_end: ;
                }
                goto goto_57;
                goto_57:;
                goto goto_1;
                goto tmp58_done;
                tmp58_done:;
              }
            }
            _e = tmpMeta56;

            _v = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_e));
          }

          /* Pattern-matching tuple assignment */
          tmpMeta66 = omc_mk_box2(0, _replEvaluate, omc_mk_boolean(0 /* false */));
          tmpMeta67 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, (OMC_BOX_FIELD(_v, 11)), boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta66, &tmpMeta64);
          _attr = tmpMeta67;
          tmpMeta65 = OMC_BOX_FIELD(tmpMeta64, 1);
          _replEvaluate = tmpMeta65;

          _v = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);

          { /* match expression */
            modelica_metatype tmp72_1;
            tmp72_1 = _hideResultOpt;
            {
              volatile mmc_switch_type tmp72;
              int tmp73;
              tmp72 = 0;
              for (; tmp72 < 2; tmp72++) {
                switch (MMC_SWITCH_CAST(tmp72)) {
                case 0: {
                  modelica_metatype tmpMeta74;
                  if (optionNone(tmp72_1)) goto tmp71_end;
                  tmpMeta74 = OMC_BOX_FIELD(tmp72_1, 1);
                  _hideResultExp = tmpMeta74;
                  /* Pattern matching succeeded */
                  _hideResultExp = omc_BackendVarTransform_replaceExp(threadData, _hideResultExp, _replEvaluate, mmc_mk_none() ,&_b);

                  if(_b)
                  {
                    _hideResultExp = omc_ExpressionSimplify_simplify(threadData, _hideResultExp, NULL);
                  }
                  tmpMeta69 = mmc_mk_some(_hideResultExp);
                  goto tmp71_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta69 = (OMC_BOX_FIELD(_v, 13));
                  goto tmp71_done;
                }
                }
                goto tmp71_end;
                tmp71_end: ;
              }
              goto goto_70;
              goto_70:;
              goto goto_1;
              goto tmp71_done;
              tmp71_done:;
            }
          }
          tmpMeta68 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta68), MMC_UNTAGPTR(_v), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta68))[13] = tmpMeta69;
          _v = tmpMeta68;

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_integer tmp80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          tmpMeta75 = OMC_BOX_FIELD(tmp3_1, 11);
          tmpMeta76 = OMC_BOX_FIELD(tmp3_1, 13);
          
          _attr = tmpMeta75;
          _hideResultOpt = tmpMeta76;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta81 = omc_mk_box2(0, _replEvaluate, omc_mk_boolean(0 /* false */));
          tmpMeta82 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta81, &tmpMeta77);
          _attr = tmpMeta82;
          tmpMeta78 = OMC_BOX_FIELD(tmpMeta77, 1);
          tmpMeta79 = OMC_BOX_FIELD(tmpMeta77, 2);
          tmp80 = omc_unbox_integer(tmpMeta79);
          if (1 /* true */ != tmp80) goto goto_1;
          _replEvaluate = tmpMeta78;

          _v = omc_BackendVariable_setVarAttributes(threadData, _var, _attr);

          { /* match expression */
            modelica_metatype tmp87_1;
            tmp87_1 = _hideResultOpt;
            {
              volatile mmc_switch_type tmp87;
              int tmp88;
              tmp87 = 0;
              for (; tmp87 < 2; tmp87++) {
                switch (MMC_SWITCH_CAST(tmp87)) {
                case 0: {
                  modelica_metatype tmpMeta89;
                  if (optionNone(tmp87_1)) goto tmp86_end;
                  tmpMeta89 = OMC_BOX_FIELD(tmp87_1, 1);
                  _hideResultExp = tmpMeta89;
                  /* Pattern matching succeeded */
                  _hideResultExp = omc_BackendVarTransform_replaceExp(threadData, _hideResultExp, _replEvaluate, mmc_mk_none() ,&_b);

                  if(_b)
                  {
                    _hideResultExp = omc_ExpressionSimplify_simplify(threadData, _hideResultExp, NULL);
                  }
                  tmpMeta84 = mmc_mk_some(_hideResultExp);
                  goto tmp86_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta84 = (OMC_BOX_FIELD(_v, 13));
                  goto tmp86_done;
                }
                }
                goto tmp86_end;
                tmp86_end: ;
              }
              goto goto_85;
              goto_85:;
              goto goto_1;
              goto tmp86_done;
              tmp86_done:;
            }
          }
          tmpMeta83 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta83), MMC_UNTAGPTR(_v), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta83))[13] = tmpMeta84;
          _v = tmpMeta83;

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);
          goto tmp2_done;
        }
        case 4: {
          
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
      if (++tmp3 < 5) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  omc_ret_ = _globalKnownVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateParameterBindings(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _cache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_integer tmp1;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = omc_unbox_integer(_index);
  _globalKnownVars = omc_EvaluateParameter_evaluateParameterBindings(threadData, _var, tmp1, __omcQ_24in_5FglobalKnownVars, _cache, _graph, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, out_repl, out_replEvaluate);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_traverseParameterSorted(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _inGlobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype _iCache, modelica_metatype _graph, modelica_integer _iMark, modelica_metatype _markarr, modelica_metatype _repl, modelica_metatype _replEvaluate, modelica_boolean _isInitial, modelica_metatype *out_oRepl, modelica_metatype *out_oReplEvaluate, modelica_metatype *out_oCache, modelica_integer *out_oMark)
{
  modelica_metatype _oKnVars = NULL;
  modelica_metatype _oRepl = NULL;
  modelica_metatype _oReplEvaluate = NULL;
  modelica_metatype _oCache = NULL;
  modelica_integer _oMark;
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oKnVars = _inGlobalKnownVars;
  _oRepl = _repl;
  _oReplEvaluate = _replEvaluate;
  _oCache = _iCache;
  _oMark = _iMark;
  // _v has no default value.
  {
    modelica_metatype _ilst;
    for (tmpMeta1 = _inComps; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _ilst = MMC_CAR(tmpMeta1);
      {
        modelica_metatype _i;
        for (tmpMeta2 = _ilst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _i = MMC_CAR(tmpMeta2);
          _v = omc_BackendVariable_getVarAt(threadData, _oKnVars, omc_unbox_integer(_i));

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 1 /* true */, _oKnVars, _m, _inIEqns, _oCache, _graph, _oMark, _markarr, _isInitial, _oRepl ,&_oKnVars ,&_oCache ,&_oMark ,&_oRepl);

          _oKnVars = omc_EvaluateParameter_evaluateParameterBindings(threadData, _v, omc_unbox_integer(_i), _oKnVars, _oCache, _graph, _oRepl, _oReplEvaluate ,&_oRepl ,&_oReplEvaluate);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oRepl) { *out_oRepl = _oRepl; }
  if (out_oReplEvaluate) { *out_oReplEvaluate = _oReplEvaluate; }
  if (out_oCache) { *out_oCache = _oCache; }
  if (out_oMark) { *out_oMark = _oMark; }
  omc_ret_ = _oKnVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_traverseParameterSorted(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _inGlobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype _iCache, modelica_metatype _graph, modelica_metatype _iMark, modelica_metatype _markarr, modelica_metatype _repl, modelica_metatype _replEvaluate, modelica_metatype _isInitial, modelica_metatype *out_oRepl, modelica_metatype *out_oReplEvaluate, modelica_metatype *out_oCache, modelica_metatype *out_oMark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oMark;
  modelica_metatype _oKnVars = NULL;
  tmp1 = omc_unbox_integer(_iMark);
  tmp2 = omc_unbox_integer(_isInitial);
  _oKnVars = omc_EvaluateParameter_traverseParameterSorted(threadData, _inComps, _inGlobalKnownVars, _m, _inIEqns, _iCache, _graph, tmp1, _markarr, _repl, _replEvaluate, tmp2, out_oRepl, out_oReplEvaluate, out_oCache, &_oMark);
  /* skip box _oKnVars; BackendDAE.Variables */
  /* skip box _oRepl; BackendVarTransform.VariableReplacements */
  /* skip box _oReplEvaluate; BackendVarTransform.VariableReplacements */
  /* skip box _oCache; FCore.Cache */
  if (out_oMark) { *out_oMark = omc_mk_icon(_oMark); }
  return _oKnVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceCrefWithBindStartExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTuple;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _cr = NULL;
      modelica_boolean _b;
      modelica_metatype _hs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _v has no default value.
      // _vars has no default value.
      // _cr has no default value.
      // _b has no default value.
      // _hs has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp9 = omc_unbox_integer(tmpMeta8);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 3);
          _cr = tmpMeta6;
          _vars = tmpMeta7;
          _b = tmp9  /* pattern as ty=Boolean */;
          _hs = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = omc_BaseHashSet_has(threadData, _cr, _hs);
          if (0 /* false */ != tmp11) goto goto_2;

          _v = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);

          _e = omc_BackendVariable_varStartValueType(threadData, _v);

          _hs = omc_BaseHashSet_add(threadData, _cr, _hs);

          /* Pattern-matching tuple assignment */
          tmpMeta16 = omc_mk_box3(0, _vars, omc_mk_boolean(_b), _hs);
          tmpMeta17 = omc_Expression_traverseExpBottomUp(threadData, _e, boxvar_EvaluateParameter_replaceCrefWithBindStartExp, tmpMeta16, &tmpMeta12);
          _e = tmpMeta17;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 2);
          tmp14 = omc_unbox_integer(tmpMeta13);
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta12, 3);
          _b = tmp14  /* pattern as ty=Boolean */;
          _hs = tmpMeta15;
          tmpMeta18 = omc_mk_box3(0, _vars, omc_mk_boolean(_b), _hs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta19 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta20 = OMC_BOX_FIELD(tmp4_2, 3);
          _e = tmp4_1;
          _vars = tmpMeta19;
          _hs = tmpMeta20;
          /* Pattern matching succeeded */
          tmpMeta21 = omc_mk_box3(0, _vars, omc_mk_boolean(1 /* true */), _hs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta21;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTuple;
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outTuple = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  omc_ret_ = _outExp;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData_t *threadData, modelica_boolean _b, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _e1, modelica_metatype _source, modelica_metatype _globalKnownVars)
{
  modelica_metatype _outExp = NULL;
  modelica_string _msg = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _msg has no default value.
  // _info has no default value.
  if(_b)
  {
    _outExp = _e1;
  }
  else
  {
    _info = omc_ElementSource_getElementSourceFileInfo(threadData, _source);

    tmpMeta1 = omc_mk_box3(0, _globalKnownVars, omc_mk_boolean(0 /* false */), omc_HashSet_emptyHashSet(threadData));
    _outExp = omc_Expression_traverseExpBottomUp(threadData, _e1, boxvar_EvaluateParameter_replaceCrefWithBindStartExp, tmpMeta1, NULL);

    tmp2 = stringAppend(omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr),_OMC_LIT1);
    tmp3 = stringAppend(tmp2,omc_ExpressionBasics_printExpStr(threadData, _e));
    tmp4 = stringAppend(tmp3,_OMC_LIT2);
    tmp5 = stringAppend(tmp4,omc_ExpressionBasics_printExpStr(threadData, _outExp));
    tmp6 = stringAppend(tmp5,_OMC_LIT3);
    omc_string_store(&(_msg), tmp6);

    tmpMeta7 = mmc_mk_cons(_msg, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT7, tmpMeta7, _info);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outExp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData_t *threadData, modelica_metatype _b, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _e1, modelica_metatype _source, modelica_metatype _globalKnownVars)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = omc_unbox_integer(_b);
  _outExp = omc_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData, tmp1, _cr, _e, _e1, _source, _globalKnownVars);
  /* skip box _outExp; DAE.Exp */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttribute1(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _attr, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl)
{
  modelica_metatype _var = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_integer _mark;
  modelica_metatype _repl = NULL;
  modelica_metatype _e1 = NULL;
  modelica_boolean _b;
  modelica_metatype _ilst = NULL;
  modelica_metatype _attr1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _mark = __omcQ_24in_5Fmark;
  _repl = __omcQ_24in_5Frepl;
  // _e1 has no default value.
  // _b has no default value.
  // _ilst has no default value.
  // _attr1 has no default value.
  _e1 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

  /* Pattern-matching tuple assignment, wild first pattern */
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = omc_mk_box3(0, _globalKnownVars, tmpMeta3, omc_mk_boolean(_isInitial));
  omc_Expression_traverseExpTopDown(threadData, _e1, boxvar_BackendDAEUtil_traversingadjacencyRowExpFinder, tmpMeta4, &tmpMeta1);
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _ilst = tmpMeta2;

  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, omc_BackendDAEUtil_uniqueRow(threadData, _ilst), _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, omc_BackendVarTransform_emptyReplacements(threadData) ,&_cache ,&_mark ,&_repl, NULL);

  _e1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, mmc_mk_none(), NULL);

  _e1 = omc_ExpressionSimplify_simplify(threadData, _e1, NULL);

  _b = omc_Expression_isConst(threadData, _e1);

  _e1 = omc_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData, _b, _cr, _e, _e1, _source, _globalKnownVars);

  _attr1 = omc_DAEUtil_setFixedAttr(threadData, _attr, mmc_mk_some(_e1));

  _var = omc_BackendVariable_setVarAttributes(threadData, _var, _attr1);

  _globalKnownVars = (_addVar?omc_BackendVariable_addVar(threadData, _var, _globalKnownVars):_globalKnownVars);
  _return: OMC_LABEL_UNUSED
  if (out_globalKnownVars) { *out_globalKnownVars = _globalKnownVars; }
  if (out_cache) { *out_cache = _cache; }
  if (out_mark) { *out_mark = _mark; }
  if (out_repl) { *out_repl = _repl; }
  omc_ret_ = _var;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttribute1(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _attr, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _mark;
  modelica_metatype _var = NULL;
  tmp1 = omc_unbox_integer(_addVar);
  tmp2 = omc_unbox_integer(__omcQ_24in_5Fmark);
  tmp3 = omc_unbox_integer(_isInitial);
  _var = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, __omcQ_24in_5Fvar, tmp1, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, tmp2, _markarr, tmp3, __omcQ_24in_5Frepl, out_globalKnownVars, out_cache, &_mark, out_repl);
  /* skip box _var; BackendDAE.Var */
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  if (out_mark) { *out_mark = omc_mk_icon(_mark); }
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl)
{
  modelica_metatype _var = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_integer _mark;
  modelica_metatype _repl = NULL;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _mark = __omcQ_24in_5Fmark;
  _repl = __omcQ_24in_5Frepl;
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _e has no default value.
      // _attr has no default value.
      // _source has no default value.
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 11);
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,15) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 8);
          if (optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,11) == 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 6);
          if (optionNone(tmpMeta13)) goto tmp3_end;
          tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          tmpMeta15 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta15)) goto tmp3_end;
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,2,7) == 0) goto tmp3_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 4);
          if (optionNone(tmpMeta17)) goto tmp3_end;
          tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          tmpMeta19 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta19)) goto tmp3_end;
          tmpMeta20 = OMC_BOX_FIELD(tmpMeta19, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,5,9) == 0) goto tmp3_end;
          tmpMeta21 = OMC_BOX_FIELD(tmpMeta20, 6);
          if (optionNone(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = OMC_BOX_FIELD(tmpMeta21, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          tmpMeta23 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta24 = OMC_BOX_FIELD(tmp4_1, 10);
          tmpMeta25 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta25)) goto tmp3_end;
          tmpMeta26 = OMC_BOX_FIELD(tmpMeta25, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,15) == 0) goto tmp3_end;
          tmpMeta27 = OMC_BOX_FIELD(tmpMeta26, 8);
          if (optionNone(tmpMeta27)) goto tmp3_end;
          tmpMeta28 = OMC_BOX_FIELD(tmpMeta27, 1);
          
          _cr = tmpMeta23;
          _source = tmpMeta24;
          _attr = tmpMeta25;
          _e = tmpMeta28;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, _var, _addVar, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3, &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          tmpMeta29 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta30 = OMC_BOX_FIELD(tmp4_1, 10);
          tmpMeta31 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta31)) goto tmp3_end;
          tmpMeta32 = OMC_BOX_FIELD(tmpMeta31, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,1,11) == 0) goto tmp3_end;
          tmpMeta33 = OMC_BOX_FIELD(tmpMeta32, 6);
          if (optionNone(tmpMeta33)) goto tmp3_end;
          tmpMeta34 = OMC_BOX_FIELD(tmpMeta33, 1);
          
          _cr = tmpMeta29;
          _source = tmpMeta30;
          _attr = tmpMeta31;
          _e = tmpMeta34;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, _var, _addVar, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3, &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          tmpMeta35 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta36 = OMC_BOX_FIELD(tmp4_1, 10);
          tmpMeta37 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta37)) goto tmp3_end;
          tmpMeta38 = OMC_BOX_FIELD(tmpMeta37, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,2,7) == 0) goto tmp3_end;
          tmpMeta39 = OMC_BOX_FIELD(tmpMeta38, 4);
          if (optionNone(tmpMeta39)) goto tmp3_end;
          tmpMeta40 = OMC_BOX_FIELD(tmpMeta39, 1);
          
          _cr = tmpMeta35;
          _source = tmpMeta36;
          _attr = tmpMeta37;
          _e = tmpMeta40;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, _var, _addVar, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3, &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          tmpMeta41 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta42 = OMC_BOX_FIELD(tmp4_1, 10);
          tmpMeta43 = OMC_BOX_FIELD(tmp4_1, 11);
          if (optionNone(tmpMeta43)) goto tmp3_end;
          tmpMeta44 = OMC_BOX_FIELD(tmpMeta43, 1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,5,9) == 0) goto tmp3_end;
          tmpMeta45 = OMC_BOX_FIELD(tmpMeta44, 6);
          if (optionNone(tmpMeta45)) goto tmp3_end;
          tmpMeta46 = OMC_BOX_FIELD(tmpMeta45, 1);
          
          _cr = tmpMeta41;
          _source = tmpMeta42;
          _attr = tmpMeta43;
          _e = tmpMeta46;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, _var, _addVar, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3, &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
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
  _var = tmpMeta[0+0];
  _globalKnownVars = tmpMeta[0+1];
  _cache = tmpMeta[0+2];
  _mark = tmp1_c3;
  _repl = tmpMeta[0+4];
  _return: OMC_LABEL_UNUSED
  if (out_globalKnownVars) { *out_globalKnownVars = _globalKnownVars; }
  if (out_cache) { *out_cache = _cache; }
  if (out_mark) { *out_mark = _mark; }
  if (out_repl) { *out_repl = _repl; }
  omc_ret_ = _var;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _mark;
  modelica_metatype _var = NULL;
  tmp1 = omc_unbox_integer(_addVar);
  tmp2 = omc_unbox_integer(__omcQ_24in_5Fmark);
  tmp3 = omc_unbox_integer(_isInitial);
  _var = omc_EvaluateParameter_evaluateFixedAttribute(threadData, __omcQ_24in_5Fvar, tmp1, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, tmp2, _markarr, tmp3, __omcQ_24in_5Frepl, out_globalKnownVars, out_cache, &_mark, out_repl);
  /* skip box _var; BackendDAE.Var */
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  if (out_mark) { *out_mark = omc_mk_icon(_mark); }
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateParameter(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _var;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _value = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _v has no default value.
      // _cr has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _attr has no default value.
      // _value has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta6 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp2_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp3_1, 7);
          if (optionNone(tmpMeta7)) goto tmp2_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
          
          _cr = tmpMeta5;
          _e = tmpMeta8;
          /* Pattern matching succeeded */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setVarFinal(threadData, _var, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta9 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta10 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,7,0) == 0) goto tmp2_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp3_1, 11);
          
          _cr = tmpMeta9;
          _attr = tmpMeta11;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_varFixed(threadData, _var)) goto tmp2_end;
          _e = omc_DAEUtil_getStartAttrFail(threadData, _attr);

          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setVarFinal(threadData, _var, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
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
  if (out_cache) { *out_cache = _cache; }
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  omc_ret_ = _globalKnownVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateParameter(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_integer tmp1;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = omc_unbox_integer(_index);
  _globalKnownVars = omc_EvaluateParameter_evaluateParameter(threadData, _var, tmp1, __omcQ_24in_5FglobalKnownVars, _inIEqns, __omcQ_24in_5Fcache, _graph, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, out_cache, out_repl, out_replEvaluate);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameter(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_cache)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  _cache = __omcQ_24in_5Fcache;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _var;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _info = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _v has no default value.
      // _cr has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _attr has no default value.
      // _value has no default value.
      // _info has no default value.
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta6 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,8,0) == 0) goto tmp2_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp3_1, 7);
          if (optionNone(tmpMeta7)) goto tmp2_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
          
          _cr = tmpMeta5;
          _e = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_Expression_isConst(threadData, _e);
          if (1 /* true */ != tmp9) goto goto_1;

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e, mmc_mk_none());
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta11 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,8,0) == 0) goto tmp2_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp3_1, 7);
          if (optionNone(tmpMeta12)) goto tmp2_end;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 1);
          
          _cr = tmpMeta10;
          _e = tmpMeta13;
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e1, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_e1));

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          tmpMeta14 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta15 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,7,0) == 0) goto tmp2_end;
          tmpMeta16 = OMC_BOX_FIELD(tmp3_1, 7);
          if (optionNone(tmpMeta16)) goto tmp2_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 1);
          
          _cr = tmpMeta14;
          _e = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = omc_Expression_isConst(threadData, _e);
          if (1 /* true */ != tmp18) goto goto_1;

          _v = omc_BackendVariable_setVarFinal(threadData, _var, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          if(omc_BackendVariable_varFixed(threadData, _v))
          {
            _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e, mmc_mk_none());

            _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e, mmc_mk_none());
          }
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          tmpMeta19 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta20 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,7,0) == 0) goto tmp2_end;
          tmpMeta21 = OMC_BOX_FIELD(tmp3_1, 7);
          if (optionNone(tmpMeta21)) goto tmp2_end;
          tmpMeta22 = OMC_BOX_FIELD(tmpMeta21, 1);
          
          _cr = tmpMeta19;
          _e = tmpMeta22;
          /* Pattern matching succeeded */
          _e1 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e1, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_e1));

          _v = omc_BackendVariable_setVarFinal(threadData, _v, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_boolean tmp26;
          modelica_boolean tmp27;
          tmpMeta23 = OMC_BOX_FIELD(tmp3_1, 2);
          tmpMeta24 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,7,0) == 0) goto tmp2_end;
          tmpMeta25 = OMC_BOX_FIELD(tmp3_1, 11);
          
          _cr = tmpMeta23;
          _attr = tmpMeta25;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp26 = omc_BackendVariable_varFixed(threadData, _var);
          if (1 /* true */ != tmp26) goto goto_1;

          /* Pattern-matching assignment */
          tmp27 = omc_BackendVariable_varHasBindExp(threadData, _var);
          if (0 /* false */ != tmp27) goto goto_1;

          _e = omc_DAEUtil_getStartAttrFail(threadData, _attr);

          _e1 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e1, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setVarStartValue(threadData, _var, _e1);

          _v = omc_BackendVariable_setVarFinal(threadData, _v, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta28;
          modelica_string tmp29;
          modelica_string tmp30;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT11))
          {
            _info = omc_ElementSource_getElementSourceFileInfo(threadData, omc_BackendVariable_getVarSource(threadData, _var));

            tmp29 = stringAppend(_OMC_LIT8,omc_BackendDump_varString(threadData, _var));
            tmp30 = stringAppend(tmp29,_OMC_LIT3);
            tmpMeta28 = mmc_mk_cons(tmp30, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addSourceMessage(threadData, _OMC_LIT7, tmpMeta28, _info);
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
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 6) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  if (out_cache) { *out_cache = _cache; }
  omc_ret_ = _globalKnownVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameter(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_cache)
{
  modelica_integer tmp1;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = omc_unbox_integer(_index);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameter(threadData, _var, tmp1, __omcQ_24in_5FglobalKnownVars, _inIEqns, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, __omcQ_24in_5Fcache, _graph, out_repl, out_replEvaluate, out_cache);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  /* skip box _cache; FCore.Cache */
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters1(threadData_t *threadData, modelica_metatype _iUsed, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_integer _mark;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _mark = __omcQ_24in_5Fmark;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iUsed;
    {
      modelica_integer _i;
      modelica_metatype _rest = NULL;
      modelica_metatype _v = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _rest has no default value.
      // _v has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _globalKnownVars;
          tmpMeta[0+1] = _cache;
          tmp1_c2 = _mark;
          tmpMeta[0+3] = _repl;
          tmpMeta[0+4] = _replEvaluate;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = omc_unbox_integer(tmpMeta6);
          _i = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (omc_unbox_integer(arrayGet(_markarr,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp9) goto goto_2;

          arrayUpdate(_markarr, _i, omc_mk_integer(_mark));

          _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, arrayGet(_m,_i) /* DAE.ASUB */, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, _replEvaluate ,&_cache ,&_mark ,&_repl ,&_replEvaluate);

          _v = omc_BackendVariable_getVarAt(threadData, _globalKnownVars, _i);

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 1 /* true */, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);

          _globalKnownVars = omc_EvaluateParameter_evaluateParameter(threadData, _v, _i, _globalKnownVars, _inIEqns, _cache, _graph, _repl, _replEvaluate ,&_cache ,&_repl ,&_replEvaluate);
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, _rest, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, _replEvaluate, &tmpMeta[0+1], &tmp1_c2, &tmpMeta[0+3], &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, _rest, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, _replEvaluate, &tmpMeta[0+1], &tmp1_c2, &tmpMeta[0+3], &tmpMeta[0+4]);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _globalKnownVars = tmpMeta[0+0];
  _cache = tmpMeta[0+1];
  _mark = tmp1_c2;
  _repl = tmpMeta[0+3];
  _replEvaluate = tmpMeta[0+4];
  _return: OMC_LABEL_UNUSED
  if (out_cache) { *out_cache = _cache; }
  if (out_mark) { *out_mark = _mark; }
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  omc_ret_ = _globalKnownVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters1(threadData_t *threadData, modelica_metatype _iUsed, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _mark;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = omc_unbox_integer(__omcQ_24in_5Fmark);
  tmp2 = omc_unbox_integer(_isInitial);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, _iUsed, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, tmp1, _markarr, tmp2, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, out_cache, &_mark, out_repl, out_replEvaluate);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  if (out_mark) { *out_mark = omc_mk_icon(_mark); }
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters0(threadData_t *threadData, modelica_integer _i, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_integer __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_integer *out_mark)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_integer _mark;
  modelica_metatype _v = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  _mark = __omcQ_24in_5Fmark;
  // _v has no default value.
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
          modelica_boolean tmp5;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (omc_unbox_integer(arrayGet(_markarr,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp5) goto goto_1;

          arrayUpdate(_markarr, _i, omc_mk_integer(_mark));

          _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, arrayGet(_m,_i) /* DAE.ASUB */, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, _replEvaluate ,&_cache ,&_mark ,&_repl ,&_replEvaluate);

          _v = omc_BackendVariable_getVarAt(threadData, _globalKnownVars, _i);

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 1 /* true */, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);

          _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameter(threadData, _v, _i, _globalKnownVars, _inIEqns, _repl, _replEvaluate, _cache, _graph ,&_repl ,&_replEvaluate ,&_cache);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _v = omc_BackendVariable_getVarAt(threadData, _globalKnownVars, _i);

          _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameter(threadData, _v, _i, _globalKnownVars, _inIEqns, _repl, _replEvaluate, _cache, _graph ,&_repl ,&_replEvaluate ,&_cache);
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
  if (out_cache) { *out_cache = _cache; }
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  if (out_mark) { *out_mark = _mark; }
  omc_ret_ = _globalKnownVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters0(threadData_t *threadData, modelica_metatype _i, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_mark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _mark;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = omc_unbox_integer(_i);
  tmp2 = omc_unbox_integer(_isInitial);
  tmp3 = omc_unbox_integer(__omcQ_24in_5Fmark);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters0(threadData, tmp1, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, _markarr, tmp2, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, tmp3, out_cache, out_repl, out_replEvaluate, &_mark);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  if (out_mark) { *out_mark = omc_mk_icon(_mark); }
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters(threadData_t *threadData, modelica_metatype _iSelected, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_integer __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_integer *out_mark)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_integer _mark;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  _mark = __omcQ_24in_5Fmark;
  {
    modelica_metatype _i;
    for (tmpMeta1 = _iSelected; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters0(threadData, omc_unbox_integer(_i), _globalKnownVars, _m, _inIEqns, _cache, _graph, _markarr, _isInitial, _repl, _replEvaluate, _mark ,&_cache ,&_repl ,&_replEvaluate ,&_mark);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_cache) { *out_cache = _cache; }
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  if (out_mark) { *out_mark = _mark; }
  omc_ret_ = _globalKnownVars;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters(threadData_t *threadData, modelica_metatype _iSelected, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_mark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _mark;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = omc_unbox_integer(_isInitial);
  tmp2 = omc_unbox_integer(__omcQ_24in_5Fmark);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters(threadData, _iSelected, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, _markarr, tmp1, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, tmp2, out_cache, out_repl, out_replEvaluate, &_mark);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  if (out_mark) { *out_mark = omc_mk_icon(_mark); }
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_getParameterAdjacencyMatrix(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _selectedParameters = NULL;
      modelica_integer _index;
      modelica_metatype _m = NULL;
      modelica_metatype _mt = NULL;
      modelica_fnptr _selectParameter;
      modelica_boolean _select;
      modelica_boolean _isInitial;
      modelica_metatype _ht = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _globalKnownVars has no default value.
      // _v has no default value.
      // _e has no default value.
      // _cref has no default value.
      // _attr has no default value.
      // _ilst has no default value.
      // _selectedParameters has no default value.
      // _index has no default value.
      // _m has no default value.
      // _mt has no default value.
      // _select has no default value.
      // _isInitial has no default value.
      // _ht has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 7);
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 1);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_2, 3);
          tmpMeta13 = OMC_BOX_FIELD(tmp4_2, 4);
          tmpMeta14 = OMC_BOX_FIELD(tmp4_2, 5);
          tmpMeta15 = OMC_BOX_FIELD(tmp4_2, 6);
          tmpMeta16 = OMC_BOX_FIELD(tmp4_2, 7);
          tmpMeta17 = OMC_BOX_FIELD(tmp4_2, 8);
          tmp18 = omc_unbox_integer(tmpMeta17);
          _v = tmp4_1;
          _e = tmpMeta8;
          _globalKnownVars = tmpMeta9;
          _index = tmp11  /* pattern as ty=Integer */;
          _selectParameter = tmpMeta12;
          _selectedParameters = tmpMeta13;
          _m = tmpMeta14;
          _mt = tmpMeta15;
          _ht = tmpMeta16;
          _isInitial = tmp18  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = omc_mk_box3(0, _globalKnownVars, tmpMeta21, omc_mk_boolean(_isInitial));
          omc_Expression_traverseExpTopDown(threadData, _e, boxvar_BackendDAEUtil_traversingadjacencyRowExpFinder, tmpMeta22, &tmpMeta19);
          tmpMeta20 = OMC_BOX_FIELD(tmpMeta19, 2);
          _ilst = tmpMeta20;

          _ilst = omc_BackendDAEUtil_uniqueRow(threadData, _ilst);

          _cref = omc_BackendVariable_varCref(threadData, _v);

          _select = (omc_unbox_boolean((OMC_BOX_FIELD(_selectParameter, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_selectParameter, 1))) (threadData, (OMC_BOX_FIELD(_selectParameter, 2)), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_selectParameter, 1))) (threadData, _v)) || omc_AvlSetCR_hasKey(threadData, _ht, _cref));

          _selectedParameters = omc_List_consOnTrue(threadData, _select, omc_mk_integer(_index), _selectedParameters);

          _m = arrayUpdate(_m, _index, _ilst);

          tmpMeta23 = mmc_mk_cons(omc_mk_integer(_index), _ilst);
          _mt = omc_List_fold1(threadData, tmpMeta23, boxvar_Array_consToElement, omc_mk_integer(_index), _mt);
          tmpMeta24 = omc_mk_box8(0, _globalKnownVars, omc_mk_integer(((modelica_integer) 1) + _index), ((modelica_fnptr) _selectParameter), _selectedParameters, _m, _mt, _ht, omc_mk_boolean(_isInitial));
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta24;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
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
          tmpMeta25 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,7,0) == 0) goto tmp3_end;
          tmpMeta26 = OMC_BOX_FIELD(tmp4_1, 11);
          tmpMeta27 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta28 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp29 = omc_unbox_integer(tmpMeta28);
          tmpMeta30 = OMC_BOX_FIELD(tmp4_2, 3);
          tmpMeta31 = OMC_BOX_FIELD(tmp4_2, 4);
          tmpMeta32 = OMC_BOX_FIELD(tmp4_2, 5);
          tmpMeta33 = OMC_BOX_FIELD(tmp4_2, 6);
          tmpMeta34 = OMC_BOX_FIELD(tmp4_2, 7);
          tmpMeta35 = OMC_BOX_FIELD(tmp4_2, 8);
          tmp36 = omc_unbox_integer(tmpMeta35);
          _v = tmp4_1;
          _attr = tmpMeta26;
          _globalKnownVars = tmpMeta27;
          _index = tmp29  /* pattern as ty=Integer */;
          _selectParameter = tmpMeta30;
          _selectedParameters = tmpMeta31;
          _m = tmpMeta32;
          _mt = tmpMeta33;
          _ht = tmpMeta34;
          _isInitial = tmp36  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _e = omc_DAEUtil_getStartAttrFail(threadData, _attr);

          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta40 = omc_mk_box3(0, _globalKnownVars, tmpMeta39, omc_mk_boolean(_isInitial));
          omc_Expression_traverseExpTopDown(threadData, _e, boxvar_BackendDAEUtil_traversingadjacencyRowExpFinder, tmpMeta40, &tmpMeta37);
          tmpMeta38 = OMC_BOX_FIELD(tmpMeta37, 2);
          _ilst = tmpMeta38;

          _ilst = omc_BackendDAEUtil_uniqueRow(threadData, _ilst);

          _cref = omc_BackendVariable_varCref(threadData, _v);

          _select = (omc_unbox_boolean((OMC_BOX_FIELD(_selectParameter, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_selectParameter, 1))) (threadData, (OMC_BOX_FIELD(_selectParameter, 2)), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_selectParameter, 1))) (threadData, _v)) || omc_AvlSetCR_hasKey(threadData, _ht, _cref));

          _selectedParameters = omc_List_consOnTrue(threadData, _select, omc_mk_integer(_index), _selectedParameters);

          _m = arrayUpdate(_m, _index, _ilst);

          tmpMeta41 = mmc_mk_cons(omc_mk_integer(_index), _ilst);
          _mt = omc_List_fold1(threadData, tmpMeta41, boxvar_Array_consToElement, omc_mk_integer(_index), _mt);
          tmpMeta42 = omc_mk_box8(0, _globalKnownVars, omc_mk_integer(((modelica_integer) 1) + _index), ((modelica_fnptr) _selectParameter), _selectedParameters, _m, _mt, _ht, omc_mk_boolean(_isInitial));
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta42;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_integer tmp45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_integer tmp52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          tmpMeta43 = OMC_BOX_FIELD(tmp4_2, 1);
          tmpMeta44 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp45 = omc_unbox_integer(tmpMeta44);
          tmpMeta46 = OMC_BOX_FIELD(tmp4_2, 3);
          tmpMeta47 = OMC_BOX_FIELD(tmp4_2, 4);
          tmpMeta48 = OMC_BOX_FIELD(tmp4_2, 5);
          tmpMeta49 = OMC_BOX_FIELD(tmp4_2, 6);
          tmpMeta50 = OMC_BOX_FIELD(tmp4_2, 7);
          tmpMeta51 = OMC_BOX_FIELD(tmp4_2, 8);
          tmp52 = omc_unbox_integer(tmpMeta51);
          _v = tmp4_1;
          _globalKnownVars = tmpMeta43;
          _index = tmp45  /* pattern as ty=Integer */;
          _selectParameter = tmpMeta46;
          _selectedParameters = tmpMeta47;
          _m = tmpMeta48;
          _mt = tmpMeta49;
          _ht = tmpMeta50;
          _isInitial = tmp52  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _cref = omc_BackendVariable_varCref(threadData, _v);

          _select = (omc_unbox_boolean((OMC_BOX_FIELD(_selectParameter, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_selectParameter, 1))) (threadData, (OMC_BOX_FIELD(_selectParameter, 2)), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_selectParameter, 1))) (threadData, _v)) || omc_AvlSetCR_hasKey(threadData, _ht, _cref));

          _selectedParameters = omc_List_consOnTrue(threadData, _select, omc_mk_integer(_index), _selectedParameters);

          tmpMeta53 = mmc_mk_cons(omc_mk_integer(_index), MMC_REFSTRUCTLIT(mmc_nil));
          _ilst = tmpMeta53;

          _mt = arrayUpdate(_mt, _index, _ilst);
          tmpMeta54 = omc_mk_box8(0, _globalKnownVars, omc_mk_integer(((modelica_integer) 1) + _index), ((modelica_fnptr) _selectParameter), _selectedParameters, _m, _mt, _ht, omc_mk_boolean(_isInitial));
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta54;
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outVar = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  omc_ret_ = _outVar;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_EvaluateParameter_evaluateParameters(threadData_t *threadData, modelica_metatype __omcQ_24in_5FDAE)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype __omcQ_24mrfa_5F4 = NULL;
  modelica_metatype _DAE = NULL;
  modelica_fnptr _selectParameterfunc;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _aliasVars = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype _graph = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _oRepl = NULL;
  modelica_metatype _systs = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _markarr = NULL;
  modelica_integer _size;
  modelica_integer _mark;
  modelica_integer _nselect;
  modelica_metatype _m = NULL;
  modelica_metatype _mt = NULL;
  modelica_metatype _selectedParameters = NULL;
  modelica_metatype _ht = NULL;
  modelica_boolean _isInitial;
  modelica_fnptr tmp1 = 0;
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
  modelica_string tmp22;
  modelica_string tmp23;
  modelica_string tmp24;
  modelica_string tmp25;
  modelica_string tmp26;
  modelica_string tmp27;
  modelica_string tmp28;
  modelica_string tmp29;
  modelica_string tmp30;
  modelica_string tmp31;
  modelica_metatype tmpMeta32;
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  modelica_string tmp35;
  modelica_string tmp36;
  modelica_string tmp37;
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_integer tmp46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta52;
  modelica_string tmp53;
  modelica_string tmp54;
  modelica_string tmp55;
  modelica_string tmp56;
  modelica_metatype tmpMeta57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  // __omcQ_24mrfa_5F4 has no default value.
  _DAE = __omcQ_24in_5FDAE;
  // _globalKnownVars has no default value.
  // _aliasVars has no default value.
  // _initialEqs has no default value.
  // _cache has no default value.
  // _graph has no default value.
  // _repl has no default value.
  // _oRepl has no default value.
  // _systs has no default value.
  // _shared has no default value.
  // _comps has no default value.
  // _ass2 has no default value.
  // _markarr has no default value.
  // _size has no default value.
  // _mark has no default value.
  // _nselect has no default value.
  // _m has no default value.
  // _mt has no default value.
  // _selectedParameters has no default value.
  // _ht has no default value.
  // _isInitial has no default value.
  _isInitial = omc_BackendDAEUtil_isInitializationDAE(threadData, (OMC_BOX_FIELD(_DAE, 3)));

  if(omc_Flags_isSet(threadData, _OMC_LIT11))
  {
    fputs(omc_string_data(_OMC_LIT12),stdout);

    omc_BackendDump_dumpBackendDAE(threadData, _DAE, _OMC_LIT13);
  }

  if((!omc_Flags_isSet(threadData, _OMC_LIT52)))
  {
    { /* match expression */
      modelica_boolean tmp4_1;modelica_boolean tmp4_2;
      tmp4_1 = omc_Flags_getConfigBool(threadData, _OMC_LIT19);
      tmp4_2 = omc_Flags_getConfigBool(threadData, _OMC_LIT22);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 4; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            if (0 /* false */ != tmp4_1) goto tmp3_end;
            if (0 /* false */ != tmp4_2) goto tmp3_end;
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT11))
            {
              fputs(omc_string_data(_OMC_LIT23),stdout);
            }
            tmp1 = boxvar_BackendVariable_hasVarEvaluateAnnotationTrue;
            goto tmp3_done;
          }
          case 1: {
            if (1 /* true */ != tmp4_1) goto tmp3_end;
            if (0 /* false */ != tmp4_2) goto tmp3_end;
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT11))
            {
              fputs(omc_string_data(_OMC_LIT24),stdout);
            }
            tmp1 = boxvar_BackendVariable_hasVarEvaluateAnnotationTrueOrFinal;
            goto tmp3_done;
          }
          case 2: {
            if (0 /* false */ != tmp4_1) goto tmp3_end;
            if (1 /* true */ != tmp4_2) goto tmp3_end;
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT11))
            {
              fputs(omc_string_data(_OMC_LIT25),stdout);
            }
            tmp1 = boxvar_BackendVariable_hasVarEvaluateAnnotationTrueOrProtected;
            goto tmp3_done;
          }
          case 3: {
            if (1 /* true */ != tmp4_1) goto tmp3_end;
            if (1 /* true */ != tmp4_2) goto tmp3_end;
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT11))
            {
              fputs(omc_string_data(_OMC_LIT26),stdout);
            }
            tmp1 = boxvar_BackendVariable_hasVarEvaluateAnnotationTrueOrFinalOrProtected;
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
    _selectParameterfunc = (modelica_fnptr) tmp1;

    /* Pattern-matching assignment */
    tmpMeta6 = _DAE;
    tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 2);
    tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 3);
    tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 2);
    tmpMeta10 = OMC_BOX_FIELD(tmpMeta8, 5);
    tmpMeta11 = OMC_BOX_FIELD(tmpMeta8, 6);
    tmpMeta12 = OMC_BOX_FIELD(tmpMeta8, 10);
    tmpMeta13 = OMC_BOX_FIELD(tmpMeta8, 11);
    _systs = tmpMeta7;
    _shared = tmpMeta8;
    _globalKnownVars = tmpMeta9;
    _aliasVars = tmpMeta10;
    _initialEqs = tmpMeta11;
    _cache = tmpMeta12;
    _graph = tmpMeta13;

    _size = omc_BackendVariable_varsSize(threadData, _globalKnownVars);

    tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
    _m = arrayCreate(_size, tmpMeta14);

    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    _mt = arrayCreate(_size, tmpMeta15);

    _ass2 = omc_Array_createIntRange(threadData, _size);

    _ht = omc_FCore_getEvaluatedParams(threadData, _cache);

    /* Pattern-matching assignment */
    tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta17 = omc_mk_box8(0, _globalKnownVars, omc_mk_integer(((modelica_integer) 1)), ((modelica_fnptr) _selectParameterfunc), tmpMeta16, _m, _mt, _ht, omc_mk_boolean(_isInitial));
    tmpMeta18 = omc_BackendVariable_traverseBackendDAEVars(threadData, _globalKnownVars, boxvar_EvaluateParameter_getParameterAdjacencyMatrix, tmpMeta17);
    tmpMeta19 = OMC_BOX_FIELD(tmpMeta18, 4);
    tmpMeta20 = OMC_BOX_FIELD(tmpMeta18, 5);
    tmpMeta21 = OMC_BOX_FIELD(tmpMeta18, 6);
    _selectedParameters = tmpMeta19;
    _m = tmpMeta20;
    _mt = tmpMeta21;

    _nselect = listLength(_selectedParameters);

    if(omc_Flags_isSet(threadData, _OMC_LIT11))
    {
      fputs(omc_string_data(_OMC_LIT27),stdout);

      tmp22 = stringAppend(_OMC_LIT28,intString(_size));
      tmp23 = stringAppend(tmp22,_OMC_LIT29);
      fputs(omc_string_data(tmp23),stdout);

      tmp24 = stringAppend(_OMC_LIT30,intString(_nselect));
      tmp25 = stringAppend(tmp24,_OMC_LIT29);
      fputs(omc_string_data(tmp25),stdout);

      tmp26 = stringAppend(_OMC_LIT31,stringDelimitList(omc_List_map(threadData, _selectedParameters, boxvar_intString), _OMC_LIT32));
      tmp27 = stringAppend(tmp26,_OMC_LIT29);
      fputs(omc_string_data(tmp27),stdout);

      omc_BackendDump_dumpAdjacencyMatrix(threadData, _m);

      omc_BackendDump_dumpAdjacencyMatrixT(threadData, _mt);
    }

    _markarr = arrayCreate(_size, omc_mk_integer(((modelica_integer) -1)));

    _size = modelica_integer_max((modelica_integer)(((modelica_integer) 2053)),(modelica_integer)(((modelica_integer)floor((0.7) * (((modelica_real)_size))))));

    _nselect = modelica_integer_max((modelica_integer)(((modelica_integer) 2053)),(modelica_integer)((((modelica_integer) 2)) * (_nselect)));

    _repl = omc_BackendVarTransform_emptyReplacementsSized(threadData, _size);

    _oRepl = omc_BackendVarTransform_emptyReplacementsSized(threadData, _nselect);

    _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters(threadData, _selectedParameters, _globalKnownVars, _m, _initialEqs, _cache, _graph, _markarr, _isInitial, _repl, _oRepl, ((modelica_integer) 1) ,&_cache ,&_repl ,&_oRepl ,&_mark);

    if(omc_Flags_isSet(threadData, _OMC_LIT11))
    {
      fputs(omc_string_data(_OMC_LIT33),stdout);

      fputs(omc_string_data(_OMC_LIT34),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _repl);

      fputs(omc_string_data(_OMC_LIT35),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _oRepl);

      omc_BackendDump_dumpVariables(threadData, _globalKnownVars, _OMC_LIT36);

      tmp28 = stringAppend(_OMC_LIT37,intString(_mark));
      tmp29 = stringAppend(tmp28,_OMC_LIT29);
      fputs(omc_string_data(tmp29),stdout);

      tmp30 = stringAppend(_OMC_LIT38,stringDelimitList(omc_List_mapArray(threadData, _markarr, boxvar_intString), _OMC_LIT32));
      tmp31 = stringAppend(tmp30,_OMC_LIT29);
      fputs(omc_string_data(tmp31),stdout);
    }

    _comps = omc_Sorting_TarjanTransposed(threadData, _mt, _ass2);

    if(omc_Flags_isSet(threadData, _OMC_LIT11))
    {
      fputs(omc_string_data(_OMC_LIT39),stdout);

      {
        modelica_metatype _comp;
        for (tmpMeta32 = _comps; !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
        {
          _comp = MMC_CAR(tmpMeta32);
          tmp33 = stringAppend(stringDelimitList(omc_List_map(threadData, _comp, boxvar_intString), _OMC_LIT32),_OMC_LIT29);
          fputs(omc_string_data(tmp33),stdout);
        }
      }
    }

    _globalKnownVars = omc_EvaluateParameter_traverseParameterSorted(threadData, _comps, _globalKnownVars, _m, _initialEqs, _cache, _graph, _mark, _markarr, _repl, _oRepl, _isInitial ,&_repl ,&_oRepl ,&_cache ,&_mark);

    if(omc_Flags_isSet(threadData, _OMC_LIT11))
    {
      fputs(omc_string_data(_OMC_LIT40),stdout);

      fputs(omc_string_data(_OMC_LIT34),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _repl);

      fputs(omc_string_data(_OMC_LIT35),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _oRepl);

      omc_BackendDump_dumpVariables(threadData, _globalKnownVars, _OMC_LIT36);

      tmp35 = stringAppend(_OMC_LIT37,intString(_mark));
      tmp36 = stringAppend(tmp35,_OMC_LIT29);
      fputs(omc_string_data(tmp36),stdout);

      tmp37 = stringAppend(_OMC_LIT38,stringDelimitList(omc_List_mapArray(threadData, _markarr, boxvar_intString), _OMC_LIT32));
      tmp38 = stringAppend(tmp37,_OMC_LIT29);
      fputs(omc_string_data(tmp38),stdout);
    }

    /* Pattern-matching tuple assignment */
    tmpMeta50 = omc_mk_box10(0, _globalKnownVars, _m, _initialEqs, _cache, _graph, omc_mk_integer(_mark), _markarr, omc_mk_boolean(_isInitial), _repl, _oRepl);
    tmpMeta51 = omc_List_mapFold(threadData, _systs, boxvar_EvaluateParameter_replaceEvaluatedParametersSystem, tmpMeta50, &tmpMeta39);
    _systs = tmpMeta51;
    tmpMeta40 = OMC_BOX_FIELD(tmpMeta39, 1);
    tmpMeta41 = OMC_BOX_FIELD(tmpMeta39, 2);
    tmpMeta42 = OMC_BOX_FIELD(tmpMeta39, 3);
    tmpMeta43 = OMC_BOX_FIELD(tmpMeta39, 4);
    tmpMeta44 = OMC_BOX_FIELD(tmpMeta39, 5);
    tmpMeta45 = OMC_BOX_FIELD(tmpMeta39, 6);
    tmp46 = omc_unbox_integer(tmpMeta45);
    tmpMeta47 = OMC_BOX_FIELD(tmpMeta39, 7);
    tmpMeta48 = OMC_BOX_FIELD(tmpMeta39, 9);
    tmpMeta49 = OMC_BOX_FIELD(tmpMeta39, 10);
    _globalKnownVars = tmpMeta40;
    _m = tmpMeta41;
    _initialEqs = tmpMeta42;
    _cache = tmpMeta43;
    _graph = tmpMeta44;
    _mark = tmp46  /* pattern as ty=Integer */;
    _markarr = tmpMeta47;
    _repl = tmpMeta48;
    _oRepl = tmpMeta49;

    tmpMeta52 = omc_mk_box10(0, _globalKnownVars, _m, _initialEqs, _cache, _graph, omc_mk_integer(_mark), _markarr, omc_mk_boolean(_isInitial), _repl, _oRepl);
    _aliasVars = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _aliasVars, boxvar_EvaluateParameter_replaceEvaluatedParameterTraverser, tmpMeta52, NULL);

    if(omc_Flags_isSet(threadData, _OMC_LIT11))
    {
      fputs(omc_string_data(_OMC_LIT41),stdout);

      fputs(omc_string_data(_OMC_LIT34),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _repl);

      fputs(omc_string_data(_OMC_LIT35),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _oRepl);

      omc_BackendDump_dumpVariables(threadData, _globalKnownVars, _OMC_LIT36);

      tmp53 = stringAppend(_OMC_LIT37,intString(_mark));
      tmp54 = stringAppend(tmp53,_OMC_LIT29);
      fputs(omc_string_data(tmp54),stdout);

      tmp55 = stringAppend(_OMC_LIT38,stringDelimitList(omc_List_mapArray(threadData, _markarr, boxvar_intString), _OMC_LIT32));
      tmp56 = stringAppend(tmp55,_OMC_LIT42);
      fputs(omc_string_data(tmp56),stdout);
    }

    if(omc_Flags_getConfigBool(threadData, _OMC_LIT46))
    {
      tmpMeta57 = MMC_TAGPTR(mmc_alloc_words(22));
      memcpy(MMC_UNTAGPTR(tmpMeta57), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta57))[4] = omc_BackendVariable_listVar1(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, (OMC_BOX_FIELD(_shared, 4))), boxvar_BackendVarTransform_replaceBindingExp, _oRepl));
      _shared = tmpMeta57;
    }

    __omcQ_24mrfa_5F0 = _globalKnownVars;

    __omcQ_24mrfa_5F1 = _aliasVars;

    __omcQ_24mrfa_5F2 = _initialEqs;

    __omcQ_24mrfa_5F3 = _graph;

    __omcQ_24mrfa_5F4 = _cache;

    tmpMeta58 = omc_mk_box(21, 3, &BackendDAE_Shared_SHARED__desc, __omcQ_24mrfa_5F0, (OMC_BOX_FIELD(_shared, 3)), (OMC_BOX_FIELD(_shared, 4)), __omcQ_24mrfa_5F1, __omcQ_24mrfa_5F2, (OMC_BOX_FIELD(_shared, 7)), (OMC_BOX_FIELD(_shared, 8)), (OMC_BOX_FIELD(_shared, 9)), __omcQ_24mrfa_5F4, __omcQ_24mrfa_5F3, (OMC_BOX_FIELD(_shared, 12)), (OMC_BOX_FIELD(_shared, 13)), (OMC_BOX_FIELD(_shared, 14)), (OMC_BOX_FIELD(_shared, 15)), (OMC_BOX_FIELD(_shared, 16)), (OMC_BOX_FIELD(_shared, 17)), (OMC_BOX_FIELD(_shared, 18)), (OMC_BOX_FIELD(_shared, 19)), (OMC_BOX_FIELD(_shared, 20)), (OMC_BOX_FIELD(_shared, 21)));
    _shared = tmpMeta58;

    tmpMeta59 = omc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
    _DAE = tmpMeta59;

    if(omc_Flags_getConfigBool(threadData, _OMC_LIT46))
    {
      if((!omc_BackendVarTransform_isReplacementEmpty(threadData, _oRepl)))
      {
        _DAE = omc_EvaluateParameter_replaceEvaluatedParametersEqns(threadData, _DAE, _oRepl);

        if(omc_Flags_isSet(threadData, _OMC_LIT11))
        {
          omc_BackendDump_dumpBackendDAE(threadData, _DAE, _OMC_LIT49);
        }
      }
      else
      {
        if(omc_Flags_isSet(threadData, _OMC_LIT11))
        {
          fputs(omc_string_data(_OMC_LIT48),stdout);
        }
      }
    }
    else
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT11))
      {
        omc_Error_addCompilerNotification(threadData, _OMC_LIT47);
      }
    }
  }
  else
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT11))
    {
      fputs(omc_string_data(_OMC_LIT14),stdout);
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT11))
  {
    fputs(omc_string_data(_OMC_LIT53),stdout);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _DAE;
  return omc_ret_;
}

