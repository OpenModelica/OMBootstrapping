#ifndef NFInstContext__H
#define NFInstContext__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_integer omc_NFInstContext_nodeContext(threadData_t *threadData, modelica_metatype _node, modelica_integer _currentContext);
DLLDirection
modelica_metatype boxptr_NFInstContext_nodeContext(threadData_t *threadData, modelica_metatype _node, modelica_metatype _currentContext);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_nodeContext,2,0) {(void*) boxptr_NFInstContext_nodeContext,0}};
#define boxvar_NFInstContext_nodeContext MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_nodeContext)


DLLDirection
modelica_boolean omc_NFInstContext_isSingleExpression(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_isSingleExpression(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_isSingleExpression,2,0) {(void*) boxptr_NFInstContext_isSingleExpression,0}};
#define boxvar_NFInstContext_isSingleExpression MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_isSingleExpression)


DLLDirection
modelica_boolean omc_NFInstContext_inValidWhenScope(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inValidWhenScope(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inValidWhenScope,2,0) {(void*) boxptr_NFInstContext_inValidWhenScope,0}};
#define boxvar_NFInstContext_inValidWhenScope MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inValidWhenScope)


DLLDirection
modelica_boolean omc_NFInstContext_inLoop(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inLoop(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inLoop,2,0) {(void*) boxptr_NFInstContext_inLoop,0}};
#define boxvar_NFInstContext_inLoop MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inLoop)


DLLDirection
modelica_boolean omc_NFInstContext_inDiscreteScope(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inDiscreteScope(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inDiscreteScope,2,0) {(void*) boxptr_NFInstContext_inDiscreteScope,0}};
#define boxvar_NFInstContext_inDiscreteScope MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inDiscreteScope)


DLLDirection
modelica_boolean omc_NFInstContext_inValidTypenameScope(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inValidTypenameScope(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inValidTypenameScope,2,0) {(void*) boxptr_NFInstContext_inValidTypenameScope,0}};
#define boxvar_NFInstContext_inValidTypenameScope MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inValidTypenameScope)


DLLDirection
modelica_boolean omc_NFInstContext_inAnnotation(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inAnnotation(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inAnnotation,2,0) {(void*) boxptr_NFInstContext_inAnnotation,0}};
#define boxvar_NFInstContext_inAnnotation MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inAnnotation)


DLLDirection
modelica_boolean omc_NFInstContext_inAssert(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inAssert(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inAssert,2,0) {(void*) boxptr_NFInstContext_inAssert,0}};
#define boxvar_NFInstContext_inAssert MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inAssert)


DLLDirection
modelica_boolean omc_NFInstContext_inNoEvent(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inNoEvent(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inNoEvent,2,0) {(void*) boxptr_NFInstContext_inNoEvent,0}};
#define boxvar_NFInstContext_inNoEvent MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inNoEvent)


DLLDirection
modelica_boolean omc_NFInstContext_inConnect(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inConnect(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inConnect,2,0) {(void*) boxptr_NFInstContext_inConnect,0}};
#define boxvar_NFInstContext_inConnect MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inConnect)


DLLDirection
modelica_boolean omc_NFInstContext_inSubexpression(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inSubexpression(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inSubexpression,2,0) {(void*) boxptr_NFInstContext_inSubexpression,0}};
#define boxvar_NFInstContext_inSubexpression MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inSubexpression)


DLLDirection
modelica_boolean omc_NFInstContext_inSubscript(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inSubscript(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inSubscript,2,0) {(void*) boxptr_NFInstContext_inSubscript,0}};
#define boxvar_NFInstContext_inSubscript MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inSubscript)


DLLDirection
modelica_boolean omc_NFInstContext_inCondition(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inCondition(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inCondition,2,0) {(void*) boxptr_NFInstContext_inCondition,0}};
#define boxvar_NFInstContext_inCondition MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inCondition)


DLLDirection
modelica_boolean omc_NFInstContext_inBinding(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inBinding(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inBinding,2,0) {(void*) boxptr_NFInstContext_inBinding,0}};
#define boxvar_NFInstContext_inBinding MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inBinding)


DLLDirection
modelica_boolean omc_NFInstContext_inDimension(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inDimension(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inDimension,2,0) {(void*) boxptr_NFInstContext_inDimension,0}};
#define boxvar_NFInstContext_inDimension MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inDimension)


DLLDirection
modelica_boolean omc_NFInstContext_inIterationRange(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inIterationRange(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inIterationRange,2,0) {(void*) boxptr_NFInstContext_inIterationRange,0}};
#define boxvar_NFInstContext_inIterationRange MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inIterationRange)


DLLDirection
modelica_boolean omc_NFInstContext_inNonexpandable(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inNonexpandable(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inNonexpandable,2,0) {(void*) boxptr_NFInstContext_inNonexpandable,0}};
#define boxvar_NFInstContext_inNonexpandable MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inNonexpandable)


DLLDirection
modelica_boolean omc_NFInstContext_inWhile(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inWhile(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inWhile,2,0) {(void*) boxptr_NFInstContext_inWhile,0}};
#define boxvar_NFInstContext_inWhile MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inWhile)


DLLDirection
modelica_boolean omc_NFInstContext_inIf(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inIf(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inIf,2,0) {(void*) boxptr_NFInstContext_inIf,0}};
#define boxvar_NFInstContext_inIf MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inIf)


DLLDirection
modelica_boolean omc_NFInstContext_inFor(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inFor(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inFor,2,0) {(void*) boxptr_NFInstContext_inFor,0}};
#define boxvar_NFInstContext_inFor MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inFor)


DLLDirection
modelica_boolean omc_NFInstContext_inClocked(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inClocked(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inClocked,2,0) {(void*) boxptr_NFInstContext_inClocked,0}};
#define boxvar_NFInstContext_inClocked MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inClocked)


