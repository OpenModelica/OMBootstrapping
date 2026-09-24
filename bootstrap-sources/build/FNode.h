#ifndef FNode__H
#define FNode__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Import_NAMED__IMPORT__desc;

extern struct record_description DAE_Attributes_ATTR__desc;

extern struct record_description DAE_Binding_UNBOUND__desc;

extern struct record_description DAE_Mod_NOMOD__desc;

extern struct record_description DAE_Type_T__UNKNOWN__desc;

extern struct record_description DAE_Var_TYPES__VAR__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description FCore_Data_CO__desc;

extern struct record_description FCore_Data_DU__desc;

extern struct record_description FCore_Data_FS__desc;

extern struct record_description FCore_Data_FT__desc;

extern struct record_description FCore_Data_IM__desc;

extern struct record_description FCore_Data_REF__desc;

extern struct record_description FCore_ImportTable_IMPORT__TABLE__desc;

extern struct record_description FCore_Node_N__desc;

extern struct record_description FCore_Status_VAR__UNTYPED__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;


DLLModelDirection
modelica_boolean omc_FNode_scopePathEq(threadData_t *threadData, modelica_metatype _scope1, modelica_metatype _scope2);
DLLModelDirection
modelica_metatype boxptr_FNode_scopePathEq(threadData_t *threadData, modelica_metatype _scope1, modelica_metatype _scope2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_scopePathEq,2,0) {(void*) boxptr_FNode_scopePathEq,0}};
#define boxvar_FNode_scopePathEq MMC_REFSTRUCTLIT(boxvar_lit_FNode_scopePathEq)


DLLModelDirection
modelica_integer omc_FNode_scopeHashWork(threadData_t *threadData, modelica_metatype _scope, modelica_integer __omcQ_24in_5Fhash);
DLLModelDirection
modelica_metatype boxptr_FNode_scopeHashWork(threadData_t *threadData, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fhash);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_scopeHashWork,2,0) {(void*) boxptr_FNode_scopeHashWork,0}};
#define boxvar_FNode_scopeHashWork MMC_REFSTRUCTLIT(boxvar_lit_FNode_scopeHashWork)


DLLModelDirection
modelica_string omc_FNode_mkExtendsName(threadData_t *threadData, modelica_metatype _inPath);
#define boxptr_FNode_mkExtendsName omc_FNode_mkExtendsName
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_mkExtendsName,2,0) {(void*) boxptr_FNode_mkExtendsName,0}};
#define boxvar_FNode_mkExtendsName MMC_REFSTRUCTLIT(boxvar_lit_FNode_mkExtendsName)


DLLModelDirection
modelica_metatype omc_FNode_importTable(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_importTable omc_FNode_importTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_importTable,2,0) {(void*) boxptr_FNode_importTable,0}};
#define boxvar_FNode_importTable MMC_REFSTRUCTLIT(boxvar_lit_FNode_importTable)


DLLModelDirection
modelica_metatype omc_FNode_refImport(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_refImport omc_FNode_refImport
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refImport,2,0) {(void*) boxptr_FNode_refImport,0}};
#define boxvar_FNode_refImport MMC_REFSTRUCTLIT(boxvar_lit_FNode_refImport)


DLLModelDirection
modelica_metatype omc_FNode_refRefTargetScope(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_refRefTargetScope omc_FNode_refRefTargetScope
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refRefTargetScope,2,0) {(void*) boxptr_FNode_refRefTargetScope,0}};
#define boxvar_FNode_refRefTargetScope MMC_REFSTRUCTLIT(boxvar_lit_FNode_refRefTargetScope)


DLLModelDirection
modelica_metatype omc_FNode_refRef(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_refRef omc_FNode_refRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refRef,2,0) {(void*) boxptr_FNode_refRef,0}};
#define boxvar_FNode_refRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_refRef)


DLLModelDirection
modelica_boolean omc_FNode_isRefRefResolved(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefRefResolved(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefRefResolved,2,0) {(void*) boxptr_FNode_isRefRefResolved,0}};
#define boxvar_FNode_isRefRefResolved MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefRefResolved)


DLLModelDirection
modelica_boolean omc_FNode_isRefRefUnresolved(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefRefUnresolved(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefRefUnresolved,2,0) {(void*) boxptr_FNode_isRefRefUnresolved,0}};
#define boxvar_FNode_isRefRefUnresolved MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefRefUnresolved)


DLLModelDirection
modelica_metatype omc_FNode_refInstance(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_refInstance omc_FNode_refInstance
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refInstance,2,0) {(void*) boxptr_FNode_refInstance,0}};
#define boxvar_FNode_refInstance MMC_REFSTRUCTLIT(boxvar_lit_FNode_refInstance)


DLLModelDirection
modelica_metatype omc_FNode_refInstVar(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_refInstVar omc_FNode_refInstVar
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refInstVar,2,0) {(void*) boxptr_FNode_refInstVar,0}};
#define boxvar_FNode_refInstVar MMC_REFSTRUCTLIT(boxvar_lit_FNode_refInstVar)


DLLModelDirection
modelica_boolean omc_FNode_isImplicitRefName(threadData_t *threadData, modelica_metatype _r);
DLLModelDirection
modelica_metatype boxptr_FNode_isImplicitRefName(threadData_t *threadData, modelica_metatype _r);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isImplicitRefName,2,0) {(void*) boxptr_FNode_isImplicitRefName,0}};
#define boxvar_FNode_isImplicitRefName MMC_REFSTRUCTLIT(boxvar_lit_FNode_isImplicitRefName)


