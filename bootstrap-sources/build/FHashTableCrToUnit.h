#ifndef FHashTableCrToUnit__H
#define FHashTableCrToUnit__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_FHashTableCrToUnit_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_FHashTableCrToUnit_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FHashTableCrToUnit_emptyHashTableSized,2,0) {(void*) boxptr_FHashTableCrToUnit_emptyHashTableSized,0}};
#define boxvar_FHashTableCrToUnit_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_FHashTableCrToUnit_emptyHashTableSized)


DLLDirection
modelica_metatype omc_FHashTableCrToUnit_emptyHashTable(threadData_t *threadData);
#define boxptr_FHashTableCrToUnit_emptyHashTable omc_FHashTableCrToUnit_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_FHashTableCrToUnit_emptyHashTable,2,0) {(void*) boxptr_FHashTableCrToUnit_emptyHashTable,0}};
#define boxvar_FHashTableCrToUnit_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_FHashTableCrToUnit_emptyHashTable)

#ifdef __cplusplus
}
#endif
#endif
