#ifndef NFClass__H
#define NFClass__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_InnerOuter_NOT__INNER__OUTER__desc;

extern struct record_description BaseModelica_OutputFormat_OUTPUT__FORMAT__desc;

extern struct record_description IOStream_IOStreamType_LIST__desc;

extern struct record_description NFAttributes_ATTRIBUTES__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFCall_UNTYPED__CALL__desc;

extern struct record_description NFClass_EXPANDED__CLASS__desc;

extern struct record_description NFClass_INSTANCED__CLASS__desc;

extern struct record_description NFClass_PARTIAL__BUILTIN__desc;

extern struct record_description NFClass_PARTIAL__CLASS__desc;

extern struct record_description NFClass_Prefixes_PREFIXES__desc;

extern struct record_description NFClassTree_ClassTree_EMPTY__TREE__desc;

extern struct record_description NFExpression_CALL__desc;

extern struct record_description NFModifier_Modifier_NOMOD__desc;

extern struct record_description NFPrefixes_Replaceable_NOT__REPLACEABLE__desc;

extern struct record_description NFRestriction_ENUMERATION__desc;

extern struct record_description NFRestriction_RECORD__CONSTRUCTOR__desc;

extern struct record_description NFRestriction_UNKNOWN__desc;

extern struct record_description NFSections_EMPTY__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SCode_Encapsulated_NOT__ENCAPSULATED__desc;

extern struct record_description SCode_Final_NOT__FINAL__desc;

extern struct record_description SCode_Partial_NOT__PARTIAL__desc;

extern struct record_description SCode_Replaceable_NOT__REPLACEABLE__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_string omc_NFClass_toFlatString(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _clsNode, modelica_metatype _format, modelica_string _indent);
#define boxptr_NFClass_toFlatString omc_NFClass_toFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_toFlatString,2,0) {(void*) boxptr_NFClass_toFlatString,0}};
#define boxvar_NFClass_toFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFClass_toFlatString)


DLLDirection
modelica_metatype omc_NFClass_toFlatStream(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _clsNode, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFClass_toFlatStream omc_NFClass_toFlatStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_toFlatStream,2,0) {(void*) boxptr_NFClass_toFlatStream,0}};
#define boxvar_NFClass_toFlatStream MMC_REFSTRUCTLIT(boxvar_lit_NFClass_toFlatStream)


DLLDirection
modelica_metatype omc_NFClass_makeRecordExp(threadData_t *threadData, modelica_metatype _clsNode, modelica_metatype _scope, modelica_boolean _typed);
DLLDirection
modelica_metatype boxptr_NFClass_makeRecordExp(threadData_t *threadData, modelica_metatype _clsNode, modelica_metatype _scope, modelica_metatype _typed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_makeRecordExp,2,0) {(void*) boxptr_NFClass_makeRecordExp,0}};
#define boxvar_NFClass_makeRecordExp MMC_REFSTRUCTLIT(boxvar_lit_NFClass_makeRecordExp)


DLLDirection
modelica_boolean omc_NFClass_hasOperator(threadData_t *threadData, modelica_string _name, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_hasOperator(threadData_t *threadData, modelica_metatype _name, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_hasOperator,2,0) {(void*) boxptr_NFClass_hasOperator,0}};
#define boxvar_NFClass_hasOperator MMC_REFSTRUCTLIT(boxvar_lit_NFClass_hasOperator)


DLLDirection
modelica_metatype omc_NFClass_constrainingClassPath(threadData_t *threadData, modelica_metatype _clsNode);
#define boxptr_NFClass_constrainingClassPath omc_NFClass_constrainingClassPath
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_constrainingClassPath,2,0) {(void*) boxptr_NFClass_constrainingClassPath,0}};
#define boxvar_NFClass_constrainingClassPath MMC_REFSTRUCTLIT(boxvar_lit_NFClass_constrainingClassPath)