DLLModelDirection
modelica_metatype omc_FNode_getElementFromRef(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_getElementFromRef omc_FNode_getElementFromRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_getElementFromRef,2,0) {(void*) boxptr_FNode_getElementFromRef,0}};
#define boxvar_FNode_getElementFromRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_getElementFromRef)


DLLModelDirection
modelica_metatype omc_FNode_getElement(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_getElement omc_FNode_getElement
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_getElement,2,0) {(void*) boxptr_FNode_getElement,0}};
#define boxvar_FNode_getElement MMC_REFSTRUCTLIT(boxvar_lit_FNode_getElement)


#define boxptr_FNode_copyChild omc_FNode_copyChild


#define boxptr_FNode_copy omc_FNode_copy


DLLModelDirection
modelica_metatype omc_FNode_copyRefNoUpdate(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_copyRefNoUpdate omc_FNode_copyRefNoUpdate
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_copyRefNoUpdate,2,0) {(void*) boxptr_FNode_copyRefNoUpdate,0}};
#define boxvar_FNode_copyRefNoUpdate MMC_REFSTRUCTLIT(boxvar_lit_FNode_copyRefNoUpdate)


#define boxptr_FNode_updateRefInData omc_FNode_updateRefInData


DLLModelDirection
modelica_metatype omc_FNode_lookupRefFromRef(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inOldRef);
#define boxptr_FNode_lookupRefFromRef omc_FNode_lookupRefFromRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_lookupRefFromRef,2,0) {(void*) boxptr_FNode_lookupRefFromRef,0}};
#define boxvar_FNode_lookupRefFromRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_lookupRefFromRef)


#define boxptr_FNode_updateRefInGraph omc_FNode_updateRefInGraph


DLLModelDirection
modelica_metatype omc_FNode_updateRefs(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inGraph, modelica_metatype *out_outRef);
#define boxptr_FNode_updateRefs omc_FNode_updateRefs
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_updateRefs,2,0) {(void*) boxptr_FNode_updateRefs,0}};
#define boxvar_FNode_updateRefs MMC_REFSTRUCTLIT(boxvar_lit_FNode_updateRefs)


DLLModelDirection
modelica_metatype omc_FNode_copyRef(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inGraph, modelica_metatype *out_outRef);
#define boxptr_FNode_copyRef omc_FNode_copyRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_copyRef,2,0) {(void*) boxptr_FNode_copyRef,0}};
#define boxvar_FNode_copyRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_copyRef)


#define boxptr_FNode_cloneChild omc_FNode_cloneChild


DLLModelDirection
modelica_metatype omc_FNode_cloneTree(threadData_t *threadData, modelica_metatype _inChildren, modelica_metatype _inParentRef, modelica_metatype _inGraph, modelica_metatype *out_outChildren);
#define boxptr_FNode_cloneTree omc_FNode_cloneTree
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_cloneTree,2,0) {(void*) boxptr_FNode_cloneTree,0}};
#define boxvar_FNode_cloneTree MMC_REFSTRUCTLIT(boxvar_lit_FNode_cloneTree)


DLLModelDirection
modelica_metatype omc_FNode_clone(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inParentRef, modelica_metatype _inGraph, modelica_metatype *out_outRef);
#define boxptr_FNode_clone omc_FNode_clone
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_clone,2,0) {(void*) boxptr_FNode_clone,0}};
#define boxvar_FNode_clone MMC_REFSTRUCTLIT(boxvar_lit_FNode_clone)


DLLModelDirection
modelica_metatype omc_FNode_cloneRef(threadData_t *threadData, modelica_string _inName, modelica_metatype _inRef, modelica_metatype _inParentRef, modelica_metatype _inGraph, modelica_metatype *out_outRef);
#define boxptr_FNode_cloneRef omc_FNode_cloneRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_cloneRef,2,0) {(void*) boxptr_FNode_cloneRef,0}};
#define boxvar_FNode_cloneRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_cloneRef)


DLLModelDirection
modelica_metatype omc_FNode_extendsRefs(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_extendsRefs omc_FNode_extendsRefs
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_extendsRefs,2,0) {(void*) boxptr_FNode_extendsRefs,0}};
#define boxvar_FNode_extendsRefs MMC_REFSTRUCTLIT(boxvar_lit_FNode_extendsRefs)


DLLModelDirection
modelica_metatype omc_FNode_derivedRef(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_derivedRef omc_FNode_derivedRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_derivedRef,2,0) {(void*) boxptr_FNode_derivedRef,0}};
#define boxvar_FNode_derivedRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_derivedRef)


DLLModelDirection
modelica_metatype omc_FNode_imports(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype *out_outUnQualifiedImports);
#define boxptr_FNode_imports omc_FNode_imports
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_imports,2,0) {(void*) boxptr_FNode_imports,0}};
#define boxvar_FNode_imports MMC_REFSTRUCTLIT(boxvar_lit_FNode_imports)


DLLModelDirection
modelica_boolean omc_FNode_hasImports(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_hasImports(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_hasImports,2,0) {(void*) boxptr_FNode_hasImports,0}};
#define boxvar_FNode_hasImports MMC_REFSTRUCTLIT(boxvar_lit_FNode_hasImports)


DLLModelDirection
modelica_metatype omc_FNode_apply1(threadData_t *threadData, modelica_metatype _inRef, modelica_fnptr _inApply, modelica_metatype _inExtraArg);
#define boxptr_FNode_apply1 omc_FNode_apply1
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_apply1,2,0) {(void*) boxptr_FNode_apply1,0}};
#define boxvar_FNode_apply1 MMC_REFSTRUCTLIT(boxvar_lit_FNode_apply1)


