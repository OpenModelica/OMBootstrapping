#ifndef NFComponent__H
#define NFComponent__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description IOStream_IOStreamType_LIST__desc;

extern struct record_description NFAttributes_ATTRIBUTES__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFBinding_WILD__desc;

extern struct record_description NFComponent_COMPONENT__DEF__desc;

extern struct record_description NFComponent_ENUM__LITERAL__desc;

extern struct record_description NFComponent_ITERATOR__desc;

extern struct record_description NFComponent_TYPE__ATTRIBUTE__desc;

extern struct record_description NFExpression_EMPTY__desc;

extern struct record_description NFExpression_ENUM__LITERAL__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFInstNode_InstNode_ITERATOR__NODE__desc;

extern struct record_description NFModifier_Modifier_NOMOD__desc;

extern struct record_description NFPrefixes_Replaceable_NOT__REPLACEABLE__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SCode_Comment_COMMENT__desc;

extern struct record_description SCodeDump_SCodeDumpOptions_OPTIONS__desc;


DLLDirection
modelica_integer omc_NFComponent_countConnectorVars(threadData_t *threadData, modelica_metatype _component, modelica_boolean _isRoot, modelica_integer *out_flows, modelica_integer *out_streams, modelica_boolean *out_knownSize);
DLLDirection
modelica_metatype boxptr_NFComponent_countConnectorVars(threadData_t *threadData, modelica_metatype _component, modelica_metatype _isRoot, modelica_metatype *out_flows, modelica_metatype *out_streams, modelica_metatype *out_knownSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_countConnectorVars,2,0) {(void*) boxptr_NFComponent_countConnectorVars,0}};
#define boxvar_NFComponent_countConnectorVars MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_countConnectorVars)


DLLDirection
modelica_boolean omc_NFComponent_isTypeAttribute(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isTypeAttribute(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isTypeAttribute,2,0) {(void*) boxptr_NFComponent_isTypeAttribute,0}};
#define boxvar_NFComponent_isTypeAttribute MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isTypeAttribute)


DLLDirection
modelica_boolean omc_NFComponent_isInvalid(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isInvalid(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isInvalid,2,0) {(void*) boxptr_NFComponent_isInvalid,0}};
#define boxvar_NFComponent_isInvalid MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isInvalid)


DLLDirection
modelica_boolean omc_NFComponent_isDeleted(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isDeleted(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isDeleted,2,0) {(void*) boxptr_NFComponent_isDeleted,0}};
#define boxvar_NFComponent_isDeleted MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isDeleted)


DLLDirection
modelica_string omc_NFComponent_getUnitAttribute(threadData_t *threadData, modelica_metatype _component, modelica_string _defaultUnit);
#define boxptr_NFComponent_getUnitAttribute omc_NFComponent_getUnitAttribute
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getUnitAttribute,2,0) {(void*) boxptr_NFComponent_getUnitAttribute,0}};
#define boxvar_NFComponent_getUnitAttribute MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getUnitAttribute)


DLLDirection
modelica_boolean omc_NFComponent_isFixed(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isFixed(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isFixed,2,0) {(void*) boxptr_NFComponent_isFixed,0}};
#define boxvar_NFComponent_isFixed MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isFixed)


DLLDirection
modelica_metatype omc_NFComponent_getEvaluateAnnotation(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_getEvaluateAnnotation omc_NFComponent_getEvaluateAnnotation
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getEvaluateAnnotation,2,0) {(void*) boxptr_NFComponent_getEvaluateAnnotation,0}};
#define boxvar_NFComponent_getEvaluateAnnotation MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getEvaluateAnnotation)


DLLDirection
modelica_metatype omc_NFComponent_comment(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_comment omc_NFComponent_comment
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_comment,2,0) {(void*) boxptr_NFComponent_comment,0}};
#define boxvar_NFComponent_comment MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_comment)


DLLDirection
modelica_integer omc_NFComponent_dimensionCount(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_dimensionCount(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_dimensionCount,2,0) {(void*) boxptr_NFComponent_dimensionCount,0}};
#define boxvar_NFComponent_dimensionCount MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_dimensionCount)


DLLDirection
modelica_string omc_NFComponent_toFlatString(threadData_t *threadData, modelica_string _name, modelica_metatype _component, modelica_metatype _format, modelica_string _indent);
#define boxptr_NFComponent_toFlatString omc_NFComponent_toFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_toFlatString,2,0) {(void*) boxptr_NFComponent_toFlatString,0}};
#define boxvar_NFComponent_toFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_toFlatString)


