#ifndef HashTableCrIntToExp__H
#define HashTableCrIntToExp__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_HashTableCrIntToExp_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_HashTableCrIntToExp_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_emptyHashTableSized,2,0) {(void*) boxptr_HashTableCrIntToExp_emptyHashTableSized,0}};
#define boxvar_HashTableCrIntToExp_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_emptyHashTableSized)


DLLDirection
modelica_metatype omc_HashTableCrIntToExp_emptyHashTable(threadData_t *threadData);
#define boxptr_HashTableCrIntToExp_emptyHashTable omc_HashTableCrIntToExp_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_emptyHashTable,2,0) {(void*) boxptr_HashTableCrIntToExp_emptyHashTable,0}};
#define boxvar_HashTableCrIntToExp_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_emptyHashTable)


#define boxptr_HashTableCrIntToExp_printKey omc_HashTableCrIntToExp_printKey

#ifdef __cplusplus
}
#endif
#endif