DLLModelDirection
modelica_metatype omc_FNode_dfs(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_dfs omc_FNode_dfs
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_dfs,2,0) {(void*) boxptr_FNode_dfs,0}};
#define boxvar_FNode_dfs MMC_REFSTRUCTLIT(boxvar_lit_FNode_dfs)


DLLModelDirection
modelica_boolean omc_FNode_isRefIn(threadData_t *threadData, modelica_metatype _inRef, modelica_fnptr _inFunctionRefIs);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefIn(threadData_t *threadData, modelica_metatype _inRef, modelica_fnptr _inFunctionRefIs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefIn,2,0) {(void*) boxptr_FNode_isRefIn,0}};
#define boxvar_FNode_isRefIn MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefIn)


DLLModelDirection
modelica_boolean omc_FNode_isRefDims(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefDims(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefDims,2,0) {(void*) boxptr_FNode_isRefDims,0}};
#define boxvar_FNode_isRefDims MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefDims)


DLLModelDirection
modelica_boolean omc_FNode_isRefVersion(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefVersion(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefVersion,2,0) {(void*) boxptr_FNode_isRefVersion,0}};
#define boxvar_FNode_isRefVersion MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefVersion)


DLLModelDirection
modelica_boolean omc_FNode_isRefClone(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefClone(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefClone,2,0) {(void*) boxptr_FNode_isRefClone,0}};
#define boxvar_FNode_isRefClone MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefClone)


DLLModelDirection
modelica_boolean omc_FNode_isRefModHolder(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefModHolder(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefModHolder,2,0) {(void*) boxptr_FNode_isRefModHolder,0}};
#define boxvar_FNode_isRefModHolder MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefModHolder)


DLLModelDirection
modelica_boolean omc_FNode_isRefMod(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefMod(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefMod,2,0) {(void*) boxptr_FNode_isRefMod,0}};
#define boxvar_FNode_isRefMod MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefMod)


DLLModelDirection
modelica_boolean omc_FNode_isRefSection(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefSection(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefSection,2,0) {(void*) boxptr_FNode_isRefSection,0}};
#define boxvar_FNode_isRefSection MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefSection)


DLLModelDirection
modelica_boolean omc_FNode_isRefRecord(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefRecord(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefRecord,2,0) {(void*) boxptr_FNode_isRefRecord,0}};
#define boxvar_FNode_isRefRecord MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefRecord)


DLLModelDirection
modelica_boolean omc_FNode_isRefFunction(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefFunction(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefFunction,2,0) {(void*) boxptr_FNode_isRefFunction,0}};
#define boxvar_FNode_isRefFunction MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefFunction)


DLLModelDirection
modelica_boolean omc_FNode_isRefBuiltin(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefBuiltin(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefBuiltin,2,0) {(void*) boxptr_FNode_isRefBuiltin,0}};
#define boxvar_FNode_isRefBuiltin MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefBuiltin)


DLLModelDirection
modelica_boolean omc_FNode_isRefBasicType(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefBasicType(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefBasicType,2,0) {(void*) boxptr_FNode_isRefBasicType,0}};
#define boxvar_FNode_isRefBasicType MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefBasicType)


DLLModelDirection
modelica_boolean omc_FNode_isRefTop(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefTop(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefTop,2,0) {(void*) boxptr_FNode_isRefTop,0}};
#define boxvar_FNode_isRefTop MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefTop)


DLLModelDirection
modelica_boolean omc_FNode_isRefUserDefined(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefUserDefined(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefUserDefined,2,0) {(void*) boxptr_FNode_isRefUserDefined,0}};
#define boxvar_FNode_isRefUserDefined MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefUserDefined)


DLLModelDirection
modelica_boolean omc_FNode_isRefReference(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefReference(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefReference,2,0) {(void*) boxptr_FNode_isRefReference,0}};
#define boxvar_FNode_isRefReference MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefReference)


DLLModelDirection
modelica_boolean omc_FNode_isRefCref(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefCref(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefCref,2,0) {(void*) boxptr_FNode_isRefCref,0}};
#define boxvar_FNode_isRefCref MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefCref)


DLLModelDirection
modelica_boolean omc_FNode_isRefClassExtends(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefClassExtends(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefClassExtends,2,0) {(void*) boxptr_FNode_isRefClassExtends,0}};
#define boxvar_FNode_isRefClassExtends MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefClassExtends)


DLLModelDirection
modelica_boolean omc_FNode_isRefRedeclare(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefRedeclare(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefRedeclare,2,0) {(void*) boxptr_FNode_isRefRedeclare,0}};
#define boxvar_FNode_isRefRedeclare MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefRedeclare)


DLLModelDirection
modelica_boolean omc_FNode_isRefInstance(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefInstance(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefInstance,2,0) {(void*) boxptr_FNode_isRefInstance,0}};
#define boxvar_FNode_isRefInstance MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefInstance)


DLLModelDirection
modelica_boolean omc_FNode_isRefClass(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefClass(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefClass,2,0) {(void*) boxptr_FNode_isRefClass,0}};
#define boxvar_FNode_isRefClass MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefClass)


DLLModelDirection
modelica_boolean omc_FNode_isRefConstrainClass(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefConstrainClass(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefConstrainClass,2,0) {(void*) boxptr_FNode_isRefConstrainClass,0}};
#define boxvar_FNode_isRefConstrainClass MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefConstrainClass)


DLLModelDirection
modelica_boolean omc_FNode_isRefComponent(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefComponent(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefComponent,2,0) {(void*) boxptr_FNode_isRefComponent,0}};
#define boxvar_FNode_isRefComponent MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefComponent)