DLLDirection
modelica_metatype omc_NFComponent_typeAttrsToFlatStream(threadData_t *threadData, modelica_metatype _typeAttrs, modelica_metatype _componentType, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFComponent_typeAttrsToFlatStream omc_NFComponent_typeAttrsToFlatStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_typeAttrsToFlatStream,2,0) {(void*) boxptr_NFComponent_typeAttrsToFlatStream,0}};
#define boxvar_NFComponent_typeAttrsToFlatStream MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_typeAttrsToFlatStream)


DLLDirection
modelica_metatype omc_NFComponent_toFlatStream(threadData_t *threadData, modelica_string _name, modelica_metatype _component, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFComponent_toFlatStream omc_NFComponent_toFlatStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_toFlatStream,2,0) {(void*) boxptr_NFComponent_toFlatStream,0}};
#define boxvar_NFComponent_toFlatStream MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_toFlatStream)


DLLDirection
modelica_string omc_NFComponent_toString(threadData_t *threadData, modelica_string _name, modelica_metatype _component);
#define boxptr_NFComponent_toString omc_NFComponent_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_toString,2,0) {(void*) boxptr_NFComponent_toString,0}};
#define boxvar_NFComponent_toString MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_toString)


DLLDirection
modelica_boolean omc_NFComponent_isIdentical(threadData_t *threadData, modelica_metatype _comp1, modelica_metatype _comp2);
DLLDirection
modelica_metatype boxptr_NFComponent_isIdentical(threadData_t *threadData, modelica_metatype _comp1, modelica_metatype _comp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isIdentical,2,0) {(void*) boxptr_NFComponent_isIdentical,0}};
#define boxvar_NFComponent_isIdentical MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isIdentical)


DLLDirection
modelica_boolean omc_NFComponent_isExternalObject(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isExternalObject(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isExternalObject,2,0) {(void*) boxptr_NFComponent_isExternalObject,0}};
#define boxvar_NFComponent_isExternalObject MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isExternalObject)


DLLDirection
modelica_boolean omc_NFComponent_isExpandableConnector(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isExpandableConnector(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isExpandableConnector,2,0) {(void*) boxptr_NFComponent_isExpandableConnector,0}};
#define boxvar_NFComponent_isExpandableConnector MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isExpandableConnector)


DLLDirection
modelica_boolean omc_NFComponent_isConnector(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isConnector(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isConnector,2,0) {(void*) boxptr_NFComponent_isConnector,0}};
#define boxvar_NFComponent_isConnector MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isConnector)


DLLDirection
modelica_boolean omc_NFComponent_isFlow(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isFlow(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isFlow,2,0) {(void*) boxptr_NFComponent_isFlow,0}};
#define boxvar_NFComponent_isFlow MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isFlow)


DLLDirection
modelica_metatype omc_NFComponent_setConnectorType(threadData_t *threadData, modelica_integer _cty, modelica_metatype __omcQ_24in_5Fcomponent);
DLLDirection
modelica_metatype boxptr_NFComponent_setConnectorType(threadData_t *threadData, modelica_metatype _cty, modelica_metatype __omcQ_24in_5Fcomponent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setConnectorType,2,0) {(void*) boxptr_NFComponent_setConnectorType,0}};
#define boxvar_NFComponent_setConnectorType MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setConnectorType)


DLLDirection
modelica_integer omc_NFComponent_connectorType(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_connectorType(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_connectorType,2,0) {(void*) boxptr_NFComponent_connectorType,0}};
#define boxvar_NFComponent_connectorType MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_connectorType)


DLLDirection
modelica_boolean omc_NFComponent_isOnlyOuter(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isOnlyOuter(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isOnlyOuter,2,0) {(void*) boxptr_NFComponent_isOnlyOuter,0}};
#define boxvar_NFComponent_isOnlyOuter MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isOnlyOuter)


DLLDirection
modelica_boolean omc_NFComponent_isOuter(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isOuter(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isOuter,2,0) {(void*) boxptr_NFComponent_isOuter,0}};
#define boxvar_NFComponent_isOuter MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isOuter)


DLLDirection
modelica_boolean omc_NFComponent_isInner(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isInner(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isInner,2,0) {(void*) boxptr_NFComponent_isInner,0}};
#define boxvar_NFComponent_isInner MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isInner)


