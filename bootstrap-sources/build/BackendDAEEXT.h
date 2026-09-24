#ifndef BackendDAEEXT__H
#define BackendDAEEXT__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLModelDirection
modelica_boolean omc_BackendDAEEXT_setAssignment(threadData_t *threadData, modelica_integer _lenass1, modelica_integer _lenass2, modelica_metatype _ass1, modelica_metatype _ass2);
DLLModelDirection
modelica_metatype boxptr_BackendDAEEXT_setAssignment(threadData_t *threadData, modelica_metatype _lenass1, modelica_metatype _lenass2, modelica_metatype _ass1, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setAssignment,2,0) {(void*) boxptr_BackendDAEEXT_setAssignment,0}};
#define boxvar_BackendDAEEXT_setAssignment MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setAssignment)

extern int BackendDAEEXT_setAssignment(int /*_lenass1*/, int /*_lenass2*/, modelica_metatype /*_ass1*/, modelica_metatype /*_ass2*/);

DLLModelDirection
void omc_BackendDAEEXT_getAssignment(threadData_t *threadData, modelica_metatype _ass1, modelica_metatype _ass2);
#define boxptr_BackendDAEEXT_getAssignment omc_BackendDAEEXT_getAssignment
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getAssignment,2,0) {(void*) boxptr_BackendDAEEXT_getAssignment,0}};
#define boxvar_BackendDAEEXT_getAssignment MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getAssignment)

extern void BackendDAEEXT_getAssignment(modelica_metatype /*_ass1*/, modelica_metatype /*_ass2*/);

DLLModelDirection
void omc_BackendDAEEXT_matching(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_integer _matchingID, modelica_integer _cheapID, modelica_real _relabel_period, modelica_integer _clear_match);
DLLModelDirection
void boxptr_BackendDAEEXT_matching(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _matchingID, modelica_metatype _cheapID, modelica_metatype _relabel_period, modelica_metatype _clear_match);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_matching,2,0) {(void*) boxptr_BackendDAEEXT_matching,0}};
#define boxvar_BackendDAEEXT_matching MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_matching)

extern void BackendDAEEXT_matching(int /*_nv*/, int /*_ne*/, int /*_matchingID*/, int /*_cheapID*/, double /*_relabel_period*/, int /*_clear_match*/);

DLLModelDirection
void omc_BackendDAEEXT_setAdjacencyMatrixFlat(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_integer _nz, modelica_metatype _start, modelica_metatype _len, modelica_metatype _data);
DLLModelDirection
void boxptr_BackendDAEEXT_setAdjacencyMatrixFlat(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _nz, modelica_metatype _start, modelica_metatype _len, modelica_metatype _data);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setAdjacencyMatrixFlat,2,0) {(void*) boxptr_BackendDAEEXT_setAdjacencyMatrixFlat,0}};
#define boxvar_BackendDAEEXT_setAdjacencyMatrixFlat MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setAdjacencyMatrixFlat)

extern void BackendDAEEXT_setAdjacencyMatrixFlat(int /*_nv*/, int /*_ne*/, int /*_nz*/, modelica_metatype /*_start*/, modelica_metatype /*_len*/, modelica_metatype /*_data*/);

DLLModelDirection
void omc_BackendDAEEXT_setAdjacencyMatrix(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_integer _nz, modelica_metatype _m);
DLLModelDirection
void boxptr_BackendDAEEXT_setAdjacencyMatrix(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _nz, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setAdjacencyMatrix,2,0) {(void*) boxptr_BackendDAEEXT_setAdjacencyMatrix,0}};
#define boxvar_BackendDAEEXT_setAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setAdjacencyMatrix)

extern void BackendDAEEXT_setAdjacencyMatrix(int /*_nv*/, int /*_ne*/, int /*_nz*/, modelica_metatype /*_m*/);