DLLModelDirection
modelica_boolean omc_FNode_isRefDerived(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefDerived(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefDerived,2,0) {(void*) boxptr_FNode_isRefDerived,0}};
#define boxvar_FNode_isRefDerived MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefDerived)


DLLModelDirection
modelica_boolean omc_FNode_isRefExtends(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefExtends(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefExtends,2,0) {(void*) boxptr_FNode_isRefExtends,0}};
#define boxvar_FNode_isRefExtends MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefExtends)


#define boxptr_FNode_filter__work omc_FNode_filter__work


DLLModelDirection
modelica_metatype omc_FNode_filter(threadData_t *threadData, modelica_metatype _inRef, modelica_fnptr _inFilter);
#define boxptr_FNode_filter omc_FNode_filter
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_filter,2,0) {(void*) boxptr_FNode_filter,0}};
#define boxvar_FNode_filter MMC_REFSTRUCTLIT(boxvar_lit_FNode_filter)


DLLModelDirection
modelica_metatype omc_FNode_lookupRef__dispatch(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inScope);
#define boxptr_FNode_lookupRef__dispatch omc_FNode_lookupRef__dispatch
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_lookupRef__dispatch,2,0) {(void*) boxptr_FNode_lookupRef__dispatch,0}};
#define boxvar_FNode_lookupRef__dispatch MMC_REFSTRUCTLIT(boxvar_lit_FNode_lookupRef__dispatch)


DLLModelDirection
modelica_metatype omc_FNode_lookupRef(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inScope);
#define boxptr_FNode_lookupRef omc_FNode_lookupRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_lookupRef,2,0) {(void*) boxptr_FNode_lookupRef,0}};
#define boxvar_FNode_lookupRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_lookupRef)


DLLModelDirection
modelica_metatype omc_FNode_contextual(threadData_t *threadData, modelica_metatype _inParents);
#define boxptr_FNode_contextual omc_FNode_contextual
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_contextual,2,0) {(void*) boxptr_FNode_contextual,0}};
#define boxvar_FNode_contextual MMC_REFSTRUCTLIT(boxvar_lit_FNode_contextual)


DLLModelDirection
modelica_metatype omc_FNode_contextualScope__dispatch(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inAcc);
#define boxptr_FNode_contextualScope__dispatch omc_FNode_contextualScope__dispatch
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_contextualScope__dispatch,2,0) {(void*) boxptr_FNode_contextualScope__dispatch,0}};
#define boxvar_FNode_contextualScope__dispatch MMC_REFSTRUCTLIT(boxvar_lit_FNode_contextualScope__dispatch)


DLLModelDirection
modelica_metatype omc_FNode_contextualScope(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_contextualScope omc_FNode_contextualScope
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_contextualScope,2,0) {(void*) boxptr_FNode_contextualScope,0}};
#define boxvar_FNode_contextualScope MMC_REFSTRUCTLIT(boxvar_lit_FNode_contextualScope)


DLLModelDirection
modelica_metatype omc_FNode_original(threadData_t *threadData, modelica_metatype _inParents);
#define boxptr_FNode_original omc_FNode_original
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_original,2,0) {(void*) boxptr_FNode_original,0}};
#define boxvar_FNode_original MMC_REFSTRUCTLIT(boxvar_lit_FNode_original)


DLLModelDirection
modelica_metatype omc_FNode_originalScope__dispatch(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inAcc);
#define boxptr_FNode_originalScope__dispatch omc_FNode_originalScope__dispatch
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_originalScope__dispatch,2,0) {(void*) boxptr_FNode_originalScope__dispatch,0}};
#define boxvar_FNode_originalScope__dispatch MMC_REFSTRUCTLIT(boxvar_lit_FNode_originalScope__dispatch)


DLLModelDirection
modelica_metatype omc_FNode_originalScope(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_originalScope omc_FNode_originalScope
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_originalScope,2,0) {(void*) boxptr_FNode_originalScope,0}};
#define boxvar_FNode_originalScope MMC_REFSTRUCTLIT(boxvar_lit_FNode_originalScope)


DLLModelDirection
modelica_metatype omc_FNode_getModifierTarget(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_getModifierTarget omc_FNode_getModifierTarget
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_getModifierTarget,2,0) {(void*) boxptr_FNode_getModifierTarget,0}};
#define boxvar_FNode_getModifierTarget MMC_REFSTRUCTLIT(boxvar_lit_FNode_getModifierTarget)


#define boxptr_FNode_namesUpToParentName__dispatch omc_FNode_namesUpToParentName__dispatch


DLLModelDirection
modelica_metatype omc_FNode_namesUpToParentName(threadData_t *threadData, modelica_metatype _inRef, modelica_string _inName);
#define boxptr_FNode_namesUpToParentName omc_FNode_namesUpToParentName
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_namesUpToParentName,2,0) {(void*) boxptr_FNode_namesUpToParentName,0}};
#define boxvar_FNode_namesUpToParentName MMC_REFSTRUCTLIT(boxvar_lit_FNode_namesUpToParentName)


DLLModelDirection
modelica_metatype omc_FNode_nonImplicitRefFromScope(threadData_t *threadData, modelica_metatype _inScope);
#define boxptr_FNode_nonImplicitRefFromScope omc_FNode_nonImplicitRefFromScope
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_nonImplicitRefFromScope,2,0) {(void*) boxptr_FNode_nonImplicitRefFromScope,0}};
#define boxvar_FNode_nonImplicitRefFromScope MMC_REFSTRUCTLIT(boxvar_lit_FNode_nonImplicitRefFromScope)


