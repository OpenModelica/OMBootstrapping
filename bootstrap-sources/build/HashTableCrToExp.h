#ifndef HashTableCrToExp__H
#define HashTableCrToExp__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_HashTableCrToExp_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_HashTableCrToExp_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrToExp_emptyHashTableSized,2,0) {(void*) boxptr_HashTableCrToExp_emptyHashTableSized,0}};
#define boxvar_HashTableCrToExp_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrToExp_emptyHashTableSized)


DLLDirection
modelica_metatype omc_HashTableCrToExp_emptyHashTable(threadData_t *threadData);
#define boxptr_HashTableCrToExp_emptyHashTable omc_HashTableCrToExp_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrToExp_emptyHashTable,2,0) {(void*) boxptr_HashTableCrToExp_emptyHashTable,0}};
#define boxvar_HashTableCrToExp_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrToExp_emptyHashTable)

#ifdef __cplusplus
}
#endif
#endif
