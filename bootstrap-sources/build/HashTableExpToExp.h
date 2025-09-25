#ifndef HashTableExpToExp__H
#define HashTableExpToExp__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_HashTableExpToExp_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_HashTableExpToExp_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableExpToExp_emptyHashTableSized,2,0) {(void*) boxptr_HashTableExpToExp_emptyHashTableSized,0}};
#define boxvar_HashTableExpToExp_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_HashTableExpToExp_emptyHashTableSized)


DLLDirection
modelica_metatype omc_HashTableExpToExp_emptyHashTable(threadData_t *threadData);
#define boxptr_HashTableExpToExp_emptyHashTable omc_HashTableExpToExp_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableExpToExp_emptyHashTable,2,0) {(void*) boxptr_HashTableExpToExp_emptyHashTable,0}};
#define boxvar_HashTableExpToExp_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_HashTableExpToExp_emptyHashTable)

#ifdef __cplusplus
}
#endif
#endif