DLLModelDirection
modelica_boolean omc_FNode_isIn(threadData_t *threadData, modelica_metatype _inNode, modelica_fnptr _inFunctionRefIs);
DLLModelDirection
modelica_metatype boxptr_FNode_isIn(threadData_t *threadData, modelica_metatype _inNode, modelica_fnptr _inFunctionRefIs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isIn,2,0) {(void*) boxptr_FNode_isIn,0}};
#define boxvar_FNode_isIn MMC_REFSTRUCTLIT(boxvar_lit_FNode_isIn)


DLLModelDirection
modelica_boolean omc_FNode_isDims(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isDims(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isDims,2,0) {(void*) boxptr_FNode_isDims,0}};
#define boxvar_FNode_isDims MMC_REFSTRUCTLIT(boxvar_lit_FNode_isDims)


DLLModelDirection
modelica_boolean omc_FNode_isVersion(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isVersion(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isVersion,2,0) {(void*) boxptr_FNode_isVersion,0}};
#define boxvar_FNode_isVersion MMC_REFSTRUCTLIT(boxvar_lit_FNode_isVersion)


DLLModelDirection
modelica_boolean omc_FNode_isClone(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isClone(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isClone,2,0) {(void*) boxptr_FNode_isClone,0}};
#define boxvar_FNode_isClone MMC_REFSTRUCTLIT(boxvar_lit_FNode_isClone)


DLLModelDirection
modelica_boolean omc_FNode_isModHolder(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isModHolder(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isModHolder,2,0) {(void*) boxptr_FNode_isModHolder,0}};
#define boxvar_FNode_isModHolder MMC_REFSTRUCTLIT(boxvar_lit_FNode_isModHolder)


DLLModelDirection
modelica_boolean omc_FNode_isMod(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isMod(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isMod,2,0) {(void*) boxptr_FNode_isMod,0}};
#define boxvar_FNode_isMod MMC_REFSTRUCTLIT(boxvar_lit_FNode_isMod)


DLLModelDirection
modelica_boolean omc_FNode_isSection(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isSection(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isSection,2,0) {(void*) boxptr_FNode_isSection,0}};
#define boxvar_FNode_isSection MMC_REFSTRUCTLIT(boxvar_lit_FNode_isSection)


DLLModelDirection
modelica_boolean omc_FNode_isRecord(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isRecord(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRecord,2,0) {(void*) boxptr_FNode_isRecord,0}};
#define boxvar_FNode_isRecord MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRecord)


DLLModelDirection
modelica_boolean omc_FNode_isFunction(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isFunction(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isFunction,2,0) {(void*) boxptr_FNode_isFunction,0}};
#define boxvar_FNode_isFunction MMC_REFSTRUCTLIT(boxvar_lit_FNode_isFunction)


DLLModelDirection
modelica_boolean omc_FNode_isBuiltin(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isBuiltin(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isBuiltin,2,0) {(void*) boxptr_FNode_isBuiltin,0}};
#define boxvar_FNode_isBuiltin MMC_REFSTRUCTLIT(boxvar_lit_FNode_isBuiltin)


DLLModelDirection
modelica_boolean omc_FNode_isBasicType(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isBasicType(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isBasicType,2,0) {(void*) boxptr_FNode_isBasicType,0}};
#define boxvar_FNode_isBasicType MMC_REFSTRUCTLIT(boxvar_lit_FNode_isBasicType)


DLLModelDirection
modelica_boolean omc_FNode_isCref(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isCref(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isCref,2,0) {(void*) boxptr_FNode_isCref,0}};
#define boxvar_FNode_isCref MMC_REFSTRUCTLIT(boxvar_lit_FNode_isCref)


DLLModelDirection
modelica_boolean omc_FNode_isConstrainClass(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isConstrainClass(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isConstrainClass,2,0) {(void*) boxptr_FNode_isConstrainClass,0}};
#define boxvar_FNode_isConstrainClass MMC_REFSTRUCTLIT(boxvar_lit_FNode_isConstrainClass)


DLLModelDirection
modelica_boolean omc_FNode_isComponent(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isComponent(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isComponent,2,0) {(void*) boxptr_FNode_isComponent,0}};
#define boxvar_FNode_isComponent MMC_REFSTRUCTLIT(boxvar_lit_FNode_isComponent)


DLLModelDirection
modelica_boolean omc_FNode_isClassExtends(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isClassExtends(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isClassExtends,2,0) {(void*) boxptr_FNode_isClassExtends,0}};
#define boxvar_FNode_isClassExtends MMC_REFSTRUCTLIT(boxvar_lit_FNode_isClassExtends)


DLLModelDirection
modelica_boolean omc_FNode_isRedeclare(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isRedeclare(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRedeclare,2,0) {(void*) boxptr_FNode_isRedeclare,0}};
#define boxvar_FNode_isRedeclare MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRedeclare)


DLLModelDirection
modelica_boolean omc_FNode_isInstance(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isInstance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isInstance,2,0) {(void*) boxptr_FNode_isInstance,0}};
#define boxvar_FNode_isInstance MMC_REFSTRUCTLIT(boxvar_lit_FNode_isInstance)


DLLModelDirection
modelica_boolean omc_FNode_isClass(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isClass(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isClass,2,0) {(void*) boxptr_FNode_isClass,0}};
#define boxvar_FNode_isClass MMC_REFSTRUCTLIT(boxvar_lit_FNode_isClass)