DLLDirection
modelica_boolean omc_NFComponent_isInnerOuter(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isInnerOuter(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isInnerOuter,2,0) {(void*) boxptr_NFComponent_isInnerOuter,0}};
#define boxvar_NFComponent_isInnerOuter MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isInnerOuter)


DLLDirection
modelica_integer omc_NFComponent_innerOuter(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_innerOuter(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_innerOuter,2,0) {(void*) boxptr_NFComponent_innerOuter,0}};
#define boxvar_NFComponent_innerOuter MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_innerOuter)


DLLDirection
modelica_boolean omc_NFComponent_isResizable(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isResizable(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isResizable,2,0) {(void*) boxptr_NFComponent_isResizable,0}};
#define boxvar_NFComponent_isResizable MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isResizable)


DLLDirection
modelica_metatype omc_NFComponent_setFinal(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent, modelica_boolean _isFinal);
DLLDirection
modelica_metatype boxptr_NFComponent_setFinal(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent, modelica_metatype _isFinal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setFinal,2,0) {(void*) boxptr_NFComponent_setFinal,0}};
#define boxvar_NFComponent_setFinal MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setFinal)


DLLDirection
modelica_boolean omc_NFComponent_isFinal(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isFinal(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isFinal,2,0) {(void*) boxptr_NFComponent_isFinal,0}};
#define boxvar_NFComponent_isFinal MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isFinal)


DLLDirection
modelica_boolean omc_NFComponent_isRedeclare(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isRedeclare(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isRedeclare,2,0) {(void*) boxptr_NFComponent_isRedeclare,0}};
#define boxvar_NFComponent_isRedeclare MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isRedeclare)


DLLDirection
modelica_boolean omc_NFComponent_isVar(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isVar(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isVar,2,0) {(void*) boxptr_NFComponent_isVar,0}};
#define boxvar_NFComponent_isVar MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isVar)


DLLDirection
modelica_boolean omc_NFComponent_isStructuralParameter(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isStructuralParameter(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isStructuralParameter,2,0) {(void*) boxptr_NFComponent_isStructuralParameter,0}};
#define boxvar_NFComponent_isStructuralParameter MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isStructuralParameter)


DLLDirection
modelica_boolean omc_NFComponent_isParameter(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isParameter(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isParameter,2,0) {(void*) boxptr_NFComponent_isParameter,0}};
#define boxvar_NFComponent_isParameter MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isParameter)


DLLDirection
modelica_boolean omc_NFComponent_isConst(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isConst(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isConst,2,0) {(void*) boxptr_NFComponent_isConst,0}};
#define boxvar_NFComponent_isConst MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isConst)


DLLDirection
modelica_metatype omc_NFComponent_setVariability(threadData_t *threadData, modelica_integer _variability, modelica_metatype __omcQ_24in_5Fcomponent);
DLLDirection
modelica_metatype boxptr_NFComponent_setVariability(threadData_t *threadData, modelica_metatype _variability, modelica_metatype __omcQ_24in_5Fcomponent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setVariability,2,0) {(void*) boxptr_NFComponent_setVariability,0}};
#define boxvar_NFComponent_setVariability MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setVariability)


DLLDirection
modelica_integer omc_NFComponent_variability(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_variability(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_variability,2,0) {(void*) boxptr_NFComponent_variability,0}};
#define boxvar_NFComponent_variability MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_variability)


DLLDirection
modelica_integer omc_NFComponent_parallelism(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_parallelism(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_parallelism,2,0) {(void*) boxptr_NFComponent_parallelism,0}};
#define boxvar_NFComponent_parallelism MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_parallelism)


DLLDirection
modelica_boolean omc_NFComponent_isOutput(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isOutput(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isOutput,2,0) {(void*) boxptr_NFComponent_isOutput,0}};
#define boxvar_NFComponent_isOutput MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isOutput)


DLLDirection
modelica_metatype omc_NFComponent_setDirection(threadData_t *threadData, modelica_integer _direction, modelica_metatype __omcQ_24in_5Fcomponent);
DLLDirection
modelica_metatype boxptr_NFComponent_setDirection(threadData_t *threadData, modelica_metatype _direction, modelica_metatype __omcQ_24in_5Fcomponent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setDirection,2,0) {(void*) boxptr_NFComponent_setDirection,0}};
#define boxvar_NFComponent_setDirection MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setDirection)