DLLDirection
modelica_metatype omc_NFClass_getDerivedComments(threadData_t *threadData, modelica_metatype _cls, modelica_metatype __omcQ_24in_5Fcmts);
#define boxptr_NFClass_getDerivedComments omc_NFClass_getDerivedComments
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getDerivedComments,2,0) {(void*) boxptr_NFClass_getDerivedComments,0}};
#define boxvar_NFClass_getDerivedComments MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getDerivedComments)


DLLDirection
modelica_metatype omc_NFClass_lastBaseClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode);
#define boxptr_NFClass_lastBaseClass omc_NFClass_lastBaseClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_lastBaseClass,2,0) {(void*) boxptr_NFClass_lastBaseClass,0}};
#define boxvar_NFClass_lastBaseClass MMC_REFSTRUCTLIT(boxvar_lit_NFClass_lastBaseClass)


DLLDirection
modelica_boolean omc_NFClass_isPartial(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isPartial(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isPartial,2,0) {(void*) boxptr_NFClass_isPartial,0}};
#define boxvar_NFClass_isPartial MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isPartial)


DLLDirection
modelica_boolean omc_NFClass_isEncapsulated(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isEncapsulated(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isEncapsulated,2,0) {(void*) boxptr_NFClass_isEncapsulated,0}};
#define boxvar_NFClass_isEncapsulated MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isEncapsulated)


DLLDirection
modelica_metatype omc_NFClass_setPrefixes(threadData_t *threadData, modelica_metatype _prefs, modelica_metatype __omcQ_24in_5Fcls);
#define boxptr_NFClass_setPrefixes omc_NFClass_setPrefixes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_setPrefixes,2,0) {(void*) boxptr_NFClass_setPrefixes,0}};
#define boxvar_NFClass_setPrefixes MMC_REFSTRUCTLIT(boxvar_lit_NFClass_setPrefixes)


DLLDirection
modelica_metatype omc_NFClass_getPrefixes(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_getPrefixes omc_NFClass_getPrefixes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getPrefixes,2,0) {(void*) boxptr_NFClass_getPrefixes,0}};
#define boxvar_NFClass_getPrefixes MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getPrefixes)


DLLDirection
modelica_boolean omc_NFClass_isOverdetermined(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isOverdetermined(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isOverdetermined,2,0) {(void*) boxptr_NFClass_isOverdetermined,0}};
#define boxvar_NFClass_isOverdetermined MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isOverdetermined)


DLLDirection
modelica_boolean omc_NFClass_isExternalFunction(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isExternalFunction(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isExternalFunction,2,0) {(void*) boxptr_NFClass_isExternalFunction,0}};
#define boxvar_NFClass_isExternalFunction MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isExternalFunction)


DLLDirection
modelica_boolean omc_NFClass_isEnumeration(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isEnumeration(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isEnumeration,2,0) {(void*) boxptr_NFClass_isEnumeration,0}};
#define boxvar_NFClass_isEnumeration MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isEnumeration)


DLLDirection
modelica_boolean omc_NFClass_isFunction(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isFunction(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isFunction,2,0) {(void*) boxptr_NFClass_isFunction,0}};
#define boxvar_NFClass_isFunction MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isFunction)


DLLDirection
modelica_boolean omc_NFClass_isExternalObject(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isExternalObject(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isExternalObject,2,0) {(void*) boxptr_NFClass_isExternalObject,0}};
#define boxvar_NFClass_isExternalObject MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isExternalObject)


DLLDirection
modelica_boolean omc_NFClass_isExpandableConnectorClass(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isExpandableConnectorClass(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isExpandableConnectorClass,2,0) {(void*) boxptr_NFClass_isExpandableConnectorClass,0}};
#define boxvar_NFClass_isExpandableConnectorClass MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isExpandableConnectorClass)