DLLModelDirection
modelica_boolean omc_FNode_isDerived(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isDerived(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isDerived,2,0) {(void*) boxptr_FNode_isDerived,0}};
#define boxvar_FNode_isDerived MMC_REFSTRUCTLIT(boxvar_lit_FNode_isDerived)


DLLModelDirection
modelica_boolean omc_FNode_isExtends(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isExtends(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isExtends,2,0) {(void*) boxptr_FNode_isExtends,0}};
#define boxvar_FNode_isExtends MMC_REFSTRUCTLIT(boxvar_lit_FNode_isExtends)


DLLModelDirection
modelica_boolean omc_FNode_isTop(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isTop(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isTop,2,0) {(void*) boxptr_FNode_isTop,0}};
#define boxvar_FNode_isTop MMC_REFSTRUCTLIT(boxvar_lit_FNode_isTop)


DLLModelDirection
modelica_boolean omc_FNode_isUserDefined(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isUserDefined(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isUserDefined,2,0) {(void*) boxptr_FNode_isUserDefined,0}};
#define boxvar_FNode_isUserDefined MMC_REFSTRUCTLIT(boxvar_lit_FNode_isUserDefined)


DLLModelDirection
modelica_boolean omc_FNode_isReference(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isReference(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isReference,2,0) {(void*) boxptr_FNode_isReference,0}};
#define boxvar_FNode_isReference MMC_REFSTRUCTLIT(boxvar_lit_FNode_isReference)


DLLModelDirection
modelica_boolean omc_FNode_isEncapsulated(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isEncapsulated(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isEncapsulated,2,0) {(void*) boxptr_FNode_isEncapsulated,0}};
#define boxvar_FNode_isEncapsulated MMC_REFSTRUCTLIT(boxvar_lit_FNode_isEncapsulated)


DLLModelDirection
modelica_boolean omc_FNode_isRefImplicitScope(threadData_t *threadData, modelica_metatype _inRef);
DLLModelDirection
modelica_metatype boxptr_FNode_isRefImplicitScope(threadData_t *threadData, modelica_metatype _inRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isRefImplicitScope,2,0) {(void*) boxptr_FNode_isRefImplicitScope,0}};
#define boxvar_FNode_isRefImplicitScope MMC_REFSTRUCTLIT(boxvar_lit_FNode_isRefImplicitScope)


DLLModelDirection
modelica_boolean omc_FNode_isImplicitScope(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_isImplicitScope(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_isImplicitScope,2,0) {(void*) boxptr_FNode_isImplicitScope,0}};
#define boxvar_FNode_isImplicitScope MMC_REFSTRUCTLIT(boxvar_lit_FNode_isImplicitScope)


DLLModelDirection
modelica_string omc_FNode_scopeStr(threadData_t *threadData, modelica_metatype _sc);
#define boxptr_FNode_scopeStr omc_FNode_scopeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_scopeStr,2,0) {(void*) boxptr_FNode_scopeStr,0}};
#define boxvar_FNode_scopeStr MMC_REFSTRUCTLIT(boxvar_lit_FNode_scopeStr)


DLLModelDirection
modelica_string omc_FNode_toPathStr(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_toPathStr omc_FNode_toPathStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_toPathStr,2,0) {(void*) boxptr_FNode_toPathStr,0}};
#define boxvar_FNode_toPathStr MMC_REFSTRUCTLIT(boxvar_lit_FNode_toPathStr)


DLLModelDirection
modelica_string omc_FNode_toStr(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_toStr omc_FNode_toStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_toStr,2,0) {(void*) boxptr_FNode_toStr,0}};
#define boxvar_FNode_toStr MMC_REFSTRUCTLIT(boxvar_lit_FNode_toStr)


DLLModelDirection
modelica_string omc_FNode_dataStr(threadData_t *threadData, modelica_metatype _inData);
#define boxptr_FNode_dataStr omc_FNode_dataStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_dataStr,2,0) {(void*) boxptr_FNode_dataStr,0}};
#define boxvar_FNode_dataStr MMC_REFSTRUCTLIT(boxvar_lit_FNode_dataStr)


DLLModelDirection
modelica_metatype omc_FNode_element2Data(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inKind, modelica_metatype *out_outVar);
#define boxptr_FNode_element2Data omc_FNode_element2Data
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_element2Data,2,0) {(void*) boxptr_FNode_element2Data,0}};
#define boxvar_FNode_element2Data MMC_REFSTRUCTLIT(boxvar_lit_FNode_element2Data)


DLLModelDirection
modelica_metatype omc_FNode_childFromNode(threadData_t *threadData, modelica_metatype _inNode, modelica_string _inName);
#define boxptr_FNode_childFromNode omc_FNode_childFromNode
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_childFromNode,2,0) {(void*) boxptr_FNode_childFromNode,0}};
#define boxvar_FNode_childFromNode MMC_REFSTRUCTLIT(boxvar_lit_FNode_childFromNode)


DLLModelDirection
modelica_metatype omc_FNode_child(threadData_t *threadData, modelica_metatype _inParentRef, modelica_string _inName);
#define boxptr_FNode_child omc_FNode_child
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_child,2,0) {(void*) boxptr_FNode_child,0}};
#define boxvar_FNode_child MMC_REFSTRUCTLIT(boxvar_lit_FNode_child)


DLLModelDirection
modelica_metatype omc_FNode_setData(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inData);
#define boxptr_FNode_setData omc_FNode_setData
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_setData,2,0) {(void*) boxptr_FNode_setData,0}};
#define boxvar_FNode_setData MMC_REFSTRUCTLIT(boxvar_lit_FNode_setData)


