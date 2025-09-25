#ifndef HashTableMidVar__H
#define HashTableMidVar__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_HashTableMidVar_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_HashTableMidVar_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableMidVar_emptyHashTableSized,2,0) {(void*) boxptr_HashTableMidVar_emptyHashTableSized,0}};
#define boxvar_HashTableMidVar_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_HashTableMidVar_emptyHashTableSized)


DLLDirection
modelica_metatype omc_HashTableMidVar_emptyHashTable(threadData_t *threadData);
#define boxptr_HashTableMidVar_emptyHashTable omc_HashTableMidVar_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableMidVar_emptyHashTable,2,0) {(void*) boxptr_HashTableMidVar_emptyHashTable,0}};
#define boxvar_HashTableMidVar_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_HashTableMidVar_emptyHashTable)

#ifdef __cplusplus
}
#endif
#endif