DLLDirection
modelica_boolean omc_NFClass_isNonexpandableConnectorClass(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isNonexpandableConnectorClass(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isNonexpandableConnectorClass,2,0) {(void*) boxptr_NFClass_isNonexpandableConnectorClass,0}};
#define boxvar_NFClass_isNonexpandableConnectorClass MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isNonexpandableConnectorClass)


DLLDirection
modelica_boolean omc_NFClass_isConnectorClass(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isConnectorClass(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isConnectorClass,2,0) {(void*) boxptr_NFClass_isConnectorClass,0}};
#define boxvar_NFClass_isConnectorClass MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isConnectorClass)


DLLDirection
modelica_metatype omc_NFClass_setRestriction(threadData_t *threadData, modelica_metatype _res, modelica_metatype __omcQ_24in_5Fcls);
#define boxptr_NFClass_setRestriction omc_NFClass_setRestriction
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_setRestriction,2,0) {(void*) boxptr_NFClass_setRestriction,0}};
#define boxvar_NFClass_setRestriction MMC_REFSTRUCTLIT(boxvar_lit_NFClass_setRestriction)


DLLDirection
modelica_metatype omc_NFClass_restriction(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_restriction omc_NFClass_restriction
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_restriction,2,0) {(void*) boxptr_NFClass_restriction,0}};
#define boxvar_NFClass_restriction MMC_REFSTRUCTLIT(boxvar_lit_NFClass_restriction)


DLLDirection
modelica_metatype omc_NFClass_setType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype __omcQ_24in_5Fcls);
#define boxptr_NFClass_setType omc_NFClass_setType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_setType,2,0) {(void*) boxptr_NFClass_setType,0}};
#define boxvar_NFClass_setType MMC_REFSTRUCTLIT(boxvar_lit_NFClass_setType)


DLLDirection
modelica_metatype omc_NFClass_getType(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _clsNode);
#define boxptr_NFClass_getType omc_NFClass_getType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getType,2,0) {(void*) boxptr_NFClass_getType,0}};
#define boxvar_NFClass_getType MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getType)


DLLDirection
modelica_metatype omc_NFClass_getTypeAttributes(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_getTypeAttributes omc_NFClass_getTypeAttributes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getTypeAttributes,2,0) {(void*) boxptr_NFClass_getTypeAttributes,0}};
#define boxvar_NFClass_getTypeAttributes MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getTypeAttributes)


DLLDirection
modelica_metatype omc_NFClass_getAttributes(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_getAttributes omc_NFClass_getAttributes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getAttributes,2,0) {(void*) boxptr_NFClass_getAttributes,0}};
#define boxvar_NFClass_getAttributes MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getAttributes)


DLLDirection
modelica_integer omc_NFClass_dimensionCount(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_dimensionCount(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_dimensionCount,2,0) {(void*) boxptr_NFClass_dimensionCount,0}};
#define boxvar_NFClass_dimensionCount MMC_REFSTRUCTLIT(boxvar_lit_NFClass_dimensionCount)


DLLDirection
modelica_metatype omc_NFClass_getDimensions(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_getDimensions omc_NFClass_getDimensions
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getDimensions,2,0) {(void*) boxptr_NFClass_getDimensions,0}};
#define boxvar_NFClass_getDimensions MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getDimensions)


DLLDirection
modelica_boolean omc_NFClass_hasDimensions(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_hasDimensions(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_hasDimensions,2,0) {(void*) boxptr_NFClass_hasDimensions,0}};
#define boxvar_NFClass_hasDimensions MMC_REFSTRUCTLIT(boxvar_lit_NFClass_hasDimensions)


DLLDirection
modelica_boolean omc_NFClass_isIdentical(threadData_t *threadData, modelica_metatype _cls1, modelica_metatype _cls2);
DLLDirection
modelica_metatype boxptr_NFClass_isIdentical(threadData_t *threadData, modelica_metatype _cls1, modelica_metatype _cls2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isIdentical,2,0) {(void*) boxptr_NFClass_isIdentical,0}};
#define boxvar_NFClass_isIdentical MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isIdentical)