DLLDirection
modelica_boolean omc_NFInstContext_inWhen(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inWhen(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inWhen,2,0) {(void*) boxptr_NFInstContext_inWhen,0}};
#define boxvar_NFInstContext_inWhen MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inWhen)


DLLDirection
modelica_boolean omc_NFInstContext_onRHS(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_onRHS(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_onRHS,2,0) {(void*) boxptr_NFInstContext_onRHS,0}};
#define boxvar_NFInstContext_onRHS MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_onRHS)


DLLDirection
modelica_boolean omc_NFInstContext_onLHS(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_onLHS(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_onLHS,2,0) {(void*) boxptr_NFInstContext_onLHS,0}};
#define boxvar_NFInstContext_onLHS MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_onLHS)


DLLDirection
modelica_boolean omc_NFInstContext_inInitial(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inInitial(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inInitial,2,0) {(void*) boxptr_NFInstContext_inInitial,0}};
#define boxvar_NFInstContext_inInitial MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inInitial)


DLLDirection
modelica_boolean omc_NFInstContext_inEquation(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inEquation(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inEquation,2,0) {(void*) boxptr_NFInstContext_inEquation,0}};
#define boxvar_NFInstContext_inEquation MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inEquation)


DLLDirection
modelica_boolean omc_NFInstContext_inAlgorithm(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inAlgorithm(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inAlgorithm,2,0) {(void*) boxptr_NFInstContext_inAlgorithm,0}};
#define boxvar_NFInstContext_inAlgorithm MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inAlgorithm)


DLLDirection
modelica_boolean omc_NFInstContext_inRedeclared(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inRedeclared(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inRedeclared,2,0) {(void*) boxptr_NFInstContext_inRedeclared,0}};
#define boxvar_NFInstContext_inRedeclared MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inRedeclared)


DLLDirection
modelica_boolean omc_NFInstContext_inFunction(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inFunction(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inFunction,2,0) {(void*) boxptr_NFInstContext_inFunction,0}};
#define boxvar_NFInstContext_inFunction MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inFunction)


DLLDirection
modelica_boolean omc_NFInstContext_inClass(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inClass(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inClass,2,0) {(void*) boxptr_NFInstContext_inClass,0}};
#define boxvar_NFInstContext_inClass MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inClass)


DLLDirection
modelica_boolean omc_NFInstContext_inFastLookup(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inFastLookup(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inFastLookup,2,0) {(void*) boxptr_NFInstContext_inFastLookup,0}};
#define boxvar_NFInstContext_inFastLookup MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inFastLookup)


DLLDirection
modelica_boolean omc_NFInstContext_inInstanceAPI(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inInstanceAPI(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inInstanceAPI,2,0) {(void*) boxptr_NFInstContext_inInstanceAPI,0}};
#define boxvar_NFInstContext_inInstanceAPI MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inInstanceAPI)


DLLDirection
modelica_boolean omc_NFInstContext_inRelaxed(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_inRelaxed(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_inRelaxed,2,0) {(void*) boxptr_NFInstContext_inRelaxed,0}};
#define boxvar_NFInstContext_inRelaxed MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_inRelaxed)


DLLDirection
modelica_integer omc_NFInstContext_clearExpFlags(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_clearExpFlags(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_clearExpFlags,2,0) {(void*) boxptr_NFInstContext_clearExpFlags,0}};
#define boxvar_NFInstContext_clearExpFlags MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_clearExpFlags)


DLLDirection
modelica_integer omc_NFInstContext_clearScopeFlags(threadData_t *threadData, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInstContext_clearScopeFlags(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_clearScopeFlags,2,0) {(void*) boxptr_NFInstContext_clearScopeFlags,0}};
#define boxvar_NFInstContext_clearScopeFlags MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_clearScopeFlags)


DLLDirection
modelica_boolean omc_NFInstContext_isNotSet(threadData_t *threadData, modelica_integer _context, modelica_integer _flag);
DLLDirection
modelica_metatype boxptr_NFInstContext_isNotSet(threadData_t *threadData, modelica_metatype _context, modelica_metatype _flag);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_isNotSet,2,0) {(void*) boxptr_NFInstContext_isNotSet,0}};
#define boxvar_NFInstContext_isNotSet MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_isNotSet)


DLLDirection
modelica_boolean omc_NFInstContext_isSet(threadData_t *threadData, modelica_integer _context, modelica_integer _flag);
DLLDirection
modelica_metatype boxptr_NFInstContext_isSet(threadData_t *threadData, modelica_metatype _context, modelica_metatype _flag);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_isSet,2,0) {(void*) boxptr_NFInstContext_isSet,0}};
#define boxvar_NFInstContext_isSet MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_isSet)


DLLDirection
modelica_integer omc_NFInstContext_unset(threadData_t *threadData, modelica_integer _context, modelica_integer _flag);
DLLDirection
modelica_metatype boxptr_NFInstContext_unset(threadData_t *threadData, modelica_metatype _context, modelica_metatype _flag);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_unset,2,0) {(void*) boxptr_NFInstContext_unset,0}};
#define boxvar_NFInstContext_unset MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_unset)


DLLDirection
modelica_integer omc_NFInstContext_set(threadData_t *threadData, modelica_integer _context, modelica_integer _flag);
DLLDirection
modelica_metatype boxptr_NFInstContext_set(threadData_t *threadData, modelica_metatype _context, modelica_metatype _flag);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstContext_set,2,0) {(void*) boxptr_NFInstContext_set,0}};
#define boxvar_NFInstContext_set MMC_REFSTRUCTLIT(boxvar_lit_NFInstContext_set)

#ifdef __cplusplus
}
#endif
#endif
