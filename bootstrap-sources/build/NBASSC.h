#ifndef NBASSC__H
#define NBASSC__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
void omc_NBASSC_printMatrix(threadData_t *threadData);
#define boxptr_NBASSC_printMatrix omc_NBASSC_printMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_printMatrix,2,0) {(void*) boxptr_NBASSC_printMatrix,0}};
#define boxvar_NBASSC_printMatrix MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_printMatrix)

extern void ASSC_printMatrix();

DLLDirection
void omc_NBASSC_freeMatrix(threadData_t *threadData);
#define boxptr_NBASSC_freeMatrix omc_NBASSC_freeMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_freeMatrix,2,0) {(void*) boxptr_NBASSC_freeMatrix,0}};
#define boxvar_NBASSC_freeMatrix MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_freeMatrix)

extern void ASSC_freeMatrix();

DLLDirection
void omc_NBASSC_setMatrix(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_integer _nz, modelica_metatype _adj, modelica_metatype _val);
DLLDirection
void boxptr_NBASSC_setMatrix(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _nz, modelica_metatype _adj, modelica_metatype _val);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_setMatrix,2,0) {(void*) boxptr_NBASSC_setMatrix,0}};
#define boxvar_NBASSC_setMatrix MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_setMatrix)

extern void ASSC_setMatrix(int /*_nv*/, int /*_ne*/, int /*_nz*/, modelica_metatype /*_adj*/, modelica_metatype /*_val*/);

DLLDirection
void omc_NBASSC_main(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _vars);
#define boxptr_NBASSC_main omc_NBASSC_main
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBASSC_main,2,0) {(void*) boxptr_NBASSC_main,0}};
#define boxvar_NBASSC_main MMC_REFSTRUCTLIT(boxvar_lit_NBASSC_main)

#ifdef __cplusplus
}
#endif
#endif