DLLDirection
modelica_metatype omc_NFClass_mergeModifier(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fcls);
#define boxptr_NFClass_mergeModifier omc_NFClass_mergeModifier
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_mergeModifier,2,0) {(void*) boxptr_NFClass_mergeModifier,0}};
#define boxvar_NFClass_mergeModifier MMC_REFSTRUCTLIT(boxvar_lit_NFClass_mergeModifier)


DLLDirection
modelica_metatype omc_NFClass_setModifier(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fcls);
#define boxptr_NFClass_setModifier omc_NFClass_setModifier
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_setModifier,2,0) {(void*) boxptr_NFClass_setModifier,0}};
#define boxvar_NFClass_setModifier MMC_REFSTRUCTLIT(boxvar_lit_NFClass_setModifier)


DLLDirection
modelica_metatype omc_NFClass_getCCModifier(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_getCCModifier omc_NFClass_getCCModifier
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getCCModifier,2,0) {(void*) boxptr_NFClass_getCCModifier,0}};
#define boxvar_NFClass_getCCModifier MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getCCModifier)


DLLDirection
modelica_metatype omc_NFClass_getModifier(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_getModifier omc_NFClass_getModifier
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getModifier,2,0) {(void*) boxptr_NFClass_getModifier,0}};
#define boxvar_NFClass_getModifier MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getModifier)


DLLDirection
modelica_metatype omc_NFClass_classTreeApply(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_fnptr _func);
#define boxptr_NFClass_classTreeApply omc_NFClass_classTreeApply
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_classTreeApply,2,0) {(void*) boxptr_NFClass_classTreeApply,0}};
#define boxvar_NFClass_classTreeApply MMC_REFSTRUCTLIT(boxvar_lit_NFClass_classTreeApply)


DLLDirection
modelica_metatype omc_NFClass_setClassTree(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Fcls);
#define boxptr_NFClass_setClassTree omc_NFClass_setClassTree
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_setClassTree,2,0) {(void*) boxptr_NFClass_setClassTree,0}};
#define boxvar_NFClass_setClassTree MMC_REFSTRUCTLIT(boxvar_lit_NFClass_setClassTree)


DLLDirection
modelica_metatype omc_NFClass_classTree(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_classTree omc_NFClass_classTree
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_classTree,2,0) {(void*) boxptr_NFClass_classTree,0}};
#define boxvar_NFClass_classTree MMC_REFSTRUCTLIT(boxvar_lit_NFClass_classTree)


DLLDirection
modelica_boolean omc_NFClass_isBuiltin(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isBuiltin(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isBuiltin,2,0) {(void*) boxptr_NFClass_isBuiltin,0}};
#define boxvar_NFClass_isBuiltin MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isBuiltin)


DLLDirection
modelica_boolean omc_NFClass_isOnlyBuiltin(threadData_t *threadData, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_isOnlyBuiltin(threadData_t *threadData, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_isOnlyBuiltin,2,0) {(void*) boxptr_NFClass_isOnlyBuiltin,0}};
#define boxvar_NFClass_isOnlyBuiltin MMC_REFSTRUCTLIT(boxvar_lit_NFClass_isOnlyBuiltin)


DLLDirection
modelica_metatype omc_NFClass_lookupAttributeValue(threadData_t *threadData, modelica_string _name, modelica_metatype _cls);
#define boxptr_NFClass_lookupAttributeValue omc_NFClass_lookupAttributeValue
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_lookupAttributeValue,2,0) {(void*) boxptr_NFClass_lookupAttributeValue,0}};
#define boxvar_NFClass_lookupAttributeValue MMC_REFSTRUCTLIT(boxvar_lit_NFClass_lookupAttributeValue)


