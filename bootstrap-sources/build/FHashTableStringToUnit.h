#ifndef FHashTableStringToUnit__H
#define FHashTableStringToUnit__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_FHashTableStringToUnit_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_FHashTableStringToUnit_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FHashTableStringToUnit_emptyHashTableSized,2,0) {(void*) boxptr_FHashTableStringToUnit_emptyHashTableSized,0}};
#define boxvar_FHashTableStringToUnit_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_FHashTableStringToUnit_emptyHashTableSized)


DLLDirection
modelica_metatype omc_FHashTableStringToUnit_emptyHashTable(threadData_t *threadData);
#define boxptr_FHashTableStringToUnit_emptyHashTable omc_FHashTableStringToUnit_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_FHashTableStringToUnit_emptyHashTable,2,0) {(void*) boxptr_FHashTableStringToUnit_emptyHashTable,0}};
#define boxvar_FHashTableStringToUnit_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_FHashTableStringToUnit_emptyHashTable)

#ifdef __cplusplus
}
#endif
#endif
