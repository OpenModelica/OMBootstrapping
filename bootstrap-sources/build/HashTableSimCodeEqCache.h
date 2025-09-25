#ifndef HashTableSimCodeEqCache__H
#define HashTableSimCodeEqCache__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_HashTableSimCodeEqCache_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_HashTableSimCodeEqCache_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableSimCodeEqCache_emptyHashTableSized,2,0) {(void*) boxptr_HashTableSimCodeEqCache_emptyHashTableSized,0}};
#define boxvar_HashTableSimCodeEqCache_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_HashTableSimCodeEqCache_emptyHashTableSized)


DLLDirection
modelica_metatype omc_HashTableSimCodeEqCache_emptyHashTable(threadData_t *threadData);
#define boxptr_HashTableSimCodeEqCache_emptyHashTable omc_HashTableSimCodeEqCache_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableSimCodeEqCache_emptyHashTable,2,0) {(void*) boxptr_HashTableSimCodeEqCache_emptyHashTable,0}};
#define boxvar_HashTableSimCodeEqCache_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_HashTableSimCodeEqCache_emptyHashTable)

#ifdef __cplusplus
}
#endif
#endif