DLLDirection
modelica_metatype omc_NFClass_lookupAttributeBinding(threadData_t *threadData, modelica_string _name, modelica_metatype _cls);
#define boxptr_NFClass_lookupAttributeBinding omc_NFClass_lookupAttributeBinding
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_lookupAttributeBinding,2,0) {(void*) boxptr_NFClass_lookupAttributeBinding,0}};
#define boxvar_NFClass_lookupAttributeBinding MMC_REFSTRUCTLIT(boxvar_lit_NFClass_lookupAttributeBinding)


DLLDirection
modelica_metatype omc_NFClass_getComponents(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_getComponents omc_NFClass_getComponents
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getComponents,2,0) {(void*) boxptr_NFClass_getComponents,0}};
#define boxvar_NFClass_getComponents MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getComponents)


DLLDirection
modelica_metatype omc_NFClass_nthComponent(threadData_t *threadData, modelica_integer _index, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_nthComponent(threadData_t *threadData, modelica_metatype _index, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_nthComponent,2,0) {(void*) boxptr_NFClass_nthComponent,0}};
#define boxvar_NFClass_nthComponent MMC_REFSTRUCTLIT(boxvar_lit_NFClass_nthComponent)


DLLDirection
modelica_integer omc_NFClass_lookupComponentIndex(threadData_t *threadData, modelica_string _name, modelica_metatype _cls);
DLLDirection
modelica_metatype boxptr_NFClass_lookupComponentIndex(threadData_t *threadData, modelica_metatype _name, modelica_metatype _cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_lookupComponentIndex,2,0) {(void*) boxptr_NFClass_lookupComponentIndex,0}};
#define boxvar_NFClass_lookupComponentIndex MMC_REFSTRUCTLIT(boxvar_lit_NFClass_lookupComponentIndex)


DLLDirection
modelica_metatype omc_NFClass_tryLookupElement(threadData_t *threadData, modelica_string _name, modelica_metatype _cls, modelica_boolean *out_isImport);
DLLDirection
modelica_metatype boxptr_NFClass_tryLookupElement(threadData_t *threadData, modelica_metatype _name, modelica_metatype _cls, modelica_metatype *out_isImport);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_tryLookupElement,2,0) {(void*) boxptr_NFClass_tryLookupElement,0}};
#define boxvar_NFClass_tryLookupElement MMC_REFSTRUCTLIT(boxvar_lit_NFClass_tryLookupElement)


DLLDirection
modelica_metatype omc_NFClass_lookupElement(threadData_t *threadData, modelica_string _name, modelica_metatype _cls, modelica_boolean *out_isImport);
DLLDirection
modelica_metatype boxptr_NFClass_lookupElement(threadData_t *threadData, modelica_metatype _name, modelica_metatype _cls, modelica_metatype *out_isImport);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_lookupElement,2,0) {(void*) boxptr_NFClass_lookupElement,0}};
#define boxvar_NFClass_lookupElement MMC_REFSTRUCTLIT(boxvar_lit_NFClass_lookupElement)


DLLDirection
modelica_metatype omc_NFClass_setSections(threadData_t *threadData, modelica_metatype _sections, modelica_metatype __omcQ_24in_5Fcls);
#define boxptr_NFClass_setSections omc_NFClass_setSections
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_setSections,2,0) {(void*) boxptr_NFClass_setSections,0}};
#define boxvar_NFClass_setSections MMC_REFSTRUCTLIT(boxvar_lit_NFClass_setSections)


DLLDirection
modelica_metatype omc_NFClass_getSections(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFClass_getSections omc_NFClass_getSections
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_getSections,2,0) {(void*) boxptr_NFClass_getSections,0}};
#define boxvar_NFClass_getSections MMC_REFSTRUCTLIT(boxvar_lit_NFClass_getSections)


DLLDirection
modelica_metatype omc_NFClass_initExpandedClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls);
#define boxptr_NFClass_initExpandedClass omc_NFClass_initExpandedClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_initExpandedClass,2,0) {(void*) boxptr_NFClass_initExpandedClass,0}};
#define boxvar_NFClass_initExpandedClass MMC_REFSTRUCTLIT(boxvar_lit_NFClass_initExpandedClass)


