#ifndef Inst__H
#define Inst__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef __cplusplus
extern "C" {
#endif
extern struct record_description Absyn_ComponentRef_CREF__IDENT__desc;
extern struct record_description Absyn_Direction_BIDIR__desc;
extern struct record_description Absyn_InnerOuter_NOT__INNER__OUTER__desc;
extern struct record_description Absyn_IsField_NONFIELD__desc;
extern struct record_description Absyn_Msg_NO__MSG__desc;
extern struct record_description Absyn_Path_FULLYQUALIFIED__desc;
extern struct record_description Absyn_Path_IDENT__desc;
extern struct record_description Absyn_TypeSpec_TCOMPLEX__desc;
extern struct record_description ClassInf_Event_FOUND__COMPONENT__desc;
extern struct record_description ClassInf_Event_FOUND__EXT__DECL__desc;
extern struct record_description ClassInf_Event_NEWDEF__desc;
extern struct record_description ClassInf_State_META__ARRAY__desc;
extern struct record_description ClassInf_State_META__LIST__desc;
extern struct record_description ClassInf_State_META__OPTION__desc;
extern struct record_description ClassInf_State_META__POLYMORPHIC__desc;
extern struct record_description ClassInf_State_META__TUPLE__desc;
extern struct record_description ClassInf_State_META__UNIONTYPE__desc;
extern struct record_description ClassInf_State_RECORD__desc;
extern struct record_description ConnectionGraph_ConnectionGraph_GRAPH__desc;
extern struct record_description DAE_Attributes_ATTR__desc;
extern struct record_description DAE_Binding_EQBOUND__desc;
extern struct record_description DAE_Binding_UNBOUND__desc;
extern struct record_description DAE_BindingSource_BINDING__FROM__DEFAULT__VALUE__desc;
extern struct record_description DAE_BindingSource_BINDING__FROM__DERIVED__RECORD__DECL__desc;
extern struct record_description DAE_ClassAttributes_OPTIMIZATION__ATTRS__desc;
extern struct record_description DAE_ComponentPrefix_NOCOMPPRE__desc;
extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;
extern struct record_description DAE_ComponentRef_WILD__desc;
extern struct record_description DAE_Connect_SetTrieNode_SET__TRIE__NODE__desc;
extern struct record_description DAE_Connect_Sets_SETS__desc;
extern struct record_description DAE_ConnectorType_NON__CONNECTOR__desc;
extern struct record_description DAE_Const_C__PARAM__desc;
extern struct record_description DAE_Const_C__VAR__desc;
extern struct record_description DAE_DAElist_DAE__desc;
extern struct record_description DAE_Dimension_DIM__INTEGER__desc;
extern struct record_description DAE_Dimension_DIM__UNKNOWN__desc;
extern struct record_description DAE_Element_CLASS__ATTRIBUTES__desc;
extern struct record_description DAE_Element_COMMENT__desc;
extern struct record_description DAE_Element_COMP__desc;
extern struct record_description DAE_Element_SM__COMP__desc;
extern struct record_description DAE_ElementSource_SOURCE__desc;
extern struct record_description DAE_Mod_MOD__desc;
extern struct record_description DAE_Mod_NOMOD__desc;
extern struct record_description DAE_Prefix_NOPRE__desc;
extern struct record_description DAE_SubMod_NAMEMOD__desc;
extern struct record_description DAE_Type_T__ARRAY__desc;
extern struct record_description DAE_Type_T__BOOL__desc;
extern struct record_description DAE_Type_T__CLOCK__desc;
extern struct record_description DAE_Type_T__COMPLEX__desc;
extern struct record_description DAE_Type_T__ENUMERATION__desc;
extern struct record_description DAE_Type_T__INTEGER__desc;
extern struct record_description DAE_Type_T__METAARRAY__desc;
extern struct record_description DAE_Type_T__METALIST__desc;
extern struct record_description DAE_Type_T__METAOPTION__desc;
extern struct record_description DAE_Type_T__METAPOLYMORPHIC__desc;
extern struct record_description DAE_Type_T__METATUPLE__desc;
extern struct record_description DAE_Type_T__REAL__desc;
extern struct record_description DAE_Type_T__STRING__desc;
extern struct record_description DAE_Type_T__UNKNOWN__desc;
extern struct record_description DAE_Var_TYPES__VAR__desc;
extern struct record_description ErrorTypes_Message_MESSAGE__desc;
extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;
extern struct record_description ErrorTypes_Severity_ERROR__desc;
extern struct record_description ErrorTypes_Severity_WARNING__desc;
extern struct record_description FCore_Graph_EG__desc;
extern struct record_description FCore_Kind_USERDEFINED__desc;
extern struct record_description FCore_ScopeType_CLASS__SCOPE__desc;
extern struct record_description FCore_Status_CLS__UNTYPED__desc;
extern struct record_description FCore_Status_VAR__DAE__desc;
extern struct record_description FCore_Status_VAR__DELETED__desc;
extern struct record_description FCore_Status_VAR__TYPED__desc;
extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;
extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;
extern struct record_description Flags_FlagData_BOOL__FLAG__desc;
extern struct record_description Flags_FlagData_ENUM__FLAG__desc;
extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;
extern struct record_description Flags_FlagVisibility_INTERNAL__desc;
extern struct record_description Flags_ValidOptions_STRING__OPTION__desc;
extern struct record_description Gettext_TranslatableContent_gettext__desc;
extern struct record_description Gettext_TranslatableContent_notrans__desc;
extern struct record_description InstHashTable_CachedInstItem_FUNC__instClassIn__desc;
extern struct record_description InstHashTable_CachedInstItem_FUNC__partialInstClassIn__desc;
extern struct record_description InstTypes_CallingScope_INNER__CALL__desc;
extern struct record_description InstTypes_CallingScope_TOP__CALL__desc;
extern struct record_description InstTypes_SearchStrategy_SEARCH__ALSO__BUILTIN__desc;
extern struct record_description Mod_ModScope_COMPONENT__desc;
extern struct record_description Mod_ModScope_DERIVED__desc;
extern struct record_description SCode_Annotation_ANNOTATION__desc;
extern struct record_description SCode_Attributes_ATTR__desc;
extern struct record_description SCode_ClassDef_DERIVED__desc;
extern struct record_description SCode_ClassDef_PARTS__desc;
extern struct record_description SCode_Comment_COMMENT__desc;
extern struct record_description SCode_ConnectorType_POTENTIAL__desc;
extern struct record_description SCode_Each_NOT__EACH__desc;
extern struct record_description SCode_Element_CLASS__desc;
extern struct record_description SCode_Element_COMPONENT__desc;
extern struct record_description SCode_Element_EXTENDS__desc;
extern struct record_description SCode_Encapsulated_NOT__ENCAPSULATED__desc;
extern struct record_description SCode_Final_NOT__FINAL__desc;
extern struct record_description SCode_Mod_NOMOD__desc;
extern struct record_description SCode_Parallelism_NON__PARALLEL__desc;
extern struct record_description SCode_Partial_NOT__PARTIAL__desc;
extern struct record_description SCode_Prefixes_PREFIXES__desc;
extern struct record_description SCode_Redeclare_NOT__REDECLARE__desc;
extern struct record_description SCode_Replaceable_NOT__REPLACEABLE__desc;
extern struct record_description SCode_Restriction_R__ENUMERATION__desc;
extern struct record_description SCode_Restriction_R__MODEL__desc;
extern struct record_description SCode_Restriction_R__PACKAGE__desc;
extern struct record_description SCode_Restriction_R__PREDEFINED__ENUMERATION__desc;
extern struct record_description SCode_Restriction_R__RECORD__desc;
extern struct record_description SCode_Restriction_R__TYPE__desc;
extern struct record_description SCode_Variability_PARAM__desc;
extern struct record_description SCode_Variability_VAR__desc;
extern struct record_description SCode_Visibility_PUBLIC__desc;
extern struct record_description SCodeDump_SCodeDumpOptions_OPTIONS__desc;
extern struct record_description SourceInfo_SOURCEINFO__desc;
extern struct record_description UnitAbsyn_InstStore_NOSTORE__desc;
DLLExport
modelica_metatype omc_Inst_instClassType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype _classElem, modelica_metatype *out_env, modelica_metatype *out_ty);
#define boxptr_Inst_instClassType omc_Inst_instClassType
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instClassType,2,0) {(void*) boxptr_Inst_instClassType,0}};
#define boxvar_Inst_instClassType MMC_REFSTRUCTLIT(boxvar_lit_Inst_instClassType)
#define boxptr_Inst_instFunctionAnnotations omc_Inst_instFunctionAnnotations
#define boxptr_Inst_showCacheInfo omc_Inst_showCacheInfo
DLLExport
modelica_string omc_Inst_generatePrefixStr(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_Inst_generatePrefixStr omc_Inst_generatePrefixStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_generatePrefixStr,2,0) {(void*) boxptr_Inst_generatePrefixStr,0}};
#define boxvar_Inst_generatePrefixStr MMC_REFSTRUCTLIT(boxvar_lit_Inst_generatePrefixStr)
#define boxptr_Inst_generateCachePath omc_Inst_generateCachePath
DLLExport
modelica_metatype omc_Inst_getCachedInstance(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype __omcQ_24in_5Fenv, modelica_string _name, modelica_metatype _ref, modelica_metatype *out_env);
#define boxptr_Inst_getCachedInstance omc_Inst_getCachedInstance
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_getCachedInstance,2,0) {(void*) boxptr_Inst_getCachedInstance,0}};
#define boxvar_Inst_getCachedInstance MMC_REFSTRUCTLIT(boxvar_lit_Inst_getCachedInstance)
#define boxptr_Inst_makeFullyQualified2Builtin omc_Inst_makeFullyQualified2Builtin
#define boxptr_Inst_makeFullyQualified2 omc_Inst_makeFullyQualified2
#define boxptr_Inst_modifyInstantiateClass omc_Inst_modifyInstantiateClass
#define boxptr_Inst_instBoschClassInProgram omc_Inst_instBoschClassInProgram
DLLExport
modelica_metatype omc_Inst_instantiateBoschClass(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inIH, modelica_metatype _inProgram, modelica_metatype _inPath, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outDAElist);
#define boxptr_Inst_instantiateBoschClass omc_Inst_instantiateBoschClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instantiateBoschClass,2,0) {(void*) boxptr_Inst_instantiateBoschClass,0}};
#define boxvar_Inst_instantiateBoschClass MMC_REFSTRUCTLIT(boxvar_lit_Inst_instantiateBoschClass)
#define boxptr_Inst_insertClassAttribute omc_Inst_insertClassAttribute
DLLExport
modelica_metatype omc_Inst_instList(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSets, modelica_metatype _inState, modelica_fnptr _instFunc, modelica_metatype _inTypeALst, modelica_boolean _inImplicit, modelica_boolean _unrollForLoops, modelica_metatype _inGraph, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outGraph);
DLLExport
modelica_metatype boxptr_Inst_instList(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inPrefix, modelica_metatype _inSets, modelica_metatype _inState, modelica_fnptr _instFunc, modelica_metatype _inTypeALst, modelica_metatype _inImplicit, modelica_metatype _unrollForLoops, modelica_metatype _inGraph, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instList,2,0) {(void*) boxptr_Inst_instList,0}};
#define boxvar_Inst_instList MMC_REFSTRUCTLIT(boxvar_lit_Inst_instList)
DLLExport
modelica_metatype omc_Inst_makeFullyQualifiedIdent(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_string _ident, modelica_metatype _inPath, modelica_metatype *out_outPath);
#define boxptr_Inst_makeFullyQualifiedIdent omc_Inst_makeFullyQualifiedIdent
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_makeFullyQualifiedIdent,2,0) {(void*) boxptr_Inst_makeFullyQualifiedIdent,0}};
#define boxvar_Inst_makeFullyQualifiedIdent MMC_REFSTRUCTLIT(boxvar_lit_Inst_makeFullyQualifiedIdent)
#define boxptr_Inst_makeFullyQualifiedFromQual omc_Inst_makeFullyQualifiedFromQual
DLLExport
modelica_metatype omc_Inst_makeFullyQualified(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _inEnv, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype *out_path);
#define boxptr_Inst_makeFullyQualified omc_Inst_makeFullyQualified
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_makeFullyQualified,2,0) {(void*) boxptr_Inst_makeFullyQualified,0}};
#define boxvar_Inst_makeFullyQualified MMC_REFSTRUCTLIT(boxvar_lit_Inst_makeFullyQualified)
DLLExport
modelica_metatype omc_Inst_makeEnvFromProgram(threadData_t *threadData, modelica_metatype _prog, modelica_metatype *out_env_1);
#define boxptr_Inst_makeEnvFromProgram omc_Inst_makeEnvFromProgram
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_makeEnvFromProgram,2,0) {(void*) boxptr_Inst_makeEnvFromProgram,0}};
#define boxvar_Inst_makeEnvFromProgram MMC_REFSTRUCTLIT(boxvar_lit_Inst_makeEnvFromProgram)
#define boxptr_Inst_getUpdatedCompsHashTable omc_Inst_getUpdatedCompsHashTable
#define boxptr_Inst_propagateRedeclCompAttr omc_Inst_propagateRedeclCompAttr
DLLExport
modelica_metatype omc_Inst_redeclareType(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inMod, modelica_metatype _inElement, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_boolean _inImpl, modelica_metatype _inCmod, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outElement, modelica_metatype *out_outMod);
DLLExport
modelica_metatype boxptr_Inst_redeclareType(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inMod, modelica_metatype _inElement, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inImpl, modelica_metatype _inCmod, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outElement, modelica_metatype *out_outMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_redeclareType,2,0) {(void*) boxptr_Inst_redeclareType,0}};
#define boxvar_Inst_redeclareType MMC_REFSTRUCTLIT(boxvar_lit_Inst_redeclareType)
#define boxptr_Inst_removePrefixFromBinding omc_Inst_removePrefixFromBinding
DLLExport
modelica_metatype omc_Inst_instElement(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inUnitStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inElement, modelica_metatype _inInstDims, modelica_boolean _inImplicit, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outUnitStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outVars, modelica_metatype *out_outGraph, modelica_metatype *out_outFieldDomOpt);
DLLExport
modelica_metatype boxptr_Inst_instElement(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inUnitStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inElement, modelica_metatype _inInstDims, modelica_metatype _inImplicit, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outUnitStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outVars, modelica_metatype *out_outGraph, modelica_metatype *out_outFieldDomOpt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instElement,2,0) {(void*) boxptr_Inst_instElement,0}};
#define boxvar_Inst_instElement MMC_REFSTRUCTLIT(boxvar_lit_Inst_instElement)
DLLExport
modelica_metatype omc_Inst_instElement2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inElement, modelica_metatype _inInstDims, modelica_boolean _inImplicit, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_boolean _inStopOnError, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outVars, modelica_metatype *out_outGraph, modelica_metatype *out_outFieldDomOpt);
DLLExport
modelica_metatype boxptr_Inst_instElement2(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inElement, modelica_metatype _inInstDims, modelica_metatype _inImplicit, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype _inStopOnError, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outVars, modelica_metatype *out_outGraph, modelica_metatype *out_outFieldDomOpt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instElement2,2,0) {(void*) boxptr_Inst_instElement2,0}};
#define boxvar_Inst_instElement2 MMC_REFSTRUCTLIT(boxvar_lit_Inst_instElement2)
#define boxptr_Inst_getSortedElementOrdering omc_Inst_getSortedElementOrdering
DLLExport
modelica_metatype omc_Inst_instElementList(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inElements, modelica_metatype _inInstDims, modelica_boolean _inImplInst, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_boolean _inStopOnError, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outVars, modelica_metatype *out_outGraph, modelica_metatype *out_domainFieldsListOut);
DLLExport
modelica_metatype boxptr_Inst_instElementList(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inElements, modelica_metatype _inInstDims, modelica_metatype _inImplInst, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype _inStopOnError, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outVars, modelica_metatype *out_outGraph, modelica_metatype *out_domainFieldsListOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instElementList,2,0) {(void*) boxptr_Inst_instElementList,0}};
#define boxvar_Inst_instElementList MMC_REFSTRUCTLIT(boxvar_lit_Inst_instElementList)
#define boxptr_Inst_instBasictypeBaseclass2 omc_Inst_instBasictypeBaseclass2
#define boxptr_Inst_rollbackCheck omc_Inst_rollbackCheck
#define boxptr_Inst_instBasictypeBaseclass omc_Inst_instBasictypeBaseclass
#define boxptr_Inst_joinExtAlgorithms omc_Inst_joinExtAlgorithms
#define boxptr_Inst_joinExtEquations omc_Inst_joinExtEquations
DLLExport
modelica_metatype omc_Inst_instClassdef(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _store, modelica_metatype _inMod2, modelica_metatype _inPrefix3, modelica_metatype _inState5, modelica_string _className, modelica_metatype _inClassDef6, modelica_metatype _inRestriction7, modelica_metatype _inVisibility, modelica_metatype _inPartialPrefix, modelica_metatype _inEncapsulatedPrefix, modelica_metatype _inInstDims9, modelica_boolean _inImplicit, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype _instSingleCref, modelica_metatype _comment, modelica_metatype _info, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outTypesVarLst, modelica_metatype *out_outTypesTypeOption, modelica_metatype *out_optDerAttr, modelica_metatype *out_outEqualityConstraint, modelica_metatype *out_outGraph);
DLLExport
modelica_metatype boxptr_Inst_instClassdef(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _store, modelica_metatype _inMod2, modelica_metatype _inPrefix3, modelica_metatype _inState5, modelica_metatype _className, modelica_metatype _inClassDef6, modelica_metatype _inRestriction7, modelica_metatype _inVisibility, modelica_metatype _inPartialPrefix, modelica_metatype _inEncapsulatedPrefix, modelica_metatype _inInstDims9, modelica_metatype _inImplicit, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype _instSingleCref, modelica_metatype _comment, modelica_metatype _info, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outTypesVarLst, modelica_metatype *out_outTypesTypeOption, modelica_metatype *out_optDerAttr, modelica_metatype *out_outEqualityConstraint, modelica_metatype *out_outGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instClassdef,2,0) {(void*) boxptr_Inst_instClassdef,0}};
#define boxvar_Inst_instClassdef MMC_REFSTRUCTLIT(boxvar_lit_Inst_instClassdef)
DLLExport
modelica_metatype omc_Inst_partialInstClassIn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype __omcQ_24in_5Fih, modelica_metatype _mod, modelica_metatype _prefix, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype _cls, modelica_metatype _visibility, modelica_metatype _instDims, modelica_integer _numIter, modelica_metatype *out_env, modelica_metatype *out_ih, modelica_metatype *out_state, modelica_metatype *out_vars);
DLLExport
modelica_metatype boxptr_Inst_partialInstClassIn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype __omcQ_24in_5Fih, modelica_metatype _mod, modelica_metatype _prefix, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype _cls, modelica_metatype _visibility, modelica_metatype _instDims, modelica_metatype _numIter, modelica_metatype *out_env, modelica_metatype *out_ih, modelica_metatype *out_state, modelica_metatype *out_vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_partialInstClassIn,2,0) {(void*) boxptr_Inst_partialInstClassIn,0}};
#define boxvar_Inst_partialInstClassIn MMC_REFSTRUCTLIT(boxvar_lit_Inst_partialInstClassIn)
#define boxptr_Inst_arrayBasictypeBaseclass omc_Inst_arrayBasictypeBaseclass
#define boxptr_Inst_instBuiltinAttribute omc_Inst_instBuiltinAttribute
#define boxptr_Inst_instBasicTypeAttributes2 omc_Inst_instBasicTypeAttributes2
#define boxptr_Inst_instBasicTypeAttributes omc_Inst_instBasicTypeAttributes
#define boxptr_Inst_getEnumAttributeType omc_Inst_getEnumAttributeType
#define boxptr_Inst_getClockAttributeType omc_Inst_getClockAttributeType
#define boxptr_Inst_getBoolAttributeType omc_Inst_getBoolAttributeType
#define boxptr_Inst_getStringAttributeType omc_Inst_getStringAttributeType
#define boxptr_Inst_getIntAttributeType omc_Inst_getIntAttributeType
#define boxptr_Inst_getRealAttributeType omc_Inst_getRealAttributeType
#define boxptr_Inst_getBasicTypeAttrTyper omc_Inst_getBasicTypeAttrTyper
#define boxptr_Inst_getBasicTypeType omc_Inst_getBasicTypeType
DLLExport
modelica_metatype omc_Inst_instClassIn__dispatch(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inClass, modelica_metatype _inVisibility, modelica_metatype _inInstDims, modelica_boolean _implicitInstantiation, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype _instSingleCref, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outTypesVarLst, modelica_metatype *out_outTypesTypeOption, modelica_metatype *out_optDerAttr, modelica_metatype *out_outEqualityConstraint, modelica_metatype *out_outGraph);
DLLExport
modelica_metatype boxptr_Inst_instClassIn__dispatch(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inClass, modelica_metatype _inVisibility, modelica_metatype _inInstDims, modelica_metatype _implicitInstantiation, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype _instSingleCref, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outTypesVarLst, modelica_metatype *out_outTypesTypeOption, modelica_metatype *out_optDerAttr, modelica_metatype *out_outEqualityConstraint, modelica_metatype *out_outGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instClassIn__dispatch,2,0) {(void*) boxptr_Inst_instClassIn__dispatch,0}};
#define boxvar_Inst_instClassIn__dispatch MMC_REFSTRUCTLIT(boxvar_lit_Inst_instClassIn__dispatch)
#define boxptr_Inst_markTypesVarsOutsideBindings omc_Inst_markTypesVarsOutsideBindings
#define boxptr_Inst_markBindingFromDerivedRecordMods omc_Inst_markBindingFromDerivedRecordMods
#define boxptr_Inst_markDerivedRecordOutsideBindings omc_Inst_markDerivedRecordOutsideBindings
DLLExport
modelica_metatype omc_Inst_instClassIn2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype __omcQ_24in_5Fih, modelica_metatype __omcQ_24in_5Fstore, modelica_metatype _mod, modelica_metatype _prefix, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype _cls, modelica_metatype _visibility, modelica_metatype _instDims, modelica_boolean _implicitInst, modelica_metatype _callingScope, modelica_metatype __omcQ_24in_5Fgraph, modelica_metatype __omcQ_24in_5Fsets, modelica_metatype _instSingleCref, modelica_metatype *out_env, modelica_metatype *out_ih, modelica_metatype *out_store, modelica_metatype *out_state, modelica_metatype *out_graph, modelica_metatype *out_sets, modelica_metatype *out_dae, modelica_metatype *out_vars, modelica_metatype *out_ty, modelica_metatype *out_optDerAttr, modelica_metatype *out_equalityConstraint);
DLLExport
modelica_metatype boxptr_Inst_instClassIn2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype __omcQ_24in_5Fih, modelica_metatype __omcQ_24in_5Fstore, modelica_metatype _mod, modelica_metatype _prefix, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype _cls, modelica_metatype _visibility, modelica_metatype _instDims, modelica_metatype _implicitInst, modelica_metatype _callingScope, modelica_metatype __omcQ_24in_5Fgraph, modelica_metatype __omcQ_24in_5Fsets, modelica_metatype _instSingleCref, modelica_metatype *out_env, modelica_metatype *out_ih, modelica_metatype *out_store, modelica_metatype *out_state, modelica_metatype *out_graph, modelica_metatype *out_sets, modelica_metatype *out_dae, modelica_metatype *out_vars, modelica_metatype *out_ty, modelica_metatype *out_optDerAttr, modelica_metatype *out_equalityConstraint);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instClassIn2,2,0) {(void*) boxptr_Inst_instClassIn2,0}};
#define boxvar_Inst_instClassIn2 MMC_REFSTRUCTLIT(boxvar_lit_Inst_instClassIn2)
DLLExport
modelica_metatype omc_Inst_instClassIn(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inClass, modelica_metatype _inVisibility, modelica_metatype _inInstDims, modelica_boolean _implicitInstantiation, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype _instSingleCref, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outVars, modelica_metatype *out_outType, modelica_metatype *out_optDerAttr, modelica_metatype *out_outEqualityConstraint, modelica_metatype *out_outGraph);
DLLExport
modelica_metatype boxptr_Inst_instClassIn(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inState, modelica_metatype _inClass, modelica_metatype _inVisibility, modelica_metatype _inInstDims, modelica_metatype _implicitInstantiation, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype _instSingleCref, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outState, modelica_metatype *out_outVars, modelica_metatype *out_outType, modelica_metatype *out_optDerAttr, modelica_metatype *out_outEqualityConstraint, modelica_metatype *out_outGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instClassIn,2,0) {(void*) boxptr_Inst_instClassIn,0}};
#define boxvar_Inst_instClassIn MMC_REFSTRUCTLIT(boxvar_lit_Inst_instClassIn)
DLLExport
modelica_metatype omc_Inst_instClass(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inClass, modelica_metatype _inInstDims, modelica_boolean _inImplicit, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outType, modelica_metatype *out_outState, modelica_metatype *out_optDerAttr, modelica_metatype *out_outGraph);
DLLExport
modelica_metatype boxptr_Inst_instClass(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _inIH, modelica_metatype _inStore, modelica_metatype _inMod, modelica_metatype _inPrefix, modelica_metatype _inClass, modelica_metatype _inInstDims, modelica_metatype _inImplicit, modelica_metatype _inCallingScope, modelica_metatype _inGraph, modelica_metatype _inSets, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outStore, modelica_metatype *out_outDae, modelica_metatype *out_outSets, modelica_metatype *out_outType, modelica_metatype *out_outState, modelica_metatype *out_optDerAttr, modelica_metatype *out_outGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instClass,2,0) {(void*) boxptr_Inst_instClass,0}};
#define boxvar_Inst_instClass MMC_REFSTRUCTLIT(boxvar_lit_Inst_instClass)
#define boxptr_Inst_makeTopComponentPrefix omc_Inst_makeTopComponentPrefix
DLLExport
modelica_metatype omc_Inst_instantiatePartialClass(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inIH, modelica_metatype _inProgram, modelica_metatype _inPath, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outDAElist);
#define boxptr_Inst_instantiatePartialClass omc_Inst_instantiatePartialClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instantiatePartialClass,2,0) {(void*) boxptr_Inst_instantiatePartialClass,0}};
#define boxvar_Inst_instantiatePartialClass MMC_REFSTRUCTLIT(boxvar_lit_Inst_instantiatePartialClass)
DLLExport
modelica_metatype omc_Inst_instantiateClass(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inIH, modelica_metatype _inProgram, modelica_metatype _inPath, modelica_boolean _doSCodeDep, modelica_boolean _relaxedFrontEnd, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outDAElist);
DLLExport
modelica_metatype boxptr_Inst_instantiateClass(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inIH, modelica_metatype _inProgram, modelica_metatype _inPath, modelica_metatype _doSCodeDep, modelica_metatype _relaxedFrontEnd, modelica_metatype *out_outEnv, modelica_metatype *out_outIH, modelica_metatype *out_outDAElist);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Inst_instantiateClass,2,0) {(void*) boxptr_Inst_instantiateClass,0}};
#define boxvar_Inst_instantiateClass MMC_REFSTRUCTLIT(boxvar_lit_Inst_instantiateClass)
#ifdef __cplusplus
}
#endif
#endif
