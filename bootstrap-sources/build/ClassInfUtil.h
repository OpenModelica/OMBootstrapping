#ifndef ClassInfUtil__H
#define ClassInfUtil__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description ClassInf_State_BLOCK__desc;

extern struct record_description ClassInf_State_CONNECTOR__desc;

extern struct record_description ClassInf_State_ENUMERATION__desc;

extern struct record_description ClassInf_State_FUNCTION__desc;

extern struct record_description ClassInf_State_HAS__RESTRICTIONS__desc;

extern struct record_description ClassInf_State_META__RECORD__desc;

extern struct record_description ClassInf_State_META__UNIONTYPE__desc;

extern struct record_description ClassInf_State_MODEL__desc;

extern struct record_description ClassInf_State_OPTIMIZATION__desc;

extern struct record_description ClassInf_State_PACKAGE__desc;

extern struct record_description ClassInf_State_RECORD__desc;

extern struct record_description ClassInf_State_TYPE__desc;

extern struct record_description ClassInf_State_TYPE__BOOL__desc;

extern struct record_description ClassInf_State_TYPE__CLOCK__desc;

extern struct record_description ClassInf_State_TYPE__ENUM__desc;

extern struct record_description ClassInf_State_TYPE__INTEGER__desc;

extern struct record_description ClassInf_State_TYPE__REAL__desc;

extern struct record_description ClassInf_State_TYPE__STRING__desc;

extern struct record_description ClassInf_State_UNKNOWN__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;


DLLModelDirection
modelica_boolean omc_ClassInfUtil_isMetaRecord(threadData_t *threadData, modelica_metatype _inState);
DLLModelDirection
modelica_metatype boxptr_ClassInfUtil_isMetaRecord(threadData_t *threadData, modelica_metatype _inState);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_isMetaRecord,2,0) {(void*) boxptr_ClassInfUtil_isMetaRecord,0}};
#define boxvar_ClassInfUtil_isMetaRecord MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_isMetaRecord)


DLLModelDirection
modelica_boolean omc_ClassInfUtil_isRecord(threadData_t *threadData, modelica_metatype _inState);
DLLModelDirection
modelica_metatype boxptr_ClassInfUtil_isRecord(threadData_t *threadData, modelica_metatype _inState);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_isRecord,2,0) {(void*) boxptr_ClassInfUtil_isRecord,0}};
#define boxvar_ClassInfUtil_isRecord MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_isRecord)


DLLModelDirection
modelica_boolean omc_ClassInfUtil_isTypeOrRecord(threadData_t *threadData, modelica_metatype _inState);
DLLModelDirection
modelica_metatype boxptr_ClassInfUtil_isTypeOrRecord(threadData_t *threadData, modelica_metatype _inState);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_isTypeOrRecord,2,0) {(void*) boxptr_ClassInfUtil_isTypeOrRecord,0}};
#define boxvar_ClassInfUtil_isTypeOrRecord MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_isTypeOrRecord)


DLLModelDirection
modelica_boolean omc_ClassInfUtil_isBasicTypeComponentName(threadData_t *threadData, modelica_string _name);
DLLModelDirection
modelica_metatype boxptr_ClassInfUtil_isBasicTypeComponentName(threadData_t *threadData, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_isBasicTypeComponentName,2,0) {(void*) boxptr_ClassInfUtil_isBasicTypeComponentName,0}};
#define boxvar_ClassInfUtil_isBasicTypeComponentName MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_isBasicTypeComponentName)


DLLModelDirection
void omc_ClassInfUtil_isConnector(threadData_t *threadData, modelica_metatype _inState);
#define boxptr_ClassInfUtil_isConnector omc_ClassInfUtil_isConnector
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_isConnector,2,0) {(void*) boxptr_ClassInfUtil_isConnector,0}};
#define boxvar_ClassInfUtil_isConnector MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_isConnector)


DLLModelDirection
modelica_boolean omc_ClassInfUtil_isFunctionOrRecord(threadData_t *threadData, modelica_metatype _inState);
DLLModelDirection
modelica_metatype boxptr_ClassInfUtil_isFunctionOrRecord(threadData_t *threadData, modelica_metatype _inState);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_isFunctionOrRecord,2,0) {(void*) boxptr_ClassInfUtil_isFunctionOrRecord,0}};
#define boxvar_ClassInfUtil_isFunctionOrRecord MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_isFunctionOrRecord)