DLLModelDirection
modelica_metatype omc_FNode_setChildren(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inChildren);
#define boxptr_FNode_setChildren omc_FNode_setChildren
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_setChildren,2,0) {(void*) boxptr_FNode_setChildren,0}};
#define boxvar_FNode_setChildren MMC_REFSTRUCTLIT(boxvar_lit_FNode_setChildren)


DLLModelDirection
modelica_boolean omc_FNode_refHasChild(threadData_t *threadData, modelica_metatype _inRef, modelica_string _inName);
DLLModelDirection
modelica_metatype boxptr_FNode_refHasChild(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refHasChild,2,0) {(void*) boxptr_FNode_refHasChild,0}};
#define boxvar_FNode_refHasChild MMC_REFSTRUCTLIT(boxvar_lit_FNode_refHasChild)


DLLModelDirection
modelica_boolean omc_FNode_hasChild(threadData_t *threadData, modelica_metatype _inNode, modelica_string _inName);
DLLModelDirection
modelica_metatype boxptr_FNode_hasChild(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_hasChild,2,0) {(void*) boxptr_FNode_hasChild,0}};
#define boxvar_FNode_hasChild MMC_REFSTRUCTLIT(boxvar_lit_FNode_hasChild)


DLLModelDirection
modelica_metatype omc_FNode_children(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_children omc_FNode_children
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_children,2,0) {(void*) boxptr_FNode_children,0}};
#define boxvar_FNode_children MMC_REFSTRUCTLIT(boxvar_lit_FNode_children)


DLLModelDirection
modelica_metatype omc_FNode_top(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_top omc_FNode_top
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_top,2,0) {(void*) boxptr_FNode_top,0}};
#define boxvar_FNode_top MMC_REFSTRUCTLIT(boxvar_lit_FNode_top)


DLLModelDirection
modelica_metatype omc_FNode_refData(threadData_t *threadData, modelica_metatype _r);
#define boxptr_FNode_refData omc_FNode_refData
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refData,2,0) {(void*) boxptr_FNode_refData,0}};
#define boxvar_FNode_refData MMC_REFSTRUCTLIT(boxvar_lit_FNode_refData)


DLLModelDirection
modelica_metatype omc_FNode_data(threadData_t *threadData, modelica_metatype _n);
#define boxptr_FNode_data omc_FNode_data
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_data,2,0) {(void*) boxptr_FNode_data,0}};
#define boxvar_FNode_data MMC_REFSTRUCTLIT(boxvar_lit_FNode_data)


DLLModelDirection
modelica_string omc_FNode_refName(threadData_t *threadData, modelica_metatype _r);
#define boxptr_FNode_refName omc_FNode_refName
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refName,2,0) {(void*) boxptr_FNode_refName,0}};
#define boxvar_FNode_refName MMC_REFSTRUCTLIT(boxvar_lit_FNode_refName)


DLLModelDirection
modelica_string omc_FNode_name(threadData_t *threadData, modelica_metatype _n);
#define boxptr_FNode_name omc_FNode_name
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_name,2,0) {(void*) boxptr_FNode_name,0}};
#define boxvar_FNode_name MMC_REFSTRUCTLIT(boxvar_lit_FNode_name)


DLLModelDirection
void omc_FNode_addDefinedUnitToRef(threadData_t *threadData, modelica_metatype _ref, modelica_metatype _du);
#define boxptr_FNode_addDefinedUnitToRef omc_FNode_addDefinedUnitToRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_addDefinedUnitToRef,2,0) {(void*) boxptr_FNode_addDefinedUnitToRef,0}};
#define boxvar_FNode_addDefinedUnitToRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_addDefinedUnitToRef)


DLLModelDirection
void omc_FNode_addIteratorsToRef(threadData_t *threadData, modelica_metatype _ref, modelica_metatype _inIterators);
#define boxptr_FNode_addIteratorsToRef omc_FNode_addIteratorsToRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_addIteratorsToRef,2,0) {(void*) boxptr_FNode_addIteratorsToRef,0}};
#define boxvar_FNode_addIteratorsToRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_addIteratorsToRef)


DLLModelDirection
void omc_FNode_addTypesToRef(threadData_t *threadData, modelica_metatype _ref, modelica_metatype _inTys);
#define boxptr_FNode_addTypesToRef omc_FNode_addTypesToRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_addTypesToRef,2,0) {(void*) boxptr_FNode_addTypesToRef,0}};
#define boxvar_FNode_addTypesToRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_addTypesToRef)


DLLModelDirection
void omc_FNode_addImportToRef(threadData_t *threadData, modelica_metatype _ref, modelica_metatype _imp);
#define boxptr_FNode_addImportToRef omc_FNode_addImportToRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_addImportToRef,2,0) {(void*) boxptr_FNode_addImportToRef,0}};
#define boxvar_FNode_addImportToRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_addImportToRef)


#define boxptr_FNode_printElementConflictError omc_FNode_printElementConflictError


DLLModelDirection
void omc_FNode_addChildRef(threadData_t *threadData, modelica_metatype _inParentRef, modelica_string _inName, modelica_metatype _inChildRef, modelica_boolean _checkDuplicate);
DLLModelDirection
void boxptr_FNode_addChildRef(threadData_t *threadData, modelica_metatype _inParentRef, modelica_metatype _inName, modelica_metatype _inChildRef, modelica_metatype _checkDuplicate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_addChildRef,2,0) {(void*) boxptr_FNode_addChildRef,0}};
#define boxvar_FNode_addChildRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_addChildRef)


#define boxptr_FNode_checkUniqueQualifiedImport omc_FNode_checkUniqueQualifiedImport