DLLDirection
modelica_metatype omc_NFClass_makeRecordConstructor(threadData_t *threadData, modelica_metatype _fields, modelica_metatype _out);
#define boxptr_NFClass_makeRecordConstructor omc_NFClass_makeRecordConstructor
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_makeRecordConstructor,2,0) {(void*) boxptr_NFClass_makeRecordConstructor,0}};
#define boxvar_NFClass_makeRecordConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFClass_makeRecordConstructor)


DLLDirection
modelica_metatype omc_NFClass_fromEnumeration(threadData_t *threadData, modelica_metatype _literals, modelica_metatype _enumType, modelica_metatype _prefixes, modelica_metatype _enumClass);
#define boxptr_NFClass_fromEnumeration omc_NFClass_fromEnumeration
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_fromEnumeration,2,0) {(void*) boxptr_NFClass_fromEnumeration,0}};
#define boxvar_NFClass_fromEnumeration MMC_REFSTRUCTLIT(boxvar_lit_NFClass_fromEnumeration)


DLLDirection
modelica_metatype omc_NFClass_initImports(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _parent);
#define boxptr_NFClass_initImports omc_NFClass_initImports
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_initImports,2,0) {(void*) boxptr_NFClass_initImports,0}};
#define boxvar_NFClass_initImports MMC_REFSTRUCTLIT(boxvar_lit_NFClass_initImports)


DLLDirection
modelica_metatype omc_NFClass_fromSCode(threadData_t *threadData, modelica_metatype _elements, modelica_boolean _isClassExtends, modelica_metatype _scope, modelica_metatype _prefixes);
DLLDirection
modelica_metatype boxptr_NFClass_fromSCode(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _isClassExtends, modelica_metatype _scope, modelica_metatype _prefixes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_fromSCode,2,0) {(void*) boxptr_NFClass_fromSCode,0}};
#define boxvar_NFClass_fromSCode MMC_REFSTRUCTLIT(boxvar_lit_NFClass_fromSCode)


DLLDirection
modelica_boolean omc_NFClass_Prefixes_isEncapsulated(threadData_t *threadData, modelica_metatype _prefs);
DLLDirection
modelica_metatype boxptr_NFClass_Prefixes_isEncapsulated(threadData_t *threadData, modelica_metatype _prefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_Prefixes_isEncapsulated,2,0) {(void*) boxptr_NFClass_Prefixes_isEncapsulated,0}};
#define boxvar_NFClass_Prefixes_isEncapsulated MMC_REFSTRUCTLIT(boxvar_lit_NFClass_Prefixes_isEncapsulated)


DLLDirection
modelica_boolean omc_NFClass_Prefixes_isPartial(threadData_t *threadData, modelica_metatype _prefs);
DLLDirection
modelica_metatype boxptr_NFClass_Prefixes_isPartial(threadData_t *threadData, modelica_metatype _prefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_Prefixes_isPartial,2,0) {(void*) boxptr_NFClass_Prefixes_isPartial,0}};
#define boxvar_NFClass_Prefixes_isPartial MMC_REFSTRUCTLIT(boxvar_lit_NFClass_Prefixes_isPartial)


DLLDirection
modelica_boolean omc_NFClass_Prefixes_isEqual(threadData_t *threadData, modelica_metatype _prefs1, modelica_metatype _prefs2);
DLLDirection
modelica_metatype boxptr_NFClass_Prefixes_isEqual(threadData_t *threadData, modelica_metatype _prefs1, modelica_metatype _prefs2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClass_Prefixes_isEqual,2,0) {(void*) boxptr_NFClass_Prefixes_isEqual,0}};
#define boxvar_NFClass_Prefixes_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFClass_Prefixes_isEqual)

#ifdef __cplusplus
}
#endif
#endif