DLLModelDirection
modelica_integer omc_BackendDAEEXT_getNumber(threadData_t *threadData, modelica_integer _inInteger);
DLLModelDirection
modelica_metatype boxptr_BackendDAEEXT_getNumber(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getNumber,2,0) {(void*) boxptr_BackendDAEEXT_getNumber,0}};
#define boxvar_BackendDAEEXT_getNumber MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getNumber)

extern int BackendDAEEXT_getNumber(int /*_inInteger*/);

DLLModelDirection
void omc_BackendDAEEXT_setNumber(threadData_t *threadData, modelica_integer _inInteger1, modelica_integer _inInteger2);
DLLModelDirection
void boxptr_BackendDAEEXT_setNumber(threadData_t *threadData, modelica_metatype _inInteger1, modelica_metatype _inInteger2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setNumber,2,0) {(void*) boxptr_BackendDAEEXT_setNumber,0}};
#define boxvar_BackendDAEEXT_setNumber MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setNumber)

extern void BackendDAEEXT_setNumber(int /*_inInteger1*/, int /*_inInteger2*/);

DLLModelDirection
modelica_integer omc_BackendDAEEXT_getLowLink(threadData_t *threadData, modelica_integer _inInteger);
DLLModelDirection
modelica_metatype boxptr_BackendDAEEXT_getLowLink(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getLowLink,2,0) {(void*) boxptr_BackendDAEEXT_getLowLink,0}};
#define boxvar_BackendDAEEXT_getLowLink MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getLowLink)

extern int BackendDAEEXT_getLowLink(int /*_inInteger*/);

DLLModelDirection
void omc_BackendDAEEXT_setLowLink(threadData_t *threadData, modelica_integer _inInteger1, modelica_integer _inInteger2);
DLLModelDirection
void boxptr_BackendDAEEXT_setLowLink(threadData_t *threadData, modelica_metatype _inInteger1, modelica_metatype _inInteger2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setLowLink,2,0) {(void*) boxptr_BackendDAEEXT_setLowLink,0}};
#define boxvar_BackendDAEEXT_setLowLink MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_setLowLink)

extern void BackendDAEEXT_setLowLink(int /*_inInteger1*/, int /*_inInteger2*/);

DLLModelDirection
void omc_BackendDAEEXT_initNumber(threadData_t *threadData, modelica_integer _inInteger);
DLLModelDirection
void boxptr_BackendDAEEXT_initNumber(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_initNumber,2,0) {(void*) boxptr_BackendDAEEXT_initNumber,0}};
#define boxvar_BackendDAEEXT_initNumber MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_initNumber)

extern void BackendDAEEXT_initNumber(int /*_inInteger*/);

DLLModelDirection
void omc_BackendDAEEXT_initLowLink(threadData_t *threadData, modelica_integer _inInteger);
DLLModelDirection
void boxptr_BackendDAEEXT_initLowLink(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_initLowLink,2,0) {(void*) boxptr_BackendDAEEXT_initLowLink,0}};
#define boxvar_BackendDAEEXT_initLowLink MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_initLowLink)

extern void BackendDAEEXT_initLowLink(int /*_inInteger*/);

DLLModelDirection
modelica_metatype omc_BackendDAEEXT_getMarkedVariables(threadData_t *threadData);
#define boxptr_BackendDAEEXT_getMarkedVariables omc_BackendDAEEXT_getMarkedVariables
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getMarkedVariables,2,0) {(void*) boxptr_BackendDAEEXT_getMarkedVariables,0}};
#define boxvar_BackendDAEEXT_getMarkedVariables MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getMarkedVariables)

extern modelica_metatype BackendDAEEXT_getMarkedVariables();

DLLModelDirection
void omc_BackendDAEEXT_markDifferentiated(threadData_t *threadData, modelica_integer _inInteger);
DLLModelDirection
void boxptr_BackendDAEEXT_markDifferentiated(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_markDifferentiated,2,0) {(void*) boxptr_BackendDAEEXT_markDifferentiated,0}};
#define boxvar_BackendDAEEXT_markDifferentiated MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_markDifferentiated)