DLLModelDirection
modelica_boolean omc_ClassInfUtil_isFunction(threadData_t *threadData, modelica_metatype _inState);
DLLModelDirection
modelica_metatype boxptr_ClassInfUtil_isFunction(threadData_t *threadData, modelica_metatype _inState);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_isFunction,2,0) {(void*) boxptr_ClassInfUtil_isFunction,0}};
#define boxvar_ClassInfUtil_isFunction MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_isFunction)


DLLModelDirection
modelica_boolean omc_ClassInfUtil_matchingState(threadData_t *threadData, modelica_metatype _inState, modelica_metatype _inStateLst);
DLLModelDirection
modelica_metatype boxptr_ClassInfUtil_matchingState(threadData_t *threadData, modelica_metatype _inState, modelica_metatype _inStateLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_matchingState,2,0) {(void*) boxptr_ClassInfUtil_matchingState,0}};
#define boxvar_ClassInfUtil_matchingState MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_matchingState)


DLLModelDirection
modelica_metatype omc_ClassInfUtil_assertTrans(threadData_t *threadData, modelica_metatype _inState, modelica_metatype _event, modelica_metatype _info);
#define boxptr_ClassInfUtil_assertTrans omc_ClassInfUtil_assertTrans
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_assertTrans,2,0) {(void*) boxptr_ClassInfUtil_assertTrans,0}};
#define boxvar_ClassInfUtil_assertTrans MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_assertTrans)


DLLModelDirection
void omc_ClassInfUtil_assertValid(threadData_t *threadData, modelica_metatype _inState, modelica_metatype _inRestriction, modelica_metatype _info);
#define boxptr_ClassInfUtil_assertValid omc_ClassInfUtil_assertValid
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_assertValid,2,0) {(void*) boxptr_ClassInfUtil_assertValid,0}};
#define boxvar_ClassInfUtil_assertValid MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_assertValid)


DLLModelDirection
void omc_ClassInfUtil_valid(threadData_t *threadData, modelica_metatype _inState, modelica_metatype _inRestriction);
#define boxptr_ClassInfUtil_valid omc_ClassInfUtil_valid
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_valid,2,0) {(void*) boxptr_ClassInfUtil_valid,0}};
#define boxvar_ClassInfUtil_valid MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_valid)


DLLModelDirection
modelica_metatype omc_ClassInfUtil_trans(threadData_t *threadData, modelica_metatype _inState, modelica_metatype _inEvent);
#define boxptr_ClassInfUtil_trans omc_ClassInfUtil_trans
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_trans,2,0) {(void*) boxptr_ClassInfUtil_trans,0}};
#define boxvar_ClassInfUtil_trans MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_trans)


#define boxptr_ClassInfUtil_start__dispatch omc_ClassInfUtil_start__dispatch


DLLModelDirection
modelica_metatype omc_ClassInfUtil_start(threadData_t *threadData, modelica_metatype _inRestriction, modelica_metatype _inPath);
#define boxptr_ClassInfUtil_start omc_ClassInfUtil_start
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_start,2,0) {(void*) boxptr_ClassInfUtil_start,0}};
#define boxvar_ClassInfUtil_start MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_start)


#define boxptr_ClassInfUtil_printEventStr omc_ClassInfUtil_printEventStr


DLLModelDirection
modelica_metatype omc_ClassInfUtil_getStateName(threadData_t *threadData, modelica_metatype _inState);
#define boxptr_ClassInfUtil_getStateName omc_ClassInfUtil_getStateName
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_getStateName,2,0) {(void*) boxptr_ClassInfUtil_getStateName,0}};
#define boxvar_ClassInfUtil_getStateName MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_getStateName)


DLLModelDirection
void omc_ClassInfUtil_printState(threadData_t *threadData, modelica_metatype _inState);
#define boxptr_ClassInfUtil_printState omc_ClassInfUtil_printState
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_printState,2,0) {(void*) boxptr_ClassInfUtil_printState,0}};
#define boxvar_ClassInfUtil_printState MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_printState)


DLLModelDirection
modelica_string omc_ClassInfUtil_printStateStr(threadData_t *threadData, modelica_metatype _inState);
#define boxptr_ClassInfUtil_printStateStr omc_ClassInfUtil_printStateStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_ClassInfUtil_printStateStr,2,0) {(void*) boxptr_ClassInfUtil_printStateStr,0}};
#define boxvar_ClassInfUtil_printStateStr MMC_REFSTRUCTLIT(boxvar_lit_ClassInfUtil_printStateStr)

#ifdef __cplusplus
}
#endif
#endif