DLLDirection
modelica_boolean omc_NFComponent_isInput(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isInput(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isInput,2,0) {(void*) boxptr_NFComponent_isInput,0}};
#define boxvar_NFComponent_isInput MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isInput)


DLLDirection
modelica_integer omc_NFComponent_direction(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_direction(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_direction,2,0) {(void*) boxptr_NFComponent_direction,0}};
#define boxvar_NFComponent_direction MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_direction)


DLLDirection
modelica_boolean omc_NFComponent_hasCondition(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_hasCondition(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_hasCondition,2,0) {(void*) boxptr_NFComponent_hasCondition,0}};
#define boxvar_NFComponent_hasCondition MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_hasCondition)


DLLDirection
modelica_metatype omc_NFComponent_getCondition(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_getCondition omc_NFComponent_getCondition
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getCondition,2,0) {(void*) boxptr_NFComponent_getCondition,0}};
#define boxvar_NFComponent_getCondition MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getCondition)


DLLDirection
modelica_boolean omc_NFComponent_hasBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _parent);
DLLDirection
modelica_metatype boxptr_NFComponent_hasBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _parent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_hasBinding,2,0) {(void*) boxptr_NFComponent_hasBinding,0}};
#define boxvar_NFComponent_hasBinding MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_hasBinding)


DLLDirection
modelica_metatype omc_NFComponent_setBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype __omcQ_24in_5Fcomponent);
#define boxptr_NFComponent_setBinding omc_NFComponent_setBinding
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setBinding,2,0) {(void*) boxptr_NFComponent_setBinding,0}};
#define boxvar_NFComponent_setBinding MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setBinding)


DLLDirection
modelica_metatype omc_NFComponent_getTypeAttributeBinding(threadData_t *threadData, modelica_metatype _component, modelica_string _attrName);
#define boxptr_NFComponent_getTypeAttributeBinding omc_NFComponent_getTypeAttributeBinding
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getTypeAttributeBinding,2,0) {(void*) boxptr_NFComponent_getTypeAttributeBinding,0}};
#define boxvar_NFComponent_getTypeAttributeBinding MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getTypeAttributeBinding)


DLLDirection
modelica_metatype omc_NFComponent_getImplicitBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _scope);
#define boxptr_NFComponent_getImplicitBinding omc_NFComponent_getImplicitBinding
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getImplicitBinding,2,0) {(void*) boxptr_NFComponent_getImplicitBinding,0}};
#define boxvar_NFComponent_getImplicitBinding MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getImplicitBinding)


DLLDirection
modelica_metatype omc_NFComponent_getBinding(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_getBinding omc_NFComponent_getBinding
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getBinding,2,0) {(void*) boxptr_NFComponent_getBinding,0}};
#define boxvar_NFComponent_getBinding MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getBinding)


DLLDirection
modelica_metatype omc_NFComponent_setComment(threadData_t *threadData, modelica_metatype _comment, modelica_metatype __omcQ_24in_5Fcomponent);
#define boxptr_NFComponent_setComment omc_NFComponent_setComment
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setComment,2,0) {(void*) boxptr_NFComponent_setComment,0}};
#define boxvar_NFComponent_setComment MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setComment)


DLLDirection
modelica_metatype omc_NFComponent_setAttributes(threadData_t *threadData, modelica_metatype _attr, modelica_metatype __omcQ_24in_5Fcomponent);
#define boxptr_NFComponent_setAttributes omc_NFComponent_setAttributes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setAttributes,2,0) {(void*) boxptr_NFComponent_setAttributes,0}};
#define boxvar_NFComponent_setAttributes MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setAttributes)


DLLDirection
modelica_metatype omc_NFComponent_getAttributes(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_getAttributes omc_NFComponent_getAttributes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getAttributes,2,0) {(void*) boxptr_NFComponent_getAttributes,0}};
#define boxvar_NFComponent_getAttributes MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getAttributes)


DLLDirection
modelica_metatype omc_NFComponent_unliftType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent);
#define boxptr_NFComponent_unliftType omc_NFComponent_unliftType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_unliftType,2,0) {(void*) boxptr_NFComponent_unliftType,0}};
#define boxvar_NFComponent_unliftType MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_unliftType)


DLLDirection
modelica_boolean omc_NFComponent_isTyped(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isTyped(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isTyped,2,0) {(void*) boxptr_NFComponent_isTyped,0}};
#define boxvar_NFComponent_isTyped MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isTyped)


