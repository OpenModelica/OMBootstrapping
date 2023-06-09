#ifndef AbsynToSCode__H
#define AbsynToSCode__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef __cplusplus
extern "C" {
#endif
extern struct record_description Absyn_ClassPart_PROTECTED__desc;
extern struct record_description Absyn_ClassPart_PUBLIC__desc;
extern struct record_description Absyn_ComponentRef_CREF__FULLYQUALIFIED__desc;
extern struct record_description Absyn_ComponentRef_CREF__IDENT__desc;
extern struct record_description Absyn_ComponentRef_CREF__QUAL__desc;
extern struct record_description Absyn_Direction_BIDIR__desc;
extern struct record_description Absyn_Direction_INPUT__desc;
extern struct record_description Absyn_Direction_OUTPUT__desc;
extern struct record_description Absyn_EqMod_NOMOD__desc;
extern struct record_description Absyn_Exp_CALL__desc;
extern struct record_description Absyn_Exp_CREF__desc;
extern struct record_description Absyn_Import_NAMED__IMPORT__desc;
extern struct record_description Absyn_Import_QUAL__IMPORT__desc;
extern struct record_description Absyn_Import_UNQUAL__IMPORT__desc;
extern struct record_description Absyn_InnerOuter_NOT__INNER__OUTER__desc;
extern struct record_description Absyn_IsField_NONFIELD__desc;
extern struct record_description Absyn_Modification_CLASSMOD__desc;
extern struct record_description Absyn_Path_IDENT__desc;
extern struct record_description Absyn_TypeSpec_TCOMPLEX__desc;
extern struct record_description Absyn_TypeSpec_TPATH__desc;
extern struct record_description ErrorTypes_Message_MESSAGE__desc;
extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;
extern struct record_description ErrorTypes_Severity_ERROR__desc;
extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;
extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;
extern struct record_description Gettext_TranslatableContent_gettext__desc;
extern struct record_description SCode_AlgorithmSection_ALGORITHM__desc;
extern struct record_description SCode_Annotation_ANNOTATION__desc;
extern struct record_description SCode_Attributes_ATTR__desc;
extern struct record_description SCode_ClassDef_CLASS__EXTENDS__desc;
extern struct record_description SCode_ClassDef_DERIVED__desc;
extern struct record_description SCode_ClassDef_ENUMERATION__desc;
extern struct record_description SCode_ClassDef_OVERLOAD__desc;
extern struct record_description SCode_ClassDef_PARTS__desc;
extern struct record_description SCode_ClassDef_PDER__desc;
extern struct record_description SCode_Comment_COMMENT__desc;
extern struct record_description SCode_ConnectorType_FLOW__desc;
extern struct record_description SCode_ConnectorType_POTENTIAL__desc;
extern struct record_description SCode_ConnectorType_STREAM__desc;
extern struct record_description SCode_ConstrainClass_CONSTRAINCLASS__desc;
extern struct record_description SCode_ConstraintSection_CONSTRAINTS__desc;
extern struct record_description SCode_Each_EACH__desc;
extern struct record_description SCode_Each_NOT__EACH__desc;
extern struct record_description SCode_Element_CLASS__desc;
extern struct record_description SCode_Element_COMPONENT__desc;
extern struct record_description SCode_Element_DEFINEUNIT__desc;
extern struct record_description SCode_Element_EXTENDS__desc;
extern struct record_description SCode_Element_IMPORT__desc;
extern struct record_description SCode_Encapsulated_NOT__ENCAPSULATED__desc;
extern struct record_description SCode_Enum_ENUM__desc;
extern struct record_description SCode_Equation_EQ__ASSERT__desc;
extern struct record_description SCode_Equation_EQ__CONNECT__desc;
extern struct record_description SCode_Equation_EQ__EQUALS__desc;
extern struct record_description SCode_Equation_EQ__FOR__desc;
extern struct record_description SCode_Equation_EQ__IF__desc;
extern struct record_description SCode_Equation_EQ__NORETCALL__desc;
extern struct record_description SCode_Equation_EQ__PDE__desc;
extern struct record_description SCode_Equation_EQ__REINIT__desc;
extern struct record_description SCode_Equation_EQ__TERMINATE__desc;
extern struct record_description SCode_Equation_EQ__WHEN__desc;
extern struct record_description SCode_ExternalDecl_EXTERNALDECL__desc;
extern struct record_description SCode_Final_FINAL__desc;
extern struct record_description SCode_Final_NOT__FINAL__desc;
extern struct record_description SCode_FunctionRestriction_FR__EXTERNAL__FUNCTION__desc;
extern struct record_description SCode_FunctionRestriction_FR__KERNEL__FUNCTION__desc;
extern struct record_description SCode_FunctionRestriction_FR__NORMAL__FUNCTION__desc;
extern struct record_description SCode_FunctionRestriction_FR__OPERATOR__FUNCTION__desc;
extern struct record_description SCode_FunctionRestriction_FR__PARALLEL__FUNCTION__desc;
extern struct record_description SCode_Mod_MOD__desc;
extern struct record_description SCode_Mod_NOMOD__desc;
extern struct record_description SCode_Mod_REDECL__desc;
extern struct record_description SCode_Parallelism_NON__PARALLEL__desc;
extern struct record_description SCode_Parallelism_PARGLOBAL__desc;
extern struct record_description SCode_Parallelism_PARLOCAL__desc;
extern struct record_description SCode_Partial_NOT__PARTIAL__desc;
extern struct record_description SCode_Prefixes_PREFIXES__desc;
extern struct record_description SCode_Redeclare_NOT__REDECLARE__desc;
extern struct record_description SCode_Replaceable_NOT__REPLACEABLE__desc;
extern struct record_description SCode_Replaceable_REPLACEABLE__desc;
extern struct record_description SCode_Restriction_R__BLOCK__desc;
extern struct record_description SCode_Restriction_R__CLASS__desc;
extern struct record_description SCode_Restriction_R__CONNECTOR__desc;
extern struct record_description SCode_Restriction_R__ENUMERATION__desc;
extern struct record_description SCode_Restriction_R__FUNCTION__desc;
extern struct record_description SCode_Restriction_R__METARECORD__desc;
extern struct record_description SCode_Restriction_R__MODEL__desc;
extern struct record_description SCode_Restriction_R__OPERATOR__desc;
extern struct record_description SCode_Restriction_R__OPTIMIZATION__desc;
extern struct record_description SCode_Restriction_R__PACKAGE__desc;
extern struct record_description SCode_Restriction_R__PREDEFINED__BOOLEAN__desc;
extern struct record_description SCode_Restriction_R__PREDEFINED__CLOCK__desc;
extern struct record_description SCode_Restriction_R__PREDEFINED__ENUMERATION__desc;
extern struct record_description SCode_Restriction_R__PREDEFINED__INTEGER__desc;
extern struct record_description SCode_Restriction_R__PREDEFINED__REAL__desc;
extern struct record_description SCode_Restriction_R__PREDEFINED__STRING__desc;
extern struct record_description SCode_Restriction_R__RECORD__desc;
extern struct record_description SCode_Restriction_R__TYPE__desc;
extern struct record_description SCode_Restriction_R__UNIONTYPE__desc;
extern struct record_description SCode_Statement_ALG__ASSERT__desc;
extern struct record_description SCode_Statement_ALG__ASSIGN__desc;
extern struct record_description SCode_Statement_ALG__BREAK__desc;
extern struct record_description SCode_Statement_ALG__CONTINUE__desc;
extern struct record_description SCode_Statement_ALG__FAILURE__desc;
extern struct record_description SCode_Statement_ALG__FOR__desc;
extern struct record_description SCode_Statement_ALG__IF__desc;
extern struct record_description SCode_Statement_ALG__NORETCALL__desc;
extern struct record_description SCode_Statement_ALG__PARFOR__desc;
extern struct record_description SCode_Statement_ALG__REINIT__desc;
extern struct record_description SCode_Statement_ALG__RETURN__desc;
extern struct record_description SCode_Statement_ALG__TERMINATE__desc;
extern struct record_description SCode_Statement_ALG__TRY__desc;
extern struct record_description SCode_Statement_ALG__WHEN__A__desc;
extern struct record_description SCode_Statement_ALG__WHILE__desc;
extern struct record_description SCode_SubMod_NAMEMOD__desc;
extern struct record_description SCode_Variability_CONST__desc;
extern struct record_description SCode_Variability_DISCRETE__desc;
extern struct record_description SCode_Variability_PARAM__desc;
extern struct record_description SCode_Variability_VAR__desc;
extern struct record_description SCode_Visibility_PROTECTED__desc;
extern struct record_description SCode_Visibility_PUBLIC__desc;
extern struct record_description SourceInfo_SOURCEINFO__desc;
#define boxptr_AbsynToSCode_checkTypeSpec omc_AbsynToSCode_checkTypeSpec
#define boxptr_AbsynToSCode_translateEach omc_AbsynToSCode_translateEach
#define boxptr_AbsynToSCode_makeTypeVarElement omc_AbsynToSCode_makeTypeVarElement
#define boxptr_AbsynToSCode_translateSub omc_AbsynToSCode_translateSub
#define boxptr_AbsynToSCode_translateArgs omc_AbsynToSCode_translateArgs
DLLExport
modelica_metatype omc_AbsynToSCode_translateMod(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _finalPrefix, modelica_metatype _eachPrefix, modelica_metatype _info);
#define boxptr_AbsynToSCode_translateMod omc_AbsynToSCode_translateMod
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateMod,2,0) {(void*) boxptr_AbsynToSCode_translateMod,0}};
#define boxvar_AbsynToSCode_translateMod MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateMod)
#define boxptr_AbsynToSCode_translateElementAddinfo omc_AbsynToSCode_translateElementAddinfo
#define boxptr_AbsynToSCode_translateIterator omc_AbsynToSCode_translateIterator
#define boxptr_AbsynToSCode_translateCommentSeparate omc_AbsynToSCode_translateCommentSeparate
#define boxptr_AbsynToSCode_translateCommentList omc_AbsynToSCode_translateCommentList
#define boxptr_AbsynToSCode_translateComment omc_AbsynToSCode_translateComment
#define boxptr_AbsynToSCode_getInfoAnnotationOrDefault2 omc_AbsynToSCode_getInfoAnnotationOrDefault2
#define boxptr_AbsynToSCode_getInfoAnnotationOrDefault omc_AbsynToSCode_getInfoAnnotationOrDefault
#define boxptr_AbsynToSCode_translateCommentWithLineInfoChanges omc_AbsynToSCode_translateCommentWithLineInfoChanges
#define boxptr_AbsynToSCode_translateVariability omc_AbsynToSCode_translateVariability
#define boxptr_AbsynToSCode_translateParallelism omc_AbsynToSCode_translateParallelism
#define boxptr_AbsynToSCode_translateConstrainClass omc_AbsynToSCode_translateConstrainClass
#define boxptr_AbsynToSCode_setHasInnerOuterDefinitionsHandler omc_AbsynToSCode_setHasInnerOuterDefinitionsHandler
#define boxptr_AbsynToSCode_translateGroupImport omc_AbsynToSCode_translateGroupImport
#define boxptr_AbsynToSCode_translateImports omc_AbsynToSCode_translateImports
#define boxptr_AbsynToSCode_translateDefineunitParam2 omc_AbsynToSCode_translateDefineunitParam2
#define boxptr_AbsynToSCode_translateDefineunitParam omc_AbsynToSCode_translateDefineunitParam
DLLExport
modelica_metatype omc_AbsynToSCode_translateElement(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inVisibility);
#define boxptr_AbsynToSCode_translateElement omc_AbsynToSCode_translateElement
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateElement,2,0) {(void*) boxptr_AbsynToSCode_translateElement,0}};
#define boxvar_AbsynToSCode_translateElement MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateElement)
DLLExport
modelica_metatype omc_AbsynToSCode_translateAnnotationOpt(threadData_t *threadData, modelica_metatype _absynAnnotation);
#define boxptr_AbsynToSCode_translateAnnotationOpt omc_AbsynToSCode_translateAnnotationOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateAnnotationOpt,2,0) {(void*) boxptr_AbsynToSCode_translateAnnotationOpt,0}};
#define boxvar_AbsynToSCode_translateAnnotationOpt MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateAnnotationOpt)
DLLExport
modelica_metatype omc_AbsynToSCode_translateAnnotation(threadData_t *threadData, modelica_metatype _inAnnotation);
#define boxptr_AbsynToSCode_translateAnnotation omc_AbsynToSCode_translateAnnotation
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateAnnotation,2,0) {(void*) boxptr_AbsynToSCode_translateAnnotation,0}};
#define boxvar_AbsynToSCode_translateAnnotation MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateAnnotation)
DLLExport
modelica_metatype omc_AbsynToSCode_translateEitemlist(threadData_t *threadData, modelica_metatype _inAbsynElementItemLst, modelica_metatype _inVisibility);
#define boxptr_AbsynToSCode_translateEitemlist omc_AbsynToSCode_translateEitemlist
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateEitemlist,2,0) {(void*) boxptr_AbsynToSCode_translateEitemlist,0}};
#define boxvar_AbsynToSCode_translateEitemlist MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateEitemlist)
#define boxptr_AbsynToSCode_translateClassdefExternaldecls omc_AbsynToSCode_translateClassdefExternaldecls
#define boxptr_AbsynToSCode_translateAlgBranches omc_AbsynToSCode_translateAlgBranches
#define boxptr_AbsynToSCode_translateClassdefAlgorithmItem omc_AbsynToSCode_translateClassdefAlgorithmItem
DLLExport
modelica_metatype omc_AbsynToSCode_translateClassdefAlgorithmitems(threadData_t *threadData, modelica_metatype _inStatements);
#define boxptr_AbsynToSCode_translateClassdefAlgorithmitems omc_AbsynToSCode_translateClassdefAlgorithmitems
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateClassdefAlgorithmitems,2,0) {(void*) boxptr_AbsynToSCode_translateClassdefAlgorithmitems,0}};
#define boxvar_AbsynToSCode_translateClassdefAlgorithmitems MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateClassdefAlgorithmitems)
#define boxptr_AbsynToSCode_translateClassdefInitialalgorithms omc_AbsynToSCode_translateClassdefInitialalgorithms
#define boxptr_AbsynToSCode_translateClassdefConstraints omc_AbsynToSCode_translateClassdefConstraints
#define boxptr_AbsynToSCode_translateClassdefAlgorithms omc_AbsynToSCode_translateClassdefAlgorithms
#define boxptr_AbsynToSCode_translateClassdefInitialequations omc_AbsynToSCode_translateClassdefInitialequations
#define boxptr_AbsynToSCode_translateClassdefEquations omc_AbsynToSCode_translateClassdefEquations
DLLExport
modelica_metatype omc_AbsynToSCode_translateClassdefElements(threadData_t *threadData, modelica_metatype _inAbsynClassPartLst);
#define boxptr_AbsynToSCode_translateClassdefElements omc_AbsynToSCode_translateClassdefElements
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateClassdefElements,2,0) {(void*) boxptr_AbsynToSCode_translateClassdefElements,0}};
#define boxvar_AbsynToSCode_translateClassdefElements MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateClassdefElements)
#define boxptr_AbsynToSCode_translateEnumlist omc_AbsynToSCode_translateEnumlist
#define boxptr_AbsynToSCode_mergeSCodeAnnotationsFromParts omc_AbsynToSCode_mergeSCodeAnnotationsFromParts
#define boxptr_AbsynToSCode_translateAlternativeExternalAnnotation omc_AbsynToSCode_translateAlternativeExternalAnnotation
#define boxptr_AbsynToSCode_translateClassdef omc_AbsynToSCode_translateClassdef
#define boxptr_AbsynToSCode_translateAttributes omc_AbsynToSCode_translateAttributes
DLLExport
modelica_metatype omc_AbsynToSCode_translateRestriction(threadData_t *threadData, modelica_metatype _inClass, modelica_metatype _inRestriction);
#define boxptr_AbsynToSCode_translateRestriction omc_AbsynToSCode_translateRestriction
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateRestriction,2,0) {(void*) boxptr_AbsynToSCode_translateRestriction,0}};
#define boxvar_AbsynToSCode_translateRestriction MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateRestriction)
DLLExport
modelica_boolean omc_AbsynToSCode_translatePurity(threadData_t *threadData, modelica_metatype _inPurity);
DLLExport
modelica_metatype boxptr_AbsynToSCode_translatePurity(threadData_t *threadData, modelica_metatype _inPurity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translatePurity,2,0) {(void*) boxptr_AbsynToSCode_translatePurity,0}};
#define boxvar_AbsynToSCode_translatePurity MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translatePurity)
DLLExport
modelica_metatype omc_AbsynToSCode_getListofQualOperatorFuncsfromOperator(threadData_t *threadData, modelica_metatype _inOperator);
#define boxptr_AbsynToSCode_getListofQualOperatorFuncsfromOperator omc_AbsynToSCode_getListofQualOperatorFuncsfromOperator
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_getListofQualOperatorFuncsfromOperator,2,0) {(void*) boxptr_AbsynToSCode_getListofQualOperatorFuncsfromOperator,0}};
#define boxvar_AbsynToSCode_getListofQualOperatorFuncsfromOperator MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_getListofQualOperatorFuncsfromOperator)
DLLExport
modelica_metatype omc_AbsynToSCode_getOperatorQualName(threadData_t *threadData, modelica_metatype _inOperatorFunction, modelica_string _operName);
#define boxptr_AbsynToSCode_getOperatorQualName omc_AbsynToSCode_getOperatorQualName
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_getOperatorQualName,2,0) {(void*) boxptr_AbsynToSCode_getOperatorQualName,0}};
#define boxvar_AbsynToSCode_getOperatorQualName MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_getOperatorQualName)
DLLExport
modelica_metatype omc_AbsynToSCode_getOperatorGivenName(threadData_t *threadData, modelica_metatype _inOperatorFunction);
#define boxptr_AbsynToSCode_getOperatorGivenName omc_AbsynToSCode_getOperatorGivenName
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_getOperatorGivenName,2,0) {(void*) boxptr_AbsynToSCode_getOperatorGivenName,0}};
#define boxvar_AbsynToSCode_getOperatorGivenName MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_getOperatorGivenName)
DLLExport
modelica_metatype omc_AbsynToSCode_translateOperatorDef(threadData_t *threadData, modelica_metatype _inClassDef, modelica_string _operatorName, modelica_metatype _info, modelica_metatype *out_cmt);
#define boxptr_AbsynToSCode_translateOperatorDef omc_AbsynToSCode_translateOperatorDef
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateOperatorDef,2,0) {(void*) boxptr_AbsynToSCode_translateOperatorDef,0}};
#define boxvar_AbsynToSCode_translateOperatorDef MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateOperatorDef)
DLLExport
modelica_metatype omc_AbsynToSCode_translateClass(threadData_t *threadData, modelica_metatype _inClass);
#define boxptr_AbsynToSCode_translateClass omc_AbsynToSCode_translateClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateClass,2,0) {(void*) boxptr_AbsynToSCode_translateClass,0}};
#define boxvar_AbsynToSCode_translateClass MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateClass)
DLLExport
modelica_metatype omc_AbsynToSCode_translateAbsyn2SCode(threadData_t *threadData, modelica_metatype _inProgram);
#define boxptr_AbsynToSCode_translateAbsyn2SCode omc_AbsynToSCode_translateAbsyn2SCode
static const MMC_DEFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateAbsyn2SCode,2,0) {(void*) boxptr_AbsynToSCode_translateAbsyn2SCode,0}};
#define boxvar_AbsynToSCode_translateAbsyn2SCode MMC_REFSTRUCTLIT(boxvar_lit_AbsynToSCode_translateAbsyn2SCode)
#ifdef __cplusplus
}
#endif
#endif