#define boxptr_FNode_translateQualifiedImportToNamed omc_FNode_translateQualifiedImportToNamed


DLLModelDirection
modelica_metatype omc_FNode_addImport(threadData_t *threadData, modelica_metatype _inImport, modelica_metatype _inImportTable);
#define boxptr_FNode_addImport omc_FNode_addImport
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_addImport,2,0) {(void*) boxptr_FNode_addImport,0}};
#define boxvar_FNode_addImport MMC_REFSTRUCTLIT(boxvar_lit_FNode_addImport)


DLLModelDirection
modelica_metatype omc_FNode_new(threadData_t *threadData, modelica_string _inName, modelica_integer _inId, modelica_metatype _inParents, modelica_metatype _inData);
DLLModelDirection
modelica_metatype boxptr_FNode_new(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inId, modelica_metatype _inParents, modelica_metatype _inData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_new,2,0) {(void*) boxptr_FNode_new,0}};
#define boxvar_FNode_new MMC_REFSTRUCTLIT(boxvar_lit_FNode_new)


DLLModelDirection
modelica_metatype omc_FNode_targetScope(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_targetScope omc_FNode_targetScope
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_targetScope,2,0) {(void*) boxptr_FNode_targetScope,0}};
#define boxvar_FNode_targetScope MMC_REFSTRUCTLIT(boxvar_lit_FNode_targetScope)


DLLModelDirection
modelica_metatype omc_FNode_target(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_target omc_FNode_target
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_target,2,0) {(void*) boxptr_FNode_target,0}};
#define boxvar_FNode_target MMC_REFSTRUCTLIT(boxvar_lit_FNode_target)


DLLModelDirection
modelica_metatype omc_FNode_setParents(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inParents);
#define boxptr_FNode_setParents omc_FNode_setParents
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_setParents,2,0) {(void*) boxptr_FNode_setParents,0}};
#define boxvar_FNode_setParents MMC_REFSTRUCTLIT(boxvar_lit_FNode_setParents)


DLLModelDirection
modelica_metatype omc_FNode_refPushParents(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inParents);
#define boxptr_FNode_refPushParents omc_FNode_refPushParents
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refPushParents,2,0) {(void*) boxptr_FNode_refPushParents,0}};
#define boxvar_FNode_refPushParents MMC_REFSTRUCTLIT(boxvar_lit_FNode_refPushParents)


DLLModelDirection
modelica_metatype omc_FNode_refParents(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_refParents omc_FNode_refParents
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refParents,2,0) {(void*) boxptr_FNode_refParents,0}};
#define boxvar_FNode_refParents MMC_REFSTRUCTLIT(boxvar_lit_FNode_refParents)


DLLModelDirection
modelica_boolean omc_FNode_hasParents(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_hasParents(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_hasParents,2,0) {(void*) boxptr_FNode_hasParents,0}};
#define boxvar_FNode_hasParents MMC_REFSTRUCTLIT(boxvar_lit_FNode_hasParents)


DLLModelDirection
modelica_metatype omc_FNode_contextualParent(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_contextualParent omc_FNode_contextualParent
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_contextualParent,2,0) {(void*) boxptr_FNode_contextualParent,0}};
#define boxvar_FNode_contextualParent MMC_REFSTRUCTLIT(boxvar_lit_FNode_contextualParent)


DLLModelDirection
modelica_metatype omc_FNode_refOriginalParent(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_refOriginalParent omc_FNode_refOriginalParent
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_refOriginalParent,2,0) {(void*) boxptr_FNode_refOriginalParent,0}};
#define boxvar_FNode_refOriginalParent MMC_REFSTRUCTLIT(boxvar_lit_FNode_refOriginalParent)


DLLModelDirection
modelica_metatype omc_FNode_originalParent(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_originalParent omc_FNode_originalParent
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_originalParent,2,0) {(void*) boxptr_FNode_originalParent,0}};
#define boxvar_FNode_originalParent MMC_REFSTRUCTLIT(boxvar_lit_FNode_originalParent)


DLLModelDirection
modelica_metatype omc_FNode_parents(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_parents omc_FNode_parents
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_parents,2,0) {(void*) boxptr_FNode_parents,0}};
#define boxvar_FNode_parents MMC_REFSTRUCTLIT(boxvar_lit_FNode_parents)


DLLModelDirection
modelica_integer omc_FNode_id(threadData_t *threadData, modelica_metatype _inNode);
DLLModelDirection
modelica_metatype boxptr_FNode_id(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_id,2,0) {(void*) boxptr_FNode_id,0}};
#define boxvar_FNode_id MMC_REFSTRUCTLIT(boxvar_lit_FNode_id)


DLLModelDirection
modelica_metatype omc_FNode_updateRef(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inNode);
#define boxptr_FNode_updateRef omc_FNode_updateRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_updateRef,2,0) {(void*) boxptr_FNode_updateRef,0}};
#define boxvar_FNode_updateRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_updateRef)


DLLModelDirection
modelica_metatype omc_FNode_fromRef(threadData_t *threadData, modelica_metatype _inRef);
#define boxptr_FNode_fromRef omc_FNode_fromRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_fromRef,2,0) {(void*) boxptr_FNode_fromRef,0}};
#define boxvar_FNode_fromRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_fromRef)


DLLModelDirection
modelica_metatype omc_FNode_toRef(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_FNode_toRef omc_FNode_toRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_FNode_toRef,2,0) {(void*) boxptr_FNode_toRef,0}};
#define boxvar_FNode_toRef MMC_REFSTRUCTLIT(boxvar_lit_FNode_toRef)

#ifdef __cplusplus
}
#endif
#endif