DLLDirection
modelica_metatype omc_NFComponent_setType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype __omcQ_24in_5Fcomponent);
#define boxptr_NFComponent_setType omc_NFComponent_setType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setType,2,0) {(void*) boxptr_NFComponent_setType,0}};
#define boxvar_NFComponent_setType MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setType)


DLLDirection
modelica_metatype omc_NFComponent_getType(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_getType omc_NFComponent_getType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getType,2,0) {(void*) boxptr_NFComponent_getType,0}};
#define boxvar_NFComponent_getType MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getType)


DLLDirection
modelica_metatype omc_NFComponent_mergeModifier(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fcomponent);
#define boxptr_NFComponent_mergeModifier omc_NFComponent_mergeModifier
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_mergeModifier,2,0) {(void*) boxptr_NFComponent_mergeModifier,0}};
#define boxvar_NFComponent_mergeModifier MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_mergeModifier)


DLLDirection
modelica_metatype omc_NFComponent_setModifier(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fcomponent);
#define boxptr_NFComponent_setModifier omc_NFComponent_setModifier
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setModifier,2,0) {(void*) boxptr_NFComponent_setModifier,0}};
#define boxvar_NFComponent_setModifier MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setModifier)


DLLDirection
modelica_metatype omc_NFComponent_getModifier(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_getModifier omc_NFComponent_getModifier
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_getModifier,2,0) {(void*) boxptr_NFComponent_getModifier,0}};
#define boxvar_NFComponent_getModifier MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_getModifier)


DLLDirection
modelica_metatype omc_NFComponent_setClassInstance(threadData_t *threadData, modelica_metatype _classInst, modelica_metatype __omcQ_24in_5Fcomponent);
#define boxptr_NFComponent_setClassInstance omc_NFComponent_setClassInstance
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_setClassInstance,2,0) {(void*) boxptr_NFComponent_setClassInstance,0}};
#define boxvar_NFComponent_setClassInstance MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_setClassInstance)


DLLDirection
modelica_metatype omc_NFComponent_classInstance(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_classInstance omc_NFComponent_classInstance
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_classInstance,2,0) {(void*) boxptr_NFComponent_classInstance,0}};
#define boxvar_NFComponent_classInstance MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_classInstance)


DLLDirection
modelica_metatype omc_NFComponent_info(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_info omc_NFComponent_info
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_info,2,0) {(void*) boxptr_NFComponent_info,0}};
#define boxvar_NFComponent_info MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_info)


DLLDirection
modelica_boolean omc_NFComponent_isDefinition(threadData_t *threadData, modelica_metatype _component);
DLLDirection
modelica_metatype boxptr_NFComponent_isDefinition(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_isDefinition,2,0) {(void*) boxptr_NFComponent_isDefinition,0}};
#define boxvar_NFComponent_isDefinition MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_isDefinition)


DLLDirection
modelica_metatype omc_NFComponent_definition(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFComponent_definition omc_NFComponent_definition
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_definition,2,0) {(void*) boxptr_NFComponent_definition,0}};
#define boxvar_NFComponent_definition MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_definition)


DLLDirection
modelica_metatype omc_NFComponent_newIterator(threadData_t *threadData, modelica_metatype _iterType, modelica_metatype _info);
#define boxptr_NFComponent_newIterator omc_NFComponent_newIterator
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_newIterator,2,0) {(void*) boxptr_NFComponent_newIterator,0}};
#define boxvar_NFComponent_newIterator MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_newIterator)


DLLDirection
modelica_metatype omc_NFComponent_newEnum(threadData_t *threadData, modelica_metatype _enumType, modelica_string _literalName, modelica_metatype _comment, modelica_integer _literalIndex);
DLLDirection
modelica_metatype boxptr_NFComponent_newEnum(threadData_t *threadData, modelica_metatype _enumType, modelica_metatype _literalName, modelica_metatype _comment, modelica_metatype _literalIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_newEnum,2,0) {(void*) boxptr_NFComponent_newEnum,0}};
#define boxvar_NFComponent_newEnum MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_newEnum)


DLLDirection
modelica_metatype omc_NFComponent_new(threadData_t *threadData, modelica_metatype _definition);
#define boxptr_NFComponent_new omc_NFComponent_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_new,2,0) {(void*) boxptr_NFComponent_new,0}};
#define boxvar_NFComponent_new MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_new)

#ifdef __cplusplus
}
#endif
#endif
