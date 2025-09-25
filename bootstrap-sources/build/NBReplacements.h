#ifndef NBReplacements__H
#define NBReplacements__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description NFComponentRef_WILD__desc;

extern struct record_description NFExpression_CREF__desc;

extern struct record_description NFFlatten_FunctionTreeImpl_Tree_EMPTY__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NBReplacements_getFunctionBody(threadData_t *threadData, modelica_metatype _fn);
#define boxptr_NBReplacements_getFunctionBody omc_NBReplacements_getFunctionBody
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_getFunctionBody,2,0) {(void*) boxptr_NBReplacements_getFunctionBody,0}};
#define boxvar_NBReplacements_getFunctionBody MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_getFunctionBody)


DLLDirection
void omc_NBReplacements_addInputArgTpl(threadData_t *threadData, modelica_metatype _tpl, modelica_metatype _replacements, modelica_boolean _lowered_lhs);
DLLDirection
void boxptr_NBReplacements_addInputArgTpl(threadData_t *threadData, modelica_metatype _tpl, modelica_metatype _replacements, modelica_metatype _lowered_lhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_addInputArgTpl,2,0) {(void*) boxptr_NBReplacements_addInputArgTpl,0}};
#define boxvar_NBReplacements_addInputArgTpl MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_addInputArgTpl)


DLLDirection
modelica_metatype omc_NBReplacements_applyFuncExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _replacements, modelica_metatype _variables);
#define boxptr_NBReplacements_applyFuncExp omc_NBReplacements_applyFuncExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_applyFuncExp,2,0) {(void*) boxptr_NBReplacements_applyFuncExp,0}};
#define boxvar_NBReplacements_applyFuncExp MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_applyFuncExp)


DLLDirection
modelica_metatype omc_NBReplacements_replaceFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _variables, modelica_metatype _replacements);
#define boxptr_NBReplacements_replaceFunctions omc_NBReplacements_replaceFunctions
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_replaceFunctions,2,0) {(void*) boxptr_NBReplacements_replaceFunctions,0}};
#define boxvar_NBReplacements_replaceFunctions MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_replaceFunctions)


DLLDirection
modelica_string omc_NBReplacements_simpleToString(threadData_t *threadData, modelica_metatype _replacements);
#define boxptr_NBReplacements_simpleToString omc_NBReplacements_simpleToString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_simpleToString,2,0) {(void*) boxptr_NBReplacements_simpleToString,0}};
#define boxvar_NBReplacements_simpleToString MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_simpleToString)


DLLDirection
modelica_metatype omc_NBReplacements_replaceVarPtr(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype _replacements);
#define boxptr_NBReplacements_replaceVarPtr omc_NBReplacements_replaceVarPtr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_replaceVarPtr,2,0) {(void*) boxptr_NBReplacements_replaceVarPtr,0}};
#define boxvar_NBReplacements_replaceVarPtr MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_replaceVarPtr)


DLLDirection
modelica_metatype omc_NBReplacements_applySimpleVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _replacements);
#define boxptr_NBReplacements_applySimpleVar omc_NBReplacements_applySimpleVar
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_applySimpleVar,2,0) {(void*) boxptr_NBReplacements_applySimpleVar,0}};
#define boxvar_NBReplacements_applySimpleVar MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_applySimpleVar)


DLLDirection
modelica_metatype omc_NBReplacements_applySimpleExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _replacements);
#define boxptr_NBReplacements_applySimpleExp omc_NBReplacements_applySimpleExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_applySimpleExp,2,0) {(void*) boxptr_NBReplacements_applySimpleExp,0}};
#define boxvar_NBReplacements_applySimpleExp MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_applySimpleExp)


DLLDirection
modelica_metatype omc_NBReplacements_applySimple(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype _replacements, modelica_metatype *out_varData);
#define boxptr_NBReplacements_applySimple omc_NBReplacements_applySimple
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_applySimple,2,0) {(void*) boxptr_NBReplacements_applySimple,0}};
#define boxvar_NBReplacements_applySimple MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_applySimple)


DLLDirection
void omc_NBReplacements_addSimple(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _replacements);
#define boxptr_NBReplacements_addSimple omc_NBReplacements_addSimple
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_addSimple,2,0) {(void*) boxptr_NBReplacements_addSimple,0}};
#define boxvar_NBReplacements_addSimple MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_addSimple)


DLLDirection
void omc_NBReplacements_simple(threadData_t *threadData, modelica_metatype _comps, modelica_metatype _replacements);
#define boxptr_NBReplacements_simple omc_NBReplacements_simple
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_simple,2,0) {(void*) boxptr_NBReplacements_simple,0}};
#define boxvar_NBReplacements_simple MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_simple)


#define boxptr_NBReplacements_single_traverse omc_NBReplacements_single_traverse


DLLDirection
modelica_metatype omc_NBReplacements_single(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _old, modelica_metatype _new);
#define boxptr_NBReplacements_single omc_NBReplacements_single
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_single,2,0) {(void*) boxptr_NBReplacements_single,0}};
#define boxvar_NBReplacements_single MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_single)

#ifdef __cplusplus
}
#endif
#endif