extern void BackendDAEEXT_markDifferentiated(int /*_inInteger*/);

DLLModelDirection
void omc_BackendDAEEXT_clearDifferentiated(threadData_t *threadData);
#define boxptr_BackendDAEEXT_clearDifferentiated omc_BackendDAEEXT_clearDifferentiated
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_clearDifferentiated,2,0) {(void*) boxptr_BackendDAEEXT_clearDifferentiated,0}};
#define boxvar_BackendDAEEXT_clearDifferentiated MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_clearDifferentiated)

extern void BackendDAEEXT_clearDifferentiated();

DLLModelDirection
modelica_metatype omc_BackendDAEEXT_getDifferentiatedEqns(threadData_t *threadData);
#define boxptr_BackendDAEEXT_getDifferentiatedEqns omc_BackendDAEEXT_getDifferentiatedEqns
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getDifferentiatedEqns,2,0) {(void*) boxptr_BackendDAEEXT_getDifferentiatedEqns,0}};
#define boxvar_BackendDAEEXT_getDifferentiatedEqns MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getDifferentiatedEqns)

extern modelica_metatype BackendDAEEXT_getDifferentiatedEqns();

DLLModelDirection
modelica_metatype omc_BackendDAEEXT_getMarkedEqns(threadData_t *threadData);
#define boxptr_BackendDAEEXT_getMarkedEqns omc_BackendDAEEXT_getMarkedEqns
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getMarkedEqns,2,0) {(void*) boxptr_BackendDAEEXT_getMarkedEqns,0}};
#define boxvar_BackendDAEEXT_getMarkedEqns MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getMarkedEqns)

extern modelica_metatype BackendDAEEXT_getMarkedEqns();

DLLModelDirection
modelica_boolean omc_BackendDAEEXT_getVMark(threadData_t *threadData, modelica_integer _inInteger);
DLLModelDirection
modelica_metatype boxptr_BackendDAEEXT_getVMark(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getVMark,2,0) {(void*) boxptr_BackendDAEEXT_getVMark,0}};
#define boxvar_BackendDAEEXT_getVMark MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_getVMark)

extern int BackendDAEEXT_getVMark(int /*_inInteger*/);

DLLModelDirection
void omc_BackendDAEEXT_vMark(threadData_t *threadData, modelica_integer _inInteger);
DLLModelDirection
void boxptr_BackendDAEEXT_vMark(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_vMark,2,0) {(void*) boxptr_BackendDAEEXT_vMark,0}};
#define boxvar_BackendDAEEXT_vMark MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_vMark)

extern void BackendDAEEXT_vMark(int /*_inInteger*/);

DLLModelDirection
void omc_BackendDAEEXT_eMark(threadData_t *threadData, modelica_integer _inInteger);
DLLModelDirection
void boxptr_BackendDAEEXT_eMark(threadData_t *threadData, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_eMark,2,0) {(void*) boxptr_BackendDAEEXT_eMark,0}};
#define boxvar_BackendDAEEXT_eMark MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_eMark)

extern void BackendDAEEXT_eMark(int /*_inInteger*/);

DLLModelDirection
void omc_BackendDAEEXT_initMarks(threadData_t *threadData, modelica_integer _inInteger1, modelica_integer _inInteger2);
DLLModelDirection
void boxptr_BackendDAEEXT_initMarks(threadData_t *threadData, modelica_metatype _inInteger1, modelica_metatype _inInteger2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAEEXT_initMarks,2,0) {(void*) boxptr_BackendDAEEXT_initMarks,0}};
#define boxvar_BackendDAEEXT_initMarks MMC_REFSTRUCTLIT(boxvar_lit_BackendDAEEXT_initMarks)

extern void BackendDAEEXT_initMarks(int /*_inInteger1*/, int /*_inInteger2*/);

#ifdef __cplusplus
}
#endif
#endif
